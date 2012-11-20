//
//  vsr_allovsr.h
//  Versor
/*
    Glue for AlloCore Project (at UCSB)
*/
//  Created by Pablo Colapinto on 11/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_allovsr_h
#define Versor_vsr_allovsr_h

#include "allocore/spatial/al_Pose.hpp"
#include "VSR/vsr_frame.h"

namespace vsr {

    using al::Pose;
    using al::Quatd;
//    using al::Vec3d;
    
    Quatd Rot2Quat(const Rot& r){
        return Quatd(r[0], -r[3], r[2], r[1]);
    }

    Rot Quat2Rot(const Quatd& q){
        return Rot(q[0], -q[3], q[2], q[1]);
    }

    al::Vec3d V2V(const Vec& v){
        return al::Vec3d(v[0], v[1], v[2]);
    }

    Vec V2V(const al::Vec3d& v){
        return Vec(v[0], v[1], v[2]);
    }
    
    Pose Frame2Pose(const Frame& f){
        return Pose( V2V( f.vec() ) , Rot2Quat( f.rot() ) );    
    }

    Frame Pose2Frame(const Pose& p){
        return Frame( Ro::null( p.pos() ), Quat2Rot( p.quat() ) );
    }

}

#endif
