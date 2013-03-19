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

#include "vsr_gl_texture.h"
#include "vsr_gl_fbo.h"
#include "vsr_gl_data.h"

#include "vsr_glsl.h"
#include "vsr_file.h"
#include "vsr_field.h"

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
    static string Vert = AVertex + VColor + VTex + MVert;
    static string Frag = USampler + VColor + VTex + MFrag;

    static Texture texture(64, 64);
    static unsigned char * data;
    
    static GL::MBO mesh( GL::MGlyph::Rect(3.0,2.0) );
    
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
    static GL::MBO mesh( GL::MGlyph::Rect(2.0,2.0) );
    
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


void drawScene(GLVApp& app){
   
    static Field<Cir> f(10,10,10);
    
    SET
        ITJ(i,f.num())
            double t = 1.0 * i/f.num();
            f[i] = CXY(1).rot(Biv::xz*t).trs( f.grid(i) );
        END
   
    END
    
//    static Par par = PAIR(0,1,0).trs(1,0,0);
//    DRAWANDTOUCH(par);

    //CUBE MAP SANITY CHECK!
    double t = 3;
    //X Direction Facing a Sphere
    DRAW( Ro::dls(t,0.0,0.0) );
    //NX Direction Facing a Circle
    DRAW( CYZ(1).trs(-t,0,0) );
    //Y Direction Facing A Small Red Circle
    DRAW3( CXZ(.3).trs(0,t,0), 1,0,0 );
    //NY Direction Facing A Pair of Green Points 
    DRAW3( PAIR(1,0,0).trs(0,-t,0), 0,1,0 );
    //Z Direction an Arrow Pointing to WORLD SPACE -X, Y (tricky one . . .)
    GL::push(); GL::translate(0.,0.,t); DRAW( Vec(-1,1,0) ) ; GL::pop();
    //NZ Direction a Plane
    DRAW( Dlp(0,0,1,0).trs(0,0,-t) );
    
}

void displayCubemapTexture(const Texture& tex){
    
    using namespace GLSL;
    
    static ShaderProgram program;
    
    static string Vert = AVertex + VColor + VTex + MVert;
    
    static string Frag = USampler + VColor + VTex + MFrag;

    static GL::MBO mesh( GL::MGlyph::Rect(2.0,2.0) );
    
    //a 2D texture with vector values
    static Texture pixelmap;
     
    SET
       
        //compile shader and set up vertex attributes array
        program.source(Vert,Frag);
        program.bind();
        
            Pipe::BindAttributes();
        
        program.unbind();
    
    END
    
    
    program.bind();    
    program.uniform( );
    //switch back to other func
    tex.enable();
    tex.bind();

    Pipe::Line( mesh );    

    tex.unbind();
    tex.disable();

    program.unbind();

}

//render to cubemap and bind it
void render2cubemap(GLVApp& app){

    //A Framebuffer To Bind
    static FBO fbo;
    // A cubemap texture to fill
    static Texture cmTexture( 256, 256, 1, GL::CUBEMAP );
    
    //Bind cubemap to fbo once
    SET
        fbo.attachCubeMap(cmTexture, GL::COLOR);
    END

    //Render Each Face To a Different Texture of the CubeMap
    Vec dir;
    for (int cubeface = 0; cubeface < 6; ++cubeface){
    
        switch( cubeface ){
            case 0:
                dir = Vec(1,0,0);
                break;
            case 1:
                dir = Vec(-1,0,0);
                break;
            case 2:
                dir = Vec(0,1,0);
                break;
            case 3:
                dir = Vec(0,-1,0);
                break;        
            case 4:
                dir = Vec(0,0,-1);
                break;
            case 5:
                dir = Vec(0,0,1);
                break;        
            }
                    
        app.scene().push3D();
        
            app.camera().lookAt(dir);

            glPushAttrib(GL_ALL_ATTRIB_BITS);
        
                fbo.bind();
                
                    //Viewport Size of Texture
                    glViewport( 0, 0, cmTexture.width(), cmTexture.height() );
                    
                    //SPECIFY COLOR BUFFER
                    glDrawBuffer(GL_COLOR_ATTACHMENT0 + cubeface);
                    
                    //Attach Texture to Framebuffer (again??)
                                    
                    ////CLEAR INFO ///
                    GL::clearColor();
                    GL::clear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

                    //DRAWSCENE
                    drawScene(app);
                
                fbo.unbind();

            glPopAttrib();
        
        app.scene().pop3D();

    }
    
//    cmTexture.enable();
//    cmTexture.bind();
    
        displayCubemapTexture(cmTexture);
    
//    cmTexture.unbind();
//    cmTexture.disable();

}




void GLVApp :: onDraw(){
  //  bImmediate = false;   
    bImmediate = true;   

//    simpleShader(*this);
//    shaderTest(*this);
 //   immediateTest(*this);
 
 //   texture(*this);
//     render2texture(*this);
 //       render2cubemap(*this);
   render2cubemap(*this);     
}

int main(int argc, const char * argv[]) {

    cout << argv[0] << endl; 
        
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(256,256,"KNOTS",&glv);
    GLVApp * app = new GLVApp(win); 
    
    glv << app;
        
    Application::run();

    return 0;
}