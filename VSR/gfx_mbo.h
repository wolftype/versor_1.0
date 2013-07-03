//
//  ctl_gl_data_h.
//  Versor
//
/*

    Higher Level Data containers, combine VBOs with Meshes, Framebuffers with Textures, etc
    
*/
//  Created by Pablo Colapinto on 2/28/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#ifndef CTL_gl_data_h
#define CTL_gl_data_h

#include "gfx_vbo.h"
#include "gfx_mesh.h"

namespace gfx{
    
        //a Mesh Buffer Object, for lack of a better term
        struct MBO {
            
            static int mCount;
            
            int idx;
            
            VBO vertex;     //vertex buffer container
            VBO index;      //element buffer container

			Mesh mesh;
            
            GL::MODE mode;
            
            MBO(){} 

			MBO(const MBO& mbo){
				idx = mbo.idx;
				vertex = mbo.vertex;
				index = mbo.index; 
				mesh = mbo.mesh;
				mode = mbo.mode;  
				
				vertex.data( &mesh.vertices()[0].Pos[0] );
				index.data( &mesh.indices()[0] );  		
			}
               
			MBO operator = (const MBO& mbo){    
				if (this != &mbo ){
					idx = mbo.idx;
					vertex = mbo.vertex;
					index = mbo.index; 
					mesh = mbo.mesh;
					mode = mbo.mode;    
					
					vertex.data( &mesh.vertices()[0].Pos[0] );
					index.data( &mesh.indices()[0] );
				}  
				return *this;			
			}           
			
            MBO( Mesh m, GL::USAGE usage = GL::STATIC, int id = -1 ) : mesh(m){
                mCount +=1;
                idx = id == -1 ? mCount : id;
                vertex = VBO( &mesh.vertices()[0].Pos[0], mesh.num(), mesh.num() * sizeof(Vertex), GL::VERTEXBUFFER, usage );
                index = VBO( &mesh.indices()[0], mesh.numIdx(), mesh.numIdx() * sizeof(Mesh::INDEXTYPE), GL::ELEMENTBUFFER, GL::STATIC );
                mode = mesh.mode();
            }
                       
            //Enable Vertex Attributes FIRST             
            void drawElements( int num = -1, int off = 0){ // GLenum mode,
                index.drawElements(mode, num, off);
            }
            
            void drawArray(){ //GLenum mode
                vertex.drawArray(mode);
            }

            //Call BEFORE Enabling Vertex Attributes
            void bind() { 
                vertex.bind(); 
                index.bind(); 
            }

            void unbind() { 
                index.unbind(); 
                vertex.unbind();   
            }
             
            /// Update Vertex Info               
            void update(Vertex * val){
                vertex.update(val);
            }
            
			void update(){
				vertex.update();
			}
			
			///Update Specific Vertex
			template< class T >
			void update(int idx, int num, const T& val){
				vertex.update(idx, num, &val);
			}

//            //static methods to grab quick int
//            static int Buffer( Mesh& mesh, int id = -1){
//                mCount +=1;
//                VBO( &mesh.vertices()[0].Pos[0], mesh.num(), mesh.num() * sizeof(Vertex), GL::VERTEXBUFFER );
//                VBO( &mesh.indices()[0], mesh.numIdx(), mesh.numIdx() * sizeof(GLuint), GL::ELEMENTBUFFER );
//                return tmp;
//            }


        };
        
        int MBO::mCount;
 

}


#endif
