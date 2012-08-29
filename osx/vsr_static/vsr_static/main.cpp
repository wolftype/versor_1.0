//
//  main.cpp
//  vsr_static
//
//  Created by Pablo Colapinto on 8/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "vsr_op.h"

int main (int argc, const char * argv[])
{

    using namespace vsr;

    Flp flp();
    
    Cir c = Vec(1,1,1).null() ^ Vec(2,0,0).null() ^ Vec(3,1,1).null();
    
    Vec va[1000];
    
    for (int i = 0; i < 1000; ++i){
        double t = 1.0 * i/1000;
        va[i] = Vec(1,0,0).rot( (Biv(t,0,0)));
        
        cout << va[i] << endl; 
    }
    
    cout << c << c.involution() << endl;
    
//    Rot rot = Op::gptest(Vec(1,0,1), Vec(2,2,0) );

//    cout << rot << endl; 
    return 0; 
}

