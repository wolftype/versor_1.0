//
//  Transformations.cpp
//  Versor
//
//  Created by Pablo Colapinto on 12/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "vsr.h"
#include "vsr_op.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_mesh.h"
#include "vsr_fiber.h"
#include "vsr_tests.h"

#include <iostream>

using namespace vsr;

void dilation(GLVApp& app){
    
    Pnt p = Vec(1,0,0).null();
    
    static double amt;
    SET
        app.gui(amt,"amt",0,100);
    END
    
    Dls dls = p.sp( Gen::dil(p, amt) );
    
    DRAW(dls);
}

void hole(GLVApp& app){


    UVMesh m(21,21);
 //   m.bFlipNormals = 1;
    UVMesh m2(21,21);
    m2.bFlipNormals = 1;
    
    static Cir c = CXZ(.2);
    DRAWANDTOUCH(c);
    
    Dll dll = Inf(1) <= c;
    DRAW3(dll,0,1,0);
    
    static double amt, iter, exp;
    SET  app.gui(amt,"amt",-1000,1000)(iter,"iter",1,1000)(exp,"exp",0,100); END
    
    Par par = c.dual() * amt;

    static Pnt src = PT(2,0,0);
    DRAWANDTOUCH(src);
    GL :: lightPos(src[0],src[1],src[2]);

    
    Pnt tp = src;
    ITJ(k,iter)
        
        tp = Ro::loc( tp.sp( Gen::bst(par) ) );
        DRAW(tp);
    END
    
    IT2i(20,20);
        double theta = (-1.0 + 2*u);// * PIOVERTWO;
        double phi = (-1.0 + 2* v);// * PIOVERFOUR;
       // Pnt p = Vec::x.sp( Gen::trs(theta, 0.0, phi) );//Gen::rot( theta, phi) ).null();
         Pnt p = PT(theta,1.0,phi);
         
        double dist = Ro::dst(p, Ro::loc(c)) + 1;
        
        ITJ(k,exp) dist *= dist; END
        Bst b = Gen::bst(par * (1.0/dist) );// * side * (1.0/dist));
        
        Tsd d = Gen::dil(PAO, amt * 1.0/dist);
        Bst b2 = Gen::bst( Par( d ) );   
                    
        ITJ(k,iter  )
            p = Ro::loc(p.sp(b2));
        END
        
        m.add(p);
    END2


    IT2i(20,20);
        double theta = (-1.0 + 2*u);// * PIOVERTWO;
        double phi = (-1.0 + 2* v);// * PIOVERFOUR;
       // Pnt p = Vec::x.sp( Gen::trs(theta, 0.0, phi) );//Gen::rot( theta, phi) ).null();
         Pnt p = PT(theta,-1.0,phi);
         
        double dist = Ro::dst(p, Ro::loc(c)) + 1;
        
        ITJ(k,exp) dist *= dist; END
        Bst b = Gen::bst(par * -(1.0/dist) );// * side * (1.0/dist));
         
        Tsd d = Gen::dil(PAO, amt * 1.0/dist);
        Bst b2 = Gen::bst(  Par( d )  );
             
        ITJ(k,iter  )
            p = Ro::loc(p.sp(b2));
        END
        
        m2.add(p);
        
    END2    
    
    m.draw();
    m2.draw();
}

void GLVApp::onDraw(){

    //dilation(*this);
    hole(*this);

}

int main(int argc, const char * argv[]) {

    /* Get Current Working Directory */
    File::setdir( argv[0] );
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"MEET OPERATIONS",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}