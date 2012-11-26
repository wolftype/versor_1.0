//
//  Interface.h
//  A Control Object: Manipulate vsr objects using screen interaction (to be fed mouse input data)
//
//  Created by Pablo Colapinto on 3/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//



#ifndef vsr_Interface_h
#define vsr_Interface_h

#include "vsr_gl.h"
#include "vsr_set.h"
#include "vsr_drawable.h"
#include "vsr_camera.h"
#include <map>

namespace vsr  {
    
//    class Model;
    
    /* Mapped Key values from GLV */
    namespace Key{
        enum {
            
            // Standard ASCII non-printable characters
            Enter		=3,		/**< */
            Backspace	=8,		/**< */
            Tab			=9,		/**< */
            Return		=13,	/**< */
            Escape		=27,	/**< */
            Delete		=127,	/**< */
			
            // Non-standard, but common keys.
            F1=256, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, 
            Insert, Left, Up, Right, Down, PageDown, PageUp, End, Home,
        };
    }
        
    namespace Mode {
		enum {
			Add =		1,
			Select =	1 << 1, 
			Edit =		1 << 2,
			Animate =	1 << 3,
			HitTest =	1 << 4,
			
			BuildGui =	1 << 5,
			
			CamArb	=	1 << 6,
			CamTilt =	1 << 7,
			CamTrack =	1 << 8,
			
			Scale	=	1 << 9,
			Rotate	=	1 << 10,
			Grab	=	1 << 11,
			
			Navigate =  1 << 12,
			Transform =	1 << 13
		};
	}

	struct MouseData {
        
		float x, y, dx, dy, ddx, ddy, xrel, yrel; //< 2D Mouse Position, first and second derivatives of motion, position relative to TL corner
		
        Vec click, pos, move, accel, cat, drag, dragAccum, dragCat, projectFar, projectNear;
		Pnt origin;
		Biv biv, bivCat, dragBiv, dragBivCat;
        
		bool isDown, isMoving, newClick;		
		void toggle() { newClick = !newClick; }
	};
	
	struct ViewData  {
		float w, h; 
        Vec z; 
        Dll ray, clickray; 
	};
    
	struct KeyboardData {
		bool shift, alt, caps, ctrl, meta, f, down;
		int code;
		KeyboardData() : shift(0), alt(0), caps(0), ctrl(0), code(0){}
	};    
    
    
    
    class Interface {
        
        int mMode;  ///< Edit Mode State
        
    public:
    
        
        typedef std::map<string,bool> SBMap;
        /// Map of object addresses and whether they are selected
        SBMap selectMap;                            
        
        
        /*! Abstract View Implementation Data to store info from Windowing System */
        struct ViewImpl {
                        
            
            ViewImpl(Interface * i ) : interface(i) {}          // Register with Interface upon construction
            Interface * interface;   
            
            //A Scene has a camera (which has a lens), a model frame, a set of matrix transformations, and stereographic data
            Scene scene;
            //ViewData holds Window Information
            ViewData data;            
            
			/* Set Lens size to view Size */
			void fit() { 
				scene.camera.width( data.w ); scene.camera.height( data.h ); 
			}
            
            virtual ~ViewImpl(){}

            // All Subclasses must define fullScreenToggle method and getData method
            virtual void fullScreenToggle() {};            
            virtual void getData( void * udata){};
            
        };
        
        /*! Abstract Input Device Implementation */
        struct InputImpl {
            Interface * interface;
            InputImpl(Interface * i) : interface(i){} 
            virtual ~InputImpl() {}
            // All Subclasses must define getData() method
            virtual void getData( void * udata){};
            virtual void getKeyboardData( void * udata){};
            virtual void getMouseData( void * udata){};
        };
        
        
        Interface();
        
        virtual void init() = 0;
        
        void inputCalc();        ///< Calculate Mouse Movements based on x and dx
        void viewCalc();        ///< Calculate Window Matrices, Screen Coordinates of Mouse
        
        ViewImpl * vimpl;       ///< Window Information (Width, Height)
        InputImpl * iimpl;      ///< Inputs (Keyboard, Mouse, OSC, etc) ? more than one?
        
        MouseData       mouse;
        KeyboardData    keyboard;
        
        ViewData& vd() { return vimpl -> data; }
        ViewData vd() const { return vimpl -> data; }
        KeyboardData& kd() { return keyboard; }
        MouseData& md() { return mouse; }

//        Touchable& current();

        Scene& scene() { return vimpl -> scene; }
        Camera& camera() { return vimpl -> scene.camera;}//vimpl -> active(); }
        Frame& model() { return vimpl -> scene.model; }
        
        template <class A> static Vec screenCoord(const A& p, const XformMat& );
        template <class A> bool pntClicked(const A&, double rad = .05);
        
        /// Executes onTouch
        template <class A> void touch(A& s, const Pnt& x, double t);
        template <class A> void touch(A&, double t = 1.0);
        
        void touch ( Vec& s, double t){ touch(s, Ro::dls(s,.5), t); }
        void touch( Tnv& s, double t){ touch(s, Ro::dls(s,.5), t); }
        void touch( Drv& s, double t){ touch(s, Ro::dls(s,.5), t); }
        
        void touch ( Pnt& s, double t) { touch(s, Ro::dls_pnt( Ro::loc(s), .2), t); }
        void touch ( Sph& s, double t) { touch(s, s, t); }

        void touch( Cir& s, double t){ touch(s, Ro::sur(s), t); }
        void touch( Par& s, double t){ touch(s, Ro::sur(s), t); }

        void touch( Lin& s, double t){ touch(s, Ro::dls_pnt( Fl::loc(s, Ori(1), 0) ), t); }
        void touch( Pln& s, double t){ touch(s, Ro::dls_pnt( Fl::loc(s, Ori(1), 0) ), t); }

        void touch( Dll& s, double t){ touch(s, Ro::dls_pnt( Fl::loc(s, Ori(1), 1) ), t); }
        void touch( Dlp& s, double t){ touch(s, Ro::dls_pnt( Fl::loc(s, Ori(1), 1) ), t); }


        /// Transform a State 's' Centered at position 'pos' by velocity 't'
        template <class A> void xf ( A * s, const Pnt& pos, double t );
        template <class A > bool isSelected( A * );
        template <class A > void select( A * );
        template <class A > void deselect( A * );
        template <class A > void toggleSelect( A * );

        void touch( Frame& f, double t = 1.0);
        ///Maniupulate Frame e by clicking on Frame f
        void touch( Frame& f, Frame& e, double t = 1.0);
 
        void windowTransform();
        void stateTransform();
        void camSpin(float acc = .9);
        void camTranslate(float acc = .9);
        void modelTransform(float acc = .9);

        
        void onMouseMove();        
        void onMouseDown();
        void onMouseDrag();
        void onMouseUp(){ mouse.isDown = 0; }        
        void onKeyDown();
        void onKeyUp();
        
        Vec click(){ return mouse.click;   }
        Vec pos(){ return mouse.pos;     }

        /// Transform a Frame 'f' by velocity 't'
        void xfFrame( Frame * f, double t);
        /// Transform a Frame 'e' Centered at Position 'f' by velocity 't'
        void xfFrame( Frame * f, Frame * e, double t);
        /*! Set Mode */
        int& mode() { return mMode; }
        /*! Get Mode */
        int mode() const { return mMode; }
        /// Check Interface Mode
        bool mode(int q) { return mMode & q; }
        /// Enable Mode
        void enable(int bitflag) { mMode |= bitflag; }
        void disable(int bitflag) { mMode &= ~bitflag; }
        void toggle(int bitflag)  { mMode & bitflag ? disable(bitflag) : enable(bitflag); }
        void print(){}
        
    };
    
    
    template <class A> void Interface :: touch( A& s, const Pnt& x, double t){
        
        //physics
        static double dt = 1;
        static double acc = .9;
        dt *= acc;
		
        if ( mouse.isDown ){
            dt = t; // Reset acc
            if ( pntClicked( x ) ) {
                //cout << "clicked" << s << endl; 
                select( &s );
            }
        }
        
        if (isSelected( &s )){
//            cout << "selected" << &s << endl; 
            xf(&s,x,dt);
        }
        
    }
    
    // GENERIC METHOD (BACKUP)
    template<class A> void Interface ::touch (A& s, double t){
        //cout << "generic touch" << endl; 
        switch (s.id){
            case VEC: touch( (*(Vec*)&s), t); break;
            case DRV: touch( (*(Drv*)&s), t); break;
            case TNV: touch( (*(Tnv*)&s), t); break;
            case PNT: touch( (*(Pnt*)&s), t); break;
            case PAR: touch( (*(Par*)&s), t); break;
            case CIR: touch( (*(Cir*)&s), t); break;
            case DLP: touch( (*(Dlp*)&s), t); break;
            case PLN: touch( (*(Pln*)&s), t); break;
            case DLL: touch( (*(Dll*)&s), t); break;
            case LIN: touch( (*(Lin*)&s), t); break;
            case SPH: touch( (*(Sph*)&s), t); break;
        }
    }
    

    template< class A > bool Interface :: isSelected ( A * a ){
        stringstream s; s << a;
        bool tmp = selectMap[ s.str() ];
        return tmp;
    }

    template < class A > void Interface :: select( A * a) {
        stringstream s; s << a;
        selectMap[ s.str() ] = true;
    }

    template < class A > void Interface :: deselect( A * a) {
        stringstream s; s << a;
        selectMap[ s.str() ] = false;
    }
    
    template < class A > void Interface :: toggleSelect( A * a) {
        stringstream s; s << a;
        selectMap[ s.str() ] = !selectMap[ s.str() ];
    }    
        
    /// Screen Coordinates of Target point
    template <class A> Vec Interface :: screenCoord(const A& p, const XformMat& xf){
        Vec sc = GL::project(p[0], p[1], p[2], xf );
        sc[0] /= xf.viewport[2]; sc[1] /= xf.viewport[3]; sc[2] = 0;
        
        return sc;
    }
    
    template <class A> bool Interface :: pntClicked( const A& x, double rad ) {
        Vec v = mouse.click;  // [0,0] is bottom left corner [1.0,1.0] is top right
        Vec p = Ro::loc(x);
        
        Vec sc = screenCoord(p, scene().xf);
    
        Vec dist = (v - sc);
        return (dist.norm() < rad) ? true : false;
    }
    
        
    //Element, Center Point, Amt
    template <class A> 
    void Interface :: xf ( A * s, const Pnt& pos, double t ) {

        //Address of State
        A& ts = *s;
        
        //Center of Defining Sphere
        Vec tv ( Ro::loc(pos) );   
                
        //2D coordinates of Defining Sphere
        Vec sc = screenCoord(tv, scene().xf );
        
        //Point in 3D space on Projection Ray closest to sphere.
        Pnt cp  = Fl::loc( vd().ray, Ro::loc(pos), 1);        
        
        switch(keyboard.code){
            case 's': //SCALE
            {
                Vec tm1 = mouse.pos + mouse.drag - sc;
                Vec tm2 = mouse.pos - sc; 
                
                //Drag towards or away from element . . . 
                int neg = (tm1.norm() > tm2.norm()) ? 1 : -1; 
                Tsd tsd = Gen::dil( Ro::loc(pos), mouse.drag.norm() * t * neg );
                ts = Op::sp( ts,  tsd);
                
                break;
            }
            case 'g': //TRANSLATE
            {
                ts = Op::sp (ts, Gen::trs( mouse.dragCat * t ) );
                break;
            }
            case 'r': //ROTATE local line
            {
                Dll td = pos <= Drb( mouse.dragBivCat * t );
                ts = Op::sp ( ts, Gen::mot( td ) );
                break;
            }
            case 'a': //scale
            {
                //printf("scale\n");s
                Vec tm1 = mouse.pos + mouse.drag - sc;
                Vec tm2 = mouse.pos - sc; 
                
                //Drag towards or away from element
                int neg = (tm1.norm() > tm2.norm()) ? 1 : -1; 
                ts = Op::sp( ts, Gen::dil( Ro::cen(pos), mouse.drag.norm() * t * neg ) );
                break;
            }
//            case 'b': //boost by drag (not working)
//            {
//                Tnv tnv( mouse.dragCat );
//                
//                Bst pp = Gen::trv( Op::sp( tnv, Gen::trs( cp ) ) * t );
//                ts = Op::sp (ts, pp);
//                glPushMatrix();
//				glTranslated(cp[0],cp[1],cp[2]);
//				//tnv.draw();
//                glPopMatrix();
//                break;
//            }
            case 't': // twist about global line
            {
                Dll td = Op::dl( mouse.origin ^ mouse.dragCat ^ Inf(1) );
                ts = Op::sp ( ts, Gen::mot(td) );
                break;
            }

            case 'q': //DESELECT
            {
                toggleSelect(s);
                break;
            }
        }
    }

    
}



#endif
