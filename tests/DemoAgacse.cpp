//
//  DemoAgacse.cpp
//  vsr
//
//  Created by Pablo Colapinto on 6/28/12.
//  FOR A DEMO at AGACSE LA ROCHELLE 2012
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "GLVInterfaceImpl.h"

#include "Lattice.h"
#include "MotorCouple.h"
#include "Boost.h"

#include "Mesh.h"
#include "Draw.h"

#include "vsr_tests.h"

//#include "Gamma/Gamma.h"
//#include "Gamma/Oscillator.h"
//#include "vsr_gxgam.h"
//#include "OSC.h"


using namespace vsr;
using namespace glv;

Window * win;
GLVApp * app;

void basic(GLVApp& app){

    static Frame frame(PT(0,0,0), Rot(1,0,0,0));
    static Cir c = CXY(1);

    static int num;
    static bool bSkin;
    static float amt;
    
    app.interface.touch(c);

    SET
        //static Gui gui;
        //app.subgui["basic"] = &gui;
        app.gui(num,"num",1,100)(amt,"amt")(bSkin, "skin");
        
        amt = 1;
        num = 20;
    END 
    
    CirMesh cm;
    
    ITJi(i,num)
        double xt = -1.0 + 2.0 * t * amt;
        Cir tc = c.sp( frame.ppx( xt ) );
        DRAW3( tc, 1, t*.5, t );     
        cm.add(tc);   
    END 
    
    if (bSkin) {
        cm.skin();
        cm.draw(1,0,0);
    }
    

}

void basic2(GLVApp& app){

    static Frame frame(PT(0,0,0), Rot(1,0,0,0));
    static Cir c = CXY(1);

    static int num;
    static bool bSkin;
    static float amt;
    
    app.interface.touch(c);

    SET
        //static Gui gui;
        //app.subgui["basic"] = &gui;
        app.gui(num,"num",1,100)(amt,"amt")(bSkin, "skin");
        
        amt = 1;
        num = 20;
    END 
    
    CirMesh cm;
    
    ITJi(i,num)
        double xt = -1.0 + 2.0 * t * amt;
        Cir tc = c.sp( frame.ppx( xt ) );
        DRAW3( tc, 1, t*.5, t );     
        cm.add(tc);   
    END 
    
    if (bSkin) {
        cm.skin();
        cm.draw(1,0,0);
    }
    

}

void origin(GLVApp& app){

    static Cir c = CYZ(1);
    static Frame frame(PT(1,0,0), Rot(1,0,0,0));
    
    app.interface.touch(c); app.interface.touch(frame);
    
   // c.draw(0,0,0); //frame.draw();
    static bool bDraw;
    static double val, amt,err,brt,num, lz;
    SET 
        static Gui gui;
        app.subgui["origin"] = &gui;
        gui(num,"num",1,100)(val,"val",-10,10)(amt, "amt",-10,10)(err,"err"); 
        gui(lz, "lz",-100,100)(bDraw);
        
        num = 20;
        val = 1;
        amt = 1;
        err = 1;
        lz = 5;
    END
     
     GL::lightPos(0, lz, lz);
     CirMesh cm;
     
   if (bDraw) DRAW3( frame.x() * amt ,0,0,0);  
    int nm = num;
    IT1(nm)        
        Trv trv = Gen::trv( frame.x() * t * amt);
        trv[0] = val;
        Cir tc = c.sp( trv );
        t = 1-t;
        cm.add(tc);
    END 

    cm.skin();
    cm.draw(1,0,0);
    
    app.text("Skinning a Mesh by Boosting a Circle.");
}

//Dini's Surface
void dini(GLVApp& app, bool reset = false){


    static Dll dll = DLN(0,1,0);
    static Frame frame(PT(0,2,0), Rot(1,0,0,0));
    
    app.interface.touch(frame); 
    static Pnt p = Ro::null(1,0,0);
    static float period, pitch, amt, nm, lz;
    static bool bDraw;
    SET 
        static Gui gui;
        app.subgui["dini"] = &gui;
        gui(period,"period",-10,10)(pitch,"pitch",-10,10)(amt,"amt",-10,10)(nm,"num",10,100)(bDraw); 
        gui(lz, "light_src",-100,100);
        
        amt = 2;
        period = 1;
        pitch = 0;
        lz = .5;
   
     END
    
    if (reset) bSet = false;

    GL::lightPos(0, lz, lz);
    if(bDraw) frame.draw();
    
    Twist tw; tw.along(dll, PI*period, pitch);
    
    Par par = frame.ty(frame.scale() * amt);
        
    int num = nm;
    UVMesh uvmesh(num+1,num+1);
    
    ITJi(i,num)
        Pnt tp = p.sp( tw.mot(-t) );
        ITJi(j, num)
            Par npar = par.trs(0,tp[1],0);
            Bst pp = Gen::trv(1,npar * t);
            Pnt np = Ro::loc( tp.sp( pp ) );
            
            uvmesh.add(np);

        END 
    END 
    
    //DRAW
    uvmesh.draw(1,0,0);
    uvmesh.drawTri(1,1,0,.5);
    
    app.text("Negatively Curved Surfaces: The Psuedosphere and Dini's Surface");

}

void circularDini(GLVApp& app){
    
    static Cir c = CXY(2);
    
    Pnt p = PT(-2.1,0,0);
    
    static float pitch, period, dt, num;
    SET
        app.gui(num,"num",10,1000)(pitch,"pitch",-10,10)(period,"period",-10,10)(dt, "dt",0,100);
    END 
    
    glBegin(GL_LINE_STRIP);
    ITJi(i,num)
        Dll dll = ( Ta::at( c, p ) ^ Inf(1) ).dual();
        Twist tw;
        tw.along( dll, period, pitch);
        p = p.sp( tw.mot(dt) );
        GL::vertex(p.w());
    END 
    
    glEnd();


}

void lineToCircle(GLVApp& app){

    static Frame frame(PT(1,0,0), Rot(1,0,0,0));
    
    //static Lin lin = LN(0,1,0);
    app.interface.touch(frame);
    
    Lin lin = frame.ly();
    
    static float rad, ypos, amt, dbiv, dtnv, dpit, dmnk, err, num;
    
    SET 
        static Gui gui;
        app.subgui["line2circle"] = &gui;
        gui(rad,"rad",-5,5)(ypos,"ypos",-10,10)(amt, "amt", -10,10)(dbiv, "dbiv",-10,10)(dtnv, "dtnv",-10,10)(dpit,"dpit",-10,10)(dmnk,"dmnk",-10,10); 
        gui(err,"err",0,10)(num, "num",1,100);
        
        rad = 1; 
        amt = 1;
        dbiv = 1;
        dtnv = 1;
        dpit = 1;
        dmnk = 1;
        err = 1;
        num = 10;
        
    END
    
    Pnt pt = frame.pos();//Fl::loc(lin, PT(0,0,0), false);//PT(0,ypos,0);

    Par p = frame.tx();
    frame.push(); DRAW3( frame.x() * amt,0,0,0); frame.pop();

    Boost b;
    b.par( p );
    b.mod( dbiv, dtnv, dpit, dmnk );
    
    int nm = num;
    for (int i = 0; i<=nm; ++i){
        double t= 1.0 * i/nm;     
        Bst pp = b.bst( t * amt );
        pp[0] = rad;
        Cir tc = lin.sp( pp );
        
        double cur = Ro::cur(tc);
        
        glColor3f(t,.5*t,.5*t);
        GL::Draw::Seg( tc , TWOPI * cur  );
        
        
        if ( ERROR(cur,err) ) GL::Glyph::Line(frame.vec() + frame.y() * PI, frame.vec() - frame.y() * PI); 
    END 
    
    app.text("Bending a line into a circle of a given radius");
}

void boosted(GLVApp& app){

    static Cir c = CYZ(1);
    
    static Frame f1; static Frame f2;
    
    app.interface.touch(c);
    app.interface.touch(f1);
    app.interface.touch(f2);
    
    
    static int num, iter;
    static float val;
    SET
        f1.pos() = PT(-1,0,0);
        f2.pos() = PT(1,0,0);
        f1.orientX(-2,-2,0);
        f2.orientX(2,2,0);

        app.gui(iter,"iter",1,1000);        
        app.gui(num,"num_per",0,1000);
        app.gui(val,"scalar_val",-10.0, 10.0);
    END 
    
    DRAW3( c,1,1,0);
    f1.drawX();
    f2.drawX();
    
    Par pa = f1.tx(f1.scale());
    Par pb = f2.tx(f2.scale());
    
    static Par tp; static Cir tc;
    IT1(iter)
        tp = Interp::linear<Par>(pa, pb, t);
        
       // ITI(j, num)
            double xt = -1.0 + 2.0 * t;
            Bst pp = Gen::trv( 1, tp * xt );
            pp[0] = Ro::size(f1.pos() ^ f2.pos(), true ) * val;
            tc = c.sp ( pp );
            DRAW( tc );
       // END 
        
    END 
    

}

void surface(GLVApp& app){

    static Lattice<Par> f(2,2,1,2);
    static Lattice<Dll> fd(2,2,1,2);
    static Lattice<Tnv> ft(2,2,1,2);
    
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
        
        static Gui gui;
        app.subgui["bilinear"] = &gui;
        
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
        
        frame[i].push(); DRAW3(Vec::x * frame[i].scale() * amt , 0,0,0); frame[i].pop();
        app.interface.touch(frame[i]);
        
        //frame[i].scale() *= scale;

    END 
    
    //STARTING POINT
    app.interface.touch(source);
    if (bDraw) source.draw();    
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
        Bst pp = Gen::trv(1, tv );
        pp[0] = val; 
        if (bSizeVal) pp[0] *= Ro::size( tv, true ); 
        
        //INTERPOLATED TANGENTS
        Bst pp2 = Gen::trv( tv2, fsrc, 1);
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


/*
void poles(GLVApp& app){
    
    using namespace gam::gen;
    static gam::Sine<> sin(40);
    
    static Lattice<Par> f(2,2,2,sqrt(2));
    static Frame * frame = new Frame[f.num()];
    
    static bool bDraw;
    static float val,bamt, amt, num,dy1, dy2, w1, w2;
    SET
        GxSync::master() << sin;
        
        ITJ(i,f.num()) frame[i].pos() = Ro::null( f.grid(i) ); frame[i].orientX( frame[i].pos() * 2 ); END 
        
        static Gui gui;
        app.subgui["poles"] = &gui;
        gui(num, "num", 10,100)(val, "val", -10,10)(dy1, "y_pos_a",-10,10)(dy2,"y_pos_b",-10,10);
        gui(w1, "w_a",-10,10)(w2,"w_b",-10,10)(bDraw)(amt,"warp_amt",-100,100)(bamt,"boost_amt",-10,10);
        
        val = 1;
        bamt = 0;
        amt = 1;
        w1 = 1;
        w2 = 1;
        
    END 

    ITJ(i,f.num())
        if (bDraw) {frame[i].push(); (Vec::x * amt * frame[i].scale() ).draw(0,0,0); frame[i].pop(); }
        app.interface.touch(frame[i]);
        f.grid(i) = frame[i].pos();
        f[i] = frame[i].tx( amt * frame[i].scale() );
    END
    
    GL::lightPos(0,0,5);
    static Cir c = CXZ(1);
    Par par = c.dual();
    
    Pnt pa = Ro::null_cen( Ro::split1(par) ).trs(0,dy1,0);
    Pnt pb = Ro::null_cen( Ro::split2(par) ).trs(0,dy2,0);
    pa[3] = w1;
    pb[3] = w2;
    Par par2 = pa ^ pb;
    Sca sca = pa <= pb;
    
    int it = num;

    CirMesh cm, cm2;
    
    
    //INITIAL POLAR FORMS
    ITI(i,it)
        
        Pnt_Pnt pp = par2 * (-1.0 + 2.0 * t) * amt;
        pp[0] = sca[0];
        
        Cir tc = c.sp(pp);
        
        cm.add(tc);
        
    END 

    cm.skin();
    
    //cout << Lattice<Par>::limit( f, app.mouse().origin ) << endl; 
    //cout << f.offset( app.mouse().origin ) << endl; 

    ITJ(i, cm.vp.size() )
    
        Vec tv = f.offset( cm.vp[i] );
        //cout << tv << endl; 
        Par tpar = Interp::volume<Par> ( f.data(), tv[0], tv[1], tv[2] );//f.euler ( cm.vp[i] );
        Pnt_Pnt pp = Gen::tpar( tpar * bamt );
        //pp[0] = val;
        Pnt np = Ro::null_cen ( cm.vp[i].sp ( pp ) ) ;
        cm2.vp.push_back( np );
//    
    END 
    cm2.res = cm.res;
    
    cm2.draw(.5,0,0,1);
    
    app.text("Equator boosted by the Geometric Product of its (weighted) antipodal poles");
    
}

*/

void linear(GLVApp& app){

//    static Cir c = CYZ(1);
    
    static Frame f1; static Frame f2;
    
    app.interface.touch(f1);
    app.interface.touch(f2);
    
    
    static int num, iter;
    static float val,amt, yamt;
    static bool bLine, bDrawLines, bShowBend;
    SET
        f1.pos() = PT(-1,0,0);
        f2.pos() = PT(1,0,0);
        f1.orientX( f1.vec() + Vec(0,1,0) );
        f2.orientX(f2.vec() + Vec(0,1,0) );
        f1.scale(.3); f2.scale(.3);

        static Gui gui;
        app.subgui["linear"] = &gui;

        gui(iter,"iter",1,1000);        
        gui(num,"num_per",0,1000);
        gui(val,"scalar_val",-100.0, 100.0);
        gui(amt,"amt",-100.0, 100.0);
        gui(yamt,"yamt",0,10);
        gui(bLine,"line_source")(bDrawLines,"draw_lines")(bShowBend,"show_bend");
        
        iter = 10;
        num = 1;
        val = 1;
        amt = 1;
        yamt = 1;
        
        
    END 
    
    f1.drawX();
    f2.drawX();
    
    Par pa = f1.tx(f1.scale());
    Par pb = f2.tx(f2.scale());
    
    static Par tp; static Cir tc;
    
    UVMesh uvmesh(iter+1,iter+1);
    
    ITJi(i,iter)
        tp = Interp::linear<Par>(pa, pb, t);
        Bst pp = Gen::trv(1, tp * amt);
        pp[0] = val;
        
        Dll dll = f1.dlz().mot(  Gen::log( Gen::ratio( f1.dlz(), f2.dlz(), t ) ) );
        if (bDrawLines) DRAW( dll );

        Pnt src = Interp::linear<Pnt>(f1.pos(), f2.pos(), t).null();
        Pnt src2 = Fl::loc( dll, src, true);

       ITJi(j, iter)
            double xt = -1.0 + 2.0 * t;
            Pnt nsrc = ( bLine ? src2 : src ).trs( Fl::dir( dll.undual() ) * xt * yamt).null();
            Pnt nnsrc = Ro::loc( nsrc.sp( pp ) );
            uvmesh.add(nnsrc);
            
            if (bShowBend){
                ITJi(k,num)
                    Pnt tnsrc = Ro::loc( nsrc.sp( Gen::trv( 1, tp * amt * t ) ) );
                    DRAW3( tnsrc, t,0,1-t);
                END 
            }

       END 
        
    END 
    
    //DRAW
    
    uvmesh.draw(1,0,0);
    uvmesh.drawTri(1,1,0);
    
    app.text("Linear Interpolation of Point Pair Generators acting on a Set of Lines");

}

//void osccb(const OSCMsg & m, const NetAddr & remote, osc::uint64 time, void * user){
// 
//    cout << "msg" << endl;    
//}
//void osctest(GLVApp& app){
//
//    SET
//    END 
//}

void demo (GLVApp& app){
    
    typedef map<string, Gui*>::iterator gmap;
    
    static bool bBasic,bOrigin, bDini, bBending, bLinear, bSurface, bPoles;
    SET
        app.gui(bBasic, "Basic")(bOrigin, "Origin")(bDini, "Dini")(bBending, "Bending")(bLinear, "Linear")(bSurface,"Bilinear")(bPoles, "Geometric_Product");    
    END 

    for ( gmap it = app.subgui.begin(); it != app.subgui.end(); ++it){
        it -> second -> remove();
        app.gui.arrange();
    }
    
    if (bBasic) { basic(app); app.gui << *app.subgui["basic"];}
    if (bOrigin) { origin(app); app.gui << *app.subgui["origin"];}
    else if(bDini) { dini(app); app.gui << (*app.subgui["dini"]); }
    else if (bLinear) { linear(app); app.gui << (*app.subgui["linear"]); }
    else if (bSurface){ surface(app);app.gui << *app.subgui["bilinear"]; }
    //else if (bPoles) { poles(app); app.gui << *app.subgui["poles"]; }
    else if (bBending) { lineToCircle(app); app.gui << *app.subgui["line2circle"]; }
    
    
    app.gui.arrange();
}

void GLVApp :: onDraw(){

    basic2(*this);
 //   demo(*this);
// if (bDemo) 
    
//    dini(*this);
//    circularDini(*this);

//  boosted(*this);
//  surface(*this);
//  poles(*this);

//    osctest(*this);

 //   linear(*this);
    text("Use the G, R, S keys to Grab, Rotate, and Scale Control Points.  Q to let go.",50,50);
}

int main() {
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	win = new Window(500,500,"VSR",&glv);    
    app = new GLVApp(win);    
    
    glv << app;
    
 //    OSCRecv rec( 10000, osccb );
    
    Application::run();
    
    return 0;
}