/*
 
 Basic Vertex Data Shader 

*/

attribute vec3 position;
attribute vec3 normal;
attribute vec4 sourceColor;
attribute vec2 texCoord;
//normal

//LIGHTING
uniform vec3 lightPosition;
uniform vec3 ambientColor;
//uniform vec3 diffuseMaterial;
uniform vec3 specularColor;

uniform mat4 model;             // Model Transformation Matrix (Rot, Trs, Scl)
uniform mat4 view;              // Camera Transformation Matrix (Rot and Trs)
uniform mat4 modelView;         // Model * View
uniform mat4 projection;        // Projection Matrix (ortho or frustrum)

varying vec4 colorDst;
varying vec2 texco;

//Calculate Lighting
vec4 color(){
    
    vec3 L = normalize(lightPosition);
    vec3 N = normalize( ( view * model * vec4(normal,1)).xyz );
    vec3 E = vec3(0,0,1); //Infinite Viewer
    vec3 H = normalize( L + E );
    
    //Diffusion Coefficient
    float df = max(0.0, dot(N,L) );

    //Specular Coefficient
    float sf = max(0.0, dot(L,H) );
        
    return vec4((sourceColor * df).xyz , 1 );
}

void main(void) {
    
    vec3 tn = normal;    
    texco = texCoord;    
    colorDst = color();
    
    //VERTEX TRANSFORMATION
    vec4 np =  vec4(position,1);
    mat4 nmodel = model;
    mat4 nview = view;
    mat4 nproj = projection;            //gl_ProjectionMatrix;
    mat4 nmvm = modelView;
    mat4 mvm = view * model;//               //gl_ModelViewMatrix;
    mat4 combo = nproj * mvm; //gl_ProjectionMatrix * gl_ModelViewMatrix;//
    gl_Position = combo * np;

}