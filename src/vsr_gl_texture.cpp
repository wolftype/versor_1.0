/*
 *  vsr_gl_texture.cpp
 *  CONGA_07
 *
 *  Created by x on 1/5/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

#include "vsr_gl_texture.h"
#include <math.h>
#include <iostream>
#include "vsr_matrix.h"
//#include "vsr_gl_fbo.h"
//#include "vsr_gl_pbo.h"

namespace vsr {

using namespace std;

Texture::Texture( GLvoid * d, int w, int h, GL::TYPE t, GL::FORMAT inf, GL::TEXTURE textarget  ) :
mData(d), mNumChannels(  GL::planes( inf )   ),
mWidth(w), mHeight(h), 
mType(t), mIdx(0),
mFormat( inf ), mIFormat(inf),
mTarget(textarget)
{
    print();
    generate();
}    
    
Texture::Texture( int _w, int _h, int _d,  GL::TEXTURE targ) :
mWidth(_w), mHeight(_h), mDepth(_d), 
mData(NULL), mNumChannels(4),           //DEFAULTS
mType(GL_UNSIGNED_BYTE), mIdx(0),       //DEFAULTS
mFormat(GL_RGBA), mIFormat(GL_RGBA),    //DEFAULTS
mTarget(targ)
//mFbo(NULL), mPbo(NULL)
{
	int i = init();	
}
    
Texture::Texture(string filename) :
mWidth(0), mHeight(0), mDepth(0), mData(NULL),                      
mType(GL_UNSIGNED_BYTE), mNumChannels(4),                           //DEFAULTS
mFormat(GL_RGBA), mIFormat(GL_RGBA), mTarget(GL_TEXTURE_2D),        //DEFAULTS
//mVideo(NULL), mImage(NULL),
 mIdx(0)
//mFbo(NULL), mPbo(NULL), 
{
//	mFbo = new FBO();
//	mPbo = new PBO();
//	loadImage(filename);
}

Texture::~Texture(){
	
//	if(mFbo) delete mFbo;
//	if(mPbo) delete mPbo;
	if(mData) delete[] mData;
}

//FBO& Texture::fbo()  { return *mFbo; }
//PBO& Texture::pbo() { return *mPbo; }

int Texture::init(){

	//alloc();
	generate();
	
	mData = NULL;
   
   	cout << "NEW TEXTURE INSTANCE: " << mIdx << endl;
         	
	return mIdx;
}




//allocates memory on CPU (use generate() to allocate memory on GPU)
void Texture::alloc(){

	int size = dataSize();
	if(mData) delete[] mData;
	
	mData = new unsigned char [ size ];
	int * ptr = (int*)mData;

	cout << "allocated texture: " << mWidth << " x " << mHeight << " #bytes " <<  size << endl;
	
	for (int i = 0; i < numTexels(); ++i){
		int r = floor (255.0 * i/dataSize());
		Color c(r, 20, 10,255);
		ptr[i] = c.pack();
	}

}



GLint Texture :: loadData(void * data){

	if(mData) delete[] mData;
	generate();
	return mIdx;
}	

void Texture::activate() const{ 
//	glGetIntegerv( GL_ACTIVE_TEXTURE_ARB, &mPrev);
	glActiveTexture( GL_TEXTURE0 + mIdx ); 
	GL::error("texture activate");
}

void Texture::enable()	const { glEnable( mTarget );  GL::error( "Texture Enable" ); }
                                                        
void Texture::disable() const { glDisable( mTarget ); GL::error("Texture Disable" ); }

void Texture::bind()	const { 

//	activate();
//	enable();
//	activate(); 
	// multitexturing
//	mPrevIdx = tmp_id;

//	glActiveTextureARB( getMultiTexUnit(unit) );	
//	activate();
	glBindTexture( mTarget, mIdx ); 
	GL::error("texture bind");
	
}

void Texture::unbind() const {

    glBindTexture( mTarget, 0 );
    GL::error("texture unbind");	
}

//copy back buffer
void Texture::copy()	{ 
	bind();  
}

void Texture::update()	{ 
//	activate();
	bind(); 

    //assumes no cubemap
    glTexSubImage2D(mTarget, 0, 0, 0, mWidth, mHeight, mFormat, mType, (GLvoid *)mData);
	

	GL::error("texture update");	
	unbind();
}



void Texture::setDefaultParam() {	

//    glTexParameteri( mTarget, GL_TEXTURE_WRAP_S, GL_REPEAT);
//    glTexParameteri( mTarget, GL_TEXTURE_WRAP_T, GL_REPEAT);
//    
    //2D Sampling Large Texels (linear or nearest
    glTexParameteri( mTarget, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    //2D Sampling Small Texels //GL_LINEAR_MIPMAP_NEAREST
    glTexParameteri( mTarget, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

    GL::error("Texture Set Default Param");
	//autogenerate mipmaps
	//glTexParameteri( mTarget, GL_GENERATE_MIPMAP, true );
	
	//Environment (only if there is no fragment shader)
	//glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
}

void Texture::generate() {

	glGenTextures(1, &mIdx);
    cout << "TEX ID: " << mIdx << endl; 
	GL::error("texture generate");
	
	glBindTexture(mTarget, mIdx); 
	GL::error("texture generate first bind");
	
	setDefaultParam(); 
	
    if (mTarget != GL::CUBEMAP){
        glTexImage2D (mTarget, 0, mIFormat, mWidth, mHeight, 0, mFormat, mType,  mData);
        GL::error("texture generate assignment");
    } else {
        for (int i = 0;i<6;++i){
            glTexImage2D (GL_TEXTURE_CUBE_MAP_POSITIVE_X+i, 0, mIFormat, mWidth, mHeight, 0, mFormat, mType,  mData);
        }
    }

//	glGenerateMipmap(mTarget);	
//	GL::error("texture generate mip map");
	
	mData = NULL;
	
	unbind();
}




//deprecated
/*
//void Texture::startCapture(){
//	mFbo -> startCapture(this);
//}
//
//void Texture::endCapture(){
//	mFbo -> endCapture();
//}

int Texture::loadRawImage(string filename){

	mTarget = GL_TEXTURE_2D;

	if(mData) delete[] mData;
	mData = new unsigned char [dataSize()];

	string name = filename;
	
	ifstream inputFile(name.c_str(), ios::binary);	
	inputFile.read( (char *) mData, mWidth * mHeight * mNumChannels );	
	inputFile.close();
	
	generate(); 
	
	delete[] mData;
	return mIdx;
}

int Texture :: loadImage( string filename ){

	mTarget = GL_TEXTURE_2D;
	if(mData) delete[] mData;

	Image timg(filename);

	mWidth	= timg.width();
	mHeight = timg.height();
	mDepth  = 1;
	mData	= timg.data();	//set pointer to image data
	
	mFormat = GL_BGR;
	mType   = GL_UNSIGNED_BYTE;
	
	mIFormat = 3;//GL_RGB;
	
	generate();
	
	mData = NULL;
	timg.release();
//	timg.unload();
	return mIdx;
}

int Texture :: loadImage( Image timg ){

	mTarget = GL_TEXTURE_2D;
	if(mData) delete[] mData;

	mWidth	= timg.width();
	mHeight = timg.height();
	mDepth  = 1;
	
	mData	= timg.data();	//set pointer to image data
	
	mFormat = GL_BGR;
	mType   = GL_UNSIGNED_BYTE;
	
	mIFormat = 3;//GL_RGB;
	
	generate();
	
	mData = NULL;
	timg.release();
//	timg.unload();
	return mIdx;
}

GLint Texture :: loadVideo(string filename){

	mTarget = GL_TEXTURE_2D;
	if(mData) delete[] mData;

	mVideo = new Video(filename);
	
	mFormat  = GL_BGR	;
	mIFormat = 3;
	mNumChannels = 3;

	mType   = GL_UNSIGNED_BYTE;
	
	mWidth	= mVideo -> width();
	mHeight = mVideo -> height();

	mDepth  = 1;

	mData = mVideo -> data();
	
	generate();
	
	mData = NULL;
	return mIdx;
}

//deprecate this stuff it's confusing!
//void Texture::grabPBO(){
//
//	if(!mIdx){
//		cout << "init texture from pbo grab" << endl;
//		init();
//	}
//
//	if(!mPbo) {
//		cout << "texture calls for new pbo: " 
//		<< mWidth << " x " << mHeight << endl;
//		mPbo = new PBO(mWidth, mHeight, mDepth, mNumChannels);
//		mPbo -> generate();
//	}
//	
//	mPbo -> toTexture(this);
//}

*/
	
} //vsr::