//
//  vsr_knot.h
//  Versor
/*
    KNOTS -- building up from Dorst and Valkenburg's paper on Square Roots of Rotors and Logarithms through Polar Decomposition
*/
//  Created by Pablo Colapinto on 11/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_knot_h
#define Versor_vsr_knot_h

#include "vsr_frame.h"

namespace vsr {

//A sort of Coupled Boost


/*! Generates an Orbit around a Real, Imaginary, or Null Point Pair */
class Orbit : public Frame {
    Frame sF, mF;
    double mM, mAmt;
    bool bReal, bNull;
    public:
    
    
    
        Orbit() : Frame(), sF(PT(0,0,0)), mM(1), mAmt(.01), bReal(false), bNull(false)
        { calc(); }
    
        Orbit( const Frame& f): Frame(f), sF(PT(0,0,0)), mM(1), mAmt(.01), bReal(false), bNull(false)
        { calc(); }
                
        bool& real() { return bReal; }
        bool& null() { return bNull; }        
        double& m() { return mM; }
        double& amt() { return mAmt; }
        
        Frame& sf() { return sF; }
        Frame& mf() { return mF; }
                

        bool real() const { return bReal; }
        bool null() const { return bNull; }        
        double m() const { return mM; }
        double amt() const { return mAmt; }

        Frame sf() const { return sF; }
        Frame f() const { return mF; }        
        
        Par par() const {  return ( ( bNull ) ? mF.tx() : mF.px(bReal) ) * PI/mM ; }
        Cir cir() const { return mF.px(bReal).undual(); }
        
        void calc() {
            mF = sF;
            mF.mot( sF.mot() * mot() ); 
        }
        
        Bst bst() { return Gen::bst( par() * mAmt ); }

        Par par(const Orbit& o, double t){
            Orbit no = Frame::Twist( f(), o.f(), t );
            
            return no.par();
            //return par() * (1-t) + o.par() * t;
        }


};

class Knot : public Frame {
    
    Frame sFa, sFb;
    Frame mFa, mFb;
    
    Par mPar;

    double mM, mN;
    double mAmt, mDense;
    double mDist;
    
    bool bRealA, bRealB, bNullA, bNullB;
    
    public:
    
    Knot() : Frame(), 
    mAmt(.01), mDense(1.0), mM(2), mN(2), 
    sFa( PT(0,-.5,0) ), sFb( PT(0,.5,0) ),
    bRealA(false), bRealB(false), bNullA(false), bNullB(false) 
    { cout << mFa.scale() << endl; calc(); }
    
    double& dist() { return mDist; }
    double dist() const { return mDist; }
    double& amt() { return mAmt; }
    double amt() const { return mAmt; }    
    double& m() { return mM; }
    double& n() { return mN; }
    double m() const { return mM; }
    double n() const { return mN; }
    
    bool& ra() { return bRealA; }
    bool& rb() { return bRealB; }
    bool ra() const { return bRealA; }
    bool rb() const { return bRealB; }
    bool& ba() { return bNullA; }
    bool& bb() { return bNullB; }
    bool ba() const { return bNullA; }
    bool bb() const { return bNullB; }

    Frame& sfa() { return sFa; }
    Frame& sfb() { return sFb; }
    Frame sfa() const { return sFa; }
    Frame sfb() const { return sFb; }
    Frame& fa() { return mFa; }
    Frame& fb() { return mFb; }
    Frame fa() const { return mFa; }
    Frame fb() const { return mFb; }
    
    Par pa(bool real = false) const {  return bNullA ? mFa.tx() : mFa.px(real); }
    Par pb(bool real = false ) const { return bNullB ? mFb.tz() : mFb.pz(real); }

    Cir ca(bool real = false) const { return mFa.px(real).undual(); }
    Cir cb(bool real = false ) const { return mFb.pz(real).undual();}

    int num() { return mM * mN / mAmt; }

    void calc() { 
        sFa.pos() = PT(0,-mDist/2.0,0);
        sFb.pos() = PT(0,mDist/2.0,0);

        Mot ma = sFa.mot() * mot();
        Mot mb = sFb.mot() * mot();
        mFa.mot( ma ); mFb.mot( mb );
        mPar = pa(bRealA) * ( mM == 0 ? 0 :PI/mM ) + pb(bRealB) * (  mN == 0 ? 0 :PI/mN ); 
    }

    Par par() const { return mPar; }
    Par& par() { return mPar; }

    Par para() const { return pa(bRealA) * PI/mM; }
    Par parb() const { return pb(bRealB) * PI/mN; }
    
    //Separated out
    Bst bsta() const { return Gen::bst( para() * mAmt ); }
    Bst bstb() const { return Gen::bst( parb() * mAmt ); }
    Bst bstc() const { return bsta() * bstb(); }
    
    Bst bst() { return Gen::bst( par() * mAmt ); }

    //? not sure what this would do or should do
    Knot operator * (const Knot& k){
        
    }

    static Bst bst(const Knot& ka, const Knot& kb, double t){
        return Gen::bst( ka.par() * (1-t) + kb.par() * t );
    }
    
    
    template<class T>
    T operator () (const T& t) { return t.sp( bst() ); }
    
    
    
};

} //vsr::

#endif
