//
//  GraphicsMatrix.h
//  opengles_00
//
//  Created by Pablo Colapinto on 10/28/11.
//  Copyright 2011 x. All rights reserved.
//

#ifndef opengles_00_GraphicsMatrix_h
#define opengles_00_GraphicsMatrix_h

#include "Matrix.h"
#include <math.h>

using namespace std;

namespace vsr{
    
    typedef Mat4<float> Mat4f;
    
    struct XMat {
      
        static Mat4f ortho (float X, float Y0); 
        static Mat4f rot( Rot );
        static Mat4f rotXY(float rad) ;
        static Mat4f trans(Vec3f v);
    //    static Mat4f lookAt(const Vec3f eye, const Vec3f target, const Vec3f up );
        
        static const Mat4f lookAt(const Vec3f& ux, const Vec3f& uy, const Vec3f& uz, const Vec3f& eye) {
            return Mat4f(
                         ux[0], ux[1], ux[2], -(ux.dot(eye)),
                         uy[0], uy[1], uy[2], -(uy.dot(eye)),
                         uz[0], uz[1], uz[2], -(uz.dot(eye)),
                         0, 0, 0, 1
                         );
        }
        
        static const Mat4f lookAt(const Vec3f eye, const Vec3f target, const Vec3f up ){
            Vec3f z = (target - eye).unit();	
            Vec3f x = z.cross(up).unit();
            Vec3f y = x.cross(z).unit();
            return lookAt(x, y, -z, eye);
        }
        
        static const Mat4f frustum(float left, float right, float bottom, 
                                             float top, float near, float far)
        {
            float a = 2 * near / (right - left);
            float b = 2 * near / (top - bottom);
            float c = (right + left) / (right - left);
            float d = (top + bottom) / (top - bottom);
            float e = - (far + near) / (far - near);
            float f = -2 * far * near / (far - near);
            
            return Mat4f (
             a, 0, c, 0,
             0, b, d, 0,
             0, 0, e, f,
             0, 0, -1, 1
            );
        }
        
        static const Mat4f fovy (float rad, float aspectRatio, float near, float far)
        {
            float top = near * tan(rad);
            float bottom = -top;
            float left = bottom * aspectRatio;
            float right = top * aspectRatio;
            
            return frustum(left, right, bottom, top, near, far);
        }
        
        static const Mat4f identity();
    };

    inline const Mat4f XMat::identity(){
        return Mat4f(
            1,0,0,0,
            0,1,0,0,
            0,0,1,0,
            0,0,0,1
        );
    }
    
    inline Mat4f XMat::ortho(float X, float Y) {
                return Mat4f(
                    1.0f / X ,  0,0,0,
                    0, 1.0f / Y,  0,0,
                    0,  0,  -1,     0,
                    0,  0,  0,      1
                );          
    }
    
    inline Mat4f XMat::rot( Rot r ){
        Vec x = Op::sp(Vec(1,0,0),r);
        Vec y = Op::sp(Vec(0,1,0),r);
        Vec z = Op::sp(Vec(0,0,1),r);
        
        return Mat4f(
            x[0], x[1], x[2], 0,
            y[0], y[1], y[2], 0,
            z[0], z[1], z[2], 0,
            0, 0, 0, 1
        );        
    }

    inline Mat4f XMat::rotXY(float rad){

            float s = sin(rad);
            float c = cos(rad);
            
            return Mat4f(
                c, s, 0, 0,
                -s, c, 0, 0,
                0, 0, 1, 0,
                0, 0, 0, 1
            );
    }
    
    inline Mat4f XMat::trans(Vec3f v){
        return Mat4f (
            1,0,0,0,
            0,1,0,0,
            0,0,1,0,
            v[0], v[1], v[2], 1
        );
    }

//    inline Mat4f lookAt(const Vec3f eye, const Vec3f target, const Vec3f up ){
//        Vec3f z = (eye-target).unit();
//        Vec3f x = up.cross(z).unit();
//        Vec3f y = z.cross(x);
//        
//        Mat4f m( Vec4f(x,0), Vec4f(y,0), Vec4f(z,0), Vec4f(0,0,0,1) );
//        
//        Vec4f eyep = m * (-eye);
//        
//    }
//    	


    

}

#endif
