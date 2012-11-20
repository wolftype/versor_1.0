/*
 *  CAMERA.cpp
 *  gelatin
 *
 *  Created by x on 5/17/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include "vsr.h"
#include "vsr_op.h"
#include "vsr_camera.h"

//#include "GL.h"

namespace vsr {

Camera :: Camera(float x, float y, float z) : Frame(), mLens(), mLook(0,0,0) {
	mPos = Ro::null(Vec(x,y,z));
}

// IMMEDIATE MODE and OPENGLES 1.0
void Camera :: push3D(){

	Vec v = look();
	Vec u = up();
	
//	glEnable(GL_DEPTH_TEST);
    glPushAttrib(GL_VIEWPORT_BIT );
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    
    glLoadIdentity();
    if ( mLens.bOrtho ){
        float oz = mPos[2];
        glOrtho(-1.0 * oz, 1.0* oz, -1.0* oz, 1.0* oz, -50.0, 50.0); 

    } else {
        gluPerspective( mLens.mFocal, mLens.mWidth/mLens.mHeight, mLens.mNear, mLens.mFar);				
    }
    
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	
	glLoadIdentity();
	gluLookAt(mPos[0], mPos[1], mPos[2], v[0], v[1],  v[2], u[0], u[1], u[2]);
	
        
//    cout << "push3d" << endl;
//    Rot t = Gen::aa( rot() );
//    GL::rotate(t.w());
}
		

void Camera :: pop3D(){

	glPopAttrib();
	
	glMatrixMode(GL_PROJECTION);
	glPopMatrix();

	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();
	
}

void Camera :: push2D(int w, int h){

//	glEnable(GL_DEPTH_TEST);

	glPushAttrib(GL_VIEWPORT_BIT);
	
	glMatrixMode(GL_PROJECTION);
	glPushMatrix();

	glLoadIdentity();
	
	glViewport(0,0,(GLsizei)w,(GLsizei)h);	
	gluOrtho2D(0,w,h,0);
	
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	
	glLoadIdentity();
	
}

void Camera :: pop2D(){
	glPopAttrib();
	
	glMatrixMode(GL_PROJECTION);
	glPopMatrix();
	
	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();
}

void Scene::push3D(){
                
    Lens& lens = camera.lens();

    Vec v = camera.look();
    Vec u = camera.up();
    
//	glEnable(GL_DEPTH_TEST);
    glPushAttrib(GL_VIEWPORT_BIT );
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    
//    glLoadMatrixf( xf.proj );
    
    glLoadIdentity();
    if ( camera.lens().bOrtho ){
        float oz = camera.pos()[2];
        glOrtho(-1.0 * oz, 1.0* oz, -1.0* oz, 1.0* oz, -50.0, 50.0); 

    } else {
        gluPerspective( lens.mFocal, lens.mWidth/lens.mHeight, lens.mNear, lens.mFar);				
    }
    
    
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
//    glLoadMatrixf( xf.modelView );
    
    glLoadIdentity();
    gluLookAt(camera.pos()[0], camera.pos()[1], camera.pos()[2], v[0], v[1], v[2], u[0], u[1], u[2]);
    
    Rot t = Gen::aa( model.rot() );
    GL::rotate(t.w());


}

void Scene :: pop3D(){

	glPopAttrib();
	
	glMatrixMode(GL_PROJECTION);
	glPopMatrix();

	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();
	
}            

}//vsr::