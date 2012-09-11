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
        public:
        
        //virtual void draw(float a, float b, float c) = 0;
        virtual void draw() = 0;  
    };
    
    class Touchable : public Drawable {

    protected: 
        bool bSelected;
        
        public:
        
        Touchable() : bSelected(0){}
        
        Touchable& select()     { bSelected = 1; return *this; }
        Touchable& deselect()   { bSelected = 0; return *this; }
        bool isSelected()  const { return bSelected; }
        bool& isSelected()  { return bSelected; }
        void toggle()       { bSelected = !bSelected; }
        
        //virtual void ui() = 0;  
    };
}

#endif
