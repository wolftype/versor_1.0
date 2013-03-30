//
//  dini.cpp
//  vsr 
//
//  Created by Pablo Colapinto on 6/28/12.
//  See "Boosted Surfaces" article
//  
//  Copyright (c) 2012 wolftype. All rights reserved.

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_mesh.h"
#include "vsr_motor.h"
#include "vsr_field.h"

#include "vsr_tests.h"
#include <iostream>


using namespace vsr;
using namespace glv;

Window * win;
GLVApp * app;

//Dini's Surface
void dini(GLVApp& app, bool reset = false){

    static Dll dll = DLN(0,1,0);
    static Frame frame(PT(0,2,0), Rot(1,0,0,0));
    
    TOUCH(frame); 

    static Pnt p = Ro::null(1,0,0);
    static float period, pitch, amt, nm, lz;

    SET 
        Gui& gui = app.gui;
        gui(period,"period",-10,10)(pitch,"pitch",-10,10)(amt,"amt",-10,10)(nm,"num",10,100); 
        gui(lz, "light_src",-100,100);
        
        amt = -2;
        period = 1;
        pitch = 0;
        lz = .35;
   
     END
    
    if (reset) bSet = false;

    GL::lightPos(0, lz, lz);
    DRAW(frame);//.draw();
    
    Twist tw; tw.along(dll, PI*period, pitch);
    
    Par par = frame.ty(frame.scale() * amt);
        
    int num = nm;
    UVMesh uvmesh(num+1,num+1);
    
    ITJi(i,num)
        Pnt tp = p.sp( tw.mot(-t) );
        ITJi(j, num)
            Par npar = par.trs(0,tp[1],0);
            Bst pp = Gen::bst(npar*t);//Gen::trv(1,npar * t);
            Pnt np = Ro::loc( tp.sp( pp ) );
            
            uvmesh.add(np);

        END 
    END 
    
    //DRAW
    uvmesh.draw(1,0,0);
    uvmesh.drawTri(1,1,0,.5);
    
    app.text("Negatively Curved Surfaces: The Psuedosphere and Dini's Surface");

}



void GLVApp :: onDraw(){

    dini(*this);

	text("Option + arrows to rotate Model, Shift + arrows to move camera, Ctrl + Arrows to Rotate Camera", 50, 20);
}


int main() {
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.2,.2,.2);
    		
	win = new Window(500,500,"Versor Example: Dini's Surface",&glv);    
    app = new GLVApp(win);    
    
    glv << app;
    
    Application::run();
    
    return 0;
}

