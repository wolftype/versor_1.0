/*
 *  vsr_gl.cpp
 *  versor
 *
 *  Created by x on 3/23/10.
 *  Copyright 2010 wolftype. All rights reserved.
 *
 */

#include "vsr.h"
#include "vsr_gl.h"
#include "vsr_gfxmatrix.h"

namespace vsr {
    
    
    void GL :: error(string tmsg){
        
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
                
            case GL_INVALID_FRAMEBUFFER_OPERATION:
                printf("%s:\n %s\n", msg, "Framebuffer is Incomplete");
                break;
                
            case GL_STACK_OVERFLOW:
                printf("%s:\n %s\n", msg, "This command would cause a stack overflow. The offending command is ignored and has no other side effect than to set the error flag.");
                break;
                
            case GL_STACK_UNDERFLOW:
                printf("%s:\n %s\n", msg, "This command would cause a stack underflow. The offending command is ignored and has no other side effect than to set the error flag.");
                break;
                
            case GL_OUT_OF_MEMORY:
                printf("%s:\n %s\n", msg, "There is not enough memory left to execute the command.  The state of the GL is undefined, except for the state of the error flags, after this error is recorded.");
                break;
                
                //		case GL_TABLE_TOO_LARGE:
                //			printf("%s:\n %s\n", msg, "The specified table exceeds the implementation's maximum supported table size.  The offending command is ignored and has no other side effect than to set the error flag.");
                //			break;
                
            case GL_NO_ERROR:
                break;
                
            default:
                break;
        }
        
        //return 10;
    }
    
    GLsizeiptr GL :: dataSize(GLenum format, GLenum type, int num) {
        int p = planes(format);
        int b = bpp(type);
        return p * b * num;
    }
    
    int GL :: planes(GLenum format) {
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
    
    GLenum GL::type(GLenum t){
        switch(t){
            case GL_FLOAT_MAT2:
            case GL_FLOAT_MAT4:
            case GL_FLOAT_VEC2: 
            case GL_FLOAT_VEC3: 
            case GL_FLOAT_VEC4: return GL_FLOAT;         
        }
        return GL_FLOAT;
    }
    int GL:: cmp( GLenum type) {
        switch (type){
                
            case GL_FLOAT_MAT2: 
            case GL_FLOAT_VEC2: return 2;
            case GL_FLOAT_VEC3: return 3;
            case GL_FLOAT_VEC4: return 4;
                
            default:            return 3;
                
        }
        return 0;
    }
    // bytes/px
    int GL :: bpp(GLenum type) {
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

    //OLD
    
    Vec GL :: project(double _x, double _y, double _z, GLdouble* model_view, GLdouble* projection, GLint* viewport) {
        
        // arrays to hold matrix information
        GLdouble winX, winY, winZ;
        
        gluProject(_x, _y, _z,
                   model_view,
                   projection,
                   viewport,
                   &winX,
                   &winY,
                   &winZ );
        
        return Vec(winX, winY, winZ);
        
    }
    
    
    Vec GL :: unproject(double _x, double _y, double _z, GLdouble* model_view, GLdouble* projection, GLint* viewport){
        
        // arrays to hold matrix information
        GLdouble posX, posY, posZ;
        
        gluUnProject(_x, _y, _z,
                     model_view,
                     projection,
                     viewport,
                     &posX,
                     &posY,
                     &posZ );
        
        return Vec(posX, posY, posZ);
    }
    
    /* */
    Vec GL :: project(double * p, const XformMat& xf){//Camera& cam) {
        
        // arrays to hold matrix information
        GLdouble winX, winY, winZ;
        
        gluProject(p[0], p[1], p[2],
                   xf.modelViewd,
                   xf.projd,
                   xf.viewport,
                   &winX,
                   &winY,
                   &winZ );
        
        return Vec(winX, winY, winZ);
        
    }
    
//    //scaled project
//    Vec GL :: sproject(double * p, const Camera& cam) {
//        Vec v = project(p,cam);
//
//        return Vec(v[0] / cam.width(), v[1] / cam.height(), v[2] / cam.depth() );
//    }
    
    Vec GL :: project (double _x, double _y, double _z, const XformMat& xf){//const Camera& cam){
        // arrays to hold matrix information
        GLdouble winX, winY, winZ;
        
        gluProject(_x, _y, _z,
                   xf.modelViewd,
                   xf.projd,
                   xf.viewport,
                   &winX,
                   &winY,
                   &winZ );
        
        return Vec(winX, winY, winZ);
    }
    
    Vec GL :: unproject (double _x, double _y, double _z, const XformMat& xf){//const Camera& cam){
        GLdouble posX, posY, posZ;
        //posZ = 0;
        //	double tz;
        //	glReadPixels((int)_x, (int)_y, 1, 1, GL_DEPTH_COMPONENT, GL_FLOAT, &tz);
        //cout << "DEPTH: " << tz << endl;
        gluUnProject(_x, _y, _z,//_z,
                   xf.modelViewd,
                   xf.projd,
                   xf.viewport,
                     &posX,
                     &posY,
                     &posZ );
        
        return Vec(posX, posY, posZ);
    }
    

    
    //Ratio of Screen Pixel width to 3D coordinates
    Vec GL :: ratio( double w, double h, const XformMat& xf){
            Vec bl = GL::unproject(0, 0, 1.0, xf );
            Vec tr = GL::unproject(w, h, 1.0, xf );
            Vec diff = tr - bl;    
            return Vec( diff[0] / w, diff[1] /h, 0);
    }
    
   
        

    

    
//    GLenum GL::Lights[] = { GL_LIGHT0, GL_LIGHT1, GL_LIGHT2, GL_LIGHT3, GL_LIGHT4, GL_LIGHT5, GL_LIGHT6, GL_LIGHT7 };
    
    void GL :: smooth(){ glShadeModel(GL_SMOOTH); }
    void GL :: flat(){ glShadeModel(GL_FLAT); }
    
    void GL :: lightsOn(){	
        glEnable(GL_LIGHTING);
    }
    void GL :: lightsOff(){	
        glDisable(GL_LIGHTING);
    }
    void GL :: light(int i){
        
        GL :: lightsOn();
        GL :: smooth();
        
        glEnable(GL::Lights[i]);
        
        //Allow glColor calls to control ambient and diffuse colors
        glColorMaterial ( GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE ) ;	
        glEnable(GL_COLOR_MATERIAL);
    }
    
    void GL :: lightOff(int i){
        glDisable(GL::Lights[i]);
    }
    
    void GL :: lightPos(float x, float y, float z, float w  ){
        GLfloat lp[] = {x,y,z,w};	
        glLightfv(GL_LIGHT0, GL_POSITION, lp);
    }
    
    
    void GL :: local(){
        glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE);
    }
    void GL :: infinite(){
        glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_FALSE);
    }
    
    //void GL :: style(GLenum lightnum, GLenum characteristic, float * setting){
    //	glLightfv(lightnum, characteristic, setting);
    //}
    
    void GL :: global(float r, float g, float b, float a){
        GLfloat global_ambient[] = {r,g,b,a};
        GL :: global(global_ambient);
    }
    void GL :: global(float * r){ glLightModelfv(GL_LIGHT_MODEL_AMBIENT, r); }
    
    void GL :: specular(float r, float g, float b, float a, GLenum lightnum){
        GLfloat spec[] = {r,g,b,a};
        glLightfv(lightnum, GL_SPECULAR, spec); 
    }
    
    void GL :: specular(float * spec, GLenum lightnum) { glLightfv(lightnum, GL_SPECULAR, spec); }
    
    void GL :: diffuse(float r, float g, float b, float a, GLenum lightnum){
        GLfloat diffuse[] = {r,g,b,a};
        glLightfv(lightnum, GL_DIFFUSE, diffuse);
    }
    
    void GL :: ambient(float r, float g, float b, float a, GLenum lightnum){
        GLfloat ambient[] = {r,g,b,a};
        glLightfv(lightnum, GL_AMBIENT, ambient);
    }
    
    void GL :: emission(float r, float g, float b, float a, GLenum lightnum){
        GLfloat emission[] = {r,g,b,a};
        glLightfv(lightnum, GL_EMISSION, emission);
    }
    
    void GL :: position(float r, float g, float b, float a, GLenum lightnum){
        GLfloat position[] = {r,g,b,a};
        glLightfv(lightnum, GL_POSITION, position);
    }
    
    
    void GL :: specularMat(float r, float g, float b, float a){
        GLfloat specmat[] = {r,g,b,a};
        glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specmat);	
    }
    void GL :: emissionMat(float r, float g, float b, float a){
        GLfloat emimat[] = {r,g,b,a};
        glMaterialfv(GL_FRONT_AND_BACK, GL_EMISSION, emimat);	
    }
    
    void GL :: preset(){
        GLushort gs = 1024 + 512 + 256 + 128 + 64 + 32 + 16 + 8 + 4 + 2;
        glLineStipple(1,gs);
    }
    
    
    void GL :: frontBackDiff(){
        glPolygonMode(GL_FRONT, GL_FILL);
        glPolygonMode(GL_BACK, GL_LINE);
    }
    
    void GL :: frontBackFill(){
        glPolygonMode(GL_FRONT, GL_FILL);
        glPolygonMode(GL_BACK, GL_FILL);
    }
    
    void GL :: enablePreset(){
        
        glEnable(GL_DEPTH_TEST);
        glDepthFunc(GL_LESS);
        
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        
        glPointSize(10);
        glEnable(GL_LINE_SMOOTH);
        
        //frontBackDiff();
        
        //	glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);
        
        GL :: preset();
        
        GL :: light();
        GL :: global();						
        GL :: ambient();
        GL :: diffuse();
        GL :: specular();
        
        //	GL :: specularMat(.2,.2,.2,0.5);			
        GL :: emissionMat(.2,.2,.2,0.5);
        
        lightPos(1,5,1);
        
    }
    
    void GL :: disablePreset(){
        glDisable(GL_BLEND);
        glDisable(GL_DEPTH_TEST);
        glDisable(GL_LIGHTING);
    }



    
namespace GL {

       template<>  void translate (double const * p){
            glTranslated(p[0], p[1], p[2]);
        }
    
        template<>  void rotate (double const * p){
        glRotated(p[0], p[1], p[2],p[3]);
        }
    
        template<>  void scale (double s){
        glScaled(s,s,s);
        }

        template<>  void translate (float const * p){
            glTranslatef(p[0], p[1], p[2]);
        }

        template<>  void translate (float x, float y, float z){
            glTranslatef(x,y,z);
        }
        template<>  void translate (double x, double y, double z){
            glTranslated(x,y,z);
        }
    
        template<>  void rotate (float const * p){
        glRotatef(p[0], p[1], p[2],p[3]);
        }
    
        template<>  void scale (float s){
        glScalef(s,s,s);
        }
        
        template<>  void vertex(float const * p){
            glVertex3f(p[0], p[1], p[2]);
        }
        template<>  void vertex(double const * p){
            glVertex3d(p[0], p[1], p[2]);
        }
        
        template<>  void normal(float const * p){
            glNormal3f(p[0], p[1], p[2]);
        }        
        template<>  void normal(double const * p){
            glNormal3d(p[0], p[1], p[2]);
        }
}
    
    
    
}