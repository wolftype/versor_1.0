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
     
    template<int N, int IDX, class T> template<class B>
    MV<N, IDX, T> MV<N, IDX, T>::dil(const B& b, T v) const {
        return Op::sp(*this, Gen::dil(b,v) ); 
    }
    template<int N, int IDX, class T>
    MV<N, IDX, T> MV<N, IDX, T>::dil(T v) const {
        return  Op::sp(*this, Gen::dil(v) ); 
    }




    #include "vsr_instantiation.cpp"





}