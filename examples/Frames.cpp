//
//  DemoAgacse.cpp
//  vsr
//
//  Created by Pablo Colapinto on 6/28/12.
//  FOR A DEMO at AGACSE LA ROCHELLE 2012
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//


#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include "vsr_chain.h"
#include "vsr_field.h"

#include <iostream>
#include <stdio.h>
using namespace vsr;
using namespace glv;



void interpolation(GLVApp& app){

        //Frame fa Follows the Cursor
        Frame fa;
        fa.set( PT(-1,0,0), Rot(1,0,0,0) );
        
        Pnt p = app.interface.mouse.origin;
        fa.orientY(Vec(p));
    
        //Frame fb is interfaced by 'G' and 'R' keys
        static Frame fb( PT(1,0,0) );
        app.interface.touch(fb);
        
        DRAW(fa); DRAW(fb);        
        
        for (int i = 0; i < 100; ++i){
            double t= 1.0 * i/100;
            
            Frame frame = Frame::Twist( fa, fb, t );
            
            DRAW(frame);
        }

}

void field(GLVApp& app){

    static Field<Vec> f(2,2,2);
    
    f.drawPush();
    
    static double idx;
    SET
        ITJ(i,f.num())  f[i] = f.grid(i); END
        
        app.gui(idx,"idx",0,7);
    END
    
    DRAW3( f[idx],1,0,0);
    
    Point p = app.mouse().origin;
    
    Vec v = f.euler3d( p );
    Vec vr = f.range(p);
    VPatch vxl = f.vidx( vr[0], vr[1], vr[2]  );
    
    //cout << p << f.range(p) << v << endl; 
    
    //cout << vxl.a << " " << vxl.b << " " << vxl.c << " " << vxl.d << " " << vxl.e << " " << vxl.f << " " << vxl.g << " " << vxl.h << endl; 
    
    GL::push(); GL::translate( p.w()); DRAW(v); GL::pop();
}

void GLVApp :: onDraw(){

    interpolation(*this);
//    field(*this);

    text("Use the G, R, keys to Grab and Rotate the Right Frame.  Q to let go.",50,50);
}

int main(int argc, const char * argv[]) {
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"VSR",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}
