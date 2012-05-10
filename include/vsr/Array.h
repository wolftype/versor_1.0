//
//  vsr_array.h
//  opengles_00
//
//  Created by Pablo Colapinto on 11/3/11.
//  Copyright 2011 x. All rights reserved.

// after allo array
//

#ifndef opengles_00_vsr_array_h
#define opengles_00_vsr_array_h

#include "vsr_eval.h"

namespace vsr {

    using namespace std;
    
#define IT(i, x) for(int i = 0; i < x; ++i)

//An N-dimensional Array of type T
template <int N, class T>

class Array {

    T *       mPtr;             ///< Pointer to Elements
    
    vector<T> mVec;             ///< Vector Storage
    
    int mDim[N];                ///< Index into Number in each Dimension
    
    int mSize;

    int _num() { int tot = 1; for (int i = 0; i < N; ++i) tot *= mDim[i]; mSize = tot; return tot; }
    
public:

    int dim()   const { return N; }

    int dim(int n) const { return mDim[n]; }
    

    int size() const { return mSize; }
    
    template <class S>
    T& at( const S& s ) { return mPtr[ idxOf( s ) ]; }
    template <class S>
    T at( const S& s )  const { return mPtr[ idxOf(s) ]; }

    T& at( int i, int j) { return mPtr [ idxOf( Vec2i(i,j) ) ]; }
    T at( int i, int j) const { return mPtr [ idxOf( Vec2i(i,j) ) ]; }
    T& at( int w, int h, int d) { return mPtr [ idxOf( Vec3i(w,h,d) ) ]; }
    T at( int w, int h, int d) const { return mPtr [ idxOf( Vec3i(w,h,d) ) ]; }
    T& at( int w, int h, int d, int a) { return mPtr [ idxOf( Vec4i(w, h, d, a) ) ]; }
    T at( int w, int h, int d, int a) const { return mPtr [ idxOf( Vec4i(w, h, d, a) ) ]; }
    
    template <class S >
    int idxOf( const S& s ){
        int tot = 0;
        int mult = 1;
        for (int i = 0; i < s.size(); ++i){
            tot += s[i] * mult;
            mult *= mDim[i];
        }
        return tot;
    }
    
    
    size_t stride()    const { return sizeof(T); }
    
    void alloc() { mPtr = new T[ _num() ]; }
    
    Array(T* p, int n ) : mPtr(p), mSize(n) { store(); }
    Array(int n)  { mDim[0] = n; alloc(); }
    Array(int w, int h) { mDim[0] = w; mDim[1] = h; alloc(); }
    Array(int w, int h, int d) { mDim[0] = w; mDim[1] = h; mDim[2] = d; alloc(); }

    T * ptr() const { return mPtr; }
 //   T& ptr()        { return mPtr; }

    
    Array& add(const T& t) { mVec.push_back(t); return *this; }
    
    //questionable
    Array& submit() {
        
        if (mPtr) delete[] mPtr;
        
        mSize = mVec.size();
        
        mPtr = new T[ mSize ];
        
        copy(mVec, mVec + mSize, mPtr); 
    
        return *this;
    }
    
    Array& clear() {
        mVec.clear();
        return *this;
    }
    
    Array& store() {
        for (int i = 0; i < size(); ++i){
            mVec.push_back(mPtr[i]);
        }
        return *this;
    }
    
    typedef const float (*Mono)( float );
    
    typedef const float (*Bi)( float, float );
    
    typedef const T (*Tri)(float,float,float);
    typedef const T (*Quad)(float,float,float,float);

    typedef const T (*TMono)(float, T var);
    typedef const T (*TBi)(float,float, T var);
    typedef const T (*TTri)(float,float,float, T var);
    typedef const T (*TQuad)(float,float,float,float, T var);    
    
    template < class S, class X >
    void field( S(*e)(X) ) {
        IT(i, mSize){
            float t = 1.0 * i/mSize;
            mPtr[i] = (*e)(t);
        }
    }
    
    template < class S, class X >
    void field( S(*e)(X,X) ) {
        IT(i, dim(0)){
            IT(j, dim(1)){
                mPtr[ idxOf( Vec2i(i,j) ) ] = e( 1.0 * i / dim(0) , 1.0 * j / dim(1) );
            }
        }
    }
    
    template < class S, class X >
    void field( S(*e)(X,X,X) ) {
        IT(i, dim(0)){
            IT(j, dim(1)){
                IT(k, dim(2)){
                    mPtr[ idxOf( Vec3i(i,j,k) ) ] = e( 1.0 * i / dim(0) , 1.0 * j / dim(1), 1.0 * k/dim(2) );
                }
            }
        }        
    }
    
    void field( int plane, Mono e ) {
        IT(i, mSize){
            float t = 1.0 * i/mSize;
            mPtr[i][plane] = e(t);
        }
    }   
    
    void field( int plane, Bi e ) {
        IT(i, dim(0)){
            IT(j, dim(1)){
                mPtr[ idxOf( Vec2i(i,j) ) ][ plane ] = e(i,j);
            }
        }
    }
    
    template <class S>
    void field ( int plane, S val ){
        IT(i, size() ){
            mPtr[i][plane] = val;
        }
    }

    template<class S, class X>
    void map( S(*e)(Array, X) ){
        
    }

    template <class Func>
    void map( Func e ){
        IT(i, mSize){
            mPtr[i] = e( mPtr[i] );
        }
    }
    
    template <class S, class X>    
    void map( S(*e)(X, T) ) {
        IT(i,mSize){
            float t = 1.0 * i/mSize;
            mPtr[i] = e(t, mPtr[i]);
        }
    }
    
    
    void map( TBi e ) {
        IT(i, dim(0)){
            IT(j, dim(1)){
                mPtr[ idxOf(i,j) ] = e(i,j,mPtr[i]);
            }
        }
    }
    
    void map( TTri e ) {
        IT(i, dim(0)){
            IT(j, dim(1)){
                IT(k, dim(2)){
                    mPtr[ idxOf(i,j,k) ] = e(i,j,k, mPtr[i] );
                }
            }
        }        
    }
    
//    template<class C> 
//    size_t offset(const C& ) { return offsetOf(T, C); }
        
        //    T& at(int w, int h) { return mPtr[ idxOf(w,h) ];
        //    T at(int w, int h) const { return mPtr[ idxOf(w,h) ];
        //    int idxOf(int w, int h) {        
        //        return w + h * mDim[0];
        //    }
        //
        //    T& at(int w, int h, int d) { return mPtr[ idxOf(w,h,d) ];
        //    T at(int w, int h, int d) const { return mPtr[ idxOf(w,h,d) ];
        //    int idxOf(int w, int h, int d) {        
        //        return w + h * mDim[0] + d * mDim[0] * mDim[1];
        //    }
        //
        //    T& at(int w, int h, int d, int a ) { return mPtr[ idxOf(w,h,d,a) ];
        //    T at(int w, int h, int d, int a ) const { return mPtr[ idxOf(w,h,d,a) ];
        //    int idxOf(int w, int h, int d, int a) {        
        //        return w + h * mDim[0] + d * mDim[0] * mDim[1] + a * mDim[0] * mDim[1] * mDim[2];
        //    }
};

    } //vsr::
    
#endif
