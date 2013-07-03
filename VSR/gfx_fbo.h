/*
 *  vsr_gl_fbo.h
 *  CONGA_07
 *
 *  Created by x on 1/8/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

#ifndef GFX_FBO_H_INCLUDED
#define GFX_FBO_H_INCLUDED



/*
Basic render-to-texture setup and use

in INIT code:
create an empty textureA

create custom fboA

***

in RENDER loop code: {

bind the fboA

bind textureA to the color attachment of the fboA

set the viewport to be the size of textureA

 --now anything you draw you will be drawn onto this textureA--

unbind the fboA

bind the default EAGL_fbo
set the viewport to be the size of the window

--now we are back to normal clip space and you can use textureA in
other shaders, etc--

then call iOS's "presentFramebuffer" to transfer the color attachement
of the default EAGL_fbo to the screen

}
*/

#include "gfx_gl.h"
#include "gfx_texture.h"   

namespace gfx {

    //depth buffer, color buffer, or stencil buffer
    class RBO{
    
        private:
            
            GLuint mId;
            int mWidth, mHeight;
            GL::IFORMAT mFormat;
            
        public:
        
            int width() { return mWidth; }
            int height() { return mHeight; }
        
            RBO(int w, int h, GL::IFORMAT format = GL::DEPTHCOMP) : 
            mWidth(w), mHeight(h), mFormat(format) {
                generate(); bind(); alloc(); unbind();
            }
        
        
            ~RBO() { glDeleteRenderbuffers(1, &mId); }

            GLuint id() const { return mId; }
        
            void generate(){
                glGenRenderbuffers(1, &mId);
            }
            void bind(){
                glBindRenderbuffer(GL_RENDERBUFFER, mId);
            }
            void unbind(){
                glBindRenderbuffer(GL_RENDERBUFFER, 0);
            }            
            void alloc(){
                glRenderbufferStorage(GL_RENDERBUFFER, mFormat, mWidth, mHeight);
            }
    };


	class FBO {
	
		private:

			int mWidth;
			int mHeight;
			
			
			GL::TYPE    mType;
			GL::FORMAT  mFormat;
			GL::ATTACH  mAttachment;
			
            int mNumAttachments;
			
			GLuint mId;
        
            GLuint mDepthId, mColorId, mStencilId;
						
			float mClearColor[4];		///< clear color for bind()
			float mClearDepth;          ///< clear depth for unbind()
			
			bool mAutoClear;  
			
		
		public:
		
			FBO();
            
			   /// Get GL status
			GLenum status();

            //Create From Texture Parameters
            FBO( Texture& t, GL::ATTACH att = GL::COLOR);
			
            void generate();
        
			GLuint id() const { return mId; }
			
			void bind(){
				glBindFramebuffer(GL_FRAMEBUFFER, mId);

			    GL::error("FBO BIND");
			}
			void unbind() {
                glBindFramebuffer(GL_FRAMEBUFFER, 0);  

				GL::error("FBO UNBIND"); 
            }			
            
            //attach to texture
            void init();
            void init(Texture*, GL::ATTACH = GL::COLOR);
			
 
        
			void attachRenderBuffer(int width, int height, GL::ATTACH = GL::COLOR );
            GLint attachTextureBuffer(int width, int height, GL::ATTACH = GL::COLOR );
        
			void attachment(GL::ATTACH g) { mAttachment = g; }
            
            /// Get Number of Attachments
            int numAttachments() const { return mNumAttachments; }
            int& numAttachments() { return mNumAttachments; }
           
            /// Set Clear Color 
			void clearColor(float r, float g, float b, float a) {
				mClearColor[0] = r; mClearColor[1] = g;
				mClearColor[2] = b; mClearColor[3] = a;
			}

            //typically att = GL::DEPTH
            void attach(const RBO& rbo, GL::ATTACH att){
                bind();    
                glFramebufferRenderbuffer(GL_FRAMEBUFFER, att, GL_RENDERBUFFER, rbo.id());  
              	GL::error("FBO RenderBuffer"); 
                mNumAttachments += 1;
                unbind();
            }

            //typically att = GL::COLOR, note exception for cubemap
            void attach(const Texture& t, GL::ATTACH att = GL::COLOR){
               	bind();
                glFramebufferTexture2D(GL_FRAMEBUFFER, att, t.target(), t.idx(), 0);   
				GL::error("FBO texture attach");  
                unbind();
            }
            
            void attachCubeMap(const Texture& t, GL::ATTACH att = GL::COLOR){
               	bind();
                for (int i = 0; i < 6; ++i){
                    glFramebufferTexture2D(GL_FRAMEBUFFER, att+i, GL::CUBEMAPX+i, t.idx(), 0);
                }
                unbind();            
            }

            /// should be an operation GLOB :: Attach ( )...
			static void Attach(FBO*, Texture*,  GL::ATTACH);
            
            static const GLint Current(){
                GLint tmp_id;
                glGetIntegerv(GL_FRAMEBUFFER_BINDING, &tmp_id);
                return tmp_id;
            }
            
            static const void Unbind(){
                    glBindFramebuffer(GL_FRAMEBUFFER, 0);
                    GL::error("FBO unbind");
            }
			
            static const GLuint Gen(){
                GLuint tmp;
                glGenFramebuffers(1, &tmp);
                glBindFramebuffer(GL_FRAMEBUFFER, tmp);
                return tmp;
            }
        
            static const void Bind(GLint t){
                glBindFramebuffer(GL_FRAMEBUFFER, t);
                GL::error("FBO BIND");
            }
        
            static const void Discard(GL::ATTACH * t){
            #ifdef IOS_PROJECT
                glDiscardFramebufferEXT(GL_FRAMEBUFFER, 1, (GLenum*)t);
            #endif
            }
	};           
	
   inline FBO :: FBO() : 
	mAutoClear(true),
	mId(0),
	mWidth(0),
	mHeight(0),
	mNumAttachments(0),
	mAttachment(GL::COLOR),
	mClearDepth(1)
	{
		clearColor(0,0,0,1);
	    generate();
	}

	inline FBO :: FBO(Texture& texture, GL::ATTACH att) : 
	mAutoClear(true),
	mId(0),
	mWidth(0),
	mHeight(0),
	mNumAttachments(0),
	mAttachment(att),
	mClearDepth(1)
	{
		clearColor(0,0,0,1);
	    init(&texture, att);
	}

	inline void FBO :: init(){
	    generate();
	    bind();
	}

	//Init from Texture or elsewhere
	inline void FBO :: init(Texture *t, GL::ATTACH att) {

	    mAttachment = att;

		mWidth = t->width();
		mHeight = t->height();

	    generate();

		Attach(this, t, mAttachment);	

		attachRenderBuffer(mWidth, mHeight, att);
	}

	inline void FBO :: generate(){
	    glGenFramebuffers(1, &mId);
	    GL::error("FBO Generate");    
	}

   
	inline void FBO :: attachRenderBuffer(int width, int height, GL::ATTACH type) {

	    GLuint * tIdx;

	    GL::IFORMAT tFormat;
	    GL::ATTACH tAttach;

	    switch (type){
	        case GL::DEPTH:
	            tIdx = &mDepthId;
	            tFormat = GL::DEPTHCOMP;
	            tAttach = GL::DEPTH;
	            break;
	        case GL::STENCIL:
	            tIdx = &mStencilId;
	            tFormat = GL::STENCILIDX;
	            tAttach = GL::STENCIL;            
	            break;
	        case GL::COLOR:
	            tIdx = &mColorId;
	            tFormat = GL::RGBA4;
	            tAttach = GL::COLOR;
	            break;
	    }

		// generate a new renderbuffer at tIdx
		glGenRenderbuffers(1, tIdx);
		glBindRenderbuffer(GL_RENDERBUFFER, *tIdx);

	    //allocate storage
		glRenderbufferStorage(GL_RENDERBUFFER, tFormat, width, height);
		glBindRenderbuffer(GL_RENDERBUFFER, 0);

	    //Bind in this and attach to render buffer
		glBindFramebuffer(GL_FRAMEBUFFER, mId);    
		glFramebufferRenderbuffer(GL_FRAMEBUFFER, tAttach, GL_RENDERBUFFER, *tIdx);

	    mNumAttachments += 1;

	}

	inline GLint FBO :: attachTextureBuffer(int width, int height, GL::ATTACH type) {

	    GLuint * tIdx;

	    GL::IFORMAT tFormat;
	    GL::ATTACH tAttach;

	    switch (type){
	        case GL::DEPTH:
	            tIdx = &mDepthId;
	            tFormat = GL::DEPTHCOMP;
	            tAttach = GL::DEPTH;
	            break;
	        case GL::STENCIL:
	            tIdx = &mStencilId;
	            tFormat = GL::STENCILIDX;
	            tAttach = GL::STENCIL;            
	            break;
	        case GL::COLOR:
	            tIdx = &mColorId;
	            tFormat = GL::RGBA4;
	            tAttach = GL::COLOR;
	            break;
	    }

	    GLint texid = Texture::Gen(mWidth, mHeight, tFormat);

	    //Bind in this and attach to render buffer
	    glBindFramebuffer(GL_FRAMEBUFFER, mId);    
	    glFramebufferTexture2D(GL_FRAMEBUFFER, tAttach, GL_TEXTURE_2D, texid, 0); 
	 	GL::error("FBO ATTACH"); 
	    mNumAttachments += 1;
	    return texid;

	}

	inline GLenum FBO :: status() {
		GLenum stat = glCheckFramebufferStatus(GL_FRAMEBUFFER);
	    if (stat != GL_FRAMEBUFFER_COMPLETE){
	        printf("fbo fail/n");
	    }
	    return stat;
	}

	//Attaches texture t to framebuffer f at buffer _buf (color, depth, etc)
   inline void FBO :: Attach(FBO *f, Texture *t, GL::ATTACH _buf) {

	//    GLint tmp = FBO::Current();

		//set texture's fbo attachment point buffer (color, depth, or stencil)
	//	t->fbo().attachment(_buf);

		//call forth buffer
		glBindFramebuffer(GL_FRAMEBUFFER, f->id());

		//wipe out texture
		t->nullBind();
		//attach
		glFramebufferTexture2D(GL_FRAMEBUFFER, _buf, t->target(), t->idx(), 0);
		//back
		t->unbind();

		//increment attachments of FBO
		f -> numAttachments() += 1;

	    GL::error("FBO ATTACH");
	}  
	
 
	

} // ctl::

#endif