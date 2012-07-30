//
//  TestAudio.cpp
//  vsr
//
//  Created by Pablo Colapinto on 5/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "GLVInterfaceImpl.h"
#include "Gamma/Gamma.h"

//#include "vsr/tempMacros.h"



using namespace std;
//using namespace gam::gen;
using namespace vsr;

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
    
    c.draw(1,1,0);
    f1.drawX();
    f2.drawX();
    
    Par pa = f1.tx(f1.scale());
    Par pb = f2.tx(f2.scale());
    
    static Par tp; static Cir tc;
    for (int i = 0; i < iter; ++i){
        double t= 1.0 * i/iter;
        tp = Interp::linear<Par>(pa, pb, t);
        
       // ITI(j, num)
            double xt = -1.0 + 2.0 * t;
            Pnt_Pnt pp = Gen::tpar( tp * xt );
            pp[0] = Ro::siz(f1.pos() ^ f2.pos(), true ) * val;
            tc = c.sp ( pp );
            tc.draw();
       // END 
        
    END 
    

}


int main(){

    //gam::gen::Sin<> sin(400);
    
    for (int i = 0; i < 100; ++i){
 //       cout << sin() << endl; 
    }
    
    return 0;
}