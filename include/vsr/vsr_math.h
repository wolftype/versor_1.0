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

namespace con{
	
	class Math{	
		public:
		static double sinc(double x);
		static double sinhc(double x);
		static double clamp(double x, double min, double max);
		static double map(double x, double min, double max, double rmin, double rmax);
	};
}

#endif