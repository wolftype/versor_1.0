/*
 *  vsr_interp.h
 *  CONGA_07
 *
 *  Created by x on 5/29/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

#ifndef VSR_INTERP_INCLUDED
#define VSR_INTERP_INCLUDED


#include "State.h"
#include "Matrix.h"

using namespace std;

namespace vsr {

    enum Interpolation {
        LINEAR,
        QUADRIC,
        CUBIC,
        BSPLINE,
        NURB,
    };
    
   // template <typename T>
	class Interp {
		
		public:
			
			/// t from 0 to 1
            template<typename T>
			static T cubic(T _a, T _b, T _c, T _d, double t);
			/// t from -1 to 1
            template<typename T>
			static T quad(T _a, T _b, T _c, double t);
			/// t from 0 to 1
            template<typename T>
			static T linear(T _a, T _b, double t);
			
			/// arbitrary number of points to pass through
            template<typename T>
			static T quad(T * s, int num, double t, bool closed =0);
            /// arbitrary number of points to pass through
            template<typename T>
			static T cubic(T * s, int num, double t);
        
			//eulerian surface interpolation assumes four points 
            template<typename T>
			static T surface(T *s, double u, double v);
            //eulerian surface interpolation assumes four points 
            template<typename T>
            static T surface(T a, T b, T c, T d, double u, double v);
			//eulerian volume interpolation assumes eight points
			template<typename T>
            static T volume(T *s, double x, double y, double z);

//            template<typename T>
//            static vector<double> svals(T a, T b, T c, T d, double u, double v);
//
//            template<typename T>
//            static vector<double> svals(T a, T b, T c, T d, double u, double v);

	};
    
    template<typename T> 
    inline T Interp :: cubic(T _a, T _b, T _c, T _d, double t) {
        
        //get three states describing HULL	
        T a = _b - _a;
        T b = _c - _b;
        T c = _d - _c;
        
        //multiply each by p
        T a2 = _a + a * t;
        T b2 = _b + b * t;
        T c2 = _c + c * t;
        
        //get second order translation states
        a = b2 - a2;
        b = c2 - b2;
        
        a2 += a * t;
        b2 += b * t;
        
        //get third order (cubic)
        a = b2 - a2;
        a2 += a * t;
        
        return a2;
    }
    
    //return state
    template<typename T>
    inline  T Interp :: quad(T _a, T _b, T _c, double t) {
        
        
        //remap from 0 - 1 to -1 to 1
        double nt = -1.0 + 2.0*t;
        //	cout << " nt: " << nt << "\n";
        
        //get three states describing HULL	
        double p = nt * nt; 
        
        T a = ( ( (_a + _c) * .5 )  - _b ) * p;
        T b = (_c - _a ) * (.5 * nt);
        T c = a + b + _b;
        
        return c;
    }
    
    template<typename T>    
    inline T Interp  :: linear(T _a, T _b, double t) {
        return _a * (1-t) + _b * (t);
    }
    
    template<typename T>
    inline T Interp :: quad( T * cp, int num, double t, bool closed ) {
        
        if (t < 0 ) t = 0;
        
        
        double n = closed ? num / 2.0 : (num-1)/2.0; 
        
        int fn = floor(n);		// number of 3 group sections
        double rem = n - fn;	//remainder ( 0 or .5 )
        
        double td = ( t * n ); //fn?	
        int it = floor(td); //current group
        
        double ct = td - it;   //current position in group (0-1)
        
        int gt = it * 2;	
        
        //	cout << "num: " << fn << " rem: " << rem << " group: " << it << " idx: " << gt << " ct: " << ct << "\n"; 
        
        if ( (rem != 0) && (it==fn) ) {
            return closed? linear( cp[gt], cp[0], ct *2 ) : linear( cp[gt], cp[gt+1], ct *2 );
        }
        else{ 
            return closed ? quad(cp[gt], cp[gt+1], (it==fn-1)? cp[0] : cp[gt+2], ct) : quad(cp[gt], cp[gt+1], cp[gt+2], ct); 	
        }
        
    }
    
    //d c
    //a b
    template<typename T>
    inline T Interp :: surface(T * cp, double u, double v){
        T bot = cp[0] * (1-u) + cp[1] * u;
        T top = cp[3] * (1-u) + cp[2] * u;
        return bot * (1-v) + top * v;
    }

    template<typename T>
    inline T Interp :: surface(T a, T b, T c, T d, double u, double v){
        T bot = a * (1-u) + b * u;
        T top = d * (1-u) + c * u;
        return bot * (1-v) + top * v;
    }
    
    
    //d3 c2					h7 g6
    //a0 b1  <- front		e4 f5  <- back
    
    //2 6					3 7
    //0 4					1 5
   template<typename T>
     inline T Interp :: volume(T * cp, double u, double v, double w){
        T fbottom = cp[0] * (1-u) + cp[4] * u;
        T ftop = cp[2] * (1-u) + cp[6] * u;
        T fmid = fbottom * (1-v) + ftop * (v);
        
        T bbottom = cp[1] * (1-u) + cp[5] * u;
        T btop = cp[3] * (1-u) + cp[7] * u;
        T bmid = bbottom * (1-v) + btop * (v);	
        
        return fmid * (1-w) + bmid * w;
    }
    
//    template<typename T>
//    inline T Interp :: svals(T a, T b, T c, T d, double u, double v){
//        T bot = a * (1-u) + b * u;
//        T top = d * (1-u) + c * u;
//        return bot * (1-v) + top * v;
//    }
        
}
#endif