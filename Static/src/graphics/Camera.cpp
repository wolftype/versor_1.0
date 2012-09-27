/*
 *  CAMERA.cpp
 *  gelatin
 *
 *  Created by x on 5/17/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include "Camera.h"
//#include "GL.h"

namespace vsr {

Camera :: Camera() : Frame(), 
mFocal(60.0), 
mWidth(100), 
mHeight(100), 
mNear(0.1), 
mFar (100.0),
mLook(0,0,0),
mModelView(),
bOrtho(0)
{
	pos() = Ro::null(Vec(0,0,5));
//	createGui();					
}
/*
void Camera :: createGui(){

	mGui = new Gui(100,100);
	mGui -> arrangement("<");	
	mGui -> add(glv::_BUTTON, "ortho",&bOrtho);
	mGui -> add(glv::_DIALER, "focal",&mFocal,60.0,180.0);
	mGui -> arrange();
//	mGui -> widget("focal").setValue(60.0);
}
*/
void Camera :: push3D(){

	Vec v = look();
	Vec u = up();
	
//	glEnable(GL_DEPTH_TEST);

	glPushAttrib(GL_VIEWPORT_BIT );
	glMatrixMode(GL_PROJECTION);
	glPushMatrix();
	
	glLoadIdentity();
	if (bOrtho){
	
        float oz = mPos[2];
        glOrtho(-1.0 * oz, 1.0* oz, -1.0* oz, 1.0* oz, -50.0, 50.0); 

	} else {
		gluPerspective(mFocal, mWidth/mHeight, mNear, mFar);				
	}

	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	
	glLoadIdentity();
	gluLookAt(mPos[0], mPos[1], mPos[2], v[0], v[1],  v[2], u[0], u[1], u[2]);
		
	Vec4<> t = Gen::aa( mvm() );
	
	glRotatef(t.w,t.x,t.y,t.z);

	glGetDoublev(GL_PROJECTION_MATRIX, mProj);	
	glGetDoublev(GL_MODELVIEW_MATRIX, mModel);
	glGetIntegerv(GL_VIEWPORT, mView);	
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


}