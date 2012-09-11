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

class MVBase;

template< class A, class B >
MVBase gp_gen ( const MVBase& a, const MVBase& b);  // { printf("///////////////\ngp error!\n"); }//( const A<NUM,IDX,T>&, const B<NUM2,IDX2,T2>&);
template< class A, class B >
MVBase op_gen ( const MVBase& a, const MVBase& b);  // { printf("///////////////\ngp error!\n"); }//( const A<NUM,IDX,T>&, const B<NUM2,IDX2,T2>&);
template< class A, class B >
MVBase ip_gen ( const MVBase& a, const MVBase& b);  // { printf("///////////////\ngp error!\n"); }//( const A<NUM,IDX,T>&, const B<NUM2,IDX2,T2>&);


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







typedef MVBase(*CB) (const MVBase&, const MVBase&);

class MVBase {



    //protected:
     public:
     
    CB * gpfuncsptr, * opfuncsptr, * ipfuncsptr;
     
    int num, idx;
    float * W;
    float& operator[] (int n) { return W[n]; }
    float operator[] (int n) const { return W[n]; }
    
    MVBase(int n, int x, float * _w = NULL) : num(n), idx(x), W(_w) {}

    MVBase( const MVBase& mv) : num(mv.num), idx(mv.idx), W(mv.W) { 
        TPRINT("base class copy constructor\n"); 
        W = new float[num];
        gpfuncsptr = mv.gpfuncsptr;
        opfuncsptr = mv.opfuncsptr;
        ipfuncsptr = mv.ipfuncsptr;
        std::copy(mv.W, mv.W + num, W);
    }
    
    const MVBase& operator = (const MVBase& mv) {
            TPRINT("base class assignment operator\n");
            if (this == &mv) return *this;	
            
            num  = mv.num;
            idx = mv.idx;
            W = mv.W;
            gpfuncsptr = mv.gpfuncsptr;
            opfuncsptr = mv.opfuncsptr;
            ipfuncsptr = mv.ipfuncsptr;
            
            return *this;
    }
    
    MVBase operator * (const MVBase& b) { return gpfuncsptr[b.idx-1](*this, b); } 
    MVBase operator <= (const MVBase& b); 
    MVBase operator ^ (const MVBase& b); 

    //return funcs[mIdx-1][b.mIdx-1][0](*this, b);
 

    friend std::ostream& operator << (std::ostream& os, const MVBase&);

};




template < int N, int IDX, class T >
class MV : public MVBase {

	T mW[N];	
    
    
    void _init() { this->W = mW; this->gpfuncsptr = gpfuncs; this->opfuncsptr = opfuncs;  this->ipfuncsptr = ipfuncs; }
public:
	
    typedef MV<N,IDX,T> self_type;
    typedef T value_type;
    typedef T array_type[N];
    
    static  CB gpfuncs[50];

    static  CB opfuncs[50];

    static  CB ipfuncs[50];

    
    static const int idx = IDX;
 	static const int size =  N;    

    //Feed in a value_type
	MV(const T& v = T()) : MVBase(N,IDX) { std::fill(mW, mW + N, v); _init(); }
    
    //Copy Constructor from generic
    MV(const MVBase& mv) : MVBase(N,IDX) { TPRINT("Derived Copy Constructor General\n"); std::copy(mW, mW + N, mv.W); _init(); }
    
    //Copy Constructor -- same MV
    MV(const MV<N, IDX, T>& mv) : MVBase(N,IDX) {TPRINT("Derived Constructor Same Type \n"); set(mv); _init(); }

    //Copy Constructor -- same MV, different value_type
    template <class T2>
    MV(const MV<N, IDX, T2>& mv) : MVBase(N,IDX) {TPRINT("Derived Constructor Same Type \n"); set(mv); _init(); }

    //Copy Constructor -- Different MV
    template <int N2, int IDX2, class T2>
    MV(const MV<N2, IDX2, T2>& mv) : MVBase(N,IDX) { TPRINT( "Derived Copy Constructor Different Type \n") ;set( cast< self_type, MV<N2, IDX2, T2> >( mv ) ); _init();}
    
    template <class T2>
    MV& set(const MV<N, IDX, T2>& mv) {
        IT(N) { (*this)[i] = mv[i]; }
        return *this;
    }
    
    const MV& operator = (const MV& mv) { TPRINT("Derived Assignment Operator Same Type\n"); this->W = mv.W; return set(mv); }
    
    template< class A >
    const MV& operator = ( A a) { TPRINT("Derived Assignment Operator Different Type\n"); MVBase::operator = (a); return cast< self_type, A > ( a ); } 
	
	MV( const T& a0, const T& a1 ) : MVBase(N,IDX)  { set( a0,a1 ); _init();}
	void set( const T& a0, const T& a1 ) { mW[0]=a0; mW[1]=a1;  }
	
	MV( const T& a0, const T& a1, const T& a2 ) : MVBase(N,IDX) { set( a0,a1,a2 ); _init(); }
	void set( const T& a0, const T& a1, const T& a2 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2;  }
	
	MV( const T& a0, const T& a1, const T& a2, const T& a3 ): MVBase(N,IDX)  { set( a0,a1,a2,a3 ); _init(); }
	void set( const T& a0, const T& a1, const T& a2, const T& a3 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3;  }
	
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4 ) : MVBase(N,IDX)  { set( a0,a1,a2,a3,a4 ); _init(); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5 ) : MVBase(N,IDX) { set( a0,a1,a2,a3,a4,a5 ); _init(); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6 ) : MVBase(N,IDX) { set( a0,a1,a2,a3,a4,a5,a6 ); _init();  }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7 ) : MVBase(N,IDX){ set( a0,a1,a2,a3,a4,a5,a6,a7 ); _init(); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8 ): MVBase(N,IDX)  { set( a0,a1,a2,a3,a4,a5,a6,a7,a8 ); _init(); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9 ) : MVBase(N,IDX) { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 );_init(); }
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10 ) : MVBase(N,IDX) { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10 ); _init();}
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11 ) : MVBase(N,IDX){ set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11 ); _init();}
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12 )  : MVBase(N,IDX) { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12 ); _init();}
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13 ) : MVBase(N,IDX) { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13 ); _init();}
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12; mW[13]=a13;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14 ) : MVBase(N,IDX) { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14 ); _init();}
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12; mW[13]=a13; mW[14]=a14;  }
    
    MV( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14, const T& a15 ): MVBase(N,IDX) { set( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15 ); _init();}
    void set( const T& a0, const T& a1, const T& a2, const T& a3, const T& a4, const T& a5, const T& a6, const T& a7, const T& a8, const T& a9, const T& a10, const T& a11, const T& a12, const T& a13, const T& a14, const T& a15 ) { mW[0]=a0; mW[1]=a1; mW[2]=a2; mW[3]=a3; mW[4]=a4; mW[5]=a5; mW[6]=a6; mW[7]=a7; mW[8]=a8; mW[9]=a9; mW[10]=a10; mW[11]=a11; mW[12]=a12; mW[13]=a13; mW[14]=a14; mW[15]=a15;  }

	
	T& operator[] (int idx) { return mW[idx]; }
	const T& operator[]  (int idx) const { return mW[idx]; }
    
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
    
//    //MULT
    template < int N2, int IDX2, class T2 >
    typename Product<self_type, MV<N2,IDX2,T2>, T>::GP operator * ( const MV<N2,IDX2,T2>& rh ) const { return gp ( *this, rh ); }
    
    template< int N2, int IDX2, class T2 >
    typename Product<self_type, MV<N2,IDX2,T2>, T>::GP operator / ( const MV<N2,IDX2,T2>& rh ) const { return gp ( *this, !rh ); }

     template< int N2, int IDX2, class T2 >
    typename Product<self_type, MV<N2,IDX2,T2>, T>::OP operator ^ ( const MV<N2,IDX2,T2>& rh ) const { return op ( *this, rh ); }

    template< int N2, int IDX2, class T2 >
    typename Product<self_type, MV<N2,IDX2,T2>, T>::IP operator <= ( const MV<N2,IDX2,T2>& rh ) const { return ip ( *this, rh ); }
    
    MV operator !() const {
            self_type sr = (~(*this));
			typename Product<self_type, self_type>::GP s = (*this) * sr;
			if (s[0] == 0 ) return sr;
			return ( sr / s[0] ); 
    }
    
    MV involution() const { return involute(*this); }
    MV conjugation() const { return conjugate(*this); }
    MV operator ~() const { return reverse(*this); }
    
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

//    template<class B>
//    self_type sp (const B& b) const { return vsr::sp (*this,b);}

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
    
    string name() { return Idx<IDX>::name; }
	/*! ONE-TO-ONE TEMPLATE FUNCTION PRETTY PRINTING */
	friend std::ostream& operator << <> (  std::ostream& os, self_type a );
    
    /* PENDING .... */
    /*! Pointer to Beginning of Array */
    array_type& w() { return mW; }
    
    array_type& begin() { return mW; }
//    array_type& end() { return mW + size; }
		
};

//DEFAULTS FOR MVBASE Operations (abstract base class)
template< class A, class B >
MVBase gp_gen ( const MVBase& a, const MVBase& b) { printf("///////////////\ngp error!\n"); return a; }//( const A<NUM,IDX,T>&, const B<NUM2,IDX2,T2>&);
template< class A, class B >
MVBase op_gen ( const MVBase& a, const MVBase& b) { printf("///////////////\nop error!\n"); return a; }//( const A<NUM,IDX,T>&, const B<NUM2,IDX2,T2>&);
template< class A, class B >
MVBase ip_gen ( const MVBase& a, const MVBase& b){ printf("///////////////\nip error!\n"); return a; }

template<int NUM, int IDX, class T>
 CB MV<NUM,IDX,T>::gpfuncs[50] = {  
gp_gen< self_type,Rot> ,  
gp_gen< self_type,Mot> ,  
gp_gen< self_type,Dil> ,  
gp_gen< self_type,Trv> ,  
gp_gen< self_type,Mtd> ,  
gp_gen< self_type,Trs> ,  
gp_gen< self_type,Rtc> ,  
gp_gen< self_type,Mtt> ,  
gp_gen< self_type,Rtt> ,  
gp_gen< self_type,Rtd> ,  
gp_gen< self_type,Tvd> ,  
gp_gen< self_type,Tsd> ,  
gp_gen< self_type,Trt> ,  
gp_gen< self_type,Rvd> ,  
gp_gen< self_type,Tst> ,  
gp_gen< self_type,Tvt> ,  
gp_gen< self_type,Bst> ,  
gp_gen< self_type,Sca> ,  
gp_gen< self_type,Ori> ,  
gp_gen< self_type,Inf> ,  
gp_gen< self_type,Mnk> ,  
gp_gen< self_type,Hyp> ,  
gp_gen< self_type,Pss> ,  
gp_gen< self_type,Pnt> ,  
gp_gen< self_type,Par> ,  
gp_gen< self_type,Cir> ,  
gp_gen< self_type,Sph> ,  
gp_gen< self_type,Sta> ,  
gp_gen< self_type,Drv> ,  
gp_gen< self_type,Drb> ,  
gp_gen< self_type,Drt> ,  
gp_gen< self_type,Tnv> ,  
gp_gen< self_type,Tnb> ,  
gp_gen< self_type,Tnt> ,  
gp_gen< self_type,Lin> ,  
gp_gen< self_type,Pln> ,  
gp_gen< self_type,Flp> ,  
gp_gen< self_type,Dfp> ,  
gp_gen< self_type,Dll> ,  
gp_gen< self_type,Dlp> ,  
gp_gen< self_type,Vec> ,  
gp_gen< self_type,Biv> ,  
gp_gen< self_type,Tri> ,  
gp_gen< self_type,Aff> ,  
gp_gen< self_type,Afl> ,  
gp_gen< self_type,Afp> ,  
gp_gen< self_type,Dap> ,  
gp_gen< self_type,Daf> ,  
gp_gen< self_type,Dal> ,  
gp_gen< self_type,Mnv>   
};
    
template<int NUM, int IDX, class T>
 CB MV<NUM,IDX,T>::opfuncs[50] = {  
op_gen< self_type,Rot> ,  
op_gen< self_type,Mot> ,  
op_gen< self_type,Dil> ,  
op_gen< self_type,Trv> ,  
op_gen< self_type,Mtd> ,  
op_gen< self_type,Trs> ,  
op_gen< self_type,Rtc> ,  
op_gen< self_type,Mtt> ,  
op_gen< self_type,Rtt> ,  
op_gen< self_type,Rtd> ,  
op_gen< self_type,Tvd> ,  
op_gen< self_type,Tsd> ,  
op_gen< self_type,Trt> ,  
op_gen< self_type,Rvd> ,  
op_gen< self_type,Tst> ,  
op_gen< self_type,Tvt> ,  
op_gen< self_type,Bst> ,  
op_gen< self_type,Sca> ,  
op_gen< self_type,Ori> ,  
op_gen< self_type,Inf> ,  
op_gen< self_type,Mnk> ,  
op_gen< self_type,Hyp> ,  
op_gen< self_type,Pss> ,  
op_gen< self_type,Pnt> ,  
op_gen< self_type,Par> ,  
op_gen< self_type,Cir> ,  
op_gen< self_type,Sph> ,  
op_gen< self_type,Sta> ,  
op_gen< self_type,Drv> ,  
op_gen< self_type,Drb> ,  
op_gen< self_type,Drt> ,  
op_gen< self_type,Tnv> ,  
op_gen< self_type,Tnb> ,  
op_gen< self_type,Tnt> ,  
op_gen< self_type,Lin> ,  
op_gen< self_type,Pln> ,  
op_gen< self_type,Flp> ,  
op_gen< self_type,Dfp> ,  
op_gen< self_type,Dll> ,  
op_gen< self_type,Dlp> ,  
op_gen< self_type,Vec> ,  
op_gen< self_type,Biv> ,  
op_gen< self_type,Tri> ,  
op_gen< self_type,Aff> ,  
op_gen< self_type,Afl> ,  
op_gen< self_type,Afp> ,  
op_gen< self_type,Dap> ,  
op_gen< self_type,Daf> ,  
op_gen< self_type,Dal> ,  
op_gen< self_type,Mnv>   
};
    
template<int NUM, int IDX, class T>
 CB MV<NUM,IDX,T>::ipfuncs[50] = {  
ip_gen< self_type,Rot> ,  
ip_gen< self_type,Mot> ,  
ip_gen< self_type,Dil> ,  
ip_gen< self_type,Trv> ,  
ip_gen< self_type,Mtd> ,  
ip_gen< self_type,Trs> ,  
ip_gen< self_type,Rtc> ,  
ip_gen< self_type,Mtt> ,  
ip_gen< self_type,Rtt> ,  
ip_gen< self_type,Rtd> ,  
ip_gen< self_type,Tvd> ,  
ip_gen< self_type,Tsd> ,  
ip_gen< self_type,Trt> ,  
ip_gen< self_type,Rvd> ,  
ip_gen< self_type,Tst> ,  
ip_gen< self_type,Tvt> ,  
ip_gen< self_type,Bst> ,  
ip_gen< self_type,Sca> ,  
ip_gen< self_type,Ori> ,  
ip_gen< self_type,Inf> ,  
ip_gen< self_type,Mnk> ,  
ip_gen< self_type,Hyp> ,  
ip_gen< self_type,Pss> ,  
ip_gen< self_type,Pnt> ,  
ip_gen< self_type,Par> ,  
ip_gen< self_type,Cir> ,  
ip_gen< self_type,Sph> ,  
ip_gen< self_type,Sta> ,  
ip_gen< self_type,Drv> ,  
ip_gen< self_type,Drb> ,  
ip_gen< self_type,Drt> ,  
ip_gen< self_type,Tnv> ,  
ip_gen< self_type,Tnb> ,  
ip_gen< self_type,Tnt> ,  
ip_gen< self_type,Lin> ,  
ip_gen< self_type,Pln> ,  
ip_gen< self_type,Flp> ,  
ip_gen< self_type,Dfp> ,  
ip_gen< self_type,Dll> ,  
ip_gen< self_type,Dlp> ,  
ip_gen< self_type,Vec> ,  
ip_gen< self_type,Biv> ,  
ip_gen< self_type,Tri> ,  
ip_gen< self_type,Aff> ,  
ip_gen< self_type,Afl> ,  
ip_gen< self_type,Afp> ,  
ip_gen< self_type,Dap> ,  
ip_gen< self_type,Daf> ,  
ip_gen< self_type,Dal> ,  
ip_gen< self_type,Mnv>   
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
