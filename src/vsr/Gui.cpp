/*
 *  Gui.cpp
 *  nanomed
 *
 *  Created by x on 3/17/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

#include "Gui.hpp"

namespace glv {

void Gui :: _init(){

	cout << "INIT GUI" << endl;
	enable ( Controllable |  DrawBorder | DrawBack | FocusHighlight );

	int spacing		= 10;
	mPlacer = new Placer(*this, Direction::S, Place::TL, spacing, spacing);
	
	Label :: Spec spec(Place::CL, width() + 20, 0);
	Label * tmp = new Label ( name(), spec);
	
	*mPlacer << *tmp;
	
	addHandler(Event::MouseDrag, Behavior::mouseMove);
}

Gui :: Gui() : Table("<"), bVisible(true) {
    _init();
}
    
Gui :: Gui(string _name) : Table("<"), bVisible(true) {
	name(_name);
	//_init();
}

Gui :: Gui(int _w, int _h) : Table("<"), bVisible(true) {
 	this -> w = _w;
	this -> h = _h;
	//_init();
}

void Gui :: add ( Widget* v, const std::string& _name) {
			
	mWidget[ _name ] = v;	
    Label * tmp = new Label (_name );

	Box * box = new Box();
	*this << ( *box << *mWidget[ _name]  << *tmp );	

	arrange();		
}


} //glv::