//
//  vsr_coord.h
//  Versor
//
//  Created by Pablo Colapinto on 11/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_coord_h
#define Versor_vsr_coord_h

#include "vsr.h"
#include "vsr_op.h"

namespace vsr {
  
  namespace Coord{
  
    struct Sph{
        Sph( double t, double p, double r) : theta(t), phi(p), rad(r) {}
        double theta, phi, rad;
    };
    
    inline Vec sph2vec(double theta, double phi){
     
        Rot r = Gen::rot(theta/2.0, phi/2.0);
        return Vec::x.sp(r);   
    }
    
    inline Sph vec2sph(const Vec& tv){
        double r = tv.norm();
        return Sph( atan2(tv[2],tv[0]) , acos(-tv[1]/r) - PIOVERTWO, r);
     } 
  }
} //vsr::


#endif
