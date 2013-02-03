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

using vsr::GL::Draw::Pipe;

void simpleShader(GLVApp& app){

    static Point pt = PT(1,1,1);
    app.interface.touch(pt);

    static int slab, point;
    SET
        Pipe::InitBufferObjects(); 
        slab = Pipe::Buffer( GL::MGlyph::Rect( 2, 2 ) ); //Auto Set VBO ID
        point = Pipe::Buffer( GL::MGlyph::Point(1,1,1) );
    END
    
    Vertex lightpos(pt[0],pt[1],pt[2]);
    Pipe::Update(point, &lightpos );

    Vec4f vv(0,0,1,1);
    Vec4f nv = app.scene().xf.modelViewMatrixf() * vv;

    Pipe::shaderprogram -> bind();
    
        Pipe::shaderprogram -> uniform("lightPosition", pt[0],pt[1],pt[2]);
        
        // TRANFORMATION MATRICES
        Pipe::shaderprogram -> uniform("projection", app.scene().xf.proj);
        Pipe::shaderprogram -> uniform("view", app.scene().xf.view );
        Pipe::shaderprogram -> uniform("model", app.scene().xf.model );
        Pipe::shaderprogram -> uniform("modelView", app.scene().xf.modelView );
        Pipe::shaderprogram -> uniform("normalMatrix", app.scene().xf.normal );
    
        Pipe::Begin(slab);
            Pipe::DrawArray(slab, GL::TS);
        Pipe::End(slab);   

        Pipe::Begin(point);
            Pipe::DrawArray(point, GL::P);
        Pipe::End(point);   

    Pipe::shaderprogram -> unbind();

}

void shaderTest(GLVApp& app){


    app.scene().updateMatrices();
    
//    static int * test = new int(2);
    static int start, offset;

    static float focal;

    SET 
        app.camera().pos() = Ro::null(0,0,5);

        app.gui(start,"start",-1,300)(offset,"offset",0,300)(focal,"focal",10,200);
        start = -1;
        focal = 90;

        GL::Draw::Pipe::InitBufferObjects(); 

        static Cir c = CYZ(1);
        vector<Cir> vc;    
        int num = 10;
        for (int i = 0; i < num; ++i){
            vc.push_back( c.trs(3.0 * i/num, 0,0) );
        }
        
        GL::Draw::Pipe::Buffer( GL::MGlyph::Skin( &vc[0], num, 10 ), 100 );
    
    END
    
    app.camera().focal( PI * focal/180.0 );
    
    GL::Draw::Pipe::shaderprogram -> bind();
    
        GL::Draw::Pipe::shaderprogram -> uniform("lightPosition",-1,0,0);
        
       // GL::Draw::Pipe::vatt.enable();
        
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

    static Frame f; 
    DRAW(f);

    app.interface.touch(c);

    cout << "BEFORE:\n";
    cout << app.scene().xf << endl;
    app.scene().updateMatrices();
    cout << "AFTER:\n";
    cout << app.scene().xf << endl;    
    
    DRAW(c);
}

void GLVApp :: onDraw(){
    bImmediate = false;   
 //   bImmediate = true;   

    simpleShader(*this);
//    shaderTest(*this);
//    immediateTest(*this);
}

int main(int argc, const char * argv[]) {

    cout << argv[0] << endl; 
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"KNOTS",&glv);
    GLVApp * app = new GLVApp(win); 
    
    glv << app;
        
    Application::run();

    return 0;
}