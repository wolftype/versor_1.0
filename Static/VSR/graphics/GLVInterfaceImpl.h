//
//  GLVInterfaceImpl.h
//  vsr
//
//  Created by Pablo Colapinto on 3/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_GLVInterfaceImpl_h
#define vsr_GLVInterfaceImpl_h

#include "vsr.h"

//ABSTRACT BASE CLASS
#include "Interface.h"

//GLV SPECIFIC HEADERS
#include "GLV/glv.h"
#include "GLV/glv_binding.h"
#include "Gui.hpp"

//GL2PS
#include "gl2ps.h"


namespace vsr {
    
    using namespace glv;
    
    struct GLVView : public Interface::ViewImpl {
        
        Window * win;
        
        GLVView(Interface * i) : Interface::ViewImpl(i) {}
        
        virtual void fullScreenToggle(){
            printf("full screen toggle\n");
            win -> fullScreenToggle();            
        }
        virtual void getData(void * udata) {
            GLV& glv = *(GLV*)(udata);
            
            //COPY VIEW DATA
            interface -> vd().w		 = glv.width();
            interface -> vd().h		 = glv.height();

        }
        

    };
    
    struct GLVInput : public Interface::InputImpl {
        
        GLVInput(Interface * i) : Interface::InputImpl(i) {}
        
        virtual void getData(void * udata){
            GLV& glv = *(GLV*)(udata);
            
            //COPY KEYBOARD DATA
            interface -> keyboard.alt      = glv.keyboard().alt();
            interface -> keyboard.shift     = glv.keyboard().shift();
            interface -> keyboard.ctrl     = glv.keyboard().ctrl();
            interface -> keyboard.caps     = glv.keyboard().caps();
            interface -> keyboard.meta     = glv.keyboard().meta();	
            interface -> keyboard.code     = glv.keyboard().key();
            
            //COPY MOUSE DATA
            interface -> mouse.x		= glv.mouse().x();
            interface -> mouse.y		= glv.mouse().y();

            interface -> mouse.dx		= glv.mouse().dx() / glv.width();
            interface -> mouse.dy		=  - glv.mouse().dy() / glv.height();
            
            interface -> mouse.ddx		= glv.mouse().ddx();
            interface -> mouse.ddy		= glv.mouse().ddy();
            
            interface -> mouse.xrel     =  glv.mouse().xRel() / glv.width();
            interface -> mouse.yrel     = 1 - glv.mouse().yRel() / glv.height();
            
            interface -> mouse.pos     = Vec( glv.mouse().x() / glv.width(), 1 - glv.mouse().y() / glv.height(), 0 ) ;
            interface -> mouse.move	= Vec( glv.mouse().dx()/ glv.width(), - glv.mouse().dy()/glv.height(), 0 ) ;
            interface -> mouse.accel   = Vec( glv.mouse().ddx(), -glv.mouse().ddy(),0);
        }
    };
    
    class GLVInterface : public Interface {
        
    public:
        
        GLVInterface() : Interface() { init(); }
        
        GLVView& view() { return *(GLVView*)vimpl; }
        GLVInput& input() { return *(GLVInput*)iimpl; }
        
        virtual void init(){
            vimpl = new GLVView(this);
            iimpl = new GLVInput(this);
            
        }
    };
    
    
    struct GLVApp : public View3D{
        
        GLVInterface interface;
        Gui gui;
        map<string, Gui*> subgui;
        
        bool bPrintPS;
        
        MouseData& mouse() { return interface.mouse; }
        GLVView& view() { return interface.view(); }
        
        GLVApp(Window * win) : View3D(), bPrintPS(false) {
            
            interface.view().win = win;
            
            stretch(1,1);
            
            disable(DrawBorder);
            
            *this << gui;
        }
        
        virtual void onDraw();
        
        virtual void onDraw3D(GLV& glv){
            
            
            GL :: enablePreset();
            
            //Copy GLV's data into Interface controller view
            interface.view().getData(&glv);
            interface.view().fit();
            
            //Update Camera Physics
            camera().step();
                        
            //Update ModelView Physics
            camera().modelView().step();
            
            //Push into Active Camera Settings (viewport bit, etc)
            camera().push3D();
            
                //cout << "push" << endl; 
                //Default Color
                glColor3f(1,1,1);
                            
                interface.viewCalc();  
                onDraw();
                        
            camera().pop3D();
            
            GL :: disablePreset();
            
            if (bPrintPS){
                print();
                bPrintPS = false;
            }
        }
        
        void print(){
            interface.view().fit();
            GL::enablePreset();
            camera().push3D();
			//gl2ps();
            camera().pop3D();
            GL::disablePreset();
        }
        /*
        string printTikz(const State& s){
            interface.view().fit();
            camera().push3D();
                
            string ts = Print::Tikz(s, camera());
 //           string ts = Print::TikzPerspective(s, camera());
            camera().pop3D();
            
            return ts;
        }

        string printTikz(vector<State> pa){
            interface.view().fit();
            camera().push3D();
            
            string ts = Print::TikzSeg2(pa,  camera());
                //       string ts = Print::TikzPerspective(s, camera());
            camera().pop3D();
            
            return ts;
        }       
        
        string printTikz(const State& s, const State& pa, const State& pb){
            interface.view().fit();
            camera().push3D();
            
            string ts = Print::TikzSeg(s, pa, pb, camera());
            //           string ts = Print::TikzPerspective(s, camera());
            camera().pop3D();
            
            return ts;
        }       
      
        */
        
        /*
        const char *title, const char *producer, GLint viewport[4], 
        GLint format, GLint sort, GLint options, GLint colormode, 
        GLint colorsize, GL2PSrgba *colortable,
        GLint nr, GLint ng, GLint nb, GLint buffersize, FILE *stream, const char *filename )

        */
        
        
        /*
        virtual void gl2ps(){
            FILE *fp;
            int state = GL2PS_OVERFLOW, buffsize = 0;
            
            string name = File::images + "output/out.eps";
            fp = fopen("out.eps", "wb");
            
            printf("Writing 'out.eps'... ");
            GLint tv[4];
            glGetIntegerv(GL_VIEWPORT, tv);
            glPointSize(15);
            
            //gl2psEnable(GL2PS_BLEND);
            //	gl2psBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            //| GL2PS_NO_BLENDING 
            //| GL2PS_SIMPLE_LINE_OFFSET
            //
            
            //gl2psEnable( GL2PS_POLYGON_OFFSET_FILL );
            while(state == GL2PS_OVERFLOW){
                buffsize += 1024*1024;
                gl2psBeginPage("test", "gl2psTestSimple", tv , GL2PS_EPS, GL2PS_SIMPLE_SORT,//GL2PS_NO_SORT,//, //GL2PS_SIMPLE_SORT, 
                               GL2PS_TIGHT_BOUNDING_BOX | GL2PS_NO_PS3_SHADING | GL2PS_BEST_ROOT | GL2PS_NO_BLENDING | GL2PS_SIMPLE_LINE_OFFSET,// | GL2PS_BEST_ROOT, 
                               GL_RGBA, 0, NULL, 0, 0, 0, buffsize, fp, "out.eps");
                
                 onDraw();
                
                state = gl2psEndPage();
            }
            
            fclose(fp);
            printf("Done!\n");
        }
        */
      
        Camera& camera() { return interface.view().active(); }
        
        virtual bool onKeyDown(GLV& glv){
            switch( glv.keyboard().key() ){
                case 'v': bPrintPS = true;
                    break;
                case 'c':
                    camera().reset();
                    break;
                default:
                    break;                            
            }
        }
        
        virtual bool onEvent(Event::t e, GLV& glv){

            interface.input().getData(&glv);
            
            switch(e){
                case Event::MouseMove:
                    interface.onMouseMove();
                    break;
                case Event::MouseDown:
                    interface.onMouseDown();
                    break;
                case Event::MouseDrag:
                    interface.onMouseDrag();
                    break;
                case Event::MouseUp:
                    interface.onMouseUp();
                    break;
                case Event::KeyDown:
                    onKeyDown(glv);
                    interface.onKeyDown();
                    break;
                case Event::KeyUp:
                    interface.onKeyUp();
                    break;
                    
            }
            
            return false;
        }
        
                //scene descriptor
        void text(string s, int ow = 50, int oh = 100){
            draw::enter2D(w, h);
                glTranslated(ow,h-oh,0);
                glColor3f(1,1,1);
                draw::text( s.c_str() );
            //draw::pop2D();
        }
        
    };
    
    
    
    /*  SCENE GRAPH MODEL . . .
    
    struct GLVScene : public View3D {
        
        //void add(State * s) { interface.model -> add(s); }
        
        Camera& camera() { return interface.vimpl -> active(); }
        
        GLVScene(Window * w) : View3D() {
            
            interface.view().win = w;
            
            stretch(1,1);
            
            disable(DrawBorder);
        }
        
        virtual void onDraw3D(GLV& glv){
            //Update Camera Physics
            camera().step();
            
            //Update ModelView Physics
            camera().modelView().step();
            
            //Push into Active Camera Settings (viewport bit, etc)
            camera().push3D();
            
                //Default Color
                glColor3f(1,1,1);
                
                //Copy GLV's data into Interface controller
                interface.view().getData(&glv);
                
                //Conduct User Interface Tests
                interface.model -> touch();
                
                //Draw Multivectors to Scene
                interface.model -> draw();
            
            camera().pop3D();
        }
        
        virtual bool onEvent(Event::t e, GLV& glv){
            interface.iimpl -> getData(&glv);
            
            switch(e){
                case Event::MouseMove:
                    interface.onMouseMove();
                    break;
                case Event::MouseDown:
                    interface.onMouseDown();
                    break;
                case Event::MouseDrag:
                    interface.onMouseDrag();
                    break;
                case Event::MouseUp:
                    interface.onMouseUp();
                    break;
                case Event::KeyDown:
                    interface.onKeyDown();
                    break;
                case Event::KeyUp:
                    interface.onKeyUp();
                    break;
                    
            }
            
            return false;
        }
        
        GLVInterface interface;
        
    };
    */
} // vsr::
    
#endif
