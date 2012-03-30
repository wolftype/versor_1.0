/*
 *  State.h
 *  CONGA
 *
 *  Created by x on 3/15/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

/*
State Class holds 
indexing info, 
an array of doubles 
and operators for
changing States 
*/
#ifndef STATE_H_INCLUDED
#define STATE_H_INCLUDED

#define MAXMV 32

#include <iomanip>
#include "Conga.h"
#include "Matrix.h"
#include "Draw.h"
#include "Drawable.h"

//#include "Multivector.h"

namespace vsr {

using namespace std;

static double * BUFFER = new double[MAXMV];


//Pointer to Operation Node Handlered by Observer class
/*! 
State is the base class for all Multivectors.
State handles most operator overloads, including
[], *, /, etc.  as well as indexing into the functions
contained within the libconga dynamic library.
idx() returns the idx of the state for such operative
purposes.

TO DO: 

1- assignments are currently handled by the individual
subclasses.  Would be nice to be able to say Pnt(Vec(x,y,z), Hyp(no,ni))
to create one Point, instead of the jerry rig system of copying etc.

2- all this should really be templated differently.  currently each instantiation
requires a new double[n] call which slows things down (too much dynamic memory
allocation)

3 - Intense compile times every time I make a note here . . .
*/
    
    
    class State : public Touchable {//public Drawable {

	protected:
	
		//index (for navigating function table)
		int mIdx;		
		//weights of bases
		double *mW;
		//number of bases
		int mNum;
		//is dual?
		bool bDual;
    
		//zero out
		void _zero() { fill( mW, mW+mNum,0 ); }
		//zero out n places of static buffer
		void _zerobuf(int n) const { fill (BUFFER, BUFFER+n, 0); } 
		
		virtual void _init() {
			mW = new double [mNum]; _zero();
		}
	
	public:
	
		State () : Touchable(), mNum(0), mIdx(0), bDual(0) { _init(); }
		State (int _size, int _idx) :  Touchable(), mNum(_size), mIdx(_idx), bDual(0) { _init(); }
		State (int _idx) :  Touchable(), mIdx(_idx), bDual(0){}			

		State (const State& s);
		
		State (double * r, int _size, int _idx) :  Touchable(), mNum(_size), mIdx(_idx), bDual(0) {
			_init();
			copy(r, r+mNum, mW);
		}

        State& operator = (const State& s);
		
		//refill doubles with values from s
		void recomp(const State& s) { for (int i = 0; i < num(); ++i) mW[i] = s[i]; }
		//zero out 
		void zero() { _zero(); }
		
		//fperror avoidance
		State& error();

		virtual ~State();
		
		/* New States */
		State operator	*	(const State&) const;
		State operator	^	(const State&) const;
		State operator	<=	(const State&) const;		
		State operator	+	(const State&) const;
		State operator	-	(const State&) const;

		State& operator	*=	(const State&);		
		State& operator +=  (const State&);
		State& operator -=  (const State&);
		
		//comparison
		bool operator == (const State&) const;
		bool operator != (const State&) const;
		bool operator > (double) const;
		bool operator < (double) const;
		
		State operator * (double s) const {
			//_zerobuf(mNum);
			for (int i =0; i < mNum; ++i) BUFFER[i] = mW[i] * s;
			return State(BUFFER, mNum, mIdx);
		}
		
		State operator / (double s) const {
			//_zerobuf(mNum);
			for (int i =0; i < mNum; ++i) BUFFER[i] = mW[i] / s;
			return State(BUFFER, mNum, mIdx);
		}
		
		State operator - (double s) const {
			//_zerobuf(mNum);
			for (int i =0; i < mNum; ++i) BUFFER[i] = mW[i] - s;
			return State(BUFFER, mNum, mIdx);
		}
		
		State operator + (double s) const {
			//_zerobuf(mNum);
			for (int i =0; i < mNum; ++i) BUFFER[i] = mW[i] + s;
			return State(BUFFER, mNum, mIdx);	
		}
		
		State& operator *= (double s) {
			for (int i =0; i < mNum; ++i) mW[i] *= s;
			return *this;
		}
		
		State& operator /= (double s) {
			for (int i =0; i < mNum; ++i) mW[i] /= s;
			return *this;
		}
		
		State& operator += (double s) {
			for (int i =0; i < mNum; ++i) mW[i] += s;
			return *this;
		}
		
		State& operator -= (double s) {
			for (int i =0; i < mNum; ++i) mW[i] -= s;
			return *this;
		}
		
		State operator -() const {
			State sr = (~(*this));
			State s = (*this) * sr;
			if (s[0] == 0 ) return sr;
			return (  sr / s[0] ); 
		}
		
		State operator !() const {
			State sr = (~(*this));
			State s = (*this) * sr;
			if (s[0] == 0 ) return sr;
			return (  sr / s[0] ); 
		}
		
		/*! Division (multiplication by inverse) */
		State operator / ( const State& s ) const { return (*this) * -s; }
		
		/*! Commutator Differential (satifies Jacobian Identity ) */
		State operator % ( const State& s ) const { return ( (*this) * s - s * (*this) ) * .5; }
		
		State operator ~() const {
			_zerobuf(mNum);
			return State ( Conga::Line().reversion(mIdx, w(), BUFFER ), mNum, mIdx );		
		}
		
		State involute() const {
			_zerobuf(mNum);
			return State ( Conga::Line().involution(mIdx, w(), BUFFER ), mNum, mIdx );		
		}
		
		State conjugate() const {
			_zerobuf(mNum);
			return State ( Conga::Line().conjugation(mIdx, w(), BUFFER ), mNum, mIdx );		
	
		}
			
		
		//Self operations
		State  dot() const { return (*this) <= (*this); }
		State  rdot() const { return (*this) * ~(*this); }
		double wt()  const { return dot()[0]; }
		double sqwt() const { double s = dot()[0]; return sqrt(s * s); }
		double rwt() const { return rdot()[0]; }
		double norm() const { double a = rwt(); if(a<0) return 0; return sqrt( a ); }
		double rnorm() const { double a = rwt(); if(a<0) return -sqrt( -a ); return sqrt( a ); }
		State unit() const { double t = sqrt( fabs( dot()[0] ) ); if (t == 0) return State(); return *this / t; }
		State runit() const { double t = rnorm(); if (t == 0) return State(); return *this / t; }
		
        
        State dual() const;
 		bool isDual() { return bDual; }
		void duality(bool b) { bDual = b; }

        State rot(const State& biv) const;
        State trs(const State& trs) const;
        State mot(const State& mot) const;
        State dil(double t) const;
        State dil(const State& dil, double t) const;
        State trv(const State& tnv) const;
        
		State sp(const State& spinor) const;
        State re(const State& versor) const;
        
        State null() const;
        
		//Returns empty state return type of operation
		static State gpr(int, int);
		static State opr(int, int);
		static State ipr(int, int);		
		static State type(int);
								
		/* GET */
		int idx() const { return mIdx; }
		int num() const	{ return mNum; }
		double * w() const { return mW;   }
		double& operator[] (int i) { return mW[i]; }
		double operator[] (int i) const { return mW[i]; }
		string type() const { return Conga::Line().gp_nm( idx() ); }
		//void name(string c) { mName = c; }
		
		//ADD ONS (Unneeded STATICS)
		/* Name of Basis at ith index */
		char * bladeAt(int i) const { return Conga::Line().ba_nm( Conga::Line().ba_idx(idx(), i ) ); }
		/* Indx of Base */
		int baseIdx(int _idx) const { return Conga::Line().ba_idx(mIdx, _idx );      }
		/* Where is basis */
		int idxBase(int _idx) const { for (int i = 0; i < mNum; ++i) if ( baseIdx(i) == _idx) return i; }
		/* Dimension of ith Base */
		int gradeOf(int _idx) const { return Conga::Line().ba_gr( baseIdx( _idx) );  }
		/* Grade */
		int grade() const { return gradeOf(0); }
		/* Factorized ith Base of jth Basis  */
		int factOf(int _idx, int i) const { return Conga::Line().ba_fa( baseIdx( _idx), i ); }
		/* Nane of ith Base */
		string nameOf(int _idx) const { return Conga::Line().ba_nm(baseIdx(_idx));   }				
		
        /* Printing */
		friend ostream& operator << (ostream&, const State&);
		
		virtual void draw(){ draw(1,1,1); }
        virtual void draw(float r, float g, float b, float a = 1.0){ Draw::S(*this,r,g,b,a); }
//		void clickTest(double x, double y){ Draw::clickTest(*this, x, y, 0); }
    

};

//
inline ostream& operator << (ostream& os, const State& s){
	os << "IDX: " << s.idx() << " NAME: " << 
	s.type() << " NUM: " << s.num() << "\n";
	//os << Conga::Line().gp_nm( s.idx() ) << "\n";
	
	os << "bases: \n";
	for (int i = 0; i < s.num(); ++i){
		os << setprecision(3) << setw(10) << s[i];
	}
	os << "\n";
	for (int i =0; i < s.num(); ++i){
		os << setw(10) << s.bladeAt(i); 
	}
	os << "\n";
	return os;
}

}

#endif