//
//  GLVInterfaceImpl.h
//  vsr
//
//  Created by Pablo Colapinto on 3/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_GLVInterfaceImpl_h
#define vsr_GLVInterfaceImpl_h

//ABSTRACT BASE CLASS
#include "Interface.h"

//GLV SPECIFIC HEADERS
#include "glv.h"
#include "glv_binding.h"
#include "Gui.hpp"


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
            
            interface -> mouse.pos     = Vec( glv.mouse().x() / glv.width(), glv.mouse().y() / glv.height(), 0 ) ;
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
        
        GLVApp(Window * w) : View3D() {
            
            interface.view().win = w;
            
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
            
                //Default Color
                glColor3f(1,1,1);
                            
                interface.viewCalc();  
                onDraw();
                        
            camera().pop3D();
            
            GL :: disablePreset();
        }
      
        Camera& camera() { return interface.view().active(); }
        
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
                    interface.onKeyDown();
                    break;
                case Event::KeyUp:
                    interface.onKeyUp();
                    break;
                    
            }
            
            return false;
        }
        
    };
    
    struct GLVScene : public View3D {
        
        void add(State * s) { interface.model -> add(s); }
        
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
                interface.model -> ui();
                
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
} // vsr::
    
#endif
