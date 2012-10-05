//
//  main.cpp
//  vsr_test
//
//  Created by Pablo Colapinto on 9/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "vsr.h"
#include "op.h"
#include "vsr_templates.h"
#include <iostream>


using namespace vsr;

int main (int argc, const char * argv[])
{

    cout << Vec::x * Vec::y << endl; 


	for (int i = 0; i < 10000; ++i){
		
		Pnt p1 = Ro::null( 1.0 * i/1000,0,0);
		Pnt p2 = Ro::null( 0, 1.0 * i/1000,0);
		
		cout << p1 * p2 << endl; 
	}

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

