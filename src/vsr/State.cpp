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

    State State :: edual() const{
        return Op::dle(*this);
    }
    State State :: eundual() const{
        return Op::ude(*this);
    }     
    State State :: dual() const{
        return Op::dl(*this);
    }
    State State :: undual() const{
        return Op::ud(*this);
    }    
    State State :: rot( const State& biv) const {
        return Op::sp(*this, Gen::rot_biv( biv ) ); 
    }
    State State :: trs(const State& trs) const {
        return Op::sp0(*this, Gen::trs(trs) );
    }
    State State :: rot(double x, double y, double z) const {
        return Op::sp0(*this, Gen::rot_biv( Biv(x,y,z) ) ); 
    }
    State State :: trs(double x, double y, double z) const {
        return Op::sp0 (*this, Gen::trs3(x,y,z) );
    }    
    State State :: mot(const State& dll) const {
        return Op::sp(*this, Gen::mot_dll(dll) );
    }
    State State :: dil( double t) const {
        return Op::sp(*this, Gen::dil( t ) );
    }    
    State State :: dil(const State& pos, double t) const {
        return Op::sp(*this, Gen::dil_pnt(pos, t ) );
    }    
    State State :: trv( const State& tnv) const {
        return Op::sp0(*this, Gen::trv(tnv) );
    }
    State State :: trv(double x, double y, double z) const {
        return Op::sp0 (*this, Gen::trv3(x,y,z) );
    } 
    
    State State :: sp(const State& spinor)  const {
        return Op::sp0 (*this, spinor);
    }

    State State :: re( const State& versor)  const {
        return Op::re0 (*this, versor);
    }
    
    State State ::null() const {
        return Ro::null(mW[0], mW[1], mW[2]);
    }

State :: State (const State& s) : Touchable() {
        
	mIdx = s.mIdx;
	mNum = s.mNum;
	_init();
	copy(s.mW, s.mW + mNum, mW);
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
    
    //bSelected = s.isSelected();
	
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

} //vsr::

