/*
 *  ExpTemp.h
 *  Operation Templates for Multivectors
 *
 *  Created by Pablo Colapinto on 10/3/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef ExpTemp_H_INCLUDED
#define ExpTemp_H_INCLUDED

//#include "vsrtypes.h"


namespace vsr{
    
    template <class T>
    struct Var {
        typedef T Ret;
        T operator() ( T v ) { return v; }
    };
    
    template<class T>
    struct Con {
        typedef T Ret;
        T c;
        Con( T _c) : c(_c) {}
        T operator() (T) { return c; } //arg is thrown away, but function signature looks right
    };
    
    template<class T>
    struct Ref {
        typedef T Ret;
        Ref(T& _v) : v(_v) {} 
        T operator()(T) { return v; }
        T& v;
    };
    
    //Expression E that gets return type from 
    template <class E>
    struct Exp {
        typedef typename E::Ret Ret;
        E e;
        Exp( E expr) : e(expr) {}
        
        template<class T>
        Ret operator() ( T v ) { return e(v); }  
    };
    
    //Takes a lefthand and righthand mv and an operator (e.g. mult)
    template< class L, class H, class OP >
    struct BinExp {
        typedef typename OP::Ret Ret;
        L l;
        H h;
        BinExp( L _l, H _h) : l(_l), h(_h) {}
        
        template<class T>
        Ret operator() ( T v ) { return OP::apply( l(v), h(v) ); }
    };
    
    template<class A, class B>  
    struct GGP {
        typedef A L;  typedef B H;
        typedef typename Product<A, B, typename B::value_type>::GP Ret;
        static Ret apply (A l, B h) { return l * h; }     
    };
    template<class A, class B>  
    struct GOP {
        typedef typename Product<A, B, typename B::value_type>::OP Ret;
        static Ret apply (A l, B h) { return l ^ h; }     
    };
    template<class A, class B>  
    struct GIP {
        typedef typename Product<A, B, typename B::value_type>::IP Ret;
        static Ret apply (A l, B h) { return l <= h; }     
    };
    
    template<class A, class B >
    inline Exp< BinExp < Exp<A>, Exp<B>, GGP<typename A::Ret, typename B::Ret> > > operator * (Exp<A> a, Exp<B> b)
    {
        typedef BinExp < Exp<A>, Exp<B>, GGP<typename A::Ret, typename B::Ret> > Expr;
        typedef Exp< Expr > MExp;
        return MExp ( Expr(a,b) );
    }
    
}



#endif