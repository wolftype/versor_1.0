//
//  Drawable.h
//  vsr
//
//  Created by Pablo Colapinto on 3/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_Drawable_h
#define vsr_Drawable_h

namespace vsr  {
    class Drawable {
        virtual void draw() = 0;  
    };
    class Touchable {
        virtual void ui() = 0;  
    };
}

#endif
