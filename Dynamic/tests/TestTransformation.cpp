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
    
    ITJ(i,num) 
    
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
    ITJ(i,num+1)
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
        
    ITJ(i,num)
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
    
    //ITJ(i,f.num()) f.grid(i).draw(); END
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
    
    ITJ(i,10)
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
    ITJ(i,num)
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
    
    ITJ(i,n) VAL(n)
 
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







void leaves(GLVApp& app){
    
    static Cir cir = CXY(1);
    
    static Lattice<Pnt> f(2,2,1,2);
    
    static Frame * frame = new Frame[4]; //(PT(0,0,0), Rot(1,0,0,0) );
    
    
    static bool bDraw, bDrawSeg;
    static float num, iter;
    
    SET  
        app.gui(bDraw)(bDrawSeg)(num,"num",1,100)(iter, "iter",1,100); 
    
        ITJ(i,4) frame[i].pos() = f[i]; frame[i].rot( Rot(1,0,0,0) ); END 
    END 
    
    //app.interface.touch(cir);
    ITJ(i,4) 
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


void reflections(GLVApp& app){
    
//    cout << ( Ori(1) ^ PT(1,0,0) ^ Inf(1) ) << endl; 
//     cout << ( Aff(1,1,1).dual() ) << endl; 
//     cout << "afl" << ( Afl(1,1,1,1,1,1).dual() ) << endl; 
    
    static double v,t;
    
    SET app.gui(v)(t); END 
    
    Cir c = CXY(1);
    
    c.draw();
    
    static Lin dll = LN(1,0,0);
    
    app.interface.touch(dll);
    
    dll.draw();
    
    Lin ndll = dll.re( Hyp(v,t) );
    ndll.draw(1,0,0);
    
    Cir c2 = c.re(dll);
    c2.draw();
    
    
    
}


void reflections2(GLVApp& app){
    static Cir c = CXY(1);
    c.draw(0,1,0);
    static Pnt pnt  = PT(2,0,0);
    app.interface.touch(pnt);
    pnt.draw(0,0,1);
    
    Pnt rpnt = pnt.re(c);
   // rpnt.draw(1,0,0);
    
    Dls d = Ro::sur(c);
    Pnt rp2 = (d * pnt * -d) * -1;
    rp2  = rp2 / rp2[3];
    cout << pnt << rp2 << endl; 
    rp2.draw(1,1,1);
}

void spin(GLVApp& app){

    static Cir cir = CXY(1);
    
    cir.draw();
    
    app.interface.touch(cir);
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
      
//    twistSelf(*this);
  // twistCircle(*this);
//    twistLines(*this);
   
//    leaves(*this);
    
   // motortwist(*this);
    //ntwist(*this);
    
   // simple(*this);

    //cirdir(*this);
    
//   reflections(*this);
   reflections2(*this);
  
   //     spin(*this);
  
   // cout << DLN(0,1,0) << endl; 
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