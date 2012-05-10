/*
 *  AssetManager.cpp
 *  nanomed
 *
 *  Created by Pablo Colapinto on 8/2/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "AssetManager.hpp"
#include <sstream>

namespace vsr {

Texture * AssetManager :: texture(std::string filename) {
	
	//LOAD TEXTURE IF NEEDED
//	Textures::iterator it = mTexture.find(filename);
//
//	if (it == mTexture.end()) {
//		
//		printf("loading texture %s\n", filename.c_str());
//
//		Image img;
//        
//		img.load( File::images + filename);//searchpaths.find(filename).filepath());
//		
//		Texture * tex;
//		
//		tex = new Texture();
//		tex->allocate( img.array() );
//		
//		mTexture[filename] = tex;
//		
//		return tex;
//        
//	} else {
//		
//        return (*it).second;
//	}
}

//void AssetManager :: loadMesh( std::string meshname, DrawNode * parent) {
//
//	std::string file = searchpaths.find(meshname).filepath();
//	Scene * scene = Scene::import(file);
//	
//	//may have multiple meshes and materials
//	for (int i =0; i< scene->meshes(); ++i){
//
//		std::stringstream os; os << meshname << i;
//		string tname = os.str();
//		
//		//LOAD ASSET DATA INTO A NEW MESH
//		Mesh * mesh = new Mesh;
//		scene->mesh(i, *mesh);
//		MeshNode * meshnode = addMeshNode( tname  );
//		meshnode -> add (mesh);
//
//		//may have material attached (or go to default)
//		int tidx = scene->meshMaterial(i);
//		const Scene::Material& mat = scene->material( tidx );
//		
//		//tries to find materialNode in list
//		MaterialNode * matnode = mMaterial[mat.name];
//		
//		//CREATE NEW MATERIALNODE and MESHNODE IF NEEDED
//		if (matnode == NULL) {
//			
//			matnode = addMaterialNode(mat.name);			
//			parent->add(matnode, mat.name);
//						
//		}
//		
//		//std::cout << mat.name << endl; 
//		
//		//load material into mat node (create textures)
//		matnode->load( mat );
//		
//		//load meshnode into matnode (
//		matnode->add(meshnode, tname );
//		
//		//meshnode->meshes.push_back( mesh );
//	}
//	
//}
MeshNode * AssetManager :: loadMesh(std::string filename){
        
        
        MeshNode * meshnode = addMeshNode( filename  );
        Mesh * mesh = new Mesh(filename);
        meshnode -> mesh.push_back(mesh);        
        return meshnode;
}
    
//MeshNode * AssetManager :: loadMesh(std::string filename){
//
//    
//	MeshNode * meshnode = addMeshNode( filename  );
//	
//    std::string file = File::meshes + filename;
//	//std::string file = searchpaths.find(filename).filepath();
//	Scene * scene = Scene::import(file);
//	//may have multiple meshes and materials
//	for (int i =0; i< scene->meshes(); ++i){
//		
//		//LOAD ASSET DATA INTO A NEW MESH
//		Mesh * mesh = new Mesh;
//		scene->mesh(i, *mesh);
//		
//		meshnode -> mesh.push_back(mesh);
//		
//		printf("mesh\n");
//	}
//	
//	return meshnode;
//	
//}
//	
//Mesh gets Loaded into ShaderNode
//void AssetManager :: loadScene(std::string scenename, DrawNode * parent) {
//	
//	std::string file = searchpaths.find(scenename).filepath();
//	Scene * scene = Scene::import( file );
//		
//	for (int i=0; i<scene->meshes(); i++) {
//				
//		//GET MESH MATERIAL IDX
//		int tidx = scene->meshMaterial(i);
//		const Scene::Material& mat = scene->material( tidx );
//
//		cout << "material: " << mat.name << endl;
//		//tries to find material in shaderNode
//		MaterialNode * matnode =  (MaterialNode * ) parent->find(mat.name);
//						
//		//CREATE NEW MATERIAL IF NEEDED
//		if (matnode == NULL) {
//			
//			matnode = addMaterialNode(mat.name);//new MaterialNode( this );
//			
//			parent->add(matnode, mat.name);
//		}
//		
//		//load material into mat node
//		matnode->load( mat );
//		
////		printf("appending to material %d %s at %d\n", i, mat.name.c_str(), matnode->nodeID);
//		
//		//LOAD ASSET DATA INTO A NEW MESH, AND ADD TO MATNODE
//		Mesh * mesh = new Mesh;
//		scene->mesh(i, *mesh);
//		
//		//mesh->scale( matnode->scale );
//		//matnode->meshes.push_back(mesh);
//		
//		//PRINT OUT
///*
//		std::stringstream ss;
//		std::string meshname;
//		ss << scenename << i;
//		ss >> meshname;
//		
//		printf("created Mesh %d %s\n", i, meshname.c_str());
//*/
// }


}