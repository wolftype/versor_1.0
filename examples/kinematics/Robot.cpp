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

void robot(GLVApp& app){
                                        
        //SET UP GUI PARAMETERS
        static double distA;
        SET
        
            app.gui(distA, "LinkLength", 1,10);
            app.gui.colors().back.set(.3,.3,.3);
            distA = 1.0;
        
        END
        
        static Frame baseFrame(PAO, Rot(1,0,0,0) );
        app.interface.touch(baseFrame);
                
        Point target = app.interface.mouse.origin;
        DRAW3(target,1,0,0);  
        Frame targetFrame( target, Rot(1,0,0,0) );
        
        Frame secondFrame( Ro::null(0,distA,0) );
        
        
        DualSphere firstSphere = Ro::dls( secondFrame.pos(), distA);        
        DualSphere targetSphere = Ro::dls( target, distA );


        //Plane of Rotation formed by yaxis of base and target point
        vsr::Plane rplane = baseFrame.ly() ^ target;
        DRAW3(rplane,0,1,0);
        
        //XZ plane of Target
        DualPlane targetXZ = targetFrame.dxz();
        DRAW3(targetXZ,0,.5,1);
        
        //Line of Target
        DualLine tline = targetXZ ^ rplane.dual();
        DRAW3(tline,1,1,0);
        
        //Point Pairs of Final joint
        PointPair fjoint = ( tline ^ targetSphere ).dual();
        DRAW(fjoint);
        
        //Pick the one closest to the base frame
        Frame finalFrame ( Ro::split(fjoint,true), Rot(1,0,0,0) );
        
        //Sphere around fframe
        DualSphere ffsphere = Ro::dls( finalFrame.pos(), distA);
                
        //Circle of Possibilities
        Circle cir = ( ffsphere ^ firstSphere).dual();
        DRAW3(cir,.5,1,1);
        
        //TWo points where the middle joint could be
        PointPair fpair = ( rplane.dual() ^ cir.dual() ).dual();
        DRAW3(fpair, 1,.5,.5);
        
        //Pick One and put the middle frame there
        Frame middleFrame( Ro::split(fpair,true), Rot(1,0,0,0) );
        
        
        //We can store the frame positions in a chain class which will sort out relative orientations for us
        Chain k(5);
        k[0] = baseFrame;
        k[1] = secondFrame;
        k[2] = middleFrame;
        k[3] = finalFrame;
        k[4] = targetFrame;
        
        //Base Frame will rotate to plane defined by its yaxis and target point
        Rotor r1 =  Gen::ratio( Vector::z, rplane.dual().runit() );
        k[0].rot( r1 );
        
        //for all the other frames, calculate joint rotations and link lengths from current positions
        k.joints(1); 
        k.links();
        
        for (int i = 0; i < 4; ++i){
            DRAW(k.linf(i));
            DRAW(k[i]);
        }
     
        
        DRAW4(ffsphere,1,0,0,.2);
        DRAW4(firstSphere,1,0,0,.2);

}



void GLVApp :: onDraw(){

    /* There are Two Demos here */

   //articulated(*this);
    robot(*this);

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
