//
//  vsr_xf.h
//  Versor
// TRANSFORMATION MATRICES
//  Created by Pablo Colapinto on 4/25/13.
//  Copyright (c) 2013 WOLFTYPE. All rights reserved.
//

#ifndef Versor_vsr_xf_h
#define Versor_vsr_xf_h

#include "vsr_op.h"
#include "vsr_matrix.h"

namespace vsr {

    namespace Xf {
            /*!
         4x4 Transformation Matrix From Rotor
        */
        inline Mat4f mat( const Rot& r) {
          
            Vec xi = Vec::x.sp(r);
            Vec yi = Vec::y.sp(r);
            Vec zi = Vec::z.sp(r);
            
            return Mat4f(xi[0], xi[1], xi[2], 0, 
                          yi[0], yi[1], yi[2], 0,
                          zi[0], zi[1], zi[2], 0,
                          0   ,   0 ,   0 ,    1 );
        }
        
//        template<typename T>
//        inline T copy(const Rot& r, const Vec& v, double s ){
//            Vec xi = Vec::x.sp(r);
//            Vec yi = Vec::y.sp(r);
//            Vec zi = Vec::z.sp(r);
//            
//            double x = v[0]; double y = v[1]; double z = v[2];    
//            
//            
//            return T ( xi[0] * s, xi[1] * s, xi[2] * s, 0, 
//                          yi[0] * s, yi[1] * s, yi[2] * s, 0,
//                          zi[0] * s, zi[1] * s, zi[2] * s, 0,
//                          x  ,   y ,   z ,    1 );
//         } 
        /*!
         4x4 Transformation Matrix From Rotor, Translation Vector, and Scale
        */
        inline Mat4f mat( const Rot& r, const Vec& v, double s) {
          
            Vec xi = Vec::x.sp(r);
            Vec yi = Vec::y.sp(r);
            Vec zi = Vec::z.sp(r);
            
            double x = v[0]; double y = v[1]; double z = v[2];
            
            return Mat4f( xi[0] * s, xi[1] * s, xi[2] * s, 0, 
                          yi[0] * s, yi[1] * s, yi[2] * s, 0,
                          zi[0] * s, zi[1] * s, zi[2] * s, 0,
                          x  ,   y ,   z ,    1 );
        }
        
        /*
        4x4 Transformation matrix from Circle
        */
        inline Mat4f mat(const Cir& s){
            Biv b = Ro::dir( s ); // Get Direction
            Rot r = Gen::ratio( Vec::z, b.duale().unit() );
            Vec v = Ro::loc(s);
            double scale = Ro::rad( s );
            return mat(r,v,scale);
        }

    } // XF
} //vsr::



#endif
