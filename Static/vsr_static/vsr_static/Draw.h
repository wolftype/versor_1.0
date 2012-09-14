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



#include <vector>
#include <sstream>




#include "vsr_gl.h"
#include "vsr_gxlib.h"
#include "op.h"
#include "vsr_matrix.h"

using namespace std;


namespace vsr {

//		//Forward Declarations
//        class Vec;
//		class Rot;
//		class Trs;
//		class Mot;
//		class Dil;
//		class Trv;
//		class Cir;
//		class Pnt;
//        class Frame;
    
        
//        class Camera;
		
        //GL BUILTIN PIPELINE
		class Glyph {

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
				static void Segment3(float angle = PI, float off = 0, float radius = 1.0,  bool sign = 0,   int res = 20);
                static void DashedSegment(float angle = PI, float radius = 1.0, bool sign =0, int res = 20);
				static void DashedSegment2(float t = PI, float t2 = 0, float rad = 1.0, int res = 20);
				static void DashedSegment3(float angle = PI, float off= 0, float radius = 1.0, bool sign =0, int res = 20);
                static void DirSegment(float angle = PI, float radius = 1.0, bool clockwise = 0, int res = 20);
				static void DirDashedSegment(float angle = PI, float radius = 1.0, bool clockwise = 0, int res = 20);
				
				//2D Spiral
				static void Spiral(float radius = 1.0, bool clockwise = 0);
				//Basic 3D Helix
				static void Helix(float radius = 1.0, float height = 1.0, bool clockwise = 0);
				//Arbitrary 3D Spiral
				//static void Helix(float radius = 1.0, float height = 1.0, bool clockwise = 0);
								
				//point in space (origin is default)
				template<class A> static void Point(const A& );
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
                static void SegOff(const Cir& K, double t, double off, bool dir = 1, int res = 20);
                static void SegRad( const Cir& );
                static void SegTo(const Cir&, double st, double t, int res = 20);
				static void Seg2(const Cir&, const Pnt&, const Pnt&, int res = 20);
                static void SegPnts(const Cir& K, const Pnt& a, const Pnt& b, int res = 20);
				
				/* Draw State, Label, and Node Info */
                template< class A > static void S(const A&);
                template< class A > static void S(const A&, float, float, float,float a = 1.0);
                template< class A > static void R(const A&);
                template< class A > static void R(const A&, float, float, float,float a = 1.0);
//				static void L(const State&);				
//				static void L(const State&, Scene&);
//				static void L(const State&, Scene&, const std::string&, int ofx = 15, int ofy = 15);
				
//				static void N(const State&);				
//				static void MV(const State&, int style);
//				static State pos(const State&);				
//				static void clickTest(State& s, double x, double y, double z);
//				static Vec  screenCoord(const State& s );

                template<class A>
                static void Push( const A& pos, const Rot& rot, const double& scale ){
                    glPushMatrix();
                        Vec4<> t = Gen::aa(rot);
                        glTranslated(pos[0], pos[1], pos[2]);
                        glRotated(t.w,t.x,t.y,t.z);
                        glScaled(scale,scale,scale);
                }
                
                template<class A>
                static void PushPosition( const A& pos){
                    glPushMatrix();
                        glTranslated(pos[0], pos[1], pos[2]);
                }

                static void Pop(){ glPopMatrix(); }

				
		//void drawLabel(double, double, double);
		//virtual void drawLoop();
		//virtual void clickTest(double,double);
		//void printPS();
		
		};
    
//    struct Print {
//    
//        enum Style {
//            None = 0,
//            Smooth = 1,
//            Tension = 1 << 1,
//            Cycle = 1 << 2,
//            Dotted = 1 << 3,
//            Dashed = 1 << 4,
//            Fill  = 1 << 5
//        };
//        inline static string Begin() { return "\\begin{tikzpicture}\n"; }
//        inline static string End()   { return "\\end{tikzpicture}";}
//        
//        inline static string DrawEnd() { return ";"; }
//        inline static string PlotEnd() { return "};"; }
//
//        static string DrawBegin(Style s = None);        
//        static string PlotBegin(float tension, bool cycle, bool smooth = false);
//        
//        static string frame(const Frame& f, const Camera& cam);
//        static string Cube(const Frame& f, const Camera& cam);
//        static string Circle(const State& cir, const Camera& cam);
//        static string CircleSeg( const State& cir, const State&, const State&, const Camera& cam);
//        static string Coord(const State & s, const Camera& cam);
//        static string Line(const State& pa, const State& pb, const Camera& cam);
//        static string Tikz( const State&, const Camera& );
//        static string TikzSeg( const State&, const State&, const State&, const Camera& );
//        static string  TikzSeg2( vector<State> pa, const Camera& cam);
//        static string TikzPerspective( const State&, const Camera& );
//    };
    
        
} //vsr::

#endif