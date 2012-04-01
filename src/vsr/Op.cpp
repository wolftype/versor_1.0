/*
 *  Xf.cpp
 *  CONGA_05
 *
 *  Created by x on 3/22/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#include "Op.h"
#include "CongaHeaders.h"
#include "vsr_mktypes.h"
#include <math.h>

namespace vsr {

//Varying "notions of infinity" (invariance)
#ifndef ALT_CXR
#define ALT_CXR

#define Hyperbolic Dls(0,0,0,1,-.5)
#define Spherical Dls(0,0,0,1,.5)
#define Euclidean Inf(1)
#define EP Dls(0,0,0,1,-.5)
#define EM Dls(0,0,0,1,.5)

#endif

//General transformation / estimation of a spinor
State Gen :: gen (const State& st){
	State s = st;
	s[0] = cos(s[0]);
	for (int i = 1; i < s.num(); ++i){
		s[1] = -sin(s[1]);
	}
	return s;
}

State Gen::dir(const State& r){}

/* Biv from Rotor */
State Gen::log_rot(const State& r){
	return Op::lg(r);//Op::pl(r) * - Op::iphi(r);
}

/* Rotor from Motor */
State Gen::rot_mot(const Mot& m){
	//return Ori(-1) <= (m * Inf(1) );
	return Rot(m);
}

//State Gen::trs_mot(const Mot& m){
//}

State Gen::vec_mot(const State& m){
	return Vec ( ( ( Ori(-1) <= m ) * - 2.0 ) / Gen::rot_mot(m) ) * -1;
}

/* Translation Vec from Motor */
State Gen::dir_mot(const Mot& m){
	return Drv ( (( Ori(1) <= m ) / Gen::rot_mot(m) ) * -2.0 ); //changed from just rot(m)
}

/* Dual Line from Motor */
//m must be normalized, returns a dll (dual line)
State Gen::log_mot2(const State& m){

	Rot r = Gen::rot_mot(m); //changed from just rot(m)
	Vec t = Gen::dir(Mot(m));
	
	Dll q;
	
	State tr = r * r * -1.0;
	r[0] += 1;
	
	tr = -(tr); //vague meaning (inverse or negative?)
		
	//catch singularities...
//	if (r[0] == 1 && vec(r) == 0 ) 
//	if (r[0] ==-1 && vec(r) == 0 )	
				
	Biv iPhi = Op::lg(r) * -2.0;
	Biv I = iPhi.unit();
		
	State a = ( Op::rj(t, I) * -1.0 ); 
	
	//State b = tr * (t<=(iPhi)); 
	// or  ?
	Vec b = tr * (t<=iPhi) ;
	
	State c =  ( iPhi ) / 2.0;
	//or
	
	State s = b;
	s += a;
	s *= Inf(.5);
	
	q -= c;
	copy(s.w(), s.w() + 3, &(q.w()[3]));  //ugly manually copy into place
	
	return q;
}

/* another attempt */

State Gen :: log_mot3( const State& m ){

//	Dll q;

	Rot r = Gen::rot_mot(m);								//rotor part
	//Vec t = Gen::dir(Mot(m));
	Vec t = Gen::vec_mot(m);//( (Ori(1)<=m) / r ) * -2.0;		//trans part
	
	double wt = r.wt();						//R * R
	Rot r2 = r*r * -1.0;
	r2[0] += 1;
	r2 = !r2;
	
//	cout << wt << r*r << endl;
	//catch singularities...
//	if (wt < .003) {
//	if (r[0] == 1 && vec(r) == 0 ) 
//	if (r[0] ==-1 && vec(r) == 0 )	
//	} else
	
	double tr = 1.0 / ( 1.0 - wt );
//	cout << tr << r2;
				
	Biv iPhi(r); 
	Biv I = iPhi.unit();
	double rn = sqrt( - iPhi.wt() );
	double phi = ( atan2(rn, r[0] )  ) * - 2.0;
	
	Vec a = ( Op::rj(t, I) * -1.0 ); 
//	Vec b = (t<=(I)) * (phi * tr);
	Vec b = r2 * (t<=(I)) * (phi);
	Vec s = ( a + b ) * .5;
	
//	cout << "N: " << r2 * (t<=(I)) * (phi) << endl;
//	q -=  ( I * (phi / 2.0));
	Dll q( I * (phi / -2.0));

	copy(s.w(), s.w() + 3, &(q.w()[3]));
//	cout << I * (phi / -2.0) << s << q << endl;
		
	return q;		
}

/*second attempt from "Applications of Conformal Geometric Algebra in
Computer Vision and Graphics" by lasenby et al
*/
State Gen::log_mot(const State& m){
	Dll tq, rq;						//tmp dll
	Drv cperp, cpara;
	Dll q = m;						//extract grade 2 part
	
	double ac = acos( m[0] );		//angle of rotor	
	double den = Math::sinc(ac);
	double den2 = ac * ac * den;
	
	
	Biv b =  ( Ori(1) <= ( q * Inf(1) ) ) / den * -1.0;			//negative necessary . dll? . . 
	tq = b * q;
	
	if (den2 == 0 ) {
		//cperp = b * -1.0;
		cpara = q;// * -1.0;
	} else {
		cperp = ( b * Drt(m[7]) ) / ( ( den2 )  * -1.0 );	//perpendicular (along line of axis)
		cpara = ( b * tq ) / ( ( den2 )  * -1.0 );			//parallel      (in plane of rotation)
	}
	
	Drv c = cperp + cpara;
//	cout << b << m << q << c << endl;
//	cout << den << endl;
	rq += (b);
	copy(c.w(), c.w() + 3, &(rq.w()[3]));
		
	return rq;
}

//pass in a dil_mot
State Gen::log_mtd(const State& m){
	Par par;
	
	Par q = m;   //Extract 2 grade part
	Pln pln = m; //Extract 4 grade part
	
	//Calculate scalars of Biv and Mnk components
	double w = (m[0] == 0 ) ? 0 : atanh( m[7] / m[0] );
	double t = (w == 0) ? 0 : acos( m[7] / sinh(w) );
	
	//and some variables for later use
	double st = sin(t); double ct = cos(t);
	double sw = sinh(w); double cw = cosh(w);
	
	double tt = st * cw;
	double ss = ct * sw;
	double pp = st * Math::sinhc(w);
	double qq = ct * Math::sinhc(w);
	
	Biv P = (tt == 0 ) ? Biv(0,0,0) : Biv(q) / tt;
	
	State stp = P * Ori(.5);
	
	Drv cper = (pp == 0 ) ? Drv(0,0,0) : ( ( pln - Pln( P * Mnk(1) * st * sw ) ) / pp )* stp;
	
	//Make W
	q[9] -= tt; q[0] -= tt * P[0]; q[1] -= tt * P[1]; q[2] -= tt * P[2];
	q[6] -= qq * cper[0]; q[7] -= qq * cper[1]; q[8] -= cper[2];
	
	double X = (-w * tt) + (t * ss );
	double Z = (w * ss) + (t * tt );
	
	double den = st * st * cw * cw + ct * ct * sw * sw;
	Drv cpar = P * (-X);
	//oof
	return par;
}

//form Dorst et al page 492
State Gen::log_mtd2(const State& m){
	//return a par with 0 tnv part for now
	//m is a dil_mot or an "mtd" a Motor + a Plane
	Rot X = m; //Rotor Part also Ori(-1) <= (m*Inf(1)) but direct assignment way is faster
	
	//Scaling Part
	double g, gp;
	g = log( Op::sca(X*~X) );
	if (g == 0) gp = 1;
	else gp = g/(exp(g)-1); 
	
	Dil S = Gen::dil(g);
	Rot R = X * exp(-g/2.0);
	Trs T = m * ~S * ~R;
	Vec v = Vec(T[1], T[2], T[3]) * 2.0;
	//conditionals
	if (R[0] == -1) cout << "log_mtd2 problem" << endl;
	if (R[0] == 1) return Par(0,0,0,0,0,0,-gp/2.0 *v[0], -gp/2.0 *v[1], -gp/2.0 *v[2], g/2.0);
	
	Biv ti = Biv(R);
	double tn = ti.norm();
	Biv I = ti/tn;
	double phi = -2.0 * atan2(tn, R[0]);
	
	
	Rot tr = R*R*-exp(g);  tr[0] += 1;
	Vec tv (-tr * Op::pj(v,I));
	Trs Tv = Gen::trs(tv);
	
	Par p = I * ( -.5 * phi);
	p[9] = g/2.0;
	p = Op::sp0(p, Tv);	
	Drv da ( Op::rj(v,I) * -gp/2.0 );
	p[6] += da[0];
	p[7] += da[1];
	p[8] += da[2];
	
	return p;
}

/* Motor From Dual Line */
State Gen::expseries_dll(const State& d){
	int order = 12;
	long pow = 1;
	
	double n = d.rnorm();
	Mot output = Sca(1);

	if (n > 1.0) pow <<=1;
	while(n > 1){
		n /= 2.0;
		pow <<=1;
	}
	Dll tm = d * 1.0/pow;
	Mot ts = Sca(1);
	
	for (int i = 1; i < order; ++i){
			ts = ts * (tm * 1.0/i);
			output += ts;
	}
	
	while (pow > 1.0){
		output *= output;
		pow >>=1;
	}
	
	return Mot(output);
}

/* Pnt Pnt ( or Par ? ) from Unknown d */
//returns a Pnt Pnt (for transversions )
State Gen::expseries_par(const State& d){
	int order = 12;
	long pow = 1;
	double n = d.norm();
	
	Pnt_Pnt output = Sca(1);

	if (n > 1.0) pow <<=1;
	while(n > 1){
		n /= 2.0;
		pow <<=1;
	}
	Par tm = d * 1.0/pow;
	Pnt_Pnt ts = Sca(1);
	
	for (int i = 1; i < order; ++i){
			ts = ts * (tm * 1.0/i);
			output += ts;
	}
	
	while (pow > 1.0){
		output *= output;
		pow >>=1;
	}
	
	//cout <<slerp "OUTPUT: " << output << endl;
	return Pnt_Pnt( output );
}

State Gen::slerp(const State& a, const State& b, double t) {
	//Ratio		
	Rot r1 =  -(a) * (b);
	//Log at amt t
	Biv r2 = Op::lg( r1 ) * t;
	//Exponential Form
	return Gen::rot_biv(r2) * a; //switch?	
}


/* Ratio Rotor From Two Vecs (assumes unit?) */
State Gen::ratio(const State& a, const State& b){
	double s = Op::sca( a <= b );
	
	//180 degree check
	if (a == b.conjugate() ) return Rot(0,0,1,0);
	
	double ss = 2 * (s+1);
	double n = ( ss >= 0 ? sqrt ( ss ) : 0 );
	
	Rot r = ( b * a ) ;
	r[0] += 1;	
	if (n != 0 ) r /= n;
	return r;
}

//assume unit bivector inputs
State Gen::ratio_biv( const State& V, const State& U){
	return Gen::ratio(Op::dle(V),Op::dle(U) );
}

State Gen::ratio_vec(const State& v1, const State& v2){
	return Gen::ratio(v1,v2);
}


State Gen::ratio_vec(const State& v1, const State& v2, double t){
	Rot r = v2/v1; r /= r.rnorm();
	return Gen::rot_biv( Op::lg(r) * (t/2.0) );
}	

State Gen::ratio_dll(const Dll& v1, const Dll& v2, double t ){
	Mot m = v2/v1; double n = m.rnorm(); if (n!=0) m /= n;
	return Gen::mot_dll( Gen::log_mot( m ) * (t/2.0) );
}

State Gen::dll_ratio(const State& dA, const State& dB){
	Mot m = dB/dA; double n = m.rnorm(); if (n!=0) m /= n;
	return Gen::log_mot( m ) * .5;
} 

/* Interpoloation between Motors (normalize b/a ?) */
State Gen::grip(const Mot& a, const Mot& b, double t){
		Dll dll = ( Gen::log_mot(b/a) ) * t * .5;
		return Gen::mot_dll(dll) * a;	
}


State Gen::mot_dp(const State& drv, double p){
	Dll dll = Op::dl( Ori(1) ^ drv );
	cout << drv << dll << endl;
	//Drv
}


//experimental (general)
State Gen::mot_gen(const State& e){
	double a = Op::sca(e * e);
	double sc = sin(a);
	Mot m;
	m = e * sin(a);
	m[0] += cos(a);
	return m; 
}

State Gen::mot_tr(const Rot& r, const Trs& tw){
	return tw * r;
}

//from a rotor and a vector
State Gen::mot_rv(const State& r, const State& v){
	//is rotor biv null?  return pure trs	
	if ( Biv(r).wt() == 0 ) { cout << "whoop: " << endl; return Gen::trs(v); }	
	
	Biv I = Op::pl(r);
	
	Trs tw = Gen::trs( Op::rj(v,I) ); //perp	

	Rot s = r * r * (-1.0);
	s[0] += 1;
	State q = -(s) * Op::pj(v,I);
	Trs tv =  Gen::trs( q ); 

	return Gen::mot_rtt(r,tw,tv);
}

//experimental
State Gen::mot_rt(const State&r, const State& t){
	Mot m = Op::sp0(r,t);
	return Gen::mot_rv(Gen::rot_mot(m), Gen::vec_mot(m));
}

//plane, axis, offset
State Gen::mot_rtt(const State& r, const State& tw, const State& tv){
	return tw * Op::sp0(r,tv);
}

//plane, axis, offset
State Gen::mot_bvv(const State& B, const State& vw, const State& vv){
	return Gen::trs(vw) * Op::sp0( Gen::rot_biv2(B), Gen::trs(vv) );
}

//from lasenby
State Gen::mtd_par(const State& par){
	Mtd dm;
	double t,w;
	
	//Bivector Rotor
	Biv b(par);
	//Drv Translator
	Vec d(par);
	//Mnk Dilator
	Mnk m(par);

	Biv I = b.unit();	
	
	Vec dpara( Op::pj(d,I) );
	Vec dperp( Op::rj(d,I) );

	t = b.norm();
	w = m[0];
	
	double wt = 1.0 / (w * w + t * t); 

	double ct = cos(t); double st = sin(t); 
	double chw = cosh(w); double shw = sinh(w); double shcw = Math::sinhc(w);
	
	Rot R(ct, I[0]*st,I[1]*st,I[2]*st);
	dm[0] = chw;
	dm[7] = shw;
	dm[4] = dperp[0] * shcw;
	dm[5] = dperp[1] * shcw;
	dm[6] = dperp[2] * shcw;
	
	dm = R * dm;
	
	double a = wt * (-w*st*chw + t*ct*shw);
	double aa = wt * (w*ct*shw + t*st*shw);
	
	Biv nb = I * a;
	Vec nv = dpara *aa;
	
	dm[1] += nb[0];
	dm[2] += nb[1];
	dm[3] += nb[2];
	
	dm[4] += nv[0];
	dm[5] += nv[1]; 
	dm[6] += nv[2];
	
	return dm;
}

/* exponential function derived from lasenby p335 using sinc function (see also log_mot) */
State Gen::mot_dll(const State& dll){

	Dll b = dll;

	double  c = ( sqrt( fabs ( Biv(dll).wt() ) ) );
	double sc = sin(c);
	double cc = cos(c);

	Biv B(b[0],b[1],b[2]); //Biv B(dll);
	Vec t(b[3],b[4],b[5]);
	
	if ( B.wt() == 0 ) return Mot(1,0,0,0,b[3],b[4],b[5],0);						//Translation Only?
	
	B = B.unit();
	
	Vec tv = Op::pj(t,B) ; //from axis
	Vec tw = Op::rj(t,B) ; //along axis

	
	tv *= Math::sinc(c);
	
	Vec tt = tw * cc + tv; //( B.wt() == 0 ) ? t : 

	State ts = B*tw;	
	Mot mot;	
	mot[0] = cc;
	mot[1] = B[0]*sc;
	mot[2] = B[1]*sc;
	mot[3] = B[2]*sc;	
	mot[4] = tt[0];
	mot[5] = tt[1];
	mot[6] = tt[2];
	mot[7] = ts[3] * sc;
	
	return mot;
}

State Gen::mot(const State& dll){

	double  c = ( sqrt( fabs ( Biv(dll).wt() ) ) );
	double sc = sin(c);
	double cc = cos(c);

	Dll b = dll;
	Biv B(b[0],b[1],b[2]); //Biv B(dll);
	B = B.unit();
	Vec t(b[3],b[4],b[5]);
	
	Vec tv = Op::pj(t,B) ;
	Vec tw = Op::rj(t,B) ;
	
	tv *= Math::sinc(c);
	
	Vec tt = ( B.wt() == 0 ) ? t : tw * cc + tv;

	State ts = B*tw;	
	Mot mot;	
	mot[0] = cc;
	mot[1] = B[0]*sc;
	mot[2] = B[1]*sc;
	mot[3] = B[2]*sc;	
	mot[4] = tt[0];
	mot[5] = tt[1];
	mot[6] = tt[2];
	mot[7] = ts[3] * sc;
	
	return mot;
}

//from bivector
State Gen::rot(const State& b){
	double  c = sqrt(- ( b.wt() ) );
	double sc = -sin(c);
	if (c != 0) sc /= c;
	return Rot( cos(c), b[0]*sc, b[1]*sc, b[2]*sc );
}
State Gen::rot_biv(const State& b){
	double  c = sqrt(- ( b.wt() ) );
	double sc = -sin(c);
	if (c != 0) sc /= c; // divide by c
	return Rot( cos(c), b[0]*sc, b[1]*sc, b[2]*sc );
}

State Gen::rot_biv2(const State& b){
	double  c = sqrt(- ( b.wt() ) );
	Biv nb = b.unit();
	double sc = sin(c);//-?
	return Rot( cos(c), nb[0]*sc, nb[1]*sc, nb[2]*sc );
}

//bivector and angle
State Gen::rot_biv_ang(const State& b, double t){
	Biv nb = b.unit();
	double sc = -sin(t);
	return Rot( cos(t), nb[0]*sc, nb[1]*sc, nb[2]*sc );
}

//rotor from axisangle
State Gen::rot_aa(double x, double y, double z,double w){
	double s = -sin(w);
	return Rot(cos(w), x*s, y*s, z*s);
}

//circle angle
State Gen::rot_cir(const Cir& c, double t){
	double  co = sqrt(- ( c.wt() ) );
	double sc = -sin(co);
	Biv b = Op::dl( Ro::dir(c) );
	return Rot( cos(co), b[0]*sc, b[1]*sc, b[2]*sc );
}

State Gen::rot_par(const Par& p, double t){
	double  c = sqrt(fabs( Ro::siz(p) ) );
	double sc = -sin(c);
	return Rot( cos(c), p[0]*sc, p[1]*sc, p[2]*sc );
}

State Gen::tpar(const State& s){
	return Pnt_Pnt(1, 
				s[0], s[1], s[2], 
				s[3], s[4], s[5], 
				s[6], s[7], s[8], s[9]);
}

State Gen::trv3(double x, double y, double z){
	return Trv(1,x,y,z);
}
State Gen::trv(const State& s ){
	return Trv(1,s[0],s[1],s[2]);
}

State Gen::dil(double t){
	return Dil( cosh(t*.5), sinh(t*.5) );
}
//dilation around a point
State Gen::dil_pnt(const Pnt& p, double t){
	return Op::sp0( Dil( cosh(t*.5), sinh(t*.5) ), Gen::trs(p) );
}
State Gen::dil(const State& s){
	return Gen::dil(s[0]);
}

State Gen::trs3(double x, double y, double z){
	return Trs(1, x*-.5, y*-.5, z*-.5);
}
State Gen::trs(const State& v){
	return Gen::trs3(v[0], v[1], v[2]);
}
//direction and mag
State Gen::trsD(const State& v, double d){
	return Gen::trs3(v[0]*d, v[1]*d, v[2]*d);
}

//transversion and translation
State Gen::lox(const State& s1, const State& s2){
	return Gen::trv(s1) * Gen::trs(s2);
}

Dls Gen::vep(const Vec& v, double t){
	return Dls(v[0],v[1],v[2],t,t*-.5);	
}

Dls Gen::vem(const Vec& v, double t){
	return Dls(v[0],v[1],v[2],t,t*.5);
}

//***************OP*******************//

State Op::ip(const State& a, const State& b){
	return a <= b;
}
State Op::op(const State& a, const State& b){
	return a ^ b;
}
State Op::gp(const State& a, const State& b){
	return a * b;
}
State Op::cx(const State& a, const State& b){
	return a % b;
}
State Op::add(const State& a, const State& b){
	return a + b;
}
State Op::sub(const State& a, const State& b){
	return a - b;
}
State Op::err( State s){
	return s.error();
}

State Op::gp3(const State& a, const State& b, const State& c){
	return a * b * c;
}

double Op::sca(const State& s){
	return s[0];
}

//working on this...
double Op::wt( const State& s) {
	State a = Ori(1) <= s;			//Take out infinity
	return sqrt( fabs( Op::sca(a <= a) ) );
}


Vec3<> Op::vec3( const State& s){
	Vec v = s;
	return Vec3<>(v[0], v[1], v[2]);
}

bool Op::sn(const State& a, const State& b) {
	return Op::sca(a / b) > 0 ? 1 : 0;
}

/* Spin Transform (continuous) Mk::cxr forces return type to be same as input type*/
State Op::sp( const State& s, const State& x) {
//	return ( x * s * -x ) ;
	return Mk::cxr[s.idx()]( x * s * -x ) ;
}
    
///* Spin Transform (continuous) Mk::cxr forces return type to be same as input type*/
//State Op::spf( const State& s, const State& x) {
//    //	return ( x * s * -x ) ;
//    return Mk::cxr[s.idx()]( x * s * -x ) ;
//}

/* Pin Transform (binary reflection) */
State Op::re( const State& s, const State& x){
//	return  ( x * s.involute() * -x );
	return Mk::cxr[s.idx()] ( x * s.involute() * -x );
}

///* Pin Transform (binary reflection) */
//State Op::ref( const State& s, const State& x){
//    //	return  ( x * s.involute() * -x );
//    return Mk::cxr[s.idx()] ( x * s.involute() * -x );
//}
//   
    
/* unforced versions */
State Op::sp0( const State& s, const State& x) {
	return x * s * -x ;
}
State Op::re0( const State& s, const State& x){
	return x * s.involute() * -x;
}

//Inversion in ep
State Op::iep (const State &s){
	Dls ep(0,0,0,1,-.5);
	return Op::re(s,ep);
}
//Inversion in em
State Op::iem (const State &s){
	Dls em(0,0,0,1,.5);
	return Op::re(s,em);
}

State Op::exp( const State& s, int n ) {
	State tmp = s;
	for (int i = 1; i < n; ++i){
		tmp *= s;
	}
	return tmp;
}

///* Meet */
//State Op::mt( const State& a, const State& b){
//	return a ^ b;
//}

/* Join not implemented */
State Op::jn( const State& a, const State& b){ return a; }
/* Euclidean Dual */
State Op::dle( const State& s){ return s * Tri(-1); }
/* Euclidean Undual */
State Op::ude( const State& s){ return s * Tri(1); }
/* Conformal Dual */
State Op::dl( const State& s){ return s * Pss(-1); }
/* Conformal Undual */
State Op::ud( const State& s){ return s * Pss(1); }
/* Rejection of a from b */
State Op::rj( const State& a, const State& b){ return (a ^ b ) / b; } 
/* Projection a on to b */
State Op::pj( const State& a, const State& b){ return (a <= b ) / b; } 
/* Dilation */
State Op::di( const State& s , double t) { return Op::sp(s, Dil(cosh(t*.5), sinh(t*.5)) ); }

///*! Rotation */
//State Op::ro( const State& s, const Biv& b) { 
//	double  c = sqrt(- ( b.wt() ) );
//	double sc = sin(c);
//	return Op::sp(s, Rot( cos(c), b[0]*sc, b[1]*sc, b[2]*sc ));
//}
//
///* Translation */
//State Op::ts( const State& s, const Vec& v) {
//	return Op::sp(s, Trs( 1, v[0] * -.5, v[1] * -.5, v[2] * -.5 ) );
//}
//State Op::ts( const State& s, const Drv& v) {
//	return Op::sp(s, Trs( 1, v[0] * -.5, v[1] * -.5, v[2] * -.5 ) );
//}
//
///* Transversion */
//State Op::tv( const State& s, const State& v) {
//	return Op::sp(s, Trv( 1, v[0], v[1], v[2] ) );
//}
//
//State Op::mo( const State& s, const State& v){
//
////	return Op::sp(s, Mot(
//}

/* Basis blade idx to Standard State */ 
State Op::ba( int idx){

	switch(idx){
	
		//s
		case 0:
			return Sca(1);
			break;
		//e1
		case 1:
			return Vec::x;
			break;
		//e2
		case 2:
			return Vec::y;
			break;
		//e3
		case 3:
			return Vec::z;
			break;
		//no
		case 4:
			return Ori(1);
			break;
		//ni
		case 5:
			return Inf(1);
			break;
		//e12
		case 6:
			return Biv::xy;
			break;
		//e13
		case 7:
			return Biv::xz;
			break;
		//e1no
		case 8:
			return Tnv::x;
			break;
		//e1ni
		case 9:
			return Drv::x;
			break;
		//e23
		case 10:
			return Biv::xz;
			break;
		//e2no
		case 11:
			return Tnv::y;
			break;
		//e2ni
		case 12:
			return Drv::y;
			break;
		//e3no
		case 13:
			return Tnv::z;
			break;
		//e3ni
		case 14:
			return Drv::z;
			break;
		//noni
		case 15:
			return Mnk(1);
			break;
		//etc
	}

} 
 
//factorize 
std::vector <State> Op::fa ( const State& s) {
	std::vector<State> sf;

	//Get Norm (will output later)
	double t = s.norm();
	
	//Normalize
	State tmp = s / t; //.unit();
	
	//Identify Blade of Highest Magnitude To use as Factoring Force
	double max = 0;
	int idx = 0;
	for(int i = 0; i < s.num(); ++i){	
		if (fabs(s[i]) > max ) {
			max = fabs( s[i] );
			idx = i;
		}	
	}
	
	//create a normalized Max Blade
	int bi =  s.baseIdx(idx);	
	State F = Op::ba(bi);

	//extract each basis of max
	//and project each onto normalized blade
	int ng =  s.gradeOf(idx);
	for (int i = 0; i < ng-1; ++i){
		State ts = Op::pj( s.factOf(idx,i), tmp );
		ts = ts.unit();
		sf.push_back(ts);
		tmp = (-ts)/tmp;	//Remove from blade
	}

	return sf;

	//old
	//Divide Max Blade out of s
	//State s2 = s / s[idx];
	
	//OLD
//	//bi has specific factors
//	for (int i = 0; i < ng ; ++ i) {
//		State f = Op::ba( s.factOf(idx, i) );
//		sf.push_back( (f <= -F) <= s2 );		
//	}	
							
}

State Op::del( const State& A, const State& B ){
	State s = A * B;
	int g = s.gradeOf(s.num()-1);
	for (int i = 0; i < s.num(); ++i){
		if ( s.gradeOf(i) != g ) s[i] = 0; //need way of determining blade from basis
	}
	return s;
}

State Op :: max( const State& s ){
	double max = 0;
	int idx = 0;
	for(int i = 0; i < s.num(); ++i){	
		if (fabs(s[i]) > max ) {
			max = fabs( s[i] );
			idx = i;
		}	
	}
	
	int bi =  s.baseIdx(idx);	
	return Op::ba(bi) * s[idx];
}

State Op :: meet( const State & A, const State& B){

	int ag = A.grade();  int bg = B.grade();
	
	if (ag < bg){
	
		//Delta
		State dp = Op::del( A, B );
		//Dual Delta
		State ddp = Op::dl(dp);
		
//		int g = (A.grade() + B.grade() - ) / 2.0;
	
	}
	return A;
}
//ROTORS
//Rot Op::b2r(const Biv& B){
//	double t = sqrt( - Op::sca(B * B) );
//	double sc = sin(t) / t;
//	return Rot(cos(t), B[0] * sc, B[1] * sc, B[2] * sc);
//}


/* Matrix from Rotor */
Mat4<> Op::mat( const Rot& r) {
	Vec xi = Op::sp0(Vec::x, r);
	Vec yi = Op::sp0(Vec::y, r);
	Vec zi = Op::sp0(Vec::z, r);
	
	return Mat4<>(xi[0], xi[1], xi[2], 0, 
				  yi[0], yi[1], yi[2], 0,
				  zi[0], zi[1], zi[2], 0,
				  0   ,   0 ,   0 ,    1 );
}


Biv Op::pl( const Rot& r) {
	Biv b ( r );
	double t = b.rnorm(); //rnorm?
	if (t == 0 ) return Biv(1,0,0);
	return b / t;
}

Biv Op::lg ( const Rot& r ) {
	double t = Op::sca(r);
	Biv b ( r );
	double n = b.rnorm(); //rnorm()?
	
	if (n <= 0) {
		if (t < 0) {
			cout << "ROTOR LOG FOUND SINGULARITY: "<< t << endl;
			return Biv::e12(PI);
		} else {
			return Biv(0,0,0); 
		}
	}
	
	double s = atan2( n, t );
	return b * ( s / n);
}

State Op::map( const State& s, double t){
	State ns = s;
	
	for (int i = 0; i < s.num(); ++i){
		ns[i] = fmod(s[i], t);
	}
	
	return ns;

}

//return biv norm
double Op::iphi( const Rot& r) {
	return Biv ( Op::lg(r) * -2 ).norm();
}


Vec4<> Op::aa (const Rot& r) {

	Vec v = Op::dle( Op::pl( r ) ) ;		
	double deg = Op::iphi(r) * ( -180 / PI );
			
	return Vec4<>(v[0], v[1], v[2], deg);
}

State Op::unit( const State& s){
	return s.unit();
}
State Op::runit( const State& s){
	return s.runit();
}


/**Euclidean */

Vec Eu::vec(Vec3<> v){
	return Vec(v.x, v.y, v.z);
}
Vec3<> Eu::vec3(const State& s){
	return Vec3<>(s[0], s[1], s[2]);
}

/**** O P S  for   R O U N D S ****/

//State Ro::loc_fl( const State& s, const State& p){
//	return ( p <= s ) / s ;
//}
//State Ro::loc_fl_dl( const State& s, const State& p){
//	return ( p ^ s ) / s; 
//}
//State Ro::loc_ta( const State& s){
//	return ( s / Inf(-1) <= s );
//}
//State Ro::loc_ta_dl( const State& s){
//
//}



State Ro::loc( const State& s) { 
	State t = Inf(1) <= s; 
	return  ( ( s * Inf(1) * s ) / ( t * t ) ) * -.5;
}

State Ro::cen( const State& s) {
	return  s  / ( Inf(-1) <= s );
}

/// make null point from round
State Ro::null_cen( const State& s){
	return Ro::null ( Ro::cen ( s ) );
}

State Ro::dir( const State& s, bool dual) {
	return (dual)? ( Inf(-1) <= Op::ud(s) ) ^ Inf(1) : ( Inf(-1) <= s ) ^ Inf(1);

}

double Ro::wt(const State& s){
	return (Ori(1) <= Ro::dir(s)).sqwt();
}

Pnt Ro::nrml(const State& s){
	return Pnt(s[0], s[1], s[2], s[3], s[4] - ( Op::sca(s * s)*-.5) );
}



State Ro::car( const State& s) {
	return s ^ Inf(1);
}

State Ro::sur( const State& s) {
	return Dls( s / ( s ^ Inf(1) ));
}
    
//Default Dual = 0
double Ro::siz( const State& s, int sn) {
	State b = Inf(1) <= s;
	return Op::sca( ( s * s.involute() ) / ( b * b ) * sn );
}

double Ro::rad( const State& s) {
	return sqrt ( fabs ( Ro::siz(s) ) );
}


/* Split a Point Pair */
std::vector<Pnt> Ro::split(const Par& pp){
	std::vector<Pnt> pair;
	
	double r = sqrt( fabs( Op::sca( pp <= pp ) ) );
	State tm = Inf(-1) <= pp;

	State tpa = State::gpr(_PNT,_PNT);// + pp;
	copy(pp.w(), pp.w() + pp.num(), tpa.w() + 1);
	tpa[0] += r;
	
	State tpb = State::gpr(_PNT,_PNT);
	copy(pp.w(), pp.w() + pp.num(), tpb.w() + 1);
	tpb[0] -= r;
	
	Pnt pA = ( tpa ) / tm;
	Pnt pB = ( tpb ) / tm;
    
   // pA.isSelected() = pp.isSelected();
   // pB.isSelected() = pp.isSelected();
	
	pair.push_back(pA);
	pair.push_back(pB);
	return pair;
}

Pnt Ro::split1(const Par& pp) {
	double r = sqrt( fabs( Op::sca( pp <= pp ) ) );
	State tm = Inf(-1) <= pp;
	State tpa = State::gpr(_PNT,_PNT);// + pp;
	copy(pp.w(), pp.w() + pp.num(), tpa.w() + 1);
	tpa[0] += r;	
	return ( tpa ) / tm;
}

Pnt Ro::split2(const Par& pp) {
	double r = sqrt( fabs( Op::sca( pp <= pp ) ) );
	State tm = Inf(-1) <= pp;
	State tpa = State::gpr(_PNT,_PNT);// + pp;
	copy(pp.w(), pp.w() + pp.num(), tpa.w() + 1);
	tpa[0] -= r;	
	return ( tpa ) / tm;
}

/* Create */
State Ro::null( double x, double y, double z){	
	return Pnt(x, y, z, 1 , (x*x + y*y + z*z) / 2.0 );
}

//State Ro::null( const Vec& v) {	
//	return Pnt(v[0], v[1], v[2], 1 , Op::sca(v*v)/2);
//}

State Ro::null( Vec3<> v) {	
	return Ro::null(v.x, v.y, v.z);
}

State Ro::null(const State& s){
	return Ro::null(s[0], s[1], s[2]);
}

State Ro::dls( const Vec& v, double _sr, bool real) {
	Dls s = Ro::null(v);
	real ? s[4] -= .5 * (_sr * _sr) : s[4] += .5 * (_sr*_sr);
	return s;
}
State Ro::dls_vec( const State& v, double _sr, bool real) {
	Dls s = Ro::null(v);
	real ? s[4] -= .5 * (_sr * _sr) : s[4] += .5 * (_sr*_sr);
	return s;
}

//State Ro::dls( const Vec& v, double _sr, bool real) {
//	Dls s = Ro::null(v);
//	real ? s[4] -= .5 * (_sr * _sr) : s[4] += .5 * (_sr*_sr);
//	return s;
//}

State Ro::dls( const Pnt& p, double _sr, bool real) {
	Dls s = p;
	real ? s[4] -= .5 * (_sr * _sr) : s[4] += .5 * (_sr*_sr);
	return s;
}

State Ro::dls3( double x, double y, double z, double _sr, bool real) {
	Dls s = Ro::null(x,y,z);
	real ? s[4] -= .5 * (_sr * _sr) : s[4] += .5 * (_sr*_sr);
	return s;
}

State Ro::dls_pnt( const State& pnt, double _sr, bool real){
	Dls s = pnt;
	(real) ? s[4] -= .5 * (_sr * _sr) : s[4] += .5 * (_sr*_sr);
	return s;
}

//At center c through point p
State Ro::dls( const State& c, const State& p){
	return Dls( p <= ( c^Inf(1) ) );
}

bool Ro::re(const State& s){
	return (Ro::siz(s) > 0) ? 1 :  0;
}
//default face forward
State Ro::par( const Vec& v, double r, bool b){
	return Ro::par( Ro::null(v), Dlp(0,0,1,0), r, b);
}

/* Convert Vec to Dual Circle centered at v Facing d. . .*/
State Ro::par( const Vec& v, const Vec& d, double r, bool b){
	return Ro::par( Ro::null(v), Dlp(d), r, b);
}

State Ro::par( const Pnt& p, const Dlp& dlp, double r, bool b){
	return Ro::dls(p, r) * ( (p*-1.0) <= (Inf(1) * dlp));
}

State Ro::par_cir( const Cir& cir, double theta){
	return Op::dl( Fl::dlp_ortho_cir(cir,theta) ^ Op::dl(cir) ); 					//Meet with Circle
}

//Point on Circle at theta
State Ro::pnt_cir( const Cir& cir, double theta){
	return Ro::null_cen( Ro::split2( Ro::par_cir( cir, theta) ) );
}


State Ro::noon( const State& c ){
	Dlp tdlp = Ro::cen(c) <= Drv(Ro::dir(c));
	Par np = Op::dl( tdlp ^ Op::dl(c));
	return Ro::split1(np);	
}

/*! Conic from Vec 
    If 1 > ecc > 0 then elliptic, 
	If ecc > 1 then hyperbolic, 
	if ecc = 1  then parabolic
*/

State Ro::conic(const State& v, double ecc){
	Pnt p(v[0],v[1],v[2],-.5,.5);
	State s = ( ( Vec(1,0,0) <= p ) * (ecc / 2.0) );// ^ Ori(1);
	p[3] += s[0];
	
	double wt = Op::sca(p <= Inf(1));
	double renorm = (wt == 0) ? 1 : -1 / wt;
	p *= renorm;
	
	return p;
}


State Ro::parbiv( const State& B) {
	return Ro::par( Vec(0,0,0), Op::dle(B) );
}

/*! Direct Round from Point and Euclidean Carrier Flat 
	@param Center pnt 
	@param Carrier flat 
	@param Radius r
*/
State Ro::pnt_flat(const State& pnt, const State& flat, double r){
	//return Ro::dls_pnt(pnt,r) * ( (pnt * -1.0) <= (Inf(1)*flat));
	return Ro::dls_pnt(pnt,r,0) ^ ( (pnt <= (flat.involute() * Inf(1))) * -1.0 );
}

/*! Dual Round from Point and Euclidean Carrier Flat
	@param Center pnt
	@param Carrier flat
	@param Radius r
*/
State Ro::pnt_flat_dl(const State& pnt, const State& flat, double r){
//	return Ro::dls_pnt(pnt,r) * ( (pnt*-1.0) <= ( Op::dl(flat.involute()) * Inf(1) ));
	return Ro::dls_pnt(pnt,r) ^ ( (pnt*-1.0) <= ( Op::dl(flat.involute()) * Inf(1) ));
}

/*! Circle from three Points
	@param Pnt p
	@param Pnt q
	@param Pnt r
*/
State Ro::cir3pnt(const State& p, const State& q, const State& r){
	return p ^ q ^ r;
}
State Ro::cir2pnt(const State& p, const State& q){
	return Op::ud( p ^ q );
}
State Ro::cir1par(const State& p){
	return Op::ud(p);
}

State Ro::hom( const State& s){
	return ( s[3] == 0 ) ? s : s / s[3];
}

/*Axis of circle */
State Ro::ax(const State& s){
	return Inf(1) <= s;
}

/*Circle of Axis (at point p) returns cir or par */
State Ro::cir_lin_pnt(const State& L, const State& p, bool dual){
	//				cir		 : par
	return (dual)? ( p ^ L ) : p <= L;
}

/* Bound */
State Ro::dls_bound(const State& s, double t){
	switch(s.idx()){
	
		case _PNT:
		{
			return Ro::dls_pnt(s, t);
		}
		case _FLP:
		{
			return Ro::dls(Vec(s),t);
		}
		case _PAR:
		{
			return Ro::sur(s);
		}
		case _CIR:
		{
			return Ro::sur(s);
		}
		case _SPH:
		{
			return Op::dl(s);
		}
		case _LIN:
		{
			
		}
		case _PLN:
		{
		}
		case _DLL:
		{
		}
		case _DLP:
		{
		}
	
	}

}

//make from direction?

/***F L A T S ****/

State Fl::dir( const State& s , bool dual) {
	return dual ? Inf(-1) <= Op::ud(s) : ( Inf(-1) <= s ) ;
//	return dual ? Inf(1) ^ Op::ud(s) : ( Inf(-1) <= s ) ;

}

//point on line or plane s closest to point p
State Fl::loc( const State& s, const State& p, bool dual) {
	return dual ? ( p ^ s ) / s : ( p <= s ) / s  ;
}

State Fl::uni( const State& s) {
	return s.involute() / ( Mnk(1) <= s );
}

double Fl::wt(const State& s, bool dual){
//		return (Ori(1) <= Fl::dir(s,dual)).sqwt();
		return (Ori(1) <= Fl::dir(s,dual)).wt();
}

/*Line from Two Points */
State Fl::lin(const State& p, const State& q){
	return p ^ q ^ Inf(1);
}

State Fl::lin_drv_pnt( const Drv& d, const Pnt& p){
	return p ^ d;
}

/* Direct Plane from DRB an PNT*/
State Fl::pln( const State& drb, const State& pnt){
	return pnt ^ drb;
}
/* Dual Plane from DRV and PNT */
State Fl::dlp_drv_pnt( const State& drv, const State& pnt){
	return pnt <= drv;
}
/* Dual Plane from Flat Point and Circle */
State Fl::dlp_flp_cir( const State& flp, const State& cir){
	return flp <= cir;
}
State Fl::dlp_pnt_cir( const State& pnt, const State& cir){
	return ( pnt^Inf(1) ) <= cir;
}
State Fl::dlp_ortho_cir( const State& cir, double theta){
	static Drv drvHome(0,0,1);
	static Dll dllHome = Op::dl(Ori(1) ^ Vec(0,1,0) ^ Inf(1) );
	static Drv drv;
	static Dlp dlp;
	static Mot mot;
	static Dll axis;
	
	axis = Inf(1) <= cir;			//Axis Dual Line
	axis = axis.runit();
	mot = Gen::ratio_dll( dllHome, axis);
	drv = Op::sp0(drvHome, mot);
	
	return Op::sp(Ro::loc(cir) <= drv, Gen::mot_dll( axis * theta/2.0) );
}

/*Dual Plane between par */
State Fl::dlp_par(const State& par){
	return Inf(1) <= par;
}

/*Hyperbolic From Direct Rep (uses location of line closest to origin for consistency) */
State Fl::hyp(const State& s, bool dual){
	return Ro::null( Fl::loc( s, Ori(1), dual )) ^ Vec( Fl::dir( s, dual ) ) ^ Hyperbolic;

//	return ( Ori(1) <= s ) ^ Hyperbolic;
}
//alternatives methods:
State Fl::hyp2(const State& s, bool dual){
	return ( Ta::at( s, Ori(1), dual) ) ^ Hyperbolic;
}

State Fl::hyp3(const State& s, bool dual){
	return ( (dual)? ( Hyp(1,-.5 ) ^ s ) : ( Hyp(1,-.5 ) <= s ) ) ^ Hyperbolic;
}

/*Flat Point*/
State Fl::flp( const State& p ) {
	return p ^ Inf(1);
}

/*Ortho Plane through round (use ratio method of dlp_ortho_cir instead)*/
State Fl::dlp_cir(const State& c){
	return Ro::cen(c) <= Drv(Ro::dir(c));
}

/********TANGENTS*********/

State Ta::dir( const State& s){
	//Direct
	return ( Inf(-1) <= s ) ^ Inf(1);
	//Dual
	//return ( Inf(-1) <= Op::ud(s) ) ^ Inf(1);
}
State Ta::loc( const State& s){
	return ( s / Inf(-1) <= s );
}

State Ta::at( const State& round, const State& pnt, bool dual){
	State ts = dual ? Op::ud(round) : round;
	return pnt <= ts.involute();
}

double Ta::wt(const State& s){
	return (Ori(1) <= Ro::dir(s)).sqwt();
}

Tnv Ta::drvpnt( const Drv& d, const Pnt& p){
	Lin l = Fl::lin_drv_pnt(d,p); 
	return p <= (l.involute() );
}

Tnb Ta::drbpnt( const Drb& d, const Pnt& p){
	return p <= ( Fl::pln(d,p).involute() );
}

State Mt::lin(const State& linA, const State& linB){

}

State Mt::dll(const State& dllA, const State& dllB){
	Dlp dlp = Op::dl( Op::ud(dllA) ^ Drv(dllB) );
	Flp flp = Op::ud( dllB ^ dlp );
	return flp;
}

//Cir Mk::unitcircle() { 
//	static Pnt a = Ro::null(Vec::x);
//	static Pnt b = Ro::null(Vec::y);
//	static Pnt c = Ro::null(Vec::x * -1);
//	return a ^ b ^ c;
//}

} //