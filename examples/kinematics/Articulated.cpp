//
//  DemoAgacse.cpp
//  vsr
//
//  Created by Pablo Colapinto on 6/28/12.
//  FOR A DEMO at AGACSE LA ROCHELLE 2012
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//


#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include "vsr_chain.h"

#include <iostream>

using namespace vsr;
using namespace glv;


//bending scissors linkage
void articulated (GLVApp& app){

    static int num = 20;    
    static Chain chainA(num);
    static Chain chainB(num);
    
    static Point pnt = PT(.5,-2,0);
    TOUCH(pnt);
    
    static int iter = 0; iter ++;
    double rad = sin( PI * iter / 180.0 );
    
    static double altRatio;
    static double decayRate, pinRatio;
    
    SET
        chainA.set( PT(.5, -2, 0 ) ); chainA.frameSet();
        chainB.set( PT(-.5, -2, 0 ) ); chainB.frameSet();
    
        app.gui(altRatio, "ratio")(decayRate, "decayRate",0,2)(pinRatio, "pinRatio");
        pinRatio = 1;
    END
    
    //Contrain
//    double dist = Ro::dist(pnt,chainB[0].pos());
//    double cdist = Ro::dist(chainA[0].pos(), chainA[1].pos() );
//    if (dist > cdist)
    
    chainA[0].pos() = pnt;
    
    chainA.draw(); 
    chainB.draw();

    double tpinRatio = pinRatio;
    bool flip = false;
    for (int i = 0; i < num; i+=2){
        
        Dls dlsA = chainA.nextDls(i);        
        Dls dlsB = chainB.nextDls(i);
        
        Dls tdlsa = flip ? dlsA : dlsA.dil( dlsA.null(), std::log(tpinRatio) );
        Dls tdlsb = !flip ? dlsB : dlsB.dil( dlsB.null(), std::log(tpinRatio) );
                                        
        Par p = ( tdlsa ^ tdlsb ^ Dlp(0,0,1,0) ).dual(); 
        Pnt pnt = Ro::split(p,flip);
        DRAW ( pnt ); 

        chainA[i+1].pos() = pnt;
        chainB[i+1].pos() = pnt;
        
        double a = ( 1 /tpinRatio);
        double b = tpinRatio;
        
        chainA[i+2].pos() =  Ro::null( chainA[i].vec() + ( ( chainA[i+1].vec() - chainA[i].vec() ) * (1 + ( (flip) ? b : a ) ) ) );
        chainB[i+2].pos() =  Ro::null( chainB[i].vec() + ( ( chainB[i+1].vec() - chainB[i].vec() ) * (1 + ( (flip) ? a : b ) ) ) );
        
        flip = !flip;
        
        tpinRatio *= (1-decayRate);
    }

    chainA.joints();
    chainB.joints();

}

void GLVApp :: onDraw(){
   articulated(*this);
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
