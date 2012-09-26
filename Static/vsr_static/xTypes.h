//
//  vsr_types.h
//  vsr
//
//  Created by Pablo Colapinto on 5/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_vsr_types_h
#define vsr_vsr_types_h

#include <map>

namespace vsr {
    

    enum StandardTypes {
        BOOLEAN,
        UCHAR,
        CHAR,
        UINT,
        INT,
        ULONG,
        LONG,
        FLOAT,
        DOUBLE        
    };

typedef map< const char *, int> NameMap;

NameMap create_types(){
    NameMap m;
    bool b;
    unsigned char uc;
    char c;
    float f;
    double d;
    int i;
    
    m[ typeid(b).name() ] = BOOLEAN;
    m[ typeid(uc ).name() ] = UCHAR;
    m[ typeid(f ).name() ] = FLOAT;
    m[ typeid(d ).name() ] = DOUBLE;
    m[ typeid(i ).name() ] = DOUBLE;
    return m;
}

static NameMap Types = create_types();

} //vsr::

#endif
