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
#include "set.h"
#include "Drawable.h"
#include "Camera.h"
#include <map>

namespace vsr  {
    
    class Model;
    
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
        //Camera camera;
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
        SBMap selectMap;                            // Map of object addresses and whether they are selected
        
        
        /*! Abstract View Implementation Data to store info from Windowing System */
        struct ViewImpl {
                        
            ViewData data;
            
            Interface * interface;            

            Camera * camera;            
            Camera& active() { return *camera; }    // Currently Active Camera
            
            // Register with Interface upon construction, create new camera
            ViewImpl(Interface * i ) : interface(i){
                camera = new Camera();
                camera -> pos(0,0,5);
            }
            
			/* Set camera size to view Size */
			void fit() { 
				camera -> width( data.w ); camera -> height( data.h ); 
			}

            // All Subclasses must define fullScreenToggle method and getData method
            virtual void fullScreenToggle() = 0;            
            virtual void getData( void * udata) = 0;
            
        };
        
        /*! Abstract Input Device Implementation */
        struct InputImpl {
            Interface * interface;
            InputImpl(Interface * i) : interface(i){} 
            // All Subclasses must define getData() method
            virtual void getData( void * udata) = 0;
        };
        
        
        Interface();
        
        virtual void init() = 0;
        void viewCalc();
        
//        ModelImpl * mimpl;
        Model * model;
        
        ViewImpl * vimpl;
        InputImpl * iimpl; // ? more than one?
        
        MouseData       mouse;
       // ViewData        view;
        KeyboardData    keyboard;
        
        ViewData& vd() { return vimpl -> data; }
        ViewData vd() const { return vimpl -> data; }
        KeyboardData& kd() { return keyboard; }
        MouseData& md() { return mouse; }

        Touchable& current();

        Camera& camera() { return vimpl -> active(); }
        
        template <class A> Vec screenCoord(const A& p);
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
        void touch( Frame& f, Frame& e, double t = 1.0);
        

        
        void windowTransform();
        void stateTransform();
        void camSpin();
        void camTranslate();
        void mvTransform();
        
        void onMouseMove();        
        void onMouseDown();
        void onMouseDrag();
        void onMouseUp(){ mouse.isDown = 0; }        
        void onKeyDown();
        void onKeyUp(){}

   //     Dll ray(){ return view.ray;      }
   //    Dll clickray(){ return view.clickray; }
        
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

        //s.color(1,1,0);
        
        //physics
        static double dt = 1;
        static double acc = .9;
        dt *= acc;
		
        if ( mouse.isDown ){
            dt = t; // Reset acc
            if ( pntClicked( x ) ) {
                cout << "clicked" << s << endl; 
                //s.select();
                select( &s );
            }
        }
        
        if (isSelected( &s )){
            xf(&s,x,dt);
            //s.select();
        }
        
    }
    
    // GENERIC METHOD
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
    
    // SPECIFIC TEMPLATED METHODS INSTANTIATIONS
//    template <> void Interface :: touch ( Vec& s, double t){ touch(s, Ro::dls(s,.5), t); }
//    template <> void Interface :: touch( Tnv& s, double t){ touch(s, Ro::dls(s,.5), t); }
//    template <> void Interface :: touch( Drv& s, double t){ touch(s, Ro::dls(s,.5), t); }
//    
//    template <> void Interface :: touch ( Pnt& s, double t) { touch(s, Ro::dls_pnt( Ro::loc(s), .2), t); }
//    template <> void Interface :: touch ( Sph& s, double t) { touch(s, s, t); }
//
//    template <> void Interface :: touch( Cir& s, double t){ touch(s, Ro::sur(s), t); }
//    template <> void Interface :: touch( Par& s, double t){ touch(s, Ro::sur(s), t); }
//
//    template <> void Interface :: touch( Lin& s, double t){ touch(s, Ro::dls_pnt( Fl::loc(s, Ori(1), 0) ), t); }
//    template <> void Interface :: touch( Pln& s, double t){ touch(s, Ro::dls_pnt( Fl::loc(s, Ori(1), 0) ), t); }
//
//    template <> void Interface :: touch( Dll& s, double t){ touch(s, Ro::dls_pnt( Fl::loc(s, Ori(1), 1) ), t); }
//    template <> void Interface :: touch( Dlp& s, double t){ touch(s, Ro::dls_pnt( Fl::loc(s, Ori(1), 1) ), t); }





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
    
    
    
    template <class A> Vec Interface :: screenCoord(const A& p){
        
        Vec sc = GL::project(p[0], p[1], p[2], camera() );
        sc[0] /= vd().w; sc[1] /= vd().h; sc[2] = 0;

        //sc[1] = 1 - sc[1]; //beware of y coordinate nuttiness
        
        return sc;
    }
    
    template <class A> bool Interface :: pntClicked( const A& x, double rad ) {
        Vec v = mouse.click;
        
        Vec p = Ro::loc(x);
        
        //Screen Coordinates of Target point
        Vec sc = screenCoord(p);
    
        Vec dist = (v - sc);
        return (dist.norm() < rad) ? true : false;
    }
    

        
    //State, Center Point, Amt
    template <class A> 
    void Interface :: xf ( A * s, const Pnt& pos, double t ) {

        //Address of State
        A& ts = *s;
        
        //Center of Defining Sphere
        Vec tv ( Ro::loc(pos) );   
        
        //cout << tv << endl; 
        
        //2D coordinates of Defining Sphere
        Vec sc = screenCoord(tv);//GL::project(tv[0], tv[1], tv[2], camera() ); 
        
        //Point in 3D space on Projection Ray closest to sphere.
        Pnt cp  = Fl::loc( vd().ray, Ro::loc(pos), 1);        
        
        switch(keyboard.code){
            case 's': //scale
            {
                //printf("scale\n");s
                Vec tm1 = mouse.pos + mouse.drag - sc;
                Vec tm2 = mouse.pos - sc; 
                
                //Drag towards or away from element
                int neg = (tm1.norm() > tm2.norm()) ? 1 : -1; 
                Tsd tsd = Gen::dil( Ro::loc(pos), mouse.drag.norm() * t );//* neg );
                //cout << tsd << endl; 
                ts = Op::sp( ts,  tsd);
                
                break;
            }
            case 'g': //translate
            {
                ts = Op::sp (ts, Gen::trs( mouse.dragCat * t ) );
                break;
            }
            case 'r': //rotate about local line
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
            case 'f': //translate
            {
                ts = Op::sp(ts, Gen::trs( mouse.dragCat * t ) );
                break;
            }
            case 'e': //rotate about local line
            {
                Dll td = pos <= Drb( mouse.dragBivCat * t );
                ts = Op::sp( ts, Gen::mot( td ) );
                break;
            }           
            case 'b': //boost by drag (not working)
            {
                Tnv tnv( mouse.dragCat );
                
                Bst pp = Gen::trv( Op::sp( tnv, Gen::trs( cp ) ) * t );
                ts = Op::sp (ts, pp);
                glPushMatrix();
				glTranslated(cp[0],cp[1],cp[2]);
				//tnv.draw();
                glPopMatrix();
                break;
            }
            case 't': // twist about global line
            {
                Dll td = Op::dl( mouse.origin ^ mouse.dragCat ^ Inf(1) );
                ts = Op::sp ( ts, Gen::mot(td) );
                break;
            }

            case 'q':
            {
                //cout << "deselect all" << endl;
                toggleSelect(s);
                break;
            }
        }
    }
    
    class Model : public Set<Touchable*> { //public Touchable {
        
    public:
        
        Interface * interface;
        
        Model(Interface * i) : interface(i) {}
        
        virtual void draw(){
            for (int i = 0; i < mData.size(); ++i){
                //mData[i]->draw();
            }
        }
        
        virtual void touch(){
             for (int i = 0; i < mData.size(); ++i){
                 //interface -> touch( mData[i] ); 
             }
        }
    };

    
    //    inline Camera Interface::camera()   { 
    
    //        Dls dls = Ro::dls(0,0,0);
//        
//        switch ( s.idx ){
//            case VEC:
//            case TNV:
//            case DRV:
//                dls = Ro::dls(s, .5);
//                break;
//            case CIR:
//            case PAR:
//                dls = Ro::sur(s);
//                break;
//            case PNT:
//                //dls = Ro::dls_vec(Vec(s), .2);
//                dls = Ro::dls_pnt( Ro::loc(s), .2);
//                break;
//            case LIN:
//            case PLN:
//                dls = Ro::dls_pnt( Fl::loc(s, Ori(1), 0) );
//                break;
//            case DLL:
//            case DLP:
//                dls = Ro::dls_pnt( Fl::loc(s, Ori(1), 1) );
//                break;			
//        }
//        
//        touch( s, dls, t);	
//    }

    
}



#endif
