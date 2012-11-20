//
//  vsr_dynamics.h
//  Versor
//
//  Created by Pablo Colapinto on 11/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_dynamics_h
#define Versor_vsr_dynamics_h

namespace vsr {

    template<class T, int N>
    struct State {
        T[N] val;
        
        T& operator [] (int idx) { return T[idx]; }
        T operator [] (int idx) const { return T[idx]; }
    }

} //vsr::

#endif
