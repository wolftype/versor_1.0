		#ifndef PAR_H_INCLUDED
		#define PAR_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Par gp (const Par& a, const Sca& b) { 
	return Par (
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
		 
		
template<> inline MVBase gp_gen<Par, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Sca*)(&b));
}			
		 
inline Ori_Par gp (const Par& a, const Ori& b) { 
	return Ori_Par (
 - a[6] * b[0],
 - a[7] * b[0],
 - a[8] * b[0],
 - a[9] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[6] * b[0],
 - a[7] * b[0],
 - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Ori*)(&b));
}			
		 
inline Inf_Par gp (const Par& a, const Inf& b) { 
	return Inf_Par (
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
a[9] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Inf*)(&b));
}			
		 
inline Mnk_Par gp (const Par& a, const Mnk& b) { 
	return Mnk_Par (
a[9] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
 - a[6] * b[0],
 - a[7] * b[0],
 - a[8] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Par gp (const Par& a, const Hyp& b) { 
	return Hyp_Par (
 - a[3] * b[1] - a[6] * b[0],
 - a[4] * b[1] - a[7] * b[0],
 - a[5] * b[1] - a[8] * b[0],
 - a[9] * b[0],
a[9] * b[1],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1] - a[6] * b[0],
a[4] * b[1] - a[7] * b[0],
a[5] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Hyp*)(&b));
}			
		 
inline Cir gp (const Par& a, const Pss& b) { 
	return Cir (
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Pss*)(&b));
}			
		 
inline Pnt_Par gp (const Par& a, const Pnt& b) { 
	return Pnt_Par (
a[0] * b[1] + a[1] * b[2] - a[3] * b[4] - a[6] * b[3],
 - a[0] * b[0] + a[2] * b[2] - a[4] * b[4] - a[7] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[5] * b[4] - a[8] * b[3],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2] - a[9] * b[3],
 - a[6] * b[0] - a[7] * b[1] - a[8] * b[2] + a[9] * b[4],
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[4] - a[6] * b[1] + a[7] * b[0],
a[1] * b[4] - a[6] * b[2] + a[8] * b[0],
a[2] * b[4] - a[7] * b[2] + a[8] * b[1],
a[3] * b[4] - a[6] * b[3] + a[9] * b[0],
a[4] * b[4] - a[7] * b[3] + a[9] * b[1],
a[5] * b[4] - a[8] * b[3] + a[9] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Pnt*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Par& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5] + a[9] * b[9],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[7] - a[4] * b[6] + a[6] * b[4] - a[7] * b[3],
a[0] * b[2] - a[2] * b[0] + a[3] * b[8] - a[5] * b[6] + a[6] * b[5] - a[8] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[8] - a[5] * b[7] + a[7] * b[5] - a[8] * b[4],
a[0] * b[4] + a[1] * b[5] + a[3] * b[9] - a[4] * b[0] - a[5] * b[1] - a[9] * b[3],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] + a[4] * b[9] - a[5] * b[2] - a[9] * b[4],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2] + a[5] * b[9] - a[9] * b[5],
a[0] * b[7] + a[1] * b[8] - a[6] * b[9] - a[7] * b[0] - a[8] * b[1] + a[9] * b[6],
 - a[0] * b[6] + a[2] * b[8] + a[6] * b[0] - a[7] * b[9] - a[8] * b[2] + a[9] * b[7],
 - a[1] * b[6] - a[2] * b[7] + a[6] * b[1] + a[7] * b[2] - a[8] * b[9] + a[9] * b[8],
 - a[3] * b[6] - a[4] * b[7] - a[5] * b[8] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
a[0] * b[9] - a[3] * b[7] + a[4] * b[6] + a[6] * b[4] - a[7] * b[3] + a[9] * b[0],
a[1] * b[9] - a[3] * b[8] + a[5] * b[6] + a[6] * b[5] - a[8] * b[3] + a[9] * b[1],
a[2] * b[9] - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[9] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Par*)(&b));
}			
		 
inline Rtc gp (const Par& a, const Cir& b) { 
	return Rtc (
 - a[2] * b[9] + a[4] * b[3] + a[5] * b[4] + a[7] * b[0] + a[8] * b[1] + a[9] * b[6],
a[1] * b[9] - a[3] * b[3] + a[5] * b[5] - a[6] * b[0] + a[8] * b[2] + a[9] * b[7],
 - a[0] * b[9] - a[3] * b[4] - a[4] * b[5] - a[6] * b[1] - a[7] * b[2] + a[9] * b[8],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[6] - a[4] * b[7] - a[5] * b[8],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5] + a[6] * b[6] + a[7] * b[7] + a[8] * b[8],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[7] + a[4] * b[6] - a[5] * b[9] - a[9] * b[0],
a[0] * b[2] - a[2] * b[0] - a[3] * b[8] + a[4] * b[9] + a[5] * b[6] - a[9] * b[1],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[9] - a[4] * b[8] + a[5] * b[7] - a[9] * b[2],
 - a[1] * b[5] + a[2] * b[4] + a[6] * b[7] - a[7] * b[6] - a[8] * b[9] + a[9] * b[3],
a[0] * b[5] - a[2] * b[3] + a[6] * b[8] + a[7] * b[9] - a[8] * b[6] + a[9] * b[4],
 - a[0] * b[4] + a[1] * b[3] - a[6] * b[9] + a[7] * b[8] - a[8] * b[7] + a[9] * b[5],
a[0] * b[7] + a[1] * b[8] - a[4] * b[3] - a[5] * b[4] + a[7] * b[0] + a[8] * b[1],
 - a[0] * b[6] + a[2] * b[8] + a[3] * b[3] - a[5] * b[5] - a[6] * b[0] + a[8] * b[2],
 - a[1] * b[6] - a[2] * b[7] + a[3] * b[4] + a[4] * b[5] - a[6] * b[1] - a[7] * b[2],
 - a[3] * b[5] + a[4] * b[4] - a[5] * b[3] - a[6] * b[2] + a[7] * b[1] - a[8] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3] - a[6] * b[2] + a[7] * b[1] - a[8] * b[0] + a[9] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt_Cir gp (const Par& a, const Sph& b) { 
	return Pnt_Cir (
a[5] * b[4] + a[8] * b[3] + a[9] * b[0],
 - a[4] * b[4] - a[7] * b[3] + a[9] * b[1],
a[3] * b[4] + a[6] * b[3] + a[9] * b[2],
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
 - a[2] * b[4] + a[7] * b[0] + a[8] * b[1],
a[1] * b[4] - a[6] * b[0] + a[8] * b[2],
 - a[0] * b[4] - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[5] * b[4] + a[8] * b[3],
a[0] * b[2] - a[2] * b[0] + a[4] * b[4] - a[7] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[4] + a[6] * b[3],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0] - a[9] * b[3],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0] + a[9] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Sph*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Sta& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[7] - a[4] * b[6] + a[6] * b[4] - a[7] * b[3],
a[0] * b[2] - a[2] * b[0] + a[3] * b[8] - a[5] * b[6] + a[6] * b[5] - a[8] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[8] - a[5] * b[7] + a[7] * b[5] - a[8] * b[4],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1] - a[9] * b[3],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2] - a[9] * b[4],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2] - a[9] * b[5],
a[0] * b[7] + a[1] * b[8] - a[7] * b[0] - a[8] * b[1] + a[9] * b[6],
 - a[0] * b[6] + a[2] * b[8] + a[6] * b[0] - a[8] * b[2] + a[9] * b[7],
 - a[1] * b[6] - a[2] * b[7] + a[6] * b[1] + a[7] * b[2] + a[9] * b[8],
 - a[3] * b[6] - a[4] * b[7] - a[5] * b[8] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
 - a[3] * b[7] + a[4] * b[6] + a[6] * b[4] - a[7] * b[3] + a[9] * b[0],
 - a[3] * b[8] + a[5] * b[6] + a[6] * b[5] - a[8] * b[3] + a[9] * b[1],
 - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[9] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Sta*)(&b));
}			
		 
inline Mtd gp (const Par& a, const Drv& b) { 
	return Mtd (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
a[0] * b[1] + a[1] * b[2] + a[9] * b[0],
 - a[0] * b[0] + a[2] * b[2] + a[9] * b[1],
 - a[1] * b[0] - a[2] * b[1] + a[9] * b[2],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Drv*)(&b));
}			
		 
inline Par_Drb gp (const Par& a, const Drb& b) { 
	return Par_Drb (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[9] * b[0],
a[0] * b[2] - a[2] * b[0] + a[9] * b[1],
 - a[0] * b[1] + a[1] * b[0] + a[9] * b[2],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Drb*)(&b));
}			
		 
inline Inf_Cir gp (const Par& a, const Drt& b) { 
	return Inf_Cir (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Drt*)(&b));
}			
		 
inline Rvd gp (const Par& a, const Tnv& b) { 
	return Rvd (
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
a[6] * b[1] - a[7] * b[0],
a[6] * b[2] - a[8] * b[0],
a[7] * b[2] - a[8] * b[1],
a[0] * b[1] + a[1] * b[2] - a[9] * b[0],
 - a[0] * b[0] + a[2] * b[2] - a[9] * b[1],
 - a[1] * b[0] - a[2] * b[1] - a[9] * b[2],
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
a[6] * b[1] - a[7] * b[0],
a[6] * b[2] - a[8] * b[0],
a[7] * b[2] - a[8] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Tnv*)(&b));
}			
		 
inline Par_Tnb gp (const Par& a, const Tnb& b) { 
	return Par_Tnb (
a[7] * b[0] + a[8] * b[1],
 - a[6] * b[0] + a[8] * b[2],
 - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[9] * b[0],
a[0] * b[2] - a[2] * b[0] - a[9] * b[1],
 - a[0] * b[1] + a[1] * b[0] - a[9] * b[2],
a[7] * b[0] + a[8] * b[1],
 - a[6] * b[0] + a[8] * b[2],
 - a[6] * b[1] - a[7] * b[2],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori_Cir gp (const Par& a, const Tnt& b) { 
	return Ori_Cir (
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0],
 - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Tnt*)(&b));
}			
		 
inline Rtc gp (const Par& a, const Lin& b) { 
	return Rtc (
a[4] * b[0] + a[5] * b[1] + a[9] * b[3],
 - a[3] * b[0] + a[5] * b[2] + a[9] * b[4],
 - a[3] * b[1] - a[4] * b[2] + a[9] * b[5],
 - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
 - a[3] * b[4] + a[4] * b[3],
 - a[3] * b[5] + a[5] * b[3],
 - a[4] * b[5] + a[5] * b[4],
 - a[1] * b[2] + a[2] * b[1] + a[6] * b[4] - a[7] * b[3] + a[9] * b[0],
a[0] * b[2] - a[2] * b[0] + a[6] * b[5] - a[8] * b[3] + a[9] * b[1],
 - a[0] * b[1] + a[1] * b[0] + a[7] * b[5] - a[8] * b[4] + a[9] * b[2],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Lin*)(&b));
}			
		 
inline Pnt_Cir gp (const Par& a, const Pln& b) { 
	return Pnt_Cir (
a[5] * b[3] + a[9] * b[0],
 - a[4] * b[3] + a[9] * b[1],
a[3] * b[3] + a[9] * b[2],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[2] * b[3] + a[7] * b[0] + a[8] * b[1],
a[1] * b[3] - a[6] * b[0] + a[8] * b[2],
 - a[0] * b[3] - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] + a[4] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[3],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0] + a[9] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Pln*)(&b));
}			
		 
inline Tvt gp (const Par& a, const Flp& b) { 
	return Tvt (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2] + a[9] * b[3],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
a[3] * b[3],
a[4] * b[3],
a[5] * b[3],
a[0] * b[1] + a[1] * b[2] - a[6] * b[3] + a[9] * b[0],
 - a[0] * b[0] + a[2] * b[2] - a[7] * b[3] + a[9] * b[1],
 - a[1] * b[0] - a[2] * b[1] - a[8] * b[3] + a[9] * b[2],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Flp*)(&b));
}			
		 
inline Par_Dfp gp (const Par& a, const Dfp& b) { 
	return Par_Dfp (
 - a[2] * b[3] + a[4] * b[0] + a[5] * b[1],
a[1] * b[3] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[3] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[5] * b[3],
a[4] * b[3],
 - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1] - a[8] * b[3] + a[9] * b[0],
a[0] * b[2] - a[2] * b[0] + a[7] * b[3] + a[9] * b[1],
 - a[0] * b[1] + a[1] * b[0] - a[6] * b[3] + a[9] * b[2],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0] + a[9] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Dfp*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Dll& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[4] - a[4] * b[3],
a[0] * b[2] - a[2] * b[0] + a[3] * b[5] - a[5] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[5] - a[5] * b[4],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
a[0] * b[4] + a[1] * b[5] - a[7] * b[0] - a[8] * b[1] + a[9] * b[3],
 - a[0] * b[3] + a[2] * b[5] + a[6] * b[0] - a[8] * b[2] + a[9] * b[4],
 - a[1] * b[3] - a[2] * b[4] + a[6] * b[1] + a[7] * b[2] + a[9] * b[5],
 - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[3] * b[4] + a[4] * b[3] + a[9] * b[0],
 - a[3] * b[5] + a[5] * b[3] + a[9] * b[1],
 - a[4] * b[5] + a[5] * b[4] + a[9] * b[2],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Dll*)(&b));
}			
		 
inline Pnt_Par gp (const Par& a, const Dlp& b) { 
	return Pnt_Par (
a[0] * b[1] + a[1] * b[2] - a[3] * b[3],
 - a[0] * b[0] + a[2] * b[2] - a[4] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[5] * b[3],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[6] * b[0] - a[7] * b[1] - a[8] * b[2] + a[9] * b[3],
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[3] - a[6] * b[1] + a[7] * b[0],
a[1] * b[3] - a[6] * b[2] + a[8] * b[0],
a[2] * b[3] - a[7] * b[2] + a[8] * b[1],
a[3] * b[3] + a[9] * b[0],
a[4] * b[3] + a[9] * b[1],
a[5] * b[3] + a[9] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Dlp*)(&b));
}			
		 
inline Pnt_Par gp (const Par& a, const Vec& b) { 
	return Pnt_Par (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
 - a[6] * b[1] + a[7] * b[0],
 - a[6] * b[2] + a[8] * b[0],
 - a[7] * b[2] + a[8] * b[1],
a[9] * b[0],
a[9] * b[1],
a[9] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Vec*)(&b));
}			
		 
inline Par_Biv gp (const Par& a, const Biv& b) { 
	return Par_Biv (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[7] * b[0] - a[8] * b[1],
a[6] * b[0] - a[8] * b[2],
a[6] * b[1] + a[7] * b[2],
a[9] * b[0],
a[9] * b[1],
a[9] * b[2],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Biv*)(&b));
}			
		 
inline Mnk_Cir gp (const Par& a, const Tri& b) { 
	return Mnk_Cir (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
 - a[8] * b[0],
a[7] * b[0],
 - a[6] * b[0],
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Tri*)(&b));
}			
		 
inline Pnt_Par gp (const Par& a, const Aff& b) { 
	return Pnt_Par (
a[0] * b[1] + a[1] * b[2] - a[6] * b[3],
 - a[0] * b[0] + a[2] * b[2] - a[7] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[8] * b[3],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2] - a[9] * b[3],
 - a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
 - a[6] * b[1] + a[7] * b[0],
 - a[6] * b[2] + a[8] * b[0],
 - a[7] * b[2] + a[8] * b[1],
 - a[6] * b[3] + a[9] * b[0],
 - a[7] * b[3] + a[9] * b[1],
 - a[8] * b[3] + a[9] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Aff*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Afl& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
 - a[1] * b[2] + a[2] * b[1] + a[6] * b[4] - a[7] * b[3],
a[0] * b[2] - a[2] * b[0] + a[6] * b[5] - a[8] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[7] * b[5] - a[8] * b[4],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1] - a[9] * b[3],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2] - a[9] * b[4],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2] - a[9] * b[5],
 - a[7] * b[0] - a[8] * b[1],
a[6] * b[0] - a[8] * b[2],
a[6] * b[1] + a[7] * b[2],
a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
a[6] * b[4] - a[7] * b[3] + a[9] * b[0],
a[6] * b[5] - a[8] * b[3] + a[9] * b[1],
a[7] * b[5] - a[8] * b[4] + a[9] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Afl*)(&b));
}			
		 
inline Par_Afp gp (const Par& a, const Afp& b) { 
	return Par_Afp (
 - a[2] * b[3] + a[7] * b[0] + a[8] * b[1],
a[1] * b[3] - a[6] * b[0] + a[8] * b[2],
 - a[0] * b[3] - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[5] * b[3] - a[9] * b[0],
a[0] * b[2] - a[2] * b[0] + a[4] * b[3] - a[9] * b[1],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[3] - a[9] * b[2],
 - a[8] * b[3],
a[7] * b[3],
 - a[6] * b[3],
a[7] * b[0] + a[8] * b[1],
 - a[6] * b[0] + a[8] * b[2],
 - a[6] * b[1] - a[7] * b[2],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0] + a[9] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Afp*)(&b));
}			
		 
inline Tst gp (const Par& a, const Dap& b) { 
	return Tst (
a[6] * b[0] + a[7] * b[1] + a[8] * b[2] + a[9] * b[3],
a[6] * b[1] - a[7] * b[0],
a[6] * b[2] - a[8] * b[0],
a[7] * b[2] - a[8] * b[1],
a[0] * b[1] + a[1] * b[2] + a[3] * b[3] - a[9] * b[0],
 - a[0] * b[0] + a[2] * b[2] + a[4] * b[3] - a[9] * b[1],
 - a[1] * b[0] - a[2] * b[1] + a[5] * b[3] - a[9] * b[2],
 - a[6] * b[3],
 - a[7] * b[3],
 - a[8] * b[3],
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
a[0] * b[3] + a[6] * b[1] - a[7] * b[0],
a[1] * b[3] + a[6] * b[2] - a[8] * b[0],
a[2] * b[3] + a[7] * b[2] - a[8] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Dap*)(&b));
}			
		 
inline Pnt_Cir gp (const Par& a, const Daf& b) { 
	return Pnt_Cir (
a[8] * b[3] + a[9] * b[0],
 - a[7] * b[3] + a[9] * b[1],
a[6] * b[3] + a[9] * b[2],
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
a[7] * b[0] + a[8] * b[1],
 - a[6] * b[0] + a[8] * b[2],
 - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[8] * b[3],
a[0] * b[2] - a[2] * b[0] - a[7] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[6] * b[3],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0] - a[9] * b[3],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Daf*)(&b));
}			
		 
inline Rtc gp (const Par& a, const Dal& b) { 
	return Rtc (
a[7] * b[0] + a[8] * b[1] + a[9] * b[3],
 - a[6] * b[0] + a[8] * b[2] + a[9] * b[4],
 - a[6] * b[1] - a[7] * b[2] + a[9] * b[5],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[4] + a[4] * b[3] - a[9] * b[0],
a[0] * b[2] - a[2] * b[0] - a[3] * b[5] + a[5] * b[3] - a[9] * b[1],
 - a[0] * b[1] + a[1] * b[0] - a[4] * b[5] + a[5] * b[4] - a[9] * b[2],
a[6] * b[4] - a[7] * b[3],
a[6] * b[5] - a[8] * b[3],
a[7] * b[5] - a[8] * b[4],
a[0] * b[4] + a[1] * b[5] + a[7] * b[0] + a[8] * b[1],
 - a[0] * b[3] + a[2] * b[5] - a[6] * b[0] + a[8] * b[2],
 - a[1] * b[3] - a[2] * b[4] - a[6] * b[1] - a[7] * b[2],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Dal*)(&b));
}			
		 
inline Par_Mnv gp (const Par& a, const Mnv& b) { 
	return Par_Mnv (
a[9] * b[0],
a[9] * b[1],
a[9] * b[2],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[6] * b[1] - a[7] * b[0],
a[6] * b[2] - a[8] * b[0],
a[7] * b[2] - a[8] * b[1],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Mnv*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Rot& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
a[6] * b[1] + a[7] * b[0] - a[8] * b[3],
a[6] * b[2] + a[7] * b[3] + a[8] * b[0],
a[9] * b[0],
a[9] * b[1],
a[9] * b[2],
a[9] * b[3],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1],
a[6] * b[3] - a[7] * b[2] + a[8] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Rot*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Mot& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4] + a[5] * b[7],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[4] * b[7] - a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[7] + a[4] * b[6] - a[5] * b[5],
a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7] + a[6] * b[0] - a[7] * b[1] - a[8] * b[2] + a[9] * b[4],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[6] * b[1] + a[7] * b[0] - a[8] * b[3] + a[9] * b[5],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5] + a[6] * b[2] + a[7] * b[3] + a[8] * b[0] + a[9] * b[6],
 - a[3] * b[4] - a[4] * b[5] - a[5] * b[6] + a[9] * b[0],
 - a[3] * b[5] + a[4] * b[4] - a[5] * b[7] + a[9] * b[1],
 - a[3] * b[6] + a[4] * b[7] + a[5] * b[4] + a[9] * b[2],
 - a[3] * b[7] - a[4] * b[6] + a[5] * b[5] + a[9] * b[3],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1] + a[9] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Mot*)(&b));
}			
		 
inline Trt gp (const Par& a, const Dil& b) { 
	return Trt (
a[9] * b[1],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] + a[3] * b[1],
a[4] * b[0] + a[4] * b[1],
a[5] * b[0] + a[5] * b[1],
a[6] * b[0] - a[6] * b[1],
a[7] * b[0] - a[7] * b[1],
a[8] * b[0] - a[8] * b[1],
a[9] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Dil*)(&b));
}			
		 
inline Tst gp (const Par& a, const Trv& b) { 
	return Tst (
a[6] * b[1] + a[7] * b[2] + a[8] * b[3],
a[0] * b[0] + a[6] * b[2] - a[7] * b[1],
a[1] * b[0] + a[6] * b[3] - a[8] * b[1],
a[2] * b[0] + a[7] * b[3] - a[8] * b[2],
a[0] * b[2] + a[1] * b[3] + a[3] * b[0] - a[9] * b[1],
 - a[0] * b[1] + a[2] * b[3] + a[4] * b[0] - a[9] * b[2],
 - a[1] * b[1] - a[2] * b[2] + a[5] * b[0] - a[9] * b[3],
a[6] * b[0],
a[7] * b[0],
a[8] * b[0],
a[6] * b[1] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0],
a[6] * b[2] - a[7] * b[1],
a[6] * b[3] - a[8] * b[1],
a[7] * b[3] - a[8] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Trv*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Mtd& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6] + a[9] * b[7],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4] + a[5] * b[11] + a[9] * b[8],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[4] * b[11] - a[5] * b[4] + a[9] * b[9],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[11] + a[4] * b[6] - a[5] * b[5] + a[9] * b[10],
a[3] * b[0] + a[3] * b[7] - a[4] * b[1] - a[4] * b[8] - a[5] * b[2] - a[5] * b[9],
a[3] * b[1] + a[3] * b[8] + a[4] * b[0] + a[4] * b[7] - a[5] * b[3] - a[5] * b[10],
a[3] * b[2] + a[3] * b[9] + a[4] * b[3] + a[4] * b[10] + a[5] * b[0] + a[5] * b[7],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] + a[6] * b[0] - a[6] * b[7] - a[7] * b[1] + a[7] * b[8] - a[8] * b[2] + a[8] * b[9] + a[9] * b[4],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[6] * b[1] - a[6] * b[8] + a[7] * b[0] - a[7] * b[7] - a[8] * b[3] + a[8] * b[10] + a[9] * b[5],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] + a[6] * b[2] - a[6] * b[9] + a[7] * b[3] - a[7] * b[10] + a[8] * b[0] - a[8] * b[7] + a[9] * b[6],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[3] * b[4] - a[4] * b[5] - a[5] * b[6] + a[9] * b[0],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9] - a[3] * b[5] + a[4] * b[4] - a[5] * b[11] + a[9] * b[1],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8] - a[3] * b[6] + a[4] * b[11] + a[5] * b[4] + a[9] * b[2],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7] - a[3] * b[11] - a[4] * b[6] + a[5] * b[5] + a[9] * b[3],
a[3] * b[3] + a[3] * b[10] - a[4] * b[2] - a[4] * b[9] + a[5] * b[1] + a[5] * b[8],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[6] * b[3] - a[6] * b[10] - a[7] * b[2] + a[7] * b[9] + a[8] * b[1] - a[8] * b[8] + a[9] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Mtd*)(&b));
}			
		 
inline Tvt gp (const Par& a, const Trs& b) { 
	return Tvt (
a[3] * b[1] + a[4] * b[2] + a[5] * b[3],
a[0] * b[0] + a[3] * b[2] - a[4] * b[1],
a[1] * b[0] + a[3] * b[3] - a[5] * b[1],
a[2] * b[0] + a[4] * b[3] - a[5] * b[2],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[0] * b[2] + a[1] * b[3] + a[6] * b[0] + a[9] * b[1],
 - a[0] * b[1] + a[2] * b[3] + a[7] * b[0] + a[9] * b[2],
 - a[1] * b[1] - a[2] * b[2] + a[8] * b[0] + a[9] * b[3],
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3] + a[9] * b[0],
 - a[3] * b[2] + a[4] * b[1],
 - a[3] * b[3] + a[5] * b[1],
 - a[4] * b[3] + a[5] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Par& a, const Rtc& b) { 
	return Rtc (
a[0] * b[1] + a[1] * b[2] - a[2] * b[14] - a[3] * b[4] + a[4] * b[8] + a[5] * b[9] - a[6] * b[3] + a[7] * b[5] + a[8] * b[6] + a[9] * b[11],
 - a[0] * b[0] + a[1] * b[14] + a[2] * b[2] - a[3] * b[8] - a[4] * b[4] + a[5] * b[10] - a[6] * b[5] - a[7] * b[3] + a[8] * b[7] + a[9] * b[12],
 - a[0] * b[14] - a[1] * b[0] - a[2] * b[1] - a[3] * b[9] - a[4] * b[10] - a[5] * b[4] - a[6] * b[6] - a[7] * b[7] - a[8] * b[3] + a[9] * b[13],
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7] - a[3] * b[0] - a[3] * b[11] - a[4] * b[1] - a[4] * b[12] - a[5] * b[2] - a[5] * b[13] - a[9] * b[3],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[6] * b[0] + a[6] * b[11] - a[7] * b[1] + a[7] * b[12] - a[8] * b[2] + a[8] * b[13] + a[9] * b[4],
a[0] * b[3] - a[1] * b[7] + a[2] * b[6] - a[3] * b[1] - a[3] * b[12] + a[4] * b[0] + a[4] * b[11] - a[5] * b[14] - a[5] * b[15] - a[9] * b[5],
a[0] * b[7] + a[1] * b[3] - a[2] * b[5] - a[3] * b[2] - a[3] * b[13] + a[4] * b[14] + a[4] * b[15] + a[5] * b[0] + a[5] * b[11] - a[9] * b[6],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[3] - a[3] * b[14] - a[3] * b[15] - a[4] * b[2] - a[4] * b[13] + a[5] * b[1] + a[5] * b[12] - a[9] * b[7],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9] - a[6] * b[1] + a[6] * b[12] + a[7] * b[0] - a[7] * b[11] - a[8] * b[14] + a[8] * b[15] + a[9] * b[8],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8] - a[6] * b[2] + a[6] * b[13] + a[7] * b[14] - a[7] * b[15] + a[8] * b[0] - a[8] * b[11] + a[9] * b[9],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4] - a[6] * b[14] + a[6] * b[15] - a[7] * b[2] + a[7] * b[13] + a[8] * b[1] - a[8] * b[12] + a[9] * b[10],
a[0] * b[12] + a[1] * b[13] - a[2] * b[15] + a[3] * b[4] - a[4] * b[8] - a[5] * b[9] - a[6] * b[3] + a[7] * b[5] + a[8] * b[6] + a[9] * b[0],
 - a[0] * b[11] + a[1] * b[15] + a[2] * b[13] + a[3] * b[8] + a[4] * b[4] - a[5] * b[10] - a[6] * b[5] - a[7] * b[3] + a[8] * b[7] + a[9] * b[1],
 - a[0] * b[15] - a[1] * b[11] - a[2] * b[12] + a[3] * b[9] + a[4] * b[10] + a[5] * b[4] - a[6] * b[6] - a[7] * b[7] - a[8] * b[3] + a[9] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[10] + a[4] * b[9] - a[5] * b[8] - a[6] * b[7] + a[7] * b[6] - a[8] * b[5] + a[9] * b[15],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[4] * b[9] + a[5] * b[8] - a[6] * b[7] + a[7] * b[6] - a[8] * b[5] + a[9] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Mtt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] + a[9] * b[10],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7] + a[5] * b[15] + a[6] * b[5] - a[7] * b[4] + a[8] * b[14] + a[9] * b[11],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[4] * b[15] - a[5] * b[7] + a[6] * b[6] - a[7] * b[14] - a[8] * b[4] + a[9] * b[12],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[15] + a[4] * b[9] - a[5] * b[8] + a[6] * b[14] + a[7] * b[6] - a[8] * b[5] + a[9] * b[13],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[4] * b[11] - a[5] * b[2] - a[5] * b[12] - a[9] * b[4],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[1] + a[3] * b[11] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3] - a[5] * b[13] - a[9] * b[5],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[12] + a[4] * b[3] + a[4] * b[13] + a[5] * b[0] + a[5] * b[10] - a[9] * b[6],
a[0] * b[8] + a[1] * b[9] - a[2] * b[15] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] + a[7] * b[11] - a[8] * b[2] + a[8] * b[12] + a[9] * b[7],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9] + a[6] * b[1] - a[6] * b[11] + a[7] * b[0] - a[7] * b[10] - a[8] * b[3] + a[8] * b[13] + a[9] * b[8],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8] + a[6] * b[2] - a[6] * b[12] + a[7] * b[3] - a[7] * b[13] + a[8] * b[0] - a[8] * b[10] + a[9] * b[9],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[7] - a[4] * b[8] - a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] + a[9] * b[0],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] - a[3] * b[8] + a[4] * b[7] - a[5] * b[15] + a[6] * b[5] - a[7] * b[4] + a[8] * b[14] + a[9] * b[1],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[9] + a[4] * b[15] + a[5] * b[7] + a[6] * b[6] - a[7] * b[14] - a[8] * b[4] + a[9] * b[2],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] - a[3] * b[15] - a[4] * b[9] + a[5] * b[8] + a[6] * b[14] + a[7] * b[6] - a[8] * b[5] + a[9] * b[3],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[13] - a[4] * b[2] - a[4] * b[12] + a[5] * b[1] + a[5] * b[11] - a[9] * b[14],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[6] * b[3] - a[6] * b[13] - a[7] * b[2] + a[7] * b[12] + a[8] * b[1] - a[8] * b[11] + a[9] * b[15]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Mtt*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Rtt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[6] * b[5] - a[7] * b[4] + a[8] * b[7],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[6] * b[6] - a[7] * b[7] - a[8] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[6] * b[7] + a[7] * b[6] - a[8] * b[5],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2] - a[9] * b[4],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3] - a[9] * b[5],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0] - a[9] * b[6],
a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
a[6] * b[1] + a[7] * b[0] - a[8] * b[3],
a[6] * b[2] + a[7] * b[3] + a[8] * b[0],
a[6] * b[4] + a[7] * b[5] + a[8] * b[6] + a[9] * b[0],
a[6] * b[5] - a[7] * b[4] + a[8] * b[7] + a[9] * b[1],
a[6] * b[6] - a[7] * b[7] - a[8] * b[4] + a[9] * b[2],
a[6] * b[7] + a[7] * b[6] - a[8] * b[5] + a[9] * b[3],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1] - a[9] * b[7],
a[6] * b[3] - a[7] * b[2] + a[8] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Rtt*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Rtd& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[9] * b[4],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[9] * b[5],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[9] * b[6],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[9] * b[7],
a[3] * b[0] + a[3] * b[4] - a[4] * b[1] - a[4] * b[5] - a[5] * b[2] - a[5] * b[6],
a[3] * b[1] + a[3] * b[5] + a[4] * b[0] + a[4] * b[4] - a[5] * b[3] - a[5] * b[7],
a[3] * b[2] + a[3] * b[6] + a[4] * b[3] + a[4] * b[7] + a[5] * b[0] + a[5] * b[4],
a[6] * b[0] - a[6] * b[4] - a[7] * b[1] + a[7] * b[5] - a[8] * b[2] + a[8] * b[6],
a[6] * b[1] - a[6] * b[5] + a[7] * b[0] - a[7] * b[4] - a[8] * b[3] + a[8] * b[7],
a[6] * b[2] - a[6] * b[6] + a[7] * b[3] - a[7] * b[7] + a[8] * b[0] - a[8] * b[4],
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7] + a[9] * b[0],
a[0] * b[4] - a[1] * b[7] + a[2] * b[6] + a[9] * b[1],
a[0] * b[7] + a[1] * b[4] - a[2] * b[5] + a[9] * b[2],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[4] + a[9] * b[3],
a[3] * b[3] + a[3] * b[7] - a[4] * b[2] - a[4] * b[6] + a[5] * b[1] + a[5] * b[5],
a[6] * b[3] - a[6] * b[7] - a[7] * b[2] + a[7] * b[6] + a[8] * b[1] - a[8] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Rtd*)(&b));
}			
		 
inline Tst gp (const Par& a, const Tvd& b) { 
	return Tst (
a[6] * b[1] + a[7] * b[2] + a[8] * b[3] + a[9] * b[4],
a[0] * b[0] + a[6] * b[2] - a[7] * b[1],
a[1] * b[0] + a[6] * b[3] - a[8] * b[1],
a[2] * b[0] + a[7] * b[3] - a[8] * b[2],
a[0] * b[2] + a[1] * b[3] + a[3] * b[0] + a[3] * b[4] - a[9] * b[1],
 - a[0] * b[1] + a[2] * b[3] + a[4] * b[0] + a[4] * b[4] - a[9] * b[2],
 - a[1] * b[1] - a[2] * b[2] + a[5] * b[0] + a[5] * b[4] - a[9] * b[3],
a[6] * b[0] - a[6] * b[4],
a[7] * b[0] - a[7] * b[4],
a[8] * b[0] - a[8] * b[4],
a[6] * b[1] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0],
a[0] * b[4] + a[6] * b[2] - a[7] * b[1],
a[1] * b[4] + a[6] * b[3] - a[8] * b[1],
a[2] * b[4] + a[7] * b[3] - a[8] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Tvd*)(&b));
}			
		 
inline Tvt gp (const Par& a, const Tsd& b) { 
	return Tvt (
a[3] * b[1] + a[4] * b[2] + a[5] * b[3] + a[9] * b[4],
a[0] * b[0] + a[3] * b[2] - a[4] * b[1],
a[1] * b[0] + a[3] * b[3] - a[5] * b[1],
a[2] * b[0] + a[4] * b[3] - a[5] * b[2],
a[3] * b[0] + a[3] * b[4],
a[4] * b[0] + a[4] * b[4],
a[5] * b[0] + a[5] * b[4],
a[0] * b[2] + a[1] * b[3] + a[6] * b[0] - a[6] * b[4] + a[9] * b[1],
 - a[0] * b[1] + a[2] * b[3] + a[7] * b[0] - a[7] * b[4] + a[9] * b[2],
 - a[1] * b[1] - a[2] * b[2] + a[8] * b[0] - a[8] * b[4] + a[9] * b[3],
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3] + a[9] * b[0],
a[0] * b[4] - a[3] * b[2] + a[4] * b[1],
a[1] * b[4] - a[3] * b[3] + a[5] * b[1],
a[2] * b[4] - a[4] * b[3] + a[5] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Trt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] + a[9] * b[10],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7] + a[6] * b[5] - a[7] * b[4] + a[9] * b[11],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[5] * b[7] + a[6] * b[6] - a[8] * b[4] + a[9] * b[12],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[9] - a[5] * b[8] + a[7] * b[6] - a[8] * b[5] + a[9] * b[13],
a[0] * b[5] + a[1] * b[6] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[4] * b[11] - a[5] * b[2] - a[5] * b[12] - a[9] * b[4],
 - a[0] * b[4] + a[2] * b[6] + a[3] * b[1] + a[3] * b[11] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3] - a[5] * b[13] - a[9] * b[5],
 - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[12] + a[4] * b[3] + a[4] * b[13] + a[5] * b[0] + a[5] * b[10] - a[9] * b[6],
a[0] * b[8] + a[1] * b[9] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] + a[7] * b[11] - a[8] * b[2] + a[8] * b[12] + a[9] * b[7],
 - a[0] * b[7] + a[2] * b[9] + a[6] * b[1] - a[6] * b[11] + a[7] * b[0] - a[7] * b[10] - a[8] * b[3] + a[8] * b[13] + a[9] * b[8],
 - a[1] * b[7] - a[2] * b[8] + a[6] * b[2] - a[6] * b[12] + a[7] * b[3] - a[7] * b[13] + a[8] * b[0] - a[8] * b[10] + a[9] * b[9],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[7] - a[4] * b[8] - a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] + a[9] * b[0],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] - a[3] * b[8] + a[4] * b[7] + a[6] * b[5] - a[7] * b[4] + a[9] * b[1],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[9] + a[5] * b[7] + a[6] * b[6] - a[8] * b[4] + a[9] * b[2],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] - a[4] * b[9] + a[5] * b[8] + a[7] * b[6] - a[8] * b[5] + a[9] * b[3],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[13] - a[4] * b[2] - a[4] * b[12] + a[5] * b[1] + a[5] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[6] * b[3] - a[6] * b[13] - a[7] * b[2] + a[7] * b[12] + a[8] * b[1] - a[8] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Trt*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Rvd& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] + a[9] * b[7],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[6] * b[5] - a[7] * b[4] + a[8] * b[11] + a[9] * b[8],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[6] * b[6] - a[7] * b[11] - a[8] * b[4] + a[9] * b[9],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[6] * b[11] + a[7] * b[6] - a[8] * b[5] + a[9] * b[10],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] + a[3] * b[0] + a[3] * b[7] - a[4] * b[1] - a[4] * b[8] - a[5] * b[2] - a[5] * b[9] - a[9] * b[4],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[3] * b[1] + a[3] * b[8] + a[4] * b[0] + a[4] * b[7] - a[5] * b[3] - a[5] * b[10] - a[9] * b[5],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[9] + a[4] * b[3] + a[4] * b[10] + a[5] * b[0] + a[5] * b[7] - a[9] * b[6],
a[6] * b[0] - a[6] * b[7] - a[7] * b[1] + a[7] * b[8] - a[8] * b[2] + a[8] * b[9],
a[6] * b[1] - a[6] * b[8] + a[7] * b[0] - a[7] * b[7] - a[8] * b[3] + a[8] * b[10],
a[6] * b[2] - a[6] * b[9] + a[7] * b[3] - a[7] * b[10] + a[8] * b[0] - a[8] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] + a[9] * b[0],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9] + a[6] * b[5] - a[7] * b[4] + a[8] * b[11] + a[9] * b[1],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8] + a[6] * b[6] - a[7] * b[11] - a[8] * b[4] + a[9] * b[2],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7] + a[6] * b[11] + a[7] * b[6] - a[8] * b[5] + a[9] * b[3],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[10] - a[4] * b[2] - a[4] * b[9] + a[5] * b[1] + a[5] * b[8] - a[9] * b[11],
a[6] * b[3] - a[6] * b[10] - a[7] * b[2] + a[7] * b[9] + a[8] * b[1] - a[8] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Tst& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] + a[9] * b[10],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7] + a[6] * b[5] - a[7] * b[4] + a[8] * b[14] + a[9] * b[11],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[5] * b[7] + a[6] * b[6] - a[7] * b[14] - a[8] * b[4] + a[9] * b[12],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[9] - a[5] * b[8] + a[6] * b[14] + a[7] * b[6] - a[8] * b[5] + a[9] * b[13],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[4] * b[11] - a[5] * b[2] - a[5] * b[12] - a[9] * b[4],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[1] + a[3] * b[11] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3] - a[5] * b[13] - a[9] * b[5],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[12] + a[4] * b[3] + a[4] * b[13] + a[5] * b[0] + a[5] * b[10] - a[9] * b[6],
a[0] * b[8] + a[1] * b[9] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] + a[7] * b[11] - a[8] * b[2] + a[8] * b[12] + a[9] * b[7],
 - a[0] * b[7] + a[2] * b[9] + a[6] * b[1] - a[6] * b[11] + a[7] * b[0] - a[7] * b[10] - a[8] * b[3] + a[8] * b[13] + a[9] * b[8],
 - a[1] * b[7] - a[2] * b[8] + a[6] * b[2] - a[6] * b[12] + a[7] * b[3] - a[7] * b[13] + a[8] * b[0] - a[8] * b[10] + a[9] * b[9],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[7] - a[4] * b[8] - a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] + a[9] * b[0],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] - a[3] * b[8] + a[4] * b[7] + a[6] * b[5] - a[7] * b[4] + a[8] * b[14] + a[9] * b[1],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[9] + a[5] * b[7] + a[6] * b[6] - a[7] * b[14] - a[8] * b[4] + a[9] * b[2],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] - a[4] * b[9] + a[5] * b[8] + a[6] * b[14] + a[7] * b[6] - a[8] * b[5] + a[9] * b[3],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[13] - a[4] * b[2] - a[4] * b[12] + a[5] * b[1] + a[5] * b[11] - a[9] * b[14],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[6] * b[3] - a[6] * b[13] - a[7] * b[2] + a[7] * b[12] + a[8] * b[1] - a[8] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Tvt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] + a[9] * b[10],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7] + a[5] * b[14] + a[6] * b[5] - a[7] * b[4] + a[9] * b[11],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[4] * b[14] - a[5] * b[7] + a[6] * b[6] - a[8] * b[4] + a[9] * b[12],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[14] + a[4] * b[9] - a[5] * b[8] + a[7] * b[6] - a[8] * b[5] + a[9] * b[13],
a[0] * b[5] + a[1] * b[6] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[4] * b[11] - a[5] * b[2] - a[5] * b[12] - a[9] * b[4],
 - a[0] * b[4] + a[2] * b[6] + a[3] * b[1] + a[3] * b[11] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3] - a[5] * b[13] - a[9] * b[5],
 - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[12] + a[4] * b[3] + a[4] * b[13] + a[5] * b[0] + a[5] * b[10] - a[9] * b[6],
a[0] * b[8] + a[1] * b[9] - a[2] * b[14] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] + a[7] * b[11] - a[8] * b[2] + a[8] * b[12] + a[9] * b[7],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9] + a[6] * b[1] - a[6] * b[11] + a[7] * b[0] - a[7] * b[10] - a[8] * b[3] + a[8] * b[13] + a[9] * b[8],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8] + a[6] * b[2] - a[6] * b[12] + a[7] * b[3] - a[7] * b[13] + a[8] * b[0] - a[8] * b[10] + a[9] * b[9],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[7] - a[4] * b[8] - a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] + a[9] * b[0],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] - a[3] * b[8] + a[4] * b[7] - a[5] * b[14] + a[6] * b[5] - a[7] * b[4] + a[9] * b[1],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[9] + a[4] * b[14] + a[5] * b[7] + a[6] * b[6] - a[8] * b[4] + a[9] * b[2],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] - a[3] * b[14] - a[4] * b[9] + a[5] * b[8] + a[7] * b[6] - a[8] * b[5] + a[9] * b[3],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[13] - a[4] * b[2] - a[4] * b[12] + a[5] * b[1] + a[5] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[6] * b[3] - a[6] * b[13] - a[7] * b[2] + a[7] * b[12] + a[8] * b[1] - a[8] * b[11] + a[9] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Tvt*)(&b));
}			
		 
inline Mtt gp (const Par& a, const Bst& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] + a[9] * b[10],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7] + a[6] * b[5] - a[7] * b[4],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[5] * b[7] + a[6] * b[6] - a[8] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[9] - a[5] * b[8] + a[7] * b[6] - a[8] * b[5],
a[0] * b[5] + a[1] * b[6] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[5] * b[2] - a[9] * b[4],
 - a[0] * b[4] + a[2] * b[6] + a[3] * b[1] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3] - a[9] * b[5],
 - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0] + a[5] * b[10] - a[9] * b[6],
a[0] * b[8] + a[1] * b[9] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] - a[8] * b[2] + a[9] * b[7],
 - a[0] * b[7] + a[2] * b[9] + a[6] * b[1] + a[7] * b[0] - a[7] * b[10] - a[8] * b[3] + a[9] * b[8],
 - a[1] * b[7] - a[2] * b[8] + a[6] * b[2] + a[7] * b[3] + a[8] * b[0] - a[8] * b[10] + a[9] * b[9],
 - a[3] * b[7] - a[4] * b[8] - a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6] + a[9] * b[0],
a[0] * b[10] - a[3] * b[8] + a[4] * b[7] + a[6] * b[5] - a[7] * b[4] + a[9] * b[1],
a[1] * b[10] - a[3] * b[9] + a[5] * b[7] + a[6] * b[6] - a[8] * b[4] + a[9] * b[2],
a[2] * b[10] - a[4] * b[9] + a[5] * b[8] + a[7] * b[6] - a[8] * b[5] + a[9] * b[3],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Par, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Par*)(&a),*(Bst*)(&b));
}			
		 
inline Par op (const Par& a, const Sca& b) { 
	return Par (
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
		 
		
template<> inline MVBase op_gen<Par, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Sca*)(&b));
}			
		 
inline Dal op (const Par& a, const Ori& b) { 
	return Dal (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[6] * b[0],
 - a[7] * b[0],
 - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Ori*)(&b));
}			
		 
inline Lin op (const Par& a, const Inf& b) { 
	return Lin (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Inf*)(&b));
}			
		 
inline Mnk_Biv op (const Par& a, const Mnk& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Mnk*)(&b));
}			
		 
inline Pss_Sta op (const Par& a, const Hyp& b) { 
	return Pss_Sta (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1] - a[6] * b[0],
a[4] * b[1] - a[7] * b[0],
a[5] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Par& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Par, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Pss*)(&b));
}			
		 
inline Cir op (const Par& a, const Pnt& b) { 
	return Cir (
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[4] - a[6] * b[1] + a[7] * b[0],
a[1] * b[4] - a[6] * b[2] + a[8] * b[0],
a[2] * b[4] - a[7] * b[2] + a[8] * b[1],
a[3] * b[4] - a[6] * b[3] + a[9] * b[0],
a[4] * b[4] - a[7] * b[3] + a[9] * b[1],
a[5] * b[4] - a[8] * b[3] + a[9] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Pnt*)(&b));
}			
		 
inline Sph op (const Par& a, const Par& b) { 
	return Sph (
a[0] * b[9] - a[3] * b[7] + a[4] * b[6] + a[6] * b[4] - a[7] * b[3] + a[9] * b[0],
a[1] * b[9] - a[3] * b[8] + a[5] * b[6] + a[6] * b[5] - a[8] * b[3] + a[9] * b[1],
a[2] * b[9] - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[9] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Par*)(&b));
}			
		 
inline Pss op (const Par& a, const Cir& b) { 
	return Pss (
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3] - a[6] * b[2] + a[7] * b[1] - a[8] * b[0] + a[9] * b[9]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Par& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Par, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Sph*)(&b));
}			
		 
inline Sph op (const Par& a, const Sta& b) { 
	return Sph (
 - a[3] * b[7] + a[4] * b[6] + a[6] * b[4] - a[7] * b[3] + a[9] * b[0],
 - a[3] * b[8] + a[5] * b[6] + a[6] * b[5] - a[8] * b[3] + a[9] * b[1],
 - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[9] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Sta*)(&b));
}			
		 
inline Pln op (const Par& a, const Drv& b) { 
	return Pln (
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Drv*)(&b));
}			
		 
inline Pss op (const Par& a, const Drb& b) { 
	return Pss (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Par& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Par, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Drt*)(&b));
}			
		 
inline Daf op (const Par& a, const Tnv& b) { 
	return Daf (
a[6] * b[1] - a[7] * b[0],
a[6] * b[2] - a[8] * b[0],
a[7] * b[2] - a[8] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Tnv*)(&b));
}			
		 
inline Pss op (const Par& a, const Tnb& b) { 
	return Pss (
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Par& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Par, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Tnt*)(&b));
}			
		 
inline Pss op (const Par& a, const Lin& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Par& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Par, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Pln*)(&b));
}			
		 
inline Pln op (const Par& a, const Flp& b) { 
	return Pln (
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Flp*)(&b));
}			
		 
inline Pss op (const Par& a, const Dfp& b) { 
	return Pss (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0] + a[9] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Dfp*)(&b));
}			
		 
inline Sph op (const Par& a, const Dll& b) { 
	return Sph (
 - a[3] * b[4] + a[4] * b[3] + a[9] * b[0],
 - a[3] * b[5] + a[5] * b[3] + a[9] * b[1],
 - a[4] * b[5] + a[5] * b[4] + a[9] * b[2],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Dll*)(&b));
}			
		 
inline Cir op (const Par& a, const Dlp& b) { 
	return Cir (
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[3] - a[6] * b[1] + a[7] * b[0],
a[1] * b[3] - a[6] * b[2] + a[8] * b[0],
a[2] * b[3] - a[7] * b[2] + a[8] * b[1],
a[3] * b[3] + a[9] * b[0],
a[4] * b[3] + a[9] * b[1],
a[5] * b[3] + a[9] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Dlp*)(&b));
}			
		 
inline Cir op (const Par& a, const Vec& b) { 
	return Cir (
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
 - a[6] * b[1] + a[7] * b[0],
 - a[6] * b[2] + a[8] * b[0],
 - a[7] * b[2] + a[8] * b[1],
a[9] * b[0],
a[9] * b[1],
a[9] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Vec*)(&b));
}			
		 
inline Sph op (const Par& a, const Biv& b) { 
	return Sph (
a[9] * b[0],
a[9] * b[1],
a[9] * b[2],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Biv*)(&b));
}			
		 
inline Pss op (const Par& a, const Tri& b) { 
	return Pss (
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Tri*)(&b));
}			
		 
inline Cir op (const Par& a, const Aff& b) { 
	return Cir (
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
 - a[6] * b[1] + a[7] * b[0],
 - a[6] * b[2] + a[8] * b[0],
 - a[7] * b[2] + a[8] * b[1],
 - a[6] * b[3] + a[9] * b[0],
 - a[7] * b[3] + a[9] * b[1],
 - a[8] * b[3] + a[9] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Aff*)(&b));
}			
		 
inline Sph op (const Par& a, const Afl& b) { 
	return Sph (
a[6] * b[4] - a[7] * b[3] + a[9] * b[0],
a[6] * b[5] - a[8] * b[3] + a[9] * b[1],
a[7] * b[5] - a[8] * b[4] + a[9] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Afl*)(&b));
}			
		 
inline Pss op (const Par& a, const Afp& b) { 
	return Pss (
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0] + a[9] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Afp*)(&b));
}			
		 
inline Daf op (const Par& a, const Dap& b) { 
	return Daf (
a[0] * b[3] + a[6] * b[1] - a[7] * b[0],
a[1] * b[3] + a[6] * b[2] - a[8] * b[0],
a[2] * b[3] + a[7] * b[2] - a[8] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Par& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Par, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Daf*)(&b));
}			
		 
inline Pss op (const Par& a, const Dal& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Dal*)(&b));
}			
		 
inline Pss op (const Par& a, const Mnv& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Par, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Par*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Par& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Par& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Par& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Par& a, const Mnk& b) { 
	return Sca (
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Par& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Hyp*)(&b));
}			
		 
inline Cir ip (const Par& a, const Pss& b) { 
	return Cir (
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[9] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Par& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Par& a, const Par& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5] + a[9] * b[9]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Par*)(&b));
}			
		 
inline Pnt ip (const Par& a, const Cir& b) { 
	return Pnt (
 - a[2] * b[9] + a[4] * b[3] + a[5] * b[4] + a[7] * b[0] + a[8] * b[1] + a[9] * b[6],
a[1] * b[9] - a[3] * b[3] + a[5] * b[5] - a[6] * b[0] + a[8] * b[2] + a[9] * b[7],
 - a[0] * b[9] - a[3] * b[4] - a[4] * b[5] - a[6] * b[1] - a[7] * b[2] + a[9] * b[8],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[6] - a[4] * b[7] - a[5] * b[8],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5] + a[6] * b[6] + a[7] * b[7] + a[8] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Cir*)(&b));
}			
		 
inline Par ip (const Par& a, const Sph& b) { 
	return Par (
a[5] * b[4] + a[8] * b[3] + a[9] * b[0],
 - a[4] * b[4] - a[7] * b[3] + a[9] * b[1],
a[3] * b[4] + a[6] * b[3] + a[9] * b[2],
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
 - a[2] * b[4] + a[7] * b[0] + a[8] * b[1],
a[1] * b[4] - a[6] * b[0] + a[8] * b[2],
 - a[0] * b[4] - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Sph*)(&b));
}			
		 
inline Sca ip (const Par& a, const Sta& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Par& a, const Drv& b) { 
	return Sca (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Drv*)(&b));
}			
		 
inline Dlp ip (const Par& a, const Drb& b) { 
	return Dlp (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Drb*)(&b));
}			
		 
inline Dll ip (const Par& a, const Drt& b) { 
	return Dll (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Par& a, const Tnv& b) { 
	return Sca (
a[6] * b[0] + a[7] * b[1] + a[8] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Tnv*)(&b));
}			
		 
inline Aff ip (const Par& a, const Tnb& b) { 
	return Aff (
a[7] * b[0] + a[8] * b[1],
 - a[6] * b[0] + a[8] * b[2],
 - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Tnb*)(&b));
}			
		 
inline Afl ip (const Par& a, const Tnt& b) { 
	return Afl (
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Tnt*)(&b));
}			
		 
inline Pnt ip (const Par& a, const Lin& b) { 
	return Pnt (
a[4] * b[0] + a[5] * b[1] + a[9] * b[3],
 - a[3] * b[0] + a[5] * b[2] + a[9] * b[4],
 - a[3] * b[1] - a[4] * b[2] + a[9] * b[5],
 - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Lin*)(&b));
}			
		 
inline Par ip (const Par& a, const Pln& b) { 
	return Par (
a[5] * b[3] + a[9] * b[0],
 - a[4] * b[3] + a[9] * b[1],
a[3] * b[3] + a[9] * b[2],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[2] * b[3] + a[7] * b[0] + a[8] * b[1],
a[1] * b[3] - a[6] * b[0] + a[8] * b[2],
 - a[0] * b[3] - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Par& a, const Flp& b) { 
	return Sca (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2] + a[9] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Flp*)(&b));
}			
		 
inline Dlp ip (const Par& a, const Dfp& b) { 
	return Dlp (
 - a[2] * b[3] + a[4] * b[0] + a[5] * b[1],
a[1] * b[3] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[3] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Par& a, const Dll& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Par& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Par& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Par& a, const Biv& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Biv*)(&b));
}			
		 
inline Vec ip (const Par& a, const Tri& b) { 
	return Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Par& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Par& a, const Afl& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Afl*)(&b));
}			
		 
inline Aff ip (const Par& a, const Afp& b) { 
	return Aff (
 - a[2] * b[3] + a[7] * b[0] + a[8] * b[1],
a[1] * b[3] - a[6] * b[0] + a[8] * b[2],
 - a[0] * b[3] - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Par& a, const Dap& b) { 
	return Sca (
a[6] * b[0] + a[7] * b[1] + a[8] * b[2] + a[9] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Dap*)(&b));
}			
		 
inline Par ip (const Par& a, const Daf& b) { 
	return Par (
a[8] * b[3] + a[9] * b[0],
 - a[7] * b[3] + a[9] * b[1],
a[6] * b[3] + a[9] * b[2],
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
a[7] * b[0] + a[8] * b[1],
 - a[6] * b[0] + a[8] * b[2],
 - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Daf*)(&b));
}			
		 
inline Pnt ip (const Par& a, const Dal& b) { 
	return Pnt (
a[7] * b[0] + a[8] * b[1] + a[9] * b[3],
 - a[6] * b[0] + a[8] * b[2] + a[9] * b[4],
 - a[6] * b[1] - a[7] * b[2] + a[9] * b[5],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
a[6] * b[3] + a[7] * b[4] + a[8] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Dal*)(&b));
}			
		 
inline Pnt ip (const Par& a, const Mnv& b) { 
	return Pnt (
a[9] * b[0],
a[9] * b[1],
a[9] * b[2],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[6] * b[0] + a[7] * b[1] + a[8] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Par, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Par*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Par sp (const Par& par, const Rot& rot) {					
					
const Rot& t1 = rot;
const Par& t2 = par;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7],
t1[0] * t2[9],
t1[1] * t2[9],
t1[2] * t2[9],
t1[3] * t2[9],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Par (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[15] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[15] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[15] * t5[1],
t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Mot& mot) {					
					
const Mot& t1 = mot;
const Par& t2 = par;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3] - t1[7] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[4] * t2[9] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[4] * t2[0] - t1[5] * t2[9] - t1[6] * t2[2] + t1[7] * t2[1],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[1] + t1[5] * t2[2] - t1[6] * t2[9] - t1[7] * t2[0],
t1[0] * t2[9] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[1] * t2[9] + t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[5],
t1[2] * t2[9] + t1[4] * t2[5] - t1[6] * t2[3] - t1[7] * t2[4],
t1[3] * t2[9] + t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[7] * t2[9]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Par (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[7] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[7] - t3[6] * t5[4] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[7] + t3[5] * t5[6] - t3[6] * t5[5] + t3[14] * t5[4],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] + t3[10] * t5[4] + t3[11] * t5[5] + t3[12] * t5[6] - t3[13] * t5[7] - t3[15] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[5] - t3[11] * t5[4] + t3[12] * t5[7] + t3[13] * t5[6] + t3[15] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] + t3[10] * t5[6] - t3[11] * t5[7] - t3[12] * t5[4] - t3[13] * t5[5] - t3[15] * t5[1],
 - t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[7]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Dil& dil) {					
					
const Dil& t1 = dil;
const Par& t2 = par;
Trt t3 (
t1[1] * t2[9],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[3],
t1[0] * t2[4] - t1[1] * t2[4],
t1[0] * t2[5] - t1[1] * t2[5],
t1[0] * t2[6] + t1[1] * t2[6],
t1[0] * t2[7] + t1[1] * t2[7],
t1[0] * t2[8] + t1[1] * t2[8],
t1[0] * t2[9],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Par (
t3[1] * t5[0] + t3[11] * t5[1],
t3[2] * t5[0] + t3[12] * t5[1],
t3[3] * t5[0] + t3[13] * t5[1],
t3[4] * t5[0] + t3[4] * t5[1],
t3[5] * t5[0] + t3[5] * t5[1],
t3[6] * t5[0] + t3[6] * t5[1],
t3[7] * t5[0] - t3[7] * t5[1],
t3[8] * t5[0] - t3[8] * t5[1],
t3[9] * t5[0] - t3[9] * t5[1],
t3[0] * t5[1] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Trv& trv) {					
					
const Trv& t1 = trv;
const Par& t2 = par;
Tst t3 (
t1[1] * t2[6] + t1[2] * t2[7] + t1[3] * t2[8],
t1[0] * t2[0] + t1[1] * t2[7] - t1[2] * t2[6],
t1[0] * t2[1] + t1[1] * t2[8] - t1[3] * t2[6],
t1[0] * t2[2] + t1[2] * t2[8] - t1[3] * t2[7],
t1[0] * t2[3] + t1[1] * t2[9] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[4] + t1[1] * t2[0] + t1[2] * t2[9] - t1[3] * t2[2],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[9],
t1[0] * t2[6],
t1[0] * t2[7],
t1[0] * t2[8],
t1[0] * t2[9] - t1[1] * t2[6] - t1[2] * t2[7] - t1[3] * t2[8],
 - t1[1] * t2[7] + t1[2] * t2[6],
 - t1[1] * t2[8] + t1[3] * t2[6],
 - t1[2] * t2[8] + t1[3] * t2[7],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Par (
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] - t3[10] * t5[1] - t3[11] * t5[2] - t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] - t3[10] * t5[2] + t3[11] * t5[1] - t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] - t3[10] * t5[3] + t3[12] * t5[1] + t3[13] * t5[2],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0],
t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Par& t2 = par;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5] + t1[7] * t2[9],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3] + t1[8] * t2[9] + t1[11] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3] + t1[9] * t2[9] - t1[11] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4] + t1[10] * t2[9] + t1[11] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[7] * t2[3] - t1[8] * t2[4] - t1[9] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] - t1[7] * t2[4] + t1[8] * t2[3] - t1[10] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] - t1[7] * t2[5] + t1[9] * t2[3] + t1[10] * t2[4],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[4] * t2[9] - t1[5] * t2[0] - t1[6] * t2[1] + t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[8] - t1[11] * t2[2],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[4] * t2[0] - t1[5] * t2[9] - t1[6] * t2[2] + t1[7] * t2[7] - t1[8] * t2[6] + t1[10] * t2[8] + t1[11] * t2[1],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[1] + t1[5] * t2[2] - t1[6] * t2[9] + t1[7] * t2[8] - t1[9] * t2[6] - t1[10] * t2[7] - t1[11] * t2[0],
t1[0] * t2[9] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5] - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[1] * t2[9] + t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1] + t1[11] * t2[5],
t1[2] * t2[9] + t1[4] * t2[5] - t1[6] * t2[3] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0] - t1[11] * t2[4],
t1[3] * t2[9] + t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] - t1[8] * t2[5] + t1[9] * t2[4] - t1[10] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] + t1[8] * t2[8] - t1[9] * t2[7] + t1[10] * t2[6] - t1[11] * t2[9]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Par (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[11] - t3[6] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[11] + t3[5] * t5[6] - t3[6] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[14] * t5[4],
t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[14] * t5[3] - t3[14] * t5[10],
t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[14] * t5[2] + t3[14] * t5[9],
t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[14] * t5[1] - t3[14] * t5[8],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] + t3[10] * t5[4] + t3[11] * t5[5] + t3[12] * t5[6] - t3[13] * t5[11] - t3[15] * t5[3] + t3[15] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[10] * t5[5] - t3[11] * t5[4] + t3[12] * t5[11] + t3[13] * t5[6] + t3[15] * t5[2] - t3[15] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] + t3[10] * t5[6] - t3[11] * t5[11] - t3[12] * t5[4] - t3[13] * t5[5] - t3[15] * t5[1] + t3[15] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] - t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Trs& trs) {					
					
const Trs& t1 = trs;
const Par& t2 = par;
Tvt t3 (
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[0] * t2[0] + t1[1] * t2[4] - t1[2] * t2[3],
t1[0] * t2[1] + t1[1] * t2[5] - t1[3] * t2[3],
t1[0] * t2[2] + t1[2] * t2[5] - t1[3] * t2[4],
t1[0] * t2[3],
t1[0] * t2[4],
t1[0] * t2[5],
t1[0] * t2[6] - t1[1] * t2[9] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[7] + t1[1] * t2[0] - t1[2] * t2[9] - t1[3] * t2[2],
t1[0] * t2[8] + t1[1] * t2[1] + t1[2] * t2[2] - t1[3] * t2[9],
t1[0] * t2[9] + t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[1] * t2[4] - t1[2] * t2[3],
t1[1] * t2[5] - t1[3] * t2[3],
t1[2] * t2[5] - t1[3] * t2[4],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Par (
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2],
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[7] * t5[0] + t3[10] * t5[1] + t3[11] * t5[2] + t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[8] * t5[0] + t3[10] * t5[2] - t3[11] * t5[1] + t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[9] * t5[0] + t3[10] * t5[3] - t3[12] * t5[1] - t3[13] * t5[2],
 - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Par& t2 = par;
Rtc t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] + t1[3] * t2[6] + t1[4] * t2[3] + t1[5] * t2[7] + t1[6] * t2[8] + t1[8] * t2[4] + t1[9] * t2[5] + t1[11] * t2[9] - t1[14] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[7] + t1[4] * t2[4] - t1[5] * t2[6] + t1[7] * t2[8] - t1[8] * t2[3] + t1[10] * t2[5] + t1[12] * t2[9] + t1[14] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[3] * t2[8] + t1[4] * t2[5] - t1[6] * t2[6] - t1[7] * t2[7] - t1[9] * t2[3] - t1[10] * t2[4] + t1[13] * t2[9] - t1[14] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[9] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2] - t1[11] * t2[3] - t1[12] * t2[4] - t1[13] * t2[5],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[4] * t2[9] - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2] + t1[11] * t2[6] + t1[12] * t2[7] + t1[13] * t2[8],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[0] + t1[5] * t2[9] - t1[6] * t2[2] + t1[7] * t2[1] - t1[11] * t2[4] + t1[12] * t2[3] + t1[14] * t2[5] - t1[15] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] + t1[3] * t2[1] + t1[5] * t2[2] + t1[6] * t2[9] - t1[7] * t2[0] - t1[11] * t2[5] + t1[13] * t2[3] - t1[14] * t2[4] + t1[15] * t2[4],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] + t1[7] * t2[9] - t1[12] * t2[5] + t1[13] * t2[4] + t1[14] * t2[3] - t1[15] * t2[3],
t1[0] * t2[7] - t1[1] * t2[6] + t1[4] * t2[0] - t1[8] * t2[9] - t1[9] * t2[2] + t1[10] * t2[1] + t1[11] * t2[7] - t1[12] * t2[6] + t1[14] * t2[8] + t1[15] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] + t1[4] * t2[1] + t1[8] * t2[2] - t1[9] * t2[9] - t1[10] * t2[0] + t1[11] * t2[8] - t1[13] * t2[6] - t1[14] * t2[7] - t1[15] * t2[7],
t1[1] * t2[8] - t1[2] * t2[7] + t1[4] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] - t1[10] * t2[9] + t1[12] * t2[8] - t1[13] * t2[7] + t1[14] * t2[6] + t1[15] * t2[6],
t1[0] * t2[9] - t1[3] * t2[6] + t1[4] * t2[3] - t1[5] * t2[7] - t1[6] * t2[8] + t1[8] * t2[4] + t1[9] * t2[5] - t1[12] * t2[0] - t1[13] * t2[1] - t1[15] * t2[2],
t1[1] * t2[9] - t1[3] * t2[7] + t1[4] * t2[4] + t1[5] * t2[6] - t1[7] * t2[8] - t1[8] * t2[3] + t1[10] * t2[5] + t1[11] * t2[0] - t1[13] * t2[2] + t1[15] * t2[1],
t1[2] * t2[9] - t1[3] * t2[8] + t1[4] * t2[5] + t1[6] * t2[6] + t1[7] * t2[7] - t1[9] * t2[3] - t1[10] * t2[4] + t1[11] * t2[1] + t1[12] * t2[2] - t1[15] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[7] * t2[6] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3] + t1[15] * t2[9],
 - t1[5] * t2[8] + t1[6] * t2[7] - t1[7] * t2[6] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] + t1[14] * t2[9]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Par (
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11],
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[0] - t3[3] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] + t3[7] * t5[14] + t3[7] * t5[15] - t3[11] * t5[3] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[7] * t5[2] - t3[7] * t5[13] - t3[11] * t5[5] - t3[12] * t5[3] + t3[13] * t5[7] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[2] - t3[3] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] + t3[7] * t5[1] + t3[7] * t5[12] - t3[11] * t5[6] - t3[12] * t5[7] - t3[13] * t5[3] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[4] * t5[0] + t3[4] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[14] - t3[10] * t5[15] + t3[11] * t5[4] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[10] - t3[15] * t5[10],
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] - t3[4] * t5[1] + t3[4] * t5[12] + t3[8] * t5[0] - t3[8] * t5[11] - t3[9] * t5[14] + t3[9] * t5[15] - t3[10] * t5[2] + t3[10] * t5[13] + t3[11] * t5[8] + t3[12] * t5[4] - t3[13] * t5[10] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[4] * t5[2] + t3[4] * t5[13] + t3[8] * t5[14] - t3[8] * t5[15] + t3[9] * t5[0] - t3[9] * t5[11] + t3[10] * t5[1] - t3[10] * t5[12] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[4] - t3[14] * t5[8] - t3[15] * t5[8],
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] + t3[3] * t5[4] - t3[4] * t5[3] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[0] + t3[12] * t5[1] + t3[13] * t5[2] - t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Par& t2 = par;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] + t1[10] * t2[9],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[11] * t2[9] + t1[14] * t2[8] + t1[15] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[12] * t2[9] - t1[14] * t2[7] - t1[15] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[13] * t2[9] + t1[14] * t2[6] + t1[15] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[4] * t2[9] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5] - t1[14] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] + t1[5] * t2[9] - t1[6] * t2[2] - t1[10] * t2[4] + t1[11] * t2[3] - t1[13] * t2[5] + t1[14] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[9] - t1[10] * t2[5] + t1[12] * t2[3] + t1[13] * t2[4] - t1[14] * t2[0],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[7] * t2[9] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[8] - t1[15] * t2[2],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[7] * t2[0] - t1[8] * t2[9] - t1[9] * t2[2] + t1[10] * t2[7] - t1[11] * t2[6] + t1[13] * t2[8] + t1[15] * t2[1],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[1] + t1[8] * t2[2] - t1[9] * t2[9] + t1[10] * t2[8] - t1[12] * t2[6] - t1[13] * t2[7] - t1[15] * t2[0],
t1[0] * t2[9] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[1] * t2[9] - t1[4] * t2[7] + t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1] - t1[14] * t2[8] + t1[15] * t2[5],
t1[2] * t2[9] - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0] + t1[14] * t2[7] - t1[15] * t2[4],
t1[3] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0] - t1[14] * t2[6] + t1[15] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[3] + t1[14] * t2[9],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[8] - t1[12] * t2[7] + t1[13] * t2[6] - t1[15] * t2[9]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Par (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[15] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[15] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[15] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[15] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Par& t2 = par;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[8],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] - t1[7] * t2[7],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[7] * t2[6],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[4] * t2[9] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] + t1[5] * t2[9] - t1[6] * t2[2] + t1[7] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[9] - t1[7] * t2[0],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7],
t1[0] * t2[9] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8],
t1[1] * t2[9] - t1[4] * t2[7] + t1[5] * t2[6] - t1[7] * t2[8],
t1[2] * t2[9] - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[7],
t1[3] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] - t1[7] * t2[6],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] + t1[7] * t2[9],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Par (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[7] - t3[14] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[7] - t3[13] * t5[6] + t3[14] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[10] * t5[6] + t3[11] * t5[7] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[15] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[15] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[15] * t5[1],
t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[7]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Par& t2 = par;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[9],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[5] * t2[9],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[6] * t2[9],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[7] * t2[9],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] - t1[4] * t2[4] + t1[5] * t2[3] - t1[7] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] - t1[4] * t2[5] + t1[6] * t2[3] + t1[7] * t2[4],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[8] - t1[6] * t2[6] - t1[7] * t2[7],
t1[0] * t2[9] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[1] * t2[9] + t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[2] * t2[9] + t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[3] * t2[9] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] - t1[5] * t2[5] + t1[6] * t2[4] - t1[7] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[5] * t2[8] - t1[6] * t2[7] + t1[7] * t2[6]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Par (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[7] + t3[13] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[10] * t5[6] + t3[11] * t5[7] + t3[12] * t5[4] - t3[13] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[10] * t5[7] - t3[11] * t5[6] + t3[12] * t5[5] + t3[13] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[1] - t3[5] * t5[5] - t3[6] * t5[2] - t3[6] * t5[6] - t3[14] * t5[3] - t3[14] * t5[7],
t3[4] * t5[1] + t3[4] * t5[5] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[3] - t3[6] * t5[7] + t3[14] * t5[2] + t3[14] * t5[6],
t3[4] * t5[2] + t3[4] * t5[6] + t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[0] + t3[6] * t5[4] - t3[14] * t5[1] - t3[14] * t5[5],
t3[7] * t5[0] - t3[7] * t5[4] - t3[8] * t5[1] + t3[8] * t5[5] - t3[9] * t5[2] + t3[9] * t5[6] - t3[15] * t5[3] + t3[15] * t5[7],
t3[7] * t5[1] - t3[7] * t5[5] + t3[8] * t5[0] - t3[8] * t5[4] - t3[9] * t5[3] + t3[9] * t5[7] + t3[15] * t5[2] - t3[15] * t5[6],
t3[7] * t5[2] - t3[7] * t5[6] + t3[8] * t5[3] - t3[8] * t5[7] + t3[9] * t5[0] - t3[9] * t5[4] - t3[15] * t5[1] + t3[15] * t5[5],
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Par& t2 = par;
Tst t3 (
t1[1] * t2[6] + t1[2] * t2[7] + t1[3] * t2[8] + t1[4] * t2[9],
t1[0] * t2[0] + t1[1] * t2[7] - t1[2] * t2[6],
t1[0] * t2[1] + t1[1] * t2[8] - t1[3] * t2[6],
t1[0] * t2[2] + t1[2] * t2[8] - t1[3] * t2[7],
t1[0] * t2[3] + t1[1] * t2[9] - t1[2] * t2[0] - t1[3] * t2[1] - t1[4] * t2[3],
t1[0] * t2[4] + t1[1] * t2[0] + t1[2] * t2[9] - t1[3] * t2[2] - t1[4] * t2[4],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[9] - t1[4] * t2[5],
t1[0] * t2[6] + t1[4] * t2[6],
t1[0] * t2[7] + t1[4] * t2[7],
t1[0] * t2[8] + t1[4] * t2[8],
t1[0] * t2[9] - t1[1] * t2[6] - t1[2] * t2[7] - t1[3] * t2[8],
 - t1[1] * t2[7] + t1[2] * t2[6] + t1[4] * t2[0],
 - t1[1] * t2[8] + t1[3] * t2[6] + t1[4] * t2[1],
 - t1[2] * t2[8] + t1[3] * t2[7] + t1[4] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Par (
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1] + t3[11] * t5[4],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1] + t3[12] * t5[4],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2] + t3[13] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] + t3[4] * t5[4] - t3[10] * t5[1] - t3[11] * t5[2] - t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] + t3[5] * t5[4] - t3[10] * t5[2] + t3[11] * t5[1] - t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] + t3[6] * t5[4] - t3[10] * t5[3] + t3[12] * t5[1] + t3[13] * t5[2],
t3[7] * t5[0] - t3[7] * t5[4],
t3[8] * t5[0] - t3[8] * t5[4],
t3[9] * t5[0] - t3[9] * t5[4],
t3[0] * t5[4] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Par& t2 = par;
Tvt t3 (
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5] + t1[4] * t2[9],
t1[0] * t2[0] + t1[1] * t2[4] - t1[2] * t2[3],
t1[0] * t2[1] + t1[1] * t2[5] - t1[3] * t2[3],
t1[0] * t2[2] + t1[2] * t2[5] - t1[3] * t2[4],
t1[0] * t2[3] - t1[4] * t2[3],
t1[0] * t2[4] - t1[4] * t2[4],
t1[0] * t2[5] - t1[4] * t2[5],
t1[0] * t2[6] - t1[1] * t2[9] - t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6],
t1[0] * t2[7] + t1[1] * t2[0] - t1[2] * t2[9] - t1[3] * t2[2] + t1[4] * t2[7],
t1[0] * t2[8] + t1[1] * t2[1] + t1[2] * t2[2] - t1[3] * t2[9] + t1[4] * t2[8],
t1[0] * t2[9] + t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[1] * t2[4] - t1[2] * t2[3] + t1[4] * t2[0],
t1[1] * t2[5] - t1[3] * t2[3] + t1[4] * t2[1],
t1[2] * t2[5] - t1[3] * t2[4] + t1[4] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Par (
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1] + t3[11] * t5[4],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1] + t3[12] * t5[4],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2] + t3[13] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[7] * t5[0] - t3[7] * t5[4] + t3[10] * t5[1] + t3[11] * t5[2] + t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[8] * t5[0] - t3[8] * t5[4] + t3[10] * t5[2] - t3[11] * t5[1] + t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[9] * t5[0] - t3[9] * t5[4] + t3[10] * t5[3] - t3[12] * t5[1] - t3[13] * t5[2],
t3[0] * t5[4] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Trt& trt) {					
					
const Trt& t1 = trt;
const Par& t2 = par;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] + t1[10] * t2[9],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[11] * t2[9],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[12] * t2[9],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[13] * t2[9],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[4] * t2[9] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] + t1[5] * t2[9] - t1[6] * t2[2] - t1[10] * t2[4] + t1[11] * t2[3] - t1[13] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[9] - t1[10] * t2[5] + t1[12] * t2[3] + t1[13] * t2[4],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[7] * t2[9] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[8],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[7] * t2[0] - t1[8] * t2[9] - t1[9] * t2[2] + t1[10] * t2[7] - t1[11] * t2[6] + t1[13] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[1] + t1[8] * t2[2] - t1[9] * t2[9] + t1[10] * t2[8] - t1[12] * t2[6] - t1[13] * t2[7],
t1[0] * t2[9] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[1] * t2[9] - t1[4] * t2[7] + t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
t1[2] * t2[9] - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[3] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[8] - t1[12] * t2[7] + t1[13] * t2[6]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Par (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Par& t2 = par;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8] + t1[7] * t2[9],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[8] * t2[9] + t1[11] * t2[8],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] + t1[9] * t2[9] - t1[11] * t2[7],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[10] * t2[9] + t1[11] * t2[6],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[4] * t2[9] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[3] - t1[8] * t2[4] - t1[9] * t2[5] - t1[11] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] + t1[5] * t2[9] - t1[6] * t2[2] - t1[7] * t2[4] + t1[8] * t2[3] - t1[10] * t2[5] + t1[11] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[9] - t1[7] * t2[5] + t1[9] * t2[3] + t1[10] * t2[4] - t1[11] * t2[0],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] + t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[8],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[7] * t2[7] - t1[8] * t2[6] + t1[10] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[8] - t1[9] * t2[6] - t1[10] * t2[7],
t1[0] * t2[9] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[1] * t2[9] - t1[4] * t2[7] + t1[5] * t2[6] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1] - t1[11] * t2[8],
t1[2] * t2[9] - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0] + t1[11] * t2[7],
t1[3] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] - t1[11] * t2[6],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[8] * t2[5] + t1[9] * t2[4] - t1[10] * t2[3] + t1[11] * t2[9],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[8] * t2[8] - t1[9] * t2[7] + t1[10] * t2[6]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Par (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[11] - t3[14] * t5[3] - t3[14] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[11] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[8],
t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[15] * t5[3] + t3[15] * t5[10],
t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[15] * t5[2] - t3[15] * t5[9],
t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] - t3[15] * t5[1] + t3[15] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Tst& tst) {					
					
const Tst& t1 = tst;
const Par& t2 = par;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] + t1[10] * t2[9],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[11] * t2[9] + t1[14] * t2[8],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[12] * t2[9] - t1[14] * t2[7],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[13] * t2[9] + t1[14] * t2[6],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[4] * t2[9] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5] - t1[14] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] + t1[5] * t2[9] - t1[6] * t2[2] - t1[10] * t2[4] + t1[11] * t2[3] - t1[13] * t2[5] + t1[14] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[9] - t1[10] * t2[5] + t1[12] * t2[3] + t1[13] * t2[4] - t1[14] * t2[0],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[7] * t2[9] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[8],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[7] * t2[0] - t1[8] * t2[9] - t1[9] * t2[2] + t1[10] * t2[7] - t1[11] * t2[6] + t1[13] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[1] + t1[8] * t2[2] - t1[9] * t2[9] + t1[10] * t2[8] - t1[12] * t2[6] - t1[13] * t2[7],
t1[0] * t2[9] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[1] * t2[9] - t1[4] * t2[7] + t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1] - t1[14] * t2[8],
t1[2] * t2[9] - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0] + t1[14] * t2[7],
t1[3] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0] - t1[14] * t2[6],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[3] + t1[14] * t2[9],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[8] - t1[12] * t2[7] + t1[13] * t2[6]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Par (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Par& t2 = par;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] + t1[10] * t2[9],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[11] * t2[9] + t1[14] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[12] * t2[9] - t1[14] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[13] * t2[9] + t1[14] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[4] * t2[9] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] + t1[5] * t2[9] - t1[6] * t2[2] - t1[10] * t2[4] + t1[11] * t2[3] - t1[13] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[9] - t1[10] * t2[5] + t1[12] * t2[3] + t1[13] * t2[4],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[7] * t2[9] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[8] - t1[14] * t2[2],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[7] * t2[0] - t1[8] * t2[9] - t1[9] * t2[2] + t1[10] * t2[7] - t1[11] * t2[6] + t1[13] * t2[8] + t1[14] * t2[1],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[1] + t1[8] * t2[2] - t1[9] * t2[9] + t1[10] * t2[8] - t1[12] * t2[6] - t1[13] * t2[7] - t1[14] * t2[0],
t1[0] * t2[9] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[1] * t2[9] - t1[4] * t2[7] + t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[5],
t1[2] * t2[9] - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0] - t1[14] * t2[4],
t1[3] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0] + t1[14] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[8] - t1[12] * t2[7] + t1[13] * t2[6] - t1[14] * t2[9]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Par (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[14] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[14] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[14] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[14] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[14]
);

}
		
	
	  	
template<>
inline Par sp (const Par& par, const Bst& bst) {					
					
const Bst& t1 = bst;
const Par& t2 = par;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] + t1[10] * t2[9],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[4] * t2[9] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] + t1[5] * t2[9] - t1[6] * t2[2] - t1[10] * t2[4],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[9] - t1[10] * t2[5],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[7] * t2[9] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[6],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[7] * t2[0] - t1[8] * t2[9] - t1[9] * t2[2] + t1[10] * t2[7],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[1] + t1[8] * t2[2] - t1[9] * t2[9] + t1[10] * t2[8],
t1[0] * t2[9] - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[1] * t2[9] - t1[4] * t2[7] + t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0],
t1[2] * t2[9] - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1],
t1[3] * t2[9] - t1[5] * t2[8] + t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Par (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[11] * t5[10] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[12] * t5[10] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] - t3[9] * t5[2] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1],
t3[0] * t5[10] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Par re (const Par& par, const Vec& vec) {					
					
const Vec& t1 = vec;
const Par& t2 = par;
Par t3 = involute( t2);
Pnt_Par t4 (
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[0] * t3[3] + t1[1] * t3[4] + t1[2] * t3[5],
t1[0] * t3[6] + t1[1] * t3[7] + t1[2] * t3[8],
t1[0] * t3[4] - t1[1] * t3[3],
t1[0] * t3[5] - t1[2] * t3[3],
t1[1] * t3[5] - t1[2] * t3[4],
t1[0] * t3[7] - t1[1] * t3[6],
t1[0] * t3[8] - t1[2] * t3[6],
t1[1] * t3[8] - t1[2] * t3[7],
t1[0] * t3[9],
t1[1] * t3[9],
t1[2] * t3[9],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Par (
t4[0] * t6[1] - t4[1] * t6[0] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[14] * t6[0],
 - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2],
 - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1],
 - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2],
 - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2],
 - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1],
t4[11] * t6[0] + t4[12] * t6[1] + t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Par re (const Par& par, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Par& t2 = par;
Par t3 = involute( t2);
Pnt_Par t4 (
 - t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[3],
t1[0] * t3[0] - t1[2] * t3[2] + t1[3] * t3[4],
t1[0] * t3[1] + t1[1] * t3[2] + t1[3] * t3[5],
t1[0] * t3[3] + t1[1] * t3[4] + t1[2] * t3[5],
t1[0] * t3[6] + t1[1] * t3[7] + t1[2] * t3[8] - t1[3] * t3[9],
t1[0] * t3[4] - t1[1] * t3[3],
t1[0] * t3[5] - t1[2] * t3[3],
t1[1] * t3[5] - t1[2] * t3[4],
t1[0] * t3[7] - t1[1] * t3[6] + t1[3] * t3[0],
t1[0] * t3[8] - t1[2] * t3[6] + t1[3] * t3[1],
t1[1] * t3[8] - t1[2] * t3[7] + t1[3] * t3[2],
t1[0] * t3[9] + t1[3] * t3[3],
t1[1] * t3[9] + t1[3] * t3[4],
t1[2] * t3[9] + t1[3] * t3[5],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Par (
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[3] + t4[14] * t6[0],
 - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2],
 - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1],
t4[0] * t6[3] - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] + t4[11] * t6[3],
t4[1] * t6[3] - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2] + t4[12] * t6[3],
t4[2] * t6[3] - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1] + t4[13] * t6[3],
t4[3] * t6[3] + t4[11] * t6[0] + t4[12] * t6[1] + t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Par re (const Par& par, const Pln& pln) {					
					
const Pln& t1 = pln;
const Par& t2 = par;
Par t3 = involute( t2);
Pnt_Cir t4 (
t1[0] * t3[9] + t1[3] * t3[5],
t1[1] * t3[9] - t1[3] * t3[4],
t1[2] * t3[9] + t1[3] * t3[3],
 - t1[0] * t3[4] - t1[1] * t3[5],
t1[0] * t3[3] - t1[2] * t3[5],
t1[1] * t3[3] + t1[2] * t3[4],
t1[0] * t3[7] + t1[1] * t3[8] - t1[3] * t3[2],
 - t1[0] * t3[6] + t1[2] * t3[8] + t1[3] * t3[1],
 - t1[1] * t3[6] - t1[2] * t3[7] - t1[3] * t3[0],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[5],
t1[0] * t3[2] - t1[2] * t3[0] - t1[3] * t3[4],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[3] * t3[3],
 - t1[0] * t3[5] + t1[1] * t3[4] - t1[2] * t3[3],
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6] - t1[3] * t3[9]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Par (
t4[5] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1],
 - t4[4] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0],
t4[3] * t6[3] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[13] * t6[2],
t4[3] * t6[0] - t4[5] * t6[2] + t4[13] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[13] * t6[0],
 - t4[2] * t6[3] + t4[7] * t6[0] + t4[8] * t6[1] - t4[12] * t6[3] + t4[14] * t6[2],
t4[1] * t6[3] - t4[6] * t6[0] + t4[8] * t6[2] + t4[11] * t6[3] - t4[14] * t6[1],
 - t4[0] * t6[3] - t4[6] * t6[1] - t4[7] * t6[2] - t4[10] * t6[3] + t4[14] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[13] * t6[3]
);

}
		
	
	  	
template<>
inline Par re (const Par& par, const Dll& dll) {					
					
const Dll& t1 = dll;
const Par& t2 = par;
Par t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[3] + t1[4] * t3[4] + t1[5] * t3[5],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[4] - t1[4] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] + t1[3] * t3[5] - t1[5] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[4] * t3[5] - t1[5] * t3[4],
t1[0] * t3[4] + t1[1] * t3[5],
 - t1[0] * t3[3] + t1[2] * t3[5],
 - t1[1] * t3[3] - t1[2] * t3[4],
t1[0] * t3[7] + t1[1] * t3[8] - t1[3] * t3[9] - t1[4] * t3[0] - t1[5] * t3[1],
 - t1[0] * t3[6] + t1[2] * t3[8] + t1[3] * t3[0] - t1[4] * t3[9] - t1[5] * t3[2],
 - t1[1] * t3[6] - t1[2] * t3[7] + t1[3] * t3[1] + t1[4] * t3[2] - t1[5] * t3[9],
t1[3] * t3[3] + t1[4] * t3[4] + t1[5] * t3[5],
t1[0] * t3[9] + t1[3] * t3[4] - t1[4] * t3[3],
t1[1] * t3[9] + t1[3] * t3[5] - t1[5] * t3[3],
t1[2] * t3[9] + t1[4] * t3[5] - t1[5] * t3[4],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3],
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6] + t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Par (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[4] - t4[5] * t6[3] + t4[14] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[5] - t4[6] * t6[3] - t4[14] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[5] - t4[6] * t6[4] + t4[14] * t6[3],
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[8] * t6[0] - t4[9] * t6[1] + t4[10] * t6[3] + t4[11] * t6[4] + t4[12] * t6[5] - t4[15] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[7] * t6[0] - t4[9] * t6[2] + t4[10] * t6[4] - t4[11] * t6[3] + t4[13] * t6[5] + t4[15] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[7] * t6[1] + t4[8] * t6[2] + t4[10] * t6[5] - t4[12] * t6[3] - t4[13] * t6[4] - t4[15] * t6[0],
 - t4[4] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Par re (const Par& par, const Lin& lin) {					
					
const Lin& t1 = lin;
const Par& t2 = par;
Par t3 = involute( t2);
Rtc t4 (
t1[0] * t3[4] + t1[1] * t3[5] + t1[3] * t3[9],
 - t1[0] * t3[3] + t1[2] * t3[5] + t1[4] * t3[9],
 - t1[1] * t3[3] - t1[2] * t3[4] + t1[5] * t3[9],
 - t1[3] * t3[3] - t1[4] * t3[4] - t1[5] * t3[5],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[6] + t1[4] * t3[7] + t1[5] * t3[8],
 - t1[3] * t3[4] + t1[4] * t3[3],
 - t1[3] * t3[5] + t1[5] * t3[3],
 - t1[4] * t3[5] + t1[5] * t3[4],
 - t1[0] * t3[9] - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[7] - t1[4] * t3[6],
t1[0] * t3[2] - t1[1] * t3[9] - t1[2] * t3[0] + t1[3] * t3[8] - t1[5] * t3[6],
 - t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[9] + t1[4] * t3[8] - t1[5] * t3[7],
t1[0] * t3[4] + t1[1] * t3[5] - t1[4] * t3[0] - t1[5] * t3[1],
 - t1[0] * t3[3] + t1[2] * t3[5] + t1[3] * t3[0] - t1[5] * t3[2],
 - t1[1] * t3[3] - t1[2] * t3[4] + t1[3] * t3[1] + t1[4] * t3[2],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3] + t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Par (
 - t4[3] * t6[0] + t4[6] * t6[2] - t4[7] * t6[1] + t4[11] * t6[4] - t4[12] * t6[3] + t4[15] * t6[5],
 - t4[3] * t6[1] - t4[5] * t6[2] + t4[7] * t6[0] + t4[11] * t6[5] - t4[13] * t6[3] - t4[15] * t6[4],
 - t4[3] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] + t4[12] * t6[5] - t4[13] * t6[4] + t4[15] * t6[3],
 - t4[3] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5],
 - t4[3] * t6[4] + t4[5] * t6[3] - t4[7] * t6[5],
 - t4[3] * t6[5] + t4[6] * t6[3] + t4[7] * t6[4],
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[4] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] - t4[12] * t6[0] - t4[13] * t6[1] - t4[14] * t6[2] - t4[15] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[4] * t6[4] - t4[8] * t6[3] + t4[10] * t6[5] + t4[11] * t6[0] - t4[13] * t6[2] + t4[14] * t6[1] + t4[15] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[4] * t6[5] - t4[9] * t6[3] - t4[10] * t6[4] + t4[11] * t6[1] + t4[12] * t6[2] - t4[14] * t6[0] - t4[15] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[2]
);

}
		
	
	  	
template<>
inline Par re (const Par& par, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Par& t2 = par;
Par t3 = involute( t2);
Pnt_Par t4 (
 - t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[6] + t1[4] * t3[3],
t1[0] * t3[0] - t1[2] * t3[2] + t1[3] * t3[7] + t1[4] * t3[4],
t1[0] * t3[1] + t1[1] * t3[2] + t1[3] * t3[8] + t1[4] * t3[5],
t1[0] * t3[3] + t1[1] * t3[4] + t1[2] * t3[5] + t1[3] * t3[9],
t1[0] * t3[6] + t1[1] * t3[7] + t1[2] * t3[8] - t1[4] * t3[9],
t1[0] * t3[4] - t1[1] * t3[3] + t1[3] * t3[0],
t1[0] * t3[5] - t1[2] * t3[3] + t1[3] * t3[1],
t1[1] * t3[5] - t1[2] * t3[4] + t1[3] * t3[2],
t1[0] * t3[7] - t1[1] * t3[6] + t1[4] * t3[0],
t1[0] * t3[8] - t1[2] * t3[6] + t1[4] * t3[1],
t1[1] * t3[8] - t1[2] * t3[7] + t1[4] * t3[2],
t1[0] * t3[9] - t1[3] * t3[6] + t1[4] * t3[3],
t1[1] * t3[9] - t1[3] * t3[7] + t1[4] * t3[4],
t1[2] * t3[9] - t1[3] * t3[8] + t1[4] * t3[5],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Par (
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[4] - t4[8] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[4] - t4[9] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[4] - t4[10] * t6[3] + t4[14] * t6[0],
t4[0] * t6[3] - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] - t4[11] * t6[3],
t4[1] * t6[3] - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2] - t4[12] * t6[3],
t4[2] * t6[3] - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1] - t4[13] * t6[3],
t4[0] * t6[4] - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] + t4[11] * t6[4],
t4[1] * t6[4] - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2] + t4[12] * t6[4],
t4[2] * t6[4] - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1] + t4[13] * t6[4],
t4[3] * t6[4] - t4[4] * t6[3] + t4[11] * t6[0] + t4[12] * t6[1] + t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Par re (const Par& par, const Cir& cir) {					
					
const Cir& t1 = cir;
const Par& t2 = par;
Par t3 = involute( t2);
Rtc t4 (
t1[0] * t3[7] + t1[1] * t3[8] + t1[3] * t3[4] + t1[4] * t3[5] + t1[6] * t3[9] - t1[9] * t3[2],
 - t1[0] * t3[6] + t1[2] * t3[8] - t1[3] * t3[3] + t1[5] * t3[5] + t1[7] * t3[9] + t1[9] * t3[1],
 - t1[1] * t3[6] - t1[2] * t3[7] - t1[4] * t3[3] - t1[5] * t3[4] + t1[8] * t3[9] - t1[9] * t3[0],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] - t1[6] * t3[3] - t1[7] * t3[4] - t1[8] * t3[5],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2] + t1[6] * t3[6] + t1[7] * t3[7] + t1[8] * t3[8],
t1[0] * t3[9] - t1[1] * t3[2] + t1[2] * t3[1] - t1[6] * t3[4] + t1[7] * t3[3] + t1[9] * t3[5],
t1[0] * t3[2] + t1[1] * t3[9] - t1[2] * t3[0] - t1[6] * t3[5] + t1[8] * t3[3] - t1[9] * t3[4],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[2] * t3[9] - t1[7] * t3[5] + t1[8] * t3[4] + t1[9] * t3[3],
 - t1[3] * t3[9] - t1[4] * t3[2] + t1[5] * t3[1] + t1[6] * t3[7] - t1[7] * t3[6] + t1[9] * t3[8],
t1[3] * t3[2] - t1[4] * t3[9] - t1[5] * t3[0] + t1[6] * t3[8] - t1[8] * t3[6] - t1[9] * t3[7],
 - t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[9] + t1[7] * t3[8] - t1[8] * t3[7] + t1[9] * t3[6],
 - t1[0] * t3[7] - t1[1] * t3[8] + t1[3] * t3[4] + t1[4] * t3[5] - t1[7] * t3[0] - t1[8] * t3[1],
t1[0] * t3[6] - t1[2] * t3[8] - t1[3] * t3[3] + t1[5] * t3[5] + t1[6] * t3[0] - t1[8] * t3[2],
t1[1] * t3[6] + t1[2] * t3[7] - t1[4] * t3[3] - t1[5] * t3[4] + t1[6] * t3[1] + t1[7] * t3[2],
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6] + t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[3],
 - t1[0] * t3[8] + t1[1] * t3[7] - t1[2] * t3[6] + t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[3] + t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0] + t1[9] * t3[9]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Par (
t4[2] * t6[9] - t4[3] * t6[3] - t4[4] * t6[0] + t4[6] * t6[5] - t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[15] * t6[8],
 - t4[1] * t6[9] - t4[3] * t6[4] - t4[4] * t6[1] - t4[5] * t6[5] + t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[15] * t6[7],
t4[0] * t6[9] - t4[3] * t6[5] - t4[4] * t6[2] + t4[5] * t6[4] - t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[12] * t6[8] - t4[13] * t6[7] + t4[15] * t6[6],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[9] + t4[12] * t6[0] + t4[13] * t6[1] - t4[14] * t6[2] + t4[15] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[3] * t6[7] + t4[5] * t6[6] - t4[6] * t6[9] - t4[7] * t6[8] - t4[11] * t6[0] + t4[13] * t6[2] + t4[14] * t6[1] - t4[15] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[8] + t4[5] * t6[9] + t4[6] * t6[6] + t4[7] * t6[7] - t4[11] * t6[1] - t4[12] * t6[2] - t4[14] * t6[0] + t4[15] * t6[0],
 - t4[1] * t6[3] - t4[2] * t6[4] + t4[4] * t6[6] + t4[8] * t6[7] + t4[9] * t6[8] + t4[10] * t6[9] - t4[12] * t6[3] - t4[13] * t6[4] - t4[14] * t6[5] - t4[15] * t6[5],
t4[0] * t6[3] - t4[2] * t6[5] + t4[4] * t6[7] - t4[8] * t6[6] - t4[9] * t6[9] + t4[10] * t6[8] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[4] + t4[15] * t6[4],
t4[0] * t6[4] + t4[1] * t6[5] + t4[4] * t6[8] + t4[8] * t6[9] - t4[9] * t6[6] - t4[10] * t6[7] + t4[11] * t6[4] + t4[12] * t6[5] - t4[14] * t6[3] - t4[15] * t6[3],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[5] * t6[3] - t4[6] * t6[4] - t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] - t4[15] * t6[9]
);

}
		
	
	  	
template<>
inline Par re (const Par& par, const Sph& sph) {					
					
const Sph& t1 = sph;
const Par& t2 = par;
Par t3 = involute( t2);
Pnt_Cir t4 (
t1[0] * t3[9] + t1[3] * t3[8] + t1[4] * t3[5],
t1[1] * t3[9] - t1[3] * t3[7] - t1[4] * t3[4],
t1[2] * t3[9] + t1[3] * t3[6] + t1[4] * t3[3],
 - t1[0] * t3[4] - t1[1] * t3[5] - t1[3] * t3[2],
t1[0] * t3[3] - t1[2] * t3[5] + t1[3] * t3[1],
t1[1] * t3[3] + t1[2] * t3[4] - t1[3] * t3[0],
t1[0] * t3[7] + t1[1] * t3[8] - t1[4] * t3[2],
 - t1[0] * t3[6] + t1[2] * t3[8] + t1[4] * t3[1],
 - t1[1] * t3[6] - t1[2] * t3[7] - t1[4] * t3[0],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1] - t1[3] * t3[8] + t1[4] * t3[5],
t1[0] * t3[2] - t1[2] * t3[0] + t1[3] * t3[7] - t1[4] * t3[4],
 - t1[0] * t3[1] + t1[1] * t3[0] - t1[3] * t3[6] + t1[4] * t3[3],
 - t1[0] * t3[5] + t1[1] * t3[4] - t1[2] * t3[3] + t1[3] * t3[9],
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6] - t1[4] * t3[9]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Par (
t4[5] * t6[4] + t4[8] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1],
 - t4[4] * t6[4] - t4[7] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0],
t4[3] * t6[4] + t4[6] * t6[3] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0],
 - t4[2] * t6[3] - t4[4] * t6[0] - t4[5] * t6[1] + t4[12] * t6[3] - t4[13] * t6[2],
t4[1] * t6[3] + t4[3] * t6[0] - t4[5] * t6[2] - t4[11] * t6[3] + t4[13] * t6[1],
 - t4[0] * t6[3] + t4[3] * t6[1] + t4[4] * t6[2] + t4[10] * t6[3] - t4[13] * t6[0],
 - t4[2] * t6[4] + t4[7] * t6[0] + t4[8] * t6[1] - t4[12] * t6[4] + t4[14] * t6[2],
t4[1] * t6[4] - t4[6] * t6[0] + t4[8] * t6[2] + t4[11] * t6[4] - t4[14] * t6[1],
 - t4[0] * t6[4] - t4[6] * t6[1] - t4[7] * t6[2] - t4[10] * t6[4] + t4[14] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[13] * t6[4] - t4[14] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	