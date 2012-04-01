//
//  TestTransformation.cpp
//  vsr
//
//  Created by Pablo Colapinto on 3/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "GLVInterfaceImpl.h"

using namespace vsr;
using namespace glv;


Window * win;
GLVApp * app;

void trv(GLVApp& app){
    
    //given Circle in xy plane with radius of .5
    static Cir cir = CXY(1);  cir.draw(0,1,0);

    //given point p of mouse position near the origin.
    Pnt p = app.mouse().origin;
    
    //Tangent on cir at point p
    Par tan = Ta::at(cir, p, false);
    
    Lin tanLine = tan ^ Inf(1);    
    tanLine.draw();
    
    Lin bisect = Ro::cen(cir) ^ Ro::cen(tan) ^ Inf(1);
    bisect.draw(1,1,0);
    
    Par par = ( bisect.dual() ^ Ro::sur(cir) ).dual();
    par.draw(1,0,0);
    //can we find transformation X that takes lin to cir?
    
    //we need a roving tangent
    static Frame fr; //fr.drawX(1,0,0);
    
    app.interface.touch(fr);
    
    int num = 100;
    
    IT(num) 
    
        double t = 1.0 * i/num;
//        Tnv tnv( fr.x() * fr.scale() * t );
        Par p = tan; //p[0] *= t; p[1] *=t; p[2] *= t;//tnv.trs( fr.pos() );
       // cout << p << endl;
        Cir tc = cir.sp( Gen::tpar(p) );
        tc.draw();
    
    END
    
}

void tangentFrame(GLVApp& app){
    static Frame f;
    
    app.interface.touch(f);
    
    static double x, y, z;
    
    SET
        app.gui.add(DIALER,"x",x,-1,1);
        app.gui.add(DIALER,"y",y,-1,1);
        app.gui.add(DIALER,"z",z,-1,1);
    END
    
    Cir cxy = f.cxy().trs(f.x());
    cxy.draw(1,0,0);
    Cir cxz = f.cxz().trs(f.z());
    cxz.draw(0,1,0);
    Cir cyz = f.cyz().trs(f.y()); 
    cyz.draw(0,0,1);
    
    Lin lx = f.xl();  Lin ly = f.yl(); Lin lz = f.zl();
    lx.draw(1,0,0); ly.draw(0,1,0); lz.draw(0,0,1);
    
    int num = 10;
    
    //TEST
    
    IT(num+1)
        double t = 1.0 * i/num;
        static Cir c;
        
//        c = cxy.sp(f.ppx(t*x)); c.draw(1-t,0,t);
//        if (Ro::siz(c) == 0 ) Lin(c).draw(1,0,0);
//    
//        c = cxz.sp(f.ppz(t*y)); c.draw(t,1-t,0);
//        if (Ro::siz(c) == 0 ) Lin(c).draw(0,1,0);
//        
//        c = cyz.sp(f.ppy(t*z)); c.draw(0,t,1-t);
//        if (Ro::siz(c) == 0 ) Lin(c).draw(0,0,1);     

        //NO GOOD
//    State sx = Op::sp0( Gen::trv( f.x() * t * x ), Gen::trs(f.pos()) );
//    State sy = Op::sp0(Gen::trv( f.y() * t * y ), Gen::trs(f.pos()) );
//    State sz = Op::sp0(Gen::trv( f.z() * t * z ), Gen::trs(f.pos()) );
//    c = lx.sp( sx ); c.draw(1-t,0,t);
//    c = ly.sp( sy ); c.draw(t,1-t,0);
//    c = lz.sp( sz ); c.draw(0,t,1-t);

        // dx/dz and dx/dy
        c = lx.sp(f.ppz(t*z)); c.draw(1-t,0,t);
        c = lx.sp(f.ppy(t*y)); c.draw(1-t,0,t);
        
        // dy/dx and dy/dz
        c = ly.sp(f.ppx(t*x)); c.draw(t,1-t,0);
        c = ly.sp(f.ppz(t*z)); c.draw(t,1-t,0);
        
        // dz/dx and dz/dy
        c = lz.sp(f.ppx(t*x )); c.draw(0,t,1-t);
        c = lz.sp(f.ppy(t*y)); c.draw(0,t,1-t);
    
    END
    
    
}

void GLVApp :: onDraw(){
     //   trv(*this);
    tangentFrame(*this);
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