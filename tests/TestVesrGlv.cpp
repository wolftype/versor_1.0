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


Window * win;
GLVScene * scene;


int main() {
    
    /* Bind CGA Framework */
	CongaTypes::BindAll();
    
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);		
	win = new Window(500,500,"VSR",&glv);    
    scene = new GLVScene(win);    
    glv << scene;
    

    Cir c = CXY(1);
    
    Dlp p(0,1,0,0);
    
    scene -> add( &c );
    scene -> add( &p );
    

    Application::run();
    
    return 0;
}