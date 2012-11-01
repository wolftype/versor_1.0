//
//  DemoAgacse.cpp
//  vsr
//
//  Created by Pablo Colapinto on 6/28/12.
//  Playing around with Point Pair Generators
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//


#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include "vsr_mesh.h"
#include "vsr_boost.h"


#include "vsr_draw.h"
#include "vsr_mdraw.h"
#include "vsr_mglyph.h"

#include "vsr_gl_shader.h"
#include "vsr_gl_vattrib.h"
#include "vsr_gl_vbo.h"

#include "vsr_stat.h"


#include <iostream>


using namespace vsr;
using namespace glv;

void circle(GLVApp& app){

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


//Imaginary Point Pairs
void imaginary(GLVApp& app){


    //This is the point we are transforming
    static Pnt p = PT(1,0,0);
    DRAW(p);
    app.interface.touch(p);

    //Some Variables we can control onscreen
    static float val, m, n, iter, dense;
    static bool bReset, bDrawCoord, bDrawGen;
    static Pnt tp[100];
    
    SET 
        app.gui(val,"val",-10,10)(dense,"dense",0,100)(m, "m", -10,10)(n,"n",-10,10)(bReset)(bDrawCoord)(bDrawGen);
        //app.gui(iter,"iter",1,10);         

//        Rand::Seed(10);
//        for (int i = 0; i < 100; ++i){
//            tp[i] = Ro::null(Rand::Num() * 1, Rand::Num()*1, Rand::Num()*1);            
//        }

    END

//    if (bReset){
//        Rand::Seed(10);
//        for (int i = 0; i < 100; ++i){
//            tp[i] = Ro::null(Rand::Num() * 1, Rand::Num()*1, Rand::Num()*1);            
//        }
//    }

    //The Position of the Point Pair Generators
    static Dls d1 = EP;    
    static Dls d2 = EP.trs(0,0,1);    

    app.interface.touch(d1);
    app.interface.touch(d2);


    //Point Pair Generators (Imaginary)
    Par para = Ro::par( d1, Vec::y );
    Par parb = Ro::par( d2, Vec::x );
    
    
    Par Bp = para * PI/m;
    Par Bm = parb * PI/n;

    Bst Vp = Gen::bst(Bp * val);
    Bst Vm = Gen::bst(Bm * val);
    
    int num = m * n / ( (val>0)?val:1);
   // cout << num << endl; 
    
        Pnt tmpa = p;
        ITJi(i,num)
            Pnt np = tmpa;
            if (bDrawCoord){
                DRAW3( np ^ Bp, 1,1,0); 
                DRAW3( np ^ Bm, 0,1,1); 
            }
            tmpa = Ro::loc( np.sp( Vm * Vp ) );
            DRAW3(tmpa, 1,1,1);
        END
    
//    cout << app.scene().xf << endl; 
    Par parc = Bp + Bm;
    Par tpar = parc * val/dense;
    Bst bst = Gen::bst(tpar);
    
    Pnt tmp = p;
    glColor3f(1,1,1);
    glBegin(GL_LINE_STRIP);    
    ITJi(i, dense * num);
        Pnt np = Ro::loc( tmp.sp(bst) );
        tmp = np;
        GL::vertex(np.w());
    END
    glEnd();
    
    
    
//    for (int i = 0; i < 100; ++i){
//            tp[i] = Ro::loc( tp[i].sp(bst) );
//            DRAW( tp[i] );            
//    }

//    DRAW3(parb,0,0,1);
//    DRAW3(para,1,0,0);
//   
 
    if (bDrawGen){
        DRAW3(para.dual(),1,0,0);    
        DRAW3(parb.dual(),0,0,1);
    }
    
}


void test(GLVApp& app){

    static Cir cxy = CXY(1);
    app.interface.touch(cxy);
    
    static Dll dll = DLN(1,0,0).trs(2,0,0);
    static Par par = PT(1,0,0) ^ PT(-1,0,0);
    
    static float val;
    SET
        app.gui(val,"val",-10,10);
    END
    
    ITJi(i,100)
        Cir tcxy = cxy.sp( Gen::bst(par * t * val * PI) );    
        DRAW3(tcxy,1,0,0);
    END
}

void weighted(GLVApp& app){

    
    static double wa,wb,wc,wd,val,m,n;
    static bool bPnt;
    SET
        app.gui(wa,"wa",-10.0,10.0)(wb,"wb",-10.0,10.0)(wc,"wc",-1.0,1.0)(wd,"wd",-1.0,1.0);
        app.gui(val,"val", -1, 1)(m, "m", -10,10)(n, "n", -10,10)(bPnt);
    END

    static Pnt pa = PT(-1,0,0);
    static Pnt pb = PT(1,0,0);
    static Pnt pc = PT(0,-1,0);
    static Pnt pd = PT(0,1,0);

    pa[3] = wa; pb[3] = wb;
//    pc[3] = wc; pd[3] = wd;

    Par para = pa ^ pb;
    Par parb = pc ^ pd;
    
    DRAW3(para.dual(),1,0,0);
    DRAW3(parb.dual(),0,1,0) ;
    
//    cout << "A: " << para.dot() << endl;
//    cout << "B: " << parb.dot() << endl;

    Par tp = para * m;// + parb * n;
    Bst b = Gen::bst(tp * val);      

    if(bPnt){
        static Pnt src = PT(1,1,0); 
        app.interface.touch(src);
        DRAW(src);

        Pnt tmp = src;
        glBegin(GL_LINE_STRIP);
        ITJi(i,1000);
            Pnt np = Ro::loc( tmp.sp(b) );
            GL::vertex(np.w());
            tmp = np;
        END
        glEnd();
    } else {
        static Cir csrc = CYZ(.7);
        app.interface.touch(csrc);
        DRAW(csrc);
        Cir tmp = csrc;
        ITJi(i,1000);
            Cir nc = tmp.sp(b);
//            DRAW3(nc,t,0,1-t);
            DRAWV(nc);
            tmp = nc;
        END        
        
    }
}


void GLVApp :: onDraw(){
//    test(*this);
    imaginary(*this);
//    weighted(*this);
//    text("Use the Shift + arrow Keys to move camera, or Optoin + arrows to rotate Fibration",50,50);
}

int main(int argc, const char * argv[]) {

    cout << argv[0] << endl; 
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"KNOTS",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}
