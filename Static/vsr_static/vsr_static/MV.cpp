//
//  MV.cpp
//  vsr_static
//
//  Created by Pablo Colapinto on 8/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "MV.h"
#include "op.h"
//#include "vsr.h"

namespace vsr{

    template<int N, int IDX, class T>
    void MV<N, IDX, T>::test() { cout << "test" << endl; }


    template<int N, int IDX, class T>
    Pnt MV<N, IDX, T>::null() const { return Ro::null( mW[0], mW[1], mW[2]); }
    
    template<int N, int IDX, class T>
    typename Product< MV<N, IDX, T>, Pss, T>::GP MV<N, IDX, T>::dual() const { return Op::dl(*this); }

    template<int N, int IDX, class T>
   typename Product< MV<N, IDX, T>, Pss, T>::GP  MV<N, IDX, T>::undual() const { return Op::udl(*this); }

//    template<int N, int IDX, class T> template<class B>
//    MV<N, IDX, T> MV<N, IDX, T>::spn(const B& b) const {
//        return Op::sp(*this, b );
//    }
//
//    template<int N, int IDX, class T> template<class B>
//    MV<N, IDX, T> MV<N, IDX, T>::ref(const B& b) const {
//        return Op::re(*this, b );
//    }
        
    template<int N, int IDX, class T>
    MV<N, IDX, T> MV<N, IDX, T>::rot(const Biv& b) const {
        return Op::sp(*this, Gen::rot(b) );
    }

    template<int N, int IDX, class T>
    MV<N, IDX, T> MV<N, IDX, T>::mot(const Dll& d) const {
        return  Op::sp(*this, Gen::mot(d)); 
    }
    
    template<int N, int IDX, class T>
    MV<N, IDX, T> MV<N, IDX, T>::trs(T x, T y, T z) const {
        return  Op::sp(*this, Gen::trs(x,y,z) ); 
    }
    
    template<int N, int IDX, class T>
    MV<N, IDX, T> MV<N, IDX, T>::trv(T x, T y, T z) const {
        return  Op::sp(*this, Gen::trv(x,y,z)); 
    }
     
    template<int N, int IDX, class T> template<class B>
    MV<N, IDX, T> MV<N, IDX, T>::dil(const B& b, T v) const {
        return Op::sp(*this, Gen::dil(b,v) ); 
    }
    template<int N, int IDX, class T>
    MV<N, IDX, T> MV<N, IDX, T>::dil(T v) const {
        return  Op::sp(*this, Gen::dil(v) ); 
    }

    template<class A>
    A reverse (const A& a) { printf("reverse error! undefined for this type \n"); return a; }
    template<class A>
    A involute (const A& a) { printf("involute error! undefined for this type \n"); return a; }
    template<class A>
    A conjugate (const A& a) { printf("conjugate error! undefined for this type \n"); return a; }
    


	template class MV<4,ROT,float>;
	template class MV<8,MOT,float>;
	template class MV<2,DIL,float>;
	template class MV<4,TRV,float>;
	template class MV<12,MTD,float>;
	template class MV<4,TRS,float>;
	template class MV<16,RTC,float>;
	template class MV<16,MTT,float>;
	template class MV<8,RTT,float>;
	template class MV<8,RTD,float>;
	template class MV<5,TVD,float>;
	template class MV<5,TSD,float>;
	template class MV<14,TRT,float>;
	template class MV<12,RVD,float>;
	template class MV<15,TST,float>;
	template class MV<15,TVT,float>;
	template class MV<1,SCA,float>;
	template class MV<1,ORI,float>;
	template class MV<1,INF,float>;
	template class MV<1,MNK,float>;
	template class MV<2,HYP,float>;
	template class MV<1,PSS,float>;
	template class MV<5,PNT,float>;
	template class MV<10,PAR,float>;
	template class MV<10,CIR,float>;
	template class MV<5,SPH,float>;
	template class MV<9,STA,float>;
	template class MV<3,DRV,float>;
	template class MV<3,DRB,float>;
	template class MV<1,DRT,float>;
	template class MV<3,TNV,float>;
	template class MV<3,TNB,float>;
	template class MV<1,TNT,float>;
	template class MV<6,LIN,float>;
	template class MV<4,PLN,float>;
	template class MV<4,FLP,float>;
	template class MV<6,DLL,float>;
	template class MV<4,DLP,float>;
	template class MV<3,VEC,float>;
	template class MV<3,BIV,float>;
	template class MV<1,TRI,float>;
	template class MV<4,AFF,float>;
	template class MV<6,AFL,float>;
	template class MV<4,AFP,float>;
	template class MV<4,DAP,float>;
	template class MV<4,DAF,float>;
	template class MV<6,DAL,float>;
    




}