#define __EUC__ //must define global metric

#include "GLV/glv.h" 
#include "GLV/glv_binding.h"  

#include "gfx/gfx_gl.h"

#include "vsr/root.h" 
#include "vsr/tetra.h"

using namespace vsr;
using namespace glv; 
// using namespace gfx;    


typedef Blade1<4>::VEC Vec4;
typedef EGA<3>::Rot Rot; 
typedef EGA<3>::Biv Biv;  

//idositetrachoron 24 cell
auto D4 = rootSystem<4>( Vec4(1,0,0,0), Vec4(0,1,0,0), Vec4(0,0,1,0), ( Vec4(-1,-1,-1, 1) * .5 ) );     

template< class B >
auto nrot( const B& b) -> decltype(1+B()){ 	
	VT  c = sqrt(- ( b.wt() ) );
    VT sc = -sin(c);
    if (c != 0) sc /= c;
	return  cos(c) + (b*sc);
}


struct App : public View3D{  
	
	Rot modelView;
  
  App() : View3D(), modelView(1,0,0,0) {
	
	stretch(1,1);
	colors().back.set(.1,.3,.3);
	
  }   

  virtual void onDraw3D(GLV& glv){   
	    
	    static VT time = 0;
		modelView = Gen::rot( Biv(0,1,0) * time );
		time+=.01;
	
		gfx :: GL :: enablePreset(); 
			    
	    glMatrixMode(GL_MODELVIEW);
	    glPushMatrix();
	    glLoadIdentity();
	    gluLookAt(0, 0, 5, 0, 0, 1, 0, 1, 0);
	    
		Rot t = Gen::aa( modelView );
		gfx :: GL :: rotate( t.begin() );

		glBegin(GL_LINES);
    	for (auto i : D4 ){
			gfx::GL::vertex(0,0,0);
			gfx::GL::vertex( Proj<4>::Call(2.0, i) ); 
      	} 
		glEnd();
   
		glPopMatrix(); 
		
		 gfx :: GL :: disablePreset();  
 }     

  virtual void onKeyDown(){
	
	
 }                                                                                             
	
	
	
};
                        
App * myApp;

int main(){

	myApp = new App();
	myApp -> stretch(1,1);
	
	GLV glv(0,0);	
	//glv.colors().back.set(.3,.3,.3);
    		        
	Window * win = new Window(500,500,"Versor",&glv);    
    
	glv << *myApp;

	
	Application::run();
	
	return 0;
	
}