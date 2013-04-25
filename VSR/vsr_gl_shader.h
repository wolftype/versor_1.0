/*
 *  vsr_gl_shader.h
 *  VERSOR
 *
 *  
 *
 */

#ifndef VSR_GL_SHADER_H_INCLUDED
#define VSR_GL_SHADER_H_INCLUDED

#include "vsr_gl.h"
#include "vsr_file.h"

#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>

//#include <fstream>
//#include "vsr_file.h"

//		---------------------------------------
// 		useful info here:
// 		http://www.evl.uic.edu/aej/594/


/*
		// how to get "compiled" ok then use it:
		
		GLint compileStatus;
		glGetObjectParameterivARB( shader, GL_COMPILE_STATUS, &compileStatus );
		glGetObjectParameterivARB( program, GL_INFO_LOG_LENGTH, &infoLogLen );
		infoLog = new GLchar[infoLogLen+1];
		glGetProgramInfoLogARB(program, infoLogLen, NULL, infoLog );
		infoLog[infoLogLen] = '\0';
		fprintf( stderr, "Info Log:\n%s\n", infoLog );	
		
*/


namespace vsr {
    
using namespace std;
    
struct ShaderParam {
    
    //Types of Passable Values
    enum Type {
        ATTRIBUTE = 0,
        UNIFORM        
    };
    
    Type ptype; // Parameter Type
        
    ShaderParam() : buf(256) {}
    
    ShaderParam(ShaderParam::Type t, GLuint p, GLuint i = 0) : idx(i), buf(256), ptype(t) { 
        if (t == ATTRIBUTE ) getAttrib(p);
        else getUniform(p);
    }
    
    GLint id;
    GLuint idx;
    GLsizei buf;
    GLsizei len;
    GLint size;
    GLenum vectype;
    GLenum datatype; //floating point , int, ubyte, etc
    
    GLchar name[256];

    void getAttrib(GLuint program) {
        glGetActiveAttrib(program, idx, buf, &len, &size, &vectype, name);
        getAttribId(program);
        datatype = GL::type(vectype); //Get GL Type from Vectype
    }

    void getUniform(GLuint program) {
        glGetActiveUniform(program, idx, buf, &len, &size, &vectype, name);
        getUniformId(program);
        datatype = GL::type(vectype);
        
    }
    
    void getAttrib(GLuint program, string tname) {
        id = glGetAttribLocation(program, tname.c_str());
        glGetActiveAttrib(program, id, buf, &len, &size, &vectype, name);
        //getAttribId(program);
        datatype = GL::type(vectype); //Get GL Type from Vectype
    }

    void getUniform(GLuint program, string tname) {
        id = glGetUniformLocation(program, tname.c_str());
        glGetActiveUniform(program, id, buf, &len, &size, &vectype, name);
        //getUniformId(program);
        datatype = GL::type(vectype);
        
    }
    
    void getUniformId(GLuint sprog){
        id = glGetUniformLocation(sprog, name);
    }
    void getAttribId(GLuint sprog){
        id = glGetAttribLocation(sprog, name);
    }
    
//    void set( GLuint sprog, string attrib) {
//            switch(ptype){
//                case ATTRIBUTE:
//                    id = glGetAttribLocation(sprog, attrib.c_str()); 
//                    getAttrib(sprog);            
//                    GL::error("get vertex attribute");
//                    break;
//                case UNIFORM:
//                    id = glGetAttribLocation(sprog, attrib.c_str());
//                    getUniform(sprog);
//                    GL::error("get vertex uniform");
//                    break;
//            }
//                        
//        }
    
    void print(){
        
        printf(" name: %s\n id: %d\n buf: %d\n size: %d\n length: %d\n bytes: %d\n", name, id, buf, size, len, GL::bpp(datatype));
        
    }
    
}; 
    
struct Attribute : public ShaderParam {
    Attribute(){}
    Attribute(GLuint p, GLuint i) : ShaderParam(ATTRIBUTE, p, i ) {}
    Attribute(GLuint p, string n) : ShaderParam(ATTRIBUTE, p, glGetAttribLocation(p, n.c_str() ) ) {}

};

struct Uniform : public ShaderParam {
    Uniform(){}
    Uniform(GLuint p, GLuint i) : ShaderParam(UNIFORM, p, i ) {}        
    Uniform (GLuint p, string n) : ShaderParam(UNIFORM, p, glGetUniformLocation(p, n.c_str() ) ) {}
};
    
/////////////////////////  
/////////////////////////  
/////////////////////////  
/////////////////////////  
    
class Shader {

    
public:
    enum Type {
		VERTEX  = GL_VERTEX_SHADER,
//		GEOMETRY = GL_GEOMETRY_SHADER,
		FRAGMENT = GL_FRAGMENT_SHADER
	};
    
    GLint id() const { return mId; }
    Shader( string name, Shader::Type t );                          ///< From file
    Shader ( Shader::Type t );                                      ///< Specify Type only
    Shader();	
    
    void add(const char * src);
    void source(const char * src, Shader::Type);                    ///< Load Shader Src Code
    void load(string file, Shader::Type);                           ///< Load Shader File(.frag and .vert)

    void compile();                                                 ///< compile code
    void unload() { glDeleteShader( mId ); mId = NULL; }

    string name() const { return mName; }
    
    static const GLint Current() {
        GLint tn;
        glGetIntegerv(GL_CURRENT_PROGRAM, &tn);
        GL::error("Shader Current Program");
        return tn;
    }
    
private:
    GLint mId;
    bool bLoaded, bActive;
    
    const char * cSrc;
    
    string mSrc;
    
    Shader::Type mType;
    
    string mName;
    

};

//struct ShaderData;

class ShaderProgram {

    bool            bLinked;
	bool			bLoaded;			///< Loaded Boolean
	bool			bActive;			///< Active Boolean
			
    GLint 	mId;                        ///< Compiled and Linked Shader Program
    
        
    //Change this to a Map (so attributes and uniforms can be indexed by string)            
    vector<Attribute> mAttribute;       ///< Udata
    vector<Uniform> mUniform;           ///< Udata

    map<string, Attribute> mAttributeMap;       ///< Udata
    map<string, Uniform> mUniformMap;           ///< Udata	
    
    typedef map<string, Attribute>::iterator AttIt;
    typedef map<string, Uniform>::iterator UniIt;
	public:
    
        Shader vert, frag;

        ShaderProgram() : bLoaded(0), mId(0) {}

        ShaderProgram( string vs, string fs) : bLoaded(0), mId(0) {
            load(vs,fs);
            get();
        }
    
        //single name
        ShaderProgram( string vs ) : bLoaded(0), mId(0) {
            load(vs + ".vert",vs + ".frag");
            get();
        }
       
        GLint id() const { return mId; }
	
        void attach( const Shader& s );                         ///< Attach Vert or Frag Shader to Program
        void link();                                            ///< Link Programs Together
		
		void load(const char * shaderName);                     ///< Load Shader From File(.frag and .vert)
		void load(string, string);                              ///< Load Fragment and Vertex Shaders from File
		void source( string vs, string fs);                     ///< Load from Source
		void setUniformVariable (char * name, float value);     ///< Change a Variable in the Shader
    
        //this info should be saved into a map to avoid repeated calls to glGet
//        int uniform(const char * name) const { 
//            GLint loc = glGetUniformLocation(mId, name);
//            if (loc == -1) printf("No such uniform named \"%s\" in shader\n", name);
//          
//            GL::error("Get Shader Program Uniform Location");
//            return loc; 
//        }
//
//        int attribute(const char * name) const { 
//            GLint loc = glGetAttribLocation(mId, name);
//            if (loc == -1) printf("No such uniform named \"%s\" in shader\n", name);
//            // cout << name << " " << loc << endl; 
//            GL::error("Get Shader Program Uniform Location");
//            return loc; 
//        }        

        GLint uniform(const char * name) { 
            return mUniformMap[ string(name) ].id; 
        }
        

        
        GLint attribute(const char * name) { 
            return mAttributeMap[ string(name) ].id; 
        }        


        const ShaderProgram& uniform(const char * name, int v0) {
            glUniform1i(uniform(name), v0);	
            GL::error("Set Shader Program Uniformi");
            return *this;
        }
        
        const ShaderProgram& uniform(const char * name, float v0) {
            glUniform1f(uniform(name), v0);	
            GL::error("Set Shader Program Uniformf");
            return *this;
        }
        
        const ShaderProgram& uniform(const char * name, float v0, float v1) {
            glUniform2f(uniform(name), v0, v1);	
            GL::error("Set Shader Program Uniformf");
            return *this;
        }
            
        const ShaderProgram& uniform(const char * name, float x, float y, float z ){
            glUniform3f(uniform(name), x, y, z);
            GL::error("Set Shader Program Uniform3f");
            return *this;
        }
    
        const ShaderProgram& uniform(const char * name, float vo[16]) {
            glUniformMatrix4fv(uniform(name), 1, GL_FALSE, vo); 
            //cout << "setting" << endl; 
            GL::error("Set Shader Program UniformMat4fv");
            return *this;
        }
    
//        const ShaderProgram& uniform(const char * name, int vo[16]) const{
//            glUniformMatrix2iv(uniform(name), 1, GL_FALSE, vo); 
//            //cout << "setting" << endl; 
//            GL::error("Set Shader Program UniformMat4fv");
//            return *this;
//        }

        const ShaderProgram& uniform43(const char * name, float vo[12]) {
            glUniformMatrix4x3fv(uniform(name), 1, GL_FALSE, vo); 
            //cout << "setting" << endl; 
            GL::error("Set Shader Program UniformMat4fv");
            return *this;
        }
    
    const ShaderProgram& attribute(const char * name, float x, float y, float z){
        glVertexAttrib3f(attribute(name), x, y, z);
        GL::error("Set Shader Program Attribute3f");
        return *this;
    }
    
    //////////////////
    ////THE FOLLOWING STATIC FUNCTIONS OPERATE ON WHATEVER SHADER IS CURRENTLY BOUND
    //////////////////
    static const int UniformID( const char * name){
        GLint loc = glGetUniformLocation( Shader::Current(), name);
        if (loc == -1) printf("No such uniform named \"%s\" in shader\n", name);
        // cout << name << " " << loc << endl; 
        GL::error("Get Shader Program Uniform Location");
        return loc; 
    }
    
    static const void SetUniform( const char * name, float vo[16] ) {
        glUniformMatrix4fv( UniformID(name), 1, GL_FALSE, vo );
        GL::error("Static set SHADER UniformMat4fv");
    }

    static const void SetUniform( int idx, float vo[16] ) {
        glUniformMatrix4fv( idx, 1, GL_FALSE, vo );
        GL::error("Static set SHADER UniformMat4fv");
    }    
    
		void setTexture (char * name, int id);

        void begin();
        void end();

        bool linked()  const   { return bLinked; }
        bool loaded()  const   { return bLoaded; }
			
		void enable()	{ bActive = 1; }										///< enable Shader
		void disable()	{ bActive = 0; }										///< disable Shader
		void toggle()	{ bActive = !bActive; }			///< toggle Shader

        void unload();
    
        /// GET UNIFORM AND ATTRIBUTES AND PUSH ONTO STACK
        void get();
        
        void bind() { begin(); }
        void unbind() { end(); }
    
 //       ShaderData data;

};
    
    struct ShaderData {
     	struct Paramf {
            Paramf(const std::string& n, float v ) : name(n), val(v)  {}
            std::string name;
            float val;
        };
        
        struct Parami {
            Parami(const std::string& n, float v ) : name(n), val(v) {}
            std::string name;
            int val;
        };
        
        struct ParamMat4f{
            ParamMat4f(const std::string& n, float v[16]) : name(n) {
                copy(v, v+16, val);
                //cout << "Mat4f created" << val[0] << endl;
            }
            std::string name;
            float val[16];
        };
        
        std::vector<ParamMat4f> uniformMat4f;
        std::vector<Paramf> uniformf;
        std::vector<Parami> uniformi;
        std::vector<Paramf> attributef;
        std::vector<Parami> attributei;
        
        void addUniformMat4f(const std::string& n, float v[16]) { 
            uniformMat4f.push_back(ParamMat4f(n, v)); 
        }
        void addUniformf(const std::string& n, float v) { uniformf.push_back(Paramf(n,v)); }
        void addUniformi(const std::string& n, int v) { uniformi.push_back(Parami(n,v)); }
        void addAttributef(const std::string& n, float v) { attributef.push_back(Paramf(n,v)); }
        void addAttributei(const std::string& n, int v) { attributei.push_back(Parami(n,v)); }
        
        void uniform(const std::string& n, float v) {
            for (int i=0; i<uniformf.size(); i++) {
                if (uniformf[i].name == n) {
                    uniformf[i].val = v;
                }
            }
        }
        void uniform(const std::string& n, int v) {
            for (int i=0; i<uniformi.size(); i++) {
                if (uniformi[i].name == n) uniformi[i].val = v;
            }
        }
        
        void update(ShaderProgram * shaderprogram){
            
            for (int i = 0 ; i < uniformf.size(); ++i){
                shaderprogram -> uniform( uniformf[i].name.c_str(), uniformf[i].val );
            }
            
            for (int i = 0 ; i < uniformi.size(); ++i){
                shaderprogram -> uniform( uniformi[i].name.c_str(), uniformi[i].val );
            }
            
            for (int i = 0 ; i < uniformMat4f.size(); ++i){
                shaderprogram -> uniform( uniformMat4f[i].name.c_str(), uniformMat4f[i].val );
            }
        }
        
    };  

} //vsr::

#endif
