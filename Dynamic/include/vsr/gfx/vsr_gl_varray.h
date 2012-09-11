/*
 *  vsr_gl_varray.h
 *  CONGA_07
 *
 *  Created by x on 1/9/11.
 *  Copyright 2011 x. All rights reserved.
 /*!
 
 points to data
 
 */

#ifndef VSR_GL_VARRAY_H_INCLUDED
#define VSR_GL_VARRAY_H_INCLUDED

#include "vsr_gxlib.h"
#include "vsr_gl_shader.h"

#include "vsr_gfxdata.h"

namespace vsr {
    
    class DisplayList {
    public:
        DisplayList() : mID(0) {}
        ~DisplayList() { clear(); }
        
        void begin() {
            if (mID)
                //glDeleteLists(mID, 1);
                mID = 0;//glGenLists(1);
            //glNewList(mID, GL_COMPILE);
        }
        void end(){}// { glEndList(); }
        void draw(){}// { glCallList(mID); }
        void clear(){}// { glDeleteLists(mID, 1);}
        
        unsigned long mID;
    };

    class VArray {

		private:
		
			GLenum mTarget;		///< Vertex or Element (indices)
			GLenum mVType;		///< GL_FLOAT, etc
			GLenum mIType;		///< GL_UNSIGNED_INT, etc
			GLenum mMode;		///< GL_QUADS or LINES, etc
			GLuint mSize;		///< Size of Vertex (2,3 or 4)
			GLsizei mStride;	///< Stride between Vertices (0 is tightly packed)
			
			GLvoid * mVertex;      ///< Vertex array pointer
            GLvoid * mColor;       ///< Color array
			GLuint  * mIndex;       ///< Vertices index pointer	
			
			int mNumVert;			///< Size of Vertex Array
			int mNumIdx;			///< Size of Index Array
			
		public:
		
			VArray();
            VArray( GLvoid * ptr, int numvert, int size = 3, int stride = 0 ); 
			
            void stride(GLsizei g) { mStride = g; }
			void vertex(GLvoid * g) { mVertex = g; }
//			GLvoid& vertex() { return *mVertex; }
//			GLvoid vertex() const { return *mVertex; }
			
			void index(GLuint* g) { mIndex = g; }
			GLuint& index() { return *mIndex; }
			GLuint index() const { return *mIndex; }
			
			void numVert(int n) { mNumVert = n; }
			int& numVert()		{ return mNumVert; }
			int numVert()	const { return mNumVert; }

			void numIdx(int n) { mNumIdx = n; }
			int& numIdx()		{ return mNumIdx; }
			int numIdx()	const { return mNumIdx; }

			static void enable(GLenum t = GL_VERTEX_ARRAY);
			static void disable(GLenum t = GL_VERTEX_ARRAY);

			void vertexPointer();
            void colorPointer();
            void drawArrays();
			void drawElements();
			void drawRange();
			void draw();

			
	};
    
    class VAttrib {
      
    public:  
        VAttrib() : bNormal(GL_FALSE), mStride(0), mData(NULL) {}
        
        //Pass in a ShaderProgramID, attribute name, and packing
        VAttrib( GLuint s, string attrib, GLsizei stride = 0 ) 
        : bNormal(GL_FALSE), mStride(stride), mData(NULL) {
            
            get(s, attrib);
        }
        
        void att(const Attribute& a) { mAtt = a; }
        
        void get( GLuint sprog, string attrib) {

            printf("program: %d string: %s \n", sprog, attrib.c_str());
            
            mAtt.id = glGetAttribLocation(sprog, attrib.c_str()); 
            
            mAtt.getAttrib(sprog);
            mAtt.print();
            
            mSize = GL::cmp(mAtt.vectype);
            cout << "components: " << mSize << endl;
            
            GL::error("get vertex attribute");
                        
        }
        
        void normal( GLboolean b)   { bNormal = b; }
        void stride(GLsizei s)      { mStride = s; }        
        void data(void * udata)     { mData = (GLvoid*) udata; }
        
        void enable()   {   glEnableVertexAttribArray( mAtt.id );  GL::error("enable vattrib"); }
        void disable()  {   glDisableVertexAttribArray( mAtt.id ); GL::error("disable vattrib");}
        
        static void draw(int n, GL::MODE = GL::LL);
        static void drawElements(int n, void * ptr, GL::MODE, GL::TYPE = GL::UBYTE);

        void pointer(){
            glVertexAttribPointer(mAtt.id, mSize, mAtt.type, bNormal, mStride, mData);  
            GL::error("pointer");
        }

        void pointer(GLuint offset){
            glVertexAttribPointer(mAtt.id, mSize, mAtt.type, bNormal, mStride, (GLvoid*) offset);  
            GL::error("pointer");
        }
        
        GLuint id() const { return mAtt.id; }
        
    private:
        
        GLboolean bNormal;      //normalize?
        GLsizei mStride;
        GLint mSize;            //must be 1,2,3,4
        
        GLvoid * mData;
        
        Attribute mAtt;
    };

    inline void VAttrib::draw(int n, GL::MODE mode) { 
        glDrawArrays(mode, 0, n); 
        GL::error("vattrib draw");
    }

    inline void VAttrib::drawElements(int n, void * ptr, GL::MODE mode, GL::TYPE t ) { 
        glDrawElements(mode, n, t, ptr ); 
        GL::error("vattrib drawelements");
    }
    

} // vsr::

#endif