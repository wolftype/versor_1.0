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

#include "vsr_stat.h"
#include "vsr_knot.h"

#include <iostream>

using namespace vsr;

void holes(GLVApp& app){

        static Orbit orbit;
        app.interface.touch(*(Frame*)(&orbit));
        orbit.calc();
        DRAW3(orbit.cyz()1,0,0 );
        
       
        
        static double iter;
        SET 
             Rand::Seed(10);
            app.gui(iter, "iter",10,1000); 
        END
             
        for (int i = 0; i < 100; ++i){
            
            Point p = PT( Rand::Num(-3.0,3.0), Rand::Num(-3.0,3.0), Rand::Num(-3.0,3.0) );
            
            Point np = p;
            for (int j = 0; j < iter; ++j){
                np = Ro::loc( np.sp( orbit.bst() ) ) ;
                DRAW(np);
            }
            
        }

}

void GLVApp :: onDraw() {
    holes(*this);
}

int main(int argc, const char * argv[]) {
     
    File::setdir( argv[0] );       
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"KNOTS",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}