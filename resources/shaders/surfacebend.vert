#version 120

struct UPar {
    vec3 biv;
    vec3 tnv;
    vec3 drv;
    float mnk;
};
//Point Pair Surface Control Points (localized Tangents)
uniform UPar par0;
uniform UPar par1;
uniform UPar par2;
uniform UPar par3;

uniform float amt;
uniform vec3 corner; //bottom left
uniform vec2 dim; //uniform vec3 corner1;
//uniform vec3 corner2;
//uniform vec3 corner3;

varying vec4 modp;

struct Sca {
    float s;
};
struct Inf {
    float ni;
};
struct Pnt {
    float e1,e2,e3,no,ni;
};
struct Par {
    float e12,e13,e23,e1no,e2no,e3no,e1ni,e2ni,e3ni,noni;
};
struct Tnv {
    float e1no,e2no,e3no;
};
struct Pnt_Pnt {
    float s,e12,e13,e23,e1no,e2no,e3no,e1ni,e2ni,e3ni,noni;
};
struct Trs {
    float s,e1ni,e2ni,e3ni;
};
struct Trv {
    float s,e1no,e2no,e3no;
};
struct Tnv_Flp {
    float s,e12,e13,e23,e1no,e2no,e3no,noni,e12noni,e13noni,e23noni;
};
struct Pnt_Par {
    float e1,e2,e3,no,ni,e12no,e13no,e23no,e12ni,e13ni,e23ni,e1noni,e2noni,e3noni,e123;
};

Par from(vec3 biv, vec3 tnv, vec3 trs, float s){
    return Par(biv.x, biv.y, biv.z, tnv.x, tnv.y, tnv.z, trs.x, trs.y, trs.z, s); 
}

Par from(UPar a){
    return from( a.biv, a.tnv, a.drv, a.mnk);
}

UPar mix (UPar a, UPar b, float t ){
    return UPar( mix(a.biv, b.biv, t), mix(a.tnv, b.tnv, t), mix(a.drv, b.drv, t), mix(a.mnk, b.mnk, t) );
}

Par gp (Par p, float t){
    return Par( p.e12*t,p.e13*t,p.e23*t,p.e1no*t,p.e2no*t,p.e3no*t,p.e1ni*t,p.e2ni*t,p.e3ni*t,p.noni*t );
}

//Par from(mat4x3 m){
//    return from( m[0], m[1], m[2], m[3][0] );  
//}
//Par from(mat4 m){
//    return from( m[0], m[1], m[2], m[3][0] );  
//}

//Really an "mtt"
Sca gp (const Pnt_Pnt a, const Pnt_Pnt b){
    return Sca ( a.s * b.s - a.e12 * b.e12 - a.e13 * b.e13 - a.e23 * b.e23 + a.e1no * b.e1ni + a.e2no * b.e2ni + a.e3no * b.e3ni + a.e1ni * b.e1no + a.e2ni * b.e2no + a.e3ni * b.e3no + a.noni * b.noni);
}

Pnt_Pnt gp (const Pnt_Pnt a, const Sca b) { 
	return Pnt_Pnt (
                    a.s * b.s,
                    a.e12 * b.s,
                    a.e13 * b.s,
                    a.e23 * b.s,
                    a.e1no * b.s,
                    a.e2no * b.s,
                    a.e3no * b.s,
                    a.e1ni * b.s,
                    a.e2ni * b.s,
                    a.e3ni * b.s,
                    a.noni * b.s
                    );
}

Trs gp (const Trs a, const Trs b) { 
	return Trs (
                a.s * b.s,
                a.s * b.e1ni + a.e1ni * b.s,
                a.s * b.e2ni + a.e2ni * b.s,
                a.s * b.e3ni + a.e3ni * b.s
                );
}			


Trs gp (const Trs a, const Sca b) { 
	return Trs (
                a.s * b.s,
                a.e1ni * b.s,
                a.e2ni * b.s,
                a.e3ni * b.s
                );
}

// Reversion
Pnt_Pnt reverse (const Pnt_Pnt a) { 
	return Pnt_Pnt (a.s,-a.e12,-a.e13,-a.e23,-a.e1no,-a.e2no,-a.e3no,-a.e1ni,-a.e2ni,-a.e3ni,-a.noni);
}

Pnt_Pnt inverse (const Pnt_Pnt a){
    Pnt_Pnt r = reverse(a);
    Sca s = gp(a,r);
    return gp(r, Sca(1.0/s.s) );
}

Trs reverse (const Trs a) { 
	return Trs (a.s,-a.e1ni,-a.e2ni,-a.e3ni);
}

/// Inversion (weighted)
Trs inverse (const Trs a){
    Trs r = reverse(a);
    Trs s = gp(a, r); //        if (s[0] == 0 ) return sr;
    return   gp(r, Sca( 1.0 / s.s ) ); 
}

Pnt gp (const Pnt a, const Sca b) { 
	return Pnt (
                a.e1 * b.s,
                a.e2 * b.s,
                a.e3 * b.s,
                a.no * b.s,
                a.ni * b.s
                );
}

Sca ip (Inf a, Pnt b) { 
	return Sca (
                - a.ni * b.no
                );
}


//Point from Vector
Pnt null(const vec4 s){
    vec3 v = s.xyz;
    return Pnt ( s.x, s.y, s.z, 1.0, dot(v,v) / 2.0 );
}
//Vector from Piont
vec3 euc3(const Pnt p){
    return vec3(p.e1, p.e2, p.e3);
}
//Vector from Piont
vec4 euc(const Pnt p){
    return vec4(p.e1, p.e2, p.e3, 1.0);
}
//Point from Point
Pnt null(const Pnt s){
    vec3 v = euc3(s);
    return Pnt ( v.x, v.y, v.z, 1.0, dot(v,v) / 2.0 );
}

//Null Center of Round Element
Pnt cen(const Pnt p) {
    Sca s = ip( Inf(-1.0), p );
    return null ( gp(p, Sca( 1.0 / s.s) ) );
}


//Point Point ratio from Par
Pnt_Pnt pp(const Par p){
    return Pnt_Pnt(1.0, p.e12,p.e13,p.e23,p.e1no,p.e2no,p.e3no,p.e1ni,p.e2ni,p.e3ni,p.noni);
}

//



//Par sp (const Tnv t2, const Trs t1) {					
//    
//    Tnv_Flp t3  = Tnv_Flp(
//                          t1.e1ni * t2.e1no + t1.e2ni * t2.e2no + t1.e3ni * t2.e3no,
//                          t1.e1ni * t2.e2no - t1.e2ni * t2.e1no,
//                          t1.e1ni * t2.e3no - t1.e3ni * t2.e1no,
//                          t1.e2ni * t2.e3no - t1.e3ni * t2.e2no,
//                          t1.s * t2.e1no,
//                          t1.s * t2.e2no,
//                          t1.s * t2.e3no,
//                          t1.e1ni * t2.e1no + t1.e2ni * t2.e2no + t1.e3ni * t2.e3no,
//                          t1.e1ni * t2.e2no - t1.e2ni * t2.e1no,
//                          t1.e1ni * t2.e3no - t1.e3ni * t2.e1no,
//                          t1.e2ni * t2.e3no - t1.e3ni * t2.e2no
//                          );
//    Trs t5 = reverse( t1);
//    return Par (
//                t3.e12 * t5.s + t3.e1no * t5.e2ni - t3.e2no * t5.e1ni,
//                t3.e13 * t5.s + t3.e1no * t5.e3ni - t3.e3no * t5.e1ni,
//                t3.e23 * t5.s + t3.e2no * t5.e3ni - t3.e3no * t5.e2ni,
//                t3.e1no * t5.s,
//                t3.e2no * t5.s,
//                t3.e3no * t5.s,
//                t3.s * t5.e1ni + t3.e12 * t5.e2ni + t3.e13 * t5.e3ni + t3.noni * t5.e1ni + t3.e12noni * t5.e2ni + t3.e13noni * t5.e3ni,
//                t3.s * t5.e2ni - t3.e12 * t5.e1ni + t3.e23 * t5.e3ni + t3.noni * t5.e2ni - t3.e12noni * t5.e1ni + t3.e23noni * t5.e3ni,
//                t3.s * t5.e3ni - t3.e13 * t5.e1ni - t3.e23 * t5.e2ni + t3.noni * t5.e3ni - t3.e13noni * t5.e1ni - t3.e23noni * t5.e2ni,
//                - t3.e1no * t5.e1ni - t3.e2no * t5.e2ni - t3.e3no * t5.e3ni + t3.noni * t5.s
//                );
//    
//}


//Boost Pnt 
Pnt sp (const Pnt t2, const Pnt_Pnt t1) {					
    
    Pnt_Par t3  = Pnt_Par(
                          t1.s * t2.e1 + t1.e12 * t2.e2 + t1.e13 * t2.e3 - t1.e1no * t2.ni - t1.e1ni * t2.no,
                          t1.s * t2.e2 - t1.e12 * t2.e1 + t1.e23 * t2.e3 - t1.e2no * t2.ni - t1.e2ni * t2.no,
                          t1.s * t2.e3 - t1.e13 * t2.e1 - t1.e23 * t2.e2 - t1.e3no * t2.ni - t1.e3ni * t2.no,
                          t1.s * t2.no - t1.e1no * t2.e1 - t1.e2no * t2.e2 - t1.e3no * t2.e3 - t1.noni * t2.no,
                          t1.s * t2.ni - t1.e1ni * t2.e1 - t1.e2ni * t2.e2 - t1.e3ni * t2.e3 + t1.noni * t2.ni,
                          t1.e12 * t2.no - t1.e1no * t2.e2 + t1.e2no * t2.e1,
                          t1.e13 * t2.no - t1.e1no * t2.e3 + t1.e3no * t2.e1,
                          t1.e23 * t2.no - t1.e2no * t2.e3 + t1.e3no * t2.e2,
                          t1.e12 * t2.ni - t1.e1ni * t2.e2 + t1.e2ni * t2.e1,
                          t1.e13 * t2.ni - t1.e1ni * t2.e3 + t1.e3ni * t2.e1,
                          t1.e23 * t2.ni - t1.e2ni * t2.e3 + t1.e3ni * t2.e2,
                          t1.e1no * t2.ni - t1.e1ni * t2.no + t1.noni * t2.e1,
                          t1.e2no * t2.ni - t1.e2ni * t2.no + t1.noni * t2.e2,
                          t1.e3no * t2.ni - t1.e3ni * t2.no + t1.noni * t2.e3,
                          t1.e12 * t2.e3 - t1.e13 * t2.e2 + t1.e23 * t2.e1
                          );
    Pnt_Pnt t5 = reverse( t1);
    return Pnt (
                t3.e1 * t5.s - t3.e2 * t5.e12 - t3.e3 * t5.e13 + t3.no * t5.e1ni + t3.ni * t5.e1no + t3.e12no * t5.e2ni + t3.e13no * t5.e3ni + t3.e12ni * t5.e2no + t3.e13ni * t5.e3no + t3.e1noni * t5.noni - t3.e123 * t5.e23,
                t3.e1 * t5.e12 + t3.e2 * t5.s - t3.e3 * t5.e23 + t3.no * t5.e2ni + t3.ni * t5.e2no - t3.e12no * t5.e1ni + t3.e23no * t5.e3ni - t3.e12ni * t5.e1no + t3.e23ni * t5.e3no + t3.e2noni * t5.noni + t3.e123 * t5.e13,
                t3.e1 * t5.e13 + t3.e2 * t5.e23 + t3.e3 * t5.s + t3.no * t5.e3ni + t3.ni * t5.e3no - t3.e13no * t5.e1ni - t3.e23no * t5.e2ni - t3.e13ni * t5.e1no - t3.e23ni * t5.e2no + t3.e3noni * t5.noni - t3.e123 * t5.e12,
                t3.e1 * t5.e1no + t3.e2 * t5.e2no + t3.e3 * t5.e3no + t3.no * t5.s + t3.no * t5.noni - t3.e12no * t5.e12 - t3.e13no * t5.e13 - t3.e23no * t5.e23 - t3.e1noni * t5.e1no - t3.e2noni * t5.e2no - t3.e3noni * t5.e3no,
                t3.e1 * t5.e1ni + t3.e2 * t5.e2ni + t3.e3 * t5.e3ni + t3.ni * t5.s - t3.ni * t5.noni - t3.e12ni * t5.e12 - t3.e13ni * t5.e13 - t3.e23ni * t5.e23 + t3.e1noni * t5.e1ni + t3.e2noni * t5.e2ni + t3.e3noni * t5.e3ni
                );
    
}

void main(void) {
    
    //Convert vertex to CGA point
    Pnt p = null(gl_Vertex);
    
    vec4 v =  gl_Vertex;
    
    //create spinor based on percentage between left and right of screen
    float left  =  ( v.x - corner.x) / dim.x;
    float top   =  ( v.y - corner.y ) / dim.y;
    
    UPar lrb  = mix(par0, par1, left);
    UPar lrt  = mix(par3, par2, left);
    UPar fin  = mix(lrb,lrt, top);
    
    Par par = from( fin );    
    
    Pnt pnt = sp( p, pp( gp(par,amt)) );                      //Transform CGA Point by interpolated Spinor
    
    modp = vec4( euc3( cen ( pnt ) ), 1.0 );         //Cast back center of transformed point to vec4
    
    gl_Position = gl_ModelViewProjectionMatrix * modp ;
    
}