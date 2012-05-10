//
//  scratch.h
//  vsr
//
//  Created by Pablo Colapinto on 4/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_scratch_h
#define vsr_scratch_h

#include "Matrix.h"

using vsr::Vec3;

namespace Test {
    
	struct Sca {
		Sca (float _s) : s(_s) {}
		float s;
	};
	
	struct Inf {
		Inf (float _ni) : ni(_ni) {}
		float ni;
	};
	
	struct Tnv {
		Tnv (float _e1no,float _e2no,float _e3no) : e1no(_e1no),e2no(_e2no),e3no(_e3no) {}
		float e1no,e2no,e3no;
	};
	
	struct Tvt {
		Tvt (float _s,float _e12,float _e13,float _e23,float _e1no,float _e2no,float _e3no,float _e1ni,float _e2ni,float _e3ni,float _noni,float _e12noni,float _e13noni,float _e23noni,float _e123ni) : s(_s),e12(_e12),e13(_e13),e23(_e23),e1no(_e1no),e2no(_e2no),e3no(_e3no),e1ni(_e1ni),e2ni(_e2ni),e3ni(_e3ni),noni(_noni),e12noni(_e12noni),e13noni(_e13noni),e23noni(_e23noni),e123ni(_e123ni) {}
		float s,e12,e13,e23,e1no,e2no,e3no,e1ni,e2ni,e3ni,noni,e12noni,e13noni,e23noni,e123ni;
	};
	
	struct Rtc {
		Rtc (float _e1,float _e2,float _e3,float _no,float _ni,float _e12no,float _e13no,float _e23no,float _e12ni,float _e13ni,float _e23ni,float _e1noni,float _e2noni,float _e3noni,float _e123,float _e123noni) : e1(_e1),e2(_e2),e3(_e3),no(_no),ni(_ni),e12no(_e12no),e13no(_e13no),e23no(_e23no),e12ni(_e12ni),e13ni(_e13ni),e23ni(_e23ni),e1noni(_e1noni),e2noni(_e2noni),e3noni(_e3noni),e123(_e123),e123noni(_e123noni) {}
		float e1,e2,e3,no,ni,e12no,e13no,e23no,e12ni,e13ni,e23ni,e1noni,e2noni,e3noni,e123,e123noni;
	};
	
	struct Pnt_Par {
		Pnt_Par (float _e1,float _e2,float _e3,float _no,float _ni,float _e12no,float _e13no,float _e23no,float _e12ni,float _e13ni,float _e23ni,float _e1noni,float _e2noni,float _e3noni,float _e123) : e1(_e1),e2(_e2),e3(_e3),no(_no),ni(_ni),e12no(_e12no),e13no(_e13no),e23no(_e23no),e12ni(_e12ni),e13ni(_e13ni),e23ni(_e23ni),e1noni(_e1noni),e2noni(_e2noni),e3noni(_e3noni),e123(_e123) {}
		float e1,e2,e3,no,ni,e12no,e13no,e23no,e12ni,e13ni,e23ni,e1noni,e2noni,e3noni,e123;
	};
	
	struct Mtt {
		Mtt (float _s,float _e12,float _e13,float _e23,float _e1no,float _e2no,float _e3no,float _e1ni,float _e2ni,float _e3ni,float _noni,float _e12noni,float _e13noni,float _e23noni,float _e123no,float _e123ni) : s(_s),e12(_e12),e13(_e13),e23(_e23),e1no(_e1no),e2no(_e2no),e3no(_e3no),e1ni(_e1ni),e2ni(_e2ni),e3ni(_e3ni),noni(_noni),e12noni(_e12noni),e13noni(_e13noni),e23noni(_e23noni),e123no(_e123no),e123ni(_e123ni) {}
		float s,e12,e13,e23,e1no,e2no,e3no,e1ni,e2ni,e3ni,noni,e12noni,e13noni,e23noni,e123no,e123ni;
	};
	
	struct Par {
		Par (float _e12,float _e13,float _e23,float _e1no,float _e2no,float _e3no,float _e1ni,float _e2ni,float _e3ni,float _noni) : e12(_e12),e13(_e13),e23(_e23),e1no(_e1no),e2no(_e2no),e3no(_e3no),e1ni(_e1ni),e2ni(_e2ni),e3ni(_e3ni),noni(_noni) {}
		float e12,e13,e23,e1no,e2no,e3no,e1ni,e2ni,e3ni,noni;
	};
	
	struct Tnv_Flp {
		Tnv_Flp (float _s,float _e12,float _e13,float _e23,float _e1no,float _e2no,float _e3no,float _noni,float _e12noni,float _e13noni,float _e23noni) : s(_s),e12(_e12),e13(_e13),e23(_e23),e1no(_e1no),e2no(_e2no),e3no(_e3no),noni(_noni),e12noni(_e12noni),e13noni(_e13noni),e23noni(_e23noni) {}
		float s,e12,e13,e23,e1no,e2no,e3no,noni,e12noni,e13noni,e23noni;
	};
	
	struct Pnt {
		Pnt (float _e1,float _e2,float _e3,float _no,float _ni) : e1(_e1),e2(_e2),e3(_e3),no(_no),ni(_ni) {}
		float e1,e2,e3,no,ni;
	};
	
	struct Pnt_Pnt {
		Pnt_Pnt (float _s,float _e12,float _e13,float _e23,float _e1no,float _e2no,float _e3no,float _e1ni,float _e2ni,float _e3ni,float _noni) : s(_s),e12(_e12),e13(_e13),e23(_e23),e1no(_e1no),e2no(_e2no),e3no(_e3no),e1ni(_e1ni),e2ni(_e2ni),e3ni(_e3ni),noni(_noni) {}
		float s,e12,e13,e23,e1no,e2no,e3no,e1ni,e2ni,e3ni,noni;
	};
	
	struct Sph {
		Sph (float _e12noni,float _e13noni,float _e23noni,float _e123no,float _e123ni) : e12noni(_e12noni),e13noni(_e13noni),e23noni(_e23noni),e123no(_e123no),e123ni(_e123ni) {}
		float e12noni,e13noni,e23noni,e123no,e123ni;
	};
	
	struct Cir {
		Cir (float _e12no,float _e13no,float _e23no,float _e12ni,float _e13ni,float _e23ni,float _e1noni,float _e2noni,float _e3noni,float _e123) : e12no(_e12no),e13no(_e13no),e23no(_e23no),e12ni(_e12ni),e13ni(_e13ni),e23ni(_e23ni),e1noni(_e1noni),e2noni(_e2noni),e3noni(_e3noni),e123(_e123) {}
		float e12no,e13no,e23no,e12ni,e13ni,e23ni,e1noni,e2noni,e3noni,e123;
	};
	
	struct Dll {
		Dll (float _e12,float _e13,float _e23,float _e1ni,float _e2ni,float _e3ni) : e12(_e12),e13(_e13),e23(_e23),e1ni(_e1ni),e2ni(_e2ni),e3ni(_e3ni) {}
		float e12,e13,e23,e1ni,e2ni,e3ni;
	};
	
	struct Lin {
		Lin (float _e12ni,float _e13ni,float _e23ni,float _e1noni,float _e2noni,float _e3noni) : e12ni(_e12ni),e13ni(_e13ni),e23ni(_e23ni),e1noni(_e1noni),e2noni(_e2noni),e3noni(_e3noni) {}
		float e12ni,e13ni,e23ni,e1noni,e2noni,e3noni;
	};
	
	struct Rot {
		Rot (float _s,float _e12,float _e13,float _e23) : s(_s),e12(_e12),e13(_e13),e23(_e23) {}
		float s,e12,e13,e23;
	};
	
	struct Trs {
		Trs (float _s,float _e1ni,float _e2ni,float _e3ni) : s(_s),e1ni(_e1ni),e2ni(_e2ni),e3ni(_e3ni) {}
		float s,e1ni,e2ni,e3ni;
	};
	
	struct Mot {
		Mot (float _s,float _e12,float _e13,float _e23,float _e1ni,float _e2ni,float _e3ni,float _e123ni) : s(_s),e12(_e12),e13(_e13),e23(_e23),e1ni(_e1ni),e2ni(_e2ni),e3ni(_e3ni),e123ni(_e123ni) {}
		float s,e12,e13,e23,e1ni,e2ni,e3ni,e123ni;
	};
	
	struct Dil {
		Dil (float _s,float _noni) : s(_s),noni(_noni) {}
		float s,noni;
	};
	
	struct Trv {
		Trv (float _s,float _e1no,float _e2no,float _e3no) : s(_s),e1no(_e1no),e2no(_e2no),e3no(_e3no) {}
		float s,e1no,e2no,e3no;
	};
    
    //Really an "mtt"
    Sca gp (const Pnt_Pnt a, const Pnt_Pnt b){
        return Sca ( a.s * b.s - a.e12 * b.e12 - a.e13 * b.e13 - a.e23 * b.e23 + a.e1no * b.e1ni + a.e2no * b.e2ni + a.e3no * b.e3ni + a.e1ni * b.e1no + a.e2ni * b.e2no + a.e3ni * b.e3no + a.noni * b.noni);
    }
    
    Pnt_Pnt gp (Pnt_Pnt a, Sca b) { 
        return Pnt_Pnt (
                        a.s * b.s,
                        a.e12 * b.s,
                        a.e13 * b.s,
                        a.e23 * b.s,
                        a.e1no * b.s,
                        a.e2no * b.s,
                        a.e3no * b.s,
                        a.e1ni * b.s,
                        a.e2ni * b.s,
                        a.e3ni * b.s,
                        a.noni * b.s
                        );
    }
    
    Trs gp (Trs a, Trs b) { 
        return Trs (
                    a.s * b.s,
                    a.s * b.e1ni + a.e1ni * b.s,
                    a.s * b.e2ni + a.e2ni * b.s,
                    a.s * b.e3ni + a.e3ni * b.s
                    );
    }			
    
    
    Trs gp (Trs a, Sca b) { 
        return Trs (
                    a.s * b.s,
                    a.e1ni * b.s,
                    a.e2ni * b.s,
                    a.e3ni * b.s
                    );
    }
    
    // Reversion
    Pnt_Pnt reverse (Pnt_Pnt a) { 
        return Pnt_Pnt (a.s,-a.e12,-a.e13,-a.e23,-a.e1no,-a.e2no,-a.e3no,-a.e1ni,-a.e2ni,-a.e3ni,-a.noni);
    }
    
    Pnt_Pnt inverse (const Pnt_Pnt a){
        Pnt_Pnt r = reverse(a);
        Sca s = gp(a,r);
        return gp(r, Sca(1.0/s.s) );
    }
    
    Trs reverse (Trs a) { 
        return Trs (a.s,-a.e1ni,-a.e2ni,-a.e3ni);
    }
    
    /// Inversion (weighted)
    Trs inverse (const Trs a){
        Trs r = reverse(a);
        Trs s = gp(a, r); //        if (s[0] == 0 ) return sr;
        return   gp(r, Sca( 1.0 / s.s ) ); 
    }
    
    Pnt gp (Pnt a, Sca b) { 
        return Pnt (
                    a.e1 * b.s,
                    a.e2 * b.s,
                    a.e3 * b.s,
                    a.no * b.s,
                    a.ni * b.s
                    );
    }
    
    Sca ip (Inf a, Pnt b) { 
        return Sca (
                    - a.ni * b.no
                    );
    }
    
    
    //Point from Vector
    Pnt null(const Vec3<> s){
        return Pnt ( s[0], s[1], s[2], 1.0, s.dot(s) / 2.0 );
    }
    //Vector from Piont
    Vec3<> euc3(const Pnt p){
        return Vec3<>(p.e1, p.e2, p.e3);
    }
    //Vector from Piont
    Vec3<> euc(const Pnt p){
        return Vec3<>(p.e1, p.e2, p.e3);
    }
    //Point from Point
    Pnt null(const Pnt s){
        Vec3<> v = euc3(s);
        return Pnt ( v[0], v[1], v[2], 1.0, v.dot(v) / 2.0 );
    }
    
    //Null Center of Round Element
    Pnt cen(const Pnt p) {
        Sca s = ip( Inf(-1.0), p );
        s.s = 1.0 / s.s;    
        return null ( gp(p,s) );
    }
    
    
    //Point Point ratio from Par
    Pnt_Pnt pp(const Par p){
        return Pnt_Pnt(1.0, p.e12,p.e13,p.e23,p.e1no,p.e2no,p.e3no,p.e1ni,p.e2ni,p.e3ni,p.noni);
    }
    
    //
    
    
    
    Par sp (const Tnv t2, const Trs t1) {					
        
        Tnv_Flp t3  = Tnv_Flp(
                              t1.e1ni * t2.e1no + t1.e2ni * t2.e2no + t1.e3ni * t2.e3no,
                              t1.e1ni * t2.e2no - t1.e2ni * t2.e1no,
                              t1.e1ni * t2.e3no - t1.e3ni * t2.e1no,
                              t1.e2ni * t2.e3no - t1.e3ni * t2.e2no,
                              t1.s * t2.e1no,
                              t1.s * t2.e2no,
                              t1.s * t2.e3no,
                              t1.e1ni * t2.e1no + t1.e2ni * t2.e2no + t1.e3ni * t2.e3no,
                              t1.e1ni * t2.e2no - t1.e2ni * t2.e1no,
                              t1.e1ni * t2.e3no - t1.e3ni * t2.e1no,
                              t1.e2ni * t2.e3no - t1.e3ni * t2.e2no
                              );
        Trs t5 = reverse( t1);
        return Par (
                    t3.e12 * t5.s + t3.e1no * t5.e2ni - t3.e2no * t5.e1ni,
                    t3.e13 * t5.s + t3.e1no * t5.e3ni - t3.e3no * t5.e1ni,
                    t3.e23 * t5.s + t3.e2no * t5.e3ni - t3.e3no * t5.e2ni,
                    t3.e1no * t5.s,
                    t3.e2no * t5.s,
                    t3.e3no * t5.s,
                    t3.s * t5.e1ni + t3.e12 * t5.e2ni + t3.e13 * t5.e3ni + t3.noni * t5.e1ni + t3.e12noni * t5.e2ni + t3.e13noni * t5.e3ni,
                    t3.s * t5.e2ni - t3.e12 * t5.e1ni + t3.e23 * t5.e3ni + t3.noni * t5.e2ni - t3.e12noni * t5.e1ni + t3.e23noni * t5.e3ni,
                    t3.s * t5.e3ni - t3.e13 * t5.e1ni - t3.e23 * t5.e2ni + t3.noni * t5.e3ni - t3.e13noni * t5.e1ni - t3.e23noni * t5.e2ni,
                    - t3.e1no * t5.e1ni - t3.e2no * t5.e2ni - t3.e3no * t5.e3ni + t3.noni * t5.s
                    );
        
    }
    
    
    //Boost Pnt 
    Pnt sp (const Pnt t2, const Pnt_Pnt t1) {					
        
        Pnt_Par t3  = Pnt_Par(
                              t1.s * t2.e1 + t1.e12 * t2.e2 + t1.e13 * t2.e3 - t1.e1no * t2.ni - t1.e1ni * t2.no,
                              t1.s * t2.e2 - t1.e12 * t2.e1 + t1.e23 * t2.e3 - t1.e2no * t2.ni - t1.e2ni * t2.no,
                              t1.s * t2.e3 - t1.e13 * t2.e1 - t1.e23 * t2.e2 - t1.e3no * t2.ni - t1.e3ni * t2.no,
                              t1.s * t2.no - t1.e1no * t2.e1 - t1.e2no * t2.e2 - t1.e3no * t2.e3 - t1.noni * t2.no,
                              t1.s * t2.ni - t1.e1ni * t2.e1 - t1.e2ni * t2.e2 - t1.e3ni * t2.e3 + t1.noni * t2.ni,
                              t1.e12 * t2.no - t1.e1no * t2.e2 + t1.e2no * t2.e1,
                              t1.e13 * t2.no - t1.e1no * t2.e3 + t1.e3no * t2.e1,
                              t1.e23 * t2.no - t1.e2no * t2.e3 + t1.e3no * t2.e2,
                              t1.e12 * t2.ni - t1.e1ni * t2.e2 + t1.e2ni * t2.e1,
                              t1.e13 * t2.ni - t1.e1ni * t2.e3 + t1.e3ni * t2.e1,
                              t1.e23 * t2.ni - t1.e2ni * t2.e3 + t1.e3ni * t2.e2,
                              t1.e1no * t2.ni - t1.e1ni * t2.no + t1.noni * t2.e1,
                              t1.e2no * t2.ni - t1.e2ni * t2.no + t1.noni * t2.e2,
                              t1.e3no * t2.ni - t1.e3ni * t2.no + t1.noni * t2.e3,
                              t1.e12 * t2.e3 - t1.e13 * t2.e2 + t1.e23 * t2.e1
                              );
        Pnt_Pnt t5 = reverse( t1);
        return Pnt (
                    t3.e1 * t5.s - t3.e2 * t5.e12 - t3.e3 * t5.e13 + t3.no * t5.e1ni + t3.ni * t5.e1no + t3.e12no * t5.e2ni + t3.e13no * t5.e3ni + t3.e12ni * t5.e2no + t3.e13ni * t5.e3no + t3.e1noni * t5.noni - t3.e123 * t5.e23,
                    t3.e1 * t5.e12 + t3.e2 * t5.s - t3.e3 * t5.e23 + t3.no * t5.e2ni + t3.ni * t5.e2no - t3.e12no * t5.e1ni + t3.e23no * t5.e3ni - t3.e12ni * t5.e1no + t3.e23ni * t5.e3no + t3.e2noni * t5.noni + t3.e123 * t5.e13,
                    t3.e1 * t5.e13 + t3.e2 * t5.e23 + t3.e3 * t5.s + t3.no * t5.e3ni + t3.ni * t5.e3no - t3.e13no * t5.e1ni - t3.e23no * t5.e2ni - t3.e13ni * t5.e1no - t3.e23ni * t5.e2no + t3.e3noni * t5.noni - t3.e123 * t5.e12,
                    t3.e1 * t5.e1no + t3.e2 * t5.e2no + t3.e3 * t5.e3no + t3.no * t5.s + t3.no * t5.noni - t3.e12no * t5.e12 - t3.e13no * t5.e13 - t3.e23no * t5.e23 - t3.e1noni * t5.e1no - t3.e2noni * t5.e2no - t3.e3noni * t5.e3no,
                    t3.e1 * t5.e1ni + t3.e2 * t5.e2ni + t3.e3 * t5.e3ni + t3.ni * t5.s - t3.ni * t5.noni - t3.e12ni * t5.e12 - t3.e13ni * t5.e13 - t3.e23ni * t5.e23 + t3.e1noni * t5.e1ni + t3.e2noni * t5.e2ni + t3.e3noni * t5.e3ni
                    );
        
    }
    
}       


//    //Create Boost Spinor from Tnv and Pos uniforms
//    Test::Tnv ttnv = Test::Tnv( v[0], v[1], v[2]);//.x, utnv.y, utnv.z );
//    Test::Trs trs = Test::Trs( 1.0, p[0] * -.5, p[1] * -.5, p[2] * -.5); //Translator
//    Test::Par par2 = sp( ttnv, trs );
//    Test::Pnt_Pnt pntpnt =  Test::pp(par2);
//    
//    IT(100)
//        float rad = 2 * PI * i / 100;
//        Vec2<> t (cos(rad), sin(rad));
//        //Convert vertex to CGA point
//        Test::Pnt p = Test::null( Vec3<>(t.x, t.y, 0) );
//        Test::Pnt pnt = sp( p, pntpnt );  //Transform CGA Point
//        Glyph::Point(euc(pnt) );
//    END 
//
//    float x = v[0];
//    float y = v[1];
//    float z = v[2];
//    
//    cout << x << " " << y << " " << z << "\n" << v << endl; 
//    
//    Vec3<> tmp( v[0], v[1], v[2] );
//    cout << tmp << endl; 


#endif
