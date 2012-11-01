//
//  DemoAgacse.cpp
//  vsr
//
//  Created by Pablo Colapinto on 6/28/12.
//  Playing around with Point Pair Generators
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//


#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_tests.h"

#include "vsr_draw.h"
#include "vsr_mdraw.h"
#include "vsr_mglyph.h"

#include "vsr_gl_shader.h"
#include "vsr_gl_vattrib.h"
#include "vsr_gl_vbo.h"


#include <iostream>


using namespace vsr;
using namespace glv;

void shaderTest(GLVApp& app){


    app.scene().updateMatrices();
    

        
    static int * test = new int(2);
    static int start, offset;

    static float focal;

    SET 

        app.gui(start,"start",-1,300)(offset,"offset",0,300)(focal,"focal",10,200);
        start = -1;
        focal = 60;
        
        app.camera().pos() = Ro::null(0,0,5);
        

        GL::Draw::Pipe::InitBufferObjects(); 

        static Cir c = CYZ(1);
        vector<Cir> vc;    
        int num = 10;
        for (int i = 0; i < num; ++i){
            vc.push_back( c.trs(3.0 * i/num, 0,0) );
        }
        
        GL::Draw::Pipe::Buffer( 100, GL::MGlyph::Skin( &vc[0], num, 10 ) );
    
    END
    
    app.camera().focal( PI * focal/180.0 );
    
    GL::Draw::Pipe::shaderprogram -> bind();
    
        GL::Draw::Pipe::shaderprogram -> uniform("lightPosition",-1,0,0);
        
        // TRANFORMATION MATRICES
        GL::Draw::Pipe::shaderprogram -> uniform("projection", app.scene().xf.proj);
        GL::Draw::Pipe::shaderprogram -> uniform("view", app.scene().xf.view );
        GL::Draw::Pipe::shaderprogram -> uniform("model", app.scene().xf.model );
        GL::Draw::Pipe::shaderprogram -> uniform("modelView", app.scene().xf.modelView );

        
        //DRAW
        GL::Draw::Pipe::Begin(100);
        GL::Draw::Pipe::DrawElements(100, GL::TS, start, offset);
        GL::Draw::Pipe::End(100);
        
    
    GL::Draw::Pipe::shaderprogram -> unbind();

}

void immediateTest(GLVApp& app){
    
    
    
    
    static Cir c = CXY(1);
    
//    cout << app.camera().pos();
////    cout << app.camera().rot();
//    Vec v(1,0,0);
//    Vec v2(0,0,0);
//    
//    glBegin(GL_LINES);
//        GL::vertex( v.w() );
//        GL::vertex( v2.w() );
//    glEnd();
//    

    app.interface.touch(c);
    
    DRAW(c);
}

void GLVApp :: onDraw(){

//    shaderTest(*this);
    immediateTest(*this);
}

int main(int argc, const char * argv[]) {

    cout << argv[0] << endl; 
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"KNOTS",&glv);
    GLVApp * app = new GLVApp(win); 
    app -> bImmediate = true;   
    
    glv << app;
        
    Application::run();

    return 0;
}