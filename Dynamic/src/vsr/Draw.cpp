/*
 *  GLYPH.cpp
 *  gelatin
 *
 *  Created by x on 1/19/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#include "vsr_gl.h"
#include "Draw.h"
#include "vsr.h"
#include "Frame.h"
#include "Param.h"
#include "Camera.h"

#include "vsr_gxlib.h"

#include <sstream>


namespace vsr {

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

			float rad = ( angle * i / num ) - angle/2 + (sign)? PI : 0;
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
			
			Mot m = tw * ( tv * rn * (-(tv)) );
			
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
	Vec4<> t = Op::aa(r2);
	
	Line(v2);
	glPushMatrix();	
		glTranslated(v2[0], v2[1], v2[2]);
		glRotated(t.w, t.x, t.y, t.z);	
		Glyph::Cone();
	glPopMatrix();

}

void Glyph :: Arr(const Vec& v2, bool line) {

	Rot r2 = Gen::ratio( Vec::z, v2.unit() );	
	Vec4<> t = Op::aa(r2);
	
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
	Vec4<> t = Op::aa(r2);
	
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

void Glyph :: Point(const State& v) {
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
	Biv b = Biv(Ro::dir(K,false));							//Extract Euclidean Bivector
	Rot r = Gen::ratio(Vec::z, Op::dle( b ).unit() );	//Determine Orientation
    Vec4<> v4 = Op::aa(r);  

    //POINT POSITION AND RADIUS
	Pnt v = Ro::cen(K);                                 //Center of Circle
	double siz = Ro::siz(K,false);                            //Squared Radius
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
	Biv b = Biv(Ro::dir(K,false));							//Extract Euclidean Bivector
	Rot r = Gen::ratio(Vec::z, Op::dle( b ).unit() );	//Determine Orientation
    Vec4<> v4 = Op::aa(r);  

    //POINT POSITION AND RADIUS
	Pnt v = Ro::cen(K);                                 //Center of Circle
	double siz = Ro::siz(K,false);                       //Squared Radius
	double rad = sqrt ( fabs (siz) );                   //Radius
	                           
	bool sign = Op::sn(b, Biv::xy);
	
	glPushMatrix();
		glTranslated(v[0],v[1],v[2]);
		glRotated(v4.w, v4.x, v4.y, v4.z);
		siz > 0 ? Glyph::Segment3(t, off, rad, sign, res) : Glyph::DashedSegment3(t, off, rad, sign, res);
	glPopMatrix();

}

void Draw :: SegTo(const Cir& K, double st, double t, int res){
    
    Rot roff = Gen::rot_biv_ang(Biv::xy, st);
    //Vec4<> r4 = Op::aa(roff);  
    //cout << roff << endl; 
    //ORIENTATION
    Biv b = Biv(Ro::dir(K,false));							//Extract Euclidean Bivector
    Rot r = Gen::ratio(Vec::z, Op::dle( b ).unit() );// * roff;	//Determine Orientation
    Vec4<> v4 = Op::aa(r);  
    
    //POINT POSITION AND RADIUS
    Pnt v = Ro::cen(K);                                 //Center of Circle
    double siz = Ro::siz(K,false);                            //Squared Radius
    double rad = sqrt ( fabs (siz) );                   //Radius
    
    bool sign = Op::sn(b, Biv::xy);
    
    glPushMatrix();
    glTranslated(v[0],v[1],v[2]);
    glRotated(v4.w, v4.x, v4.y, v4.z);//glRotated(r4.w, r4.x, r4.y, r4.z);
//    siz > 0 ? Glyph::Segment(t, rad, sign, res) : Glyph::DashedSegment(t,rad, sign, res);
    siz > 0 ? Glyph::Segment2(st, st + t, rad, res) : Glyph::DashedSegment2(st, st + t, rad, res);
    glPopMatrix();
    
}    
    
void Draw :: Seg2(const Cir& K, const Pnt& a, const Pnt& b, int res){
//	glColor3f(K.red(), K.green(), K.blue());
	Biv bi = Biv(Ro::dir(K, false));							//Extract Euclidean Bivector
	Rot r = Gen::ratio(Vec::z, Op::dle( bi ).unit() );	//Determine Orientation
	Pnt v = Ro::cen(K);			
	Vec4<> v4 = Op::aa(r);
	double siz = Ro::siz(K,false);
	double rad = Ro::rad(K);
	bool sn = Op::sn(bi, Biv::xy);

	Dlp da = ( a^Inf(1) ) <= K;
	da = da.unit();
	Dlp db = ( b^Inf(1) ) <= K;
	db = db.unit();
	Dlp dy = Ro::noon(K);
	dy = dy.unit();
	
	double t1 = Op::sca( da <= dy);
	double t2 = Op::sca( db <= dy);
	
	glPushMatrix();
		glTranslated( v[0], v[1], v[2] );
		glRotated( v4.w, v4.x, v4.y, v4.z );
		siz > 0 ? Glyph::Segment2(t1, t2, rad, res) : Glyph::DashedSegment2(t1,t2, rad, res);
	glPopMatrix();
}

    void Draw :: SegPnts(const Cir& K, const Pnt& a, const Pnt& b, int res){
        static Pnt tp, cen;
        static Dll da, db, rat;
        
        bool sn = 0;//Op::sn ( Ro::dir(K, false ), Biv::xy );
        
        cen = Ro::null_cen(K);
        da = ( cen ^ a ^ Inf(1) ).dual(); 
        db = ( cen ^ b ^ Inf(1) ).dual(); 
    
        rat = (sn) ? Gen::dll_ratio(db, da) : Gen::dll_ratio(da, db);
       
        glBegin(GL_LINE_STRIP);
        for (int i = 0; i <= res; ++i){
            double t = 1.0 * i/res;
            tp = a.mot( rat * t ); 
            glVertex3f(tp[0], tp[1], tp[2]);
        }
        glEnd();
        
    }
    
    
    
/*
void Draw :: L (const State& s){			
			
			Pnt ts = Param::pos(s);
			Vec w = GL::project( ts[0],ts[1],ts[2], s.scene().camera() );

			glv::draw::push2D(s.scene().w,s.scene().h);

				glTranslated(w[0]+15, (s.scene().h - w[1])-15, 0);
				glv::draw::text( s.name().c_str() );
//				if( s.isSelected() ) {
//					glColor3f(1,0,0);
//					glScaled(10,10,10);
//					Glyph::Circle();
//				}

			glv::draw::pop2D();	
}


void Draw :: L (const State& s, Scene& scene){			
			
			Pnt ts = Param::pos(s);
			Vec w = GL::project( ts[0],ts[1],ts[2], scene.camera() );

			glv::draw::push2D(scene.w, scene.h);

				glTranslated(w[0]+15, scene.h - w[1]-15, 0);
				glv::draw::text( s.name().c_str() );
//				if( s.isSelected() ) {
//					glColor3f(1,0,0);
//					glScaled(10,10,10);
//					Glyph::Circle();
//				}

			glv::draw::pop2D();	
}

void Draw :: L (const State& s, Scene& scene, const std::string& nm, int ofx, int ofy){			
			glColor3f(1,1,1);
			Pnt ts = Param::pos(s);
			Vec w = GL::project( ts[0],ts[1],ts[2], scene.camera() );

			glv::draw::push2D(scene.w, scene.h);

				glTranslated(w[0]+ofx, scene.h - w[1]-ofy, 0);
				glv::draw::text( nm.c_str() );

			glv::draw::pop2D();	
}


Vec Draw :: screenCoord(const State& s ){		
	return GL::project( s[0],s[1],s[2], s.scene().camera() );
}
*/
	
void Draw :: N (const State&) {

}
	
void Draw :: S (const State& s){
    S(s,1,1,1);
}
    
void Draw :: S (const State& s, float r, float g, float b, float a){
	glPushMatrix();
	
    glColor4f(r,g,b,a);
    if (s.isSelected()) glColor4f(1,0,0,a );
    

	switch(s.idx()){
            
        case _SCA:
        {
//            glColor3f(s[0],
            Glyph::Point(Vec(0,0,0));
        }
	
		case _VEC:
		{
			Glyph::Dir( s);
			break;
		}
		
		case _DRV:
		{
			Glyph::Arr( s, 1 );
			break;
		}
		
		case _BIV:
		{
			
			Vec4<> t = Op::aa( Gen::ratio( Vec::z, Op::dle( s ).unit() ) );
			
			double a = s.norm(); 
			bool sn = Op::sn( s , Biv::e12(-1));
			
			glRotated(t.w, t.x, t.y, t.z);
			
			Glyph::DirCircle(a, sn);
			//Glyph::Circular(s, sn);
			
			break;
		}
		
		case _DRB:
		{
			
			break;
		}
		case _TRI:
		{
			break;
		}						
		case _PNT:
		{
			//if (bLabel) drawLabel(p[0], p[1], p[2]);
			double a = Ro::siz( s, -1 );
			//Draw as dual Sphere (if |radius| > 0.000001);
			if ( fabs(a) >  FPERROR ) {
				
                Pnt p = Ro::cen( s );
				double t = sqrt ( fabs ( a ) );
				bool real = a > 0 ? 1 : 0;			
				glTranslatef(p[0], p[1], p[2]);
				(real) ? Glyph::SolidSphere(t, 5+ floor(t*30), 5+floor(t*30)) : Glyph::Sphere(t);	
			} else {
				Glyph::Point(s);
			}
								
			break;
		}
		
		case _PAR:
		{
            
            //Is Imaginary?
            double siz = Ro::siz( s, true );
			std::vector<Pnt> pp = Ro::split( s );
			
//			pp[0].draw(r,g,b,a);
// 			pp[1].draw(r,g,b,a);
			double a = Ro::siz( pp[0], -1 );
            if ( fabs(a) >  FPERROR ) {				
                Pnt p1 = Ro::cen( pp[0] );
                Pnt p2 = Ro::cen( pp[1] );
				double t = sqrt ( fabs ( siz ) );
				bool real = siz > 0 ? 1 : 0;	
                
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
			
			break;
		}
		
		case _CIR:
		{
			Biv b = Biv(Ro::dir( s, false ));
			Rot r = Gen::ratio(Vec::z, Op::dle( b ).unit() );  //can this be done directly to Biv b?
          //cout << Op::dle( b ).unit() << endl; 
            
			Pnt v = Ro::cen( s );	
			
			//drawLabel(v[0], v[1], v[2]);
							
			double siz = Ro::siz( s, false );
           // cout << siz << endl; 
			double rad = Ro::rad( s );
			Vec4<> t = Op::aa(r);
			bool sn = Op::sn(b, Biv::xy);
			
			glTranslated(v[0],v[1],v[2]);
			glRotated(t.w, t.x, t.y, t.z);

//			/* Is it imaginary */
			bool im = siz > 0 ? 1 : 0;

//			if(mStyle) {
//				if (mStyle & Style::FILL) (im==1) ? Glyph::DirFillCircle(rad, sn, getStyle(Style::ANIMATE) ) : Glyph::DirDashedCircle(rad,sn,getStyle(Style::ANIMATE));
//				if (mStyle & Style::OUTLINE)(im==1) ? Glyph::DirCircle(rad, sn,getStyle(Style::ANIMATE) ) : Glyph::DirDashedCircle(rad,sn,getStyle(Style::ANIMATE));
//			} else { //default case

			if (bDir) {im ? Glyph::DirCircle(rad,sn) : Glyph::DirDashedCircle(rad,sn);}
			else { im ? Glyph::Circle(rad) : Glyph::DashedCircle(rad);}

//			}
			//siz > 0 ? Glyph::DirSegment(2.0 * PI/rad , rad, sn ) : Glyph::DirSegment(2.0 * PI/rad , rad, sn );
			break;
		}
		case _SPH:
		{
			Dls ts = Op::dl( s );
			Pnt p = Ro::cen(ts);
			Glyph::Point(p);
            			
			//Sphere (if radius not 0);
			double st = Ro::siz( ts, false );
			double t = sqrt ( fabs ( st ) );;
			bool real = st > 0 ? 1 : 0;			
			glTranslatef(p[0], p[1], p[2]);
			real ? Glyph::SolidSphere(t,20,20) : Glyph::Sphere(t,20,20);			
			break;
		}
		case _PLN:
		{
			Drv d	= Fl::dir( s, false );
			Sph v	= Fl::loc( s , Ori(1), false );
			Rot r = Gen::ratio( Vec::z, Op::dle( Biv( s ) ).unit() );
			glTranslated(v[0],v[1],v[2]);
			glMultMatrixd(&(Op::mat(r)[0][0]));
			Glyph::SolidGrid();			
			break;
		}
		case _DLP:
		{
			Drv d	= Fl::dir(s , 1 );
			Sph v   = Fl::loc( s , Ori(1), 1 );
			Rot r = Gen::ratio( Vec::z, Vec( s ).unit() );
			Vec4<> t = Op::aa(r);
			glTranslated(v[0],v[1],v[2]);
			//Glyph::Pin(Vec(s[0], s[1], s[2]));
			glRotated(t.w, t.x, t.y, t.z);
			Glyph::SolidGrid();
			break;
		}
		case _LIN:
		{
			Drv d	= Fl::dir( s, false );
			Sph v	= Fl::loc( s , Ori(1), false );
			glTranslated(v[0],v[1],v[2]);
			Glyph::Line(d * 10, d * -10);			
			break;
		}
		case _DLL:
		{
			Drv d = Fl::dir( s , true);
			Sph v = Fl::loc( s , Ori(1), 1);
			glTranslated(v[0],v[1],v[2]);
			Glyph::DashedLine(d * 10, d * -10);			
			break;

		}
		case _TNV: //at origin . . .
		{
			Glyph::DashedLine( s );
			glTranslated(s[0], s[1], s[2]);
			Glyph::SolidSphere(.1,5,5);
			break;
		}
		case _TNB: //homogenous . . .
		{
            Biv b(s); b.draw(0,0,1,.5);
            break;
		}
        case _FLP:
        {
            s.null().draw(r,g,b,a);
            break;
        }
		case _ROT:
		{
			break;
		}			
	}	
	glPopMatrix();
}

State Draw :: pos(const State& s){

	switch(s.idx()){

		case _PNT:
		case _CIR:
		case _PAR:
		case _SPH:
		{	
			return Ro::loc(s);							
			break;
		}	
		case _FLP:
		case _LIN:
		case _PLN:
		{
			Sph v   = Fl::loc( s , Ori(1), false  );
			return Op::dl(v);
			break;
		}
		case _DLL:
		case _DLP:
		{
			Sph v   = Fl::loc( s , Ori(1), true );
			return Op::dl(v);
			break;
		}	
	}
}

void Draw :: Push( const State& pos, const State& rot, const double& scale ){
	glPushMatrix();
		Vec4<> t = Op::aa(rot);
		glTranslated(pos[0], pos[1], pos[2]);
		glRotated(t.w,t.x,t.y,t.z);
		glScaled(scale,scale,scale);
}

void Draw :: PushPosition( const State& pos){
	glPushMatrix();
		glTranslated(pos[0], pos[1], pos[2]);
}

void Draw :: Pop(){
	glPopMatrix();
}

////////////// VERY PRETTY PRINTING USING TIKZ ///////////////////
string Print :: DrawBegin(Style style){

    stringstream od;
    
    od <<  "\\draw  [";
    
    if (style & Dashed) od << "dashed";
    if (style & Dotted) od << "dotted";
    if (style & Fill) od << "fill";

    od << "]";
    return od.str();
}

string Print :: PlotBegin(float tension, bool smooth, bool cycle){
 
        stringstream od;
        od << "plot[tension = ";
        od << tension;
        if (smooth) od << ", smooth "; 
        if (cycle) od << "cycle";
        od << "] ";
        od << "coordinates{";
        
       return od.str(); 
        
}
    string Print :: Coord(const State & s, const Camera& cam){
        double  rw = 5.0 / cam.width(); double rh = 5.0 / cam.height();
        stringstream od;
        Vec vo = GL::project( s[0], s[1], s[2], cam);
        od << "(" << vo[0] * rw << "," << vo[1] * rh << ")";
        
        return od.str();
    }
    
    string Print :: Line(const State& pa, const State& pb, const Camera& cam){
        double  rw = 5.0 / cam.width(); double rh = 5.0 / cam.height();
        stringstream od;
        Vec vo = GL::project( pa[0], pa[1], pb[2], cam);
        Vec vb = GL::project( pa[0], pa[1], pb[2], cam);
        od << Print::PlotBegin(0, false);
        od << "(" << vo[0] * rw << "," << vo[1] * rh << ")";
        od << "(" << vb[0] * rw << "," << vb[1] * rh << ")";
        od << Print::PlotEnd();
        return od.str();
    }

    string Print :: Circle(const State & s, const Camera& cam){
        double  rw = 5.0 / cam.width(); double rh = 5.0 / cam.height();
           static Vec v[4]; static Vec vo[4];
           
        Par a = Ro::par_cir(s, 0);
        Par b = Ro::par_cir(s, PIOVERTWO);
        
        vector<Pnt> pa = Ro::split(a);
        vector<Pnt> pb = Ro::split(b);
        
       v[0] = Ro::null_cen(pa[0]);
       v[2] = Ro::null_cen(pa[1]);
       v[1] = Ro::null_cen(pb[0]);
       v[3] = Ro::null_cen(pb[1]);

        stringstream od;
       
       od << Print::PlotBegin(1,true);
       
       TIT(4) 
        vo[i]= GL::project( v[i][0], v[i][1], v[i][2], cam);
        
        od << "(" << vo[i][0] * rw << "," << vo[i][1] * rh << ")";
        //ts += od.str();
       END
    
        od << Print::PlotEnd();
        
        return od.str();
    }
    
    string Print :: frame(const Frame& f, const Camera& cam){
         double  rw = 5.0 / cam.width(); double rh = 5.0 / cam.height();
         static Vec v[4]; static Vec vo[4];
         stringstream od;
          
        v[0] = f.pos();
        v[1] = f.x(); 
        v[2] = f.x() + f.y();
        v[3] = f.y();
        
        TIT(4)
        vo[i] = GL::project( v[i][0],v[i][1],v[i][2],cam); 
        END 
        
         return od.str();
    }
    
    string Print :: Cube( const Frame& f, const Camera& cam){
        double  rw = 5.0 / cam.width(); double rh = 5.0 / cam.height();
        static Vec v[8]; static Vec vo[8];
        
        stringstream od;
        v[0] = f.pos();
        v[1] = f.x(); 
        v[2] = f.x() + f.y();
        v[3] = f.y();

        v[4] = f.pos() + f.z();
        v[5] = v[4] + f.x();
        v[6] = v[5] + f.y();
        v[7] = v[4] + f.y();
                
        TIT(8)
        vo[i] = GL::project( v[i][0],v[i][1],v[i][2],cam); 
        
        END 
        
        TIT(4)
        od << "(" << vo[i][0] * rw << "," << vo[i][1] * rh << ")";
        END
        od << "(" << vo[0][0] * rw << "," << vo[0][1] * rh << ")";
        TIT(4)
        od << "(" << vo[i+4][0] * rw << "," << vo[i+4][1] * rh << ")";
        END
        od << "(" << vo[3][0] * rw << "," << vo[3][1] * rh << ")";
        TIT(4)
        od << "(" << vo[i][0] * rw << "," << vo[i][1] * rh << ")";
        END
        
        return od.str();
    }
        
    string Print :: CircleSeg( const State& cir, const State& pa, const State& pb, const Camera& cam){
                
                double  rw = 5.0 / cam.width(); double rh = 5.0 / cam.height();
                             
                Dlp dlp = pa - pb;
                Par par = ( dlp ^ cir.dual() ).dual();
                Pnt np = Ro::split2( par );
                
                Vec va = GL::project( pa[0], pa[1], pa[2], cam);
                Vec vb = GL::project( pb[0], pb[1], pb[2], cam);
                Vec vc = GL::project( np[0], np[1], np[2], cam);
                
                stringstream od;
                
                od << Print::PlotBegin(0, false);
                od << "(" << va[0] * rw << "," << va[1] * rh << ")";
                od << "(" << vc[0] * rw << "," << vc[1] * rh << ")";
                od << "(" << vb[0] * rw << "," << vb[1] * rh << ")";
                od << Print::PlotEnd();
                
                return od.str();
    }
    
    string Print :: Tikz( const State & s, const Camera& cam){
        
        double  rw = 5.0 / cam.width(); double rh = 5.0 / cam.height();
        
        static Vec v[4];
        static Vec vo[4];
        
       
        string ts;
        
        switch (s.idx()){
                
            case _CIR:
            {
                ts += "\\draw";
                
                if ( Ro::siz(s, false) < 0 ) ts += "[dotted]";
                
                ts +=" plot[tension = 1, smooth cycle] coordinates{";
                
                Par a = Ro::par_cir(s, 0);
                Par b = Ro::par_cir(s, PIOVERTWO);
                
                vector<Pnt> pa = Ro::split(a);
                vector<Pnt> pb = Ro::split(b);
                
               v[0] = Ro::null_cen(pa[0]);
               v[2] = Ro::null_cen(pa[1]);
               v[1] = Ro::null_cen(pb[0]);
               v[3] = Ro::null_cen(pb[1]);

               TIT(4) 
                vo[i]= GL::project( v[i][0], v[i][1], v[i][2], cam);
                stringstream od;
                od << "(" << vo[i][0] * rw << "," << vo[i][1] * rh << ")";
                ts += od.str();
               END
                
                ts += "};";
            } 
                break;
            case _LIN:
            {
                ts += "\\draw ";
                
                Dlp left = cam.frustrum().left().dual();
                Dlp right = cam.frustrum().right().dual();
                Dlp top = cam.frustrum().top().dual();
                Dlp bottom = cam.frustrum().bottom().dual();
                
                Pnt pa = Ro::null( (s.dual().conjugate() ^ left).dual().runit() ); 
                Pnt pb = Ro::null( (s.dual().conjugate() ^ right).dual().runit() ); 
                Pnt pc = Ro::null( (s.dual().conjugate() ^ top).dual().runit() ); 
                Pnt pd = Ro::null( (s.dual().conjugate() ^ bottom).dual().runit() ); 
                
                Vec va = GL::project( pa[0], pa[1], pa[2], cam);
                Vec vb = GL::project( pb[0], pb[1], pb[2], cam);
                Vec vc = GL::project( pc[0], pc[1], pc[2], cam);
                Vec vd = GL::project( pd[0], pd[1], pd[2], cam);
                
                double a= va.norm();
                double b= vb.norm();
                double c= vc.norm();
                double d= vd.norm();
                
//                double sm = (a<b) ? ( (a<c) ? ( (a<d) ? a : d ) : (c<d) ? c : d )  ) 
                
                stringstream od;
                od << "(" << va[0] * rw << "," << va[1] * rh << ")";
                od << "--";
                od << "(" << vb[0] * rw << "," << vb[1] * rh << ");\n";
            
                ts += od.str();
                break;
            }
            case _DLL:
            {
                break;
            }
        }

        return ts;
    }
    
    string Print :: TikzSeg2( vector<State> s, const Camera& cam){
        double  rw = 5.0 / cam.width(); double rh = 5.0 / cam.height();
        string ts = Print::Begin();
        switch (s[0].idx() ){
            case _VEC:
            case _PNT:
            {
                 ts += "\\draw plot[tension = 1, smooth] coordinates{";
                
                    TIT(s.size())
                        Vec va = GL::project( s[i][0], s[i][1], s[i][2], cam);
                        
                        stringstream od;
                        od << "(" << va[0] * rw  << "," << va[1] * rh << ")";
                        
                        ts += od.str();
                    END
                
                 ts += "};";
                
                break;
            }
            default:
                break;
        }
        ts += Print::End();
        return ts;
    }

    
    string Print :: TikzSeg( const State& s, const State& pa, const State& pb, const Camera& cam){
        double  rw = 5.0 / cam.width(); double rh = 5.0 / cam.height();
        string ts;
        
        switch (s.idx() ){
            case _CIR:
            {
                ts += "\\draw plot[tension = 1, smooth] coordinates{";
                
                Dlp dlp = pa - pb;
                Par par = ( dlp ^ s.dual() ).dual();
                Pnt np = Ro::split2( par );
                
                Vec va = GL::project( pa[0], pa[1], pa[2], cam);
                Vec vb = GL::project( pb[0], pb[1], pb[2], cam);
                Vec vc = GL::project( np[0], np[1], np[2], cam);
                
                stringstream od;
                od << "(" << va[0] * rw << "," << va[1] * rh << ")";
                od << "(" << vc[0] * rw << "," << vc[1] * rh << ")";
                od << "(" << vb[0] * rw << "," << vb[1] * rh << ")";
                
                ts += od.str();
                ts += "};\n";
                break;
            }
            case _LIN:
            {
                ts += "\\draw ";
                
                Vec va = GL::project( pa[0], pa[1], pa[2], cam);
                Vec vb = GL::project( pb[0], pb[1], pb[2], cam);
                
                stringstream od;
                od << "(" << va[0] * rw << "," << va[1] * rh << ")";
                od << "--";
                od << "(" << vb[0] * rw << "," << vb[1] * rh << ");\n";
                
                ts += od.str();
                break;
            }
                
            case _DLL:
            {
                break;
            }
                
            case _VEC:
            {
                ts += "\\draw plot[tension = 1, smooth] coordinates{";
                
                Vec va = GL::project( s[0], s[1], s[2], cam);
                Vec vb = GL::project( pa[0], pa[1], pa[2], cam);
                Vec vc = GL::project( pb[0], pb[1], pb[2], cam);
                
                stringstream od;
                od << "(" << va[0] * rw  << "," << va[1] * rh << ")";
                od << "(" << vb[0] * rw  << "," << vb[1] * rh << ")";
                od << "(" << vc[0] * rw  << "," << vc[1] * rh << ")";
                
                ts += od.str();
                break;
            }
                
        }
        
        return ts;
    }
    
    string Print :: TikzPerspective( const State & s, const Camera& cam){
        
        double  rw = 5.0 / cam.width(); double rh = 5.0 / cam.height();
        
        string ts;
        
        switch (s.idx()){
                
            case _CIR:
                
                ts += "\\draw plot[tension = 1, smooth cycle] coordinates{";
                
                TIT(12) VAL(12)
                
                Vec v = Ro::pnt_cir(s, PI*t);
                
                Vec vo = GL::project( v[0], v[1], v[2], cam);

                stringstream od;
                od << "(" << vo[0] * rw << "," << vo[1] * rh << ")";
                
                ts += od.str();
               
                END
                
                ts += "};";
                
                break;
        }
        
        return ts;
    }
    
    
/*
//passing in space coordinates
void Draw :: clickTest( State& s, double x, double y, double z ) {

//	s.scene().

	Pnt p = Ro::null(x,y,z);
	
	Pnt q = Draw::screenCoord( Draw::pos(s) );
		
	switch(s.idx()){
	
		case _VEC:
		{
			break;
		}
		
		case _DRV:
		{
			break;
		}
		
		case _BIV:
		{						
			break;
		}
		
		case _DRB:
		{
			
			break;
		}
		case _TRI:
		{
		
		}
			break;
			
		case _PNT:
		case _PAR:
		case _CIR:
		case _SPH:
		{
			double t = Ro::siz(s);
			
			Pnt q1 = Ro::loc(s);				
			Pnt q2 = Ro::null( Draw :: screenCoord( q ) );
						
			if ( fabs(Op::sca( q1 <= q2 )) < (t + 20) ){

//				s.selectToggle();
//				if(s.isSelected()) {
				
//				}
			}
			break;
		}

		case _PLN:
		{
			Sph v	= Fl::loc( s, Ori(1) );
			break;
		}
		case _DLP:
		{
			Sph v   = Fl::loc( s , Ori(1), 1 );
			break;
		}
		case _LIN:
		{
			Sph v	= Fl::loc( s , Ori(1) );
			break;
		}
		case _DLL:
		{
			Sph v = Fl::loc( s , Ori(1), 1);
			break;

		}
		case _ROT:
		{
			break;
		}
			
	}

}
*/

} //GA::