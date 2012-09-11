/*
 *  AssetManager.h
 *  nanomed
 *
 *  Created by Pablo Colapinto on 8/2/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef ASSETMANAGER_H_INCLUDED
#define ASSETMANAGER_H_INCLUDED

#include "vsr_gl_shader.h"
#include "vsr_gl_texture.h"
#include "vsr_gl_vbo.h"
#include "vsr_gl_vao.h"
#include "vsr_gl_varray.h"

#include "vsr_file.h"

#include <map>
#include <string>

#include "DrawNode.h"


namespace vsr {
	using std::string;
	using std::cout;
	using std::endl;
	

	class AssetManager {

		
	public:
				
        AssetManager(){}
		
		//fetches texture or loads if not yet loaded
		Texture * texture(string filename);

		//or isolated
		MeshNode * loadMesh (string scenename);
		ShaderNode * loadShader (string vs, string fs);
		
        
		ShaderNode * addShaderNode( const string& s, const char * v, const char * f) {			
			mShader[s] = new ShaderNode(v, f);
			return mShader[s];
		}

		MaterialNode * materials(const string& s) { return mMaterial[s]; }
				
		
		MeshNode * addMeshNode (const string& s){
			mMesh[s] = new MeshNode(this);
			return mMesh[s];
		}

		MaterialNode * addMaterialNode(){
			mMaterial["default"] = new MaterialNode(this);
			return mMaterial["default"];
		}
		
		MaterialNode * addMaterialNode( const string& s){
			mMaterial[s] = new MaterialNode(this);
			return mMaterial[s];
		}
		
		void enable (const string& s, bool flag ) { 
			if (mMaterial[s]) mMaterial[s] -> bDraw = flag; 
		}
		void toggle (const string& s ) { 
			if (mMaterial[s]) mMaterial[s] -> bDraw = ! mMaterial[s] -> bDraw; 
		}
		
		//should move to a state manager class

		
	protected:

		typedef std::map<std::string, MeshNode *> Meshes;
		typedef std::map<std::string, MeshNode *>::iterator MeshPtr;

		typedef std::map<std::string, Texture *> Textures;
		typedef std::map<std::string, Texture *>::iterator TexturePtr;
		typedef std::map<std::string, MaterialNode*> Materials;
		typedef std::map<std::string, MaterialNode*>::iterator MaterialPtr;
		typedef std::map<std::string, ShaderNode*> Shaders;
		typedef std::map<std::string, ShaderNode*>::iterator ShaderPtr;

		Meshes	mMesh;
		Textures mTexture;
		Materials mMaterial;
		Shaders mShader;

	};
	
}

#endif