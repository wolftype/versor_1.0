//
//  optics.h
//  vsr
//
//  Created by Pablo Colapinto on 5/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_optics_h
#define vsr_optics_h

#include "vsr.h"

namespace vsr {
    
//    struct Ray : public Dll {
//        void drawFor( double d ) {
//            
//            Glyph::Line( 
//        }
//    };
    
    //double
    struct OpticalSurface {
        
        OpticalSurface( double r = 1.5, Cir c = CXY(1) ) : ridx(r), cir(c), convex(true) {}

        void set( double r, Cir c, bool con) { ridx = r; cir = c; convex = con; }
        bool convex;
        
        Cir cir ;    ///
        
        void reset(double size = 1) {  cir = CXY(size); }
        
        double theta;  ///< part of circle that is 'active'
        
        double ridx; ///< Refraction Index
        //double grad; ///< Gradient Index
        
        /// Meet of ray and circle (entrance point)
        Pnt meet(const Dll& ray) {
            Par p = (ray ^ Ro::sur( cir ) ).dual();
            return (convex) ? Ro::split2(p) : Ro::split1(p);
        }
        
        
        /// Meet of Curved ray 
        Pnt meet( const Cir& c ){
            
            Biv  b1 = Ro::dir(c, false);
            Biv  b2 = Ro::dir(cir, false);
                        
            bool sign = Op::sn( b1, b2); 

            
            Cir tc = Ro::sur(c) ^ cir.dual();//( Ro::car ( ( Ro::sur(c) ^ Ro::sur(cir) ).dual() ) ).dual() ^ cir.dual();
            
            return ( (convex && sign) || (!convex && !sign) ) ? Ro::split2( tc.dual() ) : Ro::split1( tc.dual() ) ;
                        
//            return (convex || !sign ) ? Ro::split2( tc.dual() ) : Ro::split1( tc.dual() ) ;
        }
        
        /// Split Meet of Curved Ray (decide which point to use later)
        vector<Pnt> meet2( const Cir& c ){
            Cir tc = Ro::sur(c) ^ cir.dual();//( Ro::car ( ( Ro::sur(c) ^ Ro::sur(cir) ).dual() ) ).dual() ^ cir.dual();
            return Ro::split( tc.dual());
        }
        
        bool hit(const Dll& ray){
            Par s = ( ray ^ Ro::sur(cir) ).dual();
            double t =  Ro::siz( s, true );
            //cout << s << t << endl; 
            return ( t <= 0 ) ? true : false;
        }

        bool hit(const Cir& c){
            Cir s = ( Ro::sur(c) ^ Ro::sur(cir) ).dual();
            double t =  Ro::siz( s, false );
            //cout << s << t << endl; 
            return ( t >= 0 ) ? true : false;
        }
        
        

    

        /// Tangent of incoming light ray's reflection at meet
        Par tangent( const Dll& ray){
            return Ta::at( ray.re(cir),  meet(ray), true );
        }
        
        /// Tangent of incoming curved light ray
        Par tangent (const Cir& c){
            return Ta::at( c.re(cir), meet(c), false);
        }
        
        /// Reflection of a Straight Ray
        Dll reflect (const Dll& ray) {
            return ( tangent(ray) ^ Inf(1) ).dual();
        }

        /// Reflection of a Circle (straight ray output)
        Dll reflect (const Cir& c) {            
            return ( tangent(c) ^ Inf(1) ).dual();
        }
        
        /// Tangent Line on Surface at Meet of Ray
        Dll tanline( const Dll& ray) {
            return ( Ta::at( cir, meet(ray), false ) ^ Inf(1) ).dual();
        }

        /// Tangent Line on Surface at Meet of Circle
        Dll tanline( const Cir& c) {
            return ( Ta::at( cir, meet(c), false ) ^ Inf(1) ).dual();
        }       
        
        Dll refract (const Dll& ray, bool exit = false) {
            Dll nray = ray;
            if (exit) nray = ray.conjugate();
            //Line TANGENT To Circle AT MEET POINT
            Dll tan = tanline( nray );
            //Ratio between line tangent and incoming ray
            Dll rat = Gen::dll_ratio( tan, nray );
            
            //half Angle Between Tangent and incoming ray
            double norm = rat.rnorm();

            if ( norm > PI/4.0 ) {
                tan = tan.conjugate();
                rat = Gen::dll_ratio( tan, nray );
                norm = rat.rnorm();
            }
            
            //Spin Incoming Ray by ratio * refraction index
            return (exit) ? nray.mot( rat * (1-ridx) * ( PI/4.0 - norm ) ) : nray.mot( rat * (ridx-1) * ( PI/4.0 - norm ) );
        }
        
        /// Refract a circle back to a straight line by refracting the tangent line at the meet
        Dll refract(const Cir& c, bool exit = false){
            Pnt p = meet( c );
            
            return refract( Dll( (Ta::at( c, p, false ) ^ Inf(1) ).dual() ), exit );
        }
        
        /// Bend incoming straight line ray by amt (refracts the ray first by ridx, then bends it by amt)
        Cir bend (const Dll& ray, double amt ){
            
            Dll refr = refract(ray);
            Par p = tangent(ray);
            
            return Op::sp0(refr, Gen::tpar(p * -amt) ).dual();
        }
        
        /// Bend incoming curved line ray by amt (refracts the ray first by ridx, then bends it by amt)
        Cir bend (const Cir& c, double amt ){
            
            Dll refr = refract(c);
            Par p = tangent(c);
            
            return Op::sp0( refr, Gen::tpar(p * -amt) ).dual();
            //return Op::sp0( c.re(cir), Gen::tpar(p * -amt) ).dual();
        }

        /// Draw Coming Ray Meet To Pnt p
        void drawTo( const Dll& ray, const Pnt& p){
            Pnt a = meet(ray);            
            Glyph::Line( Vec(a), Vec(p) );
        }
        
    
    };
    
    //3d extrapolation
    struct OptSurf {
        
        OptSurf ( double r = 1.5, Dls s = Ro::dls3(0,0,0) ) : ridx(r), dls(s), rad(1), convex(true) {}
        
        void set( double r, Dls s, bool con) { ridx = r; dls = s; convex = con; }
        bool convex;
        
        Dls dls ;    ///
        
        double rad;
        
        void reset() {  dls = Ro::dls3(0,0,0,rad); }
        
        double theta;  ///< part of circle that is 'active'
        
        double ridx; ///< Refraction Index
        //double grad; ///< Gradient Index
        
        /// Meet of ray and circle (entrance point)
        Pnt meet(const Dll& ray) const {
            Par p = (ray ^ dls ).dual();
            return (convex) ? Ro::split2(p) : Ro::split1(p);
        }
        
        
        /// Meet of Curved ray (pre-split) 
        Pnt meet( const Cir& c ) const{
            
            Cir tc = c.dual() ^ dls; 
            
            return convex ? Ro::split1( tc.dual() ) : Ro::split2( tc.dual() ) ;
            
        }
        
        /// Meet of Curved Ray (split and decide which point to use later, or use for tangent)
        Par meet2( const Cir& c ) const{
            Cir tc = c.dual() ^ dls; 
            return ( tc.dual());
        }
        
        bool hit(const Dll& ray) const{
            Par s = ( ray ^ dls ).dual();
            double t =  Ro::siz( s, true );
            return ( t <= 0 ) ? true : false;
        }
        
        bool hit(const Cir& c) const{
            Cir s = ( c.dual() ^ dls );
            double t =  Ro::siz( s, false );
            //cout << s << t << endl; 
            return ( t <= 0 ) ? true : false;
        }
        
        
        /// Tangent of incoming light ray's reflection at meet
        Par tangent( const Dll& ray) const{
            return Ta::at( ray.re(dls),  meet(ray), true );
        }
        
        /// Tangent of incoming curved light ray
        Par tangent (const Cir& c) const{
            return Ta::at( c.re(dls), meet(c), false);
        }
        
        /// Reflection of a Straight Ray
        Dll reflect (const Dll& ray) const {
            return ( tangent(ray) ^ Inf(1) ).dual();
        }
        
        /// Reflection of a Circle (straight ray output)
        Dll reflect (const Cir& c) const {            
            return ( tangent(c) ^ Inf(1) ).dual();
        }
        
        /// Tangent Line on Surface at Meet of Ray
        Dll tanline( const Dll& ray) const {
//            Par p = meet2(ray);
            return Ro::ax( Ta::at( dls, meet(ray), true ) ); //.dual() ^ Inf(1) ).dual();
        }
        
        /// Tangent Line on Surface at Meet of Circle
        Dll tanline( const Cir& c) const {
            return ( Ta::at( dls, meet(c), true ) ^ Inf(1) ).dual();
        }       
        
        Dll refract (const Dll& ray, bool exit = false) const {
            Dll nray = ray;
            if (exit) nray = ray.conjugate();
            //Line TANGENT To Circle AT MEET POINT
            Dll tan = tanline( nray );
            //Ratio between line tangent and incoming ray
            Dll rat = Gen::dll_ratio( tan, nray );
            
            //half Angle Between Tangent and incoming ray
            double norm = rat.rnorm();
            
            if ( norm > PI/4.0 ) {
                tan = tan.conjugate();
                rat = Gen::dll_ratio( tan, nray );
                norm = rat.rnorm();
            }
            
            //Spin Incoming Ray by ratio * refraction index
            return (exit) ? nray.mot( rat * (1-ridx) * ( PI/4.0 - norm ) ) : nray.mot( rat * (ridx-1) * ( PI/4.0 - norm ) );
        }
        
        /// Refract a circle back to a straight line by refracting the tangent line at the meet
        Dll refract(const Cir& c, bool exit = false) const {
            Pnt p = meet( c );
            
            return refract( Dll( (Ta::at( c, p, false ) ^ Inf(1) ).dual() ), exit );
        }
        
        /// Bend incoming straight line ray by amt (refracts the ray first by ridx, then bends it by amt)
        Cir bend (const Dll& ray, double amt ) const {
            
            Dll refr = refract(ray);
            Par p = tangent(ray);
            
            return Op::sp0(refr, Gen::tpar(p * -amt) ).dual();
        }
        
        /// Bend incoming curved line ray by amt (refracts the ray first by ridx, then bends it by amt)
        Cir bend (const Cir& c, double amt ) const {
            
            Dll refr = refract(c);
            Par p = tangent(c);
            
            return Op::sp0( refr, Gen::tpar(p * -amt) ).dual();
            //return Op::sp0( c.re(cir), Gen::tpar(p * -amt) ).dual();
        }
        
        /// Draw Coming Ray Meet To Pnt p
        void drawTo( const Dll& ray, const Pnt& p){
            Pnt a = meet(ray);            
            Glyph::Line( Vec(a), Vec(p) );
        }
        
        void draw(){
            dls.draw(1,0,0,.2);
        }

    };
    
    
    struct Lenz : public Frame {
        
        OptSurf os[2];
        OptSurf& operator[] (int idx) { return os[idx]; }
        OptSurf operator[] (int idx) const { return os[idx]; }
        
        Pnt pa, pb;  //enter and exit points (tmp)
        Cir bend;   //circle bend through (tmp)
        Cir meet;   //circle meet of surfaces;
        
        double mDist, mGrad, mRatio;
        
        bool gradient; ///simple circle gradient for now
        
        enum Type {
            Biconvex, PlanoConvex, PositiveMeniscus, NegativeMeniscus, PlanoConcave, Biconcave, Gradient
        };
        
        Type type;
        
        
        Lenz ( Type s = Biconvex, bool g = false) : type(s), gradient(g), mDist(1), mGrad(0) { position(); }
  
        Lenz( const Frame& f ) : type(Biconvex), gradient(0), mGrad(0), mDist(1) {
            set(f);
        }
      Lenz( const Frame& f, float r, float g, float dist, float rat ) : type(Biconvex), gradient(0), mGrad(0), mDist(1) {
        set(f,r,g,dist,rat);
    }      
        Lenz& set( const Frame& f){
            pos() = f.pos();
            rot ( f.rot() );
            mScale = f.scale();
            position();
            return *this;
        }
        Lenz& set( const Frame& f, float r, float g, float dist, float rat){
            ridx(r);
            mGrad = g;
            mDist = dist;
            pos() = f.pos();
            rot ( f.rot() );
            mScale = f.scale();
            
            ratio(rat);
            position();
            return *this;
        }   
        Lenz& set( float r, float g, float dist, float rat) {
            ridx(r);
            mGrad = g;
            mDist = dist;
            
            ratio(rat);
            position();
            return *this;      
        }
                  
        void ridx( double f) { os[0].ridx = f; os[1].ridx = f; }
        
        void dist ( double d ) { mDist = d; position(); }
        
        void ratio( double r2 = 1.0) { os[0].rad = mScale; os[1].rad = r2  * mScale; position(); }
        
        void position(){
            switch (type){
                case Biconvex:
                {
                    //enter().reset(); exit().reset();
                    
                    double r1 = os[0].rad;
                    double r2 = os[1].rad;
                    
                    os[1].convex = false;
                    
                    os[0].dls = Ro::dls(pos(), r1).trs( x() * (r1 - mDist/2.0) );
                    os[1].dls = Ro::dls(pos(), r2).trs( x() * ( -r2 + mDist/2.0) );
                    
                    meet = (os[0].dls ^ os[1].dls).dual();
                    
                    break;
                }
                    
                case PlanoConvex:
                {
                    break;   
                }
                case PositiveMeniscus:
                    break;
                case NegativeMeniscus:
                    break;
                case PlanoConcave:
                    break;
                case Biconcave:
                    
//                    double r1 = Ro::rad(enter().cir);
//                    double r2 = Ro::rad(exit().cir);
//                    enter().cir = enter().cir.trs( -r1 - (dist/2.0), 0, 0 ) ;
//                    exit().cir = exit().cir.trs( r2 + dist/2.0, 0, 0 ) ;
                    break;
                default:
                    break;
            }
        }
        
        
//        Dll pathIn(const Dll& ray){
//            return os[0].refract(ray);
//        }
//        
//        Dll pathOut(const Dll& ray){
//            return os[1].refract(ray, true);
//        }
        
        void draw(int res = 5){
            //Par pm = (os[0].dls ^ os[1].dls);
            Cir cm = meet;//pm.dual();
            
            Dlp dlp = Ro::car(cm).dual();
            Vec vec = dlp.unit();
            
            IT1(res)
//                Dlp tdlp = dlp.mot( yld() * t * PI );
//                Cir ca = (tdlp ^ os[0].dls).dual();
//                Cir cb = (tdlp ^ os[0].dls).dual();
//                Par pp = (tdlp ^ pm).dual();
//                pp.draw();
//                vector<Pnt> sp = Ro::split(pp);
//                Draw::SegPnts( ca, sp[0], sp[1] );
//                Draw::SegPnts( cb, sp[1], sp[0] );
            
                    Dlp ndlpa = dlp.trs((vec) * ( -mDist/2.0 *  t ) );
                    Cir ca = (ndlpa ^ os[0].dls ).dual();
                    Dlp ndlpb = dlp.trs((vec) * ( mDist/2.0 * t ) );
                    Cir cb = (ndlpb ^ os[1].dls ).dual();
                    if (Ro::siz(ca, false ) > 0 ) ca.draw();
                    if (Ro::siz(cb, false ) > 0 ) cb.draw();
           
            END 
            
            
            cm.draw();
            
            
        }
        
        void drawMeet(){
            meet.draw(0,0,0);
        }
        
        void drawLeft(){
//            Draw::SegPnts( 
        }
        
        void drawPath(){
            Glyph::Line( Vec(pa), Vec(pb) );
        }
        
        void drawBend(){
            Draw::SegPnts(bend, pa, pb);
        }
        
        /// Calculate straight path 
        Dll path(const Dll& ray) {
            
            pa = os[0].meet(ray);
            Dll bray = os[0].refract(ray);
            
            pb = os[1].meet(bray);
            return os[1].refract(bray, true);
        }
        
        /// Calculate curved path and return straight line out
        Dll curve(const Dll& ray) {
            pa = os[0].meet(ray);
            bend = os[0].bend(ray, mGrad);
            
            pb = os[1].meet(bend);
            return os[1].refract(bend, true);
        }   
        
    };
    
    //trajectory of light ray through a lens
    struct Trajectory{
    
//        //Circle Segment
//        struct Seg {
//            Seg(int idx) : id(idx) {}
//            const int id;
//            vector<State> states;
//        };
        
        struct CirSeg  {
            CirSeg(const Cir& c, const Pnt& _pa, const Pnt& _pb) : cir(c), pa(_pa), pb(_pb){}
            Cir cir;
            Pnt pa, pb;
         
        };
        struct LinSeg  {
            LinSeg(const Pnt& _pa, const Pnt& _pb) : pa(_pa), pb(_pb){}
            Pnt pa, pb;
        };
    
        bool bMet = 0;
        
        vector<Pnt> pnt;
        vector<Dll> dll;
        vector<LinSeg> refseg;
        vector<LinSeg> linseg;
        vector<CirSeg> cirseg;
        //vector<Seg*> seg;
        
//        void draw(){
//            ITJ(i,seg.size())
//                switch( seg[i] -> id ){
//                    case _CIR:
//                    Draw::SegPnts(seg[i] -> states[0], seg[i] -> states[1], seg[i] -> states[2] );
//                     break;
//                    case _LIN:
//                    Glyph::Line( Vec( seg[i] -> states[0] ), Vec ( seg[i] -> states[1] ) );
//                    break;
//                }
//            END
//        }
        void draw(){
            int it = 0;
            ITJ(i,cirseg.size())
                Glyph::Line( Vec( linseg[i].pa ), Vec (linseg[i].pb ) );
                Draw::SegPnts( cirseg[i].cir, cirseg[i].pa, cirseg[i].pb );
                it++;
            END 
            if (bMet) Glyph::Line( Vec( linseg[it].pa), Vec( linseg[it].pb ) );
            
            ITJ(i,refseg.size())
                Glyph::Line( Vec( refseg[i].pa ), Vec (refseg[i].pb) );
            END
        }
        
        void print(const Camera& cam){
            string s = Print::Begin();
            int it = 0;
            ITJ(i,cirseg.size())
                s += Print::PlotBegin(1, false);
                s += Print::CircleSeg( cirseg[i].cir, cirseg[i].pa, cirseg[i].pb, cam ); 
                s += Print::PlotEnd();
              //  s += Print::PlotBegin(0, false);
                s += Print::Line( linseg[i].pa, linseg[i].pb, cam );
              //  s += Print::PlotEnd();
                it ++;
            END
                s += Print::Line( linseg[it].pa, linseg[it].pb, cam );
                
            s += Print::End();
            
            cout << s << endl;
            
        }
        
        void printReflections(const Camera& cam){
            string s = Print::Begin();
             ITJ(i,refseg.size())
                s += Print::Line( ( refseg[i].pa ), (refseg[i].pb), cam );
            END
            s += Print::End();
        }
            
//        void calc( const Pnt& start, const Dll& d, Lenz& lens){
//            
//        }
        
        
        void calc(const Pnt& start, const Dll& d, Lenz * lens, int num, Dlp end){
            
            Dll rray;
            Dll oray = d;
            Pnt pos = start;
            Pnt npos, rpos;
            Vec dpos;
            
            bool * bVisited = new bool[num];
            
            double x = start[0];

            bool meet = true;
            bool evermet = false;
            int max = 100; int it = 0;
            
            
            while ( meet && (it < max) ) {
            
                it++;
                meet = false;
                int idx = 0; double dist = 10000;
                
                ITJ(j, num )
                
                if (bVisited[j]) continue;              // have we already visited this lens?
                
                if ( lens[j][0].hit( oray ) ) {
                    
                    Pnt p = lens[j][0].meet( oray );
                    bool valid = ( Op::sca( p <= Ro::sur( lens[j].meet) ) > 0 ) ? 1 : 0; 
                    
                    if ( valid && p[0] > x ) {
                        meet = true;
                        double a = sqrt( fabs( Op::sca( start <= p ) ) );
                        if (a < dist) { dist = a; idx =j; } 
                    }
                }
                END 
                
                if (meet ) {
                    
                    bVisited[idx] = true;
                    rray = lens[idx][0].reflect(oray);
                    
                    oray = lens[idx].curve(oray);                       //curve and spit out new ray
                    npos = lens[idx].pa; x = lens[idx].pb[0];
                    //rpos = Ro::split1( ( rray ^ lens[idx].bound().dils(1.5) ).undual() );
                    dpos = Vec( Fl::dir( rray, true ) );
                    //Add Circle to List
                    refseg.push_back( LinSeg(npos, npos - dpos) );
                    linseg.push_back( LinSeg(pos, npos) );                    
                    cirseg.push_back( CirSeg( lens[idx].bend, lens[idx].pa, lens[idx].pb) );
                    
                    pos = lens[idx].pb;
                   // if (idx == num-1) bMet = true;
                }
            
            }
            
            if (bMet){
                npos = Ro::dll_meet_dlp(oray, end);
                linseg.push_back( LinSeg(pos, npos) );
            }
            
            if (bVisited) delete[] bVisited;
        }
    };
    
    /*! Two Optical Surfaces */
    struct Lens {
        
        OpticalSurface os[2];// enter, exit;
        
        OpticalSurface& enter() { return os[0]; }
        OpticalSurface& exit() { return os[1]; }
        OpticalSurface& operator[] (int idx) { return os[idx]; }
        OpticalSurface operator[] (int idx) const { return os[idx]; }
        
        //temp
        Pnt pa, pb;
        Pnt ma, mb; ///< Meet
        Cir bend;
        
        double dist, grad;
        
        bool gradient; ///simple circle gradient for now
        
        enum Type {
            Biconvex, PlanoConvex, PositiveMeniscus, NegativeMeniscus, PlanoConcave, Biconcave, Gradient
        };
        
        Type type;
        
        
        Lens ( Type s = Biconvex, bool g = false) : type(s), gradient(g), dist(.5), grad(0) { position(); }
        
        void ridx( double f) { enter().ridx = f; exit().ridx = f; }
        
        
        Lens& trs( const State& s ) {
            position();
            ITJ(i,2) os[i].cir = os[i].cir.trs( s ); END 
            structure();
        }
        
        
        
        void position(){
            switch (type){
                case Biconvex:
                {
                    enter().reset(); exit().reset();
                    double r1 = Ro::rad(enter().cir);
                    double r2 = Ro::rad(exit().cir);
                    exit().convex = false;
                    enter().cir = enter().cir.trs( r2 - (dist/2.0), 0, 0 ) ;
                    exit().cir = exit().cir.trs(  -r1 + dist/2.0, 0, 0 ) ;
                    structure();
                    break;
                }
                case PlanoConvex:
                {
                 break;   
                }
                case PositiveMeniscus:
                    break;
                case NegativeMeniscus:
                    break;
                case PlanoConcave:
                    break;
                case Biconcave:
                    double r1 = Ro::rad(enter().cir);
                    double r2 = Ro::rad(exit().cir);
                    enter().cir = enter().cir.trs( -r1 - (dist/2.0), 0, 0 ) ;
                    exit().cir = exit().cir.trs( r2 + dist/2.0, 0, 0 ) ;
                    break;
                    break;
            }
        }
        
        //get meet points of lens surfaces
        void structure(){
            vector<Pnt> p = Ro::split( Ro::meet_cir( os[0].cir, os[1].cir ) );
            ma = p[0]; mb = p[1];
        }
        
        Dll pathIn(const Dll& ray){
           return enter().refract(ray);
        }

        Dll pathOut(const Dll& ray){
            return exit().refract(ray, true);
        }
        
        void draw(){
            //os[0].cir.draw(); os[1].cir.draw();
            ma.draw(0,1,0);
            mb.draw(0,1,0);
            Draw::SegPnts( os[0].cir, ma, mb);
            Draw::SegPnts( os[1].cir, ma, mb);
        }
        
        void drawPath(){
            Glyph::Line( Vec(pa), Vec(pb) );
        }

        void drawBend(){
            Draw::SegPnts(bend, pa, pb);
        }
        
        /// Calculate straight path 
        Dll path(const Dll& ray) {
            
            pa = enter().meet(ray);
            Dll bray = enter().refract(ray);
            
            pb = exit().meet(bray);
            return exit().refract(bray, true);
        }
        
        /// Calculate curved path and return straight line out
        Dll curve(const Dll& ray) {
            pa = enter().meet(ray);
            bend = enter().bend(ray, grad);
            
            pb = exit().meet(bend);
            return exit().refract(bend, true);
        }
    };
    
    
    
    
} //vsr::

//  OLD NOTES FROM SCRATCH:

//    glColor3f(1,0,0);
//    
//        Dll ray = DLN(1,0,0).trs(0,2*t,0);   //ray = ray.conjugate();         
//        Pnt pa = Ro::null ( ( ray.conjugate() ^ Dlp(1,0,0).trs(-2,0,0) ).dual().runit() );
//        
//        Pnt pb = lens.meet( ray );
//        
//        Glyph::Line(Vec(pa), Vec(pb));
//        if (i == 0 ) cpb = pb;
//        cpa = pb;
//    
//    glColor3f(0,1,0);
//        Dll nd = lens.refract( ray );
//        //nd = nd.conjugate();
//        Glyph::Line(Vec(pb), Vec( lens2.meet(nd) ) );
// 
//    glColor3f(0,1,1);
//    
//        Dll nd2 = lens2.refract( nd, true );
//        Pnt pout = Ro::null ( ( nd2.conjugate() ^ Dlp(1,0,0).trs(2,0,0) ).dual().runit() ) ;
//        Glyph::Line(Vec( lens2.meet(nd) ) , Vec( pout ) );


////

//        Cir nl = lin.re( c );
//        //nl.draw();
//    
//        //MEET BETWEEN LINE AND SURROUNDING SPHERE
//        Cir tc = lin.dual() ^ Ro::sur(c);
//        //tc.dual().draw(1,0,0);
//        Pnt tp = Ro::split1(tc.dual());
//    
//        //Line TANGENT AT MEET POINT
//        Lin nor = Ta::at(c, tp,0) ^ Inf(1);  //Drv d = Fl::dir(nor,0); d.draw();
//        //Ratio between line tangent and incoming ray
//        Dll dll = Gen::dll_ratio( nor.dual(), lin.dual() );
//        //half Angle Between Tangent and incoming ray
//        double norm  = dll.rnorm() ;
//    
//        if ( dll.rnorm() > PI/4.0 ) {    
//            Dll td = nor.dual().conjugate();
//            dll = Gen::dll_ratio( td , lin.dual() );
//            norm = dll.rnorm();
//        }



//Spin Tangent by amount * refraction index
//Lin refraction = lin.mot(dll*(ref-1)*(PI/4.0 -norm));


//        refraction.draw(0,1,0);

//        //REFLECTION OF LIGHT RAY IS TANGENT TO ITS INVERSION IN CIRCLE (Seems to me anyway)
//        Par tan = Ta::at(nl, Ro::null(tp),0);
//        Lin reflection = tan ^ Inf(1);

//reflection.draw(0,0,1);

#endif
