//
//  Cell.h
//  vsr
//
//  Created by Pablo Colapinto on 5/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_Cell_h
#define vsr_Cell_h


namespace vsr{

    class Cell {
        
        bool bAlive;
    
        double mSize;
        
        public:
        
        void grow(double rate) { mSize+= rate; }
        void die(){ bAlive = 0; }
    };
    
} //vsr::

#endif
