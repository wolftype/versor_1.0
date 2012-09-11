		#ifndef STA_H_INCLUDED
		#define STA_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Sta gp (const Sta& a, const Sca& b) { 
	return Sta (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[7] * b[0],
a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Sca*)(&b));
}			
		 
inline Ori_Sta gp (const Sta& a, const Ori& b) { 
	return Ori_Sta (
 - a[6] * b[0],
 - a[7] * b[0],
 - a[8] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[6] * b[0],
 - a[7] * b[0],
 - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Ori*)(&b));
}			
		 
inline Inf_Sta gp (const Sta& a, const Inf& b) { 
	return Inf_Sta (
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Inf*)(&b));
}			
		 
inline Mnk_Sta gp (const Sta& a, const Mnk& b) { 
	return Mnk_Sta (
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
		 
		
template<> inline MVBase gp_gen<Sta, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Sta gp (const Sta& a, const Hyp& b) { 
	return Hyp_Sta (
 - a[3] * b[1] - a[6] * b[0],
 - a[4] * b[1] - a[7] * b[0],
 - a[5] * b[1] - a[8] * b[0],
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
		 
		
template<> inline MVBase gp_gen<Sta, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Hyp*)(&b));
}			
		 
inline Pss_Sta gp (const Sta& a, const Pss& b) { 
	return Pss_Sta (
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Pss*)(&b));
}			
		 
inline Pnt_Par gp (const Sta& a, const Pnt& b) { 
	return Pnt_Par (
a[0] * b[1] + a[1] * b[2] - a[3] * b[4] - a[6] * b[3],
 - a[0] * b[0] + a[2] * b[2] - a[4] * b[4] - a[7] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[5] * b[4] - a[8] * b[3],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[4] - a[6] * b[1] + a[7] * b[0],
a[1] * b[4] - a[6] * b[2] + a[8] * b[0],
a[2] * b[4] - a[7] * b[2] + a[8] * b[1],
a[3] * b[4] - a[6] * b[3],
a[4] * b[4] - a[7] * b[3],
a[5] * b[4] - a[8] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Pnt*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Par& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[7] - a[4] * b[6] + a[6] * b[4] - a[7] * b[3],
a[0] * b[2] - a[2] * b[0] + a[3] * b[8] - a[5] * b[6] + a[6] * b[5] - a[8] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[8] - a[5] * b[7] + a[7] * b[5] - a[8] * b[4],
a[0] * b[4] + a[1] * b[5] + a[3] * b[9] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] + a[4] * b[9] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2] + a[5] * b[9],
a[0] * b[7] + a[1] * b[8] - a[6] * b[9] - a[7] * b[0] - a[8] * b[1],
 - a[0] * b[6] + a[2] * b[8] + a[6] * b[0] - a[7] * b[9] - a[8] * b[2],
 - a[1] * b[6] - a[2] * b[7] + a[6] * b[1] + a[7] * b[2] - a[8] * b[9],
 - a[3] * b[6] - a[4] * b[7] - a[5] * b[8] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
a[0] * b[9] - a[3] * b[7] + a[4] * b[6] + a[6] * b[4] - a[7] * b[3],
a[1] * b[9] - a[3] * b[8] + a[5] * b[6] + a[6] * b[5] - a[8] * b[3],
a[2] * b[9] - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Par*)(&b));
}			
		 
inline Rtc gp (const Sta& a, const Cir& b) { 
	return Rtc (
 - a[2] * b[9] + a[4] * b[3] + a[5] * b[4] + a[7] * b[0] + a[8] * b[1],
a[1] * b[9] - a[3] * b[3] + a[5] * b[5] - a[6] * b[0] + a[8] * b[2],
 - a[0] * b[9] - a[3] * b[4] - a[4] * b[5] - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[6] - a[4] * b[7] - a[5] * b[8],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5] + a[6] * b[6] + a[7] * b[7] + a[8] * b[8],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[7] + a[4] * b[6] - a[5] * b[9],
a[0] * b[2] - a[2] * b[0] - a[3] * b[8] + a[4] * b[9] + a[5] * b[6],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[9] - a[4] * b[8] + a[5] * b[7],
 - a[1] * b[5] + a[2] * b[4] + a[6] * b[7] - a[7] * b[6] - a[8] * b[9],
a[0] * b[5] - a[2] * b[3] + a[6] * b[8] + a[7] * b[9] - a[8] * b[6],
 - a[0] * b[4] + a[1] * b[3] - a[6] * b[9] + a[7] * b[8] - a[8] * b[7],
a[0] * b[7] + a[1] * b[8] - a[4] * b[3] - a[5] * b[4] + a[7] * b[0] + a[8] * b[1],
 - a[0] * b[6] + a[2] * b[8] + a[3] * b[3] - a[5] * b[5] - a[6] * b[0] + a[8] * b[2],
 - a[1] * b[6] - a[2] * b[7] + a[3] * b[4] + a[4] * b[5] - a[6] * b[1] - a[7] * b[2],
 - a[3] * b[5] + a[4] * b[4] - a[5] * b[3] - a[6] * b[2] + a[7] * b[1] - a[8] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3] - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt_Cir gp (const Sta& a, const Sph& b) { 
	return Pnt_Cir (
a[5] * b[4] + a[8] * b[3],
 - a[4] * b[4] - a[7] * b[3],
a[3] * b[4] + a[6] * b[3],
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
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Sph*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Sta& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[7] - a[4] * b[6] + a[6] * b[4] - a[7] * b[3],
a[0] * b[2] - a[2] * b[0] + a[3] * b[8] - a[5] * b[6] + a[6] * b[5] - a[8] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[8] - a[5] * b[7] + a[7] * b[5] - a[8] * b[4],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2],
a[0] * b[7] + a[1] * b[8] - a[7] * b[0] - a[8] * b[1],
 - a[0] * b[6] + a[2] * b[8] + a[6] * b[0] - a[8] * b[2],
 - a[1] * b[6] - a[2] * b[7] + a[6] * b[1] + a[7] * b[2],
 - a[3] * b[6] - a[4] * b[7] - a[5] * b[8] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
 - a[3] * b[7] + a[4] * b[6] + a[6] * b[4] - a[7] * b[3],
 - a[3] * b[8] + a[5] * b[6] + a[6] * b[5] - a[8] * b[3],
 - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Sta*)(&b));
}			
		 
inline Mtd gp (const Sta& a, const Drv& b) { 
	return Mtd (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Drv*)(&b));
}			
		 
inline Par_Drb gp (const Sta& a, const Drb& b) { 
	return Par_Drb (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Drb*)(&b));
}			
		 
inline Inf_Dal gp (const Sta& a, const Drt& b) { 
	return Inf_Dal (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Drt*)(&b));
}			
		 
inline Rvd gp (const Sta& a, const Tnv& b) { 
	return Rvd (
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
a[6] * b[1] - a[7] * b[0],
a[6] * b[2] - a[8] * b[0],
a[7] * b[2] - a[8] * b[1],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
a[6] * b[1] - a[7] * b[0],
a[6] * b[2] - a[8] * b[0],
a[7] * b[2] - a[8] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Tnv*)(&b));
}			
		 
inline Par_Tnb gp (const Sta& a, const Tnb& b) { 
	return Par_Tnb (
a[7] * b[0] + a[8] * b[1],
 - a[6] * b[0] + a[8] * b[2],
 - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[7] * b[0] + a[8] * b[1],
 - a[6] * b[0] + a[8] * b[2],
 - a[6] * b[1] - a[7] * b[2],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori_Lin gp (const Sta& a, const Tnt& b) { 
	return Ori_Lin (
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Tnt*)(&b));
}			
		 
inline Rtc gp (const Sta& a, const Lin& b) { 
	return Rtc (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
 - a[3] * b[4] + a[4] * b[3],
 - a[3] * b[5] + a[5] * b[3],
 - a[4] * b[5] + a[5] * b[4],
 - a[1] * b[2] + a[2] * b[1] + a[6] * b[4] - a[7] * b[3],
a[0] * b[2] - a[2] * b[0] + a[6] * b[5] - a[8] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[7] * b[5] - a[8] * b[4],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Lin*)(&b));
}			
		 
inline Pnt_Cir gp (const Sta& a, const Pln& b) { 
	return Pnt_Cir (
a[5] * b[3],
 - a[4] * b[3],
a[3] * b[3],
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
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Pln*)(&b));
}			
		 
inline Tvt gp (const Sta& a, const Flp& b) { 
	return Tvt (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
a[3] * b[3],
a[4] * b[3],
a[5] * b[3],
a[0] * b[1] + a[1] * b[2] - a[6] * b[3],
 - a[0] * b[0] + a[2] * b[2] - a[7] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[8] * b[3],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Flp*)(&b));
}			
		 
inline Par_Dfp gp (const Sta& a, const Dfp& b) { 
	return Par_Dfp (
 - a[2] * b[3] + a[4] * b[0] + a[5] * b[1],
a[1] * b[3] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[3] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[5] * b[3],
a[4] * b[3],
 - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1] - a[8] * b[3],
a[0] * b[2] - a[2] * b[0] + a[7] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[6] * b[3],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Dfp*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Dll& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[4] - a[4] * b[3],
a[0] * b[2] - a[2] * b[0] + a[3] * b[5] - a[5] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[5] - a[5] * b[4],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
a[0] * b[4] + a[1] * b[5] - a[7] * b[0] - a[8] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[6] * b[0] - a[8] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[6] * b[1] + a[7] * b[2],
 - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[3] * b[4] + a[4] * b[3],
 - a[3] * b[5] + a[5] * b[3],
 - a[4] * b[5] + a[5] * b[4],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Dll*)(&b));
}			
		 
inline Pnt_Par gp (const Sta& a, const Dlp& b) { 
	return Pnt_Par (
a[0] * b[1] + a[1] * b[2] - a[3] * b[3],
 - a[0] * b[0] + a[2] * b[2] - a[4] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[5] * b[3],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[3] - a[6] * b[1] + a[7] * b[0],
a[1] * b[3] - a[6] * b[2] + a[8] * b[0],
a[2] * b[3] - a[7] * b[2] + a[8] * b[1],
a[3] * b[3],
a[4] * b[3],
a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Dlp*)(&b));
}			
		 
inline Sta_Vec gp (const Sta& a, const Vec& b) { 
	return Sta_Vec (
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
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Vec*)(&b));
}			
		 
inline Sta_Biv gp (const Sta& a, const Biv& b) { 
	return Sta_Biv (
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
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Biv*)(&b));
}			
		 
inline Sta_Tri gp (const Sta& a, const Tri& b) { 
	return Sta_Tri (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
 - a[8] * b[0],
a[7] * b[0],
 - a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Tri*)(&b));
}			
		 
inline Pnt_Par gp (const Sta& a, const Aff& b) { 
	return Pnt_Par (
a[0] * b[1] + a[1] * b[2] - a[6] * b[3],
 - a[0] * b[0] + a[2] * b[2] - a[7] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[8] * b[3],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
 - a[6] * b[1] + a[7] * b[0],
 - a[6] * b[2] + a[8] * b[0],
 - a[7] * b[2] + a[8] * b[1],
 - a[6] * b[3],
 - a[7] * b[3],
 - a[8] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Aff*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Afl& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
 - a[1] * b[2] + a[2] * b[1] + a[6] * b[4] - a[7] * b[3],
a[0] * b[2] - a[2] * b[0] + a[6] * b[5] - a[8] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[7] * b[5] - a[8] * b[4],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2],
 - a[7] * b[0] - a[8] * b[1],
a[6] * b[0] - a[8] * b[2],
a[6] * b[1] + a[7] * b[2],
a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
a[6] * b[4] - a[7] * b[3],
a[6] * b[5] - a[8] * b[3],
a[7] * b[5] - a[8] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Afl*)(&b));
}			
		 
inline Par_Afp gp (const Sta& a, const Afp& b) { 
	return Par_Afp (
 - a[2] * b[3] + a[7] * b[0] + a[8] * b[1],
a[1] * b[3] - a[6] * b[0] + a[8] * b[2],
 - a[0] * b[3] - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] + a[4] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[3],
 - a[8] * b[3],
a[7] * b[3],
 - a[6] * b[3],
a[7] * b[0] + a[8] * b[1],
 - a[6] * b[0] + a[8] * b[2],
 - a[6] * b[1] - a[7] * b[2],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Afp*)(&b));
}			
		 
inline Tst gp (const Sta& a, const Dap& b) { 
	return Tst (
a[6] * b[0] + a[7] * b[1] + a[8] * b[2],
a[6] * b[1] - a[7] * b[0],
a[6] * b[2] - a[8] * b[0],
a[7] * b[2] - a[8] * b[1],
a[0] * b[1] + a[1] * b[2] + a[3] * b[3],
 - a[0] * b[0] + a[2] * b[2] + a[4] * b[3],
 - a[1] * b[0] - a[2] * b[1] + a[5] * b[3],
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
		 
		
template<> inline MVBase gp_gen<Sta, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Dap*)(&b));
}			
		 
inline Pnt_Cir gp (const Sta& a, const Daf& b) { 
	return Pnt_Cir (
a[8] * b[3],
 - a[7] * b[3],
a[6] * b[3],
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
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Daf*)(&b));
}			
		 
inline Rtc gp (const Sta& a, const Dal& b) { 
	return Rtc (
a[7] * b[0] + a[8] * b[1],
 - a[6] * b[0] + a[8] * b[2],
 - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
a[6] * b[3] + a[7] * b[4] + a[8] * b[5],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[4] + a[4] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[5] + a[5] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[4] * b[5] + a[5] * b[4],
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
		 
		
template<> inline MVBase gp_gen<Sta, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Dal*)(&b));
}			
		 
inline Sta_Mnv gp (const Sta& a, const Mnv& b) { 
	return Sta_Mnv (
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
		 
		
template<> inline MVBase gp_gen<Sta, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Mnv*)(&b));
}			
		 
inline Sta_Biv gp (const Sta& a, const Rot& b) { 
	return Sta_Biv (
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
a[3] * b[3] - a[4] * b[2] + a[5] * b[1],
a[6] * b[3] - a[7] * b[2] + a[8] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Rot*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Mot& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4] + a[5] * b[7],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[4] * b[7] - a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[7] + a[4] * b[6] - a[5] * b[5],
a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7] + a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[6] * b[1] + a[7] * b[0] - a[8] * b[3],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5] + a[6] * b[2] + a[7] * b[3] + a[8] * b[0],
 - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
 - a[3] * b[5] + a[4] * b[4] - a[5] * b[7],
 - a[3] * b[6] + a[4] * b[7] + a[5] * b[4],
 - a[3] * b[7] - a[4] * b[6] + a[5] * b[5],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Mot*)(&b));
}			
		 
inline Hyp_Lin gp (const Sta& a, const Dil& b) { 
	return Hyp_Lin (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] + a[3] * b[1],
a[4] * b[0] + a[4] * b[1],
a[5] * b[0] + a[5] * b[1],
a[6] * b[0] - a[6] * b[1],
a[7] * b[0] - a[7] * b[1],
a[8] * b[0] - a[8] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Dil*)(&b));
}			
		 
inline Tst gp (const Sta& a, const Trv& b) { 
	return Tst (
a[6] * b[1] + a[7] * b[2] + a[8] * b[3],
a[0] * b[0] + a[6] * b[2] - a[7] * b[1],
a[1] * b[0] + a[6] * b[3] - a[8] * b[1],
a[2] * b[0] + a[7] * b[3] - a[8] * b[2],
a[0] * b[2] + a[1] * b[3] + a[3] * b[0],
 - a[0] * b[1] + a[2] * b[3] + a[4] * b[0],
 - a[1] * b[1] - a[2] * b[2] + a[5] * b[0],
a[6] * b[0],
a[7] * b[0],
a[8] * b[0],
a[6] * b[1] + a[7] * b[2] + a[8] * b[3],
a[6] * b[2] - a[7] * b[1],
a[6] * b[3] - a[8] * b[1],
a[7] * b[3] - a[8] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Trv*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Mtd& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4] + a[5] * b[11],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[4] * b[11] - a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[11] + a[4] * b[6] - a[5] * b[5],
a[3] * b[0] + a[3] * b[7] - a[4] * b[1] - a[4] * b[8] - a[5] * b[2] - a[5] * b[9],
a[3] * b[1] + a[3] * b[8] + a[4] * b[0] + a[4] * b[7] - a[5] * b[3] - a[5] * b[10],
a[3] * b[2] + a[3] * b[9] + a[4] * b[3] + a[4] * b[10] + a[5] * b[0] + a[5] * b[7],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] + a[6] * b[0] - a[6] * b[7] - a[7] * b[1] + a[7] * b[8] - a[8] * b[2] + a[8] * b[9],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[6] * b[1] - a[6] * b[8] + a[7] * b[0] - a[7] * b[7] - a[8] * b[3] + a[8] * b[10],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] + a[6] * b[2] - a[6] * b[9] + a[7] * b[3] - a[7] * b[10] + a[8] * b[0] - a[8] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9] - a[3] * b[5] + a[4] * b[4] - a[5] * b[11],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8] - a[3] * b[6] + a[4] * b[11] + a[5] * b[4],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7] - a[3] * b[11] - a[4] * b[6] + a[5] * b[5],
a[3] * b[3] + a[3] * b[10] - a[4] * b[2] - a[4] * b[9] + a[5] * b[1] + a[5] * b[8],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[6] * b[3] - a[6] * b[10] - a[7] * b[2] + a[7] * b[9] + a[8] * b[1] - a[8] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Mtd*)(&b));
}			
		 
inline Tvt gp (const Sta& a, const Trs& b) { 
	return Tvt (
a[3] * b[1] + a[4] * b[2] + a[5] * b[3],
a[0] * b[0] + a[3] * b[2] - a[4] * b[1],
a[1] * b[0] + a[3] * b[3] - a[5] * b[1],
a[2] * b[0] + a[4] * b[3] - a[5] * b[2],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[0] * b[2] + a[1] * b[3] + a[6] * b[0],
 - a[0] * b[1] + a[2] * b[3] + a[7] * b[0],
 - a[1] * b[1] - a[2] * b[2] + a[8] * b[0],
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3],
 - a[3] * b[2] + a[4] * b[1],
 - a[3] * b[3] + a[5] * b[1],
 - a[4] * b[3] + a[5] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Sta& a, const Rtc& b) { 
	return Rtc (
a[0] * b[1] + a[1] * b[2] - a[2] * b[14] - a[3] * b[4] + a[4] * b[8] + a[5] * b[9] - a[6] * b[3] + a[7] * b[5] + a[8] * b[6],
 - a[0] * b[0] + a[1] * b[14] + a[2] * b[2] - a[3] * b[8] - a[4] * b[4] + a[5] * b[10] - a[6] * b[5] - a[7] * b[3] + a[8] * b[7],
 - a[0] * b[14] - a[1] * b[0] - a[2] * b[1] - a[3] * b[9] - a[4] * b[10] - a[5] * b[4] - a[6] * b[6] - a[7] * b[7] - a[8] * b[3],
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7] - a[3] * b[0] - a[3] * b[11] - a[4] * b[1] - a[4] * b[12] - a[5] * b[2] - a[5] * b[13],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[6] * b[0] + a[6] * b[11] - a[7] * b[1] + a[7] * b[12] - a[8] * b[2] + a[8] * b[13],
a[0] * b[3] - a[1] * b[7] + a[2] * b[6] - a[3] * b[1] - a[3] * b[12] + a[4] * b[0] + a[4] * b[11] - a[5] * b[14] - a[5] * b[15],
a[0] * b[7] + a[1] * b[3] - a[2] * b[5] - a[3] * b[2] - a[3] * b[13] + a[4] * b[14] + a[4] * b[15] + a[5] * b[0] + a[5] * b[11],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[3] - a[3] * b[14] - a[3] * b[15] - a[4] * b[2] - a[4] * b[13] + a[5] * b[1] + a[5] * b[12],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9] - a[6] * b[1] + a[6] * b[12] + a[7] * b[0] - a[7] * b[11] - a[8] * b[14] + a[8] * b[15],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8] - a[6] * b[2] + a[6] * b[13] + a[7] * b[14] - a[7] * b[15] + a[8] * b[0] - a[8] * b[11],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4] - a[6] * b[14] + a[6] * b[15] - a[7] * b[2] + a[7] * b[13] + a[8] * b[1] - a[8] * b[12],
a[0] * b[12] + a[1] * b[13] - a[2] * b[15] + a[3] * b[4] - a[4] * b[8] - a[5] * b[9] - a[6] * b[3] + a[7] * b[5] + a[8] * b[6],
 - a[0] * b[11] + a[1] * b[15] + a[2] * b[13] + a[3] * b[8] + a[4] * b[4] - a[5] * b[10] - a[6] * b[5] - a[7] * b[3] + a[8] * b[7],
 - a[0] * b[15] - a[1] * b[11] - a[2] * b[12] + a[3] * b[9] + a[4] * b[10] + a[5] * b[4] - a[6] * b[6] - a[7] * b[7] - a[8] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[10] + a[4] * b[9] - a[5] * b[8] - a[6] * b[7] + a[7] * b[6] - a[8] * b[5],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[4] * b[9] + a[5] * b[8] - a[6] * b[7] + a[7] * b[6] - a[8] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Mtt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7] + a[5] * b[15] + a[6] * b[5] - a[7] * b[4] + a[8] * b[14],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[4] * b[15] - a[5] * b[7] + a[6] * b[6] - a[7] * b[14] - a[8] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[15] + a[4] * b[9] - a[5] * b[8] + a[6] * b[14] + a[7] * b[6] - a[8] * b[5],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[4] * b[11] - a[5] * b[2] - a[5] * b[12],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[1] + a[3] * b[11] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3] - a[5] * b[13],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[12] + a[4] * b[3] + a[4] * b[13] + a[5] * b[0] + a[5] * b[10],
a[0] * b[8] + a[1] * b[9] - a[2] * b[15] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] + a[7] * b[11] - a[8] * b[2] + a[8] * b[12],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9] + a[6] * b[1] - a[6] * b[11] + a[7] * b[0] - a[7] * b[10] - a[8] * b[3] + a[8] * b[13],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8] + a[6] * b[2] - a[6] * b[12] + a[7] * b[3] - a[7] * b[13] + a[8] * b[0] - a[8] * b[10],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[7] - a[4] * b[8] - a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] - a[3] * b[8] + a[4] * b[7] - a[5] * b[15] + a[6] * b[5] - a[7] * b[4] + a[8] * b[14],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[9] + a[4] * b[15] + a[5] * b[7] + a[6] * b[6] - a[7] * b[14] - a[8] * b[4],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] - a[3] * b[15] - a[4] * b[9] + a[5] * b[8] + a[6] * b[14] + a[7] * b[6] - a[8] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[13] - a[4] * b[2] - a[4] * b[12] + a[5] * b[1] + a[5] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[6] * b[3] - a[6] * b[13] - a[7] * b[2] + a[7] * b[12] + a[8] * b[1] - a[8] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Mtt*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Rtt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[6] * b[5] - a[7] * b[4] + a[8] * b[7],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[6] * b[6] - a[7] * b[7] - a[8] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[6] * b[7] + a[7] * b[6] - a[8] * b[5],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[6] * b[0] - a[7] * b[1] - a[8] * b[2],
a[6] * b[1] + a[7] * b[0] - a[8] * b[3],
a[6] * b[2] + a[7] * b[3] + a[8] * b[0],
a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[6] * b[5] - a[7] * b[4] + a[8] * b[7],
a[6] * b[6] - a[7] * b[7] - a[8] * b[4],
a[6] * b[7] + a[7] * b[6] - a[8] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1],
a[6] * b[3] - a[7] * b[2] + a[8] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Rtt*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Rtd& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0] + a[3] * b[4] - a[4] * b[1] - a[4] * b[5] - a[5] * b[2] - a[5] * b[6],
a[3] * b[1] + a[3] * b[5] + a[4] * b[0] + a[4] * b[4] - a[5] * b[3] - a[5] * b[7],
a[3] * b[2] + a[3] * b[6] + a[4] * b[3] + a[4] * b[7] + a[5] * b[0] + a[5] * b[4],
a[6] * b[0] - a[6] * b[4] - a[7] * b[1] + a[7] * b[5] - a[8] * b[2] + a[8] * b[6],
a[6] * b[1] - a[6] * b[5] + a[7] * b[0] - a[7] * b[4] - a[8] * b[3] + a[8] * b[7],
a[6] * b[2] - a[6] * b[6] + a[7] * b[3] - a[7] * b[7] + a[8] * b[0] - a[8] * b[4],
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7],
a[0] * b[4] - a[1] * b[7] + a[2] * b[6],
a[0] * b[7] + a[1] * b[4] - a[2] * b[5],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[4],
a[3] * b[3] + a[3] * b[7] - a[4] * b[2] - a[4] * b[6] + a[5] * b[1] + a[5] * b[5],
a[6] * b[3] - a[6] * b[7] - a[7] * b[2] + a[7] * b[6] + a[8] * b[1] - a[8] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Rtd*)(&b));
}			
		 
inline Tst gp (const Sta& a, const Tvd& b) { 
	return Tst (
a[6] * b[1] + a[7] * b[2] + a[8] * b[3],
a[0] * b[0] + a[6] * b[2] - a[7] * b[1],
a[1] * b[0] + a[6] * b[3] - a[8] * b[1],
a[2] * b[0] + a[7] * b[3] - a[8] * b[2],
a[0] * b[2] + a[1] * b[3] + a[3] * b[0] + a[3] * b[4],
 - a[0] * b[1] + a[2] * b[3] + a[4] * b[0] + a[4] * b[4],
 - a[1] * b[1] - a[2] * b[2] + a[5] * b[0] + a[5] * b[4],
a[6] * b[0] - a[6] * b[4],
a[7] * b[0] - a[7] * b[4],
a[8] * b[0] - a[8] * b[4],
a[6] * b[1] + a[7] * b[2] + a[8] * b[3],
a[0] * b[4] + a[6] * b[2] - a[7] * b[1],
a[1] * b[4] + a[6] * b[3] - a[8] * b[1],
a[2] * b[4] + a[7] * b[3] - a[8] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Tvd*)(&b));
}			
		 
inline Tvt gp (const Sta& a, const Tsd& b) { 
	return Tvt (
a[3] * b[1] + a[4] * b[2] + a[5] * b[3],
a[0] * b[0] + a[3] * b[2] - a[4] * b[1],
a[1] * b[0] + a[3] * b[3] - a[5] * b[1],
a[2] * b[0] + a[4] * b[3] - a[5] * b[2],
a[3] * b[0] + a[3] * b[4],
a[4] * b[0] + a[4] * b[4],
a[5] * b[0] + a[5] * b[4],
a[0] * b[2] + a[1] * b[3] + a[6] * b[0] - a[6] * b[4],
 - a[0] * b[1] + a[2] * b[3] + a[7] * b[0] - a[7] * b[4],
 - a[1] * b[1] - a[2] * b[2] + a[8] * b[0] - a[8] * b[4],
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3],
a[0] * b[4] - a[3] * b[2] + a[4] * b[1],
a[1] * b[4] - a[3] * b[3] + a[5] * b[1],
a[2] * b[4] - a[4] * b[3] + a[5] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Trt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7] + a[6] * b[5] - a[7] * b[4],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[5] * b[7] + a[6] * b[6] - a[8] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[9] - a[5] * b[8] + a[7] * b[6] - a[8] * b[5],
a[0] * b[5] + a[1] * b[6] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[4] * b[11] - a[5] * b[2] - a[5] * b[12],
 - a[0] * b[4] + a[2] * b[6] + a[3] * b[1] + a[3] * b[11] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3] - a[5] * b[13],
 - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[12] + a[4] * b[3] + a[4] * b[13] + a[5] * b[0] + a[5] * b[10],
a[0] * b[8] + a[1] * b[9] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] + a[7] * b[11] - a[8] * b[2] + a[8] * b[12],
 - a[0] * b[7] + a[2] * b[9] + a[6] * b[1] - a[6] * b[11] + a[7] * b[0] - a[7] * b[10] - a[8] * b[3] + a[8] * b[13],
 - a[1] * b[7] - a[2] * b[8] + a[6] * b[2] - a[6] * b[12] + a[7] * b[3] - a[7] * b[13] + a[8] * b[0] - a[8] * b[10],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[7] - a[4] * b[8] - a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] - a[3] * b[8] + a[4] * b[7] + a[6] * b[5] - a[7] * b[4],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[9] + a[5] * b[7] + a[6] * b[6] - a[8] * b[4],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] - a[4] * b[9] + a[5] * b[8] + a[7] * b[6] - a[8] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[13] - a[4] * b[2] - a[4] * b[12] + a[5] * b[1] + a[5] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[6] * b[3] - a[6] * b[13] - a[7] * b[2] + a[7] * b[12] + a[8] * b[1] - a[8] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Trt*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Rvd& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[6] * b[5] - a[7] * b[4] + a[8] * b[11],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[6] * b[6] - a[7] * b[11] - a[8] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[6] * b[11] + a[7] * b[6] - a[8] * b[5],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] + a[3] * b[0] + a[3] * b[7] - a[4] * b[1] - a[4] * b[8] - a[5] * b[2] - a[5] * b[9],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[3] * b[1] + a[3] * b[8] + a[4] * b[0] + a[4] * b[7] - a[5] * b[3] - a[5] * b[10],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[9] + a[4] * b[3] + a[4] * b[10] + a[5] * b[0] + a[5] * b[7],
a[6] * b[0] - a[6] * b[7] - a[7] * b[1] + a[7] * b[8] - a[8] * b[2] + a[8] * b[9],
a[6] * b[1] - a[6] * b[8] + a[7] * b[0] - a[7] * b[7] - a[8] * b[3] + a[8] * b[10],
a[6] * b[2] - a[6] * b[9] + a[7] * b[3] - a[7] * b[10] + a[8] * b[0] - a[8] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9] + a[6] * b[5] - a[7] * b[4] + a[8] * b[11],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8] + a[6] * b[6] - a[7] * b[11] - a[8] * b[4],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7] + a[6] * b[11] + a[7] * b[6] - a[8] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[10] - a[4] * b[2] - a[4] * b[9] + a[5] * b[1] + a[5] * b[8],
a[6] * b[3] - a[6] * b[10] - a[7] * b[2] + a[7] * b[9] + a[8] * b[1] - a[8] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Tst& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7] + a[6] * b[5] - a[7] * b[4] + a[8] * b[14],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[5] * b[7] + a[6] * b[6] - a[7] * b[14] - a[8] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[9] - a[5] * b[8] + a[6] * b[14] + a[7] * b[6] - a[8] * b[5],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[4] * b[11] - a[5] * b[2] - a[5] * b[12],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[1] + a[3] * b[11] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3] - a[5] * b[13],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[12] + a[4] * b[3] + a[4] * b[13] + a[5] * b[0] + a[5] * b[10],
a[0] * b[8] + a[1] * b[9] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] + a[7] * b[11] - a[8] * b[2] + a[8] * b[12],
 - a[0] * b[7] + a[2] * b[9] + a[6] * b[1] - a[6] * b[11] + a[7] * b[0] - a[7] * b[10] - a[8] * b[3] + a[8] * b[13],
 - a[1] * b[7] - a[2] * b[8] + a[6] * b[2] - a[6] * b[12] + a[7] * b[3] - a[7] * b[13] + a[8] * b[0] - a[8] * b[10],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[7] - a[4] * b[8] - a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] - a[3] * b[8] + a[4] * b[7] + a[6] * b[5] - a[7] * b[4] + a[8] * b[14],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[9] + a[5] * b[7] + a[6] * b[6] - a[7] * b[14] - a[8] * b[4],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] - a[4] * b[9] + a[5] * b[8] + a[6] * b[14] + a[7] * b[6] - a[8] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[13] - a[4] * b[2] - a[4] * b[12] + a[5] * b[1] + a[5] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[6] * b[3] - a[6] * b[13] - a[7] * b[2] + a[7] * b[12] + a[8] * b[1] - a[8] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Tvt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7] + a[5] * b[14] + a[6] * b[5] - a[7] * b[4],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[4] * b[14] - a[5] * b[7] + a[6] * b[6] - a[8] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[14] + a[4] * b[9] - a[5] * b[8] + a[7] * b[6] - a[8] * b[5],
a[0] * b[5] + a[1] * b[6] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[4] * b[11] - a[5] * b[2] - a[5] * b[12],
 - a[0] * b[4] + a[2] * b[6] + a[3] * b[1] + a[3] * b[11] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3] - a[5] * b[13],
 - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[12] + a[4] * b[3] + a[4] * b[13] + a[5] * b[0] + a[5] * b[10],
a[0] * b[8] + a[1] * b[9] - a[2] * b[14] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] + a[7] * b[11] - a[8] * b[2] + a[8] * b[12],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9] + a[6] * b[1] - a[6] * b[11] + a[7] * b[0] - a[7] * b[10] - a[8] * b[3] + a[8] * b[13],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8] + a[6] * b[2] - a[6] * b[12] + a[7] * b[3] - a[7] * b[13] + a[8] * b[0] - a[8] * b[10],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[7] - a[4] * b[8] - a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] - a[3] * b[8] + a[4] * b[7] - a[5] * b[14] + a[6] * b[5] - a[7] * b[4],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[9] + a[4] * b[14] + a[5] * b[7] + a[6] * b[6] - a[8] * b[4],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] - a[3] * b[14] - a[4] * b[9] + a[5] * b[8] + a[7] * b[6] - a[8] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[13] - a[4] * b[2] - a[4] * b[12] + a[5] * b[1] + a[5] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[6] * b[3] - a[6] * b[13] - a[7] * b[2] + a[7] * b[12] + a[8] * b[1] - a[8] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Tvt*)(&b));
}			
		 
inline Mtt gp (const Sta& a, const Bst& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7] + a[6] * b[5] - a[7] * b[4],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[5] * b[7] + a[6] * b[6] - a[8] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[9] - a[5] * b[8] + a[7] * b[6] - a[8] * b[5],
a[0] * b[5] + a[1] * b[6] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[5] * b[2],
 - a[0] * b[4] + a[2] * b[6] + a[3] * b[1] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3],
 - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0] + a[5] * b[10],
a[0] * b[8] + a[1] * b[9] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] - a[8] * b[2],
 - a[0] * b[7] + a[2] * b[9] + a[6] * b[1] + a[7] * b[0] - a[7] * b[10] - a[8] * b[3],
 - a[1] * b[7] - a[2] * b[8] + a[6] * b[2] + a[7] * b[3] + a[8] * b[0] - a[8] * b[10],
 - a[3] * b[7] - a[4] * b[8] - a[5] * b[9] + a[6] * b[4] + a[7] * b[5] + a[8] * b[6],
a[0] * b[10] - a[3] * b[8] + a[4] * b[7] + a[6] * b[5] - a[7] * b[4],
a[1] * b[10] - a[3] * b[9] + a[5] * b[7] + a[6] * b[6] - a[8] * b[4],
a[2] * b[10] - a[4] * b[9] + a[5] * b[8] + a[7] * b[6] - a[8] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Sta, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sta*)(&a),*(Bst*)(&b));
}			
		 
inline Sta op (const Sta& a, const Sca& b) { 
	return Sta (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[7] * b[0],
a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Sca*)(&b));
}			
		 
inline Dal op (const Sta& a, const Ori& b) { 
	return Dal (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[6] * b[0],
 - a[7] * b[0],
 - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Ori*)(&b));
}			
		 
inline Lin op (const Sta& a, const Inf& b) { 
	return Lin (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Inf*)(&b));
}			
		 
inline Mnk_Biv op (const Sta& a, const Mnk& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Mnk*)(&b));
}			
		 
inline Pss_Sta op (const Sta& a, const Hyp& b) { 
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
		 
		
template<> inline MVBase op_gen<Sta, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Sta& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Pss*)(&b));
}			
		 
inline Cir op (const Sta& a, const Pnt& b) { 
	return Cir (
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[4] - a[6] * b[1] + a[7] * b[0],
a[1] * b[4] - a[6] * b[2] + a[8] * b[0],
a[2] * b[4] - a[7] * b[2] + a[8] * b[1],
a[3] * b[4] - a[6] * b[3],
a[4] * b[4] - a[7] * b[3],
a[5] * b[4] - a[8] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Pnt*)(&b));
}			
		 
inline Sph op (const Sta& a, const Par& b) { 
	return Sph (
a[0] * b[9] - a[3] * b[7] + a[4] * b[6] + a[6] * b[4] - a[7] * b[3],
a[1] * b[9] - a[3] * b[8] + a[5] * b[6] + a[6] * b[5] - a[8] * b[3],
a[2] * b[9] - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Par*)(&b));
}			
		 
inline Pss op (const Sta& a, const Cir& b) { 
	return Pss (
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3] - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Sta& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Sph*)(&b));
}			
		 
inline Sph op (const Sta& a, const Sta& b) { 
	return Sph (
 - a[3] * b[7] + a[4] * b[6] + a[6] * b[4] - a[7] * b[3],
 - a[3] * b[8] + a[5] * b[6] + a[6] * b[5] - a[8] * b[3],
 - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Sta*)(&b));
}			
		 
inline Pln op (const Sta& a, const Drv& b) { 
	return Pln (
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Drv*)(&b));
}			
		 
inline Pss op (const Sta& a, const Drb& b) { 
	return Pss (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Sta& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Drt*)(&b));
}			
		 
inline Daf op (const Sta& a, const Tnv& b) { 
	return Daf (
a[6] * b[1] - a[7] * b[0],
a[6] * b[2] - a[8] * b[0],
a[7] * b[2] - a[8] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Tnv*)(&b));
}			
		 
inline Pss op (const Sta& a, const Tnb& b) { 
	return Pss (
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Sta& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Tnt*)(&b));
}			
		 
inline Pss op (const Sta& a, const Lin& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Sta& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Pln*)(&b));
}			
		 
inline Pln op (const Sta& a, const Flp& b) { 
	return Pln (
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Flp*)(&b));
}			
		 
inline Pss op (const Sta& a, const Dfp& b) { 
	return Pss (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Dfp*)(&b));
}			
		 
inline Sph op (const Sta& a, const Dll& b) { 
	return Sph (
 - a[3] * b[4] + a[4] * b[3],
 - a[3] * b[5] + a[5] * b[3],
 - a[4] * b[5] + a[5] * b[4],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Dll*)(&b));
}			
		 
inline Cir op (const Sta& a, const Dlp& b) { 
	return Cir (
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[3] - a[6] * b[1] + a[7] * b[0],
a[1] * b[3] - a[6] * b[2] + a[8] * b[0],
a[2] * b[3] - a[7] * b[2] + a[8] * b[1],
a[3] * b[3],
a[4] * b[3],
a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Dlp*)(&b));
}			
		 
inline Hyp_Pss op (const Sta& a, const Biv& b) { 
	return Hyp_Pss (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Biv*)(&b));
}			
		 
inline Sca op (const Sta& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Tri*)(&b));
}			
		 
inline Cir op (const Sta& a, const Aff& b) { 
	return Cir (
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
 - a[6] * b[1] + a[7] * b[0],
 - a[6] * b[2] + a[8] * b[0],
 - a[7] * b[2] + a[8] * b[1],
 - a[6] * b[3],
 - a[7] * b[3],
 - a[8] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Aff*)(&b));
}			
		 
inline Sph op (const Sta& a, const Afl& b) { 
	return Sph (
a[6] * b[4] - a[7] * b[3],
a[6] * b[5] - a[8] * b[3],
a[7] * b[5] - a[8] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[6] * b[2] - a[7] * b[1] + a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Afl*)(&b));
}			
		 
inline Pss op (const Sta& a, const Afp& b) { 
	return Pss (
 - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Afp*)(&b));
}			
		 
inline Daf op (const Sta& a, const Dap& b) { 
	return Daf (
a[0] * b[3] + a[6] * b[1] - a[7] * b[0],
a[1] * b[3] + a[6] * b[2] - a[8] * b[0],
a[2] * b[3] + a[7] * b[2] - a[8] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Sta& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Daf*)(&b));
}			
		 
inline Pss op (const Sta& a, const Dal& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[6] * b[2] + a[7] * b[1] - a[8] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Dal*)(&b));
}			
		 
inline Pss op (const Sta& a, const Mnv& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sta, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Sta*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Hyp*)(&b));
}			
		 
inline Pss_Sta ip (const Sta& a, const Pss& b) { 
	return Pss_Sta (
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Par& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Par*)(&b));
}			
		 
inline Pnt ip (const Sta& a, const Cir& b) { 
	return Pnt (
 - a[2] * b[9] + a[4] * b[3] + a[5] * b[4] + a[7] * b[0] + a[8] * b[1],
a[1] * b[9] - a[3] * b[3] + a[5] * b[5] - a[6] * b[0] + a[8] * b[2],
 - a[0] * b[9] - a[3] * b[4] - a[4] * b[5] - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[6] - a[4] * b[7] - a[5] * b[8],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5] + a[6] * b[6] + a[7] * b[7] + a[8] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Cir*)(&b));
}			
		 
inline Par ip (const Sta& a, const Sph& b) { 
	return Par (
a[5] * b[4] + a[8] * b[3],
 - a[4] * b[4] - a[7] * b[3],
a[3] * b[4] + a[6] * b[3],
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
 - a[2] * b[4] + a[7] * b[0] + a[8] * b[1],
a[1] * b[4] - a[6] * b[0] + a[8] * b[2],
 - a[0] * b[4] - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Sph*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Sta& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Drv& b) { 
	return Sca (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Drv*)(&b));
}			
		 
inline Dlp ip (const Sta& a, const Drb& b) { 
	return Dlp (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Drb*)(&b));
}			
		 
inline Dll ip (const Sta& a, const Drt& b) { 
	return Dll (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Tnv& b) { 
	return Sca (
a[6] * b[0] + a[7] * b[1] + a[8] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Tnv*)(&b));
}			
		 
inline Aff ip (const Sta& a, const Tnb& b) { 
	return Aff (
a[7] * b[0] + a[8] * b[1],
 - a[6] * b[0] + a[8] * b[2],
 - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Tnb*)(&b));
}			
		 
inline Afl ip (const Sta& a, const Tnt& b) { 
	return Afl (
a[8] * b[0],
 - a[7] * b[0],
a[6] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Tnt*)(&b));
}			
		 
inline Pnt ip (const Sta& a, const Lin& b) { 
	return Pnt (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Lin*)(&b));
}			
		 
inline Par ip (const Sta& a, const Pln& b) { 
	return Par (
a[5] * b[3],
 - a[4] * b[3],
a[3] * b[3],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[2] * b[3] + a[7] * b[0] + a[8] * b[1],
a[1] * b[3] - a[6] * b[0] + a[8] * b[2],
 - a[0] * b[3] - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Flp& b) { 
	return Sca (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Flp*)(&b));
}			
		 
inline Dlp ip (const Sta& a, const Dfp& b) { 
	return Dlp (
 - a[2] * b[3] + a[4] * b[0] + a[5] * b[1],
a[1] * b[3] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[3] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Dll& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Biv& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Biv*)(&b));
}			
		 
inline Vec ip (const Sta& a, const Tri& b) { 
	return Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Afl& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[6] * b[3] + a[7] * b[4] + a[8] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Afl*)(&b));
}			
		 
inline Aff ip (const Sta& a, const Afp& b) { 
	return Aff (
 - a[2] * b[3] + a[7] * b[0] + a[8] * b[1],
a[1] * b[3] - a[6] * b[0] + a[8] * b[2],
 - a[0] * b[3] - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Sta& a, const Dap& b) { 
	return Sca (
a[6] * b[0] + a[7] * b[1] + a[8] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Dap*)(&b));
}			
		 
inline Par ip (const Sta& a, const Daf& b) { 
	return Par (
a[8] * b[3],
 - a[7] * b[3],
a[6] * b[3],
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
a[7] * b[0] + a[8] * b[1],
 - a[6] * b[0] + a[8] * b[2],
 - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Daf*)(&b));
}			
		 
inline Pnt ip (const Sta& a, const Dal& b) { 
	return Pnt (
a[7] * b[0] + a[8] * b[1],
 - a[6] * b[0] + a[8] * b[2],
 - a[6] * b[1] - a[7] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
a[6] * b[3] + a[7] * b[4] + a[8] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Dal*)(&b));
}			
		 
inline Hyp ip (const Sta& a, const Mnv& b) { 
	return Hyp (
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[6] * b[0] + a[7] * b[1] + a[8] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Sta, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sta*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Sta sp (const Sta& sta, const Rot& rot) {					
					
const Rot& t1 = rot;
const Sta& t2 = sta;
Sta_Biv t3 (
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
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Sta (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[10] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[10] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[11] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[11] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[11] * t5[1]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Mot& mot) {					
					
const Mot& t1 = mot;
const Sta& t2 = sta;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3] - t1[7] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[5],
t1[4] * t2[5] - t1[6] * t2[3] - t1[7] * t2[4],
t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Sta (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[7] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[7] - t3[6] * t5[4] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[7] + t3[5] * t5[6] - t3[6] * t5[5] + t3[14] * t5[4],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] + t3[10] * t5[4] + t3[11] * t5[5] + t3[12] * t5[6] - t3[13] * t5[7] - t3[15] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[5] - t3[11] * t5[4] + t3[12] * t5[7] + t3[13] * t5[6] + t3[15] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] + t3[10] * t5[6] - t3[11] * t5[7] - t3[12] * t5[4] - t3[13] * t5[5] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Dil& dil) {					
					
const Dil& t1 = dil;
const Sta& t2 = sta;
Hyp_Lin t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[3],
t1[0] * t2[4] - t1[1] * t2[4],
t1[0] * t2[5] - t1[1] * t2[5],
t1[0] * t2[6] + t1[1] * t2[6],
t1[0] * t2[7] + t1[1] * t2[7],
t1[0] * t2[8] + t1[1] * t2[8],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Sta (
t3[0] * t5[0] + t3[9] * t5[1],
t3[1] * t5[0] + t3[10] * t5[1],
t3[2] * t5[0] + t3[11] * t5[1],
t3[3] * t5[0] + t3[3] * t5[1],
t3[4] * t5[0] + t3[4] * t5[1],
t3[5] * t5[0] + t3[5] * t5[1],
t3[6] * t5[0] - t3[6] * t5[1],
t3[7] * t5[0] - t3[7] * t5[1],
t3[8] * t5[0] - t3[8] * t5[1]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Trv& trv) {					
					
const Trv& t1 = trv;
const Sta& t2 = sta;
Tst t3 (
t1[1] * t2[6] + t1[2] * t2[7] + t1[3] * t2[8],
t1[0] * t2[0] + t1[1] * t2[7] - t1[2] * t2[6],
t1[0] * t2[1] + t1[1] * t2[8] - t1[3] * t2[6],
t1[0] * t2[2] + t1[2] * t2[8] - t1[3] * t2[7],
t1[0] * t2[3] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[4] + t1[1] * t2[0] - t1[3] * t2[2],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[6],
t1[0] * t2[7],
t1[0] * t2[8],
 - t1[1] * t2[6] - t1[2] * t2[7] - t1[3] * t2[8],
 - t1[1] * t2[7] + t1[2] * t2[6],
 - t1[1] * t2[8] + t1[3] * t2[6],
 - t1[2] * t2[8] + t1[3] * t2[7],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Sta (
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] - t3[10] * t5[1] - t3[11] * t5[2] - t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] - t3[10] * t5[2] + t3[11] * t5[1] - t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] - t3[10] * t5[3] + t3[12] * t5[1] + t3[13] * t5[2],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Sta& t2 = sta;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3] + t1[11] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3] - t1[11] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4] + t1[11] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[7] * t2[3] - t1[8] * t2[4] - t1[9] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] - t1[7] * t2[4] + t1[8] * t2[3] - t1[10] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] - t1[7] * t2[5] + t1[9] * t2[3] + t1[10] * t2[4],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[5] * t2[0] - t1[6] * t2[1] + t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[8] - t1[11] * t2[2],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[7] - t1[8] * t2[6] + t1[10] * t2[8] + t1[11] * t2[1],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[1] + t1[5] * t2[2] + t1[7] * t2[8] - t1[9] * t2[6] - t1[10] * t2[7] - t1[11] * t2[0],
t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5] - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1] + t1[11] * t2[5],
t1[4] * t2[5] - t1[6] * t2[3] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0] - t1[11] * t2[4],
t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] - t1[8] * t2[5] + t1[9] * t2[4] - t1[10] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] + t1[8] * t2[8] - t1[9] * t2[7] + t1[10] * t2[6]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Sta (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[11] - t3[6] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[11] + t3[5] * t5[6] - t3[6] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[14] * t5[4],
t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[14] * t5[3] - t3[14] * t5[10],
t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[14] * t5[2] + t3[14] * t5[9],
t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[14] * t5[1] - t3[14] * t5[8],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] + t3[10] * t5[4] + t3[11] * t5[5] + t3[12] * t5[6] - t3[13] * t5[11] - t3[15] * t5[3] + t3[15] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[10] * t5[5] - t3[11] * t5[4] + t3[12] * t5[11] + t3[13] * t5[6] + t3[15] * t5[2] - t3[15] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] + t3[10] * t5[6] - t3[11] * t5[11] - t3[12] * t5[4] - t3[13] * t5[5] - t3[15] * t5[1] + t3[15] * t5[8]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Trs& trs) {					
					
const Trs& t1 = trs;
const Sta& t2 = sta;
Tvt t3 (
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[0] * t2[0] + t1[1] * t2[4] - t1[2] * t2[3],
t1[0] * t2[1] + t1[1] * t2[5] - t1[3] * t2[3],
t1[0] * t2[2] + t1[2] * t2[5] - t1[3] * t2[4],
t1[0] * t2[3],
t1[0] * t2[4],
t1[0] * t2[5],
t1[0] * t2[6] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[7] + t1[1] * t2[0] - t1[3] * t2[2],
t1[0] * t2[8] + t1[1] * t2[1] + t1[2] * t2[2],
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[1] * t2[4] - t1[2] * t2[3],
t1[1] * t2[5] - t1[3] * t2[3],
t1[2] * t2[5] - t1[3] * t2[4],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Sta (
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2],
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[7] * t5[0] + t3[10] * t5[1] + t3[11] * t5[2] + t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[8] * t5[0] + t3[10] * t5[2] - t3[11] * t5[1] + t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[9] * t5[0] + t3[10] * t5[3] - t3[12] * t5[1] - t3[13] * t5[2]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Sta& t2 = sta;
Rtc t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] + t1[3] * t2[6] + t1[4] * t2[3] + t1[5] * t2[7] + t1[6] * t2[8] + t1[8] * t2[4] + t1[9] * t2[5] - t1[14] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[7] + t1[4] * t2[4] - t1[5] * t2[6] + t1[7] * t2[8] - t1[8] * t2[3] + t1[10] * t2[5] + t1[14] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[3] * t2[8] + t1[4] * t2[5] - t1[6] * t2[6] - t1[7] * t2[7] - t1[9] * t2[3] - t1[10] * t2[4] - t1[14] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2] - t1[11] * t2[3] - t1[12] * t2[4] - t1[13] * t2[5],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2] + t1[11] * t2[6] + t1[12] * t2[7] + t1[13] * t2[8],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1] - t1[11] * t2[4] + t1[12] * t2[3] + t1[14] * t2[5] - t1[15] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] + t1[3] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0] - t1[11] * t2[5] + t1[13] * t2[3] - t1[14] * t2[4] + t1[15] * t2[4],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[12] * t2[5] + t1[13] * t2[4] + t1[14] * t2[3] - t1[15] * t2[3],
t1[0] * t2[7] - t1[1] * t2[6] + t1[4] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1] + t1[11] * t2[7] - t1[12] * t2[6] + t1[14] * t2[8] + t1[15] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] + t1[4] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0] + t1[11] * t2[8] - t1[13] * t2[6] - t1[14] * t2[7] - t1[15] * t2[7],
t1[1] * t2[8] - t1[2] * t2[7] + t1[4] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[12] * t2[8] - t1[13] * t2[7] + t1[14] * t2[6] + t1[15] * t2[6],
 - t1[3] * t2[6] + t1[4] * t2[3] - t1[5] * t2[7] - t1[6] * t2[8] + t1[8] * t2[4] + t1[9] * t2[5] - t1[12] * t2[0] - t1[13] * t2[1] - t1[15] * t2[2],
 - t1[3] * t2[7] + t1[4] * t2[4] + t1[5] * t2[6] - t1[7] * t2[8] - t1[8] * t2[3] + t1[10] * t2[5] + t1[11] * t2[0] - t1[13] * t2[2] + t1[15] * t2[1],
 - t1[3] * t2[8] + t1[4] * t2[5] + t1[6] * t2[6] + t1[7] * t2[7] - t1[9] * t2[3] - t1[10] * t2[4] + t1[11] * t2[1] + t1[12] * t2[2] - t1[15] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[7] * t2[6] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3],
 - t1[5] * t2[8] + t1[6] * t2[7] - t1[7] * t2[6] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Sta (
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11],
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[0] - t3[3] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] + t3[7] * t5[14] + t3[7] * t5[15] - t3[11] * t5[3] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[7] * t5[2] - t3[7] * t5[13] - t3[11] * t5[5] - t3[12] * t5[3] + t3[13] * t5[7] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[2] - t3[3] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] + t3[7] * t5[1] + t3[7] * t5[12] - t3[11] * t5[6] - t3[12] * t5[7] - t3[13] * t5[3] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[4] * t5[0] + t3[4] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[14] - t3[10] * t5[15] + t3[11] * t5[4] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[10] - t3[15] * t5[10],
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] - t3[4] * t5[1] + t3[4] * t5[12] + t3[8] * t5[0] - t3[8] * t5[11] - t3[9] * t5[14] + t3[9] * t5[15] - t3[10] * t5[2] + t3[10] * t5[13] + t3[11] * t5[8] + t3[12] * t5[4] - t3[13] * t5[10] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[4] * t5[2] + t3[4] * t5[13] + t3[8] * t5[14] - t3[8] * t5[15] + t3[9] * t5[0] - t3[9] * t5[11] + t3[10] * t5[1] - t3[10] * t5[12] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[4] - t3[14] * t5[8] - t3[15] * t5[8]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Sta& t2 = sta;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[14] * t2[8] + t1[15] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] - t1[14] * t2[7] - t1[15] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[14] * t2[6] + t1[15] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5] - t1[14] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] - t1[10] * t2[4] + t1[11] * t2[3] - t1[13] * t2[5] + t1[14] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[10] * t2[5] + t1[12] * t2[3] + t1[13] * t2[4] - t1[14] * t2[0],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[8] - t1[15] * t2[2],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[7] - t1[11] * t2[6] + t1[13] * t2[8] + t1[15] * t2[1],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[1] + t1[8] * t2[2] + t1[10] * t2[8] - t1[12] * t2[6] - t1[13] * t2[7] - t1[15] * t2[0],
 - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[7] + t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1] - t1[14] * t2[8] + t1[15] * t2[5],
 - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0] + t1[14] * t2[7] - t1[15] * t2[4],
 - t1[5] * t2[8] + t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0] - t1[14] * t2[6] + t1[15] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[8] - t1[12] * t2[7] + t1[13] * t2[6]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Sta (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[15] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[15] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[15] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[15] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Sta& t2 = sta;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[8],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] - t1[7] * t2[7],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[7] * t2[6],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7],
 - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8],
 - t1[4] * t2[7] + t1[5] * t2[6] - t1[7] * t2[8],
 - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[7],
 - t1[5] * t2[8] + t1[6] * t2[7] - t1[7] * t2[6],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Sta (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[7] - t3[14] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[7] - t3[13] * t5[6] + t3[14] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[10] * t5[6] + t3[11] * t5[7] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[15] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[15] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Sta& t2 = sta;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] - t1[4] * t2[4] + t1[5] * t2[3] - t1[7] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] - t1[4] * t2[5] + t1[6] * t2[3] + t1[7] * t2[4],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[8] - t1[6] * t2[6] - t1[7] * t2[7],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] - t1[5] * t2[5] + t1[6] * t2[4] - t1[7] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[5] * t2[8] - t1[6] * t2[7] + t1[7] * t2[6]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Sta (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[7] + t3[13] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[10] * t5[6] + t3[11] * t5[7] + t3[12] * t5[4] - t3[13] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[10] * t5[7] - t3[11] * t5[6] + t3[12] * t5[5] + t3[13] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[1] - t3[5] * t5[5] - t3[6] * t5[2] - t3[6] * t5[6] - t3[14] * t5[3] - t3[14] * t5[7],
t3[4] * t5[1] + t3[4] * t5[5] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[3] - t3[6] * t5[7] + t3[14] * t5[2] + t3[14] * t5[6],
t3[4] * t5[2] + t3[4] * t5[6] + t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[0] + t3[6] * t5[4] - t3[14] * t5[1] - t3[14] * t5[5],
t3[7] * t5[0] - t3[7] * t5[4] - t3[8] * t5[1] + t3[8] * t5[5] - t3[9] * t5[2] + t3[9] * t5[6] - t3[15] * t5[3] + t3[15] * t5[7],
t3[7] * t5[1] - t3[7] * t5[5] + t3[8] * t5[0] - t3[8] * t5[4] - t3[9] * t5[3] + t3[9] * t5[7] + t3[15] * t5[2] - t3[15] * t5[6],
t3[7] * t5[2] - t3[7] * t5[6] + t3[8] * t5[3] - t3[8] * t5[7] + t3[9] * t5[0] - t3[9] * t5[4] - t3[15] * t5[1] + t3[15] * t5[5]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Sta& t2 = sta;
Tst t3 (
t1[1] * t2[6] + t1[2] * t2[7] + t1[3] * t2[8],
t1[0] * t2[0] + t1[1] * t2[7] - t1[2] * t2[6],
t1[0] * t2[1] + t1[1] * t2[8] - t1[3] * t2[6],
t1[0] * t2[2] + t1[2] * t2[8] - t1[3] * t2[7],
t1[0] * t2[3] - t1[2] * t2[0] - t1[3] * t2[1] - t1[4] * t2[3],
t1[0] * t2[4] + t1[1] * t2[0] - t1[3] * t2[2] - t1[4] * t2[4],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[5],
t1[0] * t2[6] + t1[4] * t2[6],
t1[0] * t2[7] + t1[4] * t2[7],
t1[0] * t2[8] + t1[4] * t2[8],
 - t1[1] * t2[6] - t1[2] * t2[7] - t1[3] * t2[8],
 - t1[1] * t2[7] + t1[2] * t2[6] + t1[4] * t2[0],
 - t1[1] * t2[8] + t1[3] * t2[6] + t1[4] * t2[1],
 - t1[2] * t2[8] + t1[3] * t2[7] + t1[4] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Sta (
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1] + t3[11] * t5[4],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1] + t3[12] * t5[4],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2] + t3[13] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] + t3[4] * t5[4] - t3[10] * t5[1] - t3[11] * t5[2] - t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] + t3[5] * t5[4] - t3[10] * t5[2] + t3[11] * t5[1] - t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] + t3[6] * t5[4] - t3[10] * t5[3] + t3[12] * t5[1] + t3[13] * t5[2],
t3[7] * t5[0] - t3[7] * t5[4],
t3[8] * t5[0] - t3[8] * t5[4],
t3[9] * t5[0] - t3[9] * t5[4]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Sta& t2 = sta;
Tvt t3 (
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[0] * t2[0] + t1[1] * t2[4] - t1[2] * t2[3],
t1[0] * t2[1] + t1[1] * t2[5] - t1[3] * t2[3],
t1[0] * t2[2] + t1[2] * t2[5] - t1[3] * t2[4],
t1[0] * t2[3] - t1[4] * t2[3],
t1[0] * t2[4] - t1[4] * t2[4],
t1[0] * t2[5] - t1[4] * t2[5],
t1[0] * t2[6] - t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6],
t1[0] * t2[7] + t1[1] * t2[0] - t1[3] * t2[2] + t1[4] * t2[7],
t1[0] * t2[8] + t1[1] * t2[1] + t1[2] * t2[2] + t1[4] * t2[8],
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[1] * t2[4] - t1[2] * t2[3] + t1[4] * t2[0],
t1[1] * t2[5] - t1[3] * t2[3] + t1[4] * t2[1],
t1[2] * t2[5] - t1[3] * t2[4] + t1[4] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Sta (
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1] + t3[11] * t5[4],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1] + t3[12] * t5[4],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2] + t3[13] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[7] * t5[0] - t3[7] * t5[4] + t3[10] * t5[1] + t3[11] * t5[2] + t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[8] * t5[0] - t3[8] * t5[4] + t3[10] * t5[2] - t3[11] * t5[1] + t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[9] * t5[0] - t3[9] * t5[4] + t3[10] * t5[3] - t3[12] * t5[1] - t3[13] * t5[2]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Trt& trt) {					
					
const Trt& t1 = trt;
const Sta& t2 = sta;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] - t1[10] * t2[4] + t1[11] * t2[3] - t1[13] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[10] * t2[5] + t1[12] * t2[3] + t1[13] * t2[4],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[8],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[7] - t1[11] * t2[6] + t1[13] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[1] + t1[8] * t2[2] + t1[10] * t2[8] - t1[12] * t2[6] - t1[13] * t2[7],
 - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[7] + t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
 - t1[5] * t2[8] + t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[8] - t1[12] * t2[7] + t1[13] * t2[6]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Sta (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Sta& t2 = sta;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[11] * t2[8],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] - t1[11] * t2[7],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[11] * t2[6],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[3] - t1[8] * t2[4] - t1[9] * t2[5] - t1[11] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] - t1[7] * t2[4] + t1[8] * t2[3] - t1[10] * t2[5] + t1[11] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[5] + t1[9] * t2[3] + t1[10] * t2[4] - t1[11] * t2[0],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] + t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[8],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[7] * t2[7] - t1[8] * t2[6] + t1[10] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[8] - t1[9] * t2[6] - t1[10] * t2[7],
 - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
 - t1[4] * t2[7] + t1[5] * t2[6] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1] - t1[11] * t2[8],
 - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0] + t1[11] * t2[7],
 - t1[5] * t2[8] + t1[6] * t2[7] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] - t1[11] * t2[6],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[8] * t2[5] + t1[9] * t2[4] - t1[10] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[8] * t2[8] - t1[9] * t2[7] + t1[10] * t2[6]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Sta (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[11] - t3[14] * t5[3] - t3[14] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[11] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[8],
t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[15] * t5[3] + t3[15] * t5[10],
t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[15] * t5[2] - t3[15] * t5[9],
t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] - t3[15] * t5[1] + t3[15] * t5[8]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Tst& tst) {					
					
const Tst& t1 = tst;
const Sta& t2 = sta;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[14] * t2[8],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] - t1[14] * t2[7],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[14] * t2[6],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5] - t1[14] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] - t1[10] * t2[4] + t1[11] * t2[3] - t1[13] * t2[5] + t1[14] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[10] * t2[5] + t1[12] * t2[3] + t1[13] * t2[4] - t1[14] * t2[0],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[8],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[7] - t1[11] * t2[6] + t1[13] * t2[8],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[1] + t1[8] * t2[2] + t1[10] * t2[8] - t1[12] * t2[6] - t1[13] * t2[7],
 - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[7] + t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1] - t1[14] * t2[8],
 - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0] + t1[14] * t2[7],
 - t1[5] * t2[8] + t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0] - t1[14] * t2[6],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[8] - t1[12] * t2[7] + t1[13] * t2[6]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Sta (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Sta& t2 = sta;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[14] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] - t1[14] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[14] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] - t1[10] * t2[4] + t1[11] * t2[3] - t1[13] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[10] * t2[5] + t1[12] * t2[3] + t1[13] * t2[4],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[8] - t1[14] * t2[2],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[7] - t1[11] * t2[6] + t1[13] * t2[8] + t1[14] * t2[1],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[1] + t1[8] * t2[2] + t1[10] * t2[8] - t1[12] * t2[6] - t1[13] * t2[7] - t1[14] * t2[0],
 - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[7] + t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[5],
 - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0] - t1[14] * t2[4],
 - t1[5] * t2[8] + t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0] + t1[14] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[3],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[8] - t1[12] * t2[7] + t1[13] * t2[6]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Sta (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[14] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[14] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[14] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[14] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Sta sp (const Sta& sta, const Bst& bst) {					
					
const Bst& t1 = bst;
const Sta& t2 = sta;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7] - t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[8] - t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[8] - t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] - t1[10] * t2[4],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[10] * t2[5],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[8] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[6],
t1[0] * t2[7] - t1[1] * t2[6] + t1[3] * t2[8] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[7],
t1[0] * t2[8] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[1] + t1[8] * t2[2] + t1[10] * t2[8],
 - t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[8] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
 - t1[4] * t2[7] + t1[5] * t2[6] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0],
 - t1[4] * t2[8] + t1[6] * t2[6] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1],
 - t1[5] * t2[8] + t1[6] * t2[7] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[8] - t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Sta (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[11] * t5[10] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[12] * t5[10] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] - t3[9] * t5[2] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Sta re (const Sta& sta, const Vec& vec) {					
					
const Vec& t1 = vec;
const Sta& t2 = sta;
Sta t3 = involute( t2);
Sta_Vec t4 (
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
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Sta (
t4[0] * t6[1] - t4[1] * t6[0] + t4[11] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[11] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[11] * t6[0],
 - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2],
 - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1],
 - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2],
 - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2],
 - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1]
);

}
		
	
	  	
template<>
inline Sta re (const Sta& sta, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Sta& t2 = sta;
Sta t3 = involute( t2);
Pnt_Par t4 (
 - t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[3],
t1[0] * t3[0] - t1[2] * t3[2] + t1[3] * t3[4],
t1[0] * t3[1] + t1[1] * t3[2] + t1[3] * t3[5],
t1[0] * t3[3] + t1[1] * t3[4] + t1[2] * t3[5],
t1[0] * t3[6] + t1[1] * t3[7] + t1[2] * t3[8],
t1[0] * t3[4] - t1[1] * t3[3],
t1[0] * t3[5] - t1[2] * t3[3],
t1[1] * t3[5] - t1[2] * t3[4],
t1[0] * t3[7] - t1[1] * t3[6] + t1[3] * t3[0],
t1[0] * t3[8] - t1[2] * t3[6] + t1[3] * t3[1],
t1[1] * t3[8] - t1[2] * t3[7] + t1[3] * t3[2],
t1[3] * t3[3],
t1[3] * t3[4],
t1[3] * t3[5],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Sta (
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[3] + t4[14] * t6[0],
 - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2],
 - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1],
t4[0] * t6[3] - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] + t4[11] * t6[3],
t4[1] * t6[3] - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2] + t4[12] * t6[3],
t4[2] * t6[3] - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1] + t4[13] * t6[3]
);

}
		
	
	  	
template<>
inline Sta re (const Sta& sta, const Pln& pln) {					
					
const Pln& t1 = pln;
const Sta& t2 = sta;
Sta t3 = involute( t2);
Pnt_Cir t4 (
t1[3] * t3[5],
 - t1[3] * t3[4],
t1[3] * t3[3],
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
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Sta (
t4[5] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1],
 - t4[4] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0],
t4[3] * t6[3] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[13] * t6[2],
t4[3] * t6[0] - t4[5] * t6[2] + t4[13] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[13] * t6[0],
 - t4[2] * t6[3] + t4[7] * t6[0] + t4[8] * t6[1] - t4[12] * t6[3] + t4[14] * t6[2],
t4[1] * t6[3] - t4[6] * t6[0] + t4[8] * t6[2] + t4[11] * t6[3] - t4[14] * t6[1],
 - t4[0] * t6[3] - t4[6] * t6[1] - t4[7] * t6[2] - t4[10] * t6[3] + t4[14] * t6[0]
);

}
		
	
	  	
template<>
inline Sta re (const Sta& sta, const Dll& dll) {					
					
const Dll& t1 = dll;
const Sta& t2 = sta;
Sta t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[3] + t1[4] * t3[4] + t1[5] * t3[5],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[4] - t1[4] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] + t1[3] * t3[5] - t1[5] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[4] * t3[5] - t1[5] * t3[4],
t1[0] * t3[4] + t1[1] * t3[5],
 - t1[0] * t3[3] + t1[2] * t3[5],
 - t1[1] * t3[3] - t1[2] * t3[4],
t1[0] * t3[7] + t1[1] * t3[8] - t1[4] * t3[0] - t1[5] * t3[1],
 - t1[0] * t3[6] + t1[2] * t3[8] + t1[3] * t3[0] - t1[5] * t3[2],
 - t1[1] * t3[6] - t1[2] * t3[7] + t1[3] * t3[1] + t1[4] * t3[2],
t1[3] * t3[3] + t1[4] * t3[4] + t1[5] * t3[5],
t1[3] * t3[4] - t1[4] * t3[3],
t1[3] * t3[5] - t1[5] * t3[3],
t1[4] * t3[5] - t1[5] * t3[4],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3],
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6] + t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Sta (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[4] - t4[5] * t6[3] + t4[14] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[5] - t4[6] * t6[3] - t4[14] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[5] - t4[6] * t6[4] + t4[14] * t6[3],
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[8] * t6[0] - t4[9] * t6[1] + t4[10] * t6[3] + t4[11] * t6[4] + t4[12] * t6[5] - t4[15] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[7] * t6[0] - t4[9] * t6[2] + t4[10] * t6[4] - t4[11] * t6[3] + t4[13] * t6[5] + t4[15] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[7] * t6[1] + t4[8] * t6[2] + t4[10] * t6[5] - t4[12] * t6[3] - t4[13] * t6[4] - t4[15] * t6[0]
);

}
		
	
	  	
template<>
inline Sta re (const Sta& sta, const Lin& lin) {					
					
const Lin& t1 = lin;
const Sta& t2 = sta;
Sta t3 = involute( t2);
Rtc t4 (
t1[0] * t3[4] + t1[1] * t3[5],
 - t1[0] * t3[3] + t1[2] * t3[5],
 - t1[1] * t3[3] - t1[2] * t3[4],
 - t1[3] * t3[3] - t1[4] * t3[4] - t1[5] * t3[5],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[6] + t1[4] * t3[7] + t1[5] * t3[8],
 - t1[3] * t3[4] + t1[4] * t3[3],
 - t1[3] * t3[5] + t1[5] * t3[3],
 - t1[4] * t3[5] + t1[5] * t3[4],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[7] - t1[4] * t3[6],
t1[0] * t3[2] - t1[2] * t3[0] + t1[3] * t3[8] - t1[5] * t3[6],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[4] * t3[8] - t1[5] * t3[7],
t1[0] * t3[4] + t1[1] * t3[5] - t1[4] * t3[0] - t1[5] * t3[1],
 - t1[0] * t3[3] + t1[2] * t3[5] + t1[3] * t3[0] - t1[5] * t3[2],
 - t1[1] * t3[3] - t1[2] * t3[4] + t1[3] * t3[1] + t1[4] * t3[2],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3] + t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Sta (
 - t4[3] * t6[0] + t4[6] * t6[2] - t4[7] * t6[1] + t4[11] * t6[4] - t4[12] * t6[3] + t4[15] * t6[5],
 - t4[3] * t6[1] - t4[5] * t6[2] + t4[7] * t6[0] + t4[11] * t6[5] - t4[13] * t6[3] - t4[15] * t6[4],
 - t4[3] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] + t4[12] * t6[5] - t4[13] * t6[4] + t4[15] * t6[3],
 - t4[3] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5],
 - t4[3] * t6[4] + t4[5] * t6[3] - t4[7] * t6[5],
 - t4[3] * t6[5] + t4[6] * t6[3] + t4[7] * t6[4],
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[4] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] - t4[12] * t6[0] - t4[13] * t6[1] - t4[14] * t6[2] - t4[15] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[4] * t6[4] - t4[8] * t6[3] + t4[10] * t6[5] + t4[11] * t6[0] - t4[13] * t6[2] + t4[14] * t6[1] + t4[15] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[4] * t6[5] - t4[9] * t6[3] - t4[10] * t6[4] + t4[11] * t6[1] + t4[12] * t6[2] - t4[14] * t6[0] - t4[15] * t6[0]
);

}
		
	
	  	
template<>
inline Sta re (const Sta& sta, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Sta& t2 = sta;
Sta t3 = involute( t2);
Pnt_Par t4 (
 - t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[6] + t1[4] * t3[3],
t1[0] * t3[0] - t1[2] * t3[2] + t1[3] * t3[7] + t1[4] * t3[4],
t1[0] * t3[1] + t1[1] * t3[2] + t1[3] * t3[8] + t1[4] * t3[5],
t1[0] * t3[3] + t1[1] * t3[4] + t1[2] * t3[5],
t1[0] * t3[6] + t1[1] * t3[7] + t1[2] * t3[8],
t1[0] * t3[4] - t1[1] * t3[3] + t1[3] * t3[0],
t1[0] * t3[5] - t1[2] * t3[3] + t1[3] * t3[1],
t1[1] * t3[5] - t1[2] * t3[4] + t1[3] * t3[2],
t1[0] * t3[7] - t1[1] * t3[6] + t1[4] * t3[0],
t1[0] * t3[8] - t1[2] * t3[6] + t1[4] * t3[1],
t1[1] * t3[8] - t1[2] * t3[7] + t1[4] * t3[2],
 - t1[3] * t3[6] + t1[4] * t3[3],
 - t1[3] * t3[7] + t1[4] * t3[4],
 - t1[3] * t3[8] + t1[4] * t3[5],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Sta (
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[4] - t4[8] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[4] - t4[9] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[4] - t4[10] * t6[3] + t4[14] * t6[0],
t4[0] * t6[3] - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] - t4[11] * t6[3],
t4[1] * t6[3] - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2] - t4[12] * t6[3],
t4[2] * t6[3] - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1] - t4[13] * t6[3],
t4[0] * t6[4] - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] + t4[11] * t6[4],
t4[1] * t6[4] - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2] + t4[12] * t6[4],
t4[2] * t6[4] - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1] + t4[13] * t6[4]
);

}
		
	
	  	
template<>
inline Sta re (const Sta& sta, const Par& par) {					
					
const Par& t1 = par;
const Sta& t2 = sta;
Sta t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[6] + t1[4] * t3[7] + t1[5] * t3[8] + t1[6] * t3[3] + t1[7] * t3[4] + t1[8] * t3[5],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[7] - t1[4] * t3[6] + t1[6] * t3[4] - t1[7] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] + t1[3] * t3[8] - t1[5] * t3[6] + t1[6] * t3[5] - t1[8] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[4] * t3[8] - t1[5] * t3[7] + t1[7] * t3[5] - t1[8] * t3[4],
t1[0] * t3[4] + t1[1] * t3[5] - t1[4] * t3[0] - t1[5] * t3[1] - t1[9] * t3[3],
 - t1[0] * t3[3] + t1[2] * t3[5] + t1[3] * t3[0] - t1[5] * t3[2] - t1[9] * t3[4],
 - t1[1] * t3[3] - t1[2] * t3[4] + t1[3] * t3[1] + t1[4] * t3[2] - t1[9] * t3[5],
t1[0] * t3[7] + t1[1] * t3[8] - t1[7] * t3[0] - t1[8] * t3[1] + t1[9] * t3[6],
 - t1[0] * t3[6] + t1[2] * t3[8] + t1[6] * t3[0] - t1[8] * t3[2] + t1[9] * t3[7],
 - t1[1] * t3[6] - t1[2] * t3[7] + t1[6] * t3[1] + t1[7] * t3[2] + t1[9] * t3[8],
 - t1[3] * t3[6] - t1[4] * t3[7] - t1[5] * t3[8] + t1[6] * t3[3] + t1[7] * t3[4] + t1[8] * t3[5],
 - t1[3] * t3[7] + t1[4] * t3[6] + t1[6] * t3[4] - t1[7] * t3[3] + t1[9] * t3[0],
 - t1[3] * t3[8] + t1[5] * t3[6] + t1[6] * t3[5] - t1[8] * t3[3] + t1[9] * t3[1],
 - t1[4] * t3[8] + t1[5] * t3[7] + t1[7] * t3[5] - t1[8] * t3[4] + t1[9] * t3[2],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3] + t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0],
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6] + t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Sta (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[7] - t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[11] * t6[9] + t4[14] * t6[8] + t4[15] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[8] - t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[12] * t6[9] - t4[14] * t6[7] - t4[15] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[8] - t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[13] * t6[9] + t4[14] * t6[6] + t4[15] * t6[3],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[4] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[10] * t6[3] - t4[11] * t6[4] - t4[12] * t6[5] - t4[14] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] + t4[5] * t6[9] - t4[6] * t6[2] - t4[10] * t6[4] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] + t4[6] * t6[9] - t4[10] * t6[5] + t4[12] * t6[3] + t4[13] * t6[4] - t4[14] * t6[0],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[7] * t6[9] - t4[8] * t6[0] - t4[9] * t6[1] + t4[10] * t6[6] + t4[11] * t6[7] + t4[12] * t6[8] - t4[15] * t6[2],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[8] + t4[7] * t6[0] - t4[8] * t6[9] - t4[9] * t6[2] + t4[10] * t6[7] - t4[11] * t6[6] + t4[13] * t6[8] + t4[15] * t6[1],
t4[0] * t6[8] - t4[2] * t6[6] - t4[3] * t6[7] + t4[7] * t6[1] + t4[8] * t6[2] - t4[9] * t6[9] + t4[10] * t6[8] - t4[12] * t6[6] - t4[13] * t6[7] - t4[15] * t6[0]
);

}
		
	
	  	
template<>
inline Sta re (const Sta& sta, const Cir& cir) {					
					
const Cir& t1 = cir;
const Sta& t2 = sta;
Sta t3 = involute( t2);
Rtc t4 (
t1[0] * t3[7] + t1[1] * t3[8] + t1[3] * t3[4] + t1[4] * t3[5] - t1[9] * t3[2],
 - t1[0] * t3[6] + t1[2] * t3[8] - t1[3] * t3[3] + t1[5] * t3[5] + t1[9] * t3[1],
 - t1[1] * t3[6] - t1[2] * t3[7] - t1[4] * t3[3] - t1[5] * t3[4] - t1[9] * t3[0],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] - t1[6] * t3[3] - t1[7] * t3[4] - t1[8] * t3[5],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2] + t1[6] * t3[6] + t1[7] * t3[7] + t1[8] * t3[8],
 - t1[1] * t3[2] + t1[2] * t3[1] - t1[6] * t3[4] + t1[7] * t3[3] + t1[9] * t3[5],
t1[0] * t3[2] - t1[2] * t3[0] - t1[6] * t3[5] + t1[8] * t3[3] - t1[9] * t3[4],
 - t1[0] * t3[1] + t1[1] * t3[0] - t1[7] * t3[5] + t1[8] * t3[4] + t1[9] * t3[3],
 - t1[4] * t3[2] + t1[5] * t3[1] + t1[6] * t3[7] - t1[7] * t3[6] + t1[9] * t3[8],
t1[3] * t3[2] - t1[5] * t3[0] + t1[6] * t3[8] - t1[8] * t3[6] - t1[9] * t3[7],
 - t1[3] * t3[1] + t1[4] * t3[0] + t1[7] * t3[8] - t1[8] * t3[7] + t1[9] * t3[6],
 - t1[0] * t3[7] - t1[1] * t3[8] + t1[3] * t3[4] + t1[4] * t3[5] - t1[7] * t3[0] - t1[8] * t3[1],
t1[0] * t3[6] - t1[2] * t3[8] - t1[3] * t3[3] + t1[5] * t3[5] + t1[6] * t3[0] - t1[8] * t3[2],
t1[1] * t3[6] + t1[2] * t3[7] - t1[4] * t3[3] - t1[5] * t3[4] + t1[6] * t3[1] + t1[7] * t3[2],
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6] + t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[3],
 - t1[0] * t3[8] + t1[1] * t3[7] - t1[2] * t3[6] + t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[3] + t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Sta (
t4[2] * t6[9] - t4[3] * t6[3] - t4[4] * t6[0] + t4[6] * t6[5] - t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[15] * t6[8],
 - t4[1] * t6[9] - t4[3] * t6[4] - t4[4] * t6[1] - t4[5] * t6[5] + t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[15] * t6[7],
t4[0] * t6[9] - t4[3] * t6[5] - t4[4] * t6[2] + t4[5] * t6[4] - t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[12] * t6[8] - t4[13] * t6[7] + t4[15] * t6[6],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[9] + t4[12] * t6[0] + t4[13] * t6[1] - t4[14] * t6[2] + t4[15] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[3] * t6[7] + t4[5] * t6[6] - t4[6] * t6[9] - t4[7] * t6[8] - t4[11] * t6[0] + t4[13] * t6[2] + t4[14] * t6[1] - t4[15] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[8] + t4[5] * t6[9] + t4[6] * t6[6] + t4[7] * t6[7] - t4[11] * t6[1] - t4[12] * t6[2] - t4[14] * t6[0] + t4[15] * t6[0],
 - t4[1] * t6[3] - t4[2] * t6[4] + t4[4] * t6[6] + t4[8] * t6[7] + t4[9] * t6[8] + t4[10] * t6[9] - t4[12] * t6[3] - t4[13] * t6[4] - t4[14] * t6[5] - t4[15] * t6[5],
t4[0] * t6[3] - t4[2] * t6[5] + t4[4] * t6[7] - t4[8] * t6[6] - t4[9] * t6[9] + t4[10] * t6[8] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[4] + t4[15] * t6[4],
t4[0] * t6[4] + t4[1] * t6[5] + t4[4] * t6[8] + t4[8] * t6[9] - t4[9] * t6[6] - t4[10] * t6[7] + t4[11] * t6[4] + t4[12] * t6[5] - t4[14] * t6[3] - t4[15] * t6[3]
);

}
		
	
	  	
template<>
inline Sta re (const Sta& sta, const Sph& sph) {					
					
const Sph& t1 = sph;
const Sta& t2 = sta;
Sta t3 = involute( t2);
Pnt_Cir t4 (
t1[3] * t3[8] + t1[4] * t3[5],
 - t1[3] * t3[7] - t1[4] * t3[4],
t1[3] * t3[6] + t1[4] * t3[3],
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
 - t1[0] * t3[5] + t1[1] * t3[4] - t1[2] * t3[3],
t1[0] * t3[8] - t1[1] * t3[7] + t1[2] * t3[6]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Sta (
t4[5] * t6[4] + t4[8] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1],
 - t4[4] * t6[4] - t4[7] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0],
t4[3] * t6[4] + t4[6] * t6[3] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0],
 - t4[2] * t6[3] - t4[4] * t6[0] - t4[5] * t6[1] + t4[12] * t6[3] - t4[13] * t6[2],
t4[1] * t6[3] + t4[3] * t6[0] - t4[5] * t6[2] - t4[11] * t6[3] + t4[13] * t6[1],
 - t4[0] * t6[3] + t4[3] * t6[1] + t4[4] * t6[2] + t4[10] * t6[3] - t4[13] * t6[0],
 - t4[2] * t6[4] + t4[7] * t6[0] + t4[8] * t6[1] - t4[12] * t6[4] + t4[14] * t6[2],
t4[1] * t6[4] - t4[6] * t6[0] + t4[8] * t6[2] + t4[11] * t6[4] - t4[14] * t6[1],
 - t4[0] * t6[4] - t4[6] * t6[1] - t4[7] * t6[2] - t4[10] * t6[4] + t4[14] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	