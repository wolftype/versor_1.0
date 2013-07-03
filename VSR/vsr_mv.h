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

//#include <stdio.h>
#include <string.h>
#include <iostream>
#include <sstream>
//#include <math.h>

#include "vsr_templates.h"

#include "gfx_matrix.h"

//#include <map>
//#include <utility>


#define SANITYCHECK false
#define TPRINT(x) if(SANITYCHECK)cout<<x<<endl;

#ifndef VSR_PRECISION
typedef double VSR_PRECISION; 
#endif

namespace vsr {

using namespace std;

//ITERATOR Utility
#define IT(n) for(int i = 0; i < (n); ++i)

//Predeclare MV class
template< int NUM, int IDX, class T > class MV;

//Predeclare Template Friends
template< int NUM, int IDX, class T >
std::ostream& operator << ( std::ostream& os, const MV< NUM, IDX, T >& a );

//Predeclare FUNCTION templates
template<class R, class T> const R cast ( const T& );

template<class T> T involute( const T& );
template<class T> T conjugate( const T& );
template<class T> T reverse( const T& );


template<class A, class B> A sp(const A&, const B&);
template<class A, class B> A re(const A&, const B&);
    
////Type Container Struct e.g. Product<Vec,Rot>
template<class A, class B, class T=VSR_PRECISION>
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

//Type Container Struct Using IDX input instead of Class 
template<int A, int B, class T=VSR_PRECISION>
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
	typedef MV<4,ROT,VSR_PRECISION>  Rot;
	
	typedef MV<8,MOT,VSR_PRECISION>  Mot;
	
	typedef MV<2,DIL,VSR_PRECISION>  Dil;
	
	typedef MV<4,TRV,VSR_PRECISION>  Trv;
	
	typedef MV<12,MTD,VSR_PRECISION>  Mtd;
	
	typedef MV<4,TRS,VSR_PRECISION>  Trs;
	
	typedef MV<16,RTC,VSR_PRECISION>  Rtc;
	
	typedef MV<16,MTT,VSR_PRECISION>  Mtt;
	
	typedef MV<8,RTT,VSR_PRECISION>  Rtt;
	
	typedef MV<8,RTD,VSR_PRECISION>  Rtd;
	
	typedef MV<5,TVD,VSR_PRECISION>  Tvd;
	
	typedef MV<5,TSD,VSR_PRECISION>  Tsd;
	
	typedef MV<14,TRT,VSR_PRECISION>  Trt;
	
	typedef MV<12,RVD,VSR_PRECISION>  Rvd;
	
	typedef MV<15,TST,VSR_PRECISION>  Tst;
	
	typedef MV<15,TVT,VSR_PRECISION>  Tvt;
	
	typedef MV<11,BST,VSR_PRECISION>  Bst;
	
	typedef MV<1,SCA,VSR_PRECISION>  Sca;
	
	typedef MV<1,ORI,VSR_PRECISION>  Ori;
	
	typedef MV<1,INF,VSR_PRECISION>  Inf;
	
	typedef MV<1,MNK,VSR_PRECISION>  Mnk;
	
	typedef MV<2,HYP,VSR_PRECISION>  Hyp;
	
	typedef MV<1,PSS,VSR_PRECISION>  Pss;
	
	typedef MV<5,PNT,VSR_PRECISION>  Pnt;
	
	typedef MV<10,PAR,VSR_PRECISION>  Par;
	
	typedef MV<10,CIR,VSR_PRECISION>  Cir;
	
	typedef MV<5,SPH,VSR_PRECISION>  Sph;
	
	typedef MV<9,STA,VSR_PRECISION>  Sta;
	
	typedef MV<3,DRV,VSR_PRECISION>  Drv;
	
	typedef MV<3,DRB,VSR_PRECISION>  Drb;
	
	typedef MV<1,DRT,VSR_PRECISION>  Drt;
	
	typedef MV<3,TNV,VSR_PRECISION>  Tnv;
	
	typedef MV<3,TNB,VSR_PRECISION>  Tnb;
	
	typedef MV<1,TNT,VSR_PRECISION>  Tnt;
	
	typedef MV<6,LIN,VSR_PRECISION>  Lin;
	
	typedef MV<4,PLN,VSR_PRECISION>  Pln;
	
	typedef MV<4,FLP,VSR_PRECISION>  Flp;
	
	typedef MV<4,DFP,VSR_PRECISION>  Dfp;
	
	typedef MV<6,DLL,VSR_PRECISION>  Dll;
	
	typedef MV<4,DLP,VSR_PRECISION>  Dlp;
	
	typedef MV<3,VEC,VSR_PRECISION>  Vec;
	
	typedef MV<3,BIV,VSR_PRECISION>  Biv;
	
	typedef MV<1,TRI,VSR_PRECISION>  Tri;
	
	typedef MV<4,AFF,VSR_PRECISION>  Aff;
	
	typedef MV<6,AFL,VSR_PRECISION>  Afl;
	
	typedef MV<4,AFP,VSR_PRECISION>  Afp;
	
	typedef MV<4,DAP,VSR_PRECISION>  Dap;
	
	typedef MV<4,DAF,VSR_PRECISION>  Daf;
	
	typedef MV<6,DAL,VSR_PRECISION>  Dal;
	
	typedef MV<3,MNV,VSR_PRECISION>  Mnv;


//template< int N, class T >

//in progress, unused
struct Generic {
//    Generic({}
    Generic(unsigned int t = -1) : id(t) {}
    unsigned int id;
    
    //in process . . .
    Pnt pnt() const; //{ return *(Pnt*)(this); }
    Par par() const; //{ return *(Par*)(this); }
    Cir cir() const; // { return *(Cir*)(this); }
    Sph sph() const;
};

#ifndef BASECONST 
#define BASECONST :Generic(IDX)
#endif

template < int N, int IDX, class T >
class MV : public Generic {

	T mW[N];	

public:
	
    void test();
    
    typedef MV<N,IDX,T> self_type;
    typedef T value_type;
    typedef const T array_type[N];
    typedef typename ProductN<VEC,IDX>::GP VecDeriv;
    
    static const unsigned int idx = IDX;
 	static const unsigned int size =  N;
    
    

    //Feed in a value_type e.g. Vec(0.0), mind the decimals
	MV(const T& v = T()) BASECONST { std::fill(mW, mW + N, v);  }
    
    MV(const gfx::Vec3f& v) BASECONST { set( v[0], v[1], v[2] ); }
    MV(const gfx::Vec3d& v) BASECONST { set( v[0], v[1], v[2] ); }
    
    /*! Copy Constructor Same Type  */ //TPRINT("Copy Constructor Same Type \n");
    MV(const MV<N, IDX, T>& mv)  BASECONST { set(mv);  }

    //Copy Constructor -- same MV, different value_type //TPRINT(" Constructor Same Type \n"); 
    template <class T2>
    MV(const MV<N, IDX, T2>& mv)  BASECONST {set(mv);  }

    //Copy Constructor -- Different MV // TPRINT( " Copy Constructor Different Type \n") ;
    template <int N2, int IDX2, class T2>
    MV(const MV<N2, IDX2, T2>& mv) BASECONST {set( cast< self_type, MV<N2, IDX2, T2> >( mv ) );}
    
    template <class T2>
    MV& set(const MV<N, IDX, T2>& mv) {
        IT(N) { (*this)[i] = mv[i]; }
        return *this;
    }
    
    /*! Assignment Operator Same Type */ //TPRINT(" Assignment Operator Same Type\n"); 
    const MV& operator = (const MV& mv) { return set(mv); }
    
    /*! Assignment Operator Different Type; */
    template <int N2, int IDX2, class T2>
    const MV& operator = (const MV<N2, IDX2, T2>& mv) { return set( cast< self_type,  MV<N2, IDX2, T2> > ( mv ) ); } 
	
	MV( const T& a0, const T& a1 )  BASECONST { set( a0,a1 ); }
	void set( const T& a0, const T& a1 ) { mW[0]=a0; mW[1]=a1;  }
	
	MV( const T& a0, const T& a1, const T& a2 ) BASECONST  { set( a0,a1,a2 );  }
	void set( const T& a0, const T& a1, const T& a2 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2;  }
	
	MV( const T& a0, const T& a1, const T& a2, const T& a3 ) BASECONST  { set( a0,a1,a2,a3 );  }
	void set( const T& a0, const T& a1, const T& a2, const T& a3 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3;  }
	
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4 ) BASECONST { set( a0,a1,a2,a3,a4 );  }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5 ) BASECONST { set( a0,a1,a2,a3,a4,a5 );  }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6 ) BASECONST { set( a0,a1,a2,a3,a4,a5,a6 );   }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7 ) BASECONST { set( a0,a1,a2,a3,a4,a5,a6,a7 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8 ) BASECONST { set( a0,a1,a2,a3,a4,a5,a6,a7,a8 );  }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9 ) BASECONST { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10 ) BASECONST { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11 ) BASECONST { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12 )  BASECONST  { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12 );}
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13 ) BASECONST { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13 );}
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12; mW[13]=a13;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14 ) BASECONST { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14 ); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12; mW[13]=a13; mW[14]=a14;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14, const T& a15 ) BASECONST { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15 ); }
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
    MV operator / ( const B& v) const { self_type mv = *this;  IT(N){ mv[i] /= v; } return mv; }

    template< class B >
    MV& operator *= ( const B& v) { IT(N){ mW[i] *= v; } return *this; }
    template< class B >
    MV& operator /= ( const B& v) { IT(N){ mW[i] /= v; } return *this; }
    
    MV& operator *= ( const MV& v) { *this = *this * v; return *this; }

    template < int N2, int IDX2, class T2 >
    MV& operator *= (  const MV<N2,IDX2,T2>& rh ) { 
        *this = *this * rh; return *this;
    }
    
    
    
    /*! Geometric Product */
    template < int N2, int IDX2, class T2 >
    typename ProductN<idx, IDX2, T>::GP operator * ( const MV<N2,IDX2,T2>& rh ) const { return gp ( *this, rh ); }
    
    /*! Geometric Division */
    template< int N2, int IDX2, class T2 >
    typename ProductN<idx, IDX2, T>::GP operator / ( const MV<N2,IDX2,T2>& rh ) const { return gp ( *this, !rh ); }

    /*! Outer Product */
     template< int N2, int IDX2, class T2 >
    typename ProductN<idx, IDX2, T>::OP operator ^ ( const MV<N2,IDX2,T2>& rh ) const { return op ( *this, rh ); }

    /*! Inner Product */
    template< int N2, int IDX2, class T2 >
    typename ProductN<idx, IDX2, T>::IP operator <= ( const MV<N2,IDX2,T2>& rh ) const { return ip ( *this, rh ); }
    
    /*! Commutator (differential) */
    template<class B>
    MV operator %(const B& b) { return ( (*this) * b - b * (*this) ) * .5; }
    
    /*! Inversion */
    MV operator !() const {
            self_type sr = (~(*this));
			typename ProductN<idx, idx>::GP s = (*this) * sr;
			if (s[0] == 0 ) return sr;
			return ( sr / s[0] ); 
    }
    
    /*! Involution */
    MV involution() const { return involute(*this); }
    /*! Conjugation */
    MV conjugation() const { return conjugate(*this); }
    /*! Reversion */
    MV operator ~() const { return reverse(*this); }
    /*! Negation*/
    MV operator -() const { return *this * -1; }
    
    // ADD and SUBTRACT
    MV& operator += (const MV& rh) { IT(N){ (*this)[i] += rh[i]; } return *this; }
    MV operator + ( const MV& rh) const { return MV(*this) += rh; }
    
    MV& operator -= (const MV& rh) { IT(N){ (*this)[i] -= rh[i]; } return *this; }
    MV operator - ( const MV& rh) const { return MV(*this) -= rh; }

    template< class B >
    MV& operator +=(const B& rh) { return *this += MV<N,IDX,T>(rh); }
    template< class B >
    MV& operator -=(const B& rh) { return *this -= MV<N,IDX,T>(rh); }
    template< class B >
    MV operator + (const B& rh) const { return *this + MV<N,IDX,T>(rh); }
    template< class B >
    MV operator - (const B& rh) const { return *this - MV<N,IDX,T>(rh); }
    
    /////////////////////////////////////////////////////
    /* U T I L I T Y  F U N C T I O N S */
    /////////////////////////////////////////////////////
    
    /*! Null Point */
    Pnt null() const;
    /*! Dot Product */
    typename ProductN<IDX, IDX, T>::IP dot() const;// { return (*this) <= (*this); }
    /*! Reverse Dot Product */
    typename ProductN<IDX, IDX, T>::IP rdot() const;// { return *this <= ~(*this); }
    /*! Weight */
    T wt() const;// { return dot()[0]; }
    /*! Reverse Weight */
    T rwt() const;// { return rdot()[0]; }
    T norm() const;// { double a = rwt(); if(a<0) return 0; return sqrt( a ); }
	T rnorm() const;// { double a = rwt(); if(a<0) return -sqrt( -a ); return sqrt( a ); }
	self_type unit() const;// { double t = sqrt( fabs( dot()[0] ) ); if (t == 0) return self_type(); return *this / t; }
    self_type runit() const;// { double t = rnorm(); if (t == 0) return self_type(); return *this / t; }
    self_type tunit() const;// { double t = norm(); if (t == 0) return self_type(); return *this / t; }
    
    /*! Duality */
    typename Product<self_type, Pss, T>::GP dual() const;
    typename Product<self_type, Pss, T>::GP undual() const;
    /*! Euclidean Duality */
    typename Product<self_type, Tri, T>::GP duale() const;
    typename Product<self_type, Tri, T>::GP unduale() const;

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
    //template<class B>
    self_type dil(const Pnt& b, T v) const;
    /*! Dilation from origin by amt v */
    self_type dil(T v) const;
    
    /*! Transversion (AKA Boost) in b Direction */
    template<class B>
    self_type trv(const B& b) const { return trv(b[0],b[1],b[2]); }
    
    /*! Transversion (AKA Boosting) in X Y Z direction */
    self_type trv(T x, T y, T z) const;
    
    string name() const { return Idx<IDX>::name(); }
	/*! ONE-TO-ONE TEMPLATE FUNCTION PRETTY PRINTING */
	friend std::ostream& operator << <> (  std::ostream& os, const self_type& a );
    

    /*! Equality Checking */
    template<class B>
    bool operator == (const B& mv) const{
        int t = N <= B::size ? N : B::size;
        int n = memcmp(mW, mv.begin(), t * sizeof(T) );
        if (n != 0) return false;
        else return true;
    }
	
    /* USE THE SLOPPY STATICS BELOW CAREFULLY: ASSUMES SPECIFIC GRADE POSITIONS (mostly for Vec and Biv) */    
    static MV x, y, z, xy, xz, yz;  
    
    static MV e1(T t) { return MV<N,IDX,T>(t,0,0); }   	
    static MV e2(T t) { return MV<N,IDX,T>(0,t,0); }   	
    static MV e3(T t) { return MV<N,IDX,T>(0,0,t); }   
    static MV e12(T t) { return MV<N,IDX,T>(t,0,0); }   	
    static MV e13(T t) { return MV<N,IDX,T>(0,t,0); }   	
    static MV e23(T t) { return MV<N,IDX,T>(0,0,t); }   	
    
    //virtual void draw() { draw(1.0,1.0,1.0); }
   //void draw(float r , float g , float b, float a= 1.0 );
};



//    template<int N, int IDX, class T>
//void MV<N, IDX, T>::draw(float r, float g, float b, float a){
//    Draw::R(*this,r,g,b,a);
//}

template<int NUM, int IDX, typename T>
inline std::ostream& operator << ( std::ostream& os, const MV< NUM, IDX, T >& a ){
    int nsize = a.size;
    os << a.name() << "\t";
    for (int i = 0 ; i < nsize; ++i){
        os << a[i] << " ";
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

#undef BASECONST 
    
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
