//
//  Interface.cpp
//  vsr
//
//  Created by Pablo Colapinto on 3/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "vsr.h"

#include <iostream>
#include "Interface.h"


namespace vsr {


    //DEFAULT IS NAVIGATION AND SELECTION MODES
    Interface :: Interface()  : mMode( Mode::Navigate | Mode::Select ){
        model = new Model(this);
    }
    
    Touchable& Interface :: current()  { return *( model -> active()); }
    
    
    void Interface :: touch( Frame& f, double t){
        
        static double dt = 5;
        static double acc = .9;
        dt *= acc;
        if ( mouse.isDown ){
            dt = t;// scene().ma() / scene().width();
            if (pntClicked ( f.pos() ) ){
                //f.select();
            }
        }
//        if (f.isSelected()){
//            xfFrame(&f, dt);
//        }
    }
    
    void Interface :: touch( Frame& f, Frame& e, double t){
        
        static double dt = 5;
        static double acc = .9;
        dt *= acc;
        if ( mouse.isDown ){
            dt = t;// scene().ma() / scene().width();
            if (pntClicked ( f.pos() ) ){
               // f.select();
            }
        }
//        if (f.isSelected()){
//            xfFrame(&f, &e, dt);
//        }
    }
    
    void Interface :: onMouseMove(){
        
        
//        if ( mMode & Mode::Scale ) {	
//          //  printf("interface scale\n");
//            double s = mouse.move.wt();						
//            state() = ( Op::sp( state() , Gen::dil( s ) ) );						
//        }
//        
//        if ( mMode & Mode::Rotate ){ 
//            state() = ( Op::sp( state() , Gen::rot( mouse.biv * -1.0 ) ) );
//        }
//        
//        if ( mMode & Mode::Grab )  { 
//            Vec m = mouse.move;
//            state() = Op::sp( state() , Gen::trs( m ) );
//        }
        
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
            
            static Rot ra = Rot::xy;
            static Rot rb = Rot::xz;
            static Rot rc = Rot::yz;
            
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
            mouse.dragCat = Op::sp(mouse.drag, !camera().cat());  //rotate drag by concatenated camera position
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
            cout << "shift" << endl;
            camTranslate();
        }  
        
//        if (keyboard.
                
        if (keyboard.ctrl){	
            cout << "ctrl" << endl; 
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
    
    
 

    void Interface :: xfFrame( Frame * frame, Frame * eframe, double t){
        //	if ( frame->isSelected() ) {
		Pnt& tp = frame->pos();
//		Rot& tr = frame->rot();
		Vec tv ( tp );
		Vec sc = GL::project(tv[0], tv[1], tv[2], camera());
		switch(keyboard.code){
			case 's': //scale
			{
                //printf("scale\n");s
                Vec tm1 = mouse.pos + mouse.drag - sc;
                Vec tm2 = mouse.pos - sc; 
				int neg = (tm1.norm() > tm2.norm()) ? -1 : 1; //Drag towards or away from element
				
				eframe->dd( mouse.drag.norm()*t*neg );
				eframe->dilate();
				//ts = Op::sp(ts, Gen::dil_pnt( Ro::cen(pos), scene().md().norm()*t*neg));
				break;
			}
			case 'g': //translate
			{
                //			tp = Op::sp(tp, Gen::trs(scene().mdc()*t));
				eframe->dx() = mouse.dragCat * t;
				eframe->move();
				break;
			}
			case 'r': //rotate about local line
			{
                //			Dll td = tp <= Drb(scene().dbc()*t);
                //			tr = Op::sp(tr, Gen::mot_dll(td));
				eframe->db() =  mouse.dragBivCat * t; //scene().mp().unit() ^ scene().md();
				eframe->spin();
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
			case 'q':
			{
				//cout << "deselect all" << endl;
				//frame -> toggle();
			}
		}
		eframe ->acc();
        //		}
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
			case 'q':
			{
				//cout << "deselect all" << endl;
				//frame -> toggle();
			}
		}
		frame ->acc();
        //		}
    }
    
    void Interface :: viewCalc(){
        //Points in Z Space
        vd().z		 = Op::sp(Vec::z, !camera().cat());  
        
        Vec v1 = GL::unproject( mouse.x, vd().h - mouse.y , 1.0,  camera() );
        Vec v2 = GL::unproject( mouse.x, vd().h - mouse.y , 0.0,  camera() );
        Vec v3 = GL::unproject( mouse.x, vd().h - mouse.y , 0.5,  camera() );     
        
        //Get Line of Mouse Position into Z Space (store as a Dual Line)
		vd().ray	 = Op::dl( Ro::null(v2) ^ v1.unit() ^ Inf(1) ) ;
		mouse.projectFar	= v1 ;
		mouse.projectNear	= v2 ;
		

       mouse.cat     = Op::sp( mouse.move * -1, !camera().cat() );
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

//    void Interface :: stateTransform(){
//        switch(keyboard.code){
//            case 's': //scale
//                {
//                    if (mMode & Mode::Transform) { 
//                        state() = model -> active();//tmp().back();
//                    } else {
//                        model -> push( state() );//tmp().push_back( state() );
//                    }
//                    enable( Mode::Scale | Mode::Transform );
//                    disable( Mode::Rotate | Mode::Grab );
//                    break;
//                }
//            case 'r': //rotate
//                {
//                    if (mMode & Mode::Transform) { 
//                        state() = model -> get();
//                    } else {								
//                        model -> push( state() );
//                        
//                    }
//                    enable( Mode::Rotate | Mode::Transform );
//                    disable( Mode::Scale | Mode::Grab );
//                    break;
//                }
//            case 'g': //grab
//                {
//                    
//                    if (mMode & Mode::Transform) { 
//                        state() = model -> get();
//                    } else {								
//                        model -> push( state() );
//                    }
//                    enable( Mode::Grab | Mode::Transform  );
//                    disable( Mode::Rotate | Mode::Scale );
//                    break;
//                }
//        }
//    }
    
    void Interface :: mvTransform(){
        // Get Rotor Ratio between camera and model view
        Rot ryz = Gen::ratio( camera().modelView().yz(), camera().yz() );
        Rot rxz = Gen::ratio( camera().modelView().xz(), camera().xz() );
        // Rotate By said Rotor
        Biv tyz = Op::sp( camera().modelView().yz(), ryz );
        Biv txz = Op::sp( camera().modelView().xz(), rxz );
        
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
//                cout << "up\n" << endl; 
//                cout << camera().forward() << endl; 
//                cout << camera().pos() << endl; 
//                cout << camera().dx() << endl; 
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
        if (!keyboard.shift){
        switch(keyboard.code){
            case Key::Up:    camera().db() -= camera().yz() * .01;	break;
            case Key::Down:  camera().db() += camera().yz() * .01; break;
            case Key::Left:  camera().db() += camera().xz() * .01; break;
            case Key::Right: camera().db() -= camera().xz() * .01; break;							
        }
        }
    }
} // Vsr::
