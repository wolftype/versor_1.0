//
//  TestShader.cpp
//  vsr
//
//  Created by Pablo Colapinto on 4/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "vsr_gl_shader.h"
#include "GLVInterfaceImpl.h"
#include "xRoutines.h"

#include "Lattice.h"
#include "scratch.h"
#include "Mesh.h"

using namespace glv;
using namespace vsr;

Window * win;
GLVApp * app;

ShaderProgram * shader;
Mesh * mesh;

    
void tester(){
    Trv  t = Gen::trv(Vec(1,0,0));
    
    State s = Op::sp0(t, Gen::trs3(1, 5, 6));
    
//    cout << t << s << endl;
    
    Tnv tnv(1,0,0);
    
    State s2 = Op::sp0(tnv, Gen::trs3(1, 5, 6) );
    
    State s3 = (PT(1,0,0)) * (PT(1,0,3));
//    cout 
    cout << s << s2 << endl; 
    
    cout << s3 << endl; 
    
    State s4 = Rot() * Trs() * Trv() * Dil();
    
    cout << "all " << s4 <<  endl; 
    
    
}

void meshwarp(GLVApp& app){
    //tester();
    
    static Drv v(1,0,0); 
    static Pnt p = Ro::dls3(-1, 0, 0, .3); 
    
    static Cir c;
    
    static float amt;
    
    SET    
        shader = new ShaderProgram("surfacebend");
        app.gui.add(DIALER, "amt", amt, -10,10);    
    END 
    
    Tnv tnv(v[0], v[1], v[2]);
    Par par = Op::sp0( tnv, Gen::trs3(p[0],p[1],p[2]) );
    Pnt_Pnt pp = Gen::tpar(par);
    
    ITJ(i,50)
    float rad = 2 * PI * i / 50;
    Vec2<> t (cos(rad), sin(rad));
    //t *= radius;
    Pnt tp = Ro::null(t.x, t.y, 0);
    Pnt p2 = Ro::null_cen( tp.sp( pp ) ); 
    Glyph::Point( Vec3<>(p2[0], p2[1], p2[2]) );
    
    //Glyph::Point( Vec3<>(2,0,0) );
    
    //p2.draw(0,1,1);
    END
    
    v.draw(); p.draw();
    app.interface.touch(v);
    app.interface.touch(p);
    
    //Create Boost Spinor from Tnv and Pos uniforms
    Test::Tnv ttnv = Test::Tnv( v[0], v[1], v[2]);//.x, utnv.y, utnv.z );
    Test::Trs trs = Test::Trs( 1.0, p[0] * -.5, p[1] * -.5, p[2] * -.5); //Translator
    Test::Par par2 = Test::sp( ttnv, trs );
    Test::Pnt_Pnt pntpnt =  Test::pp(par2);
    
    ITJ(i,100)
        float rad = 2 * PI * i / 100;
        Vec2<> t (cos(rad), sin(rad));
        
        //Convert vertex to CGA point
        Test::Pnt p = Test::null( Vec3<>(t.x, t.y, 0) );
        Test::Pnt pnt = Test::sp( p, pntpnt );  //Transform CGA Point
        Glyph::Point( euc( Test::cen(pnt) ) );
    END 
    
    GLfloat x = v[0] * amt;
    GLfloat y = v[1] * amt;
    GLfloat z = v[2] * amt;
    GLfloat px = p[0];
    GLfloat py = p[1];
    GLfloat pz = p[2];
    
    shader -> begin();
    shader -> uniform("utnv",x, y, z);
    shader -> uniform("upos",px,py,pz);
    
    mesh -> draw();
    
    shader -> end();
}

void fragtest(GLVApp& app){

   // cout << ( PT(0,0,0) ^ Drv(0,0,1) ) << endl; 
    
    static Drv v(1,0,0); 
    static Pnt p = Ro::dls3(0, 0, 0, .3); 
    
    static float amt;
    static float period, pitch;
    SET    
    app.gui.add(DIALER, "amt", amt, -10,10);    
    app.gui.add(DIALER, "period", period, 0,10.0);    
    app.gui.add(DIALER, "pitch", pitch, 0,10.0);    
    END 
 
    app.interface.touch(v);
    app.interface.touch(p);
    v.draw(); p.draw();

    Pnt eye = app.camera().pos();
    Vec dir = app.camera().forward();
    
    static Vec3f n[4] = {
        Vec3f(0,1,1), Vec3f(1,0,0), Vec3f(1,0,1), Vec3f(1,1,0)
    };
    
    //vector<Vec> v GL::frustrum(app.width(), app.height(), app.camera() );
    
    Vec bl = GL::unproject(0,0,0.0, app.camera());
    Vec blb = GL::unproject(0,0,1.0, app.camera());
    Vec tr = GL::unproject( app.width(), app.height(), 0.0, app.camera() );    
    Vec trb = GL::unproject( app.width(), app.height(), 1.0, app.camera() );        
    Vec br = GL::unproject(app.width(),0,0.0, app.camera());
    Vec brb = GL::unproject(app.width(),0,1.0, app.camera());
    Vec tl = GL::unproject( 0, app.height(), 0.0, app.camera() );    
    Vec tlb = GL::unproject( 0, app.height(), 1.0, app.camera() );        
    
    
    Vec blu = (blb - bl).unit();
    Vec tru = (trb - tr).unit();
    Vec bru = (brb - br).unit();
    Vec tlu = (tlb - tl).unit();
    
    
    blu.draw(); tru.draw(); tlu.draw(); bru.draw();
    
//    Lin bll = eye ^ Drv(blu) ^ Inf(1);
//    Lin brl = eye ^ Drv(bru) ^ Inf(1);
//    Lin tll = eye ^ Drv(tlu) ^ Inf(1);
//    Lin trl = eye ^ Drv(tru) ^ Inf(1);
//    
//    brl.draw(0,1,0); bll.draw(0,1,0); tll.draw(0,1,0); trl.draw(0,1,0);

    
    
    
    shader -> begin();
//    shader -> uniform("utnv",v[0] * amt, v[1]* amt, v[2]* amt);
//    shader -> uniform("upos",p[0],p[1],p[2]);  
        
    shader -> uniform("eye",eye[0], eye[1], eye[2]);
//    shader -> uniform("dir",dir[0],dir[1],dir[2]);
    shader -> uniform("screen", app.width(), app.height() ); 
//    shader -> attribute("normal",0,0,1);
    

    
    Vec rat = GL::ratio(app.width(), app.height(), app.camera() );
    
   // shader -> uniform ("ratio", rat[0], rat[1]);
    

    shader -> uniform ("bottomLeft", blu[0], blu[1], blu[2]);
    shader -> uniform ("topRight", tru[0], tru[1], tru[2]);
    shader -> uniform ("bottomRight", bru[0], bru[1], bru[2]);
    shader -> uniform ("topLeft", tlu[0], tlu[1], tlu[2]);

    shader -> uniform("pitch", pitch);
    shader -> uniform("period", period);
    
    
        glBegin(GL_QUADS);
            
            glColor3f(1,0,0);
        
            glVertex3f(-1,1,0);
            glVertex3f(1,1,0);
            glVertex3f(1,-1,0);
            glVertex3f(-1,-1,0);

        glEnd();
        
    shader -> end();
}


void surface(GLVApp& app){

//    static float v[16];  
    static float amt;
    SET
       shader = new ShaderProgram("surfacebend");
    app.gui.add(DIALER, "amt", amt, -10,10);
    END
    
    
    static Lattice<Vec> f(2,2,1,2);

    f.draw(); 
    
    ITJ(i,4)
        app.interface.touch( f[i] );
    END
    
    // GET Frustrum Info
    //Frustrum frust = app.camera().frustrum();
    
    shader -> begin();
    
        ITJ(i,4)
            
            //f[i] = Op::sp( Tnv( frust.dir[i] ), Gen::trs( f.grid(i) ) ); 
    
            Par p = Op::sp( Tnv( f[i] ), Gen::trs( f.grid(i) ) );
    
            string ts = Str::cat("par",i) + ".biv";
            shader -> uniform( ts.c_str(), p[0], p[1], p[2] );
            ts = Str::cat("par",i) + ".tnv";
            shader -> uniform( ts.c_str(), p[3], p[4], p[5] );
            ts = Str::cat("par",i) + ".drv";
            shader -> uniform( ts.c_str(), p[6], p[7], p[8] );
            ts = Str::cat("par",i) + ".mnk";
            float tf = f[i][8];
            shader -> uniform( ts.c_str(), tf);
            
        END
    
    shader -> uniform("amt", amt);
    
    Pnt corn = f.grid(0);
    shader -> uniform( "corner", corn[0], corn[1], corn[2] );
    shader -> uniform("dim", f.tw(), f.th() );
    
    Glyph::Circle();
     
    shader -> end();
}

void GLVApp :: onDraw(){
    
//    fragtest(*this);
    
//    surface(*this);
    meshwarp(*this);
}


int main(int argc, char * const argv[]) {
    
    using namespace vsr;
    /* Get Current Working Directory */
    vsr::File::setdir( argv[0] );
    
    /* Bind CGA Framework */
	CongaTypes::BindAll();
    
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);		
	win = new Window(500,500,"VSR",&glv);    
    app = new GLVApp(win);    
    glv << app;
        
    //mesh = new Mesh("Bunny.obj");
    
    Application::run();
    
    return 0;
}