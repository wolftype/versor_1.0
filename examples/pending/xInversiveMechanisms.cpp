//
//  Inversions.cpp
//  Versor
//
//  Created by Pablo Colapinto on 12/3/12.
//  Copyright (c) 2012 WOLFTYPE. All rights reserved.
//

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"

#include "vsr_field.h"
#include "vsr_mesh.h"

#include <iostream>
#include "vsr_tests.h"

using namespace vsr;

//DIAGRAMMATIC
void cusp(GLVApp& app){

    static Field<Pnt> f(1,100,1,.2);
    static Frame frame(PT(-1,0,0));
    
    Mesh line(GL::LS);
    
    vector<Pnt> pnts;
    vector<Vec> vec;
    
    TOUCH(frame); DRAW3(frame.bound(),1,0,0);
    
    static double q, tot, amt, spread;
    static bool bWt,bDrawArrow;
    
    SET 
        app.gui(q,"q",-10,10)(tot,"tot",-1,1)(amt,"amt",-100,100)(spread,"spread",.1,10)(bWt,"wt")(bDrawArrow,"drawArrow"); 
        amt = -5; q = 5; spread = .1; q = 1;
    END
    
    f.respace(spread);
    
    ITJ(i,f.num())
    
    
        double t = 1.0 * i / f.num();
        double dist = Ro::sqd( f.grid(i), frame.pos() );
        double tmp  = tot * amt * ( bWt ? 1.0 / (.01 + dist) : 1.0 );

        tmp += tot * q;

        Dls np = Ro::dls_pnt(f.grid(i), tmp ); 
        Dls ip = Ro::dls_pnt(f.grid(i), -tmp ); 
                
        Cir c  = Ro::cir( ip, Biv::xy );

        f[i] = np;

        Pnt sp = Ro::loc (frame.pos().re( f[i] ));
        pnts.push_back(sp);


        line.add(sp);
        vec.push_back( sp - f.grid(i) );
        
        double rt = i / 5.0;
        if ( ( rt - floor(rt) == 0 ) && !( int(rt) & 1 ) ) DRAW3( c, 1, .3, .3);
        
        
    END
    
    //f.drawGrid(0,0,0);
    GL::Glyph::Line(f.grid(0), f.grid( f.num() -1 ) );
    glLineWidth(2);
    line.draw(0,0,1);

    ITJ(i, pnts.size() )
        double rt = i / 5.0;
        if ( ( rt - floor(rt) == 0 ) && !( int(rt) & 1 ) ) {
            DRAW3(pnts[i],0,1,0);
        
            if (bDrawArrow) { GL::Draw::Push(f.grid(i)); DRAW3(vec[i], .3,.3,.3); GL::pop(); }
        }
        
    END
}

//kink
void kink(GLVApp& app){

    vector<Cir> vc;
    vector<Dls> vd;
    
    static Pnt p = PT(0,0,0);
    DRAWANDTOUCH(p);
    
    static Dll dll = DLN(0,1,0);
    
    static double radius, iter, length, nb;
    static bool bDrawSpheres,bDrawOriginSphere,bDrawCircles;
    
    SET app.gui(radius, "radius")(iter, "iter")(length, "length",0,10)(nb,"numbraids",0,100)(bDrawOriginSphere,"drawOriginSphere")(bDrawSpheres,"drawSpheres"); END
    
    int numbraids = nb;
    
    vector<Mesh> m(numbraids, GL::LS);
    
    static Cir c = CXZ(1).trs(1,1,0);

    DRAWANDTOUCH3(c,1,1,1);
    
    Dls dls = Ro::dls(p,radius*5);
    vd.push_back(dls);        
    
    Cir nc = c.re(dls);
    DRAW3(nc,0,0,1);
    
    ITJ(i,iter*1000)
        double t= 1.0 * i/(iter*1000);
        Dls td = dls.trs( Biv(dll).dual() * t * length);
        Cir tc = c.re(td);
        vc.push_back(tc); vd.push_back(td);
        
        ITJ(j,numbraids)
            double theta = PI * j/numbraids;
            m[j].add( Ro::pnt_cir(tc,theta) );
        END
    END
    
    ITJ(i,numbraids)
        double t = 1.0 * i/numbraids;
        DRAW3( Ro::pnt_cir(c, PI * t), t,0,1-t);
        DRAW3( Ro::pnt_cir(nc, PI * t), t,0, 1-t);
        m[i].draw(0,1,0);
    END
    
    if (bDrawOriginSphere) DRAW4(dls,1,1,1,.3);
    ITJ(i,vd.size())
        if (bDrawSpheres) DRAW4(vd[i],1,1,1,.1);
        if (bDrawCircles) DRAW4(vc[i],1,1,1,.1);
    END
}





void intussuception(GLVApp& app){


    static double amt;
    static bool bLine, bShow;
    SET app.gui(amt,"amt",-100,100)(bLine, "line")(bShow,"show ref"); END
    
    static Frame frame( PT(-1,0,0) );
    TOUCH(frame);
    DRAW(frame.lz());
    
    static Field<Pnt> f(1,19,10,.5);
    
    int iter = 10;
    
    UVMesh mesh(f.h(), f.d());
    
    IT2( f.h(), f.d() )
        
        double t = sin(3*PI*u);//-1.0 + 2*u;
        
        int idx = f.idx(1,i,j);
        Pnt& p = f.at(1,i,j);      
         p = Ro::dls_pnt( f.grid(idx), amt * t);
        
        Dls td = frame.bound().re( p );
        Cir tp = Cir(frame.lz()).re( p );
        if (bShow) bLine? DRAW(tp) : DRAW(td);
        
        Pnt np =  bLine ? Ro::loc(tp) : (td/td[3]).null();
        mesh.add(np);
        DRAW3( np,0,1,1);
    END2
    
    mesh.draw(.3,.3,.3);
    
    //Sphere
    DRAW4(frame.bound(), 1,0,0,.5);
}

//distance based
void intussuception2(GLVApp& app){

    //CONTROL POINT
    static Frame frame( PT(0,1,0) );
    
    TOUCH(frame); //DRAW(frame.lz());
    
    //SURFACE MESH
    static Field<Pnt> f(20,1,20,.5);

    //Amt, and Gui Draw Booleans
    static double amt, curve,q, tot;
    static bool bWt, bLine, bShow, bDrawSphere;
    
    SET 
        app.gui(bWt,"use dist")(amt,"amt",-100,100)(q,"q",-100,100)(tot,"tot",-100,100)(curve,"curve",-10,10)(bLine, "use Line ")(bShow,"show ref")(bDrawSphere,"draw sphere"); 
        frame.scale(.2);
        bLine = true;
    END
    
    
    int iter = 10;
    UVMesh mesh(f.w(), f.d());

    Bst bst = Gen::bst( frame.txScaled() * curve );
    Cir tc = Cir(frame.lz()).sp( bst );
    
    if (bLine) DRAW3(tc,0,1,0);
    
    ITJ( i, f.num() )
        
        
        double dist2Line = ( f.grid(i) <=  tc.dual() ).dot()[0];
        
        double dist2pos = Ro::sqd( frame.pos(), f.grid(i) );
        
        Pnt& p = f[i]; 
        
        double wt = amt * ( !bWt ? 1.0 : 2.0 / ( 1.0 + ( bLine ? dist2Line : dist2pos ) ) );
        
        p = Ro::dls_pnt( f.grid( i ), tot * (wt + q) );
        
        //Reflect Control into Surface
        Dls td = frame.bound().re( p );
        Cir tp = tc.re( p );
        
        Pnt np =  bLine ? Ro::loc(tp) : Ro::loc(td);//bLine ? Ro::loc(tp) : (td/td[3]).null();
        
        mesh.add(np);
        DRAW3( np,0,1,1);
        if (bShow) bLine? DRAW3(tp,1,.5,.5) : DRAW3(td,1,.5,.5);
    
    END
    
    mesh.draw(.3,.3,.3);
    
    //Sphere
    if (bDrawSphere) DRAW4(frame.bound(), 1,0,0,.5);
}


void bend(GLVApp& app){
    //CONTROL POINT
    static Frame frame( PT(0,0,0) );
    
    TOUCH(frame); //DRAW(frame.lz());
    
    //SURFACE MESH
    static Field<Pnt> f(20,1,20,.5);

    //Amt, and Gui Draw Booleans
    static double amt, xCurve,yCurve, vType, doff;
    static bool bWt, bLine, bShow, bXreal, bYreal;
    
    SET 
        app.gui(bWt,"wt")(amt,"amt",-100,100)(xCurve,"xCurve",-100,100)(yCurve,"yCurve",-100,100)(bXreal, "x real")(bYreal,"y real")(vType,"type",0,3)(doff,"dist off",-10,10); 
        frame.scale(.2);
        bLine = true;
        bWt = true;
    END
    
    UVMesh mesh(f.w(), f.d());
    
    Par xPar = frame.py( bXreal ) * xCurve;//frame.tyScaled() * xCurve;
    Par yPar = frame.py( bYreal ) * yCurve;//frame.tyScaled() * yCurve;
    
    Bst xBst = Gen::bst( xPar );
    Bst yBst = Gen::bst( yPar );

    Cir tx = Cir(frame.lx()).sp( xBst );
    Cir ty = Cir(frame.lz()).sp( yBst );
    
    DRAW3(tx,1,0,0);
    DRAW3(ty,1,0,0);
    
    
    int type = vType;
    ITJ( i, f.num() )
        
        
        double dist2XLine = ( f.grid(i) <=  ( bWt ? tx.dual() : Par( frame.dlx() ) ) ).dot()[0];
        double dist2YLine = ( f.grid(i) <=  ( bWt ? ty.dual() : Par( frame.dlz() ) ) ).dot()[0];
        
        double dist2Cen = Ro::sqd(f.grid(i), frame.pos() );
        double dist2circ = (f.grid(i) <= frame.py(false).dual() ).dot()[0];
        
        Pnt& p = f[i]; 
        
        Par tpar = ( xPar * 1.0 / ( doff + dist2XLine )  + yPar * 1.0 / (doff + dist2YLine ) ) ; 
        
        Par tpar2 = (xPar + yPar) * (1.0 / (doff + dist2Cen) );
        Par tpar3 = (xPar + yPar) * (1.0 / (doff + dist2circ) );

        Pnt np;
        
        switch(type){
            case 0: np =  Ro::loc( p.sp( Gen::bst( tpar * amt ) ) ); break;
            case 1: np =  Ro::loc( p.sp( Gen::bst( tpar2 * amt ) ) ); break;
            case 2: np =  Ro::loc( p.sp( Gen::bst( tpar3 * amt ) ) ); break;
        }   
            
        
        mesh.add(np);
        //DRAW3( np,0,1,1);
            
    END
    
    mesh.draw(0,1,1);
    mesh.drawTri(.3,.3,.3);
    //Sphere
    DRAW4(frame.bound(), 1,0,0,.5);

}


void pinch(GLVApp& app){
    //Plane
    static double amt, iter;
    SET app.gui(amt,"amt",-100,100)(iter, "iter",-100,100); END
    
    static Field<Pnt> f(20,1,20,.2);
    UVMesh ma(20,20);
    
    static Dls da = Ro::dls(0,0,0,.2);
    static Dls db = Ro::dls(0,-2,0,.2);
    
    TOUCH(da); TOUCH(db);
    
    Par p = db ^ da;
    
//    DRAW3(p,0,1,1);
    DRAW3(p.undual(),1,1,0);
    
//    cout << Ro::size(p,true) << endl;
//    cout << Ro::size(p,false) << endl;
    
    ITJ(i,f.num())
        double dist = Ro::sqd( f.grid(i), PAO );
        Bst bst = Gen::bst( p * amt  ); // / (.01 + dist) 
//        f[i] = Ro::loc( f.grid(i).sp( bst ) ); 
//        Cir c = f.grid(i) ^ p;
        
        Pnt np = f.grid(i);
        ITJ(j, iter * 1.0 / (.01 + dist ) )
            np = Ro::loc( np.sp(bst) ); 
        END
        f[i] = np;
        ma.add(f[i]);
    END
    
    ma.draw();
    DRAW4(da,1,0,0,.2);
    DRAW4(db,1,0,0,.2);
}

void GLVApp :: onDraw() {
    bend(*this);
 //   cusp(*this);
//    kink(*this);
//    intussuception2(*this);
//    pinch(*this);
}

int main(int argc, const char * argv[]) {
     
    File::setdir( argv[0] );       

    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
    		
	Window * win = new Window(1000,500,"Boosted Surface",&glv);
    GLVApp * app = new GLVApp(win);    
    app->gui.colors().back.set(0,0,0);
	glv.colors().back.set(1,1,1);
    
    glv << app;
        
    Application::run();

    return 0;
}

//void tunnel(GLVApp& app){
//
//    static Par par = PAIR(1,0,0);    
//    DRAWANDTOUCH(par);
//    Cir c = par.dual();
//    DRAW( c );
//    
//    ITJ(m,100)
//        double t = 1. * m/100;
//        ITJ(i,10)
//            Pnt p = PT( -1.0 + 2.0*i/10, 1.0, 0);
//            Pnt p2 = PT( -1.0 + 2.0*i/10, -1.0, 0);
//            DRAW(p);  DRAW(p2);
//            Pnt np = p.re( c.trs(t,0,0) );
//            Pnt np2 = p2.re( c.trs(t,0,0) );
//            DRAW3(np,1,0,0);
//            DRAW3(p.re(c.dual()),0,1,0);
//            DRAW3(np2,1,0,1);
//            DRAW3(p2.re(c.dual()),0,1,1);
//        END
//    END
//}
//
//
//
//void handle(GLVApp& app){
//
//    static Cir c = CXZ(.5);
//    TOUCH(c);
//
//    vector<Pnt> pnt;
//    int iter = 100;
//    double w = 3.0;
//    
//    static double rad;
//    SET app.gui(rad,"rad",-100,100); END
//    
//    ITJ(i,iter)
//        double t= -1.0 + 2.0* i/iter;
//        Dls dls = Ro::dls( PT(0,w *t, 0 ), rad);                                                                                                                                                                                                   
//        pnt.push_back( dls );
//    END
//    
//    ITJ(i,iter)
//        Cir tc = c.re(pnt[i]);
//        DRAW4(pnt[i],1,0,0,.1);
//        DRAW3(tc,0,1,0);
//    END
//
//}
