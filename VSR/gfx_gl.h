//
//  ctl_gl.h
//  Cuttlefish
//  RASPBERRY PI flavored OpenGL
//  Created by Pablo Colapinto on 4/1/13.
//  Copyright (c) 2013 WOLFTYPE. All rights reserved.
//

#ifndef gfx_gl_h
#define gfx_gl_h

using namespace std;

#include <string>
#include <vector>

#include "gfx_lib.h"
#include "gfx_matrix.h" 
#include "gfx_xfmatrix.h"  

#include <stdio.h>   


namespace gfx {
    
    namespace GL {
        
        enum ATTACH {
			#ifndef __REDUCED_GRAPHICS__
            COLOR =     GL_COLOR_ATTACHMENT0, 
            DEPTH =     GL_DEPTH_ATTACHMENT,
            STENCIL =   GL_STENCIL_ATTACHMENT
            #endif
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
			USHORT		= GL_UNSIGNED_SHORT,
            USHORT565   = GL_UNSIGNED_SHORT_5_6_5,
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
            #ifndef __raspberry__
            TEX1D = GL_TEXTURE_1D,
            #endif
            CUBEMAP     = GL_TEXTURE_CUBE_MAP,
            CUBEMAPX    = GL_TEXTURE_CUBE_MAP_POSITIVE_X,
            CUBEMAPNX   = GL_TEXTURE_CUBE_MAP_NEGATIVE_X,
            CUBEMAPY    = GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
            CUBEMAPNY   = GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,
            CUBEMAPZ    = GL_TEXTURE_CUBE_MAP_POSITIVE_Z,
            CUBEMAPNZ   = GL_TEXTURE_CUBE_MAP_NEGATIVE_Z
        };
        
        enum PARAM{
            WS = GL_TEXTURE_WRAP_S,
            WT = GL_TEXTURE_WRAP_T,
            #ifndef __raspberry__
            WR = GL_TEXTURE_WRAP_R,
            MIRROR = GL_MIRRORED_REPEAT,
            BORDER = GL_CLAMP_TO_BORDER,
            #endif
            EDGE = GL_CLAMP_TO_EDGE,
            REPEAT = GL_REPEAT,
            MAGFILTER = GL_TEXTURE_MAG_FILTER,
            MINFILTER = GL_TEXTURE_MIN_FILTER,
            NEAREST = GL_NEAREST,
            LINEAR = GL_LINEAR,
            MIPMAPLINEAR = GL_LINEAR_MIPMAP_LINEAR,
            MIPMAPNEAREST = GL_LINEAR_MIPMAP_NEAREST
        };
        
        enum IFORMAT {
            
            DEPTHCOMP   = GL_DEPTH_COMPONENT16, //GL_DEPTH_COMPONENT24 ?
            RGB5        = GL_RGB5_A1,
            #ifndef __REDUCED_GRAPHICS__  
            STENCILIDX  = GL_STENCIL_INDEX8, 
            #endif 
			RGBA4 		= GL_RGBA4,
            #ifndef __raspberry__
            RGBA8       = GL_RGBA8
            #endif
            #ifdef __raspberry__            
            RGB8       = GL_RGB8_OES,
            RGBA8       = GL_RGBA8_OES
            #endif
//            DEPTHCOMP   = GL_DEPTH_COMPONENT32_OES,
//            RGB8         = GL_RGB8_OES,
//            RGBA8       = GL_RGBA8_OES
//            #endif
        };
        
        enum ATTRIB{
            POS     = 0,
            NORM    = 1,
            COL     = 2,
            TEX     = 3,
        }  ;
        
        //Check extensions?
        enum ARRAY {
            #ifndef __raspberry__
            VERTEXARRAY = GL_VERTEX_ARRAY,
            NORMALARRAY = GL_NORMAL_ARRAY,
            COLORARRAY = GL_COLOR_ARRAY,
            TEXARRAY = GL_TEXTURE_COORD_ARRAY,
            #endif 
            
//            #ifdef __raspberry__
//            VERTEXARRAY = GL_VERTEX_ARRAY_BINDING_OES
//            #endif
            
            #ifdef IOS_PROJECT
            POINTARRAY = GL_POINT_SIZE_ARRAY_OES
            #endif            
        };
        
        enum BUFFER {
            VERTEXBUFFER = GL_ARRAY_BUFFER,
            ELEMENTBUFFER = GL_ELEMENT_ARRAY_BUFFER
        };
        
        enum Ability {
            #ifndef __raspberry__
            COLOR_MATERIAL			= GL_COLOR_MATERIAL,
            DEPTH_TEST				= GL_DEPTH_TEST,
            FOG						= GL_FOG,
            LIGHTING				= GL_LIGHTING,
            #endif
            BLEND					= GL_BLEND,
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
            #ifndef __raspberry__
            FUNC_ADD				= GL_FUNC_ADD,
            FUNC_SUBTRACT			= GL_FUNC_SUBTRACT,
            FUNC_REVERSE_SUBTRACT	= GL_FUNC_REVERSE_SUBTRACT
            #endif
            //            MIN						= GL_MIN,
            //            MAX						= GL_MAX
        };
        

	   inline void error(string tmsg){

	        GLenum err = glGetError();

	        const char * msg = tmsg.c_str();

	        switch(err) {
	            case GL_INVALID_ENUM:
	                printf("%s:\n %s\n", msg, "An unacceptable value is specified for an enumerated argument. The offending command is ignored and has no other side effect than to set the error flag.");
	                break;

	            case GL_INVALID_VALUE:
	                printf("%s:\n %s\n", msg, "A numeric argument is out of range. The offending command is ignored and has no other side effect than to set the error flag.");
	                break;

	            case GL_INVALID_OPERATION:
	                printf("%s:\n %s\n", msg, "The specified operation is not allowed in the current state. The offending command is ignored and has no other side effect than to set the error flag.");
	                break;

#ifndef __REDUCED_GRAPHICS__
	            case GL_INVALID_FRAMEBUFFER_OPERATION:
	                printf("%s:\n %s\n", msg, "Framebuffer is Incomplete");
	                break;
#endif

#ifndef __raspberry__

	            case GL_STACK_OVERFLOW:
	                printf("%s:\n %s\n", msg, "This command would cause a stack overflow. The offending command is ignored and has no other side effect than to set the error flag.");
	                break;

	            case GL_STACK_UNDERFLOW:
	                printf("%s:\n %s\n", msg, "This command would cause a stack underflow. The offending command is ignored and has no other side effect than to set the error flag.");
	                break;
#endif

	            case GL_OUT_OF_MEMORY:
	                printf("%s:\n %s\n", msg, "There is not enough memory left to execute the command.  The state of the GL is undefined, except for the state of the error flags, after this error is recorded.");
	                break;
                    
	            case GL_NO_ERROR:
	                break;

	            default:
	                break;
	        }

	        //return 10;
	    }





	    inline int  planes(GLenum format) {
	        switch(format) {
	                //		case GL_COLOR_INDEX:
	            case GL_STENCIL_INDEX:
	            case GL_DEPTH_COMPONENT:
	                //		case GL_RED:
	                //		case GL_GREEN:
	                //		case GL_BLUE:
	            case GL_ALPHA:
	            case GL_LUMINANCE:			return 1;

	            case GL_LUMINANCE_ALPHA:	return 2;
	            case GL_RGB:				return 3;
	            case GL_RGBA:
	            default:					return 4;
	        }
	    }
	
	    // bytes/px
	    inline int bpp(GLenum type) {
	        switch(type) {
	                /*
	                 case GL_BITMAP:	??????
	                 type = sizeof(GLbitfield);
	                 break;
	                 */

	            case GL_UNSIGNED_SHORT:	return sizeof(GLushort);
	            case GL_SHORT:			return sizeof(GLshort);
	            case GL_UNSIGNED_INT:	return sizeof(GLuint);
	            case GL_INT:			return sizeof(GLint);
	            case GL_FLOAT:			return sizeof(GLfloat);
	                //case GL_
	            case GL_BYTE:			return sizeof(GLbyte);

	            case GL_UNSIGNED_BYTE:
	            default:				return sizeof(GLubyte);
	        }
	    }
	
	    inline GLsizeiptr dataSize(GLenum format, GLenum type, int num) {
	        int p = planes(format);
	        int b = bpp(type);
	        return p * b * num;
	    }


	    inline GLenum type(GLenum t){
	        switch(t){
	            case GL_FLOAT_MAT2:
	            case GL_FLOAT_MAT4:
	            case GL_FLOAT_VEC2: 
	            case GL_FLOAT_VEC3: 
	            case GL_FLOAT_VEC4: return GL_FLOAT;         
	        }
	        return GL_FLOAT;
	    }
	   inline  int cmp( GLenum type) {
	        switch (type){
                
				case GL_FLOAT:		return 1;
	            case GL_FLOAT_MAT2: 
	            case GL_FLOAT_VEC2: return 2;
	            case GL_FLOAT_VEC3: return 3;
	            case GL_FLOAT_VEC4: return 4;
				case GL_FLOAT_MAT4: return 16;

	            default:            return 3;

	        }
	        return 0;
	    }



        
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


        inline void clearColor(float r = 0.0, float g = 0.0, float b = 0.0, float a = 1.0) { glClearColor(r,g,b,a); }
        inline void clear(GLbitfield a) { glClear(a); }
            
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
        

            
         inline void enable(Ability a) { glEnable(a); }
         inline void disable(Ability a) { glDisable(a); }
         inline void ability(Ability a, bool v) { v ? enable(a) : disable(a); }
         inline void blending(bool b){ ability(BLEND, b); }
         
         inline void blendMode(BlendFunc src, BlendFunc dst, BlendEq eq) {
            glBlendEquation(eq);
            glBlendFunc(src, dst);
        }
         
         inline void depthMask(bool b) { glDepthMask(b?GL_TRUE : GL_FALSE); }

        static bool bLights; 
//        static bool bOrtho;
        		
        static bool& isLightOn() { return bLights; }  
      //  static bool isLightOn() { return bLights; } 
        

        #ifndef __raspberry__
        static GLenum Lights[8] = { GL_LIGHT0, GL_LIGHT1, GL_LIGHT2, GL_LIGHT3, GL_LIGHT4, GL_LIGHT5, GL_LIGHT6, GL_LIGHT7 };
		#endif
        
//        /// Project TO Screen Coordinates
//         Vec project(double _x, double _y, double _z, GLdouble*, GLdouble*, GLint*);
//        /// Project FROM Screen Coordinates
//         Vec unproject(double _x, double _y, double _z, GLdouble*, GLdouble*, GLint*);

/*    */       
//        /// Pass in points and camera return 2d vec
//         Vec3f project( double _x, double _y, double _z, const XformMat& );//const Camera&);
//        /// Pass in point on screen, get point in space
//         Vec3f unproject( double _x, double _y, double _z, const XformMat& );//const Camera&);
//        
//        Vec3f project( double * p, const XformMat& );//const Camera&);
//        Vec3f sproject( double * p, const XformMat& );//onst Camera&);
//        
//        Vec3f ratio( double w, double h, const XformMat& xf);//const Camera& c);
        
        
#ifndef __raspberry__ 
      
        inline void vertex(float a, float b, float c){
            glVertex3f(a,b,c);
        }
        
        inline void vertex( const Vec3f& v){
            glVertex3f(v[0],v[1],v[2]);
        }

        inline void translate (float const * p){
            glTranslatef(p[0], p[1], p[2]);
        }
        inline void translate (double const * p){
            glTranslated(p[0], p[1], p[2]);
        }
       inline void translate (float x, float y, float z){
            glTranslatef(x,y,z);
        }
        inline void translate (double x, double y, double z){
            glTranslated(x,y,z);
        }
    
        inline void rotate (float const * p){
        glRotatef(p[0], p[1], p[2],p[3]);
        }
    
        inline void rotate (double const * p){
        glRotated(p[0], p[1], p[2],p[3]);
        }    
        inline void scale (float s){
        glScalef(s,s,s);
        }
        inline void scale (double s){
        glScaled(s,s,s);
        }        
        inline void vertex(float const * p){
            glVertex3f(p[0], p[1], p[2]);
        }
        inline void vertex(double const * p){
            glVertex3d(p[0], p[1], p[2]);
        }
        
        inline void normal(float const * p){
            glNormal3f(p[0], p[1], p[2]);
        }        
        inline void normal(double const * p){
            glNormal3d(p[0], p[1], p[2]);
        }
    
       inline void color( Vec4<float> v){
            glColor4f(v[0],v[1],v[2],v[3]);
        }

             
        //Lighting Models
        inline void smooth(){ glShadeModel(GL_SMOOTH); }
        inline void flat(){ glShadeModel(GL_FLAT); }
        
        inline void lightsOn() {glEnable(GL_LIGHTING);}
        inline void lightsOff() {glDisable(GL_LIGHTING);}

        inline void light(int i = 0){
                GL :: lightsOn();
                GL :: smooth();
                
                glEnable(GL::Lights[i]);
                
                //Allow glColor calls to control ambient and diffuse colors
                glColorMaterial ( GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE ) ;	
                glEnable(GL_COLOR_MATERIAL);
        }

        inline void lightOff(int i = 0){
            glDisable(GL::Lights[i]);
        }
    
        
        inline void lightPos(float x, float y, float z, float w =1.0){
            GLfloat lp[] = {x,y,z,w};	
            glLightfv(GL_LIGHT0, GL_POSITION, lp);
        }
    
        inline void local() { glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE); }
        inline void infinite() {glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_FALSE);}
        

    
    
    inline void global(float * r){ glLightModelfv(GL_LIGHT_MODEL_AMBIENT, r); }
    
    inline void global(float r = .2, float g = .2, float b = .2, float a = 1.0){
            GLfloat global_ambient[] = {r,g,b,a};
            GL :: global(global_ambient);
        }
           
    inline void  specular(float r = 1.0, float g = 1.0, float b = 1.0, float a = 1.0, GLenum lightnum = GL_LIGHT0){
        GLfloat spec[] = {r,g,b,a};
        glLightfv(lightnum, GL_SPECULAR, spec); 
    }
    
    inline void specular(float * r, GLenum lightnum = GL_LIGHT0) { glLightfv(lightnum, GL_SPECULAR, r); }
    
    inline void diffuse(float r = 1.0, float g = 1.0, float b = 1.0, float a = 1.0, GLenum lightnum = GL_LIGHT0){
        GLfloat diffuse[] = {r,g,b,a};
        glLightfv(lightnum, GL_DIFFUSE, diffuse);
    }
    
    inline void ambient(float r = 0, float g = 0, float b = 0, float a = 1.0, GLenum lightnum = GL_LIGHT0){
        GLfloat ambient[] = {r,g,b,a};
        glLightfv(lightnum, GL_AMBIENT, ambient);
    }
    
    inline void emission(float r = 0, float g = 0, float b = 0, float a = 1.0, GLenum lightnum = GL_LIGHT0){
        GLfloat emission[] = {r,g,b,a};
        glLightfv(lightnum, GL_EMISSION, emission);
    }
    
    inline void position(float x = 1, float y = .1, float z = .1, float w = 1.0, GLenum lightnum = GL_LIGHT0){
        GLfloat position[] = {x,y,z,w};
        glLightfv(lightnum, GL_POSITION, position);
    }
    
    inline void specularMat(float r = 1.0, float g = 1.0, float b = 1.0,float a = 1.0){
        GLfloat specmat[] = {r,g,b,a};
        glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specmat);	
    }
    inline void emissionMat(float r = 0.0, float g = 0.0, float b = 0.0,float a = 1.0){
        GLfloat emimat[] = {r,g,b,a};
        glMaterialfv(GL_FRONT_AND_BACK, GL_EMISSION, emimat);	
    }
    
    inline void preset(){
        GLushort gs = 1024 + 512 + 256 + 128 + 64 + 32 + 16 + 8 + 4 + 2;
        glLineStipple(1,gs);
    }
    
    inline void frontBackDiff(){
        glPolygonMode(GL_FRONT, GL_FILL);
        glPolygonMode(GL_BACK, GL_LINE);
    }
    
    inline void frontBackFill(){
        glPolygonMode(GL_FRONT, GL_FILL);
        glPolygonMode(GL_BACK, GL_FILL);
    }
    

    inline void enablePreset(){
        
        glEnable(GL_DEPTH_TEST);
        glDepthFunc(GL_LESS);
        
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        
        glPointSize(10);
        glEnable(GL_LINE_SMOOTH);
        
        //frontBackDiff();
        
        //	glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);
        
         preset();
        
         light();
         GL :: global();						
         GL :: ambient();
         GL :: diffuse();
         GL :: specular();
        
        //	GL :: specularMat(.2,.2,.2,0.5);			
         emissionMat(.2,.2,.2,0.5);
        
        lightPos(1,5,1);
        
    }
    
    inline void disablePreset(){
        glDisable(GL_BLEND);
        glDisable(GL_DEPTH_TEST);
        glDisable(GL_LIGHTING);
    }

        enum ShadeModel {
            FLAT					= GL_FLAT,
            SMOOTH					= GL_SMOOTH
        };
        
        inline void Begin(GL::MODE mode){
            switch (mode){
                case GL::P:
                    glBegin(GL_POINTS);
                    break;
                case GL::L:
                    glBegin(GL_LINES);
                    break;
                case GL::LL:
                    glBegin(GL_LINE_LOOP);
                    break;
                case GL::LS:
                    glBegin(GL_LINE_STRIP);
                    break;
                case GL::T:
                    glBegin(GL_TRIANGLES);
                    break;
                case GL::TS:
                    glBegin(GL_TRIANGLE_STRIP);
                    break;
                case GL::TF:
                    glBegin(GL_TRIANGLE_FAN);
                    break;
            }
        }


    inline void push() { glPushMatrix(); }
    inline void pop() { glPopMatrix(); }

#endif

//     inline void depthTesting(bool b) { ability(DEPTH_TEST,b); }
//     inline void pointSize(GLfloat f) { glPointSize(f); }
//     inline void shadeModel(ShadeModel sm) { glShadeModel(sm); } 

		

    
    } // GL::
     
} // CTL::

#endif
