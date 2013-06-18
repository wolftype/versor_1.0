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
    static Dls sB = Ro::dls(1,0,0,1);
    
    Pnt op = PT(0,-2,0);
    //DRAW3(op,1,1,0);
    
    Cir orbit = op ^ sA ^ sB;
    //use 'G', 'R', 'S' to grab, rotate, or scale these elements
    TOUCH(sA); TOUCH(sB);

    //Plunge (is Real when Meet is Imaginary)
    Par p = sA ^ sB ;

    //Meet is dual to the plunge
    Cir c = p.dual();

    //RED SPHERES
    DRAW4( sA,1,0,0,.5);
    DRAW4( sB,1,0,0,.5);

    //CYAN POINT PAIR PLUNGE
    DRAW3(Ro::loc( Ro::split(p,true) ),0,1,1);
    DRAW3(Ro::loc( Ro::split(p,false) ),0,1,1);
    
    //GREEN CIRCLE MEET (is dotted when Meet is Imaginary)
    DRAW3(c,0,1,0);
    
    DRAW3(orbit,0,0,0);
    
    app.text("Hit 'G' or 'S' and then click to grab or scale spheres,  'Q' to let them go.",50,50);

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
    glLineWidth(5);
    DRAW3(c,0,1,1);
    glLineWidth(1);
    
    //GREEN Point Pair MEET
    DRAW4(p,0,1,0,.8);

    //RED SPHERES
    DRAW4(sA,1,0,0,.8);
    DRAW4(sB,1,0,0,.8);
    DRAW4(sC,1,0,0,.8);

}



void circleAndPlane(GLVApp& app){

    static Point pa = PT(1,0,0);
    static Point pb = PT(0,1,0);
    static Point pc = PT(-1,0,0);
    
    //Check for Grabbed points (hit 'g', click, and drag mouse) to define a circle
    app.interface.touch(pa);
    app.interface.touch(pb);
    app.interface.touch(pc);

    //Draw the Points
    DRAW3(pa,1,0,0); DRAW3(pb,1,0,0); DRAW3(pc,1,0,0);
    
    //Make a Circle
    Circle c = pa ^ pb ^ pc;

    //Draw the Circle (YELLOW)
    DRAW3(c,1,1,0);
    
    //A Plane with Y normal at the origin
    DualPlane dlp(0,1,0,0);

    //Draw the Plane
    DRAW3(dlp,0,1,1);
    
    //The Point Pair Meet of the Circle and the Plane
    DRAW3( (c.dual() ^ Dlp(0,1,0,0) ).dual(), 0, 1, 0 );

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



void GLVApp :: onDraw(){

    static bool bTwoSpheres, bThreeSpheres, bCircleAndPlane, bLinePoint;

    SET
        gui(bTwoSpheres,"Two Spheres")(bThreeSpheres,"Three Spheres")(bCircleAndPlane,"Circle and Plane")(bLinePoint,"Line and Point");
        bTwoSpheres = true;
    END
    
    if (bTwoSpheres)     twoSpheres(*this);
    if (bThreeSpheres)   threeSpheres(*this);
    if (bCircleAndPlane) circleAndPlane(*this);
    if (bLinePoint)      linePoint(*this);
}

int main(int argc, const char * argv[]) {

    cout << argv[0] << endl;
    
     #ifdef __REDUCED_GRAPHICS__
        cout << "REDUCED GRAPHICS" << endl;
      #endif 
    
    //File::setdir( argv[0] );
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(1,1,1);
    		
	Window * win = new Window(500,500,"MEET OPERATIONS",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}

//void twoLines(GLVApp& app){
//
//    static Frame a, b;
//    
//    SET
//        a.set(PT(-1,0,0)); b.set(PT(1,0,0));
//    END
//    
//    DRAWANDTOUCH(a); DRAWANDTOUCH(b);
//
//    Dll dllA = a.dly();
//    Dll dllB = b.dly();
//    
//    DRAW3(dllA,1,0,0); DRAW3(dllB,0,1,0);
//    
//    Dll c = dllA % dllB;
//    Drt drt = dllA ^ dllB;
//    Sca sca = dllA <= dllB;
//    
//    cout << c.rnorm() << " " << sca << drt << endl; 
//
//}
//
//void pointOnCircle(GLVApp& app){
//
//    static Cir c = CXY(1); 
//    DRAWANDTOUCH(c);
//    
//    static double rad,w;
//    SET app.gui(rad)(w); END
//        
//    Pnt p1 = Ro::pnt_cir( c, rad * TWOPI);
//    DRAW3(p1,1,0,0);
//    
//    Vec v = Ro::vec( c, rad * TWOPI );
//    DRAW(v);
//    Pnt p2 = (p1 + v*w).null();
//    DRAW(p2);
//    Cir c1 = p2 ^ c.dual();
//    DRAW(c1);
//}
