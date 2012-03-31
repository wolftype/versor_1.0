//
//  Interface.cpp
//  vsr
//
//  Created by Pablo Colapinto on 3/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Interface.h"


namespace vsr {


    //DEFAULT IS NAVIGATION AND SELECTION MODES
    Interface :: Interface()  : mMode( Mode::Navigate | Mode::Select ){
        model = new Model(this);
    }
    
    State& Interface :: state()  { return model -> active(); }
    
    void Interface :: ui( State& s, double t){
        
        Dls dls;
        
        switch ( s.idx() ){
            case _VEC:
            case _TNV:
            case _DRV:
                dls = Ro::dls_vec(s, .3);
                break;
            case _CIR:
            case _PAR:
                dls = Ro::sur(s);
                break;
            case _PNT:
                dls = Ro::dls_vec(Vec(s), .2);
                break;
            case _LIN:
            case _PLN:
                dls = Ro::dls_pnt( Fl::loc(s, Ori(1), 0) );
                break;
            case _DLL:
            case _DLP:
                dls = Ro::dls_pnt( Fl::loc(s, Ori(1), 1) );
                break;			
        }
        
        ui( s, dls, t);	
    }
    
    
    void Interface :: ui( State& s, State& x, double t){

        //s.color(1,1,0);
        
        //physics
        static double dt = 1;
        static double acc = .9;
        dt *= acc;
		
        if ( mouse.isDown ){
            dt = t; // Reset acc
            if ( pntClicked( x ) ) {
                s.select();
            }
        }
        
        if (s.isSelected()){
            xf(&s,x,dt);
            //s.select();
        }
        
    }
    
    void Interface :: ui( Frame& f, double t){
        
        static double dt = 5;
        static double acc = .9;
        dt *= acc;
        if ( mouse.isDown ){
            dt = t;// scene().ma() / scene().width();
            if (pntClicked ( f.pos() ) ){
                f.select();
            }
        }
        if (f.isSelected()){
            xfFrame(&f, dt);
        }
    }
    
    Vec Interface :: screenCoord(const Pnt& p){
        
        Vec sc = GL::project(p[0], p[1], p[2], camera() );
        sc[0] /= vd().w; sc[1] /= vd().h; sc[2] = 0;
        sc[1] = 1 - sc[1];
        
        return sc;
    }
    
    bool Interface :: pntClicked( const State& x, double rad ) {
        Vec v = mouse.click;
        
        Vec p = Ro::null_cen(x);
        
        //Screen Coordinates of Target point
        Vec sc = screenCoord(p);
    
        Vec dist = (v - sc);
        return (dist.norm() < rad) ? 1 : 0;
    }
    
    void Interface :: onMouseMove(){
        
        
        if ( mMode & Mode::Scale ) {	
          //  printf("interface scale\n");
            double s = mouse.move.wt();						
            state() = ( Op::sp( state() , Gen::dil( s ) ) );						
        }
        
        if ( mMode & Mode::Rotate ){ 
            state() = ( Op::sp( state() , Gen::rot( mouse.biv * -1.0 ) ) );
        }
        
        if ( mMode & Mode::Grab )  { 
            Vec m = mouse.move;
            state() = Op::sp( state() , Gen::trs( m ) );
        }
        
    }
    
    void Interface :: onMouseDown(){
        
        //tdx = tdy = 0;
        
        vd().clickray = vd().ray;
        mouse.click = mouse.pos;				
        mouse.isDown  = 1;
        mouse.newClick = 1;
        
//        //Setting a State?
//        if (mMode & Mode::Transform){
//            disable( Mode::Rotate | Mode::Grab | Mode::Scale | Mode::Transform ); //Stay in Edit Mode
//        }
//        
//        //Selecting a State?
//        if (mMode & Mode::Select){	
//            //graph().clickTest( glv.mouse.xRel(), scene().height() - glv.mouse.yRel() );		
//            //break;				
//        }
    }

    void Interface :: onMouseDrag(){			
			
                       
//            if (key.alt)   enable(Mode::CamArb);
//            if (key.caps)  enable(Mode::CamTrack);
//            
            static Biv B;
            static float nx;
            static float ny; 
        
            static float tdx;
            static float tdy;
            
            static Rot ra = Rot::e12();
            static Rot rb = Rot::e13();
            static Rot rc = Rot::e23();
            
            //relative top left (0.0 - .002 or so);
            float dx = mouse.dx;
            float dy = mouse.dy; //changed	
            
            //cout << "DX: " << dx << " DY: " << dy << endl;
            
            //current position relative to top left (0.0 - 1.0)
            float cx = mouse.xrel;
            float cy = mouse.yrel;//changed
            
            //Accumulated Movement
            nx += dx; //+ or -?
            ny += dy;
        
            //Temporary Accumulated Movement
            tdx = mouse.newClick ? 0 : tdx + dx; //+ or -?
            tdy = mouse.newClick ? 0 : tdy + dy;
            
            mouse.dragAccum = Vec(nx,ny,0);							//total dvector since program launch
            mouse.drag		= Vec(tdx,tdy,0);						//vector from last click and hold to current position
            mouse.dragCat = Op::sp0(mouse.drag, -camera().cat());  //rotate drag by concatenated camera position
            mouse.dragBivCat = vd().z ^ mouse.dragCat;
            mouse.dragBiv = Vec::z ^ (Vec(nx,ny,0)); // nx*-1 ?
            
            Vec v1  = mouse.pos;
            Vec v2  = mouse.move;
            Vec v = v1 - Vec(camera().pos());
            
            Vec rel ( .5-cx, .5-cy, 0.0 );
            Vec nn  ( nx, ny, 0.0 );					
            
            double acc = mouse.accel.norm();	
        
            mouse.newClick = 0;

            
//            //Camera Itself Does not Move Position, but glMatrices move via camera's rotor
//            //i.e. in arb mode the camera orientation itself doesn't move, just the mvm underneath
//            if (mMode & Mode::CamArb){																
//                Rot tr = Gen::rot( mouse.dragBiv );
//                camera().mvm(tr); // or -tr?
//            }
//            
//            //In Tilt Mode the Camera Rotates Up and Down, Left and Right
//            if (mMode & Mode::CamTilt){
//                Vec mv = GL::unproject(glv.mouse().x(), glv.mouse().y(), 0, camera());							
//                B = Biv(Vec::z ^ Vec(nx,ny,0));
//                rb = Gen::rot_biv(B);																					
//            }
//
//            if (mMode & Mode::CamTrack){
//                float xm = glv.mouse().dx() / scene().width();
//                float ym = glv.mouse().dy() / scene().height();
//                Vec dv = camera().x() * xm + camera().y() * ym;
//                camera().pos() += dv;
//            }
            
    }
    
    void Interface :: onKeyDown(){

        windowTransform();
                
        //stateTransform();
            
        //Camera Controls			
        if (keyboard.alt) {		
            mvTransform();
        }
        
        if (keyboard.shift){                    
            camTranslate();
        }  
                
        if (keyboard.ctrl){					
            camSpin();
        }				
                
        if (keyboard.caps){
            
            switch(keyboard.code){
                    //Camera Controls Forward, Left, Right, Up, Down							
                case Key::Up:    camera().dx() += camera().up() * .1;	break;
                case Key::Down:  camera().dx() -= camera().up() * .1; break;
                case Key::Left:  camera().dx() -= camera().right() * .1; break;
                case Key::Right: camera().dx() += camera().right() * .1; break;							
            }
        }
                
    }
        
    //State, Center Point, Amt
    void Interface :: xf ( State * s, State& pos, double t ) {

        //Address of State
        State& ts = *s;
        
        //Center of Defining Sphere
        Vec tv ( Ro::cen(pos) );   
        
        //2D coordinates of Defining Sphere
        Vec sc = GL::project(tv[0], tv[1], tv[2], camera() ); 
        
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
                ts = Op::sp( ts, Gen::dil_pnt( Ro::cen(pos), mouse.drag.norm() * t * neg ) );
                break;
            }
            case 'g': //translate
            {
                ts = Op::sp(ts, Gen::trs( mouse.dragCat * t ) );
                break;
            }
            case 'r': //rotate about local line
            {
                Dll td = pos <= Drb( mouse.dragBivCat * t );
                ts = Op::sp( ts, Gen::mot_dll( td ) );
                break;
            }
            case 'b': //boost by drag (not working)
            {
                Tnv tnv( mouse.dragCat );
                
                State pp = Gen::tpar( Op::sp0( tnv, Gen::trs( cp ) ) * t );
                ts = Op::sp(ts, pp);
                glPushMatrix();
				glTranslated(cp[0],cp[1],cp[2]);
				tnv.draw();
                glPopMatrix();
                break;
            }
            case 't': // twist about global line
            {
                Dll td = Op::dl( mouse.origin ^ mouse.dragCat ^ Inf(1) );
                ts = Op::sp( ts, Gen::mot_dll(td) );
                break;
            }

            case Key::Escape:
            {
                //cout << "deselect all" << endl;
                s -> toggle();
                break;
            }
        }
    }
    
    void Interface :: xfFrame( Frame * frame, double t){
        //	if ( frame->isSelected() ) {
		Pnt& tp = frame->pos();
		Rot& tr = frame->rot();
		Vec tv ( tp );
		Vec sc = GL::project(tv[0], tv[1], tv[2], camera());
		switch(keyboard.code){
			case 's': //scale
			{
                //printf("scale\n");s
                Vec tm1 = mouse.pos + mouse.drag - sc;
                Vec tm2 = mouse.pos - sc; 
				int neg = (tm1.norm() > tm2.norm()) ? -1 : 1; //Drag towards or away from element
				
				frame->dd( mouse.drag.norm()*t*neg );
				frame->dilate();
				//ts = Op::sp(ts, Gen::dil_pnt( Ro::cen(pos), scene().md().norm()*t*neg));
				break;
			}
			case 'g': //translate
			{
                //			tp = Op::sp(tp, Gen::trs(scene().mdc()*t));
				frame->dx() = mouse.dragCat * t;
				frame->move();
				break;
			}
			case 'r': //rotate about local line
			{
                //			Dll td = tp <= Drb(scene().dbc()*t);
                //			tr = Op::sp(tr, Gen::mot_dll(td));
				frame->db() =  mouse.dragBivCat * t; //scene().mp().unit() ^ scene().md();
				frame->spin();
				break;
			}
			case 'b': //boost by drag
			{
				//ts = Op::sp(ts, Gen::trv(scene().mdc()*t));
				break;
			}
			case 'a': //all transformations
			{
				double neg = mouse.drag[0];
                //			Dll td = pos <= Drb(scene().dbc()*t);
                //			ts = Op::sp(ts, Gen::mot_dll(td));
                //			ts = Op::sp(ts, Gen::trs(scene().mdc()*t));
                //			ts = Op::sp(ts, Gen::dil_pnt( Ro::cen(pos), scene().md().norm()*t*neg));
				break;
			}
			case Key::Escape:
			{
				cout << "deselect all" << endl;
				frame -> toggle();
			}
		}
		frame ->acc();
        //		}
    }
    
    void Interface :: viewCalc(){
        //Points in Z Space
        vd().z		 = Op::sp0(Vec::z, -camera().cat());  
        
        Vec v1 = GL::unproject( mouse.x, vd().h - mouse.y , 1.0,  camera() );
        Vec v2 = GL::unproject( mouse.x, vd().h - mouse.y , 0.0,  camera() );
        Vec v3 = GL::unproject( mouse.x, vd().h - mouse.y , 0.5,  camera() );     
        
        //Get Line of Mouse Position into Z Space (store as a Dual Line)
		vd().ray	 = Op::dl( Ro::null(v2) ^ v1.unit() ^ Inf(1) ) ;
		mouse.projectFar	= v1 ;
		mouse.projectNear	= v2 ;
		

       mouse.cat     = Op::sp0( mouse.move * -1, -camera().cat() );
       mouse.biv     = mouse.pos ^ mouse.projectFar; //not used?
        
        //Point on Line Closest to Origin
        mouse.origin = Ro::null( Fl::loc( vd().ray, Ori(1), 1 ) );
       mouse.bivCat = vd().z ^ mouse.cat;

    }
    
    void Interface :: windowTransform(){
       // printf("WT!\n");
        switch(keyboard.code){
                
            case 96: //tilde
                //printf("TILDE!\n");
                vimpl -> fullScreenToggle(); 
                break;
            case 'q':
     //           exit(0);
                break;
        }
    }

    void Interface :: stateTransform(){
        switch(keyboard.code){
            case 's': //scale
                {
                    if (mMode & Mode::Transform) { 
                        state() = model -> get();//tmp().back();
                    } else {
                        model -> push( state() );//tmp().push_back( state() );
                    }
                    enable( Mode::Scale | Mode::Transform );
                    disable( Mode::Rotate | Mode::Grab );
                    break;
                }
            case 'r': //rotate
                {
                    if (mMode & Mode::Transform) { 
                        state() = model -> get();
                    } else {								
                        model -> push( state() );
                        
                    }
                    enable( Mode::Rotate | Mode::Transform );
                    disable( Mode::Scale | Mode::Grab );
                    break;
                }
            case 'g': //grab
                {
                    
                    if (mMode & Mode::Transform) { 
                        state() = model -> get();
                    } else {								
                        model -> push( state() );
                    }
                    enable( Mode::Grab | Mode::Transform  );
                    disable( Mode::Rotate | Mode::Scale );
                    break;
                }
        }
    }
    
    void Interface :: mvTransform(){
        // Get Rotor Ratio between camera and model view
        Rot ryz = Gen::ratio_biv( camera().modelView().yz(), camera().yz() );
        Rot rxz = Gen::ratio_biv( camera().modelView().xz(), camera().xz() );
        // Rotate By said Rotor
        Biv tyz = Op::sp0( camera().modelView().yz(), ryz );
        Biv txz = Op::sp0( camera().modelView().xz(), rxz );
        
        switch( keyboard.code ){
            case Key::Up:
            {    
                // camera().modelView().yz()
                camera().modelView().db() += tyz * .01;	
                break;
            }
            case Key::Down:  
            {
                camera().modelView().db() -= tyz * .01;	
                break;
            }
            case Key::Left:
            {
                camera().modelView().db() -= txz * .01;	
                break;
            }
            case Key::Right: 
            {
                camera().modelView().db() += txz * .01;	
                break;
            }
        }
    }
    
    void Interface :: camTranslate(){
        switch(keyboard.code){
            case Key::Up:
                if (keyboard.ctrl) camera().dx() += camera().up() * .1;
                else camera().dx() += camera().forward() * .1;	
                break;
            case Key::Down:
                if (keyboard.ctrl) camera().dx() -= camera().up() * .1;  
                else camera().dx() -= camera().forward() * .1; 
                break;
            case Key::Left:  camera().dx() -= camera().right() * .1; break;
            case Key::Right: camera().dx() += camera().right() * .1; break;							
        }
    }
    
    void Interface :: camSpin(){
        switch(keyboard.code){
            case Key::Up:    camera().db() -= camera().yz() * .01;	break;
            case Key::Down:  camera().db() += camera().yz() * .01; break;
            case Key::Left:  camera().db() += camera().xz() * .01; break;
            case Key::Right: camera().db() -= camera().xz() * .01; break;							
        }
    }
} // Vsr::