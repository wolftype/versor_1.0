//
//  vsr_gl_vattrib.h
//  Versor
//
/*

    Vertex Attribute Data
*/

//  Created by Pablo Colapinto on 10/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef GFX_gl_vattrib_h
#define GFX_gl_vattrib_h

#include "gfx_shader.h"

namespace gfx {

   class VAttrib {
      
    public:  
        VAttrib() : bNormal(GL_FALSE), mStride(0), mData(NULL) {}
        
        //Pass in a ShaderProgramID, attribute name, and packing
        VAttrib( GLuint s, string attrib, GLsizei stride, GLint size = 3 ) 
        : bNormal(GL_FALSE), mStride(stride), mData(NULL), mSize(size) {
            
            get(s, attrib);
        }
        
        void set(GLuint s, string attrib, GLsizei stride, GLint size, GLvoid * data = NULL){
            mStride = stride;
            mData = data;
            mSize = size;
            get(s, attrib);
        }
        
        void att(const Attribute& a) { mAtt = a; }
        
        void get( GLuint sprog, string attrib) {

            printf("VATTRIB GETS\n");
            printf("program: %d string: %s \n", sprog, attrib.c_str());
            
//            mAtt.id = glGetAttribLocation(sprog, attrib.c_str()); 
            
            mAtt.getAttrib(sprog, attrib.c_str());

//            mAtt.print();
            
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
            glVertexAttribPointer(mAtt.id, mSize, mAtt.datatype, bNormal, mStride, mData);  
            GL::error("pointer");
        }

        void pointer(GLuint offset){
            glVertexAttribPointer(mAtt.id, mSize, mAtt.datatype, bNormal, mStride, (GLvoid*) offset);  
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
    
    struct VAttrib4{
        VAttrib pos, norm, col, tex;
        void enable() { pos.enable(); norm.enable(); col.enable(); tex.enable(); }
        void disable() { pos.disable(); norm.disable(); col.disable(); tex.disable(); }
        void pointer() { pos.pointer();  norm.pointer(); col.pointer(); tex.pointer(); }
    };
    
} //ctl::

#endif
