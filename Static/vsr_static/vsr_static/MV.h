//
//  Header.h
//  vsr_static
//
//  Created by Pablo Colapinto on 8/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
/*
 *  MV.h
 *  Operations
 *
 *  Created by Pablo Colapinto on 10/3/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef MV_INCLUDED
#define MV_INCLUDED

#include <iostream>
#include <sstream>
#include <map>
#include <utility>
#include <math.h>

#include "vsr_templates.h"

#define SANITYCHECK 0
#define TPRINT(x) if(SANITYCHECK)printf(x)

namespace vsr {

using namespace std;

//ITERATOR Utility
#define IT(n) for(int i = 0; i < (n); ++i)

//Predeclare MV class
template< int NUM, int IDX, class T > class MV;

//Predeclare Template Friends
template< int NUM, int IDX, class T >
std::ostream& operator << ( std::ostream& os, MV< NUM, IDX, T > a );

//Predeclare FUNCTION templates
template<class R, class T> const R cast ( const T& );

template<class T> T involute( const T& );
template<class T> T conjugate( const T& );
template<class T> T reverse( const T& );


template<class A, class B> A sp(const A&, const B&);
template<class A, class B> A re(const A&, const B&);
    
////Type Container Struct    
template<class A, class B, class T=float>
struct Product{
    
    static const int AN = A::idx;
    static const int BN = B::idx;

    static const int GP_IDX = ProductIdx<AN,BN>::GP; 
    static const int GP_N = Idx<GP_IDX>::Size;
    static const int OP_IDX = ProductIdx<AN,BN>::OP; 
    static const int OP_N = Idx<OP_IDX>::Size;
    static const int IP_IDX = ProductIdx<AN,BN>::IP; 
    static const int IP_N = Idx<IP_IDX>::Size;
    
    typedef MV<GP_N, GP_IDX, T> GP;  
    typedef MV<OP_N, OP_IDX, T> OP;  
    typedef MV<IP_N, IP_IDX, T> IP;  

};

//Type Container Struct    
template<int A, int B, class T=float>
struct ProductN{
    
    static const int GP_IDX = ProductIdx<A,B>::GP; 
    static const int GP_N = Idx<GP_IDX>::Size;
    static const int OP_IDX = ProductIdx<A,B>::OP; 
    static const int OP_N = Idx<OP_IDX>::Size;
    static const int IP_IDX = ProductIdx<A,B>::IP; 
    static const int IP_N = Idx<IP_IDX>::Size;
    
    typedef MV<GP_N, GP_IDX, T> GP;  
    typedef MV<OP_N, OP_IDX, T> OP;  
    typedef MV<IP_N, IP_IDX, T> IP;  

};



//Predeclare BASIC TYPES
	typedef MV<4,ROT,float>  Rot;
	
	typedef MV<8,MOT,float>  Mot;
	
	typedef MV<2,DIL,float>  Dil;
	
	typedef MV<4,TRV,float>  Trv;
	
	typedef MV<12,MTD,float>  Mtd;
	
	typedef MV<4,TRS,float>  Trs;
	
	typedef MV<16,RTC,float>  Rtc;
	
	typedef MV<16,MTT,float>  Mtt;
	
	typedef MV<8,RTT,float>  Rtt;
	
	typedef MV<8,RTD,float>  Rtd;
	
	typedef MV<5,TVD,float>  Tvd;
	
	typedef MV<5,TSD,float>  Tsd;
	
	typedef MV<14,TRT,float>  Trt;
	
	typedef MV<12,RVD,float>  Rvd;
	
	typedef MV<15,TST,float>  Tst;
	
	typedef MV<15,TVT,float>  Tvt;
	
	typedef MV<11,BST,float>  Bst;
	
	typedef MV<1,SCA,float>  Sca;
	
	typedef MV<1,ORI,float>  Ori;
	
	typedef MV<1,INF,float>  Inf;
	
	typedef MV<1,MNK,float>  Mnk;
	
	typedef MV<2,HYP,float>  Hyp;
	
	typedef MV<1,PSS,float>  Pss;
	
	typedef MV<5,PNT,float>  Pnt;
	
	typedef MV<10,PAR,float>  Par;
	
	typedef MV<10,CIR,float>  Cir;
	
	typedef MV<5,SPH,float>  Sph;
	
	typedef MV<9,STA,float>  Sta;
	
	typedef MV<3,DRV,float>  Drv;
	
	typedef MV<3,DRB,float>  Drb;
	
	typedef MV<1,DRT,float>  Drt;
	
	typedef MV<3,TNV,float>  Tnv;
	
	typedef MV<3,TNB,float>  Tnb;
	
	typedef MV<1,TNT,float>  Tnt;
	
	typedef MV<6,LIN,float>  Lin;
	
	typedef MV<4,PLN,float>  Pln;
	
	typedef MV<4,FLP,float>  Flp;
	
	typedef MV<4,DFP,float>  Dfp;
	
	typedef MV<6,DLL,float>  Dll;
	
	typedef MV<4,DLP,float>  Dlp;
	
	typedef MV<3,VEC,float>  Vec;
	
	typedef MV<3,BIV,float>  Biv;
	
	typedef MV<1,TRI,float>  Tri;
	
	typedef MV<4,AFF,float>  Aff;
	
	typedef MV<6,AFL,float>  Afl;
	
	typedef MV<4,AFP,float>  Afp;
	
	typedef MV<4,DAP,float>  Dap;
	
	typedef MV<4,DAF,float>  Daf;
	
	typedef MV<6,DAL,float>  Dal;
	
	typedef MV<3,MNV,float>  Mnv;


//template< int N, class T >



template < int N, int IDX, class T >
class MV {

	T mW[N];	

public:
	
    void test();
    
    typedef MV<N,IDX,T> self_type;
    typedef T value_type;
    typedef const T array_type[N];
    
    static const int idx = IDX;
 	static const int size =  N;    

    //Feed in a value_type
	MV(const T& v = T())  { std::fill(mW, mW + N, v);  }
    
    //Copy Constructor -- same MV
    MV(const MV<N, IDX, T>& mv)  {TPRINT(" Constructor Same Type \n"); set(mv);  }

    //Copy Constructor -- same MV, different value_type
    template <class T2>
    MV(const MV<N, IDX, T2>& mv)  {TPRINT(" Constructor Same Type \n"); set(mv);  }

    //Copy Constructor -- Different MV
    template <int N2, int IDX2, class T2>
    MV(const MV<N2, IDX2, T2>& mv) { TPRINT( " Copy Constructor Different Type \n") ;set( cast< self_type, MV<N2, IDX2, T2> >( mv ) );}
    
    template <class T2>
    MV& set(const MV<N, IDX, T2>& mv) {
        IT(N) { (*this)[i] = mv[i]; }
        return *this;
    }
    
    const MV& operator = (const MV& mv) { TPRINT(" Assignment Operator Same Type\n"); return set(mv); }
    
    template< class A >
    const MV& operator = ( A a) { TPRINT(" Assignment Operator Different Type\n"); return cast< self_type, A > ( a ); } 
	
	MV( const T& a0, const T& a1 )  { set( a0,a1 ); }
	void set( const T& a0, const T& a1 ) { mW[0]=a0; mW[1]=a1;  }
	
	MV( const T& a0, const T& a1, const T& a2 )  { set( a0,a1,a2 );  }
	void set( const T& a0, const T& a1, const T& a2 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2;  }
	
	MV( const T& a0, const T& a1, const T& a2, const T& a3 )  { set( a0,a1,a2,a3 );  }
	void set( const T& a0, const T& a1, const T& a2, const T& a3 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3;  }
	
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4 )  { set( a0,a1,a2,a3,a4 );  }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5 )  { set( a0,a1,a2,a3,a4,a5 );  }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6 )  { set( a0,a1,a2,a3,a4,a5,a6 );   }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7 ) { set( a0,a1,a2,a3,a4,a5,a6,a7 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8 )  { set( a0,a1,a2,a3,a4,a5,a6,a7,a8 );  }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9 )  { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10 )  { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11 ){ set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12 )   { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12 );}
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13 ) { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13 );}
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12; mW[13]=a13;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14 ) { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12; mW[13]=a13; mW[14]=a14;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14, const T& a15 ) { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14, const T& a15 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12; mW[13]=a13; mW[14]=a14; mW[15]=a15;  }

	
    /* Array Manipulation */
	T& operator[] (int idx) { return mW[idx]; }
	const T& operator[]  (int idx) const { return mW[idx]; }

    /*! Pointer to Beginning of Array */
    array_type& w() { return mW; }
    
    array_type& begin() const { return mW; }
//    array_type& end() { return mW + size; }
    
    /////////////////////////////////////////////////////
    /* OPERATORS */ 
    /////////////////////////////////////////////////////
    
    template< class B >    
    MV operator * ( const B& v) const { self_type mv = *this;  IT(N){ mv[i] *= v; } return mv; }
    template< class B >
    MV operator / ( const B& v) const { self_type mv = *this;  IT(N){ mv[i] *= v; } return mv; }

    template< class B >
    MV& operator *= ( const B& v) { IT(N){ mW[i] *= v; } return *this; }
    template< class B >
    MV& operator /= ( const B& v) { IT(N){ mW[i] *= v; } return *this; }
    
    template < int N2, int IDX2, class T2 >
    typename ProductN<idx, IDX2, T>::GP operator * ( const MV<N2,IDX2,T2>& rh ) const { return gp ( *this, rh ); }
    
    template< int N2, int IDX2, class T2 >
    typename ProductN<idx, IDX2, T>::GP operator / ( const MV<N2,IDX2,T2>& rh ) const { return gp ( *this, !rh ); }

     template< int N2, int IDX2, class T2 >
    typename ProductN<idx, IDX2, T>::OP operator ^ ( const MV<N2,IDX2,T2>& rh ) const { return op ( *this, rh ); }

    template< int N2, int IDX2, class T2 >
    typename ProductN<idx, IDX2, T>::IP operator <= ( const MV<N2,IDX2,T2>& rh ) const { return ip ( *this, rh ); }
    
    template<class B>
    MV operator %(const B& b) { return ( (*this) * b - b * (*this) ) * .5; }
    
    MV operator !() const {
            self_type sr = (~(*this));
			typename ProductN<idx, idx>::GP s = (*this) * sr;
			if (s[0] == 0 ) return sr;
			return ( sr / s[0] ); 
    }
    
    MV involution() const { return involute(*this); }
    MV conjugation() const { return conjugate(*this); }
    MV operator ~() const { return reverse(*this); }
    
    //ADD/SUB
    MV& operator += (const MV& rh) { IT(N){ (*this)[i] += rh[i]; } return *this; }
    MV operator + ( const MV& rh) const { return MV(*this) += rh; }
    
    MV& operator -= (const MV& rh) { IT(N){ (*this)[i] -= rh[i]; } return *this; }
    MV operator - ( const MV& rh) const { return MV(*this) -= rh; }


    template< class B >
    MV& operator +=(const B& rh) { return *this += MV<N,IDX,T>(rh); }
    template< class B >
    MV& operator -=(const B& rh) { return *this -= MV<N,IDX,T>(rh); }
    template< class B >
    MV& operator + (const B& rh) const { return *this + MV<N,IDX,T>(rh); }
    template< class B >
    MV& operator - (const B& rh) const { return *this - MV<N,IDX,T>(rh); }
    
    /////////////////////////////////////////////////////
    /* U T I L I T Y  F U N C T I O N S */
    /////////////////////////////////////////////////////
    
    /*! Null Point */
    Pnt null() const;

    /*! Dot Product */
    typename ProductN<idx, idx, T>::IP dot() const { return *this <= *this; }
    /*! Reverse Dot Product */
    typename ProductN<idx, idx, T>::IP rdot() const { return *this <= ~(*this); }
    /*! Weight */
    T wt() const { return dot()[0]; }
    /*! Reverse Weight */
    T rwt() const { return rdot()[0]; }
    T norm() const { double a = rwt(); if(a<0) return 0; return sqrt( a ); }
	T rnorm() const { double a = rwt(); if(a<0) return -sqrt( -a ); return sqrt( a ); }
	self_type unit() const { double t = sqrt( fabs( dot()[0] ) ); if (t == 0) return self_type(); return *this / t; }
    self_type runit() const { double t = rnorm(); if (t == 0) return self_type(); return *this / t; }
    self_type tunit() const { double t = norm(); if (t == 0) return self_type(); return *this / t; }
    
    
    typename Product<self_type, Pss, T>::GP dual() const;
    typename Product<self_type, Pss, T>::GP undual() const;

    /////////////////////////////////////////////////////
    /* T r a n s f o r m a t i o n  O p e r a t o r s  */
    /////////////////////////////////////////////////////

    /*! Spin Element by Rotor b 
        @param Rot, Trs, Mot, Dil, Trv, Bst, or some concatenation of these
    */
    template<class B>
    self_type sp (const B& b) const { return vsr::sp (*this,b);}
    
    /*! Spin Element by Rotor b 
        @param Rot, Trs, Mot, Dil, Trv, Bst, or some concatenation of these
    */
    template<class B>
    self_type spin (const B& b) const { return vsr::sp (*this,b);}

    /*! Reflect Element over Versor b 
        @param Dll, Lin, Vec, Dlp, Pln, Pnt, Par, Cir, or Sph
    */
    template<class B>
    self_type re (const B& b) const{ return vsr::re (*this,b);}
    
    /*! Reflect Element over Versor b 
        @param Dll, Lin, Vec, Dlp, Pln, Pnt, Par, Cir, or Sph
    */
    template<class B>
    self_type pin (const B& b) const{ return vsr::re (*this,b);}

    /*! Rotation by Bivector Plane */
    self_type rot ( const Biv& b ) const ;
    
    /*! Translation by Direction or Vector, etc */
    template<class B>
    self_type trs( const B& b ) const { return trs(b[0], b[1], b[2]); }

    /*! Translation by X, Y, Z*/
    self_type trs( T x, T y, T z) const; 
    
    /*! Twist around Dual Line */
    self_type mot( const Dll& d ) const;
    
    /*! Dilation from P by amt v */
    template<class B>
    self_type dil(const B& b, T v) const;
    /*! Dilation from origin by amt v */
    self_type dil(T v) const;
    
    /*! Transversion (AKA Boost) in b Direction */
    template<class B>
    self_type trv(const B& b) const { return trv(b[0],b[1],b[2]); }
    
    /*! Transversion (AKA Boosting) in X Y Z direction */
    self_type trv(T x, T y, T z) const;
    
    string name() { return Idx<IDX>::name; }
	/*! ONE-TO-ONE TEMPLATE FUNCTION PRETTY PRINTING */
	friend std::ostream& operator << <> (  std::ostream& os, self_type a );
    


    template<class B>
    bool operator == (const B& mv) const{
        int t = N <= B::size ? N : B::size;
        int n = memcmp(mW, mv.begin(), t * sizeof(T) );
        if (n != 0) return false;
        else return true;
    }
	
        
    static MV x, y, z, xy, xz, yz;  
    
    static MV e1(T t) { return MV<N,IDX,T>(t,0,0); }   	
    static MV e2(T t) { return MV<N,IDX,T>(0,t,0); }   	
    static MV e3(T t) { return MV<N,IDX,T>(0,0,t); }   
    static MV e12(T t) { return MV<N,IDX,T>(t,0,0); }   	
    static MV e13(T t) { return MV<N,IDX,T>(0,t,0); }   	
    static MV e23(T t) { return MV<N,IDX,T>(0,0,t); }   	
};


template<int NUM, int IDX, typename T>
inline std::ostream& operator << ( std::ostream& os, MV< NUM, IDX, T > a ){
    os << a.name() << "\t";
    for (int i = 0 ; i < a.size; ++i){
        os << a.mW[i] << " ";
    }
    os << "\n";
    return os;
}


template<int N, int I, class T>
MV<N,I,T> MV<N,I,T>::x = MV<N,I,T>(1,0,0); 
template<int N, int I, class T>
MV<N,I,T> MV<N,I,T>::y = MV<N,I,T>(0,1,0); 
template<int N, int I, class T>
MV<N,I,T> MV<N,I,T>::z = MV<N,I,T>(0,0,1); 
template<int N, int I, class T>
MV<N,I,T> MV<N,I,T>::xy = MV<N,I,T>(1,0,0); 
template<int N, int I, class T>
MV<N,I,T> MV<N,I,T>::xz = MV<N,I,T>(0,1,0); 
template<int N, int I, class T>
MV<N,I,T> MV<N,I,T>::yz = MV<N,I,T>(0,0,1); 
    
#undef IT
    
} //vsr::


#endif

//trash
// PREDECLARE BASE CLASS OPERATOR FUNCTION FRIENDS 

//template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//typename Product<A<NUM,IDX,T>, B<NUM2,IDX2,T2>, T>::GP operator *  (const A<NUM,IDX,T>&, const B<NUM2,IDX2,T2>&) ;
//
//template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//typename Product<A<NUM,IDX,T>, B<NUM2,IDX2,T2>, T>::GP operator /  (const A<NUM,IDX,T>&, const B<NUM2,IDX2,T2>&) ;
//
//template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//typename Product<A<NUM,IDX,T>, B<NUM2,IDX2,T2>, T>::IP operator <=  (const A<NUM,IDX,T>&, const B<NUM2,IDX2,T2>&) ;
//
//template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//typename Product<A<NUM,IDX,T>, B<NUM2,IDX2,T2>, T>::OP operator ^  (const A<NUM,IDX,T>&, const B<NUM2,IDX2,T2>&) ;
//
//template< template<int, int, class> class A, int NUM, int IDX, class T >
//A<NUM,IDX,T> operator ~(const A<NUM,IDX,T>&)  ;
//
//template< template<int, int, class> class A, int NUM, int IDX, class T >
//A<NUM,IDX,T> involution(const A<NUM,IDX,T>&);
//
//template< template<int, int, class> class A, int NUM, int IDX, class T >
//A<NUM,IDX,T> conjugation(const A<NUM,IDX,T>&);  
//
//template< template<int,int,class> class A, class B, int NUM, int IDX, class T >
// A<NUM,IDX,T> operator * (const A<NUM,IDX,T>& a, const B& v);
//
//template< template<int,int,class> class A, class B, int NUM, int IDX, class T >
// A<NUM,IDX,T> operator / (const A<NUM,IDX,T>& a, const B& v);
//
//template< template<int,int,class> class A, class B, int NUM, int IDX, class T >
// A<NUM,IDX,T>& operator *=  ( A<NUM,IDX,T>& a, const B& v);
//
//template< template<int,int,class> class A, class B, int NUM, int IDX, class T >
// A<NUM,IDX,T>& operator /=  ( A<NUM,IDX,T>& a, const B& v);
//
//template< template<int,int,class> class A, int NUM, int IDX, class T >
// A<NUM,IDX,T> operator +  (const A<NUM,IDX,T>&, const A<NUM,IDX,T>&);
//
//template< template<int,int,class> class A,  int NUM, int IDX, class T >
// A<NUM,IDX,T> operator -  (const A<NUM,IDX,T>&, const A<NUM,IDX,T>&);
//
//template< template<int,int,class> class A, int NUM, int IDX, class T >
// A<NUM,IDX,T>& operator +=  ( A<NUM,IDX,T>&, const A<NUM,IDX,T>&);
//
//template< template<int,int,class> class A, int NUM, int IDX, class T >
// A<NUM,IDX,T>& operator -=  ( A<NUM,IDX,T>&, const A<NUM,IDX,T>&);
// 
// template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//  A<NUM,IDX,T> operator +  (const A<NUM,IDX,T>&, const B<NUM2,IDX2,T2>&);
// template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//  A<NUM,IDX,T> operator -  (const A<NUM,IDX,T>&, const B<NUM2,IDX2,T2>&);
// template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//  A<NUM,IDX,T>& operator +=  (const A<NUM,IDX,T>&, const B<NUM2,IDX2,T2>&);
// template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//  A<NUM,IDX,T>& operator +=  (const A<NUM,IDX,T>&, const B<NUM2,IDX2,T2>&);

//    template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//   friend typename Product<A<NUM,IDX,T>, B<NUM2,IDX2,T2>, T>::GP operator * (const A<NUM,IDX,T>& a, const B<NUM2,IDX2,T2>& b)  { return gp (a,b); }
//
//    template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//   friend typename Product<A<NUM,IDX,T>, B<NUM2,IDX2,T2>, T>::GP operator / (const A<NUM,IDX,T>& a, const B<NUM2,IDX2,T2>& b)  { return gp(a,b); }
//   
//    template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//   friend typename Product<A<NUM,IDX,T>, B<NUM2,IDX2,T2>, T>::IP operator <= (const A<NUM,IDX,T>& a, const B<NUM2,IDX2,T2>& b)  { return ip(a,b); }
//   
//    template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//   friend typename Product<A<NUM,IDX,T>, B<NUM2,IDX2,T2>, T>::OP operator ^ (const A<NUM,IDX,T>& a, const B<NUM2,IDX2,T2>& b)  { return op(a,b); }
//   
//   template< template<int, int, class> class A, int NUM, int IDX, class T >
//    friend A<NUM,IDX,T> operator ~(const A<NUM,IDX,T>& a)  { return reverse(a); }
//    
//    template< template<int, int, class> class A, int NUM, int IDX, class T >
//    friend A<NUM,IDX,T> involution(const A<NUM,IDX,T>& a) { return involute(a); }
//    
//    template< template<int, int, class> class A, int NUM, int IDX, class T >
//    friend A<NUM,IDX,T> conjugation(const A<NUM,IDX,T>& a) { return conjugate(a); }
//    
//    template< template<int, int, class> class A, int NUM, int IDX, class T >
//    friend A<NUM,IDX,T>operator !(const A<NUM,IDX,T>& a)  {
//            A<NUM,IDX,T> sr = ~a;
//			typename Product<A<NUM,IDX,T>, A<NUM,IDX,T>,T>::GP s = a * sr;
//			if (s[0] == 0 ) return sr;
//			return ( sr / s[0] ); 
//    }
//    
//    
//    template< template<int,int,class> class A, class B, int NUM, int IDX, class T >
//    friend A<NUM,IDX,T> operator * (const A<NUM,IDX,T>& a, const B& v)  { A<NUM,IDX,T> mv = a;  IT(NUM){ mv[i] *= v; } return mv; }
//
//    template< template<int,int,class> class A, class B, int NUM, int IDX, class T >
//    friend A<NUM,IDX,T> operator / (const A<NUM,IDX,T>& a, const B& v)  { A<NUM,IDX,T> mv = a;  IT(NUM){ mv[i] /= v; } return mv; }
//
//    template< template<int,int,class> class A, class B, int NUM, int IDX, class T >
//    friend A<NUM,IDX,T>& operator *=  (A<NUM,IDX,T>& a, const B& v)  { IT(NUM){ a[i] *= v; } return a; }
//
//    template< template<int,int,class> class A, class B, int NUM, int IDX, class T >
//    friend A<NUM,IDX,T>& operator /=  (A<NUM,IDX,T>& a, const B& v)  { IT(NUM){ a[i] /= v; } return a; }
//    
//    template< template<int,int,class> class A,  int NUM, int IDX, class T >
//    friend A<NUM,IDX,T>&  operator += (A<NUM,IDX,T>& a, const A<NUM,IDX,T>& rh) { IT(NUM){ (a)[i] += rh[i]; } return a; }
//
//    template< template<int,int,class> class A,  int NUM, int IDX, class T >
//    friend A<NUM,IDX,T>&  operator -= (A<NUM,IDX,T>& a, const A<NUM,IDX,T>& rh) { IT(NUM){ (a)[i] -= rh[i]; } return a; }
//    
//    template< template<int,int,class> class A,  int NUM, int IDX, class T >
//    friend A<NUM,IDX,T>  operator + (const A<NUM,IDX,T>& a, const A<NUM,IDX,T>& rh) {  A<NUM,IDX,T> mv = a; IT(NUM){ mv[i] += rh[i]; } return mv; }
//
//    template< template<int,int,class> class A, int NUM, int IDX, class T >
//    friend A<NUM,IDX,T>  operator - (const A<NUM,IDX,T>& a, const A<NUM,IDX,T>& rh) { return a -= rh; }//A<NUM,IDX,T> mv = a; IT(NUM){ mv[i] -= rh[i]; } return mv; }
//    
//     template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//    friend A<NUM,IDX,T> operator +  (const A<NUM,IDX,T>& a, const B<NUM2,IDX2,T2>& b) { return a + A<NUM,IDX,T>(b); }
//
//     template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//    friend A<NUM,IDX,T> operator -  (const A<NUM,IDX,T>& a, const B<NUM2,IDX2,T2>& b) { return a - A<NUM,IDX,T>(b); }
//
//     template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//    friend A<NUM,IDX,T>& operator +=  (const A<NUM,IDX,T>& a, const B<NUM2,IDX2,T2>& b) { return a += A<NUM,IDX,T>(b); }
//
//     template< template<int, int, class> class A, template<int, int, class> class B, int NUM, int IDX, class T, int NUM2, int IDX2, class T2 >
//    friend A<NUM,IDX,T>& operator -=  (const A<NUM,IDX,T>& a, const B<NUM2,IDX2,T2>& b) { return a -= A<NUM,IDX,T>(b); }
