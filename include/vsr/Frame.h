/*
 *  Frame.h
 *  CONGA_07
 *
 *  Created by x on 8/26/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */
 
 /*!
	A 3D coordinate Frame system.  Frames have a point position
	and rotor orientation.  Local x, y and z euclidean axes are defined
	through a call to an orient() method, which creates a 4x4 matrix
	representation of the rotor. Hyperplane momentum generators are used
	for moving, spinning, twisting, boosting, and dilating 
	the frame in the global space. 
	 
	At each time step, these generators are multiplied by an
	acceleration/deceleration coefficent, exponentialized into 
	versors and applied to the position and orientation of the frame.  
	The relevant methods achieve these physics: move(), spin(), twist(), 
	boost(), and dilate().    
 */

#ifndef FRAME_H_INCLUDED
#define FRAME_H_INCLUDED

#include "CongaHeaders.h"
#include "Op.h"
#include "vsr_interp.h"
#include "vsr_macros.h"

namespace vsr {

	class Frame : public Touchable {
	
		protected:
		
			Pnt mPos; 			/*!< Position Point */
			
            Rot mRot;			/*!< Orientation Versor */ 
			Trs mTrs;			/*!< Translation Versor */ 
								
			Vec mX;				/*!< Global X */	
			Vec mY;				/*!< Global Y */
			Vec mZ;				/*!< Global Z */

			/*! Direction Vector Generator (Position Momentum) */			
			Vec dVec;		
			/*! Euclidean Bivector Generator (Angular Momentum) */			
			Biv dBiv;
			/*! Dual Line Generator (Twist Momentum) */			
			Dll dDll;
			/*! Tangent Vector Generator (Local Boost) */	
			Tnv dTnv;
			/*! Point Pair Generator (Global Boost) */	
			Par	dPar; 
			/*! Minkowski Plane Generator (Dilation) */	
			Mnk dMnk;
			
			
			double aBiv;	/*!< Acceleration Coefficient */
			double aVec;	/*!< Acceleration Coefficient */
			double aDll;	/*!< Acceleration Coefficient */
			double aTnv;	/*!< Acceleration Coefficient */
			double aMnk;	/*!< Acceleration Coefficient */
			double aPar;	/*!< Acceleration Coefficient */
			
			/*! Local Frame Matrix Representation */
			Mat4<> mImage;
			/*! Scale */
			double mScale;
			
		
		public:
		
			Frame();
			/*! Constructor
				@param[in] pos		Point position 
				@param[in] rot		Rotor orientation
			*/
			Frame( const State& pos, const State& rot); //Position and Rotation
			/*!	Constructor
				@param[in] mot		Motor concatenated position and orientation
			*/
			Frame( const State& mot);					//Motor
			
			Frame (const Frame& f) {
				mImage = f.mImage;
				mScale = f.mScale;
				aBiv = f.aBiv;
				aVec = f.aVec;
				aDll = f.aDll;
				aTnv = f.aTnv;
				aPar = f.aPar;
				aMnk = f.aMnk;
				mPos = f.mPos;
				mRot = f.mRot;
				mTrs = f.mTrs;
				mX = f.mX; mY = f.mY; mZ = f.mZ;
				dBiv = f.dBiv;
				dVec = f.dVec;
				dDll = f.dDll;
				dTnv = f.dTnv;
				dPar = f.dPar;
				dMnk = f.dMnk;
			}
			
			Frame operator = (const Frame& f) {
				if (this == &f) return *this;
				
				mImage = f.mImage;
				mScale = f.mScale;
				aBiv = f.aBiv;
				aVec = f.aVec;
				aDll = f.aDll;
				aTnv = f.aTnv;
				aPar = f.aPar;
				aMnk = f.aMnk;
				mPos = f.mPos;
				mRot = f.mRot;
				mTrs = f.mTrs;				
				mX = f.mX; mY = f.mY; mZ = f.mZ;
				dBiv = f.dBiv;
				dVec = f.dVec;
				dDll = f.dDll;
				dTnv = f.dTnv;
				dPar = f.dPar;
				dMnk = f.dMnk;
				
				return *this;
			}
			
			
			Mat4<> image() const { return mImage; }										///< get matrix image 		
			Frame& orient()	{ mImage = Op::mat(mRot); return *this; }					///< load matrix image with current rotor
			void reset()	{ mRot.set(1,0,0,0); mPos.set(0,0,0,1,0); orient(); }		///< reset position and orientation
			
			/*! Local Z Axis Euclidean Vector */
			Vec forward()	const { return Vec(mImage[2][0],mImage[2][1],mImage[2][2]) * - 1; }
			/*! Local Y Axis Euclidean Vector */
			Vec up()		const { return Vec(mImage[1][0],mImage[1][1],mImage[1][2]); }
			/*! Local X Axis Euclidean Vector */
			Vec right()		const { return Vec(mImage[0][0],mImage[0][1],mImage[0][2]); }						
			/*! Reverse Local Z Axis Euclidean Vector */
			Vec backward()	const { return Vec(mImage[2][0],mImage[2][1],mImage[2][2]); }
			/*! Reverse Local Y Axis Euclidean Vector */
			Vec down()		const { return Vec(mImage[1][0],mImage[1][1],mImage[1][2]) * -1; }
			/*! Reverse Local X Axis Euclidean Vector */
			Vec left()		const { return Vec(mImage[0][0],mImage[0][1],mImage[0][2]) * -1; }						

			Vec x() const { return right(); } Vec y() const { return up(); } Vec z() const { return forward(); }
			
			/* Local Euclidean Bivectors */
			Biv xz()		{ return right() ^ forward(); } ///< xz euclidean bivector
			Biv xy()		{ return right() ^ up();   }	///< xy euclidean bivector
			Biv yz()		{ return up() ^ forward(); }	///< yz euclidean bivector
						
			/* Global Direct and Dual Lines ("Twists") */
			Lin xl()  const { return mPos ^ x() ^ Inf(1); } ///< x direction direct line
			Lin yl()  const { return mPos ^ y() ^ Inf(1); }	///< y direction direct line
			Lin zl()  const { return mPos ^ z() ^ Inf(1); }	///< z direction direct line			
			Dll xld() const { return Op::dl(xl()); }		///< x direction dual line
			Dll yld() const { return Op::dl(yl()); }		///< y direction dual line
			Dll zld() const { return Op::dl(zl()); }		///< z direction dual line
			
			/* Hyperbolic Lines */
			Cir hxl() const { return mPos ^ x() ^ EP; }	///< x direction h-line
			Cir hyl() const { return mPos ^ y() ^ EP; }   ///< y direction h-line
			Cir hzl() const { return mPos ^ z() ^ EP; }   ///< z direction h-line
						
			/* Homogenous Planes in Conformal Space */
			Dlp gxz() const	{ return forward() <= xld(); }		///< xz dual plane
			Dlp gxy() const { return up() <= xld(); }			///< xy dual plane
			Dlp gyz() const	{ return up() <= zld(); }			///< yz dual plane
			/* Local XY Pair */
			Par pxy() const { return gxy() ^ bound(); }			///< xy point pair
			Par pxz() const { return gxz() ^ bound(); }			///< xz point pair
			Par pyz() const { return gyz() ^ bound(); }			///< yz point pair
			
            /* Local XY Circle */
			Cir cxy() const { return Op::ud( pxy() ); }			///< xy circle
            /* Local XZ Circle */
			Cir cxz() const { return Op::ud( pxz() ); }			///< xz circle		
            /* Local YZ Circle */
			Cir cyz() const { return Op::ud( pyz() ); }			///< yz circle	
			/* Local Tangents */
			Par tx() const { return Op::sp0( Tnv( right() ), trs() ); }		///< x tangent generator in global space
			Par ty() const { return Op::sp0( Tnv( up() ), trs() ); }		///< y tangent generator in global space
			Par tz() const { return Op::sp0( Tnv( forward() ), trs() ); }	///< z tangent generator in global space
            /* Local Tangents */
            Par tx(double t) const { return Op::sp0( Tnv( right() * t), trs() ); }		///< x tangent generator in global space * t
            Par ty(double t) const { return Op::sp0( Tnv( up() * t ), trs() ); }		///< y tangent generator in global space * t
            Par tz(double t) const { return Op::sp0( Tnv( forward() * t ), trs() ); }	///< z tangent generator in global space * t
			/* Local Boost Tranformations */
			Pnt_Pnt ppx() { return Gen::tpar(tx()); }			///< x tangent space boost versor
			Pnt_Pnt ppy() { return Gen::tpar(ty()); }			///< y tangent space boost versor
			Pnt_Pnt ppz() { return Gen::tpar(tz()); }			///< z tangent space boost versor
            /* Local Boost Tranformations */
            Pnt_Pnt ppx(double t) { return Gen::tpar(tx(t)); }			///< x tangent space boost versor
            Pnt_Pnt ppy(double t) { return Gen::tpar(ty(t)); }			///< y tangent space boost versor
            Pnt_Pnt ppz(double t) { return Gen::tpar(tz(t)); }			///< z tangent space boost versor			
			Pnt pos() const { return mPos; }					///< get position point
			void pos(const Pnt& p) { mPos = p; }				///< set position point 
			Pnt& pos() { return mPos; }							///< set position point
			void pos(double x, double y, double z) { mPos = Ro::null(x,y,z); } ///< set position point
			void rot0( const Rot& r) { mRot = r; }				///< set rotor without orientation (deprecated)
			Rot rot() const { return mRot; }					///< get orientation rotor
			void rot(const Rot& r) { mRot = r; orient(); }		///< set orientation rotot
			Rot& rot() { return mRot; }							///< set orientation rotor
			Trs trs() const { return Gen::trs(mPos); }			///< get translation versor
			void trs(const Trs& t) { mPos = Op::sp0(Ori(1),t); }///< set translation versor
			Vec vec() const { return mPos; }					///< get position vector
			Mot mot() const { Mot m(trs() * rot()); return m / m.rnorm(); }							 ///< get normalized motor relative to origin
			void mot(const State m) { mPos = Op::sp0(Ori(1), m); mRot = Gen::rot_mot(m); orient(); } ///< set position and orientation by motor
			
            /*! Orient Towards Point p  */
            void orientX(const State& p){
                mRot = Gen::ratio(Vec::x, (Vec(p) - Vec(mPos)).unit());
                orient();
            }
            void orientX(double x, double y, double z){
                orientX( Vec(x,y,z) );
            }
            /*! Orient Towards Point p  */
            void orientY(const State& p){
                mRot = Gen::ratio(Vec::y, (Vec(p) - Vec(mPos)).unit());
                orient();
            }
            void orientY(double x, double y, double z){
                orientY( Vec(x,y,z) );
            }
            /*! Orient Towards Point p  */
            void orientZ(const State& p){
                mRot = Gen::ratio(Vec::z, (Vec(p) - Vec(mPos)).unit() );
                orient();
            }
            void orientZ(double x, double y, double z){
                orientZ( Vec(x,y,z) );
            }
			/*! Absolute Twist Transformation (based on global frame) */
			Frame& twista(const State& m)		{ mPos = Op::sp0(Ori(1), m); mRot = Gen::rot_mot(m); return orient(); }
            /*! Absolute boost Transformation (based on global frame) */
			Frame& boosta(const State& trv)		{ mPos = Op::sp0(Ori(1),trv); return *this; }

			//absolute rotor (relative to Rot(1,0,0,0))
			Rot arot() const { 
				return Gen::rot(Op::lg(rot())* - 1.0);
				//Gen::log_rot((Rot(1,0,0,0))*rot()));
				//return Rot(Op::slerp(Rot::e12(0), rot(), 1.0));
			}

			/*! Surrounding Dual Sphere */
			Dls bound() const { return Ro::dls_pnt(mPos,mScale); }
			
			/*! Get Dual Line Relative to Origin */
			Dll dll() const { return Gen::log_mot( mot() ); }
			/*! Get Bivector Relative to Origin */
			Biv biv() const { return Gen::log_rot( arot() ); } //?

			/*! Pass in Biv (Euclidean Bivector) Generator and reorient*/
			void biv(const Biv& b) { rot( Gen::rot(b) ); }
			/*! Pass in Dll (Dual Line) Generator and reorient*/
			void dll(const Dll& d ) { mot( Gen::mot_dll( d ) ); }
			
			/* Set Time Step Accelerators */
			/*! Set Velocity dVec */
			void dx(const State& v) { dVec = v; } 
			void dx(double x, double y, double z) { dVec = Vec(x,y,z); }  
			Vec dx() const { return dVec; }
			Vec& dx() { return dVec; }
			/*! Set Angular Velocity dBiv */
			void db(const State& B) { dBiv = B; } 
			void db(double xy, double xz, double yz) { dBiv = Biv(xy,xz,yz); } 
			Biv db() const { return dBiv; }
			Biv& db() { return dBiv; }			
			/*! Set Twist Velocity dDll */
			void dm(const State& M) {dDll = M; }
			Dll dm() const { return dDll; }
			Dll& dm() { return dDll; }
			/*! Set Local Boost dTnv */
			void dt(const State& t) {dTnv = t; }
			Tnv dt() const { return dTnv; }
			Tnv& dt() { return dTnv; }
			/*! Set Global Boost dPar */
			void dp(const State& t) {dPar = t; }
			Par dp() const { return dPar; }
			Par& dp() { return dPar; }
			/*! Set Dilation Velocity */
			void dd(const State& m) { dMnk = m; }
			void dd(double d) { dMnk = Mnk(d); }
			Mnk dd() const { return dMnk; }
			Mnk& dd() { return dMnk; }

			/*! Set Acceleration */
			void ax(double t) { aVec = t; }			
			/*! Set Angular Acceleration */
			void ab(double t) { aBiv = t; }
			/*! Set Twist Acceleration */			
			void am(double t) { aDll = t; }
			/*! Set Local Boost Acceleration */
			void at(double t) { aTnv = t; }
			/*! Set Global Boost Acceleration */
			void ap(double t) { aPar = t; }
			
			/*! Get/Set Acceleration */									
			double& ax() { return aVec; }
			double ax() const { return aVec; }

			/*! Get/Set Angular Acceleration */			
			double& ab() { return aBiv; }
			double ab() const { return aBiv; }

			/*! Get/Set Twist Acceleration */			
			double& am() { return aDll; }
			double am() const { return aDll; }

			/*! Get/Set Local Boost Acceleration */			
			double& at() { return aTnv; }
			double at() const { return aTnv; }

			/*! Get/Set Global Boost Acceleration */			
			double& ap() { return aPar; }
			double ap() const { return aPar; }
						
			/* Accumulators and Time Step */
			
			/*! Translation Step */
			void move() {
				mPos = Op::sp(mPos, Gen::trs(dVec));
				dVec *= aVec;
			}
			
			/*! Spin Step (Local Rotation) */
			void spin() {			
				mRot = Gen::rot(dBiv) * mRot; orient();
				dBiv *= aBiv;
			}

			/*! Twist Step (Global Rotation) */
			void twist() {
				Mot tm = Gen::mot_dll(dDll);
				mPos = Op::sp0(mPos, tm); mRot = Gen::rot_mot(tm) * mRot;
				orient();
				dDll *= aDll;
			}

			/*! Boost Step (dTnv rel to origin) */
			void boost() {
				dTnv *= aTnv;
				Trv trv = Gen::trv(dTnv);
				mPos = Ro::loc( Op::sp0(bound(),trv) );
								
				//mRot = Op::sp0(mRot, trv) * mRot;
				//orient();
			}
			
			/*! Boost Step (rel to dPar) */			
			void bboost() {
				dPar *= aPar;
				Pnt_Pnt trp(1, 
						dPar[0], dPar[1], dPar[2], 
						dPar[3], dPar[4], dPar[5], 
						dPar[6], dPar[7], dPar[8], dPar[9]);
				
				Dls td = Op::sp0( bound(),trp );
				
//				Par npx = Op::sp0( tx(), trp );
//				Par npy = Op::sp0( tx(), trp );
//				Par npz = Op::sp0( tx(), trp );

				mPos = Ro::loc( td );
//				rot ( Gen::rot_mot( Op::sp( mot(), trp ) ) );
//				Biv b(dPar[0], dPar[1], dPar[2]); 
//				mRot = Gen::rot_biv( b ) * mRot; orient();
//				mRot = Rot(trp) * mRot; orient(); 
//				dll( Op::sp0( dll(), trp ) );		
//				mScale = Ro::rad( td);
				
			}
			
//			Frame& dilate(const State& dx) { dMnk = dx*dMnk; return *this; }

			Frame& dilate(double t) { 
				Dls s = Op::sp0( bound(), Gen::dil(t) );
				//mPos = Ro::loc(s);
				mScale = Ro::rad(s);
				return *this;
			}

			void dilate() { 
				dMnk *= aMnk; 
				Dls s = Op::sp0( bound(), Gen::dil(dMnk) );  
				//mPos = Ro::loc(s);
				mScale = Ro::rad(s);
			}


			///accelerate all generators (deprecated, individual xforms do it)
			void acc() {
				dBiv *= aBiv;
				dVec *= aVec;
				dDll *= aDll;
				dTnv *= aTnv;
				dPar *= aPar;
				dMnk *= aMnk;
			}
			
			void step(){
				//twist(); 
				spin(); move(); //acc();
			}
					
			/* Orbit Control */
			void around(const Pnt& p) {
				orient();
			}
			
			/* Local Transformations */
			Frame& move (const State& dx) { mPos = Op::sp0(mPos,dx); return *this; }
			Frame& spin (const State& dx) { mRot = dx*mRot; return orient(); }
			Frame& twist(const State& dx) { mPos = Op::sp0(mPos,dx); mRot = Gen::rot_mot(dx) * mRot; return orient(); } 
			Frame& boost(const State& dx) { mPos = Ro::loc( Op::sp0(bound(),dx) ); return *this; }
			Frame& bboost(const State& dx) { mPos = Ro::loc( Op::sp0(bound(), dx) ); return *this; }
			
			Frame& twist2(const Frame& f, double t) {
				Dll tdz = Gen::log_mot( f.zl() / zl() ) * t * .5;
				return twista( Gen::mot_dll( tdz ) );				
			}

			/*! interpolate between frames
				@param[in] f1 Start Frame
				@param[in] f2 End Frame
				@param[in] t position along interpolation [0,1]
			*/
			static Frame twist(const Frame& f1, const Frame& f2, double t);
			static Frame spin(const Frame& f1, const Frame& f2, double t);
			static Frame twist(const Frame& f1, double t);

//			Frame twist(const State& dx) { mPos = Op::sp(mPos,dx); mRot = Gen::rot_mot(dx) * mRot; orient(); }
			
			/* Cubic and Quadric Interpolations . . . */
			static void twist(const Frame * f, int num, double t, Interpolation ctype = QUADRIC) {
				
				Dll * dlf = new Dll[num];
				for (int i = 0; i < num; ++i){ dlf[i] = f[i].dll(); }
				Frame fr;
				
				switch(ctype){
					case QUADRIC : 
					{
						Dll dll = Interp::quad<Dll>(dlf,num,t);
						fr.twist( Gen::mot_dll(dll) );
						break;
					}
					case CUBIC :
					{
						break;
					}
				}
			}

			/* Relative Transformations (given a second Frame and an interpolation value) */
			
			void boost2(const Frame& f) {}
			
			/*! Absolute Rotations */
			void lookat(const State& v) {
				Vec n = Vec(mPos) - v;
				Rot r = Gen::ratio(Vec(0,0,1),n.unit());
				rot(r);
			}
			
			void euler(double y, double p, double r) { 
				Biv b = Biv::xz * y + Biv::xy * r + Biv::yz * p; 
				rot( Gen::rot( b ) ); 
			} 
			

			//experiments
			Frame& twistb(const State& dx) { mPos = Op::sp(mPos,dx); mRot = Op::sp(mRot,dx); return orient(); } 
			
			//Feed in a Line to which to "twist" axis X Y or Z
			Frame& twistX(const State& dll, double t = 1.0){ 
				Dll tdx = Gen::log_mot( dll/xl() ) * t * .5;
				return twist( Gen::mot_dll(tdx) );
			}
			Frame& twistY(const State& dll, double t = 1.0){ 
				Dll tdy = Gen::log_mot( dll/yl() ) * t * .5;
				return twist( Gen::mot_dll(tdy) );
			}
			Frame& twistZ(const State& dll, double t = 1.0){ 
				Dll tdz = Gen::log_mot( dll/zl() ) * t * .5;
				return twist( Gen::mot_dll(tdz) );
			}
			//Feed in a vector to which to "spin" particular axis
			Frame& spinX(const Vec& v, double t = 1.0){
				Biv tbx = Gen::log_rot(v/x()) * t * .5;
				return spin( Gen::rot(tbx) );
			}
			Frame& spinY(const Vec& v, double t = 1.0){
				Biv tby = Gen::log_rot(v/y()) * t * .5;
				return spin( Gen::rot(tby) );
			}
			Frame& spinZ(const Vec& v, double t = 1.0){
				Biv tbz = Gen::log_rot(v/z()) * t * .5;
				return spin( Gen::rot(tbz) );
			}

			//others (spin to)
//			Frame& spin2(const Vec& v, double t = 1.0){
//			
//			}

			
			void ang(const State& v, double dv) {
				Vec n = (Vec(mPos) - v);
				dBiv = z() ^ n.unit() * dv;
			}			
			
			double scale() const { return mScale; }
			double& scale() { return mScale; }
            Frame& scale(double s) { mScale = s; return *this; }
			
			bool clicked();
//			
//			bool clickedRay(Dll ray){
//				Cir c = ray ^ bound();
//				return (Ro::siz( c ) < 0 ) ? true : false;
//			}			

			virtual void pushPos();		
			virtual void push();
			virtual void pop();			

            void drawLite();
            void drawBox();
            void drawX(float r=1.0, float g=1.0, float b=1.0, float a = 1.0);
            void drawY(float r=1.0, float g=1.0, float b=1.0, float a = 1.0);
            void drawZ(float r=1.0, float g=1.0, float b=1.0, float a = 1.0);
            virtual void draw(float r, float g, float b, float a = 1.0);
            virtual void draw(){ draw(1,1,1); }
			void drawBound() { bound().draw(); }	

			
//			virtual void printPS();
//			virtual void clickTest(double, double );			
	};

} //con::

#endif