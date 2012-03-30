/*
 *  Frame.cpp
 *  CONGA_07
 *
 *  Created by x on 8/26/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#include "Frame.h"

namespace vsr {

Frame :: Frame() : Touchable(),
mPos(0,0,0,1,0), mX(Drv::x), mY(Drv::y), mZ(Drv::z*-1),
mRot(1,0,0,0), mScale(1), aBiv(.9), aVec(.9), aMnk(.9), aTnv(.9), aDll(.9), aPar(.9)
{ orient(); }

Frame :: Frame(const State& p, const State& r)  : Touchable(),
mPos( p ), mX(Drv::x), mY(Drv::y), mZ(Drv::z*-1),
mRot( r ), mScale(1), aBiv(.9), aVec(.9), aMnk(.9), aTnv(.9), aDll(.9), aPar(.9)
{ orient(); }

Frame :: Frame(const State& m) : Touchable(),
mPos( Op::sp0(Ori(1),m) ), mX(Drv::x), mY(Drv::y), mZ(Drv::z*-1),
mRot( Op::sp(Rot::e12(0),m) ), mScale(1), aBiv(.9), aVec(.9), aMnk(.9), aTnv(.9), aDll(.9),  aPar(.9)
{ orient(); }


Frame Frame :: twist(const Frame& f1, const Frame& f2, double t){

	Frame fr;
		
//	Dll tdz = ( ( f1.dll() * (1-t) + f2.dll()*t  ) );
//	fr.twist( Gen::mot_dll(tdz) );
//	return fr;
	
	//or direct motors
	Dll tdz = Gen::log_mot( f2.mot() / f1.mot() ) * t;
	fr.twist( Gen::mot_dll(tdz) );
	return fr;	
}

Frame Frame :: twist(const Frame& f1, double t){
	Frame fr;			
	return Frame::twist(fr, f1, t);	
}

//Frame Frame :: xtwist{
//	Dll tdy = Gen :: log_mot ( f2.yl() / f1.yl() ) * t * .5;	
//	return fr.twist( Gen::mot_dll( tdz) );	
	//alt: construct motor from rotor and position
//	Mot f1mot =  f1.trs() * f1.rot();
//	Mot f2mot =  f2.trs() * f2.rot();
//	Mot f1mot = Gen::mot_rv(f1.rot(), Vec(f1.pos()));
//	Mot f2mot = Gen::mot_rv(f2.rot(), Vec(f2.pos()));
//	Mot f1mot =  f1.zl() / LN(0,0,-1);
//	Mot f2mot =  f2.zl() / LN(0,0,-1);
//	cout << Gen::mot_rv(f1.rot(), Vec(f1.pos())) << endl;	
//	return fr.twist( Gen::grip( f1mot, f2mot, t ) );
//}

Frame Frame :: spin(const Frame& f1, const Frame& f2, double t){
	Frame fr = f1;	
	Rot r = Gen::slerp( f1.rot(), f2.rot(), t);	
	fr.rot(r);
	Trs trs = Gen::trs( Vec(f2.pos() - f1.pos()) * t );
	fr.pos() = Op::sp( fr.pos(), trs);
	return fr;
}

void Frame :: pushPos(){
	Draw :: PushPosition ( mPos );
}

void Frame :: push(){
	Draw :: Push ( mPos, mRot, mScale );
}

void Frame :: pop(){
	Draw :: Pop();
}

void Frame :: draw(float a, float b, float c){
	push();
		mX.draw(1,0,0);
		mY.draw(0,1,0);
		mZ.draw(0,0,1);
	pop();
}

//void Frame :: printPS(){
//
//}
//
//bool Frame :: clicked(){
//	Cir c = scene().cray() ^ bound();
//	return (Ro::siz( c ) < 0 ) ? true : false;
//}
//
//
//void Frame :: clickTest(double x, double y ) {
//
//}

}