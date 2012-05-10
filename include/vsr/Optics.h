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
    
    
    //double
    struct Lens {
        
        Lens( double r = 1.5, Cir c = CXY(1) ) : ridx(r), cir(c) {}
        
        Cir cir ;    ///
        
        double ridx; ///< Refraction Index
        
        /// Meet of ray and circle (entrance point)
        Pnt meet(const Dll ray) {
            Par p = (ray ^ Ro::sur( cir ) ).dual();
            return Ro::split2(p);
        }

        /// Meet of ray and circlem (exit point)
        Pnt exit(const Dll ray) {
            Par p = (ray ^ Ro::sur( cir ) ).dual();
            return Ro::split1(p);
        }
        
        Par meet( const Cir c){
//            return ( Ro::car ( Ro::sur(a) ^ Ro::sur(b) ).dual() ) ^ a.dual();
        }
    
        Dll reflect (const Dll ray) {
            return ( Ta::at( ray.re(cir),  meet(ray), false ) ^ Inf(1) ).dual();
        }

        
        Dll refract (const Dll ray) {
            
            //Line TANGENT To Circle AT MEET POINT
            Dll tan = ( Ta::at( cir, meet(ray), false ) ^ Inf(1) ).dual();
            
            //Ratio between line tangent and incoming ray
            Dll rat = Gen::dll_ratio( tan, ray );
            
            //half Angle Between Tangent and incoming ray
            double norm = rat.rnorm();

            if (norm > PI/4.0) {
                tan = tan.conjugate();
                rat = Gen::dll_ratio( tan, ray );
                norm = rat.rnorm();
            }
            
            //Spin Incoming Ray by ratio * refraction index
            return ray.mot( rat * (ridx-1) * ( PI/4.0 - norm ) );
        }
    
    };
    
} //vsr::

//  OLD NOTES FROM SCRATCH:

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
