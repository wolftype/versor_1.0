/*
 *  vsr_gl_vbo.h
 *  CONGA_07
 *
 *  Created by x on 1/9/11.
 *  Copyright 2011 x. All rights reserved.
 *
	some ripped from wes smith's muro
 */

#ifndef VSR_GL_VBO_H_INCLUDED
#define VSR_GL_VBO_H_INCLUDED

#include "vsr_gxlib.h"
#include "vsr_gl_varray.h"

namespace vsr {

    //vertex data can be interleaved with color info, etc, watch for packing bit alignments!

	class VBO {
	
		private:
		
			typedef unsigned char uchar;
		
			//int mWidth, mHeight;
        
            

			GLuint				mId;			///< Unique buffer ID

            GL::TYPE			mType;			///< type of the buffer (for RTVBO operations)
        
            GL::FORMAT			mFormat;		///< format of the bufer (for RTVBO operations)
            
            GL::BUFFER			mTarget;		///< Specifies the target buffer object being mapped (vertex or index? or pixel (un)pack)
            GL::USAGE			mUsage;			///< Specifies how the buffer will be used, dynamic, etc

            GLsizeiptr          mDataSize;		///< Size of buffer in bytes
			
			GLvoid*				mData;			///< user data
        
            GLuint              mOffset;            ///< offset into buffer
			
//			union {
//				uchar* ptr;
//				short* s;
//				int* i;
//				float* fl;
//				double* db;
//			} data;
            		
//			GLuint mIdx, mPrevIdx;
            GLuint mNum;                        ///< Number of Vertices
			
		public:
		
            VAttrib              attrib;                                        ///< Vertex Attribute
        
			VBO();
			
            VBO(void * udata, int num, GL::BUFFER = GL::VERTEXBUFFER);
        
            void set(void * udata, int num, GL::BUFFER = GL::VERTEXBUFFER );
            void target(GL::BUFFER t) { mTarget = t; }
        
            void generate(void * udata, int num, GL::BUFFER = GL::VERTEXBUFFER);
			void generate();
		
			void buffer();

			void bind();
			void unbind();
            void null();
            void offset(GLuint n ) { mOffset = n; }
            
			void update();
			void draw(GLenum);
            void drawArray(GLenum = GL_LINE_LOOP);
            void drawElements(GLenum = GL_TRIANGLES);
            void enable();
            void disable();
            
//			void map(GLenum);
//			void unmap();
            
	};
	
} // con::

#endif