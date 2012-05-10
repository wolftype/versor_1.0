/*
 
 Basic Vertex Data Shader (NOT fixed pipeline)
 
 */

//Passed in by Camera class:
uniform mat4 proj;  // Projection Matrix (ortho or frustrum)
uniform mat4 cam;   // Camera Transformation Matrix (Rot and Trs)
uniform mat4 mod;   // Model Transformation Matrix (Rot, Trs, Scl)

//Passed in per vertex (as vbo or vertex array)
attribute vec3 position;
attribute vec4 colorSrc;
attribute vec2 texCoord;

//normal?

//Output to fragment shader
varying vec4 colorDst;
varying vec2 texco;


int main {
 
    mat4 mvm = cam * mod;
    
    colorDst = colorSrc;
    texco = texCoord;
    
    gl_Position = proj * mvm * position;
}