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

    
    cout << ( DLN(1,0,0)) << endl; 
    cout << DLN(1,0,0).re( Vec(1,0,0) ) << endl; 
    cout << DLN(1,0,0).sp( Gen::rot( Biv(1,0,0) ) ) << endl; 
    
   // cout << Vec(1,0,0).rot( Biv(1,0,0) ) << endl; 
   
   Pnt p1 = PT(1,0,0);
   Pnt p2 = PT(1,1,0);
   Pnt p3 = PT(1,-1,0);
   Pnt p4 = PT(1,-1,1);
   
   Par par = p1 ^ p2;
   Cir cir = p1 ^ p2 ^ p3;
   Sph sph = cir ^ p4;
  
   cout << (Inf(1) <= p1) << (Inf(1) <= par) << (Inf(1) <= cir) << (Inf(1) <= sph ) <<endl;  
//   cout << Ro::cen(p1) << Ro::cen(par) << Ro::cen(cir) << Ro::cen(sph) << endl; 
    
    return 0; 
}

