//
//  TestTransformation.cpp
//  vsr
//  BOOST TESTS
//  Created by Pablo Colapinto on 3/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "Lattice.h"
#include "MotorCouple.h"
#include "Boost.h"
#include "GLVInterfaceImpl.h"
#include "Optics.h"

using namespace vsr;
using namespace glv;


Window * win;
GLVApp * app;

void trv(GLVApp& app){
    
    //given Circle in xy plane with radius of .5
    static Cir cir = CXY(1);  cir.draw(0,1,0);

    //given point p of mouse position near the origin.
    Pnt p = app.mouse().origin;
    
    //Tangent on cir at point p
    Par tan = Ta::at(cir, p, false);
    
    Lin tanLine = tan ^ Inf(1);    
    tanLine.draw();
    
    Lin bisect = Ro::cen(cir) ^ Ro::cen(tan) ^ Inf(1);
    bisect.draw(1,1,0);
    
    Par par = ( bisect.dual() ^ Ro::sur(cir) ).dual();
    par.draw(1,0,0);
    //can we find transformation X that takes lin to cir?
    
    //we need a roving tangent
    static Frame fr; //fr.drawX(1,0,0);
    
    app.interface.touch(fr);
    
    int num = 100;
    
    IT(num) 
    
        double t = 1.0 * i/num;
//        Tnv tnv( fr.x() * fr.scale() * t );
        Par p = tan; //p[0] *= t; p[1] *=t; p[2] *= t;//tnv.trs( fr.pos() );
       // cout << p << endl;
        Cir tc = cir.sp( Gen::tpar(p) );
        tc.draw();
    
    END
    
}

void tangentFrame(GLVApp& app){
    static Frame f;
    
    app.interface.touch(f);
    
    static double x, y, z;
    
    SET
        app.gui.add(DIALER,"x",x,-1,1);
        app.gui.add(DIALER,"y",y,-1,1);
        app.gui.add(DIALER,"z",z,-1,1);
    END
    
    Cir cxy = f.cxy().trs(f.x());
    cxy.draw(1,0,0);
    Cir cxz = f.cxz().trs(f.z());
    cxz.draw(0,1,0);
    Cir cyz = f.cyz().trs(f.y()); 
    cyz.draw(0,0,1);
    
    Lin lx = f.xl();  Lin ly = f.yl(); Lin lz = f.zl();
    lx.draw(1,0,0); ly.draw(0,1,0); lz.draw(0,0,1);
    
    int num = 10;
    
    //TEST
    
    IT(num+1)
        double t = 1.0 * i/num;
        static Cir c;
        
//        c = cxy.sp(f.ppx(t*x)); c.draw(1-t,0,t);
//        if (Ro::siz(c) == 0 ) Lin(c).draw(1,0,0);
//    
//        c = cxz.sp(f.ppz(t*y)); c.draw(t,1-t,0);
//        if (Ro::siz(c) == 0 ) Lin(c).draw(0,1,0);
//        
//        c = cyz.sp(f.ppy(t*z)); c.draw(0,t,1-t);
//        if (Ro::siz(c) == 0 ) Lin(c).draw(0,0,1);     

        // dx/dz and dx/dy
        c = lx.sp(f.ppz(t*z)); c.draw(1-t,0,t);
        c = lx.sp(f.ppy(t*y)); c.draw(1-t,0,t);
        
        // dy/dx and dy/dz
        c = ly.sp(f.ppx(t*x)); c.draw(t,1-t,0);
        c = ly.sp(f.ppz(t*z)); c.draw(t,1-t,0);
        
        // dz/dx and dz/dy
        c = lz.sp(f.ppx(t*x )); c.draw(0,t,1-t);
        c = lz.sp(f.ppy(t*y)); c.draw(0,t,1-t);
    
    END
    
}

void circleSegments(GLVApp& app){
    
    
    glColor3f(0,0,0);
    const int num = 1000; //NUMBER OF CIRCLES
    static Cir cir[num];
    
    static bool bSign;
    static double vStart, vAmt;
    SET
        app.gui.add(BUTTON, "sign", bSign);
        app.gui.add(DIALER, "start", vStart, -1, 1);
        app.gui.add(DIALER, "amt", vAmt, -1, 1);
    END 
    
    static Cir test = CXY(1); app.interface.touch(test); Draw::SegRad(test);//test.draw(0,1,0);
    
//    Draw::SegTo(test, TWOPI * vStart, TWOPI * vAmt);
//    Draw::SegTo(test, TWOPI * vStart, TWOPI * vAmt);
    
    static Frame f; //app.interface.touch(f);
        
    IT(num)
        double t = 1.0 * i/num;
        
        cir[i] = test.sp( f.ppx( t*f.scale()*vAmt ) );          //SPIN CIR BY FRAME PP GENERATOR
        double k = Ro::cur( cir[i] );                           //GET CURVATURE
        bool sign = Op::sn( Ro::dir(cir[i]), Biv::xy );
        Draw::Seg( cir[i], 2 * PI * k, (bSign) ? sign : !sign );
    END 
}

//PATCHES OF SPHERES
void spherePatches(GLVApp& app){
    
    static Dls s = Ro::dls3(0,0,0); app.interface.touch(s); 
    
    static double phi, theta, rad;
    
    SET
        app.gui.add(DIALER, "phi", phi, -PI, PI);
        app.gui.add(DIALER, "theta", theta, -PI, PI);
        app.gui.add(DIALER, "rad", rad, -PI, PI);
    END
    
    //static Dlp dlp(1,0,0); app.interface.touch(dlp); 
    static Biv biv(1,0,0); app.interface.touch(biv); 
    
    
    
    Cir c = Ro::pnt_flat( Ro::null(s), biv, rad );  //(dlp ^ s).dual();
    
    
    
    Draw::Seg( c, TWOPI * phi );
    
    biv.draw(0,1,1);
    s.draw(0,1,0,.5);
}

//in progress . . .
void tangentSpace(GLVApp& app){
    
    static Lattice<Dls> f(4,4,4);
    
    //IT(f.num()) f.grid(i).draw(); END
    static float amt;
    SET
        app.gui.add(DIALER, "amt", amt, -10, 10);
    END
    
    static Dls s = Ro::dls3(0,0,0);
    
    app.interface.touch(s);
    
    Pnt p = app.mouse().origin;
    //p = p.dil(amt);
    
    
    Pnt p2 = p.re(s);
    p2.draw(0,1,1);
    
    //tangent to s at p
    
    Cir ts = Ta::at(s, p, true);
        
    //s.draw();
    ts.draw(1,1,0);
    //ts.dual().draw(0,1,1);
    p.draw();
    
    IT(10)
        VAL(10)
    Cir c3 = CXY(1) * (1- t) + ts * t;
        Cir c1 = CXY(1).re( ts.dual() * amt );
    Cir c2 = CXY(1).sp( Gen::tpar( ts.dual() * t,  amt * Ro::rad(ts) )  );
//        c.sp( Gen::tpar( ts.dual() * t * amt ) );
    c1.draw(0,1,0); c2.draw(0,0,1); c3.draw(1,0,0);
    END
        
    Ro::sur(ts).draw(1,0,1,.3);
    
}

void test(GLVApp& app){
    
    static Vec v(1,0,0); 
    //static Pnt p = Ro::dls3(-1, 0, 0, 2); 
    
    
//    static float amt;
//    SET    
//    app.gui.add(DIALER, "amt", amt, -10,10);    
//    END 
    cout << v << endl; 
    v.draw(); //p.draw();
    app.interface.touch(v);
//    app.interface.touch(p);
}

void boost (GLVApp& app){
    
    static Pnt a = Ro::dls3(1,0,0, .1);
    static Pnt b = Ro::dls3(-1,0,0, .1);
    a.draw(); b.draw();
    app.interface.touch(a); app.interface.touch(b);
    
    Pnt_Pnt pp = a * !b;
    
    //extract par
    Par par(pp);
    
    const int num = 100;
    IT(num)
    VAL(num)
        Pnt p = a.sp( Gen::tpar(par * t) );
        Ro::null_cen(p).draw();
    END 
    
}

void series(GLVApp& app){
    
    static const int n = 3;
    
    static double wt;
    
    SET
        app.gui.add(DIALER, "wt",wt,-5, 5);
    END 
    
    static Par par[n];    
    static Pnt pnt[n];    
    
    static Frame f; app.interface.touch(f); //f.bound().draw();
    static Cir c = CXY(1).trs( 0.0, -1.0, 0.0 ); 

    Pnt p = f.pos();  p[3] = wt;  p.draw(1,0,0);
    
    c.draw(0,1,0);
    
    IT(n) VAL(n)
 
        pnt[i] = Ro::null(10 * t, 0, 0);
        pnt[i][3] = t;
        par[i] = pnt[i] ^ f.pos();
    
        for (int j = 0; j < 10; ++ j){
            double tt = j / 10.0;
            Cir tc = Op::sp ( c, Gen::tpar ( par[i] * tt ) );
            glColor3f ( t, 0, 1 - t ) ;
            Draw::SegRad ( tc ) ;//.draw();
        }
    
    END
}

void twist(GLVApp& app){

    
    static float pitch, period;
    
    SET
        app.gui.add(DIALER, "pitch", pitch, -PI, PI);
        app.gui.add(DIALER, "period", period, -PI, PI);
        
    END
    
    static Twist twist;
    twist.period(period);  
    twist.pitch(pitch);
    
    Dll dll = twist.dll();//DLN(0, 1, 0);    
    //static Dll dll2 = DLN(0, 1, 0).trs(1,0,0); 
    static Cir c = CXY(1);
    
    IT(10) VAL(10)
       // t = t * PI;
        Mot m = Gen::mot( dll*t );
        Cir tc = c.sp(m);
        tc.draw(t,0,1-t);
        //dll = Ro::ax(tc);

    END
}


void twistedBoost(GLVApp& app){
    
    static Twist twist;
    static Boost boost;
    
    static Cir c = CXY(1);   app.interface.touch(c); c.draw();
    static Dll d = DLN(0,1,0); //app.interface.touch(d); d.draw();
    
    static float tpitch, tperiod, bpitch, bperiod, btang, bmnk;
    SET
        app.gui.add(DIALER, "tpitch", tpitch, -10,10);
        app.gui.add(DIALER, "tperiod", tperiod, -10,10);
        app.gui.add(DIALER, "bpitch", bpitch, -10,10);
        app.gui.add(DIALER, "bperiod", bperiod, -10,10);
        app.gui.add(DIALER, "btang", btang, -10,10);
        app.gui.add(DIALER, "bmnk", bmnk, -10,10);
    END
    
    twist.dll() = d;
    
    Frustrum f = app.camera().frustrum();
    
    Cir cbl = c.trs(f.box.bl);
    Cir cbr = c.trs(f.box.br);
    Cir ctr = c.trs(f.box.tr);
    Cir ctl = c.trs(f.box.tl);
    
    IT(4) VAL(4)
    double u = t;
    ITJ(j,4) VALJ(j,4)
    double v = t;
    
    Cir fin = Interp::surface<Cir>(cbl, cbr, ctr, ctl, u, v);

    boost.par( fin.dual() );
    
    twist.pitch(tpitch);
    twist.period(tperiod);
    
    boost.biv() *= bperiod;
    boost.drv() *= bpitch;
    boost.tnv() *= btang;
    boost.mnk() *= bmnk;
    
    
    
    int n = 3;
    ITJ(k,n) VALJ(k,n)
        Cir tc = CXY(1).sp( twist.mot( -1.0 + 2*t ) );
        ITJ(l,n) VALJ(l,n)
    
            
            Cir ttc = tc.sp(boost.bst( -1.0 + 2*t));
            glColor3f(.2,1,1-t);
           // ttc.draw(0,1,0);
            boost.tnv() *= -1;
            ttc = tc.sp(boost.bst( -1.0 + 2*t));
            Draw::SegRad(tc);
            Draw::SegRad(ttc);//.draw(0,1,0);
        END
    END 
    
    END
    END
}

void interpolated(GLVApp& app){
    
    static Frame a, b, c, d;
    
    app.interface.touch(a); app.interface.touch(b);
    app.interface.touch(c); app.interface.touch(d);
    
    
    static Cir sc = CXY(1); app.interface.touch(sc);
    
    static bool bdraw, bFollow,bDuo, bOrtho,bPrint;
    static double ua, ub;
    static double tan1, tan2, tan3, tan4;
    static double period1, period2, period3, period4;
    static double pitch1, pitch2, pitch3, pitch4;
    static double mnk, scale, scale2;
    SET
    a.pos(-1,-1,0); b.pos(1,-1,0);
    c.pos(1,1,0); d.pos(-1,1,0);
    a.orientY(0,0,0);
    b.orientY(0,0,0);
    c.orientY(0,0,0);
    d.orientY(0,0,0);
    app.gui(bOrtho)(bPrint);
    app.gui.add(DIALER, "ua", ua, 0,20);
    app.gui.add(DIALER, "ub", ub, 0,20);
    app.gui(period1, "period1", -10,10)(period2, "period2", -10,10)(period3, "period3", -10,10)(period4, "period4", -10,10);
    app.gui(pitch1, "pitch1", -10,10)(pitch2, "pitch2", -10,10)(pitch3, "pitch3", -10,10)(pitch4, "pitch4", -10,10);
    app.gui(tan1, "tan1",-10,10)(tan2, "tan2",-10,10)(tan3, "tan3",-10,10)(tan4, "tan4",-10,10);
    app.gui.add(BUTTON, "tanduo", bDuo);
    app.gui.add(DIALER, "mnk", mnk, -10,10);
    app.gui.add(BUTTON, "draw", bdraw);
    app.gui.add(DIALER, "scale", scale);
    app.gui.add(DIALER, "scale2", scale2);
    END 
    
    
    
    app.camera().perspective() = bOrtho;
    
    a.scale(scale); b.scale(scale); c.scale(scale); d.scale(scale);
    
    if( app.interface.keyboard.code == 'f' ){
        bFollow = true;
    } else {
        bFollow = false; 
    }
    
    if (bFollow){
        a.orientX ( app.mouse().origin );
        b.orientX ( app.mouse().origin );
        c.orientX ( app.mouse().origin );
        d.orientX ( app.mouse().origin );
    }
    
    if (bdraw){
    
        Cir ca = a.cxy();  ca.draw(); a.draw();
        Cir cb = b.cxy();  cb.draw(); b.draw();
        Cir cc = c.cxy();  cc.draw(); c.draw();
        Cir cd = d.cxy();  cd.draw(); d.draw();
    }
    
    
    if (bPrint) cout << Print::Begin() << endl;
    
    IT(ua+1) VAL(ua)
    double u = t;
    ITJ(j,ub+1) VALJ(j,ub)
    double v = t;

        double s = Interp::surface(tan1, tan2, tan3, tan4, u, v);
        double pe = Interp::surface(period1, period2, period3, period4, u, v);
        double pi = Interp::surface(pitch1, pitch2, pitch3, pitch4, u, v);
    
        Par p = Interp::surface<Par>(a.pxy(), b.pxy(), c.pxy(), d.pxy(), u, v);
        Vec pos = Interp::surface<Vec>( Vec(-1,-1,0), Vec(1,-1,0), Vec(1,1,0), Vec(-1,1,0), u, v );
    
        Boost b;  
        b.par(p);
            
        b.mod(pe,s,pi,mnk);
    
        Cir c = sc.sp( Gen::tpar(b.par()) * Gen::trs( pos ) );    
        c.draw(0,0,0);
    
        if (bPrint) {
            cout << app.printTikz( c ) << endl ;
        }

    if (bDuo){
        b.tnv() *= -1;
        c = sc.sp(Gen::tpar(b.par())* Gen::trs( pos ) );    
        c.draw(0,0,0);
    }
    
    END
    END
    
    
   
    if (bPrint) { cout << Print::End() << endl; bPrint = 0; }
       
    

}

void motortwist(GLVApp& app){
    
    static CoupledTwist ct;
    
    static Cir c = CXY(1);
    
    static float pitchx, pitchy, pitchz;
    static float perx, pery, perz;
    static float extx, exty, extz;
    
    SET
        app.gui(pitchx,"px",-10,10)(pitchy,"py",-10,10)(pitchz,"pz",-10,10);
        app.gui(perx,"pex",-10,10)(pery,"pey",-10,10)(perz,"pez",-10,10);
        app.gui(extx,"x",-100,100)(exty,"y",-100,100)(extz,"z",-100,100);
    END 
    
    ct.pitch(pitchx,pitchy,pitchz);
    ct.period(perx,pery,perz);
    ct.ext(extx, exty, extz);
        
    IT(100) VAL(100)
    double x = t;
    Cir tc = c.mot( ct.dll(x) ) ;
    tc.draw();
    END 
    
}

void ntwist(GLVApp& app){
    

    static float rx, ry, period, pitch;
    SET
//        Twist tw;
//    
//        IT1(n)
//            nt[i] = Dll(0,1,0,0,-1,0);
//            nt[i].trs(-2.0 + 4.0 * t, 0, 0); 
//        
//        END 
    
        app.gui(rx,"rxz",-PI,PI)(ry,"ryz",-PI,PI);
        app.gui(period, "period",-PI,PI)(pitch, "pitch", -PI, PI);

    END
    
    static Cir c = CXY(1);  //app.interface.touch(c);    

    static Dll dll = DLN(0,1,0);  
    app.interface.touch(dll);
    
    static Twist tw;    
    tw.along(dll,period,pitch); 
    tw.dll().draw(0,0,1);
   
    dll.draw(1,0,0);
    
    Drv(dll).draw(1,0,0);
    tw.drv().draw(0,0,1);
    
    
    //cout << "unit:\n" << td << endl; 
    
    IT1(100)
        
       Cir tc = c.mot( tw.dll() * t ); tc.draw();
    
    END 
        
}

void simple(GLVApp& app){
    
    //TWIST FIELD
    static Lattice <Dll> f(2,2,1,2);
    //LOCAL TWIST
    static Twist tw;
    //SOME Point
    static Pnt pt = PT(1,0,0);  //Ro::dls3(1,0,0,1); 
    
    static Set<Pnt> set;
    
    pt.draw();
    
    IT(f.num())
    app.interface.touch(f[i]);    
    END
    
    static float period,pitch,influence;  
    SET app.gui(period, 100)(pitch, 100)(influence,10); END
    
    app.interface.touch(pt);

    static Dll tdll;
    tdll.set(0,0,0,0,0,0);
    int it = 0;
    IT (f.num())
    
        Cir c = f[i] ^ pt;
        c.draw();
        
        if (Ro::siz(c) <= influence){
            tdll += f[i];
            c.draw(0,0,1);
            it++;
        }    
                 
    END 

    tw.along( tdll/it, period, pitch);
    tw.dll().draw(0,1,0);
    
    ITJ(j,100)VALJ(j,100)
        Pnt tp = pt.mot( tw.dll( t ) );
        tp.draw();

    END 
    
    
    IT(set.size()) set[i].draw(); END
    
//    IT2( 10 )
//    Dll tdll = Interp::surface(f.data(), u, v);
//    tw.along(tdll, period, pitch);
//        ITJ(j, 10) VAL(10);
//            Pnt tp = pt.sp( tw.mot(t) );
//            tp.draw();
//        END 
//    END2

    IT(f.num())    
    f[i].draw();
    END
}

void optics(GLVApp& app){
    
    static Cir c = CXY(1).trs(-1,0,0);
    static Cir cb = CXY(1).trs(1,0,0);
    
    //c.draw(); 
    cb.draw();
    app.interface.touch(c);
    app.interface.touch(cb);
    
    static double ref,ref2;
    SET
    app.gui(ref,"ref",0,10);
    app.gui(ref2,"ref2",-10,10);
    END 
    
    Lens lens(ref, c);
    Lens lens2(ref2,cb);
    
    
    Pnt cpa, cpb;
    
    IT1(50)
        
    glColor3f(1,0,0);
        Dll ray = DLN(1,0,0).trs(0,2*t,0);   ray = ray.conjugate();         
        Pnt pa = Ro::null ( ( ray ^ Dlp(1,0,0).trs(-3,0,0) ).dual().runit() );
        
        Pnt pb = lens.meet( ray );
//        Pnt pb = lens.meet( ray );
        
        Glyph::Line(Vec(pa), Vec(pb));
        //static Pnt bottom = pb;
        if (i == 0 ) cpb = pb;
        cpa = pb;
    
    glColor3f(0,1,0);
        Dll nd = lens.refract( ray );
        nd = nd.conjugate();
        Glyph::Line(Vec(pb), Vec( lens2.meet(nd) ) );
 
    glColor3f(0,1,1);
    
        Dll nd2 = lens2.refract( nd );
        Pnt pout = Ro::null ( ( nd2 ^ Dlp(1,0,0).trs(2,0,0) ).dual().unit() );
        Glyph::Line(Vec( lens2.meet(nd) ) , Vec( pout ) );
            
    END 
    
   glColor3f(1,1,1);
   Draw::SegPnts(c, cpa, cpb); 
    //cout << cpa << cpb << endl; 
}

void GLVApp :: onDraw(){
     //   trv(*this);
    //tangentFrame(*this);
    //circleSegments(*this);
    //spherePatches(*this);
    //tangentSpace(*this);
    //test(*this);
    //boost(*this);
    //series(*this);
    //twist(*this);
    
   // twistedBoost(*this);
    
   // interpolated(*this);
    optics(*this);
    
   // motortwist(*this);
    //ntwist(*this);
    
   // simple(*this);
}


int main() {
    
    /* Bind CGA Framework */
	CongaTypes::BindAll();
    
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);		
	win = new Window(500,500,"VSR",&glv);    
    app = new GLVApp(win);    
    glv << app;
    
    Application::run();
    
    return 0;
}


// NOTES

//NO GOOD
//    State sx = Op::sp0( Gen::trv( f.x() * t * x ), Gen::trs(f.pos()) );
//    State sy = Op::sp0(Gen::trv( f.y() * t * y ), Gen::trs(f.pos()) );
//    State sz = Op::sp0(Gen::trv( f.z() * t * z ), Gen::trs(f.pos()) );
//    c = lx.sp( sx ); c.draw(1-t,0,t);
//    c = ly.sp( sy ); c.draw(t,1-t,0);
//    c = lz.sp( sz ); c.draw(0,t,1-t);