//
//  vsr_fiber.h
//  Versor
//
// SOME GOOD FIBRATIONS
//
//  Created by Pablo Colapinto on 1/8/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_fiber_h
#define Versor_vsr_fiber_h

#include "vsr.h"
#include "vsr_op.h"


//Q: Given a Circle, can we find it's associated HopfBundle, and thereby a commuting Circle?
namespace vsr{

    /// Feed in Spherical Coordinates of a 2-Sphere, get 3-Sphere Fiber out
    struct HopfFiber{
        
        bool bHanded;

        //DUAL LINE AT NORTH POLE
        DualLine inf;
        
        //CIRCLE AT SOUTH POLE
        Circle cir;
        
        
        HopfFiber(bool hand=true) : bHanded(hand) {
            cir = CXZ(1);
            inf =  Inf(1) <= cir;//PAO ^ Ro::null(0, bHanded? 1 :-1,0) ^ Inf(1);
        }
        
        
        //boost only no twist
        Trv bst(double theta, double phi){
        
            double ptheta = PIOVERTWO * theta;
        
            Vec v = Vec::x.rot( Biv::xz * ptheta );
            return  Gen::trv(v * phi ); 
        }
    
        //twist only
        Mot mot(double theta, double phi){
        
            double ptheta = PIOVERTWO * theta;

            Vec v = Vec::x.rot( Biv::xz * ptheta );
            Lin lim = cir.sp( Gen::trv(v.unit()) ); 
            return Gen::ratio( lim.dual().runit(), inf, phi );
        }
        
        //theta from -1 to 1, phi from 0 to 1
        Cir fiber(double theta, double phi){

            double ptheta = PIOVERTWO * theta;

            Vector v = Vec::x.rot( Biv::xz * ptheta );
            Lin lim = cir.sp( Gen::trv(v) );                                      //<-- Circle to a Line (Limit)
            Mot mot = Gen::ratio( lim.dual().runit(), inf, phi);
            
            return cir.sp( mot * Gen::trv(v * phi )  ) ; 
            
        }
        
        Lin lim(double theta){
            double ptheta = PIOVERTWO * theta;
            Vector v = Vec::x.rot( Biv::xz * ptheta );
            return cir.sp( Gen::trv(v) );  
        }
        
        vector<Cir> poles(double theta, double phi){
            vector<Cir> cp;
            cp.push_back( fiber(theta, phi) );
            double theta2 = theta < 0 ? theta + 1 : theta - 1;
            double phi2 = .5 + (.5 - phi);
            cp.push_back( fiber(theta2, phi2) );
            return cp;
        }
        
        Pnt phase(double theta, double phi, double phs){
            return Ro::pnt_cir( fiber(theta,phi), phs * PI);
        }
    };

}//vsr::
#endif
