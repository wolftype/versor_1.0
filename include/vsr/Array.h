//
//  vsr_array.h
//  opengles_00
//
//  Created by Pablo Colapinto on 11/3/11.
//  Copyright 2011 x. All rights reserved.

//

#ifndef vsr_array_h
#define vsr_array_h

#include "Matrix.h"

namespace vsr {

    using namespace std;
    
//#define IT(i, x) for(int i = 0; i < x; ++i)

//An N-dimensional Array of type T
template <int N, class T>

class Array {

protected:
    
    T *       mData;             ///< Array of Elements
    T *       mPrev;
    //vector<T> mPrev;             ///< Tmp Storage
    
    int mDim[N];                ///< Index into Number in each Dimension
    
    int mSize;

    int _num() { int tot = 1; for (int i = 0; i < N; ++i) tot *= mDim[i]; mSize = tot; return tot; }
    
public:
    
    T& operator [] (int idx) { return mData[idx]; }
    T operator [] (int idx) const { return mData[idx]; }

    int dim()   const { return N; }

    int dim(int n) const { return mDim[n]; }
    int w() const { return mDim[0]; }
    int h() const { return mDim[1]; }
    int d() const { return mDim[2]; }

    int size() const { return mSize; }
    
    template <class S>
    T& at( const S& s ) { return mData[ idxOf( s ) ]; }
    template <class S>
    T at( const S& s )  const { return mData[ idxOf(s) ]; }

    T& at( int i, int j) { return mData [ idxOf( Vec2i(i,j) ) ]; }
    T at( int i, int j) const { return mData [ idxOf( Vec2i(i,j) ) ]; }
    T& at( int w, int h, int d) { return mData [ idxOf( Vec3i(w,h,d) ) ]; }
    T at( int w, int h, int d) const { return mData [ idxOf( Vec3i(w,h,d) ) ]; }
    T& at( int w, int h, int d, int a) { return mData [ idxOf( Vec4i(w, h, d, a) ) ]; }
    T at( int w, int h, int d, int a) const { return mData [ idxOf( Vec4i(w, h, d, a) ) ]; }
    
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
    
    int idxOf(int i, int j) { return idxOf( Vec2i(i,j) ); }
    int idxOf(int i, int j, int k) { return idxOf( Vec3i(i,j,k) ); }
    
    size_t stride()    const { return sizeof(T); }
    
    void alloc() { mData = new T[ _num() ]; mPrev = new T[_num()]; }
    
    Array(T* p, int n ) : mData(p), mSize(n) { }
    Array(int n)  { mDim[0] = n; alloc(); }
    Array(int w, int h) { mDim[0] = w; mDim[1] = h; alloc(); }
    Array(int w, int h, int d) { mDim[0] = w; mDim[1] = h; mDim[2] = d; alloc(); }

    T * data() const { return mData; }
    T& data(int idx) { return mData[idx]; }
    T data(int idx) const {return mData[idx]; }
    
    T& prev(int idx) { return mPrev[idx]; }
    T prev(int idx) const {return mPrev[idx]; }
    
    void swap() { T * tmp = mPrev; mPrev = mData; mData = tmp; }
    
    
//    Array& add(const T& t) { mPrev.push_back(t); return *this; }
//    
//    Array& submit() {
//        
//        if (mData) delete[] mData;
//        
//        mSize = mPrev.size();
//        
//        mData = new T[ mSize ];
//        
//        copy(mPrev, mPrev + mSize, mData); 
//    
//        return *this;
//    }
//    
//    Array& clear() {
//        mPrev.clear();
//        return *this;
//    }
//    
//    Array& store() {
//        for (int i = 0; i < size(); ++i){
//            mPrev.push_back(mData[i]);
//        }
//        return *this;
//    }
};

    
    
    // Array with Memory of Previous State
//    template <int N, class T>
//    class MemArray {
//    protected:
//            Array<N,T> mCur;
//            Array<N,T> mOld;
//    public:
//        
//    };
    
    } //vsr::
    
#endif
