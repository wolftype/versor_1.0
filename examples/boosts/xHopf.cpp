//
//  xHopf.cpp
//  Versor
//
//  Created by Pablo Colapinto on 7/24/13.
//  Copyright (c) 2013 WOLFTYPE. All rights reserved.
//

#include "vsr.h"
#include "vsr_op.h"

#include "vsr_GLVInterfaceImpl.h"

#include "vsr_fiber.h"

#include "vsr_knot.h"

#include "vsr_mesh.h"

#include "vsr_tests.h"

#include "vsr_coord.h"

#include <iostream>

using namespace vsr;
using namespace glv;

TorusKnot tk(3,2);
HopfFiber& hf = tk.HF;

vsr::Mesh mesh(GL::LL);

void hopf(GLVApp& app){



    // set up
    static double theta, phi,amt, lat, longi, NUM, ttheta, tphi, rad, size;
    SET 
        app.gui(ttheta,"ttheta")(tphi,"ttphi",-.5,.5)(rad, "rad"); //axis and spread of cone
        app.gui(size,"size",0,10);//(lat,"lat",-5,5)(longi,"longi",-5,5)(theta, "theta", -10,10)(phi, "phi",-10,10)
        app.gui(amt, "amt",-10,10)(NUM,"num",1,1000);
        
        NUM = 200;
    END
    
    
   //on animate
    static double time = 0.0; time += .01;
   // hf.vec() = Vec::x.sp( Gen::rot( Biv::xy * time ) );//Coord::sph2vec(theta * TWOPI, (-.5 + 1 * phi) * TWOPI);
    
    hf.cir() = CXZ(1).dil(size);
    
    //on draw
     DRAW( hf.cir() );
     
     ITJ(i,NUM) VAL(i,NUM)
       //hf.vec() = Coord::sph2vec(t * TWOPI, (-.5 + 1 * phi) * PI).sp( Gen::rot(Biv::xy * time) );//( -1 + 2 * t ) * 
       //hf.vec() = Coord::sph2vec(t * TWOPI,  lat * PI).sp( Gen::rot(theta, phi) );
       Vec av = Vec::x.sp( Gen::rot( ttheta * TWOPI, tphi * PI ) );
       DRAW3(av,1,0,0);
       Biv biv = av.duale();
       hf.vec() = Vec::x.sp( Gen::rot( biv * t * PI ) * Gen::rot(ttheta * TWOPI, (tphi + rad/2.0 )* PI) ) ;//Coord::sph2vec(longi * TWOPI,  lat * PI).sp( Gen::rot( biv * t * PI ) ) ;//sp( Gen::rot(theta, phi) ).
        DRAW3( hf.fiberA(),0,0,1 );
        DRAW3( hf.vec(),1,1,0 ); 
        hf.phase() = t * amt * 100 + time;
       DRAW3( hf.pnt(),1,0,t ); 
     END

	// Local Statics
	static Pnt np;
	static Bst bst;
	bst = tk.bst();
    
	tk.pnt.clear();						   
    np = app.mouse().origin; 
    ITJ(i,tk.iter()+1)
        np = Ro::loc( np.sp( bst ) );
        tk.pnt.push_back(np);
    END 
    
    mesh.clear();
    ITJ(i,tk.iter()+1)
        mesh.add(tk.pnt[i]);
    END
    
    mesh.draw();
     
//     ITJ(i,50) VAL(i,50)
//       hf.vec() = Coord::sph2vec(theta * TWOPI, t* (-.5 + 1 * phi) * PI);
//       DRAW3( hf.pnt(),0,1,t ); 
//     END

}


void GLVApp :: onDraw(){
  hopf(*this);
}

int main(int argc, const char * argv[]) {
     
//    cout << "arg: " << argv[0] << endl; 
 //   File::setdir( argv[0] );  
           
	GLV glv(0,0);	
//	glv.colors().back.set(1,1,1);
	glv.colors().back.set(.1,.1,.1);
        		
	Window * win = new Window(500,500,"VSR",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}