//
//  TestLinkage.cpp
//  vsr
//
//  Created by Pablo Colapinto on 3/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "vsr_interp.h"
#include "vsr_math.h"
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

void ratios(GLVApp& app){
    
    static Vec va = Vec::y;
    static Vec vb = Vec::x;
    
    static Frame fa; static Frame fb;
    static Frame f; 

    SET
    fa.pos(-1,0,0); fb.pos(1,0,0);
    END
    
    app.interface.touch(fa);
    app.interface.touch(fb);
    app.interface.touch(f);
    
    f.rot(  Gen::ratio( fa.y(), fb.y() ) );
    fa.draw(); fb.draw(); f.draw();
    
    Frame c;  c.pos(0,1,0); c.rot( f.rot() * fa.rot() ); c.draw(); 

}

void chain(GLVApp& app){
    
    int n = 4;
    
    static Chain k(n);
    static Chain k2(n);
    static Chain k3(n);
    
    
    static float b;
    
    SET
        app.gui.add(DIALER, "biv", b, -PI, PI );
    END
    
    //fabrik solver
    k.fabrik( app.mouse().origin, n-1, 0 );
    k.draw();
    //copy
    k2.fk();
    k2.draw();
    
//    Frame f; f.pos(0,-1,0); f.scale(.5);
//    f.rot ( k[0].rot() * k2.joint(1).rot() );
//    f.draw();
  //  k3.fk3(); k3.draw();

//    k3.fk();
//    k3.draw();
//    k3.joint(2).rot( Gen::rot( Biv(b,0,0) ) );    
    
    
    IT(n)
        //k2.link(i).mot( k.link(i).mot() );
        k2.joint(i).rot( k.joint(i).rot() );
    END
    k2.joint(0).pos(1,0,0);

    IT( n -1 )     
       // app.interface.touch( k3[i], k3.joint(i) ); 
          k.linf(i).draw(0,1,0);
       // k3.linf(i).draw();
    END
    
}

void fourBar(GLVApp & app){
    
    int n = 4;
    static Chain k(n);

    static double t, wt;
    SET
        k.last().pos(2,0,0);
        app.gui.add(DIALER, "ang", t, -PI, PI);
        app.gui.add(DIALER, "wt", wt, -2, 2);
    END
    
    k.fabrik( app.mouse().origin, 1, 0 );    
    //k.angle(4, t);
    k.ifabrik( k[1].pos() , 1, 3 );

    k.draw();
    
    IT( n -1 )     
        k.linf(i).draw(0,1,0);
    END    
    
    app.mouse().origin.draw(1,0,0);


    IT (n-1) 
    
        Pnt pa = k[i].pos();
        Pnt pb = k[i+1].pos();
    
        pb[4] = wt;
    
        Cir ca = k[i].cxz();
        Cir cb = k[i+1].cxz();
            
        ITJ(j,11) VALJ(j,10)
    
            Pnt r = Interp::linear<Pnt>(pa,pb,t);
            //Cir cr = Interp::linear<Cir>(ca,cb,t);
            Cir c = Ro::dls_flat(r, Biv( k.linf(i) ) );
            c.draw();
        END
    
    END
    
}


//FIVE BARS (with two at fixed distance for a four bar)
void permutations(GLVApp& app){
    static Dlp XY(0,0,1,0);
    static Dlp XZ(0,1,0,0);

    //static Chain k(5);
    static Chain tk(5);
    
//    vector<Chain> pk;
    
    static Cir c = CXY(1).trs(0,1,0);
    
    static Pnt BaseB = PT(2,0,0);    
    static Pnt BaseA = PT(-2,0,0);

    int num= 100;
    
    static float which;
    static bool bPick;
    static float dist, r1, r2;
    
    
    SET
    
        app.gui(which, "which",1,num*num)(bPick)(dist,"dist",0,10);
        app.gui(r1,"r1",0,10)(r2,"r2",0,10);
        //k[0].pos() = BaseA;    
    
    END 
    
    static int t; t++;
    int swhich = ( bPick ) ? floor(which) : ( 1 + sin( 1.0 * t / 45.0) )/2.0 * (num*num) ;
    
    static Dls a = Ro::dls3(-2,0,0); static Dls b = Ro::dls3(2,0,0);      
    app.interface.touch(a); app.interface.touch(b);
    

    //Possible Points (on XY plane)
    vector<Pnt> posa,posb;
    
    IT1(num)
        Vec v = Vec::x.rot( Biv(t*PI,0,0) ); 
        Par s = Ro::dls_flat(a, v);
        vector<Pnt> p = Ro::split(s);    
        posa.push_back( Ro::null_cen(p[0]) );
        //posa.push_back( Ro::null_cen(p[1]) );
    
        s = Ro::dls_flat(b,v);
        p = Ro::split(s);    
        posb.push_back( Ro::null_cen(p[0]) );
        //posb.push_back( Ro::null_cen(p[1]) );
    
    END
            
    
    tk[0].pos() = Ro::null_cen(a);
    tk[4].pos() = Ro::null_cen(b);
    double squaredDist;
    // Possible Spheres
    IT( num )
        
        Dls ta = Ro::dls_pnt(posa[i], r1);//k.link(1).vec().norm() );
        
        //Unknow Point 
        Set<Pnt> traj;

        ITJ(j,num ) VALJ(t, num )
            
        Dls tb = Ro::dls_pnt(posb[j], r2);//k.link(2).vec().norm() );
    
            Par mt = ta ^ tb;

                squaredDist = -( posa[i] <= posb[j] )[0];
                
            
                if ( Ro::siz(mt) <= 0 && Math::Error<double>(squaredDist, dist,0.05 ) ) {
                   // cout << (i * num + j) << endl; 
                    posa[i].draw(); posb[j].draw(); 
                       
                    Pnt np = Ro::null_cen( Ro::split1( (XY ^ mt).dual() ) );
                    traj.add(np);
                   // if ( ( i * num + j ) == swhich  ){
                         
                        
                        tk[1].pos() =  posa[i];
                        tk[2].pos() =  np;
                        tk[3].pos() =  posb[j];
                        
                        tk.joints();
                        tk.draw();
                    
                        tk[2].bound().dils(-.5).draw(0,1,0,.1);

                   // }

                    
                }
        
        END 
        
    
//        glBegin(GL_LINE_STRIP);
//        IT1(traj.size())
//        glColor3f( 1, 0, 0);
//        glVertex3f(traj[i][0], traj[i][1], traj[i][2]);
//        END
//        glEnd();
   
    END 


    cout << squaredDist << endl; 
    
    a.draw(1,0,0,.2);  b.draw(1,0,0,.2);
}

void GLVApp :: onDraw(){

  //robot(*this);

//    fourBar(*this);
 // chain(*this);
 // ratios(*this);
    
  permutations(*this);
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