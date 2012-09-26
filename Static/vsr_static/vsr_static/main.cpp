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
using namespace glv;

Window * win;
GLVApp * app;

void GLVApp :: onDraw(){
    


    
    static Pnt p(0,0,0,1,.5);
    
    static int t = 0;
    t++;
    
//    Draw::R(Vec::x,1,0,0);
//    Draw::R(Vec::y,0,1,0);
//    Draw::R(Vec::z,0,0,1);
    float r =  sin( (t * PI ) / 180.0 );
    cout << r<< endl; 
    Trs trs = Gen::trs(r, 0.f, 0.f );
    cout << trs << endl; 
    Pnt p2 = Op::sp(p, trs  );
    cout << p2 << endl; 
    
    Draw::R( p2 );

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


