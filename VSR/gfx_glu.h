
#ifndef gfx_glu_h
#define gfx_glu_h

using namespace std;

#include <string>
#include <vector>

#include "gfx_lib.h"
#include "gfx_matrix.h" 
#include "gfx_xfmatrix.h"

#include <stdio.h>   

using namespace std;

namespace gfx {

    namespace GL{

    inline Vec3d project(double _x, double _y, double _z, GLdouble* model_view, GLdouble* projection, GLint* viewport) {
        
        // arrays to hold matrix information
        GLdouble winX, winY, winZ;
        
        gluProject(_x, _y, _z,
                   model_view,
                   projection,
                   viewport,
                   &winX,
                   &winY,
                   &winZ );
        
        return Vec3d(winX, winY, winZ);
        
    }
    
    
    inline Vec3d unproject(double _x, double _y, double _z, GLdouble* model_view, GLdouble* projection, GLint* viewport){
        
        // arrays to hold matrix information
        GLdouble posX, posY, posZ;
        
        gluUnProject(_x, _y, _z,
                     model_view,
                     projection,
                     viewport,
                     &posX,
                     &posY,
                     &posZ );
        
        return Vec3d(posX, posY, posZ);
    }
    
    /* */
    inline Vec3d project(double * p, const XformMat& xf){//Camera& cam) {
        
        // arrays to hold matrix information
        GLdouble winX, winY, winZ;
        
        gluProject(p[0], p[1], p[2],
                   xf.modelViewd,
                   xf.projd,
                   xf.viewport,
                   &winX,
                   &winY,
                   &winZ );
        
        return Vec3d(winX, winY, winZ);
        
    }
    
//    //scaled project
//    Vec GL :: sproject(double * p, const Camera& cam) {
//        Vec v = project(p,cam);
//
//        return Vec(v[0] / cam.width(), v[1] / cam.height(), v[2] / cam.depth() );
//    }
    
    inline Vec3d project (double _x, double _y, double _z, const XformMat& xf){//const Camera& cam){
        // arrays to hold matrix information
        GLdouble winX, winY, winZ;
        
        gluProject(_x, _y, _z,
                   xf.modelViewd,
                   xf.projd,
                   xf.viewport,
                   &winX,
                   &winY,
                   &winZ );
        
        return Vec3d(winX, winY, winZ);
    }
    
   inline Vec3d unproject (double _x, double _y, double _z, const XformMat& xf){//const Camera& cam){
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
        
        return Vec3d(posX, posY, posZ);
    }
    

    
    //Ratio of Screen Pixel width to 3D coordinates
    inline Vec3d ratio( double w, double h, const XformMat& xf){
            Vec3d bl = GL::unproject(0, 0, 1.0, xf );
            Vec3d tr = GL::unproject(w, h, 1.0, xf );
            Vec3d diff = tr - bl;    
            return Vec3d( diff[0] / w, diff[1] /h, 0);
    }
 
 } //GL::
} 

#endif