//
//  vsr_field.h
//  Versor
//
//
//  Created by Pablo Colapinto on 11/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_field_h
#define Versor_vsr_field_h

#include "vsr.h"
#include "vsr_op.h"
#include "vsr_frame.h"
#include "vsr_draw.h"

namespace vsr{

    #define ITER \
        for (int i = 0; i < mWidth; ++i){\
            double u = 1.0 * i/mWidth;\
            for (int j = 0; j < mHeight; ++j){\
                double v = 1.0 * j/mHeight;\
                for (int k = 0; k < mDepth; ++k){\
                    double w = 1.0 * k/mDepth; \
                    int tidx = idx(i,j,k);
    
    #define ITEND }}}

    /// Info Container for Euler integration of a Field
    struct Patch{
        Patch(int _a, int _b, int _c, int _d, double _rw, double _rh) 
        : a(_a), b(_b), c(_d), d(_d), rw(_rw), rh(_rh)
        {}
        
        int a, b, c, d;
        double rw, rh;
    };

    ///  A Basic 3D Field (slowly porting this over from the now defunct vsr_lattice class)
    template < class T>
    class Field  {
    

    
        int mWidth, mHeight, mDepth, mNum;
        double mSpacing;
    
        T * mData;
        Pnt * mGrid;
        
        public:
        
        Field( int w, int h, int d, double spacing = 1.0) :
        mWidth(w), mHeight(h), mDepth(d), mSpacing(spacing)
        {
            alloc();
            init();
        }

        int w() const { return mWidth; }
        int h() const { return mHeight; }
        int d() const { return mDepth; }
        // DATA
        int num() const { return mNum; }
        /*! Allocate Memory */
        void alloc(){
            mNum = mWidth * mHeight * mDepth;
            
            if (mData) delete[] mData;
            if (mGrid) delete[] mGrid;
            
            mData = new T[mNum]; 
            mGrid = new Pnt[mNum]; 
        }
        /*! Get Index In Array */
        int idx(int i, int j, int k) const { 
            if (i > w() - 1) i = w()  -1;
            if (j > h() - 1) j = h()  -1;
            if (k > d() - 1) k = d()  -1;

            if (i < 0 ) i = 0;
            if (j < 0 ) j = 0;
            if (k < 0 ) k = 0;
            
            return i * mHeight * mDepth + j * mDepth + k; 
        }
        /*! Set Data by Index*/
        T&	operator [] (int i)	{ return ( mData[i] ); }
        /*! Get Data by Index*/						
        T	operator [] (int i) const { return mData[i]; }        
        /*! Set Data by Coordinate */
        T&  at(int w = 0, int h = 0, int d = 0) { return mData[ idx(w, h, d)  ]; }   
        /*! Get Data by Coordinate */
        T	at(int w = 0, int h = 0, int d = 0) const { return mData[ idx(w, h, d)  ]; }  
        /*! Set grid data by Coordinate */
        T&  gridAt(int w = 0, int h = 0, int d = 0) { return mGrid[ idx(w, h, d)  ]; }   
        /*! Get grid data by Coordinate */
        T	gridAt(int w = 0, int h = 0, int d = 0) const { return mGrid[ idx(w, h, d)  ]; }              

        //INITIALIZE
        void basicInit(){
            ITER
                mGrid[ tidx ]  = Ro::null( px(i),  py(j),  pz(k) ); 
                mData[ tidx ] = T( mGrid[ tidx ] );
            ITEND
        }
        //SPECIALIZE HERE
        void init(){
            basicInit();
        }
    
        /* Totals and Offsets From Center */
        /*! Total Width */
        float tw() const { return (mWidth-1) * mSpacing; }
        /*! Offset Width */
        float ow() const { return tw() / 2.0 ; }
        /*! Total Height */
        float th() const { return (mHeight-1) * mSpacing; }
        /*! Offset Height */
        float oh() const { return th() / 2.0 ; }
        /*! Total Depth */
        float td() const { return (mDepth-1) * mSpacing; }
        /*! Offset Depth */
        float od() const { return td() / 2.0 ; }//0;}//
        /*! Spatial Positions of ith element in x direction  */
        float px(int i) const { return -ow() + (mSpacing * i); }
        /*! Spatial Positions of jth element in y direction  */
        float py(int j) const { return -oh() + (mSpacing * j); }
        /*! Spatial Positions of kth element in z direction  */
        float pz(int k) const { return  od() - (mSpacing * k); }

        void draw(){
            for (int i = 0; i < mNum; ++i){
                GL::Draw::Render( mData[i] );
            }
        }
        
        /*! Indices of Line at T */
        Patch idxU(double t){
            double fw = t * (mWidth - 1);
            
            int iw = floor ( fw );
            double rw = fw - iw;
            if (iw == mWidth -1) { iw = mWidth -2; rw = 1.0; }
            
            int a = idx(iw, 0, 0);
            int b = idx(iw+1, 0, 0);
            int c = idx(iw+2, 0, 0);
            
            return Patch(a, b, 0, 0, rw, 0);
        }

        /*! Indicex of surface at u, v [0, 1]*/
        Patch surfIdx(double u, double v){
        
            double fw = u * (mWidth - 1);
            double fh = v * (mHeight - 1);
            
            int iw = floor ( fw );
            int ih = floor ( fh );
            
            double rw = fw - iw;
            double rh = fh - ih;
            
            if (iw == mWidth -1) { iw = mWidth -2; rw = 1.0; }
            if (ih == mHeight -1) { ih = mHeight -2; rh = 1.0; }
            
            int a= ( idx ( iw, ih, 0 ) );
            int b= ( idx ( iw + 1, ih, 0 ) );
            int c= ( idx ( iw + 1, ih + 1, 0 ) );
            int d= ( idx ( iw, ih + 1, 0 ) );
            
            return Patch( a, b, c, d, rw, rh);
        }

        /*! Get BILINEAR Interpolated Data at eval u,v [0-1.0] */
        T surf(double u, double v){
            
            Patch p = surfIdx(u,v);
            
            T a = mData[ p.a ];//at ( iw, ih, 0 ) ;
            T b = mData[ p.b ];//at ( iw + 1, ih, 0 );
            T c = mData[ p.c ];//at ( iw + 1, ih + 1, 0 );
            T d = mData[ p.d ];//at ( iw, ih + 1, 0 );
            
            return Interp::surface<T> (a,b,c,d, p.rw, p.rh);
        }
        
        Pnt surfGrid(double u, double v){
            
            Patch p =  surfIdx(u,v);
            
            Pnt a = mGrid[ p.a ];//gridAt ( iw, ih, 0 );
            Pnt b = mGrid[ p.b ];//gridAt ( iw + 1, ih, 0 );
            Pnt c = mGrid[ p.c ];//gridAt ( iw + 1, ih + 1, 0 );
            Pnt d = mGrid[ p.d ];//gridAt ( iw, ih + 1, 0 );
            
            return Interp::surface<Pnt> (a,b,c,d, p.rw, p.rh);       
        }

    };
    
    //SPECIALIZATIONS
    template<> Frame Field< Frame > :: surf(double u, double v){
        
        Patch p =  surfIdx(u,v);

        Dll a = mData[p.a].dll();
        Dll b = mData[p.b].dll();
        Dll c = mData[p.c].dll();
        Dll d = mData[p.d].dll();
         
        return Gen::mot( Interp::surface<Dll> (a,b,c,d, p.rw, p.rh) );
    }
//    template<>
//    void Field<Dll> :: init(){
//        ITER
//            mGrid[ tidx ]  = Ro::null( px(i),  py(j),  pz(k) ); 
//            mData[ tidx ] = T( mGrid[ tidx ] );
//        ITEND
//    }
    
//    template< class T >
//    void Field< T > :: 

    
    #undef ITER
    #undef ITEND

} //vsr::


#endif
