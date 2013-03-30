//
//  Reflections.cpp
//  Versor
//
//  Created by Pablo Colapinto on 12/3/12.
//  Copyright (c) 2012 WOLFTYPE. All rights reserved.
//

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"

#include "vsr_mesh.h"
#include "vsr_field.h"

#include "vsr_tests.h"

#include <iostream>

using namespace vsr;


void reflections(GLVApp& app){


    static double amt;
    static bool bLine, bShow;
    SET app.gui(amt,"amt",-100,100)(bLine, "line")(bShow,"show ref"); END
    
    static Frame frame;
    TOUCH(frame);
    DRAW(frame.lz());
    
    static Field<Pnt> f(1,19,10,.5);
    
    int iter = 10;
    
    UVMesh mesh(f.h(), f.d());
    
    IT2( f.h(), f.d() )
        
        double t = sin(3*PI*u);//-1.0 + 2*u;
        
        int idx = f.idx(1,i,j);
        Pnt& p = f.at(1,i,j);      
         p = Ro::dls_pnt( f.grid(idx), amt * t);
        
        Dls td = frame.bound().re( p );
        Cir tp = Cir(frame.lz()).re( p );
        if (bShow) bLine? DRAW(tp) : DRAW(td);
        
        Pnt np =  bLine ? Ro::loc(tp) : (td/td[3]).null();
        mesh.add(np);
        DRAW3( np,0,1,1);
    END2
    
    mesh.draw(.3,.3,.3);
    
    //Sphere
    DRAW4(frame.bound(), 1,0,0,.5);
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
    reflections(*this);
    //glide(*this);
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
