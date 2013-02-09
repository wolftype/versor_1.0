//
//  Twists.cpp
//  Versor
//
//  Created by Pablo Colapinto on 12/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include <iostream>

using namespace vsr;

void reflections(GLVApp& app){

    //Line along Y Axis
    static Lin lin = LN(0,1,0);
    DRAWANDTOUCH(lin);
    
    //A Circle at 2,0,0
    static Cir cir = CXY(1).trs(2,0,0);
    DRAWANDTOUCH(cir);
    
    //Reflection of Line in Circle
    Cir r = Cir(lin).re(cir);
    DRAW3(r,0,1,0);
}

void GLVApp :: onDraw() {
    reflections(*this);
    text("Hit 'G' 'R' or 'S' keys and click on element to Grab Rotate or Scale.  Hit 'Q' to release");
}

int main(int argc, const char * argv[]) {
     
//    File::setdir( argv[0] );       
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(1000,500,"Reflections",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}
