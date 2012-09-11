		#ifndef TRT_H_INCLUDED
		#define TRT_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Trt gp (const Trt& a, const Sca& b) { 
	return Trt (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[7] * b[0],
a[8] * b[0],
a[9] * b[0],
a[10] * b[0],
a[11] * b[0],
a[12] * b[0],
a[13] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Sca*)(&b));
}			
		 
inline Ori_Par gp (const Trt& a, const Ori& b) { 
	return Ori_Par (
 - a[7] * b[0],
 - a[8] * b[0],
 - a[9] * b[0],
a[0] * b[0] - a[10] * b[0],
a[1] * b[0] - a[11] * b[0],
a[2] * b[0] - a[12] * b[0],
a[3] * b[0] - a[13] * b[0],
 - a[7] * b[0],
 - a[8] * b[0],
 - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Ori*)(&b));
}			
		 
inline Inf_Par gp (const Trt& a, const Inf& b) { 
	return Inf_Par (
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
a[0] * b[0] + a[10] * b[0],
a[1] * b[0] + a[11] * b[0],
a[2] * b[0] + a[12] * b[0],
a[3] * b[0] + a[13] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Inf*)(&b));
}			
		 
inline Trt gp (const Trt& a, const Mnk& b) { 
	return Trt (
a[10] * b[0],
a[11] * b[0],
a[12] * b[0],
a[13] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
 - a[7] * b[0],
 - a[8] * b[0],
 - a[9] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Par gp (const Trt& a, const Hyp& b) { 
	return Hyp_Par (
 - a[4] * b[1] - a[7] * b[0],
 - a[5] * b[1] - a[8] * b[0],
 - a[6] * b[1] - a[9] * b[0],
a[0] * b[0] - a[10] * b[0],
a[0] * b[1] + a[10] * b[1],
a[1] * b[0] - a[11] * b[0],
a[2] * b[0] - a[12] * b[0],
a[3] * b[0] - a[13] * b[0],
a[1] * b[1] + a[11] * b[1],
a[2] * b[1] + a[12] * b[1],
a[3] * b[1] + a[13] * b[1],
a[4] * b[1] - a[7] * b[0],
a[5] * b[1] - a[8] * b[0],
a[6] * b[1] - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Hyp*)(&b));
}			
		 
inline Flp_Afp gp (const Trt& a, const Pss& b) { 
	return Flp_Afp (
 - a[13] * b[0],
a[12] * b[0],
 - a[11] * b[0],
 - a[6] * b[0],
a[5] * b[0],
 - a[4] * b[0],
a[9] * b[0],
 - a[8] * b[0],
a[7] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[10] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Pss*)(&b));
}			
		 
inline Rtc gp (const Trt& a, const Pnt& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[4] - a[7] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[4] - a[8] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[4] - a[9] * b[3],
a[0] * b[3] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[10] * b[3],
a[0] * b[4] - a[7] * b[0] - a[8] * b[1] - a[9] * b[2] + a[10] * b[4],
a[1] * b[3] - a[4] * b[1] + a[5] * b[0] - a[11] * b[3],
a[2] * b[3] - a[4] * b[2] + a[6] * b[0] - a[12] * b[3],
a[3] * b[3] - a[5] * b[2] + a[6] * b[1] - a[13] * b[3],
a[1] * b[4] - a[7] * b[1] + a[8] * b[0] + a[11] * b[4],
a[2] * b[4] - a[7] * b[2] + a[9] * b[0] + a[12] * b[4],
a[3] * b[4] - a[8] * b[2] + a[9] * b[1] + a[13] * b[4],
a[4] * b[4] - a[7] * b[3] + a[10] * b[0] + a[11] * b[1] + a[12] * b[2],
a[5] * b[4] - a[8] * b[3] + a[10] * b[1] - a[11] * b[0] + a[13] * b[2],
a[6] * b[4] - a[9] * b[3] + a[10] * b[2] - a[12] * b[0] - a[13] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[11] * b[2] - a[12] * b[1] + a[13] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Pnt*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Par& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[6] + a[5] * b[7] + a[6] * b[8] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5] + a[10] * b[9],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[7] - a[5] * b[6] + a[7] * b[4] - a[8] * b[3] + a[11] * b[9],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[8] - a[6] * b[6] + a[7] * b[5] - a[9] * b[3] + a[12] * b[9],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[8] - a[6] * b[7] + a[8] * b[5] - a[9] * b[4] + a[13] * b[9],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[4] * b[9] - a[5] * b[0] - a[6] * b[1] - a[10] * b[3] - a[11] * b[4] - a[12] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] + a[5] * b[9] - a[6] * b[2] - a[10] * b[4] + a[11] * b[3] - a[13] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] + a[6] * b[9] - a[10] * b[5] + a[12] * b[3] + a[13] * b[4],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[7] * b[9] - a[8] * b[0] - a[9] * b[1] + a[10] * b[6] + a[11] * b[7] + a[12] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[7] * b[0] - a[8] * b[9] - a[9] * b[2] + a[10] * b[7] - a[11] * b[6] + a[13] * b[8],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[7] * b[1] + a[8] * b[2] - a[9] * b[9] + a[10] * b[8] - a[12] * b[6] - a[13] * b[7],
a[0] * b[9] - a[4] * b[6] - a[5] * b[7] - a[6] * b[8] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5] - a[11] * b[0] - a[12] * b[1] - a[13] * b[2],
a[1] * b[9] - a[4] * b[7] + a[5] * b[6] + a[7] * b[4] - a[8] * b[3] + a[10] * b[0] - a[12] * b[2] + a[13] * b[1],
a[2] * b[9] - a[4] * b[8] + a[6] * b[6] + a[7] * b[5] - a[9] * b[3] + a[10] * b[1] + a[11] * b[2] - a[13] * b[0],
a[3] * b[9] - a[5] * b[8] + a[6] * b[7] + a[8] * b[5] - a[9] * b[4] + a[10] * b[2] - a[11] * b[1] + a[12] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] - a[11] * b[5] + a[12] * b[4] - a[13] * b[3],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0] + a[11] * b[8] - a[12] * b[7] + a[13] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Par*)(&b));
}			
		 
inline Rtc gp (const Trt& a, const Cir& b) { 
	return Rtc (
 - a[3] * b[9] + a[5] * b[3] + a[6] * b[4] + a[8] * b[0] + a[9] * b[1] + a[10] * b[6] + a[11] * b[7] + a[12] * b[8],
a[2] * b[9] - a[4] * b[3] + a[6] * b[5] - a[7] * b[0] + a[9] * b[2] + a[10] * b[7] - a[11] * b[6] + a[13] * b[8],
 - a[1] * b[9] - a[4] * b[4] - a[5] * b[5] - a[7] * b[1] - a[8] * b[2] + a[10] * b[8] - a[12] * b[6] - a[13] * b[7],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[4] * b[6] - a[5] * b[7] - a[6] * b[8] + a[11] * b[0] + a[12] * b[1] + a[13] * b[2],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5] + a[7] * b[6] + a[8] * b[7] + a[9] * b[8] - a[11] * b[3] - a[12] * b[4] - a[13] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[4] * b[7] + a[5] * b[6] - a[6] * b[9] - a[10] * b[0] + a[12] * b[2] - a[13] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[4] * b[8] + a[5] * b[9] + a[6] * b[6] - a[10] * b[1] - a[11] * b[2] + a[13] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[9] - a[5] * b[8] + a[6] * b[7] - a[10] * b[2] + a[11] * b[1] - a[12] * b[0],
a[0] * b[3] - a[2] * b[5] + a[3] * b[4] + a[7] * b[7] - a[8] * b[6] - a[9] * b[9] + a[10] * b[3] - a[12] * b[5] + a[13] * b[4],
a[0] * b[4] + a[1] * b[5] - a[3] * b[3] + a[7] * b[8] + a[8] * b[9] - a[9] * b[6] + a[10] * b[4] + a[11] * b[5] - a[13] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[7] * b[9] + a[8] * b[8] - a[9] * b[7] + a[10] * b[5] - a[11] * b[4] + a[12] * b[3],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[5] * b[3] - a[6] * b[4] + a[8] * b[0] + a[9] * b[1] - a[13] * b[9],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[4] * b[3] - a[6] * b[5] - a[7] * b[0] + a[9] * b[2] + a[12] * b[9],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[4] * b[4] + a[5] * b[5] - a[7] * b[1] - a[8] * b[2] - a[11] * b[9],
a[0] * b[9] - a[4] * b[5] + a[5] * b[4] - a[6] * b[3] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0] + a[11] * b[8] - a[12] * b[7] + a[13] * b[6],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[4] * b[5] - a[5] * b[4] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0] + a[10] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Cir*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Sph& b) { 
	return Mtt (
 - a[11] * b[0] - a[12] * b[1] - a[13] * b[2],
a[6] * b[4] + a[9] * b[3] + a[10] * b[0] - a[12] * b[2] + a[13] * b[1],
 - a[5] * b[4] - a[8] * b[3] + a[10] * b[1] + a[11] * b[2] - a[13] * b[0],
a[4] * b[4] + a[7] * b[3] + a[10] * b[2] - a[11] * b[1] + a[12] * b[0],
 - a[3] * b[3] - a[5] * b[0] - a[6] * b[1] + a[13] * b[3],
a[2] * b[3] + a[4] * b[0] - a[6] * b[2] - a[12] * b[3],
 - a[1] * b[3] + a[4] * b[1] + a[5] * b[2] + a[11] * b[3],
 - a[3] * b[4] + a[8] * b[0] + a[9] * b[1] - a[13] * b[4],
a[2] * b[4] - a[7] * b[0] + a[9] * b[2] + a[12] * b[4],
 - a[1] * b[4] - a[7] * b[1] - a[8] * b[2] - a[11] * b[4],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[6] * b[4] + a[9] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[5] * b[4] - a[8] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[4] + a[7] * b[3],
a[0] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] - a[10] * b[3],
a[0] * b[4] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0] + a[10] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Sph*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Sta& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[6] + a[5] * b[7] + a[6] * b[8] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[7] - a[5] * b[6] + a[7] * b[4] - a[8] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[8] - a[6] * b[6] + a[7] * b[5] - a[9] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[8] - a[6] * b[7] + a[8] * b[5] - a[9] * b[4],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[5] * b[0] - a[6] * b[1] - a[10] * b[3] - a[11] * b[4] - a[12] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] - a[6] * b[2] - a[10] * b[4] + a[11] * b[3] - a[13] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] - a[10] * b[5] + a[12] * b[3] + a[13] * b[4],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[8] * b[0] - a[9] * b[1] + a[10] * b[6] + a[11] * b[7] + a[12] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[7] * b[0] - a[9] * b[2] + a[10] * b[7] - a[11] * b[6] + a[13] * b[8],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[7] * b[1] + a[8] * b[2] + a[10] * b[8] - a[12] * b[6] - a[13] * b[7],
 - a[4] * b[6] - a[5] * b[7] - a[6] * b[8] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5] - a[11] * b[0] - a[12] * b[1] - a[13] * b[2],
 - a[4] * b[7] + a[5] * b[6] + a[7] * b[4] - a[8] * b[3] + a[10] * b[0] - a[12] * b[2] + a[13] * b[1],
 - a[4] * b[8] + a[6] * b[6] + a[7] * b[5] - a[9] * b[3] + a[10] * b[1] + a[11] * b[2] - a[13] * b[0],
 - a[5] * b[8] + a[6] * b[7] + a[8] * b[5] - a[9] * b[4] + a[10] * b[2] - a[11] * b[1] + a[12] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] - a[11] * b[5] + a[12] * b[4] - a[13] * b[3],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0] + a[11] * b[8] - a[12] * b[7] + a[13] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Sta*)(&b));
}			
		 
inline Mtd gp (const Trt& a, const Drv& b) { 
	return Mtd (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0],
a[4] * b[2] - a[6] * b[0],
a[5] * b[2] - a[6] * b[1],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[10] * b[0] + a[11] * b[1] + a[12] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] + a[10] * b[1] - a[11] * b[0] + a[13] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] + a[10] * b[2] - a[12] * b[0] - a[13] * b[1],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
 - a[4] * b[1] + a[5] * b[0],
 - a[4] * b[2] + a[6] * b[0],
 - a[5] * b[2] + a[6] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[11] * b[2] - a[12] * b[1] + a[13] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Drv*)(&b));
}			
		 
inline Par_Drb gp (const Trt& a, const Drb& b) { 
	return Par_Drb (
a[5] * b[0] + a[6] * b[1],
 - a[4] * b[0] + a[6] * b[2],
 - a[4] * b[1] - a[5] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[11] * b[0] - a[12] * b[1] - a[13] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[10] * b[0] - a[12] * b[2] + a[13] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[10] * b[1] + a[11] * b[2] - a[13] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[10] * b[2] - a[11] * b[1] + a[12] * b[0],
 - a[5] * b[0] - a[6] * b[1],
a[4] * b[0] - a[6] * b[2],
a[4] * b[1] + a[5] * b[2],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Drb*)(&b));
}			
		 
inline Inf_Cir gp (const Trt& a, const Drt& b) { 
	return Inf_Cir (
a[6] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0] - a[13] * b[0],
a[2] * b[0] + a[12] * b[0],
 - a[1] * b[0] - a[11] * b[0],
 - a[6] * b[0],
a[5] * b[0],
 - a[4] * b[0],
a[0] * b[0] + a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Drt*)(&b));
}			
		 
inline Rvd gp (const Trt& a, const Tnv& b) { 
	return Rvd (
a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[7] * b[1] - a[8] * b[0],
a[7] * b[2] - a[9] * b[0],
a[8] * b[2] - a[9] * b[1],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[10] * b[0] - a[11] * b[1] - a[12] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[10] * b[1] + a[11] * b[0] - a[13] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[10] * b[2] + a[12] * b[0] + a[13] * b[1],
a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[7] * b[1] - a[8] * b[0],
a[7] * b[2] - a[9] * b[0],
a[8] * b[2] - a[9] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[11] * b[2] + a[12] * b[1] - a[13] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Tnv*)(&b));
}			
		 
inline Par_Tnb gp (const Trt& a, const Tnb& b) { 
	return Par_Tnb (
a[8] * b[0] + a[9] * b[1],
 - a[7] * b[0] + a[9] * b[2],
 - a[7] * b[1] - a[8] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[11] * b[0] + a[12] * b[1] + a[13] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[10] * b[0] + a[12] * b[2] - a[13] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[10] * b[1] - a[11] * b[2] + a[13] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[10] * b[2] + a[11] * b[1] - a[12] * b[0],
a[8] * b[0] + a[9] * b[1],
 - a[7] * b[0] + a[9] * b[2],
 - a[7] * b[1] - a[8] * b[2],
 - a[7] * b[2] + a[8] * b[1] - a[9] * b[0],
 - a[7] * b[2] + a[8] * b[1] - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori_Cir gp (const Trt& a, const Tnt& b) { 
	return Ori_Cir (
a[9] * b[0],
 - a[8] * b[0],
a[7] * b[0],
 - a[3] * b[0] + a[13] * b[0],
a[2] * b[0] - a[12] * b[0],
 - a[1] * b[0] + a[11] * b[0],
a[9] * b[0],
 - a[8] * b[0],
a[7] * b[0],
a[0] * b[0] - a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Tnt*)(&b));
}			
		 
inline Rtc gp (const Trt& a, const Lin& b) { 
	return Rtc (
a[5] * b[0] + a[6] * b[1] + a[10] * b[3] + a[11] * b[4] + a[12] * b[5],
 - a[4] * b[0] + a[6] * b[2] + a[10] * b[4] - a[11] * b[3] + a[13] * b[5],
 - a[4] * b[1] - a[5] * b[2] + a[10] * b[5] - a[12] * b[3] - a[13] * b[4],
 - a[4] * b[3] - a[5] * b[4] - a[6] * b[5],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5] - a[11] * b[0] - a[12] * b[1] - a[13] * b[2],
 - a[4] * b[4] + a[5] * b[3],
 - a[4] * b[5] + a[6] * b[3],
 - a[5] * b[5] + a[6] * b[4],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[7] * b[4] - a[8] * b[3] + a[10] * b[0] - a[12] * b[2] + a[13] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[7] * b[5] - a[9] * b[3] + a[10] * b[1] + a[11] * b[2] - a[13] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[8] * b[5] - a[9] * b[4] + a[10] * b[2] - a[11] * b[1] + a[12] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[5] * b[0] - a[6] * b[1],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] - a[6] * b[2],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0] + a[11] * b[5] - a[12] * b[4] + a[13] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Lin*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Pln& b) { 
	return Mtt (
 - a[11] * b[0] - a[12] * b[1] - a[13] * b[2],
a[6] * b[3] + a[10] * b[0] - a[12] * b[2] + a[13] * b[1],
 - a[5] * b[3] + a[10] * b[1] + a[11] * b[2] - a[13] * b[0],
a[4] * b[3] + a[10] * b[2] - a[11] * b[1] + a[12] * b[0],
 - a[5] * b[0] - a[6] * b[1],
a[4] * b[0] - a[6] * b[2],
a[4] * b[1] + a[5] * b[2],
 - a[3] * b[3] + a[8] * b[0] + a[9] * b[1] - a[13] * b[3],
a[2] * b[3] - a[7] * b[0] + a[9] * b[2] + a[12] * b[3],
 - a[1] * b[3] - a[7] * b[1] - a[8] * b[2] - a[11] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[6] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[0] * b[3] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0] + a[10] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Pln*)(&b));
}			
		 
inline Tvt gp (const Trt& a, const Flp& b) { 
	return Tvt (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2] + a[10] * b[3],
a[4] * b[1] - a[5] * b[0] + a[11] * b[3],
a[4] * b[2] - a[6] * b[0] + a[12] * b[3],
a[5] * b[2] - a[6] * b[1] + a[13] * b[3],
a[4] * b[3],
a[5] * b[3],
a[6] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[7] * b[3] + a[10] * b[0] + a[11] * b[1] + a[12] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[8] * b[3] + a[10] * b[1] - a[11] * b[0] + a[13] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[9] * b[3] + a[10] * b[2] - a[12] * b[0] - a[13] * b[1],
a[0] * b[3] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[1] * b[3] - a[4] * b[1] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[6] * b[0],
a[3] * b[3] - a[5] * b[2] + a[6] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[11] * b[2] - a[12] * b[1] + a[13] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Flp*)(&b));
}			
		 
inline Par_Dfp gp (const Trt& a, const Dfp& b) { 
	return Par_Dfp (
 - a[3] * b[3] + a[5] * b[0] + a[6] * b[1],
a[2] * b[3] - a[4] * b[0] + a[6] * b[2],
 - a[1] * b[3] - a[4] * b[1] - a[5] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[11] * b[0] - a[12] * b[1] - a[13] * b[2],
 - a[6] * b[3],
a[5] * b[3],
 - a[4] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[9] * b[3] + a[10] * b[0] - a[12] * b[2] + a[13] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[8] * b[3] + a[10] * b[1] + a[11] * b[2] - a[13] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[7] * b[3] + a[10] * b[2] - a[11] * b[1] + a[12] * b[0],
 - a[5] * b[0] - a[6] * b[1] - a[13] * b[3],
a[4] * b[0] - a[6] * b[2] + a[12] * b[3],
a[4] * b[1] + a[5] * b[2] - a[11] * b[3],
a[0] * b[3] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0] + a[10] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Dfp*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Dll& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[4] - a[5] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[5] - a[6] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[5] - a[6] * b[4],
 - a[5] * b[0] - a[6] * b[1],
a[4] * b[0] - a[6] * b[2],
a[4] * b[1] + a[5] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[8] * b[0] - a[9] * b[1] + a[10] * b[3] + a[11] * b[4] + a[12] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[7] * b[0] - a[9] * b[2] + a[10] * b[4] - a[11] * b[3] + a[13] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[7] * b[1] + a[8] * b[2] + a[10] * b[5] - a[12] * b[3] - a[13] * b[4],
 - a[4] * b[3] - a[5] * b[4] - a[6] * b[5] - a[11] * b[0] - a[12] * b[1] - a[13] * b[2],
 - a[4] * b[4] + a[5] * b[3] + a[10] * b[0] - a[12] * b[2] + a[13] * b[1],
 - a[4] * b[5] + a[6] * b[3] + a[10] * b[1] + a[11] * b[2] - a[13] * b[0],
 - a[5] * b[5] + a[6] * b[4] + a[10] * b[2] - a[11] * b[1] + a[12] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0] + a[11] * b[5] - a[12] * b[4] + a[13] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Dll*)(&b));
}			
		 
inline Rtc gp (const Trt& a, const Dlp& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[3],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[0] * b[3] - a[7] * b[0] - a[8] * b[1] - a[9] * b[2] + a[10] * b[3],
 - a[4] * b[1] + a[5] * b[0],
 - a[4] * b[2] + a[6] * b[0],
 - a[5] * b[2] + a[6] * b[1],
a[1] * b[3] - a[7] * b[1] + a[8] * b[0] + a[11] * b[3],
a[2] * b[3] - a[7] * b[2] + a[9] * b[0] + a[12] * b[3],
a[3] * b[3] - a[8] * b[2] + a[9] * b[1] + a[13] * b[3],
a[4] * b[3] + a[10] * b[0] + a[11] * b[1] + a[12] * b[2],
a[5] * b[3] + a[10] * b[1] - a[11] * b[0] + a[13] * b[2],
a[6] * b[3] + a[10] * b[2] - a[12] * b[0] - a[13] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[11] * b[2] - a[12] * b[1] + a[13] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Dlp*)(&b));
}			
		 
inline Rtc gp (const Trt& a, const Vec& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
 - a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
 - a[4] * b[1] + a[5] * b[0],
 - a[4] * b[2] + a[6] * b[0],
 - a[5] * b[2] + a[6] * b[1],
 - a[7] * b[1] + a[8] * b[0],
 - a[7] * b[2] + a[9] * b[0],
 - a[8] * b[2] + a[9] * b[1],
a[10] * b[0] + a[11] * b[1] + a[12] * b[2],
a[10] * b[1] - a[11] * b[0] + a[13] * b[2],
a[10] * b[2] - a[12] * b[0] - a[13] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[11] * b[2] - a[12] * b[1] + a[13] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Vec*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Biv& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[5] * b[0] - a[6] * b[1],
a[4] * b[0] - a[6] * b[2],
a[4] * b[1] + a[5] * b[2],
 - a[8] * b[0] - a[9] * b[1],
a[7] * b[0] - a[9] * b[2],
a[7] * b[1] + a[8] * b[2],
 - a[11] * b[0] - a[12] * b[1] - a[13] * b[2],
a[10] * b[0] - a[12] * b[2] + a[13] * b[1],
a[10] * b[1] + a[11] * b[2] - a[13] * b[0],
a[10] * b[2] - a[11] * b[1] + a[12] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[7] * b[2] - a[8] * b[1] + a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Biv*)(&b));
}			
		 
inline Flp_Afp gp (const Trt& a, const Tri& b) { 
	return Flp_Afp (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
 - a[6] * b[0],
a[5] * b[0],
 - a[4] * b[0],
 - a[9] * b[0],
a[8] * b[0],
 - a[7] * b[0],
 - a[13] * b[0],
a[12] * b[0],
 - a[11] * b[0],
a[0] * b[0],
a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Tri*)(&b));
}			
		 
inline Rtc gp (const Trt& a, const Aff& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[7] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[8] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[9] * b[3],
a[0] * b[3] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[10] * b[3],
 - a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
a[1] * b[3] - a[4] * b[1] + a[5] * b[0] - a[11] * b[3],
a[2] * b[3] - a[4] * b[2] + a[6] * b[0] - a[12] * b[3],
a[3] * b[3] - a[5] * b[2] + a[6] * b[1] - a[13] * b[3],
 - a[7] * b[1] + a[8] * b[0],
 - a[7] * b[2] + a[9] * b[0],
 - a[8] * b[2] + a[9] * b[1],
 - a[7] * b[3] + a[10] * b[0] + a[11] * b[1] + a[12] * b[2],
 - a[8] * b[3] + a[10] * b[1] - a[11] * b[0] + a[13] * b[2],
 - a[9] * b[3] + a[10] * b[2] - a[12] * b[0] - a[13] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[11] * b[2] - a[12] * b[1] + a[13] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Aff*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Afl& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[7] * b[4] - a[8] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[7] * b[5] - a[9] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[8] * b[5] - a[9] * b[4],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[5] * b[0] - a[6] * b[1] - a[10] * b[3] - a[11] * b[4] - a[12] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] - a[6] * b[2] - a[10] * b[4] + a[11] * b[3] - a[13] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] - a[10] * b[5] + a[12] * b[3] + a[13] * b[4],
 - a[8] * b[0] - a[9] * b[1],
a[7] * b[0] - a[9] * b[2],
a[7] * b[1] + a[8] * b[2],
a[7] * b[3] + a[8] * b[4] + a[9] * b[5] - a[11] * b[0] - a[12] * b[1] - a[13] * b[2],
a[7] * b[4] - a[8] * b[3] + a[10] * b[0] - a[12] * b[2] + a[13] * b[1],
a[7] * b[5] - a[9] * b[3] + a[10] * b[1] + a[11] * b[2] - a[13] * b[0],
a[8] * b[5] - a[9] * b[4] + a[10] * b[2] - a[11] * b[1] + a[12] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] - a[11] * b[5] + a[12] * b[4] - a[13] * b[3],
a[7] * b[2] - a[8] * b[1] + a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Afl*)(&b));
}			
		 
inline Par_Afp gp (const Trt& a, const Afp& b) { 
	return Par_Afp (
 - a[3] * b[3] + a[8] * b[0] + a[9] * b[1],
a[2] * b[3] - a[7] * b[0] + a[9] * b[2],
 - a[1] * b[3] - a[7] * b[1] - a[8] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[11] * b[0] + a[12] * b[1] + a[13] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[6] * b[3] - a[10] * b[0] + a[12] * b[2] - a[13] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[5] * b[3] - a[10] * b[1] - a[11] * b[2] + a[13] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3] - a[10] * b[2] + a[11] * b[1] - a[12] * b[0],
 - a[9] * b[3],
a[8] * b[3],
 - a[7] * b[3],
a[8] * b[0] + a[9] * b[1] - a[13] * b[3],
 - a[7] * b[0] + a[9] * b[2] + a[12] * b[3],
 - a[7] * b[1] - a[8] * b[2] - a[11] * b[3],
a[0] * b[3] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0],
 - a[7] * b[2] + a[8] * b[1] - a[9] * b[0] + a[10] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Afp*)(&b));
}			
		 
inline Tst gp (const Trt& a, const Dap& b) { 
	return Tst (
a[7] * b[0] + a[8] * b[1] + a[9] * b[2] + a[10] * b[3],
a[7] * b[1] - a[8] * b[0] + a[11] * b[3],
a[7] * b[2] - a[9] * b[0] + a[12] * b[3],
a[8] * b[2] - a[9] * b[1] + a[13] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[4] * b[3] - a[10] * b[0] - a[11] * b[1] - a[12] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] + a[5] * b[3] - a[10] * b[1] + a[11] * b[0] - a[13] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] + a[6] * b[3] - a[10] * b[2] + a[12] * b[0] + a[13] * b[1],
 - a[7] * b[3],
 - a[8] * b[3],
 - a[9] * b[3],
a[0] * b[3] + a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[1] * b[3] + a[7] * b[1] - a[8] * b[0],
a[2] * b[3] + a[7] * b[2] - a[9] * b[0],
a[3] * b[3] + a[8] * b[2] - a[9] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[11] * b[2] + a[12] * b[1] - a[13] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Dap*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Daf& b) { 
	return Mtt (
 - a[11] * b[0] - a[12] * b[1] - a[13] * b[2],
a[9] * b[3] + a[10] * b[0] - a[12] * b[2] + a[13] * b[1],
 - a[8] * b[3] + a[10] * b[1] + a[11] * b[2] - a[13] * b[0],
a[7] * b[3] + a[10] * b[2] - a[11] * b[1] + a[12] * b[0],
 - a[3] * b[3] - a[5] * b[0] - a[6] * b[1] + a[13] * b[3],
a[2] * b[3] + a[4] * b[0] - a[6] * b[2] - a[12] * b[3],
 - a[1] * b[3] + a[4] * b[1] + a[5] * b[2] + a[11] * b[3],
a[8] * b[0] + a[9] * b[1],
 - a[7] * b[0] + a[9] * b[2],
 - a[7] * b[1] - a[8] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[9] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[8] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[7] * b[3],
a[0] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] - a[10] * b[3],
 - a[7] * b[2] + a[8] * b[1] - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Daf*)(&b));
}			
		 
inline Rtc gp (const Trt& a, const Dal& b) { 
	return Rtc (
a[8] * b[0] + a[9] * b[1] + a[10] * b[3] + a[11] * b[4] + a[12] * b[5],
 - a[7] * b[0] + a[9] * b[2] + a[10] * b[4] - a[11] * b[3] + a[13] * b[5],
 - a[7] * b[1] - a[8] * b[2] + a[10] * b[5] - a[12] * b[3] - a[13] * b[4],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[4] * b[3] - a[5] * b[4] - a[6] * b[5] + a[11] * b[0] + a[12] * b[1] + a[13] * b[2],
a[7] * b[3] + a[8] * b[4] + a[9] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[4] * b[4] + a[5] * b[3] - a[10] * b[0] + a[12] * b[2] - a[13] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[4] * b[5] + a[6] * b[3] - a[10] * b[1] - a[11] * b[2] + a[13] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[5] * b[5] + a[6] * b[4] - a[10] * b[2] + a[11] * b[1] - a[12] * b[0],
a[7] * b[4] - a[8] * b[3],
a[7] * b[5] - a[9] * b[3],
a[8] * b[5] - a[9] * b[4],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[8] * b[0] + a[9] * b[1],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] - a[7] * b[0] + a[9] * b[2],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] - a[7] * b[1] - a[8] * b[2],
 - a[7] * b[2] + a[8] * b[1] - a[9] * b[0] + a[11] * b[5] - a[12] * b[4] + a[13] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Dal*)(&b));
}			
		 
inline Rtc gp (const Trt& a, const Mnv& b) { 
	return Rtc (
a[10] * b[0] + a[11] * b[1] + a[12] * b[2],
a[10] * b[1] - a[11] * b[0] + a[13] * b[2],
a[10] * b[2] - a[12] * b[0] - a[13] * b[1],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
 - a[4] * b[1] + a[5] * b[0],
 - a[4] * b[2] + a[6] * b[0],
 - a[5] * b[2] + a[6] * b[1],
a[7] * b[1] - a[8] * b[0],
a[7] * b[2] - a[9] * b[0],
a[8] * b[2] - a[9] * b[1],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[11] * b[2] - a[12] * b[1] + a[13] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Mnv*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Rot& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0],
a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
a[7] * b[1] + a[8] * b[0] - a[9] * b[3],
a[7] * b[2] + a[8] * b[3] + a[9] * b[0],
a[10] * b[0] - a[11] * b[1] - a[12] * b[2] - a[13] * b[3],
a[10] * b[1] + a[11] * b[0] - a[12] * b[3] + a[13] * b[2],
a[10] * b[2] + a[11] * b[3] + a[12] * b[0] - a[13] * b[1],
a[10] * b[3] - a[11] * b[2] + a[12] * b[1] + a[13] * b[0],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1],
a[7] * b[3] - a[8] * b[2] + a[9] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Rot*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Mot& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[7],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[7] - a[6] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[7] + a[5] * b[6] - a[6] * b[5],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] + a[10] * b[4] + a[11] * b[5] + a[12] * b[6] - a[13] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[5] - a[11] * b[4] + a[12] * b[7] + a[13] * b[6],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] + a[10] * b[6] - a[11] * b[7] - a[12] * b[4] - a[13] * b[5],
 - a[4] * b[4] - a[5] * b[5] - a[6] * b[6] + a[10] * b[0] - a[11] * b[1] - a[12] * b[2] - a[13] * b[3],
 - a[4] * b[5] + a[5] * b[4] - a[6] * b[7] + a[10] * b[1] + a[11] * b[0] - a[12] * b[3] + a[13] * b[2],
 - a[4] * b[6] + a[5] * b[7] + a[6] * b[4] + a[10] * b[2] + a[11] * b[3] + a[12] * b[0] - a[13] * b[1],
 - a[4] * b[7] - a[5] * b[6] + a[6] * b[5] + a[10] * b[3] - a[11] * b[2] + a[12] * b[1] + a[13] * b[0],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[7] + a[11] * b[6] - a[12] * b[5] + a[13] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Mot*)(&b));
}			
		 
inline Trt gp (const Trt& a, const Dil& b) { 
	return Trt (
a[0] * b[0] + a[10] * b[1],
a[1] * b[0] + a[11] * b[1],
a[2] * b[0] + a[12] * b[1],
a[3] * b[0] + a[13] * b[1],
a[4] * b[0] + a[4] * b[1],
a[5] * b[0] + a[5] * b[1],
a[6] * b[0] + a[6] * b[1],
a[7] * b[0] - a[7] * b[1],
a[8] * b[0] - a[8] * b[1],
a[9] * b[0] - a[9] * b[1],
a[0] * b[1] + a[10] * b[0],
a[1] * b[1] + a[11] * b[0],
a[2] * b[1] + a[12] * b[0],
a[3] * b[1] + a[13] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Dil*)(&b));
}			
		 
inline Tst gp (const Trt& a, const Trv& b) { 
	return Tst (
a[0] * b[0] + a[7] * b[1] + a[8] * b[2] + a[9] * b[3],
a[1] * b[0] + a[7] * b[2] - a[8] * b[1],
a[2] * b[0] + a[7] * b[3] - a[9] * b[1],
a[3] * b[0] + a[8] * b[3] - a[9] * b[2],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[0] - a[10] * b[1] - a[11] * b[2] - a[12] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[5] * b[0] - a[10] * b[2] + a[11] * b[1] - a[13] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[6] * b[0] - a[10] * b[3] + a[12] * b[1] + a[13] * b[2],
a[7] * b[0],
a[8] * b[0],
a[9] * b[0],
a[7] * b[1] + a[8] * b[2] + a[9] * b[3] + a[10] * b[0],
a[7] * b[2] - a[8] * b[1] + a[11] * b[0],
a[7] * b[3] - a[9] * b[1] + a[12] * b[0],
a[8] * b[3] - a[9] * b[2] + a[13] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] - a[11] * b[3] + a[12] * b[2] - a[13] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Trv*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Mtd& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[10] * b[7] - a[11] * b[8] - a[12] * b[9] - a[13] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[11] + a[10] * b[8] + a[11] * b[7] - a[12] * b[10] + a[13] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[11] - a[6] * b[4] + a[10] * b[9] + a[11] * b[10] + a[12] * b[7] - a[13] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[11] + a[5] * b[6] - a[6] * b[5] + a[10] * b[10] - a[11] * b[9] + a[12] * b[8] + a[13] * b[7],
a[4] * b[0] + a[4] * b[7] - a[5] * b[1] - a[5] * b[8] - a[6] * b[2] - a[6] * b[9],
a[4] * b[1] + a[4] * b[8] + a[5] * b[0] + a[5] * b[7] - a[6] * b[3] - a[6] * b[10],
a[4] * b[2] + a[4] * b[9] + a[5] * b[3] + a[5] * b[10] + a[6] * b[0] + a[6] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11] + a[7] * b[0] - a[7] * b[7] - a[8] * b[1] + a[8] * b[8] - a[9] * b[2] + a[9] * b[9] + a[10] * b[4] + a[11] * b[5] + a[12] * b[6] - a[13] * b[11],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6] + a[7] * b[1] - a[7] * b[8] + a[8] * b[0] - a[8] * b[7] - a[9] * b[3] + a[9] * b[10] + a[10] * b[5] - a[11] * b[4] + a[12] * b[11] + a[13] * b[6],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5] + a[7] * b[2] - a[7] * b[9] + a[8] * b[3] - a[8] * b[10] + a[9] * b[0] - a[9] * b[7] + a[10] * b[6] - a[11] * b[11] - a[12] * b[4] - a[13] * b[5],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] - a[4] * b[4] - a[5] * b[5] - a[6] * b[6] + a[10] * b[0] - a[11] * b[1] - a[12] * b[2] - a[13] * b[3],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9] - a[4] * b[5] + a[5] * b[4] - a[6] * b[11] + a[10] * b[1] + a[11] * b[0] - a[12] * b[3] + a[13] * b[2],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8] - a[4] * b[6] + a[5] * b[11] + a[6] * b[4] + a[10] * b[2] + a[11] * b[3] + a[12] * b[0] - a[13] * b[1],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7] - a[4] * b[11] - a[5] * b[6] + a[6] * b[5] + a[10] * b[3] - a[11] * b[2] + a[12] * b[1] + a[13] * b[0],
a[4] * b[3] + a[4] * b[10] - a[5] * b[2] - a[5] * b[9] + a[6] * b[1] + a[6] * b[8],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[7] * b[3] - a[7] * b[10] - a[8] * b[2] + a[8] * b[9] + a[9] * b[1] - a[9] * b[8] + a[10] * b[11] + a[11] * b[6] - a[12] * b[5] + a[13] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Mtd*)(&b));
}			
		 
inline Tvt gp (const Trt& a, const Trs& b) { 
	return Tvt (
a[0] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3],
a[1] * b[0] + a[4] * b[2] - a[5] * b[1],
a[2] * b[0] + a[4] * b[3] - a[6] * b[1],
a[3] * b[0] + a[5] * b[3] - a[6] * b[2],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[7] * b[0] + a[10] * b[1] + a[11] * b[2] + a[12] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[8] * b[0] + a[10] * b[2] - a[11] * b[1] + a[13] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[9] * b[0] + a[10] * b[3] - a[12] * b[1] - a[13] * b[2],
 - a[4] * b[1] - a[5] * b[2] - a[6] * b[3] + a[10] * b[0],
 - a[4] * b[2] + a[5] * b[1] + a[11] * b[0],
 - a[4] * b[3] + a[6] * b[1] + a[12] * b[0],
 - a[5] * b[3] + a[6] * b[2] + a[13] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] + a[11] * b[3] - a[12] * b[2] + a[13] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Trt& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[14] - a[4] * b[4] + a[5] * b[8] + a[6] * b[9] - a[7] * b[3] + a[8] * b[5] + a[9] * b[6] + a[10] * b[11] + a[11] * b[12] + a[12] * b[13] - a[13] * b[15],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14] + a[3] * b[2] - a[4] * b[8] - a[5] * b[4] + a[6] * b[10] - a[7] * b[5] - a[8] * b[3] + a[9] * b[7] + a[10] * b[12] - a[11] * b[11] + a[12] * b[15] + a[13] * b[13],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0] - a[3] * b[1] - a[4] * b[9] - a[5] * b[10] - a[6] * b[4] - a[7] * b[6] - a[8] * b[7] - a[9] * b[3] + a[10] * b[13] - a[11] * b[15] - a[12] * b[11] - a[13] * b[12],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7] - a[4] * b[0] - a[4] * b[11] - a[5] * b[1] - a[5] * b[12] - a[6] * b[2] - a[6] * b[13] - a[10] * b[3] + a[11] * b[5] + a[12] * b[6] + a[13] * b[7],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] - a[7] * b[0] + a[7] * b[11] - a[8] * b[1] + a[8] * b[12] - a[9] * b[2] + a[9] * b[13] + a[10] * b[4] - a[11] * b[8] - a[12] * b[9] - a[13] * b[10],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7] + a[3] * b[6] - a[4] * b[1] - a[4] * b[12] + a[5] * b[0] + a[5] * b[11] - a[6] * b[14] - a[6] * b[15] - a[10] * b[5] - a[11] * b[3] + a[12] * b[7] - a[13] * b[6],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3] - a[3] * b[5] - a[4] * b[2] - a[4] * b[13] + a[5] * b[14] + a[5] * b[15] + a[6] * b[0] + a[6] * b[11] - a[10] * b[6] - a[11] * b[7] - a[12] * b[3] + a[13] * b[5],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[3] - a[4] * b[14] - a[4] * b[15] - a[5] * b[2] - a[5] * b[13] + a[6] * b[1] + a[6] * b[12] - a[10] * b[7] + a[11] * b[6] - a[12] * b[5] - a[13] * b[3],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10] + a[3] * b[9] - a[7] * b[1] + a[7] * b[12] + a[8] * b[0] - a[8] * b[11] - a[9] * b[14] + a[9] * b[15] + a[10] * b[8] + a[11] * b[4] - a[12] * b[10] + a[13] * b[9],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4] - a[3] * b[8] - a[7] * b[2] + a[7] * b[13] + a[8] * b[14] - a[8] * b[15] + a[9] * b[0] - a[9] * b[11] + a[10] * b[9] + a[11] * b[10] + a[12] * b[4] - a[13] * b[8],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[4] - a[7] * b[14] + a[7] * b[15] - a[8] * b[2] + a[8] * b[13] + a[9] * b[1] - a[9] * b[12] + a[10] * b[10] - a[11] * b[9] + a[12] * b[8] + a[13] * b[4],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13] - a[3] * b[15] + a[4] * b[4] - a[5] * b[8] - a[6] * b[9] - a[7] * b[3] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0] + a[11] * b[1] + a[12] * b[2] - a[13] * b[14],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15] + a[3] * b[13] + a[4] * b[8] + a[5] * b[4] - a[6] * b[10] - a[7] * b[5] - a[8] * b[3] + a[9] * b[7] + a[10] * b[1] - a[11] * b[0] + a[12] * b[14] + a[13] * b[2],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11] - a[3] * b[12] + a[4] * b[9] + a[5] * b[10] + a[6] * b[4] - a[7] * b[6] - a[8] * b[7] - a[9] * b[3] + a[10] * b[2] - a[11] * b[14] - a[12] * b[0] - a[13] * b[1],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[4] * b[10] + a[5] * b[9] - a[6] * b[8] - a[7] * b[7] + a[8] * b[6] - a[9] * b[5] + a[10] * b[15] + a[11] * b[13] - a[12] * b[12] + a[13] * b[11],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12] + a[3] * b[11] + a[4] * b[10] - a[5] * b[9] + a[6] * b[8] - a[7] * b[7] + a[8] * b[6] - a[9] * b[5] + a[10] * b[14] + a[11] * b[2] - a[12] * b[1] + a[13] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[10] - a[11] * b[11] - a[12] * b[12] - a[13] * b[13],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[6] * b[15] + a[7] * b[5] - a[8] * b[4] + a[9] * b[14] + a[10] * b[11] + a[11] * b[10] - a[12] * b[13] + a[13] * b[12],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[5] * b[15] - a[6] * b[7] + a[7] * b[6] - a[8] * b[14] - a[9] * b[4] + a[10] * b[12] + a[11] * b[13] + a[12] * b[10] - a[13] * b[11],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[15] + a[5] * b[9] - a[6] * b[8] + a[7] * b[14] + a[8] * b[6] - a[9] * b[5] + a[10] * b[13] - a[11] * b[12] + a[12] * b[11] + a[13] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[10] * b[4] - a[11] * b[5] - a[12] * b[6] + a[13] * b[14],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] - a[10] * b[5] + a[11] * b[4] - a[12] * b[14] - a[13] * b[6],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[10] * b[6] + a[11] * b[14] + a[12] * b[4] + a[13] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[15] + a[7] * b[0] - a[7] * b[10] - a[8] * b[1] + a[8] * b[11] - a[9] * b[2] + a[9] * b[12] + a[10] * b[7] + a[11] * b[8] + a[12] * b[9] - a[13] * b[15],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15] + a[3] * b[9] + a[7] * b[1] - a[7] * b[11] + a[8] * b[0] - a[8] * b[10] - a[9] * b[3] + a[9] * b[13] + a[10] * b[8] - a[11] * b[7] + a[12] * b[15] + a[13] * b[9],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7] - a[3] * b[8] + a[7] * b[2] - a[7] * b[12] + a[8] * b[3] - a[8] * b[13] + a[9] * b[0] - a[9] * b[10] + a[10] * b[9] - a[11] * b[15] - a[12] * b[7] - a[13] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0] - a[11] * b[1] - a[12] * b[2] - a[13] * b[3],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] - a[6] * b[15] + a[7] * b[5] - a[8] * b[4] + a[9] * b[14] + a[10] * b[1] + a[11] * b[0] - a[12] * b[3] + a[13] * b[2],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[5] * b[15] + a[6] * b[7] + a[7] * b[6] - a[8] * b[14] - a[9] * b[4] + a[10] * b[2] + a[11] * b[3] + a[12] * b[0] - a[13] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[4] * b[15] - a[5] * b[9] + a[6] * b[8] + a[7] * b[14] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3] - a[11] * b[2] + a[12] * b[1] + a[13] * b[0],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] - a[10] * b[14] - a[11] * b[6] + a[12] * b[5] - a[13] * b[4],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[7] * b[3] - a[7] * b[13] - a[8] * b[2] + a[8] * b[12] + a[9] * b[1] - a[9] * b[11] + a[10] * b[15] + a[11] * b[9] - a[12] * b[8] + a[13] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Mtt*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Rtt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[7] * b[5] - a[8] * b[4] + a[9] * b[7],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[7] * b[6] - a[8] * b[7] - a[9] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[7] * b[7] + a[8] * b[6] - a[9] * b[5],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7] + a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[10] * b[4] - a[11] * b[5] - a[12] * b[6] + a[13] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6] + a[4] * b[1] + a[5] * b[0] - a[6] * b[3] - a[10] * b[5] + a[11] * b[4] - a[12] * b[7] - a[13] * b[6],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[10] * b[6] + a[11] * b[7] + a[12] * b[4] + a[13] * b[5],
a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
a[7] * b[1] + a[8] * b[0] - a[9] * b[3],
a[7] * b[2] + a[8] * b[3] + a[9] * b[0],
a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0] - a[11] * b[1] - a[12] * b[2] - a[13] * b[3],
a[7] * b[5] - a[8] * b[4] + a[9] * b[7] + a[10] * b[1] + a[11] * b[0] - a[12] * b[3] + a[13] * b[2],
a[7] * b[6] - a[8] * b[7] - a[9] * b[4] + a[10] * b[2] + a[11] * b[3] + a[12] * b[0] - a[13] * b[1],
a[7] * b[7] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3] - a[11] * b[2] + a[12] * b[1] + a[13] * b[0],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] - a[10] * b[7] - a[11] * b[6] + a[12] * b[5] - a[13] * b[4],
a[7] * b[3] - a[8] * b[2] + a[9] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Rtt*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Rtd& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[10] * b[4] - a[11] * b[5] - a[12] * b[6] - a[13] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[10] * b[5] + a[11] * b[4] - a[12] * b[7] + a[13] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[10] * b[6] + a[11] * b[7] + a[12] * b[4] - a[13] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[10] * b[7] - a[11] * b[6] + a[12] * b[5] + a[13] * b[4],
a[4] * b[0] + a[4] * b[4] - a[5] * b[1] - a[5] * b[5] - a[6] * b[2] - a[6] * b[6],
a[4] * b[1] + a[4] * b[5] + a[5] * b[0] + a[5] * b[4] - a[6] * b[3] - a[6] * b[7],
a[4] * b[2] + a[4] * b[6] + a[5] * b[3] + a[5] * b[7] + a[6] * b[0] + a[6] * b[4],
a[7] * b[0] - a[7] * b[4] - a[8] * b[1] + a[8] * b[5] - a[9] * b[2] + a[9] * b[6],
a[7] * b[1] - a[7] * b[5] + a[8] * b[0] - a[8] * b[4] - a[9] * b[3] + a[9] * b[7],
a[7] * b[2] - a[7] * b[6] + a[8] * b[3] - a[8] * b[7] + a[9] * b[0] - a[9] * b[4],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7] + a[10] * b[0] - a[11] * b[1] - a[12] * b[2] - a[13] * b[3],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7] + a[3] * b[6] + a[10] * b[1] + a[11] * b[0] - a[12] * b[3] + a[13] * b[2],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4] - a[3] * b[5] + a[10] * b[2] + a[11] * b[3] + a[12] * b[0] - a[13] * b[1],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[4] + a[10] * b[3] - a[11] * b[2] + a[12] * b[1] + a[13] * b[0],
a[4] * b[3] + a[4] * b[7] - a[5] * b[2] - a[5] * b[6] + a[6] * b[1] + a[6] * b[5],
a[7] * b[3] - a[7] * b[7] - a[8] * b[2] + a[8] * b[6] + a[9] * b[1] - a[9] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Rtd*)(&b));
}			
		 
inline Tst gp (const Trt& a, const Tvd& b) { 
	return Tst (
a[0] * b[0] + a[7] * b[1] + a[8] * b[2] + a[9] * b[3] + a[10] * b[4],
a[1] * b[0] + a[7] * b[2] - a[8] * b[1] + a[11] * b[4],
a[2] * b[0] + a[7] * b[3] - a[9] * b[1] + a[12] * b[4],
a[3] * b[0] + a[8] * b[3] - a[9] * b[2] + a[13] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[0] + a[4] * b[4] - a[10] * b[1] - a[11] * b[2] - a[12] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[5] * b[0] + a[5] * b[4] - a[10] * b[2] + a[11] * b[1] - a[13] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[6] * b[0] + a[6] * b[4] - a[10] * b[3] + a[12] * b[1] + a[13] * b[2],
a[7] * b[0] - a[7] * b[4],
a[8] * b[0] - a[8] * b[4],
a[9] * b[0] - a[9] * b[4],
a[0] * b[4] + a[7] * b[1] + a[8] * b[2] + a[9] * b[3] + a[10] * b[0],
a[1] * b[4] + a[7] * b[2] - a[8] * b[1] + a[11] * b[0],
a[2] * b[4] + a[7] * b[3] - a[9] * b[1] + a[12] * b[0],
a[3] * b[4] + a[8] * b[3] - a[9] * b[2] + a[13] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] - a[11] * b[3] + a[12] * b[2] - a[13] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Tvd*)(&b));
}			
		 
inline Tvt gp (const Trt& a, const Tsd& b) { 
	return Tvt (
a[0] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3] + a[10] * b[4],
a[1] * b[0] + a[4] * b[2] - a[5] * b[1] + a[11] * b[4],
a[2] * b[0] + a[4] * b[3] - a[6] * b[1] + a[12] * b[4],
a[3] * b[0] + a[5] * b[3] - a[6] * b[2] + a[13] * b[4],
a[4] * b[0] + a[4] * b[4],
a[5] * b[0] + a[5] * b[4],
a[6] * b[0] + a[6] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[7] * b[0] - a[7] * b[4] + a[10] * b[1] + a[11] * b[2] + a[12] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[8] * b[0] - a[8] * b[4] + a[10] * b[2] - a[11] * b[1] + a[13] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[9] * b[0] - a[9] * b[4] + a[10] * b[3] - a[12] * b[1] - a[13] * b[2],
a[0] * b[4] - a[4] * b[1] - a[5] * b[2] - a[6] * b[3] + a[10] * b[0],
a[1] * b[4] - a[4] * b[2] + a[5] * b[1] + a[11] * b[0],
a[2] * b[4] - a[4] * b[3] + a[6] * b[1] + a[12] * b[0],
a[3] * b[4] - a[5] * b[3] + a[6] * b[2] + a[13] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] + a[11] * b[3] - a[12] * b[2] + a[13] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Trt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[10] - a[11] * b[11] - a[12] * b[12] - a[13] * b[13],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[10] * b[11] + a[11] * b[10] - a[12] * b[13] + a[13] * b[12],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[6] * b[7] + a[7] * b[6] - a[9] * b[4] + a[10] * b[12] + a[11] * b[13] + a[12] * b[10] - a[13] * b[11],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[9] - a[6] * b[8] + a[8] * b[6] - a[9] * b[5] + a[10] * b[13] - a[11] * b[12] + a[12] * b[11] + a[13] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[10] * b[4] - a[11] * b[5] - a[12] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] - a[10] * b[5] + a[11] * b[4] - a[13] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[10] * b[6] + a[12] * b[4] + a[13] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[7] * b[0] - a[7] * b[10] - a[8] * b[1] + a[8] * b[11] - a[9] * b[2] + a[9] * b[12] + a[10] * b[7] + a[11] * b[8] + a[12] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[7] * b[1] - a[7] * b[11] + a[8] * b[0] - a[8] * b[10] - a[9] * b[3] + a[9] * b[13] + a[10] * b[8] - a[11] * b[7] + a[13] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[7] * b[2] - a[7] * b[12] + a[8] * b[3] - a[8] * b[13] + a[9] * b[0] - a[9] * b[10] + a[10] * b[9] - a[12] * b[7] - a[13] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0] - a[11] * b[1] - a[12] * b[2] - a[13] * b[3],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[10] * b[1] + a[11] * b[0] - a[12] * b[3] + a[13] * b[2],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[6] * b[7] + a[7] * b[6] - a[9] * b[4] + a[10] * b[2] + a[11] * b[3] + a[12] * b[0] - a[13] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[5] * b[9] + a[6] * b[8] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3] - a[11] * b[2] + a[12] * b[1] + a[13] * b[0],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] - a[11] * b[6] + a[12] * b[5] - a[13] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[7] * b[3] - a[7] * b[13] - a[8] * b[2] + a[8] * b[12] + a[9] * b[1] - a[9] * b[11] + a[11] * b[9] - a[12] * b[8] + a[13] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Trt*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Rvd& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[7] - a[11] * b[8] - a[12] * b[9] - a[13] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[7] * b[5] - a[8] * b[4] + a[9] * b[11] + a[10] * b[8] + a[11] * b[7] - a[12] * b[10] + a[13] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[7] * b[6] - a[8] * b[11] - a[9] * b[4] + a[10] * b[9] + a[11] * b[10] + a[12] * b[7] - a[13] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[7] * b[11] + a[8] * b[6] - a[9] * b[5] + a[10] * b[10] - a[11] * b[9] + a[12] * b[8] + a[13] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11] + a[4] * b[0] + a[4] * b[7] - a[5] * b[1] - a[5] * b[8] - a[6] * b[2] - a[6] * b[9] - a[10] * b[4] - a[11] * b[5] - a[12] * b[6] + a[13] * b[11],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6] + a[4] * b[1] + a[4] * b[8] + a[5] * b[0] + a[5] * b[7] - a[6] * b[3] - a[6] * b[10] - a[10] * b[5] + a[11] * b[4] - a[12] * b[11] - a[13] * b[6],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[9] + a[5] * b[3] + a[5] * b[10] + a[6] * b[0] + a[6] * b[7] - a[10] * b[6] + a[11] * b[11] + a[12] * b[4] + a[13] * b[5],
a[7] * b[0] - a[7] * b[7] - a[8] * b[1] + a[8] * b[8] - a[9] * b[2] + a[9] * b[9],
a[7] * b[1] - a[7] * b[8] + a[8] * b[0] - a[8] * b[7] - a[9] * b[3] + a[9] * b[10],
a[7] * b[2] - a[7] * b[9] + a[8] * b[3] - a[8] * b[10] + a[9] * b[0] - a[9] * b[7],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0] - a[11] * b[1] - a[12] * b[2] - a[13] * b[3],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9] + a[7] * b[5] - a[8] * b[4] + a[9] * b[11] + a[10] * b[1] + a[11] * b[0] - a[12] * b[3] + a[13] * b[2],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8] + a[7] * b[6] - a[8] * b[11] - a[9] * b[4] + a[10] * b[2] + a[11] * b[3] + a[12] * b[0] - a[13] * b[1],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7] + a[7] * b[11] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3] - a[11] * b[2] + a[12] * b[1] + a[13] * b[0],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[10] - a[5] * b[2] - a[5] * b[9] + a[6] * b[1] + a[6] * b[8] - a[10] * b[11] - a[11] * b[6] + a[12] * b[5] - a[13] * b[4],
a[7] * b[3] - a[7] * b[10] - a[8] * b[2] + a[8] * b[9] + a[9] * b[1] - a[9] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Tst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[10] - a[11] * b[11] - a[12] * b[12] - a[13] * b[13],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[9] * b[14] + a[10] * b[11] + a[11] * b[10] - a[12] * b[13] + a[13] * b[12],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[6] * b[7] + a[7] * b[6] - a[8] * b[14] - a[9] * b[4] + a[10] * b[12] + a[11] * b[13] + a[12] * b[10] - a[13] * b[11],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[9] - a[6] * b[8] + a[7] * b[14] + a[8] * b[6] - a[9] * b[5] + a[10] * b[13] - a[11] * b[12] + a[12] * b[11] + a[13] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[10] * b[4] - a[11] * b[5] - a[12] * b[6] + a[13] * b[14],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] - a[10] * b[5] + a[11] * b[4] - a[12] * b[14] - a[13] * b[6],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[10] * b[6] + a[11] * b[14] + a[12] * b[4] + a[13] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[7] * b[0] - a[7] * b[10] - a[8] * b[1] + a[8] * b[11] - a[9] * b[2] + a[9] * b[12] + a[10] * b[7] + a[11] * b[8] + a[12] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[7] * b[1] - a[7] * b[11] + a[8] * b[0] - a[8] * b[10] - a[9] * b[3] + a[9] * b[13] + a[10] * b[8] - a[11] * b[7] + a[13] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[7] * b[2] - a[7] * b[12] + a[8] * b[3] - a[8] * b[13] + a[9] * b[0] - a[9] * b[10] + a[10] * b[9] - a[12] * b[7] - a[13] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0] - a[11] * b[1] - a[12] * b[2] - a[13] * b[3],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[9] * b[14] + a[10] * b[1] + a[11] * b[0] - a[12] * b[3] + a[13] * b[2],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[6] * b[7] + a[7] * b[6] - a[8] * b[14] - a[9] * b[4] + a[10] * b[2] + a[11] * b[3] + a[12] * b[0] - a[13] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[5] * b[9] + a[6] * b[8] + a[7] * b[14] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3] - a[11] * b[2] + a[12] * b[1] + a[13] * b[0],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] - a[10] * b[14] - a[11] * b[6] + a[12] * b[5] - a[13] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[7] * b[3] - a[7] * b[13] - a[8] * b[2] + a[8] * b[12] + a[9] * b[1] - a[9] * b[11] + a[11] * b[9] - a[12] * b[8] + a[13] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Tvt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[10] - a[11] * b[11] - a[12] * b[12] - a[13] * b[13],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[6] * b[14] + a[7] * b[5] - a[8] * b[4] + a[10] * b[11] + a[11] * b[10] - a[12] * b[13] + a[13] * b[12],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[5] * b[14] - a[6] * b[7] + a[7] * b[6] - a[9] * b[4] + a[10] * b[12] + a[11] * b[13] + a[12] * b[10] - a[13] * b[11],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[14] + a[5] * b[9] - a[6] * b[8] + a[8] * b[6] - a[9] * b[5] + a[10] * b[13] - a[11] * b[12] + a[12] * b[11] + a[13] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[10] * b[4] - a[11] * b[5] - a[12] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] - a[10] * b[5] + a[11] * b[4] - a[13] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[10] * b[6] + a[12] * b[4] + a[13] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[14] + a[7] * b[0] - a[7] * b[10] - a[8] * b[1] + a[8] * b[11] - a[9] * b[2] + a[9] * b[12] + a[10] * b[7] + a[11] * b[8] + a[12] * b[9] - a[13] * b[14],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14] + a[3] * b[9] + a[7] * b[1] - a[7] * b[11] + a[8] * b[0] - a[8] * b[10] - a[9] * b[3] + a[9] * b[13] + a[10] * b[8] - a[11] * b[7] + a[12] * b[14] + a[13] * b[9],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7] - a[3] * b[8] + a[7] * b[2] - a[7] * b[12] + a[8] * b[3] - a[8] * b[13] + a[9] * b[0] - a[9] * b[10] + a[10] * b[9] - a[11] * b[14] - a[12] * b[7] - a[13] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0] - a[11] * b[1] - a[12] * b[2] - a[13] * b[3],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] - a[6] * b[14] + a[7] * b[5] - a[8] * b[4] + a[10] * b[1] + a[11] * b[0] - a[12] * b[3] + a[13] * b[2],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[5] * b[14] + a[6] * b[7] + a[7] * b[6] - a[9] * b[4] + a[10] * b[2] + a[11] * b[3] + a[12] * b[0] - a[13] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[4] * b[14] - a[5] * b[9] + a[6] * b[8] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3] - a[11] * b[2] + a[12] * b[1] + a[13] * b[0],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] - a[11] * b[6] + a[12] * b[5] - a[13] * b[4],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[7] * b[3] - a[7] * b[13] - a[8] * b[2] + a[8] * b[12] + a[9] * b[1] - a[9] * b[11] + a[10] * b[14] + a[11] * b[9] - a[12] * b[8] + a[13] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Tvt*)(&b));
}			
		 
inline Mtt gp (const Trt& a, const Bst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[11] * b[10],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[6] * b[7] + a[7] * b[6] - a[9] * b[4] + a[12] * b[10],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[9] - a[6] * b[8] + a[8] * b[6] - a[9] * b[5] + a[13] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[6] * b[2] - a[10] * b[4] - a[11] * b[5] - a[12] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] + a[4] * b[1] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[10] * b[5] + a[11] * b[4] - a[13] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] + a[6] * b[10] - a[10] * b[6] + a[12] * b[4] + a[13] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[7] * b[0] - a[7] * b[10] - a[8] * b[1] - a[9] * b[2] + a[10] * b[7] + a[11] * b[8] + a[12] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[7] * b[1] + a[8] * b[0] - a[8] * b[10] - a[9] * b[3] + a[10] * b[8] - a[11] * b[7] + a[13] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[9] * b[10] + a[10] * b[9] - a[12] * b[7] - a[13] * b[8],
a[0] * b[10] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0] - a[11] * b[1] - a[12] * b[2] - a[13] * b[3],
a[1] * b[10] - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[10] * b[1] + a[11] * b[0] - a[12] * b[3] + a[13] * b[2],
a[2] * b[10] - a[4] * b[9] + a[6] * b[7] + a[7] * b[6] - a[9] * b[4] + a[10] * b[2] + a[11] * b[3] + a[12] * b[0] - a[13] * b[1],
a[3] * b[10] - a[5] * b[9] + a[6] * b[8] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3] - a[11] * b[2] + a[12] * b[1] + a[13] * b[0],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] - a[11] * b[6] + a[12] * b[5] - a[13] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[11] * b[9] - a[12] * b[8] + a[13] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Trt, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trt*)(&a),*(Bst*)(&b));
}			
		 
inline Trt ip (const Trt& a, const Trt& b) { 
	return Trt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[10] - a[11] * b[11] - a[12] * b[12] - a[13] * b[13],
a[0] * b[1] + a[10] * b[11],
a[0] * b[2] + a[10] * b[12],
a[0] * b[3] + a[10] * b[13],
a[0] * b[4] - a[5] * b[11] - a[6] * b[12],
a[0] * b[5] + a[4] * b[11] - a[6] * b[13],
a[0] * b[6] + a[4] * b[12] + a[5] * b[13],
a[0] * b[7] + a[8] * b[11] + a[9] * b[12],
a[0] * b[8] - a[7] * b[11] + a[9] * b[13],
a[0] * b[9] - a[7] * b[12] - a[8] * b[13],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13],
a[0] * b[11],
a[0] * b[12],
a[0] * b[13]
);
}			
		 
		
template<> inline MVBase ip_gen<Trt, Trt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Trt*)(&a),*(Trt*)(&b));
}			
		  	
template<>
inline Trt sp (const Trt& trt, const Rot& rot) {					
					
const Rot& t1 = rot;
const Trt& t2 = trt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8],
t1[0] * t2[10] - t1[1] * t2[11] - t1[2] * t2[12] - t1[3] * t2[13],
t1[0] * t2[11] + t1[1] * t2[10] - t1[2] * t2[13] + t1[3] * t2[12],
t1[0] * t2[12] + t1[1] * t2[13] + t1[2] * t2[10] - t1[3] * t2[11],
t1[0] * t2[13] - t1[1] * t2[12] + t1[2] * t2[11] + t1[3] * t2[10],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Trt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[15] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[15] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[15] * t5[1],
t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3],
t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2],
t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1],
t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Mot& mot) {					
					
const Mot& t1 = mot;
const Trt& t2 = trt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[7] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[6] * t2[4] - t1[7] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[4] * t2[0] - t1[4] * t2[10] - t1[5] * t2[1] + t1[5] * t2[11] - t1[6] * t2[2] + t1[6] * t2[12] - t1[7] * t2[3] + t1[7] * t2[13],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[4] * t2[1] - t1[4] * t2[11] + t1[5] * t2[0] - t1[5] * t2[10] - t1[6] * t2[3] + t1[6] * t2[13] + t1[7] * t2[2] - t1[7] * t2[12],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[4] * t2[2] - t1[4] * t2[12] + t1[5] * t2[3] - t1[5] * t2[13] + t1[6] * t2[0] - t1[6] * t2[10] - t1[7] * t2[1] + t1[7] * t2[11],
t1[0] * t2[10] - t1[1] * t2[11] - t1[2] * t2[12] - t1[3] * t2[13] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6],
t1[0] * t2[11] + t1[1] * t2[10] - t1[2] * t2[13] + t1[3] * t2[12] + t1[4] * t2[5] - t1[5] * t2[4] + t1[7] * t2[6],
t1[0] * t2[12] + t1[1] * t2[13] + t1[2] * t2[10] - t1[3] * t2[11] + t1[4] * t2[6] - t1[6] * t2[4] - t1[7] * t2[5],
t1[0] * t2[13] - t1[1] * t2[12] + t1[2] * t2[11] + t1[3] * t2[10] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[4] * t2[3] - t1[4] * t2[13] - t1[5] * t2[2] + t1[5] * t2[12] + t1[6] * t2[1] - t1[6] * t2[11] + t1[7] * t2[0] - t1[7] * t2[10]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Trt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] - t3[14] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[7] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[7] - t3[6] * t5[4] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[7] + t3[5] * t5[6] - t3[6] * t5[5] + t3[14] * t5[4],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] + t3[10] * t5[4] + t3[11] * t5[5] + t3[12] * t5[6] - t3[13] * t5[7] - t3[15] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[5] - t3[11] * t5[4] + t3[12] * t5[7] + t3[13] * t5[6] + t3[15] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] + t3[10] * t5[6] - t3[11] * t5[7] - t3[12] * t5[4] - t3[13] * t5[5] - t3[15] * t5[1],
 - t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[7],
 - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[7] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[6],
 - t3[4] * t5[6] + t3[5] * t5[7] + t3[6] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[5],
 - t3[4] * t5[7] - t3[5] * t5[6] + t3[6] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[4]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Dil& dil) {					
					
const Dil& t1 = dil;
const Trt& t2 = trt;
Trt t3 (
t1[0] * t2[0] + t1[1] * t2[10],
t1[0] * t2[1] + t1[1] * t2[11],
t1[0] * t2[2] + t1[1] * t2[12],
t1[0] * t2[3] + t1[1] * t2[13],
t1[0] * t2[4] - t1[1] * t2[4],
t1[0] * t2[5] - t1[1] * t2[5],
t1[0] * t2[6] - t1[1] * t2[6],
t1[0] * t2[7] + t1[1] * t2[7],
t1[0] * t2[8] + t1[1] * t2[8],
t1[0] * t2[9] + t1[1] * t2[9],
t1[0] * t2[10] + t1[1] * t2[0],
t1[0] * t2[11] + t1[1] * t2[1],
t1[0] * t2[12] + t1[1] * t2[2],
t1[0] * t2[13] + t1[1] * t2[3]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Trt (
t3[0] * t5[0] + t3[10] * t5[1],
t3[1] * t5[0] + t3[11] * t5[1],
t3[2] * t5[0] + t3[12] * t5[1],
t3[3] * t5[0] + t3[13] * t5[1],
t3[4] * t5[0] + t3[4] * t5[1],
t3[5] * t5[0] + t3[5] * t5[1],
t3[6] * t5[0] + t3[6] * t5[1],
t3[7] * t5[0] - t3[7] * t5[1],
t3[8] * t5[0] - t3[8] * t5[1],
t3[9] * t5[0] - t3[9] * t5[1],
t3[0] * t5[1] + t3[10] * t5[0],
t3[1] * t5[1] + t3[11] * t5[0],
t3[2] * t5[1] + t3[12] * t5[0],
t3[3] * t5[1] + t3[13] * t5[0]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Trv& trv) {					
					
const Trv& t1 = trv;
const Trt& t2 = trt;
Tst t3 (
t1[0] * t2[0] + t1[1] * t2[7] + t1[2] * t2[8] + t1[3] * t2[9],
t1[0] * t2[1] + t1[1] * t2[8] - t1[2] * t2[7],
t1[0] * t2[2] + t1[1] * t2[9] - t1[3] * t2[7],
t1[0] * t2[3] + t1[2] * t2[9] - t1[3] * t2[8],
t1[0] * t2[4] + t1[1] * t2[0] + t1[1] * t2[10] - t1[2] * t2[1] - t1[2] * t2[11] - t1[3] * t2[2] - t1[3] * t2[12],
t1[0] * t2[5] + t1[1] * t2[1] + t1[1] * t2[11] + t1[2] * t2[0] + t1[2] * t2[10] - t1[3] * t2[3] - t1[3] * t2[13],
t1[0] * t2[6] + t1[1] * t2[2] + t1[1] * t2[12] + t1[2] * t2[3] + t1[2] * t2[13] + t1[3] * t2[0] + t1[3] * t2[10],
t1[0] * t2[7],
t1[0] * t2[8],
t1[0] * t2[9],
t1[0] * t2[10] - t1[1] * t2[7] - t1[2] * t2[8] - t1[3] * t2[9],
t1[0] * t2[11] - t1[1] * t2[8] + t1[2] * t2[7],
t1[0] * t2[12] - t1[1] * t2[9] + t1[3] * t2[7],
t1[0] * t2[13] - t1[2] * t2[9] + t1[3] * t2[8],
t1[1] * t2[3] + t1[1] * t2[13] - t1[2] * t2[2] - t1[2] * t2[12] + t1[3] * t2[1] + t1[3] * t2[11]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Trt (
t3[0] * t5[0] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3],
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] - t3[10] * t5[1] - t3[11] * t5[2] - t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] - t3[10] * t5[2] + t3[11] * t5[1] - t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] - t3[10] * t5[3] + t3[12] * t5[1] + t3[13] * t5[2],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0],
t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[0],
t3[7] * t5[2] - t3[8] * t5[1] + t3[11] * t5[0],
t3[7] * t5[3] - t3[9] * t5[1] + t3[12] * t5[0],
t3[8] * t5[3] - t3[9] * t5[2] + t3[13] * t5[0]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Trt& t2 = trt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] + t1[7] * t2[10] - t1[8] * t2[11] - t1[9] * t2[12] - t1[10] * t2[13],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[7] * t2[11] + t1[8] * t2[10] - t1[9] * t2[13] + t1[10] * t2[12] + t1[11] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[6] * t2[4] + t1[7] * t2[12] + t1[8] * t2[13] + t1[9] * t2[10] - t1[10] * t2[11] - t1[11] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[13] - t1[8] * t2[12] + t1[9] * t2[11] + t1[10] * t2[10] + t1[11] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[7] * t2[4] - t1[8] * t2[5] - t1[9] * t2[6],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] - t1[7] * t2[5] + t1[8] * t2[4] - t1[10] * t2[6],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] - t1[7] * t2[6] + t1[9] * t2[4] + t1[10] * t2[5],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[4] * t2[0] - t1[4] * t2[10] - t1[5] * t2[1] + t1[5] * t2[11] - t1[6] * t2[2] + t1[6] * t2[12] + t1[7] * t2[7] + t1[8] * t2[8] + t1[9] * t2[9] - t1[11] * t2[3] + t1[11] * t2[13],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[4] * t2[1] - t1[4] * t2[11] + t1[5] * t2[0] - t1[5] * t2[10] - t1[6] * t2[3] + t1[6] * t2[13] + t1[7] * t2[8] - t1[8] * t2[7] + t1[10] * t2[9] + t1[11] * t2[2] - t1[11] * t2[12],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[4] * t2[2] - t1[4] * t2[12] + t1[5] * t2[3] - t1[5] * t2[13] + t1[6] * t2[0] - t1[6] * t2[10] + t1[7] * t2[9] - t1[9] * t2[7] - t1[10] * t2[8] - t1[11] * t2[1] + t1[11] * t2[11],
t1[0] * t2[10] - t1[1] * t2[11] - t1[2] * t2[12] - t1[3] * t2[13] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3],
t1[0] * t2[11] + t1[1] * t2[10] - t1[2] * t2[13] + t1[3] * t2[12] + t1[4] * t2[5] - t1[5] * t2[4] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2] + t1[11] * t2[6],
t1[0] * t2[12] + t1[1] * t2[13] + t1[2] * t2[10] - t1[3] * t2[11] + t1[4] * t2[6] - t1[6] * t2[4] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1] - t1[11] * t2[5],
t1[0] * t2[13] - t1[1] * t2[12] + t1[2] * t2[11] + t1[3] * t2[10] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0] + t1[11] * t2[4],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] - t1[8] * t2[6] + t1[9] * t2[5] - t1[10] * t2[4],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[4] * t2[3] - t1[4] * t2[13] - t1[5] * t2[2] + t1[5] * t2[12] + t1[6] * t2[1] - t1[6] * t2[11] + t1[8] * t2[9] - t1[9] * t2[8] + t1[10] * t2[7] + t1[11] * t2[0] - t1[11] * t2[10]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Trt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] + t3[10] * t5[7] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] - t3[14] * t5[11],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[11] - t3[6] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[11] + t3[5] * t5[6] - t3[6] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[14] * t5[4],
t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[14] * t5[3] - t3[14] * t5[10],
t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[14] * t5[2] + t3[14] * t5[9],
t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[14] * t5[1] - t3[14] * t5[8],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] + t3[10] * t5[4] + t3[11] * t5[5] + t3[12] * t5[6] - t3[13] * t5[11] - t3[15] * t5[3] + t3[15] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[10] * t5[5] - t3[11] * t5[4] + t3[12] * t5[11] + t3[13] * t5[6] + t3[15] * t5[2] - t3[15] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] + t3[10] * t5[6] - t3[11] * t5[11] - t3[12] * t5[4] - t3[13] * t5[5] - t3[15] * t5[1] + t3[15] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] - t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[11],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[11] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[6],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] - t3[4] * t5[6] + t3[5] * t5[11] + t3[6] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[5],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] - t3[4] * t5[11] - t3[5] * t5[6] + t3[6] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[4]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Trs& trs) {					
					
const Trs& t1 = trs;
const Trt& t2 = trt;
Tvt t3 (
t1[0] * t2[0] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6],
t1[0] * t2[1] + t1[1] * t2[5] - t1[2] * t2[4],
t1[0] * t2[2] + t1[1] * t2[6] - t1[3] * t2[4],
t1[0] * t2[3] + t1[2] * t2[6] - t1[3] * t2[5],
t1[0] * t2[4],
t1[0] * t2[5],
t1[0] * t2[6],
t1[0] * t2[7] + t1[1] * t2[0] - t1[1] * t2[10] - t1[2] * t2[1] + t1[2] * t2[11] - t1[3] * t2[2] + t1[3] * t2[12],
t1[0] * t2[8] + t1[1] * t2[1] - t1[1] * t2[11] + t1[2] * t2[0] - t1[2] * t2[10] - t1[3] * t2[3] + t1[3] * t2[13],
t1[0] * t2[9] + t1[1] * t2[2] - t1[1] * t2[12] + t1[2] * t2[3] - t1[2] * t2[13] + t1[3] * t2[0] - t1[3] * t2[10],
t1[0] * t2[10] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6],
t1[0] * t2[11] + t1[1] * t2[5] - t1[2] * t2[4],
t1[0] * t2[12] + t1[1] * t2[6] - t1[3] * t2[4],
t1[0] * t2[13] + t1[2] * t2[6] - t1[3] * t2[5],
t1[1] * t2[3] - t1[1] * t2[13] - t1[2] * t2[2] + t1[2] * t2[12] + t1[3] * t2[1] - t1[3] * t2[11]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Trt (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3],
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2],
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[7] * t5[0] + t3[10] * t5[1] + t3[11] * t5[2] + t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[8] * t5[0] + t3[10] * t5[2] - t3[11] * t5[1] + t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[9] * t5[0] + t3[10] * t5[3] - t3[12] * t5[1] - t3[13] * t5[2],
 - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] + t3[10] * t5[0],
 - t3[4] * t5[2] + t3[5] * t5[1] + t3[11] * t5[0],
 - t3[4] * t5[3] + t3[6] * t5[1] + t3[12] * t5[0],
 - t3[5] * t5[3] + t3[6] * t5[2] + t3[13] * t5[0]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Trt& t2 = trt;
Rtc t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] + t1[3] * t2[7] + t1[4] * t2[4] + t1[5] * t2[8] + t1[6] * t2[9] + t1[8] * t2[5] + t1[9] * t2[6] + t1[11] * t2[10] - t1[12] * t2[11] - t1[13] * t2[12] - t1[14] * t2[3] - t1[15] * t2[13],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[8] + t1[4] * t2[5] - t1[5] * t2[7] + t1[7] * t2[9] - t1[8] * t2[4] + t1[10] * t2[6] + t1[11] * t2[11] + t1[12] * t2[10] - t1[13] * t2[13] + t1[14] * t2[2] + t1[15] * t2[12],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] + t1[3] * t2[9] + t1[4] * t2[6] - t1[6] * t2[7] - t1[7] * t2[8] - t1[9] * t2[4] - t1[10] * t2[5] + t1[11] * t2[12] + t1[12] * t2[13] + t1[13] * t2[10] - t1[14] * t2[1] - t1[15] * t2[11],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[3] * t2[0] + t1[3] * t2[10] - t1[5] * t2[1] - t1[5] * t2[11] - t1[6] * t2[2] - t1[6] * t2[12] - t1[7] * t2[3] - t1[7] * t2[13] - t1[11] * t2[4] - t1[12] * t2[5] - t1[13] * t2[6],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[4] * t2[0] - t1[4] * t2[10] - t1[8] * t2[1] + t1[8] * t2[11] - t1[9] * t2[2] + t1[9] * t2[12] - t1[10] * t2[3] + t1[10] * t2[13] + t1[11] * t2[7] + t1[12] * t2[8] + t1[13] * t2[9],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[1] + t1[3] * t2[11] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] - t1[6] * t2[13] + t1[7] * t2[2] + t1[7] * t2[12] - t1[11] * t2[5] + t1[12] * t2[4] + t1[14] * t2[6] - t1[15] * t2[6],
t1[0] * t2[6] - t1[2] * t2[4] + t1[3] * t2[2] + t1[3] * t2[12] + t1[5] * t2[3] + t1[5] * t2[13] + t1[6] * t2[0] + t1[6] * t2[10] - t1[7] * t2[1] - t1[7] * t2[11] - t1[11] * t2[6] + t1[13] * t2[4] - t1[14] * t2[5] + t1[15] * t2[5],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[3] + t1[3] * t2[13] - t1[5] * t2[2] - t1[5] * t2[12] + t1[6] * t2[1] + t1[6] * t2[11] + t1[7] * t2[0] + t1[7] * t2[10] - t1[12] * t2[6] + t1[13] * t2[5] + t1[14] * t2[4] - t1[15] * t2[4],
t1[0] * t2[8] - t1[1] * t2[7] + t1[4] * t2[1] - t1[4] * t2[11] + t1[8] * t2[0] - t1[8] * t2[10] - t1[9] * t2[3] + t1[9] * t2[13] + t1[10] * t2[2] - t1[10] * t2[12] + t1[11] * t2[8] - t1[12] * t2[7] + t1[14] * t2[9] + t1[15] * t2[9],
t1[0] * t2[9] - t1[2] * t2[7] + t1[4] * t2[2] - t1[4] * t2[12] + t1[8] * t2[3] - t1[8] * t2[13] + t1[9] * t2[0] - t1[9] * t2[10] - t1[10] * t2[1] + t1[10] * t2[11] + t1[11] * t2[9] - t1[13] * t2[7] - t1[14] * t2[8] - t1[15] * t2[8],
t1[1] * t2[9] - t1[2] * t2[8] + t1[4] * t2[3] - t1[4] * t2[13] - t1[8] * t2[2] + t1[8] * t2[12] + t1[9] * t2[1] - t1[9] * t2[11] + t1[10] * t2[0] - t1[10] * t2[10] + t1[12] * t2[9] - t1[13] * t2[8] + t1[14] * t2[7] + t1[15] * t2[7],
t1[0] * t2[10] - t1[1] * t2[11] - t1[2] * t2[12] - t1[3] * t2[7] + t1[4] * t2[4] - t1[5] * t2[8] - t1[6] * t2[9] + t1[8] * t2[5] + t1[9] * t2[6] + t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[14] * t2[13] - t1[15] * t2[3],
t1[0] * t2[11] + t1[1] * t2[10] - t1[2] * t2[13] - t1[3] * t2[8] + t1[4] * t2[5] + t1[5] * t2[7] - t1[7] * t2[9] - t1[8] * t2[4] + t1[10] * t2[6] + t1[11] * t2[1] + t1[12] * t2[0] - t1[13] * t2[3] + t1[14] * t2[12] + t1[15] * t2[2],
t1[0] * t2[12] + t1[1] * t2[13] + t1[2] * t2[10] - t1[3] * t2[9] + t1[4] * t2[6] + t1[6] * t2[7] + t1[7] * t2[8] - t1[9] * t2[4] - t1[10] * t2[5] + t1[11] * t2[2] + t1[12] * t2[3] + t1[13] * t2[0] - t1[14] * t2[11] - t1[15] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[5] * t2[9] - t1[6] * t2[8] + t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[4] + t1[11] * t2[13] - t1[12] * t2[12] + t1[13] * t2[11] + t1[14] * t2[0] + t1[15] * t2[10],
t1[0] * t2[13] - t1[1] * t2[12] + t1[2] * t2[11] - t1[5] * t2[9] + t1[6] * t2[8] - t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[4] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[10] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Trt (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11],
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[0] - t3[3] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] + t3[7] * t5[14] + t3[7] * t5[15] - t3[11] * t5[3] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[7] * t5[2] - t3[7] * t5[13] - t3[11] * t5[5] - t3[12] * t5[3] + t3[13] * t5[7] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[2] - t3[3] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] + t3[7] * t5[1] + t3[7] * t5[12] - t3[11] * t5[6] - t3[12] * t5[7] - t3[13] * t5[3] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[4] * t5[0] + t3[4] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[14] - t3[10] * t5[15] + t3[11] * t5[4] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[10] - t3[15] * t5[10],
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] - t3[4] * t5[1] + t3[4] * t5[12] + t3[8] * t5[0] - t3[8] * t5[11] - t3[9] * t5[14] + t3[9] * t5[15] - t3[10] * t5[2] + t3[10] * t5[13] + t3[11] * t5[8] + t3[12] * t5[4] - t3[13] * t5[10] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[4] * t5[2] + t3[4] * t5[13] + t3[8] * t5[14] - t3[8] * t5[15] + t3[9] * t5[0] - t3[9] * t5[11] + t3[10] * t5[1] - t3[10] * t5[12] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[4] - t3[14] * t5[8] - t3[15] * t5[8],
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] + t3[3] * t5[4] - t3[4] * t5[3] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[0] + t3[12] * t5[1] + t3[13] * t5[2] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[12] - t3[1] * t5[11] + t3[2] * t5[15] + t3[3] * t5[8] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[10] + t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[1] - t3[12] * t5[0] + t3[13] * t5[14] + t3[14] * t5[13] + t3[15] * t5[2],
t3[0] * t5[13] - t3[1] * t5[15] - t3[2] * t5[11] + t3[3] * t5[9] - t3[4] * t5[6] + t3[5] * t5[10] + t3[6] * t5[4] - t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[2] - t3[12] * t5[14] - t3[13] * t5[0] - t3[14] * t5[12] - t3[15] * t5[1],
t3[0] * t5[15] + t3[1] * t5[13] - t3[2] * t5[12] + t3[3] * t5[10] - t3[4] * t5[7] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[14] + t3[12] * t5[2] - t3[13] * t5[1] + t3[14] * t5[11] + t3[15] * t5[0]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Trt& t2 = trt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[10] - t1[11] * t2[11] - t1[12] * t2[12] - t1[13] * t2[13],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] - t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[10] * t2[11] + t1[11] * t2[10] - t1[12] * t2[13] + t1[13] * t2[12] + t1[14] * t2[9] + t1[15] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] - t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[10] * t2[12] + t1[11] * t2[13] + t1[12] * t2[10] - t1[13] * t2[11] - t1[14] * t2[8] - t1[15] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[9] - t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[13] - t1[11] * t2[12] + t1[12] * t2[11] + t1[13] * t2[10] + t1[14] * t2[7] + t1[15] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] + t1[4] * t2[10] - t1[5] * t2[1] - t1[5] * t2[11] - t1[6] * t2[2] - t1[6] * t2[12] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] - t1[14] * t2[3] - t1[14] * t2[13],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] + t1[4] * t2[1] + t1[4] * t2[11] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] - t1[6] * t2[13] - t1[10] * t2[5] + t1[11] * t2[4] - t1[13] * t2[6] + t1[14] * t2[2] + t1[14] * t2[12],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[4] * t2[12] + t1[5] * t2[3] + t1[5] * t2[13] + t1[6] * t2[0] + t1[6] * t2[10] - t1[10] * t2[6] + t1[12] * t2[4] + t1[13] * t2[5] - t1[14] * t2[1] - t1[14] * t2[11],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[7] * t2[0] - t1[7] * t2[10] - t1[8] * t2[1] + t1[8] * t2[11] - t1[9] * t2[2] + t1[9] * t2[12] + t1[10] * t2[7] + t1[11] * t2[8] + t1[12] * t2[9] - t1[15] * t2[3] + t1[15] * t2[13],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[7] * t2[1] - t1[7] * t2[11] + t1[8] * t2[0] - t1[8] * t2[10] - t1[9] * t2[3] + t1[9] * t2[13] + t1[10] * t2[8] - t1[11] * t2[7] + t1[13] * t2[9] + t1[15] * t2[2] - t1[15] * t2[12],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[2] - t1[7] * t2[12] + t1[8] * t2[3] - t1[8] * t2[13] + t1[9] * t2[0] - t1[9] * t2[10] + t1[10] * t2[9] - t1[12] * t2[7] - t1[13] * t2[8] - t1[15] * t2[1] + t1[15] * t2[11],
t1[0] * t2[10] - t1[1] * t2[11] - t1[2] * t2[12] - t1[3] * t2[13] - t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[0] * t2[11] + t1[1] * t2[10] - t1[2] * t2[13] + t1[3] * t2[12] - t1[4] * t2[8] + t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] - t1[14] * t2[9] + t1[15] * t2[6],
t1[0] * t2[12] + t1[1] * t2[13] + t1[2] * t2[10] - t1[3] * t2[11] - t1[4] * t2[9] + t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] + t1[14] * t2[8] - t1[15] * t2[5],
t1[0] * t2[13] - t1[1] * t2[12] + t1[2] * t2[11] + t1[3] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] - t1[14] * t2[7] + t1[15] * t2[4],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] + t1[4] * t2[13] - t1[5] * t2[2] - t1[5] * t2[12] + t1[6] * t2[1] + t1[6] * t2[11] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4] + t1[14] * t2[0] + t1[14] * t2[10],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[7] * t2[3] - t1[7] * t2[13] - t1[8] * t2[2] + t1[8] * t2[12] + t1[9] * t2[1] - t1[9] * t2[11] + t1[11] * t2[9] - t1[12] * t2[8] + t1[13] * t2[7] + t1[15] * t2[0] - t1[15] * t2[10]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Trt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[15] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[15] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[15] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[15] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[15] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[15] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Trt& t2 = trt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] - t1[5] * t2[7] + t1[7] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] - t1[6] * t2[7] - t1[7] * t2[8],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[9] - t1[6] * t2[8] + t1[7] * t2[7],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] + t1[4] * t2[10] - t1[5] * t2[1] - t1[5] * t2[11] - t1[6] * t2[2] - t1[6] * t2[12] - t1[7] * t2[3] - t1[7] * t2[13],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] + t1[4] * t2[1] + t1[4] * t2[11] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] - t1[6] * t2[13] + t1[7] * t2[2] + t1[7] * t2[12],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[4] * t2[12] + t1[5] * t2[3] + t1[5] * t2[13] + t1[6] * t2[0] + t1[6] * t2[10] - t1[7] * t2[1] - t1[7] * t2[11],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8],
t1[0] * t2[10] - t1[1] * t2[11] - t1[2] * t2[12] - t1[3] * t2[13] - t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9],
t1[0] * t2[11] + t1[1] * t2[10] - t1[2] * t2[13] + t1[3] * t2[12] - t1[4] * t2[8] + t1[5] * t2[7] - t1[7] * t2[9],
t1[0] * t2[12] + t1[1] * t2[13] + t1[2] * t2[10] - t1[3] * t2[11] - t1[4] * t2[9] + t1[6] * t2[7] + t1[7] * t2[8],
t1[0] * t2[13] - t1[1] * t2[12] + t1[2] * t2[11] + t1[3] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] - t1[7] * t2[7],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] + t1[4] * t2[13] - t1[5] * t2[2] - t1[5] * t2[12] + t1[6] * t2[1] + t1[6] * t2[11] + t1[7] * t2[0] + t1[7] * t2[10],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Trt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[15] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[7] - t3[14] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[7] - t3[13] * t5[6] + t3[14] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[10] * t5[6] + t3[11] * t5[7] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[15] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[15] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[15] * t5[1],
t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[7],
t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] + t3[15] * t5[6],
t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] - t3[15] * t5[5],
t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Trt& t2 = trt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[10] - t1[5] * t2[11] - t1[6] * t2[12] - t1[7] * t2[13],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[11] + t1[5] * t2[10] - t1[6] * t2[13] + t1[7] * t2[12],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[12] + t1[5] * t2[13] + t1[6] * t2[10] - t1[7] * t2[11],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[13] - t1[5] * t2[12] + t1[6] * t2[11] + t1[7] * t2[10],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] - t1[4] * t2[5] + t1[5] * t2[4] - t1[7] * t2[6],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] - t1[4] * t2[6] + t1[6] * t2[4] + t1[7] * t2[5],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[4] * t2[8] - t1[5] * t2[7] + t1[7] * t2[9],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[4] * t2[9] - t1[6] * t2[7] - t1[7] * t2[8],
t1[0] * t2[10] - t1[1] * t2[11] - t1[2] * t2[12] - t1[3] * t2[13] + t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[0] * t2[11] + t1[1] * t2[10] - t1[2] * t2[13] + t1[3] * t2[12] + t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2],
t1[0] * t2[12] + t1[1] * t2[13] + t1[2] * t2[10] - t1[3] * t2[11] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1],
t1[0] * t2[13] - t1[1] * t2[12] + t1[2] * t2[11] + t1[3] * t2[10] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] - t1[5] * t2[6] + t1[6] * t2[5] - t1[7] * t2[4],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[5] * t2[9] - t1[6] * t2[8] + t1[7] * t2[7]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Trt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[13] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[7] + t3[13] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[10] * t5[6] + t3[11] * t5[7] + t3[12] * t5[4] - t3[13] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[10] * t5[7] - t3[11] * t5[6] + t3[12] * t5[5] + t3[13] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[1] - t3[5] * t5[5] - t3[6] * t5[2] - t3[6] * t5[6] - t3[14] * t5[3] - t3[14] * t5[7],
t3[4] * t5[1] + t3[4] * t5[5] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[3] - t3[6] * t5[7] + t3[14] * t5[2] + t3[14] * t5[6],
t3[4] * t5[2] + t3[4] * t5[6] + t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[0] + t3[6] * t5[4] - t3[14] * t5[1] - t3[14] * t5[5],
t3[7] * t5[0] - t3[7] * t5[4] - t3[8] * t5[1] + t3[8] * t5[5] - t3[9] * t5[2] + t3[9] * t5[6] - t3[15] * t5[3] + t3[15] * t5[7],
t3[7] * t5[1] - t3[7] * t5[5] + t3[8] * t5[0] - t3[8] * t5[4] - t3[9] * t5[3] + t3[9] * t5[7] + t3[15] * t5[2] - t3[15] * t5[6],
t3[7] * t5[2] - t3[7] * t5[6] + t3[8] * t5[3] - t3[8] * t5[7] + t3[9] * t5[0] - t3[9] * t5[4] - t3[15] * t5[1] + t3[15] * t5[5],
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3],
t3[0] * t5[5] + t3[1] * t5[4] - t3[2] * t5[7] + t3[3] * t5[6] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[4] - t3[3] * t5[5] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] + t3[3] * t5[4] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Trt& t2 = trt;
Tst t3 (
t1[0] * t2[0] + t1[1] * t2[7] + t1[2] * t2[8] + t1[3] * t2[9] + t1[4] * t2[10],
t1[0] * t2[1] + t1[1] * t2[8] - t1[2] * t2[7] + t1[4] * t2[11],
t1[0] * t2[2] + t1[1] * t2[9] - t1[3] * t2[7] + t1[4] * t2[12],
t1[0] * t2[3] + t1[2] * t2[9] - t1[3] * t2[8] + t1[4] * t2[13],
t1[0] * t2[4] + t1[1] * t2[0] + t1[1] * t2[10] - t1[2] * t2[1] - t1[2] * t2[11] - t1[3] * t2[2] - t1[3] * t2[12] - t1[4] * t2[4],
t1[0] * t2[5] + t1[1] * t2[1] + t1[1] * t2[11] + t1[2] * t2[0] + t1[2] * t2[10] - t1[3] * t2[3] - t1[3] * t2[13] - t1[4] * t2[5],
t1[0] * t2[6] + t1[1] * t2[2] + t1[1] * t2[12] + t1[2] * t2[3] + t1[2] * t2[13] + t1[3] * t2[0] + t1[3] * t2[10] - t1[4] * t2[6],
t1[0] * t2[7] + t1[4] * t2[7],
t1[0] * t2[8] + t1[4] * t2[8],
t1[0] * t2[9] + t1[4] * t2[9],
t1[0] * t2[10] - t1[1] * t2[7] - t1[2] * t2[8] - t1[3] * t2[9] + t1[4] * t2[0],
t1[0] * t2[11] - t1[1] * t2[8] + t1[2] * t2[7] + t1[4] * t2[1],
t1[0] * t2[12] - t1[1] * t2[9] + t1[3] * t2[7] + t1[4] * t2[2],
t1[0] * t2[13] - t1[2] * t2[9] + t1[3] * t2[8] + t1[4] * t2[3],
t1[1] * t2[3] + t1[1] * t2[13] - t1[2] * t2[2] - t1[2] * t2[12] + t1[3] * t2[1] + t1[3] * t2[11]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Trt (
t3[0] * t5[0] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[4],
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1] + t3[11] * t5[4],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1] + t3[12] * t5[4],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2] + t3[13] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] + t3[4] * t5[4] - t3[10] * t5[1] - t3[11] * t5[2] - t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] + t3[5] * t5[4] - t3[10] * t5[2] + t3[11] * t5[1] - t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] + t3[6] * t5[4] - t3[10] * t5[3] + t3[12] * t5[1] + t3[13] * t5[2],
t3[7] * t5[0] - t3[7] * t5[4],
t3[8] * t5[0] - t3[8] * t5[4],
t3[9] * t5[0] - t3[9] * t5[4],
t3[0] * t5[4] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[0],
t3[1] * t5[4] + t3[7] * t5[2] - t3[8] * t5[1] + t3[11] * t5[0],
t3[2] * t5[4] + t3[7] * t5[3] - t3[9] * t5[1] + t3[12] * t5[0],
t3[3] * t5[4] + t3[8] * t5[3] - t3[9] * t5[2] + t3[13] * t5[0]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Trt& t2 = trt;
Tvt t3 (
t1[0] * t2[0] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6] + t1[4] * t2[10],
t1[0] * t2[1] + t1[1] * t2[5] - t1[2] * t2[4] + t1[4] * t2[11],
t1[0] * t2[2] + t1[1] * t2[6] - t1[3] * t2[4] + t1[4] * t2[12],
t1[0] * t2[3] + t1[2] * t2[6] - t1[3] * t2[5] + t1[4] * t2[13],
t1[0] * t2[4] - t1[4] * t2[4],
t1[0] * t2[5] - t1[4] * t2[5],
t1[0] * t2[6] - t1[4] * t2[6],
t1[0] * t2[7] + t1[1] * t2[0] - t1[1] * t2[10] - t1[2] * t2[1] + t1[2] * t2[11] - t1[3] * t2[2] + t1[3] * t2[12] + t1[4] * t2[7],
t1[0] * t2[8] + t1[1] * t2[1] - t1[1] * t2[11] + t1[2] * t2[0] - t1[2] * t2[10] - t1[3] * t2[3] + t1[3] * t2[13] + t1[4] * t2[8],
t1[0] * t2[9] + t1[1] * t2[2] - t1[1] * t2[12] + t1[2] * t2[3] - t1[2] * t2[13] + t1[3] * t2[0] - t1[3] * t2[10] + t1[4] * t2[9],
t1[0] * t2[10] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6] + t1[4] * t2[0],
t1[0] * t2[11] + t1[1] * t2[5] - t1[2] * t2[4] + t1[4] * t2[1],
t1[0] * t2[12] + t1[1] * t2[6] - t1[3] * t2[4] + t1[4] * t2[2],
t1[0] * t2[13] + t1[2] * t2[6] - t1[3] * t2[5] + t1[4] * t2[3],
t1[1] * t2[3] - t1[1] * t2[13] - t1[2] * t2[2] + t1[2] * t2[12] + t1[3] * t2[1] - t1[3] * t2[11]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Trt (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3] + t3[10] * t5[4],
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1] + t3[11] * t5[4],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1] + t3[12] * t5[4],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2] + t3[13] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[7] * t5[0] - t3[7] * t5[4] + t3[10] * t5[1] + t3[11] * t5[2] + t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[8] * t5[0] - t3[8] * t5[4] + t3[10] * t5[2] - t3[11] * t5[1] + t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[9] * t5[0] - t3[9] * t5[4] + t3[10] * t5[3] - t3[12] * t5[1] - t3[13] * t5[2],
t3[0] * t5[4] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] + t3[10] * t5[0],
t3[1] * t5[4] - t3[4] * t5[2] + t3[5] * t5[1] + t3[11] * t5[0],
t3[2] * t5[4] - t3[4] * t5[3] + t3[6] * t5[1] + t3[12] * t5[0],
t3[3] * t5[4] - t3[5] * t5[3] + t3[6] * t5[2] + t3[13] * t5[0]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Trt& t2 = trt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9] + t1[7] * t2[10] - t1[8] * t2[11] - t1[9] * t2[12] - t1[10] * t2[13],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] - t1[5] * t2[7] + t1[7] * t2[11] + t1[8] * t2[10] - t1[9] * t2[13] + t1[10] * t2[12] + t1[11] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] - t1[6] * t2[7] + t1[7] * t2[12] + t1[8] * t2[13] + t1[9] * t2[10] - t1[10] * t2[11] - t1[11] * t2[8],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[9] - t1[6] * t2[8] + t1[7] * t2[13] - t1[8] * t2[12] + t1[9] * t2[11] + t1[10] * t2[10] + t1[11] * t2[7],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] + t1[4] * t2[10] - t1[5] * t2[1] - t1[5] * t2[11] - t1[6] * t2[2] - t1[6] * t2[12] - t1[7] * t2[4] - t1[8] * t2[5] - t1[9] * t2[6] - t1[11] * t2[3] - t1[11] * t2[13],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] + t1[4] * t2[1] + t1[4] * t2[11] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] - t1[6] * t2[13] - t1[7] * t2[5] + t1[8] * t2[4] - t1[10] * t2[6] + t1[11] * t2[2] + t1[11] * t2[12],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[4] * t2[12] + t1[5] * t2[3] + t1[5] * t2[13] + t1[6] * t2[0] + t1[6] * t2[10] - t1[7] * t2[6] + t1[9] * t2[4] + t1[10] * t2[5] - t1[11] * t2[1] - t1[11] * t2[11],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[7] * t2[7] + t1[8] * t2[8] + t1[9] * t2[9],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[7] * t2[8] - t1[8] * t2[7] + t1[10] * t2[9],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[9] - t1[9] * t2[7] - t1[10] * t2[8],
t1[0] * t2[10] - t1[1] * t2[11] - t1[2] * t2[12] - t1[3] * t2[13] - t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3],
t1[0] * t2[11] + t1[1] * t2[10] - t1[2] * t2[13] + t1[3] * t2[12] - t1[4] * t2[8] + t1[5] * t2[7] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2] - t1[11] * t2[9],
t1[0] * t2[12] + t1[1] * t2[13] + t1[2] * t2[10] - t1[3] * t2[11] - t1[4] * t2[9] + t1[6] * t2[7] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1] + t1[11] * t2[8],
t1[0] * t2[13] - t1[1] * t2[12] + t1[2] * t2[11] + t1[3] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0] - t1[11] * t2[7],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] + t1[4] * t2[13] - t1[5] * t2[2] - t1[5] * t2[12] + t1[6] * t2[1] + t1[6] * t2[11] - t1[8] * t2[6] + t1[9] * t2[5] - t1[10] * t2[4] + t1[11] * t2[0] + t1[11] * t2[10],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[8] * t2[9] - t1[9] * t2[8] + t1[10] * t2[7]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Trt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] - t3[15] * t5[11],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[11] - t3[14] * t5[3] - t3[14] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[11] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[8],
t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[15] * t5[3] + t3[15] * t5[10],
t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[15] * t5[2] - t3[15] * t5[9],
t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] - t3[15] * t5[1] + t3[15] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[11],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] + t3[15] * t5[6],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] - t3[15] * t5[5],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Tst& tst) {					
					
const Tst& t1 = tst;
const Trt& t2 = trt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[10] - t1[11] * t2[11] - t1[12] * t2[12] - t1[13] * t2[13],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] - t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[10] * t2[11] + t1[11] * t2[10] - t1[12] * t2[13] + t1[13] * t2[12] + t1[14] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] - t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[10] * t2[12] + t1[11] * t2[13] + t1[12] * t2[10] - t1[13] * t2[11] - t1[14] * t2[8],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[9] - t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[13] - t1[11] * t2[12] + t1[12] * t2[11] + t1[13] * t2[10] + t1[14] * t2[7],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] + t1[4] * t2[10] - t1[5] * t2[1] - t1[5] * t2[11] - t1[6] * t2[2] - t1[6] * t2[12] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] - t1[14] * t2[3] - t1[14] * t2[13],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] + t1[4] * t2[1] + t1[4] * t2[11] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] - t1[6] * t2[13] - t1[10] * t2[5] + t1[11] * t2[4] - t1[13] * t2[6] + t1[14] * t2[2] + t1[14] * t2[12],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[4] * t2[12] + t1[5] * t2[3] + t1[5] * t2[13] + t1[6] * t2[0] + t1[6] * t2[10] - t1[10] * t2[6] + t1[12] * t2[4] + t1[13] * t2[5] - t1[14] * t2[1] - t1[14] * t2[11],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[7] * t2[0] - t1[7] * t2[10] - t1[8] * t2[1] + t1[8] * t2[11] - t1[9] * t2[2] + t1[9] * t2[12] + t1[10] * t2[7] + t1[11] * t2[8] + t1[12] * t2[9],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[7] * t2[1] - t1[7] * t2[11] + t1[8] * t2[0] - t1[8] * t2[10] - t1[9] * t2[3] + t1[9] * t2[13] + t1[10] * t2[8] - t1[11] * t2[7] + t1[13] * t2[9],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[2] - t1[7] * t2[12] + t1[8] * t2[3] - t1[8] * t2[13] + t1[9] * t2[0] - t1[9] * t2[10] + t1[10] * t2[9] - t1[12] * t2[7] - t1[13] * t2[8],
t1[0] * t2[10] - t1[1] * t2[11] - t1[2] * t2[12] - t1[3] * t2[13] - t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[0] * t2[11] + t1[1] * t2[10] - t1[2] * t2[13] + t1[3] * t2[12] - t1[4] * t2[8] + t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] - t1[14] * t2[9],
t1[0] * t2[12] + t1[1] * t2[13] + t1[2] * t2[10] - t1[3] * t2[11] - t1[4] * t2[9] + t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] + t1[14] * t2[8],
t1[0] * t2[13] - t1[1] * t2[12] + t1[2] * t2[11] + t1[3] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] - t1[14] * t2[7],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] + t1[4] * t2[13] - t1[5] * t2[2] - t1[5] * t2[12] + t1[6] * t2[1] + t1[6] * t2[11] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4] + t1[14] * t2[0] + t1[14] * t2[10],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[7] * t2[3] - t1[7] * t2[13] - t1[8] * t2[2] + t1[8] * t2[12] + t1[9] * t2[1] - t1[9] * t2[11] + t1[11] * t2[9] - t1[12] * t2[8] + t1[13] * t2[7]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Trt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[14],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Trt& t2 = trt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[10] - t1[11] * t2[11] - t1[12] * t2[12] - t1[13] * t2[13],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] - t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[10] * t2[11] + t1[11] * t2[10] - t1[12] * t2[13] + t1[13] * t2[12] + t1[14] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] - t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[10] * t2[12] + t1[11] * t2[13] + t1[12] * t2[10] - t1[13] * t2[11] - t1[14] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[9] - t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[13] - t1[11] * t2[12] + t1[12] * t2[11] + t1[13] * t2[10] + t1[14] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] + t1[4] * t2[10] - t1[5] * t2[1] - t1[5] * t2[11] - t1[6] * t2[2] - t1[6] * t2[12] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] + t1[4] * t2[1] + t1[4] * t2[11] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] - t1[6] * t2[13] - t1[10] * t2[5] + t1[11] * t2[4] - t1[13] * t2[6],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[4] * t2[12] + t1[5] * t2[3] + t1[5] * t2[13] + t1[6] * t2[0] + t1[6] * t2[10] - t1[10] * t2[6] + t1[12] * t2[4] + t1[13] * t2[5],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[7] * t2[0] - t1[7] * t2[10] - t1[8] * t2[1] + t1[8] * t2[11] - t1[9] * t2[2] + t1[9] * t2[12] + t1[10] * t2[7] + t1[11] * t2[8] + t1[12] * t2[9] - t1[14] * t2[3] + t1[14] * t2[13],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[7] * t2[1] - t1[7] * t2[11] + t1[8] * t2[0] - t1[8] * t2[10] - t1[9] * t2[3] + t1[9] * t2[13] + t1[10] * t2[8] - t1[11] * t2[7] + t1[13] * t2[9] + t1[14] * t2[2] - t1[14] * t2[12],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[2] - t1[7] * t2[12] + t1[8] * t2[3] - t1[8] * t2[13] + t1[9] * t2[0] - t1[9] * t2[10] + t1[10] * t2[9] - t1[12] * t2[7] - t1[13] * t2[8] - t1[14] * t2[1] + t1[14] * t2[11],
t1[0] * t2[10] - t1[1] * t2[11] - t1[2] * t2[12] - t1[3] * t2[13] - t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[0] * t2[11] + t1[1] * t2[10] - t1[2] * t2[13] + t1[3] * t2[12] - t1[4] * t2[8] + t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] + t1[14] * t2[6],
t1[0] * t2[12] + t1[1] * t2[13] + t1[2] * t2[10] - t1[3] * t2[11] - t1[4] * t2[9] + t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] - t1[14] * t2[5],
t1[0] * t2[13] - t1[1] * t2[12] + t1[2] * t2[11] + t1[3] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] + t1[14] * t2[4],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] + t1[4] * t2[13] - t1[5] * t2[2] - t1[5] * t2[12] + t1[6] * t2[1] + t1[6] * t2[11] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[7] * t2[3] - t1[7] * t2[13] - t1[8] * t2[2] + t1[8] * t2[12] + t1[9] * t2[1] - t1[9] * t2[11] + t1[11] * t2[9] - t1[12] * t2[8] + t1[13] * t2[7] + t1[14] * t2[0] - t1[14] * t2[10]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Trt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[14] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[14] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[14] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[14] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[14],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[14] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[14] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Trt sp (const Trt& trt, const Bst& bst) {					
					
const Bst& t1 = bst;
const Trt& t2 = trt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] - t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[10] * t2[11],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] - t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[10] * t2[12],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[9] - t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[13],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] + t1[4] * t2[10] - t1[5] * t2[1] - t1[5] * t2[11] - t1[6] * t2[2] - t1[6] * t2[12] - t1[10] * t2[4],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] + t1[4] * t2[1] + t1[4] * t2[11] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] - t1[6] * t2[13] - t1[10] * t2[5],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[4] * t2[12] + t1[5] * t2[3] + t1[5] * t2[13] + t1[6] * t2[0] + t1[6] * t2[10] - t1[10] * t2[6],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[7] * t2[0] - t1[7] * t2[10] - t1[8] * t2[1] + t1[8] * t2[11] - t1[9] * t2[2] + t1[9] * t2[12] + t1[10] * t2[7],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[7] * t2[1] - t1[7] * t2[11] + t1[8] * t2[0] - t1[8] * t2[10] - t1[9] * t2[3] + t1[9] * t2[13] + t1[10] * t2[8],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[2] - t1[7] * t2[12] + t1[8] * t2[3] - t1[8] * t2[13] + t1[9] * t2[0] - t1[9] * t2[10] + t1[10] * t2[9],
t1[0] * t2[10] - t1[1] * t2[11] - t1[2] * t2[12] - t1[3] * t2[13] - t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0],
t1[0] * t2[11] + t1[1] * t2[10] - t1[2] * t2[13] + t1[3] * t2[12] - t1[4] * t2[8] + t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[10] * t2[1],
t1[0] * t2[12] + t1[1] * t2[13] + t1[2] * t2[10] - t1[3] * t2[11] - t1[4] * t2[9] + t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[10] * t2[2],
t1[0] * t2[13] - t1[1] * t2[12] + t1[2] * t2[11] + t1[3] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] + t1[4] * t2[13] - t1[5] * t2[2] - t1[5] * t2[12] + t1[6] * t2[1] + t1[6] * t2[11],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[7] * t2[3] - t1[7] * t2[13] - t1[8] * t2[2] + t1[8] * t2[12] + t1[9] * t2[1] - t1[9] * t2[11]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Trt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[11] * t5[10] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[12] * t5[10] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] - t3[9] * t5[2] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1],
t3[0] * t5[10] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3],
t3[1] * t5[10] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[2] * t5[10] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Trt re (const Trt& trt, const Vec& vec) {					
					
const Vec& t1 = vec;
const Trt& t2 = trt;
Trt t3 = involute( t2);
Rtc t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6],
t1[0] * t3[7] + t1[1] * t3[8] + t1[2] * t3[9],
t1[0] * t3[5] - t1[1] * t3[4],
t1[0] * t3[6] - t1[2] * t3[4],
t1[1] * t3[6] - t1[2] * t3[5],
t1[0] * t3[8] - t1[1] * t3[7],
t1[0] * t3[9] - t1[2] * t3[7],
t1[1] * t3[9] - t1[2] * t3[8],
t1[0] * t3[10] - t1[1] * t3[11] - t1[2] * t3[12],
t1[0] * t3[11] + t1[1] * t3[10] - t1[2] * t3[13],
t1[0] * t3[12] + t1[1] * t3[13] + t1[2] * t3[10],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[13] - t1[1] * t3[12] + t1[2] * t3[11]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Trt (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[14] * t6[0],
 - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2],
 - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1],
 - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2],
 - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2],
 - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1],
t4[11] * t6[0] + t4[12] * t6[1] + t4[13] * t6[2],
t4[11] * t6[1] - t4[12] * t6[0] + t4[15] * t6[2],
t4[11] * t6[2] - t4[13] * t6[0] - t4[15] * t6[1],
t4[12] * t6[2] - t4[13] * t6[1] + t4[15] * t6[0]
);

}
		
	
	  	
template<>
inline Trt re (const Trt& trt, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Trt& t2 = trt;
Trt t3 = involute( t2);
Rtc t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[4],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3] + t1[3] * t3[5],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0] + t1[3] * t3[6],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6],
t1[0] * t3[7] + t1[1] * t3[8] + t1[2] * t3[9] + t1[3] * t3[0] - t1[3] * t3[10],
t1[0] * t3[5] - t1[1] * t3[4],
t1[0] * t3[6] - t1[2] * t3[4],
t1[1] * t3[6] - t1[2] * t3[5],
t1[0] * t3[8] - t1[1] * t3[7] + t1[3] * t3[1] - t1[3] * t3[11],
t1[0] * t3[9] - t1[2] * t3[7] + t1[3] * t3[2] - t1[3] * t3[12],
t1[1] * t3[9] - t1[2] * t3[8] + t1[3] * t3[3] - t1[3] * t3[13],
t1[0] * t3[10] - t1[1] * t3[11] - t1[2] * t3[12] + t1[3] * t3[4],
t1[0] * t3[11] + t1[1] * t3[10] - t1[2] * t3[13] + t1[3] * t3[5],
t1[0] * t3[12] + t1[1] * t3[13] + t1[2] * t3[10] + t1[3] * t3[6],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[13] - t1[1] * t3[12] + t1[2] * t3[11]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Trt (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[3] + t4[14] * t6[0],
 - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2],
 - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1],
t4[0] * t6[3] - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] + t4[11] * t6[3],
t4[1] * t6[3] - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2] + t4[12] * t6[3],
t4[2] * t6[3] - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1] + t4[13] * t6[3],
t4[3] * t6[3] + t4[11] * t6[0] + t4[12] * t6[1] + t4[13] * t6[2],
t4[5] * t6[3] + t4[11] * t6[1] - t4[12] * t6[0] + t4[15] * t6[2],
t4[6] * t6[3] + t4[11] * t6[2] - t4[13] * t6[0] - t4[15] * t6[1],
t4[7] * t6[3] + t4[12] * t6[2] - t4[13] * t6[1] + t4[15] * t6[0]
);

}
		
	
	  	
template<>
inline Trt re (const Trt& trt, const Pln& pln) {					
					
const Pln& t1 = pln;
const Trt& t2 = trt;
Trt t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[11] - t1[1] * t3[12] - t1[2] * t3[13],
t1[0] * t3[10] - t1[1] * t3[13] + t1[2] * t3[12] + t1[3] * t3[6],
t1[0] * t3[13] + t1[1] * t3[10] - t1[2] * t3[11] - t1[3] * t3[5],
 - t1[0] * t3[12] + t1[1] * t3[11] + t1[2] * t3[10] + t1[3] * t3[4],
 - t1[0] * t3[5] - t1[1] * t3[6],
t1[0] * t3[4] - t1[2] * t3[6],
t1[1] * t3[4] + t1[2] * t3[5],
t1[0] * t3[8] + t1[1] * t3[9] - t1[3] * t3[3] + t1[3] * t3[13],
 - t1[0] * t3[7] + t1[2] * t3[9] + t1[3] * t3[2] - t1[3] * t3[12],
 - t1[1] * t3[7] - t1[2] * t3[8] - t1[3] * t3[1] + t1[3] * t3[11],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[6],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] - t1[3] * t3[5],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[3] * t3[4],
 - t1[0] * t3[6] + t1[1] * t3[5] - t1[2] * t3[4],
t1[0] * t3[9] - t1[1] * t3[8] + t1[2] * t3[7] + t1[3] * t3[0] - t1[3] * t3[10]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Trt (
 - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2] - t4[14] * t6[3],
t4[6] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1],
 - t4[5] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0],
t4[4] * t6[3] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0],
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0],
 - t4[3] * t6[3] + t4[8] * t6[0] + t4[9] * t6[1] - t4[13] * t6[3] + t4[15] * t6[2],
t4[2] * t6[3] - t4[7] * t6[0] + t4[9] * t6[2] + t4[12] * t6[3] - t4[15] * t6[1],
 - t4[1] * t6[3] - t4[7] * t6[1] - t4[8] * t6[2] - t4[11] * t6[3] + t4[15] * t6[0],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[14] * t6[3],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] - t4[6] * t6[3],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[5] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[4] * t6[3]
);

}
		
	
	  	
template<>
inline Trt re (const Trt& trt, const Dll& dll) {					
					
const Dll& t1 = dll;
const Trt& t2 = trt;
Trt t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[3] * t3[4] + t1[4] * t3[5] + t1[5] * t3[6],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[5] - t1[4] * t3[4],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[6] - t1[5] * t3[4],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[4] * t3[6] - t1[5] * t3[5],
t1[0] * t3[5] + t1[1] * t3[6],
 - t1[0] * t3[4] + t1[2] * t3[6],
 - t1[1] * t3[4] - t1[2] * t3[5],
t1[0] * t3[8] + t1[1] * t3[9] + t1[3] * t3[0] - t1[3] * t3[10] - t1[4] * t3[1] + t1[4] * t3[11] - t1[5] * t3[2] + t1[5] * t3[12],
 - t1[0] * t3[7] + t1[2] * t3[9] + t1[3] * t3[1] - t1[3] * t3[11] + t1[4] * t3[0] - t1[4] * t3[10] - t1[5] * t3[3] + t1[5] * t3[13],
 - t1[1] * t3[7] - t1[2] * t3[8] + t1[3] * t3[2] - t1[3] * t3[12] + t1[4] * t3[3] - t1[4] * t3[13] + t1[5] * t3[0] - t1[5] * t3[10],
 - t1[0] * t3[11] - t1[1] * t3[12] - t1[2] * t3[13] + t1[3] * t3[4] + t1[4] * t3[5] + t1[5] * t3[6],
t1[0] * t3[10] - t1[1] * t3[13] + t1[2] * t3[12] + t1[3] * t3[5] - t1[4] * t3[4],
t1[0] * t3[13] + t1[1] * t3[10] - t1[2] * t3[11] + t1[3] * t3[6] - t1[5] * t3[4],
 - t1[0] * t3[12] + t1[1] * t3[11] + t1[2] * t3[10] + t1[4] * t3[6] - t1[5] * t3[5],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4],
t1[0] * t3[9] - t1[1] * t3[8] + t1[2] * t3[7] + t1[3] * t3[3] - t1[3] * t3[13] - t1[4] * t3[2] + t1[4] * t3[12] + t1[5] * t3[1] - t1[5] * t3[11]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Trt (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[4] - t4[5] * t6[3] + t4[14] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[5] - t4[6] * t6[3] - t4[14] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[5] - t4[6] * t6[4] + t4[14] * t6[3],
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[8] * t6[0] - t4[9] * t6[1] + t4[10] * t6[3] + t4[11] * t6[4] + t4[12] * t6[5] - t4[15] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[7] * t6[0] - t4[9] * t6[2] + t4[10] * t6[4] - t4[11] * t6[3] + t4[13] * t6[5] + t4[15] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[7] * t6[1] + t4[8] * t6[2] + t4[10] * t6[5] - t4[12] * t6[3] - t4[13] * t6[4] - t4[15] * t6[0],
 - t4[4] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2],
 - t4[4] * t6[4] + t4[5] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1] - t4[14] * t6[5],
 - t4[4] * t6[5] + t4[6] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0] + t4[14] * t6[4],
 - t4[5] * t6[5] + t4[6] * t6[4] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0] - t4[14] * t6[3]
);

}
		
	
	  	
template<>
inline Trt re (const Trt& trt, const Lin& lin) {					
					
const Lin& t1 = lin;
const Trt& t2 = trt;
Trt t3 = involute( t2);
Rtc t4 (
t1[0] * t3[5] + t1[1] * t3[6] + t1[3] * t3[10] - t1[4] * t3[11] - t1[5] * t3[12],
 - t1[0] * t3[4] + t1[2] * t3[6] + t1[3] * t3[11] + t1[4] * t3[10] - t1[5] * t3[13],
 - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[12] + t1[4] * t3[13] + t1[5] * t3[10],
 - t1[3] * t3[4] - t1[4] * t3[5] - t1[5] * t3[6],
 - t1[0] * t3[1] + t1[0] * t3[11] - t1[1] * t3[2] + t1[1] * t3[12] - t1[2] * t3[3] + t1[2] * t3[13] + t1[3] * t3[7] + t1[4] * t3[8] + t1[5] * t3[9],
 - t1[3] * t3[5] + t1[4] * t3[4],
 - t1[3] * t3[6] + t1[5] * t3[4],
 - t1[4] * t3[6] + t1[5] * t3[5],
t1[0] * t3[0] - t1[0] * t3[10] - t1[1] * t3[3] + t1[1] * t3[13] + t1[2] * t3[2] - t1[2] * t3[12] + t1[3] * t3[8] - t1[4] * t3[7],
t1[0] * t3[3] - t1[0] * t3[13] + t1[1] * t3[0] - t1[1] * t3[10] - t1[2] * t3[1] + t1[2] * t3[11] + t1[3] * t3[9] - t1[5] * t3[7],
 - t1[0] * t3[2] + t1[0] * t3[12] + t1[1] * t3[1] - t1[1] * t3[11] + t1[2] * t3[0] - t1[2] * t3[10] + t1[4] * t3[9] - t1[5] * t3[8],
t1[0] * t3[5] + t1[1] * t3[6] + t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[0] * t3[4] + t1[2] * t3[6] + t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3],
 - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[13] - t1[4] * t3[12] + t1[5] * t3[11],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Trt (
t4[5] * t6[0] + t4[6] * t6[1] + t4[7] * t6[2] + t4[11] * t6[3] + t4[12] * t6[4] + t4[13] * t6[5],
 - t4[3] * t6[0] + t4[6] * t6[2] - t4[7] * t6[1] + t4[11] * t6[4] - t4[12] * t6[3] + t4[15] * t6[5],
 - t4[3] * t6[1] - t4[5] * t6[2] + t4[7] * t6[0] + t4[11] * t6[5] - t4[13] * t6[3] - t4[15] * t6[4],
 - t4[3] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] + t4[12] * t6[5] - t4[13] * t6[4] + t4[15] * t6[3],
 - t4[3] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5],
 - t4[3] * t6[4] + t4[5] * t6[3] - t4[7] * t6[5],
 - t4[3] * t6[5] + t4[6] * t6[3] + t4[7] * t6[4],
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[4] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] - t4[12] * t6[0] - t4[13] * t6[1] - t4[14] * t6[2] - t4[15] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[4] * t6[4] - t4[8] * t6[3] + t4[10] * t6[5] + t4[11] * t6[0] - t4[13] * t6[2] + t4[14] * t6[1] + t4[15] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[4] * t6[5] - t4[9] * t6[3] - t4[10] * t6[4] + t4[11] * t6[1] + t4[12] * t6[2] - t4[14] * t6[0] - t4[15] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[0] - t4[6] * t6[2] + t4[7] * t6[1] + t4[14] * t6[5],
t4[0] * t6[5] - t4[2] * t6[3] + t4[3] * t6[1] + t4[5] * t6[2] - t4[7] * t6[0] - t4[14] * t6[4],
t4[1] * t6[5] - t4[2] * t6[4] + t4[3] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0] + t4[14] * t6[3]
);

}
		
	
	  	
template<>
inline Trt re (const Trt& trt, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Trt& t2 = trt;
Trt t3 = involute( t2);
Rtc t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[7] + t1[4] * t3[4],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3] + t1[3] * t3[8] + t1[4] * t3[5],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0] + t1[3] * t3[9] + t1[4] * t3[6],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6] + t1[3] * t3[0] + t1[3] * t3[10],
t1[0] * t3[7] + t1[1] * t3[8] + t1[2] * t3[9] + t1[4] * t3[0] - t1[4] * t3[10],
t1[0] * t3[5] - t1[1] * t3[4] + t1[3] * t3[1] + t1[3] * t3[11],
t1[0] * t3[6] - t1[2] * t3[4] + t1[3] * t3[2] + t1[3] * t3[12],
t1[1] * t3[6] - t1[2] * t3[5] + t1[3] * t3[3] + t1[3] * t3[13],
t1[0] * t3[8] - t1[1] * t3[7] + t1[4] * t3[1] - t1[4] * t3[11],
t1[0] * t3[9] - t1[2] * t3[7] + t1[4] * t3[2] - t1[4] * t3[12],
t1[1] * t3[9] - t1[2] * t3[8] + t1[4] * t3[3] - t1[4] * t3[13],
t1[0] * t3[10] - t1[1] * t3[11] - t1[2] * t3[12] - t1[3] * t3[7] + t1[4] * t3[4],
t1[0] * t3[11] + t1[1] * t3[10] - t1[2] * t3[13] - t1[3] * t3[8] + t1[4] * t3[5],
t1[0] * t3[12] + t1[1] * t3[13] + t1[2] * t3[10] - t1[3] * t3[9] + t1[4] * t3[6],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[13] - t1[1] * t3[12] + t1[2] * t3[11]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Trt (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] - t4[4] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[4] - t4[8] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[4] - t4[9] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[4] - t4[10] * t6[3] + t4[14] * t6[0],
t4[0] * t6[3] - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] - t4[11] * t6[3],
t4[1] * t6[3] - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2] - t4[12] * t6[3],
t4[2] * t6[3] - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1] - t4[13] * t6[3],
t4[0] * t6[4] - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] + t4[11] * t6[4],
t4[1] * t6[4] - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2] + t4[12] * t6[4],
t4[2] * t6[4] - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1] + t4[13] * t6[4],
t4[3] * t6[4] - t4[4] * t6[3] + t4[11] * t6[0] + t4[12] * t6[1] + t4[13] * t6[2],
t4[5] * t6[4] - t4[8] * t6[3] + t4[11] * t6[1] - t4[12] * t6[0] + t4[15] * t6[2],
t4[6] * t6[4] - t4[9] * t6[3] + t4[11] * t6[2] - t4[13] * t6[0] - t4[15] * t6[1],
t4[7] * t6[4] - t4[10] * t6[3] + t4[12] * t6[2] - t4[13] * t6[1] + t4[15] * t6[0]
);

}
		
	
	  	
template<>
inline Trt re (const Trt& trt, const Par& par) {					
					
const Par& t1 = par;
const Trt& t2 = trt;
Trt t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[3] * t3[7] + t1[4] * t3[8] + t1[5] * t3[9] + t1[6] * t3[4] + t1[7] * t3[5] + t1[8] * t3[6] + t1[9] * t3[10],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[8] - t1[4] * t3[7] + t1[6] * t3[5] - t1[7] * t3[4] + t1[9] * t3[11],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[9] - t1[5] * t3[7] + t1[6] * t3[6] - t1[8] * t3[4] + t1[9] * t3[12],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[4] * t3[9] - t1[5] * t3[8] + t1[7] * t3[6] - t1[8] * t3[5] + t1[9] * t3[13],
t1[0] * t3[5] + t1[1] * t3[6] + t1[3] * t3[0] + t1[3] * t3[10] - t1[4] * t3[1] - t1[4] * t3[11] - t1[5] * t3[2] - t1[5] * t3[12] - t1[9] * t3[4],
 - t1[0] * t3[4] + t1[2] * t3[6] + t1[3] * t3[1] + t1[3] * t3[11] + t1[4] * t3[0] + t1[4] * t3[10] - t1[5] * t3[3] - t1[5] * t3[13] - t1[9] * t3[5],
 - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[2] + t1[3] * t3[12] + t1[4] * t3[3] + t1[4] * t3[13] + t1[5] * t3[0] + t1[5] * t3[10] - t1[9] * t3[6],
t1[0] * t3[8] + t1[1] * t3[9] + t1[6] * t3[0] - t1[6] * t3[10] - t1[7] * t3[1] + t1[7] * t3[11] - t1[8] * t3[2] + t1[8] * t3[12] + t1[9] * t3[7],
 - t1[0] * t3[7] + t1[2] * t3[9] + t1[6] * t3[1] - t1[6] * t3[11] + t1[7] * t3[0] - t1[7] * t3[10] - t1[8] * t3[3] + t1[8] * t3[13] + t1[9] * t3[8],
 - t1[1] * t3[7] - t1[2] * t3[8] + t1[6] * t3[2] - t1[6] * t3[12] + t1[7] * t3[3] - t1[7] * t3[13] + t1[8] * t3[0] - t1[8] * t3[10] + t1[9] * t3[9],
 - t1[0] * t3[11] - t1[1] * t3[12] - t1[2] * t3[13] - t1[3] * t3[7] - t1[4] * t3[8] - t1[5] * t3[9] + t1[6] * t3[4] + t1[7] * t3[5] + t1[8] * t3[6] + t1[9] * t3[0],
t1[0] * t3[10] - t1[1] * t3[13] + t1[2] * t3[12] - t1[3] * t3[8] + t1[4] * t3[7] + t1[6] * t3[5] - t1[7] * t3[4] + t1[9] * t3[1],
t1[0] * t3[13] + t1[1] * t3[10] - t1[2] * t3[11] - t1[3] * t3[9] + t1[5] * t3[7] + t1[6] * t3[6] - t1[8] * t3[4] + t1[9] * t3[2],
 - t1[0] * t3[12] + t1[1] * t3[11] + t1[2] * t3[10] - t1[4] * t3[9] + t1[5] * t3[8] + t1[7] * t3[6] - t1[8] * t3[5] + t1[9] * t3[3],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[3] + t1[3] * t3[13] - t1[4] * t3[2] - t1[4] * t3[12] + t1[5] * t3[1] + t1[5] * t3[11],
t1[0] * t3[9] - t1[1] * t3[8] + t1[2] * t3[7] + t1[6] * t3[3] - t1[6] * t3[13] - t1[7] * t3[2] + t1[7] * t3[12] + t1[8] * t3[1] - t1[8] * t3[11]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Trt (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[6] + t4[5] * t6[7] + t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] + t4[10] * t6[9],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[7] - t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[11] * t6[9] + t4[14] * t6[8] + t4[15] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[8] - t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[12] * t6[9] - t4[14] * t6[7] - t4[15] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[8] - t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[13] * t6[9] + t4[14] * t6[6] + t4[15] * t6[3],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[4] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[10] * t6[3] - t4[11] * t6[4] - t4[12] * t6[5] - t4[14] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] + t4[5] * t6[9] - t4[6] * t6[2] - t4[10] * t6[4] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] + t4[6] * t6[9] - t4[10] * t6[5] + t4[12] * t6[3] + t4[13] * t6[4] - t4[14] * t6[0],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[7] * t6[9] - t4[8] * t6[0] - t4[9] * t6[1] + t4[10] * t6[6] + t4[11] * t6[7] + t4[12] * t6[8] - t4[15] * t6[2],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[8] + t4[7] * t6[0] - t4[8] * t6[9] - t4[9] * t6[2] + t4[10] * t6[7] - t4[11] * t6[6] + t4[13] * t6[8] + t4[15] * t6[1],
t4[0] * t6[8] - t4[2] * t6[6] - t4[3] * t6[7] + t4[7] * t6[1] + t4[8] * t6[2] - t4[9] * t6[9] + t4[10] * t6[8] - t4[12] * t6[6] - t4[13] * t6[7] - t4[15] * t6[0],
t4[0] * t6[9] - t4[4] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2],
t4[1] * t6[9] - t4[4] * t6[7] + t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1] - t4[14] * t6[8] + t4[15] * t6[5],
t4[2] * t6[9] - t4[4] * t6[8] + t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0] + t4[14] * t6[7] - t4[15] * t6[4],
t4[3] * t6[9] - t4[5] * t6[8] + t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0] - t4[14] * t6[6] + t4[15] * t6[3]
);

}
		
	
	  	
template<>
inline Trt re (const Trt& trt, const Cir& cir) {					
					
const Cir& t1 = cir;
const Trt& t2 = trt;
Trt t3 = involute( t2);
Rtc t4 (
t1[0] * t3[8] + t1[1] * t3[9] + t1[3] * t3[5] + t1[4] * t3[6] + t1[6] * t3[10] - t1[7] * t3[11] - t1[8] * t3[12] - t1[9] * t3[3],
 - t1[0] * t3[7] + t1[2] * t3[9] - t1[3] * t3[4] + t1[5] * t3[6] + t1[6] * t3[11] + t1[7] * t3[10] - t1[8] * t3[13] + t1[9] * t3[2],
 - t1[1] * t3[7] - t1[2] * t3[8] - t1[4] * t3[4] - t1[5] * t3[5] + t1[6] * t3[12] + t1[7] * t3[13] + t1[8] * t3[10] - t1[9] * t3[1],
 - t1[0] * t3[1] - t1[0] * t3[11] - t1[1] * t3[2] - t1[1] * t3[12] - t1[2] * t3[3] - t1[2] * t3[13] - t1[6] * t3[4] - t1[7] * t3[5] - t1[8] * t3[6],
 - t1[3] * t3[1] + t1[3] * t3[11] - t1[4] * t3[2] + t1[4] * t3[12] - t1[5] * t3[3] + t1[5] * t3[13] + t1[6] * t3[7] + t1[7] * t3[8] + t1[8] * t3[9],
t1[0] * t3[0] + t1[0] * t3[10] - t1[1] * t3[3] - t1[1] * t3[13] + t1[2] * t3[2] + t1[2] * t3[12] - t1[6] * t3[5] + t1[7] * t3[4] + t1[9] * t3[6],
t1[0] * t3[3] + t1[0] * t3[13] + t1[1] * t3[0] + t1[1] * t3[10] - t1[2] * t3[1] - t1[2] * t3[11] - t1[6] * t3[6] + t1[8] * t3[4] - t1[9] * t3[5],
 - t1[0] * t3[2] - t1[0] * t3[12] + t1[1] * t3[1] + t1[1] * t3[11] + t1[2] * t3[0] + t1[2] * t3[10] - t1[7] * t3[6] + t1[8] * t3[5] + t1[9] * t3[4],
t1[3] * t3[0] - t1[3] * t3[10] - t1[4] * t3[3] + t1[4] * t3[13] + t1[5] * t3[2] - t1[5] * t3[12] + t1[6] * t3[8] - t1[7] * t3[7] + t1[9] * t3[9],
t1[3] * t3[3] - t1[3] * t3[13] + t1[4] * t3[0] - t1[4] * t3[10] - t1[5] * t3[1] + t1[5] * t3[11] + t1[6] * t3[9] - t1[8] * t3[7] - t1[9] * t3[8],
 - t1[3] * t3[2] + t1[3] * t3[12] + t1[4] * t3[1] - t1[4] * t3[11] + t1[5] * t3[0] - t1[5] * t3[10] + t1[7] * t3[9] - t1[8] * t3[8] + t1[9] * t3[7],
 - t1[0] * t3[8] - t1[1] * t3[9] + t1[3] * t3[5] + t1[4] * t3[6] + t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2] - t1[9] * t3[13],
t1[0] * t3[7] - t1[2] * t3[9] - t1[3] * t3[4] + t1[5] * t3[6] + t1[6] * t3[1] + t1[7] * t3[0] - t1[8] * t3[3] + t1[9] * t3[12],
t1[1] * t3[7] + t1[2] * t3[8] - t1[4] * t3[4] - t1[5] * t3[5] + t1[6] * t3[2] + t1[7] * t3[3] + t1[8] * t3[0] - t1[9] * t3[11],
t1[0] * t3[9] - t1[1] * t3[8] + t1[2] * t3[7] + t1[3] * t3[6] - t1[4] * t3[5] + t1[5] * t3[4] + t1[6] * t3[13] - t1[7] * t3[12] + t1[8] * t3[11] + t1[9] * t3[0],
 - t1[0] * t3[9] + t1[1] * t3[8] - t1[2] * t3[7] + t1[3] * t3[6] - t1[4] * t3[5] + t1[5] * t3[4] + t1[6] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1] + t1[9] * t3[10]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Trt (
t4[5] * t6[3] + t4[6] * t6[4] + t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] + t4[11] * t6[6] + t4[12] * t6[7] + t4[13] * t6[8] - t4[14] * t6[9],
t4[2] * t6[9] - t4[3] * t6[3] - t4[4] * t6[0] + t4[6] * t6[5] - t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[15] * t6[8],
 - t4[1] * t6[9] - t4[3] * t6[4] - t4[4] * t6[1] - t4[5] * t6[5] + t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[15] * t6[7],
t4[0] * t6[9] - t4[3] * t6[5] - t4[4] * t6[2] + t4[5] * t6[4] - t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[12] * t6[8] - t4[13] * t6[7] + t4[15] * t6[6],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[9] + t4[12] * t6[0] + t4[13] * t6[1] - t4[14] * t6[2] + t4[15] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[3] * t6[7] + t4[5] * t6[6] - t4[6] * t6[9] - t4[7] * t6[8] - t4[11] * t6[0] + t4[13] * t6[2] + t4[14] * t6[1] - t4[15] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[8] + t4[5] * t6[9] + t4[6] * t6[6] + t4[7] * t6[7] - t4[11] * t6[1] - t4[12] * t6[2] - t4[14] * t6[0] + t4[15] * t6[0],
 - t4[1] * t6[3] - t4[2] * t6[4] + t4[4] * t6[6] + t4[8] * t6[7] + t4[9] * t6[8] + t4[10] * t6[9] - t4[12] * t6[3] - t4[13] * t6[4] - t4[14] * t6[5] - t4[15] * t6[5],
t4[0] * t6[3] - t4[2] * t6[5] + t4[4] * t6[7] - t4[8] * t6[6] - t4[9] * t6[9] + t4[10] * t6[8] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[4] + t4[15] * t6[4],
t4[0] * t6[4] + t4[1] * t6[5] + t4[4] * t6[8] + t4[8] * t6[9] - t4[9] * t6[6] - t4[10] * t6[7] + t4[11] * t6[4] + t4[12] * t6[5] - t4[14] * t6[3] - t4[15] * t6[3],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[5] * t6[3] - t4[6] * t6[4] - t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] - t4[15] * t6[9],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[3] - t4[4] * t6[0] - t4[6] * t6[5] + t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[13] * t6[9] + t4[14] * t6[8],
t4[0] * t6[8] - t4[2] * t6[6] + t4[3] * t6[4] - t4[4] * t6[1] + t4[5] * t6[5] - t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] - t4[12] * t6[9] - t4[14] * t6[7],
t4[1] * t6[8] - t4[2] * t6[7] + t4[3] * t6[5] - t4[4] * t6[2] - t4[5] * t6[4] + t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[11] * t6[9] + t4[14] * t6[6]
);

}
		
	
	  	
template<>
inline Trt re (const Trt& trt, const Sph& sph) {					
					
const Sph& t1 = sph;
const Trt& t2 = trt;
Trt t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[11] - t1[1] * t3[12] - t1[2] * t3[13],
t1[0] * t3[10] - t1[1] * t3[13] + t1[2] * t3[12] + t1[3] * t3[9] + t1[4] * t3[6],
t1[0] * t3[13] + t1[1] * t3[10] - t1[2] * t3[11] - t1[3] * t3[8] - t1[4] * t3[5],
 - t1[0] * t3[12] + t1[1] * t3[11] + t1[2] * t3[10] + t1[3] * t3[7] + t1[4] * t3[4],
 - t1[0] * t3[5] - t1[1] * t3[6] - t1[3] * t3[3] - t1[3] * t3[13],
t1[0] * t3[4] - t1[2] * t3[6] + t1[3] * t3[2] + t1[3] * t3[12],
t1[1] * t3[4] + t1[2] * t3[5] - t1[3] * t3[1] - t1[3] * t3[11],
t1[0] * t3[8] + t1[1] * t3[9] - t1[4] * t3[3] + t1[4] * t3[13],
 - t1[0] * t3[7] + t1[2] * t3[9] + t1[4] * t3[2] - t1[4] * t3[12],
 - t1[1] * t3[7] - t1[2] * t3[8] - t1[4] * t3[1] + t1[4] * t3[11],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] - t1[3] * t3[9] + t1[4] * t3[6],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[8] - t1[4] * t3[5],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] - t1[3] * t3[7] + t1[4] * t3[4],
 - t1[0] * t3[6] + t1[1] * t3[5] - t1[2] * t3[4] + t1[3] * t3[0] + t1[3] * t3[10],
t1[0] * t3[9] - t1[1] * t3[8] + t1[2] * t3[7] + t1[4] * t3[0] - t1[4] * t3[10]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Trt (
 - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2] - t4[14] * t6[4] - t4[15] * t6[3],
t4[6] * t6[4] + t4[9] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1],
 - t4[5] * t6[4] - t4[8] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0],
t4[4] * t6[4] + t4[7] * t6[3] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0],
 - t4[3] * t6[3] - t4[5] * t6[0] - t4[6] * t6[1] + t4[13] * t6[3] - t4[14] * t6[2],
t4[2] * t6[3] + t4[4] * t6[0] - t4[6] * t6[2] - t4[12] * t6[3] + t4[14] * t6[1],
 - t4[1] * t6[3] + t4[4] * t6[1] + t4[5] * t6[2] + t4[11] * t6[3] - t4[14] * t6[0],
 - t4[3] * t6[4] + t4[8] * t6[0] + t4[9] * t6[1] - t4[13] * t6[4] + t4[15] * t6[2],
t4[2] * t6[4] - t4[7] * t6[0] + t4[9] * t6[2] + t4[12] * t6[4] - t4[15] * t6[1],
 - t4[1] * t6[4] - t4[7] * t6[1] - t4[8] * t6[2] - t4[11] * t6[4] + t4[15] * t6[0],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[14] * t6[4] - t4[15] * t6[3],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] - t4[6] * t6[4] + t4[9] * t6[3],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[5] * t6[4] - t4[8] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[4] * t6[4] + t4[7] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	