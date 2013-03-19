//
//  Inversions.cpp
//  Versor
//
//  Created by Pablo Colapinto on 12/3/12.
//  Copyright (c) 2012 WOLFTYPE. All rights reserved.
//

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"
#include "vsr_mesh.h"

#include <iostream>

using namespace vsr;

//kink
void sphere(GLVApp& app){

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

void circle( GLVApp& app ){
    static Cir c = CXY(1);
    DRAWANDTOUCH3(c,1,0,0);
    
    static Cir src = CXZ(1).trs(1,0,0);
    DRAWANDTOUCH3(src,0,1,0);
    
    Dls dls = Ro::sur(c);
    
    Cir nc = src.re(c);
    Cir nc2 = src.re(dls);
    
    DRAW3(nc,0,0,1);
    DRAW3(nc2,0,1,1);
} 

void tunnel(GLVApp& app){
//    static Cir c1 = CXZ(1).trs(0,-1,0);
//    static Cir c2 = CXZ(1).trs(0,1,0);
//    
//    DRAWANDTOUCH3(c1,1,0,0);
//    DRAWANDTOUCH3(c2,1,1,0);
//    
//    ITJ(i,100);
//        double t = 1.0 * i/100;
//        Cir nc = c1 * (1-t) + c2 * t;
//        DRAW(nc);
//    END

    static Dls s1 = Ro::dls(0,1,0);
    static Dls s2 = Ro::dls(0,-1,0);
    
    
    ITJ(i,100);
        double t = 1.0 * i/100;
        Cir nc = (s1.trs(0,-t,0) ^ s2).dual();
        DRAW(nc);
    END

    DRAWANDTOUCH4(s1,1,0,0,.2);
    DRAWANDTOUCH4(s2,1,1,0,.2);

}

void GLVApp :: onDraw() {
  // sphere(*this);
 //   circle(*this);
    tunnel(*this);
}

int main(int argc, const char * argv[]) {
     
//    File::setdir( argv[0] );       
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
    		
	Window * win = new Window(1000,500,"Inversions",&glv);
    GLVApp * app = new GLVApp(win);    
    app->gui.colors().back.set(0,0,0);
	glv.colors().back.set(.2,.2,.2);
    
    glv << app;
        
    Application::run();

    return 0;
}
