//
//  Drawable.h
//  vsr_static
//
//  Created by Pablo Colapinto on 9/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
/*

    Draw and Interface

*/
#ifndef vsr_static_Drawable_h
#define vsr_static_Drawable_h


namespace vsr  {

  struct Drawable {
    
    virtual void draw() = 0;
    
  };
  
  struct Touchable : public Drawable {
    Touchable() : bSelected(0){}
    bool bSelected;
//    virtual void onMouseDown() = 0;
//    virtual void hitTest() = 0;
    Touchable& select()     { bSelected = 1; return *this; }
    Touchable& deselect()   { bSelected = 0; return *this; }
    bool isSelected()  const { return bSelected; }
    bool& isSelected()  { return bSelected; }
    void toggle() { bSelected = !bSelected; }
    virtual void draw(){}
  };
}

#endif