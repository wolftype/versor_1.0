//
//  ctl_pipe.h
//  ctl
//  
/*
    GL ES 2.0 HELPER CLASS
*/
//  Created by Pablo Colapinto on 10/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef gfx_pipe_h
#define gfx_pipe_h

#include "gfx_vattrib.h"
#include "gfx_vbo.h"
#include "gfx_mbo.h"
#include "gfx_shader.h" 

#include "gfx_xfmatrix.h"

namespace gfx{

        
                /// BASIC GL ES PIPELINE: SHADER -> VBO -> ATTRIB -> DRAW
                struct Pipe {
                    
					enum {
					    POS = 1,
					   	NORM = 1 << 1,
						COL = 1 << 2,
						TEX = 1 << 3
					};     
					
					int attributeFlag;

                    static int mIdx; ///< MBO counter
                    static std::map<int, MBO> mbo;
                   
					Pipe(){}

					Pipe(std::string v, std::string f) {
						program = new ShaderProgram(v,f, 0); /// <-- pass in vertex and fragment source code
					}

                    ShaderProgram * program;
                    Uniform LightPosition;   

                    //Position, Color, Normal, TexCoord
                    VAttrib4 vatt;
                                        
                    //Get Address of Shader Attributes
                    //Only Call After Shader is Bound
                    //Change to BindDefaultAttributes and Keep Pipe Metaphor!
                    void bindAttributes(){
                        vatt.pos.set( Shader :: Current(), "position", sizeof(Vertex), 3, 0);
                        vatt.norm.set( Shader :: Current(), "normal", sizeof(Vertex), 3, Vertex::on() );
                        vatt.col.set( Shader :: Current(), "sourceColor", sizeof(Vertex), 4, Vertex::oc() );
                        vatt.tex.set( Shader :: Current(), "texCoord", sizeof(Vertex), 2, Vertex::ot() );
                    }

					void bindPosition(){
						vatt.pos.set( Shader :: Current(), "position", sizeof(Vertex),3,0);						
					}  
					void bindNormal(){
						vatt.norm.set( Shader :: Current(), "normal", sizeof(Vertex), 3, Vertex::on() );  
					}
					void bindColor(){
						vatt.col.set( Shader :: Current(), "sourceColor", sizeof(Vertex), 4, Vertex::oc() );
					}
					void bindTexture(){
						vatt.pos.set( Shader :: Current(), "texCoord", sizeof(Vertex), 2, Vertex::ot() );    				
					} 
                      
				    void bindAll(){
						program -> bind();
						bindAttributes();  
						program -> unbind();
					}
                   
//                     void initBufferObjects(){                      
//                         
//                         program -> bind();
//                         bindAttributes();
// 
// //                        LightPosition.set( Shader :: Current(), "lightPosition");
//   //                      shaderprogram -> unbind();
//                         
//                         //Bind All Mesh Buffer Data GLYPHS
//                        // Buffer( Mesh::Circle(1), CIR );
//                         //...Buffer( Mesh::Arrow(1), Vec ); 
//                     } 
                                        
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
                    
                    void pointer(){
                        vatt.pointer();
                    }
                    
                    void enable(){
                        vatt.enable();
                    }
                    
                    void disable(){
                        vatt.disable();
                    }
                    
                    static void DrawElements(int id, GLenum mode, int num = -1, int off = 0){
                        mbo[id].index.drawElements(mode, num, off);
                    }
                    
                    static void DrawArray(int id, GLenum mode){
                        mbo[id].vertex.drawArray(mode);
                    }
                                        
                    void begin(int id) { 
                        mbo[id].vertex.bind(); 
                        mbo[id].index.bind(); 
                        enable(); pointer(); 
                    }        

                    void end(int id) { 
                        disable(); 
                        mbo[id].index.unbind(); 
                        mbo[id].vertex.unbind();   
                    }

                    void begin( MBO& m) { 
                        m.bind(); 
                        enable(); pointer(); 
                    }       

                    void end( MBO& m) { 
                        disable(); 
                        m.unbind();   
                    }
                    
                    void line( MBO& m ) {
                        m.bind();
                        enable(); 
                        pointer();
                        m.drawElements();
                        disable();
                        m.unbind();
                    }
                        
					void bind( XformMat& xf ){
						program -> bind();
			  			 program -> uniform("lightPosition", 2.0, 2.0, 2.0);  
				         program  -> uniform("projection",  xf.proj);
				         program  -> uniform("normalMatrix", xf.normal);  
						 program  -> uniform("modelView",  xf.modelView );     
					}   
					
					void bind(){
						program -> bind();
					}

					void unbind(){
						program -> unbind();
					}                       
					
                    void pos_tex( MBO& m ) {
                        m.bind();
                        vatt.pos.enable(); 
						vatt.tex.enable();  
						vatt.pos.pointer(); 
						vatt.tex.pointer();
                        m.drawElements();
                        vatt.pos.disable();  
						vatt.tex.disable();   
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
                //VAttrib4 Pipe::vatt;
                //ShaderProgram * Pipe::shaderprogram;
                //Uniform Pipe::LightPosition;

    
//#define DRAWES(t) vsr::GL::Draw::RenderES(t)    
// #define DRAWV(t) vsr::GL::Draw::VRender(t)    
// #define DRAWB(t) vsr::GL::Draw::BRender(t)    
//#define DRAWV3(t,r,g,b) vsr::GL::Draw::Render(t,r,g,b)    
//#define DRAWV4(t,r,g,b,a) vsr::GL::Draw::Render(t,r,g,b,a)  
} //vsr::

#endif
