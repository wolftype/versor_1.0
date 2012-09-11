		#ifndef CIR_H_INCLUDED
		#define CIR_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Cir gp (const Cir& a, const Sca& b) { 
	return Cir (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[7] * b[0],
a[8] * b[0],
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Sca*)(&b));
}			
		 
inline Ori_Cir gp (const Cir& a, const Ori& b) { 
	return Ori_Cir (
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
 - a[7] * b[0],
 - a[8] * b[0],
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Ori*)(&b));
}			
		 
inline Inf_Cir gp (const Cir& a, const Inf& b) { 
	return Inf_Cir (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
a[6] * b[0],
a[7] * b[0],
a[8] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Inf*)(&b));
}			
		 
inline Mnk_Cir gp (const Cir& a, const Mnk& b) { 
	return Mnk_Cir (
a[6] * b[0],
a[7] * b[0],
a[8] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Cir gp (const Cir& a, const Hyp& b) { 
	return Hyp_Cir (
 - a[0] * b[1] - a[3] * b[0],
 - a[1] * b[1] - a[4] * b[0],
 - a[2] * b[1] - a[5] * b[0],
 - a[6] * b[0],
 - a[7] * b[0],
 - a[8] * b[0],
a[6] * b[1],
a[7] * b[1],
a[8] * b[1],
a[0] * b[1] - a[3] * b[0],
a[1] * b[1] - a[4] * b[0],
a[2] * b[1] - a[5] * b[0],
a[9] * b[0],
a[9] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Hyp*)(&b));
}			
		 
inline Par gp (const Cir& a, const Pss& b) { 
	return Par (
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
 - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Pss*)(&b));
}			
		 
inline Pnt_Cir gp (const Cir& a, const Pnt& b) { 
	return Pnt_Cir (
 - a[0] * b[4] - a[3] * b[3] + a[9] * b[2],
 - a[1] * b[4] - a[4] * b[3] - a[9] * b[1],
 - a[2] * b[4] - a[5] * b[3] + a[9] * b[0],
 - a[0] * b[1] - a[1] * b[2] - a[6] * b[3],
a[0] * b[0] - a[2] * b[2] - a[7] * b[3],
a[1] * b[0] + a[2] * b[1] - a[8] * b[3],
 - a[3] * b[1] - a[4] * b[2] + a[6] * b[4],
a[3] * b[0] - a[5] * b[2] + a[7] * b[4],
a[4] * b[0] + a[5] * b[1] + a[8] * b[4],
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
a[0] * b[4] - a[3] * b[3] + a[6] * b[1] - a[7] * b[0],
a[1] * b[4] - a[4] * b[3] + a[6] * b[2] - a[8] * b[0],
a[2] * b[4] - a[5] * b[3] + a[7] * b[2] - a[8] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[9] * b[3],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0] + a[9] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Pnt*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Par& b) { 
	return Rtc (
a[0] * b[7] + a[1] * b[8] + a[3] * b[4] + a[4] * b[5] + a[6] * b[9] - a[9] * b[2],
 - a[0] * b[6] + a[2] * b[8] - a[3] * b[3] + a[5] * b[5] + a[7] * b[9] + a[9] * b[1],
 - a[1] * b[6] - a[2] * b[7] - a[4] * b[3] - a[5] * b[4] + a[8] * b[9] - a[9] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[6] * b[3] - a[7] * b[4] - a[8] * b[5],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2] + a[6] * b[6] + a[7] * b[7] + a[8] * b[8],
a[0] * b[9] - a[1] * b[2] + a[2] * b[1] - a[6] * b[4] + a[7] * b[3] + a[9] * b[5],
a[0] * b[2] + a[1] * b[9] - a[2] * b[0] - a[6] * b[5] + a[8] * b[3] - a[9] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[2] * b[9] - a[7] * b[5] + a[8] * b[4] + a[9] * b[3],
 - a[3] * b[9] - a[4] * b[2] + a[5] * b[1] + a[6] * b[7] - a[7] * b[6] + a[9] * b[8],
a[3] * b[2] - a[4] * b[9] - a[5] * b[0] + a[6] * b[8] - a[8] * b[6] - a[9] * b[7],
 - a[3] * b[1] + a[4] * b[0] - a[5] * b[9] + a[7] * b[8] - a[8] * b[7] + a[9] * b[6],
 - a[0] * b[7] - a[1] * b[8] + a[3] * b[4] + a[4] * b[5] - a[7] * b[0] - a[8] * b[1],
a[0] * b[6] - a[2] * b[8] - a[3] * b[3] + a[5] * b[5] + a[6] * b[0] - a[8] * b[2],
a[1] * b[6] + a[2] * b[7] - a[4] * b[3] - a[5] * b[4] + a[6] * b[1] + a[7] * b[2],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0] + a[9] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Par*)(&b));
}			
		 
inline Mtt gp (const Cir& a, const Cir& b) { 
	return Mtt (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[3] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[6] + a[7] * b[7] + a[8] * b[8] - a[9] * b[9],
a[1] * b[5] - a[2] * b[4] + a[4] * b[2] - a[5] * b[1] + a[6] * b[7] - a[7] * b[6],
 - a[0] * b[5] + a[2] * b[3] - a[3] * b[2] + a[5] * b[0] + a[6] * b[8] - a[8] * b[6],
a[0] * b[4] - a[1] * b[3] + a[3] * b[1] - a[4] * b[0] + a[7] * b[8] - a[8] * b[7],
 - a[0] * b[7] - a[1] * b[8] + a[2] * b[9] + a[7] * b[0] + a[8] * b[1] - a[9] * b[2],
a[0] * b[6] - a[1] * b[9] - a[2] * b[8] - a[6] * b[0] + a[8] * b[2] + a[9] * b[1],
a[0] * b[9] + a[1] * b[6] + a[2] * b[7] - a[6] * b[1] - a[7] * b[2] - a[9] * b[0],
a[3] * b[7] + a[4] * b[8] + a[5] * b[9] - a[7] * b[3] - a[8] * b[4] - a[9] * b[5],
 - a[3] * b[6] - a[4] * b[9] + a[5] * b[8] + a[6] * b[3] - a[8] * b[5] + a[9] * b[4],
a[3] * b[9] - a[4] * b[6] - a[5] * b[7] + a[6] * b[4] + a[7] * b[5] - a[9] * b[3],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5] + a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
 - a[1] * b[5] + a[2] * b[4] + a[4] * b[2] - a[5] * b[1] + a[8] * b[9] + a[9] * b[8],
a[0] * b[5] - a[2] * b[3] - a[3] * b[2] + a[5] * b[0] - a[7] * b[9] - a[9] * b[7],
 - a[0] * b[4] + a[1] * b[3] + a[3] * b[1] - a[4] * b[0] + a[6] * b[9] + a[9] * b[6],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] - a[6] * b[2] + a[7] * b[1] - a[8] * b[0],
a[3] * b[8] - a[4] * b[7] + a[5] * b[6] + a[6] * b[5] - a[7] * b[4] + a[8] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt_Par gp (const Cir& a, const Sph& b) { 
	return Pnt_Par (
 - a[2] * b[4] - a[5] * b[3] - a[7] * b[0] - a[8] * b[1],
a[1] * b[4] + a[4] * b[3] + a[6] * b[0] - a[8] * b[2],
 - a[0] * b[4] - a[3] * b[3] + a[6] * b[1] + a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[9] * b[3],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2] - a[9] * b[4],
 - a[1] * b[2] + a[2] * b[1] - a[8] * b[3],
a[0] * b[2] - a[2] * b[0] + a[7] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[6] * b[3],
a[4] * b[2] - a[5] * b[1] + a[8] * b[4],
 - a[3] * b[2] + a[5] * b[0] - a[7] * b[4],
a[3] * b[1] - a[4] * b[0] + a[6] * b[4],
a[2] * b[4] - a[5] * b[3] - a[9] * b[2],
 - a[1] * b[4] + a[4] * b[3] + a[9] * b[1],
a[0] * b[4] - a[3] * b[3] - a[9] * b[0],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Sph*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Sta& b) { 
	return Rtc (
a[0] * b[7] + a[1] * b[8] + a[3] * b[4] + a[4] * b[5] - a[9] * b[2],
 - a[0] * b[6] + a[2] * b[8] - a[3] * b[3] + a[5] * b[5] + a[9] * b[1],
 - a[1] * b[6] - a[2] * b[7] - a[4] * b[3] - a[5] * b[4] - a[9] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[6] * b[3] - a[7] * b[4] - a[8] * b[5],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2] + a[6] * b[6] + a[7] * b[7] + a[8] * b[8],
 - a[1] * b[2] + a[2] * b[1] - a[6] * b[4] + a[7] * b[3] + a[9] * b[5],
a[0] * b[2] - a[2] * b[0] - a[6] * b[5] + a[8] * b[3] - a[9] * b[4],
 - a[0] * b[1] + a[1] * b[0] - a[7] * b[5] + a[8] * b[4] + a[9] * b[3],
 - a[4] * b[2] + a[5] * b[1] + a[6] * b[7] - a[7] * b[6] + a[9] * b[8],
a[3] * b[2] - a[5] * b[0] + a[6] * b[8] - a[8] * b[6] - a[9] * b[7],
 - a[3] * b[1] + a[4] * b[0] + a[7] * b[8] - a[8] * b[7] + a[9] * b[6],
 - a[0] * b[7] - a[1] * b[8] + a[3] * b[4] + a[4] * b[5] - a[7] * b[0] - a[8] * b[1],
a[0] * b[6] - a[2] * b[8] - a[3] * b[3] + a[5] * b[5] + a[6] * b[0] - a[8] * b[2],
a[1] * b[6] + a[2] * b[7] - a[4] * b[3] - a[5] * b[4] + a[6] * b[1] + a[7] * b[2],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Sta*)(&b));
}			
		 
inline Par_Drb gp (const Cir& a, const Drv& b) { 
	return Par_Drb (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
a[6] * b[1] - a[7] * b[0] + a[9] * b[2],
a[6] * b[2] - a[8] * b[0] - a[9] * b[1],
a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Drv*)(&b));
}			
		 
inline Mtd gp (const Cir& a, const Drb& b) { 
	return Mtd (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
a[6] * b[0] - a[8] * b[2] + a[9] * b[1],
a[6] * b[1] + a[7] * b[2] - a[9] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Drb*)(&b));
}			
		 
inline Inf_Par gp (const Cir& a, const Drt& b) { 
	return Inf_Par (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[9] * b[0],
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Drt*)(&b));
}			
		 
inline Par_Tnb gp (const Cir& a, const Tnv& b) { 
	return Par_Tnb (
a[3] * b[1] + a[4] * b[2],
 - a[3] * b[0] + a[5] * b[2],
 - a[4] * b[0] - a[5] * b[1],
 - a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
 - a[6] * b[1] + a[7] * b[0] + a[9] * b[2],
 - a[6] * b[2] + a[8] * b[0] - a[9] * b[1],
 - a[7] * b[2] + a[8] * b[1] + a[9] * b[0],
a[3] * b[1] + a[4] * b[2],
 - a[3] * b[0] + a[5] * b[2],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Tnv*)(&b));
}			
		 
inline Rvd gp (const Cir& a, const Tnb& b) { 
	return Rvd (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[4] * b[2] - a[5] * b[1],
 - a[3] * b[2] + a[5] * b[0],
a[3] * b[1] - a[4] * b[0],
a[7] * b[0] + a[8] * b[1] - a[9] * b[2],
 - a[6] * b[0] + a[8] * b[2] + a[9] * b[1],
 - a[6] * b[1] - a[7] * b[2] - a[9] * b[0],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[4] * b[2] - a[5] * b[1],
 - a[3] * b[2] + a[5] * b[0],
a[3] * b[1] - a[4] * b[0],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori_Par gp (const Cir& a, const Tnt& b) { 
	return Ori_Par (
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
 - a[9] * b[0],
 - a[8] * b[0],
a[7] * b[0],
 - a[6] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Tnt*)(&b));
}			
		 
inline Mtt gp (const Cir& a, const Lin& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
a[1] * b[2] - a[2] * b[1] + a[6] * b[4] - a[7] * b[3],
 - a[0] * b[2] + a[2] * b[0] + a[6] * b[5] - a[8] * b[3],
a[0] * b[1] - a[1] * b[0] + a[7] * b[5] - a[8] * b[4],
 - a[0] * b[4] - a[1] * b[5],
a[0] * b[3] - a[2] * b[5],
a[1] * b[3] + a[2] * b[4],
a[3] * b[4] + a[4] * b[5] - a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
 - a[3] * b[3] + a[5] * b[5] + a[6] * b[0] - a[8] * b[2] + a[9] * b[1],
 - a[4] * b[3] - a[5] * b[4] + a[6] * b[1] + a[7] * b[2] - a[9] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[9] * b[5],
a[0] * b[2] - a[2] * b[0] - a[9] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[9] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3],
a[3] * b[5] - a[4] * b[4] + a[5] * b[3] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Lin*)(&b));
}			
		 
inline Pnt_Par gp (const Cir& a, const Pln& b) { 
	return Pnt_Par (
 - a[2] * b[3] - a[7] * b[0] - a[8] * b[1],
a[1] * b[3] + a[6] * b[0] - a[8] * b[2],
 - a[0] * b[3] + a[6] * b[1] + a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2] - a[9] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[4] * b[2] - a[5] * b[1] + a[8] * b[3],
 - a[3] * b[2] + a[5] * b[0] - a[7] * b[3],
a[3] * b[1] - a[4] * b[0] + a[6] * b[3],
a[2] * b[3] - a[9] * b[2],
 - a[1] * b[3] + a[9] * b[1],
a[0] * b[3] - a[9] * b[0],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Pln*)(&b));
}			
		 
inline Par_Dfp gp (const Cir& a, const Flp& b) { 
	return Par_Dfp (
a[0] * b[1] + a[1] * b[2] + a[6] * b[3],
 - a[0] * b[0] + a[2] * b[2] + a[7] * b[3],
 - a[1] * b[0] - a[2] * b[1] + a[8] * b[3],
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[3] * b[3] + a[6] * b[1] - a[7] * b[0] + a[9] * b[2],
 - a[4] * b[3] + a[6] * b[2] - a[8] * b[0] - a[9] * b[1],
 - a[5] * b[3] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[9] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Flp*)(&b));
}			
		 
inline Tvt gp (const Cir& a, const Dfp& b) { 
	return Tvt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[9] * b[3],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[5] * b[3] - a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
 - a[4] * b[3] + a[6] * b[0] - a[8] * b[2] + a[9] * b[1],
a[3] * b[3] + a[6] * b[1] + a[7] * b[2] - a[9] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[8] * b[3],
a[0] * b[2] - a[2] * b[0] - a[7] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[6] * b[3],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Dfp*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Dll& b) { 
	return Rtc (
a[0] * b[4] + a[1] * b[5] - a[9] * b[2],
 - a[0] * b[3] + a[2] * b[5] + a[9] * b[1],
 - a[1] * b[3] - a[2] * b[4] - a[9] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[4] * b[2] + a[5] * b[1] + a[6] * b[4] - a[7] * b[3] + a[9] * b[5],
a[3] * b[2] - a[5] * b[0] + a[6] * b[5] - a[8] * b[3] - a[9] * b[4],
 - a[3] * b[1] + a[4] * b[0] + a[7] * b[5] - a[8] * b[4] + a[9] * b[3],
 - a[0] * b[4] - a[1] * b[5] - a[7] * b[0] - a[8] * b[1],
a[0] * b[3] - a[2] * b[5] + a[6] * b[0] - a[8] * b[2],
a[1] * b[3] + a[2] * b[4] + a[6] * b[1] + a[7] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Dll*)(&b));
}			
		 
inline Pnt_Cir gp (const Cir& a, const Dlp& b) { 
	return Pnt_Cir (
 - a[0] * b[3] + a[9] * b[2],
 - a[1] * b[3] - a[9] * b[1],
 - a[2] * b[3] + a[9] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[3] * b[1] - a[4] * b[2] + a[6] * b[3],
a[3] * b[0] - a[5] * b[2] + a[7] * b[3],
a[4] * b[0] + a[5] * b[1] + a[8] * b[3],
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
a[0] * b[3] + a[6] * b[1] - a[7] * b[0],
a[1] * b[3] + a[6] * b[2] - a[8] * b[0],
a[2] * b[3] + a[7] * b[2] - a[8] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0] + a[9] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Dlp*)(&b));
}			
		 
inline Pnt_Cir gp (const Cir& a, const Vec& b) { 
	return Pnt_Cir (
a[9] * b[2],
 - a[9] * b[1],
a[9] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[3] * b[1] - a[4] * b[2],
a[3] * b[0] - a[5] * b[2],
a[4] * b[0] + a[5] * b[1],
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
a[6] * b[1] - a[7] * b[0],
a[6] * b[2] - a[8] * b[0],
a[7] * b[2] - a[8] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Vec*)(&b));
}			
		 
inline Par_Mnv gp (const Cir& a, const Biv& b) { 
	return Par_Mnv (
 - a[9] * b[2],
a[9] * b[1],
 - a[9] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[3] * b[2] - a[5] * b[0],
 - a[3] * b[1] + a[4] * b[0],
 - a[7] * b[0] - a[8] * b[1],
a[6] * b[0] - a[8] * b[2],
a[6] * b[1] + a[7] * b[2],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Biv*)(&b));
}			
		 
inline Mnk_Par gp (const Cir& a, const Tri& b) { 
	return Mnk_Par (
 - a[9] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Tri*)(&b));
}			
		 
inline Pnt_Cir gp (const Cir& a, const Aff& b) { 
	return Pnt_Cir (
 - a[3] * b[3] + a[9] * b[2],
 - a[4] * b[3] - a[9] * b[1],
 - a[5] * b[3] + a[9] * b[0],
 - a[0] * b[1] - a[1] * b[2] - a[6] * b[3],
a[0] * b[0] - a[2] * b[2] - a[7] * b[3],
a[1] * b[0] + a[2] * b[1] - a[8] * b[3],
 - a[3] * b[1] - a[4] * b[2],
a[3] * b[0] - a[5] * b[2],
a[4] * b[0] + a[5] * b[1],
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
 - a[3] * b[3] + a[6] * b[1] - a[7] * b[0],
 - a[4] * b[3] + a[6] * b[2] - a[8] * b[0],
 - a[5] * b[3] + a[7] * b[2] - a[8] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[9] * b[3],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Aff*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Afl& b) { 
	return Rtc (
a[3] * b[4] + a[4] * b[5] - a[9] * b[2],
 - a[3] * b[3] + a[5] * b[5] + a[9] * b[1],
 - a[4] * b[3] - a[5] * b[4] - a[9] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[6] * b[3] - a[7] * b[4] - a[8] * b[5],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[6] * b[4] + a[7] * b[3] + a[9] * b[5],
a[0] * b[2] - a[2] * b[0] - a[6] * b[5] + a[8] * b[3] - a[9] * b[4],
 - a[0] * b[1] + a[1] * b[0] - a[7] * b[5] + a[8] * b[4] + a[9] * b[3],
 - a[4] * b[2] + a[5] * b[1],
a[3] * b[2] - a[5] * b[0],
 - a[3] * b[1] + a[4] * b[0],
a[3] * b[4] + a[4] * b[5] - a[7] * b[0] - a[8] * b[1],
 - a[3] * b[3] + a[5] * b[5] + a[6] * b[0] - a[8] * b[2],
 - a[4] * b[3] - a[5] * b[4] + a[6] * b[1] + a[7] * b[2],
a[3] * b[5] - a[4] * b[4] + a[5] * b[3],
a[3] * b[5] - a[4] * b[4] + a[5] * b[3] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Afl*)(&b));
}			
		 
inline Tst gp (const Cir& a, const Afp& b) { 
	return Tst (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2] - a[9] * b[3],
a[4] * b[2] - a[5] * b[1],
 - a[3] * b[2] + a[5] * b[0],
a[3] * b[1] - a[4] * b[0],
a[2] * b[3] + a[7] * b[0] + a[8] * b[1] - a[9] * b[2],
 - a[1] * b[3] - a[6] * b[0] + a[8] * b[2] + a[9] * b[1],
a[0] * b[3] - a[6] * b[1] - a[7] * b[2] - a[9] * b[0],
a[5] * b[3],
 - a[4] * b[3],
a[3] * b[3],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[4] * b[2] - a[5] * b[1] + a[8] * b[3],
 - a[3] * b[2] + a[5] * b[0] - a[7] * b[3],
a[3] * b[1] - a[4] * b[0] + a[6] * b[3],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Afp*)(&b));
}			
		 
inline Par_Afp gp (const Cir& a, const Dap& b) { 
	return Par_Afp (
a[3] * b[1] + a[4] * b[2] + a[6] * b[3],
 - a[3] * b[0] + a[5] * b[2] + a[7] * b[3],
 - a[4] * b[0] - a[5] * b[1] + a[8] * b[3],
 - a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
a[0] * b[3] - a[6] * b[1] + a[7] * b[0] + a[9] * b[2],
a[1] * b[3] - a[6] * b[2] + a[8] * b[0] - a[9] * b[1],
a[2] * b[3] - a[7] * b[2] + a[8] * b[1] + a[9] * b[0],
 - a[3] * b[3],
 - a[4] * b[3],
 - a[5] * b[3],
a[3] * b[1] + a[4] * b[2],
 - a[3] * b[0] + a[5] * b[2],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0] + a[9] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Dap*)(&b));
}			
		 
inline Pnt_Par gp (const Cir& a, const Daf& b) { 
	return Pnt_Par (
 - a[5] * b[3] - a[7] * b[0] - a[8] * b[1],
a[4] * b[3] + a[6] * b[0] - a[8] * b[2],
 - a[3] * b[3] + a[6] * b[1] + a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[9] * b[3],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[8] * b[3],
a[0] * b[2] - a[2] * b[0] + a[7] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[6] * b[3],
a[4] * b[2] - a[5] * b[1],
 - a[3] * b[2] + a[5] * b[0],
a[3] * b[1] - a[4] * b[0],
 - a[5] * b[3] - a[9] * b[2],
a[4] * b[3] + a[9] * b[1],
 - a[3] * b[3] - a[9] * b[0],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Daf*)(&b));
}			
		 
inline Mtt gp (const Cir& a, const Dal& b) { 
	return Mtt (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
a[4] * b[2] - a[5] * b[1] + a[6] * b[4] - a[7] * b[3],
 - a[3] * b[2] + a[5] * b[0] + a[6] * b[5] - a[8] * b[3],
a[3] * b[1] - a[4] * b[0] + a[7] * b[5] - a[8] * b[4],
 - a[0] * b[4] - a[1] * b[5] + a[7] * b[0] + a[8] * b[1] - a[9] * b[2],
a[0] * b[3] - a[2] * b[5] - a[6] * b[0] + a[8] * b[2] + a[9] * b[1],
a[1] * b[3] + a[2] * b[4] - a[6] * b[1] - a[7] * b[2] - a[9] * b[0],
a[3] * b[4] + a[4] * b[5],
 - a[3] * b[3] + a[5] * b[5],
 - a[4] * b[3] - a[5] * b[4],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[4] * b[2] - a[5] * b[1] + a[9] * b[5],
 - a[3] * b[2] + a[5] * b[0] - a[9] * b[4],
a[3] * b[1] - a[4] * b[0] + a[9] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3] - a[6] * b[2] + a[7] * b[1] - a[8] * b[0],
a[3] * b[5] - a[4] * b[4] + a[5] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Dal*)(&b));
}			
		 
inline Par_Biv gp (const Cir& a, const Mnv& b) { 
	return Par_Biv (
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
a[6] * b[1] - a[7] * b[0],
a[6] * b[2] - a[8] * b[0],
a[7] * b[2] - a[8] * b[1],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[3] * b[1] + a[4] * b[2],
 - a[3] * b[0] + a[5] * b[2],
 - a[4] * b[0] - a[5] * b[1],
a[9] * b[2],
 - a[9] * b[1],
a[9] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Mnv*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Rot& b) { 
	return Rtc (
 - a[9] * b[3],
a[9] * b[2],
 - a[9] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0] - a[4] * b[3] + a[5] * b[2],
a[3] * b[3] + a[4] * b[0] - a[5] * b[1],
 - a[3] * b[2] + a[4] * b[1] + a[5] * b[0],
a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
a[6] * b[1] + a[7] * b[0] - a[8] * b[3],
a[6] * b[2] + a[7] * b[3] + a[8] * b[0],
a[9] * b[0],
a[6] * b[3] - a[7] * b[2] + a[8] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Rot*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Mot& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] - a[2] * b[7] - a[9] * b[3],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[9] * b[2],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5] - a[9] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] - a[9] * b[7],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0] - a[4] * b[3] + a[5] * b[2] + a[6] * b[5] - a[7] * b[4] + a[8] * b[7] + a[9] * b[6],
a[3] * b[3] + a[4] * b[0] - a[5] * b[1] + a[6] * b[6] - a[7] * b[7] - a[8] * b[4] - a[9] * b[5],
 - a[3] * b[2] + a[4] * b[1] + a[5] * b[0] + a[6] * b[7] + a[7] * b[6] - a[8] * b[5] + a[9] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[7] + a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
a[0] * b[4] - a[1] * b[7] - a[2] * b[6] + a[6] * b[1] + a[7] * b[0] - a[8] * b[3],
a[0] * b[7] + a[1] * b[4] + a[2] * b[5] + a[6] * b[2] + a[7] * b[3] + a[8] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[9] * b[0],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Mot*)(&b));
}			
		 
inline Flp_Afp gp (const Cir& a, const Dil& b) { 
	return Flp_Afp (
a[6] * b[1],
a[7] * b[1],
a[8] * b[1],
a[0] * b[0] + a[0] * b[1],
a[1] * b[0] + a[1] * b[1],
a[2] * b[0] + a[2] * b[1],
a[3] * b[0] - a[3] * b[1],
a[4] * b[0] - a[4] * b[1],
a[5] * b[0] - a[5] * b[1],
a[6] * b[0],
a[7] * b[0],
a[8] * b[0],
a[9] * b[0],
a[9] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Dil*)(&b));
}			
		 
inline Par_Afp gp (const Cir& a, const Trv& b) { 
	return Par_Afp (
a[3] * b[2] + a[4] * b[3],
 - a[3] * b[1] + a[5] * b[3],
 - a[4] * b[1] - a[5] * b[2],
 - a[6] * b[1] - a[7] * b[2] - a[8] * b[3],
a[0] * b[0] - a[6] * b[2] + a[7] * b[1] + a[9] * b[3],
a[1] * b[0] - a[6] * b[3] + a[8] * b[1] - a[9] * b[2],
a[2] * b[0] - a[7] * b[3] + a[8] * b[2] + a[9] * b[1],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[3] * b[2] + a[4] * b[3] + a[6] * b[0],
 - a[3] * b[1] + a[5] * b[3] + a[7] * b[0],
 - a[4] * b[1] - a[5] * b[2] + a[8] * b[0],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1] + a[9] * b[0],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Trv*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Mtd& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] + a[6] * b[7] - a[7] * b[8] - a[8] * b[9] - a[9] * b[3],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[6] * b[8] + a[7] * b[7] - a[8] * b[10] + a[9] * b[2],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] + a[6] * b[9] + a[7] * b[10] + a[8] * b[7] - a[9] * b[1],
 - a[0] * b[1] - a[0] * b[8] - a[1] * b[2] - a[1] * b[9] - a[2] * b[3] - a[2] * b[10],
 - a[3] * b[1] + a[3] * b[8] - a[4] * b[2] + a[4] * b[9] - a[5] * b[3] + a[5] * b[10] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] - a[9] * b[11],
a[0] * b[0] + a[0] * b[7] - a[1] * b[3] - a[1] * b[10] + a[2] * b[2] + a[2] * b[9],
a[0] * b[3] + a[0] * b[10] + a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8],
 - a[0] * b[2] - a[0] * b[9] + a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7],
a[3] * b[0] - a[3] * b[7] - a[4] * b[3] + a[4] * b[10] + a[5] * b[2] - a[5] * b[9] + a[6] * b[5] - a[7] * b[4] + a[8] * b[11] + a[9] * b[6],
a[3] * b[3] - a[3] * b[10] + a[4] * b[0] - a[4] * b[7] - a[5] * b[1] + a[5] * b[8] + a[6] * b[6] - a[7] * b[11] - a[8] * b[4] - a[9] * b[5],
 - a[3] * b[2] + a[3] * b[9] + a[4] * b[1] - a[4] * b[8] + a[5] * b[0] - a[5] * b[7] + a[6] * b[11] + a[7] * b[6] - a[8] * b[5] + a[9] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[11] + a[6] * b[0] - a[7] * b[1] - a[8] * b[2] - a[9] * b[10],
a[0] * b[4] - a[1] * b[11] - a[2] * b[6] + a[6] * b[1] + a[7] * b[0] - a[8] * b[3] + a[9] * b[9],
a[0] * b[11] + a[1] * b[4] + a[2] * b[5] + a[6] * b[2] + a[7] * b[3] + a[8] * b[0] - a[9] * b[8],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[6] * b[10] - a[7] * b[9] + a[8] * b[8] + a[9] * b[0],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1] + a[9] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Mtd*)(&b));
}			
		 
inline Par_Dfp gp (const Cir& a, const Trs& b) { 
	return Par_Dfp (
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[6] * b[1] + a[7] * b[2] + a[8] * b[3],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] + a[6] * b[2] - a[7] * b[1] + a[9] * b[3],
a[4] * b[0] + a[6] * b[3] - a[8] * b[1] - a[9] * b[2],
a[5] * b[0] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1],
 - a[0] * b[2] - a[1] * b[3] + a[6] * b[0],
a[0] * b[1] - a[2] * b[3] + a[7] * b[0],
a[1] * b[1] + a[2] * b[2] + a[8] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[9] * b[0],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Trs*)(&b));
}			
		 
inline Mtt gp (const Cir& a, const Rtc& b) { 
	return Mtt (
a[0] * b[8] + a[1] * b[9] + a[2] * b[10] + a[3] * b[5] + a[4] * b[6] + a[5] * b[7] + a[6] * b[11] + a[7] * b[12] + a[8] * b[13] - a[9] * b[14],
 - a[0] * b[4] + a[1] * b[10] - a[2] * b[9] - a[3] * b[3] + a[4] * b[7] - a[5] * b[6] + a[6] * b[12] - a[7] * b[11] + a[8] * b[15] + a[9] * b[2],
 - a[0] * b[10] - a[1] * b[4] + a[2] * b[8] - a[3] * b[7] - a[4] * b[3] + a[5] * b[5] + a[6] * b[13] - a[7] * b[15] - a[8] * b[11] - a[9] * b[1],
a[0] * b[9] - a[1] * b[8] - a[2] * b[4] + a[3] * b[6] - a[4] * b[5] - a[5] * b[3] + a[6] * b[15] + a[7] * b[13] - a[8] * b[12] + a[9] * b[0],
 - a[0] * b[1] - a[0] * b[12] - a[1] * b[2] - a[1] * b[13] + a[2] * b[14] + a[2] * b[15] - a[6] * b[3] + a[7] * b[5] + a[8] * b[6] - a[9] * b[7],
a[0] * b[0] + a[0] * b[11] - a[1] * b[14] - a[1] * b[15] - a[2] * b[2] - a[2] * b[13] - a[6] * b[5] - a[7] * b[3] + a[8] * b[7] + a[9] * b[6],
a[0] * b[14] + a[0] * b[15] + a[1] * b[0] + a[1] * b[11] + a[2] * b[1] + a[2] * b[12] - a[6] * b[6] - a[7] * b[7] - a[8] * b[3] - a[9] * b[5],
 - a[3] * b[1] + a[3] * b[12] - a[4] * b[2] + a[4] * b[13] + a[5] * b[14] - a[5] * b[15] + a[6] * b[4] - a[7] * b[8] - a[8] * b[9] - a[9] * b[10],
a[3] * b[0] - a[3] * b[11] - a[4] * b[14] + a[4] * b[15] - a[5] * b[2] + a[5] * b[13] + a[6] * b[8] + a[7] * b[4] - a[8] * b[10] + a[9] * b[9],
a[3] * b[14] - a[3] * b[15] + a[4] * b[0] - a[4] * b[11] + a[5] * b[1] - a[5] * b[12] + a[6] * b[9] + a[7] * b[10] + a[8] * b[4] - a[9] * b[8],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] + a[3] * b[5] + a[4] * b[6] + a[5] * b[7] + a[6] * b[0] + a[7] * b[1] + a[8] * b[2] - a[9] * b[15],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9] - a[3] * b[3] + a[4] * b[7] - a[5] * b[6] + a[6] * b[1] - a[7] * b[0] + a[8] * b[14] + a[9] * b[13],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8] - a[3] * b[7] - a[4] * b[3] + a[5] * b[5] + a[6] * b[2] - a[7] * b[14] - a[8] * b[0] - a[9] * b[12],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4] + a[3] * b[6] - a[4] * b[5] - a[5] * b[3] + a[6] * b[14] + a[7] * b[2] - a[8] * b[1] + a[9] * b[11],
 - a[0] * b[2] - a[0] * b[13] + a[1] * b[1] + a[1] * b[12] - a[2] * b[0] - a[2] * b[11] - a[6] * b[7] + a[7] * b[6] - a[8] * b[5] + a[9] * b[3],
 - a[3] * b[2] + a[3] * b[13] + a[4] * b[1] - a[4] * b[12] - a[5] * b[0] + a[5] * b[11] + a[6] * b[10] - a[7] * b[9] + a[8] * b[8] + a[9] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Rtc*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Mtt& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] - a[2] * b[15] + a[3] * b[5] + a[4] * b[6] - a[5] * b[14] + a[6] * b[10] - a[7] * b[11] - a[8] * b[12] - a[9] * b[3],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9] - a[3] * b[4] + a[4] * b[14] + a[5] * b[6] + a[6] * b[11] + a[7] * b[10] - a[8] * b[13] + a[9] * b[2],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8] - a[3] * b[14] - a[4] * b[4] - a[5] * b[5] + a[6] * b[12] + a[7] * b[13] + a[8] * b[10] - a[9] * b[1],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13] - a[6] * b[4] - a[7] * b[5] - a[8] * b[6] - a[9] * b[14],
 - a[3] * b[1] + a[3] * b[11] - a[4] * b[2] + a[4] * b[12] - a[5] * b[3] + a[5] * b[13] + a[6] * b[7] + a[7] * b[8] + a[8] * b[9] - a[9] * b[15],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] - a[6] * b[5] + a[7] * b[4] - a[8] * b[14] + a[9] * b[6],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[6] * b[6] + a[7] * b[14] + a[8] * b[4] - a[9] * b[5],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[6] * b[14] - a[7] * b[6] + a[8] * b[5] + a[9] * b[4],
a[3] * b[0] - a[3] * b[10] - a[4] * b[3] + a[4] * b[13] + a[5] * b[2] - a[5] * b[12] + a[6] * b[8] - a[7] * b[7] + a[8] * b[15] + a[9] * b[9],
a[3] * b[3] - a[3] * b[13] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] + a[5] * b[11] + a[6] * b[9] - a[7] * b[15] - a[8] * b[7] - a[9] * b[8],
 - a[3] * b[2] + a[3] * b[12] + a[4] * b[1] - a[4] * b[11] + a[5] * b[0] - a[5] * b[10] + a[6] * b[15] + a[7] * b[9] - a[8] * b[8] + a[9] * b[7],
 - a[0] * b[8] - a[1] * b[9] + a[2] * b[15] + a[3] * b[5] + a[4] * b[6] - a[5] * b[14] + a[6] * b[0] - a[7] * b[1] - a[8] * b[2] - a[9] * b[13],
a[0] * b[7] - a[1] * b[15] - a[2] * b[9] - a[3] * b[4] + a[4] * b[14] + a[5] * b[6] + a[6] * b[1] + a[7] * b[0] - a[8] * b[3] + a[9] * b[12],
a[0] * b[15] + a[1] * b[7] + a[2] * b[8] - a[3] * b[14] - a[4] * b[4] - a[5] * b[5] + a[6] * b[2] + a[7] * b[3] + a[8] * b[0] - a[9] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[6] * b[13] - a[7] * b[12] + a[8] * b[11] + a[9] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1] + a[9] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Mtt*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Rtt& b) { 
	return Rtc (
a[3] * b[5] + a[4] * b[6] - a[5] * b[7] - a[9] * b[3],
 - a[3] * b[4] + a[4] * b[7] + a[5] * b[6] + a[9] * b[2],
 - a[3] * b[7] - a[4] * b[4] - a[5] * b[5] - a[9] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[6] * b[4] - a[7] * b[5] - a[8] * b[6] - a[9] * b[7],
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[6] * b[5] + a[7] * b[4] - a[8] * b[7] + a[9] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[6] * b[6] + a[7] * b[7] + a[8] * b[4] - a[9] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[6] * b[7] - a[7] * b[6] + a[8] * b[5] + a[9] * b[4],
a[3] * b[0] - a[4] * b[3] + a[5] * b[2],
a[3] * b[3] + a[4] * b[0] - a[5] * b[1],
 - a[3] * b[2] + a[4] * b[1] + a[5] * b[0],
a[3] * b[5] + a[4] * b[6] - a[5] * b[7] + a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
 - a[3] * b[4] + a[4] * b[7] + a[5] * b[6] + a[6] * b[1] + a[7] * b[0] - a[8] * b[3],
 - a[3] * b[7] - a[4] * b[4] - a[5] * b[5] + a[6] * b[2] + a[7] * b[3] + a[8] * b[0],
a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[9] * b[0],
a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Rtt*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Rtd& b) { 
	return Rtc (
a[6] * b[4] - a[7] * b[5] - a[8] * b[6] - a[9] * b[3],
a[6] * b[5] + a[7] * b[4] - a[8] * b[7] + a[9] * b[2],
a[6] * b[6] + a[7] * b[7] + a[8] * b[4] - a[9] * b[1],
 - a[0] * b[1] - a[0] * b[5] - a[1] * b[2] - a[1] * b[6] - a[2] * b[3] - a[2] * b[7],
 - a[3] * b[1] + a[3] * b[5] - a[4] * b[2] + a[4] * b[6] - a[5] * b[3] + a[5] * b[7],
a[0] * b[0] + a[0] * b[4] - a[1] * b[3] - a[1] * b[7] + a[2] * b[2] + a[2] * b[6],
a[0] * b[3] + a[0] * b[7] + a[1] * b[0] + a[1] * b[4] - a[2] * b[1] - a[2] * b[5],
 - a[0] * b[2] - a[0] * b[6] + a[1] * b[1] + a[1] * b[5] + a[2] * b[0] + a[2] * b[4],
a[3] * b[0] - a[3] * b[4] - a[4] * b[3] + a[4] * b[7] + a[5] * b[2] - a[5] * b[6],
a[3] * b[3] - a[3] * b[7] + a[4] * b[0] - a[4] * b[4] - a[5] * b[1] + a[5] * b[5],
 - a[3] * b[2] + a[3] * b[6] + a[4] * b[1] - a[4] * b[5] + a[5] * b[0] - a[5] * b[4],
a[6] * b[0] - a[7] * b[1] - a[8] * b[2] - a[9] * b[7],
a[6] * b[1] + a[7] * b[0] - a[8] * b[3] + a[9] * b[6],
a[6] * b[2] + a[7] * b[3] + a[8] * b[0] - a[9] * b[5],
a[6] * b[7] - a[7] * b[6] + a[8] * b[5] + a[9] * b[0],
a[6] * b[3] - a[7] * b[2] + a[8] * b[1] + a[9] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Rtd*)(&b));
}			
		 
inline Par_Afp gp (const Cir& a, const Tvd& b) { 
	return Par_Afp (
a[3] * b[2] + a[4] * b[3] + a[6] * b[4],
 - a[3] * b[1] + a[5] * b[3] + a[7] * b[4],
 - a[4] * b[1] - a[5] * b[2] + a[8] * b[4],
 - a[6] * b[1] - a[7] * b[2] - a[8] * b[3],
a[0] * b[0] + a[0] * b[4] - a[6] * b[2] + a[7] * b[1] + a[9] * b[3],
a[1] * b[0] + a[1] * b[4] - a[6] * b[3] + a[8] * b[1] - a[9] * b[2],
a[2] * b[0] + a[2] * b[4] - a[7] * b[3] + a[8] * b[2] + a[9] * b[1],
a[3] * b[0] - a[3] * b[4],
a[4] * b[0] - a[4] * b[4],
a[5] * b[0] - a[5] * b[4],
a[3] * b[2] + a[4] * b[3] + a[6] * b[0],
 - a[3] * b[1] + a[5] * b[3] + a[7] * b[0],
 - a[4] * b[1] - a[5] * b[2] + a[8] * b[0],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1] + a[9] * b[0],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1] + a[9] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Tvd*)(&b));
}			
		 
inline Par_Dfp gp (const Cir& a, const Tsd& b) { 
	return Par_Dfp (
a[0] * b[2] + a[1] * b[3] + a[6] * b[4],
 - a[0] * b[1] + a[2] * b[3] + a[7] * b[4],
 - a[1] * b[1] - a[2] * b[2] + a[8] * b[4],
a[6] * b[1] + a[7] * b[2] + a[8] * b[3],
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4],
a[3] * b[0] - a[3] * b[4] + a[6] * b[2] - a[7] * b[1] + a[9] * b[3],
a[4] * b[0] - a[4] * b[4] + a[6] * b[3] - a[8] * b[1] - a[9] * b[2],
a[5] * b[0] - a[5] * b[4] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1],
 - a[0] * b[2] - a[1] * b[3] + a[6] * b[0],
a[0] * b[1] - a[2] * b[3] + a[7] * b[0],
a[1] * b[1] + a[2] * b[2] + a[8] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[9] * b[0],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[9] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Tsd*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Trt& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] + a[3] * b[5] + a[4] * b[6] + a[6] * b[10] - a[7] * b[11] - a[8] * b[12] - a[9] * b[3],
 - a[0] * b[7] + a[2] * b[9] - a[3] * b[4] + a[5] * b[6] + a[6] * b[11] + a[7] * b[10] - a[8] * b[13] + a[9] * b[2],
 - a[1] * b[7] - a[2] * b[8] - a[4] * b[4] - a[5] * b[5] + a[6] * b[12] + a[7] * b[13] + a[8] * b[10] - a[9] * b[1],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13] - a[6] * b[4] - a[7] * b[5] - a[8] * b[6],
 - a[3] * b[1] + a[3] * b[11] - a[4] * b[2] + a[4] * b[12] - a[5] * b[3] + a[5] * b[13] + a[6] * b[7] + a[7] * b[8] + a[8] * b[9],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] - a[6] * b[5] + a[7] * b[4] + a[9] * b[6],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[6] * b[6] + a[8] * b[4] - a[9] * b[5],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[7] * b[6] + a[8] * b[5] + a[9] * b[4],
a[3] * b[0] - a[3] * b[10] - a[4] * b[3] + a[4] * b[13] + a[5] * b[2] - a[5] * b[12] + a[6] * b[8] - a[7] * b[7] + a[9] * b[9],
a[3] * b[3] - a[3] * b[13] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] + a[5] * b[11] + a[6] * b[9] - a[8] * b[7] - a[9] * b[8],
 - a[3] * b[2] + a[3] * b[12] + a[4] * b[1] - a[4] * b[11] + a[5] * b[0] - a[5] * b[10] + a[7] * b[9] - a[8] * b[8] + a[9] * b[7],
 - a[0] * b[8] - a[1] * b[9] + a[3] * b[5] + a[4] * b[6] + a[6] * b[0] - a[7] * b[1] - a[8] * b[2] - a[9] * b[13],
a[0] * b[7] - a[2] * b[9] - a[3] * b[4] + a[5] * b[6] + a[6] * b[1] + a[7] * b[0] - a[8] * b[3] + a[9] * b[12],
a[1] * b[7] + a[2] * b[8] - a[4] * b[4] - a[5] * b[5] + a[6] * b[2] + a[7] * b[3] + a[8] * b[0] - a[9] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[6] * b[13] - a[7] * b[12] + a[8] * b[11] + a[9] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1] + a[9] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Trt*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Rvd& b) { 
	return Rtc (
a[3] * b[5] + a[4] * b[6] - a[5] * b[11] + a[6] * b[7] - a[7] * b[8] - a[8] * b[9] - a[9] * b[3],
 - a[3] * b[4] + a[4] * b[11] + a[5] * b[6] + a[6] * b[8] + a[7] * b[7] - a[8] * b[10] + a[9] * b[2],
 - a[3] * b[11] - a[4] * b[4] - a[5] * b[5] + a[6] * b[9] + a[7] * b[10] + a[8] * b[7] - a[9] * b[1],
 - a[0] * b[1] - a[0] * b[8] - a[1] * b[2] - a[1] * b[9] - a[2] * b[3] - a[2] * b[10] - a[6] * b[4] - a[7] * b[5] - a[8] * b[6] - a[9] * b[11],
 - a[3] * b[1] + a[3] * b[8] - a[4] * b[2] + a[4] * b[9] - a[5] * b[3] + a[5] * b[10],
a[0] * b[0] + a[0] * b[7] - a[1] * b[3] - a[1] * b[10] + a[2] * b[2] + a[2] * b[9] - a[6] * b[5] + a[7] * b[4] - a[8] * b[11] + a[9] * b[6],
a[0] * b[3] + a[0] * b[10] + a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8] - a[6] * b[6] + a[7] * b[11] + a[8] * b[4] - a[9] * b[5],
 - a[0] * b[2] - a[0] * b[9] + a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7] - a[6] * b[11] - a[7] * b[6] + a[8] * b[5] + a[9] * b[4],
a[3] * b[0] - a[3] * b[7] - a[4] * b[3] + a[4] * b[10] + a[5] * b[2] - a[5] * b[9],
a[3] * b[3] - a[3] * b[10] + a[4] * b[0] - a[4] * b[7] - a[5] * b[1] + a[5] * b[8],
 - a[3] * b[2] + a[3] * b[9] + a[4] * b[1] - a[4] * b[8] + a[5] * b[0] - a[5] * b[7],
a[3] * b[5] + a[4] * b[6] - a[5] * b[11] + a[6] * b[0] - a[7] * b[1] - a[8] * b[2] - a[9] * b[10],
 - a[3] * b[4] + a[4] * b[11] + a[5] * b[6] + a[6] * b[1] + a[7] * b[0] - a[8] * b[3] + a[9] * b[9],
 - a[3] * b[11] - a[4] * b[4] - a[5] * b[5] + a[6] * b[2] + a[7] * b[3] + a[8] * b[0] - a[9] * b[8],
a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[6] * b[10] - a[7] * b[9] + a[8] * b[8] + a[9] * b[0],
a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1] + a[9] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Rvd*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Tst& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] + a[3] * b[5] + a[4] * b[6] - a[5] * b[14] + a[6] * b[10] - a[7] * b[11] - a[8] * b[12] - a[9] * b[3],
 - a[0] * b[7] + a[2] * b[9] - a[3] * b[4] + a[4] * b[14] + a[5] * b[6] + a[6] * b[11] + a[7] * b[10] - a[8] * b[13] + a[9] * b[2],
 - a[1] * b[7] - a[2] * b[8] - a[3] * b[14] - a[4] * b[4] - a[5] * b[5] + a[6] * b[12] + a[7] * b[13] + a[8] * b[10] - a[9] * b[1],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13] - a[6] * b[4] - a[7] * b[5] - a[8] * b[6] - a[9] * b[14],
 - a[3] * b[1] + a[3] * b[11] - a[4] * b[2] + a[4] * b[12] - a[5] * b[3] + a[5] * b[13] + a[6] * b[7] + a[7] * b[8] + a[8] * b[9],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] - a[6] * b[5] + a[7] * b[4] - a[8] * b[14] + a[9] * b[6],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[6] * b[6] + a[7] * b[14] + a[8] * b[4] - a[9] * b[5],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[6] * b[14] - a[7] * b[6] + a[8] * b[5] + a[9] * b[4],
a[3] * b[0] - a[3] * b[10] - a[4] * b[3] + a[4] * b[13] + a[5] * b[2] - a[5] * b[12] + a[6] * b[8] - a[7] * b[7] + a[9] * b[9],
a[3] * b[3] - a[3] * b[13] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] + a[5] * b[11] + a[6] * b[9] - a[8] * b[7] - a[9] * b[8],
 - a[3] * b[2] + a[3] * b[12] + a[4] * b[1] - a[4] * b[11] + a[5] * b[0] - a[5] * b[10] + a[7] * b[9] - a[8] * b[8] + a[9] * b[7],
 - a[0] * b[8] - a[1] * b[9] + a[3] * b[5] + a[4] * b[6] - a[5] * b[14] + a[6] * b[0] - a[7] * b[1] - a[8] * b[2] - a[9] * b[13],
a[0] * b[7] - a[2] * b[9] - a[3] * b[4] + a[4] * b[14] + a[5] * b[6] + a[6] * b[1] + a[7] * b[0] - a[8] * b[3] + a[9] * b[12],
a[1] * b[7] + a[2] * b[8] - a[3] * b[14] - a[4] * b[4] - a[5] * b[5] + a[6] * b[2] + a[7] * b[3] + a[8] * b[0] - a[9] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[6] * b[13] - a[7] * b[12] + a[8] * b[11] + a[9] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1] + a[9] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Tst*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Tvt& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] - a[2] * b[14] + a[3] * b[5] + a[4] * b[6] + a[6] * b[10] - a[7] * b[11] - a[8] * b[12] - a[9] * b[3],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9] - a[3] * b[4] + a[5] * b[6] + a[6] * b[11] + a[7] * b[10] - a[8] * b[13] + a[9] * b[2],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8] - a[4] * b[4] - a[5] * b[5] + a[6] * b[12] + a[7] * b[13] + a[8] * b[10] - a[9] * b[1],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13] - a[6] * b[4] - a[7] * b[5] - a[8] * b[6],
 - a[3] * b[1] + a[3] * b[11] - a[4] * b[2] + a[4] * b[12] - a[5] * b[3] + a[5] * b[13] + a[6] * b[7] + a[7] * b[8] + a[8] * b[9] - a[9] * b[14],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] - a[6] * b[5] + a[7] * b[4] + a[9] * b[6],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[6] * b[6] + a[8] * b[4] - a[9] * b[5],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[7] * b[6] + a[8] * b[5] + a[9] * b[4],
a[3] * b[0] - a[3] * b[10] - a[4] * b[3] + a[4] * b[13] + a[5] * b[2] - a[5] * b[12] + a[6] * b[8] - a[7] * b[7] + a[8] * b[14] + a[9] * b[9],
a[3] * b[3] - a[3] * b[13] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] + a[5] * b[11] + a[6] * b[9] - a[7] * b[14] - a[8] * b[7] - a[9] * b[8],
 - a[3] * b[2] + a[3] * b[12] + a[4] * b[1] - a[4] * b[11] + a[5] * b[0] - a[5] * b[10] + a[6] * b[14] + a[7] * b[9] - a[8] * b[8] + a[9] * b[7],
 - a[0] * b[8] - a[1] * b[9] + a[2] * b[14] + a[3] * b[5] + a[4] * b[6] + a[6] * b[0] - a[7] * b[1] - a[8] * b[2] - a[9] * b[13],
a[0] * b[7] - a[1] * b[14] - a[2] * b[9] - a[3] * b[4] + a[5] * b[6] + a[6] * b[1] + a[7] * b[0] - a[8] * b[3] + a[9] * b[12],
a[0] * b[14] + a[1] * b[7] + a[2] * b[8] - a[4] * b[4] - a[5] * b[5] + a[6] * b[2] + a[7] * b[3] + a[8] * b[0] - a[9] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[6] * b[13] - a[7] * b[12] + a[8] * b[11] + a[9] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1] + a[9] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Tvt*)(&b));
}			
		 
inline Rtc gp (const Cir& a, const Bst& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] + a[3] * b[5] + a[4] * b[6] + a[6] * b[10] - a[9] * b[3],
 - a[0] * b[7] + a[2] * b[9] - a[3] * b[4] + a[5] * b[6] + a[7] * b[10] + a[9] * b[2],
 - a[1] * b[7] - a[2] * b[8] - a[4] * b[4] - a[5] * b[5] + a[8] * b[10] - a[9] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[6] * b[4] - a[7] * b[5] - a[8] * b[6],
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3] + a[6] * b[7] + a[7] * b[8] + a[8] * b[9],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] + a[2] * b[2] - a[6] * b[5] + a[7] * b[4] + a[9] * b[6],
a[0] * b[3] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[6] * b[6] + a[8] * b[4] - a[9] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[2] * b[10] - a[7] * b[6] + a[8] * b[5] + a[9] * b[4],
a[3] * b[0] - a[3] * b[10] - a[4] * b[3] + a[5] * b[2] + a[6] * b[8] - a[7] * b[7] + a[9] * b[9],
a[3] * b[3] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] + a[6] * b[9] - a[8] * b[7] - a[9] * b[8],
 - a[3] * b[2] + a[4] * b[1] + a[5] * b[0] - a[5] * b[10] + a[7] * b[9] - a[8] * b[8] + a[9] * b[7],
 - a[0] * b[8] - a[1] * b[9] + a[3] * b[5] + a[4] * b[6] + a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
a[0] * b[7] - a[2] * b[9] - a[3] * b[4] + a[5] * b[6] + a[6] * b[1] + a[7] * b[0] - a[8] * b[3],
a[1] * b[7] + a[2] * b[8] - a[4] * b[4] - a[5] * b[5] + a[6] * b[2] + a[7] * b[3] + a[8] * b[0],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[9] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1] + a[9] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Cir, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Cir*)(&a),*(Bst*)(&b));
}			
		 
inline Cir op (const Cir& a, const Sca& b) { 
	return Cir (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[7] * b[0],
a[8] * b[0],
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Sca*)(&b));
}			
		 
inline Daf op (const Cir& a, const Ori& b) { 
	return Daf (
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Ori*)(&b));
}			
		 
inline Pln op (const Cir& a, const Inf& b) { 
	return Pln (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Inf*)(&b));
}			
		 
inline Pss op (const Cir& a, const Mnk& b) { 
	return Pss (
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Mnk*)(&b));
}			
		 
inline Sph op (const Cir& a, const Hyp& b) { 
	return Sph (
a[0] * b[1] - a[3] * b[0],
a[1] * b[1] - a[4] * b[0],
a[2] * b[1] - a[5] * b[0],
a[9] * b[0],
a[9] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Cir& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Pss*)(&b));
}			
		 
inline Sph op (const Cir& a, const Pnt& b) { 
	return Sph (
a[0] * b[4] - a[3] * b[3] + a[6] * b[1] - a[7] * b[0],
a[1] * b[4] - a[4] * b[3] + a[6] * b[2] - a[8] * b[0],
a[2] * b[4] - a[5] * b[3] + a[7] * b[2] - a[8] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[9] * b[3],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0] + a[9] * b[4]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Pnt*)(&b));
}			
		 
inline Pss op (const Cir& a, const Par& b) { 
	return Pss (
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0] + a[9] * b[9]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Par*)(&b));
}			
		 
inline Sca op (const Cir& a, const Cir& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Cir& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Sph*)(&b));
}			
		 
inline Pss op (const Cir& a, const Sta& b) { 
	return Pss (
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Sta*)(&b));
}			
		 
inline Pss op (const Cir& a, const Drv& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Drv*)(&b));
}			
		 
inline Sca op (const Cir& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Cir& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Drt*)(&b));
}			
		 
inline Pss op (const Cir& a, const Tnv& b) { 
	return Pss (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca op (const Cir& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Cir& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca op (const Cir& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Cir& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Pln*)(&b));
}			
		 
inline Pss op (const Cir& a, const Flp& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[9] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Flp*)(&b));
}			
		 
inline Sca op (const Cir& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Dfp*)(&b));
}			
		 
inline Pss op (const Cir& a, const Dll& b) { 
	return Pss (
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Dll*)(&b));
}			
		 
inline Sph op (const Cir& a, const Dlp& b) { 
	return Sph (
a[0] * b[3] + a[6] * b[1] - a[7] * b[0],
a[1] * b[3] + a[6] * b[2] - a[8] * b[0],
a[2] * b[3] + a[7] * b[2] - a[8] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0] + a[9] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Dlp*)(&b));
}			
		 
inline Sph op (const Cir& a, const Vec& b) { 
	return Sph (
a[6] * b[1] - a[7] * b[0],
a[6] * b[2] - a[8] * b[0],
a[7] * b[2] - a[8] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Vec*)(&b));
}			
		 
inline Pss op (const Cir& a, const Biv& b) { 
	return Pss (
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Biv*)(&b));
}			
		 
inline Sca op (const Cir& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Tri*)(&b));
}			
		 
inline Sph op (const Cir& a, const Aff& b) { 
	return Sph (
 - a[3] * b[3] + a[6] * b[1] - a[7] * b[0],
 - a[4] * b[3] + a[6] * b[2] - a[8] * b[0],
 - a[5] * b[3] + a[7] * b[2] - a[8] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[9] * b[3],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Aff*)(&b));
}			
		 
inline Pss op (const Cir& a, const Afl& b) { 
	return Pss (
a[3] * b[5] - a[4] * b[4] + a[5] * b[3] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Afl*)(&b));
}			
		 
inline Sca op (const Cir& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Afp*)(&b));
}			
		 
inline Pss op (const Cir& a, const Dap& b) { 
	return Pss (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0] + a[9] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Cir& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Daf*)(&b));
}			
		 
inline Sca op (const Cir& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Dal*)(&b));
}			
		 
inline Sca op (const Cir& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Cir, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Cir*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Hyp*)(&b));
}			
		 
inline Par ip (const Cir& a, const Pss& b) { 
	return Par (
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
 - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Par& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Par*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Cir& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[3] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[6] + a[7] * b[7] + a[8] * b[8] - a[9] * b[9]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt ip (const Cir& a, const Sph& b) { 
	return Pnt (
 - a[2] * b[4] - a[5] * b[3] - a[7] * b[0] - a[8] * b[1],
a[1] * b[4] + a[4] * b[3] + a[6] * b[0] - a[8] * b[2],
 - a[0] * b[4] - a[3] * b[3] + a[6] * b[1] + a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[9] * b[3],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2] - a[9] * b[4]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Sph*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Sta& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Drv*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Drb& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Drb*)(&b));
}			
		 
inline Dlp ip (const Cir& a, const Drt& b) { 
	return Dlp (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Tnb& b) { 
	return Sca (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Tnb*)(&b));
}			
		 
inline Aff ip (const Cir& a, const Tnt& b) { 
	return Aff (
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
 - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Lin& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Lin*)(&b));
}			
		 
inline Pnt ip (const Cir& a, const Pln& b) { 
	return Pnt (
 - a[2] * b[3] - a[7] * b[0] - a[8] * b[1],
a[1] * b[3] + a[6] * b[0] - a[8] * b[2],
 - a[0] * b[3] + a[6] * b[1] + a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2] - a[9] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Flp*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Dfp& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[9] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Biv*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Tri& b) { 
	return Sca (
 - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Afl*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Afp& b) { 
	return Sca (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2] - a[9] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Dap*)(&b));
}			
		 
inline Pnt ip (const Cir& a, const Daf& b) { 
	return Pnt (
 - a[5] * b[3] - a[7] * b[0] - a[8] * b[1],
a[4] * b[3] + a[6] * b[0] - a[8] * b[2],
 - a[3] * b[3] + a[6] * b[1] + a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[9] * b[3],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Daf*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Dal& b) { 
	return Sca (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Dal*)(&b));
}			
		 
inline Sca ip (const Cir& a, const Mnv& b) { 
	return Sca (
a[6] * b[0] + a[7] * b[1] + a[8] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Cir, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Cir*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Cir sp (const Cir& cir, const Rot& rot) {					
					
const Rot& t1 = rot;
const Cir& t2 = cir;
Rtc t3 (
 - t1[3] * t2[9],
t1[2] * t2[9],
 - t1[1] * t2[9],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] - t1[2] * t2[5] + t1[3] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] - t1[3] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[3],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7],
t1[0] * t2[9],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Cir (
t3[3] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[3] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1],
t3[3] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[7] * t5[0],
t3[4] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[4] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[4] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[15] * t5[3],
t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[15] * t5[2],
t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[15] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[14] * t5[0]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Mot& mot) {					
					
const Mot& t1 = mot;
const Cir& t2 = cir;
Rtc t3 (
 - t1[3] * t2[9] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
t1[2] * t2[9] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
 - t1[1] * t2[9] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8] + t1[7] * t2[9],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[7] - t1[5] * t2[6] - t1[6] * t2[9] + t1[7] * t2[8],
t1[0] * t2[4] + t1[1] * t2[5] - t1[3] * t2[3] + t1[4] * t2[8] + t1[5] * t2[9] - t1[6] * t2[6] - t1[7] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[3] - t1[4] * t2[9] + t1[5] * t2[8] - t1[6] * t2[7] + t1[7] * t2[6],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
t1[0] * t2[9] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Cir (
t3[3] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[3] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1],
t3[3] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[7] * t5[0],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[4] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2] + t3[11] * t5[5] - t3[12] * t5[4] + t3[13] * t5[7] + t3[14] * t5[6] + t3[15] * t5[6],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] + t3[4] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1] + t3[11] * t5[6] - t3[12] * t5[7] - t3[13] * t5[4] - t3[14] * t5[5] - t3[15] * t5[5],
t3[0] * t5[7] + t3[1] * t5[6] - t3[2] * t5[5] + t3[4] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0] + t3[11] * t5[7] + t3[12] * t5[6] - t3[13] * t5[5] + t3[14] * t5[4] + t3[15] * t5[4],
 - t3[3] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[7] * t5[7] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[15] * t5[3],
 - t3[3] * t5[5] + t3[5] * t5[4] - t3[6] * t5[7] - t3[7] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[15] * t5[2],
 - t3[3] * t5[6] + t3[5] * t5[7] + t3[6] * t5[4] + t3[7] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[15] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[7] + t3[5] * t5[6] - t3[6] * t5[5] + t3[7] * t5[4] + t3[14] * t5[0]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Dil& dil) {					
					
const Dil& t1 = dil;
const Cir& t2 = cir;
Flp_Afp t3 (
t1[1] * t2[6],
t1[1] * t2[7],
t1[1] * t2[8],
t1[0] * t2[0] - t1[1] * t2[0],
t1[0] * t2[1] - t1[1] * t2[1],
t1[0] * t2[2] - t1[1] * t2[2],
t1[0] * t2[3] + t1[1] * t2[3],
t1[0] * t2[4] + t1[1] * t2[4],
t1[0] * t2[5] + t1[1] * t2[5],
t1[0] * t2[6],
t1[0] * t2[7],
t1[0] * t2[8],
t1[0] * t2[9],
t1[1] * t2[9]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Cir (
t3[3] * t5[0] + t3[3] * t5[1],
t3[4] * t5[0] + t3[4] * t5[1],
t3[5] * t5[0] + t3[5] * t5[1],
t3[6] * t5[0] - t3[6] * t5[1],
t3[7] * t5[0] - t3[7] * t5[1],
t3[8] * t5[0] - t3[8] * t5[1],
t3[0] * t5[1] + t3[9] * t5[0],
t3[1] * t5[1] + t3[10] * t5[0],
t3[2] * t5[1] + t3[11] * t5[0],
t3[12] * t5[0] + t3[13] * t5[1]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Trv& trv) {					
					
const Trv& t1 = trv;
const Cir& t2 = cir;
Par_Afp t3 (
t1[2] * t2[3] + t1[3] * t2[4],
 - t1[1] * t2[3] + t1[3] * t2[5],
 - t1[1] * t2[4] - t1[2] * t2[5],
 - t1[1] * t2[6] - t1[2] * t2[7] - t1[3] * t2[8],
t1[0] * t2[0] - t1[1] * t2[7] + t1[2] * t2[6] - t1[3] * t2[9],
t1[0] * t2[1] - t1[1] * t2[8] + t1[2] * t2[9] + t1[3] * t2[6],
t1[0] * t2[2] - t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7],
t1[0] * t2[3],
t1[0] * t2[4],
t1[0] * t2[5],
t1[0] * t2[6] - t1[2] * t2[3] - t1[3] * t2[4],
t1[0] * t2[7] + t1[1] * t2[3] - t1[3] * t2[5],
t1[0] * t2[8] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[9] - t1[1] * t2[5] + t1[2] * t2[4] - t1[3] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Cir (
t3[0] * t5[2] - t3[1] * t5[1] + t3[4] * t5[0] - t3[10] * t5[2] + t3[11] * t5[1] + t3[13] * t5[3] - t3[14] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] + t3[5] * t5[0] - t3[10] * t5[3] + t3[12] * t5[1] - t3[13] * t5[2] + t3[14] * t5[2],
t3[1] * t5[3] - t3[2] * t5[2] + t3[6] * t5[0] - t3[11] * t5[3] + t3[12] * t5[2] + t3[13] * t5[1] - t3[14] * t5[1],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0],
t3[7] * t5[2] + t3[8] * t5[3] + t3[10] * t5[0],
 - t3[7] * t5[1] + t3[9] * t5[3] + t3[11] * t5[0],
 - t3[8] * t5[1] - t3[9] * t5[2] + t3[12] * t5[0],
t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[13] * t5[0]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Cir& t2 = cir;
Rtc t3 (
 - t1[3] * t2[9] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[8] + t1[11] * t2[2],
t1[2] * t2[9] - t1[4] * t2[0] + t1[6] * t2[2] + t1[7] * t2[7] - t1[8] * t2[6] + t1[10] * t2[8] - t1[11] * t2[1],
 - t1[1] * t2[9] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[8] - t1[9] * t2[6] - t1[10] * t2[7] + t1[11] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8] - t1[8] * t2[3] - t1[9] * t2[4] - t1[10] * t2[5] + t1[11] * t2[9],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[7] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
t1[0] * t2[3] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[7] - t1[5] * t2[6] - t1[6] * t2[9] + t1[7] * t2[3] - t1[9] * t2[5] + t1[10] * t2[4] + t1[11] * t2[8],
t1[0] * t2[4] + t1[1] * t2[5] - t1[3] * t2[3] + t1[4] * t2[8] + t1[5] * t2[9] - t1[6] * t2[6] + t1[7] * t2[4] + t1[8] * t2[5] - t1[10] * t2[3] - t1[11] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[3] - t1[4] * t2[9] + t1[5] * t2[8] - t1[6] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[3] + t1[11] * t2[6],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] + t1[5] * t2[0] + t1[6] * t2[1] - t1[10] * t2[9] + t1[11] * t2[2],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] - t1[4] * t2[0] + t1[6] * t2[2] + t1[9] * t2[9] - t1[11] * t2[1],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] - t1[4] * t2[1] - t1[5] * t2[2] - t1[8] * t2[9] + t1[11] * t2[0],
t1[0] * t2[9] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[8] * t2[8] - t1[9] * t2[7] + t1[10] * t2[6],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[7] * t2[9]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Cir (
t3[3] * t5[1] + t3[3] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[7] * t5[2] + t3[7] * t5[9],
t3[3] * t5[2] + t3[3] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[1] - t3[7] * t5[8],
t3[3] * t5[3] + t3[3] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] + t3[7] * t5[0] + t3[7] * t5[7],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[4] * t5[1] - t3[4] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[10] * t5[2] - t3[10] * t5[9] + t3[11] * t5[5] - t3[12] * t5[4] + t3[13] * t5[11] + t3[14] * t5[6] + t3[15] * t5[6],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] + t3[4] * t5[2] - t3[4] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] - t3[10] * t5[1] + t3[10] * t5[8] + t3[11] * t5[6] - t3[12] * t5[11] - t3[13] * t5[4] - t3[14] * t5[5] - t3[15] * t5[5],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[4] * t5[3] - t3[4] * t5[10] - t3[8] * t5[2] + t3[8] * t5[9] + t3[9] * t5[1] - t3[9] * t5[8] + t3[10] * t5[0] - t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[6] - t3[13] * t5[5] + t3[14] * t5[4] + t3[15] * t5[4],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[7] * t5[11] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[10] - t3[15] * t5[3],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] - t3[3] * t5[5] + t3[5] * t5[4] - t3[6] * t5[11] - t3[7] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[9] + t3[15] * t5[2],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[6] + t3[5] * t5[11] + t3[6] * t5[4] + t3[7] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[8] - t3[15] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[11] + t3[5] * t5[6] - t3[6] * t5[5] + t3[7] * t5[4] + t3[11] * t5[10] - t3[12] * t5[9] + t3[13] * t5[8] + t3[14] * t5[0] + t3[15] * t5[7]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Trs& trs) {					
					
const Trs& t1 = trs;
const Cir& t2 = cir;
Par_Dfp t3 (
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[1] * t2[6] + t1[2] * t2[7] + t1[3] * t2[8],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] + t1[1] * t2[7] - t1[2] * t2[6] - t1[3] * t2[9],
t1[0] * t2[4] + t1[1] * t2[8] + t1[2] * t2[9] - t1[3] * t2[6],
t1[0] * t2[5] - t1[1] * t2[9] + t1[2] * t2[8] - t1[3] * t2[7],
t1[0] * t2[6] + t1[2] * t2[0] + t1[3] * t2[1],
t1[0] * t2[7] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[8] - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[9] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Cir (
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0],
t3[0] * t5[2] - t3[1] * t5[1] + t3[7] * t5[0] + t3[10] * t5[2] - t3[11] * t5[1] + t3[13] * t5[3] + t3[14] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] + t3[8] * t5[0] + t3[10] * t5[3] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[2],
t3[1] * t5[3] - t3[2] * t5[2] + t3[9] * t5[0] + t3[11] * t5[3] - t3[12] * t5[2] + t3[13] * t5[1] + t3[14] * t5[1],
 - t3[4] * t5[2] - t3[5] * t5[3] + t3[10] * t5[0],
t3[4] * t5[1] - t3[6] * t5[3] + t3[11] * t5[0],
t3[5] * t5[1] + t3[6] * t5[2] + t3[12] * t5[0],
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[13] * t5[0]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Cir& t2 = cir;
Mtt t3 (
t1[5] * t2[3] + t1[6] * t2[4] + t1[7] * t2[5] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2] + t1[11] * t2[6] + t1[12] * t2[7] + t1[13] * t2[8] - t1[14] * t2[9],
t1[2] * t2[9] - t1[3] * t2[3] - t1[4] * t2[0] + t1[6] * t2[5] - t1[7] * t2[4] + t1[9] * t2[2] - t1[10] * t2[1] + t1[11] * t2[7] - t1[12] * t2[6] + t1[15] * t2[8],
 - t1[1] * t2[9] - t1[3] * t2[4] - t1[4] * t2[1] - t1[5] * t2[5] + t1[7] * t2[3] - t1[8] * t2[2] + t1[10] * t2[0] + t1[11] * t2[8] - t1[13] * t2[6] - t1[15] * t2[7],
t1[0] * t2[9] - t1[3] * t2[5] - t1[4] * t2[2] + t1[5] * t2[4] - t1[6] * t2[3] + t1[8] * t2[1] - t1[9] * t2[0] + t1[12] * t2[8] - t1[13] * t2[7] + t1[15] * t2[6],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[7] * t2[9] + t1[12] * t2[0] + t1[13] * t2[1] - t1[14] * t2[2] + t1[15] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] - t1[3] * t2[7] + t1[5] * t2[6] - t1[6] * t2[9] - t1[7] * t2[8] - t1[11] * t2[0] + t1[13] * t2[2] + t1[14] * t2[1] - t1[15] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[8] + t1[5] * t2[9] + t1[6] * t2[6] + t1[7] * t2[7] - t1[11] * t2[1] - t1[12] * t2[2] - t1[14] * t2[0] + t1[15] * t2[0],
 - t1[1] * t2[3] - t1[2] * t2[4] + t1[4] * t2[6] + t1[8] * t2[7] + t1[9] * t2[8] + t1[10] * t2[9] - t1[12] * t2[3] - t1[13] * t2[4] - t1[14] * t2[5] - t1[15] * t2[5],
t1[0] * t2[3] - t1[2] * t2[5] + t1[4] * t2[7] - t1[8] * t2[6] - t1[9] * t2[9] + t1[10] * t2[8] + t1[11] * t2[3] - t1[13] * t2[5] + t1[14] * t2[4] + t1[15] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[4] * t2[8] + t1[8] * t2[9] - t1[9] * t2[6] - t1[10] * t2[7] + t1[11] * t2[4] + t1[12] * t2[5] - t1[14] * t2[3] - t1[15] * t2[3],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[5] * t2[3] - t1[6] * t2[4] - t1[7] * t2[5] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2] - t1[15] * t2[9],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[3] - t1[4] * t2[0] - t1[6] * t2[5] + t1[7] * t2[4] + t1[9] * t2[2] - t1[10] * t2[1] + t1[13] * t2[9] + t1[14] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] + t1[3] * t2[4] - t1[4] * t2[1] + t1[5] * t2[5] - t1[7] * t2[3] - t1[8] * t2[2] + t1[10] * t2[0] - t1[12] * t2[9] - t1[14] * t2[7],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[5] - t1[4] * t2[2] - t1[5] * t2[4] + t1[6] * t2[3] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[9] + t1[14] * t2[6],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] - t1[7] * t2[6] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[3] - t1[4] * t2[9] + t1[8] * t2[8] - t1[9] * t2[7] + t1[10] * t2[6] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[3]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Cir (
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] + t3[3] * t5[6] - t3[4] * t5[1] - t3[4] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[10] * t5[5] - t3[11] * t5[3] + t3[12] * t5[7] - t3[13] * t5[6] - t3[14] * t5[2] - t3[14] * t5[13],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[5] - t3[4] * t5[2] - t3[4] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] - t3[10] * t5[6] - t3[11] * t5[7] - t3[12] * t5[3] + t3[13] * t5[5] + t3[14] * t5[1] + t3[14] * t5[12],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] + t3[3] * t5[3] - t3[4] * t5[14] - t3[4] * t5[15] - t3[5] * t5[2] - t3[5] * t5[13] + t3[6] * t5[1] + t3[6] * t5[12] - t3[10] * t5[7] + t3[11] * t5[6] - t3[12] * t5[5] - t3[13] * t5[3] - t3[14] * t5[0] - t3[14] * t5[11],
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] + t3[3] * t5[9] - t3[7] * t5[1] + t3[7] * t5[12] + t3[8] * t5[0] - t3[8] * t5[11] - t3[9] * t5[14] + t3[9] * t5[15] + t3[10] * t5[8] + t3[11] * t5[4] - t3[12] * t5[10] + t3[13] * t5[9] - t3[15] * t5[2] + t3[15] * t5[13],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[3] * t5[8] - t3[7] * t5[2] + t3[7] * t5[13] + t3[8] * t5[14] - t3[8] * t5[15] + t3[9] * t5[0] - t3[9] * t5[11] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[4] - t3[13] * t5[8] + t3[15] * t5[1] - t3[15] * t5[12],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[4] - t3[7] * t5[14] + t3[7] * t5[15] - t3[8] * t5[2] + t3[8] * t5[13] + t3[9] * t5[1] - t3[9] * t5[12] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[4] - t3[15] * t5[0] + t3[15] * t5[11],
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] - t3[3] * t5[15] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[3] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] + t3[11] * t5[1] + t3[12] * t5[2] - t3[13] * t5[14] - t3[14] * t5[10] + t3[15] * t5[7],
t3[0] * t5[12] - t3[1] * t5[11] + t3[2] * t5[15] + t3[3] * t5[13] + t3[4] * t5[8] + t3[5] * t5[4] - t3[6] * t5[10] - t3[7] * t5[5] - t3[8] * t5[3] + t3[9] * t5[7] + t3[10] * t5[1] - t3[11] * t5[0] + t3[12] * t5[14] + t3[13] * t5[2] + t3[14] * t5[9] - t3[15] * t5[6],
t3[0] * t5[13] - t3[1] * t5[15] - t3[2] * t5[11] - t3[3] * t5[12] + t3[4] * t5[9] + t3[5] * t5[10] + t3[6] * t5[4] - t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[2] - t3[11] * t5[14] - t3[12] * t5[0] - t3[13] * t5[1] - t3[14] * t5[8] + t3[15] * t5[5],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] + t3[3] * t5[0] - t3[4] * t5[10] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[15] + t3[11] * t5[13] - t3[12] * t5[12] + t3[13] * t5[11] - t3[14] * t5[4] - t3[15] * t5[3]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Cir& t2 = cir;
Rtc t3 (
 - t1[3] * t2[9] + t1[5] * t2[3] + t1[6] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[8] + t1[14] * t2[5] + t1[15] * t2[2],
t1[2] * t2[9] - t1[4] * t2[3] + t1[6] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2] + t1[10] * t2[7] - t1[11] * t2[6] + t1[13] * t2[8] - t1[14] * t2[4] - t1[15] * t2[1],
 - t1[1] * t2[9] - t1[4] * t2[4] - t1[5] * t2[5] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[8] - t1[12] * t2[6] - t1[13] * t2[7] + t1[14] * t2[3] + t1[15] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2] + t1[14] * t2[9],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[8] - t1[11] * t2[3] - t1[12] * t2[4] - t1[13] * t2[5] + t1[15] * t2[9],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[9] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1] - t1[14] * t2[8],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[8] + t1[5] * t2[9] + t1[6] * t2[6] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0] + t1[14] * t2[7],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0] - t1[14] * t2[6],
t1[0] * t2[3] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[7] - t1[8] * t2[6] - t1[9] * t2[9] + t1[10] * t2[3] - t1[12] * t2[5] + t1[13] * t2[4] + t1[15] * t2[8],
t1[0] * t2[4] + t1[1] * t2[5] - t1[3] * t2[3] + t1[7] * t2[8] + t1[8] * t2[9] - t1[9] * t2[6] + t1[10] * t2[4] + t1[11] * t2[5] - t1[13] * t2[3] - t1[15] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[3] - t1[7] * t2[9] + t1[8] * t2[8] - t1[9] * t2[7] + t1[10] * t2[5] - t1[11] * t2[4] + t1[12] * t2[3] + t1[15] * t2[6],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[5] * t2[3] - t1[6] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[9] - t1[14] * t2[5] + t1[15] * t2[2],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[4] * t2[3] - t1[6] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[9] + t1[14] * t2[4] - t1[15] * t2[1],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[4] + t1[5] * t2[5] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[9] - t1[14] * t2[3] + t1[15] * t2[0],
t1[0] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[8] - t1[12] * t2[7] + t1[13] * t2[6],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[9]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Cir (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[1] + t3[3] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] + t3[7] * t5[2] + t3[7] * t5[12] - t3[11] * t5[5] + t3[12] * t5[4] - t3[13] * t5[14] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[7] * t5[11] - t3[11] * t5[6] + t3[12] * t5[14] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[0] + t3[7] * t5[10] - t3[11] * t5[14] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[4] * t5[1] - t3[4] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[2] - t3[10] * t5[12] + t3[11] * t5[8] - t3[12] * t5[7] + t3[13] * t5[15] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] + t3[4] * t5[2] - t3[4] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] - t3[10] * t5[1] + t3[10] * t5[11] + t3[11] * t5[9] - t3[12] * t5[15] - t3[13] * t5[7] - t3[14] * t5[8] - t3[15] * t5[8],
t3[0] * t5[15] + t3[1] * t5[9] - t3[2] * t5[8] + t3[4] * t5[3] - t3[4] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[0] - t3[10] * t5[10] + t3[11] * t5[15] + t3[12] * t5[9] - t3[13] * t5[8] + t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[15] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[6] * t5[15] - t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[5] * t5[15] + t3[6] * t5[7] + t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[15] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[13] - t3[12] * t5[12] + t3[13] * t5[11] + t3[14] * t5[0] + t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Cir& t2 = cir;
Rtc t3 (
 - t1[3] * t2[9] + t1[5] * t2[3] + t1[6] * t2[4] + t1[7] * t2[5],
t1[2] * t2[9] - t1[4] * t2[3] + t1[6] * t2[5] - t1[7] * t2[4],
 - t1[1] * t2[9] - t1[4] * t2[4] - t1[5] * t2[5] + t1[7] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[7] * t2[9],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[9] - t1[7] * t2[8],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[8] + t1[5] * t2[9] + t1[6] * t2[6] + t1[7] * t2[7],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] - t1[7] * t2[6],
t1[0] * t2[3] - t1[2] * t2[5] + t1[3] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] - t1[3] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[3],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[5] * t2[3] - t1[6] * t2[4] - t1[7] * t2[5],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[4] * t2[3] - t1[6] * t2[5] + t1[7] * t2[4],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[4] + t1[5] * t2[5] - t1[7] * t2[3],
t1[0] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[3]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Cir (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2] - t3[11] * t5[5] + t3[12] * t5[4] - t3[13] * t5[7] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] + t3[3] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1] - t3[11] * t5[6] + t3[12] * t5[7] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[7] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[7] * t5[0] - t3[11] * t5[7] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[4] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[4] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[4] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
t3[4] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[7] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[15] * t5[3],
t3[4] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[15] * t5[2],
t3[4] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[15] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[14] * t5[0]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Cir& t2 = cir;
Rtc t3 (
 - t1[3] * t2[9] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8],
t1[2] * t2[9] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[8],
 - t1[1] * t2[9] + t1[4] * t2[8] - t1[6] * t2[6] - t1[7] * t2[7],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5] - t1[5] * t2[3] - t1[6] * t2[4] - t1[7] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
t1[0] * t2[3] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[6] * t2[5] + t1[7] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] - t1[7] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[3] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[3],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[7] * t2[9],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[6] * t2[9],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] - t1[5] * t2[9],
t1[0] * t2[9] + t1[5] * t2[8] - t1[6] * t2[7] + t1[7] * t2[6],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[9]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Cir (
t3[3] * t5[1] + t3[3] * t5[5] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[3] - t3[6] * t5[7] + t3[7] * t5[2] + t3[7] * t5[6],
t3[3] * t5[2] + t3[3] * t5[6] + t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[0] + t3[6] * t5[4] - t3[7] * t5[1] - t3[7] * t5[5],
t3[3] * t5[3] + t3[3] * t5[7] - t3[5] * t5[2] - t3[5] * t5[6] + t3[6] * t5[1] + t3[6] * t5[5] + t3[7] * t5[0] + t3[7] * t5[4],
t3[4] * t5[1] - t3[4] * t5[5] + t3[8] * t5[0] - t3[8] * t5[4] - t3[9] * t5[3] + t3[9] * t5[7] + t3[10] * t5[2] - t3[10] * t5[6],
t3[4] * t5[2] - t3[4] * t5[6] + t3[8] * t5[3] - t3[8] * t5[7] + t3[9] * t5[0] - t3[9] * t5[4] - t3[10] * t5[1] + t3[10] * t5[5],
t3[4] * t5[3] - t3[4] * t5[7] - t3[8] * t5[2] + t3[8] * t5[6] + t3[9] * t5[1] - t3[9] * t5[5] + t3[10] * t5[0] - t3[10] * t5[4],
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[7] - t3[15] * t5[3],
t3[0] * t5[5] + t3[1] * t5[4] - t3[2] * t5[7] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[6] + t3[15] * t5[2],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[4] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[5] - t3[15] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[11] * t5[7] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[0] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Cir& t2 = cir;
Par_Afp t3 (
t1[2] * t2[3] + t1[3] * t2[4] + t1[4] * t2[6],
 - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[7],
 - t1[1] * t2[4] - t1[2] * t2[5] + t1[4] * t2[8],
 - t1[1] * t2[6] - t1[2] * t2[7] - t1[3] * t2[8],
t1[0] * t2[0] - t1[1] * t2[7] + t1[2] * t2[6] - t1[3] * t2[9] - t1[4] * t2[0],
t1[0] * t2[1] - t1[1] * t2[8] + t1[2] * t2[9] + t1[3] * t2[6] - t1[4] * t2[1],
t1[0] * t2[2] - t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] - t1[4] * t2[2],
t1[0] * t2[3] + t1[4] * t2[3],
t1[0] * t2[4] + t1[4] * t2[4],
t1[0] * t2[5] + t1[4] * t2[5],
t1[0] * t2[6] - t1[2] * t2[3] - t1[3] * t2[4],
t1[0] * t2[7] + t1[1] * t2[3] - t1[3] * t2[5],
t1[0] * t2[8] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[9] - t1[1] * t2[5] + t1[2] * t2[4] - t1[3] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[9]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Cir (
t3[0] * t5[2] - t3[1] * t5[1] + t3[4] * t5[0] + t3[4] * t5[4] - t3[10] * t5[2] + t3[11] * t5[1] + t3[13] * t5[3] - t3[14] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] + t3[5] * t5[0] + t3[5] * t5[4] - t3[10] * t5[3] + t3[12] * t5[1] - t3[13] * t5[2] + t3[14] * t5[2],
t3[1] * t5[3] - t3[2] * t5[2] + t3[6] * t5[0] + t3[6] * t5[4] - t3[11] * t5[3] + t3[12] * t5[2] + t3[13] * t5[1] - t3[14] * t5[1],
t3[7] * t5[0] - t3[7] * t5[4],
t3[8] * t5[0] - t3[8] * t5[4],
t3[9] * t5[0] - t3[9] * t5[4],
t3[0] * t5[4] + t3[7] * t5[2] + t3[8] * t5[3] + t3[10] * t5[0],
t3[1] * t5[4] - t3[7] * t5[1] + t3[9] * t5[3] + t3[11] * t5[0],
t3[2] * t5[4] - t3[8] * t5[1] - t3[9] * t5[2] + t3[12] * t5[0],
t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[13] * t5[0] + t3[14] * t5[4]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Cir& t2 = cir;
Par_Dfp t3 (
t1[2] * t2[0] + t1[3] * t2[1] + t1[4] * t2[6],
 - t1[1] * t2[0] + t1[3] * t2[2] + t1[4] * t2[7],
 - t1[1] * t2[1] - t1[2] * t2[2] + t1[4] * t2[8],
t1[1] * t2[6] + t1[2] * t2[7] + t1[3] * t2[8],
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2],
t1[0] * t2[3] + t1[1] * t2[7] - t1[2] * t2[6] - t1[3] * t2[9] + t1[4] * t2[3],
t1[0] * t2[4] + t1[1] * t2[8] + t1[2] * t2[9] - t1[3] * t2[6] + t1[4] * t2[4],
t1[0] * t2[5] - t1[1] * t2[9] + t1[2] * t2[8] - t1[3] * t2[7] + t1[4] * t2[5],
t1[0] * t2[6] + t1[2] * t2[0] + t1[3] * t2[1],
t1[0] * t2[7] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[8] - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[9] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0] + t1[4] * t2[9]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Cir (
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4],
t3[0] * t5[2] - t3[1] * t5[1] + t3[7] * t5[0] - t3[7] * t5[4] + t3[10] * t5[2] - t3[11] * t5[1] + t3[13] * t5[3] + t3[14] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] + t3[8] * t5[0] - t3[8] * t5[4] + t3[10] * t5[3] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[2],
t3[1] * t5[3] - t3[2] * t5[2] + t3[9] * t5[0] - t3[9] * t5[4] + t3[11] * t5[3] - t3[12] * t5[2] + t3[13] * t5[1] + t3[14] * t5[1],
t3[0] * t5[4] - t3[4] * t5[2] - t3[5] * t5[3] + t3[10] * t5[0],
t3[1] * t5[4] + t3[4] * t5[1] - t3[6] * t5[3] + t3[11] * t5[0],
t3[2] * t5[4] + t3[5] * t5[1] + t3[6] * t5[2] + t3[12] * t5[0],
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[13] * t5[0] + t3[14] * t5[4]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Trt& trt) {					
					
const Trt& t1 = trt;
const Cir& t2 = cir;
Rtc t3 (
 - t1[3] * t2[9] + t1[5] * t2[3] + t1[6] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[8],
t1[2] * t2[9] - t1[4] * t2[3] + t1[6] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2] + t1[10] * t2[7] - t1[11] * t2[6] + t1[13] * t2[8],
 - t1[1] * t2[9] - t1[4] * t2[4] - t1[5] * t2[5] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[8] - t1[12] * t2[6] - t1[13] * t2[7],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[8] - t1[11] * t2[3] - t1[12] * t2[4] - t1[13] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[9] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[8] + t1[5] * t2[9] + t1[6] * t2[6] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
t1[0] * t2[3] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[7] - t1[8] * t2[6] - t1[9] * t2[9] + t1[10] * t2[3] - t1[12] * t2[5] + t1[13] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] - t1[3] * t2[3] + t1[7] * t2[8] + t1[8] * t2[9] - t1[9] * t2[6] + t1[10] * t2[4] + t1[11] * t2[5] - t1[13] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[3] - t1[7] * t2[9] + t1[8] * t2[8] - t1[9] * t2[7] + t1[10] * t2[5] - t1[11] * t2[4] + t1[12] * t2[3],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[5] * t2[3] - t1[6] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[9],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[4] * t2[3] - t1[6] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[9],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[4] + t1[5] * t2[5] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[9],
t1[0] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[8] - t1[12] * t2[7] + t1[13] * t2[6],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[9]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Cir (
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[1] + t3[3] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] + t3[7] * t5[2] + t3[7] * t5[12] - t3[11] * t5[5] + t3[12] * t5[4] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[7] * t5[11] - t3[11] * t5[6] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[0] + t3[7] * t5[10] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[8] - t3[1] * t5[7] + t3[4] * t5[1] - t3[4] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[2] - t3[10] * t5[12] + t3[11] * t5[8] - t3[12] * t5[7] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] - t3[2] * t5[7] + t3[4] * t5[2] - t3[4] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] - t3[10] * t5[1] + t3[10] * t5[11] + t3[11] * t5[9] - t3[13] * t5[7] - t3[14] * t5[8] - t3[15] * t5[8],
t3[1] * t5[9] - t3[2] * t5[8] + t3[4] * t5[3] - t3[4] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[0] - t3[10] * t5[10] + t3[12] * t5[9] - t3[13] * t5[8] + t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[6] * t5[7] + t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[13] - t3[12] * t5[12] + t3[13] * t5[11] + t3[14] * t5[0] + t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Cir& t2 = cir;
Rtc t3 (
 - t1[3] * t2[9] + t1[5] * t2[3] + t1[6] * t2[4] + t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[8] + t1[11] * t2[5],
t1[2] * t2[9] - t1[4] * t2[3] + t1[6] * t2[5] + t1[7] * t2[7] - t1[8] * t2[6] + t1[10] * t2[8] - t1[11] * t2[4],
 - t1[1] * t2[9] - t1[4] * t2[4] - t1[5] * t2[5] + t1[7] * t2[8] - t1[9] * t2[6] - t1[10] * t2[7] + t1[11] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2] + t1[11] * t2[9],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5] - t1[8] * t2[3] - t1[9] * t2[4] - t1[10] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[9] - t1[7] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1] - t1[11] * t2[8],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[8] + t1[5] * t2[9] + t1[6] * t2[6] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0] + t1[11] * t2[7],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] - t1[11] * t2[6],
t1[0] * t2[3] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[3] - t1[9] * t2[5] + t1[10] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] - t1[3] * t2[3] + t1[7] * t2[4] + t1[8] * t2[5] - t1[10] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[3] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[3],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[5] * t2[3] - t1[6] * t2[4] - t1[10] * t2[9] - t1[11] * t2[5],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[4] * t2[3] - t1[6] * t2[5] + t1[9] * t2[9] + t1[11] * t2[4],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[4] + t1[5] * t2[5] - t1[8] * t2[9] - t1[11] * t2[3],
t1[0] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[3] + t1[8] * t2[8] - t1[9] * t2[7] + t1[10] * t2[6],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[3] + t1[7] * t2[9]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Cir (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[1] + t3[3] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[7] * t5[2] + t3[7] * t5[9] - t3[11] * t5[5] + t3[12] * t5[4] - t3[13] * t5[11] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[1] - t3[7] * t5[8] - t3[11] * t5[6] + t3[12] * t5[11] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] + t3[7] * t5[0] + t3[7] * t5[7] - t3[11] * t5[11] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[4] * t5[1] - t3[4] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[10] * t5[2] - t3[10] * t5[9],
t3[4] * t5[2] - t3[4] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] - t3[10] * t5[1] + t3[10] * t5[8],
t3[4] * t5[3] - t3[4] * t5[10] - t3[8] * t5[2] + t3[8] * t5[9] + t3[9] * t5[1] - t3[9] * t5[8] + t3[10] * t5[0] - t3[10] * t5[7],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] + t3[4] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[11] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[10] - t3[15] * t5[3],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[4] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[9] + t3[15] * t5[2],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] + t3[4] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[8] - t3[15] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[10] - t3[12] * t5[9] + t3[13] * t5[8] + t3[14] * t5[0] + t3[15] * t5[7]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Tst& tst) {					
					
const Tst& t1 = tst;
const Cir& t2 = cir;
Rtc t3 (
 - t1[3] * t2[9] + t1[5] * t2[3] + t1[6] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[8] + t1[14] * t2[5],
t1[2] * t2[9] - t1[4] * t2[3] + t1[6] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2] + t1[10] * t2[7] - t1[11] * t2[6] + t1[13] * t2[8] - t1[14] * t2[4],
 - t1[1] * t2[9] - t1[4] * t2[4] - t1[5] * t2[5] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[8] - t1[12] * t2[6] - t1[13] * t2[7] + t1[14] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2] + t1[14] * t2[9],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[8] - t1[11] * t2[3] - t1[12] * t2[4] - t1[13] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[9] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1] - t1[14] * t2[8],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[8] + t1[5] * t2[9] + t1[6] * t2[6] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0] + t1[14] * t2[7],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0] - t1[14] * t2[6],
t1[0] * t2[3] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[7] - t1[8] * t2[6] - t1[9] * t2[9] + t1[10] * t2[3] - t1[12] * t2[5] + t1[13] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] - t1[3] * t2[3] + t1[7] * t2[8] + t1[8] * t2[9] - t1[9] * t2[6] + t1[10] * t2[4] + t1[11] * t2[5] - t1[13] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[3] - t1[7] * t2[9] + t1[8] * t2[8] - t1[9] * t2[7] + t1[10] * t2[5] - t1[11] * t2[4] + t1[12] * t2[3],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[5] * t2[3] - t1[6] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[9] - t1[14] * t2[5],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[4] * t2[3] - t1[6] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[9] + t1[14] * t2[4],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[4] + t1[5] * t2[5] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[9] - t1[14] * t2[3],
t1[0] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[8] - t1[12] * t2[7] + t1[13] * t2[6],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[9]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Cir (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[1] + t3[3] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] + t3[7] * t5[2] + t3[7] * t5[12] - t3[11] * t5[5] + t3[12] * t5[4] - t3[13] * t5[14] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[7] * t5[11] - t3[11] * t5[6] + t3[12] * t5[14] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[0] + t3[7] * t5[10] - t3[11] * t5[14] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[8] - t3[1] * t5[7] + t3[4] * t5[1] - t3[4] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[2] - t3[10] * t5[12] + t3[11] * t5[8] - t3[12] * t5[7] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] - t3[2] * t5[7] + t3[4] * t5[2] - t3[4] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] - t3[10] * t5[1] + t3[10] * t5[11] + t3[11] * t5[9] - t3[13] * t5[7] - t3[14] * t5[8] - t3[15] * t5[8],
t3[1] * t5[9] - t3[2] * t5[8] + t3[4] * t5[3] - t3[4] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[0] - t3[10] * t5[10] + t3[12] * t5[9] - t3[13] * t5[8] + t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[6] * t5[7] + t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[13] - t3[12] * t5[12] + t3[13] * t5[11] + t3[14] * t5[0] + t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Cir& t2 = cir;
Rtc t3 (
 - t1[3] * t2[9] + t1[5] * t2[3] + t1[6] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[8] + t1[14] * t2[2],
t1[2] * t2[9] - t1[4] * t2[3] + t1[6] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2] + t1[10] * t2[7] - t1[11] * t2[6] + t1[13] * t2[8] - t1[14] * t2[1],
 - t1[1] * t2[9] - t1[4] * t2[4] - t1[5] * t2[5] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[8] - t1[12] * t2[6] - t1[13] * t2[7] + t1[14] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[8] - t1[11] * t2[3] - t1[12] * t2[4] - t1[13] * t2[5] + t1[14] * t2[9],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[9] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[8] + t1[5] * t2[9] + t1[6] * t2[6] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
t1[0] * t2[3] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[7] - t1[8] * t2[6] - t1[9] * t2[9] + t1[10] * t2[3] - t1[12] * t2[5] + t1[13] * t2[4] + t1[14] * t2[8],
t1[0] * t2[4] + t1[1] * t2[5] - t1[3] * t2[3] + t1[7] * t2[8] + t1[8] * t2[9] - t1[9] * t2[6] + t1[10] * t2[4] + t1[11] * t2[5] - t1[13] * t2[3] - t1[14] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[3] - t1[7] * t2[9] + t1[8] * t2[8] - t1[9] * t2[7] + t1[10] * t2[5] - t1[11] * t2[4] + t1[12] * t2[3] + t1[14] * t2[6],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[5] * t2[3] - t1[6] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[9] + t1[14] * t2[2],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[4] * t2[3] - t1[6] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[9] - t1[14] * t2[1],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[4] + t1[5] * t2[5] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[9] + t1[14] * t2[0],
t1[0] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[8] - t1[12] * t2[7] + t1[13] * t2[6],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[9]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Cir (
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[1] + t3[3] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] + t3[7] * t5[2] + t3[7] * t5[12] - t3[11] * t5[5] + t3[12] * t5[4] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[7] * t5[11] - t3[11] * t5[6] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[0] + t3[7] * t5[10] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[4] * t5[1] - t3[4] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[2] - t3[10] * t5[12] + t3[11] * t5[8] - t3[12] * t5[7] + t3[13] * t5[14] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] + t3[4] * t5[2] - t3[4] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] - t3[10] * t5[1] + t3[10] * t5[11] + t3[11] * t5[9] - t3[12] * t5[14] - t3[13] * t5[7] - t3[14] * t5[8] - t3[15] * t5[8],
t3[0] * t5[14] + t3[1] * t5[9] - t3[2] * t5[8] + t3[4] * t5[3] - t3[4] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[0] - t3[10] * t5[10] + t3[11] * t5[14] + t3[12] * t5[9] - t3[13] * t5[8] + t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[14] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[6] * t5[14] - t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[5] * t5[14] + t3[6] * t5[7] + t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[13] - t3[12] * t5[12] + t3[13] * t5[11] + t3[14] * t5[0] + t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Cir sp (const Cir& cir, const Bst& bst) {					
					
const Bst& t1 = bst;
const Cir& t2 = cir;
Rtc t3 (
 - t1[3] * t2[9] + t1[5] * t2[3] + t1[6] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[6],
t1[2] * t2[9] - t1[4] * t2[3] + t1[6] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2] + t1[10] * t2[7],
 - t1[1] * t2[9] - t1[4] * t2[4] - t1[5] * t2[5] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[8],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[8],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[9] - t1[10] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[8] + t1[5] * t2[9] + t1[6] * t2[6] - t1[10] * t2[1],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] - t1[10] * t2[2],
t1[0] * t2[3] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[7] - t1[8] * t2[6] - t1[9] * t2[9] + t1[10] * t2[3],
t1[0] * t2[4] + t1[1] * t2[5] - t1[3] * t2[3] + t1[7] * t2[8] + t1[8] * t2[9] - t1[9] * t2[6] + t1[10] * t2[4],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[3] - t1[7] * t2[9] + t1[8] * t2[8] - t1[9] * t2[7] + t1[10] * t2[5],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[5] * t2[3] - t1[6] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[4] * t2[3] - t1[6] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[4] + t1[5] * t2[5] - t1[7] * t2[1] - t1[8] * t2[2],
t1[0] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[9]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Cir (
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[1] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] + t3[7] * t5[2] - t3[11] * t5[5] + t3[12] * t5[4] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[2] * t5[4] + t3[3] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[11] * t5[6] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[7] * t5[0] + t3[7] * t5[10] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[8] - t3[1] * t5[7] + t3[4] * t5[1] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[10] * t5[2] + t3[11] * t5[8] - t3[12] * t5[7] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] - t3[2] * t5[7] + t3[4] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[9] * t5[10] - t3[10] * t5[1] + t3[11] * t5[9] - t3[13] * t5[7] - t3[14] * t5[8] - t3[15] * t5[8],
t3[1] * t5[9] - t3[2] * t5[8] + t3[4] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0] - t3[10] * t5[10] + t3[12] * t5[9] - t3[13] * t5[8] + t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[10] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[15] * t5[3],
t3[1] * t5[10] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[15] * t5[2],
t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[6] * t5[7] + t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[15] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[14] * t5[0] + t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Cir re (const Cir& cir, const Vec& vec) {					
					
const Vec& t1 = vec;
const Cir& t2 = cir;
Cir t3 = involute( t2);
Pnt_Cir t4 (
t1[2] * t3[9],
 - t1[1] * t3[9],
t1[0] * t3[9],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[1] * t3[3] - t1[2] * t3[4],
t1[0] * t3[3] - t1[2] * t3[5],
t1[0] * t3[4] + t1[1] * t3[5],
t1[0] * t3[6] + t1[1] * t3[7] + t1[2] * t3[8],
t1[0] * t3[7] - t1[1] * t3[6],
t1[0] * t3[8] - t1[2] * t3[6],
t1[1] * t3[8] - t1[2] * t3[7],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Cir (
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[13] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[13] * t6[1],
 - t4[4] * t6[2] + t4[5] * t6[1] - t4[13] * t6[0],
 - t4[6] * t6[1] + t4[7] * t6[0] - t4[14] * t6[2],
 - t4[6] * t6[2] + t4[8] * t6[0] + t4[14] * t6[1],
 - t4[7] * t6[2] + t4[8] * t6[1] - t4[14] * t6[0],
t4[9] * t6[0] + t4[10] * t6[1] + t4[11] * t6[2],
t4[9] * t6[1] - t4[10] * t6[0] + t4[12] * t6[2],
t4[9] * t6[2] - t4[11] * t6[0] - t4[12] * t6[1],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Cir re (const Cir& cir, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Cir& t2 = cir;
Cir t3 = involute( t2);
Pnt_Cir t4 (
t1[2] * t3[9] - t1[3] * t3[0],
 - t1[1] * t3[9] - t1[3] * t3[1],
t1[0] * t3[9] - t1[3] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[1] * t3[3] - t1[2] * t3[4] + t1[3] * t3[6],
t1[0] * t3[3] - t1[2] * t3[5] + t1[3] * t3[7],
t1[0] * t3[4] + t1[1] * t3[5] + t1[3] * t3[8],
t1[0] * t3[6] + t1[1] * t3[7] + t1[2] * t3[8],
t1[0] * t3[7] - t1[1] * t3[6] - t1[3] * t3[0],
t1[0] * t3[8] - t1[2] * t3[6] - t1[3] * t3[1],
t1[1] * t3[8] - t1[2] * t3[7] - t1[3] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3] - t1[3] * t3[9]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Cir (
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[13] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[13] * t6[1],
 - t4[4] * t6[2] + t4[5] * t6[1] - t4[13] * t6[0],
t4[0] * t6[3] - t4[6] * t6[1] + t4[7] * t6[0] + t4[10] * t6[3] - t4[14] * t6[2],
t4[1] * t6[3] - t4[6] * t6[2] + t4[8] * t6[0] + t4[11] * t6[3] + t4[14] * t6[1],
t4[2] * t6[3] - t4[7] * t6[2] + t4[8] * t6[1] + t4[12] * t6[3] - t4[14] * t6[0],
t4[3] * t6[3] + t4[9] * t6[0] + t4[10] * t6[1] + t4[11] * t6[2],
t4[4] * t6[3] + t4[9] * t6[1] - t4[10] * t6[0] + t4[12] * t6[2],
t4[5] * t6[3] + t4[9] * t6[2] - t4[11] * t6[0] - t4[12] * t6[1],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[13] * t6[3]
);

}
		
	
	  	
template<>
inline Cir re (const Cir& cir, const Pln& pln) {					
					
const Pln& t1 = pln;
const Cir& t2 = cir;
Cir t3 = involute( t2);
Pnt_Par t4 (
t1[0] * t3[7] + t1[1] * t3[8] + t1[3] * t3[2],
 - t1[0] * t3[6] + t1[2] * t3[8] - t1[3] * t3[1],
 - t1[1] * t3[6] - t1[2] * t3[7] + t1[3] * t3[0],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
 - t1[0] * t3[3] - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[9],
t1[1] * t3[2] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[2] * t3[0],
t1[0] * t3[1] - t1[1] * t3[0],
 - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[8],
t1[0] * t3[5] - t1[2] * t3[3] - t1[3] * t3[7],
 - t1[0] * t3[4] + t1[1] * t3[3] + t1[3] * t3[6],
 - t1[2] * t3[9] + t1[3] * t3[2],
t1[1] * t3[9] - t1[3] * t3[1],
 - t1[0] * t3[9] + t1[3] * t3[0],
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Cir (
t4[3] * t6[0] - t4[6] * t6[2] + t4[7] * t6[1],
t4[3] * t6[1] + t4[5] * t6[2] - t4[7] * t6[0],
t4[3] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0],
t4[2] * t6[3] - t4[4] * t6[0] + t4[9] * t6[2] - t4[10] * t6[1] + t4[13] * t6[3],
 - t4[1] * t6[3] - t4[4] * t6[1] - t4[8] * t6[2] + t4[10] * t6[0] - t4[12] * t6[3],
t4[0] * t6[3] - t4[4] * t6[2] + t4[8] * t6[1] - t4[9] * t6[0] + t4[11] * t6[3],
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[7] * t6[3] - t4[14] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[6] * t6[3] + t4[14] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[5] * t6[3] - t4[14] * t6[0],
t4[3] * t6[3] + t4[11] * t6[2] - t4[12] * t6[1] + t4[13] * t6[0]
);

}
		
	
	  	
template<>
inline Cir re (const Cir& cir, const Dll& dll) {					
					
const Dll& t1 = dll;
const Cir& t2 = cir;
Cir t3 = involute( t2);
Rtc t4 (
 - t1[2] * t3[9] + t1[4] * t3[0] + t1[5] * t3[1],
t1[1] * t3[9] - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[0] * t3[9] - t1[3] * t3[1] - t1[4] * t3[2],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[0] * t3[3] - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[6] + t1[4] * t3[7] + t1[5] * t3[8],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
 - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[7] - t1[4] * t3[6] - t1[5] * t3[9],
t1[0] * t3[5] - t1[2] * t3[3] + t1[3] * t3[8] + t1[4] * t3[9] - t1[5] * t3[6],
 - t1[0] * t3[4] + t1[1] * t3[3] - t1[3] * t3[9] + t1[4] * t3[8] - t1[5] * t3[7],
t1[0] * t3[7] + t1[1] * t3[8] + t1[4] * t3[0] + t1[5] * t3[1],
 - t1[0] * t3[6] + t1[2] * t3[8] - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[1] * t3[6] - t1[2] * t3[7] - t1[3] * t3[1] - t1[4] * t3[2],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0],
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6] - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Cir (
t4[3] * t6[0] - t4[6] * t6[2] + t4[7] * t6[1],
t4[3] * t6[1] + t4[5] * t6[2] - t4[7] * t6[0],
t4[3] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0],
t4[0] * t6[4] - t4[1] * t6[3] + t4[4] * t6[0] - t4[9] * t6[2] + t4[10] * t6[1] + t4[11] * t6[4] - t4[12] * t6[3] + t4[14] * t6[5] + t4[15] * t6[5],
t4[0] * t6[5] - t4[2] * t6[3] + t4[4] * t6[1] + t4[8] * t6[2] - t4[10] * t6[0] + t4[11] * t6[5] - t4[13] * t6[3] - t4[14] * t6[4] - t4[15] * t6[4],
t4[1] * t6[5] - t4[2] * t6[4] + t4[4] * t6[2] - t4[8] * t6[1] + t4[9] * t6[0] + t4[12] * t6[5] - t4[13] * t6[4] + t4[14] * t6[3] + t4[15] * t6[3],
 - t4[3] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5] - t4[12] * t6[0] - t4[13] * t6[1] - t4[15] * t6[2],
 - t4[3] * t6[4] + t4[5] * t6[3] - t4[7] * t6[5] + t4[11] * t6[0] - t4[13] * t6[2] + t4[15] * t6[1],
 - t4[3] * t6[5] + t4[6] * t6[3] + t4[7] * t6[4] + t4[11] * t6[1] + t4[12] * t6[2] - t4[15] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[5] - t4[6] * t6[4] + t4[7] * t6[3]
);

}
		
	
	  	
template<>
inline Cir re (const Cir& cir, const Lin& lin) {					
					
const Lin& t1 = lin;
const Cir& t2 = cir;
Cir t3 = involute( t2);
Mtt t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2] + t1[3] * t3[6] + t1[4] * t3[7] + t1[5] * t3[8],
t1[1] * t3[2] - t1[2] * t3[1] + t1[3] * t3[7] - t1[4] * t3[6],
 - t1[0] * t3[2] + t1[2] * t3[0] + t1[3] * t3[8] - t1[5] * t3[6],
t1[0] * t3[1] - t1[1] * t3[0] + t1[4] * t3[8] - t1[5] * t3[7],
t1[4] * t3[0] + t1[5] * t3[1],
 - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[3] * t3[1] - t1[4] * t3[2],
t1[0] * t3[7] + t1[1] * t3[8] + t1[2] * t3[9] - t1[4] * t3[3] - t1[5] * t3[4],
 - t1[0] * t3[6] - t1[1] * t3[9] + t1[2] * t3[8] + t1[3] * t3[3] - t1[5] * t3[5],
t1[0] * t3[9] - t1[1] * t3[6] - t1[2] * t3[7] + t1[3] * t3[4] + t1[4] * t3[5],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[1] * t3[2] - t1[2] * t3[1] + t1[5] * t3[9],
 - t1[0] * t3[2] + t1[2] * t3[0] - t1[4] * t3[9],
t1[0] * t3[1] - t1[1] * t3[0] + t1[3] * t3[9],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0],
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6] + t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[3]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Cir (
 - t4[4] * t6[4] + t4[5] * t6[3] - t4[14] * t6[5],
 - t4[4] * t6[5] + t4[6] * t6[3] + t4[14] * t6[4],
 - t4[5] * t6[5] + t4[6] * t6[4] - t4[14] * t6[3],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[7] * t6[4] - t4[8] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1] + t4[15] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[7] * t6[5] - t4[9] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0] - t4[15] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[8] * t6[5] - t4[9] * t6[4] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0] + t4[15] * t6[3],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0],
 - t4[4] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] + t4[11] * t6[5] - t4[12] * t6[4] + t4[13] * t6[3]
);

}
		
	
	  	
template<>
inline Cir re (const Cir& cir, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Cir& t2 = cir;
Cir t3 = involute( t2);
Pnt_Cir t4 (
t1[2] * t3[9] - t1[3] * t3[3] - t1[4] * t3[0],
 - t1[1] * t3[9] - t1[3] * t3[4] - t1[4] * t3[1],
t1[0] * t3[9] - t1[3] * t3[5] - t1[4] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1] - t1[3] * t3[6],
t1[0] * t3[0] - t1[2] * t3[2] - t1[3] * t3[7],
t1[0] * t3[1] + t1[1] * t3[2] - t1[3] * t3[8],
 - t1[1] * t3[3] - t1[2] * t3[4] + t1[4] * t3[6],
t1[0] * t3[3] - t1[2] * t3[5] + t1[4] * t3[7],
t1[0] * t3[4] + t1[1] * t3[5] + t1[4] * t3[8],
t1[0] * t3[6] + t1[1] * t3[7] + t1[2] * t3[8],
t1[0] * t3[7] - t1[1] * t3[6] + t1[3] * t3[3] - t1[4] * t3[0],
t1[0] * t3[8] - t1[2] * t3[6] + t1[3] * t3[4] - t1[4] * t3[1],
t1[1] * t3[8] - t1[2] * t3[7] + t1[3] * t3[5] - t1[4] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] - t1[3] * t3[9],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3] - t1[4] * t3[9]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Cir (
t4[0] * t6[3] - t4[3] * t6[1] + t4[4] * t6[0] - t4[10] * t6[3] - t4[13] * t6[2],
t4[1] * t6[3] - t4[3] * t6[2] + t4[5] * t6[0] - t4[11] * t6[3] + t4[13] * t6[1],
t4[2] * t6[3] - t4[4] * t6[2] + t4[5] * t6[1] - t4[12] * t6[3] - t4[13] * t6[0],
t4[0] * t6[4] - t4[6] * t6[1] + t4[7] * t6[0] + t4[10] * t6[4] - t4[14] * t6[2],
t4[1] * t6[4] - t4[6] * t6[2] + t4[8] * t6[0] + t4[11] * t6[4] + t4[14] * t6[1],
t4[2] * t6[4] - t4[7] * t6[2] + t4[8] * t6[1] + t4[12] * t6[4] - t4[14] * t6[0],
t4[3] * t6[4] - t4[6] * t6[3] + t4[9] * t6[0] + t4[10] * t6[1] + t4[11] * t6[2],
t4[4] * t6[4] - t4[7] * t6[3] + t4[9] * t6[1] - t4[10] * t6[0] + t4[12] * t6[2],
t4[5] * t6[4] - t4[8] * t6[3] + t4[9] * t6[2] - t4[11] * t6[0] - t4[12] * t6[1],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[13] * t6[4] - t4[14] * t6[3]
);

}
		
	
	  	
template<>
inline Cir re (const Cir& cir, const Par& par) {					
					
const Par& t1 = par;
const Cir& t2 = cir;
Cir t3 = involute( t2);
Rtc t4 (
 - t1[2] * t3[9] + t1[4] * t3[3] + t1[5] * t3[4] + t1[7] * t3[0] + t1[8] * t3[1] + t1[9] * t3[6],
t1[1] * t3[9] - t1[3] * t3[3] + t1[5] * t3[5] - t1[6] * t3[0] + t1[8] * t3[2] + t1[9] * t3[7],
 - t1[0] * t3[9] - t1[3] * t3[4] - t1[4] * t3[5] - t1[6] * t3[1] - t1[7] * t3[2] + t1[9] * t3[8],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] - t1[3] * t3[6] - t1[4] * t3[7] - t1[5] * t3[8],
 - t1[0] * t3[3] - t1[1] * t3[4] - t1[2] * t3[5] + t1[6] * t3[6] + t1[7] * t3[7] + t1[8] * t3[8],
 - t1[1] * t3[2] + t1[2] * t3[1] - t1[3] * t3[7] + t1[4] * t3[6] - t1[5] * t3[9] - t1[9] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0] - t1[3] * t3[8] + t1[4] * t3[9] + t1[5] * t3[6] - t1[9] * t3[1],
 - t1[0] * t3[1] + t1[1] * t3[0] - t1[3] * t3[9] - t1[4] * t3[8] + t1[5] * t3[7] - t1[9] * t3[2],
 - t1[1] * t3[5] + t1[2] * t3[4] + t1[6] * t3[7] - t1[7] * t3[6] - t1[8] * t3[9] + t1[9] * t3[3],
t1[0] * t3[5] - t1[2] * t3[3] + t1[6] * t3[8] + t1[7] * t3[9] - t1[8] * t3[6] + t1[9] * t3[4],
 - t1[0] * t3[4] + t1[1] * t3[3] - t1[6] * t3[9] + t1[7] * t3[8] - t1[8] * t3[7] + t1[9] * t3[5],
t1[0] * t3[7] + t1[1] * t3[8] - t1[4] * t3[3] - t1[5] * t3[4] + t1[7] * t3[0] + t1[8] * t3[1],
 - t1[0] * t3[6] + t1[2] * t3[8] + t1[3] * t3[3] - t1[5] * t3[5] - t1[6] * t3[0] + t1[8] * t3[2],
 - t1[1] * t3[6] - t1[2] * t3[7] + t1[3] * t3[4] + t1[4] * t3[5] - t1[6] * t3[1] - t1[7] * t3[2],
 - t1[3] * t3[5] + t1[4] * t3[4] - t1[5] * t3[3] - t1[6] * t3[2] + t1[7] * t3[1] - t1[8] * t3[0],
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6] + t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[3] - t1[6] * t3[2] + t1[7] * t3[1] - t1[8] * t3[0] + t1[9] * t3[9]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Cir (
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[0] + t4[5] * t6[9] - t4[6] * t6[2] + t4[7] * t6[1] - t4[11] * t6[4] + t4[12] * t6[3] + t4[14] * t6[5] - t4[15] * t6[5],
t4[0] * t6[5] - t4[2] * t6[3] + t4[3] * t6[1] + t4[5] * t6[2] + t4[6] * t6[9] - t4[7] * t6[0] - t4[11] * t6[5] + t4[13] * t6[3] - t4[14] * t6[4] + t4[15] * t6[4],
t4[1] * t6[5] - t4[2] * t6[4] + t4[3] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0] + t4[7] * t6[9] - t4[12] * t6[5] + t4[13] * t6[4] + t4[14] * t6[3] - t4[15] * t6[3],
t4[0] * t6[7] - t4[1] * t6[6] + t4[4] * t6[0] - t4[8] * t6[9] - t4[9] * t6[2] + t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[14] * t6[8] + t4[15] * t6[8],
t4[0] * t6[8] - t4[2] * t6[6] + t4[4] * t6[1] + t4[8] * t6[2] - t4[9] * t6[9] - t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[14] * t6[7] - t4[15] * t6[7],
t4[1] * t6[8] - t4[2] * t6[7] + t4[4] * t6[2] - t4[8] * t6[1] + t4[9] * t6[0] - t4[10] * t6[9] + t4[12] * t6[8] - t4[13] * t6[7] + t4[14] * t6[6] + t4[15] * t6[6],
t4[0] * t6[9] - t4[3] * t6[6] + t4[4] * t6[3] - t4[5] * t6[7] - t4[6] * t6[8] + t4[8] * t6[4] + t4[9] * t6[5] - t4[12] * t6[0] - t4[13] * t6[1] - t4[15] * t6[2],
t4[1] * t6[9] - t4[3] * t6[7] + t4[4] * t6[4] + t4[5] * t6[6] - t4[7] * t6[8] - t4[8] * t6[3] + t4[10] * t6[5] + t4[11] * t6[0] - t4[13] * t6[2] + t4[15] * t6[1],
t4[2] * t6[9] - t4[3] * t6[8] + t4[4] * t6[5] + t4[6] * t6[6] + t4[7] * t6[7] - t4[9] * t6[3] - t4[10] * t6[4] + t4[11] * t6[1] + t4[12] * t6[2] - t4[15] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[8] - t4[6] * t6[7] + t4[7] * t6[6] + t4[8] * t6[5] - t4[9] * t6[4] + t4[10] * t6[3] + t4[15] * t6[9]
);

}
		
	
	  	
template<>
inline Cir re (const Cir& cir, const Sph& sph) {					
					
const Sph& t1 = sph;
const Cir& t2 = cir;
Cir t3 = involute( t2);
Pnt_Par t4 (
t1[0] * t3[7] + t1[1] * t3[8] + t1[3] * t3[5] + t1[4] * t3[2],
 - t1[0] * t3[6] + t1[2] * t3[8] - t1[3] * t3[4] - t1[4] * t3[1],
 - t1[1] * t3[6] - t1[2] * t3[7] + t1[3] * t3[3] + t1[4] * t3[0],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2] + t1[3] * t3[9],
 - t1[0] * t3[3] - t1[1] * t3[4] - t1[2] * t3[5] + t1[4] * t3[9],
t1[1] * t3[2] - t1[2] * t3[1] - t1[3] * t3[8],
 - t1[0] * t3[2] + t1[2] * t3[0] + t1[3] * t3[7],
t1[0] * t3[1] - t1[1] * t3[0] - t1[3] * t3[6],
 - t1[1] * t3[5] + t1[2] * t3[4] + t1[4] * t3[8],
t1[0] * t3[5] - t1[2] * t3[3] - t1[4] * t3[7],
 - t1[0] * t3[4] + t1[1] * t3[3] + t1[4] * t3[6],
 - t1[2] * t3[9] - t1[3] * t3[5] + t1[4] * t3[2],
t1[1] * t3[9] + t1[3] * t3[4] - t1[4] * t3[1],
 - t1[0] * t3[9] - t1[3] * t3[3] + t1[4] * t3[0],
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Cir (
t4[2] * t6[3] + t4[3] * t6[0] - t4[6] * t6[2] + t4[7] * t6[1] - t4[13] * t6[3],
 - t4[1] * t6[3] + t4[3] * t6[1] + t4[5] * t6[2] - t4[7] * t6[0] + t4[12] * t6[3],
t4[0] * t6[3] + t4[3] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0] - t4[11] * t6[3],
t4[2] * t6[4] - t4[4] * t6[0] + t4[9] * t6[2] - t4[10] * t6[1] + t4[13] * t6[4],
 - t4[1] * t6[4] - t4[4] * t6[1] - t4[8] * t6[2] + t4[10] * t6[0] - t4[12] * t6[4],
t4[0] * t6[4] - t4[4] * t6[2] + t4[8] * t6[1] - t4[9] * t6[0] + t4[11] * t6[4],
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[7] * t6[4] - t4[10] * t6[3] - t4[14] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[6] * t6[4] + t4[9] * t6[3] + t4[14] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[5] * t6[4] - t4[8] * t6[3] - t4[14] * t6[0],
t4[3] * t6[4] + t4[4] * t6[3] + t4[11] * t6[2] - t4[12] * t6[1] + t4[13] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	