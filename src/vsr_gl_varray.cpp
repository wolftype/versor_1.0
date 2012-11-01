/*
 *  vsr_gl_varray.cpp
 *  CONGA_07
 *
 *  Created by x on 1/9/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

#include "vsr.h"
#include "vsr_gl_varray.h"


namespace vsr {

//Static State Changes
//void VArray :: enable(GLenum target)  { glEnableClientState( target );    GL::error("Enable Vertex Arrays");}
//void VArray :: disable(GLenum target) { glDisableClientState( target );    GL::error("Disable Vertex Arrays");}

//void VArray :: vpoint(GLfloat * f) { 


//VArray :: VArray() : 
//mTarget(GL_VERTEX_ARRAY), 
//mVType(GL_FLOAT), 
//mIType(GL_UNSIGNED_BYTE), 
//mSize(3), mStride(0),
//mMode(GL_TRIANGLES),    
//mVertex(0)    
//{}

//VArray :: VArray( GLvoid * ptr, int numvert, int size, int stride ) :
//mTarget(GL_VERTEX_ARRAY), 
//mVType(GL_FLOAT), 
//mIType(GL_UNSIGNED_BYTE), 
//mSize(size), mStride(stride),
//mMode(GL_TRIANGLES),    
//mVertex(ptr), mNumVert( numvert ) 
//{
////    printf("num vert: %d\n", mNumVert);
//    //vertexPointer();
//}
    
    
//    void VArray :: vertexPointer() {
//        //args: num of elements, data type, stride, ptr to data
//        glVertexPointer( mSize, mVType, mStride, mVertex );
//           GL::error("Point To Vertex Arrays");
//    }
//
//    void VArray :: colorPointer() {
//        glColorPointer( mSize, mVType, mStride, mVertex );
//        GL::error("Point To Color Arrays");
//    }
    
//    void VArray :: drawArrays() {
//        //draw mode, offset into ptr, number to draw
//        glDrawArrays( mMode, 0, mNumVert );
//        GL::error("Draw Vertex Arrays");
//    }
//
//    void VArray :: drawElements(){
//        glDrawElements( mMode, mNumIdx, mIType, mIndex );
//    }

//    void VArray :: drawRange(){
//    
//    }

//    void VArray :: draw(){
//        enable(mTarget); 
//
//        vertexPointer();
//        //if (bColors)
//        (mTarget == GL_VERTEX_ARRAY) ? drawArrays() : drawElements();
//
//        disable(mTarget);
//    }
//
//    void VArray :: Draw(void * udata){
////            VArray :: enable(GL_VERTEX_ARRAY); //Enable Vertex Array
////            VArray :: enable(GL_COLOR_ARRAY);
////                        
////            Mesh& mesh = *(Mesh*)udata;            
////            float * f = &(mesh)[0].Pos[0];
////            float * c = &(mesh)[0].Col[0];
////                             
////            VArray tmp( f, mesh.num(), 3, sizeof(Vec3f) ) ;
////            VArray col( c, mesh.num(), 4, sizeof(Vec4f) ) ;
////
////            tmp.stride(0);//sizeof(Vec3f));
////            col.stride(0);//sizeof(Vec3f));
////            
////            tmp.vertexPointer();
////            col.colorPointer();
////            
////            tmp.drawArrays();        
////                
////            
////            VArray :: disable();
////            VArray :: disable(GL_COLOR_ARRAY);
//    }

} //con::