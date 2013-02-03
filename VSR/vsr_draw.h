/*
 *  GLYPH.h
 *  gelatin
 *
 *  Created by x on 1/19/10.
 *  Copyright 2010 x. All rights reserved.
 *
 
	GLYPHS and DRAW COMMANDS for IMMEDIATE MODE (BUILT-IN GL PIPELINE)
        
	Immediate Mode GL Utility for drawing data
 
 */


#ifndef DRAW_H_INCLUDED
#define DRAW_H_INCLUDED

#include "vsr_op.h"
#include "vsr_frame.h"

#include "vsr_gl.h"
#include "vsr_matrix.h"
#include "vsr_glyph.h"

#include <vector>
#include <sstream>

//Macros for Near and Far -- how to draw infinite planes and lines for instance?
#define MAXLEFT  -100
#define MAXRIGHT 100
#define MAXNEAR 1
#define MAXFAR 100

using namespace std;

namespace vsr {

        namespace GL {
         	
            namespace Draw {
		
				
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
                template<> void Immediate( const Frame& );
                
                template< class A > Vec Pos(const A& s);
                template<> Vec Pos( const Vec& s);
                template<> Vec Pos( const Drv& s);
                template<> Vec Pos( const Biv& s);
                template<> Vec Pos( const Pnt& s);
                template<> Vec Pos( const Par& s);
                template<> Vec Pos( const Cir& s){ return Ro::cen( s );	}
                template<> Vec Pos( const Sph& s);
                template<> Vec Pos( const Pln& s);
                template<> Vec Pos( const Dlp& s);
                template<> Vec Pos( const Lin& s);
                template<> Vec Pos( const Dll& s);
                template<> Vec Pos( const Tnv& s);
                template<> Vec Pos( const Tnb& s);
                template<> Vec Pos( const Flp& s);
                template<> Vec Pos( const Frame& f);
                
                
                template< class A > Rot AA(const A& s);
                template<> Rot AA( const Vec& s);
                template<> Rot AA( const Drv& s);
                template<> Rot AA( const Biv& s);
                template<> Rot AA( const Pnt& s);
                template<> Rot AA( const Par& s);
                template<> Rot AA( const Cir& s){
                    Biv b = Ro::dir( s );                   
                    Rot r = Gen::ratio(Vec::z, Op::dle( b ).unit() ); 
                    return Gen::aa(r);
                }
                template<> Rot AA( const Sph& s);
                template<> Rot AA( const Pln& s){
                    Dls v = Fl::loc( s , PAO, false ); 
                    Rot r = Gen::ratio( Vec::z, Op::dle( Biv( s ) ).unit() );
                    return Gen::aa( r );
                }
                template<> Rot AA( const Dlp& s){
                    Dls v = Fl::locd( s , PAO);// true );
                    Rot r = Gen::ratio( Vec::z, Vec( s ).unit() );
                    return Gen::aa(r);
                }
                template<> Rot AA( const Lin& s);
                template<> Rot AA( const Dll& s);
                template<> Rot AA( const Tnv& s);
                template<> Rot AA( const Tnb& s);
                template<> Rot AA( const Flp& s);
                template<> Rot AA( const Frame& f);
                                
                
                void X( const Frame& f, float r=1.0, float g=1.0, float b=1.0, float a=1.0);
                void Y( const Frame& f, float r=1.0, float g=1.0, float b=1.0, float a=1.0);
                void Z( const Frame& f, float r=1.0, float g=1.0, float b=1.0, float a=1.0);
                                                
                template< class A > void Render(const A&, float, float, float,float a = 1.0);
                template< class A > void Render(const A& a) { Draw::Render(a, 1,1,1); }

//				template< class A > void Label(const A&);				
//				template< class A > Vec Coord(const A&);				
//              template< class A > void print(const A&);
         
                template<class A> void Push( const A& pos, const Rot& rot, const double& scale );
                
                template<class A> void Push( const A& pos);
                
                void PushFrame( const Frame& f);

                inline void Pop(){ glPopMatrix(); }
                
                

				
       		
		} // Draw :: 
    

//bool Draw :: bDir = 0;
//void Draw :: dir(bool b ) { bDir = b; }
    


  
template<class A>
inline void Draw::Push( const A& pos, const Rot& rot, const double& scale ){
    glPushMatrix();
        Rot t = Gen::aa(rot);  
        GL::translate(pos.w());
        GL::rotate( t.w() );
//        glTranslated(pos[0], pos[1], pos[2]);
//       glRotated(t[0], t[1], t[2], t[3]);
        glScaled(scale,scale,scale);
}

//template<class A>
//inline void Draw::Scale( const double& scale ){
//        glScaled(scale,scale,scale);
//}

template<class A>
inline void Draw::Push( const A& pos){
    glPushMatrix();
        GL::translate( pos[0], pos[1], pos[2] );//glTranslated(pos[0], pos[1], pos[2]);
}

inline void Draw::PushFrame( const Frame& f) {
    Push( f.pos() );
}

inline void Draw::X( const Frame& f, float r, float g, float b, float a) {
    Push( f.pos() ); 
    GL::scale( f.scale());
    Render(f.x(), r, g, b, a );
    Pop();
}
inline void Draw::Y( const Frame& f, float r, float g, float b, float a) {
    Push( f.pos() ); 
    GL::scale( f.scale());
    Render(f.y(), r, g, b, a );
    Pop();
}
inline void Draw::Z( const Frame& f, float r, float g, float b, float a) {
    Push( f.pos() );
    GL::scale( f.scale()); 
    Render(f.z(), r, g, b, a );
    Pop();
}
    
template <class A>
inline void Draw :: Render (const A& s, float r, float g, float b, float a){
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
    Rot t = Gen::aa( Gen::ratio( Vec::z, Op::dle( s ).unit() ) );
    
    double ta = s.norm(); 
    bool sn = Op::sn( s , Biv::xy * (-1));
    
    GL::rotate( t.w() );//glRotated(t[0], t[1], t[2], t[3]);
    
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
        		
        GL::translate ( p.w() );
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
            double t = sqrt ( fabs ( ta ) );
            bool real = size > 0 ? 1 : 0;	
            
            glPushMatrix();
            GL::translate ( p1.w() );//(p1[0], p1[1], p1[2]);
            (real) ? Glyph::SolidSphere(t, 5+ floor(t*30), 5+floor(t*30)) : Glyph::Sphere(t);	
            glPopMatrix();
            
            GL::translate ( p2.w() );
            (real) ? Glyph::SolidSphere(t, 5+ floor(t*30), 5+floor(t*30)) : Glyph::Sphere(t);	
        
        } else {
            Glyph::Point(pp[0]);
            Glyph::Point(pp[1]);
        }
}

template<> inline void Draw :: Immediate (const Cir& s){
        Biv b = Ro::dir( s );

        Rot r = Gen::ratio(Vec::z, Op::dle( b ).unit() ); 
                
        Pnt v = Ro::loc( s );	

                        
        double size = Ro::size( s, false );
        double rad = Ro::rad( s );
        Rot t = Gen::aa(r);
        
        // Get Sign 
        bool sn = Op::sn(b, Biv::xy);
        
        GL::translate(v.w());
        GL:rotate(t.w());

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
    glTranslatef(v[0],v[1],v[2]);
    glMultMatrixf(&(Gen::mat(r).col[0][0]));
    Glyph::SolidGrid();		
}

template<> inline void Draw :: Immediate (const Dlp& s){
//    Drv d = Fl::dir( s.undual() );
    Dls v = Fl::locd( s , PAO);// true );
    Rot r = Gen::ratio( Vec::z, Vec( s ).unit() );
    Rot t = Gen::aa(r);
    glTranslated(v[0],v[1],v[2]);
    glRotated(t[0], t[1], t[2], t[3]);
    Glyph::SolidGrid();
}


template<> inline  void Draw :: Immediate (const Lin& s){
    Drv d	= Fl::dir( s );
    Dls v	= Fl::loc( s , PAO, false );
    glTranslated(v[0],v[1],v[2]);
    Glyph::Line(d * 10, d * -10);	
}


template<> inline  void Draw :: Immediate (const Dll& s){
    Drv d = Fl::dir( s.undual() );
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
    Draw :: Immediate ( Biv(s) );
}

template<> inline void Draw :: Immediate (const Flp& s){
    Draw::Immediate( s.null() );
}        

template<> inline void Draw :: Immediate (const Frame& s){
    Draw :: Push( s.pos() );
        GL::scale( s.scale() );
        
        Draw :: Render ( s.x(), 1,0,0 );
        Draw :: Render ( s.y(), 0,1,0 );
        Draw :: Render ( s.z(), 0,0,1 );
    Draw :: Pop();
    
    
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
    
#define DRAW(t) vsr::GL::Draw::Render(t)    
#define DRAW3(t,r,g,b) vsr::GL::Draw::Render(t,r,g,b)    
#define DRAW4(t,r,g,b,a) vsr::GL::Draw::Render(t,r,g,b,a)    

} //vsr::
#endif
