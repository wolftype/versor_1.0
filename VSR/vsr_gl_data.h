//
//  vsr_gl_data.h
//  Versor
//
/*

    Higher Level Data containers, combine VBOs with Meshes, Framebuffers with Textures, etc
    
*/
//  Created by Pablo Colapinto on 2/28/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_gl_data_h
#define Versor_vsr_gl_data_h

#include "vsr_gl_vbo.h"
#include "vsr_mglyph.h"

namespace vsr{


    namespace GL{
    
        //a Mesh Buffer Object, for lack of a better term
        struct MBO {
            
            static int mCount;
            
            int idx;
            
            VBO vertex;     //vertex buffer container
            VBO index;      //element buffer container
            
            MBO(){}
            
            MBO( Mesh mesh, int id = -1 ){
                mCount +=1;
                idx = id == -1 ? mCount : id;
                vertex = VBO( &mesh.vertices()[0].Pos[0], mesh.num(), mesh.num() * sizeof(Vertex), GL::VERTEXBUFFER );
                index = VBO( &mesh.indices()[0], mesh.numIdx(), mesh.numIdx() * sizeof(GLuint), GL::ELEMENTBUFFER );
            }
                       
            //Enable Vertex Attributes FIRST             
            void drawElements( GLenum mode, int num = -1, int off = 0){
                index.drawElements(mode, num, off);
            }
            
            void drawArray(GLenum mode){
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

}


#endif
