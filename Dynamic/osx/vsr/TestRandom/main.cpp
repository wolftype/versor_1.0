//
//  main.cpp
//  TestRandom
//
//  Created by Pablo Colapinto on 9/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "vsr.h"

    
    using namespace vsr;
    using namespace std;

int main (int argc, const char * argv[])
{
    /* Bind CGA Framework */
	CongaTypes::BindAll();
    
    // insert code here...
    std::cout << "Hello, World!\n";
  
    

    
    Dll dll(0,1,0,1,1,1);
    Dll dlls = dll;
    
    cout << Biv(dll) << endl; 

    cout << DLN(0,1,0) << endl; 
    
      return 0;
}

