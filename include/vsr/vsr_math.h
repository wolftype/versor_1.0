/*
 *  vsr_math.h
 *  CONGA_07
 *
 *  Created by x on 8/25/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#ifndef VSR_MATH_INCLUDED
#define VSR_MATH_INCLUDED

#include <math.h>

namespace vsr {
	
	struct Math{	
		//public:
		static double sinc(double x);
		static double sinhc(double x);
		static double clamp(double x, double min, double max);
		static double map(double x, double min, double max, double rmin, double rmax);
	};
    
    inline double Math::sinc(double x) { 
        if (x==0) return 1; else return sin(x)/(x); 
    }
    
    inline double Math::sinhc(double x) { 
        if (x==0) return 1; else return sinh(x)/x; 
    }
    
    inline double Math::clamp(double x, double min, double max){
        return (x < min) ? min : (x > max ) ? max : x;
    }
    
    inline double Math::map(double x, double min, double max, double rmin, double rmax){
        double orange = max - min;
        double drange = rmax - rmin;
        
        double offset = x - min;
        double ratio = offset / orange;
        
        double doffset = ratio * drange;
        
        return rmin + doffset;
    }
}

#endif