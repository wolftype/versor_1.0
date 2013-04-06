//
//  Scene.cpp
//  Versor
//  
//  Created by Pablo Colapinto on 2/25/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include "vsr_set.h"

#include <iostream>

using namespace vsr;



template<typename T>
class Element : public Set<T> {
    
    public:
    
    void draw(float r = 1.0, float g = 1.0, float b = 1.0, float a = 1.0 ){ 
       for (int i = 0; i < this->size(); ++i){
            DRAW4( (*this)[i], r, g, b, a ); 
        }
    }
};

Element<Pnt> pnt;
Element<Par> par;
Element<Vec> vec;
Element<Cir> cir;
Element<Dll> dll;
Element<Lin> lin;
Element<Sph> sph;
Element<Pln> pln;
Element<Dlp> dlp;

void init(GLVApp& app){

    cir.add( CXY(1) );

}

void GLVApp :: onDraw() {
    pnt.draw();
    par.draw();
    vec.draw();
    cir.draw();
    sph.draw();
    dll.draw();
    lin.draw();
    dlp.draw();
    pln.draw();
}

int main(int argc, const char * argv[]) {
     
//    File::setdir( argv[0] );       
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(1000,500,"Reflections",&glv);
    GLVApp * app = new GLVApp(win);    
    
    init(*app);
    
    glv << app;
        
    Application::run();

    return 0;
}
