//
//  vsr_mdraw.h
//  Versor
//
//  Created by Pablo Colapinto on 10/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_mdraw_h
#define Versor_vsr_mdraw_h

#include "vsr.h"
#include "vsr_gl_vattrib.h"
#include "vsr_gl_vbo.h"
#include "vsr_mesh.h"
//#include "vsr_mglyph.h"

namespace vsr{

    namespace GL{
        namespace Draw {
        
                /// BASIC GL PIPELINE: SHADER -> VBO -> ATTRIB -> DRAW
                struct Pipe {
                
                    static ShaderProgram * shaderprogram;
                    static std::map<int, DBO> vbo;//[200][2];
//                    static GLuint VBOHandle[200][2];
                    static VAttrib4 vatt;// pos, col, norm, tex;
                    
                    static Uniform LightPosition;
                    
                    static void InitBufferObjects(){
                     
                        
                        //basic shader (build into shader node structre)
                        shaderprogram = new ShaderProgram("pos.vert","col.frag");
                        shaderprogram -> bind();
                     
                        //Get Address of Shader Attributes
                        //Only Call After Shader is Bound
                        vatt.pos.set( Shader :: Current(), "position", sizeof(Vertex), 3, 0);
                        vatt.col.set( Shader :: Current(), "sourceColor", sizeof(Vertex), 4, Vertex::oc() );
                        vatt.norm.set( Shader :: Current(), "normal", sizeof(Vertex), 3, Vertex::on() );
                        vatt.tex.set( Shader :: Current(), "texCoord", sizeof(Vertex), 2, Vertex::ot() );
                     

//                        LightPosition.set( Shader :: Current(), "lightPosition");
//                        shaderprogram -> setUniformVariable(<#char *name#>, <#float value#>)

                        shaderprogram -> unbind();
                        
                        //Bind Circle Mesh Buffer Data
                        Buffer( CIR, Mesh::Circle(1) );
                        
                    }
                    
                    static void Buffer(int id, Mesh mesh){
                      //  VBO v( &mesh.vertices()[0].Pos[0], mesh.num(), mesh.num() * sizeof(Vertex), GL::VERTEXBUFFER );
                      //  VBO e( &mesh.indices()[0], mesh.numIdx(), mesh.numIdx() * sizeof(GLubyte), GL::ELEMENTBUFFER );
                        vbo[id].vertex = VBO( &mesh.vertices()[0].Pos[0], mesh.num(), mesh.num() * sizeof(Vertex), GL::VERTEXBUFFER );
                        vbo[id].index = VBO( &mesh.indices()[0], mesh.numIdx(), mesh.numIdx() * sizeof(GLuint), GL::ELEMENTBUFFER );
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
                        vbo[id].index.drawElements(mode, num, off);
                    }
                    
                    static void DrawArray(int id, GLenum mode){
                        vbo[id].vertex.drawArray(mode);
                    }
                                        
                    static void Begin(int id) { 
                        vbo[id].vertex.bind(); 
                        vbo[id].index.bind(); 
                        Enable(); Pointer(); 
                    }
                    static void End(int id) { 
                        Disable(); 
                        vbo[id].index.unbind(); 
                        vbo[id].vertex.unbind();   
                    }
                    
                };
                
                std::map<int, DBO> Pipe::vbo;
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
                
                
        }
    }//GL::
    
#define DRAWV(t) vsr::GL::Draw::VRender(t)    
#define DRAWB(t) vsr::GL::Draw::BRender(t)    
//#define DRAWV3(t,r,g,b) vsr::GL::Draw::Render(t,r,g,b)    
//#define DRAWV4(t,r,g,b,a) vsr::GL::Draw::Render(t,r,g,b,a)  
} //vsr::

#endif
