//
//  Interface.cpp
//  vsr
//
//  Created by Pablo Colapinto on 3/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "vsr.h"
#include "vsr_interface.h"

#include <iostream>


namespace vsr {


    //DEFAULT IS NAVIGATION AND SELECTION MODES
    Interface :: Interface()  : mMode( Mode::Navigate | Mode::Select ){
    }
    
    void Interface :: touch( Frame& f, double t){
        
        static double dt = 5;
        static double acc = .9;
        dt *= acc;
        if ( mouse.isDown ){
            dt = t;// scene().ma() / scene().width();
            if (pntClicked ( f.pos() ) ){
                select(&f);//f.select();
            }
        }
        if (isSelected( &f )){
            xfFrame(&f, dt);
        }
    }
    
    void Interface :: touch( Frame& f, Frame& e, double t){
        
        static double dt = 5;
        static double acc = .9;
        dt *= acc;
        if ( mouse.isDown ){
            dt = t;// scene().ma() / scene().width();
            if (pntClicked ( f.pos() ) ){
               select(&f);
            }
        }
        if (isSelected( &f )){
            xfFrame(&f, &e, dt);
        }
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
            float cx = mouse.pos[0];//mouse.xrel;
            float cy = mouse.pos[1];//mouse.yrel;//changed
            
            //Accumulated Movement
            nx += dx; //+ or -?
            ny += dy;
        
            //Temporary Accumulated Movement
            tdx = mouse.newClick ? 0 : tdx + dx; //+ or -?
            tdy = mouse.newClick ? 0 : tdy + dy;
            
            mouse.dragAccum = Vec(nx,ny,0);							//total dvector since program launch
            mouse.drag		= Vec(tdx,tdy,0);						//vector from last click and hold to current position
            mouse.dragCat = Op::sp(mouse.drag, !scene().cat());     //rotate drag by inverse concatenated orientation
            mouse.dragBivCat = vd().z ^ mouse.dragCat;
            mouse.dragBiv = Vec::z ^ (Vec(nx,ny,0)); // nx*-1 ?
            
            Vec v1  = mouse.pos;
            Vec v2  = mouse.move;
            Vec v = v1 - Vec(camera().pos());
            
            Vec rel ( .5-cx, .5-cy, 0.0 );
            Vec nn  ( nx, ny, 0.0 );					
            
            //double acc = mouse.accel.norm();	
        
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

        //fullscreen, etc (windowing controls)
        windowTransform();
                
        //stateTransform();
        switch(keyboard.code){
            case 'c':
                camera().reset(); break;
                
        }
                
        //Camera Controls			
        if (keyboard.alt) {	
            modelTransform(1.0);
        }
        
        if (keyboard.shift){   
            camTranslate(1.0);
        }  
                        
        if (keyboard.ctrl){	
            camSpin(1.0);
        }				
                
                
    }


    void Interface :: onKeyUp(){
            
        //Camera Controls			
        if (keyboard.alt) {	
            modelTransform(.9);
        }
        
        if (keyboard.shift){   
            camTranslate(.9);
        }  
                        
        if (keyboard.ctrl){	
            camSpin(.9);
        }				
                    
    }    
    
    
    void Interface :: modelTransform(float acc){
        //cout << "Model" << endl; 
        model().ab() = acc;
        // Get Rotor Ratio between camera and model view
        Rot ryz = Gen::ratio( model().yz(), camera().yz() );
        Rot rxz = Gen::ratio( model().xz(), camera().xz() );
        // Rotate By said Rotor
        Biv tyz = Op::sp( model().yz(), ryz );
        Biv txz = Op::sp( model().xz(), rxz );
        //cout << tyz << txz << endl; 
        switch( keyboard.code ){
            case Key::Up:
            {    
                // camera().modelView().yz()
                model().db() += tyz * .01;	
                break;
            }
            case Key::Down:  
            {
                model().db() -= tyz * .01;	
                break;
            }
            case Key::Left:
            {
                model().db() -= txz * .01;	
                break;
            }
            case Key::Right: 
            {
                model().db() += txz * .01;	
                break;
            }
        }
    }
    
    void Interface :: camTranslate(float acc){
        camera().ax() = acc;
        switch(keyboard.code){
            case Key::Up:
                if (keyboard.ctrl) camera().dx() += camera().up() * .05;
                else camera().dx() += camera().forward() * .05;	
                break;
            case Key::Down:
                if (keyboard.ctrl) camera().dx() -= camera().up() * .05;  
                else camera().dx() -= camera().forward() * .05; 
                break;
            case Key::Left:  camera().dx() -= camera().right() * .05; break;
            case Key::Right: camera().dx() += camera().right() * .05; break;							
        }
    }
    
    void Interface :: camSpin(float acc){
        if (!keyboard.shift){
            camera().ab() = acc; 
            switch(keyboard.code){
                case Key::Up:    camera().db() -= camera().yz() * .01;	break;
                case Key::Down:  camera().db() += camera().yz() * .01; break;
                case Key::Left:  camera().db() += camera().xz() * .01; break;
                case Key::Right: camera().db() -= camera().xz() * .01; break;							
            }
        }
    } 

    void Interface :: xfFrame( Frame * frame, Frame * eframe, double t){
		Pnt& tp = frame->pos();
		Vec tv ( tp );
		Vec sc = GL::project(tv[0], tv[1], tv[2], scene().xf);
		switch(keyboard.code){
			case 's': //scale
			{
                //printf("scale\n");s
                Vec tm1 = mouse.pos + mouse.drag - sc;
                Vec tm2 = mouse.pos - sc; 
				int neg = (tm1.norm() > tm2.norm()) ? -1 : 1; //Drag towards or away from element
				
				eframe->dd( mouse.drag.norm()*t*neg );
				eframe->dilate();
				break;
			}
			case 'g': //translate
			{
				eframe->dx() = mouse.dragCat * t;
				eframe->move();
				break;
			}
			case 'r': //rotate about local line
			{
				eframe->db() =  mouse.dragBivCat * t; //scene().mp().unit() ^ scene().md();
				eframe->spin();
				break;
			}
			case 'b': //boost by drag
			{
				break;
			}
			case 'a': //all transformations
			{
				//double neg = mouse.drag[0];
				break;
			}
			case 'q':
			{
			}
		}
		eframe ->acc();
        //		}
    }    
    
    void Interface :: xfFrame( Frame * frame, double t){
		Pnt& tp = frame->pos();
		//Rot& tr = frame->rot();
		Vec tv ( tp );
		Vec sc = GL::project(tv[0], tv[1], tv[2], scene().xf);
		switch(keyboard.code){
			case 's': //scale
			{
                //printf("scale\n");s
                Vec tm1 = mouse.pos + mouse.drag - sc;
                Vec tm2 = mouse.pos - sc; 
				int neg = (tm1.norm() > tm2.norm()) ? -1 : 1; //Drag towards or away from element
				
				frame->dd( mouse.drag.norm()*t*neg );
				frame->dilate();
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
				frame->db() =  mouse.dragBivCat * t; //scene().mp().unit() ^ scene().md();
				frame->spin();
				break;
			}
			case 'b': //boost by drag
			{
				break;
			}
			case 'a': //all transformations
			{
				//double neg = mouse.drag[0];
				break;
			}
			case 'q':
			{
                toggleSelect(frame); 
                break;
			}
		}
		frame ->acc();
    }
    
    void Interface :: inputCalc(){

    }

    void Interface :: viewCalc(){
        
        //Assumes data has been copied to (or created from) scene transfomration matrices (xf)
        //Points into Scene's Z Space
        vd().z  = Op::sp(Vec::z, !scene().cat()); 
         
        //bottom Left (0,0) to top right (1,1)
        mouse.pos     = Vec( mouse.x / vd().w, 1 - mouse.y / vd().h, 0 ) ;
        mouse.move	= Vec( mouse.dx/ vd().w, - mouse.dy/vd().h, 0 ) ;
        mouse.cat     = Op::sp( mouse.move * -1, !scene().cat() );
        mouse.bivCat = vd().z ^ mouse.cat;

        Vec v1 = GL::unproject( mouse.x, vd().h - mouse.y , 1.0,  scene().xf );
        Vec v2 = GL::unproject( mouse.x, vd().h - mouse.y , 0.0,  scene().xf );
        Vec v3 = GL::unproject( mouse.x, vd().h - mouse.y , 0.5,  scene().xf );     
        
        //Get Line of Mouse Position into Z Space (store as a Dual Line)
		vd().ray	 = Op::dl( Ro::null(v2) ^ v1.unit() ^ Inf(1) ) ;
        
		mouse.projectFar	= v1 ;
		mouse.projectNear	= v2 ;

        mouse.biv     = mouse.pos ^ mouse.projectFar; //not used?

        //Point on Line Closest to Origin
        mouse.origin = Ro::null( Fl::loc( vd().ray, Ori(1), true ) );
        
        //            interface -> mouse.ddx		= win.mouse().ddx();
//            interface -> mouse.ddy		= win.mouse().ddy();
//            interface -> mouse.accel   = Vec( win.mouse().ddx(), -win.mouse().ddy(),0);
             
//            interface -> mouse.xrel     =  win.mouse().xRel() / win.width();
 //           interface -> mouse.yrel     = 1 - win.mouse().yRel() / win.height();

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

} // Vsr::
