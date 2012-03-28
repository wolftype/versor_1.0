/*
 *  Chain.h
 *  VERSOR
 *
 *  Created by x on 9/29/10.
 *  Copyright 2010 x. All rights reserved.
 *
 
 KINEMATIC CHAIN
 
 */

#ifndef VSR_CHAIN_H_INCLUDED
#define VSR_CHAIN_H_INCLUDED

#include "Frame.h"
//#include "GL.h"

namespace vsr {

	class Chain : public Frame {
		
		Frame * mFrame;			///< Absolute frame of Joints
		Frame * mLink;			///< Relative frame (to previous joint)
		Frame * mJoint;			///< In socket transformation
		
		int mNum;
		
		void _init(){
			for (int i = 0; i < mNum; ++i){
				Vec v(0,1.0,0);
				mLink[i].trs(Gen::trs(v));
				mFrame[i].scale(.4);
				fk();
				//cout << mLink[i].pos() << endl;
			}
		}
		
		public:
		
			Chain(int n = 3) : mNum(n) {
				mFrame = new Frame[n];
				mLink  = new Frame[n];
				mJoint = new Frame[n];
				_init();			
			}
			
			/* GETTERS AND SETTERS */
			int num() const { return mNum; }
			Frame& link(int k) { return mLink[k]; }						///< set Link to previous Joint
			Frame& joint(int k) { return mJoint[k]; }					///< Get In Socket Transformation kth Joint
			Frame& frame(int k) { return mFrame[k]; }					///< set Absolute Displacement Motor

			Frame link(int k) const { return mLink[k]; }				///< Get Link Frame to previous joint 
			Frame joint(int k) const { return mJoint[k]; }				///< Get In Socket Transformation kth Joint
			Frame frame(int k) const { return mFrame[k]; }				///< set Absolute Displacement Motor

			
			Frame& operator [] (int k) { return frame(k); }				///< Set Absolute 
			Frame operator [] (int k) const { return frame(k); }		///< Get Absolute 
			
			/* SURROUNDS */
			/// Sphere Centered at Joint K Going Through Joint K+1 
			Dls nextDls(int k) const{
				return Ro::dls(mFrame[k].pos(), mLink[k].vec().norm() );//mFrame[k+1].pos());
			}
			/// Sphere Centered at Joint K Going Through Joint K-1
			Dls prevDls(int k) const{
				return Ro::dls(mFrame[k].pos(), mLink[k-1].vec().norm());//mFrame[k-1].pos());
			}
			/// Sphere at point p through last link (default, or set arbitary link)
			Dls lastDls(const Pnt& p){
				return Ro::dls(p,mLink[mNum-1].vec().norm());
			}
			
			/// Vert xy Plane Containing Root Target Point v ( NORMALIZED )
			Dlp xy(const Pnt& p) {
				return Op::dl(frame(0).pos()^Ro::null(0,1,0)^p^Inf(1)).unit();
			}
			/// Horiz xz Plane Containing Target Point v
			Dlp xz(const Pnt& p)  {
				return Dlp(0,1,0,p[1]);
			}
			/// Plane 
			
			/// Line Forward: Dual Line from kth joint to kth+1 joint
			Dll linf(int k) { return Op::dl( mFrame[k].pos() ^ mFrame[k+1].pos() ^ Inf(1) ).runit() ; }
			/// Line Backward: Dual Line from kth joint to kth-1 joint
			Dll linb(int k ) { return Op::dl( mFrame[k].pos() ^ mFrame[k-1].pos() ^ Inf(1) ).runit() ; }
			/// Line From Kth Joint to Target (Default is From Last joint)
			Dll lin(const Pnt& p ) { return Op::dl( mFrame[mNum-1].pos() ^ p ^ Inf(1) ).runit() ; }
			
			/// Forward Kinematics: Concatenation of previous frame, previous link, and current joint
			void fk() {							
				for (int i = 1; i < mNum; ++i){		
					Mot m = mJoint[i].mot() * mLink[i-1].mot() * mFrame[i-1].mot();
					mFrame[i].mot( m );
				}
			}
			
			/// Forward Kinematics: Selective From begin joint to end joint
			void fk(int begin, int end){
				for (int i = begin; i < end; ++i){
					Mot m = mJoint[i].mot() * mLink[i-1].mot() * mFrame[i-1].mot();
					mFrame[i].mot( m );				
				}
			}
			
			/// Inverse Kinematics: in development
			void ik(){
				for (int i = num()-1; i > 1; i--){
				
				}
			}
			/// Inverse Kinematics: Selective
			void ik(int end, int begin){
				for (int i = end; i > begin; i--){
				
				}			
			}
			
			/// Derive Link Frames from current Pose
			void lk(){
				for (int i = 0; i < mNum-1; ++i){
					mLink[i].mot( mFrame[i+1].mot() / mFrame[i].mot() ); 
				}
			} 
			
			virtual void draw(){
				for (int i = 0; i < mNum; ++i){
					mJoint[i].step();
					mFrame[i].draw();
					mFrame[i].drawBound();
				}
			}
	
	};

} //con::

#endif