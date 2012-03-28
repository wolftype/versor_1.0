//
//  GLVInterfaceImpl.h
//  vsr
//
//  Created by Pablo Colapinto on 3/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_GLVInterfaceImpl_h
#define vsr_GLVInterfaceImpl_h

#include "glv.h"
#include "glv_binding.h"
#include "Interface.h"

namespace vsr {
    
    using namespace glv;
    
//    struct GLVWindow : public Interface::ViewImpl::WindowImpl {      
//        Window * win;
//    };

    
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
            interface -> view.w		 = glv.width();
            interface -> view.h		 = glv.height();
            
            interface -> viewCalc();            
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
        
//        GLVInterface(GLVView * view, GLVInput * input) : Interface(){
//            vimpl=view;
//            iimpl=input; 
//        }

        GLVInterface() : Interface() { init(); }
        
        GLVView& view() { return *(GLVView*)vimpl; }
        GLVInput& input() { return *(GLVInput*)iimpl; }
        
        virtual void init(){
            vimpl = new GLVView(this);
            iimpl = new GLVInput(this);
        }
    };
} // vsr::
    
#endif
