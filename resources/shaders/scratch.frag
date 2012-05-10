uniform vec3 light;
uniform float scale;
varying vec3 EN;


void main(void) {
    
    float ts = scale;
    
    float t = dot(normalize(EN), normalize(light));
    gl_FragColor = vec4(t,1.,1.,1. ) ;
}