//
//  DemoAgacse.cpp
//  vsr
//
//  Created by Pablo Colapinto on 6/28/12.
//  FOR A DEMO at AGACSE LA ROCHELLE 2012
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
/*

    TO DO: Send IFF AZIMUTH, ELEVATION, RADIUS over OSC TO /SES 
*/

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include "vsr_mesh.h"
#include "vsr_boost.h"
#include "vsr_coord.h"

#include "vsr_fiber.h"

#include <iostream>


using namespace vsr;
using namespace glv;


void hopf(GLVApp& app){
    

    HopfFiber hf;
    
    static int time = 0; time++;  double tphase = PI * time/180.0;

    //GUI Controlled Parameters
    static int num = 2;
    static int res = 3;
    static bool handed, bDrawCir, bDrawPnt,bReset;
    static double phase,amt,minDistance;
    SET app.gui(num,"num",0,1000)(res,"res",0,1000)(phase,"phase",1,100)(amt,"amt",0,10)(minDistance,"minDistance",0,1000);
    app.gui(handed)(bDrawCir, "drawcir")(bDrawPnt,"drawpnt")(bReset,"reset"); 
    END     
    
    //static 
    static Pnt pnt = Ro::null(1,1,1);
    if (bReset) { pnt = Ro::null(1,1,1); bReset = false; }
    app.interface.touch(pnt); DRAW(pnt);
    Par par;
    
    IT2(num,res)
        Cir tc = hf.fiber(-1.0 + 2*u, v);
        Pnt tp = Ro::pnt_cir( tc, tphase * Ro::cur(tc) * phase);
        if(bDrawPnt)DRAW3(tp,u,v,1-u);
        if(bDrawCir)DRAW3(tc,v,u,1-u);
    
//        Pnt ttp= pnt <= tc.dual();
        Cir ttc= pnt ^ tc.dual();
//        if(bDrawCir)DRAW3(ttc,1,0,0);
//        if(bDrawPnt)DRAW3(ttp,1,0,0);
        double dist = Ro::size(ttc, false);
        //cout << dist << endl; 
        if (dist < minDistance) {
            par += tc.dual() * 1.0/dist;
        }
    END END
    
    pnt = Ro::loc( pnt.sp( Gen::bst(par * amt) ) );
   // DRAW3(Ro::dls_pnt(pnt,.2),1,0,0);
    
}

//drawing it
void hopf2(GLVApp& app){

    HopfFiber hf;
    

    //GUI Controlled Parameters
    static int num = 1;
    static int res = 1;
    static int cres = 20;
    static bool handed, bDrawCir, bDrawPnt,bReset, bBoost, bTwist, bAxis;
    static double phase,amt,minDistance;

    SET app.gui(num,"num",0,1000)(res,"res",0,1000)(cres,"cres",0,100)(phase,"phase",1,100)(amt,"amt",0,10)(minDistance,"minDistance",0,1000);
    app.gui(handed)(bDrawCir, "drawcir")(bDrawPnt,"drawpnt")(bBoost,"bBoostOnly")(bTwist, "bTwistOnly")(bAxis,"bAxis")(bReset,"reset"); 
    END     
    if (bAxis) { DRAW3( hf.dll(), 0,0,0); DRAW3( hf.cir(), 0,0,0); }
    ITJi(i,num)
        
        double v = t * amt;
//        UVMesh mesh(num+1, cres+1);
          UVMesh mesh(res, cres+1);
  
        ITJ(j,res)
        
            double u = 1.0 * j/res;   //-1.0 + 2*         
            Cir tc = (bBoost) ? hf.cir().sp( hf.trv(-v,u) ) : hf.fiber(-v, u);
            if (bDrawCir) DRAW3(tc,.5,.5,.5);
            if (Ro::size(tc, false) > 100) DRAW3( Lin(tc), .5,.5,.5);
            
            if (bTwist) DRAW3( hf.lim(-v).sp( hf.mot(-v, u) ), 0, 0, 0);
            
            
            ITJi(k,cres)
                
                double w = 1.0 * k/cres;
                Pnt tp = Ro::pnt_cir( tc, w * TWOPI);
                mesh.add(tp);
                
            END
         
        END 
        
        mesh.draw(.4,.4,.4);
        mesh.drawTri(.6,.6,.6);

    END

}

void cirtest(GLVApp& app){

    static double amt;
    SET
        app.gui(amt);
    END

    
    static Cir c = CXY(1);
    DRAWANDTOUCH(c);
    
    ITJi(i,100)
        Pnt p = Ro::pnt_cir( c, t * TWOPI );
        DRAW3(p,t,0,1-t);
    END
    
    //given a point, what is the theta, phi (spherical coordinate)
    
    static Dll dll = DLN(0,0,1);
    app.interface.touch(dll); DRAW(dll);
    
    
    Pnt p = Ro::split( ( dll ^ Ro::sur(c) ).dual(), true);
    
    DRAW3(p,1,0,0);
    
    Coord::Sph sc = Coord::vec2sph(Vec(p).unit());
    
    cout << sc.theta/PI << " " << sc.phi/PI << " " << sc.rad << endl; 
    
    Vec v = Coord::sph2vec( PIOVERTWO, PIOVERFOUR );
        DRAW3(v,0,1,0);
        
    Cir cc = CXY(2);
    DRAW( cc.sp( Gen::trv( Vec::x * amt / Ro::rad(cc) ) ) );

}

//Q:
//GIVEN A POINT IN SPACE, and AN ORIGIN,
//WHAT IS ITS CORRESPONDING HOPF FIBER AND PHASE?

void hopfMap(GLVApp& app){

    static Dls dls = Ro::dls(0,0,0,1);
    
    static Vec vec = Vec::x;
    
    DRAW3(vec,0,1,0); TOUCH(vec);
    //DRAW4(dls,1,0,0,.5);
    
    HopfFiber hf;
    DRAW3(hf.cir(), 1, 1, 1 );
    Cir ca = hf.fiber(vec);
    Cir cb = hf.fiber(-vec);
    
    //DRAW3(ca,0,0,1);
    //DRAW3(cb,0,1,1);
    
    static Pnt pnt = PT(2,0,0); DRAWANDTOUCH(pnt);

    Cir base = CXZ(1);//hf.cir();
    //Distance
    Cir tc = pnt ^ base.dual(); DRAW3(tc,1,1,0);
    //Par tp = pnt <= base; DRAW3(tp,1,1,0);
    
    double d = Ro::size(tc, false);

    //reflection in base
    Pnt np = pnt.re(base);
    np = np / np[3];
    DRAW( np );


//    DRAW( -Pnt( Mtt(base * pnt) / base) );
    
//    ITJ(i,100)
//        double t = -.5 + (1.0 * i/100);
//        Cir nc = hf.fiber(0, t);
//        DRAW(nc);
//        ITJ(j,10);
//            double t = j/10.0;
//            Pnt p = Ro::pnt_cir( nc, PI * t);
//            DRAW(p);
//        END
//    END

}

void hopf3(GLVApp& app){

    static double theta, phi, m, n, amt;
    
    static bool bDrawCir;
    SET
        app.gui(theta,"theta",-1,1)(phi,"phi",-.5,.5);
        app.gui(m,"m",0,10)(n,"n",0,10)(amt,"amt",-10,10);
        app.gui(bDrawCir,"drawCir");
    END
    
    //A Hopf Link
    HopfFiber hf;

//    static Cir cxz = CXZ(1);
//    DRAWANDTOUCH(cxz);

    static double dt = 0; dt += theta;
    static double dp = 0; dp += phi;
    
    Vec v = Vec::x.sp( Gen::rot( dt, dp ) );

    Vec v2 = -v;  DRAW3(v2,0,1,0);
    
    Par tp = Ro::par( Ro::sur( hf.cir() ), v );
    DRAW( Ro::split( tp,true ).null() );
    
    Coord::Sph sc = Coord::vec2sph( v );
     
    DRAW(v);

    
    Cir ca = hf.fiber( Ro::split(tp,true ).null() ); DRAW3(ca,1,0,0);
    Cir cb = hf.fiber( Ro::split(tp,false ).null() ); DRAW3(cb,0,0,1);  
    
    ///KNOT
    Par pp = ca.dual() * PI/m + cb.dual() * PI/n;
    Bst bst = Gen::bst(pp * amt);
    
    static Point p = PT(2,0,0); DRAWANDTOUCH(p);
    Point np = p; vector<Pnt> vp;
    
    ITJ(i,1000)
        np = Ro::loc( np.sp(bst) );
        vp.push_back(np);
    END
    
    glBegin(GL_LINE_STRIP);
    ITJ(i,1000)
        GL::vertex(vp[i].w());
    END
    glEnd();
    
}

void GLVApp :: onDraw(){

    //hopf(*this);
    //hopf2(*this);
//    hopf3(*this);
    hopfMap(*this);
//   cirtest(*this);
   // text("Use the Shift + arrow Keys to move camera, or Optoin + arrows to rotate Fibration",50,50);
}


int main(int argc, const char * argv[]) {        

//    File::setdir(argv[0]);    
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"HOPF FIBRATION",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}



