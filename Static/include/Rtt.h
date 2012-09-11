		#ifndef RTT_H_INCLUDED
		#define RTT_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Rtt gp (const Rtt& a, const Sca& b) { 
	return Rtt (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Sca*)(&b));
}			
		 
inline Tnv_Vec gp (const Rtt& a, const Ori& b) { 
	return Tnv_Vec (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Ori*)(&b));
}			
		 
inline Par_Drb gp (const Rtt& a, const Inf& b) { 
	return Par_Drb (
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
 - a[7] * b[0],
a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Inf*)(&b));
}			
		 
inline Vec_Dal gp (const Rtt& a, const Mnk& b) { 
	return Vec_Dal (
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Mnk*)(&b));
}			
		 
inline Rtc gp (const Rtt& a, const Hyp& b) { 
	return Rtc (
 - a[4] * b[1],
 - a[5] * b[1],
 - a[6] * b[1],
a[0] * b[0],
a[0] * b[1],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1],
a[4] * b[1],
a[5] * b[1],
a[6] * b[1],
 - a[7] * b[1],
a[7] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Hyp*)(&b));
}			
		 
inline Biv_Dal gp (const Rtt& a, const Pss& b) { 
	return Biv_Dal (
a[7] * b[0],
 - a[6] * b[0],
a[5] * b[0],
 - a[4] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Pss*)(&b));
}			
		 
inline Rtc gp (const Rtt& a, const Pnt& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[4],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[4],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[4],
a[0] * b[3] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[0] * b[4],
a[1] * b[3] - a[4] * b[1] + a[5] * b[0] - a[7] * b[2],
a[2] * b[3] - a[4] * b[2] + a[6] * b[0] + a[7] * b[1],
a[3] * b[3] - a[5] * b[2] + a[6] * b[1] - a[7] * b[0],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4],
a[4] * b[4],
a[5] * b[4],
a[6] * b[4],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[7] * b[4],
a[7] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Pnt*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Par& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[6] + a[5] * b[7] + a[6] * b[8],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[7] - a[5] * b[6] + a[7] * b[8],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[8] - a[6] * b[6] - a[7] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[8] - a[6] * b[7] + a[7] * b[6],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[4] * b[9] - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] + a[5] * b[9] - a[6] * b[2] + a[7] * b[1],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] + a[6] * b[9] - a[7] * b[0],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7],
a[0] * b[9] - a[4] * b[6] - a[5] * b[7] - a[6] * b[8],
a[1] * b[9] - a[4] * b[7] + a[5] * b[6] - a[7] * b[8],
a[2] * b[9] - a[4] * b[8] + a[6] * b[6] + a[7] * b[7],
a[3] * b[9] - a[5] * b[8] + a[6] * b[7] - a[7] * b[6],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] + a[7] * b[9],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Par*)(&b));
}			
		 
inline Rtc gp (const Rtt& a, const Cir& b) { 
	return Rtc (
 - a[3] * b[9] + a[5] * b[3] + a[6] * b[4] + a[7] * b[5],
a[2] * b[9] - a[4] * b[3] + a[6] * b[5] - a[7] * b[4],
 - a[1] * b[9] - a[4] * b[4] - a[5] * b[5] + a[7] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[4] * b[6] - a[5] * b[7] - a[6] * b[8] + a[7] * b[9],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[4] * b[7] + a[5] * b[6] - a[6] * b[9] - a[7] * b[8],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[4] * b[8] + a[5] * b[9] + a[6] * b[6] + a[7] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[9] - a[5] * b[8] + a[6] * b[7] - a[7] * b[6],
a[0] * b[3] - a[2] * b[5] + a[3] * b[4],
a[0] * b[4] + a[1] * b[5] - a[3] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[5] * b[3] - a[6] * b[4] - a[7] * b[5],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[4] * b[3] - a[6] * b[5] + a[7] * b[4],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[4] * b[4] + a[5] * b[5] - a[7] * b[3],
a[0] * b[9] - a[4] * b[5] + a[5] * b[4] - a[6] * b[3],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[4] * b[5] - a[5] * b[4] + a[6] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Cir*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Sph& b) { 
	return Mtt (
 - a[7] * b[4],
a[6] * b[4],
 - a[5] * b[4],
a[4] * b[4],
 - a[3] * b[3] - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[2] * b[3] + a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
 - a[1] * b[3] + a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
 - a[3] * b[4],
a[2] * b[4],
 - a[1] * b[4],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[7] * b[4],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[6] * b[4],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[5] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[4],
a[0] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[0] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Sph*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Sta& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[6] + a[5] * b[7] + a[6] * b[8],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[7] - a[5] * b[6] + a[7] * b[8],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[8] - a[6] * b[6] - a[7] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[8] - a[6] * b[7] + a[7] * b[6],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7],
 - a[4] * b[6] - a[5] * b[7] - a[6] * b[8],
 - a[4] * b[7] + a[5] * b[6] - a[7] * b[8],
 - a[4] * b[8] + a[6] * b[6] + a[7] * b[7],
 - a[5] * b[8] + a[6] * b[7] - a[7] * b[6],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Sta*)(&b));
}			
		 
inline Mtd gp (const Rtt& a, const Drv& b) { 
	return Mtd (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[5] * b[2] - a[6] * b[1] + a[7] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
 - a[4] * b[1] + a[5] * b[0] - a[7] * b[2],
 - a[4] * b[2] + a[6] * b[0] + a[7] * b[1],
 - a[5] * b[2] + a[6] * b[1] - a[7] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Drv*)(&b));
}			
		 
inline Par_Drb gp (const Rtt& a, const Drb& b) { 
	return Par_Drb (
a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
 - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
 - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Drb*)(&b));
}			
		 
inline Mtd gp (const Rtt& a, const Drt& b) { 
	return Mtd (
 - a[7] * b[0],
a[6] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[7] * b[0],
 - a[6] * b[0],
a[5] * b[0],
 - a[4] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Drt*)(&b));
}			
		 
inline Tnv_Biv gp (const Rtt& a, const Tnv& b) { 
	return Tnv_Biv (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv_Vec gp (const Rtt& a, const Tnb& b) { 
	return Tnv_Vec (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnv_Biv gp (const Rtt& a, const Tnt& b) { 
	return Tnv_Biv (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Tnt*)(&b));
}			
		 
inline Rtc gp (const Rtt& a, const Lin& b) { 
	return Rtc (
a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
 - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
 - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
 - a[4] * b[3] - a[5] * b[4] - a[6] * b[5],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[4] * b[4] + a[5] * b[3] - a[7] * b[5],
 - a[4] * b[5] + a[6] * b[3] + a[7] * b[4],
 - a[5] * b[5] + a[6] * b[4] - a[7] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Lin*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Pln& b) { 
	return Mtt (
 - a[7] * b[3],
a[6] * b[3],
 - a[5] * b[3],
a[4] * b[3],
 - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[7] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[6] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Pln*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Flp& b) { 
	return Mtt (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[5] * b[2] - a[6] * b[1] + a[7] * b[0],
a[4] * b[3],
a[5] * b[3],
a[6] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[1] * b[3] - a[4] * b[1] + a[5] * b[0] - a[7] * b[2],
a[2] * b[3] - a[4] * b[2] + a[6] * b[0] + a[7] * b[1],
a[3] * b[3] - a[5] * b[2] + a[6] * b[1] - a[7] * b[0],
a[7] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Flp*)(&b));
}			
		 
inline Rtc gp (const Rtt& a, const Dfp& b) { 
	return Rtc (
 - a[3] * b[3] + a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
a[2] * b[3] - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
 - a[1] * b[3] - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
a[7] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[6] * b[3],
a[5] * b[3],
 - a[4] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[0] * b[3] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Dfp*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Dll& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[4] - a[5] * b[3] + a[7] * b[5],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[5] - a[6] * b[3] - a[7] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[5] - a[6] * b[4] + a[7] * b[3],
 - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
 - a[4] * b[3] - a[5] * b[4] - a[6] * b[5],
 - a[4] * b[4] + a[5] * b[3] - a[7] * b[5],
 - a[4] * b[5] + a[6] * b[3] + a[7] * b[4],
 - a[5] * b[5] + a[6] * b[4] - a[7] * b[3],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Dll*)(&b));
}			
		 
inline Rtc gp (const Rtt& a, const Dlp& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[3],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[0] * b[3],
 - a[4] * b[1] + a[5] * b[0] - a[7] * b[2],
 - a[4] * b[2] + a[6] * b[0] + a[7] * b[1],
 - a[5] * b[2] + a[6] * b[1] - a[7] * b[0],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[4] * b[3],
a[5] * b[3],
a[6] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[7] * b[3],
a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Dlp*)(&b));
}			
		 
inline Vec_Afl gp (const Rtt& a, const Vec& b) { 
	return Vec_Afl (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
 - a[4] * b[1] + a[5] * b[0] - a[7] * b[2],
 - a[4] * b[2] + a[6] * b[0] + a[7] * b[1],
 - a[5] * b[2] + a[6] * b[1] - a[7] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Vec*)(&b));
}			
		 
inline Rtt gp (const Rtt& a, const Biv& b) { 
	return Rtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Biv*)(&b));
}			
		 
inline Vec_Afl gp (const Rtt& a, const Tri& b) { 
	return Vec_Afl (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[7] * b[0],
 - a[6] * b[0],
a[5] * b[0],
 - a[4] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Tri*)(&b));
}			
		 
inline Vec_Afl gp (const Rtt& a, const Aff& b) { 
	return Vec_Afl (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[1] * b[3] - a[4] * b[1] + a[5] * b[0] - a[7] * b[2],
a[2] * b[3] - a[4] * b[2] + a[6] * b[0] + a[7] * b[1],
a[3] * b[3] - a[5] * b[2] + a[6] * b[1] - a[7] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Aff*)(&b));
}			
		 
inline Rtt gp (const Rtt& a, const Afl& b) { 
	return Rtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Afl*)(&b));
}			
		 
inline Vec_Afl gp (const Rtt& a, const Afp& b) { 
	return Vec_Afl (
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[7] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[6] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Afp*)(&b));
}			
		 
inline Vec_Dal gp (const Rtt& a, const Dap& b) { 
	return Vec_Dal (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[4] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] + a[5] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] + a[6] * b[3],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Dap*)(&b));
}			
		 
inline Vec_Dal gp (const Rtt& a, const Daf& b) { 
	return Vec_Dal (
 - a[3] * b[3] - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[2] * b[3] + a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
 - a[1] * b[3] + a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Daf*)(&b));
}			
		 
inline Biv_Dal gp (const Rtt& a, const Dal& b) { 
	return Biv_Dal (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[4] * b[3] - a[5] * b[4] - a[6] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[4] * b[4] + a[5] * b[3] - a[7] * b[5],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[4] * b[5] + a[6] * b[3] + a[7] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[5] * b[5] + a[6] * b[4] - a[7] * b[3],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Dal*)(&b));
}			
		 
inline Biv_Dal gp (const Rtt& a, const Mnv& b) { 
	return Biv_Dal (
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
 - a[4] * b[1] + a[5] * b[0] - a[7] * b[2],
 - a[4] * b[2] + a[6] * b[0] + a[7] * b[1],
 - a[5] * b[2] + a[6] * b[1] - a[7] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Mnv*)(&b));
}			
		 
inline Rtt gp (const Rtt& a, const Rot& b) { 
	return Rtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Rot*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Mot& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[7] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[7] + a[7] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[7] - a[6] * b[4] - a[7] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[7] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5],
 - a[4] * b[4] - a[5] * b[5] - a[6] * b[6] + a[7] * b[7],
 - a[4] * b[5] + a[5] * b[4] - a[6] * b[7] - a[7] * b[6],
 - a[4] * b[6] + a[5] * b[7] + a[6] * b[4] + a[7] * b[5],
 - a[4] * b[7] - a[5] * b[6] + a[6] * b[5] - a[7] * b[4],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Mot*)(&b));
}			
		 
inline Rvd gp (const Rtt& a, const Dil& b) { 
	return Rvd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0] + a[4] * b[1],
a[5] * b[0] + a[5] * b[1],
a[6] * b[0] + a[6] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1],
a[7] * b[0] + a[7] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Dil*)(&b));
}			
		 
inline Rtt gp (const Rtt& a, const Trv& b) { 
	return Rtt (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[0],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[5] * b[0],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[6] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Trv*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Mtd& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[7] * b[11],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[11] + a[7] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[11] - a[6] * b[4] - a[7] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[11] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[4] * b[0] + a[4] * b[7] - a[5] * b[1] - a[5] * b[8] - a[6] * b[2] - a[6] * b[9] - a[7] * b[3] - a[7] * b[10],
a[4] * b[1] + a[4] * b[8] + a[5] * b[0] + a[5] * b[7] - a[6] * b[3] - a[6] * b[10] + a[7] * b[2] + a[7] * b[9],
a[4] * b[2] + a[4] * b[9] + a[5] * b[3] + a[5] * b[10] + a[6] * b[0] + a[6] * b[7] - a[7] * b[1] - a[7] * b[8],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] - a[4] * b[4] - a[5] * b[5] - a[6] * b[6] + a[7] * b[11],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9] - a[4] * b[5] + a[5] * b[4] - a[6] * b[11] - a[7] * b[6],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8] - a[4] * b[6] + a[5] * b[11] + a[6] * b[4] + a[7] * b[5],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7] - a[4] * b[11] - a[5] * b[6] + a[6] * b[5] - a[7] * b[4],
a[4] * b[3] + a[4] * b[10] - a[5] * b[2] - a[5] * b[9] + a[6] * b[1] + a[6] * b[8] + a[7] * b[0] + a[7] * b[7],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Mtd*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Trs& b) { 
	return Mtt (
a[0] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3],
a[1] * b[0] + a[4] * b[2] - a[5] * b[1] + a[7] * b[3],
a[2] * b[0] + a[4] * b[3] - a[6] * b[1] - a[7] * b[2],
a[3] * b[0] + a[5] * b[3] - a[6] * b[2] + a[7] * b[1],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2],
 - a[4] * b[1] - a[5] * b[2] - a[6] * b[3],
 - a[4] * b[2] + a[5] * b[1] - a[7] * b[3],
 - a[4] * b[3] + a[6] * b[1] + a[7] * b[2],
 - a[5] * b[3] + a[6] * b[2] - a[7] * b[1],
a[7] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Rtt& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[14] - a[4] * b[4] + a[5] * b[8] + a[6] * b[9] + a[7] * b[10],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14] + a[3] * b[2] - a[4] * b[8] - a[5] * b[4] + a[6] * b[10] - a[7] * b[9],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0] - a[3] * b[1] - a[4] * b[9] - a[5] * b[10] - a[6] * b[4] + a[7] * b[8],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7] - a[4] * b[0] - a[4] * b[11] - a[5] * b[1] - a[5] * b[12] - a[6] * b[2] - a[6] * b[13] + a[7] * b[14] + a[7] * b[15],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7] + a[3] * b[6] - a[4] * b[1] - a[4] * b[12] + a[5] * b[0] + a[5] * b[11] - a[6] * b[14] - a[6] * b[15] - a[7] * b[2] - a[7] * b[13],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3] - a[3] * b[5] - a[4] * b[2] - a[4] * b[13] + a[5] * b[14] + a[5] * b[15] + a[6] * b[0] + a[6] * b[11] + a[7] * b[1] + a[7] * b[12],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[3] - a[4] * b[14] - a[4] * b[15] - a[5] * b[2] - a[5] * b[13] + a[6] * b[1] + a[6] * b[12] - a[7] * b[0] - a[7] * b[11],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10] + a[3] * b[9],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4] - a[3] * b[8],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[4],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13] - a[3] * b[15] + a[4] * b[4] - a[5] * b[8] - a[6] * b[9] - a[7] * b[10],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15] + a[3] * b[13] + a[4] * b[8] + a[5] * b[4] - a[6] * b[10] + a[7] * b[9],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11] - a[3] * b[12] + a[4] * b[9] + a[5] * b[10] + a[6] * b[4] - a[7] * b[8],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[4] * b[10] + a[5] * b[9] - a[6] * b[8] - a[7] * b[4],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12] + a[3] * b[11] + a[4] * b[10] - a[5] * b[9] + a[6] * b[8] + a[7] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] - a[7] * b[15],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[6] * b[15] + a[7] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[5] * b[15] - a[6] * b[7] - a[7] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[15] + a[5] * b[9] - a[6] * b[8] + a[7] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[7] * b[3] - a[7] * b[13],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] + a[7] * b[2] + a[7] * b[12],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[7] * b[1] - a[7] * b[11],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[15],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15] + a[3] * b[9],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7] - a[3] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[15],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] - a[6] * b[15] - a[7] * b[9],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[5] * b[15] + a[6] * b[7] + a[7] * b[8],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[4] * b[15] - a[5] * b[9] + a[6] * b[8] - a[7] * b[7],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] + a[7] * b[0] + a[7] * b[10],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Mtt*)(&b));
}			
		 
inline Rtt gp (const Rtt& a, const Rtt& b) { 
	return Rtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7] + a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6] + a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Rtt*)(&b));
}			
		 
inline Rvd gp (const Rtt& a, const Rtd& b) { 
	return Rvd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[4] * b[0] + a[4] * b[4] - a[5] * b[1] - a[5] * b[5] - a[6] * b[2] - a[6] * b[6] - a[7] * b[3] - a[7] * b[7],
a[4] * b[1] + a[4] * b[5] + a[5] * b[0] + a[5] * b[4] - a[6] * b[3] - a[6] * b[7] + a[7] * b[2] + a[7] * b[6],
a[4] * b[2] + a[4] * b[6] + a[5] * b[3] + a[5] * b[7] + a[6] * b[0] + a[6] * b[4] - a[7] * b[1] - a[7] * b[5],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7] + a[3] * b[6],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4] - a[3] * b[5],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[4],
a[4] * b[3] + a[4] * b[7] - a[5] * b[2] - a[5] * b[6] + a[6] * b[1] + a[6] * b[5] + a[7] * b[0] + a[7] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Rtd*)(&b));
}			
		 
inline Rvd gp (const Rtt& a, const Tvd& b) { 
	return Rvd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[0] + a[4] * b[4],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[5] * b[0] + a[5] * b[4],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[6] * b[0] + a[6] * b[4],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] + a[7] * b[0] + a[7] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Tvd*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Tsd& b) { 
	return Mtt (
a[0] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3],
a[1] * b[0] + a[4] * b[2] - a[5] * b[1] + a[7] * b[3],
a[2] * b[0] + a[4] * b[3] - a[6] * b[1] - a[7] * b[2],
a[3] * b[0] + a[5] * b[3] - a[6] * b[2] + a[7] * b[1],
a[4] * b[0] + a[4] * b[4],
a[5] * b[0] + a[5] * b[4],
a[6] * b[0] + a[6] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2],
a[0] * b[4] - a[4] * b[1] - a[5] * b[2] - a[6] * b[3],
a[1] * b[4] - a[4] * b[2] + a[5] * b[1] - a[7] * b[3],
a[2] * b[4] - a[4] * b[3] + a[6] * b[1] + a[7] * b[2],
a[3] * b[4] - a[5] * b[3] + a[6] * b[2] - a[7] * b[1],
a[7] * b[0] + a[7] * b[4],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Trt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[7] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[6] * b[7] - a[7] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[9] - a[6] * b[8] + a[7] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[7] * b[3] - a[7] * b[13],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] + a[7] * b[2] + a[7] * b[12],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[7] * b[1] - a[7] * b[11],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] - a[7] * b[9],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[6] * b[7] + a[7] * b[8],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[5] * b[9] + a[6] * b[8] - a[7] * b[7],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] + a[7] * b[0] + a[7] * b[10],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Trt*)(&b));
}			
		 
inline Rvd gp (const Rtt& a, const Rvd& b) { 
	return Rvd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11] + a[4] * b[0] + a[4] * b[7] - a[5] * b[1] - a[5] * b[8] - a[6] * b[2] - a[6] * b[9] - a[7] * b[3] - a[7] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6] + a[4] * b[1] + a[4] * b[8] + a[5] * b[0] + a[5] * b[7] - a[6] * b[3] - a[6] * b[10] + a[7] * b[2] + a[7] * b[9],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[9] + a[5] * b[3] + a[5] * b[10] + a[6] * b[0] + a[6] * b[7] - a[7] * b[1] - a[7] * b[8],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[10] - a[5] * b[2] - a[5] * b[9] + a[6] * b[1] + a[6] * b[8] + a[7] * b[0] + a[7] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Tst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[7] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[6] * b[7] - a[7] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[9] - a[6] * b[8] + a[7] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[7] * b[3] - a[7] * b[13],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] + a[7] * b[2] + a[7] * b[12],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[7] * b[1] - a[7] * b[11],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] - a[7] * b[9],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[6] * b[7] + a[7] * b[8],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[5] * b[9] + a[6] * b[8] - a[7] * b[7],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] + a[7] * b[0] + a[7] * b[10],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Tvt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] - a[7] * b[14],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[6] * b[14] + a[7] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[5] * b[14] - a[6] * b[7] - a[7] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[14] + a[5] * b[9] - a[6] * b[8] + a[7] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[7] * b[3] - a[7] * b[13],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] + a[7] * b[2] + a[7] * b[12],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[7] * b[1] - a[7] * b[11],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[14],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14] + a[3] * b[9],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7] - a[3] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[14],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] - a[6] * b[14] - a[7] * b[9],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[5] * b[14] + a[6] * b[7] + a[7] * b[8],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[4] * b[14] - a[5] * b[9] + a[6] * b[8] - a[7] * b[7],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] + a[7] * b[0] + a[7] * b[10],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Tvt*)(&b));
}			
		 
inline Mtt gp (const Rtt& a, const Bst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[7] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[6] * b[7] - a[7] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[9] - a[6] * b[8] + a[7] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] + a[4] * b[1] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] + a[7] * b[2],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] + a[6] * b[10] - a[7] * b[1],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8],
a[0] * b[10] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9],
a[1] * b[10] - a[4] * b[8] + a[5] * b[7] - a[7] * b[9],
a[2] * b[10] - a[4] * b[9] + a[6] * b[7] + a[7] * b[8],
a[3] * b[10] - a[5] * b[9] + a[6] * b[8] - a[7] * b[7],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0] + a[7] * b[10],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtt, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtt*)(&a),*(Bst*)(&b));
}			
		 
inline Rtt ip (const Rtt& a, const Rtt& b) { 
	return Rtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4] - a[3] * b[7],
a[0] * b[5] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7],
a[0] * b[7]
);
}			
		 
		
template<> inline MVBase ip_gen<Rtt, Rtt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Rtt*)(&a),*(Rtt*)(&b));
}			
		  	
template<>
inline Rtt sp (const Rtt& rtt, const Rot& rot) {					
					
const Rot& t1 = rot;
const Rtt& t2 = rtt;
Rtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1],
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Mot& mot) {					
					
const Mot& t1 = mot;
const Rtt& t2 = rtt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[7] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[7] + t1[7] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[4] - t1[7] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1],
t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[7] * t2[7],
t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[7] + t1[7] * t2[6],
t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[4] - t1[7] * t2[5],
t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] - t3[14] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[7] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[7] - t3[6] * t5[4] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[7] + t3[5] * t5[6] - t3[6] * t5[5] + t3[14] * t5[4],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1],
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[14] * t5[0]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Dil& dil) {					
					
const Dil& t1 = dil;
const Rtt& t2 = rtt;
Rvd t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4] - t1[1] * t2[4],
t1[0] * t2[5] - t1[1] * t2[5],
t1[0] * t2[6] - t1[1] * t2[6],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2],
t1[1] * t2[3],
t1[0] * t2[7] - t1[1] * t2[7]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] + t3[7] * t5[1],
t3[1] * t5[0] + t3[8] * t5[1],
t3[2] * t5[0] + t3[9] * t5[1],
t3[3] * t5[0] + t3[10] * t5[1],
t3[4] * t5[0] + t3[4] * t5[1],
t3[5] * t5[0] + t3[5] * t5[1],
t3[6] * t5[0] + t3[6] * t5[1],
t3[11] * t5[0] + t3[11] * t5[1]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Trv& trv) {					
					
const Trv& t1 = trv;
const Rtt& t2 = rtt;
Rtt t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4] + t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3],
t1[0] * t2[6] + t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0],
t1[0] * t2[7] + t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Rtt (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0],
t3[3] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0],
t3[1] * t5[3] - t3[2] * t5[2] + t3[3] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Rtt& t2 = rtt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[11] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[7] + t1[11] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[4] - t1[11] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[5] + t1[11] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] - t1[7] * t2[4] - t1[8] * t2[5] - t1[9] * t2[6] + t1[10] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] - t1[7] * t2[5] + t1[8] * t2[4] - t1[9] * t2[7] - t1[10] * t2[6],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] - t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[4] + t1[10] * t2[5],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[11] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[11] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[11] * t2[1],
t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3] - t1[11] * t2[7],
t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[7] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2] + t1[11] * t2[6],
t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[4] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1] - t1[11] * t2[5],
t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0] + t1[11] * t2[4],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] - t1[7] * t2[7] - t1[8] * t2[6] + t1[9] * t2[5] - t1[10] * t2[4],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[11] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] + t3[10] * t5[7] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] - t3[14] * t5[11],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[11] - t3[6] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[11] + t3[5] * t5[6] - t3[6] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[14] * t5[4],
t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[14] * t5[3] - t3[14] * t5[10],
t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[14] * t5[2] + t3[14] * t5[9],
t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[14] * t5[1] - t3[14] * t5[8],
t3[4] * t5[3] + t3[4] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] + t3[14] * t5[0] + t3[14] * t5[7]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Trs& trs) {					
					
const Trs& t1 = trs;
const Rtt& t2 = rtt;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6],
t1[0] * t2[1] + t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[7],
t1[0] * t2[2] + t1[1] * t2[6] - t1[2] * t2[7] - t1[3] * t2[4],
t1[0] * t2[3] + t1[1] * t2[7] + t1[2] * t2[6] - t1[3] * t2[5],
t1[0] * t2[4],
t1[0] * t2[5],
t1[0] * t2[6],
t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3],
t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0],
t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[7],
t1[1] * t2[6] - t1[2] * t2[7] - t1[3] * t2[4],
t1[1] * t2[7] + t1[2] * t2[6] - t1[3] * t2[5],
t1[0] * t2[7],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3],
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1] + t3[14] * t5[3],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1] - t3[14] * t5[2],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2] + t3[14] * t5[1],
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0],
t3[14] * t5[0]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Rtt& t2 = rtt;
Rtc t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] + t1[4] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] - t1[10] * t2[7] - t1[14] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[4] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7] + t1[10] * t2[6] + t1[14] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] + t1[4] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4] - t1[10] * t2[5] - t1[14] * t2[1],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5] - t1[13] * t2[6] - t1[14] * t2[7] + t1[15] * t2[7],
t1[4] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[7] + t1[14] * t2[6] - t1[15] * t2[6],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] + t1[3] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1] - t1[11] * t2[6] + t1[12] * t2[7] + t1[13] * t2[4] - t1[14] * t2[5] + t1[15] * t2[5],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0] - t1[11] * t2[7] - t1[12] * t2[6] + t1[13] * t2[5] + t1[14] * t2[4] - t1[15] * t2[4],
t1[4] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2],
t1[4] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1],
t1[4] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0],
t1[4] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] - t1[10] * t2[7] + t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[15] * t2[3],
t1[4] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7] + t1[10] * t2[6] + t1[11] * t2[1] + t1[12] * t2[0] - t1[13] * t2[3] + t1[15] * t2[2],
t1[4] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4] - t1[10] * t2[5] + t1[11] * t2[2] + t1[12] * t2[3] + t1[13] * t2[0] - t1[15] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[4] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[4] + t1[14] * t2[0],
t1[4] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[4] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11],
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[0] - t3[3] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] + t3[7] * t5[14] + t3[7] * t5[15] - t3[11] * t5[3] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[7] * t5[2] - t3[7] * t5[13] - t3[11] * t5[5] - t3[12] * t5[3] + t3[13] * t5[7] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[2] - t3[3] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] + t3[7] * t5[1] + t3[7] * t5[12] - t3[11] * t5[6] - t3[12] * t5[7] - t3[13] * t5[3] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] - t3[3] * t5[14] - t3[3] * t5[15] - t3[5] * t5[2] - t3[5] * t5[13] + t3[6] * t5[1] + t3[6] * t5[12] - t3[7] * t5[0] - t3[7] * t5[11] - t3[11] * t5[7] + t3[12] * t5[6] - t3[13] * t5[5] + t3[14] * t5[3] - t3[15] * t5[3]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Rtt& t2 = rtt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] - t1[15] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7] + t1[15] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4] - t1[15] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[15] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] + t1[13] * t2[7] - t1[14] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] - t1[10] * t2[5] + t1[11] * t2[4] - t1[12] * t2[7] - t1[13] * t2[6] + t1[14] * t2[2],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[4] + t1[13] * t2[5] - t1[14] * t2[1],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[15] * t2[3],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[15] * t2[2],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[15] * t2[1],
t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3] - t1[15] * t2[7],
t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] + t1[15] * t2[6],
t1[7] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] - t1[15] * t2[5],
t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] + t1[15] * t2[4],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[10] * t2[7] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4] + t1[14] * t2[0],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[15] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[10] * t5[14] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Rtt& t2 = rtt;
Rvd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[7] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[7] - t1[7] * t2[6],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] - t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[4] + t1[7] * t2[5],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] - t1[4] * t2[7] - t1[5] * t2[6] + t1[6] * t2[5] - t1[7] * t2[4]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[7] + t3[10] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] + t3[8] * t5[7] + t3[9] * t5[4] - t3[10] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[7] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[1] - t3[5] * t5[5] - t3[6] * t5[2] - t3[6] * t5[6] - t3[11] * t5[3] - t3[11] * t5[7],
t3[4] * t5[1] + t3[4] * t5[5] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[3] - t3[6] * t5[7] + t3[11] * t5[2] + t3[11] * t5[6],
t3[4] * t5[2] + t3[4] * t5[6] + t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[0] + t3[6] * t5[4] - t3[11] * t5[1] - t3[11] * t5[5],
t3[4] * t5[3] + t3[4] * t5[7] - t3[5] * t5[2] - t3[5] * t5[6] + t3[6] * t5[1] + t3[6] * t5[5] + t3[11] * t5[0] + t3[11] * t5[4]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Rtt& t2 = rtt;
Rvd t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4] + t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[4],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3] - t1[4] * t2[5],
t1[0] * t2[6] + t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0] - t1[4] * t2[6],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
t1[4] * t2[3],
t1[0] * t2[7] + t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[7]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4],
t3[3] * t5[0] + t3[10] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] + t3[4] * t5[4] - t3[7] * t5[1] - t3[8] * t5[2] - t3[9] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] + t3[5] * t5[4] - t3[7] * t5[2] + t3[8] * t5[1] - t3[10] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] + t3[6] * t5[4] - t3[7] * t5[3] + t3[9] * t5[1] + t3[10] * t5[2],
t3[1] * t5[3] - t3[2] * t5[2] + t3[3] * t5[1] - t3[8] * t5[3] + t3[9] * t5[2] - t3[10] * t5[1] + t3[11] * t5[0] + t3[11] * t5[4]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Rtt& t2 = rtt;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6],
t1[0] * t2[1] + t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[7],
t1[0] * t2[2] + t1[1] * t2[6] - t1[2] * t2[7] - t1[3] * t2[4],
t1[0] * t2[3] + t1[1] * t2[7] + t1[2] * t2[6] - t1[3] * t2[5],
t1[0] * t2[4] - t1[4] * t2[4],
t1[0] * t2[5] - t1[4] * t2[5],
t1[0] * t2[6] - t1[4] * t2[6],
t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3],
t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0],
t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6] + t1[4] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[7] + t1[4] * t2[1],
t1[1] * t2[6] - t1[2] * t2[7] - t1[3] * t2[4] + t1[4] * t2[2],
t1[1] * t2[7] + t1[2] * t2[6] - t1[3] * t2[5] + t1[4] * t2[3],
t1[0] * t2[7] - t1[4] * t2[7],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3] + t3[10] * t5[4],
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1] + t3[11] * t5[4] + t3[14] * t5[3],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1] + t3[12] * t5[4] - t3[14] * t5[2],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2] + t3[13] * t5[4] + t3[14] * t5[1],
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4],
t3[14] * t5[0] + t3[14] * t5[4]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Trt& trt) {					
					
const Trt& t1 = trt;
const Rtt& t2 = rtt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] + t1[13] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] - t1[10] * t2[5] + t1[11] * t2[4] - t1[12] * t2[7] - t1[13] * t2[6],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[4] + t1[13] * t2[5],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0],
t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[7] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[10] * t2[7] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Rtt& t2 = rtt;
Rvd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[4] - t1[8] * t2[5] - t1[9] * t2[6] + t1[10] * t2[7] - t1[11] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] - t1[7] * t2[5] + t1[8] * t2[4] - t1[9] * t2[7] - t1[10] * t2[6] + t1[11] * t2[2],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[4] + t1[10] * t2[5] - t1[11] * t2[1],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[7] - t1[8] * t2[6] + t1[9] * t2[5] - t1[10] * t2[4] + t1[11] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[8],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[7],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] + t3[10] * t5[11] - t3[11] * t5[3] - t3[11] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[11] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[6] + t3[8] * t5[11] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[8],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] - t3[7] * t5[11] - t3[8] * t5[6] + t3[9] * t5[5] - t3[10] * t5[4] + t3[11] * t5[0] + t3[11] * t5[7]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Tst& tst) {					
					
const Tst& t1 = tst;
const Rtt& t2 = rtt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] + t1[13] * t2[7] - t1[14] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] - t1[10] * t2[5] + t1[11] * t2[4] - t1[12] * t2[7] - t1[13] * t2[6] + t1[14] * t2[2],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[4] + t1[13] * t2[5] - t1[14] * t2[1],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0],
t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[7] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[10] * t2[7] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4] + t1[14] * t2[0],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[10] * t5[14] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Rtt& t2 = rtt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] - t1[14] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7] + t1[14] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4] - t1[14] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[14] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] + t1[13] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] - t1[10] * t2[5] + t1[11] * t2[4] - t1[12] * t2[7] - t1[13] * t2[6],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[4] + t1[13] * t2[5],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[14] * t2[3],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[14] * t2[2],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[14] * t2[1],
t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3] - t1[14] * t2[7],
t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] + t1[14] * t2[6],
t1[7] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] - t1[14] * t2[5],
t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] + t1[14] * t2[4],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[10] * t2[7] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[14] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Rtt sp (const Rtt& rtt, const Bst& bst) {					
					
const Bst& t1 = bst;
const Rtt& t2 = rtt;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[4],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] - t1[10] * t2[5],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[10] * t2[6],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0],
t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0],
t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7] + t1[10] * t2[1],
t1[7] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4] + t1[10] * t2[2],
t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[10] * t2[7],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Rtt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[11] * t5[10] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[12] * t5[10] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Rtt re (const Rtt& rtt, const Vec& vec) {					
					
const Vec& t1 = vec;
const Rtt& t2 = rtt;
Rtt t3 = involute( t2);
Vec_Afl t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[7],
t1[0] * t3[6] - t1[1] * t3[7] - t1[2] * t3[4],
t1[0] * t3[7] + t1[1] * t3[6] - t1[2] * t3[5],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Rtt (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[7] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[7] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[7] * t6[0],
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1],
 - t4[4] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Rtt re (const Rtt& rtt, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Rtt& t2 = rtt;
Rtt t3 = involute( t2);
Rtc t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[4],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3] + t1[3] * t3[5],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0] + t1[3] * t3[6],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6],
t1[3] * t3[0],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[7],
t1[0] * t3[6] - t1[1] * t3[7] - t1[2] * t3[4],
t1[0] * t3[7] + t1[1] * t3[6] - t1[2] * t3[5],
t1[3] * t3[1],
t1[3] * t3[2],
t1[3] * t3[3],
t1[3] * t3[4],
t1[3] * t3[5],
t1[3] * t3[6],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[7],
t1[3] * t3[7]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Rtt (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[3] + t4[14] * t6[0],
 - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2],
 - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1],
 - t4[5] * t6[2] + t4[6] * t6[1] - t4[7] * t6[0]
);

}
		
	
	  	
template<>
inline Rtt re (const Rtt& rtt, const Pln& pln) {					
					
const Pln& t1 = pln;
const Rtt& t2 = rtt;
Rtt t3 = involute( t2);
Mtt t4 (
 - t1[3] * t3[7],
t1[3] * t3[6],
 - t1[3] * t3[5],
t1[3] * t3[4],
 - t1[0] * t3[5] - t1[1] * t3[6] + t1[2] * t3[7],
t1[0] * t3[4] - t1[1] * t3[7] - t1[2] * t3[6],
t1[0] * t3[7] + t1[1] * t3[4] + t1[2] * t3[5],
 - t1[3] * t3[3],
t1[3] * t3[2],
 - t1[3] * t3[1],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] - t1[3] * t3[7],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[6],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] - t1[3] * t3[5],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[3] * t3[4],
 - t1[0] * t3[6] + t1[1] * t3[5] - t1[2] * t3[4],
t1[3] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Rtt (
 - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2] - t4[14] * t6[3],
t4[6] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1],
 - t4[5] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0],
t4[4] * t6[3] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0],
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0],
t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Rtt re (const Rtt& rtt, const Dll& dll) {					
					
const Dll& t1 = dll;
const Rtt& t2 = rtt;
Rtt t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[3] * t3[4] + t1[4] * t3[5] + t1[5] * t3[6],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[7],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[6] - t1[4] * t3[7] - t1[5] * t3[4],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[3] * t3[7] + t1[4] * t3[6] - t1[5] * t3[5],
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[7],
 - t1[0] * t3[4] + t1[1] * t3[7] + t1[2] * t3[6],
 - t1[0] * t3[7] - t1[1] * t3[4] - t1[2] * t3[5],
t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3],
t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0],
t1[3] * t3[4] + t1[4] * t3[5] + t1[5] * t3[6],
t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[7],
t1[3] * t3[6] - t1[4] * t3[7] - t1[5] * t3[4],
t1[3] * t3[7] + t1[4] * t3[6] - t1[5] * t3[5],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4],
t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Rtt (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[4] - t4[5] * t6[3] + t4[14] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[5] - t4[6] * t6[3] - t4[14] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[5] - t4[6] * t6[4] + t4[14] * t6[3],
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0],
t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Rtt re (const Rtt& rtt, const Lin& lin) {					
					
const Lin& t1 = lin;
const Rtt& t2 = rtt;
Rtt t3 = involute( t2);
Rtc t4 (
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[7],
 - t1[0] * t3[4] + t1[1] * t3[7] + t1[2] * t3[6],
 - t1[0] * t3[7] - t1[1] * t3[4] - t1[2] * t3[5],
 - t1[3] * t3[4] - t1[4] * t3[5] - t1[5] * t3[6],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
 - t1[3] * t3[5] + t1[4] * t3[4] - t1[5] * t3[7],
 - t1[3] * t3[6] + t1[4] * t3[7] + t1[5] * t3[4],
 - t1[3] * t3[7] - t1[4] * t3[6] + t1[5] * t3[5],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[7] + t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[0] * t3[4] + t1[1] * t3[7] + t1[2] * t3[6] + t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3],
 - t1[0] * t3[7] - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Rtt (
t4[5] * t6[0] + t4[6] * t6[1] + t4[7] * t6[2] + t4[11] * t6[3] + t4[12] * t6[4] + t4[13] * t6[5],
 - t4[3] * t6[0] + t4[6] * t6[2] - t4[7] * t6[1] + t4[11] * t6[4] - t4[12] * t6[3] + t4[15] * t6[5],
 - t4[3] * t6[1] - t4[5] * t6[2] + t4[7] * t6[0] + t4[11] * t6[5] - t4[13] * t6[3] - t4[15] * t6[4],
 - t4[3] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] + t4[12] * t6[5] - t4[13] * t6[4] + t4[15] * t6[3],
 - t4[3] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5],
 - t4[3] * t6[4] + t4[5] * t6[3] - t4[7] * t6[5],
 - t4[3] * t6[5] + t4[6] * t6[3] + t4[7] * t6[4],
 - t4[5] * t6[5] + t4[6] * t6[4] - t4[7] * t6[3]
);

}
		
	
	  	
template<>
inline Rtt re (const Rtt& rtt, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Rtt& t2 = rtt;
Rtt t3 = involute( t2);
Rtc t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[4] * t3[4],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3] + t1[4] * t3[5],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0] + t1[4] * t3[6],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6] + t1[3] * t3[0],
t1[4] * t3[0],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[7] + t1[3] * t3[1],
t1[0] * t3[6] - t1[1] * t3[7] - t1[2] * t3[4] + t1[3] * t3[2],
t1[0] * t3[7] + t1[1] * t3[6] - t1[2] * t3[5] + t1[3] * t3[3],
t1[4] * t3[1],
t1[4] * t3[2],
t1[4] * t3[3],
t1[4] * t3[4],
t1[4] * t3[5],
t1[4] * t3[6],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1] + t1[4] * t3[7],
t1[4] * t3[7]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Rtt (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] - t4[4] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[4] - t4[8] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[4] - t4[9] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[4] - t4[10] * t6[3] + t4[14] * t6[0],
t4[0] * t6[3] - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] - t4[11] * t6[3],
t4[1] * t6[3] - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2] - t4[12] * t6[3],
t4[2] * t6[3] - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1] - t4[13] * t6[3],
 - t4[5] * t6[2] + t4[6] * t6[1] - t4[7] * t6[0] + t4[14] * t6[3] - t4[15] * t6[3]
);

}
		
	
	  	
template<>
inline Rtt re (const Rtt& rtt, const Par& par) {					
					
const Par& t1 = par;
const Rtt& t2 = rtt;
Rtt t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[6] * t3[4] + t1[7] * t3[5] + t1[8] * t3[6],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[6] * t3[5] - t1[7] * t3[4] + t1[8] * t3[7],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[6] * t3[6] - t1[7] * t3[7] - t1[8] * t3[4],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[6] * t3[7] + t1[7] * t3[6] - t1[8] * t3[5],
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[7] + t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2] - t1[9] * t3[4],
 - t1[0] * t3[4] + t1[1] * t3[7] + t1[2] * t3[6] + t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3] - t1[9] * t3[5],
 - t1[0] * t3[7] - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0] - t1[9] * t3[6],
t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2],
t1[6] * t3[1] + t1[7] * t3[0] - t1[8] * t3[3],
t1[6] * t3[2] + t1[7] * t3[3] + t1[8] * t3[0],
t1[6] * t3[4] + t1[7] * t3[5] + t1[8] * t3[6] + t1[9] * t3[0],
t1[6] * t3[5] - t1[7] * t3[4] + t1[8] * t3[7] + t1[9] * t3[1],
t1[6] * t3[6] - t1[7] * t3[7] - t1[8] * t3[4] + t1[9] * t3[2],
t1[6] * t3[7] + t1[7] * t3[6] - t1[8] * t3[5] + t1[9] * t3[3],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1] - t1[9] * t3[7],
t1[6] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Rtt (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[6] + t4[5] * t6[7] + t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] + t4[10] * t6[9],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[7] - t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[11] * t6[9] + t4[14] * t6[8] + t4[15] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[8] - t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[12] * t6[9] - t4[14] * t6[7] - t4[15] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[8] - t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[13] * t6[9] + t4[14] * t6[6] + t4[15] * t6[3],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[4] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[10] * t6[3] - t4[11] * t6[4] - t4[12] * t6[5] - t4[14] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] + t4[5] * t6[9] - t4[6] * t6[2] - t4[10] * t6[4] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] + t4[6] * t6[9] - t4[10] * t6[5] + t4[12] * t6[3] + t4[13] * t6[4] - t4[14] * t6[0],
t4[1] * t6[5] - t4[2] * t6[4] + t4[3] * t6[3] + t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0] - t4[11] * t6[5] + t4[12] * t6[4] - t4[13] * t6[3] + t4[14] * t6[9]
);

}
		
	
	  	
template<>
inline Rtt re (const Rtt& rtt, const Cir& cir) {					
					
const Cir& t1 = cir;
const Rtt& t2 = rtt;
Rtt t3 = involute( t2);
Rtc t4 (
t1[3] * t3[5] + t1[4] * t3[6] - t1[5] * t3[7] - t1[9] * t3[3],
 - t1[3] * t3[4] + t1[4] * t3[7] + t1[5] * t3[6] + t1[9] * t3[2],
 - t1[3] * t3[7] - t1[4] * t3[4] - t1[5] * t3[5] - t1[9] * t3[1],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] - t1[6] * t3[4] - t1[7] * t3[5] - t1[8] * t3[6] - t1[9] * t3[7],
 - t1[3] * t3[1] - t1[4] * t3[2] - t1[5] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] - t1[6] * t3[5] + t1[7] * t3[4] - t1[8] * t3[7] + t1[9] * t3[6],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] - t1[6] * t3[6] + t1[7] * t3[7] + t1[8] * t3[4] - t1[9] * t3[5],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] - t1[6] * t3[7] - t1[7] * t3[6] + t1[8] * t3[5] + t1[9] * t3[4],
t1[3] * t3[0] - t1[4] * t3[3] + t1[5] * t3[2],
t1[3] * t3[3] + t1[4] * t3[0] - t1[5] * t3[1],
 - t1[3] * t3[2] + t1[4] * t3[1] + t1[5] * t3[0],
t1[3] * t3[5] + t1[4] * t3[6] - t1[5] * t3[7] + t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2],
 - t1[3] * t3[4] + t1[4] * t3[7] + t1[5] * t3[6] + t1[6] * t3[1] + t1[7] * t3[0] - t1[8] * t3[3],
 - t1[3] * t3[7] - t1[4] * t3[4] - t1[5] * t3[5] + t1[6] * t3[2] + t1[7] * t3[3] + t1[8] * t3[0],
t1[3] * t3[6] - t1[4] * t3[5] + t1[5] * t3[4] + t1[9] * t3[0],
t1[3] * t3[6] - t1[4] * t3[5] + t1[5] * t3[4] + t1[6] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Rtt (
t4[5] * t6[3] + t4[6] * t6[4] + t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] + t4[11] * t6[6] + t4[12] * t6[7] + t4[13] * t6[8] - t4[14] * t6[9],
t4[2] * t6[9] - t4[3] * t6[3] - t4[4] * t6[0] + t4[6] * t6[5] - t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[15] * t6[8],
 - t4[1] * t6[9] - t4[3] * t6[4] - t4[4] * t6[1] - t4[5] * t6[5] + t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[15] * t6[7],
t4[0] * t6[9] - t4[3] * t6[5] - t4[4] * t6[2] + t4[5] * t6[4] - t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[12] * t6[8] - t4[13] * t6[7] + t4[15] * t6[6],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[9] + t4[12] * t6[0] + t4[13] * t6[1] - t4[14] * t6[2] + t4[15] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[3] * t6[7] + t4[5] * t6[6] - t4[6] * t6[9] - t4[7] * t6[8] - t4[11] * t6[0] + t4[13] * t6[2] + t4[14] * t6[1] - t4[15] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[8] + t4[5] * t6[9] + t4[6] * t6[6] + t4[7] * t6[7] - t4[11] * t6[1] - t4[12] * t6[2] - t4[14] * t6[0] + t4[15] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[3] * t6[9] - t4[5] * t6[8] + t4[6] * t6[7] - t4[7] * t6[6] - t4[11] * t6[2] + t4[12] * t6[1] - t4[13] * t6[0]
);

}
		
	
	  	
template<>
inline Rtt re (const Rtt& rtt, const Sph& sph) {					
					
const Sph& t1 = sph;
const Rtt& t2 = rtt;
Rtt t3 = involute( t2);
Mtt t4 (
 - t1[4] * t3[7],
t1[4] * t3[6],
 - t1[4] * t3[5],
t1[4] * t3[4],
 - t1[0] * t3[5] - t1[1] * t3[6] + t1[2] * t3[7] - t1[3] * t3[3],
t1[0] * t3[4] - t1[1] * t3[7] - t1[2] * t3[6] + t1[3] * t3[2],
t1[0] * t3[7] + t1[1] * t3[4] + t1[2] * t3[5] - t1[3] * t3[1],
 - t1[4] * t3[3],
t1[4] * t3[2],
 - t1[4] * t3[1],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] - t1[4] * t3[7],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[4] * t3[6],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] - t1[4] * t3[5],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[4] * t3[4],
 - t1[0] * t3[6] + t1[1] * t3[5] - t1[2] * t3[4] + t1[3] * t3[0],
t1[4] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Rtt (
 - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2] - t4[14] * t6[4] - t4[15] * t6[3],
t4[6] * t6[4] + t4[9] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1],
 - t4[5] * t6[4] - t4[8] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0],
t4[4] * t6[4] + t4[7] * t6[3] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0],
 - t4[3] * t6[3] - t4[5] * t6[0] - t4[6] * t6[1] + t4[13] * t6[3] - t4[14] * t6[2],
t4[2] * t6[3] + t4[4] * t6[0] - t4[6] * t6[2] - t4[12] * t6[3] + t4[14] * t6[1],
 - t4[1] * t6[3] + t4[4] * t6[1] + t4[5] * t6[2] + t4[11] * t6[3] - t4[14] * t6[0],
t4[0] * t6[3] + t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0] - t4[10] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	