//
//  xMembrane.cpp
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

void membrane2(GLVApp& app){
    
    static Field<Frame> f(2,2,2,2);
    int tot = f.num()-1;
    
    static double * falloff = new double[f.num()];
    static double * amt = new double[f.num()];
    static double * period = new double[f.num()];
    static double * pitch = new double[f.num()];
    static double * dilate = new double[f.num()];
    static double * dir = new double[f.num()];
    static double * biv = new double[f.num()];
    
    static bool order, collapse;
    SET
        ITJ(i,f.num())
            f[i].scale() = .5;
        
            app.gui(amt[i],"amt",-10,10)(falloff[i],"falloff",1,10);
            app.gui(period[i],"period",-10,10)(pitch[i],"pitch",-10,10)(dilate[i],"dilate",-10,10)(dir[i],"dir",-10,10)(biv[i],"biv",-10,10);
            app.gui(order,"order")(collapse,"collapse");
            falloff[i] = 1; amt[i] = .5;

            //f[i].orientYrel(0,0,-1);
        END

    END

    ITJ(i,f.num())
        app.interface.touch( f[i] );
        Draw::Y(f[i],0,0,0);
    END
    
    //static Par * par = new Par[ f.num() ]; 
    
    int iter = 20;
    UVMesh mesh(iter+1,iter+1);
    mesh.bFlipNormals = true;
    
    IT2i(iter,iter)
    
        Pnt p = Vec::x.sp( Gen::rot(-1.0 + 2*u, -1.0 + 2*v) ).null();

        
        Par tpar; Par cpar; Dll tdll;
        ITJ(k,f.num())
            double dist = ( p <= f[k].pos() )[0];
           // Par par = f[tot-i].tyScaled( amt / (dist*falloff) );
           // tpar += ( f[k].tyScaled() * amt[k] + Par(Twist::Along( f[k].dly().runit(), period[k] * PI, pitch[k] )) + Par( f[k].flat() * dilate[k] ) + Drv( f[k].y() * dir[k] ) )* 1.0 / (dist*falloff[k])  ;
            tpar += ( ( f[k].tyScaled() * amt[k] ) + Par( Biv(f[k].x() ^ f[k].z()) * biv[k] ) + Par( f[k].flat() * dilate[k] ) + Drv( f[k].y() * dir[k] ) )* 1.0 / (dist*falloff[k]) ; 
            tdll += Twist::Along( f[k].dly().runit(), period[k] * PI, pitch[k])* 1.0 / (dist*falloff[k]) ; 
            
           // mtt *= Gen::bst(par);
        END
        Bst bst = Gen::bst(tpar);  Bst bst2 = Gen::bst( tpar + tdll);  Mtt mtt2 = Gen::bst( tpar + tdll) * Gen::mot(tpar+ tdll);
        Mtt mtt = (order) ? Gen::mot(tdll) * bst : bst * Gen::mot(tdll); //genmtt(tpar);
        mesh.add( Ro::loc(  collapse ? p.sp(bst2) : p.sp(mtt2) ));//Gen::bst(tpar) ) ) );
    END END

    mesh.draw(.5,.5,.5);
    mesh.drawTri(.2,.2,.2);
    
}


void membrane(GLVApp& app){

    static Frame f;
    app.interface.touch(f);
    Draw::Y(f,0,0,0);

    static Frame f2(PT(-1,0,0));
    app.interface.touch(f2);
    Draw::Y(f2,0,0,0);

    static double amt, bendRatio, bendRatio2, iter, spread;
    
    SET
        app.gui(amt, "amt", -10,10);
        app.gui(bendRatio, "bendRatio",-10,10);
        app.gui(bendRatio2, "bendRatio2",-10,10);
        app.gui(iter,"iter",1,100);
        app.gui(spread,"spread",1,100);
        
        iter = 20;
        amt = 1;
        bendRatio = 1;
    END
    
    
    Tnv tnU = Tnv(f.y() * f.scale() * amt);
    Tnv tnU2 = Tnv(f2.y() * f2.scale() * amt);
    
    
//    Tnv tnV = Tnv(f.x() * amt);
//    Tnv tnW = Tnv(f.z() * amt);
//    Tnv tnV = Tnv(f.y() * amt * bendRatio);
    
    Rand::Seed(10);

    UVMesh mesh(iter+1,iter+1);

    IT2i(iter,iter)


        //GLOBAL (FALLOFF)
        Pnt src = Vec::x.sp( Gen::rot(-1.0 + 2*u, -1.0 + 2* v) ).null();//(Vec::x.rot( Biv::xz * Rand::Num(PI)).rot( Biv::yz * Rand::Num(PI/2.0) )).null();
        
        double dist = (src <= f.pos())[0];
        double dist2 = (src <= f2.pos())[0];
        
        //squared distance of point to frames x and z axis
        //can be found by contracting the point out of the dual line

//        double distU = (rsrc <= f.dlx()).dot()[0] * dist;
//        double distV = (rsrc <= f.dlz()).dot()[0] * dist;
//        double distW = (rsrc <= f.dly()).dot()[0] * dist;
        
//        Par py = Par( tnU * ( 1/distU + 1/distV ) ).trs(f.pos()); // y curve
//        Par px = Par( tnV * ( 1/distW + 1/distV ) ).trs(f.pos());
//        Par pz = Par( tnW * ( 1/distU + 1/distW ) ).trs(f.pos());

        Par tpar = Par( tnU * ( 1.0 / dist ) ).trs(f.pos());
        Par tpar2 = Par( tnU2 * ( 1.0 / dist2 ) ).trs(f2.pos());
        Mtt mtt = Gen::bst( tpar ) * Gen::bst(tpar2);
        Pnt np = src.sp( mtt );
        Pnt nnp = Ro::loc(np);
        
//        Pnt dp = src % tpar;
//        double diff = dp.dot()[0];
        double diff =  (src<=nnp)[0];//Ro::size(dp,true); 
//        cout << diff << endl; 
        mesh.add(nnp);
//        DRAW3(nnp,fabs(diff),.5,.5);
        
    END END

   mesh.draw(.5,.5,.5);
    mesh.drawTri(0,0,0);
}


void GLVApp :: onDraw(){
    membrane2(*this);
}

int main(int argc, const char * argv[]) {

    /* Get Current Working Directory */
    File::setdir( argv[0] );
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"CURVATURE OPERATIONS",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv.colors().back.set(0,0,0);
    
    glv << app;
        
    Application::run();

    return 0;
}