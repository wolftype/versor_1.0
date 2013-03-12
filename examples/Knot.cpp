//
//  Knot.cpp
//  Versor
//
//  Created by Pablo Colapinto on 2/4/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include "vsr.h"
#include "vsr_op.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include "vsr_fiber.h"
#include "vsr_motor.h"
#include "vsr_knot.h"
#include "vsr_mesh.h"
#include "vsr_field.h"

#include <iostream>
#include <stdio.h>

using namespace vsr;
using namespace glv;

void knot(GLVApp & app){


    static Pnt pnt = PT(2,0,0); 
    DRAWANDTOUCH(pnt);

    static double theta, phi, theta2, phi2, p, q, p2,q2,amt,amt2, iter;
    SET
        app.gui(theta,"theta",-1,1)(phi,"phi",-.5,.5)(theta2,"theta2",-1,1)(phi2,"phi2",-.5,.5);
        app.gui(p,"p",0,100)(q,"q",0,100)(p2,"p2",0,100)(q2,"q2",0,100);
        app.gui(amt,"amt",-100,100)(amt2,"amt2",-100,100)(iter,"iter",0,10000);
        p = 3; q = 2; p2 = 2; q2 = 5; iter = 1000; amt = .003; amt2 = .003;
    END

    //A Hopf Link
    HopfFiber hf;
    
    //Theta from -1 to 1, Phi from -.5 to .5)
    Cir c = hf.fiber(theta, phi);

    //feed in a vector, get link map
    Vec v(1,1,0);

    Vec tv = Coord::sph2vec( theta *PI, phi*PI);
    
    Cir b = hf.fiber( tv );
    Cir l = hf.fiber( -tv );
    
    DRAW(tv); 
    DRAW3(b,0,1,0); 
    DRAW3(l,1,0,0);
    
    Par par = b.dual() * PI/p + l.dual() * PI/q;
    Par par2 = b.dual() * PI/p2 + l.dual() * PI/q2;
    
   
    
    Bst bst = Gen::bst( par * amt );
    Bst bst2 = Gen::bst (par2 * amt2);
    
    vector<Pnt> vp;
    Pnt np = pnt;
    for (int i = 0; i < iter; ++i){
        vp.push_back(np);
        double t = PI* 1.0 * i/iter;
        Mot m = Gen::mot( DLN(0,1,0) * t * amt2);
        np = Ro::loc(np.sp( bst.sp(m) ) ) ;
        DRAW3(np^b.dual(),1,0,0);
        DRAW3(np^l.dual(),0,1,0);

    }
    
    glColor3f(1,1,1);
    glBegin(GL_LINE_STRIP);
    for (int i = 0; i < iter; ++i){
        GL::vertex(vp[i].w());
    }
    glEnd();
    
}

void knottedKnot(GLVApp& app){

    Mesh tm(GL::L);

    static Pnt p  = PT(2,0,0);
    DRAWANDTOUCH(p);

    static Cir c = CXZ(1);
    DRAWANDTOUCH(c);

    static Vec v(1,0,0); DRAWANDTOUCH(v);

    static double tp,tq,ta,iter;
    SET 
        app.gui(tp,"p",0,10)(tq,"q",0,10)(ta,"amt",-100,100)(iter,"iter",0,1000);
        tp = 3; tq = 2; ta = .002, iter = 1000;
    END

    TorusKnot tk(tp,tq,ta);
    TorusKnot sk(tp,tq,ta);

    
    tk.HF.cir() = c;
    tk.HF.vec() = v;
    Bst bst = tk.bst();
    
    Pnt np = p;
    Rot r(1,0,0,0);
    Drv d(1,0,0);
    
    ITJ(i,iter)

//        sk.HF.cir() = nc.sp
        ITJ(j,iter)
        tm.add(np);
         //tm.add(np + d);//Vec::x.sp(r) );
         np = Ro::loc( np.sp(bst) );
        
        END
    END
    
    tm.draw();
        
}

//WRITHE
void twistedKnot(GLVApp& app){
    
    static double amt, amt2, iter, size, writhe, numCables, speed;
    
    SET
        app.gui(amt,"amt")(amt2,"amt2")(iter,"iter",1,10000)(size,"size",-100,100)(writhe,"writhe",-100,100)(numCables,"numcables",1,100)(speed,"speed",0,10);
        amt = .001; iter = 1800; size = 3; writhe = 30; speed = 0;
    END
    
    static double phase = 0; phase += speed;
    Vec tv = Vec::x.rot( Biv::xy * phase );
    /////////////////////
    
    TorusKnot tk(3,2,amt);
    tk.HF.vec() = tv;
    
    static Pnt p = PT(2,0,0);  DRAWANDTOUCH(p);
   // p = Ro::loc( p.sp( tk.bst() ) );
    
    Pnt np = p;
    ITJ(i,iter)
        Pnt tp = Ro::loc( np.sp( tk.bst() ) );
        
        Cir nc = (tp^np).undual().dil( np, size );
        tk.cir.push_back( nc ) ;
        tk.pnt.push_back( np );
        np = tp;

    END

    np = p;
    ITJ(i,iter)
        double t = writhe * i/iter;

        //A LOCAL knot meridian
        TorusKnot sk(3,2,amt2); sk.HF.cir() = tk.cir[i];
        
        Par tp = Ro::par_cir( tk.cir[i], t * PI);
        
        DRAW3( tp, 1, 0, 0 );

        np = Ro::loc( np.sp ( sk.bst() ) );
        DRAW3(np,1,1,0);

    END

}

void twoKnots(GLVApp& app){

    static Field<Vec> f(10,10,10,.2);
    static Field<Cir> c(2,1,1);

    static Field<Vec> v(10,10,10);
    
    static double amt, iter;
    static bool bReset;

    static double p1,p2,q1,q2, wtA, wtB;
    SET
    
        HopfFiber hf;
        c[0] = hf.fiber(Vec(1,0,0));//CXZ(1).trs(-1,0,0);
        c[1] = hf.fiber(Vec(-1,0,0));//CXZ(1).trs(1,0,0);
        
        app.gui(amt, "amt",-100,100)(iter,"iter",0,10000)(bReset);
        app.gui(p1,"p1",1,10)(q1,"q1",1,10)(p2,"p2",1,10)(q2,"q2",1,10)(wtA,"wtA")(wtB,"wtB");
        p1 = p2 = 3; q1 = q2 = 2;
        
    END

    TorusKnot tkA(p1,q1);
    TorusKnot tkB(p2,q2);
    
    ITJ(i,c.num()) DRAWANDTOUCH(c[i]); END
    
    tkA.HF.cir() = c[0];
    tkB.HF.cir() = c[1];
    
    Mesh tm( GL::LS );
    
    ITJ(i,v.num())
        Pnt& op = v.grid(i);
    
//        double da = Ro::sqd(op, Ro::loc(c[0]) );
//        double db = Ro::sqd(op, Ro::loc(c[1]) );
        double da = Ro::size(op ^ c[0].dual(), false);
        double db = Ro::size(op ^ c[1].dual(), false);
        
        //if (da < FPERROR ) da = 1; if (db < FPERROR) db = 1;
        Par par = tkA.par() * (wtA/da) + tkB.par() * (wtB/db);// ); //tkA.par() / da + tkB.par() / db; 
        
        Bst bst = Gen::bst( par * amt );
    
        Pnt np = Ro::loc( op.sp(bst) );
        v[i] = np - op;
        op = np;
    END
    
    static Pnt pnt = PT(2,2,0); DRAWANDTOUCH(pnt);
    Pnt tp = pnt;
    ITJ(i,iter)
        tm.add(tp);
        Pnt& op = tp;
//        double da = Ro::sqd(op, Ro::loc(c[0]) );
//        double db = Ro::sqd(op, Ro::loc(c[1]) );
        double da = Ro::size( (op ^ c[0].dual()), false);
        double db = Ro::size(op ^ c[1].dual(), false);
        
 //       DRAW(op <= c[0]);
 //       if (da < FPERROR ) da = 1; if (db < FPERROR) db = 1;
        Par par = tkA.par() * (wtA/da) + tkB.par() * (wtB/db); //* (wtA/da) * (wtB/db)
        
        Bst bst = Gen::bst( par * amt );
        tp = Ro::loc(tp.sp(bst));
        
    END
    
    tm.draw();
    
    if (bReset) v.basicInit();
    
    v.drawPush(1,0,0);
    
}

void knotting(GLVApp& app){

    static double dt, iter, recur, amt,p,q, mq, numlines;
    
    
    SET
        app.gui(dt,"dt",0,10)(amt, "amt", -10,10)(iter,"iter",0,10000)(recur,"recur",0,100)(p,"p",0,100)(q,"q",0,100)(numlines,"numlines",1,100)(mq,"mq",0,100);
        iter = 1000; amt = .001; recur = 3; dt = .01; p = 1; q = 1; 
    END
    static Cir mc = CXZ(1);  DRAWANDTOUCH(mc);
    
    //A Knotting
    TorusKnot tk(p,q, amt);
    
    tk.HF.cir() = mc;
    Cir& cir = tk.HF.cir();
    
    //A Translating
    Trs trs = Gen::trs(0.0, -dt, 0.0);

    static Pnt pnt = PT(0,2,0); DRAWANDTOUCH(pnt);
    //Cir tc = Ro::cir( pnt, Biv::xz, -1 ); DRAW(tc);
    ITJ(k,numlines)
        vector<Pnt> ts;

        double kt = 1.0 * k/numlines * PI;
        Pnt np = pnt.trs(1.0* k/numlines,0,0);
        
        //A Line Trajectory
//        ITJ(i,iter)
//         ts.push_back(np);
//         np = np.sp(trs);
//        END

        ITJ(i,iter)
            //np = np.sp(trs);    
            double t= 1.0 * i/iter; double it = sin( t * PI ) ;//double it = -.5 + t;
            ITJ(m,mq) it *= it; END
            double da = 1 + Ro::size( np ^ cir.dual(), false);// Ro::sqd(ts[i], Ro::loc(cir) );// 
            
            //Bst bst = tk.bst( 1.0 / da );
            Bst bst = tk.bst(amt * it );//Gen::bst( tk.HF.fiberB().dual() * amt * it);//(1.0/da) );//tk.bst( -1.0  + 2 * t);
            //cout << i << " " << sin(t*PI) << endl; 
            ITJ(n,recur)
           
                //cout << da << endl; 
                np = Ro::loc( np.trs(0.0,t * -dt,0.0).sp(bst) );
            END
            
            ts.push_back(np);
            
        END
        
        //A Line Strip Mesh
        Mesh tm(GL::LS);        
        tm.add<Pnt>( ts.begin(), iter );
        tm.draw();
    END
}

void kink(GLVApp&app){

    Lin y = LN(0,1,0);
    Dll x = DLN(1,0,0);
    
    static double spacing, len, period, pitch;
    SET
        app.gui(spacing)(len)(period, "period",0,10)(pitch,"ptich",0,10);
    END
    
    ITJ(i,1000);
        double t=1.0 *i/1000; double tt = -1.0 + 2*t;
        double ypos = spacing*tt*len*10;
        Pnt p = PT(0, ypos, 0 );
        DRAW(p);
        
        bool above = ( ypos > 0 ) ? true : false;
        
        Dll m = Twist::Along(x, period * (above ? PI : -PI ),pitch*(above ? PI : -PI ));
        Pnt p2 = p.sp( Gen::mot( m * sin( t * PI ) ) ); 
        DRAW3(p2,1,0,0);
    END

}

void knotEnergy(GLVApp& app){

    TorusKnot tk(5,2);
    vector<Pnt> loop;
    
    static double theta, phi;
    
    static double amt, R;
    
    SET
        app.gui(theta)(phi);
        app.gui(amt,"amt",0,10)(R,"R",1,100);
        amt = .01; R = 10;
    END
    
//    for (int i = 0; i < 
    
    
//    static Vec v = Vec::x;
//    DRAWANDTOUCH(v);
    Vec v = Vec::x.sp ( Gen::rot(theta * PI, -PIOVERFOUR + phi * PIOVERTWO ) );
    DRAW(v);
    tk.HF.vec() = v;
    
    int iter = ( R / amt );
    
    Bst tb = tk.bst( amt / 2.0 );

    static Pnt pnt = PT(2,0,0); DRAWANDTOUCH(pnt);
    Pnt np = pnt;
    for (int i = 0; i < iter + 1; ++i){
        loop.push_back(np);
        np = Ro::loc( np.sp(tb) );
        DRAW(np);
    }
    
    //forward and reverse arc measurements
    vector<double> globalA;
    vector<double> globalB;
    vector<double> local;

    double totalA = 0;
    
    //integrated sums
    for (int i = 0; i < loop.size(); ++i){
        
        //Neighbor
        int idxA = i < loop.size() - 1 ? i + 1 : 0;
        
        double ta = Ro::dist( loop[i], loop[idxA]);
        local.push_back(ta);
                
        totalA += ta;
        
        globalA.push_back( totalA );
    }
        
    
    double energy = 0;
    for (int i = 0; i < loop.size(); ++i){    
    
        double ta = 0;
    
        for (int j = 0; j < loop.size(); ++j){
        
            if ( i != j ) {
                double chord = Ro::sqd( loop[i], loop[j] );
                
                double diffA = fabs( globalA[j] - globalA[i] );
                double diffB = fabs( (totalA - globalA[j] ) + globalA[i] );//fabs( globalB[j] - globalA[i] );
                
                double diff = diffA < diffB ? diffA : diffB;
                
                ta += ( ( 1.0 / chord ) - (1.0 / (diff * diff) ) ) * local[j];
            }
        }
        
        energy += ta * local[i];
   }     
   
//   for (int i = 0 ; i < globalA.size(); ++i){
//    cout << i << "\t" << globalA[i] << "\t" << (totalA - globalA[i]) << endl; 
//   }
   cout << energy << " " << tb.wt() << " " << tb.norm() << " " << tb.rnorm() << endl; 

}

void GLVApp :: onDraw(){


 //       knot2(*this);
 //   knot(*this);
  //  knottedKnot(*this);
//        twoKnots(*this);
  //      knotting(*this);
  //  kink(*this);
 //   twistedKnot(*this);

    knotEnergy(*this);
}

int main(int argc, const char * argv[]) {
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"VSR",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}