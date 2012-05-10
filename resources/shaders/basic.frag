//For Raytracing / Raymarching

//EYE POSITION
uniform vec3 eye;
//LOOK AT DIRECTION
uniform vec3 dir;
//Scaling
uniform float scale;
uniform vec2 ratio;
uniform vec3 bottomLeft;
uniform vec3 topRight;
uniform vec3 bottomRight;
uniform vec3 topLeft;
//pixel width and height
uniform vec2 screen;

varying vec4 modp;

struct Sca {
    float s;
};
struct Inf {
    float ni;
};
struct Pss {
    float e123noni;
};
struct Vec {
    float e1,e2,e3;
};
struct Biv {
    float e12,e13,e23;
};
struct Drv {
    float e1ni,e2ni,e3ni;
};
struct Dlp {
    float e1,e2,e3,ni;
};
struct Drb {
    float e12ni,e13ni,e23ni;
};
struct Sph {
    float e12noni,e13noni,e23noni,e123no,e123ni;
};
struct Pnt {
    float e1,e2,e3,no,ni;
};
struct Dll {
    float e12,e13,e23,e1ni,e2ni,e3ni;
};

Dll gp (Dll dll, float t){
    return Dll(dll.e12 * t ,dll.e13*t ,dll.e23*t ,dll.e1ni*t ,dll.e2ni*t ,dll.e3ni*t );
}
Dll sum(Dll a, Dll b){
    return Dll( a.e12 + b.e12,a.e13 + b.e13,a.e23 + b.e23,a.e1ni + b.e1ni,a.e2ni + b.e2ni,a.e3ni + b.e3ni );
}

struct Lin {
    float e12ni,e13ni,e23ni,e1noni,e2noni,e3noni;
};

struct Cir {
    float e12no,e13no,e23no,e12ni,e13ni,e23ni,e1noni,e2noni,e3noni,e123;
};

struct Par {
    float e12,e13,e23,e1no,e2no,e3no,e1ni,e2ni,e3ni,noni;
};

struct Pnt_Pnt {
    float s,e12,e13,e23,e1no,e2no,e3no,e1ni,e2ni,e3ni,noni;
};
struct Tri {
    float e123;
};

struct Mot {
    float s,e12,e13,e23,e1ni,e2ni,e3ni,e123ni;
};
struct Rtc {
    float e1,e2,e3,no,ni,e12no,e13no,e23no,e12ni,e13ni,e23ni,e1noni,e2noni,e3noni,e123,e123noni;
};
struct Vec_Biv {
    float e1,e2,e3,e123;
};
//REVERSION
Mot reverse (Mot a) { 
	return Mot (a.s,-a.e12,-a.e13,-a.e23,-a.e1ni,-a.e2ni,-a.e3ni,a.e123ni);
}

Biv reverse (Biv a) { 
	return Biv (-a.e12,-a.e13,-a.e23);
}
//INVOLUTION
Pnt involute (Pnt a) { 
	return Pnt (-a.e1,-a.e2,-a.e3,-a.no,-a.ni);
}


Drb gp (Biv a, Inf b) { 
	return Drb (
                a.e12 * b.ni,
                a.e13 * b.ni,
                a.e23 * b.ni
                );
}			

Sca ip (Pnt a, Pnt b) { 
	return Sca (
                a.e1 * b.e1 + a.e2 * b.e2 + a.e3 * b.e3 - a.no * b.ni - a.ni * b.no
                );
}
Pnt_Pnt gp (Pnt a, Pnt b) { 
	return Pnt_Pnt (
                    a.e1 * b.e1 + a.e2 * b.e2 + a.e3 * b.e3 - a.no * b.ni - a.ni * b.no,
                    a.e1 * b.e2 - a.e2 * b.e1,
                    a.e1 * b.e3 - a.e3 * b.e1,
                    a.e2 * b.e3 - a.e3 * b.e2,
                    a.e1 * b.no - a.no * b.e1,
                    a.e2 * b.no - a.no * b.e2,
                    a.e3 * b.no - a.no * b.e3,
                    a.e1 * b.ni - a.ni * b.e1,
                    a.e2 * b.ni - a.ni * b.e2,
                    a.e3 * b.ni - a.ni * b.e3,
                    a.no * b.ni - a.ni * b.no
                    );
}
//DUALITY
Drv gp (Drb a, Pss b) { 
	return Drv (
                - a.e23ni * b.e123noni,
                a.e13ni * b.e123noni,
                - a.e12ni * b.e123noni
                );
}
Dll gp (Lin a, Pss b) { 
	return Dll (
                a.e3noni * b.e123noni,
                - a.e2noni * b.e123noni,
                a.e1noni * b.e123noni,
                - a.e23ni * b.e123noni,
                a.e13ni * b.e123noni,
                - a.e12ni * b.e123noni
                );
}

Cir gp (Par a, Pss b) { 
	return Cir (
                - a.e3no * b.e123noni,
                a.e2no * b.e123noni,
                - a.e1no * b.e123noni,
                a.e3ni * b.e123noni,
                - a.e2ni * b.e123noni,
                a.e1ni * b.e123noni,
                - a.e23 * b.e123noni,
                a.e13 * b.e123noni,
                - a.e12 * b.e123noni,
                a.noni * b.e123noni
                );
}	

Par gp (Cir a, Pss b) { 
	return Par (
                a.e3noni * b.e123noni,
                - a.e2noni * b.e123noni,
                a.e1noni * b.e123noni,
                a.e23no * b.e123noni,
                - a.e13no * b.e123noni,
                a.e12no * b.e123noni,
                - a.e23ni * b.e123noni,
                a.e13ni * b.e123noni,
                - a.e12ni * b.e123noni,
                - a.e123 * b.e123noni
                );
}	
Pnt gp (Sph a, Pss b) { 
	return Pnt (
                - a.e23noni * b.e123noni,
                a.e13noni * b.e123noni,
                - a.e12noni * b.e123noni,
                a.e123no * b.e123noni,
                - a.e123ni * b.e123noni
                );
}

Vec gp (Tri a, Biv b) { 
	return Vec (
                - a.e123 * b.e23,
                a.e123 * b.e13,
                - a.e123 * b.e12
                );
}
Tri op (Vec a, Biv b) { 
	return Tri (
                a.e1 * b.e23 - a.e2 * b.e13 + a.e3 * b.e12
                );
}
Vec ip (Vec a, Biv b) { 
	return Vec (
                - a.e2 * b.e12 - a.e3 * b.e13,
                a.e1 * b.e12 - a.e3 * b.e23,
                a.e1 * b.e13 + a.e2 * b.e23
                );
}

Vec_Biv gp (Vec a, Biv b) { 
	return Vec_Biv (
                    - a.e2 * b.e12 - a.e3 * b.e13,
                    a.e1 * b.e12 - a.e3 * b.e23,
                    a.e1 * b.e13 + a.e2 * b.e23,
                    a.e1 * b.e23 - a.e2 * b.e13 + a.e3 * b.e12
                    );
}			


//Line from Point and direction
Lin op (Pnt a, Drv b) { 
	return Lin (
                a.e1 * b.e2ni - a.e2 * b.e1ni,
                a.e1 * b.e3ni - a.e3 * b.e1ni,
                a.e2 * b.e3ni - a.e3 * b.e2ni,
                - a.no * b.e1ni,
                - a.no * b.e2ni,
                - a.no * b.e3ni
                );
}
//Pa ^ Pb = Par
Par op (Pnt a, Pnt b) { 
	return Par (
                a.e1 * b.e2 - a.e2 * b.e1,
                a.e1 * b.e3 - a.e3 * b.e1,
                a.e2 * b.e3 - a.e3 * b.e2,
                a.e1 * b.no - a.no * b.e1,
                a.e2 * b.no - a.no * b.e2,
                a.e3 * b.no - a.no * b.e3,
                a.e1 * b.ni - a.ni * b.e1,
                a.e2 * b.ni - a.ni * b.e2,
                a.e3 * b.ni - a.ni * b.e3,
                a.no * b.ni - a.ni * b.no
                );
}
Cir op (Par a, Pnt b) { 
	return Cir (
                a.e12 * b.no - a.e1no * b.e2 + a.e2no * b.e1,
                a.e13 * b.no - a.e1no * b.e3 + a.e3no * b.e1,
                a.e23 * b.no - a.e2no * b.e3 + a.e3no * b.e2,
                a.e12 * b.ni - a.e1ni * b.e2 + a.e2ni * b.e1,
                a.e13 * b.ni - a.e1ni * b.e3 + a.e3ni * b.e1,
                a.e23 * b.ni - a.e2ni * b.e3 + a.e3ni * b.e2,
                a.e1no * b.ni - a.e1ni * b.no + a.noni * b.e1,
                a.e2no * b.ni - a.e2ni * b.no + a.noni * b.e2,
                a.e3no * b.ni - a.e3ni * b.no + a.noni * b.e3,
                a.e12 * b.e3 - a.e13 * b.e2 + a.e23 * b.e1
                );
}			

//INTERSECTION OF LINE AND CIRCLE
Sph op (Dll a, Par b) { 
	return Sph (
                a.e12 * b.noni + a.e1ni * b.e2no - a.e2ni * b.e1no,
                a.e13 * b.noni + a.e1ni * b.e3no - a.e3ni * b.e1no,
                a.e23 * b.noni + a.e2ni * b.e3no - a.e3ni * b.e2no,
                a.e12 * b.e3no - a.e13 * b.e2no + a.e23 * b.e1no,
                a.e12 * b.e3ni - a.e13 * b.e2ni + a.e23 * b.e1ni + a.e1ni * b.e23 - a.e2ni * b.e13 + a.e3ni * b.e12
                );
}

//INNER PRODUCTIONS
Sca ip (Inf a, Pnt b) { 
	return Sca (
                - a.ni * b.no
                );
}
Dlp ip (Pnt a, Drv b) { 
	return Dlp (
                a.no * b.e1ni,
                a.no * b.e2ni,
                a.no * b.e3ni,
                a.e1 * b.e1ni + a.e2 * b.e2ni + a.e3 * b.e3ni
                );
}			


//Size of Dual Sphere
float size(Pnt p){
    Sca s = Sca(-p.ni);
    Sca s2 = ip( p, involute(p)  );
    return s2.s / -(s.s * s.s);
}
//Size of Sphere
float size(Sph sph){
    Pnt p = gp(sph, Pss(1.0) );
    Sca s = Sca(-p.ni);
    Sca s2 = ip( p, involute(p)  );
    return s2.s / -(s.s * s.s);
}

//par ^ Inf = lin = assume ni = 1
Lin op (Par a, Inf b) { 
	return Lin (
                a.e12,
                a.e13,
                a.e23,
                a.e1no,
                a.e2no,
                a.e3no
                );
}			

//Par = Dlp ^ Pnt
Par op (Dlp a, Pnt b) { 
	return Par (
                a.e1 * b.e2 - a.e2 * b.e1,
                a.e1 * b.e3 - a.e3 * b.e1,
                a.e2 * b.e3 - a.e3 * b.e2,
                a.e1 * b.no,
                a.e2 * b.no,
                a.e3 * b.no,
                a.e1 * b.ni - a.ni * b.e1,
                a.e2 * b.ni - a.ni * b.e2,
                a.e3 * b.ni - a.ni * b.e3,
                - a.ni * b.no
                );
}
//Circle of size t at point p
//Point from Vector
Pnt null(const vec3 s){
    return Pnt ( s.x, s.y, s.z, 1.0, dot(s,s) / 2.0 );
}
Pnt null(float x, float y, float z){
    return null ( vec3( x,y,z) );
}
//Point from Vector
Pnt null(const vec4 s){
    vec3 v = s.xyz;
    return Pnt ( s.x, s.y, s.z, 1.0, dot(v,v) / 2.0 );
}
//Dual Sphere from Vector
Pnt dls(const vec3 s, float r){
    return Pnt ( s.x, s.y, s.z, 1.0, ( dot(s,s) + (r * r) ) / 2.0 );
}
//Point from point
Pnt dls(const Pnt p, float r){
    vec3 v = vec3(p.e1, p.e2, p.e3);
    return  Pnt(p.e1, p.e2, p.e3, 1.0, (dot(v,v) + r * r ) / 2.0 ); 
}
//Point from Vector
Pnt dls(const vec4 s, float r){
    vec3 v = s.xyz;
    return Pnt ( s.x, s.y, s.z, 1.0, ( dot(v,v) + r * r )/ 2.0 );
}

//Dual Circle from point and biv orientation
Par round(const Pnt p, const Biv b, float radius){
    Dlp dlp = ip( involute(p), gp( Drb(b.e12, b.e13, b.e23), Pss(-1.0) ) );
    
    return op( dlp, dls(p, radius ) );
    
}

//PROJECTION
Vec pj(Vec v, Biv b){
    Vec t = ip(v,b);
    Vec_Biv vb = gp(t, reverse(b));
    return Vec(vb.e1, vb.e2, vb.e3);
}
//REJECTION
Vec rj(Vec v, Biv b){
    Tri t = op(v,b);
    return gp(t , reverse(b) );
}

float sinc(float x){
    if (x==0.0) return 1.0; else return sin(x)/(x); 
}

vec3 euc3(Vec v){
    return vec3(v.e1, v.e2, v.e3);
}

//GENERATE a MOTOR from a DUAL LINE
Mot gen(Dll dll){
    vec3 v = vec3( dll.e12, dll.e13, dll.e23);
	float  c = ( sqrt( abs ( dot( v, v ) ) ) );
	float sc = sin(c);
	float cc = cos(c);
    
//	Dll b = dll;
//	Biv B(b.e12,b.e13,b.e23); //Biv B(dll);
    v = normalize(v);//.unit();
	Biv B = Biv(v.x, v.y, v.z);
          
	Vec t = Vec(dll.e1ni, dll.e2ni, dll.e3ni);//b[3],b[4],b[5]);
	
	Vec tv = pj(t,B) ;
	Vec tw = rj(t,B) ;
	
    float csinc = sinc(c);
	//tv = Vec(tv.e1*csinc, tv.e2*csinc, tv.e3*csinc);
	
	vec3 tt = euc3(tw) * cc + euc3(tv) * csinc;  //( B.wt() == 0 ) ? t : tw * cc + tv;
    
	Vec_Biv vb = gp(tw,B);//B * tw;	
	
    return Mot( cc, B.e12*sc, B.e13*sc, B.e23*sc,
            tt.x, tt.y, tt.z, vb.e123 * sc);
}

//SPIN circle AROUND Motor
Cir sp (Cir cir, Mot mot) {					
    
    Mot t1 = mot;
    Cir t2 = cir;
    Rtc t3  = Rtc(
                  - t1.e23 * t2.e123 + t1.e2ni * t2.e12no + t1.e3ni * t2.e13no + t1.e123ni * t2.e23no,
                  t1.e13 * t2.e123 - t1.e1ni * t2.e12no + t1.e3ni * t2.e23no - t1.e123ni * t2.e13no,
                  - t1.e12 * t2.e123 - t1.e1ni * t2.e13no - t1.e2ni * t2.e23no + t1.e123ni * t2.e12no,
                  - t1.e12 * t2.e12no - t1.e13 * t2.e13no - t1.e23 * t2.e23no,
                  - t1.e12 * t2.e12ni - t1.e13 * t2.e13ni - t1.e23 * t2.e23ni + t1.e1ni * t2.e1noni + t1.e2ni * t2.e2noni + t1.e3ni * t2.e3noni + t1.e123ni * t2.e123,
                  t1.s * t2.e12no - t1.e13 * t2.e23no + t1.e23 * t2.e13no,
                  t1.s * t2.e13no + t1.e12 * t2.e23no - t1.e23 * t2.e12no,
                  t1.s * t2.e23no - t1.e12 * t2.e13no + t1.e13 * t2.e12no,
                  t1.s * t2.e12ni - t1.e13 * t2.e23ni + t1.e23 * t2.e13ni + t1.e1ni * t2.e2noni - t1.e2ni * t2.e1noni - t1.e3ni * t2.e123 + t1.e123ni * t2.e3noni,
                  t1.s * t2.e13ni + t1.e12 * t2.e23ni - t1.e23 * t2.e12ni + t1.e1ni * t2.e3noni + t1.e2ni * t2.e123 - t1.e3ni * t2.e1noni - t1.e123ni * t2.e2noni,
                  t1.s * t2.e23ni - t1.e12 * t2.e13ni + t1.e13 * t2.e12ni - t1.e1ni * t2.e123 + t1.e2ni * t2.e3noni - t1.e3ni * t2.e2noni + t1.e123ni * t2.e1noni,
                  t1.s * t2.e1noni + t1.e12 * t2.e2noni + t1.e13 * t2.e3noni + t1.e2ni * t2.e12no + t1.e3ni * t2.e13no + t1.e123ni * t2.e23no,
                  t1.s * t2.e2noni - t1.e12 * t2.e1noni + t1.e23 * t2.e3noni - t1.e1ni * t2.e12no + t1.e3ni * t2.e23no - t1.e123ni * t2.e13no,
                  t1.s * t2.e3noni - t1.e13 * t2.e1noni - t1.e23 * t2.e2noni - t1.e1ni * t2.e13no - t1.e2ni * t2.e23no + t1.e123ni * t2.e12no,
                  t1.s * t2.e123 - t1.e1ni * t2.e23no + t1.e2ni * t2.e13no - t1.e3ni * t2.e12no,
                  t1.e12 * t2.e3noni - t1.e13 * t2.e2noni + t1.e23 * t2.e1noni - t1.e1ni * t2.e23no + t1.e2ni * t2.e13no - t1.e3ni * t2.e12no
                  );
    Mot t4 = mot;
    Mot t5 = reverse( t4);
    return Cir (
                t3.no * t5.e12 + t3.e12no * t5.s - t3.e13no * t5.e23 + t3.e23no * t5.e13,
                t3.no * t5.e13 + t3.e12no * t5.e23 + t3.e13no * t5.s - t3.e23no * t5.e12,
                t3.no * t5.e23 - t3.e12no * t5.e13 + t3.e13no * t5.e12 + t3.e23no * t5.s,
                t3.e1 * t5.e2ni - t3.e2 * t5.e1ni + t3.e3 * t5.e123ni + t3.ni * t5.e12 + t3.e12ni * t5.s - t3.e13ni * t5.e23 + t3.e23ni * t5.e13 + t3.e1noni * t5.e2ni - t3.e2noni * t5.e1ni + t3.e3noni * t5.e123ni + t3.e123 * t5.e3ni + t3.e123noni * t5.e3ni,
                t3.e1 * t5.e3ni - t3.e2 * t5.e123ni - t3.e3 * t5.e1ni + t3.ni * t5.e13 + t3.e12ni * t5.e23 + t3.e13ni * t5.s - t3.e23ni * t5.e12 + t3.e1noni * t5.e3ni - t3.e2noni * t5.e123ni - t3.e3noni * t5.e1ni - t3.e123 * t5.e2ni - t3.e123noni * t5.e2ni,
                t3.e1 * t5.e123ni + t3.e2 * t5.e3ni - t3.e3 * t5.e2ni + t3.ni * t5.e23 - t3.e12ni * t5.e13 + t3.e13ni * t5.e12 + t3.e23ni * t5.s + t3.e1noni * t5.e123ni + t3.e2noni * t5.e3ni - t3.e3noni * t5.e2ni + t3.e123 * t5.e1ni + t3.e123noni * t5.e1ni,
                - t3.no * t5.e1ni - t3.e12no * t5.e2ni - t3.e13no * t5.e3ni + t3.e23no * t5.e123ni + t3.e1noni * t5.s - t3.e2noni * t5.e12 - t3.e3noni * t5.e13 - t3.e123noni * t5.e23,
                - t3.no * t5.e2ni + t3.e12no * t5.e1ni - t3.e13no * t5.e123ni - t3.e23no * t5.e3ni + t3.e1noni * t5.e12 + t3.e2noni * t5.s - t3.e3noni * t5.e23 + t3.e123noni * t5.e13,
                - t3.no * t5.e3ni + t3.e12no * t5.e123ni + t3.e13no * t5.e1ni + t3.e23no * t5.e2ni + t3.e1noni * t5.e13 + t3.e2noni * t5.e23 + t3.e3noni * t5.s - t3.e123noni * t5.e12,
                t3.e1 * t5.e23 - t3.e2 * t5.e13 + t3.e3 * t5.e12 + t3.no * t5.e123ni + t3.e12no * t5.e3ni - t3.e13no * t5.e2ni + t3.e23no * t5.e1ni + t3.e123 * t5.s
                );
    
}


void main(void) {

    vec3 hit = vec3(1,0,0);
    vec4 miss = vec4(0,0,0,0.0);
    vec4 result = vec4(0,0,0,0);
    
    vec2 frag = gl_FragCoord.xy; 
    vec2 frags = vec2(frag.x / screen.x, frag.y / screen.y);
    
    vec3 tdirx = topLeft * (1.0-frags.x) + (topRight * frags.x ) ; 
    vec3 bdirx = bottomLeft * (1.0-frags.x) + (bottomRight * frags.x ) ;         
    vec3 fdir = bdirx * (1.0-frags.y) + (tdirx * frags.y ) ; 
    
    Pnt p = null(eye);        
    Drv d = Drv(fdir.x, fdir.y, fdir.z);
    
    //DUAL LINE RAY FROM EYE INTO SPACE
    Dll dll = gp( op(p,d), Pss(-1.0) );
    
    //TWIST AXIS
    Dll twist = gp( op(null(0.0,0.0,0.0), Drv(0.0,1.0,0.0) ), Pss(-1.0) );
    
    //CIRCLE BASE
    Cir tc = op( op( null(-1.,0.,0.), null(0.,1.,0.) ) , null(1.,0.,-1.) );
    
    for (float i = 0.0; i < 10.0; i= i + 1.0){
        
        float t = i / 10.0;
        
        Mot m = gen( gp(dll, t) );
        
        Cir c = sp(tc,m);
        
        float test = size ( op(dll, gp( tc, Pss(-1.0) ) ) );
            
        if (test <= 0.0) {
            result = vec4(hit, result.a);
            float t = abs(test);
            result.a += t * .1;
        }
        //else result = miss;
    }
    
    gl_FragColor = result;//texture2D(tex, texco);//vec4(1,1,1,1);//colorDst;
}