/*
 *  vsr_gl_pbo.h
 *  CONGA_07
 *
 *  Created by x on 1/9/11.
 *  Copyright 2011 x. All rights reserved.
 *
	Muro mod
 */
#ifndef VSR_GL_PBO_H_INCLUDED
#define VSR_GL_PBO_H_INCLUDED

#include "vsr_gl.h"
#include "vsr_gl_texture.h"

namespace vsr {

	class PBO {

		private:
			
			typedef unsigned char uchar;
		
			int mWidth, mHeight, mDepth, mSize, mDataSize, mNumChannels;
			
			GLenum mType, mFormat;
			
			union {
				uchar* ptr;
				short* s;
				int* i;
				float* fl;
				double* db;
			} data;
			
			
			GLuint mIdx, mPrevIdx;
			
			GL::TARGET mTarget;
			GL::USAGE mUsage;
			
		
		public:
			
			PBO();
			PBO(int,int,int,int);
			~PBO();
			
			void generate();
			void bind();
			void unbind();
			
			///copy data to PBO
			void copy( uchar * data, GL::USAGE = GL::STREAM );
			///zero out data in PBO
			void zout();
			///flush data in PBO
			void flush();

/*
			///get ptr to data in PBO
			uchar * map( Access acc = WRITE );			//Copy Texture Data here
			///release data
			bool unmap();
*/			
			//send to texture
			void toTexture(Texture * t);
			
			int idx() const { return mIdx; }
			
			int width() const { return mWidth; }
			int height()const { return mHeight; }
			int depth() const { return mDepth;  }
			int size()	const { return mSize; }
			int dataSize() const  {return mDataSize; }
			int numChannels() const { return mNumChannels; }
            
            
            
            void getSize() { glGetBufferParameteriv ( mTarget, GL_BUFFER_SIZE, &mSize ); }
	};

} // con::

#endif