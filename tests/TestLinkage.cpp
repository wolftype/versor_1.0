//
//  TestLinkage.cpp
//  vsr
//
//  Created by Pablo Colapinto on 3/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "GLVInterfaceImpl.h"


using namespace vsr;
using namespace glv;


Window * win;
GLVApp * app;


void robot(GLVApp& app){
        
        //The Gui
        Gui& g = app.gui;

        /* The Linkage */
        static Chain chain(4);	

        /* Line from Mouse Into Z Space */
        Dll ray = app.view().data.ray;
        ray.draw();

        /* Mouse Position as A Point in Space */
        Pnt mp = app.mouse().origin;
        mp.draw(0,1,0); //Drawn Green
    
        /*Some Boolean Buttons */
        static bool bDrawPt, bDrawFinal, bFinalPoints, bDrawTargetSphere,
        bDrawFinalCirc,bDrawSf, bDrawC, bDrawLA, bDrawXY, bDrawXZ;
        
        SET		
            g.add(BUTTON, "FinalSphere", bDrawTargetSphere);	
            g.add(BUTTON, "XZ", bDrawXZ);
            g.add(BUTTON, "XY", bDrawXY);
            g.add(BUTTON, "FinalLink", bDrawFinal);
            g.add(BUTTON, "FinalPoints", bFinalPoints);		
            g.add(BUTTON, "Spheres", bDrawSf);
            g.add(BUTTON, "Circle", bDrawC);
            g.add(BUTTON, "Pts", bDrawPt);
            g.add(BUTTON, "Axes", bDrawLA);
        END

        //calc p0:
        Pnt p0 = chain[1].pos();
		
        //calc p2 for CHAIN3:
        Dls st = chain.lastDls( mp );	//target sphere through last joint
        if (bDrawTargetSphere) st.draw(1,1,0);
        Dlp xy = chain.xy( mp );		//xy plane through target 
        Dlp xz = chain.xz( mp );		//xz plane through target
        
        Dll lnk = xy ^ xz;				//final link
        if (bDrawFinal) lnk.draw();
        Cir c1 = Op::dl( st ^ xz );		//circle	
        if (bDrawFinalCirc) c1.draw(0,1,1);
        
        Par p1 = Op::dl( st ^ lnk );
        Pnt pa = Ro::split1(p1);  Pnt pa2 = Ro::null(pa[0], pa[1], pa[2]);
        Pnt pb = Ro::split2(p1);  Pnt pb2 = Ro::null(pb[0], pb[1], pb[2]);
        if (bFinalPoints){
            Ro::dls(pa2,.1).draw(0,0,1);
            Ro::dls(pb2,.1).draw(0,.3,1);
        }
        //pick closest to p0
        Dlp tpa = pa - p0; Dlp tpb = pb - p0;
        chain[3].pos() = ( tpa[3] < tpb[3] ) ? pa : pb; //or pb
        
        //calc p1:
        //spheres and circle of unknown joint meet xy plane
        Dls sf = chain.nextDls(1); //1 to 2 (forward)
        Dls sb = chain.prevDls(3); //3 to 2 (back)
        
        Par p2 = sf^sb;
        Cir c2 = Op::dl(p2);
        
        //pick one for CHAIN2
        Par pt = Op::dl( p2 ^ xy );
        Pnt pta = Ro::split1(pt); Pnt pta2 = Ro::null(pta[0], pta[1], pta[2]);
        Pnt ptb = Ro::split2(pt); Pnt ptb2 = Ro::null(ptb[0], ptb[1], ptb[2]);
        
        
        chain[2].pos() = ptb2;
        
		//lines
        Dll lo = chain.linf(0);
        Dll la = chain.linf(1);
        Dll lb = chain.linf(2);
        Dll lp = chain.lin(mp);
        
        if(bDrawPt){
            Ro::dls(pta2,.1).draw(.1,0,1); Ro::dls(ptb2,.1).draw(.3,0.,1);
        }
        if(bDrawSf){
            sf.draw(1,.2,.3,.1);  sb.draw(1,.2,.3,.1);
        }
        if(bDrawC){
             c2.draw(0,1,0);
        }	
        if(bDrawLA){
            la.draw(0,1,0,.2); lb.draw(0,1,0,.2); lp.draw(0,1,1,.2);
        }
        if(bDrawXY){
            xy.draw(1,0,0,.5);
        }
        if(bDrawXZ){
            xz.draw(0,1,0,.5);
        }
        Biv bxy(Op::dle( Vec(xy) ) );
        Biv bxz(Op::dle( Vec(xz) ) );
        
        Rot r1 = Gen::ratio(Vec::z, Vec(xy).unit());			   //z axis to xy plane
        Rot r2 = Gen::ratio(Vec::y, Op::dle(Biv(la).unit()));   //y axis to la line
        Rot r3 = Gen::ratio(Vec::y, Op::dle(Biv(lb).unit()));   //y axis to la line
        Rot r4 = Gen::ratio(Vec::y, Op::dle(Biv(lp).unit()));   //y axis to la line
        
        chain[0].rot( r1 );
        chain[1].rot( r2 * r1 );
        chain[2].rot( r3 * r1);
        chain[3].rot( r4 * r1 );
        
        chain.draw();
}

void GLVApp :: onDraw(){

    robot(*this);

//    int n = 4;
//    static Chain k(n);
//    
//    IT( n ) interface.ui(k[i]); END
//
//    k.fk();
//    k.draw();
    
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