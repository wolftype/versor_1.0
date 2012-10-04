/*
 *  GLYPH.cpp
 *  gelatin
 *
 *  Created by x on 1/19/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#include "op.h"
#include "Draw.h"
//
//#include "Camera.h"
//#include "Pnt_Dll.h"

namespace vsr {



/*
void Draw :: SegTo(const Cir& K, double st, double t, int res){
    
    Rot roff = Gen::rot_biv_ang(Biv::xy, st);
    //Vec4<> r4 = Op::aa(roff);  
    //cout << roff << endl; 
    //ORIENTATION
    Biv b = Biv(Ro::dir(K,false));							//Extract Euclidean Bivector
    Rot r = Gen::ratio(Vec::z, Op::dle( b ).unit() );// * roff;	//Determine Orientation
    Vec4<> v4 = Geqn::aa(r);  
    
    //POINT POSITION AND RADIUS
    Pnt v = Ro::cen(K);                                 //Center of Circle
    double siz = Ro::size(K,false);                            //Squared Radius
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
	Biv bi = Biv(Ro::dir(K));							//Extract Euclidean Bivector
	Rot r = Gen::ratio(Vec::z, Op::dle( bi ).unit() );	//Determine Orientation
	Pnt v = Ro::cen(K);			
	Vec4<> v4 = Gen::aa(r);
	double siz = Ro::size(K,false);
	double rad = Ro::rad(K);
	bool sn = Op::sn(bi, Biv::xy);

	Dlp da = ( a^Inf(1) ) <= K;
	da = da.unit();
	Dlp db = ( b^Inf(1) ) <= K;
	db = db.unit();
	Dlp dy = Ro::noon(K);
	dy = dy.unit();
	
	double t1 = ( da <= dy)[0];
	double t2 = ( db <= dy)[0];
	
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
    
    cen = Ro::loc(K);
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
    */
    
    
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
	
//void Draw :: N (const State&) {
//
//}
//	
//void Draw :: S (const State& s){
//    S(s,1,1,1);
//}

//Sta Draw::statest() { return Sta(); }





//State Draw :: pos(const State& s){
//
//	switch(s.idx()){
//
//		case _PNT:
//		case _CIR:
//		case _PAR:
//		case _SPH:
//		{	
//			return Ro::loc(s);							
//			break;
//		}	
//		case _FLP:
//		case _LIN:
//		case _PLN:
//		{
//			Sph v   = Fl::loc( s , Ori(1), false  );
//			return Op::dl(v);
//			break;
//		}
//		case _DLL:
//		case _DLP:
//		{
//			Sph v   = Fl::loc( s , Ori(1), true );
//			return Op::dl(v);
//			break;
//		}	
//	}
//}


/*
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

//#include "vsr_instantiation.cpp"

} //GA::