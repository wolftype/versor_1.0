

uniform vec3 utnv;
uniform vec3 upos;

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



Par sp (const Tnv t2, const Trs t1) {					
    
    Tnv_Flp t3  = Tnv_Flp(
    t1.e1ni * t2.e1no + t1.e2ni * t2.e2no + t1.e3ni * t2.e3no,
    t1.e1ni * t2.e2no - t1.e2ni * t2.e1no,
    t1.e1ni * t2.e3no - t1.e3ni * t2.e1no,
    t1.e2ni * t2.e3no - t1.e3ni * t2.e2no,
    t1.s * t2.e1no,
    t1.s * t2.e2no,
    t1.s * t2.e3no,
    t1.e1ni * t2.e1no + t1.e2ni * t2.e2no + t1.e3ni * t2.e3no,
    t1.e1ni * t2.e2no - t1.e2ni * t2.e1no,
    t1.e1ni * t2.e3no - t1.e3ni * t2.e1no,
    t1.e2ni * t2.e3no - t1.e3ni * t2.e2no
    );
    Trs t5 = reverse( t1);
    return Par (
    t3.e12 * t5.s + t3.e1no * t5.e2ni - t3.e2no * t5.e1ni,
    t3.e13 * t5.s + t3.e1no * t5.e3ni - t3.e3no * t5.e1ni,
    t3.e23 * t5.s + t3.e2no * t5.e3ni - t3.e3no * t5.e2ni,
    t3.e1no * t5.s,
    t3.e2no * t5.s,
    t3.e3no * t5.s,
    t3.s * t5.e1ni + t3.e12 * t5.e2ni + t3.e13 * t5.e3ni + t3.noni * t5.e1ni + t3.e12noni * t5.e2ni + t3.e13noni * t5.e3ni,
    t3.s * t5.e2ni - t3.e12 * t5.e1ni + t3.e23 * t5.e3ni + t3.noni * t5.e2ni - t3.e12noni * t5.e1ni + t3.e23noni * t5.e3ni,
    t3.s * t5.e3ni - t3.e13 * t5.e1ni - t3.e23 * t5.e2ni + t3.noni * t5.e3ni - t3.e13noni * t5.e1ni - t3.e23noni * t5.e2ni,
    - t3.e1no * t5.e1ni - t3.e2no * t5.e2ni - t3.e3no * t5.e3ni + t3.noni * t5.s
    );
    
}


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
    
    //Create Boost Spinor from Tnv and Pos uniforms
    Tnv tnv = Tnv( utnv.x, utnv.y, utnv.z );                                //Tangent
    Trs trs = Trs( 1.0, upos.x * -.5, upos.y * -.5, upos.z * -.5);          //Translator
    Par par = sp( tnv, trs );                                               //Translated Tangent
    
    Pnt pnt = sp( p, pp(par) );                                             //Transform CGA Point
    
    modp = vec4( euc3( cen ( pnt ) ), 1.0 );                                //Cast back center of transformed point to vec4

    gl_Position = gl_ModelViewProjectionMatrix * modp ;
        
}