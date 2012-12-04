/*
 *  CAMERA.h
 *  Versor
 *
 *  Created by x on 5/17/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */



 
 #ifndef CAMERA_H_INCLUDED
 #define CAMERA_H_INCLUDED

#include "vsr_gl.h"
#include "vsr_frame.h"
#include "vsr_gfxmatrix.h"
 
namespace vsr {

    struct Slab{
        Vec blu, bru, tru, tlu;
        Vec& operator[] (int i ) { return (&blu)[i]; }
    };
    
    struct Volume{
        Vec bl, br, tr, tl, blb, brb, trb, tlb; 
        Vec& operator[] (int i ) { return (&bl)[i]; }
    };
    
struct Frustrum{
    float width, height, depth;
    float bwidth, bheight;
    
    Slab dir;
    Volume box;
    
    void calc(){
        dir.blu = (box.blb - box.bl).unit();
        dir.tru = (box.trb - box.tr).unit();
        dir.bru = (box.brb - box.br).unit();
        dir.tlu = (box.tlb - box.tl).unit();
        width = box.br[0] - box.bl[0];
        height = box.tr[1] - box.br[1];
        depth = box.blb[2] - box.bl[2];
        bwidth = box.brb[0] - box.blb[0];
        bheight =box.trb[1] - box.brb[1];
        
    }
    
    Pln left(){ return Ro::null(box.tl) ^ Ro::null(box.bl) ^ Ro::null(box.blb) ^ Inf(1); }
    Pln right(){ return Ro::null(box.tr) ^ Ro::null(box.br) ^ Ro::null(box.brb) ^ Inf(1); }
    Pln top(){ return Ro::null(box.tl) ^ Ro::null(box.tr) ^ Ro::null(box.trb) ^ Inf(1); }
    Pln bottom(){ return Ro::null(box.bl) ^ Ro::null(box.br) ^ Ro::null(box.brb) ^ Inf(1); }
};

struct Lens {

    
    /* Lens Parameters */
    bool bOrtho;
    float mFocal, mNear, mFar, mWidth, mHeight; 

    Lens() :
    mFocal(60.0), 
    mWidth(100), 
    mHeight(100), 
    mNear(0.1), 
    mFar (100.0),
    bOrtho(0)
    {}

    /* Implicit Getters and Setters */
    void width( float w )	{ mWidth = w;}						///< set width
    void height( float h )	{ mHeight = h;}						///< set height
    float ratio() const { return width()/ height(); }

    float width()	const {return mWidth;}							///< get width
    float height()	const {return mHeight;}							///< get height
    float depth()   const { return mFar - mNear; }
    float& width()	 {return mWidth;}							///< get width
    float& height()	 {return mHeight;}							///< get height
    
    float near() const { return mNear; }
    float far() const { return mFar; }
    float& near()  { return mNear; }
    float& far()  { return mFar; }
    
    void	focal(float f)	{ mFocal = f; }						///< set focal length
    float& focal()			{ return mFocal; }					///< get focal length
    float	focal() const	{ return mFocal; }
    
    void  ortho(bool b) { bOrtho = b; }
    bool& ortho()  {return bOrtho; }
    bool  ortho() const {return bOrtho; }
    
    friend ostream& operator << (ostream& os, const Lens& l){
        os << "focal: " << l.focal() << "\n";
        os << "width: " << l.width();
        os << " height: " << l.height() << "\n";
        os << "near: " << l.near();
        os << " far: " << l.far() << "\n";
        
        return os;
    }    

};
    
class Camera : public Frame {	

        Lens mLens;
        Frustrum mFrustrum;
		Vec mLook;													///< Direction to Look In
				
	public:
    
        Lens& lens() { return mLens; }
        
        Camera() : Frame(), mLook(0,0,0), mLens() {}
        Camera(float x, float y, float z); 
        Camera( Vec v, Drv x); 

		template <class A> void lookAt( const A& v ) { mLook = v; }
						
		Vec  look() { mLook = Vec(mPos) + forward();  return mLook; }	
        
        void focal( float f ) { mLens.focal( f ); }
        void width( float w )	{ mLens.width( w ) ;}						///< set width
        void height( float h )	{ mLens.height( h );}						///< set height
        float width()	const {return mLens.width();}							///< get width
        float height()	const {return mLens.height();}							///< get height
        float depth()   const { return mLens.mFar - mLens.mNear; }	

//		void mvm( const Rot& r ) { mModelView.rot(r); }				///< Set Model View Matrix Rotor
//		Rot& mvm() { return mModelView.rot(); }						///< Model View Matrix Rotor
//		Rot  mvm()  const { return mModelView.rot(); }				///< Get Model View Matrix Rotor
//		Rot  cat()  const { return mRot * mModelView.rot(); }		///< Concatenate MVM and Camera Rotor
//		Rot  rcat() const { return mModelView.rot() * mRot; }		///< Reverse Concatenate MVM and Camera Rotor (not used)
//		Frame& modelView() { return mModelView; }					///< Get Model View Matrix Frame
//		Frame  modelView() const { return mModelView; }				///< Set Model View Matrix Frame
		
//		Rot rat() const { return !mRot * mModelView.rot(); }		///< Ratio Rotor taking camera to mvm 
//		Rot rrat() const { return !mModelView.rot() * mRot; }		///< Reverse Ratio taking mvm to camera 
		
//		Rot ryz() { return Gen::ratio( modelView().yz(), yz() ); }	///< Get Ratio of YZ plane between Camera and MVM
//		Rot rxz() { return Gen::ratio( modelView().xz(), xz() ); }	///< Get Ratio of XZ plane between Camera and MVM
//		Rot rxy() { return Gen::ratio( modelView().xy(), xy() ); }	///< Get Ratio of XY plane between Camera and MVM
				
		void reset() {  pos(0,0,5); rot( Rot(1,0,0,0) ); } 

//		Camera& orientCat() {
//			mImageMvm = Op::mat( mModView ); return *this;
//		}
		
//		Biv xycat(){ return xy() + mModelView.xy(); }//Op::sp0(xy(),-mvm()); }
//		Biv xzcat(){ return xz() + mModelView.xz(); }//Op::sp0(xz(),-mvm()); }
//		Biv yzcat(){ return yz() + mModelView.yz(); }//Op::sp0(yz(),-mvm()); }
					
		void push3D();
		void pop3D();
		
		//ortho
		void push2D(int, int);
		void pop2D();
		
		//get mv info
//		const GLdouble * model() const { return mModel; }
//		const GLdouble * proj() const { return mProj; }
//		const GLint * view() const { return mView; }
    
    Frustrum frustrum() const { return mFrustrum; }
    
    Frustrum frustrum(){
    
//           mFrustrum.box.bl = GL::unproject(0,0,0.0, *this);
//           mFrustrum.box.blb = GL::unproject(0,0,1.0, *this);
//           mFrustrum.box.tr = GL::unproject( width(), height(), 0.0, *this);    
//           mFrustrum.box.trb = GL::unproject( width(), height(), 1.0, *this );        
//           mFrustrum.box.br = GL::unproject(width(),0,0.0, *this);
//           mFrustrum.box.brb = GL::unproject(width(),0,1.0, *this);
//           mFrustrum.box.tl = GL::unproject( 0, height(), 0.0, *this );    
//           mFrustrum.box.tlb = GL::unproject( 0,height(), 1.0, *this );  
                 
            mFrustrum.calc();
        
            return mFrustrum;

        }

};

    /*! Transformation Matrices Container */
    struct XformMat {
        float model[16];
        float view[16];
        float modelView[16];
        float proj[16];

        double modeld[16];
        double viewd[16];
        double modelViewd[16];
        double projd[16];
        
        void toDoubles() {
            for (int i = 0; i < 16; ++i){
                modeld[i] = model[i];
                projd[i] = proj[i];
                viewd[i] = view[i];
                modelViewd[i] = modelView[i];
            }
        }

        int	viewport[4];

        //Print View Matrix (Camera)
        friend ostream& operator << ( ostream& os, const XformMat& xf){
        
            os << "VIEWPORT" << "\n";            
            for (int i = 0; i < 2; ++i){
                for (int j = 0; j < 2; ++j){
                    os << xf.viewport[i + j * 2] << " "; 
                }
                os << "\n";
            }
        
            os << "MODELVIEW" << "\n";
            for (int i = 0; i < 4; ++i){
                for (int j = 0; j < 4; ++j){
                    int idx = i + j * 4;
                    os << xf.modelViewd[idx] << " ";
                }
                os << "\n";
            }

            os << "PROJECTION" << "\n";
            for (int i = 0; i < 4; ++i){
                for (int j = 0; j < 4; ++j){
                    int idx = i + j * 4;
                    os << xf.projd[idx] << " ";
                }
                os << "\n";
            }
            
            return os;
        }
    };

    class Scene {
    
        public:
            
            Scene() : camera(0.0,0.0,5.0), model() {}
            
            XformMat xf;            
            Frame model;
            Camera camera;
            
            float height() const { return camera.height(); }
            float width() const { return camera.width(); }
            
            Rot cat() { return camera.rot() * model.rot(); }//camera.rot() * model.rot(); }
            
            Mat4f mod() { return model.image(); }
            Mat4f mvm() { return  XMat::lookAt( camera.x(), camera.y(), camera.z() * -1, camera.pos()) * XMat::rot( model.rot() ) ; }
            Mat4f proj() { 
                Lens& tl = camera.lens();
                return XMat::fovy( tl.mFocal * PI/180.0, tl.mWidth/tl.mHeight, tl.mNear, tl.mFar ); 
            }
            
            //ADVANCED MODE -> Update Shader Uniforms
            void updateMatrices(){
            
                Mat4f tmod = mod();
                Mat4f tview = XMat::lookAt( camera.x(), camera.y(), camera.z() * -1, camera.pos());
                Mat4f tmvm = mvm();
                Mat4f tproj = proj();
                
                copy(tmod.val(), tmod.val() + 16, xf.model);
                copy(tview.val(), tview.val() + 16, xf.view);
                copy(tmvm.val(), tmvm.val() + 16, xf.modelView);
                copy(tproj.val(), tproj.val() + 16, xf.proj);
             
                xf.toDoubles();
            }
            
            void pop3D();
            void push3D();
            
            //IMMEDIATE MODE ONLY (NO IPHONE, etc)
            void getMatrices(){
                glGetDoublev(GL_PROJECTION_MATRIX, xf.projd);	
                glGetDoublev(GL_MODELVIEW_MATRIX, xf.modelViewd);
                glGetIntegerv(GL_VIEWPORT, xf.viewport);	
            }
    
    };

} //vsr::

#endif
