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

Point target; 
bool bTrack;

void robot(GLVApp& app){
                                        
        //SET UP GUI PARAMETERS
        static double distA;
        SET
        
            app.gui(distA, "LinkLength", 1,10);
            app.gui.colors().back.set(0,0,0);
            distA = 1.0;
        
        END
        
        static Frame baseFrame(PAO, Rot(1,0,0,0) );
        //app.interface.touch(baseFrame);
        
		if (app.interface.keyboard.down && ( app.interface.keyboard.code == 'g' ) ) bTrack = true;
		else bTrack = false;
	
    	if (bTrack) target = app.interface.mouse.origin; 

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
     
        
        DRAW4(ffsphere,1,0,0,.6);
        DRAW4(firstSphere,1,0,0,.6);

}



void GLVApp :: onDraw(){

    /* There are Two Demos here */

   //articulated(*this);
    robot(*this);

}  


int main() {
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(0,0,0);
    		
	Window * win = new Window(500,500,"VSR",&glv);
    GLVApp * app = new GLVApp(win);    
	
    glv << app;
        
    Application::run();

    return 0;
}
