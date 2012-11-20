//
//  GraphicsMatrix.h
//  opengles_00
//
//  Created by Pablo Colapinto on 10/28/11.
//  Copyright 2011 x. All rights reserved.
//

#ifndef opengles_00_GraphicsMatrix_h
#define opengles_00_GraphicsMatrix_h

#include "vsr_matrix.h"
#include "vsr_frame.h"
#include <math.h>

using namespace std;

namespace vsr{
    
    typedef Mat4<float> Mat4f;
    typedef Mat4<double> Mat4d;
    
    struct XMat {
      
        static Mat4f ortho (float X, float Y0); 
        static Mat4f rot( Rot );
        static Mat4f rotXY(float rad) ;
        template< typename T> static Mat4f trans(T v);
        template<typename T> static Mat4f trans(T x, T y, T z);
    //    static Mat4f lookAt(const Vec3f eye, const Vec3f target, const Vec3f up );
    
        
        
        static const Mat4f lookAt2(const Vec3f& ux, const Vec3f& uy, const Vec3f& uz, const Vec3f& eye) {
            return Mat4f(
                         ux[0], ux[1], ux[2], -(ux.dot(eye)),
                         uy[0], uy[1], uy[2], -(uy.dot(eye)),
                         uz[0], uz[1], uz[2], -(uz.dot(eye)),
                         0, 0, 0, 1
                         );
        }
        
        //transposed version
        static const Mat4f lookAt(const Vec3f& ux, const Vec3f& uy, const Vec3f& uz, const Vec3f& eye) {
            return Mat4f(
                         ux[0], uy[0], uz[0], 0,
                         ux[1], uy[1], uz[1], 0,
                         ux[2], uy[2], uz[2], 0,
                         -(ux.dot(eye)), -(uy.dot(eye)), -(uz.dot(eye)), 1
                         );
        }
        //transposed version
        static const Mat4f lookAt(const Frame& f) {
            return lookAt(f.x(), f.y(), f.z(), f.pos() );
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
        
        static const Mat4f fovy2 (float rad, float aspectRatio, float near, float far)
        {
            float top = near * tan(rad);
            float bottom = -top;
            float left = bottom * aspectRatio;
            float right = top * aspectRatio;
            
            return frustum(left, right, bottom, top, near, far);
        }

        /*! Calculate Field of View (Perspective)
        http://unspecified.wordpress.com/2012/06/21/calculating-the-gluperspective-matrix-and-other-opengl-matrix-maths/
        */
        static const Mat4f fovy (float rad, float aspect, float near, float far)
        {
            float f = 1.0 / tan( rad/2.0 );
            float tb = near - far;

            float a = f / aspect; 
            float c = (far + near) / tb;
            float d = 2 * far * near / tb;
            
            return Mat4f( 
                a, 0, 0, 0,
                0, f, 0, 0,
                0, 0, c, -1,
                0, 0, d, 0        
            );
        }
        
        static const Mat4f identity();
        
        
//        static const Vec3f Project();
//        static const Vec3f UnProject();
        
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
    
    template< typename T>
    inline Mat4f XMat::trans(T v){
        return Mat4f (
            1,0,0,0,
            0,1,0,0,
            0,0,1,0,
            v[0], v[1], v[2], 1
        );
    }
    
    template<typename T>
    inline Mat4f XMat::trans(T x, T y, T z){
        return Mat4f (
            1,0,0,0,
            0,1,0,0,
            0,0,1,0,
            x, y, z, 1
        );    
    }

//
//template<typename T>
//Project( T in, const float model[16], const float proj[16], const int viewport[4],
//	      T * win)
//{
//    model
//    __gluMultMatrixVecd(modelMatrix, in, out);
//    __gluMultMatrixVecd(projMatrix, out, in);
//    if (in[3] == 0.0) return(GL_FALSE);
//    in[0] /= in[3];
//    in[1] /= in[3];
//    in[2] /= in[3];
//    /* Map x, y and z to range 0-1 */
//    in[0] = in[0] * 0.5 + 0.5;
//    in[1] = in[1] * 0.5 + 0.5;
//    in[2] = in[2] * 0.5 + 0.5;
//
//    /* Map x,y to viewport */
//    in[0] = in[0] * viewport[2] + viewport[0];
//    in[1] = in[1] * viewport[3] + viewport[1];
//
//    *winx=in[0];
//    *winy=in[1];
//    *winz=in[2];
//    return(GL_TRUE);
//}
//
//UnProject(GLdouble winx, GLdouble winy, GLdouble winz,
//		const GLdouble modelMatrix[16], 
//		const GLdouble projMatrix[16],
//                const GLint viewport[4],
//	        GLdouble *objx, GLdouble *objy, GLdouble *objz)
//{
//    double finalMatrix[16];
//    double in[4];
//    double out[4];
//
//    __gluMultMatricesd(modelMatrix, projMatrix, finalMatrix);
//    if (!__gluInvertMatrixd(finalMatrix, finalMatrix)) return(GL_FALSE);
//
//    in[0]=winx;
//    in[1]=winy;
//    in[2]=winz;
//    in[3]=1.0;
//
//    /* Map x and y from window coordinates */
//    in[0] = (in[0] - viewport[0]) / viewport[2];
//    in[1] = (in[1] - viewport[1]) / viewport[3];
//
//    /* Map to range -1 to 1 */
//    in[0] = in[0] * 2 - 1;
//    in[1] = in[1] * 2 - 1;
//    in[2] = in[2] * 2 - 1;
//
//    __gluMultMatrixVecd(finalMatrix, in, out);
//    if (out[3] == 0.0) return(GL_FALSE);
//    out[0] /= out[3];
//    out[1] /= out[3];
//    out[2] /= out[3];
//    *objx = out[0];
//    *objy = out[1];
//    *objz = out[2];
//    return(GL_TRUE);
//}



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
