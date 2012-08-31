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
    
//Type Container Struct    
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


template < int N, int IDX, class T >
class MV {

	T mW[N];	
	
public:
	
    typedef MV<N,IDX,T> self_type;
    typedef T value_type;
    typedef T array_type[N];
    
    static const int idx = IDX;
 	static const int size =  N;    

//    static const int idx() { return IDX; }
// 	static const int size() { return N; }
    //((T*)v)[0]
 //   MV(void* v) { std::copy( &( (T*)v )[0],&( (T*)v )[0] + N, mW); }

    //Feed in a value_type
	MV(const T& v = T()) { std::fill(mW, mW + N, v); }
    
    //Copy Constructor -- same MV, different value_type
    template <class T2>
    MV(const MV<N, IDX, T2>& mv) { set(mv); }

    //Copy Constructor -- Different MV
    template <int N2, int IDX2, class T2>
    MV(const MV<N2, IDX2, T2>& mv) { set( cast< self_type, MV<N2, IDX2, T2> >( mv ) ); }
    
    //Copy Constructor -- Unknown
//    template<class U>
//    MV(const U& u) { set(u); }
    
    template <class T2>
    MV& set(const MV<N, IDX, T2>& mv){
        IT(N) { (*this)[i] = mv[i]; }
        return *this;
    }
    
//    template <int N2, int IDX2, class T2>
//    MV& set(const MV<N2, IDX2, T2>& mv) {
//        IT(N<N2 ? N:N2) { (*this)[i] = mv[i]; } 
//        return *this;
//    }
    
    //CASTING e.g. Biv b = rot;  or (Biv)rot;
//    template< class A >
//    operator A() { return cast< A, self_type > ( *this ); }
    
    template< class A >
    const MV& operator = ( A a) { return cast< self_type, A > ( a ); } 
	
	MV( const T& a0, const T& a1 )  { set( a0,a1 ); }
	void set( const T& a0, const T& a1 ) { mW[0]=a0; mW[1]=a1;  }
	
	MV( const T& a0, const T& a1, const T& a2 ){ set( a0,a1,a2 ); }
	void set( const T& a0, const T& a1, const T& a2 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2;  }
	
	MV( const T& a0, const T& a1, const T& a2, const T& a3 ) { set( a0,a1,a2,a3 ); }
	void set( const T& a0, const T& a1, const T& a2, const T& a3 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3;  }
	
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4 )  { set( a0,a1,a2,a3,a4 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5 )  { set( a0,a1,a2,a3,a4,a5 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6 )  { set( a0,a1,a2,a3,a4,a5,a6 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7 ) { set( a0,a1,a2,a3,a4,a5,a6,a7 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8 )  { set( a0,a1,a2,a3,a4,a5,a6,a7,a8 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9 )  { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10 )  { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11 ) { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12 )  { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13 ) { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12; mW[13]=a13;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14 )  { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12; mW[13]=a13; mW[14]=a14;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14, const T& a15 ) { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14, const T& a15 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12; mW[13]=a13; mW[14]=a14; mW[15]=a15;  }

	
	T& operator[] (int idx) { return mW[idx]; }
	const T& operator[]  (int idx) const { return mW[idx]; }

    template< class B >
    self_type operator * ( const B& v) const { self_type mv = *this;  IT(N){ mv[i] *= v; } return mv; }
    template< class B >
    self_type operator / ( const B& v) const { self_type mv = *this;  IT(N){ mv[i] *= v; } return mv; }

    template< class B >
    self_type& operator *= ( const B& v) { IT(N){ mW[i] *= v; } return *this; }
    template< class B >
    self_type& operator /= ( const B& v) { IT(N){ mW[i] *= v; } return *this; }
    
    //MULT
    template < int N2, int IDX2, class T2 >
    typename Product<self_type, MV<N2,IDX2,T2>, T>::GP operator * ( const MV<N2,IDX2,T2>& rh ) const { return gp ( *this, rh ); }
    
    template< int N2, int IDX2, class T2 >
    typename Product<self_type, MV<N2,IDX2,T2>, T>::GP operator / ( const MV<N2,IDX2,T2>& rh ) const { return gp ( *this, !rh ); }

     template< int N2, int IDX2, class T2 >
    typename Product<self_type, MV<N2,IDX2,T2>, T>::OP operator ^ ( const MV<N2,IDX2,T2>& rh ) const { return op ( *this, rh ); }

    template< int N2, int IDX2, class T2 >
    typename Product<self_type, MV<N2,IDX2,T2>, T>::IP operator <= ( const MV<N2,IDX2,T2>& rh ) const { return ip ( *this, rh ); }
    
    self_type operator !() const {
            self_type sr = (~(*this));
			typename Product<self_type, self_type>::GP s = (*this) * sr;
			if (s[0] == 0 ) return sr;
			return ( sr / s[0] ); 
    }
    
    self_type involution() const { return involute(*this); }
    self_type conjugation() const { return conjugate(*this); }
    self_type operator ~() const { return reverse(*this); }
    
    //ADD/SUB
    MV operator += (const MV& rh) { IT(N){ (*this)[i] += rh[i]; } return *this; }
    MV operator + ( const MV& rh) { return MV(*this) += rh; }
    
    MV operator -= (const MV& rh) { IT(N){ (*this)[i] -= rh[i]; } return *this; }
    MV operator - ( const MV& rh) { return MV(*this) -= rh; }
    
    /////////////////////////////////////////////////////
    /* U T I L I T Y  F U N C T I O N S */
    /////////////////////////////////////////////////////
    
    /*! Null Point */
    Pnt null() const;

    /*! Dot Product */
    typename Product<self_type, self_type, T>::IP dot() const { return *this <= *this; }
    /*! Reverse Dot Product */
    typename Product<self_type, self_type, T>::IP rdot() const { return *this <= ~(*this); }
    /*! Weight */
    T wt() const { return dot()[0]; }
    /*! Reverse Weight */
    T rwt() const { return rdot()[0]; }
    T norm() const { double a = rwt(); if(a<0) return 0; return sqrt( a ); }
	T rnorm() const { double a = rwt(); if(a<0) return -sqrt( -a ); return sqrt( a ); }
	self_type unit() const { double t = sqrt( fabs( dot()[0] ) ); if (t == 0) return self_type(); return *this / t; }
    self_type runit() const { double t = rnorm(); if (t == 0) return self_type(); return *this / t; }
    self_type tunit() const { double t = norm(); if (t == 0) return self_type(); return *this / t; }
    
    self_type dual() const;
    self_type undual() const;

    /////////////////////////////////////////////////////
    /* T r a n s f o r m a t i o n  O p e r a t o r s  */
    /////////////////////////////////////////////////////
    
    template<class B>
    self_type sp (const B& b) const { return vsr::sp (*this,b);}

    template<class B>
    self_type re (const B& b) const{ return vsr::re (*this,b);}
    
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
    

    
    /*! Pointer to Beginning of Array */
    array_type& w() { return mW; }
    
    string name() { return Idx<IDX>::name; }
	/*! ONE-TO-ONE TEMPLATE FUNCTION PRETTY PRINTING */
	friend std::ostream& operator << <> (  std::ostream& os, self_type a );
    
    
    /* PENDING .... */
    
    array_type& begin() { return mW; }
//    array_type& end() { return mW + size; }
		
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
    
#undef IT
    
} //vsr::


#endif
