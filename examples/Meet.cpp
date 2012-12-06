//
//  Meet.cpp
//  Versor
//
//  Created by Pablo Colapinto on 10/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_draw.h"

using namespace vsr;

void circ(GLVApp& app){

    static Point pa = PT(1,0,0);
    static Point pb = PT(0,1,0);
    static Point pc = PT(-1,0,0);
    
    app.interface.touch(pa);
    app.interface.touch(pb);
    app.interface.touch(pc);

    DRAW(pa); DRAW(pb); DRAW(pc);
    
    Circle c = pa ^ pb ^ pc;
    
    Dls dls = Round::sur( c );    
    static Dls dls2 = Ro::dls(2, 0, 0);
    
    app.interface.touch(dls2);
    DRAW4(dls,1,0,0,.3); DRAW4(dls2,1,0,0,.3);
    
    Cir inter = (dls ^ dls2).dual();
    DRAW(inter);
    DRAW3( ( (dls ^ dls2) ^ Dlp(0,1,0,0) ).undual(), 0,1,0 );
    
    DRAW(Dlp(0,1,0,0));
}


void linePoint(GLVApp& app){

    static Dll dll = DLN(0,1,0);
    static Pnt pnt = PT(1,1,0);
    
    app.interface.touch(dll);
    app.interface.touch(pnt);
    DRAW(dll); DRAW(pnt);
    
    Cir dualMeet = pnt ^ dll;
    DRAW( dualMeet );
    
    Dlp dualPlane = pnt <= dll;
    DRAW(dualPlane);
    
    cout << Ro::size(dualMeet, false) << endl; 
    cout << dualPlane.dot() << endl; 
    
}

void GLVApp :: onDraw(){
    linePoint(*this);
    //circle(*this);
}

int main(int argc, const char * argv[]) {

    /* Get Current Working Directory */
    File::setdir( argv[0] );
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"MEET OPERATIONS",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}