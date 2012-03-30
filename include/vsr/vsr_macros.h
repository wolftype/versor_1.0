/*
 *  vrs_macros.h
 *  CONGA_07
 *
 *  Created by x on 8/20/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#ifndef VSR_MACROS_INCLUDED
#define VSR_MACROS_INCLUDED

#include "Op.h"

namespace vsr {

//CXR
#define PT(x,y,z) Ro::null(Vec(x,y,z))
#define PV(v) Ro::null(v)
#define PX(f) Ro::null(Vec(f,0,0))
#define PY(f) Ro::null(Vec(0,f,0))
#define PZ(f) Ro::null(Vec(0,0,f))
#define CXY(f) PX(f)^PX(-f)^PY(f)
#define CXZ(f) PX(f)^PX(-f)^PZ(f)
#define CYZ(f) PY(f)^PY(-f)^PZ(f)
#define F2S(f) f*1000.0
#define S2F(f) f/1000.0
#define LN(x,y,z) (Ori(1)^PT(x,y,z)^Inf(1))
#define DLN(x,y,z) Op::dl(Ori(1)^PT(x,y,z)^Inf(1))
#define EP Dls(0,0,0,1,-.5)
#define EM Dls(0,0,0,1,.5)
#define INF Inf(1)
#define HLN(x,y,z) (Ori(1)^PT(x,y,z)^EP) //hyperbolic line (circle)
#define HDLN(x,y,z) (Op::dl(HLN(x,y,z)))
//#define IT(x)

//#define dbxy(f) 

//#define CMP(min,max,omin,omax,val) 
#ifndef CLAMP 
#define CLAMP(val,min,max) val<min?min:val>max?max:val 
#endif
//#define D2R(val) PI*val/180.0

}

#endif