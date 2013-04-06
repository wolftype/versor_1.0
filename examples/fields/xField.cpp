//
//  Navigation.cpp
//  Versor
//
//  Created by Pablo Colapinto on 4/4/13.
//  Copyright (c) 2013 WOLFTYPE. All rights reserved.
//

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_draw.h"

#include "vsr_field.h"

#include "vsr_tests.h"

#include <iostream>

using namespace vsr;
using namespace glv;

void field(GLVApp& app){

    static Field<Vec> f(10,10,1,1);
    static Field<Pnt> e(10,10,1,1);
    
    
    typedef Tri TSpace;
    
    ITJ( i, f.num() )
        e[i] = Op::pj( f.grid(i), Pss(1) );
    END


    //f.draw(0,1,0);
    e.draw(0,1,1);
}

void GLVApp :: onDraw(){

    field(*this);
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