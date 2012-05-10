uniform vec3 utnv;
uniform vec3 upos;
varying vec4 pos;

void main(void) {
    
    vec4 modp = gl_Vertex;
    
    pos = gl_ModelViewProjectionMatrix * modp;
    
    gl_Position = pos;
    
}