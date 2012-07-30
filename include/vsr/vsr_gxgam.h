//
//  vsr_gxgam.h
//  vsr
//
//  Created by Pablo Colapinto on 6/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_vsr_gxgam_h
#define vsr_vsr_gxgam_h

#include "Gamma/Gamma.h"
#include "Gamma/Sync.h"

/*!
Master Sync at Graphics Sampling Rate (e.g. 60 fps)
*/
namespace vsr {

	class GxSync : public gam::Sync {

		GxSync() : gam::Sync(60){};
	
		public:
		 
		 static GxSync& master() {
			static GxSync TheGxSync;
			return TheGxSync;
		 }
	};

} //vsr::

#endif
