//
//  Boost.h
//  vsr
//
//  Created by Pablo Colapinto on 4/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
/*!
 
 */

#ifndef vsr_Boost_h
#define vsr_Boost_h

#include "vsr.h"

namespace vsr{
    
    class Boost {

    public:
        
       // Boost (const Par & p) { par(p); }
        
        // The elements
        Biv mBiv;    ///< Bivector Element
        Drv mDrv;    ///< Direction Vector Element
        Tnv mTnv;    ///< Tangent Element
        Mnk mMnk;    ///< Minkowski Element
        
        Par par() { return Par( mBiv[0], mBiv[1], mBiv[2], mTnv[0], mTnv[1], mTnv[2], mDrv[0], mDrv[1], mDrv[2], mMnk[0] ); }

        Boost& par( const Par& p ) {
            mBiv = Biv(p);
            mDrv = Drv(p);
            mTnv = Tnv(p);
            mMnk = Mnk(p);
            return *this;
        }

        Boost& mod( double b, double t, double d, double m ) {
            return biv(b).tnv(t).drv(d).mnk(m);
        }
        
        Par par(double t) { return par() * t; }
        
        Bst bst() { return Gen::trv( 1, par() ); }
        Bst bst(double t) { return Gen::trv( 1, par(t) ); }
        Bst bst(double a, double t) { return Gen::trv( a, par(t) ); }
        
        Cir cir() { return par().dual(); }
        
        
        Biv& biv() { return mBiv;}
        Tnv& tnv() { return mTnv; }
        Drv& drv() { return mDrv; }
        Mnk& mnk() { return mMnk; }
        Boost& biv( const Biv& b ) { mBiv = b; return *this; }
        Boost& tnv( const Tnv& t ) { mTnv = t; return *this; }
        Boost& drv( const Drv& d ) { mDrv = d; return *this; }
        Boost& mnk( const Mnk& m ) { mMnk = m; return *this; }
        Boost& biv( const double& b ) { mBiv *= b; return *this; }
        Boost& tnv( const double& t ) { mTnv *= t; return *this; }
        Boost& drv( const double& d ) { mDrv *= d; return *this; }
        Boost& mnk( const double& m ) { mMnk *= m; return *this; }
        
    };
    
    class CoupledBoost {
        
        Boost mBoost[3];
        
        public:
        
        CoupledBoost() {
           //mBoost[0] = 
        }
    };
    
    struct SpectralBoost{
      
        /// BASES
        Biv b[3] = {Biv::xy, Biv::xz, Biv::yz}; 
        Tnv t[3] = {Tnv(1,0,0), Tnv(0,1,0), Tnv(0,0,1)};
        Drv d[3] = {Drv(1,0,0), Drv(0,1,0), Drv(0,0,1)};
        Mnk m;
        
        Boost gen(){
            
        }
        
    };
}

#endif
