/*
 *  CAMERA.h
 *  gelatin
 *
 *  Created by x on 5/17/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */
 
 #ifndef CAMERA_H_INCLUDED
 #define CAMERA_H_INCLUDED
 
#include "Frame.h"

#include "vsr_gxlib.h"

// #include <OPENGL/gl.h>
// #include <GLUT/glut.h>
 
namespace vsr {

class Camera : public Frame {	

		bool bOrtho;
		GLdouble mFocal, mNear, mFar, mWidth, mHeight; 
		
		/* Transformation Matrices */
		GLdouble mModel[16];
		GLdouble mProj[16];
		GLint	 mView[4];
		
		Vec mLook;													///< Direction to Look In
		Frame mModelView;


//		Vec mForward;//Unit Direction to Look At ( mZ * -1)		
//		Rot mModView;
//		Pnt mLook;
//		Mat4<> mImageMvm;
				
	public:
		Camera(); 

//		void createGui();					///< Add a Widget
//		Gui& gui() { return *mGui; }

		/* Implicit Getters and Setters */
		void width( float w )	{ mWidth = w;}						///< set width
		void height( float h )	{ mHeight = h;}						///< set height

		float width()	{return mWidth;}							///< get width
		float height()	{return mHeight;}							///< get height
		
		void	focal(float f)	{ mFocal = f; }						///< set focal length
		double& focal()			{ return mFocal; }					///< get focal length
		double	focal() const	{ return mFocal; }

		void  perspective(bool b) { bOrtho = b; }
		bool& perspective()  {return bOrtho; }
		bool  perspective() const {return bOrtho; }
										
		void lookAt( const State& v ) { mLook = v; }
						
		Vec  look() { mLook = Vec(mPos) + forward();  return mLook; }		

		void mvm( const Rot& r ) { mModelView.rot(r); }				///< Set Model View Matrix Rotor
		Rot& mvm() { return mModelView.rot(); }						///< Model View Matrix Rotor
		Rot  mvm()  const { return mModelView.rot(); }				///< Get Model View Matrix Rotor
		Rot  cat()  const { return mRot * mModelView.rot(); }		///< Concatenate MVM and Camera Rotor
		Rot  rcat() const { return mModelView.rot() * mRot; }		///< Reverse Concatenate MVM and Camera Rotor (not used)
		Frame& modelView() { return mModelView; }					///< Get Model View Matrix Frame
		Frame  modelView() const { return mModelView; }				///< Set Model View Matrix Frame
		
		Rot rat() const { return -mRot * mModelView.rot(); }		///< Ratio Rotor taking camera to mvm 
		Rot rrat() const { return -mModelView.rot() * mRot; }		///< Reverse Ratio taking mvm to camera 
		
		Rot ryz() { return Gen::ratio_biv( modelView().yz(), yz() ); }	///< Get Ratio of YZ plane between Camera and MVM
		Rot rxz() { return Gen::ratio_biv( modelView().xz(), xz() ); }	///< Get Ratio of XZ plane between Camera and MVM
		Rot rxy() { return Gen::ratio_biv( modelView().xy(), xy() ); }	///< Get Ratio of XY plane between Camera and MVM
				
		void reset() { mvm( Rot(1,0,0,0) ); rot( Rot(1,0,0,0) ); pos(0,0,5); orient(); } 

//		Camera& orientCat() {
//			mImageMvm = Op::mat( mModView ); return *this;
//		}
		
		Biv xycat(){ return xy() + mModelView.xy(); }//Op::sp0(xy(),-mvm()); }
		Biv xzcat(){ return xz() + mModelView.xz(); }//Op::sp0(xz(),-mvm()); }
		Biv yzcat(){ return yz() + mModelView.yz(); }//Op::sp0(yz(),-mvm()); }
					
		virtual void push3D();
		virtual void pop3D();
		
		//ortho
		void push2D(int, int);
		void pop2D();
		
		//get mv info
		const GLdouble * model() const { return mModel; }
		const GLdouble * proj() const { return mProj; }
		const GLint * view() const { return mView; }
				
//		void drawAxis();		
//		virtual void drawLoop();

};

}

#endif