/*
 *  GLYPH.h
 *  gelatin
 *
 *  Created by x on 1/19/10.
 *  Copyright 2010 x. All rights reserved.
 *
 
	GLYPHS and DRAW COMMANDS
	
	A Display List of Icons (vector arrows, etc)
	
	to do : allow glyph to draw glv text (hmmm, and glv views?)
	
	Immediate Mode GL Utility for drawing data
	(States and Frames and Fields call Draw :: S () or Draw :: Push () etc )
 
 */

#ifndef DRAW_H_INCLUDED
#define DRAW_H_INCLUDED

#define MAXLEFT  -100
#define MAXRIGHT 100
#define MAXNEAR 1
#define MAXFAR 100

//Macros for Near and Far -- how to draw infinite planes and lines for instance?
//#include "glv.h"
//#include <GLUT/glut.h>

#include "Matrix.h"

//namespace glv {
//	class Scene;
//}

namespace vsr {

//		using glv::Scene;

		//Forward Declarations
        class Vec;
		class Rot;
		class Trs;
		class Mot;
		class Dil;
		class Trv;
		class Cir;
		class Pnt;
		class State;
		
		class Glyph {
		
				//Glyphs can be animated, and so have static methods that can refer to a time member
				//which is updated by a static clock
				
				// Revised: Glyphs now just fetch global time (if bool to do so is passed in as arg)
				
				//static int mTime;
				//static bool bAnimate;

			public:
			
				static void Go();

				/* Line Between Two Points */
				static void Line(const Vec& v1, const Vec& v2);
				/* Line from Origin */
				static void Line(const Vec& v1);

				static void DashedLine(const Vec& v1, const Vec& v2, int num = 10);
				static void DashedLine(const Vec& v1, int num = 10);
				
				static void Pin(const Vec& v2);
				
				//directed line element
				static void Dir(const Vec& v1);
				static void Arr(const Vec& v1, bool line = 0);
				//directed line element at a certain position
				static void Dir(const Vec& v1, const Vec& v2);
				
				//reg circle
				static void Circle(double radius = 1.0, int res = 50);
				//directed Circle
				static void DirCircle(double radius = 1.0, bool clockwise = 0, int res = 50, bool anim = 0);
				//dashed circle
				static void DashedCircle(double radius, int res = 50);
				//directed Dashed Circle
				static void DirDashedCircle(double radius = 1.0, bool clockwise = 0, int res = 50, bool anim = 0);
				//directed circle version 2
				static void Circled(float radius = 1.0, bool clockwise = 0);
				//animated circle
				static void Circular(float radius, bool clockwise = 0);
				static void FillCircle(double radius = 1.0, int res = 50);
				static void DirFillCircle (double radius =1.0, bool clockwise =0, int res =50, bool anim = 0);
				//circle segment
				static void Segment(float angle = PI, float radius = 1.0,  bool sign = 0, int res = 20);
				static void Segment2(float angle = PI, float off = 0, float radius = 1.0, int res = 20);
				static void DashedSegment(float angle = PI, float radius = 1.0, bool sign =0, int res = 20);
				static void DashedSegment2(float t = PI, float t2 = 0, float rad = 1.0, int res = 20);
				static void DirSegment(float angle = PI, float radius = 1.0, bool clockwise = 0, int res = 20);
				static void DirDashedSegment(float angle = PI, float radius = 1.0, bool clockwise = 0, int res = 20);
				
				//2D Spiral
				static void Spiral(float radius = 1.0, bool clockwise = 0);
				//Basic 3D Helix
				static void Helix(float radius = 1.0, float height = 1.0, bool clockwise = 0);
				//Arbitrary 3D Spiral
				//static void Helix(float radius = 1.0, float height = 1.0, bool clockwise = 0);
								
				//point in space (origin is default)
				static void Point(const State& );
				static void Point(const Vec3<>& );
				
				static void Axes( const Vec&, const Vec&, const Vec&);
				//pin (versor)
				
				//flat arrow
				static void Tri(bool down = 0);
				static void TriLine(bool down = 0);
				
				//glut cone
				static void Cone();
				//glut wire sphere
				static void Sphere(double radius = 1, int slices = 20, int stacks = 20);
				//glut solid sphere
				static void SolidSphere(double radius = 1, int slices = 20, int stacks = 20);
				
				//filled quad
				static void Rect(double w = 1, double h = 1);
				//outline quad
				static void EmptyRect(double w = 1, double h = 1);
				//dotted outline quad
				static void DottedRect(double w = 1, double h = 1);
				//dotted outline multquad
				static void DottedGrid(int w = 5, int h = 5, double s = 1);
				//static void Reflection(
				static void SolidGrid(int w = 5, int h = 5, double s = 1);
				
		};
	
		class Draw {
		
			static bool bDir; //draw directions?
		
			public:
				static void dir(bool b);
			
				static void Seg(const Cir&, double t, bool dir = 1, int res = 20);				
				static void Seg2(const Cir&, const Pnt&, const Pnt&, int res = 20);
				
				/* Draw State, Label, and Node Info */
				static void S(const State&);

//				static void L(const State&);				
//				static void L(const State&, Scene&);
//				static void L(const State&, Scene&, const std::string&, int ofx = 15, int ofy = 15);
				
				static void N(const State&);
				
				static void S(const State&, int style);
				static State pos(const State&);
				
				static void clickTest(State& s, double x, double y, double z);
//				static Vec  screenCoord(const State& s );

				static void PushPosition(const State&);
				static void Push(const State& p, const State& r, const double& s);
				static void Pop();
				
		//void drawLabel(double, double, double);
		//virtual void drawLoop();
		//virtual void clickTest(double,double);
		//void printPS();
		
		};
} //vsr::

#endif