//
//  main.cpp
//  vsr_static
//
//  Created by Pablo Colapinto on 8/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"

int main (int argc, const char * argv[])
{

    using namespace vsr;
    Vec v1(0,2,1);
    Rot r1 (1,1,0,1);
    
    Biv b (v1);
    Biv b2 (r1);
    
    Dll dll (0,1,1,0,2,2);
    
    Drb drb (1,1,1);
    Sta sta;
    
    
    Mot mot(dll);
    Pnt pnt(0,0,0,1,-.5);
    
    
    // insert code here...
    std::cout << (drb<=sta) << v1 << r1 << b << b2 << dll * b << (  sp(v1, r1) ) << sp(pnt, mot);
    return 0;
}

