//
//  TestField.cpp
//  vsr
//
//  Created by Pablo Colapinto on 4/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "Lattice.h"
#include "Field.h"
#include "GLVInterfaceImpl.h"
#include "Stat.h"

using namespace vsr;
using namespace glv;

Window * win;
GLVApp * app;

void tst(GLVApp& app){
    
    static Lattice<Cir> f(2,2,2,1);
    static bool bPrint, bOrtho;
    static float bFloat;
    static double bDouble;
    static Vec bVec;

    SET 
    
        app.gui(bOrtho);
        app.gui(bPrint); 
        app.gui(bFloat); 
        app.gui(bDouble, "test", 0,10); 
    
    END
    
    app.camera().perspective() = bOrtho;
    
    IT(f.num())
    
        app.interface.touch( f[i] );
    
        Par a = Ro::par_cir(f[i], 0);
        Par b = Ro::par_cir(f[i], PI / 2.0);
        
        a.draw(); b.draw();
    
    END

    f.drawLoop();
    
    if (bPrint){
        bPrint = 0;

        cout << Print::Begin() << endl;
        IT(f.num())
        cout << app.printTikz( f[i] ) << endl ;;
        END 
        cout << Print::End() << endl;
    }
}

void plunges(GLVApp& app){
    
    static Set<Cir> s;
    
    static int max = 100;
    
    
    SET
    
        Cir a = CXY(1).trs(-1,0,0);
        Cir b = CXY(1).trs(1,0,0);
        s.add(a).add(b);
    
    END
        
    if (s.size() < max) {
        
        IT(s.size()-1)
            
        Dls da = Ro::sur(s[i]); //da.draw(0,1,0,.2);
            
        for (int j = i+1; j < s.size(); ++j ){
                
                Dls db = Ro::sur(s[j]);//db.draw(0,1,0,.2);
                Par par = da ^ db;
                
                Cir cm = par.dual(); cm.draw();
     
                if ( Ro::siz(cm) >=0) {
                    cout << "hit" << endl; 
                    Pln pln  = Ro::car( cm ); pln.draw(0,0,1);
                    Cir c = pln.dual() ^ s[i].dual();
                    c.draw();
                    //s.add(c);
                }
        
            END 
        END
    }
        
    IT(s.size())
        s[i].draw();
        app.interface.touch(s[i]); 
    END
    
    
}

void ripples(GLVApp& app){
    
    static Set<Cir> c;
    static Set<float > vel;
    static Lattice<Cir> f(3,3,1,1);
    
    static int max = 100;
    
    SET

        IT1(f.num()) 

 //      f[i] = Ro::dls_flat ( f.grid(i), Biv::xy ).dil( Ro::null_cen( f.grid(i) ), .2 + Rand::Num() * .5); 
        f[i] = Ro::pnt_flat ( Ro::null(f.grid(i)), Biv::xy, f.spacing() + .2 + Rand::Num() * .5); 

        END

        //f.jitter(1);
    
    IT(f.num()) c.add( f[i] ); vel.add( Rand::Num(.5,.8) ); END
            
        
    END
    
    //IT(f.num()) f[i].draw(); END 
    
    Set<float> tmpv; Set<Cir> tmpc;
    
    if ( c.size() > 0 && c.size() < max) {
        cout << "calculating...."<<endl; 
        
        IT(c.size()-1)
            Dls da = Ro::sur(c[i]);
        
        for (int j = i + 1; j < c.size(); ++j){
        
            Dls db = Ro::sur(c[j]);
        
            Par par = da ^ db;
            
            Cir cm = par.dual();
            
            //cout << i << " " << j << " : " <<  Ro::siz(cm) << endl; 
                
            if ( Ro::siz(cm) >= 0 ){
               // cout << "add 1" << endl; 
                
                Cir tc = Ro::car(cm).dual() ^ c[i].dual();
                Par tp = tc.dual();
                vector<Pnt> np = Ro::split(tp);
                tmpc.add(  Ro::pnt_flat( np[0], Biv::xy,.1) ); tmpc.add( Ro::pnt_flat( np[1], Biv::xy, .1)  );
                tmpv.add(1); tmpv.add( vel[i] + vel[j] );
                
            }
        
        END 
        END 
    }

        

    c.add(tmpc); vel.add(tmpv);
    
    cout << c.size() << endl; 
    
    int i = 0;
    
    while ( i < c.size() ) {

        c[i] = c[i].dil( Ro::null_cen(c[i]), .05 * vel[i]);
        c[i].draw();
    
        vel[i] *= .95 + .05 * (1-vel[i]);
        
        double s = fabs( Ro::siz(c[i]) );
        
        if ( s > 5 ) {
            vel.erase(i);
            c.erase(i);
            continue;
        }
        i++;
    }
}
    
void ripples2(GLVApp& app){
    
    static Set<Dls> c;
    static Set<float > vel;
    static Lattice<Dls> f(5,5,1,1);
    
    static int max = 200;
    
    SET
        
    //f.jitter(1);
    
    IT(f.num()) c.add( f.grid(i) ); vel.add( Rand::Num(.6, 1.5) ); END
    
    
    END
    
    if (c.size() <= 1){
        IT(10)
        Dls tc = Ro::dls3( Rand::Num(-2,2), Rand::Num(-2,2), 0, Rand::Num(.1,.3) );
        c.add( tc ); vel.add( Rand::Num(.5,1) );
        END 
    }
    
    Set<float> tmpv; Set<Dls> tmpc;
    
    if ( c.size() > 0 && c.size() < max ) {
       // cout << "calculating...."<<endl; 
        
        IT(c.size()-1)
        
            int n = 0;
            for (int j = i + 1; j < c.size(); ++j){
                
                Par par = c[i] ^ c[j];
                
                Cir cm = par.dual();
                            
                if ( Ro::siz(cm) >= 0 && Stat::Prob(.1) && Stat::Prob(1-(1.0* n/10) ) && (c.size() + tmpc.size() < max) ){
                    n++;
                    Cir tc = Ro::car(cm).dual() ^ Dlp(0,0,1,0) ^ c[i];
                    Par tp = tc.dual();
                    vector<Pnt> np = Ro::split(tp);
                    tmpc.add(  Ro::dls_pnt( np[0],.1) ); tmpc.add( Ro::dls_pnt( np[1],.1) );
                    tmpv.add(1); tmpv.add( .5 + vel[i] + vel[j] );
                    
                }
                
            }
            
        END 
    
    }
        
        
    if (tmpc.size() > 0 ) {  c.add(tmpc); vel.add(tmpv); }
        
    cout << c.size() << endl; 
        
        int i = 0;
        
        static Cir cir;
        
        while ( i < c.size() ) {

            double s = fabs( Ro::siz(c[i]) );
            
            if ( Stat::Prob( 1.0 * c.size() / max ) ||  Stat::Prob(.02 * s) || c[i][3] == 0 ) {
                vel.erase(i);
                c.erase(i);
                continue;
            }          
            
            c[i] = c[i].dil( Ro::null_cen(c[i]), .05 * vel[i]);
            
            cir = ( c[i] ^ Dlp(0,0,1,0) ).dual();
            
            cir.draw();
            
            vel[i] *= .95 + .05 * (1-vel[i]);
            
            i++;
        }
    }


void scalar(GLVApp& app){
    
//    static Lattice<Sca> f(10,10,1,1.5);

    static Field<float> f(10,10,10,1.5);
    
    static double diff, dt, adv, range;
    static bool bounded, neg = 0;
    SET
    app.gui(diff,"diff",0,5)(dt,"dt",0,5)(adv, "adv",0,5)(range, "range", -10, 10)(bounded)(neg);
    END
    
   
    f.diffuse(diff * dt );//dt, bounded, neg);
    f.swap();
    
    cout << app.mouse().pos << endl; 
        
    IT(f.size())
    
        Vec v = GL::sproject( f.grid(i).w(), app.camera() ); 
        double s = (app.mouse().pos - v).norm();
        if ( app.mouse().isDown && s <= range ){
            
            f[i] += .1;
            cout << "hit " << i << endl; 
 
        }
                    
        f[i] -= .01;
        if (f[i] < 0) f[i] = 0;
    
        glColor3f(f[i], .2, .2 ); 
        Glyph::Point( f.grid(i) );
    END 
    
    
    
//    static Pnt p = Ro::dls3(0,0,0, 1);
//    p.draw();
//    
//    double v = Op::sca(app.mouse().origin <= p);
//   // cout << v << endl; 
//    
//    if ( app.mouse().isDown ) {
//
//        if ( Ro::hit( app.mouse().origin, p, 0 ) ) cout << "hit" << endl; 
//    }
}

void GLVApp :: onDraw(){
 //   plunges(*this);
    ripples2(*this);
 //   scalar(*this);
}


int main(int argc, char * const argv[]) {
    
    /* Get Current Working Directory */
    File::setdir( argv[0] );
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