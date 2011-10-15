/*
 *  Dem.h
 *  CONGA_07
 *
 *  Created by x on 11/23/10.
 *  Copyright 2010 x. All rights reserved.
 *
 
	//Versor Demos
	
 */
#ifndef DEM_H_INCLUDED
#define DEM_H_INCLUDED

#include "vsr.h"
//#include "vsr_gl_shader.h"
//#include "vsr_gl_texture.h"
//#include "vsr_gl_pbo.h"

#define BEGINLOOP(f) for(int i = 0; i < f.num(); ++i){
#define ENDLOOP }

#define BEGINGUI(f)  \
	static string name = f;\
	static bool bSet = 0;\
	if(!bSet){\
	add(name);\
	Gui& g = gui(name);
#define ENDGUI\
	bSet=1;\
	}


#define BEGINSETUP(f)  \
	static string name = f;\
	static bool bSet = 0;\
	if(!bSet){\
	add(name);\
	Gui& g = gui(name);	
	
#define ENDSETUP\
	g.arrange();\
	scene().gui().arrange();\
	bSet=1;\
	}

namespace con{

	using namespace std;

//	typedef map<string,Gui*> GuiMap;
//	typedef map<string,Gui*>::iterator GuiMapPtr;

	enum {
		SLIDER = glv::_SLIDER,
		BUTTON = glv::_BUTTON,
		DIALER = glv::_DIALER
	};

	class Dem : public Drawable {
	
		protected:
			//typedef void (*Example)();					///< Empty Function pointer
			typedef map<string,bool> Ex;					///< String Map to Draw Loops
			typedef map<string,bool>::iterator ExPtr; 
			Ex mEx;
//			GuiMap mGui;
			//Gui mGui;
			double mBright;
		
		public:
		
			Dem();
			
			Dem& add(string name){
				Gui * g = new Gui(name);
				controller().add(g);
				return *this;
			}
			
//			void clearGui(){}			
//			Gui& gui(string name) { return *mGui[name]; }
			
			//Settings and Triggers
			Gui& gui(string name) { return controller().gui(name); }
			Controller& controller() { return scene().controller(); }
			int key() { return scene().key(); }
			
			
			//Navigation and Manipulation
			void xf(State * s, State& p, double t=1); ///< transform element s at position p by amount t
			void xfg(State * s, State& pos, double t = 1);
			void xfFrame(Frame * f, double t=1);
			bool clickedPnt(State& p, const Vec& v, double rad = .05); ///< test for mouse interaction with point
			void interface( State& x, State& s, double t = 1);
			void interface( State& x, double t = 1);
			void interface2( State& x, State& s, double t = 1);
			void interface( Frame& f, double t = 1.0);
			void interface2( Frame& f, double t = 1.0); //toggle-less
						
			
			//AUDIO INFO

			//AudioGraph
			AudioGraph& ag() { return scene().graph().aud(); }
			
			STFT& fft()			{ return ag().process().stft(); }
			const int width()   { return fft().numBins(); }

			bool ready()  { return ag().process().ready; }
			float *  mag()   { return fft().aux( !ag().process().swap ); }		///< returns current free buffer mag vals
			float *  phs()   { return fft().aux( !ag().process().swap + 2); }	///< returns current free buffer phs vals

			float mag(int idx) { return mag()[idx]; }
			float phs(int idx) { return phs()[idx]; }

			///tell audio to swap buffers
			void swapAudioBuffers(){
				ag().process().swap = !ag().process().swap;			
			}			
			
			
			virtual void drawLoop() = 0;
			virtual void clickTest(double, double);
			virtual void printPS();
	};

}

#endif