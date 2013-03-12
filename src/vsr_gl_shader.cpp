/*
 *  vsr_gl_shader.cpp
 *  CONGA_07
 *
 *  Created by x on 1/5/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */


#include "vsr_gl_shader.h"
#include <iostream>
#include <stdio.h>

namespace vsr {

using namespace std;

//predeclared function
char * textFileRead(const char *fn);		// some memory allocation happens here
									// be careful...  please don't call load shader 
									// repeatedly !!!!! (you have been warned)

Shader :: Shader() : bLoaded(0), bActive(0) {}
    
Shader :: Shader ( Shader::Type t ) : bLoaded(0), bActive(0), mType(t) {}

Shader :: Shader( string shaderName, Shader::Type t ) : bLoaded(0), bActive(0), mType(t) {

    load( shaderName, mType );
}
    
void Shader :: source(const char * shadersrc, Shader::Type t) {

    mSrc = shadersrc;
    mType = t;
    
    bLoaded = true;
    
    compile();
}
    
void Shader :: add (const char * src) {

    string s(src);
    mSrc += s;
    
}

void Shader::load(string shaderName, Shader::Type t){

    bLoaded = false;
    
    cout << "loading " << shaderName << endl; 

    string filepath =  shaderName;//File::resources + shaderName;
    mSrc = textFileRead( filepath.c_str() );    
    
    printf("shader src: \n%s\n", mSrc.c_str());
    
    mName = shaderName;
    mType = t;    
    bLoaded = true;
    
    compile();
} 

void Shader::compile(){
    
//  int length = strlen(mSrc);
    
    string t = mType == VERTEX ? "vertex" : "fragment";
    cout << "compiling " << t << " shader" << endl; 
    
    mId = glCreateShader( mType );
    cSrc = mSrc.c_str();
    
    glShaderSource(mId, 1, &cSrc, NULL);
    glCompileShader(mId);
    
    GLint comp;
    glGetShaderiv(mId, GL_COMPILE_STATUS, &comp);
    
    if(comp == GL_FALSE ){
        GLchar messages[256];
        glGetShaderInfoLog(mId, sizeof(messages),0,&messages[0]);
        cout << messages;
        //        exit(1);
    }
    
    GL::error("Shader Compile");
}

//---------------PROGRAM
    
void ShaderProgram :: attach( const Shader& s){
    
    glAttachShader( mId, s.id() );
     GL::error("Shader Attach");

}

void ShaderProgram :: link(){
    
    glLinkProgram(mId);
    GL::error("Shader Link");
}
    
void ShaderProgram :: load ( string vs, string fs){
	
	bLoaded = false;	
    
    mId = glCreateProgram();  
                    
    vert.load(vs, Shader::VERTEX);
    frag.load(fs, Shader::FRAGMENT);
    
    attach(vert);
    attach(frag);
    link();
    
    printf("Shader Program: %d: %s %s\n", mId, vs.c_str(), fs.c_str() );

    bLoaded = true;
    bActive = true;

}
		
void ShaderProgram::source( string vs, string fs){
	bLoaded = false;	
    
    mId = glCreateProgram();  
    vert.source(vs.c_str(), Shader::VERTEX);
    frag.source(fs.c_str(), Shader::FRAGMENT);
    attach(vert);
    attach(frag);
    
    link();
    
    printf("Shader Program: %d: %s %s\n", mId, vs.c_str(), fs.c_str() );

    bLoaded = true;
    bActive = true;
    
    get();
}

void ShaderProgram::unload(){
	
	if ( vert.id() ){
		glDetachShader( mId, vert.id() );		
        vert.unload();
	}
	
	if (frag.id()){
		glDetachShader(mId,frag.id());
        frag.unload();
	}
	
	if (mId){
		glDeleteShader(mId);
		mId = NULL;
	}
	 GL::error("Shader Unload");
}

//---------------------------------------------------------------

void ShaderProgram::begin(){
	if ( bLoaded == true){
		if (bActive){
			glUseProgram(mId);
		} else {
			glUseProgram(0);
		}
        GL::error("Shader Begin");

	}
}

void ShaderProgram::end(){
    glUseProgram(0);
    GL::error("Shader End");

}
//---------------------------------------------------------------
void ShaderProgram::setUniformVariable (char * name, float value){
	if (bLoaded){
		glUniform1f( glGetUniformLocation( mId, name), value );
	}
    GL::error("Shader Set Uniform");

}

void ShaderProgram::setTexture(char * name, int id){

	if(bLoaded){
	
		int x = glGetUniformLocation(mId, name);
		glUniform1i(x, id);

	}
    
    GL::error("Shader Set Texture");


}
    
//GET UNIFORM AND ATTRIBUTES AND PUSH ONTO STACK
void ShaderProgram::get() {

        GLuint program = id();
    
        GLint numActiveUniforms = 0;
        GLint numActiveAttributes = 0;
        
        glGetProgramiv(program, GL_ACTIVE_UNIFORMS, &numActiveUniforms);
        glGetProgramiv(program, GL_ACTIVE_ATTRIBUTES, &numActiveAttributes);
        
        GL::error("Shader Get Params");

        printf("ShaderProgram::get()\n");
        
        for(int j=0; j < numActiveUniforms; j++)
        {
            
            Uniform u( program, j );
            
            mUniform.push_back( u );
            
            
            // check for array names
//            if(u.name[ strlen(u.name)-3 ] == '[' && u.name[ strlen(u.name)-1 ] == ']') {
//                u.name[ strlen(u.name)-3 ] = '\0';
//            }
//           
            
            u.print();

            
        }
        
        for(int j=0; j < numActiveAttributes; j++) {
            
            Attribute a( program, j );
            
            mAttribute.push_back( a );

            a.print();

         }
    }

    
    

//---------------------------------------------------------
// below is from: www.lighthouse3d.com
// you may use these functions freely. they are provided as is, and no warranties, either implicit, or explicit are given
//---------------------------------------------------------

char *textFileRead(const char *fn) {

	string ts = string(fn);

	FILE *fp;
	char *content 	= 	NULL;
	int count		=	0;

	if (fn != NULL) {
		fp = fopen(ts.c_str(),"rt");
		if (fp != NULL) {
		
		      
      fseek(fp, 0, SEEK_END);
      count = ftell(fp);
      rewind(fp);

			if (count > 0) {
				content = (char *)malloc(sizeof(char) * (count+1));
				count = fread(content,sizeof(char),count,fp);
				content[count] = '\0';
			}
			fclose(fp);
		}
	}
	
	return content;
}


} //vsr::
