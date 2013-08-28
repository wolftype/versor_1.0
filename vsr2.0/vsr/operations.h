#ifndef OPERATIONS_H_INCLUDED
#define OPERATIONS_H_INCLUDED

#include "products_all.h"  
#include "constants.h"

namespace vsr{
                          



namespace Op{   
   
	template< class A>
	constexpr auto dle(const A& a) RETURNS(
		egp( a, Tri(-1) )
	)  
	
} //OP::

namespace Gen{   

	Rot rot( const Biv& b){
    	VT  c = sqrt(- ( b.wt() ) );
        VT sc = -sin(c);
        if (c != 0) sc /= c;
        return Rot( cos(c), b[0]*sc, b[1]*sc, b[2]*sc );	
	}   
    /*! Get Bivector Generator from a Rotor 
        @param Rotor r
    */
    Biv log(const Rot& r){
    	
        VT t = r.get<0>();                           //<--- Scalar Value from Rotor
        
        Biv b = r.cast<Biv>();
        
        VT n = b.rnorm();
        
        if (n <= 0) {
            if (t < 0) {
                printf("Returning identity - ROTOR LOG FOUND SINGULARITY: %f\n", t );
                return Biv(PI,0,0);
            } else {
                return Biv(0,0,0); 
            }
        }
        
        VT s = atan2( n, t );
        return b * ( s / n);
    }	
    /*! Ratio Rotor From Two Vecs (assumes unit?) 
        @param Vec a
        @param Vec b
    */	
	Rot ratio( const Vec& a, const Vec& b ){

        VT s = ( a <= b ).get<0>();

        //180 degree check
		if ( a == b.conjugation() ) return Rot(0,0,1,0); //mind the ordering of blades

        VT ss = 2 * (s+1);
        VT n = ( ss >= 0 ? sqrt ( ss ) : 0 );

        Rot r = ( b * a ) ; //cout << r << endl;
        r.get<0>() += 1;	
        if (n != 0 ) r /= n;
        if (r == Rot(0,0,0,0) ) return Rot(1,0,0,0);//else cout << r << endl; //printf("0 in gen::ratio\n");
        return r;
    }  

    /*! Bivector plane of Rotation from Rotor 
        @param Rotor r
    */
    Biv pl( const Rot& r) {
        Biv b = r.cast<Biv>();
        VT t = b.rnorm(); // use rnorm or norm here?
        if (t == 0 ) return Biv(1,0,0);
        return b / t;
    }  
    /*! Angle of Rotation from Rotor 
        @param Rotor r
    */
    VT iphi( const Rot& r) {
        return Biv ( log(r) * -2 ).norm();
    }

    /*! Axis Angle from Rotor
        @param Rotor input
    */
	Rot aa (const Rot& r) {

        Vec v = Op::dle( Gen::pl( r ) ) ;		
        VT deg = iphi(r) * ( -180 / PI );
        			
        return Rot(deg, v[0], v[1], v[2]);
    }   
   
} // Gen::

}

#endif