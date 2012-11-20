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

void ratio(GLVApp & app){

    static Vec v1 = Vec::x;
    static Vec v2 = Vec::y;
    app.interface.touch(v1); app.interface.touch(v2);
    
    Rot r = Gen::ratio(v1,v2);

    Vec v3 = v1.sp(r);

    DRAW(v1); DRAW(v2); DRAW(v3*-1);
}


//Follow the Cursor
void frame(GLVApp & app){
    Frame f;
    f.set( PT(0,0,0), Rot(1,0,0,0) );
    
    Pnt p = app.mouse().pos;
    f.orientY(Vec(p));
    DRAW( f );
    
}

//bending scissors linkage
void articulated (GLVApp& app){

    static int num = 20;    
    static Chain chainA(num);
    static Chain chainB(num);
    
    static int iter = 0; iter ++;
    double rad = sin( PI * iter / 180.0 );
    
    static double altRatio;
    static double decayRate, pinRatio;
    
    SET
        chainA.set( PT(-1,-1,0) ); chainA.orientY( Vec::x ); chainA.frameSet();
        chainB.set( PT(-1,1,0) ); chainB.orientY( Vec::x );chainB.frameSet();
    
        app.gui(altRatio, "ratio")(decayRate, "decayRate",0,2)(pinRatio, "pinRatio");
    END
    
    chainB[0].pos() = app.mouse().origin;// PT(-1,rad*.2,0 ) );
    chainA.draw(); 
    chainB.draw();

    
//    double decay = 1;//decayRate;
//    for (int i = 0; i < num; i+=4){
//        decay *= decayRate;
//        chainA.link(i).pos() = Ro::null(0,altRatio * decay,0);
//        chainB.link(i+2).pos() = Ro::null(0,altRatio* decay,0);
//    }


    double tpinRatio = pinRatio;
    bool flip = false;
    for (int i = 0; i < num; i+=2){
        
        Dls dlsA = chainA.nextDls(i);        
        Dls dlsB = chainB.nextDls(i);
        
        Dls tdlsa = flip ? dlsA : dlsA.dil( dlsA.null(), std::log(tpinRatio) );
        Dls tdlsb = !flip ? dlsB : dlsB.dil( dlsB.null(), std::log(tpinRatio) );
                                        
        Par p = ( tdlsa ^ tdlsb ^ Dlp(0,0,1,0) ).dual(); 
        Pnt pnt = Ro::split(p,flip);
        chainA[i+1].pos() = pnt;
        chainB[i+1].pos() = pnt;
        
        double a = ( 1 /tpinRatio);
        double b = tpinRatio;
        
        chainA[i+2].pos() =  Ro::null( chainA[i].vec() + ( ( chainA[i+1].vec() - chainA[i].vec() ) * (1 + ( (flip) ? b : a ) ) ) );
        chainB[i+2].pos() =  Ro::null( chainB[i].vec() + ( ( chainB[i+1].vec() - chainB[i].vec() ) * (1 + ( (flip) ? a : b ) ) ) );
        
        DRAW ( pnt ); 
        flip = !flip;
        
        tpinRatio *= decayRate;
    }

    chainA.joints();
    chainB.joints();
//    chainA.fk();
//    chainB.fk();


}



void GLVApp :: onDraw(){

//     ratio(*this);
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