/*
 *  DrawNode.cpp
 *  nanomed
 *
 *  Created by AlloSphere on 8/12/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "DrawNode.h"
#include "AssetManager.hpp"

namespace vsr {

static int matNodeID = 0;
    
    bool DrawNode :: parentIs( NodeType t){

        switch(t){
            case SHADERNODE: return typeid(*mParent) == typeid(ShaderNode); 
        }
    }

MaterialNode :: MaterialNode( AssetManager * _am) : am(_am), loaded(false), scale(1,1,1) {
	nodeID = matNodeID++;
	printf("new material %i\n", nodeID);

	bIsLeaf = true;
}

MaterialNode :: MaterialNode( Texture * tex) : am(NULL), loaded(false), scale(1,1,1) {
	nodeID = matNodeID++;
	printf("new material %i\n", nodeID);
    
    textures[0] = tex;
    loaded = true;
    
    bIsLeaf = true;
}

void MaterialNode :: load(const Material& mat) {
	if (!loaded) {
		loaded = true;
		// what textures do we have?
		if (mat.diffusemap.useTexture) {
			printf("diffusemap %s\n", mat.diffusemap.texture.c_str());
			textures[0] = (am->texture(mat.diffusemap.texture));
		}
		if (mat.specularmap.useTexture) {
			printf("specularmap %s\n", mat.specularmap.texture.c_str());
			textures[1] =(am->texture(mat.specularmap.texture));
		}
		if (mat.ambientmap.useTexture) {
			printf("ambientmap %s\n", mat.ambientmap.texture.c_str());
			textures[2] = (am->texture(mat.ambientmap.texture));
		}
		if (mat.emissivemap.useTexture) {
			printf("emissivemap %s\n", mat.emissivemap.texture.c_str());
			textures[3] = (am->texture(mat.emissivemap.texture));
		}
		if (mat.heightmap.useTexture) {
			printf("heightmap %s\n", mat.heightmap.texture.c_str());
			textures[4] = (am->texture(mat.heightmap.texture));
		}
		if (mat.normalmap.useTexture) {
			printf("normalmap %s\n", mat.normalmap.texture.c_str());
			textures[5] = (am->texture(mat.normalmap.texture));
		}
		if (mat.shininessmap.useTexture) {
			printf("shininessmap %s\n", mat.shininessmap.texture.c_str());
			textures[6] = (am->texture(mat.shininessmap.texture));
		}
		if (mat.opacitymap.useTexture) {
			printf("opacitymap %s\n", mat.opacitymap.texture.c_str());
			textures[7] = (am->texture(mat.opacitymap.texture));
		}
		if (mat.displacementmap.useTexture) {
			printf("displacementmap %s\n", mat.displacementmap.texture.c_str());
			textures[8] = (am->texture(mat.displacementmap.texture));
		}
		if (mat.lightmap.useTexture) {
			printf("lightmap %s\n", mat.lightmap.texture.c_str());
			textures[9] = (am->texture(mat.lightmap.texture));
		}
		if (mat.reflectionmap.useTexture) {
			printf("reflectionmap %s\n", mat.reflectionmap.texture.c_str());
			textures[10] = (am->texture(mat.reflectionmap.texture));
		}
	}
}

void MaterialNode :: onUnInitialize(Graphics& gl) {

}


	
void MaterialNode :: onInitialize(Graphics& gl) {
    printf("init MaterialNode\n");
}
	
	
void MaterialNode :: onEnter(Graphics& gl, vsr_sec now) {

   //GL::shadeModel(GL::SMOOTH);

	TexPtr it = textures.begin();

	while (it != textures.end()) {
		int unit = (*it).first;
		Texture * t = (*it).second;

//		t->enable();
		t->bind();
		
        it++;
	}

}

void MaterialNode :: onDraw(Graphics& gl) { }//list.draw(); }


void MaterialNode :: onLeave(Graphics& gl, vsr_sec now) {

	std::map<int, Texture *>::reverse_iterator it = textures.rbegin();
	while (it != textures.rend()) {
		int unit = (*it).first;
		Texture * tex = (*it).second;
		
        tex->unbind();
//        tex->disable();//(unit);
		it++;
	}
}

    
//------------------------

MeshNode :: MeshNode( Mesh * m ) : DrawNode(), mDrawMethod(VERTEXATTRIB)
{    
    add(m);
}

MeshNode :: MeshNode( AssetManager * _am ) : am(_am) {}
    
void MeshNode::load(const Mesh& m) {

}
	
void MeshNode :: onInitialize(Graphics& gl){

    printf("init MeshNode\n");
    switch (mDrawMethod) {
          
        case VBO:
        {       
            GLint tn = Shader::Current();
            
            vpos.get(tn, "position");
            vcol.get(tn, "colorSrc");
            
           // vbo.set(<#void *udata#>, <#int num#>)
            
            break;
        }   
        case VERTEXARRAY:
        {    
            break;
        }
        case VERTEXATTRIB:
        {
            GLint tn = Shader::Current();
            printf("CURRENT PROGRAM: %d\n", tn);
            //Check current program attributes . . .

            modID = ShaderProgram::UniformID("mod");
            
            vpos.get(tn, "position");
            vpos.stride( sizeof(Vertex) );
            vcol.get(tn, "colorSrc");
            vcol.stride( sizeof(Vertex) );
            vtex.get(tn, "texCoord");
            vtex.stride( sizeof(Vertex) );
            break;
        }
        case DISPLAYLIST:   
        {
        //	list.begin();
        //	for (int i = 0; i < mesh.size(); ++i){
        //		//gl.draw( *mesh[i] );
        //	}
        //	list.end();
            
            break;
        }
    }


}
    
void MeshNode :: onUnInitialize(Graphics& gl){	 }	
void MeshNode :: onEnter(Graphics& gl, vsr_sec now) {}
    
void MeshNode :: onDraw(Graphics& gl) { 
    switch (mDrawMethod) {
            
        case VBO:
            break;
        
        case VERTEXARRAY:
            
            VArray :: enable(); //Enable Vertex Array
            VArray :: enable(GL_COLOR_ARRAY);
            
            for (int i = 0; i < mesh.size(); ++i){
                
                float * f = &(*mesh[i])[0].Pos[0];
                float * c = &(*mesh[i])[0].Col[0];
                 
                //cout << f[0] << " " << f[1] << " " << f[2] << endl;
                
                VArray tmp( f, mesh[i] -> num(), 3, sizeof(Vec3f) ) ;
                VArray col( c, mesh[i] -> num(), 4, sizeof(Vec4f) ) ;

                tmp.stride(0);//sizeof(Vec3f));
                col.stride(0);//sizeof(Vec3f));
                
                tmp.vertexPointer();
                col.colorPointer();
                
                tmp.drawArrays();        
                
            }
            
            VArray :: disable();
            VArray :: disable(GL_COLOR_ARRAY);
            
            break;
            
        case VERTEXATTRIB:
                        
            vpos.enable();
            vcol.enable();
            vtex.enable();
           
             for (int i = 0; i < mesh.size(); ++i){
                 
                 vpos.data( &(*mesh[i])[0].Pos[0] );
                 vpos.pointer();
                 vcol.data( &(*mesh[i])[0].Col[0] );
                 vcol.pointer();
                 vtex.data( &(*mesh[i])[0].Tex[0] );
                 vtex.pointer();
                 
                 Mat4f tm = XMat::rot( mesh[i] -> rot() );
                 ShaderProgram::SetUniform(modID, tm.val());
                 
//                 VAttrib :: draw( mesh[i]->num(), mesh[i]->mode() );
                 VAttrib :: drawElements( mesh[i]->numIdx(), mesh[i]->indices(), mesh[i]->mode() );
             }
            
            vpos.disable();
            vcol.disable();
            vtex.disable();
            
            break;
            
        case DISPLAYLIST:            
            break;
    }
}
void MeshNode :: onLeave(Graphics& gl,vsr_sec now) {}
	
//------------------------
    
SpriteNode :: SpriteNode(const char * img_src, AssetManager * am)
:	DrawNode(),
am(am)
{
	// read in image:
//	Image img;
//	img.load( am->filePath(img_src) );
//	spriteTex.allocate(img.array());
//	spriteTex.target(Texture::TEXTURE_2D);
}

}
