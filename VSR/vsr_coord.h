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
    
    inline Vec Sph(double theta, double phi){
     
        Rot r = Gen::rot(theta, phi);
        return Vec::x.sp(r);   
    }
  }
} //vsr::


#endif
