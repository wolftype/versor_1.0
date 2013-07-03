//
//  xRoots.cpp
//  Versor
//
//  Created by Pablo Colapinto on 6/19/13.
//  Copyright (c) 2013 WOLFTYPE. All rights reserved.
//

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include <iostream>
#include <stdio.h>
#include "vsr_tests.h"

using namespace vsr;
using namespace glv;


void rootSystem(GLVApp& app){   
	
	static Vector root[3] = { Vec::x - Vec::y, Vec::y - Vec::z, Vec::y + Vec::z }; 
	 
	DRAW3(root[0],1,0,0);
    DRAW3(root[1],0,1,0);
 	DRAW3(root[2],0,0,1);
 
	vector<Vector> results;
	
	for ( int i = 0; i < 3; ++i ){
		results.push_back( root[i] );
	}
	
	for (int i = 0; i < 3; ++i){
	   	for (int j = 0; j < 3; ++j){

			Vec nr = -!root[j] * root[i] * root[j];
			 
			bool exists = 0;
			for ( int k; k < results.size(); ++k){
				exists = ( nr == results[k] ); 
				if (exists) break;
			}   
			
			if (!exists) results.push_back( nr ); 
			 
		} 
	}   
	
	bool keepGoing = true; 
//	
    while (keepGoing){   
  //  for ( int ii = 0; ii < 3; ++ii){
		for (int i = 0; i < 3; ++i){
		
            int cs = results.size();
			for (int j = 0; j < cs; ++j ){
			 
				bool done = 1;
			    Vec nr = -!root[i] * results[j] * root[i]; 
	                
                bool exists = 0; 
				for ( int k = 0; k < cs; ++k){
					exists = ( nr == results[k] );
					if (exists) break;
				}
				
				if (!exists)  {
					results.push_back( nr );
					done = 0; 
				}   
			
				if (done) keepGoing = false; 
			}
		}  
   }   
   
   for (int i = 0; i < results.size(); ++i){
   // cout << results[i] << endl; 
    DRAW( results[i] );
   }
//	
//	
//	for ( int i = 0; i  < results.size(); ++i){
//		DRAW( results[i] );
//	}
}

void GLVApp :: onDraw(){

  //  myFunc(*this);
	rootSystem(*this);
   // text("Use the G, R, keys to Grab and Rotate the Right Frame.  Q to let go.",50,50);
}

int main(int argc, const char * argv[]) {
              
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"VSR",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}