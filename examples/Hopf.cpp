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


void hopf(GLVApp& app){


    /*
        The spinor, a Motor Transversor, takes a circle to its axis
        
        Mtt = { id = "Mtt", desc = "Motor Transversor", 
        bases = {_s, _e12, _e13, _e23, _e1no, _e2no, _e3no, _e1ni, _e2ni, _e3ni, _noni, _e12noni, _e13noni, _e23noni, _e123no, _e123ni, }, key = 1771476585 }

    */

        
    static float max = 1000;

    //GUI Controlled Parameters
    static int num = 50;
    static int res = 20;
    static bool handed;
    SET app.gui(num,"num",0,100)(res,"res",0,100)(handed); END


    //BASE CIRCLE AT SOUTH POLE
    Cir ca = CXZ(1);
    DRAW3(ca,1,0,0); 

    //BASE LINE AT NORTH POLE
    Lin inf = PAO ^ Ro::null(0,1,0) ^ Inf(1);
    if (handed) inf = PAO ^ Ro::null(0,-1,0) ^ Inf(1);


    //j is theta of globe (longitude)
    //i is phi of a globe (latitude)
    
    static int time = 0; time++;  double phase = PI * time/180.0;
    
    ITJi(j,res)

        float tt = t;

        Vec v = Vec::x.rot( Biv::xz * PI * t );
        Lin lim = ca.sp( Gen::trv(v) );                                                             //<-- Circle to a Line (Limit)

//      Par p  = Par(Tnv( v ) ).trs( v ) ;
//      Lin lim = ca.sp( Gen::trv(1,p*-.5) );
        ITJi(i,num)
            Cir nc = ca.sp( Gen::ratio(inf.dual(),lim.dual(), t) * Gen::trv(v * t )  ) ;            // <-- simpler, takes circle to line, then twists
//          Cir nc = ca.sp( Gen::ratio(inf.dual(),lim.dual(), t) * Gen::trv(1, p * st )  ) ;        // <-- More complicated and unnecessary, takes circle to local tangent, then twists

            DRAW3(nc,1-t,t,tt);
            Pnt pnt = Ro::pnt_cir(nc, phase * Ro::cur(nc) );
            DRAW3(pnt,t,tt,1-t);
            if (Ro::size(nc,false) > max) DRAW( Lin(nc) );                                          //<-- Draw as a Line if Circle is above a certain radius
        END
    END
}

void GLVApp :: onDraw(){

   // linear(*this);
    hopf(*this);

    text("Use the Shift + arrow Keys to move camera, or Optoin + arrows to rotate Fibration",50,50);
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