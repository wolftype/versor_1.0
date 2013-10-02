//
//  vsr_dynamics.h
//  Versor
//
//  Created by Pablo Colapinto on 11/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_dynamics_h
#define Versor_vsr_dynamics_h

#include "vsr.h"
#include "vsr_op.h"
#include "vsr_frame.h"
#include "vsr_field.h"

namespace vsr {

    //Double Field (present and past state)
    template<class T>
    struct DoubleField {
        
        Field<T> a, b;
    };
    

    //Current and Past State
    template<class T, int N>
    struct State {
        T[N] val;
        
        T& operator [] (int idx) { return T[idx]; }
        T operator [] (int idx) const { return T[idx]; }
    }

    struct Particle {
        double acc;
        Vec vel;
        Pnt pos;
    }; 
    
    
//    struct : public State< Particle, 2 > {
//    
//        T& cur() { return T[1]; }
//        T& old() { return T[0]; }
//        T cur() const { return T[1]; }
//        T old() const { return T[0]; }
//
//    };

    template<class T>
    struct Verlet {
    
        //Position
        //LeapFrog
        //Velocity
        
        double dt;
        // Feed in Current Particle, return updated Particle
        static T Pos(const T& p){
            Pnt pnt = p[1].pos() - p[0].pos();
            p.vel();
            p.acc();
            return T( );
        }
    };
    
    
    
    struct VelocityVerlet {
    
    };
    
    template<class T>
    struct Advect {
        
        //Pass in a Double Field 
        static DoubleField& Forward(const DoubleField& f, double amt){
        
        }
        
    };
} //vsr::

#endif
