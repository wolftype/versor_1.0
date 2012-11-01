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

#include "vsr_mesh.h"
#include "vsr_boost.h"

#include <iostream>


using namespace vsr;
using namespace glv;

void linear(GLVApp& app){

//    static Cir c = CYZ(1);
    
    static Frame f1; static Frame f2;
    
    app.interface.touch(f1);
    app.interface.touch(f2);
    
    
    static int num, iter;
    static float val,amt, yamt;
    static bool bLine, bDrawLines, bShowBend;
    
    SET
        f1.pos() = PT(-1,0,0);
        f2.pos() = PT(1,0,0);
        f1.orientX( f1.vec() + Vec(0,1,0) );
        f2.orientX(f2.vec() + Vec(0,1,0) );
        f1.scale(.3); f2.scale(.3);

        static Gui gui;
        app.subgui["linear"] = &gui;

        gui(iter,"iter",1,1000);        
        gui(num,"num_per",0,1000);
        gui(val,"scalar_val",-100.0, 100.0);
        gui(amt,"amt",-100.0, 100.0);
        gui(yamt,"yamt",0,10);
        gui(bLine,"line_source")(bDrawLines,"draw_lines")(bShowBend,"show_bend");

        app.gui << (*app.subgui["linear"]);
        app.gui.arrange();
        
        iter = 10;
        num = 1;
        val = 1;
        amt = 1;
        yamt = 1;
        
    END 
    
    GL::Draw::X( f1 );
    GL::Draw::X( f2 );
    
    Par pa = f1.tx(f1.scale());
    Par pb = f2.tx(f2.scale());
    
    static Par tp; static Cir tc;
    
    UVMesh uvmesh(iter+1,iter+1);
    
    ITJi(i,iter)
        tp = Interp::linear<Par>(pa, pb, t);
        Bst pp = Gen::trv(1, tp * amt);
        pp[0] = val;
        
        Dll dll = f1.dlz().mot(  Gen::log( Gen::ratio( f1.dlz(), f2.dlz(), t ) ) );
        if (bDrawLines) DRAW( dll );

        Pnt src = Interp::linear<Pnt>(f1.pos(), f2.pos(), t).null();
        Pnt src2 = Fl::loc( dll, src, true);

       ITJi(j, iter)
            double xt = -1.0 + 2.0 * t;
            Pnt nsrc = ( bLine ? src2 : src ).trs( Fl::dir( dll.undual() ) * xt * yamt).null();
            Pnt nnsrc = Ro::loc( nsrc.sp( pp ) );
            uvmesh.add(nnsrc);
            
            if (bShowBend){
                ITJi(k,num)
                    Pnt tnsrc = Ro::loc( nsrc.sp( Gen::trv( 1, tp * amt * t ) ) );
                    DRAW3( tnsrc, t,0,1-t);
                END 
            }

       END 
        
    END 
    
    //DRAW
    
    uvmesh.draw(1,0,0);
    uvmesh.drawTri(1,1,0);
    
    app.text("Linear Interpolation of Point Pair Generators acting on a Set of Lines");

}


void GLVApp :: onDraw(){

    linear(*this);

    text("Use the Shift + arrow Keys to move camera, or Option + arrows to rotate.  Use G, R, S to Grab Rotate or Scale the control points.  Q to let them go.  ",50,50);
}

int main() {
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"HOPF FIBRATION",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}