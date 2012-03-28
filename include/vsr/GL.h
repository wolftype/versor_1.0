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

#include  "vsr_gxlib.h"

namespace vsr {
    
	class Vec;
	class Camera;    
    
	class GL {
        
        bool bLights, bOrtho;
        
        
    public:
		
        GL() : bLights(1), bOrtho(0) {}			
        bool& lightswitch() { return bLights; }  bool lightswitch() const { return bLights; } 
        
		
        static GLenum Lights[8];
		
        //Pass in points and transformation matrices (from camera)
        
        //Project TO Screen Coordinates
        static Vec project(double _x, double _y, double _z, GLdouble*, GLdouble*, GLint*);
        //Project FROM Screen Coordinates
        static Vec unproject(double _x, double _y, double _z, GLdouble*, GLdouble*, GLint*);
        
        //Pass in points and camera
        static Vec project( double _x, double _y, double _z, const Camera&);
        static Vec unproject( double _x, double _y, double _z, const Camera&);
        
        static void translate(double *);
        static void rotate(double *);
        static void scale(double);
        static void vertex(double *);
        static void normal(double *);
        
        static void frontBackDiff();
        static void frontBackFill();
        
        //Lighting Models
        static void lightsOn();
        static void lightsOff();
        static void light(int i = 0);
        static void lightOff(int i = 0);
        
        static void lightPos(float x, float y, float z, float w =1.0);
        static void local();
        static void infinite();
        
        static void global(float r = .2, float g = .2, float b = .2, float a = 1.0);
        static void global(float *r);
        
        static void specular(float r = 1.0, float g = 1.0, float b = 1.0, float a = 1.0, GLenum lightnum = GL_LIGHT0);
        static void specular(float * r, GLenum lightnum = GL_LIGHT0);
        
        static void ambient(float r = 0, float g = 0, float b = 0, float a = 1.0, GLenum lightnum = GL_LIGHT0);
        static void diffuse(float r = 1.0, float g = 1.0, float b = 1.0, float a = 1.0, GLenum lightnum = GL_LIGHT0);
        static void emission(float r = 0, float g = 0, float b = 0, float a = 1.0, GLenum lightnum = GL_LIGHT0);
        static void position(float x = 1, float y = .1, float z = .1, float w = 1.0, GLenum lightnum = GL_LIGHT0);
        
        //object specific
        static void specularMat(float r = 1.0, float g = 1.0, float b = 1.0,float a = 1.0);
        static void emissionMat(float r = 0.0, float g = 0.0, float b = 0.0,float a = 1.0);
        
        //Shade Models
        static void smooth(); 
        static void flat();
        
        //Drawing effects
        static void preset();
        
        static void enablePreset();
        static void disablePreset();
        
        //			static int getError();
		
	};
    
}
#endif