/*
//  vsr_gl_vao.h
//  opengles_00
//
//  Created by x on 5/25/11.
//  Copyright 2011 x. All rights reserved.

Vertex Array Object 

 Vertex array object for hardcoding pipeline instructions into pipeline

 Unlike texture objects or Buffer Objects, VAOs are pure state objects; they do not contain any large blocks of data or anything.
 
 this "extension allows you to combine a collection of buffer pointers into a single OpenGL object, 
 allowing you to change all the buffer pointers by binding a different vertex array object
 
 
*/

#ifndef VSR_GL_VAO_H_INCLUDED
#define VSR_GL_VAO_H_INCLUDED

#include "vsr_gxlib.h"
#include "vsr_gl_vbo.h"

namespace vsr {
	
    class VAO {
    
        GLuint mIdx;
        
        GLboolean bNorm;
        GLuint mSize;
        GL::TYPE mType;
       // GL::
       
        VBO * mVbo;
        
        public:
            
            void generate(){
				
                glGenVertexArraysAPPLE(1,&mIdx);
                bind();
                
                mVbo -> bind();   
                             
//                glVertexAttribPointer(GL::POS, mSize, mType , bNorm, 0, data);

                glBindBuffer(GL_ARRAY_BUFFER, mIdx);
                
                unbind();
                
            }
            
            
           void bind(){
                glBindVertexArrayAPPLE (mIdx);  
                              

            }
             
           void unbind(){
                // Bind back to the default state.
                glBindBuffer(GL_ARRAY_BUFFER,0);
                glBindVertexArrayAPPLE (0); 
            }
    };

} //vsr::

#endif