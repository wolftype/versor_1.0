//
//  Commute.cpp
//  Versor
//
//  Created by Pablo Colapinto on 3/29/13.
//  Copyright (c) 2013 WOLFTYPE. All rights reserved.
//

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_draw.h"
#include "vsr_tests.h"

#include <iostream>

using namespace vsr;
using namespace glv;

void commute(GLVApp& app){

}

void GLVApp ::onDraw(){

    commute(*this);
}

int main(int argc, const char * argv[]) {

    cout << argv[0] << endl; 
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"MEET OPERATIONS",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}
