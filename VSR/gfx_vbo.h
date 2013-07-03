/*
 *  vsr_gl_vbo.h
 *  cuttlefish
 *
 *  Created by x on 1/9/11.
 *  Copyright 2011 x. All rights reserved.
 *
	some ripped from wes smith's muro
 */

#ifndef GFX_VBO_H_INCLUDED
#define GFX_VBO_H_INCLUDED

#include "gfx_lib.h"
#include "gfx_vattrib.h"

namespace gfx {

    ///Vertex Buffer Object. Vertex data can be interleaved with color info, etc, watch for packing bit alignments!
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
        
            VBO() : mId(0) ,
            mType(GL::USHORT),
            mFormat(GL::RGB), 
            mTarget(GL::VERTEXBUFFER),
            mUsage(GL::DYNAMIC),
            mOffset(0),
            mNum(0),
            mDataSize(0),
            mData(NULL)
            { }
			
//            VBO(GLvoid * udata, int num,  GLsizeiptr s, GL::BUFFER = GL::VERTEXBUFFER, GL::USAGE use = GL::STATIC);
            VBO(GLvoid * udata, int num, GLsizeiptr s, GL::BUFFER b = GL::VERTEXBUFFER, GL::USAGE use = GL::STATIC)
            : mId(0),
            mType(GL::USHORT),
            mFormat(GL::RGB), 
            mTarget(b),
            mUsage(use),
            mNum(num),
            mOffset(0),
            mDataSize(s),
            mData(udata)

            {
                generate();        
            }   

			//Copy and Assignment
			
			void data( GLvoid * d ) { mData = d; }
        
            void target(GL::BUFFER t) { mTarget = t; }
        
            void generate(GLvoid * udata,  GLsizeiptr s, GL::BUFFER = GL::VERTEXBUFFER);
            
			void generate() {
                glGenBuffers(1, &mId);	
                cout << "GENERATING VBO id " << mId << endl; 
                GL::error( "vbo gen");
                bind();
                buffer();
                unbind();
            }
		
            void bind() {
                glBindBuffer(mTarget, mId);//arb?
                GL::error( "vbo bind");
            }

            void buffer(){
            //    mDataSize = GL :: dataSize( mFormat, mType, mNum );
                glBufferData(mTarget, mDataSize, mData, mUsage);
                GL::error( "vbo buffer data");
            }    

            void buffer(GLvoid * data){
                mData = data;
                glBufferData(mTarget, mDataSize, mData, mUsage);
                GL::error( "vbo buffer data");
            }    

            void set(GLvoid* udata, int num, GLsizeiptr s, GL::BUFFER t){
                mData = udata;
                mNum = num;
                mTarget = t;
                mDataSize = s;//GL::dataSize(mFormat, mType, mNum);
            }

            void null(){
                mData = NULL;
            }

            void unbind() {
                glBindBuffer(mTarget, 0);//arb?
                GL::error("vbo ubind");
            }

            void update(GLvoid * data ) {
                mData = data;
                bind();
                glBufferSubData( mTarget, 0, mDataSize, mData );
                unbind();
                GL::error( "vbo update data");

            }
            
            void update() {

                bind();
                glBufferSubData( mTarget, 0, mDataSize, mData );
                unbind();
                GL::error( "vbo update data");

            }
			
			template<class T>
            void update(int idx, int num, T * d) {

                bind();
                glBufferSubData( mTarget, idx * sizeof(T), num * sizeof(T), (GLvoid*)d);
                unbind();
                GL::error( "vbo update data");

            }
            
            void offset(GLuint n ) { mOffset = n; }
            
            void usage(GL::USAGE u) { mUsage = u; }
			
			void draw(GLenum);
            void drawArray(GLenum mode = GL_LINE_LOOP){
                glDrawArrays  (mode, 0, mNum);	
                GL::error("vbo draw arrays");
            }
            
            void drawElements(GLenum mode = GL_TRIANGLES, int num = -1, int off = 0){
                glDrawElements ( mode, (num==-1) ? mNum - off : num, mType, (GLvoid *) ( sizeof( mType ) * off ) );	
                GL::error("vbo draw elements");
            }
            void enable();
            void disable();
            
            GLsizeiptr size() const { return mDataSize; }
            GLuint num() const { return mNum; }
            
//			void map(GLenum);
//			void unmap();
            
	};
	
    
    /// Two Buffer (vertex and elements)
    struct VEBO{
        VBO vertex, index;
        VBO& operator [] (int idx) { return (&vertex)[idx]; }
        VBO operator [] (int idx) const { return (&vertex)[idx]; }
    };
    
} // con::

#endif