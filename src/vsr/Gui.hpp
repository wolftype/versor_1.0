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

#include "GLV/glv.h"
#include "GLV/glv_color_controls.h"
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

	typedef Widget vWidget;
	typedef map<string, vWidget*> vWidgetMap;
	typedef map<string, vWidget*>::iterator vWidgetPtr;

	class Gui : public Table {

			/* Map of Widgets (index by name) */
			vWidgetMap mValueWidget;

			/* Placement Defaults */
			Placer * mPlacer;

			bool bDesc;		    //show descriptor?
			bool bVisible;		//draw to screen?

			void _init();

			public:

				Gui(int _w = 100, int _h = 200);
				Gui(string);

				void add ( vWidget* v) {
					mValueWidget[ v->name() ] = v;

					Label :: Spec spec(Place::CL, v -> width() + 20, 0);
					Label * tmp = new Label (v->name(), spec);

					//cout << "adding and placing pointer " << (v->name()) << "to gui." << endl;
					*mPlacer << ( ( *mValueWidget[ v->name() ] ) << *tmp );

				}


				/* add widget: enum type, name, min, max, attach, num */
				template <class V>
				void add (int, string, V& val, float min = 0., float max = 1. );
				template <class V>
				void add (int, string, callback, V& ob, float min = 0., float max = 1.,int numx = 0, int numy = 0 );
				void add ( vWidget* v, const std::string& _name);

				vWidget& widget(string name) { return *mValueWidget[name]; }			///< Get Widget
				vWidgetMap& widget() { return mValueWidget; }							///< Get Widget Map

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

		vWidget * s;
		switch (_type){
			case SLIDER:
			{
				Slider * ns = new Slider(glv::Rect(100,20));
				ns -> attachVariable(val, 0 );
				s = (vWidget*)ns;
				break;
			}
			case SLIDER2D:
			{
				Slider2D * ns = new Slider2D();
	//			ns -> attachVariable(((float*)val)[0],0);
	//			ns -> attachVariable(((float*)val)[1],1);
	//			ns -> attachVariable(val[0], 0);
	//			ns -> attachVariable(val[1], 1);
				s = (vWidget*)ns;
				break;
			}
			case BUTTON:
			{
				Button *ns = new Button(glv::Rect(20,20));
				ns -> attachVariable(val, 0);
				s = (vWidget*)ns;
				break;
			}
			case DIALER:
			{
				NumberDialer * ns = new NumberDialer(4,3,max,min);
	//			ns -> attachVariable(*(double*)val, 0);
				ns -> attachVariable(val, 0);
				s = (vWidget*)ns;
				break;
			}
			case COLORSLIDER:
			{
//				ColorSliders * ns =	new ColorSliders( Rect(300,50) );
//				s = (vWidget*)ns;
				break;
			}
		}

		s->colors().text.set(1,1,1);
		//cout << _name << endl;
		s->name( _name );
		add((vWidget*)s, _name);
	}


//	template <class V>
//	void Gui :: add (int _type, string _name, callback cb, V& ob,

	template <class V>
	void Gui :: add (int _type, string _name, callback cb, V& ob, float min , float max, int numx , int numy ){

		vWidget * s;
		switch (_type){
			case SLIDER:
			{
				Slider * ns = new Slider(glv::Rect(100,20));
				ns -> attach(cb, Update::Value, &ob);
				s = (vWidget*)ns;
				break;
			}
			case SLIDER2D:
			{
				Slider2D * ns = new Slider2D();
	//			ns -> attachVariable(((float*)val)[0],0);
	//			ns -> attachVariable(((float*)val)[1],1);
	//			ns -> attachVariable(val[0], 0);
	//			ns -> attachVariable(val[1], 1);
				s = (vWidget*)ns;
				break;
			}
			case BUTTON:
			{
				Button *ns = new Button(glv::Rect(20,20));
				ns -> attach(cb, Update::Value, &ob);
				s = (vWidget*)ns;
				break;
			}
			case DIALER:
			{
				NumberDialer * ns = new NumberDialer(4,3,max,min);
				ns -> attach(cb, Update::Value, &ob);

				s = (vWidget*)ns;
				break;
			}
			case SLIDERS:
			{
				Sliders * ns =	new Sliders( Rect(100,20), numx, numy, 0 );
				ns -> attach(cb, Update::Value, &ob);
				s = (vWidget*)ns;
				break;
			}
		}

		s->colors().text.set(1,1,1);
		//cout << _name << endl;
		s->name( _name );
		add((vWidget*)s, _name);
	}


} //glv::

#endif
