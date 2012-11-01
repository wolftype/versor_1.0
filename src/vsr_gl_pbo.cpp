/*
 *  vsr_gl_pbo.cpp
 *  CONGA_07
 *
 *  Created by x on 1/9/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

#include "vsr_gl_pbo.h"
#include <iostream>
#include "vsr_gl_texture.h"

namespace vsr {

using namespace std;

PBO::PBO() : 
mWidth(0), mHeight(0), mDepth(0), mNumChannels(0),
mSize(0), mIdx(0),
mFormat(GL_RGBA), mType(GL_UNSIGNED_BYTE),
//mTarget(UNPACK), 
mUsage(GL::STREAM) 
{}

PBO::PBO(int _w, int _h, int _d, int _nc ) : 
mWidth(_w), mHeight(_h), mDepth(_d), mNumChannels(_nc),
mSize(_w*_h*_d), mDataSize(_w*_h*_d*_nc), mIdx(0),
mFormat(GL_RGBA), mType(GL_UNSIGNED_BYTE),
//mHint(UNPACK), 
mUsage(GL::STREAM) 
{}

PBO::~PBO(){
//	unmap();
}

void PBO::generate(){
	glGenBuffers(1, &mIdx);
	GL::error("Pbo generate");

	cout << "PBO GENERATED: " << mIdx << "\n" 
	<< mWidth << " x " << mHeight << " numchan: " << mNumChannels 
	<< "#bytes: " << mDataSize << endl;

	bind();
	flush();
	unbind();
}

void PBO::bind(){
	glBindBuffer(mTarget, mIdx);
	GL::error( "pbo bind");
}

void PBO::unbind(){
	glBindBuffer(mTarget, 0);
	GL::error( "pbo unbind");
}

void PBO::copy( uchar * udata, GL::USAGE hint){
	bind();

	glBufferData( mTarget, mDataSize, udata, mUsage);
	GL::error( "pbo copy");

	unbind();
}

/*
//zero out
void PBO::zout(){
	uchar * tmp = map();
	fill(tmp, tmp + dataSize(), 0);
	unmap();
//	new uchar[dataSize()];
//	copy( tmp );
//	delete[] tmp;
}
*/

void PBO::flush(){
	glBufferData( mTarget, mDataSize, 0, mUsage);
	GL::error( "pbo flush");
}

/*
//Remember to unmap afterwards
uchar * PBO::map(Access access){
	bind();
	flush(); //avoids sync issue
	data.ptr = (uchar*) glMapBuffer(mTarget, access);
	GLBackEnd::getError( "pbo map");
	unbind();
	return data.ptr;
}

bool PBO::unmap(){

	bind();
	bool b = glUnmapBuffer(mTarget);
	GLBackEnd::getError( "pbo unmap");
	unbind();
	data.ptr = (uchar *)0;
	return b;
}
*/

void PBO::toTexture(Texture * t){

	glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
	glPixelStorei(GL_PACK_ALIGNMENT, 1);

	t->bind();
	bind();

	// pass ptr offset(0)
	switch(t -> target()){
		case GL_TEXTURE_2D:
			glTexSubImage2D( t->target(), 0, 0, 0, mWidth, mHeight, mFormat, mType, 0);
			break;
	}
	
	GL::error( "pbo to texture");	
	unbind();
	t->unbind();
}

} //con::