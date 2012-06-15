//
//  TestWarp.cpp
//  vsr
//
//  Created by Pablo Colapinto on 5/19/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>


#include "vsr.h"
#include "Lattice.h"
#include "MotorCouple.h"
#include "Boost.h"
#include "GLVInterfaceImpl.h"
#include "Optics.h"
#include "Stat.h" 
#include "Mesh.h"

using namespace vsr;
using namespace glv;


Window * win;
GLVApp * app;

struct CirMesh{

    vector<Cir> vc;
    vector<Pnt> vp;
    int res;
    
    CirMesh& add(const Cir& c) { vc.push_back(c); return *this; }

    void skin() { 
        res = vc.size();
        for (int i = 0; i <= res; ++i){
            double t= 1.0 * i/res;
            ITJ( j, res ) 
                vp.push_back( Ro::pnt_cir(vc[j], t * TWOPI) );
            END 
        END 
    
    }
    void draw() {
        IT( res )
            ITJ(j, res -1)
                glColor3f(.4,.4,.4);
                glBegin(GL_QUADS);
                int a = i * (res) + j;
                int b = a + 1;
                int c = b + res ;
                int d = c - 1 ;
                Vec n = Ro::dir( vp[a] ^ vp[b] ^ vp[c], false).dual();
                GL::normal( (-n.unit() ).w() );
                GL::Quad( vp[a], vp[d], vp[c], vp[b] );
               // GL::vertex(vp[a].w());
                glEnd();
                
                glColor3f(.7,.7,.7);
                glNormal3f(0,0,1);
                glBegin(GL_LINE_STRIP);
                GL::Tri( vp[a], vp[b], vp[c] );
                GL::Tri( vp[a], vp[d], vp[c] );
                glEnd();
            END
            
        END
    }
};

struct CubeMesh{
     vector<Pnt> vp;
     void add(const Pnt& p ) { vp.push_back(p); }
     
     void draw(int dim){
        
//        IT3V(dim)
//            int a = i * (dim+1) * (dim+1) + j * (dim+1) + k;
//            int b = a  
//        END 
     }
};

void interpolated(GLVApp& app){
    
    static Lattice<Pnt> f(2,2,1,2);
    static Frame * frame = new Frame[4];//a, b, c, d;
    
//    app.interface.touch(a); app.interface.touch(b);
//    app.interface.touch(c); app.interface.touch(d);
    
    
    static Cir sc = CXY(1); //app.interface.touch(sc);
    
    static bool bdraw, bFollow,bDuo, bOrtho,bPrint, bReset, bSep;
    static double ua, ub, itnum,xoffset;
    static double tan1, tan2, tan3, tan4;
    static double period1, period2, period3, period4, periodZ;
    static double pitch1, pitch2, pitch3, pitch4, pitchZ;
    static double mnk, scale, scale2;
    
    SET
        IT(4)
            frame[i].pos() = Ro::null( f.grid(i) );
            frame[i].orientY(0,0,0);
        END 
        app.gui(bOrtho)(bPrint,"print")(bReset,"reset")(bSep,"separate")(itnum, "iterations",1,10)(xoffset,"xoffset",-100,100);
        app.gui.add(DIALER, "ua", ua, 0,100);
        app.gui.add(DIALER, "ub", ub, 0,100);
        app.gui(period1, "period1", -10,10)(period2, "period2", -10,10)(period3, "period3", -10,10)(period4, "period4", -10,10);
        app.gui(pitch1, "pitch1", -10,10)(pitch2, "pitch2", -10,10)(pitch3, "pitch3", -10,10)(pitch4, "pitch4", -10,10);
        app.gui(tan1, "tan1",-10,10)(tan2, "tan2",-10,10)(tan3, "tan3",-10,10)(tan4, "tan4",-10,10);
        app.gui.add(BUTTON, "tanduo", bDuo);
        app.gui.add(DIALER, "mnk", mnk, -10,10);
        app.gui.add(BUTTON, "draw", bdraw);
        app.gui.add(DIALER, "scale", scale);
        app.gui.add(DIALER, "scale2", scale2);
        
        app.gui(pitchZ,"pz",-10,10)(periodZ, "z",-PI, PI);
    END 
    
      app.camera().perspective() = bOrtho;
      
     //FRAMES 
    
    IT(4)
    frame[i].scale(scale);
    app.interface.touch(frame[i]);
    END 
    
    if( app.interface.keyboard.code == 'f' ){
        bFollow = true;
    } else {
        bFollow = false; 
    }
    
    if (bFollow){
        IT(4)
        frame[i].orientZ(app.mouse().origin );
        END 
    }
    
    if (bReset){
        IT(4) frame[i].pos() = Ro::null(f.grid(i)); frame[i].orientY(0,0,0); END
    }
    
    if (bdraw){
        IT(4)
        Cir ca = frame[i].cxy();  ca.draw(); frame[i].draw();
        END
    }   
    
//    glPushMatrix();
    
    Dll dll = DLN(0,0,1);
    Twist tw; tw.along(dll, pitchZ, periodZ);
    
    if (bPrint) cout << Print::Begin() << endl;
    
    for (int m = 1; m <= itnum; ++m){
        
        double mt = 1.0 * m/itnum;
        //glTranslated(xoffset, 0, 0);
        
        IT(ua+1) VAL(ua)
        double u = t;
        ITJ(j,ub+1) VALJ(j,ub)
        double v = t;

            double s = Interp::surface(tan1, tan2, tan3, tan4, u, v) * mt;
            double pe = Interp::surface(period1, period2, period3, period4, u, v)* mt;
            double pi = Interp::surface(pitch1, pitch2, pitch3, pitch4, u, v)* mt;
        
            Par p = Interp::surface<Par>(frame[0].pxy(), frame[1].pxy(), frame[3].pxy(), frame[2].pxy(), u, v);
            Vec pos = Interp::surface<Vec>( frame[0].vec(), frame[1].vec(), frame[3].vec(), frame[2].vec(), u, v );
        
            Boost b;  
            b.par(p);
                
            if (bSep) b.mod(period1 * mt,s,pitch1* mt,mnk* mt);//b.mod(pe,s,pi,mnk);
            else b.mod(period1 * mt,tan1* mt,pitch1* mt,mnk* mt);
        
            Cir c = sc.sp( Gen::tpar(b.par()) * Gen::trs( pos ) ).trs(-xoffset + 2.0 * xoffset*m,0,0);  
            c = c.mot( tw.dll() * mt );
            c.draw(0,0,0);
        
            if (bPrint) { cout << app.printTikz( c ) << endl ; }

            if (bDuo){
                b.tnv() *= -1;
                c = sc.sp(Gen::tpar(b.par())* Gen::trs( pos ) );    
                c.draw(0,0,0);
            }
        
        END
        END

       
    }
//    glPopMatrix();
      if (bPrint) cout << Print::End() << endl;
    if (bPrint) bPrint = 0;

}



void interpolated2(GLVApp& app){
    
    static Lattice<Pnt> f(2,2,1,2);
    static Frame * frame = new Frame[4];//a, b, c, d;
    
//    app.interface.touch(a); app.interface.touch(b);
//    app.interface.touch(c); app.interface.touch(d);
    
    
    static Cir sc = CXY(1); //app.interface.touch(sc);
    
    static bool bdraw, bFollow,bDuo, bOrtho,bPrint, bReset, bSep, bTanFrameDraw;
    static double ua, ub, itnum,xoffset,yoffset;
    static double tan1, tan2, tan3, tan4;
    static double period1, period2, period3, period4, periodZ;
    static double pitch1, pitch2, pitch3, pitch4, pitchZ;
    static double mnk, scale, scale2, vspread, hspread;
    
    static double niter, perioditer, pitchiter,taniter, mper, mpit, mtan;
    SET
        IT(4)
            frame[i].pos() = Ro::null( f.grid(i) );
            frame[i].orientY(0,0,0);
        END 
        app.gui(bOrtho)(bPrint,"print")(bReset,"reset")(bSep,"separate");
        app.gui(hspread,"h",0,100)(vspread,"v",0,100)(niter, "niterations",1,100)(itnum, "iterations",1,100)(xoffset,"xoffset",-100,100)(yoffset,"yoffset",-100,100);
        app.gui.add(DIALER, "ua", ua, 0,100);
        app.gui.add(DIALER, "ub", ub, 0,100);
        app.gui(period1, "period1", -10,10);//(period2, "period2", -10,10)(period3, "period3", -10,10)(period4, "period4", -10,10);
        app.gui(perioditer, "period_iter",1,100);
        app.gui(mper, "mper", 0,10);
        app.gui(pitch1, "pitch1", -10,10);//(pitch2, "pitch2", -10,10)(pitch3, "pitch3", -10,10)(pitch4, "pitch4", -10,10);
        
        app.gui(pitchiter, "pitch_iter",1,100);
         app.gui(mpit, "mpit",0,10);
        app.gui(tan1, "tan1",-10,10);//(tan2, "tan2",-10,10)(tan3, "tan3",-10,10)(tan4, "tan4",-10,10);
        app.gui(taniter, "tan_iter",1,100);
          app.gui(mtan, "mtan",0,10);
         app.gui.add(BUTTON, "tanduo", bDuo);
        app.gui.add(DIALER, "mnk", mnk, -10,10);
        app.gui.add(BUTTON, "draw", bdraw);
        app.gui(bTanFrameDraw,"btanframe");
        app.gui.add(DIALER, "scale", scale);
        app.gui.add(DIALER, "scale2", scale2);
        
        app.gui(pitchZ,"pz",-10,10)(periodZ, "z",-PI, PI);
    END 
    
      app.camera().perspective() = bOrtho;
      
     //FRAMES 
        
    static Frame tanFrame; app.interface.touch(tanFrame); 
    if (bTanFrameDraw) tanFrame.draw();
    
    
    IT(4)
    frame[i].scale(scale);
    app.interface.touch(frame[i]);
    END 
    
    if( app.interface.keyboard.code == 'f' ){
        bFollow = true;
    } else {
        bFollow = false; 
    }
    
    if (bFollow){
        IT(4)
        frame[i].orientZ(app.mouse().origin );
        END 
    }
    
    if (bReset){
        IT(4) frame[i].pos() = Ro::null(f.grid(i)); frame[i].orientY(0,0,0); END
        tanFrame.reset();
    }
    
    if (bdraw){
        IT(4)
        Cir ca = frame[i].cxy();  ca.draw(); frame[i].draw();
        END
    }   
    
//    glPushMatrix();
    
    Dll dll = DLN(0,0,1);
    Twist tw; tw.along(dll, pitchZ, periodZ);
    
    if (bPrint) cout << Print::Begin() << endl;


//    for (int pit = 1; pit < pitchiter; ++pit){
//    double pitv = 1.0 * pit/pitchiter;
    

    for (int k = 1; k < niter; ++k){    
                          
                        double kt = 1.0 * k/niter;
                        double ktx = -1.0 + 2.0 * kt;  
        for (int m = 1; m < itnum; ++m){
            
            double mt = 1.0 * m/itnum;
            double mtx = -1.0 + 2.0 * (1-mt);
                
            for (int n = 1; n < itnum; ++n){

                double nt = 1.0 * n/itnum;
                double ntx = -1.0 + 2.0 * (1-nt);
            
                Dls position = Ro::null_cen( Ro::dls3(0,0,0).sp(tanFrame.ppx(mtx * xoffset ) ).sp( tanFrame.ppy(ntx* yoffset) ) );// Ro::dls3(0,0,0).trs(mtx * hspread, ntx * vspread, 0);//
                if (bTanFrameDraw) position.draw();

            for (int per = 1; per < perioditer; ++per){
                //double perv = 1.0 * per/perioditer;


            for (int pit = 1; pit < pitchiter; ++pit){
                //double pitv = 1.0 * pit/pitchiter;
             for (int tanp = 1; tanp < taniter; ++tanp){
                //double tanv  = 1.0 * tanp/taniter;                       
                      
                        double at = ( 1.0 * k * itnum * itnum * perioditer + m * itnum * perioditer + n * perioditer + per ) / (perioditer * itnum * itnum * niter);
                        double atx = -1.0 + 2.0 * at;
                        double bt = ( 1.0 * k * itnum * itnum * pitchiter + m * itnum * pitchiter + n * pitchiter + pit ) / (pitchiter * itnum * itnum * niter);
                        double ct = ( 1.0 * k * itnum * itnum * taniter + m * itnum * taniter + n * taniter + tanp ) / (taniter * itnum * itnum * niter);
                        //cout << at << endl; 
                        
                        IT(ua+1) VAL(ua)
                        double u = t;
                        ITJ(j,ub+1) VALJ(j,ub)
                        double v = t;
                        
                            Par p = Interp::surface<Par>(frame[0].pxy(), frame[1].pxy(), frame[3].pxy(), frame[2].pxy(), u, v);
                            Vec pos = Interp::surface<Vec>( frame[0].vec(), frame[1].vec(), frame[3].vec(), frame[2].vec(), u, v );
                        
                            Boost b;  
                            b.par(p);

                            b.mod(period1 * mt + (mper * at),tan1* mt + (mtan*ct),pitch1* mt + (mpit*bt),mnk* mt);
                        
                            Cir c = sc.sp( Gen::tpar(b.par()) * Gen::trs( pos ) ).trs(position);  
                            c = c.mot( tw.dll() * mt );
                            //c.draw(0,0,0);
                            Draw::SegRad(c);
                        
                            if (bPrint) { cout << app.printTikz( c ) << endl ; }

                            if (bDuo){
                                b.tnv() *= -1;
                                c = sc.sp(Gen::tpar(b.par())* Gen::trs( pos ) ).trs(position);    
                                c.draw(0,0,0);
                            }
                        
                        END
                        END

                    }
                }
                }
                }
               
            }
    }
        
//    glPopMatrix();
      if (bPrint) cout << Print::End() << endl;
    if (bPrint) bPrint = 0;

}


void interpolated3(GLVApp& app){
    
    static Lattice<Pnt> f(2,2,1,2);
    static Frame * frame = new Frame[4];
    
    //starter circle
    static Cir sc = CXY(1);
    
    static bool bdraw, bFollow,bDuo, bOrtho,bPrint, bReset, bSep, bTanFrameDraw;
    static double ua, ub, itnum,xoffset,yoffset;
    static double tan1, tan2, tan3, tan4;
    static double period1, period2, period3, period4, periodZ;
    static double pitch1, pitch2, pitch3, pitch4, pitchZ;
    static double mnk, scale, scale2;
    
    static double niter, perioditer, pitchiter,taniter, mper, mpit, mtan;
    SET

        IT(4)
            frame[i].pos() = Ro::null( f.grid(i) );
            frame[i].orientY(0,0,0);
        END 
        
        app.gui(bOrtho)(bPrint,"print")(bReset,"reset")(bSep,"separate")(niter, "niterations",1,100)(itnum, "iterations",1,100)(xoffset,"xoffset",-100,100)(yoffset,"yoffset",-100,100);
        
        app.gui.add(DIALER, "ua", ua, 0,100);
        app.gui.add(DIALER, "ub", ub, 0,100);
        app.gui(period1, "period1", -10,10);  //(period2, "period2", -10,10)(period3, "period3", -10,10)(period4, "period4", -10,10);
        app.gui(perioditer, "period_iter",1,100);
        app.gui(mper, "mper", 0,10);
        app.gui(pitch1, "pitch1", -10,10);   //(pitch2, "pitch2", -10,10)(pitch3, "pitch3", -10,10)(pitch4, "pitch4", -10,10);
        
        app.gui(pitchiter, "pitch_iter",1,100);
         app.gui(mpit, "mpit",0,10);
        app.gui(tan1, "tan1",-10,10);        //(tan2, "tan2",-10,10)(tan3, "tan3",-10,10)(tan4, "tan4",-10,10);
        app.gui(taniter, "tan_iter",1,100);
          app.gui(mtan, "mtan",0,10);
         app.gui.add(BUTTON, "tanduo", bDuo);
        app.gui.add(DIALER, "mnk", mnk, -10,10);
        app.gui.add(BUTTON, "draw", bdraw);
        app.gui(bTanFrameDraw,"btanframe");
        app.gui.add(DIALER, "scale", scale);
        app.gui.add(DIALER, "scale2", scale2);
        
        app.gui(pitchZ,"pz",-10,10)(periodZ, "z",-PI, PI);
    END 
    
      app.camera().perspective() = bOrtho;
      
     //FRAMES 
        
    static Frame tanFrame; app.interface.touch(tanFrame); 
    if (bTanFrameDraw) tanFrame.draw();
    
    
    IT(4)
    frame[i].scale(scale);
    END 
    
    if( app.interface.keyboard.code == 'f' ){
        bFollow = true;
    } else {
        bFollow = false; 
    }
    
    if (bFollow){
        IT(4)
        frame[i].orientZ(app.mouse().origin );
        END 
    }
    
    if (bReset){
        IT(4) frame[i].pos() = Ro::null(f.grid(i)); frame[i].orientY(0,0,0); END
        tanFrame.reset();
    }
    
    if (bdraw){
        IT(4)
        Cir ca = frame[i].cxy();  ca.draw(); frame[i].draw();
        END
    }   
    
//    glPushMatrix();
    
    Dll dll = DLN(0,0,1);
    Twist tw; tw.along(dll, pitchZ, periodZ);
    
    if (bPrint) cout << Print::Begin() << endl;
    

    for (int k = 1; k < niter; ++k){    
                          
        double kt = 1.0 * k/niter;
        double ktx = -1.0 + 2.0 * kt;  
        
        for (int m = 1; m < itnum; ++m){
            
            double mt = 1.0 * m/itnum;
            double mtx = -1.0 + 2.0 * (1- mt);
                
            for (int n = 1; n < itnum; ++n){

                double nt = 1.0 * n/itnum;
                double ntx = -1.0 + 2.0 * (1-nt);
            
                Dls position = Ro::null_cen( Ro::dls3(0,0,0).sp(tanFrame.ppx(mtx * xoffset ) ).sp( tanFrame.ppy(ntx* yoffset) ) );// Gen::tpar(tanFrame.ppx(mtx))));
                if (bTanFrameDraw) position.draw();

                for (int per = 1; per < perioditer; ++per){
                    double perv = 1.0 * per/perioditer;
                        
                        double at = ( 1.0 * k * itnum * itnum * perioditer + m * itnum * perioditer + n * perioditer + per ) / (perioditer * itnum * itnum * niter);
                        double atx = -1.0 + 2.0 * at;
                        
                        IT(ua+1) VAL(ua)
                        double u = t;
                        ITJ(j,ub+1) VALJ(j,ub)
                        double v = t;
                        
                            Par p = Interp::surface<Par>(frame[0].pxy(), frame[1].pxy(), frame[3].pxy(), frame[2].pxy(), u, v);
                            Vec pos = Interp::surface<Vec>( frame[0].vec(), frame[1].vec(), frame[3].vec(), frame[2].vec(), u, v );
                        
                            Boost b;  
                            b.par(p);

                            b.mod(period1 * mt + (mper * at),tan1* mt,pitch1* mt,mnk* mt);
                        
                            Cir c = sc.sp( Gen::tpar(b.par()) * Gen::trs( pos ) ).trs(position);  
                            c = c.mot( tw.dll() * mt );
                            c.draw(0,0,0);
                        
                            if (bPrint) { cout << app.printTikz( c ) << endl ; }

                            if (bDuo){
                                b.tnv() *= -1;
                                c = sc.sp(Gen::tpar(b.par())* Gen::trs( pos ) ).trs(position);    
                                c.draw(0,0,0);
                            }
                        
                        END
                        END

                    }
                }
               
            }
    }
        
//    glPopMatrix();
      if (bPrint) cout << Print::End() << endl;
    if (bPrint) bPrint = 0;

}


void bendies(GLVApp& app){

//    static Lattice<Dll> f(1,10,10);
    static Dls dls = Ro::dls3(0,0,0);
    
    static Frame f(PT(0,0,0), Rot(1,0,0,0) );
    app.interface.touch(f); 
    

    static double spread;
    static double num, iter;
    static bool bDraw;
    
    SET
        app.gui(spread, "spread",-10,10);
        app.gui(num,"num",1,100)(iter, "iter",1,100);
        app.gui(bDraw);
    END 

    if (bDraw) f.draw();

    vector <Pnt> vp;
    
    int n = num;
    Par * par = new Par[n];
    
    ITI(j,num )
    
        Par tp =  Ro::par_dls(dls, t * PI, 0);
        
        ITI(k,iter)
            double v = -1.0 + 2.0 * t;
            Par p = tp.sp( f.ppy(v) );
            vp.push_back( Ro::null( Ro::split1(p) ) );
        END 
    
    END 
    
    IT(vp.size()) vp[i].draw(); END
    
    if (par) delete[] par;
    
}

void bendField(GLVApp& app){

    static Lattice<Vec> f(2,2,1,2);
    
    static Frame * frame = new Frame[f.num()];
        
    IT(f.num())
        app.interface.touch(frame[i]); frame[i].draw();        
    END    


    static float num, iter, amt;

    SET        
        IT(f.num())  frame[i].pos() = f[i]; END
        app.gui(num, "num", 1,100)(iter, "iter", 1, 100)(amt, "amt", -10, 10);
    END
        
    static Pnt dp, tp, p;

   
    IT2(iter)
        
        vector<Pnt> vp;
        p = Ro::pnt_dls( Ro::dls3(0,0,0), PI * u/iter, PI * v/iter);  
        
        ITJ(k, num)
            
            Par px, py, pz;
            ITJ(m, f.num()) 
               double dist = Ro::dst( p, frame[m ].pos() ); 
               px += frame[m].tx() * dist;
               //py += frame[m].ty() * dist;
               //pz += frame[m].tz() * dist;
               
            END 

            dp = p % ( ( px ) * amt );
            p += dp;
            p = Ro::null(p);
            vp.push_back(p);
                
        END
        
        glColor3f(0,0,0);
         IT(vp.size()-1) Glyph::Line( Vec(vp[i]), Vec(vp[i+1]) ); END
        
    END END
    
}

void bendItself(GLVApp& app){


    static Par dpar, tpar, par;
    
    static double min, num, iter, amt;
    
    SET
        app.gui(min, "min",-10,10);
        app.gui(num, "num", 1,1000)(iter, "iter",1,1000);
        app.gui(amt,"amt", 0,100);
    END

    
    vector<Pnt> vpnt;
    int n = num;
    
    Par * vpar = new Par[n];
    Par * npar  = new Par[n];
    
    IT(num)  
        par = Ro::par_dls( Ro::dls3(0,0,0), PI * i/num, 0);
        vpar[i] = par;        
    END 
    
    Rand::Seed(10);
    
    ITJ(m, iter)
        glColor3f(Rand::Normal(.5,.2), 0, Rand::Normal(.5,.2) );
       
         IT(n)
           // vpar[i].undual().draw();
            vector<Pnt> tp = Ro::split( vpar[i] );
            Glyph::Line( Vec( Ro::null(tp[0]) ), Vec( Ro::null(tp[1]) ) );
         END 
        
        IT( n )
        
            int idx = -1; double tdist = 1000;
            
            ITJ(j,n)
                if (i==j) continue;
                double dist  = sqrt( fabs( Op::sca( vpar[i] <= vpar[j] ) ) ) ;
                if (dist <= min ) { idx = j; break; }
                if (dist < tdist) tdist = dist;
            END
        
            
            if (idx != -1){
                State s = Gen::tpar( vpar[idx] * amt );
                npar[i] =  vpar[i].sp( s ) ;
            }
        
        END 
                
        IT (n)
            vpar[i] = npar[i];
        END 
        //vpar = npar;
    END
    
    if (vpar) delete[] vpar;
    if (npar) delete[] npar;

}

void tangentFrame(GLVApp& app){

    static Lattice<Pnt> f(2,2,1);
    static Frame * frame = new Frame[4];
    static Frame fr;
    
    IT(f.num())
        app.interface.touch(frame[i]); //f[i].draw();        
    END     
    
    static float iter, num;
    static double px, py, pz;
    SET        
        IT(f.num())  frame[i].pos() = f[i]; END
        
        app.gui(iter,"iter",1,100);
        app.gui(num, "num", 1,100);

        app.gui(px)(py)(pz);
    END 
    
    
    IT2(num)
    
    //for (int j = 0; j <= iter; ++j ){
    
     
    
        Pnt p = Interp::surface<Pnt> ( frame[0].pos(), frame[1].pos(), frame[3].pos(), frame[2].pos(), u, v );
    
        //double t = 1.0  * j/iter;
        State px = fr.ppx(t);//Gen::tpar( fr.pyz() * t ); 
        State py = fr.ppy(t);//Gen::tpar( fr.pxz() * t ); 
        State pz = fr.ppz(t);//Gen::tpar( fr.pxy() * t ); 
        
        Cir cpx = fr.xl().sp(pz);
        Cir cpy = fr.yl().sp(px);
        Cir cpz = fr.zl().sp(py);

        Draw::SegOff(cpy, PI * Ro::cur(cpy), 0);
        Draw::SegOff(cpz, PI * Ro::cur(cpz), PI/2.0);
        Draw::SegOff(cpx, PI * Ro::cur(cpx), -PI/2.0);
    
    END END 
   // }
    
}


void boostField(GLVApp& app){

    string s= Print::Begin();
    
    static Lattice<Pnt> f(2,2,2,5);    
    static Frame * frame = new Frame[f.num()];
        
    static bool bDraw, bDrawPos, bDrawFrame, bDrawGrid, bDrawMesh, bPrint;
    
    static float num, iter, w, h, period, pitch;
    
    SET
        IT(f.num()) frame[i].pos() = f[i]; frame[i].scale(.2); END 

        app.gui(bDraw)(bPrint)(bDrawPos, "drawpos")(bDrawFrame, "drawframe")(bDrawGrid, "drawGrid")(bDrawMesh, "drawMesh");
        
        app.gui(num, "num",5,500)(iter, "iter",1,100)(w, "w",0,100)(h, "h",0,100);
        
        app.gui(period, "period", -20, 20)(pitch, "pitch", -20,20);
        
    END 
    

    static Dll * dll = new Dll[f.num()];
    static Par * par = new Par[f.num()];

    IT(f.num()) 
        dll[i] = frame[i].dll(); 
        par[i] = frame[i].tx();
    END 
    
    
    static int numb = 10;
    
    static Lattice<Pnt> fl(numb, numb, numb);
    
    for (int m = 0; m < iter; ++m ){
        double tm = 1.0 * m / iter;
        for (int n = 0; n <= iter; ++n ){
            double tn = 1.0 * n / iter;
                
            static Frame nf;
            vector<Frame> vf;
            
            static Frame mf;

             static Twist tw;
             tw.along( DLN(0,0,1), period, pitch );
             
        
            double mn = ( 1.0 * (m * iter + n) ) / ( iter * iter );  //cout << mn << endl;
             double mnv = -1.0 + 2.0 * mn; 
             
//            mf.pos( PT( -w/2.0 + tm * w, -h/2.0 + tn * h, 0)  );  mf.push();
            mf.pos( PT( mnv * w, 0, 0)  ); 
            mf.push();
             
         if (app.interface.keyboard.code == 'f' ){
            Vec target =  app.mouse().origin ; 
            //Fl::loc(DLN(1,0,0), app.mouse().origin, true );
           // target = target.rot ( Biv::xy * mn * PI ) ;
            IT(f.num() ) frame[i].orientX( target ); END 
        }
        
          IT3V(numb)
         
            if (j==0 || i == 0 || k == 0 || j == (numb-1) || i == (numb-1) || k == (numb-1) ){
        
                Dll tdll = Interp::volume<Dll> ( dll, x, y, z );
                Par tpar = Interp::volume<Par> ( par, x, y, z );
                
                State boost = Gen::tpar(tpar * mn);
                
                Dls pos = Ro::dls3(0,0,0).sp( boost );

                nf.pos( Ro::null_cen(pos) ); 
                nf.scale(.1);

                vf.push_back(nf);
                fl[ fl.idx(i,j,k) ] = nf.pos();
                
                
            }
            
            
        END3
        
        
        
        
       glColor3f(0,0,0);
        
        if (bDrawPos) { IT(vf.size()) vf[i].pos().draw(); END }
        if (bDrawFrame) {  IT(vf.size()) vf[i].draw(); END  }
        if (bDrawGrid) {
            fl.drawFaceLines();
        }
        
        if (bDrawMesh){
            fl.drawMesh();
        }
        
        mf.pop();
    
    END 
    END 
   
}

void twistField(GLVApp& app){

    string s= Print::Begin();
    
    static Lattice<Pnt> f(2,2,2,5);    
    static Frame * frame = new Frame[f.num()];
        
    static bool bDraw, bDrawPos, bDrawFrame, bDrawGrid, bDrawMesh, bPrint;
    
    static float num, iter, w, h, period, pitch;
    
    SET
        IT(f.num()) frame[i].pos() = f[i]; frame[i].scale(.2); END 

        app.gui(bDraw)(bPrint)(bDrawPos, "drawpos")(bDrawFrame, "drawframe")(bDrawGrid, "drawGrid")(bDrawMesh, "drawMesh");
        
        app.gui(num, "num",5,500)(iter, "iter",1,100)(w, "w",0,100)(h, "h",0,100);
        
        app.gui(period, "period", -20, 20)(pitch, "pitch", -20,20);
        
    END 
    

    static Dll * dll = new Dll[f.num()];
    static Par * par = new Par[f.num()];

    IT(f.num()) 
        dll[i] = frame[i].dll(); 
        par[i] = frame[i].tx();
    END 
    
    
    static int numb = 10;
    
    static Lattice<Pnt> fl(numb, numb, numb);
    
    for (int m = 0; m < iter; ++m ){
        double tm = 1.0 * m / iter;
        for (int n = 0; n <= iter; ++n ){
            double tn = 1.0 * n / iter;
                
            static Frame nf;
            vector<Frame> vf;
            
            static Frame mf;

             static Twist tw;
             tw.along( DLN(0,0,1), period, pitch );
             
        
            double mn = ( 1.0 * (m * iter + n) ) / ( iter * iter );  //cout << mn << endl;
             double mnv = -1.0 + 2.0 * mn; 
             
//            mf.pos( PT( -w/2.0 + tm * w, -h/2.0 + tn * h, 0)  );  mf.push();
            mf.pos( PT( mnv * w, 0, 0)  ); 
            mf.push();
             
         if (app.interface.keyboard.code == 'f' ){
            Vec target =  app.mouse().origin ; //Fl::loc(DLN(1,0,0), app.mouse().origin, true );
           // target = target.rot ( Biv::xy * mn * PI ) ;
            IT(f.num() ) frame[i].orientX( target ); END 
        }
        
          IT3V(numb)
         
            if (j==0 || i == 0 || k == 0 || j == (numb-1) || i == (numb-1) || k == (numb-1) ){
        
                Dll tdll = Interp::volume<Dll> ( dll, x, y, z );
                Par tpar = Interp::volume<Par> ( par, x, y, z );
                
                State boost = Gen::tpar(tpar * mn);
                //Mot mot = Gen::mot(tdll );
                
                Dls pos = Ro::dls3(0,0,0).sp( boost );
                nf.pos( Ro::null_cen(pos) ); 
                //nf.rot( Rot(mot) );
                nf.scale(.1);
                vf.push_back(nf);
//                nf.draw();
                fl[ fl.idx(i,j,k) ] = nf.pos();
                
                
                if (bPrint) {
                    s += Print::frame( nf, app.camera() );
                }
                
                
            }
            
            
            END3
        
        
//        glBegin(GL_LINES);
//        IT(vf.size())
//        Pnt v = vf[i].pos();
//        glColor3f(0,0,0);
//        glVertex3f(v[0],v[1],v[2]); 
//        END  
//        glEnd();
        
       glColor3f(0,0,0);
        
        if (bDrawPos) { IT(vf.size()) vf[i].pos().draw(); END }
        if (bDrawFrame) {  IT(vf.size()) vf[i].draw(); END  }
        if (bDrawGrid) {
            fl.drawFaceLines();
//            glBegin(GL_LINE_STRIP);
//            IT(vf.size()) 
//                if ((1.0 * i / numb) == numb) glVertex3f( vf[i].pos()[0], vf[i].pos()[1], vf[i].pos()[2] ); 
//            
//            END
//            
//            glEnd();
        }
        
        if (bDrawMesh){
            fl.drawMesh();
        }
        
        mf.pop();
    
    END 
    END 
   
    
    
    if (bPrint) { bPrint = false; s += Print::End(); cout << s << endl; }
    
}

void points(GLVApp& app){
        
    
    static Frame frame; app.interface.touch(frame); frame.draw();
    static Frame frame2; app.interface.touch(frame2); frame2.draw();
       
   static double val, amt, rad, rad2, o1, o2;
   static bool bPar, bReal, bReal2 = false; 
   SET 
    app.gui(val, "val", -100, 100)(amt,"amt",-100,100)(rad,"rad",0,10)(rad2,"rad2",0,10)(bPar)(bReal, "real")(bReal2, "real"); 
    app.gui(o1,"ori1",-5,5)(o2,"ori2",-5,5);
    frame.pos(-2,0,0); frame2.pos(2,0,0); 
   END 
        
//    static Cir c = CXY(1); 
//    static Lin c = LN(0,1,0); 
    static Dls c = Ro::dls3(0,0,0); 
    app.interface.touch(c);
    c.draw(1,1,1);


//    Dls r1 = Ro::dls_pnt(frame.pos(), rad, bReal); 
//    Par par = Ro::dls_flat(r1, frame.yz()).dual();
//    
//    par.draw();
    
    Pnt tp1 = Ro::null(c);//Ro::dls_pnt( frame.pos(), rad, bReal );//p1.trs( (p2-p1) * t/2.0);
    Pnt tp2 = Ro::dls_pnt( frame2.pos(), rad2,  bReal2 );//.trs( (p1-p2) * t/2.0);
    
    tp1[3] = o1;
    tp2[3] = o2;
    
    Par pp = tp1^tp2;
    
    Pnt_Pnt pntpnt= tp1 * tp2;
    
    double rv = Ro::siz( (tp1 ^ tp2), true );
    
    IT1(100)

        double tt = -1.0 + 2.0 * t;
        
        //Product of Two Points
        Pnt_Pnt s1 = pntpnt * tt * amt;        

        //1 + Par
//        State s2 = frame.ppx(tt*amt);
//        //1 + Par + _e12noni  _e13noni  _e23noni   _e123ni
//        State s3 = Gen::trv( frame.x() * tt * amt ).trs(frame.pos());
//        State s4 = Gen::tpar( par * tt * amt );
        
        
        
        s1[0] = 2 * rv * val;//;//Ro::dst(tp1,tp2)
//        s2[0] = val;
//        s3[0] = val;
//        s4[0] = val;
//        
        Pnt tc = c.sp(s1);//bPar ? c.sp( s1 ) : c.sp( s4 ); 
        tc.draw(1-t, 0, t);

    END 
//     p1.draw(0,1,0,.1); p2.draw(0,1,0,.1);
}

void points2(GLVApp& app){
    static Cir * p = new Cir[3];
    
    SET
        IT1(3) p[i] = CXY(1).trs((-1.0 + 2.0 * t) * 3, 0, 0); END
        //p[2] = Ro::dls3(0,1,0);
    END 
    
    IT(3) p[i].draw(); app.interface.touch(p[i]); END
    
    IT1(100)
        Cir tp = p[0] * (1-t) + p[2] * t;
        tp.draw(0,1,0,.1);
    END 
    
    
}

void points3(GLVApp& app){
        
    static Pnt * p = new Pnt[3];
    
    SET IT1(3) p[i] = Ro::null((-1.0 + 2.0 * t) * 3, 0, 0); END END 
    
    IT(3) app.interface.touch(p[i]); p[i].draw(); END
    
    IT1(100)
        Pnt tp = Interp::quad<Pnt>(p, 3, t);
        //tp.draw();
    END 
}

void points4(GLVApp& app){
    static Lattice<Pnt> f(2,2,1);
    
    static Frame * frame = new Frame[4];

    IT(4) app.interface.touch(frame[i]); frame[i].draw(); END
        
   static double val, amt, rad;
   static bool bPar, bReal = false; 
   SET 
        app.gui(val, "val", -100, 100)(amt,"amt",-100,100)(rad,"rad",0,10)(bPar)(bReal, "real"); 
  
        IT(f.num()) frame[i].pos() = f[i]; frame[i].scale(.2); END
        
    END 
        
    static Cir c = CXY(1); app.interface.touch(c);
    c.draw(1,1,1);

        Pnt tp1 = frame[0].pos();
        Pnt tp2 = frame[1].pos();
        Pnt tp3 = frame[2].pos();
        Pnt tp4 = frame[3].pos();
        
        Par ppa = tp1^tp2;
        Par ppb = tp3^tp4;
        
    
    IT1(100)

        double tt = -1.0 + 2.0 * t;
                
        Par tpar = ppa * (1-t) + ppb * t;
        double rv = Ro::siz( (tpar), true );

        Pnt_Pnt s1 = tpar * tt * amt;                
                
        s1[0] = 2 * rv * val;//;//Ro::dst(tp1,tp2)
        
        Cir tc = c.sp(s1);//bPar ? c.sp( s1 ) : c.sp( s4 ); 
        tc.draw(1-t, 0, t);

    END 
//     p1.draw(0,1,0,.1); p2.draw(0,1,0,.1);
}

void circleToPoles(GLVApp& app){
    
    static Cir c = CXZ(1);
    static Cir c2 = CXY(1).trs(2,0,0);

    app.interface.touch(c2);
    
    
    static bool bDraw, bDrawCir;
    static float amt,dx,dx2, r1, r2, rez, lz, w1, w2, p1, p2;
    
    SET 
        app.gui(amt,"amt",-10,10);
        app.gui(p1, "p1",-10,10)(p2,"p2",-10,10)(dx,"dx1",-10,10)(dx2,"dx2",-10,10)(lz, "lz",-100,100); 
        app.gui(r1, "r1",-100,100)(r2,"r2",-100,100)(rez,"res",1,100);
        app.gui(w1, "w1", -10,10)(w2,"w2",-10,10);
        app.gui(bDraw)(bDrawCir);
    END
    
    GL::lightPos(0,lz,lz);
    
    
    if (bDrawCir) c2.dil(.05).draw(0,0,0);
   // app.interface.touch(c);
    
    Par par = c.dual();
    
    Drv drv = Ro::dir(c, false).dual();
    
    Pnt pa = Ro::dls_pnt(Ro::null(Ro::split1(par)),r1).trs(drv*dx);
    Pnt pb = Ro::dls_pnt( Ro::null(Ro::split2(par)), r2 ).trs(drv * dx2);
   // pa.draw(0,1,0); pb.draw(0,1,0);
    pa[3] = w1;
    pb[3] = w2;
    pa *= p1; pb *= p2;
    Par par2 = pa ^ pb;// ^  Ro::dls_pnt( Ro::null(Ro::split2(par)), r2 ).trs(drv * dx);
   // Pnt_Pnt ppa = pa * pb;
    
    double val = 2 * Ro::siz(par2, true);
    
    int res = rez;
    
    CirMesh cm;
    
    for (int i = 0; i <= res; ++i){
        double t= 1.0 * i/res;//IT1(res)
        double u = 1.0 - 2 * t;
        Pnt_Pnt pp = par2 * u * amt; pp[0] = Op::sca(pa * pb);//val * amt;
        
        Cir tc = bDrawCir ? c2.sp(pp) : c.sp(pp);
        cm.add(tc);        
    END 
    

    cm.skin();
    cm.draw();
       
    if (bDraw) c.dil(.05).draw(0,0,0);
 

}

void trajectories(GLVApp& app){

}


void origin(GLVApp& app){

    static Cir c = CYZ(1);
    static Frame frame(PT(1,0,0), Rot(1,0,0,0));
    
    app.interface.touch(c); app.interface.touch(frame);
    
   // c.draw(0,0,0); //frame.draw();
    static bool bDraw;
    static double val, amt,err,brt,num, lz;
    SET app.gui(num,"num",1,100)(val,"val",-10,10)(amt, "amt",-10,10)(err,"err")(brt,"brightness"); 
        app.gui(lz, "lz",-100,100)(bDraw);
    END
     
     GL::lightPos(0, lz, lz);
     CirMesh cm;
     
   if (bDraw) (frame.x() * amt ).draw(0,0,0);  
    int nm = num;
    IT1(nm)
        
        
        Trv trv = Gen::trv( frame.x() * t * amt);
        trv[0] = val;
        Cir tc = c.sp( trv );
        t = 1-t;
        cm.add(tc);
        //tc.draw(t* brt,t* brt,t* brt);
        //if ( ERROR( Ro::cur(tc), err ) ) Lin(tc).draw(t* brt,t* brt,t* brt);
    END 

    cm.skin();
    cm.draw();
}

//Dini's Surface
void dini(GLVApp& app){

    static Dll dll = DLN(0,1,0);
    static Frame frame(PT(0,-1,0), Rot(1,0,0,0));
    
    app.interface.touch(frame); 
    static Pnt p = Ro::null(1,0,0);
    static float period, pitch, amt, nm, lz;
    static bool bDraw;
    SET 
        app.gui(period,"per",-10,10)(pitch,"pit",-10,10)(amt,"amt",-10,10)(nm,"num",10,100)(bDraw); 
        app.gui(lz, "lz",-100,100);
    END
    
    GL::lightPos(0, lz, lz);
    if(bDraw) frame.draw();
    
    Twist tw; tw.along(dll, period, pitch);
    
    Par par = frame.ty(amt);
    
    vector<Pnt> vp;
    
    int num = nm;
    
    IT1(num)
        Pnt tp = p.sp( tw.mot(t) );
        ITJ(j, num) VALJ(j,num)
            Par npar = par.trs(0,tp[1],0);
            Pnt_Pnt pp = Gen::tpar(npar * t);
            Pnt np = Ro::null_cen( tp.sp( pp ) );
            vp.push_back(np); 
        END 
    END 
    
    //DRAW
    
    IT(num-1)
        
        
        ITJ(j,num-1)
            int idx = i * num + j;
            
            int a = idx;
            int b = a + 1;
            int c = b + num;
            int d = a + num;
            glColor3f(.5,.5,.5);
            glBegin(GL_QUADS);
            GL::normal(vp[idx].w());
            GL::Quad( vp[idx], vp[idx+1], vp[idx+num + 1], vp[idx+num]);
            glEnd();
            
            glColor3f(.8,.8,.8);
            glNormal3f(.5,.5,.5);
            glBegin(GL_LINE_STRIP);
            GL::Tri( vp[a], vp[b], vp[c]);
            GL::Tri(vp[a], vp[d], vp[c]);
            glEnd();
        END 
        
        
    
    END 

}

void homogenous(GLVApp& app){

    static Cir c = CXY(2);
    static Frame frame(PT(.5,0,0), Rot(1,0,0,0));
    
   // app.interface.touch(c); 
    //app.interface.touch(frame);
    
    c.draw(); 
    
    static double num, val, amt,err;
    static double period, bend, pitch, mnk;
    static double pos,rad;
    SET 
        app.gui(num, "num",1,100)(val,"val",-10,10)(amt, "amt",-10,10)(err,"err",0,1); 
        app.gui(period,"period",-10,10)(bend,"bend",-10,10)(pitch,"pitch",-10,10)(mnk, "mnk", -10,10);
        app.gui(pos,"pos",-10,10)(rad,"rad",-10,10);
    END
     
    frame.push(); 
    ( frame.x() * amt ).draw(0,0,0); 
    frame.pop();

    frame.pos( PT(pos, 0,0 ) );
    c = CXY(rad);
    //MEET
    Cir mc = frame.yld() ^ Ro::sur( c );
    mc.draw();
    double dist = fabs(Op::sca( frame.yl() <= c ) / 2.0 ) - Ro::rad(c) ; // DISTANCE between a CIRCLE and a LINE
   // cout << dist << endl; 

    Par para = Ta::at(c, PT(1,0,0), false);
    
    cout << para << frame.tx() << endl; 
    
    int nm = num;
    for (int i = 0; i<=nm; ++i){
        double t= 1.0 * i/nm;
        
        //Trv trv = Gen::trv( frame.x() * t * amt);
        Par  par = para;//frame.tx();
       // State s = Gen::trv( frame.x() * t * amt ).trs( frame.pos() );
        //cout << s << endl ;
         Boost b;
        b.par( par );
        b.mod(period, bend, pitch, mnk);
        
        Pnt_Pnt trv = b.bst(t * amt );//Gen::tpar( par * amt );
        trv[0] = val;
        Cir tc = c.sp( trv ); //trv );
        
        glColor3f(.5*t,.5*t,.5*t);
        Draw::SegRad(tc);
        
        double cur = Ro::cur(tc);
        if ( ERROR(cur,err) ) Glyph::Line(frame.vec() + frame.y() * PI, frame.vec() - frame.y() * PI); 
//        tc.draw();
    END 
    
    frame.pos().draw(0,0,0);
    
  //  double d = sqrt( fabs(Ro::siz(mc, false) / 2.0 ) );
 //   cout << d << " " << Ro::siz(mc, false) << " " << Ro::rad(mc) << endl; 
    
}

void lineToCircle(GLVApp& app){

    static Frame frame(PT(1,0,0), Rot(1,0,0,0));
    
    //static Lin lin = LN(0,1,0);
    app.interface.touch(frame);
    
    Lin lin = frame.yl();
    
    static float rad, ypos, amt, dbiv, dtnv, dpit, dmnk, err, num;
    
    SET 
    app.gui(rad,"rad",-5,5)(ypos,"ypos",-10,10)(amt, "amt", -10,10)(dbiv, "dbiv",-10,10)(dtnv, "dtnv",-10,10)(dpit,"dpit",-10,10)(dmnk,"dmnk",-10,10); 
    app.gui(err,"err",0,10)(num, "num",1,100);
    END
    
    Pnt pt = frame.pos();//Fl::loc(lin, PT(0,0,0), false);//PT(0,ypos,0);

    Par p = frame.tx();
    frame.push(); ( frame.x() * amt ).draw(0,0,0); frame.pop();

    Boost b;
    b.par( p );
    b.mod( dbiv, dtnv, dpit, dmnk );
    
    int nm = num;
    for (int i = 0; i<=nm; ++i){
        double t= 1.0 * i/nm;     
        Pnt_Pnt pp = b.bst( t * amt );
        pp[0] = rad;
        Cir tc = lin.sp( pp );
        
        double cur = Ro::cur(tc);
        
        glColor3f(.5*t,.5*t,.5*t);
        Draw::Seg( tc , TWOPI * cur  );
        
        
        if ( ERROR(cur,err) ) Glyph::Line(frame.vec() + frame.y() * PI, frame.vec() - frame.y() * PI); 
        //tc.draw();
        //cout << Ro::cur(tc) << endl;
    END 
    
    //Cir gc = CXY(rad).trs(-rad,0,0); gc.draw(0,1,1);
    
    //cout << "wt " << Ro::wt(b.par()) << "s " << Ro::siz(b.par(), true) << endl;
}


void interpolatedTangentLines(GLVApp& app){
    static Cir c = CXY(1);
    c.draw();
    
    Par pa = Tnv(1,0,0).trs(1,0,0);
    Par pb = Tnv(0,1,0).trs(0,1,0);
    
    
    static float amt;
    SET
        app.gui(amt,"amt",-10,10);
    END 
    
    IT1(100)
        Par tp = pa * (1-t) + pb * t;
        tp *= amt;
        
        Pnt_Pnt pp = Gen::tpar(tp);
        
        Cir tc = c.sp(pp); tc.draw(t, 0, 1-t);
       
    END 

}

void reflection(GLVApp& app){
    static Cir ca = CXY(1).trs(-1,0,0);
    static Cir cb = CXY(1).trs(1,0,0);

    static float val;
    SET app.gui(val,"val",-10,10); END

    app.interface.touch(ca);
    app.interface.touch(cb);
    
    ca.draw(0,1,0);
    cb.draw(0,1,0);
    //Cir nc = ca.re(cb);
    //nc.draw();
    
//    Pnt pa = Ro::null_cen(ca);
//    Pnt pb = Ro::null_cen(cb);
    
    Par pa = ca.dual();
    Par pb = cb.dual();
    
    Par par = ( pa + pb ) /2.0;
    
    IT1(100)
        Pnt_Pnt pp = par * t;
        pp[0] = val;
        Cir tc = ca.sp( pp );
        tc.draw();
    END 
}

void grid(GLVApp& app){

    static Frame * frame = new Frame[8];  
    
    static Par * par = new Par[8];  
    static Dll * dll = new Dll[8];
    
    static Lattice<Pnt> f(2,2,2,2);
     static Lattice<Pnt> w(10,10,10,.2);
     
    static float val;
    static bool bGrid, bPoints, bMesh, bBoost;
    SET
        app.gui(val,"val",-10,10);
        app.gui(bGrid)(bPoints)(bMesh)(bBoost,"boost");
        IT(8) frame[i].pos() = f[i]; frame[i].orientX( frame[i].pos() * 2.0 ); END
    END 
    
    IT(8) 
        app.interface.touch(frame[i]); frame[i].draw(); 
        //if (frame[i].isSelected()) cout << i << endl; 
        par[i] = frame[i].tx() * frame[i].scale(); 
        dll[i] = frame[i].dll();
    END
    
    IT3V(10)
    
        Par tpar = Interp::volume<Par>( par, x, y, z);
        Dll tdll = Interp::volume<Dll>( dll, x, y, z);
        
        Pnt_Pnt pp = tpar;       
        pp[0] = 1 * val; //Ro::siz(tpar, true) * val
        
        Mot mm = Gen::mot(tdll);  
        
       // w.at(i,j,k) = bBoost ? Ro::null_cen( PT(0,0,0).sp( pp ) ) : PT(0,0,0).sp( mm );
         w.at(i,j,k) = bBoost ? Ro::null_cen( w.grid( w.idx(i,j,k) ) .sp( pp ) ) : PT(0,0,0).sp( mm );
                              
                        
    END END END 

        if (bPoints) w.drawLoop();
        if (bGrid) w.drawFaceLines(false);
        if (bMesh) w.drawEdgeLines(false);

}

void grid2(GLVApp& app){

    static Frame * frame = new Frame[4];  
    static Frame * frame2 = new Frame[2]; 
     
    static Lattice<Pnt> f(2,2,1,1);
    static Par * par = new Par[4];  
    static Pnt * pnt = new Pnt[4];
    
    
    static bool bGrid;
    static float val, amt;
    SET
        app.gui(val,"val",-10,10)(amt,"amt",-10,10)(bGrid);
        IT(4) frame[i].pos() = f[i]; frame[i].orientX( PT(0,0,0) ); END 
    END 
    
    IT(4) 
        app.interface.touch(frame[i]); frame[i].draw(); 
        par[i] = frame[i].tx( frame[i].scale() * amt); 
        pnt[i] = frame[i].pos();
    END


    vector<Pnt> vp;
    int num = 10;
    for (int i = 0; i <= num; ++i){
        double u = 1.0 * i/num;
        for (int j = 0; j <= num; ++j ){
            double v = 1.0 * j/num;
            Par tpar = Interp::surface<Par> (par, u, v);
            Pnt tpnt = Ro::null( Interp::surface<Pnt> (pnt, u, v) );
            tpnt.draw();
            Pnt_Pnt pp = Gen::tpar(tpar);
            pp[0] *= val;
            
            //Use Grid of Points or Start From Origin
            vp.push_back( bGrid ?  Ro::null_cen(tpnt.sp( pp )) :  Ro::null_cen( PT(0,0,0).sp( pp ) )  );
        
        }
    } 
    
    //DRAW THE GRID
    
    for (int i = 0; i <= num; ++i){
        glBegin(GL_LINE_STRIP);
        for (int j = 0; j <= num; ++j ){
            int idx= i * (num+1) + j;
            glVertex3f( vp[idx][0], vp[idx][1], vp[idx][2] );
        END 
        glEnd();

        glBegin(GL_LINE_STRIP);
        for (int j = 0; j <= num; ++j ){
            int idx= j * (num+1) + i;
            glVertex3f( vp[idx][0], vp[idx][1], vp[idx][2] );
        END 
        glEnd();
    END 

}

void grid3(GLVApp& app){

    static Lattice<Par> f(2,2,1,2);
    static Lattice<Dll> fd(2,2,1,2);
    static Lattice<Tnv> ft(2,2,1,2);
    
    static Frame * frame = new Frame[ f.w() * f.h() ];
    
    static Frame source (PT(0,0,0), Rot(1,0,0,0));
    
    static float val, nm, lz, siz, amt, scale, normlen;
    static bool bGrid, bTwist, bTanv, bDraw, bDrawNormals, bSizeVal;
    SET
        bool  s = 0;
        IT(f.num())
            s = !s; 
            frame[i].pos() = Ro::null(f.grid(i));
            
            frame[i].rot( ( i == 0 || i == 3 )? Gen::rot(Biv::xz * PI/4.0) : Gen::rot(Biv::xz * -PI/4.0) );
            //frame[i].orientX( Ro::null( f.grid(i) * 2 ) );
        
        END
        
        app.gui(val,"val",-10,10);
        app.gui(nm, "num",2,100);
        app.gui(lz, "lz",-10,10);
        app.gui(siz,"siz",-10,10)(amt, "amt",-10,10)(scale,"scale",0,100);
        app.gui(bSizeVal, "bSizeVal")(bGrid, "relative")(bTwist, "twists")(bTanv, "tanv")(bDraw, "draw_src")(bDrawNormals,"drawNorm");
        app.gui(normlen,"normlen");
    END 
    
    GL::lightPos(0,0,lz);
    
    IT(f.num())

        f.grid(i) = frame[i].pos();
        fd.grid(i) = frame[i].pos();
        
        f[i] = frame[i].tx( frame[i].scale() );
        fd[i] = frame[i].dll() ;
        ft[i] = frame[i].x() * ( frame[i].scale() );
        
        frame[i].push(); (Vec::x * frame[i].scale() * amt ).draw(0,0,0); frame[i].pop();
        app.interface.touch(frame[i]);
        
        //frame[i].scale() *= scale;

    END 
    
    //STARTING POINT
    app.interface.touch(source);
    if (bDraw) source.draw();    
    Pnt src = source.pos();
    
    int num = nm;
    vector <Pnt> vp;
    IT2I(num)
        
        //USE CENTRAL POINT OR PREGRID
        Pnt fsrc = f.surfpnt(u,v);
        if (bGrid) src = fsrc;
    
        Par tv = f.surf(u,v) * amt ;
        Tnv tv2 = ft.surf(u,v) * amt ;        
        Dll tvd = fd.surf(u,v) * amt;
        
        Mot mm = Gen::mot(tvd);
        
        //INTERPOLATED PAIRS
        Pnt_Pnt pp = Gen::tpar( tv );
        pp[0] = val; 
        if (bSizeVal) pp[0] *= Ro::siz( tv, true ); 
        
        //INTERPOLATED TANGENTS
        Pnt_Pnt pp2 = Gen::trv( tv2 ).trs( fsrc );
        pp2[0] = val;
        if (bSizeVal) pp2[0] *= 2 * Ro::siz( Par(pp2), true );
        
        Pnt np = bTwist ? src.sp( mm ) : Ro::null_cen( src.sp( bTanv ? pp2 : pp ) );
        
        vp.push_back(np);

    END END 
    
    vector<Vec> n;
    vector<Vec> p;
    
    
    IT(num)
    
       
        ITJ(j,num)
            int a = i * (num+1) + j;
            int b = a + (num+1);
            int c = a + (num+1) + 1;
            int d = a + 1;
            
            Vec normal = ( Ro::dir( vp[a] ^ vp[b] ^ vp[c], false  ) ).dual();
            normal = normal.unit();
            n.push_back(normal);
            Pnt tp = Interp::surface<Pnt> ( (vp[a]), vp[b], vp[c], vp[d], .5, .5);
            p.push_back(Vec(tp));
            glBegin(GL_QUADS);
            glColor3f(.2,.2,.2);
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
        IT(n.size())
                Vec d = p[i] + n[i] * normlen;
                GL::vertex( p[i].w() );
                GL::vertex( d.w() );
        END 
        glEnd();
    }
    
}

void sphere(GLVApp& app){

    static Lattice<Par> f(2,2,2,sqrt(2));
    static Frame * frame = new Frame[f.num()];
    
    static bool bDraw;
    static float val,amt, num,dy1, dy2, w1, w2;
    SET
    
        IT(f.num()) frame[i].pos() = Ro::null( f.grid(i) ); frame[i].orientX( frame[i].pos() * 2 ); END 
        
        app.gui(num, "num", 10,100)(val, "val", -10,10)(amt,"amt",-100,100)(dy1, "dy1",-10,10)(dy2,"dy2",-10,10)(w1, "w1",-10,10)(w2,"w2",-10,10)(bDraw);
    END 

    IT(f.num())
        if (bDraw) {frame[i].push(); (Vec::x * amt * frame[i].scale() ).draw(0,0,0); frame[i].pop(); }
        app.interface.touch(frame[i]);
        f.grid(i) = frame[i].pos();
        f[i] = frame[i].tx( amt * frame[i].scale() );
    END
    
    GL::lightPos(0,0,30);
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
    
    ITI(i,it)
        
        Pnt_Pnt pp = par2 * (-1.0 + 2.0 * t);
        pp[0] = sca[0];
        
        Cir tc = c.sp(pp);
        
        cm.add(tc);
        
    END 

    cm.skin();
    
    //cout << Lattice<Par>::limit( f, app.mouse().origin ) << endl; 
    //cout << f.offset( app.mouse().origin ) << endl; 

    IT( cm.vp.size() )
    
        Vec tv = f.offset( cm.vp[i] );
        //cout << tv << endl; 
        Par tpar = Interp::volume<Par> ( f.data(), tv[0], tv[1], tv[2] );//f.euler ( cm.vp[i] );
        Pnt_Pnt pp = Gen::tpar( tpar );
        pp[0] = val;
        Pnt np = Ro::null_cen ( cm.vp[i].sp ( pp ) ) ;
        cm2.vp.push_back( np );
//    
    END 
    cm2.res = cm.res;
    
    cm2.draw();
    

    

}

void cube (GLVApp& app) {
    static Lattice<Pnt> f(2,2,2,2);
    static Frame * frame = new Frame[f.num()];
    static Par * par = new Par[f.num()];
    static Pnt * pnt = new Pnt[f.num()];
    
    static float amt;
    
    SET
    
       
        IT(f.num()) 
            frame[i].pos() = f[i]; 
            
            frame[i].orientX( f[i] * 2 ); 
        END 
    
        app.gui(amt,"amt",-100,100);
    END 
    
    
    IT(f.num())
        par[i] = frame[i].tx( frame[i].scale() );
        pnt[i] = frame[i].pos();
        frame[i].push(); Vec::x.draw(0,0,0); frame[i].pop(); 
        app.interface.touch( frame[i] );
    END 
    
    int num = 10;
    Lattice<Pnt> f2(num+1,num+1,num+1);
    
  //  vector<Pnt> vp;
    IT3I(num)
    
        if ( i == 0 || j == 0 || k == 0 || i ==(num) || j == (num) || k == (num) ) {
        
            Pnt tpnt = Ro::null ( Interp::volume<Pnt> (pnt, u, v, w) );
            Par tpar = Interp::volume<Par> (par, u, v, w);
            
            Pnt_Pnt pp = Gen::tpar( tpar * amt );
            
            Pnt np = Ro::null_cen( tpnt.sp( pp ) );
                        
            f2[ f2.idx(i,j,k) ] = np;
        }
    END
    END
    END 
    
    f2.drawMesh();
    
    
}


void bunny(GLVApp& app){

    static Mesh m;
    
}

void curvsurf(GLVApp& app){

    static float num, spacing;
    
    SET
        app.gui(num, "num",1,100)(spacing, "spacing",0,100);
    END 
    
    IT1(num)
        
        Vec v((-1,0 + 2.0 * t) * spacing, 0, 0 );
        //Starting Line
        Lin lin = LN(0,0,1).trs(v);
        
        //radius
        double r =  1/t ;
        Par p = Tnv(0,1,0).trs(v);
        Pnt_Pnt pp = (p);
        pp[0] = r;
        
        Cir c = lin.sp(pp);
        c.draw();
        
    END 

}

void GLVApp :: onDraw(){
   // bunny(*this);
     //   cube(*this);
    //sphere(*this);
       //  boost(*this);
     // grid3(*this);
    //    circleToPoles(*this);
     //   trajectories(*this);
     // curvsurf(*this);
    //  origin(*this);
    // dini(*this);
    //  homogenous(*this);
    //  interpolatedTangentLines(*this);
  //    lineToCircle(*this);
  //    reflection(*this);
  //    bendies(*this);
   //   interpolated(*this);
  //    tangentFrame(*this);
  //    bendField(*this);
 //     bendItself(*this);
 
  //    boostField(*this);
}

int main() {
    
    /* Bind CGA Framework */
	CongaTypes::BindAll();
    
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);		
	win = new Window(1500,1500,"VSR",&glv);    
    app = new GLVApp(win);    
    glv << app;
    
    Rand::Seed();
    
    Application::run();
    
    return 0;
}