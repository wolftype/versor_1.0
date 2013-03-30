//
//  Meet.cpp
//  Versor
//
//  Created by Pablo Colapinto on 10/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//


#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_draw.h"
#include "vsr_tests.h"

#include <iostream>

using namespace vsr;

void twoSpheres(GLVApp& app){

    //Two Dual Spheres
    static Dls sA = Ro::dls(-1,0,0,1);
    static Dls sB = Ro::dls(1,0,0,.5);
    
    //use 'G', 'R', 'S' to grab, rotate, or scale these elements
    TOUCH(sA); TOUCH(sB);

    //Plunge (is Real when Meet is Imaginary)
    Par p = sA ^ sB ;

    //Meet is dual to the plunge
    Cir c = p.dual();

    //CYAN POINT PAIR PLUNGE
    DRAW3(p,0,1,1);
    
    //GREEN CIRCLE MEET (is dotted when Meet is Imaginary)
    DRAW3(c,0,1,0);

    //RED SPHERES
    DRAW4(sA,1,0,0,.5);
    DRAW4(sB,1,0,0,.5);

}

void threeSpheres(GLVApp& app){

    //Three Dual Spheres
    static Dls sA = Ro::dls(-1,0,0,1);
    static Dls sB = Ro::dls(1,0,0,.5);
    static Dls sC = Ro::dls(0,1,0,.2);
    
    //use 'G', 'R', 'S' to grab, rotate, or scale these elements
    TOUCH(sA); TOUCH(sB); TOUCH(sC);

    //Plunge (is Real when Meet is Imaginary)
    Cir c = sA ^ sB ^ sC ;

    //Meet is dual to the plunge
    Par p = c.dual();

    //CYAN Circle Plunge
    DRAW3(c,0,1,1);
    
    //GREEN Point Pair MEET
    DRAW4(p,0,1,0,.5);

    //RED SPHERES
    DRAW4(sA,1,0,0,.5);
    DRAW4(sB,1,0,0,.5);
    DRAW4(sC,1,0,0,.5);

}

void lines(GLVApp& app){

    static Frame a, b;
    
    SET
        a.set(PT(-1,0,0)); b.set(PT(1,0,0));
    END
    
    DRAWANDTOUCH(a); DRAWANDTOUCH(b);

    Dll dllA = a.dly();
    Dll dllB = b.dly();
    
    DRAW3(dllA,1,0,0); DRAW3(dllB,0,1,0);
    
    
    Dll c = dllA % dllB;rr
    Drt drt = dllA ^ dllB;
    Sca sca = dllA <= dllB;
    
    cout << c.rnorm() << " " << sca << drt << endl; 

}

void circleAndSphere(GLVApp& app){

    static Point pa = PT(1,0,0);
    static Point pb = PT(0,1,0);
    static Point pc = PT(-1,0,0);
    
    //Grab points (hit 'g' and drag mouse) to define a circle
    app.interface.touch(pa);
    app.interface.touch(pb);
    app.interface.touch(pc);

    DRAW(pa); DRAW(pb); DRAW(pc);
    
    Circle c = pa ^ pb ^ pc;
    
    //The Sphere Surrounding the Circle
    DualSphere dls = Round::sur( c );    
    
    
    //Another Sphere
    static DualSphere dls2 = Ro::dls(2, 0, 0);
    app.interface.touch(dls2);
    DRAW4(dls,1,0,0,.3); DRAW4(dls2,1,0,0,.3);
    
    //The Circle Meet of the two Spheres
    Circle inter = (dls ^ dls2).dual();
    DRAW(inter);
    
    //The Point Pair
    DRAW3( ( (dls ^ dls2) ^ Dlp(0,1,0,0) ).undual(), 0,1,0 );
    
    //The Plane
    DRAW(Dlp(0,1,0,0));
}


void linePoint(GLVApp& app){

    static Dll dll = DLN(0,1,0);
    static Pnt pnt = PT(1,1,0);
    
    app.interface.touch(dll);
    app.interface.touch(pnt);
    DRAW(dll); DRAW3(pnt,1,0,0);
    
    Cir dualMeet = pnt ^ dll;
    DRAW( dualMeet );
    
    Dlp dualPlane = pnt <= dll;
    DRAW(dualPlane);
        
}

void pointOnCircle(GLVApp& app){

    static Cir c = CXY(1); 
    DRAWANDTOUCH(c);
    
    static double rad,w;
    SET app.gui(rad)(w); END
        
    Pnt p1 = Ro::pnt_cir( c, rad * TWOPI);
    DRAW3(p1,1,0,0);
    
    Vec v = Ro::vec( c, rad * TWOPI );
    DRAW(v);
    Pnt p2 = (p1 + v*w).null();
    DRAW(p2);
    Cir c1 = p2 ^ c.dual();
    DRAW(c1);
}

void GLVApp :: onDraw(){

    static bool bTwoSpheres, bThreeSpheres, bTwoLines, bCircleAndSphere, bLinePoint, bCircle, bPointCircle;

    //linePoint(*this);
    //circle(*this);
//    pointOnCircle(*this);

    SET
        gui(bTwoSpheres,"Two Spheres")(bThreeSpheres,"Three Spheres")(bTwoLines,"Two Lines")(bCircleAndSphere,"Circle and Sphere");
    END
    
    if (bTwoSpheres) twoSpheres(*this);
    if (bThreeSpheres) threeSpheres(*this);
    if (bTwoLines) twoLines(*this);
    if (bCircleAndSphere) circleAndSphere(*this);
}

int main(int argc, const char * argv[]) {

        cout << argv[0] << endl; 
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"MEET OPERATIONS",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}
