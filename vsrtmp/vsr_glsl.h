//
//  vsr_glsl.h
//  Versor
/*

    FOR BUILDING GLSL SHADER PROGRAMS UP FROM COMMONLY USED SMALLER PIECES OF CODE

*/
//  Created by Pablo Colapinto on 2/28/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_glsl_h
#define Versor_vsr_glsl_h

#include "vsr_file.h"

namespace vsr{

    namespace GLSL{
        
        string AVertex = STRINGIFY(
            attribute vec3 position;
            attribute vec3 normal;
            attribute vec4 sourceColor;
            attribute vec2 texCoord;
        );
        
        string UMatrix = STRINGIFY(
 //           uniform mat4 modelView;         // Model * View
 //           uniform mat4 submodel;          // Glyph-specific Transform
//            uniform mat4 projection;        // Projection Matrix (ortho or frustrum)
            uniform mat4 modelViewProjection;        // Projection Matrix (ortho or frustrum)
            uniform mat4 normalMatrix;      // Normal Matrix (inverse transpose of mvm)
        );
        
        string ULight = STRINGIFY(
            uniform vec3 lightPosition;
        );
        
        string ULightProperty = STRINGIFY(
            uniform vec3 ambientColor;
            uniform vec3 diffuseMaterial;
            uniform vec3 specularColor;
        );
        
        string USampler = STRINGIFY(
            uniform sampler2D sampleTexture;
        );
        
        string USamplerCube = STRINGIFY(
            uniform samplerCube sampleTexture;
        );
        
        //Pass from Vertex to Fragment Shader
        string Varying = STRINGIFY(
            varying vec4 colorDst;
            varying vec2 texco;
        );
        

        
        string VColor = STRINGIFY(
            varying vec4 colorDst;
        );

        string VTex = STRINGIFY(
            varying vec2 texco;
        );
//        
//        string ColorCube = STRINGIFY(
//            
//        );
        
        string NTransform = STRINGIFY(
           vec3 doNormal(vec4 n) {
                return normalize( ( normalMatrix * n ).xyz );
            }
        );
        
        string VPass = STRINGIFY(
            vec4 doVertex (vec4 v) { return gl_ModelViewProjectionMatrix * v; }
        );

        string VCalc = STRINGIFY(
            vec4 doVertex (vec4 v) {
                mat4 m = modelViewProjection;// * submodel;//projection * modelView * submodel;
                return m * v;
            }
        );

        //Calculate Lighting
        string VLighting = STRINGIFY(
            
            uniform vec3 lightPosition;
            
            vec4 doColor(){
                
                //Infinite Viewer
                vec3 L = normalize( lightPosition );
                vec3 N = doNormal( vec4(normal,1.0) );
                vec3 E = vec3(0,0,1); 
                vec3 H = normalize( L + E );
                
                //Diffusion Coefficient
                float df = max(0.0, dot(N,L) );

                //Specular Coefficient
                float sf = max(0.0, dot(L,H) );
                    
                return vec4((sourceColor * df).xyz , 1 );
            }

        );

        string MVert = STRINGIFY(
            
            void main(void){
            
                colorDst = doColor();
                
                texco = texCoord;
                                
                vec4 pos =  vec4(position,1.0);
                vec4 nor = vec4(normal,1.0);
                
                //xm = submodel;
                
                gl_Position = doVertex(pos);
            }
        );
        
        
         string MFrag = STRINGIFY(
            
            void main(void){
                
                vec4 litColor = colorDst;
                
                vec4 texColor = texture2D(sampleTexture, texco);
                
                gl_FragColor = litColor ;
            }
        );       
        
        
        //cubemapping function [in progress]
        string VMakeCubemap = STRINGIFY(
            
            uniform cmFace;
            varying vec3 vTexDir;
             
            vec4 cubemap(vec4 vertex){
                vec3 n = normalize(vertex.xyz); //NORMAL
                
				// GL_TEXTURE_CUBE_MAP_POSITIVE_X  	
                if (cmFace == 0) { vertex.xyz = vec3(-vertex.z, -vertex.y, -vertex.x); }	
				// GL_TEXTURE_CUBE_MAP_NEGATIVE_X	
				else if (cmFace == 1) { vertex.xyz = vec3( vertex.z, -vertex.y,  vertex.x); }	
				// GL_TEXTURE_CUBE_MAP_POSITIVE_Y  	
				else if (cmFace == 2) { vertex.xyz = vec3( vertex.x,  vertex.z, -vertex.y); }	
				// GL_TEXTURE_CUBE_MAP_NEGATIVE_Y 	
				else if (cmFace == 3) { vertex.xyz = vec3( vertex.x, -vertex.z,  vertex.y); }	
				// GL_TEXTURE_CUBE_MAP_POSITIVE_Z  	
				else if (cmFace == 4) { vertex.xyz = vec3( vertex.x, -vertex.y, -vertex.z); }	
				// GL_TEXTURE_CUBE_MAP_NEGATIVE_Z   
				else				  { vertex.xyz = vec3(-vertex.x, -vertex.y,  vertex.z); }	
                
                // convert into screen-space:	
				// simplified perspective projection since fovy = 90 and aspect = 1	
				vertex.zw = vec2(	
					(vertex.z*(uFar+uNear) + vertex.w*uFar*uNear*2.)/(uNear-uFar),	
					-vertex.z	
				);	
				return vertex;	
            }
        );
        
        string FUseCubemap = STRINGIFY(
            uniform samplerCube cubeMap;            
            varying vec3 vTexDir;
            
            void main(void){
                textureCube(cubeMap, vTexDir).rgb 
            }
        );

        
    }

}

#endif
