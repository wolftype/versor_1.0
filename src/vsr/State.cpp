/*
 *  State.cpp
 *  CONGA
 *
 *  Created by x on 3/15/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#include "State.h"
#include "Op.h"
#include "CongaHeaders.h"

namespace vsr {

using namespace std;

//Assign State :: assign;
//Revers State :: involut;
//Revers State :: revers;
//Revers State :: conjug;

//bool	State :: sBound = 0;

//Query Types Produced
State State :: gpr(int a, int b){ 
	int tdx = a * Conga::Line().numGP() + b ;
	int _idx = Conga::Line().gp_idx(tdx);
	int n = Conga::Line().gp_num(_idx);
	return State( n , _idx );
}

State State :: opr(int a, int b){ 
	int tdx = a * Conga::Line().numOP() + b;
	int _idx = Conga::Line().op_idx(tdx);
	int n = Conga::Line().op_num(_idx);
	return State( n , _idx );
}

State State :: ipr(int a, int b){ 
	int tdx = a * Conga::Line().numIP() + b;
	int _idx = Conga::Line().ip_idx(tdx);
	int n = Conga::Line().ip_num(_idx);
	return State( n , _idx );
}

State State :: type(int _idx){
	int n = Conga::Line().gp_num(_idx);
	return State(n, _idx);
}

//void State :: sBind(){
//	if(!sBound ){
	  //for(int i = 0; i < 29; ++i){
//		Conga::Line().bindDouble("conga_reverse_fn",  &revers.ptr.get);
//		Conga::Line().bindDouble("conga_involute_fn", &involut.ptr.get);
//		Conga::Line().bindDouble("conga_conjugate_fn", &conjug.ptr.get);
	  //}
//	  sBound = true;
//	}
//}

State :: State (const State& s) {
//	cout << "State Copy Constructor" << endl;
	
	mIdx = s.mIdx;
	mNum = s.mNum;
//	mR = s.mR; mG = s.mG; mB = s.mB;
	_init();
//	_reinit();
	copy(s.mW, s.mW + mNum, mW);
	//delete[] s.mW; 
}

State :: ~State() { 
	delete[] mW; 
}


State& State :: operator = (const State& s) {

//	cout << "State Assignment " << endl;

	if (this == &s) return *this;	
	delete[] mW;
	
	mIdx = s.mIdx;
	mNum = s.mNum;
//	mR = s.mR; mG = s.mG; mB = s.mB;
	_init();
//	_reinit();
	copy(s.mW, s.mW + mNum, mW); 
	
	return *this;
}

State State :: operator * (const State& s) const {

	//Get Idx of Dylib Function
	int tdx = mIdx * Conga::Line().numGP() + s.idx();
	//Create a state with n doubles, New Idx (determined by tdx)
	int _idx = Conga::Line().gp_idx(tdx);
	int n = Conga::Line().gp_num(_idx);
	
	_zerobuf(n);	
	return State( Conga::Line().gp( tdx, w(), s.w(), BUFFER ), n , _idx ) ;
}

State& State :: operator *= (const State& s) {
	*this = *this * s;
	return *this;
}

State State :: operator ^ (const State& s) const {
	//Get Idx of Dylib Function
	int tdx = mIdx * Conga::Line().numOP() + s.idx();
	//Create a state with n doubles, New Idx (determined by tdx)
	int _idx = Conga::Line().op_idx(tdx);
	int n = Conga::Line().op_num(_idx);

	_zerobuf(n);	
	return State ( Conga::Line().op( tdx, w(), s.w(), BUFFER ), n , _idx );
}

State State :: operator <= (const State& s) const {
	//Get Idx of Dylib Function
	int tdx = mIdx * Conga::Line().numIP() + s.idx();
	//Create a state with n doubles, New Idx (determined by tdx)
	int _idx = Conga::Line().ip_idx(tdx);
	int n = Conga::Line().ip_num(_idx);

	_zerobuf(n);	
	return State ( Conga::Line().ip( tdx, w(), s.w(), BUFFER ), n , _idx );
}

State State :: operator + (const State& s) const {	
	_zerobuf(mNum);
	for (int i = 0; i<mNum; ++i){ BUFFER[i] = mW[i] + s[i]; }
	return 	State (BUFFER, mNum, mIdx);
}

State State :: operator - (const State& s) const {
	_zerobuf(mNum);
	for (int i = 0; i<mNum; ++i){ BUFFER[i] = mW[i] - s[i]; }
	return 	State(BUFFER, mNum, mIdx);
}

State& State :: operator += (const State& s)  {	
	for (int i = 0; i<mNum; ++i){ mW[i] += s[i]; }
	return *this;
}

State& State :: operator -= (const State& s)  {
	for (int i = 0; i<mNum; ++i){ mW[i] -= s[i]; }
	return *this;
}

bool State :: operator == (const State& s) const {
	
	int t = num() <= s.num() ? num() : s.num();
	int n = memcmp( mW, s.w(),  t * sizeof(double) );
	
	if (n!=0) return false;
	else return true;
}

bool State :: operator > (double s) const {
	return true;
}

bool State :: operator < (double s) const {
	return true;
}

State& State :: error() {	
	for (int i = 0; i < mNum; ++i){
		
		if( isnan(mW[i] ) ) {//(mW[i] < FPERROR) && (mW[i] > FPERROR) ){
			mW[i] = 0;
		}		
	}
	
	return *this;
}

bool State :: operator != (const State& s) const {

	int n = memcmp( mW, s.w(), num() <= s.num() ? num() : s.num() );
	
	if (n) return true;
	return false;
}

} //con

//void State :: drawLabel(double _x, double _y, double _z){
//	//Checks to see that state has registered with Scene
//	if(mScene){	
//	Vec w = screenCoord(_x,_y,_z);
////	glColor3f(1,0,0);
//	glv::draw::push2D(mScene -> w, mScene ->h);
//		glTranslated(w[0], mScene -> h - w[1], 0);
////		glColor3f(1,1,1);
//		glv::draw::text( name().c_str() );
//		if( isSelected() ) {
//			glColor3f(1,0,0);
//			glScaled(10,10,10);
//			Glyph::Circle();
//		}
//	glv::draw::pop2D();	
//	}
//}
//
//
//void State :: drawLoop(){
//
//	glPushMatrix();
//	
//	color4();
//	glNormal3f(0, 0, 1);
//
//	switch(mIdx){
//	
//		case _VEC:
//		{
//			Glyph::Dir( *this );
//			break;
//		}
//		
//		case _DRV:
//		{
//			Glyph::Arr( *this );
//			break;
//		}
//		
//		case _BIV:
//		{
//			
//			Vec4<> t = Op::aa( Op::ratio( Vec::z, Op::dle( *this ).unit() ) );
//			
//			double s = norm(); 
//			bool sn = Op::sn(*this, Biv::xy);
//			
//			glRotated(t.w, t.x, t.y, t.z);
//			
//			Glyph::DirCircle(s, sn);
//			//Glyph::Circular(s, sn);
//			
//			break;
//		}
//		
//		case _DRB:
//		{
//			
//			break;
//		}
//		case _TRI:
//		{
//			break;
//		}						
//		case _PNT:
//		{
//			//Point
//			//Glyph::Point(*this);
//			Pnt p = Ro::cen(*this);
//			Glyph::Point(p);
//
//			//if (bLabel) drawLabel(p[0], p[1], p[2]);
//			
//			//Sphere (if radius not 0);
//			double s = Ro::siz(*this);
//			if (s!=0){
//				double t = sqrt ( fabs ( s ) );;
//				bool real = s > 0 ? 1 : 0;			
//				glTranslatef(p[0], p[1], p[2]);
//				(real) ? Glyph::SolidSphere(t) : Glyph::Sphere(t);	
//			}					
//			break;
//		}
//		
//		case _PAR:
//		{
//			std::vector<Pnt> pp = Ro::split(*this);
//			
//			pp[0].color(mR, mG, mB,mA); 
//			pp[1].color(mR, mG, mB,mA);
//			pp[0].draw();
//			pp[1].draw();
//			
//			Pnt p = Ro::cen(*this);
//			drawLabel(p[0], p[1], p[2]);
//			
//			break;
//		}
//		
//		case _CIR:
//		{
//			Biv b = Biv(Ro::dir(*this));
//			Rot r = Op::ratio(Vec::z, Op::dle( b ).unit() );  //can this be done directly to Biv b?
//			Pnt v = Ro::cen(*this);	
//			
//			//drawLabel(v[0], v[1], v[2]);
//							
//			double siz = Ro::siz(*this);
//			double rad = Ro::rad(*this);
//			Vec4<> t = Op::aa(r);
//			bool sn = Op::sn(b, Biv::xy);
//			
//			glTranslated(v[0],v[1],v[2]);
//			glRotated(t.w, t.x, t.y, t.z);
//
////			/* Is it imaginary */
//			bool im = siz > 0 ? 1 : 0;
//			if(mStyle) {
//				if (mStyle & Style::FILL) (im==1) ? Glyph::DirFillCircle(rad, sn, getStyle(Style::ANIMATE) ) : Glyph::DirDashedCircle(rad,sn,getStyle(Style::ANIMATE));
//				if (mStyle & Style::OUTLINE)(im==1) ? Glyph::DirCircle(rad, sn,getStyle(Style::ANIMATE) ) : Glyph::DirDashedCircle(rad,sn,getStyle(Style::ANIMATE));
//			} else { //default case
//				im ? Glyph::DirCircle(rad,sn) : Glyph::DirDashedCircle(rad,sn);
//			}
//			//siz > 0 ? Glyph::DirSegment(2.0 * PI/rad , rad, sn ) : Glyph::DirSegment(2.0 * PI/rad , rad, sn );
//			break;
//		}
//		case _SPH:
//		{
//			Dls s = Op::dl(*this);
//			Pnt p = Ro::cen(s);
//			Glyph::Point(p);
//			//cout << "THIS: " << *this << "CENTER" << p << endl;	
//			drawLabel(p[0], p[1], p[2]);
//			
//			//Sphere (if radius not 0);
//			double st = Ro::siz(*this);
//			double t = sqrt ( fabs ( st ) );;
//			bool real = st > 0 ? 1 : 0;			
//			glTranslatef(p[0], p[1], p[2]);
//			real ? Glyph::SolidSphere(t,20,20) : Glyph::Sphere(t,20,20);			
//			break;
//		}
//		case _PLN:
//		{
//			Drv d	= Fl::dir(*this);
//			Sph v	= Fl::loc(*this, Ori(1) );
//			Rot r = Op::ratio( Vec::z, Op::dle( Biv(*this) ).unit() );
//			glTranslated(v[0],v[1],v[2]);
//			glMultMatrixd(&(Op::mat(r)[0][0]));
//			Glyph::Rect();			
//			break;
//		}
//		case _DLP:
//		{
//			Drv d	= Fl::dir(*this , 1 );
//			Sph v   = Fl::loc(*this, Ori(1), 1 );
//			Rot r = Op::ratio( Vec::z, Vec(*this).unit() );
//			Vec4<> t = Op::aa(r);
//			glTranslated(v[0],v[1],v[2]);
//			Glyph::Pin(Vec(mW[0], mW[1], mW[2]));
//			glRotated(t.w, t.x, t.y, t.z);
//			Glyph::DottedRect();			
//			break;
//		}
//		case _LIN:
//		{
//			Drv d	= Fl::dir(*this);
//			Sph v	= Fl::loc(*this, Ori(1) );
//			glTranslated(v[0],v[1],v[2]);
//			Glyph::Line(d * 10, d * -10);			
//			break;
//		}
//		case _DLL:
//		{
//			Drv d = Fl::dir(*this,1);
//			Sph v = Fl::loc(*this, Ori(1), 1);
//			glTranslated(v[0],v[1],v[2]);
////			Rot r = Op::ratio(Vec::z, Vec(d).unit() );
////			Vec4<> t = Op::aa(r);
////			glRotated(t.w, t.x, t.y, t.z);
//			Glyph::Line(d * 10, d * -10);			
//			break;
//
//		}
//		case _ROT:
//		{
//			//cout << "draw rot: " << endl;
//			break;
//		}			
//	}	
//	glPopMatrix();
//}
//
////passing in space coordinates
//void State :: clickTest( double x, double y ) {
//
////		Pnt mp = Ro::null(Vec(x,y,z));
//		Vec mp(x,y,0);
//		
//		switch(mIdx){
//	
//		case _VEC:
//		{
//			break;
//		}
//		
//		case _DRV:
//		{
//			break;
//		}
//		
//		case _BIV:
//		{						
//			break;
//		}
//		
//		case _DRB:
//		{
//			
//			break;
//		}
//		case _TRI:
//		{
//		
//		}
//			break;
//			
//		case _PNT:
//		case _PAR:
//		case _CIR:
//		{
//			double t = Ro::siz(*this);
//			Pnt p = Ro::loc(*this);	
//			Vec w = screenCoord(p[0], p[1], p[2]);
//			w[2] = 0;
//			
//			Pnt q1 = Ro::null(mp);
//			Pnt q2 = Ro::null(w);
//			cout << mp << endl;
//			
//			cout << "SCREEN COORD: " << w << endl;
//			
//			if ( fabs(Op::sca( q1 <= q2 )) < (t + 20) ){
//				selectToggle();
//				if(bSelected) {
//				
//				}
//			}
//			break;
//		}
//
//		case _PLN:
//		{
//			Sph v	= Fl::loc( *this, Ori(1) );
//			break;
//		}
//		case _DLP:
//		{
//			Sph v   = Fl::loc(*this, Ori(1), 1 );
//			break;
//		}
//		case _LIN:
//		{
//			Sph v	= Fl::loc(*this, Ori(1) );
//			break;
//		}
//		case _DLL:
//		{
//			Sph v = Fl::loc(*this, Ori(1), 1);
//			break;
//
//		}
//		case _ROT:
//		{
//			break;
//		}
//			
//	}
//	
//	
//
//
//}
