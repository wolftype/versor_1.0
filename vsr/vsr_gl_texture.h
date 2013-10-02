/*
 *  vsr_gl_texture.h
 *  CONGA_07
 *
 *  Created by x on 1/5/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

#ifndef VSR_GL_TEXTURE_H_INCLUDED
#define VSR_GL_TEXTURE_H_INCLUDED

//#include "vsr_file.h"
//#include "Matrix.h"

#include <iostream>
#include <sstream>
#include <fstream>

#include "vsr_gxlib.h"
#include "vsr_gl.h"

namespace vsr {

	using namespace std;
	
//	class FBO;
//	class PBO;

	class Texture {

		private:
        
            typedef unsigned char uchar;
           
//			unsigned char * mData;
            GLvoid * mData;
			
			int mWidth, mHeight, mDepth, mNumChannels;
			
			GLenum mTarget, mFormat, mType;
            GLint mIFormat;
        
			GLuint mIdx;
			GLuint mPrevIdx;
			
//			FBO * mFbo;        ///< (render to texture)
//			PBO * mPbo;        ///< 
			
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

//			FBO& fbo();
//			PBO& pbo();
			
//			void startCapture();
//			void endCapture();
			
//			void grabPBO();

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

/*
	class Billboard : public Frame {
		
		int mWidth, mHeight, mResWidth, mResHeight;
		
		Texture * mTex;
		
		public:
			Billboard( int wres, int hres, int w = 1.0, int h = 1.0 ) : 
			mWidth(w), mHeight(h), mResWidth(wres), mResHeight(hres), mTex(NULL) {
				mTex = new Texture(mResWidth, mResHeight);
			}
			
			~Billboard(){ if (mTex) delete mTex; }
			
			Texture& tex() { return *mTex; }
			
			void resize( int wres, int hres){
				if (mTex) delete mTex;
				mResWidth = wres; mResHeight= hres;
				mTex = new Texture(wres, hres);
			}
			
			void drawLoop(){
				mTex -> bind();
				glColor3f(1,1,1);
				
				push();
//				glPushMatrix();
					//glTranslatef(
					glBegin(GL_QUADS);
					
						glTexCoord2f(0.f,0.f);
						glVertex3f(-mWidth/2.0, -mHeight/2.0,0);
						
						glTexCoord2f(1.f,0.f);
						glVertex3f(mWidth/2.0, -mHeight/2.0,0);

						glTexCoord2f(1.f,1.f);
						glVertex3f(mWidth/2.0,mHeight/2.0,0);

						glTexCoord2f(0.f,1.f);			
						glVertex3f(-mWidth/2.0, mHeight/2.0,0);
						
					glEnd();
				pop();	
//				glPopMatrix();
				mTex->unbind();
			}
				
	};

*/
} //con::

#endif