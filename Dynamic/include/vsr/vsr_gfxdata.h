/*
 *  vsr_graphicsdata.h
 *  CONGA_07
 *
 *  Created by x on 8/23/10.
 *  Copyright 2010 x. All rights reserved.
 *
 
	graphics data structs
 
 */

#ifndef VSR_GRAPHICS_INCLUDED
#define VSR_GRAPHICS_INCLUDED
#include "Matrix.h"
#include <iostream>

using std::ostream;

namespace vsr  {

    //make unions . . .
struct UV {
    float u, v;
    UV(float _u, float _v) : u(_u), v(_v) {}
    float& operator[] (int idx) { return (&u)[idx]; }
    float operator[] (int idx) const { return (&u)[idx]; }	
};    
    
struct Xyz {
	float x, y, z;
	Xyz(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
	float& operator[] (int idx) { return (&x)[idx]; }
	float operator[] (int idx) const { return (&x)[idx]; }	
};

struct Rgb {
	float r, g, b;
	Rgb(float _r, float _g, float _b) : r(_r), g(_g), b(_b) {}
	float& operator[] (int idx) { return (&r)[idx]; }
	float operator[] (int idx) const { return (&r)[idx]; }
};

//rename to Int4 or Templatize to Vec4
struct Poly {
	int a, b, c, d;
	Poly(int _a,int _b,int _c,int _d) : a(_a), b(_b), c(_c), d(_d) {}
	int& operator[] (int idx) { return (&a)[idx]; }
	int operator[] (int idx) const { return (&a)[idx]; }
};

struct Poly4 {
	int a, b, c, d;
	Poly4(){}
	Poly4(int _a,int _b,int _c,int _d) : a(_a), b(_b), c(_c), d(_d) {}
	int& operator[] (int idx) { return (&a)[idx]; }
	int operator[] (int idx) const { return (&a)[idx]; }
};

struct Poly3 {
	int a, b, c;
	Poly3(){}
	Poly3(int _a,int _b,int _c) : a(_a), b(_b), c(_c) {}
	int& operator[] (int idx) { return (&a)[idx]; }
	int operator[] (int idx) const { return (&a)[idx]; }
};



struct AxisAngle{

	float a;
	Vec3<> v;

};

//struct Vertex {
//    Vec3<float> Pos;
//    Vec3<float> Norm;
//    Vec4<float> Col;
//    Vec2<float> Tex;
//    
//    //            Vertex() : Pos(0,0,0), Norm(0,0,0), Col(1,1,1,1), Tex(0,0){}
//    
//    Vertex(const Vec3f& pos = Vec3f(0,0,0), 
//           const Vec4f& col = Vec4f(1,1,1,1), 
//           const Vec3f& norm = Vec3f(0,0,0), 
//           const Vec2f& tex = Vec2f(0,0) )  
//    
//    : Pos(pos), Col(col), Norm(norm), Tex(tex) 
//    
//    {}
//    
//};
    
/*! Data Structure of Neighbors in a cartesian volume (left, right, bottom, top, front, back) */
class Nbr {
	public:
		Nbr(){}
		Nbr(int _idx, int _xl, int _xr, int _yb, int _yt, int _zf, int _zb) :
		idx(_idx), xl(_xl), xr(_xr), yt(_yt), yb(_yb), zf(_zf), zb(_zb) {}
		int idx, xl, xr, yb, yt, zf, zb;	
		int& operator[] (int i) { return (&idx)[i]; }
		int operator[] (int i) const { return (&idx)[i]; }	
		
		friend ostream& operator << (ostream&, const Nbr&);

};

inline ostream& operator << (ostream& os, const Nbr& m){	
	os << "NBR: \n" << m[0] << " " << m[1] << " " << m[2] << " " << m[3] << " " << m[4] << " " << m[5] << " " << m[6] << "\n";		
	return os;	
}

    

class Vxl {

	public:
	Vxl(){};
	Vxl(int _a, int _b, int _c, int _d, int _e, int _f, int _g, int _h, int _typ = 0) :
	a(_a), b(_b), c(_c), d(_d), e(_e), f(_f), g(_g), h(_h), type(_typ) {}
	int a, b, c, d, e, f, g, h, type;   // indices and type
	int& operator[] (int i) { return (&a)[i]; }
	int operator[] (int i) const { return (&a)[i]; }
	Poly4 fr() { return Poly4(a,b,c,d); } //front cw
	Poly4 ri() { return Poly4(b,f,g,c);} //right cw
	Poly4 ba() { return Poly4(f,e,h,g);} //back cw
	Poly4 le() { return Poly4(e,a,d,h);} //left cw
	Poly4 to() { return Poly4(d,c,g,h);} //top cw
	Poly4 bo() { return Poly4(e,f,b,a);} //bottom cw
	
	Vxl& limit() { for (int i = 0; i < 8; ++i) { if ( (*this)[i] == -1 ) (*this)[i] = 0; } return *this; }

	friend ostream& operator << (ostream&, const Vxl&);
			
};
	
inline ostream& operator << (ostream& os, const Vxl& m){	
	os << "VXL: \n" << m[0] << " " << m[1] << " " << m[2] << " " << m[3] << " " << m[4] << " " << m[5] << " " << m[6] << " " << m[7] << "\n";		
	return os;	
}

    
enum Cube{
    LEFT	= 1,
    RIGHT	= 1 << 1,
    BOTTOM	= 1 << 2,
    TOP	= 1 << 3,
    FRONT	= 1 << 4,
    BACK	= 1 << 5,
    ALLSIDES = LEFT | RIGHT | BOTTOM | TOP | FRONT | BACK
};
    
    
} //con::

#endif