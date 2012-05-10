attribute vec3 normal;
uniform vec3 eye;
varying vec3 EN;

//uniform vec3 utnv;
//uniform vec3 upos;
//varying vec4 texpos;


void main(void) {
    

    vec4 tv = gl_ModelViewMatrix * vec4(normal,1);
    
    EN  = tv.xyz;
    
    vec4 modp = gl_Vertex;
    
    vec4 pos = gl_ModelViewProjectionMatrix * modp;
    
    //texpos = modp;
    
    gl_Position = pos;
    
}