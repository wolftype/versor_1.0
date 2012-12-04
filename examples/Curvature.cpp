//
//  DemoAgacse.cpp
//  vsr
//
//  Created by Pablo Colapinto on 6/28/12.
//  FOR A DEMO at AGACSE LA ROCHELLE 2012
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//


#include "vsr.h"
#include "vsr_file.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include "vsr_mesh.h"
#include "vsr_boost.h"
#include "vsr_field.h"

#include <iostream>


using namespace vsr;
using namespace glv;
using namespace vsr::GL;

//void frames(GLVApp& app){
//
//    //Control Frames
//    static Frame f1; static Frame f2;
//    
//    //Interface with Frames ('G', 'R', 'S', to grab, rotate, or scale)
//    app.interface.touch(f1);
//    app.interface.touch(f2);
//    
//    //DRAW X axis of Frames
//    GL::Draw::X( f1 );
//    GL::Draw::X( f2 );
//    
//    SET
//        f1.pos() = PT(-1,0,0);
//        f2.pos() = PT(1,0,0);
//        f1.orientX( f1.vec() + Vec(0,1,0) );
//        f2.orientX(f2.vec() + Vec(0,1,0) );
//        f1.scale(.3); f2.scale(.3);
//    END
//}

void linear(GLVApp& app){

    
    //Control Frames
    static Frame f1; static Frame f2;
    
    //Interface with Frames ('G', 'R', 'S', to grab, rotate, or scale)
    app.interface.touch(f1);
    app.interface.touch(f2);
    
    //DRAW X axis of Frames
    GL::Draw::X( f1 );
    GL::Draw::X( f2 );
    
    
    //GUI CONTROLS
    static int num, iter;
    static float val,amt, yamt;
    static bool bLine, bDrawLines, bShowBend, bLocal;

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
        gui(bLocal, "local_tangents");

        app.gui << (*app.subgui["linear"]);
        app.gui.arrange();
        
        //Initial Defaults
        iter = 10;
        num = 1;
        val = 1;
        amt = 1;
        yamt = 1;
        
    END 
    
    
    //Local Tangents of Frames
    Par pa = f1.tx(f1.scale());
    Par pb = f2.tx(f2.scale());
    
    Tnv ta = f1.x() * f1.scale();
    Tnv tb = f2.x()* f2.scale();
    
    //Get Ready . . .
    static Par tp; static Cir tc;    
    UVMesh uvmesh(iter+1,iter+1);
    
    
    
    //GO (build mesh)
    ITJi(i,iter)
    
        
        //Boost from Position and Local Tangent
        Vec tv = Interp::linear<Vec>(f1.vec(), f2.vec(),t);
        Tnv tt = Interp::linear<Tnv>(ta,tb,t);

        Bst pp1 = Gen::bst( Par(tt).trs(tv) * amt );
    
        //Boost from Linear Interpolation of Global x axis Tangents of Frames
        tp = Interp::linear<Par>(pa, pb, t);
        Bst pp2 = Gen::bst( tp * amt );
        
        DRAW3(tp,1-t,1,t);
        cout << tp.dot()[0] << endl; 
        //Linear Interpolation of z axis lines of Frames
        Dll dll = f1.dlz().mot(  Gen::log( f1.dlz(), f2.dlz(), t ) );
        if (bDrawLines) DRAW( dll );

        //Linear Interpolation of Positions
        Pnt src = Interp::linear<Pnt>(f1.pos(), f2.pos(), t).null();
        //Alternative: A Point on Interpolated lines 
        Pnt src2 = Fl::loc( dll, src, true);
        
       ITJi(j, iter)
            double xt = -1.0 + 2.0 * t;
            //Point Along Line (starting at interpolated position, or src2, location on line itself)
            Pnt nsrc = ( bLine ? src2 : src ).trs( Fl::dir( dll.undual() ) * xt * yamt).null();
            //Boosted Position
            Pnt nnsrc = Ro::loc( nsrc.sp( (bLocal) ? pp1 : pp2 ) );
            
            //Add To Mesh
            uvmesh.add(nnsrc);  
            
                                
            if (bShowBend){
                ITJi(k,num)
                    Pnt tnsrc = Ro::loc( nsrc.sp( Gen::bst(tp*amt*t) ) );//Gen::trv( 1, tp * amt * t ) ) );
                    DRAW3( tnsrc, t,0,1-t);
                END 
            }

       END 
        
    END 
        
    uvmesh.draw(1,0,0);
    uvmesh.drawTri(1,1,0);
    

    

    //Description
    app.text("Linear Interpolation of Point Pair Generators acting on a Set of Lines");

}

void bilinear(GLVApp& app){

    static Field<Frame> f(2,2,1,4);//Frame f1, f2, f3, f4;
    
    static double amt;
    SET    
        ITJ(i,f.num()) f[i].scale(.5); END
        app.gui(amt,"amt",0,10);
    END

    f.draw();
    ITJ(i,f.num()) 
        DRAW(f[i]);
        app.interface.touch(f[i]); 
    END


    IT2i(10,10)  
        Frame tf = f.surf(u,v); 
        tf.scale(.5);
        DRAW( tf );
        
        Par par = Interp::surface( f[0].ty(), f[2].ty(), f[3].ty(), f[1].ty(), u, v);
        DRAW3( tf.lz(),0,0,1 );
        DRAW3( tf.lx(),1,0,0 );
        
        Pnt tp = Ro::loc( tf.pos().sp( Gen::bst( par * amt ) ) );
        DRAW(tp);
        
    END END
    
}

void bilinear2(GLVApp& app){

    static Field<Frame> f(2,2,1,4);//Frame f1, f2, f3, f4;
    
    static double amt;
    SET    
        ITJ(i,f.num()) f[i].scale(.5); END
        app.gui(amt,"amt",0,10);
    END

    f.draw();
    ITJ(i,f.num()) 
        DRAW(f[i]);
        app.interface.touch(f[i]); 
    END


        Dll udll = Gen::log(f[0].dlz(), f[3].dlz() );
        Dll vdll = Gen::log(f[1].dlz(), f[2].dlz() );

    IT2i(10,10)  
        double xu = -1.0 + 2 * u;  double xv = -1.0 + 2 * v;
        
        //Current Lines
        Dll dllu = f[0].dlz().mot( udll * u );
        Dll dllv = f[1].dlz().mot( vdll * v );
        
        Pnt src0 = Interp::linear<Pnt>(f[0].vec(), f[3].vec(), u).null();
         
        Pnt src = Interp::surface<Pnt>(f[0].vec(), f[2].vec(), f[3].vec(), f[1].vec(), u,v).null();
        
        Par par = Interp::surface( f[0].ty(), f[2].ty(), f[3].ty(), f[1].ty(), u, v);
        
        Pnt pu = src.trs( Fl::dir( dllu.undual() ) * xu ).null();
        Pnt pv = src.trs( Fl::dir( dllv.undual() ) * xv ).null();
        
        
        Pnt tp = Ro::loc( src.sp( Gen::bst( par * amt ) ) );
        DRAW(tp);
        
    END END
    
}

void gaussian(GLVApp& app){

    static Frame f;
    app.interface.touch(f);
    DRAW(f);
    
    
    static double amt, bendRatio, iter, spread;
    
    SET
        app.gui(amt, "amt", -10,10)(bendRatio, "bendRatio",-10,10);
        app.gui(iter,"iter",1,100);
        app.gui(spread,"spread",1,100);
        
        iter = 20;
        amt = 1;
        bendRatio = 1;
    END
    
    Par parU = f.ty() * amt;
    Par parV = f.ty() * amt * bendRatio;
    

    IT2i(iter,iter)
    
        double xu = -1.0 + 2 * u;
        double xv = -1.0 + 2 * v;
    
        Drv du = Fl::dir( f.lx() ) * xu;
        Drv dv = Fl::dir( f.lz() ) * xv;
        Drv cd = du + dv;
        
        Pnt src = f.pos().trs(  ( cd )  * spread );
        
        Bst bst = Gen::bst( parU * (1-fabs(xv)) +  parV * (1-fabs(xu)) );

        Pnt np = src.sp( bst );
        
        DRAW(np);
        
    END END

}


void gaussian2(GLVApp& app){

    static Field<Frame> f(3,1,1);
    ITJ(i,f.num())
        app.interface.touch(f[i]);
        Draw::Y(f[i]);
    END
    
    static double amt, bendRatioA, bendRatioB,bendRatioC,iter, spread;
    
    SET
        app.gui(amt, "amt", -10,10);
        app.gui(bendRatioA, "bendRatioA",-10,10)(bendRatioB, "bendRatioB",-10,10)(bendRatioC, "bendRatioC",-10,10);
        app.gui(iter,"iter",1,100);
        app.gui(spread,"spread",1,100);
        
        iter = 20;
        amt = 1;
        bendRatioA = 1;
        bendRatioB = 1;
        bendRatioC = 1;
    END
    
    

    static const int n = f.num();
    static Vec * tv = new Vec[n];
    static Tnv * tt = new Tnv[n];
    static Tnv * ttV = new Tnv[n];
    static Par * tp = new Par[n];
    ITJ(i, f.num() )
        tv[i] = f[i].vec();
        tt[i] = f[i].y() * f[i].scale();
        ttV[i] = f[i].y() * f[i].scale();
        tp[i] = f[i].tyScaled();
    END

    ttV[0] *= bendRatioA;     ttV[1] *= bendRatioB;     ttV[2] *= bendRatioC;


    ITJi(i,iter)
        
//        Patch p = f.idxU(t);0        
        //Par parU = Interp::quadric<Par>(tp, f.num(), t );//f[p.a].tyScaled(), f[p.b].tyScaled(), p.rw );
        //Par parU = Interp::quadric<Par>( tp, f.num(), t);//f[p.a].tyScaled(), f[p.b].tyScaled(),  p.rw );
        
        //NULL TANGENTS
        Pnt src = Interp::quadric<Vec>(tv, f.num(), t).null();
        Par parU = Par ( Interp::quadric<Tnv>( tt, f.num(), t) ).trs(src);
        Par parV = Par ( Interp::quadric<Tnv>( ttV, f.num(), t) ).trs(src);
        
        ITJi(j,iter)
            double xt = -1.0 + 2* t;
            Bst bstU = Gen::bst( parU * amt );
            Pnt np = src.trs(0,0,xt * spread).sp( bstU );
            
//            DRAW(Ro::loc(np));
            DRAW3(src,1,0,0);
        
            Bst bstV = Gen::bst( parV * amt );
            
            Pnt nnp = np.sp( bstV );
        END

    END     
 
    
//    Pnt p1 = app.interface.mouse.projectNear.null();
//    Pnt p2 = app.interface.mouse.projectMid.null();
//    Pnt p3 = app.interface.mouse.projectFar.null();
//    Vec v2 = app.interface.mouse.projectFar;
//    Vec v0 = GL::unproject( app.mouse().x, app.interface.vd().h - app.mouse().y ,amt,  app.scene().xf ); 
//
//    Lin lin = p2 ^ v0.null() ^ Inf(1);
    
    
    
    Point np = app.interface.mouse.origin;//Fl::loc( lin.runit(), PAO, false).null();
    DRAW( np );
}

void GLVApp :: onDraw(){
    gaussian2(*this);
 //   bilinear2(*this);
//   linear(*this);
//    frames(*this);
//    text("Use the Shift + arrow Keys to move camera, or Option + arrows to rotate.  Use G, R, S to Grab Rotate or Scale the control points.  Q to let them go.  ",50,50);
}

int main(int argc, const char * argv[]) {

    /* Get Current Working Directory */
    File::setdir( argv[0] );
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"CURVATURE OPERATIONS",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}