//
//  vsr_gam.h
//  Versor
//
/*

    Integration with Gamma generic synthesis library
    
*/
//  Created by Pablo Colapinto on 1/14/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_gam_h
#define Versor_vsr_gam_h


#include "Gamma/Gamma.h"
#include "Gamma/Sync.h"

/*!
Master Sync Singleton at Graphics Sampling Rate (e.g. 60 fps)
*/
namespace vsr {

	class GfxSync : public gam::Sync {

		GfxSync() : gam::Sync(60){};
	
		public:
		 
		 static GfxSync& master() {
			static GfxSync TheGfxSync;
			return TheGfxSync;
		 }
	};

} //vsr::


#endif
