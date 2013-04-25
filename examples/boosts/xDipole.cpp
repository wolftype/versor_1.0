//
//  dipole.cpp
//  Versor
//
//  Created by Pablo Colapinto on 3/29/13.
//  Copyright (c) 2013 WOLFTYPE. All rights reserved.
//
#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"

#include "vsr_motor.h"
#include "vsr_field.h"

#include "vsr_tests.h"

#include <iostream>

using namespace vsr;
using namespace glv;

void dipole(GLVApp& app){

    using namespace vsr::GL;
    
    static double amt, trail;
    static bool bReset;

    //Vector Field
    static Field<Vec> f(60,10,1,.5);
    //Point Particles
    static Field<Pnt> particles(30,20,1,.2);
    
    SET 
        app.gui(amt, "amt", -10,10)(trail,"trail",0,100)(bReset,"reset"); 
        amt = .3; trail = 1;
    END
    
    if (bReset) particles.reset();

    //Imaginary Point Pair Follows Mouse Position
    Pnt pnt = app.mouse().origin;
    Frame frame(pnt);
    Par par = frame.py(false) * amt;
    
    ITJ(i,particles.num())
        double dist = Ro::sqd(pnt, particles[i] ) + 1;  //Squared Distance is -2.0 * pA <= pB
        Par tpar = par * (1.0/dist) * 1.0/trail;
        Bst bst = Gen::bst( tpar );
        Pnt np = particles[i];
        
        //Iterate to create a trailing tail
        ITJ(j,trail)
            double t= 1.0 * j/trail;
            np = Ro::loc( np.sp( bst ) );
            DRAW3( Ro::dls(np,.05),1,.4,1-t);                     //Draw Particle
        END
        
        particles[i] = np;                          //Save to particle field
    END
    
    
    ITJ(i,f.num())
    
        double dist = Ro::sqd( pnt, f.grid(i) ) + 1;
        
        Par tpar = par * (1.0/dist);
        Bst bst = Gen::bst( tpar );

        Pnt np = Ro::loc( f.grid(i).sp( bst ) );
        Vec dx = np - f.grid(i);
        
        f[i] = dx;
                                        
    END
    
    //Draw Vector Field (Green)
    f.draw(.2,1,.2);

}

void GLVApp :: onDraw(){
 dipole(*this);
 text("Dipole Field with Imaginary Point Pair Generator at Mouse Position",50,50);
}

int main(int argc, const char * argv[]) {
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(0,0,0);
    		
	Window * win = new Window(500,500,"VSR",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}