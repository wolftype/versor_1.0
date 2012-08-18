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

#include "vsr_templates.h"

namespace vsr {

using namespace std;

#define IT(n) for(int i = 0; i < (n); ++i)

//Foreward declaration of MV class
template< int NUM, int IDX, class T > class MV;

    
template<class A, class B, class T>
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

//Predeclare Template Friends
template< int NUM, int IDX, class T >
std::ostream& operator << ( std::ostream& os, MV< NUM, IDX, T > a );

//Predeclare FUNCTION templates
template<class R, class T>
R cast ( const T& );



template < int N, int IDX, class T >
class MV {

	T mW[N];	
	
public:
	
    typedef MV<N,IDX,T> self_type;
    typedef T value_type;
    
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
    template<class U>
    MV(const U& u) { set(u); }
    
    template <class T2>
    MV& set(const MV<N, IDX, T2>& mv){
        IT(N) { (*this)[i] = mv[i]; }
        return *this;
    }
    
    template <int N2, int IDX2, class T2>
    MV& set(const MV<N2, IDX2, T2>& mv) {
        IT(N<N2 ? N:N2) { (*this)[i] = mv[i]; } 
        return *this;
    }
    
    //CASTING e.g. Biv b = rot;  or (Biv)rot;
//    template< class A >
//    operator A() { return cast< A, self_type > ( *this ); }
    
    template< class A >
    MV& operator = ( const A& a) { return cast< self_type, A > ( a ); } 
	
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
   

//    operator void*() { return *this; }

    //MULT
    template<class B>
    typename Product<self_type, B, T>::GP operator * ( const B& rh ) { return gp ( *this, rh ); }

    template<class B>
    typename Product<self_type, B, T>::OP operator ^ ( const B& rh ) { return op ( *this, rh ); }

    template<class B>
    typename Product<self_type, B, T>::IP operator <= ( const B& rh ) { return ip ( *this, rh ); }
    
    
    //ADD/SUB
    MV operator += (const MV& rh) { IT(N){ (*this)[i] += rh[i]; } return *this; }
    MV operator + ( const MV& rh) { return MV(*this) += rh; }
    
    MV operator -= (const MV& rh) { IT(N){ (*this)[i] -= rh[i]; } return *this; }
    MV operator - ( const MV& rh) { return MV(*this) -= rh; }
    
    
    string name() { return Idx<IDX>::name; }
//	
//    T * begin()  const  { return &(mW[0]); }
//    T& last()  const { return mW + size; }
    
	//ONE TO ONE TEMPLATE FUNCTION PRETTY PRINTING
	friend std::ostream& operator << <> (  std::ostream& os, self_type a );
		
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
