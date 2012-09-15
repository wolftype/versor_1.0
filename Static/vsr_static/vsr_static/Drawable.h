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



#endif


namespace vsr  {

  struct Drawable {
    virtual void draw(float r, float g, float b, float a) {};
  };
  
  struct Touchable {
    bool bSelected;
    virtual void onMouseDown() = 0;
    virtual void hitTest() = 0;
    bool isSelected() { return bSelected; }
  };
}