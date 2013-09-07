//
//  KnottedKnot.cpp
//  Versor
//
//  Created by Pablo Colapinto on 8/23/13.
//  Copyright (c) 2013 WOLFTYPE. All rights reserved.
//
#include "vsr.h"
#include "vsr_op.h"

#include "vsr_GLVInterfaceImpl.h"

#include "vsr_fiber.h"

#include "vsr_knot.h"

#include "vsr_mesh.h"

#include "vsr_tests.h"

#include "vsr_field.h"

#include <iostream>

using namespace vsr;
using namespace glv;

GLVApp * app;
Window * win;

//basic hopf
void k00(GLVApp& app){
    gfx::GL::lightsOff();
    static double num, N, numtori,numiter,spacing,off,off2;
    SET
    
        app.gui(num,"num",0,1000)(N,"N",1,100)(numtori,"numtori",1,100)(numiter,"numiter",1,100)(spacing, "spacing",0,10);
        app.gui(off,"off",0,PI)(off2,"off2",0,PI);
        
    END
    
    ITJi(m,numiter)
        TorusKnot tk(3,2);
        double ta = t;
        Biv B1 =  Biv::xy * ( ta * PI );
        Rot q = Gen::rot( B1 );
        Vec vx =  Vec::x.sp( q );
        tk.HF.cir() = CXZ(1).trs( vx * spacing );
                 
        ITJi(k, numtori)
            double tb = t;
  
            Biv B =  Biv::xy * ( PI * tb);
            Rot q = Gen::rot( B );
            //Vec vx =  Vec::x.sp( q );
           

             Mesh mesh (GL::LL);

            ITJi(i,num)
                //Rot qq = Gen::rot( B );
                tk.HF.vec() = vx.sp( Gen::rot( Vec::y.sp( q ).duale() * t * PI ) );//Gen::rot( Biv::xz.sp( Gen::rot( Biv::xy * off * PI ) ) * t * PI ) );
                DRAW3( tk.HF.fiberA(), t*.5,tb,.5 );
                //DRAW( tk.HF.fiberB() );
                
                Pnt p = Ro::pnt_cir( tk.HF.fiberA(), t * PI * N);
                mesh.add(p);
            END
             //mesh.draw(0,1,0);
        END
    END
    
}

void k0(GLVApp& app){
    gfx::GL::lightsOff();
    static double num, N, numtori,numiter,spacing,off,off2;
    SET
    
        app.gui(num,"num",0,1000)(N,"N",1,100)(numtori,"numtori",1,100)(numiter,"numiter",1,100)(spacing, "spacing",0,10);
        app.gui(off,"off",0,PI)(off2,"off2",0,PI);
        
    END
    

        ITJi(k, numtori)
           // double toff = t;
            TorusKnot tk(3,2);
            double tb = t;
            Biv B =  Biv::xy * ( tb * PI + off2);
            Rot q = Gen::rot( B );
            Vec vx =  Vec::x.sp( q );
            tk.HF.cir() = CXZ(1).trs( vx * spacing );

             Mesh mesh (GL::LL);

            ITJi(i,num)
                //Rot qq = Gen::rot( B );
                tk.HF.vec() = vx.sp( Gen::rot( Vec::y.sp( q ).duale() * t * PI ) );//Gen::rot( Biv::xz.sp( Gen::rot( Biv::xy * off * PI ) ) * t * PI ) );
                DRAW3( tk.HF.fiberA(), tb, fabs(-.5 + t ) *.5,.5 );
                //DRAW( tk.HF.fiberB() );
                
                Pnt p = Ro::pnt_cir( tk.HF.fiberA(), t * PI * N);
                mesh.add(p);
            END
             //mesh.draw(0,1,0);
        END
    
}


void k01(GLVApp& app){
    
    gfx::GL::lightsOff();
    
    static double num, N, numtori,spacing;
    SET
    
        app.gui(num,"num",0,1000)(N,"N",1,100)(numtori,"numtori",1,100)(spacing, "spacing",0,10);
        
    END
    

    
    ITJi(j, numtori)
         Mesh mesh (GL::LL);
        TorusKnot tk(3,2);
        double ta = t;
        Rot q = Gen::rot( Biv::xy * ta * PI );
        Vec vx =  Vec::x.sp( q );
        tk.HF.cir() = CXZ(1).trs( vx * spacing );


        ITJi(i,num)
            tk.HF.vec() = vx.sp( Gen::rot( Vec::y.sp( q ).duale() * t * PI ) );
            
            DRAW3( tk.HF.fiberA(), ta,.5*t,.5 );
            //DRAW( tk.HF.fiberB() );
            
            Pnt p = Ro::pnt_cir( tk.HF.fiberA(), t * PI * N);
            mesh.add(p);
        END
         //mesh.draw(0,1,0);
    END
    
}

void k02(GLVApp& app){
    
    gfx::GL::lightsOff();
    
    static double num, N, numtori,spacing;
    SET
    
        app.gui(num,"num",0,1000)(N,"N",1,100)(numtori,"numtori",1,100)(spacing, "spacing",0,10);
        
    END
    

    
    ITJi(j, numtori)
         Mesh mesh (GL::LL);
        TorusKnot tk(3,2);
        double ta = t;
        Rot q = Gen::rot( Biv::xy * ta * PI );
        Vec vx =  Vec::x.sp( q );
        tk.HF.cir() = CXZ(1).trs( vx * spacing );


        ITJi(i,num)
            tk.HF.vec() = vx.sp( Gen::rot( Vec::y.sp( q ).duale() * t * PI ) );
            
            DRAW3( tk.HF.fiberA(), t*.5,ta,1 );
            //DRAW( tk.HF.fiberB() );
            
            Pnt p = Ro::pnt_cir( tk.HF.fiberA(), t * PI * N);
            mesh.add(p);
        END
         //mesh.draw(0,1,0);
    END
    
}

void k1(GLVApp& app){

    static double amt, amt2, num,spacing,poff;
    SET 
        app.gui(amt,"amt"); amt = 0; 
          app.gui(amt2,"amt2"); amt2 = .1; 
        app.gui(spacing,"spacing"); spacing = .1; 
         app.gui(poff,"poff"); poff = .1; 
        app.gui(num,"num",0,100); num = 2;
    END

    static Pnt pntA = Ro::null(2,0,0);
    TorusKnot knot(3,2,amt2);
    Bst bA = knot.bst();
    Pnt tpA = pntA;
    
   ITJ(i, knot.iter())   
        tpA = Ro::loc(tpA.sp(bA));
        knot.add(tpA);
   END
   
    ITJ(i,knot.iter())
            int n = ( i < knot.iter()-1 ) ? i + 1 : 0;
            Dlp dlp = knot.pnt[i] - knot.pnt[n];
            knot.add( ( dlp ^ Ro::sur( knot.pnt[i] ^ knot.pnt[n] ) ).dual() );
            DRAW( knot.cir[i] );
    END

   
    ITJ(j, knot.iter())
        Mesh mesh(GL::LL);
        double t= 1.0 * j/knot.iter();

        TorusKnot tk(3,2,amt);

        tk.HF.vec() = Vec::x.sp( Gen::rot( Biv::xy * t * PI ) ); 
        tk.HF.cir() = knot.cir[j];
        
        Pnt pnt = knot.pnt[j].trs(poff,0,0);
        
        //TOUCH(pnt);
        Pnt tp = pnt;
        Bst b = tk.bst();
        
        ITJ(i,tk.iter()+1)
           tp = Ro::loc( tp.sp( b ) );
           tk.add(tp);
        END
        
        //DRAW
        ITJ(i,tk.iter()+1)
            mesh.add(tk.pnt[i]);
        END
        
        mesh.draw();
        
        //cout << tk.iter() << endl; 
    }
    
    
    ///////////////////////////////////
    //static Pnt pnt2 = Ro::null(-1,0,0);
    
    
}

void k2(GLVApp & app){

        static double amt, num;
    SET 
        app.gui(amt,"amt"); amt = .1; 
        app.gui(num,"num",1,100); num = 2;
    END

    static Cir cir = CXZ(1);
    TOUCH(cir);

    static double time = 0; time += .01;
    static Field<Vec> f(10,10,10);
  //  static Field<Vec> f(10,10,10);

    TorusKnot tk(3,2, amt);
    
    tk.HF.cir() = cir;//CXZ(1).trs(1,0,0);
    tk.HF.vec() = Vec::x.sp( Gen::rot( Biv::xy * time) );
    Bst b = tk.bst();

    ITJ(i, f.num())
        Pnt np = Ro::loc( f.grid(i).sp(b) );
        f[i] = np - f.grid(i);
        f.grid(i) = np;        
    END
    
    DRAW3(f,0,0,0);
    
//    Pnt tp = Ro::null(2,0,0);
//    ITJ(i, tk.iter() )
//        tp = Ro::loc( tp.sp( b) );
//        tk.add( tp );
//        DRAW(tp);
//    END
    
    
}

void k3(GLVApp& app){
    
            static double amt, num;
    SET 
        app.gui(amt,"amt"); amt = .1; 
        app.gui(num,"num",1,100); num = 2;
    END
    
    static Pnt pnt = Ro::null(2,0,0);
    static Cir cir = CXZ(1);
    TOUCH(cir);

    TorusKnot tk(3,2, amt);
    
    static Pnt pntA = Ro::null(1,0,0);
    static Pnt pntB = Ro::null(-1,0,0);
    
    DRAWANDTOUCH(pntA); DRAWANDTOUCH(pntB);
    

    DRAW3( Dlp(pntA - pntB), 0,1,0);
    
    //Cir c = ( pntA ^ pntB ).dual(); //imaginary
    Dlp dlp = (pntA - pntB);
    Cir ca = ( (pntA ^ pntB).dual() );//Ro::dls( Ro::loc( pntA + pntB ), - Ro::size(pntA + pntB, true) );
    //Cir tc = ( dlp ^ (dls) ).dual(); 
    Dls dls = ( Ro::sur(pntA ^ pntB) );
//    DRAW3( dls,1,1,0 );

    
    tk.HF.cir() = (dls ^ dlp).dual(); //cb;//CXZ(1).dil(.1).trs(1,0,0);
    //tk.HF.vec() = Vec::x.sp( Gen::rot( Biv::xy * ) );
    Bst b = tk.bst();
    
    cout << Ro::size( tk.HF.cir(), false) << endl; 
    Pnt tp = pnt;
    ITJ(i, tk.iter() + num )
        tp = Ro::loc( tp.sp( b) );
        tk.add( tp );
        DRAW(tp);
    END
    
}

void GLVApp :: onDraw(){
    //k0(*this);
    
    static Cir c = CXY(1);
    static double time = 0; time += .001;
    Rot r = Gen::rot (Biv::xz * time);
    
    c = c.sp(r);
    
    DRAW(c);
    
    
}

int main(int argc, const char * argv[]) {
     
    /* Get Current Working Directory */
    File::setdir( argv[0] );    
              
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.1,.1,.1);
    		
	win = new Window(1000,1000,"KnottedKnot",&glv);    
    app = new GLVApp(win);    
    
    glv << app;
    
    Application::run();
    
    return 0;
}