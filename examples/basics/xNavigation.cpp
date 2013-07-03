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
#include "vsr_coord.h"


#include "vsr_tests.h"

#include <iostream>

using namespace vsr;
using namespace glv;

void nav(GLVApp& app){
    
    
    static Frame f; 
    DRAWANDTOUCH(f);
    
    app.text("Arrow Keys or Click and Drag with Mouse while holding:", 50, 250);
    app.text("Shift - to Move Camera Forward, Back, Left, Right ", 50,225);
    app.text("Shift+Ctrl - to Move Camera Up, Down, Left, Right ", 50,200);
    app.text("Alt (option) - to Rotate Model View ", 50,175);
    app.text("Ctrl - to Rotate Camera ", 50,150);
    app.text("Hit 'C' - to reset all ", 50,100);
    app.text("Hit '~' - to toggle FullScreen", 50,50);

}

void coord(GLVApp& app){

    static Vec v = Vec::x;
    
    static double theta, phi;
    SET
        app.gui(theta)(phi);
    END
    
    v = Vec::x.sp( Gen::rot(theta,phi) );
    //DRAWANDTOUCH(v);
    
    Coord::Sph cs = Coord::vec2sph(v);
    cout << cs << endl; 
    Coord::Sph cs2 = Coord::sph2deg(cs);
    cout << cs2 << endl; 


}

void GLVApp :: onDraw(){

 //   coord(*this);
    nav(*this);
}

int main(int argc, const char * argv[]) {

    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.1,.1,.1);
    		
	Window * win = new Window(500,800,"Navigation",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}