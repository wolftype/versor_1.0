//
//  main.cpp
//  vsr_static
//
//  Created by Pablo Colapinto on 8/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "op.h"

//#include "Mtt.h"
//#include "Mtd.h"
//#include "Rtc.h"

#include "GLVInterfaceImpl.h"
#include "Draw.h"



using namespace vsr;

using glv::GLV;
using glv::Window;

Window * win;
GLVApp * app;


void GLVApp :: onDraw(){
    
    int num = 100;
    int spacing = 5;
    
    static int time = 0; time++;
    
    for (int i = 0; i < num; ++i){
        float u = 1.0 * i/num;
        for (int j = 0; j < num; ++j){
            
            float v = 1.0 * j/num;
                        
            Cir tc = CXY(1).trs(u*spacing, v*spacing,0);
        
            tc = tc.rot( Biv::xy * time * .1 );
            GL::Draw::Render(tc);
        
        }
    
    }

}

int main (int argc, const char * argv[])
{

    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);		
	win = new Window(500,500,"VSR",&glv);    
    app = new GLVApp(win);    
    glv << app;
    
  //  Rand::Seed();
    
    Application::run();
    
    return 0;
}


