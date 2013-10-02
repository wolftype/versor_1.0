//
//  vsr_nestedFrame.h
//  Versor
//
//  Created by Pablo Colapinto on 11/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_nestedFrame_h
#define Versor_vsr_nestedFrame_h

namespace vsr {

    /// Frames within Frames
    struct NestedFrame : public Frame {
         NestedFrame() : Frame(), mParent(NULL) {}  

        

         private:
         Frame * mParent;
         
         
    };



} //vsr::

#endif
