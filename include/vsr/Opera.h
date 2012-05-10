/*
 *  Opera.h
 *  CONGA_06
 *
 *  Created by x on 5/12/10.
 *  Copyright 2010 x. All rights reserved.
 *
 
	Operations are "observers" in that they
	can be networked to each other.
	
	1) Some Operations create new States or a bunch of States
	2) Others Manipulate existing States
	3) Some "countdown" and stop executing, others loop or execute once and then turn off
	4) Some create new operations
	5) Operations can be regulated (turned on or off, or arguments adjusted) 
		by other Operations or by the main Control
	6) Some operations are "identity" operations and return the argument
	
	Dependency:
	
	The Graph class organizes dependency by containing
	a map of pointers to Operators (edges) and a map of pointers to states (nodes).
	Nodes can be connected to any number of edges.
	Each Edge points to two nodes AND potentially to other Edges that it requires
	be executed first.
 
 */

#ifndef OPERA_H_INCLUDED
#define OPERA_H_INCLUDED
#include "State.h"
#include "Op.h"
#include "vsr_mktypes.h"
#include "Field.h"

namespace con {
	//Template different Types of Function Ptrs?
	//place operations into a chain?
	
	class Opera;
	
	enum {
		_MONOFUNC,
		_MONOSCAFUNC,
		_BINFUNC,
		_TRIFUNC
	};
	
	/* Operatrions that take function pointers (Time) */
	typedef double (*sFunc)(float);
	/* Operations that take four States and Spit out a fifth */	
	typedef State (*QuadFunc)(const State&, const State&, const State&, const State&);
	/* Operations that take three States and Spit out a fourth */	
	typedef State (*TriFunc)(const State&, const State&, const State&);
	/* Operations that take two States and Spit out a Third */
	typedef State (*BiFunc)(const State&, const State&);	
	/* Operations that take one State and Spit out one */
	typedef State (*MonoFunc)( const State& );
	/* Operations that take one State and a Scalar */
	typedef State (*MonoScaFunc)( const State&, double );
	/* Operations that take just a scalar (e.g Rot::e12(double) ) */
	typedef State (*ScaFunc)( double );
	
	/* Operations that take other operations */
//	typedef Opera (*OpOp) (Opera&);
	
	/* Operations on Audio Buffer ( 2 channel in and out for now ) */
	typedef void (*AudioOp)(float*,float*,float*,float*,int);
	typedef float (*AudFil)(float*);
	typedef float (*AudGen)();
	
//	typedef Vxl (*FieldFunc)(const State&, const Field&);

	//Hook Gamma Library into this so control ramps etc of inputs, etc
	enum {
		_COUNT,
		_ONCE,
		_LOOP,
	};	
	
	class Opera : public Drawable{
		
		protected:
			bool bCalc;
			int mRet;							//Return type (set to -1 for automatic)
			int mCounter;
			int mTactic;						//Loop, Countdown, etc
		
		public:
			Opera(int tactic = _LOOP, bool calc = 1) : Drawable(), bCalc(calc), mTactic(tactic) {}
			
			vector<State*> input;
			vector<State*> output;			
			vector<void *> res;
			
			bool  calc() const	{ return bCalc; }	//On/Off
			bool& calc()		{ return bCalc; }
			
			void  off()			{ bCalc = 0; }
			void  on()			{ bCalc = 1; }
			void  toggle()		{ bCalc = !bCalc; }

			int  ret()  const	{ return mRet; }	//Return Type
			int& ret()			{ return mRet; }

			virtual void operator()() = 0;
			State& operator[] ( int n ) { return *output[n]; }
			
			virtual void drawLoop(){}				//For Diagramming to screen
			virtual void printPS(){}				//For Making Category Theory Latex Diagrams
			virtual void clickTest(double x, double y){}
	};
	
	/* Takes an Operation and Manipulates it */
	typedef void (*OpFunc)(Opera&);

	//Pass Through
	class Opera_0 : public Opera {
		public:
			Opera_0(State * s) : Opera(), a(s) { output.push_back(a); }
			State * a;
			void operator()(){} 
	};
	
	class Opera_1s : public Opera {
		public:
			Opera_1s(State * s, double * _t, MonoScaFunc f) : Opera(), a(s), t(_t), func(f) {
				b = new State(func(*a,*t));
				output.push_back(b);
			}
			State *a; double * t; State *b;
			MonoScaFunc func;
			virtual void drawLoop(){}// cout << "OP1S DOUBLE: " << *t << endl;}
			void operator()(){b ->recomp( func(*a, *t)); }
	};
	
//	class Opera_1sf : public Opera {
//		public:
//			Opera_1s(State * s, sFunc t, MonoScaFunc f) : Opera(), a(s), t(_t), func(f) {
//				b = new State(func(*a,*t));
//				output.push_back(b);
//			}
//			State *a; double * t; State *b;
//			MonoScaFunc func;
//			virtual void drawLoop(){}// cout << "OP1S DOUBLE: " << *t << endl;}
//			void operator()(){b ->recomp( func(*a, *t)); }
//	
//	};
	
	class Opera_1 : public Opera {
		public:
			Opera_1(State* s, MonoFunc f) : Opera(), a(s), func(f) { 
				b = new State(func(*a)); 
				output.push_back(b);
			}
			State * a; State * b;
			MonoFunc func;
			void operator()(){ b  ->recomp ( func(*a) ); }
	};


	class Opera_2 : public Opera {
		public:
			Opera_2(State* s1, State* s2, BiFunc f, int typ =-1 ) : Opera(), a(s1), b(s2), func(f) { 
				mRet = typ;
				if (mRet == -1) c = new State( func(*a, *b) );
				else c = new State( Mk::cxr[mRet]( func(*a,*b) ) ); 
				input.push_back(a); input.push_back(b);
				output.push_back( c );
			}

			State * a; State * b; State * c;
			BiFunc func;
			void operator()(){ 
				if (mRet == -1 ) { c -> recomp ( func(*a,*b) ); } //checks for valid return type 
				//cout << "COL: " << (*c).red() << (*c).green() << (*c).blue() << endl; } 
				else { c -> recomp ( Mk::cxr[mRet] ( func(*a,*b) ) ); }
			}
	};

	class Opera_3 : public Opera {
		public:
			Opera_3(State* s1, State* s2, State* s3, TriFunc f) : 
			Opera(), a(s1), b(s2), c(s3), func(f) { 
				d = new State(func(*a,*b,*c)); 
				output.push_back(d);
			}
			
			State * a; State * b; State * c;  State *d;
			TriFunc func;
			void operator()(){ d -> recomp ( func(*a,*b,*c) ); }
	};
	
	class Opera_4 : public Opera {
		public:
			Opera_4(State* s1, State* s2, State* s3, State* s4, QuadFunc f) : 
			Opera(), a(s1), b(s2), c(s3), d(s4), func(f) { 
				e = new State(func(*a,*b,*c,*d)); 
				output.push_back(e);
			}
			
			State * a; State * b; State * c;  State *d; State *e;
			QuadFunc func;
			void operator()(){ d -> recomp ( func(*a,*b,*c,*e) ); }
	};
	
	class Opera_2R : public Opera {
	
		public:
			Opera_2R(State* s1, State* s2, BiFunc f, State* _r) : Opera(), a(s1), b(s2), func(f), r(_r) {
				output.push_back( r );
			}
			State *a, *b, *r;  BiFunc func;
			void operator()(){ r -> recomp ( Mk::cxr[(*r).idx()] ( func(*a, *b) ) ); }
	};

	//experiment with a field of states Pnts and Bivs ( a state space )
	class Opera_1f : public Opera {
		public:
			Opera_1f ( State* state, Field<Pnt, Biv>* field ) : Opera(), a(state), b(field) {
				vox = new Vxl; *vox = (*b).vxl(*a);
				res.push_back((Vxl*)vox);
			}
			State* a; Field<Pnt,Biv>* b; Vxl * vox;//FieldFunc *f, 
			void operator()(){ *vox = (*b).vxl(*a); if(mTactic == _ONCE) off(); }
	};

}

#endif