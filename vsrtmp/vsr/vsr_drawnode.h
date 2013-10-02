#ifndef INC_DRAWNODE_H
#define INC_DRAWNODE_H

#include "vsr_gxlib.h"
#include "vsr_vertex.h"

#include "GraphicsMatrix.h"
#include "vsr_gl_varray.h"
#include "vsr_gl_vbo.h"
#include "vsr_gl_texture.h"
#include "vsr_gl_shader.h"
#include "vsr_gl_material.h"
#include "vsr_gl_fbo.h"

#include <map>
#include <string>
#include <vector>
#include <typeinfo>

namespace vsr {

/*
	An interface for creating a drawing-graph
*/

using namespace std;    
    
class AssetManager;
    
class Graphics{};
class vsr_sec{};

//    class ShaderNode;
//    class MaterialNode;
//    class MeshNode;
    
class DrawNode {


public:
        
//	typedef std::map<std::string, DrawNode *> DrawNodes;
//	typedef std::map<std::string, DrawNode *>::iterator DrawNodePtr;
	typedef std::vector<DrawNode *> DrawNodes;
	typedef std::vector<DrawNode *>::iterator DrawNodePtr;
    
    enum NodeType {
        RENDERNODE = 0,
        SHADERNODE,
        SPRITENODE,
        MATERIALNODE,
        MESHNODE,
        OPAQUENODE,
        TRANSPARENCYNODE,
    };
    
    bool parentIs( NodeType t );

	DrawNode() : mParent(NULL), initialized(false), bDraw(true), bBypass(false) {}
	DrawNode(std::string n) : mParent(NULL), initialized(false), bDraw(true), bBypass(false), name(n) {}

	virtual ~DrawNode() {
		if (mParent) mParent->remove(this);
	}

	virtual void onInitialize(Graphics& gl) {};
	virtual void onUnInitialize(Graphics& gl) {};
	virtual void onEnter(Graphics& gl, vsr_sec ) {};
	virtual void onDraw(Graphics& gl) {};
	virtual void onLeave(Graphics& gl, vsr_sec) {};

//	DrawNode * find(std::string name) {
//		std::map<std::string, DrawNode *>::iterator it = mChildren.find(name);
//		if (it != mChildren.end()) {
//			return (*it).second;
//		}
//		// try recursing:
//		for (it = mChildren.begin(); it != mChildren.end(); it++) {
//			DrawNode * child = it->second;
//			DrawNode * result = child->find(name);
//			if (result) return result;
//		}
//		return NULL;
//	}

	void uninitialize(Graphics& gl) {
        if (initialized) {
            onUnInitialize(gl);
            initialized = false;
        }
		DrawNodePtr it = mChildren.begin();
		while (it != mChildren.end()) {
			DrawNode * v = (*it);
			v->uninitialize(gl);
			it++;
		}
	}

	void draw(Graphics& gl, vsr_sec now) {
		
		if (bDraw){
			if (!initialized) {
				onInitialize(gl);
				initialized = true;
			}
	
			if (!bBypass) onEnter(gl, now);
	
			if (!bBypass) onDraw(gl);

			DrawNodePtr it = mChildren.begin();
			
			while (it != mChildren.end()) {
				
//				std::string name = it->first;
//				int id = it->first;
				DrawNode * v = *it;
				v->draw(gl, now);
				it++;
			}

			if (!bBypass) onLeave(gl, now);
		}
	}

//	void add(DrawNode * v, std::string name){
//		if (v->mParent) {
//			if (v->mParent == this) return;
//			v->mParent->remove(v);
//		}
//		v->mParent = this;
//		mChildren[name] = v;
//	}

//	DrawNode * add(DrawNode * v ){
//		if (v->mParent) {
//			if (v->mParent == this) return this;
//			v->mParent->remove(v);
//		}
//		v->mParent = this;
//		
//		std::string tname;
//		if (v->name == "") {
//			printf("noname\n");
//			tname = "unnamed";
//		}
//		else {
//			tname = v->name;
//		}	
//		mChildren[tname] = v;
//		return this;
//	}

	void add( DrawNode * v ){
		if (v->mParent) {
			if (v->mParent == this) return;
			v->mParent->remove(v);
		}
		v->mParent = this;
		mChildren.push_back(v);//[name] = v;
        
        printf("adding node\n");
	}
	
    
	
	void remove(DrawNode * v){
		v->mParent = NULL;
	}

	DrawNode * mParent;
	DrawNodes mChildren;

	bool initialized;
	bool bBypass;
	bool bDraw;
	bool bIsLeaf;
	
	std::string name;
    
    

};


class OpaqueNode : public DrawNode {

	public:
	OpaqueNode() : DrawNode() {}


	virtual void onEnter(Graphics& gl, vsr_sec now){

		GL::depthTesting(1);
		GL::depthMask(1);
		GL::blending(0);
	}
    virtual void onDraw(Graphics& gl) {};
	virtual void onLeave(Graphics& gl, vsr_sec now){
		GL::depthTesting(1);
		GL::depthMask(1);
	}
};

class TransparencyNode : public DrawNode {

	public:

	TransparencyNode() : DrawNode(),
	bDepthTest(1), bDepthMask(0), bBlend(1),
	src(GL::SRC_ALPHA), dst(GL::ONE_MINUS_SRC_ALPHA),
	eq(GL::FUNC_ADD)
	{}

	virtual ~TransparencyNode() {}

	virtual void onEnter(Graphics& gl, vsr_sec now){
		//glDisable(GL_CULL_FACE);

		//glCullFace(GL_FRONT);
		//glEnable(GL_CULL_FACE);

        GL::depthTesting(bDepthTest);
		GL::depthMask(!bBlend);
		GL::blending(bBlend);
		GL::blendMode(src, dst, eq);
	}
	
    virtual void onDraw(Graphics& gl) {};

	virtual void onLeave(Graphics& gl, vsr_sec now){

		//glDisable(GL_CULL_FACE);

		GL::depthTesting(1);
		GL::depthMask(1);
		GL::blending(0);
	}

	bool bDepthTest, bDepthMask, bBlend;
	GL::BlendFunc src;
	GL::BlendFunc dst;
	GL::BlendEq eq;
};

class RenderNode : public DrawNode {
    
    FBO mFBO;
    int mWidth, mHeight;
    
    bool bRTT;
    
public:
    
    RenderNode(int w, int h, bool RTT = true) : mWidth(w), mHeight(h), bRTT(RTT) {}

    virtual void onInitialize(Graphics& gl) {
        if (bRTT){
            mFBO.init();
            mFBO.attachTextureBuffer(mWidth, mHeight);            
        }
    }
    virtual void onUnitialize(Graphics& gl);
    
    virtual void onEnter(Graphics& gl, vsr_sec n){
        mFBO.enter();
    }
    
    virtual void onLeave(Graphics& gl, vsr_sec n){
        FBO::Unbind();
    }
    virtual void onDraw(Graphics& gl);
    
    
};

//    static int deg = 1; deg++;
//    float c = PI * deg/180.0;
//
//    Mat4f tmp = XMat::rot( Rot( cos(c), sin(c), 0, 0 ) );
//    
    //copy(tmp.val(), tmp.val() + 16,  uniformMat4f[0].val);    

class ShaderNode : public DrawNode {

public:
    
    ShaderNode(ShaderProgram * s) : DrawNode(), shaderprogram(s) 
    {
        
    }

	//Load in Code
	ShaderNode(const char * vert_code, const char * frag_code) :
		DrawNode(),
		bVert(1), bFrag(1), bGeom(0), bTime(0)
	{
        load(vert_code, frag_code);
	}

	ShaderNode(string vertfile, string fragfile, string geomfile) :
		DrawNode(),
		bVert(1), bFrag(1), bGeom(1), bTime(0)
	{
        load(vertfile, fragfile);
		//geom.source(geom_code, Shader::GEOMETRY);
	}
    
	virtual ~ShaderNode() {}

	void load( string vertfile, string fragfile ){
        shaderprogram  = new ShaderProgram(vertfile, fragfile );
	}

	virtual void onInitialize(Graphics& gl) {
        printf("init ShaderNode\n");

        if (shaderprogram){
            if (! shaderprogram -> loaded() ){

            //        shaderprogram.attach(vert);
            //        shaderprogram.attach(frag);                
            //        shaderprogram.link();
            //        shaderprogram.get();
                
            } else {
                
                printf("SHADER LOADED\n");
            }
            
        }

    }

	virtual void onUnInitialize(Graphics& gl) {}

	virtual void onEnter(Graphics& gl, vsr_sec now) {

//		if (shaderprogram.linked())

		shaderprogram -> begin();
		data.update( shaderprogram );

		//Bind Current Time to Shader
//		if (bTime) shaderprogram.uniform("now", 1.f );
	}
    virtual void onDraw(Graphics& gl) {};

	virtual void onLeave(Graphics& gl, vsr_sec now) {
//		if (shaderprogram.linked())
		shaderprogram -> end();
	}

	bool bVert, bFrag, bGeom;
	bool bTime;

	ShaderProgram * shaderprogram;
    ShaderData data;
    


	int unit;
};

//----------------
class MaterialNode : public DrawNode {

	public:

		MaterialNode(AssetManager * _am = NULL);
        MaterialNode(Texture * );
		virtual ~MaterialNode() {}

		void load(const Material& mat);

		virtual void onUnInitialize(Graphics& gl);
		virtual void onInitialize(Graphics& gl);
		virtual void onEnter(Graphics& gl, vsr_sec now);
		virtual void onDraw(Graphics& gl);
		virtual void onLeave(Graphics& gl, vsr_sec now) ;

		int nodeID;

		AssetManager * am;

		bool loaded;
		Vec3<float> scale;		///< scaling factor

        typedef std::map<int, Texture *> Textures;
        typedef std::map<int, Texture *>::iterator TexPtr;
    
		Textures textures;    
    
        std::vector<Texture*> tex;
};

//--------------------
class MeshNode : public DrawNode {
    
    MaterialNode * mMaterialNode;
    ShaderNode * mShaderNode;
    
public:
    
    //Draw mode
    enum DrawMethod {
        VBO = 0,
        VERTEXARRAY,
        VERTEXATTRIB,
        DISPLAYLIST,
    };
        
    void method(DrawMethod dm) { mDrawMethod = dm; }
    
    MeshNode( Mesh * m );
    MeshNode(AssetManager * _am = NULL );
    
    virtual ~MeshNode() {}
    
//    MaterialNode * material() { return mMaterialNode; }
//    void material( MaterialNode * mn ) {  mMaterialNode = mn; }
//    ShaderNode * shader() { return mShaderNode; }
//    void shader(ShaderNode *sn) { mShaderNode = sn; }
    
    void load(const Mesh& m );
    void add( Mesh * m ) { mesh.push_back(m); }
    
    virtual void onUnInitialize(Graphics& gl);
    virtual void onInitialize(Graphics& gl);
    virtual void onEnter(Graphics& gl, vsr_sec now);
    virtual void onDraw(Graphics& gl);
    virtual void onLeave(Graphics& gl, vsr_sec now) ;
    
    AssetManager * am;
    Vec3f scale;		///< scaling factor    
    
    DisplayList list;
    VAttrib     vpos, vcol, vtex;

    GLint modID; //Matrix Uniform Id on Shader
   // VBO vbo;
    
    std::vector< Mesh * > mesh;	
    
private: 
    
    DrawMethod mDrawMethod;
};
	
    
    
    
    
    
    
//------------    
class SpriteNode : public DrawNode {
	public:

		SpriteNode(const char * img_src, AssetManager * am);

		virtual ~SpriteNode() {}

		virtual void onInitialize(Graphics& gl){}
		virtual void onUnInitialize(Graphics& gl) {}

		virtual void onEnter(Graphics& gl, vsr_sec now) {
			GL::error("SpriteParticlesEnter0");
//			update();
			//spriteTex.bind(0);
            GL::pointSize(10);
#ifdef NO_GEOMETRY_SHADER
//			glBegin(GL::QUADS);
#else
//			glBegin(GL::P);
#endif
			GL::error("SpriteParticlesEnter1");
		}
        virtual void onDraw(Graphics& gl) {};

		virtual void onLeave(Graphics& gl, vsr_sec now) {
//			glEnd();
			//spriteTex.unbind(0);
		}

		//	App * app;
		AssetManager * am;
		Texture spriteTex;
		float pointsize;
    
//		void update() {
//			dynamic_cast< ShaderNode * > ( mParent ) -> uniformf[0].val = pointsize;
//			dynamic_cast< ShaderNode * > ( mParent ) -> update();
//		}
	};

} // vsr::

#endif
