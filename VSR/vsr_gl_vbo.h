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
#include "vsr_gl_vattrib.h"

namespace vsr {

    //vertex data can be interleaved with color info, etc, watch for packing bit alignments!

	class VBO {
	
		private:
		
			typedef unsigned char uchar;
		
			GLuint				mId;			///< Unique buffer ID

            GL::TYPE			mType;			///< type of the buffer (for RTVBO operations)
        
            GL::FORMAT			mFormat;		///< format of the buffer (for RTVBO operations)
            
            GL::BUFFER			mTarget;		///< Specifies the target buffer object being mapped (vertex or index? or pixel (un)pack)
            GL::USAGE			mUsage;			///< Specifies how the buffer will be used, dynamic, etc

            GLsizeiptr          mDataSize;		///< Size of buffer in bytes
			
			GLvoid *			mData;			///< user data
        
            GLuint              mOffset;            ///< offset into buffer
			
           GLuint mNum;                        ///< Number of Vertices
			
		public:
		        
            GLuint id() const { return mId; }
        
			VBO();
			
//            VBO(GLvoid * udata, int num,  GLsizeiptr s, GL::BUFFER = GL::VERTEXBUFFER, GL::USAGE use = GL::STATIC);
            VBO(GLvoid * udata, int num, GLsizeiptr s, GL::BUFFER = GL::VERTEXBUFFER, GL::USAGE use = GL::STATIC);
            void set(GLvoid * udata, int num, GLsizeiptr s, GL::BUFFER = GL::VERTEXBUFFER );
        
//            void set(GLvoid * udata, int num,  GLsizeiptr s, GL::BUFFER = GL::VERTEXBUFFER );
            void target(GL::BUFFER t) { mTarget = t; }
        
            void generate(GLvoid * udata,  GLsizeiptr s, GL::BUFFER = GL::VERTEXBUFFER);
			void generate();
		
			void buffer();

			void bind();
			void unbind();
            void null();
            void offset(GLuint n ) { mOffset = n; }
            
            void usage(GL::USAGE u) { mUsage = u; }
			
            void update();
			void draw(GLenum);
            void drawArray(GLenum = GL_LINE_LOOP);
            void drawElements(GLenum = GL_TRIANGLES, int num = -1, int off = 0);
            void enable();
            void disable();
            
            GLsizeiptr size() const { return mDataSize; }
            GLuint num() const { return mNum; }
            
//            static void DrawElements(GLenum, GLvoid *);
//			void map(GLenum);
//			void unmap();
            
	};
	
//    void VBO::DrawElements(GLenum g, GLvoid * offset){
//        
//    }
    
    /// Double Buffer (vertex and elements)
    struct DBO{
        VBO vertex, index;
        VBO& operator [] (int idx) { return (&vertex)[idx]; }
        VBO operator [] (int idx) const { return (&vertex)[idx]; }
    };
    
} // con::

#endif