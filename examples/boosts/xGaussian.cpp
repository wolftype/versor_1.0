//
//  xGaussian.cpp
//  Versor
//
//  Created by Pablo Colapinto on 7/8/13.
//  Copyright (c) 2013 WOLFTYPE. All rights reserved.
//

#include "vsr.h"
#include "vsr_file.h"
#include "vsr_GLVInterfaceImpl.h"

#include "vsr_mesh.h"
#include "vsr_boost.h"
#include "vsr_field.h"
#include "vsr_stat.h"
#include "vsr_mesh.h"
#include "vsr_motor.h"


#include "vsr_tests.h"

#include <iostream>


using namespace vsr;
using namespace glv;


void gaussian2(GLVApp& app){

    static Field<Frame> f(3,1,1);
    ITJ(i,f.num())
        app.interface.touch(f[i]);
        Draw::Y(f[i]);
    END
    
    static double amt, bendRatioA, bendRatioB,bendRatioC,iter, spread;
    
    SET
        app.gui(amt, "amt", -10,10);
        app.gui(bendRatioA, "bendRatioA",-10,10)(bendRatioB, "bendRatioB",-10,10)(bendRatioC, "bendRatioC",-10,10);
        app.gui(iter,"iter",1,100);
        app.gui(spread,"spread",1,100);
        
        iter = 20;
        amt = 1;
        bendRatioA = 1;
        bendRatioB = 1;
        bendRatioC = 1;
    END
    
    

    static const int n = f.num();
    
    static Vec * tv  = new Vec[n];
    static Tnv * ttU = new Tnv[n];
    static Tnv * ttV = new Tnv[n];
    static Par * tp  = new Par[n];
    
    ITJ(i, f.num() )
        tv[i]   = f[i].vec();
        ttU[i]  = f[i].y() * f[i].scale();
        ttV[i]  = f[i].y() * f[i].scale();
        tp[i]   = f[i].tyScaled();
    END

    ttV[0] *= bendRatioA; tp[0] *= bendRatioA; 
    ttV[1] *= bendRatioB; tp[1] *= bendRatioB;   
    ttV[2] *= bendRatioC; tp[2] *= bendRatioC;


    ITJi(i,iter)
                
        //NULL TANGENTS
        Pnt src = Interp::quadric<Vec>(tv, f.num(), t).null();
        
        Par parU = Par ( Interp::quadric<Tnv>( ttU, f.num(), t) ).trs(src);
        
        Par parV = Par ( Interp::quadric<Tnv>( ttV, f.num(), t) ).trs(src);
       // Par parV2 = Interp::quadric<Par>( tp, f.num(), t );

        Bst bstU = Gen::bst( parU * amt );
        
        ITJi(j,iter)
        
            
            double xt = -1.0 + 2* t;
            Pnt np = src.trs(0,0,xt * spread).sp( bstU );
            
            DRAW3(src,1,0,0);
            DRAW3(Ro::loc(np),0,0,1);

            Bst bstV = Gen::bst( parV * amt * (1-fabs(xt)) );  
                  
            Pnt nnp =  Ro::loc(np).sp( bstV ) ;
            DRAW3(Ro::loc(nnp),0,1,0);
        END

    END     
     
}


//LOCALLY DETERMINED UV PATCH
void gaussian3(GLVApp& app){

    static Frame f;
    app.interface.touch(f);
    DRAW(f);

    static double amt, bendRatio, iter, spread;
    
    SET
        app.gui(amt, "amt", -10,10);
        app.gui(bendRatio, "bendRatio",-10,10);
        app.gui(iter,"iter",1,100);
        app.gui(spread,"spread",1,100);
        
        iter = 20;
        amt = 1;
        bendRatio = 1;
    END
    
    Par parU = f.ty() * amt;
    Par parV = f.ty() * amt * bendRatio;
    
    Tnv tnU = Tnv(f.y() * f.scale() * amt);
    Tnv tnV = Tnv(f.y() * f.scale() * amt * bendRatio);

    IT2i(iter,iter)
        double xu = -1.0 + 2 * u;
        double xv = -1.0 + 2 * v;
    
        Drv du = Fl::dir( f.lx() ) * xu;
        Drv dv = Fl::dir( f.lz() ) * xv;
        Drv cd = du + dv;
        

        //LOCAL
        Pnt src = f.pos().trs(  ( cd )  * spread );
        Bst bst = Gen::bst( Par( tnU * (fabs(xv)) +  tnV * (fabs(xu)) ).trs(f.pos()) );
        Pnt np = Ro::loc( src.sp( bst ) );

        DRAW(np);
    END END

}

void gaussian4(GLVApp& app){

    static Field<Frame> f(3,3,1,2);
    ITJ(i,f.num())
    TOUCH(f[i])
    Draw::Y(f[i],0,0,0);
    //Draw::Z(f[i]);
    END
    
    static double iter;//, amtA, amtB;
    static bool bSquared;
    static double amtT;
    static double * amtA = new double[ f.num() ];
    static double * amtB = new double[ f.num() ];
    
    SET
        app.gui(bSquared,"squared");
        app.gui(iter,"iter",10,1000)(amtT,"TOTAL_amt",-100,100);//(amtB,"amtB",-100,100);
        iter = 3; //amtA = 1; //amtB = -1;
        amtT = 1;
        ITJ(i,f.num())
            f[i].rot( Gen::rot( Biv::yz * PI/4.0) );//Gen::rot( (i & 1 ) ? Biv::yz * -PI/4.0 : Biv::yz * PI/4.0 ) );
            app.gui(amtA[i], "amtA",-100,100);
             app.gui(amtB[i], "amtB",-100,100);
             //amtA[i] = 1;
             //amtB[i] = -1;
        END
    END
    
    
    ITJ(i,f.num())
        f.grid(i) = f[i].pos();
    END
    
    UVMesh uv(iter+1,iter+1);
    IT2i(iter,iter)
       
        Patch pat = f.surfIdx(u,v);
        Point src = f.surfGrid(u,v);
        
        double rw = pat.rw; double rh = pat.rh;

        Par parUa = f[pat.a].tyScaled(-amtA[pat.a] * amtT ).trs(f[pat.a].x() * pat.rw);
        Par parVa = f[pat.a].tyScaled(-amtB[pat.a] * amtT ).trs(f[pat.a].z() * pat.rh);
        
        Par parUb = f[pat.b].tyScaled(-amtA[pat.b] * amtT).trs(f[pat.b].x() * -(1-pat.rw));
        Par parVb = f[pat.b].tyScaled(-amtB[pat.b] * amtT ).trs(f[pat.b].z() * pat.rh);
        
        Par parUc = f[pat.c].tyScaled(-amtA[pat.c]  * amtT).trs(f[pat.c].x() * -(1-pat.rw));
        Par parVc = f[pat.c].tyScaled(-amtB[pat.c]* amtT).trs(f[pat.c].z() * -(1-pat.rh));
        
        Par parUd = f[pat.d].tyScaled(-amtA[pat.d] * amtT).trs(f[pat.d].x() * pat.rw);
        Par parVd = f[pat.d].tyScaled(-amtB[pat.d] * amtT).trs(f[pat.d].z() * -(1-pat.rh));
        
        Par parU = bSquared ? Interp::sqsurface<Par>( parUa, parUb, parUc, parUd, rw,rh ) : Interp::surface<Par>( parUa, parUb, parUc, parUd, rw,rh );;
        Par parV = bSquared ? Interp::sqsurface<Par>( parVa, parVb, parVc, parVd, rw,rh ) : Interp::surface<Par>( parVa, parVb, parVc, parVd, rw,rh );

        Bst bst = Gen::bst( parU + parV );
        //Bst bst ( parU + parV );
        //bst[0] = 1;
        
        //Bst bst = bstU + bstV;
        Point p = Ro::loc( src.sp(bst) );
        
       // DRAW3(p,1,0,0);
        uv.add(p);

    END END 

    uv.draw(.5,.5,.5);
    uv.drawTri(.2,.2,.2);

}


void CirTest(GLVApp& app){
    static double amt;
    SET
        app.gui(amt, "amt",-100,100);
    END
    Bst b = Gen::bst( Par(Tnv(1,0,0) * amt/2.0 ) );
    Cir c = b * Cir(LN(0,1,0)) / b ;//.dil(amt);
    
    static Pnt p = PT(2,0,0);
    //1, 3 - 9
    //2, 8 - 64
    //3, 15
    //3,
    //5, 35 
    DRAWANDTOUCH3(c,0,0,0);
    DRAWANDTOUCH3(p,0,0,0);
    
    cout <<  p << sqrt( (p<=c.dual()).dot()[0] ) << endl; 
}

void gaussian45(GLVApp& app){

    static Field<Frame> f(4,4,1,2);
    ITJ(i,f.num())
    TOUCH(f[i])
    Draw::Y(f[i],0,0,0);
    //Draw::Z(f[i]);
    END
    
    static double iter;//, amtA, amtB;
    static bool bSquared;
    static double amtT;
    static double * amtA = new double[ f.num() ];
    static double * amtB = new double[ f.num() ];
    
    SET
        app.gui(bSquared,"squared");
        app.gui(iter,"iter",10,1000)(amtT,"TOTAL_amt",-100,100);//(amtB,"amtB",-100,100);
        iter = 3; //amtA = 1; //amtB = -1;
        amtT = 1;
        ITJ(i,f.num())
            f[i].rot( Gen::rot( Biv::yz * PI/4.0) );//Gen::rot( (i & 1 ) ? Biv::yz * -PI/4.0 : Biv::yz * PI/4.0 ) );
            app.gui(amtA[i], "amtA",-100,100);
             app.gui(amtB[i], "amtB",-100,100);
             //amtA[i] = 1;
             //amtB[i] = -1;
        END
    END
    
    
    ITJ(i,f.num())
        f.grid(i) = f[i].pos();
        Par u = f[i].tyScaled() * -amtA[i];
        Par v = f[i].tyScaled() * -amtB[i];
        
        Cir cu = Cir( f[i].lx()).sp( Gen::bst(u) );
        Cir cv = Cir( f[i].lz()).sp( Gen::bst(v) );
        
        DRAW(cu); DRAW(cv);
    END
    
    UVMesh uv(iter+1,iter+1);
    IT2i(iter,iter)
       
        Patch pat = f.surfIdx(u,v);
        Point src = f.surfGrid(u,v);
        
        double rw = pat.rw; double rh = pat.rh;
        
        Tnv tua = Tnv(f[pat.a].ys()) * -amtA[pat.a];
        Tnv tub = Tnv(f[pat.b].ys()) * -amtA[pat.b];
        Tnv tuc = Tnv(f[pat.c].ys()) * -amtA[pat.c];
        Tnv tud = Tnv(f[pat.d].ys()) * -amtA[pat.d];

        Tnv tva = Tnv(f[pat.a].ys()) * -amtB[pat.a];
        Tnv tvb = Tnv(f[pat.b].ys()) * -amtB[pat.b];
        Tnv tvc = Tnv(f[pat.c].ys()) * -amtB[pat.c];
        Tnv tvd = Tnv(f[pat.d].ys()) * -amtB[pat.d];
                                
        Tnv tu = Interp::surface<Tnv>( tua, tub, tuc, tud, rw, rh);
        Tnv tv = Interp::surface<Tnv>( tva, tvb, tvc, tvd, rw, rh);
        
        Par parU = Par(tu).trs(f[pat.a].pos()[0] + 1,src[1],0);//[0],0,0);
        Par parV = Par(tv).trs(src[0],f[pat.a].pos()[1] + 1,0);

        Bst bst = Gen::bst( parU + parV );
        //Bst bst ( parU + parV );
        //bst[0] = 1;
        
        //Bst bst = bstU + bstV;
        Point p = Ro::loc( src.sp(bst) );
        
       // DRAW3(p,1,0,0);
        uv.add(p);

    END END 

    uv.draw(.5,.5,.5);
    uv.drawTri(.2,.2,.2);

}

void gaussian5(GLVApp& app){

    static Frame f;
    TOUCH(f)
    Draw::Y(f,0,0,0);
    
    static double iter, amtA, amtB;
    
    SET
        app.gui(iter,"iter",1,1000)(amtA,"amt",-1000,1000)(amtB,"amtB",-1000,1000);
        iter = 10; amtA = 1; amtB = -1;
    END
    
    UVMesh mesh(iter+1,iter+1);
    
    IT2i(iter,iter)
       
        
        double tu = -1.0 + 2*u;
        double tv = -1.0 + 2*v;
        Point src = f.pos().trs(f.x() * tu + f.z() * tv);
        
        Par parU =  f.tyScaled().trs(f.x() * tu ) * -amtA;
        Par parV = f.tyScaled().trs(f.z() * tv ) * -amtB;

                      
        Par npar = (parU+parV)/2.0;
        
        
        Booster bst = Gen::bst( npar );
        
        
        Point np = Ro::loc( src.sp( bst ) );

        mesh.add(np);
        //DRAW(np);
        
    END END
    
    mesh.draw(.5,.5,.5);
   // mesh.drawNormals(0,0,0);
    mesh.drawTri(.2,.2,.2);

}


void gaussian6(GLVApp& app){

    static Field<Frame> f(3,3,1,2);
    static Field<Par> fpar(3,3,1,2);
    
    ITJ(i,f.num())
        TOUCH(f[i])
        Draw::Y(f[i],0,0,0);
        fpar[i] = f[i].tyScaled();
    END
    
    static double iter;//, amtA, amtB;
    static double amtT;
    static double * amtA = new double[ f.num() ];
    static double * amtB = new double[ f.num() ];
    static double falloff, offset, dfalloff;
    
    SET
        app.gui(offset, "offset", 0, 100)(falloff,"falloff", 0, 100)(dfalloff,"dfalloff",0,100);
        app.gui(iter,"iter",10,1000)(amtT,"TOTAL_amt",-100,100);//(amtB,"amtB",-100,100);
        iter = 3; //amtA = 1; //amtB = -1;
        amtT = 1;
        ITJ(i,f.num())
            f[i].rot( Gen::rot( Biv::yz * PI/4.0) );//Gen::rot( (i & 1 ) ? Biv::yz * -PI/4.0 : Biv::yz * PI/4.0 ) );
            app.gui(amtA[i], "amtA",-100,100);
             app.gui(amtB[i], "amtB",-100,100);
             //amtA[i] = 1;
             //amtB[i] = -1;
        END
    END
    
    
    ITJ(i,f.num())
        f.grid(i) = f[i].pos();
    END
    
    UVMesh uv(iter+1,iter+1);
    IT2i(iter,iter)
       
        Patch pat = f.surfIdx(u,v);
        Point src = f.surfGrid(u,v);
        
        //double rw = pat.rw; double rh = pat.rh;

        Par parUa = f[pat.a].tyScaled(  -amtA[pat.a] * amtT );
        Cir cUa = Cir( f[pat.a].lx() ).sp( Gen::bst( parUa ) ); 
        DRAW3(cUa,0,0,0);
        
        double uaw = ( src <= cUa.dual() ).dot()[0];
             
        Par parVa = f[pat.a].tyScaled(-amtB[pat.a] * amtT );
        Cir cVa = Cir( f[pat.a].lz() ).sp( Gen::bst( parVa ) ); 
        DRAW3(cVa,0,0,0);
                               
        Par parUb = f[pat.b].tyScaled(-amtA[pat.b] * amtT);
        Cir cUb = Cir( f[pat.b].lx() ).sp( Gen::bst( parUb ) ); 
        DRAW3(cUb,0,0,0);
        
        Par parVb = f[pat.b].tyScaled(-amtB[pat.b] * amtT );
        Cir cVb = Cir( f[pat.b].lz() ).sp( Gen::bst( parVb ) ); 
        DRAW3(cVb,0,0,0);
                
        Par parUc = f[pat.c].tyScaled(-amtA[pat.c]  * amtT);
        Cir cUc = Cir( f[pat.c].lx() ).sp( Gen::bst( parUc ) ); 
        DRAW3(cUc,0,0,0);
        
        Par parVc = f[pat.c].tyScaled(-amtB[pat.c]* amtT);
        Cir cVc = Cir( f[pat.c].lz() ).sp( Gen::bst( parVc ) ); 
        DRAW3(cVc,0,0,0);
        
        Par parUd = f[pat.d].tyScaled(-amtA[pat.d] * amtT);
        Cir cUd = Cir( f[pat.d].lx() ).sp( Gen::bst( parUd ) ); 
        DRAW3(cUd,0,0,0);
        
        Par parVd = f[pat.d].tyScaled(-amtB[pat.d] * amtT);
        Cir cVd = Cir( f[pat.d].lz() ).sp( Gen::bst( parVd ) ); 
        DRAW3(cVd,0,0,0);
                
        //Par parU = bSquared ? Interp::sqsurface<Par>( parUa, parUb, parUc, parUd, rw,rh ) : Interp::surface<Par>( parUa, parUb, parUc, parUd, rw,rh );;
        //Par parV = bSquared ? Interp::sqsurface<Par>( parVa, parVb, parVc, parVd, rw,rh ) : Interp::surface<Par>( parVa, parVb, parVc, parVd, rw,rh );
        double dua = 1.0 / ( offset+ falloff * ( src <= ( cUa.dual() ) ).dot()[0] );
        double dva = 1.0 / ( offset + falloff * ( src <= ( cVa.dual() ) ).dot()[0] );
        double dpa = 1.0 / ( offset + Ro::sqd(src, f[pat.a].pos()) );

        double dub = 1.0 / ( offset + falloff * ( src <= ( cUb.dual() ) ).dot()[0] );
        double dvb = 1.0 / ( offset + falloff * ( src <= ( cVb.dual() ) ).dot()[0] );
        double dpb = 1.0 / ( offset + Ro::sqd(src, f[pat.b].pos() ) );
                
        double duc = 1.0 / ( offset + falloff * ( src <= ( cUc.dual() ) ).dot()[0] );
        double dvc = 1.0 / ( offset + falloff * ( src <= ( cVc.dual() ) ).dot()[0] );
        double dpc = 1.0 / ( offset + Ro::sqd(src, f[pat.c].pos() ) );
        
        double dud = 1.0 / ( offset + falloff * ( src <= ( cUd.dual() ) ).dot()[0] );
        double dvd = 1.0 / ( offset + falloff * ( src <= ( cVd.dual() ) ).dot()[0] );
        double dpd = 1.0 / ( offset + Ro::sqd(src, f[pat.d].pos() ) );        
        
       // Bst bst = Gen::bst( parUa * dua + parVa * dva + parUb * dub + parVb * dvb + parUc * duc + parVc * dvc + parUd * dud + parVd * dvd);
        Bst bst2 = Gen::bst( ( parUa * dua + parVa * dva ) * dpa + ( parUb * dub + parVb * dvb) * dpb + ( parUc * duc + parVc * dvc) * dpc + ( parUd * dud + parVd * dvd) * dpd);

        Point p = Ro::loc( src.sp(bst2) );
        
        uv.add(p);

    END END 

    uv.draw(.5,.5,.5);
    uv.drawTri(.2,.2,.2);

}

void GLVApp :: onDraw() {
    gaussian6(*this);
}

int main(int argc, const char * argv[]) {
     
     
    //File::setdir( argv[0] );       
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(1000,500,"Reflections",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}