//
//  linear.cpp
//  vsr 
//
//  Created by Pablo Colapinto on 6/28/12.
//  See "Boosted Surfaces" article
//  
//  Copyright (c) 2012 wolftype. All rights reserved.

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_mesh.h"
#include "vsr_field.h"

#include "vsr_tests.h"
#include <iostream>


using namespace vsr;
using namespace glv;

Window * win;
GLVApp * app;

void bilinear(GLVApp& app){

    static Field<Par> f(2,2,1,2);
    static Field<Dll> fd(2,2,1,2);
    static Field<Tnv> ft(2,2,1,2);
    
    static Frame * frame = new Frame[ f.w() * f.h() ];
    
    static Frame source (PT(0,0,0), Rot(1,0,0,0));
    
    static float val, nm, lz, siz, amt, scale, normlen;
    static bool bGrid, bTwist, bTanv, bDraw, bDrawNormals, bSizeVal;
    SET
        bool  s = 0;
        ITJ(i,f.num())
            s = !s; 
            frame[i].pos() = Ro::null(f.grid(i));
            
            frame[i].rot( ( i == 0 || i == 3 )? Gen::rot(Biv::xz * PI/4.0) : Gen::rot(Biv::xz * -PI/4.0) );
            //frame[i].orientX( Ro::null( f.grid(i) * 2 ) );
        
        END
        
		Gui& gui = app.gui;
        
        gui(val,"val",-10,10);
        gui(nm, "num",5,100);
        gui(lz, "lz",-10,10);
        gui(amt, "amt",-10,10)(scale,"scale",0,100);//(siz,"siz",-10,10)
        gui(bSizeVal, "bSizeVal")(bGrid, "relative")(bTwist, "twists")(bTanv, "tanv")(bDraw, "draw_src")(bDrawNormals,"drawNorm");
        gui(normlen,"normlen");
        
        val = 1;
        nm = 10;
        lz = .3;
        amt = 1;
        bGrid = true;
    END 
    
    GL::lightPos(0,0,lz);
    
    ITJ(i,f.num())

        f.grid(i) = frame[i].pos();
        fd.grid(i) = frame[i].pos();
        
        f[i] = frame[i].tx( frame[i].scale() );
        fd[i] = frame[i].dll() ;
        ft[i] = frame[i].x() * ( frame[i].scale() );
        
        // GL::Draw::PushFrame(frame[i]);
        // DRAW3(Vec::x * frame[i].scale() * amt , 0,0,0); 
        // GL::pop();
		Draw::X(frame[i]);
        app.interface.touch(frame[i]);
        
        //frame[i].scale() *= scale;

    END 
    
    //STARTING POINT
    app.interface.touch(source);
    if (bDraw) DRAW(source);//.draw();    
    Pnt src = source.pos();
    
    int num = nm;
    vector <Pnt> vp;
    IT2i(num,num)
        
        //USE CENTRAL POINT OR PREGRID
        Pnt fsrc = f.surfpnt(u,v);
        if (bGrid) src = fsrc;
    
        Par tv = f.surf(u,v) * amt ;
        Tnv tv2 = ft.surf(u,v) * amt ;        
        Dll tvd = fd.surf(u,v) * amt;
        
        Mot mm = Gen::mot(tvd);
        
        //INTERPOLATED PAIRS
        Bst pp = Gen::bst(tv);////Gen::trv(1, tv );
        pp[0] = val; 
        if (bSizeVal) pp[0] *= Ro::size( tv, true ); 
        
        //INTERPOLATED TANGENTS
        Bst pp2 = Gen::bst(tv2, fsrc, 1);//Gen::trv( tv2, fsrc, 1);
        pp2[0] = val;
        if (bSizeVal) pp2[0] *= 2 * Ro::size( Par(pp2), true );
        
        Pnt np = bTwist ? src.sp( mm ) : Ro::loc( src.sp( bTanv ? pp2 : pp ) );
        
        vp.push_back(np);

    END END 
    
    vector<Vec> n;
    vector<Vec> p;
    
    
    ITJ(i,num)
    
       
        ITJ(j,num)
            int a = i * (num+1) + j;
            int b = a + (num+1);
            int c = a + (num+1) + 1;
            int d = a + 1;
            
            Vec normal = ( Ro::dir( vp[a] ^ vp[b] ^ vp[c]  ) ).dual();
            normal = normal.unit();
            n.push_back(normal);
            Pnt tp = Interp::surface<Pnt> ( (vp[a]), vp[b], vp[c], vp[d], .5, .5);
            p.push_back(Vec(tp));
            glBegin(GL_QUADS);
            glColor3f(1,0,0);
            GL::normal( normal.w() );
            GL::Quad( vp[a], vp[b], vp[c], vp[d]); 
            glEnd();
            
            glColor3f(1,1,1);
            glBegin(GL_LINE_STRIP);
            glNormal3f(0,0,1);
            GL::Tri( vp[a], vp[b], vp[c]);
            GL::Tri( vp[a], vp[d], vp[c]);
            glEnd();
        END        
    END 
   
    
    if (bDrawNormals) {
        glBegin(GL_LINES);
        ITJ(i,n.size())
                Vec d = p[i] + n[i] * normlen;
                GL::vertex( p[i].w() );
                GL::vertex( d.w() );
        END 
        glEnd();
    }
    
    app.text("Bilinear Interpolation of Four Point Pair Generators");
}



void GLVApp :: onDraw(){

    bilinear(*this);

    text("Use the G, R, S keys to Grab, Rotate, and Scale Control Points (white arrows).  Q to let go.",50,50);
	text("Option + arrows to rotate Model, Shift + arrows to move camera, Ctrl + Arrows to Rotate Camera", 50, 20);
}


int main() {
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.2,.2,.2);
    		
	win = new Window(900,400,"Versor Example",&glv);    
    app = new GLVApp(win);    
    
    glv << app;
    
    Application::run();
    
    return 0;
}

