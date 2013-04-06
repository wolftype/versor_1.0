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
    Interface :: Interface()  : mMode( Mode::Navigate | Mode::Select ), mVel(.1), mRot(.01), mModelRot(.05) {
    }
    
    
    // Calculate Position of Mouse, Ray of Eye, etc, in Scene
    void Interface :: viewCalc(){
        
        //Assumes data has been copied to (or created from) scene transformation matrices (xf)
        vd().z  = Op::sp(Vec::z, !model().rot() * camera().rot() ); 
         
        /// Bottom Left (0,0) to top right (1,1)
        mouse.pos  = Vec( mouse.x / vd().w, 1 - mouse.y / vd().h, 0 ) ;
        mouse.move = Vec( mouse.dx / vd().w, - mouse.dy / vd().h, 0 ) ;
        
        mouse.cat     = Op::sp( mouse.move * -1, !scene().cat() );
        mouse.bivCat = vd().z ^ mouse.cat;

        //GLU FUNCS
        Vec v1 = GL::unproject( mouse.x, vd().h - mouse.y , 1.0,  scene().xf );
        Vec v2 = GL::unproject( mouse.x, vd().h - mouse.y , 0.0,  scene().xf );
        Vec v3 = GL::unproject( mouse.x, vd().h - mouse.y , 0.5,  scene().xf );   

        //OWN FUNCS (in progress, seem to give results scaled differently)
//        Vec3f tv1 = XMat::UnProject( Vec3f( mouse.x, vd().h - mouse.y , 1.0), scene().xf );
//        Vec3f tv2 = XMat::UnProject( Vec3f( mouse.x, vd().h - mouse.y , 0.0),scene().xf );
//        Vec3f tv3 = XMat::UnProject( Vec3f( mouse.x, vd().h - mouse.y , 0.5),scene().xf );
//        
//        Vec v1(tv1.x, tv1.y, tv1.z);
//        Vec v2(tv2.x, tv2.y, tv2.z);
//        Vec v3(tv3.x, tv3.y, tv3.z);
        
 
        
        //Get Line of Mouse Position into Z Space (store as a Dual Line)
		vd().ray	 = Op::dl( Ro::null(v3) ^ v1.null() ^ Inf(1) ).runit();
        
		mouse.projectFar	= v1 ;
		mouse.projectNear	= v2 ;
		mouse.projectMid	= v3 ;

        mouse.biv     = mouse.pos ^ mouse.projectFar; //not used?

        //Point on Line Closest to Origin
        mouse.origin = Ro::null( Fl::loc( vd().ray, Ori(1), true ) );        

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

//    Or Navigation . . .
        

    }
    
    
    void Interface :: onMouseDown(){
        
        
        vd().clickray = vd().ray;
        mouse.click = mouse.pos;				
        mouse.isDown  = 1;
        mouse.newClick = 1;
        
        //tdx = tdy = 0;

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
    
    
    void Interface :: onMouseUp(){
        mouse.isDown = 0; 
        mouse.newClick = 0;
        mouseModelTransform(.7, false);
        mouseCamTranslate(.7, false);
        mouseCamSpin(.7, false);
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
            
            mouse.dragCat = Op::sp( mouse.drag, !scene().cat() );     //rotate drag by inverse concatenated orientation
            mouse.dragBivCat = vd().z ^ mouse.dragCat;
            
            mouse.dragBiv = Vec::z ^ mouse.drag; //( Vec ( nx, ny, 0 ) ); // nx*-1 ?
            
            Vec v1  = mouse.pos;
            Vec v2  = mouse.move;
            Vec v = v1 - Vec(camera().pos());
            
            Vec rel ( .5-cx, .5-cy, 0.0 );
            Vec nn  ( nx, ny, 0.0 );					
                    
            mouse.newClick = 0;

            
             int mdir = 0;
             if ( fabs(tdx) > fabs(tdy) ) mdir = tdx > 0 ? MouseData::Right : MouseData::Left;
             else if ( fabs(tdx) < fabs(tdy) ) mdir = tdy > 0 ? MouseData::Up : MouseData::Down; 
        
             mouse.gesture = mdir;
            
            
            if (keyboard.alt) {	
                mouseModelTransform(1.0, true);
            } else if (keyboard.shift) {	
                mouseCamTranslate(1.0, true);
            } else if (keyboard.ctrl){
                mouseCamSpin(1.0,true);
            }



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

        keyboard.down = true;
        //fullscreen, etc (windowing controls)
        windowTransform();
                
        //stateTransform();
        switch(keyboard.code){
            case 'c':
                camera().reset(); 
                model().reset();
                break;
                
        }
                
        //Camera Controls			
        if (keyboard.alt) {	
            keyboardModelTransform(1.0, true);
        } else if (keyboard.shift){   
            keyboardCamTranslate(1.0, true);
        } else {                         
            keyboardCamSpin(1.0, true);
        }        
                
    }


    void Interface :: onKeyUp(){
        
        keyboard.down = false;
            
        keyboardModelTransform(.7, false);
        keyboardCamTranslate(.7, false);
        keyboardCamSpin(.7, false);
                    
    }    
    
    
    
    void Interface :: mouseModelTransform(float acc, bool trigger){
        model().ab() = acc;
        if (trigger) model().db() += mouse.dragBiv * mModelRot;
    }
    
    void Interface :: mouseCamTranslate(float acc, bool trigger){
        camera().ax() = acc;
        if(trigger) {
        
            switch(mouse.gesture){
                case MouseData::Up:
                    if (keyboard.ctrl) camera().dx() += camera().up() * mVel;
                    else camera().dx() += camera().forward() * mVel * .5;	
                    break;
                case MouseData::Down:
                    if (keyboard.ctrl) camera().dx() -= camera().up() * mVel;  
                    else camera().dx() -= camera().forward() * mVel * .5; 
                    break;
                case MouseData::Left:
                   camera().dx() -= camera().right() * mVel * .5; break;
                case MouseData::Right:
                    camera().dx() += camera().right() * mVel * .5; break;            
            }
        
        }
    }
    
    void Interface :: mouseCamSpin(float acc, bool trigger){
        camera().ab() = acc; 
        if (trigger){
            switch(mouse.gesture){
                case MouseData::Up:    camera().db() += camera().yz() * mRot * .5;	break;
                case MouseData::Down:  camera().db() -= camera().yz() * mRot * .5; break;
                case MouseData::Left:  camera().db() -= camera().xz() * mRot * .5; break;
                case MouseData::Right: camera().db() += camera().xz() * mRot * .5; break;							
            }
        }
    }
    
    void Interface :: keyboardModelTransform(float acc, bool trigger){
        
        model().ab() = acc;
        
        if (trigger) {

            // Get Rotor Ratio between camera and model view
            Rot ryz = Gen::ratio( model().yz(), camera().yz() );
            Rot rxz = Gen::ratio( model().xz(), camera().xz() );
            
            // Rotate By said Rotor
            Biv tyz = Op::sp( model().yz(), ryz );
            Biv txz = Op::sp( model().xz(), rxz );
        
            switch( keyboard.code ){
                case Key::Up:
                {    
                    // camera().modelView().yz()
                    model().db() += tyz * mModelRot;	
                    break;
                }
                case Key::Down:  
                {
                    model().db() -= tyz * mModelRot;	
                    break;
                }
                case Key::Left:
                {
                    model().db() -= txz * mModelRot;	
                    break;
                }
                case Key::Right: 
                {
                    model().db() += txz * mModelRot;	
                    break;
                }
            }
        }
    }
    
    void Interface :: keyboardCamTranslate(float acc, bool trigger){
        camera().ax() = acc;
        if (trigger){
            switch(keyboard.code){
                case Key::Up:
                    if (keyboard.ctrl) camera().dx() += camera().up() * mVel;
                    else camera().dx() += camera().forward() * mVel;	
                    break;
                case Key::Down:
                    if (keyboard.ctrl) camera().dx() -= camera().up() * mVel;  
                    else camera().dx() -= camera().forward() * mVel; 
                    break;
                case Key::Left:  camera().dx() -= camera().right() * mVel; break;
                case Key::Right: camera().dx() += camera().right() * mVel; break;							
            }
        }
    }
    
    void Interface :: keyboardCamSpin(float acc, bool trigger){
        camera().ab() = acc; 
        if (trigger){
            switch(keyboard.code){
                case Key::Up:    camera().db() -= camera().yz() * mRot;	break;
                case Key::Down:  camera().db() += camera().yz() * mRot; break;
                case Key::Left:  camera().db() += camera().xz() * mRot; break;
                case Key::Right: camera().db() -= camera().xz() * mRot; break;							
            }
        }
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

    //////////////////////
    // TOUCHING ELEMENTS
    //////////////////////

    void Interface :: touch( Frame& f, double t){
//        if ( keyboard.down ){
        if ( !keyboard.alt && !keyboard.shift && !keyboard.alt ){

            static double dt = 5;
            static double acc = .9;
            dt *= acc;
            if ( mouse.isDown ){
                dt = t;// scene().ma() / scene().width();
                if (pntClicked ( f.pos() ) ){
                    select(&f);//f.select();
                }
            }
            if (isSelected( &f ) ){
                xfFrame(&f, dt);
            }
        //cout << dt << endl; 
        }
    }
    
    void Interface :: touch( Frame& f, Frame& e, double t){
        
//        if ( keyboard.down ){
         if ( !keyboard.alt && !keyboard.shift && !keyboard.alt ){
       
            static double dt = 5;
            static double acc = .9;
            dt *= acc;
            if ( mouse.isDown ){
                dt = t;// scene().ma() / scene().width();
                if (pntClicked ( f.pos() ) ){
                   select(&f);
                }
            }
            if (isSelected( &f ) && keyboard.down ){
                xfFrame(&f, &e, dt);
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
                //cout << "g" << endl; 
				frame->dx() = mouse.dragCat * t;
				frame->move();
				break;
			}
			case 'r': //rotate about local line
			{
				frame->db() =  mouse.dragBivCat * t; //scene().mp().unit() ^ scene().md();
                //cout << t << endl; 
                //Biv b = mouse.dragBivCat * t; 
				//frame->rot( Gen::rot(b) * frame->rot() ); //spin();
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
			default:
			{
                toggleSelect(frame); 
                break;
			}
		}
		frame ->acc();
    }
    
    
    
    void Interface :: inputCalc(){

    }
    


} // Vsr::
