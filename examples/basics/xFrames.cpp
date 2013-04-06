//
//  Frame.cpp
//  versor
//
//  Created by Pablo Colapinto on 6/28/12.
//  
//  Copyright (c) 2012 WOLFTYPE. All rights reserved.
//
/*

    Demonstrates Interpolation of one 'frame' in space (a position and orientation) with an other.
    
    Use the G, R, keys to Grab and Rotate the Frames.  Q to 'let go'.
    
    The orientation of the frame on the left will follow the cursor.
    
    Navigation: 

*/

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"


#include "vsr_chain.h"
#include "vsr_field.h"

#include <iostream>
#include <stdio.h>

#include "vsr_tests.h"

using namespace vsr;
using namespace glv;


void interpolation(GLVApp& app){

        //Frame fa Follows the Cursor
        static Frame fa ( PT(-1,0,0) );

        //Frame fb is interfaced by 'G' and 'R' keys
        static Frame fb( PT(1,0,0) );
       
 
        app.interface.touch(fa);
        app.interface.touch(fb);
        
        //Get Cursor Position
        Pnt p = app.interface.mouse.origin;
        
        fa.orientY(Vec(p));
        
        DRAW(fa); DRAW(fb);        
        
        for (int i = 0; i < 100; ++i){
            double t= 1.0 * i/100;
            
            Frame frame = Frame::Twist( fa, fb, t );
            
            DRAW(frame);
        }
              
}


void GLVApp :: onDraw(){

    interpolation(*this);

    text("Use the G, R, keys to Grab and Rotate the Right Frame.  Q to let go.",50,50);
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
