//
//  knot.cpp
//  vsr 
//
//  Created by Pablo Colapinto on 6/28/12.
//  
//  
//  Copyright (c) 2012 wolftype. All rights reserved.

#include "vsr.h"
#include "vsr_op.h"

#include "vsr_GLVInterfaceImpl.h"

#include "vsr_fiber.h"

#include "vsr_knot.h"

#include "vsr_mesh.h"

#include "vsr_tests.h"

#include <iostream>

using namespace vsr;
using namespace glv;

void basicKnot(GLVApp& app){

    Mesh tm(GL::LS);
    Mesh sm(GL::LS);
    Mesh sm2(GL::LS);
     
    static double P,Q,amt, writhe, size, numcables;
    
    static bool bDrawFiber;
    
    static double lw;
    
    SET 
        app.gui(P,"P",0,100)(Q,"Q",0,100)(amt)(size)(writhe, "writhe",0,100)(bDrawFiber)(lw,"lw",0,100); 
        P = 3; Q = 2; amt = .02; size = .4; writhe = 2;
    END

    glLineWidth(lw);

    TorusKnot tk(P,Q,amt);
    static Vec v = Vec::y;
    TOUCH(v);
    
    tk.HF.vec() = v;
    
    if (bDrawFiber) {
        DRAW3(tk.HF.fiberA(),1,0,0);
        DRAW3(tk.HF.fiberB(),0,0,1);
        DRAW3(v,1,1,0);
    }
    
    //ORBIT
    static Pnt p = PT(1.5,0,0); DRAWANDTOUCH(p);
    p = Ro::loc( p.sp( tk.bst() ) );
    Pnt np = p;
    ITJ(i,tk.iter()+1)
        np = Ro::loc( np.sp( tk.bst() ) );
        tk.pnt.push_back(np);
        tm.add(np);
    END
    
    //CIRCLES
    ITJ(i,tk.iter())
        double t = -1 + 2.0 * i/tk.iter();
        double tt = 1 + t * t;
        int idx = i < tk.iter() ? i + 1 : 0;
        Par tpar = tk.pnt[i] ^ tk.pnt[idx];
        tk.cir.push_back(tpar.dual().dil(tk.pnt[i], tt*3*size));
    END
    
    Mesh nm = Mesh::Skin( tk.cir, tk.cir.size(), 10 ).useElements(true);
    
    
    //CABLES
    ITJ(i,tk.iter())
        double t = 1.0 * i/tk.iter();
        Par tp = Ro::par_cir( tk.cir[i], t * PI * writhe);
        sm.add( Ro::split( tp, true ) ); 
        sm2.add( Ro::split( tp, false ) );        
    END
    
    //DRAW
    ITJ(i,tk.iter())
        DRAW3(tk.cir[i],0,1,1);
    END

    tm.draw(0,1,0);
   sm.draw(1,.5,.2);
    sm2.draw(1,.8,.2);
    nm.draw(0,1,0,.2);//(0,1,0);
    
    //cout << tk.HF.mtt(PIOVERTWO, PIOVERFOUR/2.0) << endl;
    
}


void test(GLVApp& app){

    static Field<Pnt> f( 20, 20, 20, 1 );
    TorusKnot tk( 3, 2 );
        
    static double amt;
    SET
        app.gui(amt);
        amt = 0;
    END
        
    tk.amt = amt;
    
    static double time = 0; time += .01;
    tk.HF.cir() = CXZ(1).sp( Gen::rot( Biv::xy * time) );
    
    ITJ(i, f.num())
        double dist = .1 + f[i][4];//(.1 + Ro::sqd( f[i], PAO ) ) ;
//        Bst bst = Gen::bst( par * 1./dist );
        //Bst tb = Gen::bst( Ro::par( DLS(1), Vec::y) * amt * 1./dist );
        Bst tb = tk.bst( amt * 1./dist );
        //cout << tk.amt << endl; 
        f[i] = Ro::loc( f[i].sp( tb ) );
    END
    
    
    DRAW3(f,1,0,1);
    
}

void GLVApp :: onDraw(){
 basicKnot(*this);
 //   test(*this);
// text("Cabled Torus Knot Wound around Two Antipodal Hopf Links",50,50);
}

int main(int argc, const char * argv[]) {
     
//    cout << "arg: " << argv[0] << endl; 
 //   File::setdir( argv[0] );  
           
    /* Set Up GLV hiera
    rchy */
	GLV glv(0,0);	
	glv.colors().back.set(1,1,1);
    		
	Window * win = new Window(500,500,"VSR",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}