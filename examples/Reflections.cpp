//
//  Twists.cpp
//  Versor
//
//  Created by Pablo Colapinto on 12/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include <iostream>

using namespace vsr;

void reflections(GLVApp& app){

    //Line along Y Axis
    static Lin lin = LN(0,1,0);
    DRAWANDTOUCH(lin);
    
    //A Circle at 2,0,0
    static Cir cir = CXY(1).trs(2,0,0);
    DRAWANDTOUCH(cir);
    

    Cir r = (cir * Cir(lin)) / cir;
    cout << lin << cir << "new:\n" << r << endl;
    //Tr
    double s = Ro::size(r,false);
    cout << "size: " << s << endl; 
    if (fabs(s) > 10000) {
        DRAW3(Lin(r),1,0,0);
       // cout << "treat as a line" << endl; 
    }
    else DRAW3(r,0,1,0);
    
 //   cout << "inversion and reversion: " << !cir << ~cir << endl; 
    
}

void planeInSphere(GLVApp& app){
    static Dlp dlp(0,1,0,0);
    DRAW(dlp);
    
    static Dls dls = Ro::dls(0,0,0,1);
    DRAWANDTOUCH(dls); 
    
    Dls nd = Dls(dlp).re(dls);
    DRAW(nd);
    
    cout << dlp << nd << endl;  
}


void glide(GLVApp& app){

    static Dlp dlp(0,1,0,1);
    DRAWANDTOUCH(dlp);
    static Vec vec(2,0,0);
    DRAWANDTOUCH(vec);
    Trs trs = Gen::trs(vec);
    
//    static Par f = PAIR(1,1,0);
    static Cir cir = CXZ(1);
    
//    DRAW3(Ro::split(f,true),1,0,0);  
//    DRAW3(Ro::split(f,false),0,0,1);  
//    TOUCH(f);

    DRAWANDTOUCH(cir);
    DRAW3( Ro::pnt_cir(cir, PIOVERTWO),1,0,0 );

//    Par nf =  f.re( trs * dlp ); //f.re(dlp).trs(vec);
    Cir nc = cir.re( trs * dlp );
    
    DRAW(nc);
    DRAW3( Ro::pnt_cir(nc, PIOVERTWO),0,1,0 );
    
    
    
//    DRAW3(Ro::split(nf,true),1,0,0);  
//    DRAW3(Ro::split(nf,false),0,0,1);  
    

}

void GLVApp :: onDraw() {
    //reflections(*this);
    glide(*this);
    //planeInSphere(*this);
    text("Hit 'G' 'R' or 'S' keys and click on element to Grab Rotate or Scale.  Hit 'Q' to release");
}

int main(int argc, const char * argv[]) {
     
//    File::setdir( argv[0] );       
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(1000,500,"Reflections",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}
