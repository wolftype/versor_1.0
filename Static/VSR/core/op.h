/*
 *  Op.h
 *  CONGA_05
 *
 *  Created by x on 3/22/10.
 *  Copyright 2010 x. All rights reserved.
 *
 
 TO DO : Set up spin operations for Origin, Tangents, and other elements that will turn into Points, Point Pairs, etc 
 when transformed (so that the functions return this elements and not input - type elements ).  Currently this is
 side-stepped by casting the necessary input elements, but that is not efficient and leads to unnecessary multiplies.
 Note: will have to replace or re-define PAO (Point At Origin)
 
 */
 
#ifndef OP_H_INCLUDED
#define OP_H_INCLUDED 

#include "vsr.h"

//#include "Sca.h"
//#include "Pnt.h"
//#include "Trs.h"
//#include "Dil.h"
//#include "Trv.h"
//#include "Mot.h"
//#include "Rot.h"
//#include "Tri.h"
//#include "Vec.h"
//#include "Biv.h"
//#include "Lin.h"
//#include "Cir.h"
//#include "Dll.h"
//#include "Par.h"
//#include "Ori.h"
//#include "Inf.h"
//#include "Pss.h"
//#include "Sta.h"
//#include "Mtt.h"
//#include "versorFuncs.h"

#include <iostream>
#include <vector>
#include <map>
#include <string>

#include "vsr_matrix.h"
#include "vsr_math.h"

namespace vsr {


//#define TYP typename Product

struct Op {
    
    
    template<class A, class B> 
    static typename Product< typename Product<A,B,typename A::value_type>::OP, B,typename A::value_type >::GP 
    rj(const A& a, const B& b ){ return (a ^ b ) / b; }

    template<class A, class B> static typename Product<typename Product<A,B,typename A::value_type>::IP, B,typename A::value_type >::GP 
    pj(const A& a, const B& b ){ return (a <= b ) / b; }

    template<class A, class B> static A
    sp(const A& a, const B& b){ return vsr::sp(a,b); }

    template<class A, class B> static A
    re(const A& a, const B& b){ return vsr::re(a,b); }  
    
    template<class B>
    static typename Product< B, Pss, typename B::value_type>::GP dl(const B& b) { return b * Pss(1); } 

    template<class B>
    static typename Product< B, Pss, typename B::value_type>::GP udl(const B& b) { return b * Pss(-1); } 
    
    template<class B>
    static typename Product< B, Tri, typename B::value_type>::GP dle(const B& b) { return b * Tri(-1); } 

    template<class B>
    static typename Product< B, Tri, typename B::value_type>::GP udle(const B& b) { return b * Tri(-1); }     
    
    template<class A>
    static bool sn(const A& a, const A& b) {
        return (a / b)[0] > 0 ? 1 : 0;
    }   
    

    static Sta statest() { return Sta(); }


//    template<class A, class B> static typename Product<typename Product<B,A,typename A::value_type>::GP, B, typename A::value_type >::GP
//    sp(const A& a, const B& b){ return b * a * ~b; }
//
//    template<class A, class B> static typename Product<typename Product<B,A,typename A::value_type>::GP, B, typename A::value_type >::GP
//    re(const A& a, const B& b){ return b * a.involution() * ~b; }
    
};


/* Spinor Generation for Transformation of Elements */
struct Gen {

    /*! Generate a Transaltor (to be applied with sp() function)
        @param Any Vector type (typically vector or direction)
    */
    template<class B>
    static Trs trs(const B& d){
        return trs(d[0], d[1], d[2]);
    }
    
    /*! Generate a Translator (to be applied with sp() function)
        @param X Y and Z direction coordinates
    */
    template<class T>
    static Trs trs(T x, T y, T z){
        return Trs(1, x*-.5, y*-.5, z*-.5);
    }

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
    static Biv log(const Rot& r){
        //typedef typename r::value_type TYP;     //<--- Precision depends on Rotor?
    	
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
    
    /*! Bivector plane of Rotation from Rotor 
        @param Rotor r
    */
    static Biv pl( const Rot& r) {
        Biv b ( r );
        double t = b.rnorm(); // use rnorm or norm here?
        if (t == 0 ) return Biv(1,0,0);
        return b / t;
    }
    
    /*! Angle of Rotation from Rotor 
        @param Rotor r
    */
    static double iphi( const Rot& r) {
        return Biv ( Gen::log(r) * -2 ).norm();
    }
    
    /*! Generate a Rotor interpolation between two Rotors 
        @param Rotor a
        @param Rotor b
    */
    static Rot slerp( const Rot& a, const Rot& b, double t){    
       	
        Rot r1 =  !(a) * (b);       //  Ratio	        
        Biv r2 = log( r1 ) * t;     //  Log 
        return Gen::rot(r2) * a;    //  Exponential Form (q: switch check?)	
    }


    /*! Ratio Rotor From Two Vecs (assumes unit?) 
        @param Vec a
        @param Vec b
    */
    static Rot ratio(const Vec& a, const Vec& b){
        double s = ( a <= b )[0];
        
        //180 degree check
        if (a == b.conjugation() ) return Rot(0,0,1,0);
        
        double ss = 2 * (s+1);
        double n = ( ss >= 0 ? sqrt ( ss ) : 0 );
        
        Rot r = ( b * a ) ; //cout << r << endl;
        r[0] += 1;	
        if (n != 0 ) r /= n;
        if (r == Rot(0,0,0,0) ) return Rot(1,0,0,0);//else cout << r << endl; //printf("0 in gen::ratio\n");
        return r;
    } 
    
    static Rot ratio(const Biv& a, const Biv& b){
        return ratio( a.duale(), b.duale() );
    }
    
    /*! Axis Angle from Rotor
        @param Rotor input
    */
    static Vec4<> aa (const Rot& r) {

        Vec v = Op::dle(Gen::pl( r ) ) ;		
        double deg = iphi(r) * ( -180 / PI );
        			
        return Vec4<>(v[0], v[1], v[2], deg);
    }
    
    static Mat4<> mat( const Rot& r) {
      
        Vec xi = Vec::x.sp(r);
        Vec yi = Vec::y.sp(r);
        Vec zi = Vec::z.sp(r);
        
        return Mat4<>(xi[0], xi[1], xi[2], 0, 
                      yi[0], yi[1], yi[2], 0,
                      zi[0], zi[1], zi[2], 0,
                      0   ,   0 ,   0 ,    1 );
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

        Vec_Biv ts(1,1,1,1);// = B*tw;	
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
    static Dll log( const Mot& m){
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
        rq += c;
        
//        copy(c.begin(), c.begin() + 3, &(rq.w()[3]));
            
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
    static Trv trv(T x, T y, T z){
        return Trv(1.0, x, y, z);
    }
    
    /*! Generate a Translated Transversion 
        @param Point Pair (typically of Zero-Size, created by Translating a Tangent Vector)
        @param Scalar amt 
    */
    template <class T>
    static Bst trv(T t, const Par& s){
        return Bst(t, 
                       s[0], s[1], s[2], 
                       s[3], s[4], s[5], 
                       s[6], s[7], s[8], s[9]);
    } 
    
    /*! Generate a Translated Transversion 
        @param Tangent Direction
        @param Position in space
        @param scalar amt (typically 0 or 1)
    */
    template <class A, class B, class T>
    static Bst trv(const A& tnv, const B& drv, T t){
        Par s = tnv.trs(drv);
        return Bst(t, 
                       s[0], s[1], s[2], 
                       s[3], s[4], s[5], 
                       s[6], s[7], s[8], s[9]);
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
    template<int N, int IDX, class T>
    static Dil dil(const MV<N,IDX,T>& s){
        return Gen::dil(s[0]);
    }

};

/*! Operations on Round Elements */
struct Ro {


    /*! Null Point from Arbirtary Multivector */
    template< class B >
    static Pnt null( const B& b){	
        return null( b[0], b[1], b[2] );
    }
    
    /*! Null Point from x, y, z */
    template< class A, class B, class C >
    static Pnt null( A x, B y, C z){	
        return Pnt(x, y, z, 1 , (x*x + y*y + z*z) / 2.0 );
    }
    
    /*! Dual Sphere from Element and Radius
        @param Any input MV v (function will take first 3 weights)
        @param Radius (enter a negative radius for an imaginary sphere)
    */
    template< class S >
    static Dls dls( const S& v, double r = 1.0 ) {
        Dls s = Ro::null(v);
        (r > 0) ? s[4] -= .5 * (r * r) : s[4] += .5 * (r*r);
        return s;
    }
    
    /*! Dual Sphere from Coordinate Center and Radius
        @param Any input MV v (function will take first 3 weights)
        @param Radius (enter a negative radius for an imaginary sphere)
    */
    template< class T>
    static Dls dls( T x, T y, T z, double r = 1.0 ) {
        Dls s = Ro::null(x,y,z);
        (r > 0) ? s[4] -= .5 * (r * r) : s[4] += .5 * (r*r);
        return s;
    }

    /*! Dual Sphere from Point and Radius
        @param Point
        @param Radius (enter a negative radius for an imaginary sphere)
    */
    static Dls dls_pnt( const Pnt& p, double r = 1.0 ) {
        Dls s = p;
        (r > 0) ? s[4] -= .5 * (r * r) : s[4] += .5 * (r*r);
        return s;
    }    
    
    /*! Sphere At center c through point p */
    static Dls dls( const Pnt& c, const Pnt& p){
        return Dls( p <= ( c^Inf(1) ) );
    }
    
    /*! Split Points from Point Pair 
        @param PointPair input
    */
    static std::vector<Pnt> split(const Par& pp){
        std::vector<Pnt> pair;
        
        double r = sqrt( fabs( ( pp <= pp )[0] ) );
        
        Dlp dlp = Inf(-1) <= pp;

        Bst bstA(pp);        
        Bst bstB(pp);        
        bstA += Sca(r);
        bstB -= Sca(r);
                
        Pnt pA = ( bstA ) / dlp;
        Pnt pB = ( bstB ) / dlp;
                
        pair.push_back(pA);
        pair.push_back(pB);
        return pair;
    }  
    
    /*! Split Points from Point Pair 
        @param PointPair input
    */
    static Pnt split(const Par& pp, bool bFirst){
        
        double r = sqrt( fabs( ( pp <= pp )[0] ) );
        
        Dlp dlp = Inf(-1) <= pp;

        Bst bst(pp); 
        bst += bFirst ? Sca(r) : Sca(-r);
        
        return ( bst ) / dlp;
    }
    
    
    
    /*! Returns Squared Size of a General Round Element
        @param input normalized round (dual sphere, point pair, circle, or direct sphere)
        @param duality flag 
    */
    template< class T >
    static typename T::value_type size( const T& r, bool dual){
        typename Product<Inf, T, typename T::value_type>::IP s = Inf(1) <= r;
        return ( ( r * r.involution() ) / ( s * s ) * ( (dual) ? -1.0 : 1.0 )  )[0];
    }
    
    /*! Squared Size of Normalized Dual Sphere (faster than general case)
        @param Normalized Dual Sphere
    */
    static double size( const Dls& dls, bool dual = false){
        return (dls * dls)[0];
    }
    
    /*! Returns Radius of a Round Element 
        @param input round (dual sphere, point pair, circle, or direct sphere)
    */
    template< class T >
    static typename T::value_type rad( const T& s ){
        return sqrt ( fabs ( Ro::size(s, false) ) );
    }
    
    //deprecated (too slow)
//    template <class T>
//    static Pnt loc( const T& s) { 
//        typename Product<Inf,T>::IP t = Inf(1) <= s; 
//        return  ( ( s * Inf(1) * s ) / ( t * t ) ) * -.5;
//    }

//    template<class A>
//    static typename Product< typename Product< Inf,A, typename A::value_type>::IP, Inf,  typename A::value_type >::OP 

    template<class T>
    static Dls cen( const T& s) {
        return  s  / ( Inf(-1) <= s );
    }
    
    template<class A>
    static Dls sur( const A& s) {
        return Dls( s / ( s ^ Inf(1) ));
    }

    /// make null point from round
    template<class T>
    static Pnt loc( const T& s){
        return null ( cen ( s ) );
    }
    
    /*! Direction of Round Element 
        @param Direct Round
    */
    template<class A>
    static typename Product< typename Product<Inf, A, typename A::value_type>::IP, Inf, typename A::value_type>::OP  
    dir( const A& s ) {
        return ( Inf(-1) <= s ) ^ Inf(1);
    }
    
    /*! Carrier Flat of Round Element */
    template<class A>
    static typename Product<A, Inf, typename A::value_type>::OP car(const A& s) {
        return s ^ Inf(1);
    }
    

    
//    /*! Point Pair on Circle at Theta */
//    Par Ro::par_cir( const Cir& cir, double theta){
//        return Op::dl( Fl::dlp_ortho_cir(cir,theta) ^ Op::dl(cir) ); 					//Meet with Circle
//    }
//    
//    /*! Point on Circle at theta */
//    static Pnt pnt_cir( const Cir& cir, double theta){
//        return Ro::null_cen( Ro::split2( Ro::par_cir( cir, theta) ) );
//    }

    /*!
     Direct (imaginary?) Round From Dual Sphere and Euclidean Carrier Flat
     */    
     static Cir cir(const Dls& dls, const Biv& flat){
        return dls ^ ( ( dls <= ( flat.involution() * Inf(1) ) )  * -1.0 );  
     }
    /*!
     Direct (imaginary?) Round From Dual Sphere and Euclidean Carrier Flat
     */    
     static Par par(const Dls& dls, const Vec& flat){
        return dls ^ ( ( dls <= ( flat.involution() * Inf(1) ) )  * -1.0 );  
     }
    
    /*! Direct Circle from Point and Euclidean Carrier Flat 
        @param Center pnt 
        @param Carrier Bivector 
        @param Radius r
    */
    static Cir cir(const Pnt& pnt, const Biv& flat, double r){
        //return Ro::dls_pnt(pnt,r) * ( (pnt * -1.0) <= (Inf(1)*flat));
        return cir( Ro::dls_pnt(pnt,r),flat);// ^ ( (pnt <= (flat.involute() * Inf(1))) * -1.0 );
    }

    /*! Direct Point Pair from Point and Euclidean Carrier Flat 
        @param Center pnt 
        @param Carrier Vector 
        @param Radius r
    */
    static Par par(const Pnt& pnt, const Vec& flat, double r){
        //return Ro::dls_pnt(pnt,r) * ( (pnt * -1.0) <= (Inf(1)*flat));
        return par( Ro::dls_pnt(pnt,r), flat);// ^ ( (pnt <= (flat.involute() * Inf(1))) * -1.0 );
    }

//    /*! Dual Round from Point and Euclidean Carrier Flat
//        @param Center pnt
//        @param Carrier flat
//        @param Radius r
//    */
//    State Ro::pnt_flat_dl(const State& pnt, const State& flat, double r){
//    //	return Ro::dls_pnt(pnt,r) * ( (pnt*-1.0) <= ( Op::dl(flat.involute()) * Inf(1) ));
//        return Ro::dls_pnt(pnt,r) ^ ( (pnt*-1.0) <= ( Op::dl(flat.involute()) * Inf(1) ));
//    }
//    

    /*! Curvature of Round 
        @param Round Element
    */
    template<class A>
    static double  cur(const A& s){
        double r = Ro::rad( s);
        
        return (r==0) ? 10000 : 1.0 / Ro::rad(s);
    }
    
    
};



struct Fl {

    /*! Direction of Direct Flat 
        @param Direct Flat [ Plane (Pln) or Line (Lin) ]
    */
    template<class A> 
    static typename Product<Inf, A, typename A::value_type>::IP dir( const A& f){
        return Inf(-1) <= f;
    }
    
    /*! Location of Flat A closest to Point p 
        @param Dual or Direct Flat [ DualLine (Dll), Line (Lin), DualPlane (Dlp), or Plane (Pln) ]
        @param Point p
        @param Duality Flag
    */
    template<class A>
    static Pnt loc(const A& f, const Pnt& p, bool dual){
        return dual ? Pnt( ( p ^ f ) / f ) : Pnt ( ( p <= f ) / f );
    }
    
    
    template<class A>
    static Pnt locd(const A& f, const Pnt& p){
        return ( p ^ f ) / f;
    }
        /*! Weight of Flat 
        @param Dual or Direct Flat
        @param boolean flag for duality
    */
    template<class A>
    double wt(const A& f, bool dual){
//		return (Ori(1) <= Fl::dir(s,dual)).sqwt();
		return dual ? ( Ori(1) <= Fl::dir( f.undual() ) ).wt() : ( Ori(1) <= Fl::dir(f) ).wt();
    }
    
};

struct Ta {

    /*! Direction of Tangent Element (similar formulation to Rounds) 
        @param Direct Tangent Element
    */
    template< class A >
    static typename Product< typename Product<Inf, A, typename A::value_type>::IP, Inf, typename A::value_type>::OP  
    dir( const A& s){
        return ( Inf(-1) <= s ) ^ Inf(1);
    }
    
    /*! Location of Tangent Element (similar formulation to Rounds) */
    template< class A >
    Pnt loc( const A& s){
        return ( s / Inf(-1) <= s );
    }

    /*! Tangent Element of Round r at Point p
        @param Direct Round Element r
        @param Point p
    */
    template< class A >
    static typename Product< Pnt, A, typename A::value_type>::IP 
    at( const A& r, const Pnt& p){
        return p <= r.involute();
    }
    /*! Weight of Tangent Element */
    template<class A>
    double wt(const A& s){
        return ( Ori(1) <= dir(s) ).sqwt();
    }
};


typedef Ro Round;
typedef Fl Flat;
typedef Ta Tangent;
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
#define LN(x,y,z) ( Pnt(0,0,0,1,.5)^PT(x,y,z)^Inf(1) )
#define DLN(x,y,z) ( Op::dl(LN(x,y,z)) )
#define EP Dls(0,0,0,1,-.5)
#define EM Dls(0,0,0,1,.5)
#define PAO Pnt(0,0,0,1,0)
#define INFTY Inf(1)
#define HLN(x,y,z) (Ori(1)^PT(x,y,z)^EP) //hyperbolic line (circle)
#define HDLN(x,y,z) (Op::dl(HLN(x,y,z)))
} //vsr::

#endif
