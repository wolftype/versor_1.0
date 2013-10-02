//
//  vsr_mdraw.h
//  Versor
//  
/*
    QUICK AND DIRTY HELPER CLASS
*/
//  Created by Pablo Colapinto on 10/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_mdraw_h
#define Versor_vsr_mdraw_h

#include "vsr.h"
#include "vsr_gl_vattrib.h"
#include "vsr_gl_vbo.h"
#include "vsr_mesh.h"
#include "vsr_gl_data.h"
#include "vsr_xf.h"

namespace vsr{

    namespace GL{
        namespace Draw {
        
                /// BASIC AND LOOSE GL PIPELINE: SHADER -> VBO -> ATTRIB -> DRAW
                struct Pipe {
                
                    static int mIdx; ///< MBO counter
                    
//                    static std::map<int, VEBO> vbo;
                    static std::map<int, MBO> mbo;

                    static ShaderProgram * shaderprogram;
                    static Uniform LightPosition;

                    //Position, Color, Normal, TexCoord
                    static VAttrib4 vatt;
                                        
                    //Get Address of Shader Attributes
                    //Only Call After Shader is Bound
                    //Change to BindDefaultAttributes and Keep Pipe Metaphor!
                    static void BindAttributes(){
                        vatt.pos.set( Shader :: Current(), "position", sizeof(Vertex), 3, 0);
                        vatt.norm.set( Shader :: Current(), "normal", sizeof(Vertex), 3, Vertex::on() );
                        vatt.col.set( Shader :: Current(), "sourceColor", sizeof(Vertex), 4, Vertex::oc() );
                        vatt.tex.set( Shader :: Current(), "texCoord", sizeof(Vertex), 2, Vertex::ot() );
                    }
                    
                    static void InitBufferObjects(){                      
                        
                        shaderprogram -> bind();
                        BindAttributes();

//                        LightPosition.set( Shader :: Current(), "lightPosition");
  //                      shaderprogram -> unbind();
                        
                        //Bind All Mesh Buffer Data GLYPHS
                       // Buffer( Mesh::Circle(1), CIR );
                        //...Buffer( Mesh::Arrow(1), Vec ); 
                    }
                                        
                    static int Buffer(Mesh mesh, int id = -1){
                        mIdx += 1;
                        int tmp = (id == -1) ? mIdx : id; //auto or use ENUM code
                        mbo[tmp].vertex = VBO( &mesh.vertices()[0].Pos[0], mesh.num(), mesh.num() * sizeof(Vertex), GL::VERTEXBUFFER );
                        mbo[tmp].index = VBO( &mesh.indices()[0], mesh.numIdx(), mesh.numIdx() * sizeof(GLuint), GL::ELEMENTBUFFER );
                        return tmp;
                    }
                    
                    static int Update(int id, Vertex * val){
                        mbo[id].vertex.update(val);
                    }
                    
                    static void Pointer(){
                        vatt.pointer();
                    }
                    
                    static void Enable(){
                        vatt.enable();
                    }
                    
                    static void Disable(){
                        vatt.disable();
                    }
                    
                    static void DrawElements(int id, GLenum mode, int num = -1, int off = 0){
                        mbo[id].index.drawElements(mode, num, off);
                    }
                    
                    static void DrawArray(int id, GLenum mode){
                        mbo[id].vertex.drawArray(mode);
                    }
                                        
                    static void Begin(int id) { 
                        mbo[id].vertex.bind(); 
                        mbo[id].index.bind(); 
                        Enable(); Pointer(); 
                    }
                    static void End(int id) { 
                        Disable(); 
                        mbo[id].index.unbind(); 
                        mbo[id].vertex.unbind();   
                    }

                    static void Begin(GL::MBO& m) { 
                        m.bind(); 
                        Enable(); Pointer(); 
                    }
                    static void End(GL::MBO& m) { 
                        Disable(); 
                        m.unbind();   
                    }
                    
                    static void Line( GL::MBO& m ) {
                        m.bind();
                        Enable(); 
                        Pointer();
                        m.drawElements();
                        Disable();
                        m.unbind();
                    }
                    
//                    static void BeginArray( GL::MBO& m){
//                        m.bind();
//                        Enable(); 
//                        Pointer();
//                    }
                };
                
                //DECLARE                 
                int Pipe::mIdx;
                std::map<int, MBO> Pipe::mbo;
                VAttrib4 Pipe::vatt;
                ShaderProgram * Pipe::shaderprogram;
                Uniform Pipe::LightPosition;

                
                template< class A > void Array( const A& );
                template<> void Array( const Vec& ){ }
                template<> void Array( const Drv& );
                template<> void Array( const Biv& );
                template<> void Array( const Pnt& );
                template<> void Array( const Par& );
                template<> void Array( const Cir& c) { 
                    static Mesh * cir = new Mesh( Mesh::Circle() );
                    GL::translate( Pos(c).w() );
                    GL::rotate( AA(c).w() );
                    GL::scale( Ro::rad(c) );
//                    VArray :: DrawElements( cir );
                }

//                template<> void Array( const Sph& ); 
//                template<> void Array( const Pln& );
//                template<> void Array( const Dlp& );
//                template<> void Array( const Lin& );
//                template<> void Array( const Dll& );
//                template<> void Array( const Tnv& );
//                template<> void Array( const Tnb& );
//                template<> void Array( const Flp& );
//                template<> void Array( const Frame& );
//                
//                
                
                //Bind to Shader
                template< class A > void InitBuffer( const A& );
                template< class A > void Buffer( const A& );
                template<> void Buffer( const Vec& ){ }
                template<> void Buffer( const Drv& );
                template<> void Buffer( const Biv& );
                template<> void Buffer( const Pnt& );
                template<> void Buffer( const Par& );


                
                template<> void InitBuffer( const Cir& c) { 
                    
                    
                    
                }
                template<> void Buffer( const Cir& c) { 

//                    VBO& vvbo = Pipe::vbo[CIR].vertex;    
//                    VBO& evbo = Pipe::vbo[CIR].index;    
//                    
//                    vvbo.bind();
//                    evbo.bind();
//
//                        Pipe::enable();
//                        Pipe::pointer();
                        Pipe::Begin(CIR);
                    
                        GL::translate( Pos(c).w() );
                        GL::rotate( AA(c).w() );
                        GL::scale( Ro::rad(c) );

                        Pipe::DrawElements(CIR, GL::TS);
                        //evbo.drawElements(GL::TS);

                        Pipe::End(CIR);

//                        Pipe::disable();
//                    vvbo.unbind();
//                    evbo.unbind();
                    
                }
                
                template<class A> void RenderES ( const A& a, ShaderProgram& program ) {
                    
                }
                template<class A> void RenderES ( const A * a, int num, const Mat4f& mvm, ShaderProgram& program ) {
                    
                }

                template<> void RenderES ( const Cir& cir, ShaderProgram& program ){
                    
                    static MBO circle ( Mesh::Circle(.5) );
                    static float mf[16];
                    
                    Mat4f mat = Xf::mat(cir);
                    mat.fill(mf);
                    program.uniform("submodel", mf );    

                    Pipe::Line( circle );
                 
                }


                template<> void RenderES ( const Cir * fcir, int num, const Mat4f& mvm, ShaderProgram& program ){
                    
                    static MBO circle ( Mesh::Circle(.5) );
                    static float mf[16];
                    
                    Pipe::Begin( circle );
                    
                    for (int i = 0; i < num; ++i){
                    
                        Mat4f mat = mvm * Xf::mat(fcir[i]);
                        mat.fill(mf);
//                        program.uniform("submodel", mf );    
                        program.uniform("modelViewProjection", mf);
                        circle.drawElements();
                        
                    }
                    
                    Pipe::End( circle );
                 
                }

                //BUFFER RENDER
                template< class A > void BRender( const A& a){
                    glPushMatrix();	
                    Pipe::shaderprogram -> bind();
                        Buffer(a);
                    Pipe::shaderprogram -> end();
                    glPopMatrix();                    
                }


                template< class A > void VRender( const A& a){
                    glPushMatrix();	
                        Draw :: Array(a);
                    glPopMatrix();                    
                }
                
                
        } //DRAW::
    }//GL::
    
#define DRAWES(t) vsr::GL::Draw::RenderES(t)    
#define DRAWV(t) vsr::GL::Draw::VRender(t)    
#define DRAWB(t) vsr::GL::Draw::BRender(t)    
//#define DRAWV3(t,r,g,b) vsr::GL::Draw::Render(t,r,g,b)    
//#define DRAWV4(t,r,g,b,a) vsr::GL::Draw::Render(t,r,g,b,a)  
} //vsr::

#endif
