//
//  DemoAgacse.cpp
//  vsr
//
//  Created by Pablo Colapinto on 6/28/12.
//  FOR A DEMO at AGACSE LA ROCHELLE 2012
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include "vsr_chain.h"

using namespace vsr;
using namespace glv;

//Follow the Cursor
void frame(GLVApp & app){
    Frame f;
    f.set( PT(0,0,0), Rot(1,0,0,0) );
    
    Pnt p = app.mouse().pos;
    f.orientY(Vec(p));
    DRAW( f );
    
}


void articulated (GLVApp& app){

    static int num = 5;    
    static Chain chainA(num);
    static Chain chainB(num);
    
    static int iter = 0; iter ++;
    double rad = sin( PI * iter / 180.0 );
    
    SET
        chainA.set( PT(-1,-1,0) ); chainA.orientY( Vec::x ); chainA.frameSet();
        chainB.set( PT(-1,1,0) ); chainB.orientY( Vec::x );chainB.frameSet();
    END
    
    chainB.pos( PT(-1,rad,0 ) ); chainB.frameSet();
    chainA.draw(); 
    chainB.draw();

    for (int i = 0; i < num; ++i){
        Dls dlsA = chainA.nextDls(i);        
        Dls dlsB = chainB.nextDls(i);        
        Dls tdlsa = dlsA.dil(dlsA,.5);
        Dls tdlsb = dlsB.dil(dlsB,.5);
        
       Par p = ( tdlsa ^ tdlsb ^ Dlp(0,0,1,0) ).dual(); 
        DRAW ( p ); 
    }

}

void GLVApp :: onDraw(){

  
//    frame(*this);
    articulated(*this);

//    text("Use the G, R, S keys to Grab, Rotate, and Scale Control Points.  Q to let go.",50,50);
}

int main() {
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"VSR",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}