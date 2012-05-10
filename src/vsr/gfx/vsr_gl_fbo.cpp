/*
 *  vsr_gl_fbo.cpp
 *  CONGA_07
 *
 *  Created by x on 1/8/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

#include "vsr_gl_fbo.h"

namespace vsr {

FBO :: FBO() : 
mAutoClear(true),
mId(0),
mWidth(0),
mHeight(0),
mNumAttachments(0),
mAttachment(GL::COLOR),
mClearDepth(1)
{
	clearColor(0,0,0,1);
}

void FBO :: init(){
    generate();
    bind();
}
    
//Init from Texture
void FBO :: init(Texture *t, GL::ATTACH att) {

    mAttachment = att;
    
	mWidth = t->width();
	mHeight = t->height();
	
    generate();
    
	Attach(this, t, mAttachment);	
    
	attachRenderBuffer(mWidth, mHeight, att);
}
    
void FBO :: generate(){
    glGenFramebuffers(1, &mId);
    GL::error("FBO Generate");    
}


void FBO :: enter() {

//	glPushAttrib(GL_VIEWPORT_BIT);
//	glDisable(GL_SCISSOR_TEST);

	//call forth this fbo
	bind();
	
	glViewport(0, 0, mWidth, mHeight);

/*	
	glMatrixMode(GL_PROJECTION);
	glPushMatrix();	
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
*/	
	//clear buffer and get 'em ready 
    
	if(mAutoClear) {
    
		glClearColor(mClearColor[0], mClearColor[1], mClearColor[2], mClearColor[3]);
		
		glClearDepth(mClearDepth);

		for(int i=0; i < mNumAttachments; i++) {
			//glDrawBuffer( GL_COLOR_ATTACHMENT0 );
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		}
	}
	
	if(mNumAttachments > 1) {
		//glDrawBuffers(mNumAttachments, ColorBuffer );
	}
}

void FBO :: leave() {

/*
	glMatrixMode(GL_PROJECTION);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();

	glPopAttrib();

*/

}

void FBO :: startCapture(Texture * t){

	if (mId <= 0 ) init(t);

	enter();
}

void FBO :: endCapture() {
	leave();
	Unbind();
}
    
    

void FBO :: bind() {

	//reset texture
    Texture::Reset();	
	
	//generate if not yet generated
	if(mId <= 0) {
		glGenFramebuffers(1, &mId);
	}
	
	//bind
	glBindFramebuffer(GL_FRAMEBUFFER, mId);
    
    GL::error("FBO BIND");
}


void FBO :: attachRenderBuffer(int width, int height, GL::ATTACH type) {

    GLuint * tIdx;
    
    GL::IFORMAT tFormat;
    GL::ATTACH tAttach;
    
    switch (type){
        case GL::DEPTH:
            tIdx = &mDepthId;
            tFormat = GL::DEPTHCOMP;
            tAttach = GL::DEPTH;
            break;
        case GL::STENCIL:
            tIdx = &mStencilId;
            tFormat = GL::STENCILIDX;
            tAttach = GL::STENCIL;            
            break;
        case GL::COLOR:
            tIdx = &mColorId;
            tFormat = GL::RGBA4;
            tAttach = GL::COLOR;
            break;
    }

	// generate a new renderbuffer at tIdx
	glGenRenderbuffers(1, tIdx);
	glBindRenderbuffer(GL_RENDERBUFFER, *tIdx);

    //allocate storage
	glRenderbufferStorage(GL_RENDERBUFFER, tFormat, width, height);
	glBindRenderbuffer(GL_RENDERBUFFER, 0);
	
    //Bind in this and attach to render buffer
	glBindFramebuffer(GL_FRAMEBUFFER, mId);    
	glFramebufferRenderbuffer(GL_FRAMEBUFFER, tAttach, GL_RENDERBUFFER, *tIdx);
    
    mNumAttachments += 1;
    
}
    
GLint FBO :: attachTextureBuffer(int width, int height, GL::ATTACH type) {
    
    GLuint * tIdx;
    
    GL::IFORMAT tFormat;
    GL::ATTACH tAttach;
    
    switch (type){
        case GL::DEPTH:
            tIdx = &mDepthId;
            tFormat = GL::DEPTHCOMP;
            tAttach = GL::DEPTH;
            break;
        case GL::STENCIL:
            tIdx = &mStencilId;
            tFormat = GL::STENCILIDX;
            tAttach = GL::STENCIL;            
            break;
        case GL::COLOR:
            tIdx = &mColorId;
            tFormat = GL::RGBA4;
            tAttach = GL::COLOR;
            break;
    }
    
    GLint texid = Texture::Gen(mWidth, mHeight, tFormat);
    
    //Bind in this and attach to render buffer
    glBindFramebuffer(GL_FRAMEBUFFER, mId);    
    glFramebufferTexture2D(GL_FRAMEBUFFER, tAttach, GL_TEXTURE_2D, texid, 0);
    mNumAttachments += 1;
    return texid;
    
}

GLenum FBO :: status() {
	GLenum stat = glCheckFramebufferStatus(GL_FRAMEBUFFER);
    return stat;
    if (stat != GL_FRAMEBUFFER_COMPLETE){
        printf("fbo fail/n");
    }
}

//Attaches texture t to framebuffer f
void FBO :: Attach(FBO *f, Texture *t, GL::ATTACH _buf) {
    
    GLint tmp = Current();
    
	//set texture's fbo attachment point buffer (color, depth, or stencil)
	t->fbo().attachment(_buf);

	//call forth buffer
	glBindFramebuffer(GL_FRAMEBUFFER, f->id());

	//wipe out texture
	t->nullBind();
	//attach
	glFramebufferTexture2D(GL_FRAMEBUFFER, _buf, t->target(), t->idx(), 0);
	//back
	t->unbind();
	
	//increment attachments of FBO
	f -> numAttachments() += 1;
	
    GL::error("FBO ATTACH");
}

} //con::