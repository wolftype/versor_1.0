//
//  Transformations.cpp
//  Versor
//
//  Created by Pablo Colapinto on 12/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "vsr.h"
#include "vsr_op.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include <iostream>

using namespace vsr;

void dilation(GLVApp& app){
    
    Pnt p = Vec(1,0,0).null();
    
    static double amt;
    SET
        app.gui(amt,"amt",0,100);
    END
    
    Dls dls = p.sp( Gen::dil(p, amt) );
    
    DRAW(dls);
}

void GLVApp::onDraw(){

    dilation(*this);

}

int main(int argc, const char * argv[]) {

    /* Get Current Working Directory */
    File::setdir( argv[0] );
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"MEET OPERATIONS",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}