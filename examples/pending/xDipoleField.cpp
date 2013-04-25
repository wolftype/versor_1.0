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
    static Field<Vec> f(30,10,1,.5);
    //Point Particles
    static Field<Pnt> particles(30,10,10,.2);

    static Field<Sca> charge(30,10,10,.2);
    
    static Field<Par> fpar(2,1,1,5);

    static Frame frame[2];
    
    SET 
    
        Rand::Seed();
        
        //app.gui(amt, "amt", -10,10)(trail,"trail",0,100)(bReset,"reset"); 
        amt = .55; trail = 1;
        
        ITJ(i,fpar.num())
            frame[i].pos() = fpar.grid(i);
        END
        
        ITJ(i,charge.num())
            charge[i] = .5 + Rand::Num();
        END
    END
    
    if (bReset) particles.reset();

     //Imaginary Point Pair Follows Mouse Position
    Pnt pnt = app.mouse().origin;
    frame[0].pos() = pnt;
       
    ITJ(i,fpar.num())
        TOUCH(frame[i]);
//        Dls ts = Ro::dls( frame[i].pos(), 1);
        fpar[i] = frame[i].py(false) * amt;//Ro::par(ts, Vec::y) * amt;
    END

    fpar[0] *= 2;
    
    ITJ(i,particles.num())

        Pnt np; 
        Pnt tp = particles[i];        
            
        //Iterate np for all Dipoles
        for (int j = 0; j < fpar.num(); ++j){
            Par par = fpar[j];    
            double dist = Ro::sqd( frame[j].pos(), particles[i] ) + 1;  //Squared Distance is -2.0 * pA <= pB
            Par tpar = par * ( charge[i] / dist );
            Bst bst = Gen::bst( tpar );
            np += Ro::loc(tp.sp( bst ));//Ro::loc( tp.sp( bst ) );
        }
        
        particles[i] = np;                          //Save to particle field
    END
    
    
    ITJ(i,f.num())
    
            //Iterate np for all Dipoles
        Vec dx;
        for (int j = 0; j < fpar.num(); ++j){
            double dist = Ro::sqd( frame[j].pos(), f.grid(i) ) + .01;
            Par par = fpar[j]; 
            Par tpar = par * (1.0/dist);
            Bst bst = Gen::bst( tpar );

            Pnt np = Ro::loc( f.grid(i).sp( bst ) );
            dx += np - f.grid(i);
           
        }       
         f[i] = dx * .5;                         
    END
    
    //Draw Vector Field (Green)
    f.draw(.2,1,.2);
    
    //Draw Particles
    particles.draw(.5,1,1);

}

void GLVApp :: onDraw(){
 dipole(*this);
 //text("Dipole Field with Imaginary Point Pair Generator at Mouse Position",50,50);
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