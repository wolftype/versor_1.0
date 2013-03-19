//
//  Group.cpp
//  Versor
//  SEE ALSO REFLECTIONS.CPP
//  Created by Pablo Colapinto on 2/25/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include <iostream>

using namespace vsr;
using namespace vsr::GL;

void hyper(GLVApp& app){
    
    static Dls cf = Ro::dls(0,0,0,1);
    vector<Cir> cir;
    
    static double order, iter;
    SET
        app.gui(order,"order",1,100);
        app.gui(iter, "iter",1,100);
    END


    double theta = PI / order;
    
    
    ITJ(i,order)
        Vec v = Vec::x.rot( Biv::xy * i * theta );
        Vec v2 = Vec::x.rot( Biv::xy * (i+1) * theta );
        DRAW(v);
        
        Pnt p1 = v.null(); Pnt p2 = v2.null();
        
        Cir c = ( p1 ^ p2 ^ EP );
        //DRAW(c); 
        Pnt cp = Ro::loc(c);
        Pnt p0 = Ro::pnt_cir(c, 0);
        
        Vec tv0 = p0 - cp;
        Vec tv1 = p1 - cp;
        Vec tv2 = p2 - cp;
        
        push();
            translate( cp.w() );
            //DRAW3(tv0,0,0,1); 
            //DRAW3(tv1,0,1,0); DRAW3(tv2,1,0,0);
        pop();
        glColor3f(0,0,0);
        Glyph::SegPnts(c, p1, p2 );
       
        cir.push_back(c); 
    END
    
    
    ITJ(i, order)
    
        ITJ(j, order)
            
            if (i != j) {
                Cir nc = cir[i].re( cir[j] );
                vector<Pnt> p = Ro::split( ( Ro::sur(nc) ^ EP ^ Ro::car(nc).dual() ).dual() ) ;
                glColor3f(0,0,0);
                Glyph::SegPnts(nc, p[0], p[1]);
                //DRAW3(nc,0,1,1);
            }
            
        END
    
    END

}

void dodeca(GLVApp& app){

        
    static Dls cf = Ro::dls(0,0,0,1);
    vector<Cir> cir;
    vector<Dll> dll;
    vector<Dlp> dlp;
    vector<Pnt> pnt;
    
    static double order, amt;
    
    SET
        app.gui(order,"order",1,100);
        app.gui(amt, "amt");
        order = 5;
    END


    double theta = PI / order;
    double ntheta = PIOVERTWO - theta;
    
    ITJ(i,order)
    
        Vec v = Vec::x.rot( Biv::xy * i * theta );
        Vec v2 = Vec::x.rot( Biv::xy * (i+1) * theta );
        //DRAW(v);
        
        Pnt p1 = v.null(); 
        Pnt p2 = v2.null();
        pnt.push_back(p1);
        pnt.push_back(p2);
        
        Dll td = (p1 ^ p2 ^ Inf(1)).dual().runit();

        double t= 1.0 * i/order;
        //DRAW3(td, t, 0, 1-t );
        dll.push_back(td);
        
    END

    ITJ(i,order)
    
        int n = i < order -1 ? i + 1 : 0;

        int pidx = i * 2;
        
        //circle through this point and over next line
        Cir a = pnt[pidx] ^ dll[n];
        DRAW(a);
        
        DRAW3(pnt[pidx],1,0,0);
        
        //plane through next->next point and over this line
        Dlp td = ( pnt[n*2+1] ^ Inf(1) ) <=  dll[i].dual();
//        DRAW(td);
        
        //Meet of plane and circle
        Pnt np = Ro::split( (td ^ a.dual()).dual(), true );
        DRAW3(np,0,1,0);
        
        Pnt np2 = Ro::split( (td ^ a.dual()).dual(), false );
        DRAW3(np2, 0,1,0);
//        ITJ(j,order)
//            Dll nd = dll[i].mot( dll[j] * ntheta * amt);
//            dll.push_back( nd);
//        END
    END
    
//    ITJ(i,dll.size())
//        DRAW(dll[i]);
//    END
}

void GLVApp :: onDraw() {
//    hyper(*this);
    dodeca(*this);
}

int main(int argc, const char * argv[]) {
     
    File::setdir( argv[0] );       
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(1000,500,"Reflections",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}

