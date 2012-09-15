/*
 *  Draw.cpp
 *  CONGA_05
 *
 *  Created by x on 3/23/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#include "vsr_gl.h"
#include "op.h"

//#include "Camera.h"

namespace vsr {
    //NEW
//    int     GL::AttributeSize[] = {3,3,4,2};
//    bool    GL::AttributeNormalizeBoolean[] = {GL_FALSE, GL_TRUE, GL_FALSE, GL_FALSE};
//    GLenum  GL::AttributeType[] = {GL::FLOAT, GL::FLOAT, GL::UBYTE, GL::FLOAT};
    
    
    //}
    
    
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
    
    GLenum GL::type(GLenum typ){
        switch(typ){
            case GL_FLOAT_MAT2:
            case GL_FLOAT_MAT4:
            case GL_FLOAT_VEC2: 
            case GL_FLOAT_VEC3: 
            case GL_FLOAT_VEC4: return GL_FLOAT;         
        }
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
    
    /*
    Vec GL :: project(double * p, const Camera& cam) {
        
        // arrays to hold matrix information
        GLdouble winX, winY, winZ;
        
        gluProject(p[0], p[1], p[2],
                   cam.model(),
                   cam.proj(),
                   cam.view(),
                   &winX,
                   &winY,
                   &winZ );
        
        return Vec(winX, winY, winZ);
        
    }
    
    //scaled project
    Vec GL :: sproject(double * p, const Camera& cam) {
        Vec v = project(p,cam);

        return Vec(v[0] / cam.width(), v[1] / cam.height(), v[2] / cam.depth() );
    }
    
    Vec GL :: project (double _x, double _y, double _z, const Camera& cam){
        // arrays to hold matrix information
        GLdouble winX, winY, winZ;
        
        gluProject(_x, _y, _z,
                   cam.model(),
                   cam.proj(),
                   cam.view(),
                   &winX,
                   &winY,
                   &winZ );
        
        return Vec(winX, winY, winZ);
    }
    
    Vec GL :: unproject (double _x, double _y, double _z, const Camera& cam){
        GLdouble posX, posY, posZ;
        //posZ = 0;
        //	double tz;
        //	glReadPixels((int)_x, (int)_y, 1, 1, GL_DEPTH_COMPONENT, GL_FLOAT, &tz);
        //cout << "DEPTH: " << tz << endl;
        gluUnProject(_x, _y, _z,//_z,
                     cam.model(),
                     cam.proj(),
                     cam.view(),
                     &posX,
                     &posY,
                     &posZ );
        
        return Vec(posX, posY, posZ);
    }
    

    
    //Ratio of Screen Pixel width to 3D coordinates
    Vec GL :: ratio( double w, double h, const Camera& c){
            Vec bl = GL::unproject(0, 0, 1.0, c );
            Vec tr = GL::unproject(w, h, 1.0, c );
            Vec diff = tr - bl;    
            return Vec( diff[0] / w, diff[1] /h, 0);
    }
    
    */
        
    void GL :: translate (double * p){
        glTranslated(p[0], p[1], p[2]);
    }
    
    void GL :: rotate (double * p){
        glRotated(p[0], p[1], p[2],p[3]);
    }
    
    void GL :: scale (double s){
        glScaled(s,s,s);
    }
    
    void GL :: vertex(double *p){
        //double * p = (double *)v;
        glVertex3d(p[0], p[1], p[2]);
    }
    void GL :: normal(double *p){
        //double * p = (double *)v;
        glNormal3d(p[0], p[1], p[2]);
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
    
    void GL :: lightPos(float x, float y, float z, float w ){
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
        
        lightPos(0,0,5);
        
    }
    
    void GL :: disablePreset(){
        glDisable(GL_BLEND);
        glDisable(GL_DEPTH_TEST);
        glDisable(GL_LIGHTING);
    }


    template<class A> void GL :: Line(const A &a, const A &b){
        glVertex3f( a[0], a[1], a[2]);
        glVertex3f( b[0], b[1], b[2]);
    }
    
    template<class A> void GL :: Tri(const A &a, const A &b, const A &c){
        glVertex3f( a[0], a[1], a[2]);
        glVertex3f( b[0], b[1], b[2]);
        glVertex3f( c[0], c[1], c [2]);
    }
        
    template<class A> void GL :: Quad(const A &a, const A &b, const A &c, const A &d){
        glVertex3f( a[0], a[1], a[2]);
        glVertex3f( b[0], b[1], b[2]);
        glVertex3f( c[0], c[1], c [2]);
        glVertex3f( d [0], d[1], d [2]);
    }
    
    //	glLineWidth(1.2);
    //	glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
    //	glEnable(GL_MULTISAMPLE);
    
    //	glEnable(GL_LINE_SMOOTH);
    //	glEnable(GL_POINT_SMOOTH);
    //	glEnable(GL_POLYGON_SMOOTH);
    
    
    
}