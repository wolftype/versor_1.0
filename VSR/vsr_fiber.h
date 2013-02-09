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

    /// Feed in Spherical Coordinates of a 2-Sphere with One Pole Specified, get 3-Sphere Fiber out
    class HopfFiber{
        
        //Chirality
        bool bHanded;
        
        //Circle base (at Phi = -.5)
        Circle mCir;
        
        public:
                
        HopfFiber(bool hand=true) : bHanded(hand) {
            mCir = CXZ(1);
            //inf =  Inf(1) <= cir;//PAO ^ Ro::null(0, bHanded? 1 :-1,0) ^ Inf(1);
        }
        
        Circle& cir() { return mCir; }
        Circle cir() const { return mCir; }
        
        //Dual line axis of Circle South Pole (i.e. the North Pole)
        DualLine dll(){ return (Inf(1) <= mCir).runit(); }
        
        Mtt mtt(double theta, double phi){
            double ptheta = PIOVERTWO * theta;
            double pphi = phi+.5;

            Vector v = Vec::x.rot( Biv::xz * ptheta ) / Ro::rad(mCir);
            Lin lim = mCir.sp( Gen::trv( v ) );                                      //<-- Circle to a Line (Limit)
            Mot mot = Gen::ratio( lim.dual().runit(), dll(), pphi);
            
            return mot * Gen::trv(v * pphi ) ; 
        }
        
        //boost only no twist
        Trv trv(double theta, double phi){
        
            double ptheta = PIOVERTWO * theta;
        
            Vec v = Vec::x.rot( Biv::xz * ptheta );
            return  Gen::trv(v * phi ); 
        }
    
        //twist only
        Mot mot(double theta, double phi){
        
            double ptheta = PIOVERTWO * theta;

            Vec v = Vec::x.rot( Biv::xz * ptheta );
            Lin lim = mCir.sp( Gen::trv(v.unit()) ); 
            return Gen::ratio( lim.dual().runit(), dll(), phi );
        }
        
        //theta from -1 to 1, phi from -.5 to .5
        Cir fiber(double theta, double phi){

            double ptheta = PIOVERTWO * theta;
            double pphi = phi+.5;

            //Divide by Radius
            Vector v = Vec::x.rot( Biv::xz * ptheta ) / Ro::rad(mCir);
            
            Lin lim = mCir.sp( Gen::trv( v ) );                                      //<-- Circle to a Line (Limit)
            Mot mot = Gen::ratio( lim.dual().runit(), dll(), pphi);
            
            return mCir.sp( mot * Gen::trv(v * pphi )  ) ; 
            
        }
        

        Cir fiber(const Vec& v){
            Coord::Sph cs = Coord::vec2sph(v); // spherical coordinates [-1,1] and [-.5,.5]
            return fiber(cs.theta/PI, cs.phi/PI);
        }
        
        Lin lim(double theta){
            double ptheta = PIOVERTWO * theta;
            Vector v = Vec::x.rot( Biv::xz * ptheta );
            return mCir.sp( Gen::trv(v) );  
        }
        
        vector<Cir> poles(double theta, double phi){
            vector<Cir> cp;
            cp.push_back( fiber(theta, phi) );
            double theta2 = theta < 0 ? theta + 1 : theta - 1;
            double phi2 = - phi;
            cp.push_back( fiber(theta2, phi2) );
            return cp;
        }
        
        Pnt phase(double theta, double phi, double phs){
            return Ro::pnt_cir( fiber(theta,phi), phs * PI);
        }
        
    };

}//vsr::
#endif
