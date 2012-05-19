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
#include "Stat.h" 

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
        bool sign = Op::sn( Ro::dir(cir[i], false), Biv::xy );
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
    
    IT2(4)
    
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
    
    static Lattice<Pnt> f(2,2,1,2);
    static Frame * frame = new Frame[4];//a, b, c, d;
    
//    app.interface.touch(a); app.interface.touch(b);
//    app.interface.touch(c); app.interface.touch(d);
    
    
    static Cir sc = CXY(1); app.interface.touch(sc);
    
    static bool bdraw, bFollow,bDuo, bOrtho,bPrint, bReset, bSep;
    static double ua, ub, itnum,xoffset;
    static double tan1, tan2, tan3, tan4;
    static double period1, period2, period3, period4, periodZ;
    static double pitch1, pitch2, pitch3, pitch4, pitchZ;
    static double mnk, scale, scale2;
    
    SET
        IT(4)
            frame[i].pos() = Ro::null( f.grid(i) );
            frame[i].orientY(0,0,0);
        END 
    app.gui(bOrtho)(bPrint,"print")(bReset,"reset")(bSep,"separate")(itnum, "iterations",1,10)(xoffset,"xoffset",-10,10);
    app.gui.add(DIALER, "ua", ua, 0,100);
    app.gui.add(DIALER, "ub", ub, 0,100);
    app.gui(period1, "period1", -10,10)(period2, "period2", -10,10)(period3, "period3", -10,10)(period4, "period4", -10,10);
    app.gui(pitch1, "pitch1", -10,10)(pitch2, "pitch2", -10,10)(pitch3, "pitch3", -10,10)(pitch4, "pitch4", -10,10);
    app.gui(tan1, "tan1",-10,10)(tan2, "tan2",-10,10)(tan3, "tan3",-10,10)(tan4, "tan4",-10,10);
    app.gui.add(BUTTON, "tanduo", bDuo);
    app.gui.add(DIALER, "mnk", mnk, -10,10);
    app.gui.add(BUTTON, "draw", bdraw);
    app.gui.add(DIALER, "scale", scale);
    app.gui.add(DIALER, "scale2", scale2);
    
    app.gui(pitchZ,"pz",-10,10)(periodZ, "z",-PI, PI);
    END 
    
    
    IT(4)
    frame[i].scale(scale);
    END 
    
    app.camera().perspective() = bOrtho;
    
    if( app.interface.keyboard.code == 'f' ){
        bFollow = true;
    } else {
        bFollow = false; 
    }
    
    if (bFollow){
        IT(4)
        frame[i].orientZ(app.mouse().origin );
        END 
    }
    
    if (bReset){
        IT(4) frame[i].pos() = Ro::null(f.grid(i)); frame[i].orientY(0,0,0); END
    }
    
    if (bdraw){
        IT(4)
        Cir ca = frame[i].cxy();  ca.draw(); frame[i].draw();
        END
    }   
    
//    glPushMatrix();
    
    Dll dll = DLN(0,0,1);
    Twist tw; tw.along(dll, pitchZ, periodZ);
    
     if (bPrint) cout << Print::Begin() << endl;
    for (int m = 1; m < itnum; ++m){
        
        double mt = 1.0 * m/itnum;
        //glTranslated(xoffset, 0, 0);
        
       
        
        IT(ua+1) VAL(ua)
        double u = t;
        ITJ(j,ub+1) VALJ(j,ub)
        double v = t;

            double s = Interp::surface(tan1, tan2, tan3, tan4, u, v) * mt;
            double pe = Interp::surface(period1, period2, period3, period4, u, v)* mt;
            double pi = Interp::surface(pitch1, pitch2, pitch3, pitch4, u, v)* mt;
        
            Par p = Interp::surface<Par>(frame[0].pxy(), frame[1].pxy(), frame[3].pxy(), frame[2].pxy(), u, v);
            Vec pos = Interp::surface<Vec>( frame[0].vec(), frame[1].vec(), frame[3].vec(), frame[2].vec(), u, v );
        
            Boost b;  
            b.par(p);
                
            if (bSep) b.mod(pe,s,pi,mnk);
            else b.mod(period1 * mt,tan1* mt,pitch1* mt,mnk* mt);
        
            Cir c = sc.sp( Gen::tpar(b.par()) * Gen::trs( pos ) ).trs(xoffset*m,0,0);  
            c = c.mot( tw.dll() * mt );
            c.draw(0,0,0);
        
            if (bPrint) { cout << app.printTikz( c ) << endl ; }

            if (bDuo){
                b.tnv() *= -1;
                c = sc.sp(Gen::tpar(b.par())* Gen::trs( pos ) );    
                c.draw(0,0,0);
            }
        
        END
        END

        
        
       
      
       
    }
//    glPopMatrix();
      if (bPrint) cout << Print::End() << endl;
    if (bPrint) bPrint = 0;

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
        
        if (Ro::siz(c, false) <= influence){
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



void leaves(GLVApp& app){
    
    static Cir cir = CXY(1);
    
    static Lattice<Pnt> f(2,2,1,2);
    
    static Frame * frame = new Frame[4]; //(PT(0,0,0), Rot(1,0,0,0) );
    
    
    static bool bDraw, bDrawSeg;
    static float num, iter;
    
    SET  
        app.gui(bDraw)(bDrawSeg)(num,"num",1,100)(iter, "iter",1,100); 
    
        IT(4) frame[i].pos() = f[i]; frame[i].rot( Rot(1,0,0,0) ); END 
    END 
    
    //app.interface.touch(cir);
    IT(4) 
        app.interface.touch(frame[i]);
        if (bDraw) frame[i].cxy().draw();
    END
    
    static Cir tc; static Pnt tp; static Par tpar; 

    for (int m = 0; m <= iter; ++m){
        double uu = 1.0 * m / iter;
        for (int n = 0; n <= iter; ++n){
            double vv = 1.0 * n / iter;
    
            tpar = Interp::surface<Par>( frame[0].pxy(), frame[1].pxy(), frame[3].pxy(), frame[2].pxy(), uu, vv);
            Pnt ipar = Interp::surface<Pnt> ( f[0], f[1], f[3], f[2], uu,vv);
            
            
            vector<Pnt> pos; vector<Cir> c; vector<double> cur;
            
            IT1(num)
                tc = cir.trs(ipar).sp( Gen::tpar( tpar * t ) );
                c.push_back(tc);
                cur.push_back( Ro::cur(tc) );
            END 
            
            IT2(num)
                double k = cur[j];
                tp = Ro::pnt_cir(c[j], ( - PI/2.0 * k + ( PI * k  * u ) )  ); 
                pos.push_back(tp);
            END END 
            
            IT1(num)
                double k = cur[i];
                if (bDrawSeg) Draw::SegRad(c[i]); 
                    //Draw::SegPnts( c[i], Ro::pnt_cir(c[i], k * TWOPI), Ro::pnt_cir(c[i], -k * TWOPI) );
            
        //        

                glBegin(GL_LINE_STRIP);
                    ITJ(j,num) VALJ(j,num)
                    int idx =i * num + j;
                    glVertex3f( pos[idx][0], pos[idx][1], pos[idx][2] );
                    END 
                glEnd();
            END 
        
    
        }
    }
    
}

void twistCircle(GLVApp& app){
    
    static Lattice<Cir> f(10,1,1,2);
    static Cir cir = CXY(1);
   
    static Frame frame;
    
    static Dll dll;
    static Pnt tp = PT(-5,0,0);
    
    static bool bDraw, bFrame, bPrint;
    static float period, pitch, dt, perdev, pitchdev, minDist, prob, scale, spread;
    static float num, iter,piter;
    SET
        IT(f.num())
            f[i] = CXY(1).trs(f.grid(i));
        END
    
        app.gui(period, "period", -PI, PI)(pitch,"pitch",-10,10)(dt, "dt", 0,5)(num,"num",1,10000)(iter,"iter",1,100)(piter,"p_iter",1,100)(bDraw,"drawCir")(perdev, "perDev",0,2)(pitchdev, "pitchDev", 0,2)(minDist, "dist",-10,10)(prob, "prob",0,1)(bFrame)(scale,"scale",0,1);
    app.gui(spread,"spread", 0, 10)(bPrint,"print"); 
                                        
    END 
    
    app.interface.touch(tp);
    tp.draw();

    if (bDraw) f.drawLoop();
    
    Rand::Seed(10);
    
    ITJ(pr, piter);//VALJ(pr,piter)
    double tpr = 1.0 * (pr+1)/piter;
    
    ITJ(m, iter)VALJ(m,iter) 
    
        Pnt p = tp.trs(0, t * f.tw() * spread, 0 );
    
    
        Rot r (1,1,1,1);
        vector<State> pos;
        vector<Rot> rot;
        IT1(num);
            
           // int id = phase * num;
        
            //which circle is p closest to?
            int idx = 0;  double ts = -1000;
            ITJ(j,f.num())
                double s = Op::sca( p <= f.grid(j) );
                if (s > minDist ) { idx = j; break; }
                else if (s > ts) { ts = s; idx = j; }
            END
        
            cir = f[idx];// : LN(1,0,0);
            vector<Pnt> tpar = Ro::split ( Ta::at( cir, p, false) );
            vector<Pnt> ipar = Ro::split ( ( ( tpar[0] - tpar[1] ) ^ cir.dual() ).dual() ) ;
        
            Par par = Ta::at(cir, ipar[1], false);
            Dll td = ( par ^ Inf(1) ).dual(); //td.draw();
            Twist tw; tw.along( (Stat::Prob(prob * tpr) ) ?  td : DLN(1,0,0), Rand::Normal(period, t * perdev), Rand::Normal(pitch, t * pitchdev) );
            
            //Commutator!
            Pnt dp = p % ( tw.dll() * dt );
            p += dp;
            p = Ro::null(p);
    
            //Commutator of Rotor!
            Rot dr = r % (tw.dll() * dt );
            r += dr;
            r = r.unit();
    
            //cout << r << endl;
    
            pos.push_back(p);
            rot.push_back(r);
        
        END 

        glColor3f(0,0,0);

        IT1(pos.size())
            frame.pos(pos[i]); frame.rot( rot[i]);
            frame.scale(scale * Rand::Normal(1 - t, 1) );
            if (bFrame) {
 //               frame.cxy().draw();
                Glyph::Line( Vec(frame.pos()), Vec( frame.pos() ) + frame.x() * frame.scale() );
                Glyph::Line( Vec(frame.pos()), Vec( frame.pos() ) + frame.y() * frame.scale() );
            }
        END 
    
        glBegin(GL_LINE_STRIP);
            IT(pos.size())
                glVertex3f(pos[i][0],pos[i][1],pos[i][2]); 
            END 
        glEnd();
    
      
    
        if (bPrint){
            //IT(pos.size()-1)
            //app.printTikz(pos[i], pos[i+1]);
            cout << app.printTikz(pos) << endl;
            //END 
            
        }
    
    END 
    
    END 
    
    if (bPrint) bPrint = false;
}

void twistSelf(GLVApp& app){
    //temp (tp), derivative (dp) , current (p), original (pt)
    static Pnt tp, dp, p;
    static Pnt pt = PT(0,1,0);

    static Cir cir = CXY(1);
    static Dll tdll, odll, ddll, ndll, pdll;
    static Dll sdll = DLN(0,1,0);
    
    static float num, max, minDist, maxDist, period, pitch, dt, dev, dev2, rOff;
    static Twist tw;
    
    static bool bOld, bPrint;
    
    app.interface.touch(pt);
    
    SET
    
    app.gui(num,"num",0,20000)(max,"max",0,20000)(minDist,"dist",-10,10);
    app.gui(period, "period",-100,100)(pitch, "pitch",-100,100)(dt, "dt",-10,10);
    app.gui(dev,"dev",-10,10)(dev2,"dev2",-10,10)(rOff, "rOff",-10,10);
    app.gui(bOld, "oldmeth")(bPrint, "print");
    
    END 
    
    p = pt;
    odll = sdll;
    
    vector<State> pos;
    vector<Dll> dll;
    pos.push_back(pt);
    dll.push_back(odll.trs(pt));
    
    Rand::Seed(10);
    
    IT1(num);
    
        //temp hold
        tp = p;
//        tdll = odll;
    
        //which point is p closest to?
        int idx = 0;  double ts = -1000;
        bool bRange = false;
        ITJ( j, pos.size() )
            double s = Op::sca( tp <= pos[j] );
            //cout << s << endl; 
            if (s > minDist ) { idx = j; bRange = true; break; }            // Within range?
            else if (s > ts) { ts = s; idx = j; }                           // Oh well, find closest
        END
        
        pdll = (bRange) ? dll[idx] : sdll.trs( tp[0] + Rand::Normal(0,rOff), tp[1], tp[2]);
        
        tw.along( pdll, Rand::Normal(period, t*dev ), Rand::Normal(pitch,t*dev2) );
        
        //Commutator!
        dp = tp % ( tw.dll() * dt );
        tp += dp;
        tp = Ro::null(tp);
        pos.push_back(tp);
    
//        //Commutator DLL!
//        ddll = tdll % ( tw.dll() * dt );
//        tdll += ddll;
//        tdll = tdll.runit();
    
        
        
        ndll = (p ^ tp ^ Inf(1) ).dual();
        if (bOld) dll.push_back(ndll);
//        else dll.push_back(tdll);
//        odll = tdll;
    
        p = tp;
    END 
    
    
    glColor3f(0,1,0);
    glBegin(GL_LINE_STRIP);
    IT(pos.size())
    glVertex3f(pos[i][0],pos[i][1],pos[i][2]); 
    END 
    glEnd();
    
    if (bPrint) {

        app.printTikz( pos );
        
        bPrint = false;
        
    }

}


void twistLines(GLVApp& app){
    
    static Lattice<Dll> f(10,1,1,2);
    static Pnt tp = PT(-2,0,0);
    app.interface.touch(tp);
    tp.draw();
    
    static float num, period, pitch, dt, prox;
    
    SET
        IT(f.num())
            f[i] = (i & 1) ? DLN(1,1,0).trs( f.grid(i) ) : DLN(-1,1,0).trs( f.grid(i) );
        END 
    
    app.gui(num,"num",0,1000)(period, "period",-PI, PI)(pitch,"pitch",-100,100)(dt, "dt", 0, 10)(prox,"prox",0,10);
                                                                                                     
    END 
    
   f.drawLoop();
    
    Pnt p = tp;
    IT1(num)
    
        /// CLOSEST LINE TO POINT
        double ts = 10;  int idx = 0;
       // while ( ts > 
        ITJ(j, f.num())
            Dlp dlp = p <= f[j];
            double s = dlp.norm();
            if (s < prox ) { ts = s; idx = j; }
        END 
    
        Twist tw; tw.along( f[idx], period, pitch);
    
        //Commutator!
        Pnt dp = p % ( tw.dll() * dt );
        p += dp;
        p = Ro::null(p);
        
        p.draw(1,0,0);
        
    END     
    
}


void twisties(GLVApp& app){
    
    static Lattice<Pnt> f(1,10,1,.5);
    static Dll * dll = new Dll[f.num()];

    static float num, spread, iter;
    static float prob, min, amt;
    static float period, pitch;
    
    SET
        app.gui(num,"num",0,100)(spread,"spread",1,10)(iter, "iter", 1,1000);
        app.gui(prob, "prob")(min, "min", -10,10)(amt, "amt",-10,10);
        app.gui(period, "period",-PI, PI)(pitch, "pitch", -PI, PI);
    END 
    
    int n = num;
    Dll * tl = new Dll[ n ];
    Pnt * pl = new Pnt[ n ];    
    Pnt * op = new Pnt [n];
    
    Dll * nl = new Dll[n];
    
    Twist tw;
   
    // SETUP 
    IT1(num)
    
        tl[i] = DLN(1,0,0).trs( Vec::y * t * spread );  
         
    END 

    vector<Pnt> * final = new vector<Pnt>[n];
    
    // ITERATE
    ITJ(m, iter)VALJ(m,iter)
        double val = -2.0 + 4.0 * t;
        Dlp dlp = Dlp(1,0,0).trs(val, 0, 0 );
        
        int it = 0;
        IT(num)
            op[i] = pl[i];
            pl[i] = Ro::dll_meet_dlp( tl[i], dlp );
            final[it].push_back(pl[i]);
            it ++;
        END 
        
        IT(num)
            //tl[i].draw();
            
            double dist = 1000; int idx = 0;
        
            //get closest line at val
            ITJ(j,num)
                if ( i == j ) continue;
                double d = Ro::dst( pl[i] , pl[j] );
                if (d < min) { idx = j; break; }
                if (d < dist) { idx = j; dist = d; }
            END 
            
            
            Dll ndl = (op[idx] ^ pl[idx] ^ Inf(1) ).dual().runit();
            
//            tw.along( tl[idx], period, pitch ); 
            tw.along( ndl, period, pitch ); 
            tl[i] = tl[i].mot( tw.dll() * amt );

        END
                  
    END 
    
    IT(num)
        glBegin(GL_LINE_STRIP);
        ITJ(j, final[i].size() )
            glVertex3f(final[i][j][0], final[i][j][1], final[i][j][2]);
        END 
        glEnd();
    END 
    
    if (final) delete[] final;
    if (tl) delete[] tl;
     if (pl) delete[] pl;
     if (op) delete[] op;
      if (nl) delete[] nl;
}


void testPrint(GLVApp& app){
    
    static Lens lens;
    static bool bPrint;
    SET
    app.gui(bPrint);
    END
    
    app.interface.touch(lens[0].cir);
    app.interface.touch(lens[1].cir);
    
    lens.structure();
    
    lens.draw();
    //app.camera().frustrum();
    
    Dll ray = DLN(1,1,0).trs( 0, .5, 0 );
    
    ray.draw();
    
    Vec L = app.camera().frustrum().box.tl;
    Vec R = app.camera().frustrum().box.tr;
    L.draw();
    R.draw();
    
    
    Dlp left = app.camera().frustrum().left().dual();
    Dlp right = app.camera().frustrum().right().dual();
    
    Pnt pa = Ro::null( (ray.conjugate() ^ left).dual().runit() ); 
    Pnt pb = Ro::null( (ray.conjugate() ^ right).dual().runit() ); 
    
    pa.draw(); pb.draw();
    
    
    string str;
    if (bPrint){
        str += Print::Begin();
        bPrint = false;
        str += app.printTikz( lens[0].cir, lens.mb, lens.ma );
        str += app.printTikz( lens[1].cir, lens.ma, lens.mb );
        str += app.printTikz( ray.dual(), pa, pb );
        str += Print::End();
        
        cout << str << endl; 
    }

    
}

void cirdir(GLVApp& app){
    
    static float trv;

    SET
        app.gui(trv,"trv",-2,2);
    END 
    Cir c = CXY(1).trv(0,trv,0).trs(-1,0,0);
    c.draw();
    
    Par p = Ro::meet_cir(c, CXY(1) );
    Ro::split1(p).draw();
    
    Biv b1( Ro::dir( CXY(1), false ) );
    Biv b2( Ro::dir( c, false ) );
    
    cout << Op::sn(b1,b2) << endl; 

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
   
  //  testPrint(*this);
    
    twisties(*this);
  
//    twistSelf(*this);
  // twistCircle(*this);
//    twistLines(*this);
   
//    leaves(*this);
    
   // motortwist(*this);
    //ntwist(*this);
    
   // simple(*this);

    //cirdir(*this);
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
    
    Rand::Seed();
    
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