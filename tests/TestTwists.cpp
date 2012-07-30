//
//  TestTwists.cpp
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

using namespace vsr;
using namespace glv;


Window * win;
GLVApp * app;

void twist(GLVApp& app){

    
    static float pitch, period;
    
    SET
        app.gui.add(DIALER, "pitch", pitch, -PI, PI);
        app.gui.add(DIALER, "period", period, -PI, PI);
        
    END
    
    static Twist twist;
    twist.period(period);  
    twist.pitch(pitch);
    
    Dll dll = twist.dll();//DLN(0, 1, 0);    
    //static Dll dll2 = DLN(0, 1, 0).trs(1,0,0); 
    static Cir c = CXY(1);
    
    ITJ(i,10) VAL(10)
       // t = t * PI;
        Mot m = Gen::mot( dll*t );
        Cir tc = c.sp(m);
        tc.draw(t,0,1-t);
        //dll = Ro::ax(tc);

    END
}


void twistedBoost(GLVApp& app){
    
    static Twist twist;
    static Boost boost;
    
    static Cir c = CXY(1);   app.interface.touch(c); c.draw();
    static Dll d = DLN(0,1,0); //app.interface.touch(d); d.draw();
    
    static float tpitch, tperiod, bpitch, bperiod, btang, bmnk;
    SET
        app.gui.add(DIALER, "tpitch", tpitch, -10,10);
        app.gui.add(DIALER, "tperiod", tperiod, -10,10);
        app.gui.add(DIALER, "bpitch", bpitch, -10,10);
        app.gui.add(DIALER, "bperiod", bperiod, -10,10);
        app.gui.add(DIALER, "btang", btang, -10,10);
        app.gui.add(DIALER, "bmnk", bmnk, -10,10);
    END
    
    twist.dll() = d;
    
    Frustrum f = app.camera().frustrum();
    
    Cir cbl = c.trs(f.box.bl);
    Cir cbr = c.trs(f.box.br);
    Cir ctr = c.trs(f.box.tr);
    Cir ctl = c.trs(f.box.tl);
    
    IT2(4)
    
    Cir fin = Interp::surface<Cir>(cbl, cbr, ctr, ctl, u, v);

    boost.par( fin.dual() );
    
    twist.pitch(tpitch);
    twist.period(tperiod);
    
    boost.biv() *= bperiod;
    boost.drv() *= bpitch;
    boost.tnv() *= btang;
    boost.mnk() *= bmnk;
    
    
    
    int n = 3;
    ITJ(k,n) VALJ(k,n)
    
        Cir tc = CXY(1).sp( twist.mot( -1.0 + 2*t ) );
        ITJ(l,n) VALJ(l,n)
    
            
            Cir ttc = tc.sp(boost.bst( -1.0 + 2*t));
            glColor3f(.2,1,1-t);
           // ttc.draw(0,1,0);
            boost.tnv() *= -1;
            ttc = tc.sp(boost.bst( -1.0 + 2*t));
            Draw::SegRad(tc);
            Draw::SegRad(ttc);//.draw(0,1,0);
        END
    
    END 
    
    END
    END
}


void twistCircle(GLVApp& app){
     
    Rand::Seed(10);
     
     
    static Lattice<Cir> f(4,4,1,3);
    static Cir cir = CXY(1);
   
    static Frame frame;
    
    static Dll dll;
    static Pnt tp = PT(-5,0,0);
    
    static bool bDraw, bFrame, bPrint;
    static float period, pitch, dt, perdev, pitchdev, minDist, prob, scale, spread;
    static float num, iter,piter;
    SET
        ITJ(i,f.num())
            f[i] = CXY(1).trs(f.grid(i));//.dil(Rand::Normal(1.5,.2))
        END
    
        app.gui(period, "period", -PI, PI)(pitch,"pitch",-10,10)(dt, "dt", 0,5)(num,"num",100,10000)(iter,"iter",1,100)(piter,"p_iter",1,100)(bDraw,"drawCir")(perdev, "perDev",0,2)(pitchdev, "pitchDev", 0,2)(minDist, "dist",-10,10)(prob, "prob",0,1)(bFrame)(scale,"scale",0,1);
    app.gui(spread,"spread", 0, 10)(bPrint,"print"); 
                                        
    END 
    
    app.interface.touch(tp);
    tp.draw();

    if (bDraw) f.drawLoop();
    
    string s = Print::Begin();
    
    ITJ(pr, piter);//VALJ(pr,piter)
    double tpr = 1.0 * (pr+1)/piter;
    
    ITJ(m, iter)VALJ(m,iter) 
    
        Pnt p = tp.trs(0, t * f.tw() * spread, 0 );
    
    
        Rot r (1,1,1,1);
        vector<State> pos;
        vector<Rot> rot;
        IT1(num);
            
           // int id = phase * num;
        
            //which circle is p closest to?
            int idx = 0;  double ts = -1000;
            ITJ(j,f.num())
                double s = Op::sca( p <= f.grid(j) );
                if (s > minDist ) { idx = j; break; }
                else if (s > ts) { ts = s; idx = j; }
            END
        
            cir = f[idx];// : LN(1,0,0);
            vector<Pnt> tpar = Ro::split ( Ta::at( cir, p, false) );
            vector<Pnt> ipar = Ro::split ( ( ( tpar[0] - tpar[1] ) ^ cir.dual() ).dual() ) ;
        
            Par par = Ta::at(cir, ipar[1], false);
            Dll td = ( par ^ Inf(1) ).dual(); //td.draw();
            Twist tw; tw.along( (Stat::Prob(prob * tpr) ) ?  td : DLN(1,0,0), Rand::Normal(period, t * perdev), Rand::Normal(pitch, t * pitchdev) );
            
            //Commutator!
            Pnt dp = p % ( tw.dll() * dt );
            p += dp;
            p = Ro::null(p);
    
            //Commutator of Rotor!
            Rot dr = r % (tw.dll() * dt );
            r += dr;
            r = r.unit();
    
            //cout << r << endl;
    
            pos.push_back(p);
            rot.push_back(r);
        
        END 

        glColor3f(0,0,0);

        IT1(pos.size())
            frame.pos(pos[i]); frame.rot( rot[i]);
            frame.scale(scale * Rand::Normal(1 - t, 1) );
            if (bFrame) {
 //               frame.cxy().draw();
                Glyph::Line( Vec(frame.pos()), Vec( frame.pos() ) + frame.x() * frame.scale() );
                Glyph::Line( Vec(frame.pos()), Vec( frame.pos() ) + frame.y() * frame.scale() );
            }
        END 
    
        glBegin(GL_LINE_STRIP);
            ITJ(i,pos.size())
                glVertex3f(pos[i][0],pos[i][1],pos[i][2]); 
            END 
        glEnd();
    
      
    
        if (bPrint){
            //ITJ(i,pos.size()-1)
            //app.printTikz(pos[i], pos[i+1]);
            s+= Print::PlotBegin(1, true, false);
            ITJ(i,pos.size()-1) 
                s += Print::Coord(pos[i], app.camera());
            END
            s += Print::PlotEnd();

            //END 
            
        }
    
    END 
    
    END 
    
    s += Print::End();
    
    if (bPrint) {  cout << s << endl; bPrint = false; }
}

void twistSelf(GLVApp& app){
    //temp (tp), derivative (dp) , current (p), original (pt)
    static Pnt tp, dp, p;
    static Pnt pt = PT(0,1,0);

    static Cir cir = CXY(1);
    static Dll tdll, odll, ddll, ndll, pdll;
    static Dll sdll = DLN(0,1,0);
    
    static float num, max, minDist, maxDist, period, pitch, dt, dev, dev2, rOff;
    static Twist tw;
    
    static bool bOld, bPrint;
    
    app.interface.touch(pt);
    
    SET
    
    app.gui(num,"num",0,20000)(max,"max",0,20000)(minDist,"dist",-10,10);
    app.gui(period, "period",-100,100)(pitch, "pitch",-100,100)(dt, "dt",-10,10);
    app.gui(dev,"dev",-10,10)(dev2,"dev2",-10,10)(rOff, "rOff",-10,10);
    app.gui(bOld, "oldmeth")(bPrint, "print");
    
    END 
    
    p = pt;
    odll = sdll;
    
    vector<State> pos;
    vector<Dll> dll;
    pos.push_back(pt);
    dll.push_back(odll.trs(pt));
    
    Rand::Seed(10);
    
    IT1(num);
    
        //temp hold
        tp = p;
//        tdll = odll;
    
        //which point is p closest to?
        int idx = 0;  double ts = -1000;
        bool bRange = false;
        ITJ( j, pos.size() )
            double s = Op::sca( tp <= pos[j] );
            //cout << s << endl; 
            if (s > minDist ) { idx = j; bRange = true; break; }            // Within range?
            else if (s > ts) { ts = s; idx = j; }                           // Oh well, find closest
        END
        
        pdll = (bRange) ? dll[idx] : sdll.trs( tp[0] + Rand::Normal(0,rOff), tp[1], tp[2]);
        
        tw.along( pdll, Rand::Normal(period, t*dev ), Rand::Normal(pitch,t*dev2) );
        
        //Commutator!
        dp = tp % ( tw.dll() * dt );
        tp += dp;
        tp = Ro::null(tp);
        pos.push_back(tp);
    
//        //Commutator DLL!
//        ddll = tdll % ( tw.dll() * dt );
//        tdll += ddll;
//        tdll = tdll.runit();
    
        
        
        ndll = (p ^ tp ^ Inf(1) ).dual();
        if (bOld) dll.push_back(ndll);
//        else dll.push_back(tdll);
//        odll = tdll;
    
        p = tp;
    END 
    
    
    glColor3f(0,1,0);
    glBegin(GL_LINE_STRIP);
    ITJ(i,pos.size())
    glVertex3f(pos[i][0],pos[i][1],pos[i][2]); 
    END 
    glEnd();
    
    if (bPrint) {

        app.printTikz( pos );
        
        bPrint = false;
        
    }

}


void twistLines(GLVApp& app){
    
    static Lattice<Dll> f(10,1,1,2);
    static Pnt tp = PT(-2,0,0);
    app.interface.touch(tp);
    tp.draw();
    
    static float num, period, pitch, dt, prox;
    
    SET
        ITJ(i,f.num())
            f[i] = (i & 1) ? DLN(1,1,0).trs( f.grid(i) ) : DLN(-1,1,0).trs( f.grid(i) );
        END 
    
    app.gui(num,"num",0,1000)(period, "period",-PI, PI)(pitch,"pitch",-100,100)(dt, "dt", 0, 10)(prox,"prox",0,10);
                                                                                                     
    END 
    
   f.drawLoop();
    
    Pnt p = tp;
    IT1(num)
    
        /// CLOSEST LINE TO POINT
        double ts = 10;  int idx = 0;
       // while ( ts > 
        ITJ(j, f.num())
            Dlp dlp = p <= f[j];
            double s = dlp.norm();
            if (s < prox ) { ts = s; idx = j; }
        END 
    
        Twist tw; tw.along( f[idx], period, pitch);
    
        //Commutator!
        Pnt dp = p % ( tw.dll() * dt );
        p += dp;
        p = Ro::null(p);
        
        p.draw(1,0,0);
        
    END     
    
}


void twisties(GLVApp& app){

    Rand::Seed(10);
    
    static Lattice<Pnt> f(1,10,1,.5);
    static Dll * dll = new Dll[f.num()];

    static float num, spread, iter, hspread;
    static float prob, min, amt;
    static float period, pitch;
    
    static bool bPrint;
    
    SET
        app.gui(num,"num",0,500)(spread,"spread",1,10)(iter, "iter", 1,1000)(hspread,"h",1,100);
        app.gui(prob, "prob")(min, "min", -10,10)(amt, "amt",-10,10);
        app.gui(period, "period",-10*PI, 10*PI)(pitch, "pitch", -10*PI,10* PI);
        
        app.gui(bPrint);
        
    END 
    
    int n = num;
    Dll * tl = new Dll[ n ];
    Pnt * pl = new Pnt[ n ];    
    Pnt * op = new Pnt [n];
    
    Dll * nl = new Dll[n];
    
    Twist tw;
   
    // SETUP 
    IT1(num)
    
        tl[i] = DLN(1,0,0).trs( Vec::y * t * spread );  
        pl[i] = Ro::dll_meet_dlp( tl[i], Dlp(1,0,0).trs(-5,0,0) );
         
    END 

    vector<Pnt> * final = new vector<Pnt>[n];
    
    // ITERATE
    ITJ(m, iter)VALJ(m,iter)
    
        double val = -hspread/2.0 + hspread * t;
        Dlp dlp = Dlp(1,0,0).trs(val, 0, 0 );
        
        int it = 0;
        ITJ(i,num)
            op[i] = pl[i];
            pl[i] = Ro::dll_meet_dlp( tl[i], dlp );
            final[it].push_back(pl[i]);
            it ++;
        END 
        
        ITJ(i,num)VAL(num)
            //tl[i].draw();
            
            double dist = 1000; int idx = 0;
        
            //get closest line at val
            ITJ(j,num)
                if ( i == j ) continue;
                double d = Ro::dst( pl[i] , pl[j] );
                if (d < min) { idx = j; break; }
                if (d < dist) { idx = j; dist = d; }
            END 
            
            if (idx != -1){
            
            Dll ndl = (op[idx] ^ pl[idx] ^ Inf(1) ).dual().runit();
            
//            tw.along( tl[idx], period, pitch ); 
            tw.along( ndl, period, pitch ); 
            tl[i] = tl[i].mot( tw.dll() * (Rand::Normal(amt, prob) )  );
            }
        END
                  
    END 
    
    ITJ(i,num)
        glColor3f( Rand::Num(), Rand::Num(), Rand::Num());
        glBegin(GL_LINE_STRIP);
        ITJ(j, final[i].size() )
            glVertex3f(final[i][j][0], final[i][j][1], final[i][j][2]);
        END 
        glEnd();
    END 
    

      
      if (bPrint){
        
        string s = "";
        
        s += Print::Begin();
        
            ITJ(i,num)
                s += Print::DrawBegin();
                s += Print::PlotBegin(1,0);
                ITJ(j, final[i].size() )
                    s+= Print::Coord( final[i][j], app.camera() );
                END
                s += Print::PlotEnd();
            END
        
        s += Print::End(); 
        
        cout << s << endl;
        
        bPrint = false;
      }
      
          if (final) delete[] final;
    if (tl) delete[] tl;
     if (pl) delete[] pl;
     if (op) delete[] op;
      if (nl) delete[] nl;
      
}

void motortwist(GLVApp& app){
    
    static CoupledTwist ct;
    
    static Cir c = CXY(1);
    
    static float pitchx, pitchy, pitchz;
    static float perx, pery, perz;
    static float extx, exty, extz;
    
    SET
        app.gui(pitchx,"px",-10,10)(pitchy,"py",-10,10)(pitchz,"pz",-10,10);
        app.gui(perx,"pex",-10,10)(pery,"pey",-10,10)(perz,"pez",-10,10);
        app.gui(extx,"x",-100,100)(exty,"y",-100,100)(extz,"z",-100,100);
    END 
    
    ct.pitch(pitchx,pitchy,pitchz);
    ct.period(perx,pery,perz);
    ct.ext(extx, exty, extz);
        
    ITJ(i,100) VAL(100)
    double x = t;
    Cir tc = c.mot( ct.dll(x) ) ;
    tc.draw();
    END 
    
}

void ntwist(GLVApp& app){
    

    static float rx, ry, period, pitch;
    SET
//        Twist tw;
//    
//        IT1(n)
//            nt[i] = Dll(0,1,0,0,-1,0);
//            nt[i].trs(-2.0 + 4.0 * t, 0, 0); 
//        
//        END 
    
        app.gui(rx,"rxz",-PI,PI)(ry,"ryz",-PI,PI);
        app.gui(period, "period",-PI,PI)(pitch, "pitch", -PI, PI);

    END
    
    static Cir c = CXY(1);  //app.interface.touch(c);    

    static Dll dll = DLN(0,1,0);  
    app.interface.touch(dll);
    
    static Twist tw;    
    tw.along(dll,period,pitch); 
    tw.dll().draw(0,0,1);
   
    dll.draw(1,0,0);
    
    Drv(dll).draw(1,0,0);
    tw.drv().draw(0,0,1);
    
    
    //cout << "unit:\n" << td << endl; 
    
    IT1(100)
        
       Cir tc = c.mot( tw.dll() * t ); tc.draw();
    
    END 
        
}

void simple(GLVApp& app){
    
    //TWIST FIELD
    static Lattice <Dll> f(2,2,1,2);
    //LOCAL TWIST
    static Twist tw;
    //SOME Point
    static Pnt pt = PT(1,0,0);  //Ro::dls3(1,0,0,1); 
    
    static Set<Pnt> set;
    
    pt.draw();
    
    ITJ(i,f.num())
    app.interface.touch(f[i]);    
    END
    
    static float period,pitch,influence;  
    SET app.gui(period, 100)(pitch, 100)(influence,10); END
    
    app.interface.touch(pt);

    static Dll tdll;
    tdll.set(0,0,0,0,0,0);
    int it = 0;
    IT (f.num())
    
        Cir c = f[i] ^ pt;
        c.draw();
        
        if (Ro::siz(c, false) <= influence){
            tdll += f[i];
            c.draw(0,0,1);
            it++;
        }    
                 
    END 

    tw.along( tdll/it, period, pitch);
    tw.dll().draw(0,1,0);
    
    ITJ(j,100)VALJ(j,100)
        Pnt tp = pt.mot( tw.dll( t ) );
        tp.draw();

    END 
    
    
    ITJ(i,set.size()) set[i].draw(); END
    
//    IT2( 10 )
//    Dll tdll = Interp::surface(f.data(), u, v);
//    tw.along(tdll, period, pitch);
//        ITJ(j, 10) VAL(10);
//            Pnt tp = pt.sp( tw.mot(t) );
//            tp.draw();
//        END 
//    END2

    ITJ(i,f.num())    
    f[i].draw();
    END
}

void GLVApp :: onDraw(){

    //twist(*this);
    
  // twistedBoost(*this);
    
  // interpolated(*this);
   
  //  testPrint(*this);
    
 //   twisties(*this);
  
//   twistSelf(*this);
   twistCircle(*this);
  //  twistLines(*this);
   
//    leaves(*this);
    
   // motortwist(*this);
    //ntwist(*this);
    
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