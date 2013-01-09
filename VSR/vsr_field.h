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
#include "vsr_stat.h"

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

    /// Info Container for Euler integration of a 2d Field
    struct Patch{
        Patch(int _a, int _b, int _c, int _d, double _rw, double _rh) 
        : a(_a), b(_b), c(_c), d(_d), rw(_rw), rh(_rh)
        {}
        
        int a, b, c, d;
        double rw, rh;
    };
    /// Info Container for Euler integration of a 3d Field
    struct VPatch{
         VPatch(int _a, int _b, int _c, int _d, int _e, int _f, int _g, int _h, double _rw, double _rh, double _rd) 
        : a(_a), b(_b), c(_c), d(_d), e(_e), f(_f), g(_g), h(_h), rw(_rw), rh(_rh), rd(_rd)
        {}  
        int a, b, c, d, e, f, g, h;
        double rw, rh, rd; 
    };
    
    /// Info Container for Quadric Interpolation
//    struct QPatch{
//        Patch(int _a, int _b, int _c, int _d, int _e, int _f, int _g, int _h, int _i , int _j, double _rw, double _rh) 
//        : a(_a), b(_b), c(_c), d(_d), rw(_rw), rh(_rh)
//        {}
//        
//        int a, b, c, d;
//        double rw, rh; 
//    };

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
        /*! Set Grid (position) Data*/ 
        Pnt& grid(int i) { return mGrid[i]; }  
        /*! Get Grid (position)  Data */      
        Pnt grid(int i) const { return mGrid[i]; }        

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
        double tw() const { return (mWidth-1) * mSpacing; }
        /*! Offset Width */
        double ow() const { return tw() / 2.0 ; }
        /*! Total Height */
        double th() const { return (mHeight-1) * mSpacing; }
        /*! Offset Height */
        double oh() const { return th() / 2.0 ; }
        /*! Total Depth */
        double td() const { return (mDepth-1) * mSpacing; }
        /*! Offset Depth */
        double od() const { return td() / 2.0 ; }//0;}//
        /*! Spatial Positions of ith element in x direction  */
        double px(int i) const { return -ow() + (mSpacing * i); }
        /*! Spatial Positions of jth element in y direction  */
        double py(int j) const { return -oh() + (mSpacing * j); }
        /*! Spatial Positions of kth element in z direction  */
        double pz(int k) const { return  od() - (mSpacing * k); }
        
        /*! Random Vector in Field*/
        Vec rand(){ 
            return Vec( px(Rand::Int(mWidth)) , py(Rand::Int(mHeight)), pz(Rand::Int(mDepth))  );         
        }

        void draw(float r = 1.0, float g = 1.0, float b = 1.0, float a = 1.0){
            for (int i = 0; i < mNum; ++i){
                GL::Draw::Render( mData[i], r, g, b, a );
            }
        }

        void drawPush(float r = 1.0, float g = 1.0, float b = 1.0, float a = 1.0){
            for (int i = 0; i < mNum; ++i){
                GL::push();
                GL::translate( mGrid[i].w() );
                GL::Draw::Render( mData[i],r,g,b,a );
                GL::pop();
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
        
        Vec range( const Vec& v){
            Vec t = v;

            double minx = px(0);
            double maxx = px(mWidth-1);
            double miny = py(0);
            double maxy = py(mHeight-1);
            double maxz = pz(0);
            double minz = pz(mDepth-1);
            
            if (t[0] < minx) t[0] = minx;
            if (t[0] > maxx) t[0] = maxx;
            if (t[1] < miny) t[1] = miny;
            if (t[1] > maxy) t[1] = maxy;
            if (t[2] < minz) t[2] = minz;
            if (t[2] > maxz) t[2] = maxz;
            
            double dx = (t[0] - minx)/tw();
            double dy = (t[1] - miny)/th();
            double dz = -(t[2] - maxz)/td();
            
            return Vec(dx,dy,dz);
            
            
        }
        
        //2d for now
        T euler2d( const Vec& v){
            Vec t = range(v);            
            return surf(t[0], t[1]);
        }
        
        T euler3d( const Vec& v){
            Vec t= range(v);
            return vol(t[0], t[1], t[2]);
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
        
        VPatch vidx(double u, double v, double w){
            double fw = u * (mWidth - 1);
            double fh = v * (mHeight - 1);
            double fd = w * (mDepth-1);
            
            int iw = floor ( fw );
            int ih = floor ( fh );
            int id = floor ( fd );
            
            double rw = fw - iw;
            double rh = fh - ih;
            double rd = fd - id;
            
            if (iw == mWidth -1) { iw = mWidth -2; rw = 1.0; }
            if (ih == mHeight -1) { ih = mHeight -2; rh = 1.0; }
            if (id == mDepth -1) { id = mDepth -2; rd = 1.0; }
            
            int a= ( idx ( iw, ih, id ) );
            int b= ( idx ( iw + 1, ih, id ) );
            int c= ( idx ( iw + 1, ih + 1, id ) );
            int d= ( idx ( iw, ih + 1, id ) );
            int e= ( idx ( iw, ih, id +1) );
            int f= ( idx ( iw + 1, ih, id +1) );
            int g= ( idx ( iw + 1, ih + 1, id +1) );
            int h= ( idx ( iw, ih + 1, id +1) );
            
            return VPatch( a, b, c, d, e, f, g, h, rw, rh, rd);
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
        
        T vol(double u, double v, double w){
            VPatch p = vidx(u,v,w);
//            T& d = *mData;
            
            T a = mData[ p.a ]; T b = mData[ p.b ]; T c = mData[ p.c ]; T d = mData[ p.d ];
            T e = mData[ p.e ]; T f = mData[ p.f ]; T g = mData[ p.g ]; T h = mData[ p.h ];
            return Interp::volume<T> (a,b,c,d,e,f,g,h, p.rw, p.rh, p.rd );
            
            //return Interp::volume<T> (d[p.a],d[p.b],d[p.c],d[p.d],d[p.e],d[p.f],d[p.g],d[p.h], p.rw, p.rh, p.rd );
        }
        
        Pnt surfGrid(double u, double v){
            
            Patch p =  surfIdx(u,v);
            
            Pnt a = mGrid[ p.a ];//gridAt ( iw, ih, 0 );
            Pnt b = mGrid[ p.b ];//gridAt ( iw + 1, ih, 0 );
            Pnt c = mGrid[ p.c ];//gridAt ( iw + 1, ih + 1, 0 );
            Pnt d = mGrid[ p.d ];//gridAt ( iw, ih + 1, 0 );
            
            return Interp::surface<Pnt> (a,b,c,d, p.rw, p.rh).null();       
        }
        
        /*! Get QUADRIC Interpolated Data at eval u,v [0-1] */
        T quadSurf(double u, double v){
            Patch p =  surfIdx(u,v);
            
        }


        vector<Vec> contour(const Vec& v, int num, double force){
            vector<Vec> vp;
            Vec tv = v;
            for (int i = 0; i < num; ++i){
                vp.push_back(tv);
                tv += euler3d(tv) * force;
            }
            return vp;
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
