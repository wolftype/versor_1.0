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

#include "vsr.h"
#include "vsr_gl.h"
#include "vsr_gfxdata.h"
#include "vsr_mesh.h"

//#include "vsr_gl_shader.h"



namespace vsr {
    
//    class DisplayList {
//    public:
//        DisplayList() : mID(0) {}
//        ~DisplayList() { clear(); }
//        
//        void begin() {
//            if (mID)
//                //glDeleteLists(mID, 1);
//                mID = 0;//glGenLists(1);
//            //glNewList(mID, GL_COMPILE);
//        }
//        void end(){}// { glEndList(); }
//        void draw(){}// { glCallList(mID); }
//        void clear(){}// { glDeleteLists(mID, 1);}
//        
//        unsigned long mID;
//    };

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
			GLubyte  * mIndex;       ///< Vertices index pointer	
			
			GLuint mNumVert;			///< Size of Vertex Array
			GLuint mNumIdx;			///< Size of Index Array
			
		public:
		
			VArray() :
            mTarget(GL_VERTEX_ARRAY), 
            mVType(GL_FLOAT), 
            mIType(GL_UNSIGNED_BYTE), 
            mSize(3), mStride(0),
            mMode(GL_TRIANGLES),    
            mVertex(0)    
            {}
            
            VArray( GLvoid * ptr, int numvert, int size, int stride ) :
            mTarget(GL_VERTEX_ARRAY), 
            mVType(GL_FLOAT), 
            mIType(GL_UNSIGNED_BYTE), 
            mSize(size), mStride(stride),
            mMode(GL_TRIANGLES),    
            mVertex(ptr), mNumVert( numvert ) 
            {
            //    printf("num vert: %d\n", mNumVert);
                //vertexPointer();
            }
			
            void stride(GLsizei g) { mStride = g; }
			void vertex(GLvoid * g) { mVertex = g; }
//			GLvoid& vertex() { return *mVertex; }
//			GLvoid vertex() const { return *mVertex; }
			
			void index(GLubyte* g) { mIndex = g; }
			GLubyte& index() { return *mIndex; }
			GLubyte index() const { return *mIndex; }
			
			void numVert(int n) { mNumVert = n; }
			GLuint& numVert()		{ return mNumVert; }
			GLuint numVert()	const { return mNumVert; }

			void numIdx(int n) { mNumIdx = n; }
			GLuint& numIdx()		{ return mNumIdx; }
			GLuint numIdx()	const { return mNumIdx; }

			static void enable(GLenum t = GL_VERTEX_ARRAY){ glEnableClientState( t );    GL::error("Enable Vertex Arrays");}
			static void disable(GLenum t = GL_VERTEX_ARRAY){ glDisableClientState( t );    GL::error("Disable Vertex Arrays");}


			void vertexPointer() {
                glVertexPointer( mSize, mVType, mStride, mVertex );
                GL::error("Point To Vertex Arrays");
            }
            
            void colorPointer(){
                glColorPointer( mSize, mVType, mStride, mVertex );
                GL::error("Point To Color Arrays");
            }
            void drawArrays(){
                //draw mode, offset into ptr, number to draw
                glDrawArrays( mMode, 0, mNumVert );
                GL::error("Draw Vertex Arrays");
            }
			void drawElements(){
                glDrawElements( mMode, mNumIdx, mIType, mIndex );
            }
			void drawRange();
			void draw(){
                enable(mTarget); 

                vertexPointer();
                //if (bColors)
                (mTarget == GL_VERTEX_ARRAY) ? drawArrays() : drawElements();

                disable(mTarget);
            }
            
            //pass in a mesh
            static void Draw(void * udata){
                VArray :: enable(GL_VERTEX_ARRAY); //Enable Vertex Array
                VArray :: enable(GL_COLOR_ARRAY);
                            
                Mesh& mesh = *(Mesh*)udata;            
                float * f = &(mesh)[0].Pos[0];
                float * c = &(mesh)[0].Col[0];
                                 
                VArray tmp( f, mesh.num(), 3, sizeof(Vec3f) ) ;
                VArray col( c, mesh.num(), 4, sizeof(Vec4f) ) ;

                tmp.stride( sizeof(Vertex) );//0);//sizeof(Vec3f));
                col.stride( sizeof(Vertex) );//0);//sizeof(Vec3f));
                
                tmp.vertexPointer();
                col.colorPointer();
                
                tmp.drawArrays();        
                    
                
                VArray :: disable(GL_VERTEX_ARRAY);
                VArray :: disable(GL_COLOR_ARRAY);
            } 

            //pass in a mesh
            static void DrawElements(void * udata){
                VArray :: enable(GL_VERTEX_ARRAY); //Enable Vertex Array
                VArray :: enable(GL_COLOR_ARRAY);
                            
                Mesh& mesh = *(Mesh*)udata;            
                float * f = &(mesh)[0].Pos[0];
                float * c = &(mesh)[0].Col[0];
                GLuint * idx = &mesh.indices()[0];
                                 
                VArray tmp( f, mesh.num(), 3, sizeof(Vertex) ) ;
                VArray col( c, mesh.num(), 4, sizeof(Vertex) ) ;
                
                tmp.vertexPointer();
                col.colorPointer();
                
//                tmp.index( idx) );
//                tmp.numIdx( mesh.numIdx() );
//                tmp.drawElements();        
//                    
//                
//                VArray :: disable(GL_VERTEX_ARRAY);
//                VArray :: disable(GL_COLOR_ARRAY);
            } 
			
	};
    
 

} // vsr::

#endif