/*
 *  vsr_gl_texture.h
 *  CONGA_07
 *
 *  Created by x on 1/5/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

#ifndef GFX_TEXTURE_H_INCLUDED
#define GFX_TEXTURE_H_INCLUDED

//#include "vsr_file.h"
//#include "Matrix.h"

#include <iostream>
#include <sstream>
#include <fstream>

#include "gfx_lib.h"
#include "gfx_gl.h"  
//#include "ctl_matrix.h"
#include "gfx_matrix.h" 

namespace gfx {

	using namespace std;

	class Texture {

		private:
        
            typedef unsigned char uchar;
           
            GLvoid * mData;
			
			int mWidth, mHeight, mDepth, mNumChannels;
			
			GLenum mTarget, mFormat, mType;
            GLint mIFormat;
        
			GLuint mIdx;
			GLuint mPrevIdx;
			
		public:

        Texture( GLvoid * d, int w, int h, GL::TYPE = GL::UBYTE, GL::FORMAT = GL::RGBA,  GL::TEXTURE textarget = GL::TEX2D);
        
        Texture(int _w = 128, int _h = 128, int _d = 1,  GL::TEXTURE textarget = GL::TEX2D);
        
        Texture(string);
		
        ~Texture();

			int init();			
			void alloc();
			void generate();
			
			void enable() const;
			void disable() const;
			void activate() const;
			void bind() const;	
			void unbind() const;
            
            
            void set(GL::PARAM a, GL::PARAM b); ///< Set param named a to param b of this texture target
            
			void setDefaultParam();	///< set parameters
			
			void copy();	///< copy back buffer to texture
			void update();	///< refill with new data (substitute image)
			
			void nullBind() { glBindTexture( mTarget, 0 ); disable();} 
			
			GLvoid * data() { return mData; } //get pointer
			void data(unsigned char * v) { mData = v; }
			
			int width()		{ return mWidth; }
			int height()	{ return mHeight; }
			int numChannels(){return mNumChannels; }
			int bpp()		{ return mNumChannels; }
			int numTexels() { return mWidth * mHeight * mDepth; }
			int dataSize()	{ return numTexels() * mNumChannels; }
			
			///Index of uchar bytes
			int idxOfByte(int w = 0, int h = 0, int d = 0) {
				return ( w * mHeight * mDepth + h * mDepth + d ) * mNumChannels;
			}
			
			///Texel (int) idx for RGBA color packed info
			int idxOfTexel(int w = 0, int h = 0, int d = 0) {
				return ( d * mHeight * mWidth + h * mWidth + w );
			}
            
			uchar& byteAt(int w = 0, int h = 0, int d = 0) {
				return ((uchar*)mData)[ idxOfByte(w,h,d) ];
			}
            
			int texelAt( int w = 0, int h = 0, int d = 0 ){
				return ((int*)mData )[idxOfTexel(w,h,d)];
			}
			
			GLuint idx()	const { return mIdx; }
			GLenum target()	const { return mTarget; }
			GLenum format()	const { return mFormat; }
			GLenum type()	const { return mType; }	

			int loadData (void*);
        
            static const void Reset(GL::TEXTURE t= GL::TEX2D){
                glBindTexture(t, 0);
                glDisable(t);
            }
        
        void print(){
            
            std::cout << GL::Get(mTarget) << GL::Get(mFormat) << GL::Get(mType) << "Chan: " << mNumChannels << 
            " datasize: " << dataSize() << " numtexels " << numTexels() << std::endl;
        }
        
        
        static const GLint Current(){
            GLint tmp_id;
            glGetIntegerv(GL_ACTIVE_TEXTURE, &tmp_id);
            return tmp_id;
        }
		
        //Generate and Bind a New Texture2D
        static const GLuint Gen(int width, int height, GL::IFORMAT iformat){
            GLuint tmp;
 
            glGenTextures(1, &tmp);
            GL::error("texture generate");
            
            glBindTexture(GL_TEXTURE_2D, tmp); 
            GL::error("texture bind");
            
            glTexImage2D(GL_TEXTURE_2D, 0, iformat, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);
            GL::error("texture2d");
            
            Unbind();
            
            return tmp;
            
        }
        
        static const void Bind(GLuint id, GL::TEXTURE tex = GL::TEX2D){
            glBindTexture(tex, id);
            GL::error("Tex BIND" );
        }
        
        static void Unbind( GL::TEXTURE target = GL::TEX2D ){
            glBindTexture( target, 0 );
        }
        static void Disable( GL::TEXTURE target = GL::TEX2D){
            glDisable(GL_TEXTURE_2D);
        }

	}; 
	
	
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

   inline  int Texture::init(){

		alloc();
		generate();

	   // mData = NULL;

	   //	cout << "NEW TEXTURE INSTANCE: " << mIdx << endl;

		return mIdx;
	}




	//allocates memory on CPU (use generate() to allocate memory on GPU)
	inline void Texture::alloc(){

		int size = dataSize();
		if(mData) delete[] mData;

		mData = new unsigned char [ size ];
		int * ptr = (int*)mData;

		cout << "allocated texture: " << mWidth << " x " << mHeight << " #bytes " <<  size << endl;

		for (int i = 0; i < numTexels(); ++i){
			int r = floor (255.0 * i/numTexels());
			Color c(r, 20, 10,255);  
			Color c2(0,0,0,0);
			ptr[i] = c2.pack();    
	   // 	cout << c << endl; 
		}

	}



	inline GLint Texture :: loadData(void * data){

		if(mData) delete[] mData; 
		//data lood?
		generate();
		return mIdx;
	}	

	inline void Texture::activate() const{ 
	//	glGetIntegerv( GL_ACTIVE_TEXTURE_ARB, &mPrev);
		glActiveTexture( GL_TEXTURE0 + mIdx ); 
		GL::error("texture activate");
	}

	inline void Texture::enable()	const { glEnable( mTarget );  GL::error( "Texture Enable" ); }

	inline void Texture::disable() const { glDisable( mTarget ); GL::error("Texture Disable" ); }

	inline void Texture::bind()	const { 

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

	inline void Texture::unbind() const {

	    glBindTexture( mTarget, 0 );
	    GL::error("texture unbind");	
	}

	//copy back buffer
	inline void Texture::copy()	{ 
		bind();  
	}

	inline void Texture::update()	{ 
	//	activate();
		bind(); 

	    //assumes no cubemap
	    glTexSubImage2D(mTarget, 0, 0, 0, mWidth, mHeight, mFormat, mType, (GLvoid *)mData);


		GL::error("texture update");	
		unbind();
	}



	inline void Texture::setDefaultParam() {	

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

	inline void Texture::generate() {

		glGenTextures(1, &mIdx);
	    cout << "TEX ID: " << mIdx << endl; 
		GL::error("texture generate");

		glBindTexture(mTarget, mIdx); 
		GL::error("texture generate first bind");

		setDefaultParam(); 

	    if (mTarget != GL::CUBEMAP){  
			cout << "generating 2d texture" << endl;
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

} //ctl::

#endif