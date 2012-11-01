/*
 *  vsr_gl_vbo.cpp
 *  CONGA_07
 *
 *  Created by x on 1/9/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

#include "vsr_gl_vbo.h"


namespace vsr {


//VBO :: VBO() : mId(0) ,
//mType(GL::FLOAT),
//mFormat(GL::RGB), 
//mTarget(GL::VERTEXBUFFER),
//mUsage(GL::DYNAMIC),
//mOffset(0),
//mNum(0),
//mDataSize(0),
//mData(NULL)
//{ }
	
//VBO :: VBO (GLvoid * udata, int num, GLsizeiptr s, GL::BUFFER b, GL::USAGE use) : mId(0),
//mType(GL::FLOAT),
//mFormat(GL::RGB), 
//mTarget(b),
//mUsage(use),
//mNum(num),
//mOffset(0),
//mDataSize(s),
//mData(udata)
//
//{
////    set(udata, n, s,  b);
//    generate();        
//}

//void VBO :: generate(void * udata, GLsizeiptr s, GL::BUFFER b){
////	set(udata, n, s, b);
//	generate();
//}
//	
//void VBO :: generate() {
//	glGenBuffers(1, &mId);	
//    cout << "GENERATING VBO id " << mId << endl; 
//	GL::error( "vbo gen");
//    bind();
//    buffer();
//    unbind();
//}

//void VBO :: bind() {
//	glBindBuffer(mTarget, mId);//arb?
//	GL::error( "vbo bind");
//}
//
//void VBO :: buffer(){
////    mDataSize = GL :: dataSize( mFormat, mType, mNum );
//    glBufferData(mTarget, mDataSize, mData, mUsage);
//    GL::error( "vbo buffer data");
//}    
//
//void VBO :: set(GLvoid* udata, int num, GLsizeiptr s, GL::BUFFER t){
//	mData = udata;
//    mNum = num;
//    mTarget = t;
//	mDataSize = s;//GL::dataSize(mFormat, mType, mNum);
//}
//
//void VBO :: null(){
//	mData = NULL;
//}
//
//void VBO :: unbind() {
//	glBindBuffer(mTarget, 0);//arb?
//    GL::error("vbo ubind");
//}
//
//void VBO :: update() {
//
//	bind();
//	glBufferSubData( mTarget, 0, mDataSize, mData );
//	unbind();
//	GL::error( "vbo update data");
//
//}

//void VBO :: drawArray(GLenum mode) {
// //   bind();
// 
////        glEnableClientState(GL_VERTEX_ARRAY);
//    
//            //glVertexPointer (3, mType, 0, (GLvoid*)mOffset);    
////            enable();
//            
//            glDrawArrays  (mode, 0, mNum);	
//            GL::error("vbo draw arrays");
//    
////            disable();
////        glDisableClientState(GL_VERTEX_ARRAY);
//
////    unbind();
//}

//void VBO :: drawElements(GLenum mode, int num, int off) {
////    bind();
//    
////    glEnableClientState(GL_VERTEX_ARRAY);
////    glVertexPointer(3, GL_FLOAT, 0, 0);  
//
// //   enable();
////    int adjust = *(int*)off; 
////    cout << mNum-adjust << endl; 
//
//
//    
//    glDrawElements ( mode, (num==-1) ? mNum - off : num, GL::UINT, (GLvoid *) ( sizeof( GLuint ) * off ) );	
//    GL::error("vbo draw elements");
////    disable();
//    
////    glDisableClientState(GL_VERTEX_ARRAY);
//    
////    unbind();
//}

//void VBO :: enable(){
//    attrib.pointer(mOffset);
//    attrib.enable();
//    GL::error("vbo attrib enable");
//}
//
//void VBO::disable(){
//    attrib.disable();
//    GL::error("vbo attrib disable");
//}

//    void VBO :: pointer(GLenum slot){
//        glVertexAttribPointer(att, GL::AttributeSize[att], GL::AttributeType[att], GL::AttributeNormalizeBoolean[att], sizeof(GL::Vertex), (GLvoid*)GL::AttributeOffset[att]); 
//    }
    
////get data
//void VBO :: map(GLenum access) {
//	bind();
//	data.ptr = (uchar *)glMapBuffer(mTarget, access);
//	unbind();
//	GLBackEnd::getError( "vbo map data");
//}

////leave data
//void VBO :: unmap() {
//	bind();
//	glUnmapBufferARB(mTarget);
//	unbind();
//	data.ptr = (uchar *)0;
//	GLBackEnd::getError( "vbo unmap data");
//}

} //con::
