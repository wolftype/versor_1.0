/*
 *  Op.h
 *  CONGA_05
 *
 *  Created by x on 3/22/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */
 
#ifndef OP_H_INCLUDED
#define OP_H_INCLUDED 

#include <iostream.h>
#include <vector>
#include <map>
#include <string>

#include "vsr_matrix.h"
#include "vsr_math.h"
#include "vsr.h"

namespace vsr {


struct Op {

//    template<class A, class B>
//    static typename Product<A,B,float>::GP gptest ( const A& a, const B& b){
//        return a * b;
//    }
    
    template<class A> static A dl(const A& a)  { return a * Pss(-1); }
    template<class A> static A udl(const A& a) { return a * Pss(1); }
    
    template<class A> static A dle(const A& a)  { return a * Tri(-1); }
    template<class A> static A udle(const A& a) { return a * Tri(1); }
    
    
    template<class A, class B> 
    static typename Product< typename Product<A,B,typename A::value_type>::OP, B,typename A::value_type >::GP 
    rj(const A& a, const B& b ){ return (a ^ b ) / b; }

    template<class A, class B> static typename Product<typename Product<A,B,typename A::value_type>::IP, B,typename A::value_type >::GP 
    pj(const A& a, const B& b ){ return (a <= b ) / b; }
    
    template<class A, class B> static typename Product<typename Product<B,A,typename A::value_type>::GP, B, typename A::value_type >::GP
    sp(const A& a, const B& b){ return b * a * ~b; }

    template<class A, class B> static typename Product<typename Product<B,A,typename A::value_type>::GP, B, typename A::value_type >::GP
    re(const A& a, const B& b){ return b * a.involution() * ~b; }
    
};

struct Ro {

    /*! Null Point from x, y, z */
    template< class S >
    static Pnt null( S x, S y, S z){	
        return Pnt(x, y, z, 1 , (x*x + y*y + z*z) / 2.0 );
    }
    
    /*! Returns Squared Size of a Round Element
        @param input round (dual sphere, point pair, circle, or direct sphere)
        @param duality flag 
    */
    template< class T >
    static typename T::value_type size( const T& r, bool dual){
        typename Product<T, Inf, typename T::value_type>::IP s = Inf(1) <= r;
        return ( r * r.involution() / ( s * s ) * ( (dual) ? -1.0 : 1.0 ) )[0];
    }
    
    /*! Returns Radius of a Round Element 
        @param input round (dual sphere, point pair, circle, or direct sphere)
    */
    template< class T >
    static typename T::value_type radius( const T& s ){
        return sqrt ( fabs ( Ro::size(s, false) ) );
    }
    
};

struct Gen {

    /*! Generate a Rotor (i.e. quaternion) from a Bivector 
        @param Bivector generator (the plane of rotation, AKA dual of the axis of rotation) 
    */
    static Rot rot(const Biv& b) {
    	double  c = sqrt(- ( b.wt() ) );
        double sc = -sin(c);
        if (c != 0) sc /= c;
        return Rot( cos(c), b[0]*sc, b[1]*sc, b[2]*sc );
    }
    
    /*! Get Bivector Generator from a Rotor 
        @param Rotor r
    */
    static Biv log_rot(const Rot& r){
        //typedef typename r::value_type TYP;     //<--- Precision depends on Rotor
    	
        double t = r[0];                           //<--- Scalar Value from Rotor
        
        Biv b ( r );
        
        double n = b.rnorm();
        
        if (n <= 0) {
            if (t < 0) {
                cout << "Returning identity - ROTOR LOG FOUND SINGULARITY: "<< t << endl;
                return Biv(PI,0,0);
            } else {
                return Biv(0,0,0); 
            }
        }
        
        double s = atan2( n, t );
        return b * ( s / n);
    }
    
    /*! Generate a Motor from a Dual Line Axis
        @param Dual Line Generator (the axis of rotation, including pitch and period)
    */
    static Mot mot( const Dll& dll){
    
    	double  c = ( sqrt( fabs ( Biv(dll).wt() ) ) );
        double sc = sin(c);
        double cc = cos(c);

        Dll b = dll;
        Biv B(b[0],b[1],b[2]); //Biv B(dll);
        B = B.unit();
        Vec t(b[3],b[4],b[5]);
        
        Vec tv = Op::pj(t,B) ;
        Vec tw = Op::rj(t,B) ;
        
        tv *= Math::sinc(c);
        
        Vec tt = ( B.wt() == 0 ) ? t : tw * cc + tv;

        Vec_Biv ts = B*tw;	
        Mot mot;	
        mot[0] = cc;
        mot[1] = B[0]*sc;
        mot[2] = B[1]*sc;
        mot[3] = B[2]*sc;	
        mot[4] = tt[0];
        mot[5] = tt[1];
        mot[6] = tt[2];
        mot[7] = ts[3] * sc;
        
        return mot;
}
    
    /*! Dual Line Generator from a Motor 
        @param Motor m (a concatenation of rotation and translation)
    */
    static Dll log_mot( const Mot& m){
    	Dll rq;						//tmp dll
        Drv cperp, cpara;
        Dll q = m;						//extract grade 2 part
        
        double  ac = acos( m[0] );		//angle of rotor	
        double  den = Math::sinc(ac);
        double  den2 = ac * ac * den;
        
        
        Biv b =  ( Ori(1) <= ( q * Inf(1) ) ) / den * -1.0;			//negative necessary . dll? . . 
        Dll tq = b * q;
        
        if (den2 == 0 ) {
            //cperp = b * -1.0;
            cpara = q;// * -1.0;
        } else {
            cperp = ( b * Drt(m[7]) ) / ( ( den2 )  * -1.0 );	//perpendicular (along line of axis)
            cpara = ( b * tq ) / ( ( den2 )  * -1.0 );			//parallel      (in plane of rotation)
        }
        
        Drv c = cperp + cpara;
        rq += (b);
        copy(c.w(), c.w() + 3, &(rq.w()[3]));
            
        return rq;
    }
    
    /*! Transversor Generator from arbitrary Vector
        @param any multivector (typically a vector or direction vector)
    */
    template <class B>
    static Trv trv(const B& b){
        return trv(b[0], b[1], b[2]);
    }
    /*! Transversor Generator from arbitrary Vector
        @param x,y,z direction coordinates
    */
    template <class T>
    static Trv trv3(T x, T y, T z){
        return Trv(1.0, x, y, z);
    }
    
    /*! Generate a Dilation from Origin 
        @param Amt t
    */
    template<class T>
    static Dil dil(T t){
        return Dil( cosh(t*.5), sinh(t*.5) );
    }
    /*! Generate a Dilation from a point p 
        @param Point p
        @param Amt t
    */
    template<class T>
    static Dil dil_pnt(const Pnt& p, T t){
        return sp( Dil( cosh(t*.5), sinh(t*.5) ), Gen::trs(p) );
    }
    
    static Dil dil(const State& s){
        return Gen::dil(s[0]);
    }

};


#define PT(x,y,z) Ro::null(Vec(x,y,z))
#define PV(v) Ro::null(v)
#define PX(f) Ro::null(Vec(f,0,0))
#define PY(f) Ro::null(Vec(0,f,0))
#define PZ(f) Ro::null(Vec(0,0,f))
#define CXY(f) (PX(f)^PX(-f)^PY(f))
#define CXZ(f) (PX(f)^PX(-f)^PZ(f))
#define CYZ(f) (PY(f)^PY(-f)^PZ(f))
#define F2S(f) f*1000.0
#define S2F(f) f/1000.0
#define LN(x,y,z) (Ori(1)^PT(x,y,z)^Inf(1))
#define DLN(x,y,z) ( (Ori(1)^PT(x,y,z)^Inf(1)).dual() )
#define EP Dls(0,0,0,1,-.5)
#define EM Dls(0,0,0,1,.5)
#define INFTY Inf(1)
#define HLN(x,y,z) (Ori(1)^PT(x,y,z)^EP) //hyperbolic line (circle)
#define HDLN(x,y,z) (Op::dl(HLN(x,y,z)))

} //vsr::

#endif