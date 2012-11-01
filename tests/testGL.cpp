//
//  main.cpp
//  vsr_static
//
//  Created by Pablo Colapinto on 8/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#include "vsr.h"
#include "vsr_op.h"

#include "vsr_draw.h"
#include "vsr_GLVInterfaceImpl.h"

#include <iostream>


using namespace vsr;

using glv::GLV;
using glv::Window;

Window * win;
GLVApp * app;

void GLVApp :: onDraw(){
    
	Dls a = Ro::dls(-1,0,0);
	Dls b = Ro::dls(1,0,0);
	
	static int c = 0; c++;
	double rad = sin(PI * c / 90.0);
	a = a.trs(rad,0,0);
	b = b.trs(-rad,0,0);
	Cir cir = (a ^ b).dual();
    
    static Cir sc= CXY(1);
    
    DRAW(sc);
    interface.touch(sc);

//	DRAW3(a,0,1,0); DRAW3(b,0,1,0); DRAW3(cir,1,0,0);	
}

int main (int argc, const char * argv[])
{

    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);		
	
    win = new Window(500,500,"VERSOR",&glv);    
    app = new GLVApp(win);    
    
    glv << app;        
    Application::run();
    
    return 0;
}


