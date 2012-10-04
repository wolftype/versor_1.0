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

#include "op.h"

#include <vector>
#include <sstream>

#include "vsr_gl.h"
#include "vsr_matrix.h"

//#include "Camera.h"


//Macros for Near and Far -- how to draw infinite planes and lines for instance?
//#include "glv.h"
//#include <GLUT/glut.h>

#define MAXLEFT  -100
#define MAXRIGHT 100
#define MAXNEAR 1
#define MAXFAR 100

using namespace std;

namespace vsr {

//		

        //Predeclare MV class
//        template< int NUM, int IDX, class T > class MV;
//        //Forward Typedefs 
//        typedef MV<3,VEC,float>  Vec;
//        typedef MV<4,ROT,float>  Rot;
//        typedef MV<5,PNT,float>  Pnt;
//        typedef MV<10,CIR,float> Cir;
//        typedef MV<9,STA,float>  Sta;
////		class Trs;
//		class Mot;
//		class Dil;
//		class Trv;
//		class Cir;

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
                template< class A > static void S(const A& a);// { cout << "no draw routing found" << endl; }
//                template< class A > static void S(const A&, float, float, float,float a = 1.0);
                template< class A > static void R(const A& a) { R(a, 1,1,1); }
                template< class A > static void R(const A&, float, float, float,float a = 1.0);
//				static void L(const State&);				
//				static void L(const State&, Scene&);
//				static void L(const State&, Scene&, const std::string&, int ofx = 15, int ofy = 15);
				
//				static void N(const State&);				
//				static void MV(const State&, int style);
//				static State pos(const State&);				
//				static void clickTest(State& s, double x, double y, double z);
//				static Vec  screenCoord(const State& s );

                static Sta statest();

                template<class A>
                static void Push( const A& pos, const Rot& rot, const double& scale );
                
                template<class A>
                static void PushPosition( const A& pos);

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

//bool Glyph :: bAnimate = 1;

void Glyph :: Circle (double radius, int numseg) {

	glNormal3f(0, 0, 1);

	glBegin(GL_LINE_STRIP);

		for (int i = 0; i < numseg + 1; ++ i){
			float rad = 2 * PI * i / numseg;
			Vec2<> t (cos(rad), sin(rad));
			t *= radius;
			glVertex2f(t.x, t.y);
		}
		
	glEnd();
}

void Glyph :: FillCircle(double radius, int numseg){

	glNormal3f(0, 0, 1);

	glBegin(GL_TRIANGLES);

		for (int i = 0; i < numseg; ++ i){
			
			float rad = 2 * PI * i / numseg;
			float rad2 = 2 * PI * (1.0 * i+1) / numseg;
			Vec2<> t (cos(rad), sin(rad));
			t *= radius;
			Vec2<> t2 (cos(rad2), sin(rad2));
			t2 *= radius;
			glVertex2f(0,0);
			glVertex2f(t.x, t.y);
			glVertex2f(t2.x, t2.y);
		}
		
	glEnd();
}


void Glyph :: DashedCircle(double radius, int numseg) {

	glNormal3f(0, 0, 1);

	glBegin(GL_LINES);

		for (int i = 0; i < numseg; ++ i){

			float rad = 2 * PI * i / numseg;
			Vec2<> t (cos(rad), sin(rad));
			t *= radius;
			glVertex2f(t.x, t.y);
		}
		
	glEnd();

}

void Glyph :: DirCircle (double radius, bool clockwise, int res, bool bAnimate) {
	
	Glyph::Circle(radius);

	for (int i = 0; i < 5; ++i) {

		float dt = 0;//( bAnimate? Time::Clock().total() * 2 * PI : 0 );
			float rad = ( clockwise ? -1 : 1 ) * ( dt/10.0 + ( 2 * PI * i ) / 5  );
			//if(bAnimate) rad += Time::Clock().time();
		glPushMatrix();	
		
			//cout << rad << endl;
			//Rot rn = Rot::e12( ( clockwise ? -1 : 1 ) * rad );
			Vec2<> t (cos(rad), sin(rad));
			t *= radius;
			glTranslated(t.x, t.y, 0);
			glRotated( 180 * rad / PI, 0, 0, 1);
			glScaled(.5,.5,.5);
			Glyph::Tri(clockwise);	
					
		glPopMatrix();
	}
}

void Glyph :: DirFillCircle (double radius, bool clockwise, int res, bool bAnimate) {
	
	Glyph::FillCircle(radius);
	Glyph::Circle(radius);

	for (int i = 0; i < 5; ++i) {

		float dt = 0;//( bAnimate? Time::Clock().total() * 2 * PI : 0 );
			float rad = ( clockwise ? -1 : 1 ) * ( dt/10.0 + ( 2 * PI * i ) / 5  );
			//if(bAnimate) rad += Time::Clock().time();
		glPushMatrix();	
		
			//cout << rad << endl;
			//Rot rn = Rot::e12( ( clockwise ? -1 : 1 ) * rad );
			Vec2<> t (cos(rad), sin(rad));
			t *= radius;
			glTranslated(t.x, t.y, 0);
			glRotated( 180 * rad / PI, 0, 0, 1);
			glScaled(.5,.5,.5);
			Glyph::Tri(clockwise);	
					
		glPopMatrix();
	}
}





void Glyph :: DirDashedCircle (double radius, bool clockwise, int res, bool bAnimate) {
	
	Glyph::DashedCircle(radius);

	for (int i = 0; i < 5; ++i) {
		
		glPushMatrix();	
		
			float rad = (clockwise ? -1 : 1  ) * ( 2 * PI * i ) / 5;
			Vec2<> t (cos(rad), sin(rad));
			t*= radius;
			glTranslated(t.x, t.y, 0);
			glRotated( 180 * rad / PI, 0, 0, 1);
			Glyph::TriLine(clockwise);	
					
		glPopMatrix();
	}
}

//void Glyph :: DashedCircled(double radius, bool clockwise) {
//	glBegin(GL_LINES);
//
//		for (int i = 0; i < numseg; ++ i){
//
//			float rad = 2 * PI * i / numseg;
//			Vec2<> t (cos(rad), sin(rad));
//			t *= radius;
//			glVertex2f(t.x, t.y);
//		}
//		
//	glEnd();
//}

void Glyph :: Circled(float radius, bool clockwise) {

	glNormal3f(0, 0, 1);

	glBegin(GL_LINES);

		for (int i = 0; i < 20; ++ i){

			float rad = PI * i / 20.0;
			Rot rn = Rot::e12( ( clockwise ? -1 : 1 ) * rad );

			static Vec vo = Vec::x * 1.1;
			Vec v = Op::sp( rn , Vec::x ) * radius;			

			glVertex3f(vo[0], vo[1], vo[2]);
			glVertex3f(v[0], v[1], v[2]);
			
			vo = v * 1.1;
		}
		
	glEnd();

}


void Glyph :: Circular(float radius, bool clockwise) {

	glNormal3f(0, 0, 1);

	static double anomaly = 0;
	anomaly += (.1 * ( clockwise ? -1 : 1 ) );
	
	glBegin(GL_LINES);
	
			
		for (int i = 0; i < 20; ++i){
		
			float rad = PI * i / 20.0;
			float col = i / 20.0;

			Rot rn = Rot::e12( ( clockwise ? -1 : 1 ) * ( rad + anomaly) );
			Vec v = Op::sp( rn , Vec::x ) * radius;
			
			glColor3f(col,0,1-col);		
			glVertex3f(v[0], v[1], v[2]);
		}
		
	glEnd();
	
	glColor3f(1,1,0);
	//glPointSize(5.0);
	glBegin(GL_POINTS);
	
		Rot rn = Rot::e12(anomaly );
		Vec v = Op::sp( rn , Vec::x );
		glVertex3f(v[0], v[1], v[2]);
		
	glEnd();

}


void Glyph :: Segment(float angle, float radius, bool sign, int res){

	glNormal3f(0, 0, 1);

	int num = res * fabs(angle);   //floor(20 * PI / (1 + ( PI - angle ) ));

	glBegin(GL_LINE_STRIP);
		
		for (int i = 0; i <= num; ++ i){

			float rad = (sign?0:0) + ( angle * i / num ) - angle/2 ;
			Vec2<> t ( cos(rad), sin(rad) );
			t *= radius;
			glVertex2f(t.x, t.y);			
			
		}

	glEnd();
	
}

void Glyph :: Segment2(float angle, float angle2, float radius, int res){

	glNormal3f(0, 0, 1);

    // * fabs(angle);//floor(20 * PI / (1 + ( PI - angle ) ));

	double t = angle2 - angle;
	int num = res * fabs(t);
    glBegin(GL_LINE_STRIP);
		
		for (int i = 0; i < num; ++ i){

			float rad = ( angle ) + t * i / res;
			Vec2<> t ( cos(rad), sin(rad) );
			t *= radius;
			glVertex2f(t.x, t.y);			
			
		}

	glEnd();
	
}

//like segment, but with offset
void Glyph :: Segment3(float angle, float off, float radius, bool sign, int res){

	glNormal3f(0, 0, 1);

	int num = res;// * fabs(angle);   //floor(20 * PI / (1 + ( PI - angle ) ));

	glBegin(GL_LINE_STRIP);
		
		for (int i = 0; i <= num; ++ i){

//			float rad = off + (sign?PI:0) + ( angle * i / num ) - angle/2 ;
			float rad = off + ( angle * i / num ) - angle/2 ;
			Vec2<> t ( cos(rad), sin(rad) );
			t *= radius;
			glVertex2f(t.x, t.y);			
			
		}

	glEnd();
	
}

void Glyph ::  DashedSegment (float angle, float radius, bool sign, int res){

	glNormal3f(0, 0, 1);

	int num = res * fabs(angle);//floor(20 * PI / (1 + ( PI - angle ) ));

	glBegin(GL_LINES);

		for (int i = 0; i < num; ++ i){

			float rad = ( angle * i / num ) - angle/2 + ( (sign)? PI : 0 );
			Vec2<> t ( cos(rad), sin(rad) );
			t *= radius;
			glVertex2f(t.x, t.y);			
		}
		
	glEnd();
	
}

void Glyph::DashedSegment2(float angle, float angle2, float radius, int res){

	glNormal3f(0, 0, 1);

	int num = res * fabs(angle);//floor(20 * PI / (1 + ( PI - angle ) ));

	glBegin(GL_LINES);
		
		for (int i = 0; i < num; ++ i){

			float rad = ( angle * i / num ) + angle2;
			Vec2<> t ( cos(rad), sin(rad) );
			t *= radius;
			glVertex2f(t.x, t.y);			
			
		}

	glEnd();

}
//like segment, but with offset
void Glyph :: DashedSegment3(float angle, float off, float radius, bool sign, int res){

	glNormal3f(0, 0, 1);

	int num = res * fabs(angle);   //floor(20 * PI / (1 + ( PI - angle ) ));

	glBegin(GL_LINES );
		
		for (int i = 0; i < num; ++ i){

			float rad = off + (sign?PI:0) + ( angle * i / num ) - angle/2 ;
			Vec2<> t ( cos(rad), sin(rad) );
			t *= radius;
			glVertex2f(t.x, t.y);			
			
		}

	glEnd();
	
}
void Glyph :: DirSegment (float angle, float radius, bool clockwise, int res){

	glNormal3f(0, 0, 1);

	int num = 10 * fabs(angle);
	
	Glyph::Segment(angle, radius, res);
	
	for (int i = 0; i < num; ++i){
		float rad = (clockwise ? -1 : 1 ) * angle * i / num;
		Vec2<> t ( cos(rad), sin(rad) );
		t *= radius;
		glPushMatrix();
			glTranslated(t.x, t.y, 0);
			glRotated(180 * angle / PI, 0,0,1);
			Glyph::Tri(clockwise);
		glPopMatrix();
	}	
}

void Glyph :: DirDashedSegment (float angle, float radius, bool clockwise, int res){

	glNormal3f(0, 0, 1);

	int num = 10 * fabs(angle);
	
	Glyph::DashedSegment(angle, radius, res);
	
	for (int i = 0; i < num; ++i){
		float rad = (clockwise ? -1 : 1 ) * angle * i / num;
		Vec2<> t ( cos(rad), sin(rad) );
		t *= radius;
		glPushMatrix();
			glTranslated(t.x, t.y, 0);
			glRotated(180 * angle / PI, 0,0,1);
			Glyph::Tri(clockwise);
		glPopMatrix();
	}	
}


void Glyph :: Spiral(float radius, bool clockwise) {

	glNormal3f(0, 0, 1);

	glBegin(GL_LINES);

		for (int i = 0; i < 20; ++ i){
			float rad = PI * i / 20.0;
			float t = i / 20.0;
			Rot rn = Rot::e12(( clockwise ? -1 : 1 ) * rad );
			Vec v = Op::sp( rn , Vec::x ) * radius * t;			
			glVertex3f(v[0], v[1], v[2]);
		}
		
	glEnd();

}


void Glyph :: Helix(float radius, float height, bool clockwise) {

	glNormal3f(0, 0, 1);
	
	int dir = ( clockwise ? -1 : 1 );

	glBegin(GL_LINES);

		for (int i = 0; i < 20; ++ i){
			
			float rad = PI * i / 20.0;
			float t = i / 20.0;
			Rot rn = Rot::e12(( clockwise ? -1 : 1 ) * rad );
			
			Trs tw = Trs::e3(t);
			Trs tv = Trs::x;
			
			Mot m = tw * ( tv * rn * (!(tv)) );
			
			Vec v = Op::sp( Vec::x, m);
						
			glVertex3f(v[0], v[1], v[2]);
		}
		
	glEnd();

}


void Glyph :: Line(const Vec& v1, const Vec& v2) {

	glNormal3f(0, 0, 1);

	glBegin(GL_LINES);

		glVertex3f(v1[0], v1[1], v1[2]);
		glVertex3f(v2[0], v2[1], v2[2]);
		
	glEnd();
		
}

void Glyph :: Line(const Vec& v2) {
	Line(Vec(0,0,0), v2);
}

void Glyph :: DashedLine(const Vec& v1, const Vec& v2, int num) {

	glNormal3f(0, 0, 1);

	glEnable(GL_LINE_STIPPLE);
	glBegin(GL_LINES);

//		for (int i = 0; i < num; ++i ){
//			double st = 1.0/num;
//			double t =  i * st ;
//			Vec s1 = v1 + ( (v2 - v1) * t );
//			Vec s2 = s1 + ( (v2 - v1) * (st / 2) );
			
			glVertex3f(v1[0], v1[1], v1[2]);
			glVertex3f(v2[0], v2[1], v2[2]);
//		}
		
	glEnd();
	glDisable(GL_LINE_STIPPLE);
		
}

void Glyph :: DashedLine(const Vec& v2, int num) {
	DashedLine(Vec(0,0,0), v2, num);
}

void Glyph :: Dir(const Vec& v2) {

	Rot r2 = Gen::ratio( Vec::z, v2.unit() );	
	Vec4<> t = Gen::aa(r2);
	
	Line(v2);
	glPushMatrix();	
		glTranslated(v2[0], v2[1], v2[2]);
		glRotated(t.w, t.x, t.y, t.z);	
		Glyph::Cone();
	glPopMatrix();

}

void Glyph :: Arr(const Vec& v2, bool line) {

	Rot r2 = Gen::ratio( Vec::z, v2.unit() );	
	Vec4<> t = Gen::aa(r2);
	
	if (line) DashedLine(v2);
	glPushMatrix();
		glTranslated(v2[0], v2[1], v2[2]);
		glRotated(t.w, t.x, t.y, t.z);	
		Glyph::Cone();
	glPopMatrix();

}

void Glyph :: Dir(const Vec& v1, const Vec& v2) {

	Glyph::Line(v1, v2);	
	Vec v3 = Vec( v2-v1 ).unit();		
	Rot r2 = Gen::ratio( Vec::z, v3 );
	
//	double * m = &(Op::mat(r2)[0][0]);
	Vec4<> t = Gen::aa(r2);
	
	glPushMatrix();	
		glTranslated(v2[0], v2[1], v2[2]);
		glRotated(t.w, t.x, t.y, t.z);
//		glMultMatrixd( m );		
		Glyph::Cone();
	glPopMatrix();

}

void Glyph :: Pin(const Vec& v2) {

	Glyph::Line(Vec(0,0,0), v2);
	
	Vec v3 = v2.unit();	
	
	Rot r2 = Gen::ratio( Vec::z, v3 );
	
//	double * m = &(Op::mat(r2)[0][0]);
	
	glPushMatrix();	
		glTranslated(v2[0], v2[1], v2[2]);
		//glMultMatrixd( m );
		Glyph::Sphere(.05);
	glPopMatrix();
	
}

template<class A>
void Glyph :: Point(const A& v) {
//	glPointSize(5.0);
	glBegin(GL_POINTS);	
		glNormal3f(v[0], v[1], v[2]);
		glVertex3f(v[0], v[1], v[2]);
	glEnd();
}

void Glyph :: Point(const Vec3<>& v) {
//	glPointSize(5.0);
	glBegin(GL_POINTS);	
		glVertex3f(v[0], v[1], v[2]);
	glEnd();
}

void Glyph :: Cone() {
    glTranslated(0,0,-.1);
	glutWireCone(.05,.1,2,1);
}

void Glyph :: Tri(bool down) {
	
	glBegin(GL_TRIANGLES);
	
		glVertex2f(-.1,  0 );
		glVertex2f( .1,  0 );
		down ? glVertex2f( 0, -.1) : glVertex2f(  0, .1 );
		
	glEnd();
}

void Glyph :: TriLine(bool down) {
	
	glBegin(GL_LINE_LOOP);
	
		glVertex2f(-.1,  0 );
		glVertex2f( .1,  0 );
		down ? glVertex2f( 0, -.1) : glVertex2f(  0, .1 );
		
	glEnd();
}

void Glyph :: Sphere(double radius, int slices, int stacks) {
	glutWireSphere(radius, slices, stacks);
}

void Glyph :: SolidSphere(double radius, int slices, int stacks) {
	glutSolidSphere(radius, slices, stacks);
}

void Glyph :: Rect(double w, double h){

	glBegin(GL_QUADS);
		
		glVertex2f(-w/2.0,-h/2.0);
		glVertex2f(-w/2.0,h/2.0);
		glVertex2f(w/2.0,h/2.0);
		glVertex2f(w/2.0,-h/2.0);
		
	glEnd();
}

void Glyph :: EmptyRect(double w, double h){

	glBegin(GL_LINE_LOOP);
		
		glVertex2f(-w/2.0,-h/2.0);
		glVertex2f(-w/2.0,h/2.0);
		glVertex2f(w/2.0,h/2.0);
		glVertex2f(w/2.0,-h/2.0);
		
	glEnd();
}

void Glyph :: DottedRect(double w, double h){

	glBegin(GL_LINES);
		
		for (int i = 0; i < 20; ++i){
			double off = h/2.0 - (h * i / 20.0);
			glVertex2f(-w/2.0,off);
		}
		
		for (int i = 0; i < 20; ++i){
			double off = h/2 - (h * i / 20.0);
			glVertex2f(w/2.0,off);
		}
		for (int i = 0; i < 20; ++i){
			double off = w/2 - (w * i / 20.0);
			glVertex2f(off,h/2.0);
		}
		for (int i = 0; i < 20; ++i){
			double off = w/2 - (w * i / 20.0);
			glVertex2f(off,-h/2.0);
		}
		
	glEnd();
}

void Glyph :: DottedGrid(int w, int h, double s){
     glPushMatrix();
	glTranslatef(- (w*s)/ 2.0, -(h*s)/2.0, 0);
	for (int i =0; i < h; ++i){		
		for (int j = 0; j < w; ++j){
			DottedRect(s,s);
			glTranslatef(s,0,0);
		}
		glTranslatef(-(w*s),s,0);
	}
     glPopMatrix();
}

void Glyph :: SolidGrid(int w, int h, double s){
    
    glPushMatrix();
	glTranslatef(- (w*s)/ 2.0, -(h*s)/2.0, 0);
	for (int i =0; i < h; ++i){		
		for (int j = 0; j < w; ++j){
			EmptyRect(s,s);
			glTranslatef(s,0,0);
		}
		glTranslatef(-(w*s),s,0);
	}
    glPopMatrix();
}

void Glyph :: Axes(const Vec& v1, const Vec& v2, const Vec& v3){

	glBegin(GL_LINES);
		glVertex3f(0,0,0);
		glVertex3f(v1[0], v1[1], v1[2]);
		glVertex3f(0,0,0);
		glVertex3f(v2[0], v2[1], v2[2]);
		glVertex3f(0,0,0);
		glVertex3f(v3[0], v3[1], v3[2]);
	glEnd();
}


//void Glyph :: Reflection (const Versor&, const Multivector&){
//} //draw::

bool Draw :: bDir = 0;
void Draw :: dir(bool b ) { bDir = b; }
    
void Draw :: SegRad( const Cir& k){
    Seg( k, TWOPI * Ro::cur(k) );
}

void Draw :: Seg(const Cir& K, double t, bool dir, int res){

    //ORIENTATION
	Biv b = Biv(Ro::dir(K));							//Extract Euclidean Bivector
	Rot r = Gen::ratio(Vec::z, Op::dle( b ).unit() );	//Determine Orientation
    Vec4<> v4 = Gen::aa(r);  

    //POINT POSITION AND RADIUS
	Pnt v = Ro::cen(K);                                 //Center of Circle
	double siz = Ro::size(K,false);                            //Squared Radius
	double rad = sqrt ( fabs (siz) );                   //Radius
	                           
	bool sign = Op::sn(b, Biv::xy);
	
    if (siz != 0){
	glPushMatrix();
		glTranslated(v[0],v[1],v[2]);
		glRotated(v4.w, v4.x, v4.y, v4.z);
		siz > 0 ? Glyph::Segment(t, rad, sign, res) : Glyph::DashedSegment(t,rad, sign, res);
	glPopMatrix();
    }

}

//like seg, but with offset
void Draw :: SegOff(const Cir& K, double t, double off, bool dir, int res){

    //ORIENTATION
	Biv b = Biv(Ro::dir(K));							//Extract Euclidean Bivector
	Rot r = Gen::ratio(Vec::z, Op::dle( b ).unit() );	//Determine Orientation
    Vec4<> v4 = Gen::aa(r);  

    //POINT POSITION AND RADIUS
	Pnt v = Ro::cen(K);                                 //Center of Circle
	double siz = Ro::size(K,false);                       //Squared Radius
	double rad = sqrt ( fabs (siz) );                   //Radius
	                           
	bool sign = Op::sn(b, Biv::xy);
	
	glPushMatrix();
		glTranslated(v[0],v[1],v[2]);
		glRotated(v4.w, v4.x, v4.y, v4.z);
		siz > 0 ? Glyph::Segment3(t, off, rad, sign, res) : Glyph::DashedSegment3(t, off, rad, sign, res);
	glPopMatrix();

}

  
template<class A>
void Draw::Push( const A& pos, const Rot& rot, const double& scale ){
    glPushMatrix();
        Vec4<> t = Gen::aa(rot);
        glTranslated(pos[0], pos[1], pos[2]);
        glRotated(t.w,t.x,t.y,t.z);
        glScaled(scale,scale,scale);
}

template<class A>
void Draw::PushPosition( const A& pos){
    glPushMatrix();
        glTranslated(pos[0], pos[1], pos[2]);
}
    
template <class A>
inline void Draw :: R (const A& s, float r, float g, float b, float a){
	glPushMatrix();	
    glColor4f(r,g,b,a);
    
    Draw :: S(s);
    
    glPopMatrix();
}
    

//template<class A> void Draw::S( const A& s, float r, float g, float b, float a) { cout << "no draw routine found for " << endl; }

//template<> void Draw::S( const Pnt_Dll& a) { cout << "no draw routine found for " << endl; }


template<> void Draw :: S (const Vec& s){
    Glyph::Dir( s);
}

template<> void Draw :: S (const Drv& s){
    Glyph::Arr( s, 1 );
}

template<> void Draw :: S (const Biv& s){
    Vec4<> t = Gen::aa( Gen::ratio( Vec::z, Op::dle( s ).unit() ) );
    
    double ta = s.norm(); 
    bool sn = Op::sn( s , Biv::xy * (-1));
    
    glRotated(t.w, t.x, t.y, t.z);
    
    Glyph::DirCircle(ta, sn);
}

template<> void Draw :: S (const Pnt& s){

    double ta = Ro::size( s, true );

    //Draw as dual Sphere (if |radius| > 0.000001);
    if ( fabs(ta) >  FPERROR ) {
        
        bool real = ta > 0 ? 1 : 0;	
        
        Pnt p = Ro::cen( s );
        double t = sqrt ( fabs ( ta ) );
        		
        glTranslatef(p[0], p[1], p[2]);
        (real) ? Glyph::SolidSphere(t, 5+ floor(t*30), 5+floor(t*30)) : Glyph::Sphere(t);	
    } else {
        Glyph::Point(s);
    }
}

template<> void Draw :: S (const Par& s){
        //Is Imaginary?
        double size = Ro::size( s, true );
        std::vector<Pnt> pp = Ro::split( s );
        
        double ta = Ro::size( pp[0], true );
        if ( fabs(ta) >  FPERROR ) {				
            Pnt p1 = Ro::cen( pp[0] );
            Pnt p2 = Ro::cen( pp[1] );
            double t = sqrt ( fabs ( size ) );
            bool real = size > 0 ? 1 : 0;	
            
            glPushMatrix();
            glTranslatef(p1[0], p1[1], p1[2]);
            (real) ? Glyph::SolidSphere(t, 5+ floor(t*30), 5+floor(t*30)) : Glyph::Sphere(t);	
            glPopMatrix();
            glTranslatef(p2[0], p2[1], p2[2]);
            (real) ? Glyph::SolidSphere(t, 5+ floor(t*30), 5+floor(t*30)) : Glyph::Sphere(t);	
        
        } else {
            Glyph::Point(pp[0]);
            Glyph::Point(pp[1]);
        }
}

template<> void Draw :: S (const Cir& s){
        Biv b = Ro::dir( s );
        

        
        Rot r = Gen::ratio(Vec::z, Op::dle( b ).unit() ); 
                
        Pnt v = Ro::cen( s );	

                        
        double size = Ro::size( s, false );
        double rad = Ro::rad( s );
        Vec4<> t = Gen::aa(r);
        
        // Get Sign 
        bool sn = Op::sn(b, Biv::xy);
        
        glTranslated(v[0],v[1],v[2]);
        glRotated(t.w, t.x, t.y, t.z);

        // Is it imaginary 
        bool im = size > 0 ? 1 : 0;

        if (bDir) {im ? Glyph::DirCircle(rad,sn) : Glyph::DirDashedCircle(rad,sn);}
        else { im ? Glyph::Circle(rad) : Glyph::DashedCircle(rad);}

}

template<> void Draw :: S (const Sph& s){
    Dls ts = Op::dl( s );
    Pnt p = Ro::cen(ts);
    Glyph::Point(p);
                
    double st = Ro::size( ts, true );
    double t = sqrt ( fabs ( st ) );;
    bool real = st > 0 ? 1 : 0;			
    glTranslatef(p[0], p[1], p[2]);
    real ? Glyph::SolidSphere(t,20,20) : Glyph::Sphere(t,20,20);
}
		

template<> void Draw :: S (const Pln& s){
//    Drv d	= Fl::dir( s );
    Dls v = Fl::loc( s , PAO, false ); //Sph?
    Rot r = Gen::ratio( Vec::z, Op::dle( Biv( s ) ).unit() );
    glTranslated(v[0],v[1],v[2]);
    glMultMatrixd(&(Gen::mat(r)[0][0]));
    Glyph::SolidGrid();		
}

template<> void Draw :: S (const Dlp& s){
//    Drv d = Fl::dir( s.undual() );
    Dls v = Fl::locd( s , PAO);// true );
    Rot r = Gen::ratio( Vec::z, Vec( s ).unit() );
    Vec4<> t = Gen::aa(r);
    glTranslated(v[0],v[1],v[2]);
    glRotated(t.w, t.x, t.y, t.z);
    Glyph::SolidGrid();
}


template<> void Draw :: S (const Lin& s){
    Drv d	= Fl::dir( s );
    Dls v	= Fl::loc( s , PAO, false );
    glTranslated(v[0],v[1],v[2]);
    Glyph::Line(d * 10, d * -10);	
}


template<> void Draw :: S (const Dll& s){
    Drv d = Fl::dir( s );
    Dls v = Fl::loc( s , PAO, true);
    glTranslated(v[0],v[1],v[2]);
    Glyph::DashedLine(d * 10, d * -10);	
}


template<> void Draw :: S (const Tnv& s){
    Glyph::DashedLine( s );
    glTranslated(s[0], s[1], s[2]);
    Glyph::SolidSphere(.1,5,5);
}

template<> void Draw :: S (const Tnb& s){
//    Biv b(s); b.draw(0,0,1,.5);
}

template<> void Draw :: S (const Flp& s){
//    s.null().draw(r,g,b,a);
}        
    
} //vsr::

#endif