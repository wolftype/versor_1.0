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

namespace vsr {

	class Interp {
		
			//Array of Basis Generators
			State * hull;
			//Resolution of Curve
			int res;
			
//			//Draw the Hull and the Net?
//			bool bDrawHull;
//			bool bDrawNet;
//			void drawSegmentNet(float p);
//			void drawHull();
//			
//			//Is it selected and Which Control Point is selected?
//			bool bSelected;
//			int mActivePoint;
		
		public:
		
			enum {
				CUBIC,
				QUADRIC,
				BSPLINE,
				NURB,
			};
					
			Interp();
			Interp( State * );
			Interp( int t, State * );
			Interp( int t, State * cv, float * kv );
			
			//t from 0 to 1
			static State cubic(State _a, State _b, State _c, State _d, double t);
			//t from -1 to 1
			static State quad(State _a, State _b, State _c, double t);
			//from 0 to 1
			static State line(State _a, State _b, double t);
			
			//arbitrary number of points to pass through
			static State quad(State * s, int num, double t, bool closed =0);
			static State cubic(State * s, int num, double t);
			//assumes four
			static State surface(State *s, double u, double v);
			//assumes eight
			static State volume(State *s, double u, double v, double w);

			void set( State * );
			
			void movePoint(float xval, float yval);

//			void draw();
//			bool hitTest(float xval, float yval);

	};

}
#endif