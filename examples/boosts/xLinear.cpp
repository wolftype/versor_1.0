//
//  linear.cpp
//  vsr 
//
//  Created by Pablo Colapinto on 6/28/12.
//  See "Boosted Surfaces" article
//  
//  Copyright (c) 2012 wolftype. All rights reserved.

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_mesh.h"

#include "vsr_tests.h"
#include <iostream>


using namespace vsr;
using namespace glv;

Window * win;
GLVApp * app;

void linear(GLVApp& app){
	
	//Two Frames to Manipulate
    static Frame f1; static Frame f2;

    app.interface.touch(f1);
    app.interface.touch(f2);
    
	//Draw their local x axes
    GL::Draw::X(f1);
    GL::Draw::X(f2);


    //GUI STUFF
    static int num, iter;
    static float amt, yamt;
    static bool bDrawLines, bShowBend;

    SET


		Gui& gui = app.gui;

        gui(iter,"iter",1,1000);        
        gui(num,"num_per_bend",0,1000);
        gui(amt,"amt",-100.0, 100.0);
        gui(yamt,"yamt",0,10);
        gui(bDrawLines,"draw_lines")(bShowBend,"show_bend");
        
        iter = 10;
        num = 1;
        amt = 1;
        yamt = 1;
        
		//Initial Orientation
        f1.pos() = PT(-1,0,0);
        f2.pos() = PT(1,0,0);
        f1.orientX( f1.vec() + Vec(0,1,0) );
        f2.orientX(f2.vec() + Vec(0,1,0) );
        f1.scale(.3); f2.scale(.3);

		app.model().rot( Gen::rot( Biv::yz * PIOVERFOUR/2.0) );
    END 


	//END OF GUI STUFF


    // Make Null Point Pairs out of Frames' x axes
    Par pa = f1.tx(f1.scale());
    Par pb = f2.tx(f2.scale());
    
    //UVMESH
    UVMesh uvmesh(iter+1,iter+1);
    
    Par tp;
    ITJi(i,iter)
		//Linear Interpolated Null Point Pair Generator
        tp = Interp::linear<Par>(pa, pb, t);
        Bst bst = Gen::bst(tp * amt);
        // pp[0] = val;
        
		//Motor Interpolation Between Lines
        Dll dll = f1.dlz().mot(  Gen::log( Gen::ratio( f1.dlz(), f2.dlz(), t ) ) );
        if (bDrawLines) DRAW( dll );

		//Linear Interpolation between points
        Pnt src = Interp::linear<Pnt>( f1.pos(), f2.pos(), t ).null();

		//Translate Point along each line and boost by 
       ITJi(j, iter)
            double xt = -1.0 + 2.0 * t;
            Pnt nsrc = src.trs( Fl::dir( dll.undual() ) * xt * yamt).null();
            Pnt nnsrc = Ro::loc( nsrc.sp( bst ) );
            uvmesh.add(nnsrc);
            
            if (bShowBend){
                ITJi(k,num)
                    Pnt tnsrc = Ro::loc( nsrc.sp( Gen::bst(tp * amt * t ) ) );
                    DRAW3( tnsrc, t,0,1-t);
                END 
            }

       END 
        
    END 
    
    
    uvmesh.draw(1,0,0);
    uvmesh.drawTri(1,1,0);
    
    app.text("Linear Interpolation of Point Pair Generators acting on a Set of Lines");

}


void GLVApp :: onDraw(){

    linear(*this);

    text("Use the G, R, S keys to Grab, Rotate, and Scale Control Points (white arrows).  Q to let go.",50,50);
	text("Option + arrows to rotate Model, Shift + arrows to move camera, Ctrl + Arrows to Rotate Camera", 50, 20);
}


int main() {
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.2,.2,.2);
    		
	win = new Window(900,400,"Versor Example",&glv);    
    app = new GLVApp(win);    
    
    glv << app;
    
    Application::run();
    
    return 0;
}

