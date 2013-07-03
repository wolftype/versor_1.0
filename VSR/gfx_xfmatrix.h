//
//  GraphicsMatrix.h
//  opengles_00
//
//  Created by Pablo Colapinto on 10/28/11.
//  Copyright 2011 x. All rights reserved.
// Consider using songha's instead . . .
//

#ifndef GFX_xfmatrix_h
#define GFX_xfmatrix_h

#include "gfx_matrix.h" 
#include <math.h>

using namespace std;

namespace gfx{
    
//    typedef vsr::Mat4<float> Mat4f;
//    typedef vsr::Mat4<double> Mat4d; 
    
    /*! Transformation Matrices Container */
    struct XformMat {
        float model[16];
        float view[16];
        float modelView[16];
        float proj[16];
        float normal[16];

        double modeld[16];
        double viewd[16];
        double modelViewd[16];
        double projd[16];
        double normald[16];
        
        Mat4f modelMatrixf() const { return model; }
        Mat4f viewMatrixf()const { return view; }
        Mat4f modelViewMatrixf()const { return modelView; }
        Mat4f projMatrixf()const { return proj; }
        Mat4f normalMatrixf() const { return normal; }

        // Mat4f& modelMatrixf()  { return model; }
        // Mat4f& viewMatrixf() { return view; }
        // Mat4f& modelViewMatrixf() { return modelView; }
        // Mat4f& projMatrixf() { return proj; }
        // Mat4f& normalMatrixf()  { return normal; }

        void toDoubles() {
            for (int i = 0; i < 16; ++i){
                modeld[i] = model[i];
                projd[i] = proj[i];
                viewd[i] = view[i];
                modelViewd[i] = modelView[i];
                normald[i] = normal[i];
            }
        }

        void toFloats() {
            for (int i = 0; i < 16; ++i){
                model[i] = modeld[i];
                proj[i] = projd[i];
                view[i] = viewd[i];
                modelView[i] = modelViewd[i];
                normal[i] = normald[i];
            }
        }

        int	viewport[4];

        //Print View Matrix (Camera)
        friend ostream& operator << ( ostream& os, const XformMat& xf){
        
            os << "VIEWPORT" << "\n";            
            for (int i = 0; i < 2; ++i){
                for (int j = 0; j < 2; ++j){
                    os << xf.viewport[i + j * 2] << " "; 
                }
                os << "\n";
            }
        
            os << "MODELVIEW" << "\n";
            for (int i = 0; i < 4; ++i){
                for (int j = 0; j < 4; ++j){
                    int idx = i + j * 4;
                    os << xf.modelViewd[idx] << " ";
                }
                os << "\n";
            }

            os << "PROJECTION" << "\n";
            for (int i = 0; i < 4; ++i){
                for (int j = 0; j < 4; ++j){
                    int idx = i + j * 4;
                    os << xf.projd[idx] << " ";
                }
                os << "\n";
            }

            os << "NORMAL" << "\n";
            for (int i = 0; i < 4; ++i){
                for (int j = 0; j < 4; ++j){
                    int idx = i + j * 4;
                    os << xf.normald[idx] << " ";
                }
                os << "\n";
            }
            
            return os;
        }
    };
    
    struct XMat {
      
        static Mat4f ortho (float X, float Y0); 
        // static Mat4f rot( Rot );
        static Mat4f rotXY(float rad) ;

        template< typename T> static Mat4f trans(T v);
        template<typename T> static Mat4f trans(T x, T y, T z);


		// template< typename T> inline static Mat4f& trans( Mat4f& m, T v){
		// 	
		// 	m[12] *= v[0]; m[13] *= v[1]; m[14] *= v[2];
		// 	return 
		// }

    //    static Mat4f lookAt(const Vec3f eye, const Vec3f target, const Vec3f up );
    
        
        
        static  Mat4f lookAt2(const Vec3f& ux, const Vec3f& uy, const Vec3f& uz, const Vec3f& eye) {
            return Mat4f(
                         ux[0], ux[1], ux[2], -(ux.dot(eye)),
                         uy[0], uy[1], uy[2], -(uy.dot(eye)),
                         uz[0], uz[1], uz[2], -(uz.dot(eye)),
                         0, 0, 0, 1
                         );
        }
        
        //transposed version
        static  Mat4f lookAt(const Vec3f& ux, const Vec3f& uy, const Vec3f& uz, const Vec3f& eye) {
            return Mat4f(
                         ux[0], uy[0], uz[0], 0,
                         ux[1], uy[1], uz[1], 0,
                         ux[2], uy[2], uz[2], 0,
						//-eye[0], -eye[1], -eye[2], 1
                          -(ux.dot(eye)), -(uy.dot(eye)), -(uz.dot(eye)), 1
                         );
        }
     

        static  Mat4f lookAt(const Vec3f eye, const Vec3f target, const Vec3f up ){
            Vec3f z = (target - eye).unit();	
            Vec3f x = z.cross(up).unit();
            Vec3f y = x.cross(z).unit();
            return lookAt(x, y, -z, eye);
        }
        
        // static const Mat4f frustum(float left, float right, float bottom, 
        //                                      float top, float near, float far)
        // {
        //     float a = 2 * near / (right - left);
        //     float b = 2 * near / (top - bottom);
        //     float c = (right + left) / (right - left);
        //     float d = (top + bottom) / (top - bottom);
        //     float e = - (far + near) / (far - near);
        //     float f = -2 * far * near / (far - near);
        //     
        //     return Mat4f (
        //      a, 0, c, 0,
        //      0, b, d, 0,
        //      0, 0, e, f,
        //      0, 0, -1, 1
        //     );
        // }    
        static  Mat4f frustum2(float left, float right, float bottom, 
                                             float top, float near, float far)
        {
            float a = 2 * near / (right - left);
            float b = 2 * near / (top - bottom);
            float c = (right + left) / (right - left);
            float d = (top + bottom) / (top - bottom);
            float e = - (far + near) / (far - near);
            float f = -2 * far * near / (far - near);

            return Mat4f (
             a, 0, 0, 0,
             0, b, 0, 0,
             c, d, e, -1,
             0, 0, f, 0
            );            

        }
       
        static  Mat4f fovy2 (float rad, float aspectRatio, float near, float far)
        {
            float top = near * tan(rad);
            float bottom = -top;
            float left = bottom * aspectRatio;
            float right = top * aspectRatio;
            
            return frustum2(left, right, bottom, top, near, far);
        }

        /*! Calculate Field of View (Perspective)
        http://unspecified.wordpress.com/2012/06/21/calculating-the-gluperspective-matrix-and-other-opengl-matrix-maths/
        */
        static  Mat4f fovy (float rad, float aspect, float near, float far)
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
        


        static  Mat4f identity();
		static Mat4f rot( const Quat& r );

        // static Mat4f aa( const Rot& r);
        
        /* Projection of World onto Screen Coordinates */
        static  Vec3f Project(const Vec3f& v, const XformMat& xf){
            Mat4f tmp = xf.projMatrixf() * xf.modelViewMatrixf();
            Vec4f vp = tmp * Vec4f(v[0],v[1],v[2],1.0);
            
            return Vec3f(
                xf.viewport[0] + xf.viewport[2] * (vp[0] + 1)/2.0,
                xf.viewport[1] + xf.viewport[3] * (vp[1] + 1)/2.0,
                (vp[2] + 1) / 2.0
            );
        }
        
        /* UNProjection of Screen Coordinates into World */
        static  Vec3f UnProject(const Vec3f& v, const XformMat& xf){
            Mat4f pm = xf.modelViewMatrixf() * xf.projMatrixf();
            Vec4f vp( 
                (2.0 * (v[0] - xf.viewport[0]) / xf.viewport[2] ) - 1, 
                (2.0 * (v[1] - xf.viewport[1]) / xf.viewport[3] ) - 1, 
                (2.0 * (v[2]) ) - 1,
                1
                );
            Vec4f r = !pm * vp;
            return Vec3f(r[0],r[1],r[2]);
        }
        
    };

    inline  Mat4f XMat::identity(){
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

    inline Mat4f XMat::rot( const Quat& r ){
        Vec3f x = Quat::spin(Vec3f(1,0,0),r);
        Vec3f y = Quat::spin(Vec3f(0,1,0),r);
        Vec3f z = Quat::spin(Vec3f(0,0,1),r);
        
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
    
//    template< typename T>
//    inline Mat4f XMat::rts( const Rot& r, const Vec& v, double scale s){
//    
//    }

    // inline Mat4f XMat::rot( Rot r ){
    //     Vec x = Op::sp(Vec(1,0,0),r);
    //     Vec y = Op::sp(Vec(0,1,0),r);
    //     Vec z = Op::sp(Vec(0,0,1),r);
    //     
    //     return Mat4f(
    //         x[0], x[1], x[2], 0,
    //         y[0], y[1], y[2], 0,
    //         z[0], z[1], z[2], 0,
    //         0, 0, 0, 1
    //     );        
    // }
    
    // //4x4 Matrix from Axis Angle
    // inline Mat4f XMat::aa( const Rot& r ){
    //     float c = cos( r[0] );
    //     float s = sin( r[0] );
    //     float xx = r[1] * r[1]; float yy =  r[2] * r[2]; float zz =  r[3] * r[3];
    //     float oc = 1-c;
    // 
    //     return Mat4f( xx * oc + c, r[1] * r[2] * oc - r[3] * s, r[1] * r[3] * oc + r[2] * s, 0,
    //         r[1] * r[2] * oc + r[3] * s,    yy * oc + c, r[2] * r[3] * oc - r[1] * s, 0,
    //         r[1] * r[3] * oc - r[2] * s,    r[2] * r[3] * oc + r[1] * s,    zz * oc +c,                 0,
    //         0,                              0,                            0,                             1
    //     );
    // }


    

}

#endif
