//
//  main.cpp
//  vsr_static
//
//  Created by Pablo Colapinto on 8/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr_op.h"

using namespace vsr;

int main (int argc, const char * argv[])
{

    
   // cout << Vec(1,0,0).rot( Biv(1,0,0) ) << endl; 
   
   Pnt p1 = PT(1,0,0);
   Pnt p2 = PT(1,1,0);
   Pnt p3 = PT(1,-1,0);
   Pnt p4 = PT(1,-1,1);
   
//   Par par = p1 ^ p2;
//   Cir cir = p1 ^ p2 ^ p3;
//   Sph sph = cir ^ p4;
//
//   MVBase * m1 = &p1;
//   MVBase * m2 = &p3;
    
    Dll dll(1,1,1,1,1,1);
    double  c = ( sqrt( fabs ( Biv(dll).wt() ) ) );
    double sc = sin(c);
    double cc = cos(c);

    Dll b = dll;
    Biv B(b[0],b[1],b[2]); //Biv B(dll);
    B = B.unit();
    Vec t(b[3],b[4],b[5]);
    
    Vec tv = Op::pj(t,B) ;
    Vec tw = Op::rj(t,B) ;
    
    tv *= Math::sinc(c);
    
    Vec tt =  ( B.wt() == 0 ) ? t : tw * cc + tv;
//
    Vec_Biv ts(1,1,1,1);// = B*tw;	
    Mot mot;	
    mot[0] = cc;
    mot[1] = B[0]*sc;
    mot[2] = B[1]*sc;
    mot[3] = B[2]*sc;	
    mot[4] = tt[0];
    mot[5] = tt[1];
    mot[6] = tt[2];
    mot[7] = ts[3] * sc;

    Dll dll_list[1000];
    
    Rot r(1,1,1,1);
    Trs trs (1,2,2,2);
    
    cout << DLN(0,1,0) << endl; 
    
    return 0; 
}

