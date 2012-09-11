//
//  Circle.h
//  vsr
//
//  Created by Pablo Colapinto on 5/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_Circle_h
#define vsr_Circle_h

#include "vsr.h"

namespace vsr {
    
    class Circle : public Cir {
        
    public:
        
        Par at(double theta) { return Ro::par_cir(theta); }
        Pnt at(double theta) { return Ro::pnt_cir(theta); }
        Dls sur() { return Ro::sur(*this); }
        double siz() { return Ro::siz(*this); }
        double rad() { return Ro::rad(*this); }
        Pnt pos() { return Ro::null_cen(*this); }
        
    }
    
} //vsr::

#endif
