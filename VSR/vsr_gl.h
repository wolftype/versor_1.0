/*
 *  GL.h
 *  CONGA_05
 *
 *  Created by x on 3/23/10.
 *  Copyright 2010 x. All rights reserved.
 *
 OpenGL operations class
 
 */

#ifndef GL_H_INCLUDED
#define GL_H_INCLUDED

#include <string>
#include <vector>

#include "vsr_gxlib.h"
#include "vsr_matrix.h"
#include "vsr_templates.h"

#ifndef VSR_PRECISION
typedef double VSR_PRECISION; 
#endif

namespace vsr {
    
    //Predeclare MV class
    template< int NUM, int IDX, class T > class MV;
    //Forward Typedefs 
    typedef MV<3,VEC,VSR_PRECISION>  Vec;

	//class Camera;  
    class XformMat;
    
    using std::string;
    
    
    namespace GL {
        
        enum ATTACH {
            COLOR =     GL_COLOR_ATTACHMENT0, 
            DEPTH =     GL_DEPTH_ATTACHMENT,
            STENCIL =   GL_STENCIL_ATTACHMENT
        };
        
        enum USAGE {
            STREAM = GL_STREAM_DRAW,
            STATIC = GL_STATIC_DRAW,
            DYNAMIC = GL_DYNAMIC_DRAW			
        };
        
        enum TARGET {
            ARRAY = GL_ARRAY_BUFFER,
            ELEMENT = GL_ELEMENT_ARRAY_BUFFER
        };
        
        enum MODE {
            //            Q   = GL_QUAD,
            P   = GL_POINTS,
            LS  = GL_LINE_STRIP,
            LL  = GL_LINE_LOOP, 
            L   = GL_LINES, 
            TS  = GL_TRIANGLE_STRIP, 
            TF  = GL_TRIANGLE_FAN, 
            T   = GL_TRIANGLES        
        };
        
        enum FORMAT {
            ALPHA   = GL_ALPHA, 
            LUM     = GL_LUMINANCE, 
            LUMA    = GL_LUMINANCE_ALPHA, 
            RGB     = GL_RGB,
            RGBA    = GL_RGBA        
        };
        
        enum TYPE {
            UBYTE       = GL_UNSIGNED_BYTE, 
            USHORT      = GL_UNSIGNED_SHORT_5_6_5,
            USHORT4     = GL_UNSIGNED_SHORT_4_4_4_4, 
            USHORT5     = GL_UNSIGNED_SHORT_5_5_5_1,
            FLOAT       = GL_FLOAT,
            INT         = GL_INT,
            UINT        = GL_UNSIGNED_INT,
            SHORT       = GL_SHORT,
            BYTE        = GL_BYTE,
            
        };
        
        enum TEXTURE{
            TEX2D = GL_TEXTURE_2D,
            CUBEMAP = GL_TEXTURE_CUBE_MAP
        };
        
        enum IFORMAT {
            DEPTHCOMP   = GL_DEPTH_COMPONENT16,
            RGBA4       = GL_RGBA4,
            RGBA8       = GL_RGBA8,
            RGB5        = GL_RGB5_A1,
            //           RGB565      = GL_RGB565,
            STENCILIDX  = GL_STENCIL_INDEX8
        };
        
        enum ATTRIB{
            POS     = 0,
            NORM    = 1,
            COL     = 2,
            TEX     = 3,
        }  ;
        
        enum ARRAY {
            VERTEXARRAY = GL_VERTEX_ARRAY,
            NORMALARRAY = GL_NORMAL_ARRAY,
            COLORARRAY = GL_COLOR_ARRAY,
            
            #ifdef IOS_PROJECT
                 POINTARRAY = GL_POINT_SIZE_ARRAY_OES,
            #endif            
            
            TEXARRAY = GL_TEXTURE_COORD_ARRAY
        };
        
        enum BUFFER {
            VERTEXBUFFER = GL_ARRAY_BUFFER,
            ELEMENTBUFFER = GL_ELEMENT_ARRAY_BUFFER
        };
        
        enum Ability {
            BLEND					= GL_BLEND,
            COLOR_MATERIAL			= GL_COLOR_MATERIAL,
            DEPTH_TEST				= GL_DEPTH_TEST,
            FOG						= GL_FOG,
            LIGHTING				= GL_LIGHTING,
            SCISSOR_TEST			= GL_SCISSOR_TEST,
            CULL_FACE				= GL_CULL_FACE
        };
        
        enum BlendFunc {
            SRC_ALPHA				= GL_SRC_ALPHA,
            ONE_MINUS_SRC_ALPHA		= GL_ONE_MINUS_SRC_ALPHA,
            SRC_COLOR				= GL_SRC_COLOR,
            ONE_MINUS_SRC_COLOR		= GL_ONE_MINUS_SRC_COLOR,
            DST_ALPHA				= GL_DST_ALPHA,
            ONE_MINUS_DST_ALPHA		= GL_ONE_MINUS_DST_ALPHA,
            DST_COLOR				= GL_DST_COLOR,
            ONE_MINUS_DST_COLOR		= GL_ONE_MINUS_DST_COLOR,
            ZERO					= GL_ZERO,
            ONE						= GL_ONE,
            SRC_ALPHA_SATURATE		= GL_SRC_ALPHA_SATURATE
        };
        
        enum BlendEq {
            FUNC_ADD				= GL_FUNC_ADD,
            FUNC_SUBTRACT			= GL_FUNC_SUBTRACT,
            FUNC_REVERSE_SUBTRACT	= GL_FUNC_REVERSE_SUBTRACT
            //            MIN						= GL_MIN,
            //            MAX						= GL_MAX
        };
        
        enum ShadeModel {
            FLAT					= GL_FLAT,
            SMOOTH					= GL_SMOOTH
        };
        
        
//        static int     AttributeSize[4] = {3,3,4,2};
//        static int     AttributeOffset[4];// = { offsetof(Vertex, Pos), offsetof(Vertex, Norm), offsetof(Vertex, Col), offsetof(Vertex, Tex)};
//        static bool    AttributeNormalizeBoolean[4] = {GL_FALSE, GL_TRUE, GL_FALSE, GL_FALSE};
//        static GLenum  AttributeType[4] = {GL::FLOAT, GL::FLOAT, GL::UBYTE, GL::FLOAT};
        
//        static void enable(Ability);
//        static void disable(Ability);
//        static void ability(Ability, bool);
//        static void depthTesting(bool);
//        static void blending(bool);
//        static void blendMode(BlendFunc, BlendFunc, BlendEq);
//        static void depthMask(bool);
//        static void pointSize(GLfloat);
//        static void shadeModel(ShadeModel);
//         void enable(Ability);
//         void disable(Ability);
//         void ability(Ability, bool);
//         void depthTesting(bool);
//         void blending(bool);
//         void blendMode(BlendFunc, BlendFunc, BlendEq);
//         void depthMask(bool);
//         void pointSize(GLfloat);
//         void shadeModel(ShadeModel);
        
        //       }
         GLenum type(GLenum); //type from vectype
         int cmp(GLenum); //components
         void error(string msg = "");
         int bpp(GLenum);
         int planes(GLenum );
         GLsizeiptr dataSize(GLenum, GLenum, int);
        
        static const string Get(GLenum t){
            switch (t){
                case GL_RGB: return "FORMAT: GL_RGB\n";
                case GL_RGBA: return "FORMAT: GL_RGBA\n";
                case GL_ALPHA: return "FORMAT: GL_ALPHA\n";
                    //...
                    
                case GL_FLOAT: return "TYPE: GL_FLOAT\n";
                case GL_UNSIGNED_BYTE: return "TYPE: GL_UNSIGNED_BYTE\n";
                case GL_BYTE: return "TYPE: GL_BYTE\n";
                    //...
                    
                    
                case GL_TEXTURE_2D: return "TARGET: GL_TEXTURE_2D\n";
                    //case GL_CUBE_MAP: return "TARGET: GL_TEXTURE_CUBE_MAP\n";
                    //...
                    
            }
            return "";
        }


        static bool bLights; 
//        static bool bOrtho;
        		
        static bool& isLightOn() { return bLights; }  
      //  static bool isLightOn() { return bLights; } 
        
		
        static GLenum Lights[8] = { GL_LIGHT0, GL_LIGHT1, GL_LIGHT2, GL_LIGHT3, GL_LIGHT4, GL_LIGHT5, GL_LIGHT6, GL_LIGHT7 };
		
        
        /// Project TO Screen Coordinates
         Vec project(double _x, double _y, double _z, GLdouble*, GLdouble*, GLint*);
        /// Project FROM Screen Coordinates
         Vec unproject(double _x, double _y, double _z, GLdouble*, GLdouble*, GLint*);

/*    */       
        /// Pass in points and camera return 2d vec
         Vec project( double _x, double _y, double _z, const XformMat& );//const Camera&);
        /// Pass in point on screen, get point in space
         Vec unproject( double _x, double _y, double _z, const XformMat& );//const Camera&);
        
        Vec project( double * p, const XformMat& );//const Camera&);
        Vec sproject( double * p, const XformMat& );//onst Camera&);
        
        Vec ratio( double w, double h, const XformMat& xf);//const Camera& c);
        
        
        template<class T>
        void vertex(T*);

        template<class T>
        void normal(T*);
        
        template<class T> void translate(T*);
        template<class T> void translate(T x, T y, T z);
        
        template<class T>
        void rotate(T*);

        template<class T>
        void scale(T);

 
            
         void frontBackDiff();
         void frontBackFill();
        
        //Lighting Models
        void lightsOn();
        void lightsOff();
        void light(int i = 0);
        void lightOff(int i = 0);
        
        void lightPos(float x, float y, float z, float w =1.0);
        void local();
        void infinite();
        
        void global(float r = .2, float g = .2, float b = .2, float a = 1.0);
        void global(float *r);
        
        void specular(float r = 1.0, float g = 1.0, float b = 1.0, float a = 1.0, GLenum lightnum = GL_LIGHT0);
        void specular(float * r, GLenum lightnum = GL_LIGHT0);
        
        void ambient(float r = 0, float g = 0, float b = 0, float a = 1.0, GLenum lightnum = GL_LIGHT0);
        void diffuse(float r = 1.0, float g = 1.0, float b = 1.0, float a = 1.0, GLenum lightnum = GL_LIGHT0);
        void emission(float r = 0, float g = 0, float b = 0, float a = 1.0, GLenum lightnum = GL_LIGHT0);
        void position(float x = 1, float y = .1, float z = .1, float w = 1.0, GLenum lightnum = GL_LIGHT0);
        
        //object specific
        static void specularMat(float r = 1.0, float g = 1.0, float b = 1.0,float a = 1.0);
        static void emissionMat(float r = 0.0, float g = 0.0, float b = 0.0,float a = 1.0);
        
        //Shade Models
        static void smooth(); 
        static void flat();
        
        //Drawing effects
        static void preset();
        
        void enablePreset();
        void disablePreset();
        
        //			static int getError();
        //FIXED PIPELINE STUFF
//        template<class A> void Line(const A &a, const A &b);
//         template<class A>  void Tri(const A &a, const A &b, const A &c);
//         template<class A> void Quad(const A& a, const A& b, const A& c, const A& d);
		
            template<class A> inline void Line(const A &a, const A &b){
        glVertex3f( a[0], a[1], a[2]);
        glVertex3f( b[0], b[1], b[2]);
    }
    
    template<class A> inline void Tri(const A &a, const A &b, const A &c){
        glVertex3f( a[0], a[1], a[2]);
        glVertex3f( b[0], b[1], b[2]);
        glVertex3f( c[0], c[1], c [2]);
    }
        
    template<class A> inline void Quad(const A &a, const A &b, const A &c, const A &d){
        glVertex3f( a[0], a[1], a[2]);
        glVertex3f( b[0], b[1], b[2]);
        glVertex3f( c[0], c[1], c [2]);
        glVertex3f( d [0], d[1], d [2]);
    }
    
//    inline void GL::enable(Ability a) { glEnable(a); }
//    inline void GL::disable(Ability a) { glDisable(a); }
//    inline void GL::ability(Ability a, bool v) { v ? enable(a) : disable(a); }
//    inline void GL::depthTesting(bool b) { ability(DEPTH_TEST,b); }
//    inline void GL::blending(bool b){ ability(BLEND, b); }
//    inline void GL::blendMode(BlendFunc src, BlendFunc dst, BlendEq eq) {
//        glBlendEquation(eq);
//        glBlendFunc(src, dst);
//    }
//    inline void GL::depthMask(bool b) { glDepthMask(b?GL_TRUE : GL_FALSE); }
//    inline void GL::pointSize(GLfloat f) { glPointSize(f); }
//    inline void GL::shadeModel(ShadeModel sm) { glShadeModel(sm); } 
        inline void push() { glPushMatrix(); }
        inline void pop() { glPopMatrix(); }
        
     inline void enable(Ability a) { glEnable(a); }
     inline void disable(Ability a) { glDisable(a); }
     inline void ability(Ability a, bool v) { v ? enable(a) : disable(a); }
     inline void depthTesting(bool b) { ability(DEPTH_TEST,b); }
     inline void blending(bool b){ ability(BLEND, b); }
     inline void blendMode(BlendFunc src, BlendFunc dst, BlendEq eq) {
        glBlendEquation(eq);
        glBlendFunc(src, dst);
    }
     inline void depthMask(bool b) { glDepthMask(b?GL_TRUE : GL_FALSE); }
     inline void pointSize(GLfloat f) { glPointSize(f); }
     inline void shadeModel(ShadeModel sm) { glShadeModel(sm); } 
    
    }
     
}
#endif