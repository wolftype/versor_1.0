//
//  TestOptics.cpp
//  vsr
//
//  Created by Pablo Colapinto on 5/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include <iostream>

#include "vsr.h"
#include "Lattice.h"
#include "MotorCouple.h"
#include "Boost.h"
#include "GLVInterfaceImpl.h"
#include "Optics.h"
#include "Stat.h" 

using namespace vsr;
using namespace glv;


Window * win;
GLVApp * app;

void optics(GLVApp& app){
    
    static Cir c = CXY(1).trs(-1,0,0);
    static Cir cb = CXY(1).trs(1,0,0);
    
    //    c.draw(); 
    //  cb.draw();
    app.interface.touch(c);
    app.interface.touch(cb);
    
    static double ref,ref2,amt;
    SET
    app.gui(ref,"ref",0,10);
    app.gui(ref2,"ref2",-10,10);
    app.gui(amt,"amt",-10,10);
    END 
    
    Lens lentil;
    lentil.grad = amt;
    
    lentil.ridx( ref);
    lentil.draw();
    //    lentil.enter().set( ref, c );
    //    lentil.exit().set( ref2,cb );
    
    Pnt cpa, cpb;
    
    IT1(50)
    
    Dll ray = DLN(1,0,0).trs(0,2*t,0);
    Pnt beg = Ro::null ( ( ray.conjugate() ^ Dlp(1,0,0).trs(-10,0,0) ).dual().runit() );
    
    //        Dll rayout = lentil.path( ray );
    Dll rayout = lentil.curve( ray );
    Pnt end = Ro::null ( ( rayout.conjugate() ^ Dlp(1,0,0).trs(10,0,0) ).dual().runit() );
    
    //        lentil.drawPath();
    lentil.drawBend();
    
    Glyph::Line( Vec(beg), Vec( lentil.pa ) );
    Glyph::Line(Vec(lentil.pb) , Vec( end )  );
    
    
    //            
    END 
    
    glColor3f(1,1,1);
    
}

//BENDING LIGHT
void optics2(GLVApp& app){
    
    //    static Cir ca = CXY(1);
    //    static Cir cb = CXY(1);
    
    static float ref,amt;
    SET app.gui(ref,"ref",0,2)(amt,"amt",-2,2); END
    
    //    app.interface.touch(ca); ca.draw();
    
    
    Lens surf, surf2; 
    surf.draw(); //surf2.draw();
    surf.ridx(ref);
    
    
    IT1(10)
    
    Dll ray = DLN(1,0,0).trs(0,-1.0 + 2*t,0);
    Pnt beg = Ro::null ( ( ray.conjugate() ^ Dlp(1,0,0).trs(-2,0,0) ).dual().runit() );
    
    Pnt meet = surf[0].meet(ray);
    Glyph::Line(Vec(beg), Vec(meet) );
    
    Cir s = surf[0].bend( ray, amt);
    
    Pnt p = surf[1].meet(s);
    Draw::SegPnts(s, meet, p);
    
    Dll refr = surf[1].refract(Cir(s.conjugate()));
    Cir bend = surf[1].bend( s, amt );
    
    
    Pnt end = Ro::null ( ( refr ^ Dlp(1,0,0).trs(2,0,0) ).dual().runit() );
    Glyph::Line(Vec(p), Vec(end) );
    
    
    END 
    
    
}

void optics3(GLVApp& app){

    Rand::Seed(100);
    
    static Lattice<Pnt> f(3,2,1,1);
    static Frame * frame = new Frame[ f.num() ];
    static Lenz * lens = new Lenz[ f.num() ];
    static bool * bVisited = new bool[ f.num() ];
    
    static Dls src = Ro::dls3(-2,2,0); app.interface.touch(src);
    static Dls src2 = Ro::dls3(-2,-2,0); app.interface.touch(src2);
    
    
    //RAY PARAM
    static float num, spread, theta, phi ;  
    
    //LENS PARAM
    static float  grad,dist, ridx,dev2, ratio;
    
    //BOOLEAN
    static bool bDraw, bDraw2;
    
    SET
        // RAYS
        app.gui(num,"num", 1, 100)(spread, "spread", 0,10);
        app.gui(theta,"theta",-PI,PI)(phi, "phi", -PI, PI); 
        //Lens Parameters
        app.gui(ridx,"ridx",-10,10)(grad,"grad",-100,100)(dist,"dist",0,5)(ratio, "ratio", 1,10);
        app.gui(dev2, "dev2");
        
        //Bool
        app.gui(bDraw,"draw");
        app.gui(bDraw2,"draw2");
        ITJ(i,f.num())
        frame[i].pos() = f[i];
        END 
    
    END 
    
    //GEOM
    static Dll ray, oray; static Pnt pos, npos, tpos; static Cir cir;
    
    //PLANES
    static Dlp left, right;
    left = app.camera().frustrum().left();
    right = app.camera().frustrum().right();
            
    //PARAM
    ITJ(i,f.num())
    
        app.interface.touch(frame[i]);        
        lens[i].set(frame[i], ridx, grad, 1, ratio);
        
    END 
    
    // PER RAY
    IT2(num)
        
        Par ps = Ro::par_dls(src, (-1.0 + 2.0 * u) * theta, (-1.0 + 2.0 * v) * phi  );
        Dll ray = ( ps ^ Inf(1) ).dual();        
        pos = Ro::dll_meet_dlp( ray,  Dlp(1,0,0).trs(-10,0,0) );//left );

        Trajectory traj;
        traj.calc(pos, ray, lens, f.num(), Dlp(1,0,0).trs(10,0,0) );
        traj.draw();
    
        ps = Ro::par_dls(src2, (-1.0 + 2.0 * u) * theta, (-1.0 + 2.0 * v) * phi  );
        ray = ( ps ^ Inf(1) ).dual();        
        pos = Ro::dll_meet_dlp( ray,  Dlp(1,0,0).trs(-10,0,0) );//left );

        Trajectory traj2;
        traj2.calc(pos, ray, lens, f.num(), Dlp(1,0,0).trs(10,0,0) );
        traj2.draw();
    

    END END
        
    ITJ(i,f.num())
        if(bDraw2) lens[i].drawMeet();
    END 
    if (bDraw) { src.draw(1,0,0,.2); src2.draw(1,0,0,.2);}
}

//an array of lenses
void opticsArray(GLVApp& app){
    
    static Lattice<Pnt> f(4,2,1,2);
    
    static Lens * surf = new Lens[8];
    
    static float ref, grad, num,trv ;
    static bool bDraw, bPrint;
    
    SET 
    
    ITJ(i,f.num())
    surf[i][0].cir = surf[i][0].cir.trs( f.grid(i) );
    surf[i][1].cir = surf[i][1].cir.trs( f.grid(i) );
    surf[i].structure();
    END 
    
    app.gui(trv,"trv",-1,1)(ref, "ref", 0,5)(grad,"grad",-5,5)(num, "num",10,1000)(bDraw,"dr")(bPrint,"pr");
    //app.camera().pos( 0, 0 ,10 );
    END 
    
    ITJ(i,f.num())
    
    if (bDraw) { surf[i].draw(); }
    surf[i].ridx( ref ); 
    surf[i].grad = grad; 
    app.interface.touch(surf[i][0].cir);
    app.interface.touch(surf[i][1].cir);
    
    END
    
    // PER LIGHT RAY
    IT1(num)
    
    bool meet = true;
    
    //Output Points
    vector<Pnt> tpos;
    
    //Output Paths
    vector<Cir> tcir;
    
    //Starting Ray
    Dll ray = DLN(1,0,0).trs(0, - f.oh() + t * f.th(), 0);
    
    //NEW State (can be line or circle)    
    Cir ns = CXY(1).trv( 0,trv,0).trs(0, - f.oh() + t * f.th()*.8, 0); //( ray.undual() );
    // ns.draw();
    //ray.draw();
    //        Pnt src =  Ro::null ( ( ray.conjugate() ^ Dlp(1,0,0).trs(-100, 0, 0) ).dual().runit() );    
    
    Pnt src = Ro::split1( ( Dlp(1,0,0).trs(-10,0,0) ^ ns.dual() ).dual() );
    tcir.push_back(ns);
    tpos.push_back(src);
    
    double x= src[0];    
    
    int it = 0; int max = 100; 
    
    while ( meet && it < max) {
        
        // For each optical surface, check for intersection of Light Ray
        meet = false;
        int idx = 0; int side = 0;
        
        double dist = 1000;
        
        ITJ( j, f.num() )
        
        ITJ(m, 2)
        if ( surf[j][m].hit( ns ) ){
            Pnt p = surf[j][m].meet(ns);
            //p.draw();
            if (p[0] > x){                  // Are we moving in right direction?
                meet = true;
                double a = sqrt( fabs( Op::sca( src <= p ) ) );
                if (a < dist) { dist = a; idx =j; side = m; }    //find closest surface to ray cast
            }
        }    
        END
        
        END 
        
        if (meet){
            
            Pnt p =  surf[idx][side].meet( ns );                // New Point
            tpos.push_back( p );
            
            x = p[0];                                           // New Limit
            
            //                ns = surf[idx][side].refract( ns );               // New Ray
            ns = surf[idx][side].bend( ns, surf[idx].grad );     // New Ray
            tcir.push_back(ns);
            
        }
        
        it++;
        
    }
    //    
    //        glBegin(GL_LINE_STRIP);
    //            ITJ(k,tpos.size())
    //                glVertex3f( tpos[k][0], tpos[k][1], tpos[k][2]);
    //            END 
    //        glEnd();
    
    Pnt end = Ro::split1( ( Dlp(1,0,0).trs(10,0,0) ^ ns.dual() ).dual() );
    tpos.push_back(end);
    
    ITJ(k, tpos.size() -1 )
    tpos[k].draw(1,0,0);
    Draw::SegPnts(tcir[k], tpos[k], tpos[k+1] );
    END
    
    END 
    
}

//in a sphere . . .
void optics4(GLVApp& app){
    
    static float theta, phi, ridx, grad, r1, r2, dist;
    SET app.gui(theta, "theta",-PI, PI)(phi, "phi",-PI,PI);
    app.gui(ridx,"ridx",-10,10)(grad,"grad",-10,10)(r1, "r1",1,10)(r2, "r2",1,10)(dist,
                                                                                  "dist", 0, 5);
    END 
    
    static Dls src = Ro::dls3(0,0,0);  app.interface.touch(src);
    src.draw(1,0,0,.3);
    
    static Dls surf = Ro::dls3(2,0,0); app.interface.touch(surf);
    
    
    Lenz lens;
    lens.pos() = Ro::null( surf ); lens.position();
    lens.ridx(ridx);
    lens.mGrad = grad;
    lens.ratio(r2);
    lens.dist(dist);
    
    
    IT2(10)
    
    Par s = Ro::par_dls(src, u * theta, v * phi  );
    Dll dll = ( s ^ Inf(1) ).dual();
    
    Dll nray = lens.curve(dll);
    Draw::SegPnts( lens.bend, lens.pa, lens.pb );
    
    Glyph::Line( Vec( Ro::dll_meet_dlp( dll, Dlp(1,0,0).trs(-5,0,0) ) ), Vec(lens.pa)  );
    Glyph::Line( Vec(lens.pb), Vec( Ro::dll_meet_dlp( nray,  Dlp(1,0,0).trs(5,0,0) ) ) );    
    
    END END 
    
    lens.draw();
    
}

void optics5(GLVApp& app){
    
   static Lattice<Pnt> f(1,10,1);
   static Frame * frame = new Frame[f.num()];
   
   
   static float ridx, grad, dist, rat;
   
   static float numrays, iter, spread;
   
   static bool bDraw;
   
   SET
    ITJ(i,f.num())  frame[i].pos() = f[i]; END
    
    
    app.gui(ridx,"ridx", -5, 5)(grad,"grad", -5, 5)(dist, "dist",0,5)(rat,"rat", 0,10);
    
    app.gui(numrays, "numrays",1,100)(spread,"spread",1,100);
    
    app.gui(bDraw, "draw");
  
    END 
     
    
    IT1(f.num())
    
        Lenz lens;
        
        lens.set(frame[i], ridx * t, grad * t, dist * t, rat * t );
        
        if (bDraw) lens.drawMeet();
        
        ITJ(j, numrays)VALJ(j,numrays)
            Dll ray = DLN(1,0,0).trs(0, -spread/2.0 + spread * t, 0 );
            Pnt pnt = Ro::dll_meet_dlp(ray, Dlp(1,0,0).trs(-5,0,0) );
            
            Trajectory traj;
            traj.calc(pnt, ray, &lens, 1, Dlp(1,0,0).trs(5,0,0) );
            traj.draw();
            
        END 
        
    END
    

}

void opticalRobot(GLVApp& app){
    
    
    int num = 5;
    static Chain k(num);
    static Chain k2(num);
    static Lenz * lens = new Lenz[num];
    
    static Dls src = Ro::dls3(-2,0,0);
    app.interface.touch(src);
    
    static float grad, ridx, scale, rat;
    static float theta, phi;
    
    static bool bFabrik, bDraw;
    SET
        app.gui(scale, "scale")(grad, "grad")(ridx,"ridx")(rat,"rat");
        app.gui(theta, "theta", -PI, PI)(phi, "phi", -PI, PI);
        app.gui(bFabrik, "fab")(bDraw, "draw");
    END 
    
     
    Pnt p = app.mouse().origin;
    
    if (bFabrik) k.fabrik(p, k.num()-1, 0 );
    
    if (bDraw) k.draw();
    
    k2.first() = k[3];
    k2.fabrik( PT(2,2,0), k2.num()-1, 0);
    if (bDraw)  k2.draw();
    
    
    ITJ(i,k.num())
        k[i].scale(scale);
    
        lens[i].set( k[i], ridx, grad, 1, rat );
        
        if (bDraw) lens[i].draw();
        
    END 
    
    int numrays = 10;
    
    IT2(numrays)
        Trajectory traj;

        Dll dll = Op::dl( Ro::par_dls(src, (-1.0 + 2.0*u)*theta, (-1.0 + 2.0*v)*phi) ^ Inf(1) );
        Pnt start = Ro::dll_meet_dlp(dll, Dlp(1,0,0).trs(-4,0,0));

        traj.calc(start, dll, lens, num, Dlp(1,0,0).trs(5,0,0) ) ;
        traj.draw();
    END END
    
    
    if (app.interface.keyboard.code == 'f' ) bFabrik = !bFabrik;
    
}

void optics6(GLVApp& app){

    static Lattice<Pnt> f(5,1,1,3);
    //static Frame * f = new Frame(f.num());
    static Lenz * lens = new Lenz[ f.num() ];
    // (PT(0,0,0), Rot(1,0,0,0) );  
    ITJ(i,f.num())
        app.interface.touch( *(Frame*)(&lens[i]));
    END  

    static double ridx, grad,dist,  rat;
    static float rnum, iter, vspread;
    static bool bDraw, bR, bG, bD, bRat,bNum;
    static bool bPrint;
    SET
        ITJ(i,f.num()) lens[i].pos() = f[i]; END
        
        app.gui(ridx,"r", -10,10)(grad,"g",-10,10)(dist,"dist",0,10)(rat,"rat",1,10);
        app.gui(rnum, "rnum", 1,100)(iter,"iter",1,100)(vspread,"vspread",0,10);
        app.gui(bDraw, "draw");
        app.gui(bR)(bG)(bD)(bRat)(bNum);
        app.gui(bPrint,"print");
    END 
    
    ITJ(k,iter) VALJ(k, iter)
       
        
        ITJ(i,f.num())
            lens[i].set(ridx * (bR? t:1), grad *  (bG? t:1), dist * (bD? t:1), rat *  (bRat? t:1));
        END 

        if (bDraw) { ITJ(i,f.num()) lens[i].drawMeet(); END }
        
        int num = rnum * (bNum? t : 1) ;
        
        IT2(num)
        
            Dll dll = DLN(1,0,0).trs( 0, -2.0 + 4.0 * i/num, -2.0 + 4.0 * j/num );
            Pnt p = Ro::dll_meet_dlp(dll, Dlp(1,0,0).trs(-f.ow(),0,0));
            Trajectory traj;
            
            glColor3f(1,0,0);
            traj.calc(p, dll, lens, f.num(), Dlp(1,0,0).trs(f.ow()+ 1,0,0));
            traj.draw();
            
            if (bPrint){
                traj.print(app.camera());
            }
            
        END END
        
         glTranslated(0, vspread, 0);
    END 
    
    if (bPrint){
        bPrint = false;
    }
        
}

void optics7(GLVApp& app){
   // static Lattice<Pnt> f(5,5,1,3);

    static Lenz lens;
    //app.interface.touch( *(Frame*)(&lens));
    static float ridx, grad, dist, rat;
    
    SET
        app.gui(ridx, "ridx",-10,10);
        app.gui(grad, "grad",-10,10);
        app.gui(dist, "grad",-10,10);
        app.gui(rat, "rat",-10,10);
    END
    
    lens.set(ridx, grad, dist, rat);
    
    Trajectory traj;
    ITI(i,10)
        double xt = -1.0 + 2.0 * t;
        Dll dll = DLN(1,0,0).trs(0,xt,0);
        
         Pnt p = Ro::dll_meet_dlp(dll, Dlp(1,0,0).trs(-3,0,0));
        Trajectory traj;
        
        glColor3f(1,0,0);
        traj.calc(p, dll, &lens, 1, Dlp(1,0,0).trs(4,0,0));
        traj.draw();
    END 
    
    
    
}

void GLVApp :: onDraw(){
  //  opticalRobot(*this);
   // optics3(*this);
   //optics5(*this);
   optics7(*this);
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
    
    Rand::Seed();
    
    Application::run();
    
    return 0;
}


//    //RESET FLAGS
//    ITJ(i,f.num())
//    bVisited[i] = false;
//    END 
//    pos.draw();
//    
//    bool meet = true;
//    double x = pos[0];
//    int max = 100; int it = 0;
//    
//    while ( meet && (it < max) ) {
//        it++;
//        meet = false;
//        int idx = 0; double dist = 10000;
//        
//        ITJ(j,f.num())
//        
//        if (bVisited[j]) continue;              // have we already visited this lens?
//        
//        if ( lens[j][0].hit( oray ) ) {
//            
//            Pnt p = lens[j][0].meet( oray );
//            bool valid = ( Op::sca( p <= Ro::sur( lens[j].meet) ) > 0 ) ? 1 : 0; 
//            
//            if ( valid && p[0] > x ) {
//                meet = true;
//                double a = sqrt( fabs( Op::sca( pos <= p ) ) );
//                if (a < dist) { dist = a; idx =j; } 
//            }
//        }
//        END 
//        
//        if (meet ) {
//            bVisited[idx] = true;
//            oray = lens[idx].curve(oray);                       //curve and spit out new ray
//            npos = lens[idx].pa; x = lens[idx].pb[0];
//            Op::sn( Ro::dir( lens[idx].bend, false ), Biv::xy ) ? glColor3f(1,1,0) : glColor3f(0,0,1);
//            
//            Draw::SegPnts(lens[idx].bend, lens[idx].pa, lens[idx].pb);
//            
//            Glyph::Line( Vec(pos), Vec(npos) );
//            pos = lens[idx].pb;
//        }
//        
//    }
//    
//    npos = Ro::dll_meet_dlp( oray, right);
//    Glyph::Line( Vec(pos), Vec(npos) );


