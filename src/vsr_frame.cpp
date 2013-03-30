/*
 *  Frame.cpp
 *  CONGA_07
 *
 *  Created by x on 8/26/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#include "vsr.h"
#include "vsr_frame.h"

namespace vsr {

Frame :: Frame() : 
mPos(0,0,0,1,0),// mX(Drv::x), mY(Drv::y), mZ(Drv::z*-1),
mRot(1,0,0,0), mScale(1), aBiv(.9), aVec(.9), aMnk(.9), aTnv(.9), aDll(.9), aPar(.9)
{ orient(); }


Frame :: Frame(const Pnt& p)  : 
mPos( p ), //mX(Drv::x), mY(Drv::y), mZ(Drv::z*-1),
mRot(1,0,0,0), mScale(1), aBiv(.9), aVec(.9), aMnk(.9), aTnv(.9), aDll(.9), aPar(.9)
{ orient(); }

Frame :: Frame(const Pnt& p, const Rot& r)  : 
mPos( p ), //mX(Drv::x), mY(Drv::y), mZ(Drv::z*-1),
mRot( r ), mScale(1), aBiv(.9), aVec(.9), aMnk(.9), aTnv(.9), aDll(.9), aPar(.9)
{ orient(); }

Frame :: Frame(const Mot& m) : 
mPos( Op::sp(PAO,m) ), //mX(Drv::x), mY(Drv::y), mZ(Drv::z*-1),
mRot( m ), mScale(1), aBiv(.9), aVec(.9), aMnk(.9), aTnv(.9), aDll(.9),  aPar(.9)
{ orient(); }


Frame :: Frame(const Dll& dll) : 
mScale(1), aBiv(.9), aVec(.9), aMnk(.9), aTnv(.9), aDll(.9),  aPar(.9)
{ 
    Mot m = Gen::mot(dll);
    mPos = Op::sp(PAO,m);
    mRot = m;
    orient(); 
}


Frame Frame :: Twist(const Frame& f1, const Frame& f2, double t){

    Dll tdz = f1.dll() * (1-t) + f2.dll() * t;    
            	
	return Frame( Gen::mot(tdz) );	
}

Frame Frame :: twist(const Frame& f1, double t){
	Frame fr;			
	return Frame::Twist(fr, f1, t);	
}

Frame Frame :: spin(const Frame& f1, const Frame& f2, double t){
	Frame fr = f1;	
	Rot r = Gen::slerp( f1.rot(), f2.rot(), t);	
	fr.rot(r);
	Trs trs = Gen::trs( Vec(f2.pos() - f1.pos()) * t );
	fr.pos() = Op::sp( fr.pos(), trs);
	return fr;
}

}