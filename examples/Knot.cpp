//
//  Knot.cpp
//  Versor
//
//  Created by Pablo Colapinto on 2/4/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include "vsr_fiber.h"

#include <iostream>
#include <stdio.h>

using namespace vsr;
using namespace glv;

void knot(GLVApp & app){

    static double theta, phi;
    SET
        app.gui(theta,"theta",-1,1)(phi,"phi",-.5,.5);
    END

    //A Hopf Link
    HopfFiber hf;
    
    //Theta from -1 to 1, Phi from -.5 to .5)
    Cir c = hf.fiber(theta, phi);


    //feed in a vector, get link map
    Vec v(1,1,0);
    
    
    
    DRAW(c);
    

}

void GLVApp :: onDraw(){

    knot(*this);

}

int main(int argc, const char * argv[]) {
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"VSR",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}