/*
 *  vsr_gl_fbo.h
 *  CONGA_07
 *
 *  Created by x on 1/8/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

#ifndef VSR_GL_FBO_H_INCLUDED
#define VSR_GL_FBO_H_INCLUDED

#include "vsr_gl_texture.h"

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
set the viewport to be the size of the ipad/iphone window

--now we are back to normal clip space and you can use textureA in
other shaders, etc--

then call iOS's "presentFramebuffer" to transfer the color attachement
of the default EAGL_fbo to the screen

}
*/

#include "vsr_gl.h"

namespace vsr {


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
			
            void generate();
        
			GLuint id() const { return mId; }
			
			void bind();
			void unbind();			
            
            //attach to texture
            void init();
            void init(Texture*, GL::ATTACH = GL::COLOR);
            
			void startCapture(Texture *);
			void endCapture();
        
			void enter();
			void leave();
			
			GLenum status();
			
        
        
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

} // con::

#endif