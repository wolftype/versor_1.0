//
//  Fluid.cpp
//  Versor
//
//  Created by Pablo Colapinto on 10/31/12.
//  Copyright (c) 2012 WOLFTYPE. All rights reserved.
//


#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_draw.h"
#include "vsr_tests.h"
#include "vsr_field.h"

#include <iostream>

using namespace vsr;


void basic(GLVApp& app){
    
        static Fluid<Vec> fluid(10,10,10);
        
        static double visc, diff, adv,src, numparticles;
        static bool bReset;
        SET
            app.gui(visc,"visc")(diff,"diff")(adv,"advect",-100,100)(src,"src")(numparticles,"numpart",0,1000)(bReset);
            visc = .01; diff = .01; adv = .01;
            bReset = 0;
            
            app.camera().pos( 0,0,10);
            
            
            
        END

        if (bReset) fluid.reset();
        
        fluid.step( visc, diff, adv);

        fluid.density().draw();

        fluid.velocity().draw();
        fluid.velocity().at(5,5,0) += Vec(0,1,0) * src * 100;
        
//        ITJ(i,numparticles);
//            
//        END
//        if (app.mouse().isDown) {
//            cout << "down" << endl; 
//            Pnt p = app.mouse().origin;
//            Vec v = app.interface.view().data.z;
//            fluid.velocity().dataAt( p ) -= v * 2;
//        }

}

void test(GLVApp& app){
    static Field<Vec> f(5,5,5);
    
    Pnt p = app.mouse().origin;
    Pnt bp = f.bound(p);
    DRAW3(bp,1,0,0);
    
    Vec v = f.euler3d(p);

    f.draw();
    
    DRAWPUSH(p,v);
}


void GLVApp :: onDraw(){

    basic(*this);
 //   test(*this);

}

int main(int argc, const char * argv[]) {

    cout << argv[0] << endl; 
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"Fluid Field",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}
