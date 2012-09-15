//
//  main.cpp
//  vsr_static
//
//  Created by Pablo Colapinto on 8/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "op.h"

#include "Mtd.h"
#include "Rtc.h"

using namespace vsr;

int main (int argc, const char * argv[])
{

    Dll dll, dll2;

    dll2 = Dll(2,3,0,0,0,1);
    
    dll += Biv(1,0,0);
    dll += Drv(1,0,0);
    dll += dll2;
//    
//    cout << dll << dll2 << endl; 
//    
    Pnt p = Ro::null(2,2,2);

    Bst b = p * p;
    
    Par pp;
    
//    Sta sta;
//    cout << p % dll << endl; 
//    
//    Par pa;
//    Par pb;
//    
//    Mnk m;
//    Mtd mtd;
//    Rtc rtc;
//
 //   cout << Mtd(2) * Rtc(1) << endl; 
//    
//    Pnt_Dll pd1 = p * dll;
//    Pnt_Dll pd2 = dll * p;
//    
////    dll.test();
//    cout << dll.dual() << endl; 
//   cout << pd1 << pd2 << pd1 - pd2 << (pd1 -pd2)*.5 << p % dll << (p%dll).null() << endl; 
//      
//    cout << Point( Ro::null(12,1,1) ) << endl;   
//    
//    cout << Round::dls( 1,1,1,2.0) << Ro::dls( PT(1,1,1) )  << endl; 
      
    return 0; 
}

