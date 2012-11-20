//
//  AlloInterfaceImpl.h
//  vsr
/*
    Glue For passing Window, View, Keyboard, Mouse, state to Versor Library from AlloCore Library.
*/
//  Created by Pablo Colapinto on 3/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_GLVInterfaceImpl_h
#define vsr_GLVInterfaceImpl_h

//ABSTRACT BASE CLASS
#include "vsr_interface.h"
#include "allocore/al_allocore.hpp"
#include "vsr_allovsr.h"
#include "alloGLV/al_ControlGLV.hpp"

#include "vsr_gui.hpp"

//GL2PS
#include "gl2ps/gl2ps.h"


namespace vsr {
    
    using namespace al;
    
    //GLUE
    struct AlloView : public vsr::Interface::ViewImpl, public al::WindowEventHandler {
        
        //initialize with link to an interface controller object
        AlloView(Interface * i) : Interface::ViewImpl(i) {}
        
        virtual bool onFrame(){
            //Copy Scene View Data (move to impl.onFrame() )
            Mat4f t = interface -> scene().mvm();            
            std::copy(t.val(), t.val() + 16, interface -> scene().xf.modelView);
            
            Mat4f t2 = interface -> scene().proj();        
            std::copy(t2.val(), t2.val() + 16, interface -> scene().xf.proj);
            
            interface -> scene().xf.toDoubles();

            interface -> viewCalc();            
            return true;
        }        
                                
        virtual bool onResize(int dw, int dh){ 
            interface -> vd().w = window().width();
            interface -> vd().h = window().height();
            interface -> camera().lens().width() = interface -> vd().w;
            interface -> camera().lens().height() = interface -> vd().h;
            
            //move this to impl.onResize . . .
            interface -> scene().xf.viewport[0] = interface -> scene().xf.viewport[1] = 0;
            interface -> scene().xf.viewport[2] = interface -> vd().w;
            interface -> scene().xf.viewport[3] = interface -> vd().h;

            fit();            
            return true; 
        }            

    };
        

    struct AlloInput : public vsr::Interface::InputImpl, public al::InputEventHandler {
        
        AlloInput(Interface * i) : Interface::InputImpl(i)  {}
        
        //get data from al window
        virtual void getKeyboardData(const Keyboard &k){
            
            //COPY KEYBOARD DATA
            interface -> keyboard.alt      = k.alt();
            interface -> keyboard.shift     = k.shift();
            interface -> keyboard.ctrl     = k.ctrl();
            interface -> keyboard.caps     = k.caps();
            interface -> keyboard.meta     = k.meta();	
            interface -> keyboard.code     = k.key();
        }
        
        virtual void getMouseData(const Mouse& m){


            //COPY MOUSE DATA
            interface -> mouse.x		= m.x();
            interface -> mouse.y		= m.y();

            interface -> mouse.dx		= m.dx() / interface -> vd().w;
            interface -> mouse.dy		= -m.dy() / interface -> vd().h;
            

        }
        
        //Pass events to interface controller
        virtual bool onKeyDown(const Keyboard& k ){
            getKeyboardData(k);
            interface->onKeyDown();
            return true;
        }
        virtual bool onKeyUp(const Keyboard& k){
            getKeyboardData(k);
            interface->onKeyUp();        
        }
        
        virtual bool onMouseMove(const Mouse& m){
            getMouseData(m);
            interface->onMouseMove();
        }
        virtual bool onMouseDown(const Mouse& m){
            getMouseData(m);
            interface->onMouseDown();
        }
        virtual bool onMouseUp(const Mouse& m){
            getMouseData(m);
            interface->onMouseUp();        
        }
        virtual bool onMouseDrag(const Mouse& m){
            getMouseData(m);
            interface->onMouseDrag();
        }
    };
    
    class AlloInterface : public Interface {
        
    public:
        
        AlloInterface() : Interface() { init(); }
        
        AlloView& view() { return *(AlloView*)vimpl; }
        AlloInput& input() { return *(AlloInput*)iimpl; }
        
        virtual void init(){
            vimpl = new AlloView(this);
            iimpl = new AlloInput(this);
            
        }

    };
    
    //A GLV Object with built in GUI for easy prototyping
    struct AlloGLVGui : public GLVDetachable {
        AlloGLVGui() : GLVDetachable() { *this << gui; }
        glv::Gui gui;
    };
    
    /*! Application implementation 
    */
    struct AlloApp : public Window, public al::Drawable {
        
        AlloInterface interface;
        AlloGLVGui glv;

        Graphics gl;
        al::Lens lens;

        //Renderer
        Stereographic stereo;
                
        //al::Window has a mouse too so i call mine "imouse". . .
        MouseData& imouse() { return interface.mouse; }
        AlloView& view() { return interface.view(); }
        
        Scene& scene() { return interface.scene(); }
        Camera& camera() { return interface.camera(); }
        Frame& model() { return interface.model(); }
        

        AlloApp() : Window() {
            lens.fovy(60);
            add(new StandardWindowKeyControls);
            add(&interface.input());
            add(&interface.view());
            glv.parentWindow(*this);
        }
        
        
        AlloApp(Window * win) : Window() {
            lens.fovy(60);
            add(new StandardWindowKeyControls);
            add(&interface.input());
            add(&interface.view());
            glv.parentWindow(*this);
        }
        
        virtual void onDraw(Graphics& gl){}
        
        bool onFrame(){
            
            vsr :: GL :: enablePreset();
            gl.depthTesting(true);

            //Update Physics
            camera().step();
            model().step();
            
            glColor3f(1,1,1);
                            
            stereo.draw( gl, lens, Frame2Pose( camera() ), Viewport( width(), height() ), *this );
                                    
            vsr :: GL :: disablePreset();
            
            return true;
            
        }
        
                //scene descriptor
//        void text(string s, int ow = 50, int oh = 100){
//            vsr::gl::draw::enter2D(w, h);
//                glTranslated(ow,h-oh,0);
//                glColor3f(1,1,1);
//                draw::text( s.c_str() );
//            //draw::pop2D();
//        }
        
    };
    
    
} // vsr::
    
#endif
