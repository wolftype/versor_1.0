//
//  vsr_egl.h
//  Versor
//  EGL wrapper (for raspberry pi, etc)
//  Created by Pablo Colapinto on 1/24/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#ifndef gfx_egl_h
#define gfx_egl_h

//in debians /opt/vc/include/

#include <iostream>
#include <string.h>

#include <bcm_host.h>
#include <EGL/egl.h>
#include <map>
#include <vector>

using namespace std;

namespace gfx {

    namespace EGL {
    
        static EGLBoolean State;
    
        inline void Error(string s){
            if (State == EGL_FALSE){
                // cout << "ERROR: " << s << endl; 
            }
        }
        
        enum Attrib {
            Buffer      = EGL_BUFFER_SIZE,
            Red         = EGL_RED_SIZE,
            Green       = EGL_GREEN_SIZE,
            Blue        = EGL_BLUE_SIZE,
            Alpha       = EGL_ALPHA_SIZE,
            ConfigCav   = EGL_CONFIG_CAVEAT,
            ConfigId    = EGL_CONFIG_ID,
            Depth       = EGL_DEPTH_SIZE,
            PBufferH     = EGL_MAX_PBUFFER_HEIGHT,
            PBufferW     = EGL_MAX_PBUFFER_WIDTH,
            PBufferP     = EGL_MAX_PBUFFER_PIXELS,
            Renderable  = EGL_NATIVE_RENDERABLE,
            VisualId    = EGL_NATIVE_VISUAL_ID,
            VisualType  = EGL_NATIVE_VISUAL_TYPE,
            SampleBuf   = EGL_SAMPLE_BUFFERS,
            Samples     = EGL_SAMPLES,
            SurfaceType  = EGL_SURFACE_TYPE,
            Transparent = EGL_TRANSPARENT_TYPE,
            None        = EGL_NONE,
            Slow        = EGL_SLOW_CONFIG
        };
        
        struct Display  {
            EGLDisplay display;
            int majorVersion, minorVersion;

            Display(){ init(); }
            
            ~Display(){ State = eglTerminate(display); Error("Terminate Display"); }
            
            void init(){
                display = eglGetDisplay( EGL_DEFAULT_DISPLAY );

                State = eglInitialize( display, &majorVersion, &minorVersion); Error("egl initialize");
                
                // cout << "EGL VERSION: " << majorVersion << "." << minorVersion <<  endl; 

            }
        };
        
        //A Window Surface
        struct Surface {

            EGLSurface surface;            
            EGLDisplay * display;

            DISPMANX_ELEMENT_HANDLE_T dispmanElement;
            DISPMANX_DISPLAY_HANDLE_T dispmanDisplay;
            DISPMANX_UPDATE_HANDLE_T dispmanUpdate;

            EGL_DISPMANX_WINDOW_T nativeWindow;

            uint32_t width, height, maxWidth, maxHeight;
            VC_RECT_T src, dst;
            bool bUpscale;
            
            Surface() : bUpscale(false) {}
            ~Surface() {
                State = eglDestroySurface(*display, surface ); Error("Destroy Surface Destructor");
            }
            
            void init(EGLDisplay& display, EGLConfig& config){
                // static EGL_DISPMANX_WINDOW_T nativeWindow;

                int32_t suc = 0;
                suc = graphics_get_display_size(0 , &width, &height);
				//width = 1920; height = 1080;
				maxWidth = width; maxHeight = height;
				
				cout << "SCEEN DIM: " << width << " x " << height << endl;

                uint32_t x = 0; 
                uint32_t y = 0;
                uint32_t w = width; 
                uint32_t h = height;

                dst.x = x;
                dst.y = y;
                if(bUpscale == false){
                 dst.width = w;
                 dst.height = h;
                } else {
                 dst.width = maxWidth;
                 dst.height = maxHeight;
                }
                
                src.x = 0;
                src.y = 0;
                src.width = w << 16;
                src.height = h << 16;

                dispmanDisplay = vc_dispmanx_display_open(0);
                dispmanUpdate = vc_dispmanx_update_start(0);
                dispmanElement = vc_dispmanx_element_add ( dispmanUpdate, dispmanDisplay,
                 0, &dst, 0,&src, DISPMANX_PROTECTION_NONE, 0 ,0,DISPMANX_NO_ROTATE);
                 
                nativeWindow.element = dispmanElement;
                nativeWindow.width =w;
                nativeWindow.height =h;

                vc_dispmanx_update_submit_sync( dispmanUpdate );


                surface = eglCreateWindowSurface( display, config, &nativeWindow, NULL );
            }
                        
        };
        
//		struct SurfaceArray

        //SET UP BRIDGE BETWEEN OPENGL'S OUTPUT AND DEVICE SCREEN
        struct Config {
        
                
                EGLConfig * config;
                EGLint numConfig;
                int mIdx;
                
//                EGLConfig& operator ()() { return config[mIdx]; }

                map< Attrib, EGLint > attributes;
                
                EGLConfig& operator [] (int idx) { return config[idx]; }
                
                EGLDisplay * display;
                
                Config(Display * d) : display(& (d->display) ), mIdx(0) {  init(); }

                void choose(){
                    vector<EGLint> attribs;
                    std::map<Attrib,EGLint>::const_iterator it;
                    
                    for (it = attributes.begin(); it != attributes.end(); it++){
                        attribs.push_back(it->first);
                        attribs.push_back(it->second);
                    }
                    attribs.push_back(None); 
                    
                    State = eglChooseConfig( *display, &attribs[0], &config[mIdx], 1, &numConfig);  Error("Choose Configs");
//                    eglChooseConfigs()
                }
        
                EGLint get(int idx, Attrib a) {
                    EGLint val;
                    State = eglGetConfigAttrib( *display, config[idx], a, &val); Error("Get Config Attrib");
                    return val;
                }
        
                void init(){
                
                    State = eglGetConfigs( *display, NULL, 0, &numConfig );
                    Error("egl get configs");
                    
                    // cout << "NUM CONFIGS: " << numConfig << endl; 
                    
                    config = new EGLConfig[ numConfig ];
                    State = eglGetConfigs( *display, config, numConfig, &numConfig );
                    Error("egl copy configs");
                
                   // EGLint value;
                    
                    for(int i=0; i<numConfig; ++i){
                    
                        
                        // cout<<"Config #"<<i<<"\n";
                        // cout << "Buffer: " << get(i, Buffer) << "\n";
                        // cout << "Red: " << get(i, Red) << "\n";
                        // cout << "Green: " << get(i, Green) << "\n";
                        // cout << "Blue: " << get(i, Blue) << "\n";
                        // cout << "Alpha: " << get(i, Alpha) << "\n";
                        
                        EGLint var = get(i, ConfigCav);
                        
                        switch(var){
                            case  None :
                              // cout<<"ConfigCav EGL_NONE\n";
                              break;
                            case  Slow :
                              // cout<<"ConfigCav EGL_SLOW_CONFIG\n";
                              break;
                        }

                        // cout << "ConfigId: " << get(i, ConfigId) << "\n";
                        // cout << "Depth: " <<get(i, Depth) << "\n";
                        // cout << "PBufferW: " <<get(i, PBufferW) << "\n";
                        // cout << "PBufferH: " <<get(i, PBufferH) << "\n";
                        // cout << "PBufferP: " <<get(i, PBufferP) << "\n";
                        // cout << "Renderable: " <<get(i, Renderable) << "\n"; 
                        // cout << "VisualId: " <<get(i, VisualId) << "\n"; 
                        // cout << "VisualType: " <<get(i, VisualType) << "\n"; 
                        // cout << "SampleBuf: " <<get(i, SampleBuf) << "\n"; 
                        // cout << "Samples: " <<get(i, Samples) << "\n"; 
                        // cout << "Surface: " <<get(i, SurfaceType) << "\n"; 
                        // cout << "Transparent: " <<get(i, Transparent) << "\n"; 
                    }
                    
                    set();
                    choose();
                }
                
                void set(){
                    attributes[ Red ] = 8;
                    attributes[ Green ] = 8;
                    attributes[ Blue ] = 8;
                    attributes[ Alpha ] = 8;
                    attributes[SurfaceType] = EGL_WINDOW_BIT;
                }

        };


        
        struct Window {
                
                Display display;
                Surface surface;
                EGLContext context;
                Config config;                
                                 
                EGLBoolean swapBuffers(){
                    return eglSwapBuffers( display.display, surface.surface );
                }
                //init
                //adopted from http://jonmacey.blogspot.co.uk/2012/05/getting-started-with-egl-on-raspberry.html
                Window() : display(), config( &display ), surface()  {
                
                    bindAPI();
                    createContext();
                    
                    surface.init( display.display, config[0] );
                    
                    //tie it all together
                    State = eglMakeCurrent( display.display, surface.surface, surface.surface, context); Error("Make Current");
                
                }
                
                ~Window() {
                    swapBuffers();
                    State = eglMakeCurrent( display.display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT ); Error("Release Window");
                    State = eglDestroySurface( display.display, surface.surface ); Error ("Destory Surface");
                    State = eglDestroyContext( display.display, context ); Error("Destroy Context");
                    State = eglReleaseThread(); Error("Release Thread");
                }
                
                void bindAPI(){
                    State = eglBindAPI(EGL_OPENGL_ES_API); Error("Binding Api");
                }
                
                void createContext(){
                    // config you use OpenGL ES2.0 by default
                    static const EGLint contextAttrib[] =
                    {
                     EGL_CONTEXT_CLIENT_VERSION, 2,
                     EGL_NONE
                    };
                    
                    context = eglCreateContext( display.display, config[0], EGL_NO_CONTEXT, contextAttrib );
                }
                                                
                bool onResize(){
                
                }
                
                virtual void initGL() = 0;
                virtual void onDraw() = 0;
                virtual void onFrame() = 0;
                
//                {
//                    State = swapBuffers(); Error("SwapBuffers");
//                    onDraw();
//                }
                
        }; 

    } //egl ::
} //vsr ::




#endif
