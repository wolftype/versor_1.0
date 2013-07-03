 //
//  Glyph.h
//  vsr_static
//
//  IMMEDIATE MODE GLYPHS for fixed GL Pipeline (glBegin . . . glEnd) and for GL2PS postscript printing
//
//  Created by Pablo Colapinto on 10/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_static_Glyph_h
#define vsr_static_Glyph_h

//#include "vsr_gxlib.h"
#include "gfx/gfx_lib.h"



namespace vsr {

    namespace GL{
    
        /// GL BUILTIN PIPELINE
		namespace Glyph {
			
				// void Go();

				/* Line Between Two Points */
				 void Line(const Vec& v1, const Vec& v2);
				/* Line from Origin */
				 void Line(const Vec& v1);

				 void DashedLine(const Vec& v1, const Vec& v2, int num = 10);
				 void DashedLine(const Vec& v1, int num = 10);
				
				 void Pin(const Vec& v2);
				
				//directed line element
				 void Dir(const Vec& v1);
				 void Arr(const Vec& v1, bool line = 0);
				//directed line element at a certain position
				 void Dir(const Vec& v1, const Vec& v2);
				//directed line element at a certain position
				 void Dir2D(const Vec& v1, const Vec& v2);
				
				//reg circle
				 void Circle(double radius = 1.0, int res = 50);
				//directed Circle
				 void DirCircle(double radius = 1.0, bool clockwise = 0, int res = 50, bool anim = 0);
				//dashed circle
				 void DashedCircle(double radius, int res = 50);
				//directed Dashed Circle
				 void DirDashedCircle(double radius = 1.0, bool clockwise = 0, int res = 50, bool anim = 0);
				//directed circle version 2
				 void Circled(float radius = 1.0, bool clockwise = 0);
				//animated circle
				 void Circular(float radius, bool clockwise = 0);
				 void FillCircle(double radius = 1.0, int res = 50);
				 void DirFillCircle (double radius =1.0, bool clockwise =0, int res =50, bool anim = 0);
				//circle segment
				 void Segment(float angle = PI, float radius = 1.0,  bool sign = 0, int res = 20);
				 void Segment2(float angle = PI, float off = 0, float radius = 1.0, int res = 20);
				 void Segment3(float angle = PI, float off = 0, float radius = 1.0,  bool sign = 0,   int res = 20);
                 void DashedSegment(float angle = PI, float radius = 1.0, bool sign =0, int res = 20);
				 void DashedSegment2(float t = PI, float t2 = 0, float rad = 1.0, int res = 20);
				 void DashedSegment3(float angle = PI, float off= 0, float radius = 1.0, bool sign =0, int res = 20);
                 void DirSegment(float angle = PI, float radius = 1.0, bool clockwise = 0, int res = 20);
				 void DirDashedSegment(float angle = PI, float radius = 1.0, bool clockwise = 0, int res = 20);
				
				//2D Spiral
				 void Spiral(float radius = 1.0, bool clockwise = 0);
				//Basic 3D Helix
				 void Helix(float radius = 1.0, float height = 1.0, bool clockwise = 0);

				//Arbitrary 3D Spiral
				//static void Helix(float radius = 1.0, float height = 1.0, bool clockwise = 0);
								
				//point in space (origin is default)
				template<class A> static void Point(const A& );
				 void Point(const Vec3<>& );
				
				 void Axes( const Vec&, const Vec&, const Vec&);
				//pin (versor)
				
				//flat arrow
				 void Tri(bool down = 0);
				 void TriLine(bool down = 0);
				
				//glut cone
				 void Cone();
				//glut wire sphere
				 void Sphere(double radius = 1, int slices = 20, int stacks = 20);
				//glut solid sphere
				 void SolidSphere(double radius = 1, int slices = 20, int stacks = 20);
				
				//filled quad
				 void Rect(double w = 1, double h = 1);
				//outline quad
				 void EmptyRect(double w = 1, double h = 1);
				//dotted outline quad
				 void DottedRect(double w = 1, double h = 1);
				//dotted outline multquad
				 void DottedGrid(int w = 5, int h = 5, double s = 1);
				//static void Reflection(
                void SolidGrid(int w = 5, int h = 5, double s = 1);
                
                //Box
                void Box(double w = 1, double h = 1, double d= 1);
                //Cube
                void Cube(double size=1);
                
                
                //Segment
				 void Seg(const Cir&, double t, bool dir = 1, int res = 20);
                 void SegOff(const Cir& K, double t, double off, bool dir = 1, int res = 20);
                 void SegRad( const Cir& );
                 void SegTo(const Cir&, double st, double t, int res = 20);
				 void Seg2(const Cir&, const Pnt&, const Pnt&, int res = 20);
                 void SegPnts(const Cir& K, const Pnt& a, const Pnt& b, int res = 20);
				
		} //Glyph::

inline void Glyph :: Circle (double radius, int numseg) {

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

inline void Glyph :: FillCircle(double radius, int numseg){

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


inline void Glyph :: DashedCircle(double radius, int numseg) {

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

inline void Glyph :: DirCircle (double radius, bool clockwise, int res, bool bAnimate) {
	
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

inline void Glyph :: DirFillCircle (double radius, bool clockwise, int res, bool bAnimate) {
	
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





inline void Glyph :: DirDashedCircle (double radius, bool clockwise, int res, bool bAnimate) {
	
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

inline void Glyph :: Circled(float radius, bool clockwise) {

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


inline void Glyph :: Circular(float radius, bool clockwise) {

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


inline void Glyph :: Segment(float angle, float radius, bool sign, int res){

	glNormal3f(0, 0, 1);

	int num = res * std::fabs(angle);   //floor(20 * PI / (1 + ( PI - angle ) ));

	glBegin(GL_LINE_STRIP);
		
		for (int i = 0; i <= num; ++ i){

			float rad = (sign?0:0) + ( angle * i / num ) - angle/2 ;
			Vec2<> t ( cos(rad), sin(rad) );
			t *= radius;
			glVertex2f(t.x, t.y);			
			
		}

	glEnd();
	
}

inline void Glyph :: Segment2(float angle, float angle2, float radius, int res){

	glNormal3f(0, 0, 1);

    // * fabs(angle);//floor(20 * PI / (1 + ( PI - angle ) ));

	double ta = std::fabs(angle2 - angle);
	int num = res * ta;
    glBegin(GL_LINE_STRIP);
		
		for (int i = 0; i < num; ++ i){

			float rad = ( angle ) + ta * i / num;
			Vec2<> t ( cos(rad), sin(rad) );
			t *= radius;
			glVertex2f(t.x, t.y);			
			
		}

	glEnd();
	
}

//like segment, but with offset
inline void Glyph :: Segment3(float angle, float off, float radius, bool sign, int res){

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

inline void Glyph ::  DashedSegment (float angle, float radius, bool sign, int res){

	glNormal3f(0, 0, 1);

	int num = res * std::fabs(angle);//floor(20 * PI / (1 + ( PI - angle ) ));

	glBegin(GL_LINES);

		for (int i = 0; i < num; ++ i){

			float rad = ( angle * i / num ) - angle/2 + ( (sign)? PI : 0 );
			Vec2<> t ( cos(rad), sin(rad) );
			t *= radius;
			glVertex2f(t.x, t.y);			
		}
		
	glEnd();
	
}

inline void Glyph::DashedSegment2(float angle, float angle2, float radius, int res){

	glNormal3f(0, 0, 1);

	int num = res * std::fabs(angle);//floor(20 * PI / (1 + ( PI - angle ) ));

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
inline void Glyph :: DashedSegment3(float angle, float off, float radius, bool sign, int res){

	glNormal3f(0, 0, 1);

	int num = res * std::fabs(angle);   //floor(20 * PI / (1 + ( PI - angle ) ));

	glBegin(GL_LINES );
		
		for (int i = 0; i < num; ++ i){

			float rad = off + (sign?PI:0) + ( angle * i / num ) - angle/2 ;
			Vec2<> t ( cos(rad), sin(rad) );
			t *= radius;
			glVertex2f(t.x, t.y);			
			
		}

	glEnd();
	
}
inline void Glyph :: DirSegment (float angle, float radius, bool clockwise, int res){

	glNormal3f(0, 0, 1);

	int num = 10 * std::fabs(angle);
	
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

inline void Glyph :: DirDashedSegment (float angle, float radius, bool clockwise, int res){

	glNormal3f(0, 0, 1);

	int num = 10 * std::fabs(angle);
	
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


inline void Glyph :: Spiral(float radius, bool clockwise) {

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


inline void Glyph :: Helix(float radius, float height, bool clockwise) {

	glNormal3f(0, 0, 1);
	
//	int dir = ( clockwise ? -1 : 1 );

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


inline void Glyph :: Line(const Vec& v1, const Vec& v2) {

	glNormal3f(0, 0, 1);

	glBegin(GL_LINES);

		glVertex3f(v1[0], v1[1], v1[2]);
		glVertex3f(v2[0], v2[1], v2[2]);
		
	glEnd();
		
}

inline void Glyph :: Line(const Vec& v2) {
	Glyph::Line(Vec(0,0,0), v2);
}

inline void Glyph :: DashedLine(const Vec& v1, const Vec& v2, int num) {

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

inline void Glyph :: DashedLine(const Vec& v2, int num) {
	DashedLine(Vec(0,0,0), v2, num);
}

inline void Glyph :: Dir(const Vec& v2) {

	Rot r2 = Gen::ratio( Vec::z, v2.unit() );	
	Rot t = Gen::aa(r2);
	
	Glyph::Line(v2);
	glPushMatrix();	
		glTranslated(v2[0], v2[1], v2[2]);
		glRotated(t[0], t[1], t[2], t[3]);	
		Glyph::Cone();
	glPopMatrix();

}

inline void Glyph :: Arr(const Vec& v2, bool line) {

	Rot r2 = Gen::ratio( Vec::z, v2.unit() );	
	Rot t = Gen::aa(r2);
	
	if (line) DashedLine(v2);
	glPushMatrix();
		glTranslated(v2[0], v2[1], v2[2]);
		glRotated(t[0], t[1], t[2], t[3]);	
		Glyph::Cone();
	glPopMatrix();

}

inline void Glyph :: Dir(const Vec& v1, const Vec& v2) {

	Glyph::Line(v1, v2);	
	Vec v3 = Vec( v2-v1 ).unit();		
	Rot r2 = Gen::ratio( Vec::z, v3 );
	
//	double * m = &(Op::mat(r2)[0][0]);
	Rot t = Gen::aa(r2);
	
	glPushMatrix();	
		glTranslated(v2[0], v2[1], v2[2]);
		glRotated(t[0], t[1], t[2], t[3]);
//		glMultMatrixd( m );		
		Glyph::Cone();
	glPopMatrix();

}

inline void Glyph :: Dir2D(const Vec& v1, const Vec& v2) {

	Glyph::Line(v1, v2);	
	Vec v3 = Vec( v2-v1 ).unit();		
	Rot r2 = Gen::ratio( Vec::z, v3 );
	
//	double * m = &(Op::mat(r2)[0][0]);
	Rot t = Gen::aa(r2);
	
	glPushMatrix();	
		glTranslated(v2[0], v2[1], v2[2]);
		glRotated(t[0], t[1], t[2], t[3]);
//		glMultMatrixd( m );		
		Glyph::TriLine(true);
	glPopMatrix();

}


inline void Glyph :: Pin(const Vec& v2) {

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
inline void Glyph :: Point(const A& v) {
//	glPointSize(5.0);
	glBegin(GL_POINTS);	
		//glNormal3f(v[0], v[1], v[2]);
		glVertex3f(v[0], v[1], v[2]);
	glEnd();
}

inline void Glyph :: Point(const Vec3<>& v) {
//	glPointSize(5.0);
	glBegin(GL_POINTS);	
		glVertex3f(v[0], v[1], v[2]);
	glEnd();
}

inline void Glyph :: Cone() {
    glTranslated(0,0,-.1);
	glutWireCone(.05,.1,10,3);
}

inline void Glyph :: Tri(bool down) {
	
	glBegin(GL_TRIANGLES);
	
		glVertex2f(-.1,  0 );
		glVertex2f( .1,  0 );
		down ? glVertex2f( 0, -.1) : glVertex2f(  0, .1 );
		
	glEnd();
}

inline void Glyph :: TriLine(bool down) {
	
	glBegin(GL_LINE_LOOP);
	
		glVertex2f(-.1,  0 );
		glVertex2f( .1,  0 );
		down ? glVertex2f( 0, -.1) : glVertex2f(  0, .1 );
		
	glEnd();
}

inline void Glyph :: Sphere(double radius, int slices, int stacks) {
	glutWireSphere(radius, slices, stacks);
}

inline void Glyph :: SolidSphere(double radius, int slices, int stacks) {
	glutSolidSphere(radius, slices, stacks);
}

inline void Glyph :: Rect(double w, double h){

	glBegin(GL_QUADS);
		
		glVertex2f(-w/2.0,-h/2.0);
		glVertex2f(-w/2.0,h/2.0);
		glVertex2f(w/2.0,h/2.0);
		glVertex2f(w/2.0,-h/2.0);
		
	glEnd();
}

inline void Glyph :: EmptyRect(double w, double h){

	glBegin(GL_LINE_LOOP);
		
		glVertex2f(-w/2.0,-h/2.0);
		glVertex2f(-w/2.0,h/2.0);
		glVertex2f(w/2.0,h/2.0);
		glVertex2f(w/2.0,-h/2.0);
		
	glEnd();
}

inline void Glyph :: DottedRect(double w, double h){

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

inline void Glyph :: DottedGrid(int w, int h, double s){
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

inline void Glyph :: SolidGrid(int w, int h, double s){
    
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

inline void Glyph :: Box ( double w, double h, double d ){
    double le = -w/2.0;     double ri = w/2.0;
    double bo = -h/2.0;     double to = h/2.0;
    double fr = d/2.0;     double ba = -d/2.0;

    glBegin(GL_QUADS);
        GL::Quad( Vec(le,bo,fr), Vec(le,to,fr), Vec(ri,to,fr), Vec(ri,bo,fr) ) ;
        GL::Quad( Vec(le,to,fr), Vec(le,to,ba), Vec(ri,to,ba), Vec(ri,to,fr) ) ;
        GL::Quad( Vec(le,to,ba), Vec(le,bo,ba), Vec(ri,bo,ba), Vec(ri,to,ba) ) ;
        GL::Quad( Vec(le,bo,ba), Vec(le,bo,fr), Vec(ri,bo,fr), Vec(ri,bo,ba) ) ;
        GL::Quad( Vec(le,bo,ba), Vec(le,to,ba), Vec(le,to,fr), Vec(le,bo,fr) ) ;
        GL::Quad( Vec(ri,bo,fr), Vec(ri,to,fr), Vec(ri,to,ba), Vec(ri,bo,ba) ) ;
    glEnd();

}


inline void Glyph :: Cube(double size){
    Glyph::Box(size,size,size);
}


inline void Glyph :: Axes(const Vec& v1, const Vec& v2, const Vec& v3){

	glBegin(GL_LINES);
		glVertex3f(0,0,0);
		glVertex3f(v1[0], v1[1], v1[2]);
		glVertex3f(0,0,0);
		glVertex3f(v2[0], v2[1], v2[2]);
		glVertex3f(0,0,0);
		glVertex3f(v3[0], v3[1], v3[2]);
	glEnd();
}

// inline void Glyph :: SegRad( const Cir& k){
//     Seg( k, TWOPI * Ro::cur(k) );
// }
// 
// inline void Glyph :: Seg(const Cir& K, double t, bool dir, int res){
// 
//     //ORIENTATION
// 	Biv b = Biv(Ro::dir(K));							//Extract Euclidean Bivector
// 	Rot r = Gen::ratio(Vec::z, Op::dle( b ).unit() );	//Determine Orientation
//     Rot v4 = Gen::aa(r);  
// 
//     //POINT POSITION AND RADIUS
// 	Pnt v = Ro::cen(K);                                 //Center of Circle
// 	double siz = Ro::size(K,false);                            //Squared Radius
// 	double rad = sqrt ( std::fabs (siz) );                   //Radius
// 	                           
// 	bool sign = Op::sn(b, Biv::xy);
// 	
//     if (siz != 0){
// 	glPushMatrix();
// 		glTranslated(v[0],v[1],v[2]);
// 		glRotated(v4[0], v4[1], v4[2], v4[3]);
// 		siz > 0 ? Glyph::Segment(t, rad, sign, res) : Glyph::DashedSegment(t,rad, sign, res);
// 	glPopMatrix();
//     }
// 
// }
// 
// //like seg, but with offset
// inline void Glyph :: SegOff(const Cir& K, double t, double off, bool dir, int res){
// 
//     //ORIENTATION
// 	Biv b = Biv(Ro::dir(K));							//Extract Euclidean Bivector
// 	Rot r = Gen::ratio(Vec::z, Op::dle( b ).unit() );	//Determine Orientation
//     Rot v4 = Gen::aa(r);  
// 
//     //POINT POSITION AND RADIUS
// 	Pnt v = Ro::cen(K);                                 //Center of Circle
// 	double siz = Ro::size(K,false);                       //Squared Radius
// 	double rad = sqrt ( std::fabs (siz) );                   //Radius
// 	                           
// 	bool sign = Op::sn(b, Biv::xy);
// 	
// 	glPushMatrix();
// 		glTranslated(v[0],v[1],v[2]);
// 		glRotated(v4[0], v4[1], v4[2], v4[3]);
// 		siz > 0 ? Glyph::Segment3(t, off, rad, sign, res) : Glyph::DashedSegment3(t, off, rad, sign, res);
// 	glPopMatrix();
// 
// }
// 
// void Glyph :: SegTo(const Cir& K, double st, double t, int res){
//     
//     Rot roff = Gen::rot(Biv::xy * st);
//     //Vec4<> r4 = Op::aa(roff);  
//     //cout << roff << endl; 
//     //ORIENTATION
//     Biv b = Biv(Ro::dir(K));							//Extract Euclidean Bivector
//     Rot r = Gen::ratio(Vec::z, Op::dle( b ).unit() );// * roff;	//Determine Orientation
//     Rot v4 = Gen::aa(r);  
//     
//     //POINT POSITION AND RADIUS
//     Pnt v = Ro::cen(K);                                 //Center of Circle
//     double siz = Ro::size(K,false);                            //Squared Radius
//     double rad = sqrt ( std::fabs (siz) );                   //Radius
//     
//    // bool sign = Op::sn(b, Biv::xy);
//     
//     glPushMatrix();
//     glTranslated(v[0],v[1],v[2]);
//     glRotated(v4[0], v4[1], v4[2], v4[3]);//glRotated(r4.w, r4.x, r4.y, r4.z);
// //    siz > 0 ? Glyph::Segment(t, rad, sign, res) : Glyph::DashedSegment(t,rad, sign, res);
//     siz > 0 ? Glyph::Segment2(st, st + t, rad, res) : Glyph::DashedSegment2(st, st + t, rad, res);
//     glPopMatrix();
//     
// }    
//     
// void Glyph :: Seg2(const Cir& K, const Pnt& a, const Pnt& b, int res){
// //	glColor3f(K.red(), K.green(), K.blue());
// 	Biv bi = Biv(Ro::dir(K));							//Extract Euclidean Bivector
// 	Rot r = Gen::ratio(Vec::z, Op::dle( bi ).unit() );	//Determine Orientation
// 	Pnt v = Ro::cen(K);			
// 	Rot v4 = Gen::aa(r);
// 	double siz = Ro::size(K,false);
// 	double rad = Ro::rad(K);
// 	//bool sn = Op::sn(bi, Biv::xy);
// 
// 	Dlp da = ( a^Inf(1) ) <= K;
// 	da = da.unit();
// 	Dlp db = ( b^Inf(1) ) <= K;
// 	db = db.unit();
// 	Dlp dy = Ro::noon(K);
// 	dy = dy.unit();
// 	
// 	double t1 = ( da <= dy)[0];
// 	double t2 = ( db <= dy)[0];
// 	
// 	glPushMatrix();
// 		glTranslated( v[0], v[1], v[2] );
// 		glRotated(v4[0], v4[1], v4[2], v4[3]);
// 		siz > 0 ? Glyph::Segment2(t1, t2, rad, res) : Glyph::DashedSegment2(t1,t2, rad, res);
// 	glPopMatrix();
// }
// 
//     void Glyph :: SegPnts(const Cir& K, const Pnt& a, const Pnt& b, int res){
//         static Pnt tp, cen;
//         static Dll da, db, rat;
//         
//         bool sn = 0;//Op::sn ( Ro::dir(K, false ), Biv::xy );
//         
//         cen = Ro::loc(K);
//         da = ( cen ^ a ^ Inf(1) ).dual(); 
//         db = ( cen ^ b ^ Inf(1) ).dual(); 
//     
//         rat = (sn) ? Gen::log(db, da) : Gen::log(da, db);
//        
//         glBegin(GL_LINE_STRIP);
//         for (int i = 0; i <= res; ++i){
//             double t = 1.0 * i/res;
//             tp = a.mot( rat * t ); 
//             glVertex3f(tp[0], tp[1], tp[2]);
//         }
//         glEnd();
//         
//     }   


    } //GL::

} //vsr::

#endif
