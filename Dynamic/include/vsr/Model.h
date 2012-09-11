//
//  Model.h
//  vsr
//
//  Created by Pablo Colapinto on 3/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_Model_h
#define vsr_Model_h

#include "Set.h"
#include "Drawable.h"
#include "Interface.h"

namespace vsr  {
    class Model : public Set<State>, public Drawable {
        
    public:
        
        Interface * interface;
        
        Model(Interface * i) : interface(i) {}
        
        virtual void draw(){
            for (int i = 0; i < mStates.size(); ++i){
                mStates[i] -> draw();
            }
        }
    };
    

}

#endif
