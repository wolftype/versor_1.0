//
//  MV.cpp
//  vsr_static
//
//  Created by Pablo Colapinto on 8/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "vsr.h"
#include "op.h"

#include "MV.h"


namespace vsr{

//    template<int N, int IDX, class T>
//    void MV<N, IDX, T>::draw2(float r, float g, float b, float a){
//        //Draw::R(*this,r,g,b,a);
//    }

    template<int N, int IDX, class T>
    void MV<N, IDX, T>::test() { cout << "test" << endl; }


    template<int N, int IDX, class T>
    Pnt MV<N, IDX, T>::null() const { return Ro::null( mW[0], mW[1], mW[2]); }
    
    template<int N, int IDX, class T>
    typename Product< MV<N, IDX, T>, Pss, T>::GP MV<N, IDX, T>::dual() const { return Op::dl(*this); }

    template<int N, int IDX, class T>
   typename Product< MV<N, IDX, T>, Pss, T>::GP  MV<N, IDX, T>::undual() const { return Op::udl(*this); }

    template<int N, int IDX, class T>
    typename Product< MV<N, IDX, T>, Tri, T>::GP MV<N, IDX, T>::duale() const { return Op::dle(*this); }

    template<int N, int IDX, class T>
   typename Product< MV<N, IDX, T>, Tri, T>::GP  MV<N, IDX, T>::unduale() const { return Op::udle(*this); }

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
     
    template<int N, int IDX, class T> //template<class B>
    MV<N, IDX, T> MV<N, IDX, T>::dil(const Pnt& b, T v) const {
        return Op::sp( *this, Gen::dil(b,v) ); 
    }
    template<int N, int IDX, class T>
    MV<N, IDX, T> MV<N, IDX, T>::dil(T v) const {
        return  Op::sp(*this, Gen::dil(v) ); 
    }


//    #include "vsr_instantiation.cpp"
	template class MV<4,ROT,VSR_PRECISION>;
	template class MV<8,MOT,VSR_PRECISION>;
	template class MV<2,DIL,VSR_PRECISION>;
	template class MV<4,TRV,VSR_PRECISION>;
	template class MV<12,MTD,VSR_PRECISION>;
	template class MV<4,TRS,VSR_PRECISION>;
	template class MV<16,RTC,VSR_PRECISION>;
	template class MV<16,MTT,VSR_PRECISION>;
	template class MV<8,RTT,VSR_PRECISION>;
	template class MV<8,RTD,VSR_PRECISION>;
	template class MV<5,TVD,VSR_PRECISION>;
	template class MV<5,TSD,VSR_PRECISION>;
	template class MV<14,TRT,VSR_PRECISION>;
	template class MV<12,RVD,VSR_PRECISION>;
	template class MV<15,TST,VSR_PRECISION>;
	template class MV<15,TVT,VSR_PRECISION>;
	template class MV<11,BST,VSR_PRECISION>;
	template class MV<1,SCA,VSR_PRECISION>;
	template class MV<1,ORI,VSR_PRECISION>;
	template class MV<1,INF,VSR_PRECISION>;
	template class MV<1,MNK,VSR_PRECISION>;
	template class MV<2,HYP,VSR_PRECISION>;
	template class MV<1,PSS,VSR_PRECISION>;
	template class MV<5,PNT,VSR_PRECISION>;
	template class MV<10,PAR,VSR_PRECISION>;
	template class MV<10,CIR,VSR_PRECISION>;
	template class MV<5,SPH,VSR_PRECISION>;
	template class MV<9,STA,VSR_PRECISION>;
	template class MV<3,DRV,VSR_PRECISION>;
	template class MV<3,DRB,VSR_PRECISION>;
	template class MV<1,DRT,VSR_PRECISION>;
	template class MV<3,TNV,VSR_PRECISION>;
	template class MV<3,TNB,VSR_PRECISION>;
	template class MV<1,TNT,VSR_PRECISION>;
	template class MV<6,LIN,VSR_PRECISION>;
	template class MV<4,PLN,VSR_PRECISION>;
	template class MV<4,FLP,VSR_PRECISION>;
	template class MV<4,DFP,VSR_PRECISION>;
	template class MV<6,DLL,VSR_PRECISION>;
	template class MV<4,DLP,VSR_PRECISION>;
	template class MV<3,VEC,VSR_PRECISION>;
	template class MV<3,BIV,VSR_PRECISION>;
	template class MV<1,TRI,VSR_PRECISION>;
	template class MV<4,AFF,VSR_PRECISION>;
	template class MV<6,AFL,VSR_PRECISION>;
	template class MV<4,AFP,VSR_PRECISION>;
	template class MV<4,DAP,VSR_PRECISION>;
	template class MV<4,DAF,VSR_PRECISION>;
	template class MV<6,DAL,VSR_PRECISION>;
	template class MV<3,MNV,VSR_PRECISION>;


    Pnt Generic::pnt() const { return *(Pnt*)(this); }
    Par Generic::par() const { return *(Par*)(this); }
    Cir Generic::cir() const { return *(Cir*)(this); }
    Sph Generic::sph() const { return *(Sph*)(this); }

}