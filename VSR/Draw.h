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
#include "Glyph.h"

//Macros for Near and Far -- how to draw infinite planes and lines for instance?
#define MAXLEFT  -100
#define MAXRIGHT 100
#define MAXNEAR 1
#define MAXFAR 100

using namespace std;

namespace vsr {

        namespace GL {
         	
            namespace Draw {
		
						
				 void Seg(const Cir&, double t, bool dir = 1, int res = 20);
                 void SegOff(const Cir& K, double t, double off, bool dir = 1, int res = 20);
                 void SegRad( const Cir& );
                 void SegTo(const Cir&, double st, double t, int res = 20);
				 void Seg2(const Cir&, const Pnt&, const Pnt&, int res = 20);
                 void SegPnts(const Cir& K, const Pnt& a, const Pnt& b, int res = 20);
				
				/* Draw Elements In Immediate Mode */
                template< class A > void Immediate( const A& );
                template<> void Immediate( const Vec& );
                template<> void Immediate( const Drv& );
                template<> void Immediate( const Biv& );
                template<> void Immediate( const Pnt& );
                template<> void Immediate( const Par& );
                template<> void Immediate( const Cir& );
                template<> void Immediate( const Sph& );
                template<> void Immediate( const Pln& );
                template<> void Immediate( const Dlp& );
                template<> void Immediate( const Lin& );
                template<> void Immediate( const Dll& );
                template<> void Immediate( const Tnv& );
                template<> void Immediate( const Tnb& );
                template<> void Immediate( const Flp& );

                                                
                template< class A > void Render(const A&, float, float, float,float a = 1.0);
                template< class A > void Render(const A& a) { Draw::Render(a, 1,1,1); }

//				static void Label(const State&);				
//				static void Label(const State&, Scene&);
//				static void Label(const State&, Scene&, const std::string&, int ofx = 15, int ofy = 15);
				
//				static void N(const State&);				
//				static void MV(const State&, int style);
//				static State pos(const State&);				
//				static void clickTest(State& s, double x, double y, double z);
//				static Vec  screenCoord(const State& s );

                template<class A> void Push( const A& pos, const Rot& rot, const double& scale );
                
                template<class A> void PushPosition( const A& pos);

                inline void Pop(){ glPopMatrix(); }

				
		//void drawLabel(double, double, double);
		//virtual void drawLoop();
		//virtual void clickTest(double,double);
		//void printPS();
		
		} // Draw :: 
    

//bool Draw :: bDir = 0;
//void Draw :: dir(bool b ) { bDir = b; }
    
inline void Draw :: SegRad( const Cir& k){
    Seg( k, TWOPI * Ro::cur(k) );
}

inline void Draw :: Seg(const Cir& K, double t, bool dir, int res){

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
inline void Draw :: SegOff(const Cir& K, double t, double off, bool dir, int res){

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
inline void Draw::Push( const A& pos, const Rot& rot, const double& scale ){
    glPushMatrix();
        Vec4<> t = Gen::aa(rot);
        glTranslated(pos[0], pos[1], pos[2]);
        glRotated(t.w,t.x,t.y,t.z);
        glScaled(scale,scale,scale);
}

template<class A>
inline void Draw::PushPosition( const A& pos){
    glPushMatrix();
        glTranslated(pos[0], pos[1], pos[2]);
}
    
template <class A>
inline inline void Draw :: Render (const A& s, float r, float g, float b, float a){
	glPushMatrix();	
    glColor4f(r,g,b,a);
    
    Draw :: Immediate(s);
    
    glPopMatrix();
}
    

//template<class A> void Draw::S( const A& s, float r, float g, float b, float a) { cout << "no draw routine found for " << endl; }

//template<> void Draw::S( const Pnt_Dll& a) { cout << "no draw routine found for " << endl; }

template<class A> inline void Draw :: Immediate (const A& s){
   // cout << "generic draw: " << s.id << endl; 
    switch ( s.id ){
        case VEC:
            Immediate( *((Vec*)&s) );
            break;
        case DRV:
            Immediate( *((Drv*)&s) );
            break;
        case BIV:
            Immediate( *((Biv*)&s) );
            break;
        case PNT:
            Immediate( *((Pnt*)&s) );
            break;
        case CIR:
            Immediate( *((Cir*)&s) );
            break;
        case LIN:
            Immediate( *((Lin*)&s) );
            break;
        case DLL:
            Immediate( *((Dll*)&s) );
            break;
        case SPH:
            Immediate( *((Sph*)&s) );
            break;
        case PAR:
            Immediate( *((Par*)&s) );
            break;
    }
}

template<> inline void Draw :: Immediate (const Vec& s){
    Glyph::Dir( s);
}

template<> inline void Draw :: Immediate (const Drv& s){
    Glyph::Arr( s, 1 );
}

template<> inline void Draw :: Immediate (const Biv& s){
    Vec4<> t = Gen::aa( Gen::ratio( Vec::z, Op::dle( s ).unit() ) );
    
    double ta = s.norm(); 
    bool sn = Op::sn( s , Biv::xy * (-1));
    
    glRotated(t.w, t.x, t.y, t.z);
    
    Glyph::DirCircle(ta, sn);
}

template<> inline void Draw :: Immediate (const Pnt& s){
    //cout << s.id << endl; 
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

template<> inline void Draw :: Immediate (const Par& s){
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

template<> inline void Draw :: Immediate (const Cir& s){
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

        bool bDir = 0;
        if (bDir) {im ? Glyph::DirCircle(rad,sn) : Glyph::DirDashedCircle(rad,sn);}
        else { im ? Glyph::Circle(rad) : Glyph::DashedCircle(rad);}

}

template<> inline void Draw :: Immediate (const Sph& s){
   
    Dls ts = Op::dl( s );
    Pnt p = Ro::cen(ts);
    Glyph::Point(p);
                
    double st = Ro::size( ts, true );
    double t = sqrt ( fabs ( st ) );;
    bool real = st > 0 ? 1 : 0;			
    glTranslatef(p[0], p[1], p[2]);
    real ? Glyph::SolidSphere(t,20,20) : Glyph::Sphere(t,20,20);
}
		

template<> inline void Draw :: Immediate (const Pln& s){
//    Drv d	= Fl::dir( s );
    Dls v = Fl::loc( s , PAO, false ); //Sph?
    Rot r = Gen::ratio( Vec::z, Op::dle( Biv( s ) ).unit() );
    glTranslated(v[0],v[1],v[2]);
    glMultMatrixd(&(Gen::mat(r)[0][0]));
    Glyph::SolidGrid();		
}

template<> inline void Draw :: Immediate (const Dlp& s){
//    Drv d = Fl::dir( s.undual() );
    Dls v = Fl::locd( s , PAO);// true );
    Rot r = Gen::ratio( Vec::z, Vec( s ).unit() );
    Vec4<> t = Gen::aa(r);
    glTranslated(v[0],v[1],v[2]);
    glRotated(t.w, t.x, t.y, t.z);
    Glyph::SolidGrid();
}


template<> inline  void Draw :: Immediate (const Lin& s){
    Drv d	= Fl::dir( s );
    Dls v	= Fl::loc( s , PAO, false );
    glTranslated(v[0],v[1],v[2]);
    Glyph::Line(d * 10, d * -10);	
}


template<> inline  void Draw :: Immediate (const Dll& s){
    Drv d = Fl::dir( s );
    Dls v = Fl::loc( s , PAO, true);
    glTranslated(v[0],v[1],v[2]);
    Glyph::DashedLine(d * 10, d * -10);	
}


template<> inline void Draw :: Immediate (const Tnv& s){
    Glyph::DashedLine( s );
    glTranslated(s[0], s[1], s[2]);
    Glyph::SolidSphere(.1,5,5);
}

template<> inline void Draw :: Immediate (const Tnb& s){
//    Biv b(s); b.draw(0,0,1,.5);
}

template<> inline void Draw :: Immediate (const Flp& s){
//    s.null().draw(r,g,b,a);
}        



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

    } //GL::
    

} //vsr::
#define DRAW(t) vsr::GL::Draw::Render(t)    
#define DRAW3(t,r,g,b) vsr::GL::Draw::Render(t,r,g,b)    
#define DRAW4(t,r,g,b,a) vsr::GL::Draw::Render(t,r,g,b,a)    
#endif
