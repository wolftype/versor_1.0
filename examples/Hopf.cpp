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

#include <iostream>


using namespace vsr;
using namespace glv;


struct HopfFiber{
    /// Feed in Spherical Coordinates of a 2-Sphere, get 3-Sphere Fiber out
    
    bool bHanded;

    //BASE LINE AT NORTH POLE
    Lin mInf;
    //base
    Cir mCir;
    
    HopfFiber(bool hand=true) : bHanded(hand) {
        mInf =  PAO ^ Ro::null(0, bHanded? 1 :-1,0) ^ Inf(1);
        mCir = CXZ(1);
    }
    
    //boost only no twist
    Cir bst(double theta, double phi){
        double ptheta = PIOVERTWO * theta;
        Vec v = Vec::x.rot( Biv::xz * ptheta );
        return mCir.sp( Gen::trv(v * phi )  ) ; 
        //return mCir.sp( Gen::bst( Par( Tnv(v) * phi ).trs(v) ) ) ; 
    }
    
    //twist only
    Lin mot(double theta, double phi){
            double ptheta = PIOVERTWO * theta;

        Vec v = Vec::x.rot( Biv::xz * ptheta );
        Lin lim = mCir.sp( Gen::trv(v.unit()) ); 
        Mot mot = Gen::ratio( lim.dual().runit(), mInf.dual(), phi);
        return lim.sp( mot );
    }
    
    Cir cir(double theta, double phi){

        double ptheta = PIOVERTWO * theta;

        Vec v = Vec::x.rot( Biv::xz * ptheta );
 //       cout << v << endl; 
        Lin lim = mCir.sp( Gen::trv(v.unit()) );                                                         //<-- Circle to a Line (Limit)
  //      cout << lim << endl; 
        Mot mot = Gen::ratio( lim.dual().runit(), mInf.dual(), phi);
   //
    //     cout << mot << endl;        
        return mCir.sp( mot * Gen::trv(v * phi )  ) ; 
        
//      Cir nc = ca.sp( Gen::ratio(inf.dual(),lim.dual(), t) * Gen::trv(1, p * st )  ) ;        // <-- More complicated and unnecessary, takes circle to local tangent, then twists
    }
};


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
        Cir tc = hf.cir(-1.0 + 2*u, v);
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
    if (bAxis) { DRAW3( hf.mInf, 0,0,0); DRAW3( hf.mCir, 0,0,0); }
    ITJi(i,num)
        
        double v = t * amt;
//        UVMesh mesh(num+1, cres+1);
          UVMesh mesh(res, cres+1);
  
        ITJ(j,res)
        
            double u = 1.0 * j/res;   //-1.0 + 2*         
            Cir tc = (bBoost) ? hf.bst(-v,u) : hf.cir(-v, u);
            if (bDrawCir) DRAW3(tc,.5,.5,.5);
            if (Ro::size(tc, false) > 100) DRAW3( Lin(tc), .5,.5,.5);
            
            if (bTwist) DRAW3(hf.mot(-v, u) , 0, 0, 0);
            
            
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

    static Cir c = CXY(1);
    
    ITJi(i,100)
        Pnt p = Ro::pnt_cir( c, t * TWOPI );
        DRAW3(p,t,0,1-t);
    END
    
}

void GLVApp :: onDraw(){

   // hopf(*this);
    hopf2(*this);
    //cirtest(*this);
   // text("Use the Shift + arrow Keys to move camera, or Optoin + arrows to rotate Fibration",50,50);
}


int main(int argc, const char * argv[]) {        
    File::setdir(argv[0]);    
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"HOPF FIBRATION",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}


//void hopf(GLVApp& app){
//        
//    static float max = 1000;
//
//    //GUI Controlled Parameters
//    static int num = 50;
//    static int res = 20;
//    static bool handed;
//    SET app.gui(num,"num",0,100)(res,"res",0,100)(handed); END
//
//
//    //BASE CIRCLE AT SOUTH POLE
//    Cir ca = CXZ(1);
//    DRAW3(ca,1,0,0); 
//
//    //BASE LINE AT NORTH POLE
//    Lin inf = PAO ^ Ro::null(0,1,0) ^ Inf(1);
//    if (handed) inf = PAO ^ Ro::null(0,-1,0) ^ Inf(1);
//
//
//    //j is theta of globe (longitude)
//    //i is phi of a globe (latitude)
//    
//    static int time = 0; time++;  double phase = PI * time/180.0;
//    
//    ITJi(j,res)
//
//        float tt = t;
//
//        Vec v = Vec::x.rot( Biv::xz * PI * t );
//        Lin lim = ca.sp( Gen::trv(v) );                                                             //<-- Circle to a Line (Limit)
//
////      Par p  = Par(Tnv( v ) ).trs( v ) ;
////      Lin lim = ca.sp( Gen::trv(1,p*-.5) );
//        ITJi(i,num)
//            Cir nc = ca.sp( Gen::ratio(inf.dual(),lim.dual(), t) * Gen::trv(v * t )  ) ;            // <-- simpler, takes circle to line, then twists
////          Cir nc = ca.sp( Gen::ratio(inf.dual(),lim.dual(), t) * Gen::trv(1, p * st )  ) ;        // <-- More complicated and unnecessary, takes circle to local tangent, then twists
//            DRAW3(nc,1-t,t,tt);
//            Pnt pnt = Ro::pnt_cir(nc, phase * Ro::cur(nc) );
//            DRAW3(pnt,t,tt,1-t);
//            if (Ro::size(nc,false) > max) DRAW( Lin(nc) );                                          //<-- Draw as a Line if Circle is above a certain radius
//        END
//    END
//}

