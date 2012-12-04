/*
 *  MotorCouple.h
 *  CONGA_07
 *
 *  Created by x on 1/20/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

#ifndef MOTOR_COUPLE_H_INCLUDED
#define MOTOR_COUPLE_H_INCLUDED

#include "vsr.h"
#include "vsr_op.h"
#include "vsr_draw.h"
#include  <iostream>

namespace vsr {

	/*! Decomposed Dual Line (As a Bivector and Direction Vector  to it ) */
	class Twist{
	
		//Biv mBiv; /// Direction and Spin (length)
		//Drv mDrv; /// Moment (length) and Pitch
		
		Biv mBiv;   ///< Stores unit Bivector
		Drv mDrv;   ///< Stores unit Direction Vector (support vector)
		Dll mDll;	///< The Dual Line Axis
		
		double mExt;  ///< Extrapolation Parameter
		
		public:
		
			Twist() : mExt(1){
				//Default one unit up per half turn
				//Mot m = Gen::trs3(0,1,0) * Gen::rot( Biv(0,PI/2.0,0) );
				//m /= m.rnorm();				
				//dll( Gen::log_mot(m) );
				
				//dll( Dll(0,1,0,0,-1,0) );
				mBiv = Biv(0,1,0);
				mDrv = Drv(0,-1,0);
				mDll = Dll(0,1,0,0,-1,0);
			}
			
			//pass in 3d axis
            template<class T>
            Twist(const T& axis) : mExt(1) {
				Biv b = Op::dl(axis);
				Drv d = axis * -1 ;
				mBiv = b;
				mDrv = d;
				dll( b, d );
			}
			
			Twist(double x, double y, double z): mExt(1) {
				Biv b = Op::dl(Vec(x,y,z));
				Drv d = Vec(x,y,z) * -1;
				
				mBiv = b;
				mDrv = d;
				
				dll( b, d );
			}
			
			/// Direction 
			template <class T> 
			void moveBy( const T& vec ){
				mDll = Op::sp( mDll , Gen::trs(vec) );
			}
			
			/// Set Distance and Period
			void set( double distance, double period ){
				Mot m = Gen::trs( Vec( drv() ).unit() * distance ) * Gen::rot( biv().unit() * period );
				m /= m.rnorm();
				mDll = Gen::log( m );
			}
			
			/// Period, i.e frequency, of twist (in PI units)
			double period() const { return biv().norm(); }
			/// Pitch from 0 (othogonal, pure rotation) to 1 ( identical, pure translation )
			double pitch() const  {  
				return Vec( drv() ).norm();
				//return Op::sca( Vec( mBiv ) <= Vec ( mDrv ) ); 
				//return Op::sca( Vec(mDrv).unit() <= Op::dle(mBiv).unit() ); //Op::pj( Vec(mDrv), Op::dle(mBiv) ).rnorm(); 
			}
        
			/// Distance from origin
			double moment() const { return iphi().rnorm(); }
		
            /// given a (unit?) line, generate a dll with period and pitch along it
            Twist& along(const Dll& d, double period, double pitch){

                Dll td = d.runit() * period;
                
                Biv tb(td); //tb *= period;             //Drv tv(td);
                Drv tv(td);
            
                Vec dir = tb.duale();
                
                dll(tb, Drv( Vec(tv) - (dir * pitch) ) );
                
                return *this;
                
            }
            
            inline static Dll Along( const Dll& d, double period, double pitch){
                Dll td = d.runit() * period;
                
                Biv tb(td); //tb *= period;             //Drv tv(td);
                Drv tv(td);
            
                Vec dir = tb.duale();
                Drv drv( Vec(tv) - (dir * pitch) );
                
                return Dll(tb[0], tb[1], tb[2], drv[0], drv[1], drv[2] );
            }
        
			Rot ratio() const { return Gen::ratio( Vec( biv() ), Vec( drv() ) ); }
			Biv iphi()  const { return Op::dle(biv()) ^ Vec(drv()); }
			Biv pitchPlane() const { return iphi().unit(); }
			
			void dll( const Biv& b, const Drv & d) { 
				mDll[0] = b[0];	mDll[1] = b[1]; mDll[2] = b[2];
				mDll[3] = d[0]; mDll[4] = d[1]; mDll[5] = d[2]; 
			}
			//void dll( const Dll& td ) { mDll = td; }
			Dll dll( double t )	 const { return mDll * t; }			
			Dll dll() const { return mDll; }
			Dll& dll() { return mDll; }
			Mot mot() const { return Gen::mot( mDll ); }
			
			Biv biv() const { return Biv(mDll); }
			Drv drv() const { return Drv(mDll); }

			void period(double theta){
				//Biv b = biv().unit() * theta;
				dll( mBiv * theta, drv() );
				//cout << dll() << endl;
			}

			/// Pass in 0 to 1 -> if 1 pitch is 1
			void pitch(double dt) {			
				//Drv d = Vec( drv() ) .unit() * dt;
				dll(biv(), mDrv * dt);
			}
			
			void ext( double e){
				mExt = e;
			}
			
			/// Get Motor at t
			Mot mot( double t ) const { return Gen::mot( mDll * t * mExt ); }
			
			/// Set Twist Axis From Destination Motor
			void set( const Mot& m){ mDll = Gen::log(m); }

			friend ostream& operator << (ostream&, const Twist&);
	
	};

	inline ostream& operator << (ostream& os, const Twist& t){
		os << t.dll() << " pitch: " << t.pitch() << " period: " << t.period() << " moment: " << t.moment();
		return os;
	}

	/*! Coupled Twist Shape Generation x, y, z (after Rosenhahn et al) */
	class CoupledTwist{	
	
		Twist mTwist[3];
		
		public:
		
			CoupledTwist() {			
				mTwist[0] = Twist(1,0,0);
				mTwist[1] = Twist(0,1,0);
				mTwist[2] = Twist(0,0,1);
			}
			
			/// Gets raw data (dual line) of twist
			Dll& operator [] (int idx) { return mTwist[idx].dll(); }
			Dll operator  [] (int idx) const { return mTwist[idx].dll(); }
			
			Twist& x() { return mTwist[0]; }
			Twist& y() { return mTwist[1]; }
			Twist& z() { return mTwist[2]; }

			Twist x() const { return mTwist[0]; }
			Twist y() const { return mTwist[1]; }
			Twist z() const { return mTwist[2]; }
			
			/// set extrapolation per twist
			void ext( double _x, double _y, double _z){
				mTwist[0].ext(_x);
				mTwist[1].ext(_y);
				mTwist[2].ext(_z);
			}
			
			/// Get Pitch
			double pitch( int i ) { return mTwist[i].pitch(); }			
			void pitch( double theta, int i ){ mTwist[i].pitch(theta); } 
			//rotate drv part towards biv part to set pitch			
			double period( int i ) { return mTwist[i].period(); }	
			void period( double theta, int i ) { mTwist[i].period(theta); }
			
            void pitch(double tx, double ty, double tz) { pitchX(tx); pitchY(ty); pitchZ(tz); }
            void period(double tx, double ty, double tz) { periodX(tx); periodY(ty); periodZ(tz); }
        
			void pitchX( double theta ) { pitch(theta,0); }   ///< Set Pitch
			void pitchY( double theta ) { pitch(theta,1); }
			void pitchZ( double theta ) { pitch(theta,2); }			
			void periodX( double theta ) { period(theta,0); } ///< Set Period
			void periodY( double theta ) { period(theta,1); }
			void periodZ( double theta ) { period(theta,2); }
			
			/// Concatenated Motors (x first, then y, then z ) with weight of t
			Mot mot(double t) { return mTwist[2].mot(t) * mTwist[1].mot(t) * mTwist[0].mot(t); }
			/// Bivector Generator of motor at t
			Dll dll(double t) { Mot m = mot(t); m/=m.rnorm(); return Gen::log( m ); }
//			Mot motor(double t) { return Gen::mot_dll( dll()*t ); }

			/// Averaged Generators
			Dll dll() { return (mTwist[0].dll() + mTwist[1].dll() + mTwist[2].dll() ) /3.0; } 
			/// Linear weighting of all Generators
			//void dll(double t) { mTwist[0].dll(t); mTwist[1].dll(t); mTwist[2].dll(t); } 
			
			void draw(){
				for (int i = 0; i <3; ++i){
					DRAW( mTwist[i].dll() );
				}
			}	
			
	};
	
	/*! GENERIC n-TWIST mechanism */
	class NTwist {
		private:
		
            vector<Twist> mTwist;
        
            Dll * mDll;
        
			int mNum;
			
		public:
		
			NTwist(int n) : mNum(n) { mTwist.resize(mNum); }
			~NTwist() { if (mDll) delete[] mDll; }
			
			/// Gets raw data (dual line) of twist
			Dll& operator [] (int idx) { return mTwist[idx].dll(); }
			Dll operator  [] (int idx) const { return mTwist[idx].dll(); }
			
			/// Gets Twist at idx
			Twist& twist(int idx) { return mTwist[idx]; }
			Twist twist(int idx) const { return mTwist[idx]; }

			/// Get Pitch
			double pitch( int i ) { return mTwist[i].pitch(); }			
			void pitch( double theta, int i ){ mTwist[i].pitch(theta); } 
			//rotate drv part towards biv part to set pitch			
			double period( int i ) { return mTwist[i].period(); }	
			void period( double theta, int i ) { mTwist[i].period(theta); }
			
			/// Concatenated Motors (x first, then y, then z ) with weight of t
			Mot mot(double t) { 
				Mot rm;
				rm[0] = 1;				
				for (int i =mNum-1; i >= 0; --i){
					rm *= mTwist[i].mot(t);
				}
				return rm;
			}
			/// Averaged Generators
			Dll dll() { 
				Dll tdll;
				for (int i = 0; i < mNum; ++i){
					tdll += mTwist[i].dll();					
				}
				return tdll / mNum;
			}		
		
            void submit(){  
                if (mDll) delete[] mDll;
                mDll = new Dll[mNum];
                for (int i = 0; i < mNum; ++i){  mDll[i] = mTwist[i].dll(); }
            }
        
            /// Interpolated Generators (t from 0 to 1)
            Dll at(double t) {
                return Interp::quadric<Dll>(mDll, mNum, t);
            }
        
			void draw(){
				for (int i = 0; i <mNum; ++i){
					DRAW( mTwist[i].dll() );
				}
			}			
			

	};

}//

#endif