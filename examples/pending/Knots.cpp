//
//  DemoAgacse.cpp
//  vsr
//
//  Created by Pablo Colapinto on 6/28/12.
//  Playing around with Point Pair Generators and KNOTS
//  SEE ALSO: DORST AND VALKENBURG, paper on SQUARE ROOT AND LOGARITHMS THROUGH POLAR DECOMPOSITION
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//


#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include "vsr_mesh.h"
#include "vsr_boost.h"

#include "vsr_draw.h"
#include "vsr_mdraw.h"
#include "vsr_mglyph.h"

#include "vsr_gl_shader.h"
#include "vsr_gl_vattrib.h"
#include "vsr_gl_vbo.h"

#include "vsr_stat.h"
#include "vsr_knot.h"
#include "vsr_motor.h"

#include "vsr_field.h"

#include <iostream>


using namespace vsr;
using namespace glv;

void circle(GLVApp& app){

    static Point pa = PT(1,0,0);
    static Point pb = PT(0,1,0);
    static Point pc = PT(-1,0,0);
    
    app.interface.touch(pa);
    app.interface.touch(pb);
    app.interface.touch(pc);

    DRAW(pa); DRAW(pb); DRAW(pc);
    
    Circle c = pa ^ pb ^ pc;
    
    Dls dls = Round::sur( c );    
    static Dls dls2 = Ro::dls(2, 0, 0);
    
    app.interface.touch(dls2);
    DRAW4(dls,1,0,0,.3); DRAW4(dls2,1,0,0,.3);
    
    Cir inter = (dls ^ dls2).dual();
    DRAW(inter);
    DRAW3( ( (dls ^ dls2) ^ Dlp(0,1,0,0) ).undual(), 0,1,0 );
    
    DRAW(Dlp(0,1,0,0));
}


void weighted(GLVApp& app){

    
    static double wa,wb,wc,wd,val,m,n;
    static bool bPnt;
    SET
        app.gui(wa,"wa",-10.0,10.0)(wb,"wb",-10.0,10.0)(wc,"wc",-1.0,1.0)(wd,"wd",-1.0,1.0);
        app.gui(val,"val", -1, 1)(m, "m", -10,10)(n, "n", -10,10)(bPnt);
    END

    static Pnt pa = PT(-1,0,0);
    static Pnt pb = PT(1,0,0);
    static Pnt pc = PT(0,-1,0);
    static Pnt pd = PT(0,1,0);

    pa[3] = wa; pb[3] = wb;
    pc[3] = wc; pd[3] = wd;

    Par para = pa ^ pb;
    Par parb = pc ^ pd;
    
    DRAW3(para.dual(),1,0,0);
    DRAW3(parb.dual(),0,1,0) ;
    
    cout << "A: " << para.dot() << endl;
    cout << "B: " << parb.dot() << endl;

    Par tpa = para * PI/m;// + parb * n;
    Par tpb = parb * PI/n;// + parb * n;

    Bst b = Gen::bst((tpa )* val);      

    if(bPnt){
        static Pnt src = PT(1,1,0); 
        app.interface.touch(src);
        DRAW(src);

        Pnt tmp = src;
        glBegin(GL_LINE_STRIP);
        ITJi(i,1000);
            Pnt np = Ro::loc( tmp.sp(b) );
            GL::vertex(np.w());
            tmp = np;
        END
        glEnd();
    } else {
        static Cir csrc = CYZ(.7);
        app.interface.touch(csrc);
        DRAW(csrc);
        Cir tmp = csrc;
        ITJi(i,1000);
            Cir nc = tmp.sp(b);
            DRAW(nc);
            tmp = nc;
        END        
        
    }
}

void twoknots(GLVApp& app){
    const int num = 2;
    static Knot k[num];
    
    ITJ(i, num) 
        DRAW3( k[i].ca(), 1,0,0 );
        DRAW3( k[i].cb(), 0,0,1 );
        k[i].calc();
        app.interface.touch( *(Frame*)&k[i] );
    END
    
    static float vAmt;
    
    SET
        app.gui(vAmt);
        k[0].pos() = PT(-2,0,0);
        k[1].pos() = PT(2,0,0);
    END
    
    static Pnt pnt = PT(1,1,1);
}

void knot(GLVApp & app) {

    static Knot k;
    
    static double vAmt, vM, vN, num, vYa, vYb;
    static bool bReset, bReal, bNullA, bNullB;
    static bool bDrawCoord, bDrawCir;
    SET
        app.gui(vAmt)(vM,"m",0,100)(vN,"n",0,100)(num,"num",0,10000);
        app.gui(vYa,"Dist",0,10)(bReset);
        app.gui(bReal,"Real")(bNullA, "nullA")(bNullB, "nullB")(bDrawCoord,"DrawCoord")(bDrawCir, "bDrawCir");
        vAmt = .01; vM = 3; vN = 3; num = 100; vYa = ROOT2;
    END
    
    k.dist() = vYa;
    k.amt() = vAmt;
    k.m() = vM;
    k.n() = vN;
    k.ra() = bReal;
    k.ba() = bNullA;
    k.bb() = bNullB; 
    k.calc();
    
    DRAW3(k.ca(),1,0,0); DRAW3(k.cb(),0,0,1);
    
    static Pnt pnt = PT(1,1,1);
    static Frame f(pnt, Rot(1,0,0,0));
    static Cir c = Ro::cir(pnt, Biv::xz, .2);
    
    app.interface.touch(pnt);
    
    Pnt p = pnt;
    static Pnt p2 = pnt;
    Pnt p3 = Ro::loc( k(p2) ); 
    p2 = p3;
    DRAW3(p3,1,0,0);
    
    if (bReset) {
        p2 = pnt;
        c = Ro::cir(pnt, Biv::xz, .2);
    }

    if (bDrawCir) {
        c = k(c);
        Cir tc = c;
        ITJi(i,num)
            tc = k(tc);
            DRAW3(tc,1,t,t);
        END 
    }
    
    if (bNullA) {
        cout << k.fa().tx() << endl; 
        DRAW( k.fa() );
//        DRAW3(,1,1,0);
    }
    
    ITJi(i,num)
         Pnt tmp = Ro::loc( k(p) );
         DRAW3(tmp,t,0,1-t);
         if (bDrawCoord) { DRAW3(tmp^k.pa(bReal), 1,0,0); DRAW3(tmp^k.pb(), 0,0,1); }
         p = tmp;
    END
    
    
}

//Orthogonality of Point Pair
void ortho(GLVApp& app){

    static Cir cir = CXY(1);
    
    
    
    static Pnt p = PT(1,1,1);
    static Pnt p2 = PT(0,2,2);
    app.interface.touch(p);
     app.interface.touch(p2);
    
    static double m, n;
    static double val, iter;
    static bool bDrawCoord;
    SET
        app.gui(m,"m",0,100)(n,"n",0,100)(val,"val",0,10)(iter,"iter",1,10000)(bDrawCoord,"coord");
    END
    
    Par pa = cir.dual();
    Par pb = (p^pa).dual();
    
    DRAW(cir);
    DRAW(p);    
    DRAW3( p ^ pa,1,0,0 );
    
    Par tpar =  ( pa * PI/m + pb * PI/n ) * val;
    
    cout << "A: " << pa.dot()[0] << " B: " << pb.dot()[0] << " C: " << tpar.dot()[0] << endl; 
    
    Bst bst = Gen::bst(tpar);
    
    Pnt pnt = p2;
    ITJi(i, iter)
        pnt = Ro::loc( pnt.sp(bst) );
        DRAW(pnt);
        if (bDrawCoord) DRAW3( pnt ^ pa, 1,1,0);
        if (bDrawCoord) DRAW3( pnt ^ pb, 0,1,1);
    END
 
       
}


void orbits(GLVApp& app){
    static Orbit a, b;
    
    app.interface.touch( a.sf() );
    app.interface.touch( b.sf() );
    
    static double iter, amt, m, n;
    static bool bNullA, bNullB, bRealA, bRealB;
    SET
        a.sf().pos( -1, 0,0 );
        b.sf().pos( 1, 0,0 );
        app.gui(iter, "iter",0,10000)(amt,"amt",0,10)(bNullA, "nullA")(bNullB)(bRealA, "realA")(bRealB);
        
        Rand::Seed(10);
        
    END
    
    a.real() = bRealA; b.real() = bRealB; 
    a.null() = bNullA; b.null() = bNullB;
    
    a.calc(); b.calc();
    DRAW( a.f() ); DRAW( b.f() );
    DRAW( a.cir() ); DRAW( b.cir() );
    
    static Pnt p = PT(1,1,1);
    app.interface.touch(p);
    Pnt pnt = p;
    
    ITJi(i,iter)
        
        Frame f = Frame::Twist(a.f(), b.f(), t);
        DRAW(f);
        
        Bst bst = Gen::bst( a.par(b,t) * amt );
        pnt = Ro::loc( pnt.sp (bst) );
        DRAW(pnt);
    END

}

void twistAroundACircle(GLVApp& app){

    static Frame f;
    app.interface.touch(f);
    DRAW( f.cyz() );
    
    static double amt, iter, period, pitch;
    SET app.gui(amt)(iter,"iter",100,10000)(period)(pitch); END
    
    static Pnt p = PT(1,1,0);
    app.interface.touch(p);
    DRAW(p);
    
    Par par = f.px(false);
        
    Pnt np = p;
    for (int i = 0; i < iter; ++i){

        np = Ro::loc( np.sp ( Gen::bst( par * amt) ) );
        DRAW(np);
    
    }
}

void vortexSheet(GLVApp& app){

    static Field<Vec> f(10,10,10);
    
    f.draw();

}

void GLVApp :: onDraw(){

 //   twistAroundACircle(*this);
//    weighted(*this);
//    twoknots(*this);
 //     knot(*this);
//      ortho(*this);
//        orbits(*this);
  
    vortexSheet(*this);    
                    
//    text("Use the Shift + arrow Keys to move camera, or Optoin + arrows to rotate Fibration",50,50);
}

int main(int argc, const char * argv[]) {

    cout << argv[0] << endl; 
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"KNOTS",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}

//Imaginary Point Pairs
//void imaginary(GLVApp& app){
//
//    //This is the point we are transforming
//    static Pnt p = PT(1,1,1);
//    DRAW(p);
//    app.interface.touch(p);
//
//    //Some Variables we can control onscreen
//    static float val, m, n, dense;
//    static bool bReset, bDrawCoord, bDrawGen, bDrawMany, bPa, bPb;
//    
//    
//    
//    static Frame fa, fb;
//    app.interface.touch(fa);
//    app.interface.touch(fb);    
//    DRAW(fa); DRAW(fb);
//    
//    const int numrand = 30;
//    static Pnt tp[numrand];
//    static Pnt np[numrand];
//    
//    SET 
//        app.gui(val,"val",-10,10)(dense,"dense",0,100)(m, "m", -10,10)(n,"n",-10,10)(bReset)(bDrawCoord)(bDrawGen)(bDrawMany, "fibers")(bPa,"a_real")(bPb,"b_real");
//        
//        val = .001; dense = 3; m = 3; n = 2; bPa = true; bPb = true; 
//
//        Rand::Seed(10);
//        for (int i = 0; i < numrand; ++i){
//            tp[i] = Ro::null(Rand::Num() * 1, Rand::Num()*1, Rand::Num()*1);            
//        }
//        
//        fa.set(PT(-.5,0,0)); fb.set(PT(.5,0,0));
//
//    END
//
//
//
//    //Orthogonal Point Pair Generators (Imaginary)
//    Par para = fa.px( bPa );//Ro::par( Ro::dls(fa.pos(), 1), fa.y() ); //RED
//    Par parb = fb.py( bPb  );//Ro::par( Ro::dls(fb.pos(), 1), fb.x() ); //BLUE
//    
//    Par Bp = para * PI/m; //RED
//    Par Bm = parb * PI/n; //BLUE
//
//    Bst Vp = Gen::bst(Bp * val);
//    Bst Vm = Gen::bst(Bm * val);
//    
//    //Add up Generators
//    Par parc = Bp + Bm;
//    Par tpar = parc * val/dense;
//    Bst bst = Gen::bst(tpar);
//    
//    int num = m * n / ( (val>0.001)?val:1);
//    
//    Pnt tmpa = p;
//    ITJi(i,num)
//        Pnt np = tmpa;
//        if (bDrawCoord){
//            DRAW3( np ^ Bp, 1,.2,.2); //RED
//            DRAW3( np ^ Bm, .2,.2,1); //BLUE
//        }
//        tmpa = Ro::loc( np.sp( Vm * Vp ) );
//        DRAW3(tmpa, 1,1,1);
//    END
//    
//    Pnt tmp = p;
//    glColor3f(1,1,1);
//    glBegin(GL_LINE_STRIP);    
//    ITJi(i, dense * num);
//        Pnt np = Ro::loc( tmp.sp(bst) );
//        tmp = np;
//        GL::vertex(np.w());
//    END
//    glEnd();
//    
//    
//    if (bReset){
//        Rand::Seed(10);
//        for (int i = 0; i < numrand; ++i){
//            tp[i] = Ro::null(Rand::Num() * 1, Rand::Num()*1, Rand::Num()*1);
//            np[i] = tp[i];            
//        }
//    }
//    
//    static double time = 0; time += 1.0; double st = sin( time / 180.0 );
//    
//
//    if (bDrawMany){
//        Pnt pp;
//        for (int i = 0; i < numrand; ++i){
//                Pnt tmp = tp[i];
//                glBegin(GL_LINE_STRIP);
//                for (int j = 0; j < dense * num; ++j){
//                    Pnt pt = Ro::loc( tmp.sp(bst) );
//                    glColor3f(0,1,1);
//                    GL::vertex( pt.w() ); 
//                    tmp = pt;
//                }
//                glEnd();
//                pp = Ro::loc( np[i].sp(bst) );
//                DRAW3( pp, 1,0,1 );
//                np[i] = pp;
//        }
//    }
//    
//    //Draw Generating Circles
//    if (bDrawGen){
//        DRAW3(para.dual(),1,0,0);    
//        DRAW3(parb.dual(),0,0,1);
//    }
//    
//}

