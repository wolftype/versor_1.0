/*
 *  vsr_file.cpp
 *  CONGA_07
 *
 *  Created by x on 8/29/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#include "vsr_file.h"
#include <iostream>

namespace vsr {

	string File :: cwd;
	string File :: data;
	string File :: meshes;
	string File :: images;
	string File :: videos;
	string File :: shaders;
	string File :: textures;
    string File :: resources;
	string File :: audio;
    string File :: output;
	
	void File :: setdir (string directory) {

        string tmp = directory;
        string cat = "";
        
        
        tmp.erase( tmp.find("vsr",0) );
        tmp += "vsr/";
//        while ( tmp != directory ){
//            cat += "../";
//            directory.erase(directory.find_last_of('/'));
//        }
//        
//        cout << cat << endl; 
        
		cwd = directory;
//		
//		directory.erase(directory.find_last_of('/'));
//		directory.erase(directory.find_last_of('/'));
//		directory.erase(directory.find_last_of('/'));
//		directory.erase(directory.find_last_of('/')+1);
		

		data = tmp+"resources/";
		shaders = data+"shaders/";
		textures = data+"textures/";
		meshes = data  + "meshes/";
		images = data  + "images/";
		videos = data + "videos/";
		audio = data + "audio/";
        output = tmp+"output/";
		
		cout << "CWD: " << File::cwd 
		<< "\nData Folder: " << File::data 
		<< "\nMesh Folder: " << File::meshes
		<< "\nImages Folder: " << File::images
		<< "\nVideos Folder: " << File::videos
		<< "\nShaders Folder: " << File::shaders
		<< "\nTextures Folder: " << File::textures
		<< "\nAudio Folder: " << File::audio
        << "\nOutput Folder: " << File::output << endl;

	}
	
}