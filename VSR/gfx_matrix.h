/*
 *  MATRIX.h
 *  gelatin
 *
 *  Created by x on 10/22/09.
 *  Copyright 2009 x. All rights reserved.
 *
 */
 
 /*!
	LIGHT-WEIGHT VECTORS AND MATRICES AND DATA STRUCTURES
	FOR PASSING AROUND WITH MEMBERWISE SHALLOW COPYS
 */

#ifndef GFX_MATRIX_H_INCLUDED
#define GFX_MATRIX_H_INCLUDED

#include <iostream>
#include <math.h>  

#include "gfx_constants.h"  

using std::ostream;

namespace gfx {

	template < typename T > class Vec2;
	template < typename T > class Vec3;
	template < typename T > class Vec4;
	template < typename T > class Vec5;
	class Quat;
	template < typename T > class Mat2;
	template < typename T > class Mat3;
	template < typename T > class Mat4;
	template < typename T > class Mat5;
//	template < typename T > class Col3;
//	template < typename T > class Col4;

    //Predeclare Template Friends
    template< class T >
    std::ostream& operator << ( std::ostream& os, const Vec2<T>& a );
    template< class T >
    std::ostream& operator << ( std::ostream& os, const Vec3<T>& a );
    template< class T >
    std::ostream& operator << ( std::ostream& os, const Vec4<T>& a );
    template< class T >
    std::ostream& operator << ( std::ostream& os, const Mat4<T>& a );

	//2D VECTOR
	template <typename T = double>
	class Vec2 {
		public:
			T x,y;
			Vec2() : x(0), y(0){}
			Vec2(T _x, T _y) : x(_x), y(_y) {}
			
			void set(T _x, T _y) { x=_x; y = _y; }			
			
			T& operator [] (int i) { return ((T*)&x)[i]; }
			T  operator [] (int i) const { return ((T*)&x)[i]; }
			
			Vec2 operator *  (T s) const { return Vec2(x*s, y*s); }
			Vec2& operator *=  (T s) { x *= s; y *= s; return *this; }
			
			Vec2 operator + (Vec2 v) const { return Vec2(x+v.x, y+v.y);}
			Vec2 operator - (Vec2 v) const { return Vec2(x-v.x, y-v.y);}
			
			Vec2& operator += (Vec2 v)  { x += v.x; y += v.y; return *this; }
			Vec2& operator -= (Vec2 v)  { x -= v.x; y -= v.y; return *this;}
			
			double len() const { return sqrt (x * x + y * y); }
			double dot(Vec2 v) const { return x * v.x + y * v.y; }
			
            friend ostream& operator << (ostream&, const Vec2<>&);
	};




	//3D VECTOR
	template <typename T = double>
	class Vec3 {
		public:
			T x,y,z;
			Vec3() : x(0), y(0), z(0) {}
			Vec3(T _x, T _y, T _z) : x(_x), y(_y), z(_z) {}
            
            template< class A >
            Vec3(const A& a) : x(a[0]), y(a[1]), z(a[2]) {}

			void set(T _x, T _y, T _z) { x=_x; y = _y; z = _z; }	
			//set and get
			T& operator [] (int i) { return ((T*)&x)[i]; }
			T  operator [] (int i) const { return ((T*)&x)[i]; }			
			T dot(T _x, T _y, T _z){ return (_x*_x + _y*_y + _z*_z); }
			
			Vec3 operator * (T s) const { return Vec3(x*s, y*s, z*s); }
			Vec3& operator *= (T s) { x*=s; y*=s; z*=s; return *this;}
			
			Vec3 operator + (Vec3 v) const { return Vec3(x+v.x, y+v.y, z+v.z);}
			Vec3 operator - (Vec3 v) const { return Vec3(x-v.x, y-v.y, z-v.z);}

			Vec3& operator += (Vec3 v)  { x += v.x; y += v.y; z += v.z; return *this; }
			Vec3& operator -= (Vec3 v)  { x -= v.x; y -= v.y; z -= v.z; return *this;}
        
            Vec3 operator -() const { return Vec3(-x, -y, -z); }
			
			Vec3 vec3() { return *this; }
			//Quat product
			Quat operator * (Vec3 v) const; 
			
			double sq() const { return dot(*this); }
			double len() const { return sqrt (x * x + y * y + z * z); }
			Vec3 unit() const { double n = len();  if (n ==0) n = 1; return Vec3(x/n, y/n, z/n); }
			
			T dot(Vec3 v) const { return x * v.x + y * v.y + z * v.z; }
			static double Dot(const Vec3<>& v ) { return v.dot(v); }
			Vec3 cross(Vec3 v) const { return Vec3( (y * v.z) - (z * v.y), (z * v.x) - (x * v.z), (x * v.y) - (y * v.x) ); }			
			
			static Vec3<> ax(double s = 1.0){ return Vec3<>(s,0,0); }
			static Vec3<> ay(double s = 1.0){ return Vec3<>(0,s,0); }
			static Vec3<> az(double s = 1.0){ return Vec3<>(0,0,s); }						
			
                                                                                                                                                                                                                   
			friend ostream& operator << (ostream&, const Vec3<>&);
        
        int size() const { return 3; } 

	};


	
	//4D VECTOR (HOMOGENOUS COORDINATES)
	template <typename T = double>	
	class Vec4 {
		public:
		
			T x,y,z,w;
			Vec4() : x(0), y(0), z(0), w(1) {}
			Vec4(T _x, T _y, T _z, T _w) : x(_x), y(_y), z(_z), w(_w) {}
			
			Vec4(T _w, Vec3<T> v) : x(v.x), y(v.y), z(v.z), w(_w) {}
            Vec4(Vec3<T> v, T _w) : x(v.x), y(v.y), z(v.z), w(_w) {}
            
			T dot(Vec4 v) const { return x * v.x + y * v.y + z * v.z + w * v.w; }

			void set(T _x, T _y, T _z, T _w) { x=_x; y = _y; z = _z; w = _w; }
            
				
			T& operator [] (int i) { return ((T*)&x)[i]; }
			T  operator [] (int i) const { return ((T*)&x)[i]; }
			
            T * val() { return (T*)&x; }
            const T * val() const { return (T*)&x; }

			Vec4 operator *  (T s) const { return Vec4(x*s, y*s, z*s, w*s); }
			Vec4& operator *=  (T s) { x *= s; y *= s; z *= s; w *= s; return *this; }
            
//            Vec4 operator * (const Mat4<T>& m){
//                return Vec4(
//                    
//                );
//            }
			
			Vec3<T> vec3() { return Vec3<T>(x,y,z); }
			
			friend ostream& operator << (ostream&, const Vec4<>&);

	};
	
    template <typename T>
	inline ostream& operator << (ostream& os, const Vec2<T>& v) {
		os << "v2 X: " << v.x << "\t\tY: " << v.y << "\t\t\n" ;
		return os;
	}
    template <typename T>
    inline ostream& operator << (ostream& os, const Vec4<T>& v) {
		os << "v4 X: " << v.x << "\t\tY: " << v.y << "\t\tZ: " << v.z << "\t\tW: " << v.w << "\t\t\n" ;
		return os;
	}
    template <typename T>
	inline ostream& operator << (ostream& os, const Vec3<T>& v) {
		os << "v3 X: " << v.x << "\t\tY: " << v.y << "\t\tZ: " << v.z << "\t\t\n" ;
		return os;
	}	

	
	//5D VECTOR (CONFORMAL)
	template <typename T = double>	
	class Vec5 {
		public:
			T x,y,z,o,i;
			Vec5() : x(0), y(0), z(0), o(0), i(0) {}
			Vec5(T _x, T _y, T _z, T _o, T _i) : x(_x), y(_y), z(_z), o(_o), i(_i) {}

			void set(T _x, T _y, T _z, T _o, T _i) { x=_x; y = _y; z = _z; o = _o; i = _i; }	
			T& operator [] (int j) { return ((T*)&x)[j]; }
			T  operator [] (int j) const { return ((T*)&x)[j]; }

	};

	template <typename T = double>	
	class Mat2 {
		public:
			Vec2<T> col[2];
			
			Mat2() {
				col[0].set(1,0);
				col[1].set(0,1);
			}
			
			Vec2<T>& operator [] (int i) { return col[i]; }
			Vec2<T>  operator [] (int i) const { return col[i]; }
	};
	
	template <typename T = double>	
	class Mat3 {
		public:
			Vec3<T> col[3];
			
			Mat3() {
				col[0].set(1,0,0);
				col[1].set(0,1,0);
				col[2].set(0,0,1);
			}
			
			Mat3(T xx, T xy, T xz, T yx, T  yy, T yz, T zx, T zy, T zz){
				col[0].set(xx,xy,xz);
				col[1].set(yx,yy,yz);
				col[2].set(zx,zy,zz);			
			}
			
			Mat3(const Vec3<T>& cX, const Vec3<T>& cY, const Vec3<T>& cZ){
				col[0] = cX;//.set(cX.x,cX.y,cX.z);
				col[1] = cY;//.set(cY.x,cY.y,cY.z);
				col[2] = cZ;//.set(cZ.x,cZ.y,cZ.z);			
			}
			
			Vec3<T> & operator [] (int i) { return col[i]; }
			Vec3<T>   operator [] (int i) const { return col[i]; }
	};
	
	template <typename T = double>	
	class Mat4 {
		public:
        
            
			Vec4<T> col[4];
//            typedef const T array_type[4];
            
			Mat4() {
				col[0].set(1.,0.,0.,0.);
				col[1].set(0.,1.,0.,0.);
				col[2].set(0.,0.,1.,0.);
				col[3].set(0.,0.,0.,1.);
			}
			
			Mat4(T xx, T xy, T xz, T xw, T yx, T yy, T yz, T yw, T zx, T zy, T zz, T zw, T wx, T wy,T  wz, T ww){
				
				col[0].set(xx,xy,xz,xw);
				col[1].set(yx,yy,yz,yw);
				col[2].set(zx,zy,zz,zw);
				col[3].set(wx,wy,wz,ww);			
			}
            
            Mat4( const T v[16] ){
                col[0].set(v[0],v[1],v[2],v[3]);
                col[1].set(v[4],v[5],v[6],v[7]);
                col[2].set(v[8],v[9],v[10],v[11]);
                col[3].set(v[12],v[13],v[14],v[15]);
            }
			
			Mat4(Vec4<T>& cX, Vec4<T>& cY, Vec4<T>& cZ, Vec4<T>& cW){
				col[0] = cX;
				col[1] = cY;
				col[2] = cZ;
				col[3] = cW;			
			}
			
			Mat4(const Mat3<T>& m) {
				col[0].set(m[0][0],m[0][1],m[0][2],0.);
				col[1].set(m[1][0],m[1][1],m[1][2],0.);
				col[2].set(m[2][0],m[2][1],m[2][2],0.);
				col[3].set(0.,0.,0.,1.);
			}
					
        Mat4 transpose(){
            return Mat4<T>( 
                           col[0][0], col[1][0], col[2][0], col[3][0],
                           col[0][1], col[1][1], col[2][1], col[3][1],
                           col[0][2], col[1][2], col[2][2], col[3][2],
                           col[0][3], col[1][3], col[2][3], col[3][3]                            
                           );
        }
        

        void fill( T * res ) const { 
            std::copy( val(), val() + 16, res);            
        }
        
       template<class B>
 		Mat4& copy( const B& b){
 			// printf("copy");
 			for (int i = 0; i < 16; ++i){
                 (*this)[i] = b[i];
             }	
 			return *this;
 		} 
        
          const T * val() const { return col[0].val(); }
         T * val() { return &col[0][0]; }
         const T operator [] ( int i ) const { return val()[i]; }
         T& operator [] ( int i ) { return val()[i]; }

         Vec4<T> row(int j) const { return Vec4<T>( col[0][j], col[1][j], col[2][j], col[3][j]); } 
         
         
         Mat4 operator * (const double d) const{
            Mat4 m;
            for (int i = 0; i < 16; ++i){
                m[i] = val()[i] * d;
            }
            return m;
         }
         //matrix multiplication, 
         Mat4 operator * (const Mat4& B) const {
            Mat4 m;
            for (int i = 0; i < 4; ++i){
                m.col[i].set( row(0).dot( B.col[i] ), row(1).dot(B.col[i]), row(2).dot(B.col[i]) , row(3).dot(B.col[i]) );
            }
            return m;
         }
         
         Vec4<T> operator * (const Vec4<T>& v) const {
            return Vec4<T>(
                row(0).dot(v), row(1).dot(v), row(2).dot(v), row(3).dot(v)
            );
         }
        
        //inverse
        Mat4 operator !(){
                Mat4& m = *this;
        		double determinant =
                    m[12]*m[9]*m[6]*m[3] - m[8]*m[13]*m[6]*m[3] - m[12]*m[5]*m[10]*m[3] + m[4]*m[13]*m[10]*m[3]+
                    m[8]*m[5]*m[14]*m[3] - m[4]*m[9]*m[14]*m[3] - m[12]*m[9]*m[2]*m[7] + m[8]*m[13]*m[2]*m[7]+
                    m[12]*m[1]*m[10]*m[7] - m[0]*m[13]*m[10]*m[7] - m[8]*m[1]*m[14]*m[7] + m[0]*m[9]*m[14]*m[7]+
                    m[12]*m[5]*m[2]*m[11] - m[4]*m[13]*m[2]*m[11] - m[12]*m[1]*m[6]*m[11] + m[0]*m[13]*m[6]*m[11]+
                    m[4]*m[1]*m[14]*m[11] - m[0]*m[5]*m[14]*m[11] - m[8]*m[5]*m[2]*m[15] + m[4]*m[9]*m[2]*m[15]+
                    m[8]*m[1]*m[6]*m[15] - m[0]*m[9]*m[6]*m[15] - m[4]*m[1]*m[10]*m[15] + m[0]*m[5]*m[10]*m[15];
            
                return Mat4(
                    m[9]*m[14]*m[7] - m[13]*m[10]*m[7] + m[13]*m[6]*m[11] - m[5]*m[14]*m[11] - m[9]*m[6]*m[15] + m[5]*m[10]*m[15],
                    m[12]*m[10]*m[7] - m[8]*m[14]*m[7] - m[12]*m[6]*m[11] + m[4]*m[14]*m[11] + m[8]*m[6]*m[15] - m[4]*m[10]*m[15],
                    m[8]*m[13]*m[7] - m[12]*m[9]*m[7] + m[12]*m[5]*m[11] - m[4]*m[13]*m[11] - m[8]*m[5]*m[15] + m[4]*m[9]*m[15],
                    m[12]*m[9]*m[6] - m[8]*m[13]*m[6] - m[12]*m[5]*m[10] + m[4]*m[13]*m[10] + m[8]*m[5]*m[14] - m[4]*m[9]*m[14],
                    m[13]*m[10]*m[3] - m[9]*m[14]*m[3] - m[13]*m[2]*m[11] + m[1]*m[14]*m[11] + m[9]*m[2]*m[15] - m[1]*m[10]*m[15],
                    m[8]*m[14]*m[3] - m[12]*m[10]*m[3] + m[12]*m[2]*m[11] - m[0]*m[14]*m[11] - m[8]*m[2]*m[15] + m[0]*m[10]*m[15],
                    m[12]*m[9]*m[3] - m[8]*m[13]*m[3] - m[12]*m[1]*m[11] + m[0]*m[13]*m[11] + m[8]*m[1]*m[15] - m[0]*m[9]*m[15],
                    m[8]*m[13]*m[2] - m[12]*m[9]*m[2] + m[12]*m[1]*m[10] - m[0]*m[13]*m[10] - m[8]*m[1]*m[14] + m[0]*m[9]*m[14],
                    m[5]*m[14]*m[3] - m[13]*m[6]*m[3] + m[13]*m[2]*m[7] - m[1]*m[14]*m[7] - m[5]*m[2]*m[15] + m[1]*m[6]*m[15],
                    m[12]*m[6]*m[3] - m[4]*m[14]*m[3] - m[12]*m[2]*m[7] + m[0]*m[14]*m[7] + m[4]*m[2]*m[15] - m[0]*m[6]*m[15],
                    m[4]*m[13]*m[3] - m[12]*m[5]*m[3] + m[12]*m[1]*m[7] - m[0]*m[13]*m[7] - m[4]*m[1]*m[15] + m[0]*m[5]*m[15],
                    m[12]*m[5]*m[2] - m[4]*m[13]*m[2] - m[12]*m[1]*m[6] + m[0]*m[13]*m[6] + m[4]*m[1]*m[14] - m[0]*m[5]*m[14],
                    m[9]*m[6]*m[3] - m[5]*m[10]*m[3] - m[9]*m[2]*m[7] + m[1]*m[10]*m[7] + m[5]*m[2]*m[11] - m[1]*m[6]*m[11],
                    m[4]*m[10]*m[3] - m[8]*m[6]*m[3] + m[8]*m[2]*m[7] - m[0]*m[10]*m[7] - m[4]*m[2]*m[11] + m[0]*m[6]*m[11],
                    m[8]*m[5]*m[3] - m[4]*m[9]*m[3] - m[8]*m[1]*m[7] + m[0]*m[9]*m[7] + m[4]*m[1]*m[11] - m[0]*m[5]*m[11],
                    m[4]*m[9]*m[2] - m[8]*m[5]*m[2] + m[8]*m[1]*m[6] - m[0]*m[9]*m[6] - m[4]*m[1]*m[10] + m[0]*m[5]*m[10]
                ) * (1./determinant);
        }
            template<class S>
			friend ostream& operator << (ostream&, const Mat4<S>&);
			
			
	};
	
	template<class T>
	inline ostream& operator << (ostream& os, const Mat4<T>& m){
	
		os << "MAT 4: \n" << m.col[0] << m.col[1] << m.col[2] << m.col[3] <<"\n";
		
		return os;
	
	}
	
	template <typename T = double>	
	class Mat5 {
		public:
			Vec5<T> col[5];
			
			Mat5() {
				col[0].set(1.,0.,0.,0.,0.);
				col[1].set(0.,1.,0.,0.,0.);
				col[2].set(0.,0.,1.,0.,0.);
				col[3].set(0.,0.,0.,1.,0.);
				col[4].set(0.,0.,0.,0.,1.);
			}
	};


	class Matrix {
	
		//Data has array of pointers of varying types
		union {
			char* ptr;  //1 byte
			short* s;   //2 bytes
			int* i;	    //4 bytes
			//uint* ui; 
			float* fl;  //4 bytes
			double* db; //8 bytes;
		} mData;
		
		int mStep;		// size of data ptrs

	};

/*	
	class Vec {
	
		public:
			static Vec3<> x(double s = 1.0){ return Vec3<>(s,0,0); }
			static Vec3<> y(double s = 1.0){ return Vec3<>(0,s,0); }
			static Vec3<> z(double s = 1.0){ return Vec3<>(0,0,s); }
	};
*/	
	//Quaternion Spinor
	class Quat {
		public:
			double w, x, y, z;
			
			Quat(double _w = 1.0, double _x = 0.0, double _y = 0.0, double _z = 0.0) : w(_w), x(_x), y(_y), z(_z){}			
			Quat(double rad, Vec3<> v) { Vec3<> t = v.unit() * sin(rad); w = cos(rad); x = t.x; y = t.y; z = t.z; }
			
			Quat(Vec3<> v) : w(0), x(v.x), y(v.y), z(v.z) {}
			Quat(Vec4<> v) : w(v.w), x(v.x), y(v.y), z(v.z) {}
			
//			Quat (const Vec3<> v1, const Vec3<> v2) { 
//				
//				Quat v = v2 * v1; v.w += 1;
//				double s = 2 * ( 1 + v1.dot(v2) );
//				double n = (s>0 ? sqrt(s) : 0); 
//				if (n != 0 ) v /= n; 
//
//				w = v.w; x = v.x; y = v.y; z = v.z;
//			}
			
			static Vec3<> spin(Vec3<> v, Quat q) { return Quat(q.unit() * Quat(v) * (~(q.unit()))).vec(); }
		
			double sqnorm() { return w*w + x*x + y*y + z*z; }
			double norm() { return sqrt(sqnorm()); }

			Quat operator *(const Quat& q) { 
				return Quat (	w * q.w - (x*q.x + y*q.y + z*q.z),
								w * q.x + x * q.w + y * q.z - z * q.y,
								w * q.y + y * q.w + z * q.x - x * q.z,
								w * q.z + z * q.w + x * q.y - y * q.x ); }

			Vec3<> vec() const { return Vec3<>(x,y,z); }
			
			Quat operator /(double s) { return Quat(w/s, x/s, y/s, z/s); }
			Quat operator +(const Quat& q) { return Quat(w+q.w, x+q.x, y+q.y, z+q.z);}
			Quat operator ~() { return Quat(w, -x, -y, -z); } 
			Quat operator -() { double n = norm();  if (n == 0) n = 1; return Quat(w/n, -x/n, -y/n, -z/n); } 
			
			Quat unit() { double n = norm(); if (n == 0) return Quat(1,0,0,0); return Quat(w/n, x/n, y/n, z/n); } 

			Mat4<> mat4() {
			  
				float wx, wy, wz, xx, yy, yz, xy, xz, zz, x2, y2, z2;

				x2 = x * 2;   y2 = y * 2; z2 = z * 2;
				xx = x * x2; xy = x * y2; xz = x * z2;
				yy = y * y2; yz = y * z2; zz = z * z2;
				wx = w * x2; wy = w * y2; wz = w * z2;

				return Mat4<> (
					1.0 - (yy + zz),	xy - wz,			xz + wy,			0.0,
					xy + wz,			1.0 - (xx + zz),	yz - wx,			0.0,
					xz - wy,			yz + wx,			1.0 - (xx + yy),	0.0,
					0,					0,					0,					1  );

			}
			
			Vec4<> axan(){			
				double angle = 2 * acos(w);
				double div = sqrt(1-w*w);	
				Vec3<> axis = vec()  * (1.0 / div);		
				return Vec4<>(180 * angle / PI, axis);
			}
			
			friend ostream& operator << (ostream& os, const Quat& q) {
				os << q.w << " " << q.x << " " << q.y << " " << q.z << "\n";
				return os;
			}
			
			static Quat xy(double t) { return Quat( t, Vec3<>::az()); }
			static Quat yz(double t) { return Quat( t, Vec3<>::ax()); }
			static Quat xz(double t) { return Quat( t, Vec3<>::ay()); }

	};
	
	class Color {
	
		public:
		Color(unsigned char _r = 0, unsigned char _g = 0, unsigned char _b = 0,unsigned char _a = 0) :
		r(_r), g(_g), b(_b), a(_a) {}
		
		unsigned char r, g, b, a;

		unsigned char& operator [] (int i) { return ((unsigned char*)&r)[i]; }
		unsigned char  operator [] (int i) const { return ((unsigned char*)&r)[i]; }
		
		int pack() { return *(int*)&r; }
		
		friend ostream& operator << (ostream& os, const Color& c){
			os << "red: " << (int)c.r << " green: " << (int)c.g << " blue: " << (int)c.b 
			<< " alpha: " << (int)c.a << "\n";
			return os;
		}
	};
	
	typedef Vec2<float> Vec2f; 	typedef Vec2<int> Vec2i; typedef Vec2<double> Vec2d;    
	typedef Vec3<float> Vec3f;  typedef Vec3<int> Vec3i; typedef Vec3<double> Vec3d;
	typedef Vec4<float> Vec4f;  typedef Vec4<int> Vec4i; typedef Vec4<double> Vec4d;
	typedef Vec4<unsigned char> Vec4u;
    
    typedef Mat2<float> Mat2f;      typedef Mat2<double> Mat2d;
    typedef Mat3<float> Mat3f;      typedef Mat3<double> Mat3d;
    typedef Mat4<float> Mat4f;      typedef Mat4<double> Mat4d;
    typedef Mat4<unsigned char > Mat4u;
	
	//template <typename T>
	//inline Vec3<T> operator * (const Vec3& v) const { return Quat ( dot(v), x * v.y - y * v.x, y * v.z - z * v.y, x * v.z - z * v.x); }
	
} //vsr::

#endif