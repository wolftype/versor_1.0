//
//  dini.cpp
//  vsr 
//
//  Created by Pablo Colapinto on 6/28/12.
//  See "Boosted Surfaces" article
//  
//  Copyright (c) 2012 wolftype. All rights reserved.

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"

#include "vsr_tests.h"
#include <iostream>


using namespace vsr;
using namespace glv;

Window * win;
GLVApp * app;

void sphere (GLVApp & app){
    static Dls da = Ro::dls(0,0,0);
    static Dls db = Ro::dls(0,2,0,.5);
    TOUCH(da); TOUCH(db);
    
    Dls dc = da.re(db);

    DRAW3(da,1,0,0); 
    DRAW3(dc,1,0,0); 
    DRAW4(db,0,1,0,.2); 
}


void line(GLVApp& app){

    //Line along Y Axis
    static Lin lin = LN(0,1,0);
    DRAWANDTOUCH(lin);
    
    //A Circle at 2,0,0
    static Cir cir = CXY(1).trs(2,0,0);
    DRAWANDTOUCH(cir);
    

    Cir r = (cir * Cir(lin)) / cir;
    double s = Ro::size(r,false);
    if (fabs(s) > 10000) {
        DRAW3(Lin(r),1,0,0);
    }
    else DRAW3(r,0,1,0);
    
    
}

void circle( GLVApp& app ){
    static Cir c = CXY(1);
    DRAWANDTOUCH3(c,1,0,0);
    
    static Cir src = CXZ(1).trs(1,0,0);
    DRAWANDTOUCH3(src,0,1,0);
        
    Cir nc = src.re(c);
    
    DRAW3(nc,0,0,1);
} 




void GLVApp :: onDraw(){

    static bool bSphere, bLine, bCircle;
    SET
        gui(bSphere,"spheres")(bLine,"line")(bCircle,"circles");
    END

    if (bSphere) sphere(*this);
    if (bLine) line(*this);
    if (bCircle) circle(*this);

	text("Shift, Ctrl, Option, + arrows to to move or rotate camera, or spin model", 50, 20);
	text("'C' To Center Camera and Model", 50, 10);
}


int main() {
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.2,.2,.2);
    		
	win = new Window(500,500,"Versor Example: Reflections in a Circle and a Sphere ",&glv);    
    app = new GLVApp(win);    
    
    glv << app;
    
    Application::run();
    
    return 0;
}

