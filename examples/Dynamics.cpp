//
//  Dynamics.cpp
//  Versor
//
//  Created by Pablo Colapinto on 11/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include "vsr_op.h"
#include "vsr_frame.h"

using namespace vsr;
using namespace glv;


//DEMO IN PROGRESS!


void GLVApp :: onDraw(){
    
    static Frame f;
    interface.touch(f);
    DRAW(f);
    
}


int main(int argc, const char * argv[]) {
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"KNOTS",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}