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

#include "vsr_draw.h"
#include "vsr_mdraw.h"
#include "vsr_mglyph.h"
#include "vsr_mesh.h"

#include "vsr_gl_shader.h"
#include "vsr_gl_vattrib.h"
#include "vsr_gl_vbo.h"

#include "vsr_gl_texture.h"
#include "vsr_gl_fbo.h"
#include "vsr_gl_data.h"

#include "vsr_glsl.h"
#include "vsr_file.h"
#include "vsr_field.h"

#include <iostream>
#include "vsr_tests.h"


using namespace vsr;
using namespace glv;


using namespace vsr::GLSL;
using namespace vsr::GL;
    
using vsr::GL::Draw::Pipe;

void simpleShader(GLVApp& app){

    static Point pt = PT(1,1,1);
    app.interface.touch(pt);

    static int slab, point;
    SET
        Pipe::InitBufferObjects(); 
        slab = Pipe::Buffer( Mesh::Rect( 2, 2 ) ); //Auto Set VBO ID
        point = Pipe::Buffer( Mesh::Point(1,1,1) );
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
        
        GL::Draw::Pipe::Buffer( Mesh::Skin( &vc[0], num, 10 ), 100 );
    
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

    static Frame f; 
    DRAW(f);

    app.interface.touch(c);

    DRAW(c);


//    cout << "BEFORE:\n";
//    cout << app.scene().xf << endl;
//    app.scene().updateMatrices();
//    cout << "AFTER:\n";
//    cout << app.scene().xf << endl;    
    

}


//texture slab sent through shader with vertex attribute array, etc.
void texture(GLVApp & app){

    using namespace GLSL;

    
    static ShaderProgram program;
    static string Vert = AVertex + Varying + MVert;
    static string Frag = USampler + Varying + MFrag;

    static Texture texture(64, 64);
    static unsigned char * data;
    
    static MBO mesh( Mesh::Rect(3.0,2.0) );
    
     SET
        
        program.source(Vert,Frag);
        program.bind();
        
            Pipe::BindAttributes();
        
        program.unbind();
        
        data = new unsigned char[ texture.dataSize() ];
        
        for (int i = 0; i < texture.width(); ++i){
            for (int j = 0; j < texture.height(); ++j){
                double tu = 1.0 * i/texture.width();
                double tv = 1.0 * j/texture.height();
                
                int idx = i * texture.height() * texture.numChannels() + j * texture.numChannels();
                
                data[ idx ] = tu * 255;                 //red channel
                data[ idx +1 ] = 0;                     // green channel
                data[ idx +2] = tv * 255;               // blue channel
                data[idx+3] = ( (i + j) & 1 ) ? 255 : 0; //alpha channel
            }
        }
    
        texture.data(data);
        texture.print();
                

    END
    
    texture.update();
    
    program.enable();
    program.bind();
    
    texture.enable();
    texture.bind();
    
    Pipe::Line( mesh );
    
    texture.unbind();
    texture.disable();
    
    program.unbind();
    program.disable();

}

//render to texture and then draw texture to screen 
void render2texture(GLVApp& app){

    using namespace GLSL;
    
    static ShaderProgram program;
    static string Vert = AVertex + VColor + VTex + MVert;
    static string Frag = USampler + VColor + VTex + MFrag;

    static FBO fbo;
    static Texture texture(16, 16);
    static MBO mesh( Mesh::Rect(2.0,2.0) );
    
    SET
       
        //compile shader and set up vertex attributes array
        program.source(Vert,Frag);
        program.bind();
        
            Pipe::BindAttributes();
        
        program.unbind();
                
        //attach Texture to Framebuffer's color attachment
        fbo.attach(texture, GL::COLOR);
        fbo.attach( RBO(16,16, GL::DEPTHCOMP), GL::DEPTH);
    END
    
    //STEP 1: RENDER TO TEXTURE
    glPushAttrib(GL_ALL_ATTRIB_BITS);

        //// Bind Framebuffer ////
//        fbo.attach(texture, GL::COLOR);
        fbo.bind();
        glViewport(0,0,16,16);
        //// Set Drawbuffer to Framebuffer attachment /////
        glDrawBuffer(GL_COLOR_ATTACHMENT0);

        ////CLEAR INFO ///
        GL::clearColor();
        GL::clear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

        //// Draw Scene ////
        glColor3f(1,1,1);
        GL::Glyph::Circle();
        
        fbo.unbind();
//    
    glPopAttrib();
    

    //STEP 2: RENDER TO SCREEN BY BINDING TEXTURE
    
    program.bind();

    texture.enable();
    texture.bind();
    
    Pipe::Line( mesh );
    
    texture.unbind();
    texture.disable();
    
    program.unbind();
    
}


//RENDER ALL GLYPHS USING gles 2.0 standards (not immediate mode)
void meshes(GLVApp& app){
    

    static ShaderProgram program;
    static string Vert = AVertex + Varying + UMatrix  + NTransform + VLighting + VCalc + MVert;
    static string Frag = USampler + Varying + MFrag;
    
    SET
        program.source(Vert,Frag);
        program.bind();
            Pipe::BindAttributes();
        program.unbind();
        
    END
        
    
    static MBO circle ( Mesh::Circle() );
    static MBO line ( Mesh::Line( Vec::x * 2, Vec::y ) );
    static MBO dir ( Mesh::Dir() );
    static MBO grid ( Mesh::Grid() );
    static MBO cyl ( Mesh::Cylinder(1,2) );
    static MBO sphere ( Mesh::Sphere() );
    static MBO disc ( Mesh::Disc() );
    
    
    
    static Circle cir = CXY(1);
    TOUCH(cir);
    
    Mat4f mat = app.scene().xf.modelViewMatrixf() * Draw::Mat(cir);
    float mf[16];
    mat.fill(mf);
    
    program.bind();
        
        program.uniform("modelView", mf );//app.scene().xf.modelView);
        program.uniform("projection", app.scene().xf.proj);
        program.uniform("normalMatrix", app.scene().xf.normal);
        program.uniform("lightPosition", 0.0, 0.0, 1.0);
        
        Pipe::Line( circle );
        
    program.unbind();
}



void GLVApp :: onDraw(){
  //  bImmediate = false;   
    bImmediate = false;   
    
    
    
 //   render2texture(*this);
    meshes(*this);
  //  simpleShader(*this);
}

int main(int argc, const char * argv[]) {

    cout << argv[0] << endl; 
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"Graphics Test",&glv);
    GLVApp * app = new GLVApp(win); 
    
    glv << app;
        
    Application::run();

    return 0;
}