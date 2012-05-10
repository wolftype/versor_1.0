uniform vec3 eye;
uniform vec3 dir;
uniform float scale;
varying vec4 pos;

void main(void) {
    
    float t = length(pos) / scale ;
    gl_FragColor = vec4(t,1,1,1);  //texture2D(tex, texco);//vec4(1,1,1,1);//colorDst;
}