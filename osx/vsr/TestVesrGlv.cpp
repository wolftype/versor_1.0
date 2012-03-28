//
//  TestVesrGlv.cpp
//  vsr
//
//  Created by Pablo Colapinto on 3/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "GLVInterfaceImpl.h"

using namespace vsr;
using namespace glv;

struct GLVScene : public View3D {
    
    //Model& model;
    //Window& win;
    //& camera;
    
    //Camera& camera() { return interface.camera(); }
    
    void add(State * s) { interface.model -> add(s); }
    Camera& camera() { return interface.vimpl -> active(); }
  
    GLVScene(Window * w) : View3D() {
        
 //       camera = interface.vimpl -> active();
 //       win = *w;
        
 //       model = interface.model;
        
        interface.view().win = w;
        //interface.mimpl;
         
        stretch(1,1);

        disable(DrawBorder);
        /* */
    }
    
    virtual void onDraw3D(GLV& glv){
        //Update Camera Physics
        camera().step();

        //Update ModelView Physics
        camera().modelView().step();
        
        //Push into Active Camera Settings (viewport bit, etc)
        camera().push3D();
        
            glColor3f(1,1,1);
            //Copy GLV's data into Interface controller
            interface.vimpl -> getData(&glv);
            
            interface.model -> ui();
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
    
 //   Model model;
//    GLVView view;
//    GLVInput input;
    GLVInterface interface;
//    Window * win;
    
};


Window * win;
GLVScene * scene;
//void drawCB(View *v){}

int main() {
    
    /* Bind Dynamic Library libconga */
	CongaTypes::BindAll();
    
    /* Set Up GLV hierarchy */
	GLV glv(0,0);
	
	glv.colors().back.set(.3,.3,.3);		
	win = new Window(500,500,"VSR",&glv);
    
    scene = new GLVScene(win);
    
    glv << scene;
    
    Cir c = CXY(1);
    
    scene -> add( &c );
    
    Application::run();
    
    return 0;
}