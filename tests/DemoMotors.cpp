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
#include "GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include "Chain.h"

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

//    static int num = 5;    
//    static Chain chain(num);
//    static Chain chainB(num);
//    
//    static Frame f;
//    static Frame f2;
//    SET
//        //chain[0].pos() = PT(-1,-1,0);
//        //chainB[0].pos() = PT(-1,1,0);
//        f.set( PT(0,0,0) ); f.orientY( Vec::x );
//        chain.set( PT(-1,-1,0) ); chain.orientY( Vec::x ); chain.frameSet();
//        chainB.set( PT(-1,1,0) ); chainB.orientY( Vec::x );chainB.frameSet();
//    END
//    
//    f2.mot ( f.mot() );
////    cout << f.rot() << endl;
////    cout << f2.rot() << endl;
//    
//    DRAW (f2);
//    chain.draw(); //chainB.draw();
//
//        
//    for (int i = 0; i < chain.num(); ++i){
//        Dls dls = chain.nextDls(i);        
//        Dls tdls = dls.dil(dls,.5);
//        DRAW3( Ro::cir(tdls, Biv::xy), 1,0,0);
//    }



//    r = m;
    //cout << m << r << endl; 

}

void GLVApp :: onDraw(){

  
//    frame(*this);
    articulated(*this);

//    text("Use the G, R, S keys to Grab, Rotate, and Scale Control Points.  Q to let go.",50,50);
}

int main() {
        
    /* Set Up GLV hierarchy */
//	GLV glv(0,0);	
//	glv.colors().back.set(.3,.3,.3);
//    		
//	Window * win = new Window(500,500,"VSR",&glv);
//    GLVApp * app = new GLVApp(win);    
//    
//    glv << app;
//        
//    Application::run();

    Mot m (1,1,1,1,1,1,0,1,1);
    Trs r;
    r = m;
    cout << m << r << endl; 
    
    Rot r2(m);
     cout << m << r2 << endl; 
    
    return 0;
}