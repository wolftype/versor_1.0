//
//  Field.h
//  vsr
//
//  Created by Pablo Colapinto on 5/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
/*!
 
 3D Field Operations (new version of Lattice) -- inherits from Array
 adds ability to advect, project, convolve, etc.
 
 */
#ifndef vsr_Field_h
#define vsr_Field_h

#include "Array.h"
#include "vsr_gfxdata.h"
#include "vsr.h"

namespace vsr {

    template<class T>
    class Field : public Array<3,T> {
        
    protected:
        
        double mSpacing;
        
        Pnt * mGrid;
        
        Nbr * mNbr;
        
        //       Vxl * mVxl;
    public:
        
        typedef Array<3,T> A;
        
        /* Totals and Offsets From Center */
        /*! Total Width */
        float tw() const { return A::w() * mSpacing; }
        /*! Offset Width */
        float ow() const { return (A::w() - 1) * mSpacing / 2.0 ; }
        /*! Total Height */
        float th() const { return A::h() * mSpacing; }
        /*! Offset Height */
        float oh() const { return (A::h()- 1) * mSpacing / 2.0 ; }
        /*! Total Depth */
        float td() const { return A::d() * mSpacing; }
        /*! Offset Depth */
        float od() const { return (A::d() - 1) * mSpacing / 2.0 ; }//0;}//
        
        /*! Spatial Positions of ith element in x direction  */
        float px(int i) const { return -ow() + (mSpacing * i); }
        /*! Spatial Positions of jth element in y direction  */
        float py(int j) const { return -oh() + (mSpacing * j); }
        /*! Spatial Positions of kth element in z direction  */
        float pz(int k) const { return  od() - (mSpacing * k); }
        
        Pnt& grid(int i) { return mGrid[i]; }
        Pnt grid(int i) const { return mGrid[i]; }
        
        Field(int w = 1, int h = 1, int d = 1, double spacing = 1.0);
        
        void allocGrid();
        void init();
        
        /// Diffusion, passing in iterations
        void diffuse(double rate, int it = 20){
            
            for (int k = 0; k < it; ++k){
                //for each data member
                for ( int i = 0; i < A::size(); ++i ){
                    //sum neighbors
                    T tdx = sumNbrs(i);
                    //multiply by (rate / 1 + 6*rate )
                    tdx *= rate / (1 + 6*rate);
                    //add to old value
                    A::data(i) = A::prev(i) + tdx;
                }
            }
            
        }
        
        /// Reaction to some other field
        void reaction(){
            
        }
        
        Nbr& nbr(int idx) { return mNbr[idx]; }
        Nbr nbr(int idx) const { return mNbr[idx]; }
        
        Nbr makeNbr(int idx, int type){
            return Nbr(
                       //id
                       idx,
                       //x left and right
                       (type & LEFT) ? -1 : idx - A::h() * A::d(),
                       (type & RIGHT) ? -1 : idx + A::h() * A::d(),
                       //y bottom and top
                       (type & BOTTOM) ? - 1 : idx - A::d(),
                       (type & TOP) ? - 1 : idx + A::d(),
                       //z front and back
                       (type & FRONT) ? - 1 : idx - 1,
                       (type & BACK) ? - 1 : idx + 1
                       );
        }
        
        T sumNbrs ( int idx ) {
            T tdx; 
            for (int i = 1; i < 7; ++i){ 
                if (nbr(idx)[i] != -1 ) tdx += A::data( nbr(idx)[i] ); 
            }  
            return tdx; 	
        }
        
        
       // Vxl& vxl(int idx) { return mVxl[idx]; }
        
    };
    
    template<typename T>
    Field<T> :: Field(int w, int h, int d, double spacing)    
    : A(w,h,d), mSpacing(spacing) { allocGrid(); init(); }
    
    template<typename T>
    void Field <T> :: allocGrid(){
        /// Position Information
        mGrid		= new Pnt[ A::size() ];
        
        mNbr		= new Nbr[ A::size() ];                ///< Neighbor Idx Data
        
		IT3(A::w(), A::h(), A::d())									
        
        int idx = A::idxOf( i,j,k );
        
        mGrid[idx] = Ro::dls3 ( px(i), py(j), pz(k), mSpacing/2.0, 1 );
        
        //assign nbrs
        int type = 0;
        type |= (k==0) ? FRONT : 0;
        type |= (k==A::d()-1) ? BACK: 0;					
        type |= (j==0) ? BOTTOM : 0;
        type |= (j==A::h()-1) ? TOP: 0;					
        type |= (i==0) ? LEFT : 0;
        type |= (i==A::w()-1) ? RIGHT: 0;					
        
        mNbr[idx] = makeNbr(idx, type);
        
		END END END 
        
        //		mVxl		= new Vxl[mNumVxl];             ///< Voxel Idx Data
        //		mVNbr		= new Nbr[mNumVxl];             ///< Voxel Neighbor Idx Data
    }
    
    template<typename T>
    void Field<T> :: init() {
        IT(A::size())
        VAL(A::size())
        A::data(i) = T(t);
        A::prev(i) = T(t);
        cout << T(t) << endl; 
        END 
    }
    

}

#endif
