/*
 *  Dem.cpp
 *  CONGA_07
 *
 *  Created by x on 11/23/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#include "xDemo.h"

namespace con{

Dem :: Dem() {}


void Dem :: xf(State * s, State& pos, double t){
	State& ts = *s;
	Vec tv ( Ro::cen(pos) ); //Center of Defining Sphere
	Vec sc = GL::project(tv[0], tv[1], tv[2], scene().camera()); //2D coordinates of Defining Sphere
	Pnt cp  = Fl::loc( scene().ray(), Ro::loc(pos), 1);//Point in 3D space on Projection Ray closest to sphere.

	switch(scene().key()){
		case 's': //scale
		{
			Vec tm1 = scene().mouse() + scene().md() - sc;
			Vec tm2 = scene().mouse() - sc; 
			int neg = (tm1.norm() > tm2.norm()) ? 1 : -1; //Drag towards or away from element
			ts = Op::sp(ts, Gen::dil_pnt( Ro::cen(pos), scene().md().norm()*t*neg));
			break;
		}
		case 'g': //translate
		{
			ts = Op::sp(ts, Gen::trs(scene().mdc()*t));
			//pos = Op::sp(pos, Gen::trs(scene().mdc()*t));

			break;
		}
		case 'r': //rotate about local line
		{
			Dll td = pos <= Drb(scene().dbc()*t);
			ts = Op::sp(ts, Gen::mot_dll(td));
			break;
		}
		case 'b': //boost by drag (not working)
		{
			Tnv tnv(scene().mdc());
			
			State pp = Gen::tpar( Op::sp0( tnv, Gen::trs( cp ) ) * t );
			ts = Op::sp(ts, pp);
			glPushMatrix();
				glTranslated(cp[0],cp[1],cp[2]);
				tnv.draw();
			glPopMatrix();
			break;
		}
		case 't': // twist about global line
		{
			Dll td = Op::dl( scene().mo() ^ scene().mdc() ^ Inf(1) );
			ts = Op::sp( ts, Gen::mot_dll(td) );
			break;
		}
		case 'a': //all transformations
		{
			//rotate
			Dll td = pos <= Drb(scene().dbc()*t);
			ts = Op::sp(ts, Gen::mot_dll(td));
			//translate
			ts = Op::sp(ts, Gen::trs(scene().mdc()*t));
			//scale
			Vec tm1 = scene().mouse() + scene().md() - sc;
			Vec tm2 = scene().mouse() - sc; 
			int neg = (tm1.norm() > tm2.norm()) ? 1 : -1; //Drag towards or away from element
			ts = Op::sp(ts, Gen::dil_pnt( Ro::cen(pos), scene().md().norm()*t*neg));
			break;
		}
		case glv::Key::Escape:
		{
			cout << "deselect all" << endl;
			s -> selectToggle();
			break;
		}
	}
}

//general transform
void Dem :: xfg (State * s, State& pos, double t){ 
	State& ts = *s;
	
	//Center of Defining Sphere
	Pnt tp = Ro::null_cen(pos);
	Vec tv ( tp ); 
	
	//2D coordinates of Defining Sphere
	Vec sc = GL::project(tv[0], tv[1], tv[2], scene().camera());
	sc[0] /= scene().width();
	sc[1] = 1 - ( sc[1] / scene().height() ); 
	
	//Point in 3D space on Projection Ray closest to sphere.
	Pnt cp  = Fl::loc( scene().ray(), tp, 1);
		
	//is current mouse motion towards or away from sphere?
	Vec abs = scene().mouse() - scene().md();
	Vec tm1 = scene().mouse() - sc;
	Vec tm2 = abs - sc;
	
	Biv tt = tm1 ^ tm2;			 

	//check drag towards or away from element		
	int neg = ( tm1.norm() > tm2.norm() ) ? 1 : - 1 ; 
	ts = Op::sp(ts, Gen::dil_pnt( tp, t * neg) );
	
	cout << "1: "<< tm1.norm() << " " << tm2.norm() << endl;

	//rotate
//	Dll td = pos <= Drb(scene().dbc()*t);
//	ts = Op::sp(ts, Gen::mot_dll(td));
	
//	//translate
//	ts = Op::sp(ts, Gen::trs(scene().mdc()*t));

}

void Dem :: xfFrame(Frame * frame, double t){
//	if ( frame->isSelected() ) {
		Pnt& tp = frame->pos();
		Rot& tr = frame->rot();
		Vec tv ( tp );
		Vec sc = GL::project(tv[0], tv[1], tv[2], scene().camera());
		switch(scene().key()){
			case 's': //scale
			{
				Vec tm1 = scene().mouse() + scene().md() - sc;
				Vec tm2 = scene().mouse() - sc; 
				int neg = (tm1.norm() > tm2.norm()) ? -1 : 1; //Drag towards or away from element
				
				frame->dd( scene().md().norm()*t*neg );
				frame->dilate();
				//ts = Op::sp(ts, Gen::dil_pnt( Ro::cen(pos), scene().md().norm()*t*neg));
				break;
			}
			case 'g': //translate
			{
	//			tp = Op::sp(tp, Gen::trs(scene().mdc()*t));
				frame->dx() = scene().mdc() * t;
				frame->move();
				break;
			}
			case 'r': //rotate about local line
			{
	//			Dll td = tp <= Drb(scene().dbc()*t);
	//			tr = Op::sp(tr, Gen::mot_dll(td));
				frame->db() =  scene().dbc() * t; //scene().mp().unit() ^ scene().md();
				frame->spin();
				break;
			}
			case 'b': //boost by drag
			{
				//ts = Op::sp(ts, Gen::trv(scene().mdc()*t));
				break;
			}
			case 'a': //all transformations
			{
				double neg = scene().md()[0];
	//			Dll td = pos <= Drb(scene().dbc()*t);
	//			ts = Op::sp(ts, Gen::mot_dll(td));
	//			ts = Op::sp(ts, Gen::trs(scene().mdc()*t));
	//			ts = Op::sp(ts, Gen::dil_pnt( Ro::cen(pos), scene().md().norm()*t*neg));
				break;
			}
			case glv::Key::Escape:
			{
				cout << "deselect all" << endl;
				frame -> selectToggle();
			}
		}
		frame ->acc();
//		}
}

bool Dem :: clickedPnt( State& tp, const Vec& v, double rad ){
	Vec p = Ro::null_cen(tp);
	Vec sc = GL::project(p[0], p[1], p[2], scene().camera());
	sc[0] /= scene().width(); sc[1] /= scene().height(); sc[2] = 0;
	sc[1] = 1 - sc[1];
	Vec dist = (v - sc);
	return (dist.norm() < rad) ? 1 : 0;
}


void Dem :: interface( State& s, double t){
	Dls dls;
	switch ( s.idx() ){
		case _VEC:
		case _TNV:
		case _DRV:
		   dls = Ro::dls_vec(s, .3);
		   break;
		case _CIR:
		case _PAR:
			dls = Ro::sur(s);
			break;
		case _PNT:
			dls = Ro::dls_vec(Vec(s), .2);
			break;
		case _LIN:
		case _PLN:
			dls = Ro::dls_pnt( Fl::loc(s, Ori(1), 0) );
			break;
		case _DLL:
		case _DLP:
			dls = Ro::dls_pnt( Fl::loc(s, Ori(1), 1) );
			break;			
	}
	
	interface( s, dls, t);	
}

void Dem :: interface( State& s, State& x, double t){
	s.color(1,1,0);

	//physics
	static double dt = 1;
	static double acc = .9;
	dt *= acc;
		
	if (scene().mouseDown()){
		dt = t;
		if (clickedPnt( x, scene().click() ) ) {
			s.select();
		}
	}
	
	if (s.isSelected()){
		s.color(1,0,0);
		xf(&s,x,dt);
	}
}

void Dem :: interface2( State& s, State& x, double t){
	s.color(1,1,1);

	//physics
	static double dt = 1;
	static double acc = .9;
	dt *= acc;
		
	if (scene().mouseDown()){		
		dt = scene().ma() / scene().width();
	}
		
	if ( clickedPnt( x, scene().click() ) ) {
		xfg(&s,x,dt);			
	}
		
}


void Dem :: interface( Frame& f, double t){

	static double dt = 5;
	static double acc = .9;
	dt *= acc;
	if (scene().mouseDown()){
		dt = t;// scene().ma() / scene().width();
		if (clickedPnt( f.pos(), scene().click() ) ){
			f.select();
		}
	}
	if (f.isSelected()){
		xfFrame(&f, dt);
	}
}

//no toggle
void Dem :: interface2( Frame& f, double t){

	static double dt = 5;
	static double acc = .9;
	dt *= acc;
	
	if (scene().mouseDown()){
		dt = t;// scene().ma() / scene().width();
	}
		
	if (clickedPnt( f.pos(), scene().click() ) ){
		xfFrame(&f, dt);
	}
}

void Dem :: clickTest(double x, double y){}
void Dem :: printPS(){}

}//con::