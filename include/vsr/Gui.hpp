/*
 *  Gui.hpp
 *  nanomed
 *
 *  Created by x on 3/17/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

 #ifndef GLV_GUI_H_INCLUDED
 #define GLV_GUI_H_INCLUDED

#include "glv.h"
#include "glv_color_controls.h"
#include <iostream>
#include <string.h>

namespace glv {

	using namespace std;

	enum {
		SLIDER,
		SLIDERS,
		SLIDER2D,
		BUTTON,
		BUTTONS,
		DIALER,
		COLORSLIDER
	};

	//typedef Widget Widget;
	typedef map<string, Widget*> WidgetMap;
	typedef map<string, Widget*>::iterator WidgetPtr;

	class Gui : public Table {

			/* Map of Widgets (index by name) */
			WidgetMap mWidget;

			/* Placement Defaults */
			Placer * mPlacer;

			bool bDesc;		    //show descriptor?
			bool bVisible;		//draw to screen?

			void _init();

			public:

                Gui();
				Gui(int _w , int _h );
				Gui(string);

				void add ( Widget* v) {
					mWidget[ v->name() ] = v;

					Label :: Spec spec(Place::CL, v -> width() + 20, 0);
					Label * tmp = new Label (v->name(), spec);

					//cout << "adding and placing pointer " << (v->name()) << "to gui." << endl;
					*mPlacer << ( ( *mWidget[ v->name() ] ) << *tmp );

				}


				/*! add widget: enum type, name, min, max, attach, num */
				template <class V>
				void add (int, string, V& val, float min = 0., float max = 1. );
        
                /*! add widget: enum type, name, callback function,  */
//				template <class V>
//				void add (int, string, callback, V& ob, float min = 0., float max = 1.,int numx = 0, int numy = 0 );
				
                void add ( Widget* v, const std::string& _name);

				Widget& widget(string name) { return *mWidget[name]; }			///< Get Widget
				WidgetMap& widget() { return mWidget; }							///< Get Widget Map

				void updateValues();

				/* Render on Screen */
				virtual void onDraw(){
					glTranslated(5,h-10,0);
					glColor3f(1,1,1);
					draw::text( name().c_str() );
				}


	};

	template <class V>
	void Gui :: add (int _type, string _name, V& val, float min , float max ){

		Widget * s;
		switch (_type){
			case SLIDER:
			{
				Slider * ns = new Slider(glv::Rect(100,20));
				ns -> attachVariable(val, 0 );
				s = (Widget*)ns;
				break;
			}
			case SLIDER2D:
			{
				Slider2D * ns = new Slider2D();
				s = (Widget*)ns;
				break;
			}
			case BUTTON:
			{
                cout << " adding Button to gui " << endl; 
				Button *ns = new Button(glv::Rect(20,20));
				ns -> attachVariable(val, 0);
				s = (Widget*)ns;
				break;
			}
			case DIALER:
			{
				NumberDialer * ns = new NumberDialer(4,3,max,min);
				ns -> attachVariable(val, 0);
				s = (Widget*)ns;
				break;
			}
			case COLORSLIDER:
			{
//				ColorSliders * ns =	new ColorSliders( Rect(300,50) );
//				s = (Widget*)ns;
				break;
			}
		}

		s->colors().text.set(1,1,1);
		//cout << _name << endl;
		s->name( _name );
		add((Widget*)s, _name);
	}


//	template <class V>
//	void Gui :: add (int _type, string _name, callback cb, V& ob,

//	template <class V>
//	void Gui :: add (int _type, string _name, callback cb, V& ob, float min , float max, int numx , int numy ){
//
//		Widget * s;
//		switch (_type){
//			case SLIDER:
//			{
//				Slider * ns = new Slider(glv::Rect(100,20));
//				ns -> attach(cb, Update::Value, &ob);
//				s = (Widget*)ns;
//				break;
//			}
//			case SLIDER2D:
//			{
//				Slider2D * ns = new Slider2D();
//				s = (Widget*)ns;
//				break;
//			}
//			case BUTTON:
//			{
//				Button *ns = new Button(glv::Rect(20,20));
//				ns -> attach(cb, Update::Value, &ob);
//				s = (Widget*)ns;
//				break;
//			}
//			case DIALER:
//			{
//				NumberDialer * ns = new NumberDialer(4,3,max,min);
//				ns -> attach(cb, Update::Value, &ob);
//
//				s = (Widget*)ns;
//				break;
//			}
//			case SLIDERS:
//			{
//				Sliders * ns =	new Sliders( Rect(100,20), numx, numy, 0 );
//				ns -> attach(cb, Update::Value, &ob);
//				s = (Widget*)ns;
//				break;
//			}
//		}
//
//		s->colors().text.set(1,1,1);
//		//cout << _name << endl;
//		s->name( _name );
//		add((Widget*)s, _name);
//	}
//
//
} //glv::

#endif
