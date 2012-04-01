//
//  TestVsrGlv2.cpp
//  vsr
//
//  Created by Pablo Colapinto on 3/28/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "GLVInterfaceImpl.h"




using namespace vsr;
using namespace glv;


Window * win;
GLVApp * app;

void test1(GLVApp& app){

	//Circle With Radius of .5
    static Cir c = CXY(.5);	
    //Dual Plane with Normal(0,1,0) at Origin
	static Dlp d (0,1,0,0);
    
    //A Button 
    static bool but = 0;
    
    SET 
    
    app.gui.add(BUTTON,"show meet", but); 
    
    END
    
    //Click 'G' 'R' or 'S' to Grab, Rotate, or Scale 
    app.interface.touch( c );
    app.interface.touch( d );
    
    //Dual Meet of Dual Circle and Dual Plane
	Cir c2 = c.dual()  ^ d ;

    //Dual of Dual Meet of Dual Representation (!) Is the Pair of Points where plane and circle meet
	Par p = c2.dual();

    //Draw Elements (passing in color values)
	d.draw(1,1,1);
	
	c.draw(1,1,0);

    if ( but ) p.draw(0,0,1);
}

void testProjector(GLVApp& app){
    
    static Dls sphere = Ro::dls3(0,0,0,10);    
    static Frame src;
    
    static Drv d[4];
    static Pnt p[4];
        
    static float hs, vs, tn;
    SET    
        app.gui.add(DIALER,"horiz spread",hs,-3.14, 3.14);
        app.gui.add(DIALER,"vert spread",vs,-3.14, 3.14);
        app.gui.add(DIALER,"transversor amt",tn,-3.14, 3.14);
    
    END
    
    app.interface.ui( src );
    
    
    d[0] = src.z().rot( src.xz() * hs + src.yz() * vs );
    d[1] = src.z().rot( src.xz() * -hs + src.yz() * vs );
    d[2] = src.z().rot( src.xz() * -hs + src.yz() * -vs);
    d[3] = src.z().rot( src.xz() * hs + src.yz() * -vs );

    IT(4) 
        Dll td = ( src.pos() ^ d[i] ).dual(); 
        td.draw();
        
        Par  par = ( td ^ sphere ).dual();
        p[i] = Ro::split1(par);    
        p[i].draw(1,0,0);
    END

    IT(4)        
        int idx = (i<3)? i+1 : 0;
    
        Dlp dlp = ( p[i] ^ p[idx] ^ src.pos() ^ INF ).dual();
    
        Cir c = ( dlp ^ sphere ).dual();
        
        c.draw(0,0,1);
    
        Cir c2 = c.trv( src.z() * tn ); c2.draw();
    END
    //Green Ball
    sphere.draw(0,1,0,.3);    
}

void test2(GLVApp& app){
    //CIRCLE
    static Cir c = CXY(1);    
    
    //DUAL SPHERE AT Coordinate 1,0,0
    static Dls s = Ro::dls3(1, 0, 0);
    
    //DUAL XY PLANE (normal z), .5 units from origin
    static Dlp p(0,0,1,.5);
    
    app.interface.touch( c );
    app.interface.touch( p );
    
    
    //INTERSECTION OF PLANE AND CIRCLE
    Par par = Op::dl( Op::dl(c) ^ p );
    
    Cir t = Op::dl( s ^ p );
    
    c.draw(0,1,0);
    
    par.draw(0,1,1);
    
    //    s.draw(1,0,1);
    
    p.draw(0,1,1);
    
    //    t.draw(1,.5,.5);

}
void GLVApp :: onDraw(){
    
//    test1(*this);
    testProjector(*this);
}



int main() {
    
    /* Bind CGA Framework */
	CongaTypes::BindAll();
    
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);		
	win = new Window(500,500,"VSR",&glv);    
    app = new GLVApp(win);    
    glv << app;
    
    Application::run();
    
    return 0;
}