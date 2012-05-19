/*
 *  Op.h
 *  CONGA_05
 *
 *  Created by x on 3/22/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */
 
#ifndef OP_H_INCLUDED
#define OP_H_INCLUDED 

#include <iostream.h>
#include <vector>
#include <map>
#include <string>

#include "Matrix.h"
#include "vsr_math.h"


namespace vsr {

//using namespace std;

class Sca;
class Ori;
class Inf;
class Mnk;
class Pss;
class Pnt;
class Par;
class Cir;
class Sph;
class Drv;
class Drb;
class Drt;
class Tnv;
class Tnb;
class Tnt;
class Lin;
class Pln;
class Flp;
class Dll;
class Dlp;
class Vec;
class Biv;
class Tri;
class Rot;
class Trs;
class Dil;
class Mot;
class Trv;
class Mtd;
class Muv;

class Pnt_Pnt;

class State;

typedef Pnt Dls;
typedef Par Dlc;

/*!
Generic operations on one or more States.

Useful for creating stacks of function pointers in your machine.

For instance:
Op::dl( const State& s) returns the Dual of s.
Op::udl( const State& s) returns the Undual of s.

Op::sp( const State& v, const State& R) 
applies the rotor R to v and returns v',
forcing the same type as was input to be output.

Op::sp0( const State& v, const State& R)
applies the rotor R to v and returns v',
but does NOT force any type.

*/
class Op {

	public:
		//Op(){}
		
		/* Basic Products */
		/*! Inner Product of a and b */
		static State ip( const State & a, const State& b);
		/*! Outer Product of a and b */
		static State op( const State &, const State&);
		/*! Geometric Product of a and b*/
		static State gp( const State & a, const State& b);
		/*! Commutator a % B */
		static State cx( const State & a, const State& B);
		/*! Add b to a */
		static State add( const State&, const State&);
		/*! Subtract b from a */
		static State sub( const State& a, const State& b);
		/*! Remove floating point error */
		static State err( State s );
		/*!  Triple geometric product a*b*c */
		static State gp3( const State &, const State&, const State&);
				
		/*! Scalar Extraction of [0] val*/
		static double sca( const State&);
		/*! Create New State from Basis */
		static State ba( int idx);
		/*! Weight of Conformal Element */
		static double wt( const State&);
		/*! To Vec3<> ( inlined vector class ) */
		static Vec3<> vec3( const State&);
		
		/*! Sign +/- of s1 relative to s2 */
		static bool sn( const State& s1, const State& s2);
		
		
		/*! Spinor General Transform RxR^(-1) (continuous) force return of same type as input */
		static State sp( const State& x, const State& R);		
		/*! Pinor General Transform R x.involute R(binary reflection) forces return of same type as input */
		static State re( const State&, const State&);		
		/*! Spinor General Transform RxR^(-1) (not strict about return type) */
		static State sp0( const State&, const State&);
		/*! Pinor General Transform  (not strict about return type) */
		static State re0( const State&, const State&);
		/*! Inversrion of input state in e+ (real dual sphere at origin) */
		static State iep( const State& );
		/*! Inversrion of input state in e- (imaginary dual sphere at origin) */
		static State iem( const State& );
		/*! Exponentially multiplied input state s^n*/
		static State exp( const State& s, int n);
		
		/*! Simple Meet a ^ b (see also Op::meet) */
		static State mt( const State& a, const State& b);
		/*! Join (not yet implemented) */
		static State jn( const State&, const State&);
		/*! Dual Euclidean */
		static State dle( const State& );
		/*! Undual Euclidean */
		static State ude( const State& );
		/*! Dual Conformal */
		static State dl( const State& );
		/*! Undual Conformal */
		static State ud( const State& );
		/*! Rejection of a from b */
		static State rj( const State&, const State& );
		/*! Projection of a onto b */
		static State pj( const State&, const State&  );
				
		/*! Factorize */
		static std::vector<State> fa( const State& );
		/*! Max Blade */
		static State max( const State&);
		/*! Delta */
		static State del( const State& , const State&);
		/*! Projected Meet */
		static State meet( const State&, const State&);
		
		/*! Map values of State to range*/
		static State map (const State&, double );
		
		/*! Get Axis Angle Vec4<> from Rotor */
		static Vec4<> aa ( const Rot& );
		/*! Get Matrix from Rotor */
		static Mat4<> mat( const Rot& );
		/*! Bivector (normalized) of Rotor */
		static Biv pl( const Rot&);
		/*! Bivector Log of Rotor (or use Gen::log_rot) */
		static Biv lg( const Rot&);
		static double iphi( const Rot& );
		/*! return s.unit() */
		static State unit(const State&);
		/*! return s.runit() (reverse unit) */
		static State runit(const State&);
		
		/*! Dilate */
		static State di( const State&, double);
		static State di( const State&, const State &);
		/*! Rotate In 3D about a Plane */
		static State ro( const State&, const Biv& );
		/*! Rotate In 3D about an Angle Axis */
		static State ro( const State&, double, const Vec& );
		/*! Translate */
		static State ts( const State&, const Vec& );
		static State ts( const State&, const Drv&);
		/*! Motors */
		static State mo( const State&, const State& );
		static State mo( const State&, const Mot& );
		static State mo( const State&, const Rot& );
		/*! Transversors */
		static State tv( const State&, const State& );		
		
};

/*!
Static Functions for Generating Spinors.

For instance:  
Gen::rot, Gen::trs, Gen::mot, Gen::trv, Gen::dil

Gen::rot( const State& biv ) returns the Quaternionic
Rotor generated by Bivector biv.

Gen::log_rot( const State& rot ) returns the Bivector
Generator of Rotor rot.

Gen::mot( const& State dll)
creates a Motor around the Dual Line axis dll.

Gen::log_mot( const& State m) returns
the Dual Line Generator of a Motor m.  

Interpolation Functions:

Rotor Quaternions can be created from Ratios between Vectors:
Gen::ratio( const State& v1, const State& v2, double t )

or ratios between rotors
Gen::slerp( const State& rotA, const State& rotB, double t)

Motor Screws can be created from Ratios between Lines or Dual Lines:
Gen::ratio_dll( const State& dllA, const State& dllB, double t)

or ratios between motors
Gen::grip( const State& motA, const State& mot B, double t)

*/
class Gen {

	public:
	
		/*! Generic generator cos(theta) - sin (theta) I -- experimental, do not use */
		static State gen(const State&);
		
		//LOGARITHMS		
		/*! Bivector (Spacelike, Euclidean) logarithm of a Quaternion Rotor */
		static State log_rot(const State&);
		/*! Dual Line logarithm of a motor. See Wareham, Cameron, and Lasenby */
		static State log_mot(const State&);
		static State log_mot2(const State&);///< doesn't work (dorst et al)
		static State log_mot3(const State&);///< another version of dorst's
		/*! logarithm of a motor dilator (not yet implemented)
			(returns a spacelike +lightlike + timelike bivector rep'ed by a point pair)			
		*/
		static State log_mtd(const State&);  //lasenby
		static State log_mtd2(const State&); //dorst et al
	
		//MOTORS
		/*! Motor from General Rigid Inerpolation of two Motors*/
		static State grip(const Mot&, const Mot&, double t);
		/*! Motor from ratio of two Dual Lines */
		static State ratio_dll(const Dll& v1, const Dll& v2, double t = 1);	
		/*! Dual Line Generator from ratio of two Dual Lines */
		static State dll_ratio(const State& dA, const State& dB);	
		/*! Motor at Origin from Direction and Pitch */
		static State mot_dp(const State& drv, double p);
		/*! Motor from a Rotor and Translator (t*r) */
		static State mot_tr(const Rot&, const Trs&);
		/*! Motor from a Rotor, Translation Along Axis tw, and Translation of Rotor tv*/
		static State mot_rtt(const State& rot, const State& tw, const State& tv);
		/*! Motor from a Bivector, Translation Vector, and Translation of Rotor Vector */
		static State mot_bvv(const State& B, const State&, const State&);
		/*! Motor From Generic Contstruction (experimental) */
		static State mot_gen(const State& e);
		/*! Motor from Rotor and Vector */
		static State mot_rv(const State& r, const State& v);
		/*! Motor from Rotor and Translator (experimental) */
		static State mot_rt(const State& r, const State& t);
		/*! Motor from Point Pair and Dual Line */
		static State mot_par_dll(const State& par, const State& dll);
		/*! Motor from Circle and Line */
		static State mot_cir_lin(const State&, const State&);
		/*! Motor from Dual Line ("twist") Generator */
		static State mot(const State& dll); 
		/*! Motor from Dual Line ("twist") Generator (deprecated, use Gen::mot) */
		static State mot_dll(const State& dll); //(lasenby et al)
		static State mot_dll2(const State& dll);///< Dorst et al
		/*! Motor Dilator exponential twist and dilation (not yet implemented) */
		static State mtd_par(const State& par);
		
		/*! Rotor Part Extracted from Motor */
		static State rot_mot(const Mot& m);
		/*! Vec part extracted from Motor */
		static State vec_mot(const State& m);
		/*! Drv part extracted from Motor */
		static State dir_mot(const Mot& m);

		//ROTORS
		/*! Rotor from Spherical Linear Interpolation of two Rotors r1 and r2*/
		static State slerp(const State& r1, const State& r2, double t);		
		/*! Rotor Ratio of Two Vecs (Takes v1 to v2) */
		static State ratio( const State& v1, const State& v2);
		/*! Rotor from ratio of two Euclidean Vectors */		
		static State ratio_vec(const State& v1, const State& v2);
		/*! Rotor from ratio of two Euclidean Vectors at interp t*/		
		static State ratio_vec(const State& v1, const State& v2, double t);
		/*! Rotor from ratio of two Euclidean Bivectors */
		static State ratio_biv(const State& b1, const State& b2);
		/*! Rotor from axis and angle */	
		static State rot_aa(double,double,double,double w = PI);		
		/*! Rotor Generated from a Bivector */
		static State rot(const State& b);
		/*! Rotor Generated from a Bivector */
		static State rot_biv(const State & biv);
		/*! Rotor Generated from a Bivector */
		static State rot_biv2(const State& biv);
		/*! Rotor from a unit Bivector and theta */
		static State rot_biv_ang(const State& biv, double t);
		/*! Rotor from a Circle and theta */
		static State rot_cir(const Cir&, double);
		/*! Rotor from a Point Pair and theta */
		static State rot_par(const Par& p, double t);
		/*! Rotor Spherical Interpoltation between Vec v1 and Vec v2 */
		static State rot_slp(const State& v1, const State& v2, double t);
		/*! Direction Vector from input Rotor (not implemented) */
		static State dir(const State& r);
		
		
		//POINT RATIO
		/*! Conformal Point Ratio from Point Pair */
		static State tpar(const State&, double t = 1.0);
		
		//TRANSVERSORS
		/*! Transversor from 3 coordinates */
		static State trv3(double,double,double);
		/*! Transversor from state and weight */
		static State trv(const State&);
		/*! Dilator from double t*/
		//DILATORS
		static State dil(double t);
		/*! Dilator at Pnt p, from double t*/
		static State dil_pnt(const Pnt& p, double t);
		/*! Dilator at Pnt p */
		static State dil(const State&);
		/*! Translator from 3 Coordinates */
		//TRANSLATORS
		static State trs3(double,double,double);
		/*! Translator from State */
		static State trs(const State&);
		/*! Translator from State and double t*/
		static State trsD(const State&, double t);
		//EXP SERIES
		/*! Exponential as Series Expansion from Dorst et al (implemented, but not used) */
		static State expseries_dll(const State&);
		/*! Point Ratio as Series Expansion (implemented, but not used) */
		static State expseries_par(const State&);

		
		//ETC								
		/*! real dual sphere at vector v e+ */
		static Dls vep(const Vec&, double t = 1.0);
		/*! imaginary dual sphere at vector v e+ */
		static Dls vem(const Vec&, double t = 1.0);
		/*! Loxodrome from Tangent and Direction */
		static State lox(const State& tnv, const State& drv);

//		//reflection of vector about a plane
//		static State ref(const Pln&); 

//		static Dil 
		//Hyperbolic Generators
		//static 
		//Spherical Generators
//		static State Dipole
//		static State Source
//		static Pnt Sink
//		static 
};

/*! Simple Euclidean Vector Data Passing */
class Eu {
	public:
	
		/*! Convert Vec3<> to GA Vec */
		static Vec vec(Vec3<>);
		/*! Convert State to Vec3<> */
		static Vec3<> vec3(const State&);
};

/*!
Generation of and Information about Round Elements.

Ro::null( const State& s) creates a null vector (point) from s
Ro::loc( const State& s) returns the precise point location of s
Ro::cen( const State& s) returns the dual sphere (inflated) location of s

etc . . .

*/
class Ro {
	public:
		
//		static State loc_fl_dl( const State&,const State&);
//		static State loc_fl (const State&,const State&);
//		static State loc_ta_dl(const State&);
//		static State loc_ta(const State&);
    
    /*! Chord Check: Returns True if pc is between pa and pb on circle K (maybe...) */
    static bool between(const State& cir, const State& pa, const State& pb, const State& pc);
        /*! Returns TRUE if two rounds (pnts or dls) a and b are within a range r */
        static bool hit ( const State& a, const State& b, double r  = 0);
        /*! Squared Distance between two points */
        static double sqd ( const State& a, const State& b );
        /*! Meet of Two Circles */
        static Par meet_cir( const State& a, const State& b);
        /*! returns dualized flat point unit point */
        static Pnt dll_meet_dlp(const State& dll, const State& dlp);
        /*! Double Distance between two points */
        static double dst ( const State& a, const State& b );
		/*! Point Location of Round Element */
		static State loc( const State&);
		/*! Dual Sphere Location (inflated) of Round Element  */
		static State cen(const State&);
		/*! Null Point Extraction of Center Point of Round Element*/		
		static State null_cen(const State&);
		/*! Direction of Round Element, dual or not*/
		static State dir( const State&, bool dual );
		/*! Squared Size of Round Element (can be negative!) */
        static double siz( const State&, bool dual);//int sn = 1.0);
		/*! Radius of Round Element*/
		static double rad( const State&);
		/*! Boolean check returns TRUE if element is Real */
		static bool re(const State&);
		/*! Carrier Flat of Round Element */
		static State car( const State&);
		/*! Dual Sphere Surround of Round Element */
		static State sur( const State&);
		/*! Points A and B of Point Pair input */
		static std::vector<Pnt> split( const Par&);
		/*! Point A of Point Pair */
		static Pnt split1(const Par&);
		/*! Point B of Point Pair */
		static Pnt split2(const Par&);
		/*! Weight of Round */
		static double wt(const State& s);
		/*! Re-normalized Point */
		static Pnt nrml(const State& s);
		
		/*! Null point from 3 coordinates  */
		static State null( double, double ,double);
		/*! Null point from Vec  */
		static State null( const State& );
		/*! Null point from Vec<>  */
		static State null( Vec3<> );		
		/*! Dual Sphere from Vec, Radius r, and bool real or imag \sa {dls_vec} */
		static State dls( const Vec& , double r = 1.0, bool = 1);
		/*! Dual Sphere from Vec, Radius r, and bool real or imag*/
		static State dls_vec( const State& vec, double r = 1.0, bool = 1);
		/*! Dual Sphere from Pnt, Radius r, and bool real or imag \sa{dls_pnt}*/
		static State dls( const Pnt& , double r = 1.0, bool = 1);
		/*! Dual Sphere from Pnt, Radius r, and bool (real or imag) \sa{dls_pnt}*/
		static State dls_pnt( const State& pnt, double _sr = 1.0, bool real =1);
		/*! Dual Sphere from 3 coordinates, Radius r, and bool (real or imag) */
		static State dls3( double x, double y, double z, double _sr = 1.0, bool real=1);
		/*! Dual Sphere at Point c through Point p */
		static State dls( const State& c, const State& p);
		/*! Dual Circle (Point Pair) from Vec, radius r, and bool (real or imag) */
		static State par( const Vec&, double r = 1, bool b = 1);
		/*! Dual Circle from Vec Facing  . . .*/
		static State par( const Vec&, const Vec&, double r = 1, bool b = 1);
		static State par( const Pnt&, const Dlp&, double r = 1, bool b = 1);
		/*! Point Pairs on Direct Circle c, at angle theta from horizontal */
		static State par_cir(const Cir&, double theta);
		/*! Point on Direct Circle c, at angle theta from horizontal */
		static State pnt_cir(const Cir&, double theta);
		/*! Point at 12 o'clock on a circle (deprecated -- use pnt_cir instead with theta = PI/2) */								
		static State noon( const State& s);	
    
    static State par_dls(const State& dls, double u, double v); 
    static State pnt_dls(const State& dls, double u, double v);
		/*! Conic Transform of point P. 
		   If 1 > ecc > 0 elliptic, If ecc > 1 is hyperbolic, if ecc = 1  parabolic.
		   See "Recent applications of conformal geometric algebra" Wareham, Cameron, and Lasenby

		*/		
		static State conic(const State& pnt, double);
		
		/*! Create Par at origin from Biv */
		static State parbiv( const State& );
        /*! Direct Round from Dual Sphere and Euclidean Carrier */
        static State dls_flat(const State& dls, const State& flat);
		/*! Direct Round from center and carrier */
		static State pnt_flat(const State& pnt, const State& flat, double r=1.0);
		/*! Dual Round From center and dual carrier */
		static State pnt_flat_dl(const State& pnt, const State& flat, double r=1.0);
		/*! Circle from three Points */
		static State cir3pnt(const State&, const State&, const State&);
		/*! Circle from two Points */
		static State cir2pnt(const State&, const State&);
		/*! Circle from Pair */
		static State cir1par(const State&);
		/*! Renormalize point to homogenous */
		static State hom(const State&);
		/*! Axis Line Through A Direct Circle */
		static State ax(const State& s);
		/*! Circle around Line L through Point P (returns cir if L is dual line, or par if L is direct)*/
		static State cir_lin_pnt(const State& L, const State& p, bool dual);
		/*! Bounding Sphere of any Element*/
		static State dls_bound(const State& s, double t = .3);
    
        /*! Curvature K of Round Element */
        static double cur(const State& s);
};

/*!
Generation of and Information about Flat elements.
*/
class Fl {
	public:
		/*! Point on Plane or Line f Closest to Point p, Direct or Dual Flat */
		static State loc( const State& f, const State& p, bool dual);
		/*! Direction of Flat, Dual or Direct */
		static State dir( const State&, bool dual = 0);
		/*! Unit Conversion */
		static State uni( const State&);
		/*! Weight of Flat, Dual or Direct */
		static double wt(const State& s, bool dual =0);		
		/*! Line from Two States, typically a null point and a vec, or two null points */
		static State lin(const State& p, const State& q);
		static State lin_drv_pnt( const Drv&, const Pnt&);
		/*! Direct Plane from Direction Bivector and Pnt*/
		static State pln( const State& drb, const State& pnt);
		/*! Dual Plane from Direction and pnt */
		static State dlp_drv_pnt( const State& pnt, const State& drv);
		/*! Dual Plane from Flat Point and Direct Circle */
		static State dlp_flp_cir( const State& flp, const State& cir);
		/*! Dual Plane from Circle and Point (orthogonal to circle)*/
		static State dlp_pnt_cir(const State& pnt, const State& cir);
		/*! Dual Plane Orthogonal to Circle */
		static State dlp_ortho_cir(const State& cir, double theta = 0);
		/*! Dual Plane from Round (use dlp_ortho_cir instead)*/
		static State dlp_cir(const State&);				
		/*! Flat Point from Point p*/
		static State flp( const State& p);		
		/*! Hyperbolic Mapping (various ways of doing this . . . ) */
		static State hyp(const State& s, bool dual = 1);		
		/*! Hyperbolic Mapping (alternative . . . ) */
		static State hyp2(const State& s, bool dual = 1);		
		/*! Hyperbolic Mapping (alternative . . . ) */
		static State hyp3(const State& s, bool dual = 1);	
		/*! Dual Plane bisecting Pair of Points */
		static State dlp_par(const State& par);
};

/*!
Generation of and Information about Tangent elements
*/
class Ta {
	public:
		/*! Point Location of Tangent */
		static State loc( const State&);
		/*! Direction of Tangent */
		static State dir( const State&);
		/*! Tangent to Round at Point pnt, with boolean flag = 1 if Round is dual. */
		static State at ( const State& round, const State& pnt, bool dual);
		/*! Scalar weight of Tangent */
		static double wt(const State& s);		
		/*! Tangent Vector from Direction Vector and Point */
		static Tnv drvpnt( const Drv&, const Pnt&);
		/*! Tangent Bivector from Direction Bivector and Point */
		static Tnb drbpnt( const Drb&, const Pnt&);

};

class Mt {
	public:
		/*! Meet (point) of two direct lines */
		static State lin(const State& linA, const State& linB);
		/*! Meet (point) of two dual lines */
		static State dll(const State& dllA, const State& dllB);
};

//class Xf {};


} //vsr::

#endif