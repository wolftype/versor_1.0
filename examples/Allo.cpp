#include "vsr.h"
#include "vsr_op.h"
#include "vsr_draw.h"
#include "vsr_camera.h"

#include <iostream>
#include "allocore/al_Allocore.hpp"
#include "allocore/io/al_ControlNav.hpp"
#include "vsr_AlloInterfaceImpl.h"
#include "alloGLV/al_controlGLV.hpp"

#include "vsr_allovsr.h"

using std::cout;
using std::endl;

using namespace al;
using namespace vsr;


struct MyApp : public vsr::AlloApp {


    MyApp() : vsr::AlloApp() { }//add(new NavInputControl(nav)); }

    virtual void onDraw(Graphics& gl){
        
        //Model Transform
        Rot t = Gen::aa( scene().model.rot() ); 
        GL::rotate( t.w() );
        
        //A Circle in the XY plane with radius 1
        static Cir c = CXY(1);
        DRAW(c);
        interface.touch(c);
        
        //A Plane (with normal along y axis, at distance -.5 from the origin)
        static Dlp d(0,1,0,-.5);
        DRAW(d);
        interface.touch(d);
        
        //Intersection of Circle and Plane
        DRAW( (d ^ c.dual() ).dual() );
        
    }

};

MyApp app;

int main(int argc, const char * argv[]){

	cout << argv[0] << "\nHELL YEAH" << endl;
    app.create(Window::Dim(800, 600), "Allovsr Example: Circles");
	
    MainLoop::start();
    
	return 0;

}


