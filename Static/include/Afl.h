		#ifndef AFL_H_INCLUDED
		#define AFL_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Afl gp (const Afl& a, const Sca& b) { 
	return Afl (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Sca*)(&b));
}			
		 
inline Tnb gp (const Afl& a, const Ori& b) { 
	return Tnb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Ori*)(&b));
}			
		 
inline Inf_Sta gp (const Afl& a, const Inf& b) { 
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
		 
		
template<> inline MVBase gp_gen<Afl, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Inf*)(&b));
}			
		 
inline Mnk_Afl gp (const Afl& a, const Mnk& b) { 
	return Mnk_Afl (
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Sta gp (const Afl& a, const Hyp& b) { 
	return Hyp_Sta (
 - a[3] * b[1],
 - a[4] * b[1],
 - a[5] * b[1],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1],
a[4] * b[1],
a[5] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Hyp*)(&b));
}			
		 
inline Dal gp (const Afl& a, const Pss& b) { 
	return Dal (
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Pss*)(&b));
}			
		 
inline Pnt_Afl gp (const Afl& a, const Pnt& b) { 
	return Pnt_Afl (
a[0] * b[1] + a[1] * b[2] - a[3] * b[4],
 - a[0] * b[0] + a[2] * b[2] - a[4] * b[4],
 - a[1] * b[0] - a[2] * b[1] - a[5] * b[4],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4],
a[4] * b[4],
a[5] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Pnt*)(&b));
}			
		 
inline Mtt gp (const Afl& a, const Par& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[7] - a[4] * b[6],
a[0] * b[2] - a[2] * b[0] + a[3] * b[8] - a[5] * b[6],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[8] - a[5] * b[7],
a[0] * b[4] + a[1] * b[5] + a[3] * b[9] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] + a[4] * b[9] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2] + a[5] * b[9],
a[0] * b[7] + a[1] * b[8],
 - a[0] * b[6] + a[2] * b[8],
 - a[1] * b[6] - a[2] * b[7],
 - a[3] * b[6] - a[4] * b[7] - a[5] * b[8],
a[0] * b[9] - a[3] * b[7] + a[4] * b[6],
a[1] * b[9] - a[3] * b[8] + a[5] * b[6],
a[2] * b[9] - a[4] * b[8] + a[5] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Par*)(&b));
}			
		 
inline Rtc gp (const Afl& a, const Cir& b) { 
	return Rtc (
 - a[2] * b[9] + a[4] * b[3] + a[5] * b[4],
a[1] * b[9] - a[3] * b[3] + a[5] * b[5],
 - a[0] * b[9] - a[3] * b[4] - a[4] * b[5],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[6] - a[4] * b[7] - a[5] * b[8],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[7] + a[4] * b[6] - a[5] * b[9],
a[0] * b[2] - a[2] * b[0] - a[3] * b[8] + a[4] * b[9] + a[5] * b[6],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[9] - a[4] * b[8] + a[5] * b[7],
 - a[1] * b[5] + a[2] * b[4],
a[0] * b[5] - a[2] * b[3],
 - a[0] * b[4] + a[1] * b[3],
a[0] * b[7] + a[1] * b[8] - a[4] * b[3] - a[5] * b[4],
 - a[0] * b[6] + a[2] * b[8] + a[3] * b[3] - a[5] * b[5],
 - a[1] * b[6] - a[2] * b[7] + a[3] * b[4] + a[4] * b[5],
 - a[3] * b[5] + a[4] * b[4] - a[5] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt_Dal gp (const Afl& a, const Sph& b) { 
	return Pnt_Dal (
a[5] * b[4],
 - a[4] * b[4],
a[3] * b[4],
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[5] * b[4],
a[0] * b[2] - a[2] * b[0] + a[4] * b[4],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[4],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Sph*)(&b));
}			
		 
inline Mtt gp (const Afl& a, const Sta& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[7] - a[4] * b[6],
a[0] * b[2] - a[2] * b[0] + a[3] * b[8] - a[5] * b[6],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[8] - a[5] * b[7],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2],
a[0] * b[7] + a[1] * b[8],
 - a[0] * b[6] + a[2] * b[8],
 - a[1] * b[6] - a[2] * b[7],
 - a[3] * b[6] - a[4] * b[7] - a[5] * b[8],
 - a[3] * b[7] + a[4] * b[6],
 - a[3] * b[8] + a[5] * b[6],
 - a[4] * b[8] + a[5] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Sta*)(&b));
}			
		 
inline Mtd gp (const Afl& a, const Drv& b) { 
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
		 
		
template<> inline MVBase gp_gen<Afl, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Drv*)(&b));
}			
		 
inline Par_Drb gp (const Afl& a, const Drb& b) { 
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
		 
		
template<> inline MVBase gp_gen<Afl, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Drb*)(&b));
}			
		 
inline Inf_Dal gp (const Afl& a, const Drt& b) { 
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
		 
		
template<> inline MVBase gp_gen<Afl, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Drt*)(&b));
}			
		 
inline Tnv_Biv gp (const Afl& a, const Tnv& b) { 
	return Tnv_Biv (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv_Vec gp (const Afl& a, const Tnb& b) { 
	return Tnv_Vec (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnv gp (const Afl& a, const Tnt& b) { 
	return Tnv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Tnt*)(&b));
}			
		 
inline Rtc gp (const Afl& a, const Lin& b) { 
	return Rtc (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[4] + a[4] * b[3],
 - a[3] * b[5] + a[5] * b[3],
 - a[4] * b[5] + a[5] * b[4],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Lin*)(&b));
}			
		 
inline Pnt_Dal gp (const Afl& a, const Pln& b) { 
	return Pnt_Dal (
a[5] * b[3],
 - a[4] * b[3],
a[3] * b[3],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] + a[4] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[3],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Pln*)(&b));
}			
		 
inline Tvt gp (const Afl& a, const Flp& b) { 
	return Tvt (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
a[3] * b[3],
a[4] * b[3],
a[5] * b[3],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Flp*)(&b));
}			
		 
inline Par_Dfp gp (const Afl& a, const Dfp& b) { 
	return Par_Dfp (
 - a[2] * b[3] + a[4] * b[0] + a[5] * b[1],
a[1] * b[3] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[3] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[5] * b[3],
a[4] * b[3],
 - a[3] * b[3],
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
		 
		
template<> inline MVBase gp_gen<Afl, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Dfp*)(&b));
}			
		 
inline Mtt gp (const Afl& a, const Dll& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[4] - a[4] * b[3],
a[0] * b[2] - a[2] * b[0] + a[3] * b[5] - a[5] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[5] - a[5] * b[4],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
 - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[3] * b[4] + a[4] * b[3],
 - a[3] * b[5] + a[5] * b[3],
 - a[4] * b[5] + a[5] * b[4],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Dll*)(&b));
}			
		 
inline Pnt_Afl gp (const Afl& a, const Dlp& b) { 
	return Pnt_Afl (
a[0] * b[1] + a[1] * b[2] - a[3] * b[3],
 - a[0] * b[0] + a[2] * b[2] - a[4] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[5] * b[3],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[4] * b[3],
a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Dlp*)(&b));
}			
		 
inline Vec_Afl gp (const Afl& a, const Vec& b) { 
	return Vec_Afl (
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
		 
		
template<> inline MVBase gp_gen<Afl, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Vec*)(&b));
}			
		 
inline Rtt gp (const Afl& a, const Biv& b) { 
	return Rtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Biv*)(&b));
}			
		 
inline Mnk_Dal gp (const Afl& a, const Tri& b) { 
	return Mnk_Dal (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Tri*)(&b));
}			
		 
inline Vec_Afl gp (const Afl& a, const Aff& b) { 
	return Vec_Afl (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Aff*)(&b));
}			
		 
inline Rtt gp (const Afl& a, const Afl& b) { 
	return Rtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Afl*)(&b));
}			
		 
inline Biv_Afp gp (const Afl& a, const Afp& b) { 
	return Biv_Afp (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] + a[4] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Afp*)(&b));
}			
		 
inline Biv_Dap gp (const Afl& a, const Dap& b) { 
	return Biv_Dap (
a[0] * b[1] + a[1] * b[2] + a[3] * b[3],
 - a[0] * b[0] + a[2] * b[2] + a[4] * b[3],
 - a[1] * b[0] - a[2] * b[1] + a[5] * b[3],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Dap*)(&b));
}			
		 
inline Vec_Dal gp (const Afl& a, const Daf& b) { 
	return Vec_Dal (
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Daf*)(&b));
}			
		 
inline Biv_Dal gp (const Afl& a, const Dal& b) { 
	return Biv_Dal (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[4] + a[4] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[5] + a[5] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[4] * b[5] + a[5] * b[4],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Dal*)(&b));
}			
		 
inline Biv_Dal gp (const Afl& a, const Mnv& b) { 
	return Biv_Dal (
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Mnv*)(&b));
}			
		 
inline Rtt gp (const Afl& a, const Rot& b) { 
	return Rtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Rot*)(&b));
}			
		 
inline Mtt gp (const Afl& a, const Mot& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4] + a[5] * b[7],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[4] * b[7] - a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[7] + a[4] * b[6] - a[5] * b[5],
a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5],
 - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
 - a[3] * b[5] + a[4] * b[4] - a[5] * b[7],
 - a[3] * b[6] + a[4] * b[7] + a[5] * b[4],
 - a[3] * b[7] - a[4] * b[6] + a[5] * b[5],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Mot*)(&b));
}			
		 
inline Ori_Lin gp (const Afl& a, const Dil& b) { 
	return Ori_Lin (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] + a[3] * b[1],
a[4] * b[0] + a[4] * b[1],
a[5] * b[0] + a[5] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Dil*)(&b));
}			
		 
inline Vec_Afp gp (const Afl& a, const Trv& b) { 
	return Vec_Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[2] + a[1] * b[3] + a[3] * b[0],
 - a[0] * b[1] + a[2] * b[3] + a[4] * b[0],
 - a[1] * b[1] - a[2] * b[2] + a[5] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Trv*)(&b));
}			
		 
inline Mtt gp (const Afl& a, const Mtd& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4] + a[5] * b[11],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[4] * b[11] - a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[11] + a[4] * b[6] - a[5] * b[5],
a[3] * b[0] + a[3] * b[7] - a[4] * b[1] - a[4] * b[8] - a[5] * b[2] - a[5] * b[9],
a[3] * b[1] + a[3] * b[8] + a[4] * b[0] + a[4] * b[7] - a[5] * b[3] - a[5] * b[10],
a[3] * b[2] + a[3] * b[9] + a[4] * b[3] + a[4] * b[10] + a[5] * b[0] + a[5] * b[7],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9] - a[3] * b[5] + a[4] * b[4] - a[5] * b[11],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8] - a[3] * b[6] + a[4] * b[11] + a[5] * b[4],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7] - a[3] * b[11] - a[4] * b[6] + a[5] * b[5],
a[3] * b[3] + a[3] * b[10] - a[4] * b[2] - a[4] * b[9] + a[5] * b[1] + a[5] * b[8],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Mtd*)(&b));
}			
		 
inline Tvt gp (const Afl& a, const Trs& b) { 
	return Tvt (
a[3] * b[1] + a[4] * b[2] + a[5] * b[3],
a[0] * b[0] + a[3] * b[2] - a[4] * b[1],
a[1] * b[0] + a[3] * b[3] - a[5] * b[1],
a[2] * b[0] + a[4] * b[3] - a[5] * b[2],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3],
 - a[3] * b[2] + a[4] * b[1],
 - a[3] * b[3] + a[5] * b[1],
 - a[4] * b[3] + a[5] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Afl& a, const Rtc& b) { 
	return Rtc (
a[0] * b[1] + a[1] * b[2] - a[2] * b[14] - a[3] * b[4] + a[4] * b[8] + a[5] * b[9],
 - a[0] * b[0] + a[1] * b[14] + a[2] * b[2] - a[3] * b[8] - a[4] * b[4] + a[5] * b[10],
 - a[0] * b[14] - a[1] * b[0] - a[2] * b[1] - a[3] * b[9] - a[4] * b[10] - a[5] * b[4],
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7] - a[3] * b[0] - a[3] * b[11] - a[4] * b[1] - a[4] * b[12] - a[5] * b[2] - a[5] * b[13],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10],
a[0] * b[3] - a[1] * b[7] + a[2] * b[6] - a[3] * b[1] - a[3] * b[12] + a[4] * b[0] + a[4] * b[11] - a[5] * b[14] - a[5] * b[15],
a[0] * b[7] + a[1] * b[3] - a[2] * b[5] - a[3] * b[2] - a[3] * b[13] + a[4] * b[14] + a[4] * b[15] + a[5] * b[0] + a[5] * b[11],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[3] - a[3] * b[14] - a[3] * b[15] - a[4] * b[2] - a[4] * b[13] + a[5] * b[1] + a[5] * b[12],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4],
a[0] * b[12] + a[1] * b[13] - a[2] * b[15] + a[3] * b[4] - a[4] * b[8] - a[5] * b[9],
 - a[0] * b[11] + a[1] * b[15] + a[2] * b[13] + a[3] * b[8] + a[4] * b[4] - a[5] * b[10],
 - a[0] * b[15] - a[1] * b[11] - a[2] * b[12] + a[3] * b[9] + a[4] * b[10] + a[5] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[10] + a[4] * b[9] - a[5] * b[8],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[4] * b[9] + a[5] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Afl& a, const Mtt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7] + a[5] * b[15],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[4] * b[15] - a[5] * b[7],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[15] + a[4] * b[9] - a[5] * b[8],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[4] * b[11] - a[5] * b[2] - a[5] * b[12],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[1] + a[3] * b[11] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3] - a[5] * b[13],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[12] + a[4] * b[3] + a[4] * b[13] + a[5] * b[0] + a[5] * b[10],
a[0] * b[8] + a[1] * b[9] - a[2] * b[15],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[7] - a[4] * b[8] - a[5] * b[9],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] - a[3] * b[8] + a[4] * b[7] - a[5] * b[15],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[9] + a[4] * b[15] + a[5] * b[7],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] - a[3] * b[15] - a[4] * b[9] + a[5] * b[8],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[13] - a[4] * b[2] - a[4] * b[12] + a[5] * b[1] + a[5] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Mtt*)(&b));
}			
		 
inline Rtt gp (const Afl& a, const Rtt& b) { 
	return Rtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Rtt*)(&b));
}			
		 
inline Rvd gp (const Afl& a, const Rtd& b) { 
	return Rvd (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0] + a[3] * b[4] - a[4] * b[1] - a[4] * b[5] - a[5] * b[2] - a[5] * b[6],
a[3] * b[1] + a[3] * b[5] + a[4] * b[0] + a[4] * b[4] - a[5] * b[3] - a[5] * b[7],
a[3] * b[2] + a[3] * b[6] + a[4] * b[3] + a[4] * b[7] + a[5] * b[0] + a[5] * b[4],
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7],
a[0] * b[4] - a[1] * b[7] + a[2] * b[6],
a[0] * b[7] + a[1] * b[4] - a[2] * b[5],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[4],
a[3] * b[3] + a[3] * b[7] - a[4] * b[2] - a[4] * b[6] + a[5] * b[1] + a[5] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Rtd*)(&b));
}			
		 
inline Ori_Cir gp (const Afl& a, const Tvd& b) { 
	return Ori_Cir (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[2] + a[1] * b[3] + a[3] * b[0] + a[3] * b[4],
 - a[0] * b[1] + a[2] * b[3] + a[4] * b[0] + a[4] * b[4],
 - a[1] * b[1] - a[2] * b[2] + a[5] * b[0] + a[5] * b[4],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Tvd*)(&b));
}			
		 
inline Tvt gp (const Afl& a, const Tsd& b) { 
	return Tvt (
a[3] * b[1] + a[4] * b[2] + a[5] * b[3],
a[0] * b[0] + a[3] * b[2] - a[4] * b[1],
a[1] * b[0] + a[3] * b[3] - a[5] * b[1],
a[2] * b[0] + a[4] * b[3] - a[5] * b[2],
a[3] * b[0] + a[3] * b[4],
a[4] * b[0] + a[4] * b[4],
a[5] * b[0] + a[5] * b[4],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3],
a[0] * b[4] - a[3] * b[2] + a[4] * b[1],
a[1] * b[4] - a[3] * b[3] + a[5] * b[1],
a[2] * b[4] - a[4] * b[3] + a[5] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtt gp (const Afl& a, const Trt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[5] * b[7],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[9] - a[5] * b[8],
a[0] * b[5] + a[1] * b[6] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[4] * b[11] - a[5] * b[2] - a[5] * b[12],
 - a[0] * b[4] + a[2] * b[6] + a[3] * b[1] + a[3] * b[11] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3] - a[5] * b[13],
 - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[12] + a[4] * b[3] + a[4] * b[13] + a[5] * b[0] + a[5] * b[10],
a[0] * b[8] + a[1] * b[9],
 - a[0] * b[7] + a[2] * b[9],
 - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[7] - a[4] * b[8] - a[5] * b[9],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] - a[3] * b[8] + a[4] * b[7],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[9] + a[5] * b[7],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] - a[4] * b[9] + a[5] * b[8],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[13] - a[4] * b[2] - a[4] * b[12] + a[5] * b[1] + a[5] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Trt*)(&b));
}			
		 
inline Rvd gp (const Afl& a, const Rvd& b) { 
	return Rvd (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] + a[3] * b[0] + a[3] * b[7] - a[4] * b[1] - a[4] * b[8] - a[5] * b[2] - a[5] * b[9],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[3] * b[1] + a[3] * b[8] + a[4] * b[0] + a[4] * b[7] - a[5] * b[3] - a[5] * b[10],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[9] + a[4] * b[3] + a[4] * b[10] + a[5] * b[0] + a[5] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[10] - a[4] * b[2] - a[4] * b[9] + a[5] * b[1] + a[5] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Afl& a, const Tst& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[5] * b[7],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[9] - a[5] * b[8],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[4] * b[11] - a[5] * b[2] - a[5] * b[12],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[1] + a[3] * b[11] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3] - a[5] * b[13],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[12] + a[4] * b[3] + a[4] * b[13] + a[5] * b[0] + a[5] * b[10],
a[0] * b[8] + a[1] * b[9],
 - a[0] * b[7] + a[2] * b[9],
 - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[7] - a[4] * b[8] - a[5] * b[9],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] - a[3] * b[8] + a[4] * b[7],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[9] + a[5] * b[7],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] - a[4] * b[9] + a[5] * b[8],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[13] - a[4] * b[2] - a[4] * b[12] + a[5] * b[1] + a[5] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Afl& a, const Tvt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7] + a[5] * b[14],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[4] * b[14] - a[5] * b[7],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[14] + a[4] * b[9] - a[5] * b[8],
a[0] * b[5] + a[1] * b[6] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[4] * b[11] - a[5] * b[2] - a[5] * b[12],
 - a[0] * b[4] + a[2] * b[6] + a[3] * b[1] + a[3] * b[11] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3] - a[5] * b[13],
 - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[3] * b[12] + a[4] * b[3] + a[4] * b[13] + a[5] * b[0] + a[5] * b[10],
a[0] * b[8] + a[1] * b[9] - a[2] * b[14],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[7] - a[4] * b[8] - a[5] * b[9],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] - a[3] * b[8] + a[4] * b[7] - a[5] * b[14],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[9] + a[4] * b[14] + a[5] * b[7],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] - a[3] * b[14] - a[4] * b[9] + a[5] * b[8],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] + a[3] * b[13] - a[4] * b[2] - a[4] * b[12] + a[5] * b[1] + a[5] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Tvt*)(&b));
}			
		 
inline Mtt gp (const Afl& a, const Bst& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[8] - a[4] * b[7],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[9] - a[5] * b[7],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[9] - a[5] * b[8],
a[0] * b[5] + a[1] * b[6] + a[3] * b[0] + a[3] * b[10] - a[4] * b[1] - a[5] * b[2],
 - a[0] * b[4] + a[2] * b[6] + a[3] * b[1] + a[4] * b[0] + a[4] * b[10] - a[5] * b[3],
 - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0] + a[5] * b[10],
a[0] * b[8] + a[1] * b[9],
 - a[0] * b[7] + a[2] * b[9],
 - a[1] * b[7] - a[2] * b[8],
 - a[3] * b[7] - a[4] * b[8] - a[5] * b[9],
a[0] * b[10] - a[3] * b[8] + a[4] * b[7],
a[1] * b[10] - a[3] * b[9] + a[5] * b[7],
a[2] * b[10] - a[4] * b[9] + a[5] * b[8],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Afl, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afl*)(&a),*(Bst*)(&b));
}			
		 
inline Afl op (const Afl& a, const Sca& b) { 
	return Afl (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Sca*)(&b));
}			
		 
inline Tnb op (const Afl& a, const Ori& b) { 
	return Tnb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Ori*)(&b));
}			
		 
inline Lin op (const Afl& a, const Inf& b) { 
	return Lin (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Inf*)(&b));
}			
		 
inline Mnk_Biv op (const Afl& a, const Mnk& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Mnk*)(&b));
}			
		 
inline Pss_Sta op (const Afl& a, const Hyp& b) { 
	return Pss_Sta (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1],
a[4] * b[1],
a[5] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Afl& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Pss*)(&b));
}			
		 
inline Cir op (const Afl& a, const Pnt& b) { 
	return Cir (
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4],
a[4] * b[4],
a[5] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Pnt*)(&b));
}			
		 
inline Sph op (const Afl& a, const Par& b) { 
	return Sph (
a[0] * b[9] - a[3] * b[7] + a[4] * b[6],
a[1] * b[9] - a[3] * b[8] + a[5] * b[6],
a[2] * b[9] - a[4] * b[8] + a[5] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Par*)(&b));
}			
		 
inline Pss op (const Afl& a, const Cir& b) { 
	return Pss (
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Afl& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Sph*)(&b));
}			
		 
inline Sph op (const Afl& a, const Sta& b) { 
	return Sph (
 - a[3] * b[7] + a[4] * b[6],
 - a[3] * b[8] + a[5] * b[6],
 - a[4] * b[8] + a[5] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Sta*)(&b));
}			
		 
inline Pln op (const Afl& a, const Drv& b) { 
	return Pln (
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Drv*)(&b));
}			
		 
inline Pss op (const Afl& a, const Drb& b) { 
	return Pss (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Afl& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Drt*)(&b));
}			
		 
inline Tnt op (const Afl& a, const Tnv& b) { 
	return Tnt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca op (const Afl& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Afl& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Tnt*)(&b));
}			
		 
inline Pss op (const Afl& a, const Lin& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Afl& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Pln*)(&b));
}			
		 
inline Pln op (const Afl& a, const Flp& b) { 
	return Pln (
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Flp*)(&b));
}			
		 
inline Pss op (const Afl& a, const Dfp& b) { 
	return Pss (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Dfp*)(&b));
}			
		 
inline Sph op (const Afl& a, const Dll& b) { 
	return Sph (
 - a[3] * b[4] + a[4] * b[3],
 - a[3] * b[5] + a[5] * b[3],
 - a[4] * b[5] + a[5] * b[4],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Dll*)(&b));
}			
		 
inline Cir op (const Afl& a, const Dlp& b) { 
	return Cir (
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[4] * b[3],
a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Dlp*)(&b));
}			
		 
inline Afp op (const Afl& a, const Vec& b) { 
	return Afp (
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Vec*)(&b));
}			
		 
inline Tnt op (const Afl& a, const Biv& b) { 
	return Tnt (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Biv*)(&b));
}			
		 
inline Sca op (const Afl& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Tri*)(&b));
}			
		 
inline Afp op (const Afl& a, const Aff& b) { 
	return Afp (
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Aff*)(&b));
}			
		 
inline Tnt op (const Afl& a, const Afl& b) { 
	return Tnt (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Afl*)(&b));
}			
		 
inline Sca op (const Afl& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Afp*)(&b));
}			
		 
inline Daf op (const Afl& a, const Dap& b) { 
	return Daf (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Afl& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Daf*)(&b));
}			
		 
inline Pss op (const Afl& a, const Dal& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Dal*)(&b));
}			
		 
inline Pss op (const Afl& a, const Mnv& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afl, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Afl*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Hyp*)(&b));
}			
		 
inline Dal ip (const Afl& a, const Pss& b) { 
	return Dal (
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Par& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Par*)(&b));
}			
		 
inline Pnt ip (const Afl& a, const Cir& b) { 
	return Pnt (
 - a[2] * b[9] + a[4] * b[3] + a[5] * b[4],
a[1] * b[9] - a[3] * b[3] + a[5] * b[5],
 - a[0] * b[9] - a[3] * b[4] - a[4] * b[5],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[6] - a[4] * b[7] - a[5] * b[8],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Cir*)(&b));
}			
		 
inline Par ip (const Afl& a, const Sph& b) { 
	return Par (
a[5] * b[4],
 - a[4] * b[4],
a[3] * b[4],
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Sph*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Sta& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Drv& b) { 
	return Sca (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Drv*)(&b));
}			
		 
inline Dlp ip (const Afl& a, const Drb& b) { 
	return Dlp (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Drb*)(&b));
}			
		 
inline Dll ip (const Afl& a, const Drt& b) { 
	return Dll (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Tnv*)(&b));
}			
		 
inline Ori ip (const Afl& a, const Tnb& b) { 
	return Ori (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnv ip (const Afl& a, const Tnt& b) { 
	return Tnv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Tnt*)(&b));
}			
		 
inline Pnt ip (const Afl& a, const Lin& b) { 
	return Pnt (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Lin*)(&b));
}			
		 
inline Par ip (const Afl& a, const Pln& b) { 
	return Par (
a[5] * b[3],
 - a[4] * b[3],
a[3] * b[3],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Flp& b) { 
	return Sca (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Flp*)(&b));
}			
		 
inline Dlp ip (const Afl& a, const Dfp& b) { 
	return Dlp (
 - a[2] * b[3] + a[4] * b[0] + a[5] * b[1],
a[1] * b[3] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[3] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Dll& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Biv& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Biv*)(&b));
}			
		 
inline Vec ip (const Afl& a, const Tri& b) { 
	return Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Afl& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Afl*)(&b));
}			
		 
inline Aff ip (const Afl& a, const Afp& b) { 
	return Aff (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Afl& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Dap*)(&b));
}			
		 
inline Dap ip (const Afl& a, const Daf& b) { 
	return Dap (
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Daf*)(&b));
}			
		 
inline Ori ip (const Afl& a, const Dal& b) { 
	return Ori (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] - a[4] * b[4] - a[5] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Dal*)(&b));
}			
		 
inline Ori ip (const Afl& a, const Mnv& b) { 
	return Ori (
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afl, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afl*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Afl sp (const Afl& afl, const Rot& rot) {					
					
const Rot& t1 = rot;
const Afl& t2 = afl;
Rtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Afl (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Mot& mot) {					
					
const Mot& t1 = mot;
const Afl& t2 = afl;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3] - t1[7] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[5],
t1[4] * t2[5] - t1[6] * t2[3] - t1[7] * t2[4],
t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Afl (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[7] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[7] - t3[6] * t5[4] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[7] + t3[5] * t5[6] - t3[6] * t5[5] + t3[14] * t5[4],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Dil& dil) {					
					
const Dil& t1 = dil;
const Afl& t2 = afl;
Ori_Lin t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[3],
t1[0] * t2[4] - t1[1] * t2[4],
t1[0] * t2[5] - t1[1] * t2[5],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Afl (
t3[0] * t5[0] + t3[6] * t5[1],
t3[1] * t5[0] + t3[7] * t5[1],
t3[2] * t5[0] + t3[8] * t5[1],
t3[3] * t5[0] + t3[3] * t5[1],
t3[4] * t5[0] + t3[4] * t5[1],
t3[5] * t5[0] + t3[5] * t5[1]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Trv& trv) {					
					
const Trv& t1 = trv;
const Afl& t2 = afl;
Vec_Afp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[4] + t1[1] * t2[0] - t1[3] * t2[2],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Afl (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0],
t3[0] * t5[2] + t3[1] * t5[3] + t3[3] * t5[0],
 - t3[0] * t5[1] + t3[2] * t5[3] + t3[4] * t5[0],
 - t3[1] * t5[1] - t3[2] * t5[2] + t3[5] * t5[0]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Afl& t2 = afl;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3] + t1[11] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3] - t1[11] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4] + t1[11] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[7] * t2[3] - t1[8] * t2[4] - t1[9] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] - t1[7] * t2[4] + t1[8] * t2[3] - t1[10] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] - t1[7] * t2[5] + t1[9] * t2[3] + t1[10] * t2[4],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[11] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[11] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[11] * t2[0],
t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5] - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1] + t1[11] * t2[5],
t1[4] * t2[5] - t1[6] * t2[3] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0] - t1[11] * t2[4],
t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] - t1[8] * t2[5] + t1[9] * t2[4] - t1[10] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Afl (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[11] - t3[6] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[11] + t3[5] * t5[6] - t3[6] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[14] * t5[4],
t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[14] * t5[3] - t3[14] * t5[10],
t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[14] * t5[2] + t3[14] * t5[9],
t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[14] * t5[1] - t3[14] * t5[8]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Trs& trs) {					
					
const Trs& t1 = trs;
const Afl& t2 = afl;
Tvt t3 (
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[0] * t2[0] + t1[1] * t2[4] - t1[2] * t2[3],
t1[0] * t2[1] + t1[1] * t2[5] - t1[3] * t2[3],
t1[0] * t2[2] + t1[2] * t2[5] - t1[3] * t2[4],
t1[0] * t2[3],
t1[0] * t2[4],
t1[0] * t2[5],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[1] * t2[4] - t1[2] * t2[3],
t1[1] * t2[5] - t1[3] * t2[3],
t1[2] * t2[5] - t1[3] * t2[4],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Afl (
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2],
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Afl& t2 = afl;
Rtc t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] + t1[4] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[14] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[4] * t2[4] - t1[8] * t2[3] + t1[10] * t2[5] + t1[14] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[4] * t2[5] - t1[9] * t2[3] - t1[10] * t2[4] - t1[14] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2] - t1[11] * t2[3] - t1[12] * t2[4] - t1[13] * t2[5],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1] - t1[11] * t2[4] + t1[12] * t2[3] + t1[14] * t2[5] - t1[15] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] + t1[3] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0] - t1[11] * t2[5] + t1[13] * t2[3] - t1[14] * t2[4] + t1[15] * t2[4],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[12] * t2[5] + t1[13] * t2[4] + t1[14] * t2[3] - t1[15] * t2[3],
t1[4] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
t1[4] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[4] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
t1[4] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[12] * t2[0] - t1[13] * t2[1] - t1[15] * t2[2],
t1[4] * t2[4] - t1[8] * t2[3] + t1[10] * t2[5] + t1[11] * t2[0] - t1[13] * t2[2] + t1[15] * t2[1],
t1[4] * t2[5] - t1[9] * t2[3] - t1[10] * t2[4] + t1[11] * t2[1] + t1[12] * t2[2] - t1[15] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3],
t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Afl (
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11],
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[0] - t3[3] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] + t3[7] * t5[14] + t3[7] * t5[15] - t3[11] * t5[3] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[7] * t5[2] - t3[7] * t5[13] - t3[11] * t5[5] - t3[12] * t5[3] + t3[13] * t5[7] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[2] - t3[3] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] + t3[7] * t5[1] + t3[7] * t5[12] - t3[11] * t5[6] - t3[12] * t5[7] - t3[13] * t5[3] - t3[14] * t5[5] + t3[15] * t5[5]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Afl& t2 = afl;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[4] - t1[8] * t2[3] + t1[15] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[7] * t2[5] - t1[9] * t2[3] - t1[15] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4] + t1[15] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5] - t1[14] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] - t1[10] * t2[4] + t1[11] * t2[3] - t1[13] * t2[5] + t1[14] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[10] * t2[5] + t1[12] * t2[3] + t1[13] * t2[4] - t1[14] * t2[0],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[15] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[15] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[15] * t2[0],
t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1] + t1[15] * t2[5],
t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0] - t1[15] * t2[4],
t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0] + t1[15] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[3],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Afl (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Afl& t2 = afl;
Rtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Afl (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Afl& t2 = afl;
Rvd t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] - t1[4] * t2[4] + t1[5] * t2[3] - t1[7] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] - t1[4] * t2[5] + t1[6] * t2[3] + t1[7] * t2[4],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] - t1[5] * t2[5] + t1[6] * t2[4] - t1[7] * t2[3]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Afl (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[7] + t3[10] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] + t3[8] * t5[7] + t3[9] * t5[4] - t3[10] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[7] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[1] - t3[5] * t5[5] - t3[6] * t5[2] - t3[6] * t5[6] - t3[11] * t5[3] - t3[11] * t5[7],
t3[4] * t5[1] + t3[4] * t5[5] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[3] - t3[6] * t5[7] + t3[11] * t5[2] + t3[11] * t5[6],
t3[4] * t5[2] + t3[4] * t5[6] + t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[0] + t3[6] * t5[4] - t3[11] * t5[1] - t3[11] * t5[5]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Afl& t2 = afl;
Ori_Cir t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[2] * t2[0] - t1[3] * t2[1] - t1[4] * t2[3],
t1[0] * t2[4] + t1[1] * t2[0] - t1[3] * t2[2] - t1[4] * t2[4],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[5],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Afl (
t3[0] * t5[0] + t3[6] * t5[4],
t3[1] * t5[0] + t3[7] * t5[4],
t3[2] * t5[0] + t3[8] * t5[4],
t3[0] * t5[2] + t3[1] * t5[3] + t3[3] * t5[0] + t3[3] * t5[4] - t3[6] * t5[2] - t3[7] * t5[3],
 - t3[0] * t5[1] + t3[2] * t5[3] + t3[4] * t5[0] + t3[4] * t5[4] + t3[6] * t5[1] - t3[8] * t5[3],
 - t3[1] * t5[1] - t3[2] * t5[2] + t3[5] * t5[0] + t3[5] * t5[4] + t3[7] * t5[1] + t3[8] * t5[2]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Afl& t2 = afl;
Tvt t3 (
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[0] * t2[0] + t1[1] * t2[4] - t1[2] * t2[3],
t1[0] * t2[1] + t1[1] * t2[5] - t1[3] * t2[3],
t1[0] * t2[2] + t1[2] * t2[5] - t1[3] * t2[4],
t1[0] * t2[3] - t1[4] * t2[3],
t1[0] * t2[4] - t1[4] * t2[4],
t1[0] * t2[5] - t1[4] * t2[5],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[1] * t2[4] - t1[2] * t2[3] + t1[4] * t2[0],
t1[1] * t2[5] - t1[3] * t2[3] + t1[4] * t2[1],
t1[2] * t2[5] - t1[3] * t2[4] + t1[4] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Afl (
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1] + t3[11] * t5[4],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1] + t3[12] * t5[4],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2] + t3[13] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Trt& trt) {					
					
const Trt& t1 = trt;
const Afl& t2 = afl;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[4] - t1[8] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[7] * t2[5] - t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] - t1[10] * t2[4] + t1[11] * t2[3] - t1[13] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[10] * t2[5] + t1[12] * t2[3] + t1[13] * t2[4],
 - t1[8] * t2[0] - t1[9] * t2[1],
t1[7] * t2[0] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[2],
t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[3],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Afl (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Afl& t2 = afl;
Rvd t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[3] - t1[8] * t2[4] - t1[9] * t2[5] - t1[11] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] - t1[7] * t2[4] + t1[8] * t2[3] - t1[10] * t2[5] + t1[11] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[5] + t1[9] * t2[3] + t1[10] * t2[4] - t1[11] * t2[0],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[8] * t2[5] + t1[9] * t2[4] - t1[10] * t2[3]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Afl (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[8],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[7],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] + t3[10] * t5[11] - t3[11] * t5[3] - t3[11] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[11] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[6] + t3[8] * t5[11] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[8]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Tst& tst) {					
					
const Tst& t1 = tst;
const Afl& t2 = afl;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[4] - t1[8] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[7] * t2[5] - t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5] - t1[14] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] - t1[10] * t2[4] + t1[11] * t2[3] - t1[13] * t2[5] + t1[14] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[10] * t2[5] + t1[12] * t2[3] + t1[13] * t2[4] - t1[14] * t2[0],
 - t1[8] * t2[0] - t1[9] * t2[1],
t1[7] * t2[0] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[2],
t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[3],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Afl (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Afl& t2 = afl;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[4] - t1[8] * t2[3] + t1[14] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[7] * t2[5] - t1[9] * t2[3] - t1[14] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4] + t1[14] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] - t1[10] * t2[4] + t1[11] * t2[3] - t1[13] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[10] * t2[5] + t1[12] * t2[3] + t1[13] * t2[4],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[14] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[14] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[14] * t2[0],
t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[5],
t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0] - t1[14] * t2[4],
t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0] + t1[14] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[3],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Afl (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Afl sp (const Afl& afl, const Bst& bst) {					
					
const Bst& t1 = bst;
const Afl& t2 = afl;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[4] - t1[8] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[7] * t2[5] - t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] - t1[10] * t2[4],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[10] * t2[5],
 - t1[8] * t2[0] - t1[9] * t2[1],
t1[7] * t2[0] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[2],
t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0],
t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1],
t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Afl (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[11] * t5[10] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[12] * t5[10] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1]
);

}
		
	
	  	
template<>
inline Afl re (const Afl& afl, const Vec& vec) {					
					
const Vec& t1 = vec;
const Afl& t2 = afl;
Afl t3 = involute( t2);
Vec_Afl t4 (
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[0] * t3[3] + t1[1] * t3[4] + t1[2] * t3[5],
t1[0] * t3[4] - t1[1] * t3[3],
t1[0] * t3[5] - t1[2] * t3[3],
t1[1] * t3[5] - t1[2] * t3[4],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Afl (
t4[0] * t6[1] - t4[1] * t6[0] + t4[7] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[7] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[7] * t6[0],
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1]
);

}
		
	
	  	
template<>
inline Afl re (const Afl& afl, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Afl& t2 = afl;
Afl t3 = involute( t2);
Pnt_Afl t4 (
 - t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[3],
t1[0] * t3[0] - t1[2] * t3[2] + t1[3] * t3[4],
t1[0] * t3[1] + t1[1] * t3[2] + t1[3] * t3[5],
t1[0] * t3[3] + t1[1] * t3[4] + t1[2] * t3[5],
t1[0] * t3[4] - t1[1] * t3[3],
t1[0] * t3[5] - t1[2] * t3[3],
t1[1] * t3[5] - t1[2] * t3[4],
t1[3] * t3[0],
t1[3] * t3[1],
t1[3] * t3[2],
t1[3] * t3[3],
t1[3] * t3[4],
t1[3] * t3[5],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Afl (
t4[0] * t6[1] - t4[1] * t6[0] - t4[4] * t6[3] + t4[13] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[5] * t6[3] - t4[13] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[6] * t6[3] + t4[13] * t6[0],
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1]
);

}
		
	
	  	
template<>
inline Afl re (const Afl& afl, const Pln& pln) {					
					
const Pln& t1 = pln;
const Afl& t2 = afl;
Afl t3 = involute( t2);
Pnt_Dal t4 (
t1[3] * t3[5],
 - t1[3] * t3[4],
t1[3] * t3[3],
 - t1[0] * t3[4] - t1[1] * t3[5],
t1[0] * t3[3] - t1[2] * t3[5],
t1[1] * t3[3] + t1[2] * t3[4],
 - t1[3] * t3[2],
t1[3] * t3[1],
 - t1[3] * t3[0],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[5],
t1[0] * t3[2] - t1[2] * t3[0] - t1[3] * t3[4],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[3] * t3[3],
 - t1[0] * t3[5] + t1[1] * t3[4] - t1[2] * t3[3]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Afl (
t4[5] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1],
 - t4[4] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0],
t4[3] * t6[3] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[13] * t6[2],
t4[3] * t6[0] - t4[5] * t6[2] + t4[13] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[13] * t6[0]
);

}
		
	
	  	
template<>
inline Afl re (const Afl& afl, const Dll& dll) {					
					
const Dll& t1 = dll;
const Afl& t2 = afl;
Afl t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[3] + t1[4] * t3[4] + t1[5] * t3[5],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[4] - t1[4] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] + t1[3] * t3[5] - t1[5] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[4] * t3[5] - t1[5] * t3[4],
t1[0] * t3[4] + t1[1] * t3[5],
 - t1[0] * t3[3] + t1[2] * t3[5],
 - t1[1] * t3[3] - t1[2] * t3[4],
 - t1[4] * t3[0] - t1[5] * t3[1],
t1[3] * t3[0] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[2],
t1[3] * t3[3] + t1[4] * t3[4] + t1[5] * t3[5],
t1[3] * t3[4] - t1[4] * t3[3],
t1[3] * t3[5] - t1[5] * t3[3],
t1[4] * t3[5] - t1[5] * t3[4],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Afl (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[4] - t4[5] * t6[3] + t4[14] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[5] - t4[6] * t6[3] - t4[14] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[5] - t4[6] * t6[4] + t4[14] * t6[3],
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0]
);

}
		
	
	  	
template<>
inline Afl re (const Afl& afl, const Lin& lin) {					
					
const Lin& t1 = lin;
const Afl& t2 = afl;
Afl t3 = involute( t2);
Rtc t4 (
t1[0] * t3[4] + t1[1] * t3[5],
 - t1[0] * t3[3] + t1[2] * t3[5],
 - t1[1] * t3[3] - t1[2] * t3[4],
 - t1[3] * t3[3] - t1[4] * t3[4] - t1[5] * t3[5],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[3] * t3[4] + t1[4] * t3[3],
 - t1[3] * t3[5] + t1[5] * t3[3],
 - t1[4] * t3[5] + t1[5] * t3[4],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
t1[0] * t3[4] + t1[1] * t3[5] - t1[4] * t3[0] - t1[5] * t3[1],
 - t1[0] * t3[3] + t1[2] * t3[5] + t1[3] * t3[0] - t1[5] * t3[2],
 - t1[1] * t3[3] - t1[2] * t3[4] + t1[3] * t3[1] + t1[4] * t3[2],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3] + t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Afl (
 - t4[3] * t6[0] + t4[6] * t6[2] - t4[7] * t6[1] + t4[11] * t6[4] - t4[12] * t6[3] + t4[15] * t6[5],
 - t4[3] * t6[1] - t4[5] * t6[2] + t4[7] * t6[0] + t4[11] * t6[5] - t4[13] * t6[3] - t4[15] * t6[4],
 - t4[3] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] + t4[12] * t6[5] - t4[13] * t6[4] + t4[15] * t6[3],
 - t4[3] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5],
 - t4[3] * t6[4] + t4[5] * t6[3] - t4[7] * t6[5],
 - t4[3] * t6[5] + t4[6] * t6[3] + t4[7] * t6[4]
);

}
		
	
	  	
template<>
inline Afl re (const Afl& afl, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Afl& t2 = afl;
Afl t3 = involute( t2);
Pnt_Afl t4 (
 - t1[1] * t3[0] - t1[2] * t3[1] + t1[4] * t3[3],
t1[0] * t3[0] - t1[2] * t3[2] + t1[4] * t3[4],
t1[0] * t3[1] + t1[1] * t3[2] + t1[4] * t3[5],
t1[0] * t3[3] + t1[1] * t3[4] + t1[2] * t3[5],
t1[0] * t3[4] - t1[1] * t3[3] + t1[3] * t3[0],
t1[0] * t3[5] - t1[2] * t3[3] + t1[3] * t3[1],
t1[1] * t3[5] - t1[2] * t3[4] + t1[3] * t3[2],
t1[4] * t3[0],
t1[4] * t3[1],
t1[4] * t3[2],
t1[4] * t3[3],
t1[4] * t3[4],
t1[4] * t3[5],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Afl (
t4[0] * t6[1] - t4[1] * t6[0] - t4[4] * t6[4] - t4[7] * t6[3] + t4[13] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[5] * t6[4] - t4[8] * t6[3] - t4[13] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[6] * t6[4] - t4[9] * t6[3] + t4[13] * t6[0],
t4[0] * t6[3] - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2] - t4[10] * t6[3],
t4[1] * t6[3] - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2] - t4[11] * t6[3],
t4[2] * t6[3] - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1] - t4[12] * t6[3]
);

}
		
	
	  	
template<>
inline Afl re (const Afl& afl, const Par& par) {					
					
const Par& t1 = par;
const Afl& t2 = afl;
Afl t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[6] * t3[3] + t1[7] * t3[4] + t1[8] * t3[5],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[6] * t3[4] - t1[7] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] + t1[6] * t3[5] - t1[8] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[7] * t3[5] - t1[8] * t3[4],
t1[0] * t3[4] + t1[1] * t3[5] - t1[4] * t3[0] - t1[5] * t3[1] - t1[9] * t3[3],
 - t1[0] * t3[3] + t1[2] * t3[5] + t1[3] * t3[0] - t1[5] * t3[2] - t1[9] * t3[4],
 - t1[1] * t3[3] - t1[2] * t3[4] + t1[3] * t3[1] + t1[4] * t3[2] - t1[9] * t3[5],
 - t1[7] * t3[0] - t1[8] * t3[1],
t1[6] * t3[0] - t1[8] * t3[2],
t1[6] * t3[1] + t1[7] * t3[2],
t1[6] * t3[3] + t1[7] * t3[4] + t1[8] * t3[5],
t1[6] * t3[4] - t1[7] * t3[3] + t1[9] * t3[0],
t1[6] * t3[5] - t1[8] * t3[3] + t1[9] * t3[1],
t1[7] * t3[5] - t1[8] * t3[4] + t1[9] * t3[2],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3] + t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0],
t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Afl (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[7] - t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[11] * t6[9] + t4[14] * t6[8] + t4[15] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[8] - t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[12] * t6[9] - t4[14] * t6[7] - t4[15] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[8] - t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[13] * t6[9] + t4[14] * t6[6] + t4[15] * t6[3],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[4] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[10] * t6[3] - t4[11] * t6[4] - t4[12] * t6[5] - t4[14] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] + t4[5] * t6[9] - t4[6] * t6[2] - t4[10] * t6[4] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] + t4[6] * t6[9] - t4[10] * t6[5] + t4[12] * t6[3] + t4[13] * t6[4] - t4[14] * t6[0]
);

}
		
	
	  	
template<>
inline Afl re (const Afl& afl, const Cir& cir) {					
					
const Cir& t1 = cir;
const Afl& t2 = afl;
Afl t3 = involute( t2);
Rtc t4 (
t1[3] * t3[4] + t1[4] * t3[5] - t1[9] * t3[2],
 - t1[3] * t3[3] + t1[5] * t3[5] + t1[9] * t3[1],
 - t1[4] * t3[3] - t1[5] * t3[4] - t1[9] * t3[0],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] - t1[6] * t3[3] - t1[7] * t3[4] - t1[8] * t3[5],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1] - t1[6] * t3[4] + t1[7] * t3[3] + t1[9] * t3[5],
t1[0] * t3[2] - t1[2] * t3[0] - t1[6] * t3[5] + t1[8] * t3[3] - t1[9] * t3[4],
 - t1[0] * t3[1] + t1[1] * t3[0] - t1[7] * t3[5] + t1[8] * t3[4] + t1[9] * t3[3],
 - t1[4] * t3[2] + t1[5] * t3[1],
t1[3] * t3[2] - t1[5] * t3[0],
 - t1[3] * t3[1] + t1[4] * t3[0],
t1[3] * t3[4] + t1[4] * t3[5] - t1[7] * t3[0] - t1[8] * t3[1],
 - t1[3] * t3[3] + t1[5] * t3[5] + t1[6] * t3[0] - t1[8] * t3[2],
 - t1[4] * t3[3] - t1[5] * t3[4] + t1[6] * t3[1] + t1[7] * t3[2],
t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[3],
t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[3] + t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Afl (
t4[2] * t6[9] - t4[3] * t6[3] - t4[4] * t6[0] + t4[6] * t6[5] - t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[15] * t6[8],
 - t4[1] * t6[9] - t4[3] * t6[4] - t4[4] * t6[1] - t4[5] * t6[5] + t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[15] * t6[7],
t4[0] * t6[9] - t4[3] * t6[5] - t4[4] * t6[2] + t4[5] * t6[4] - t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[12] * t6[8] - t4[13] * t6[7] + t4[15] * t6[6],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[9] + t4[12] * t6[0] + t4[13] * t6[1] - t4[14] * t6[2] + t4[15] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[3] * t6[7] + t4[5] * t6[6] - t4[6] * t6[9] - t4[7] * t6[8] - t4[11] * t6[0] + t4[13] * t6[2] + t4[14] * t6[1] - t4[15] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[8] + t4[5] * t6[9] + t4[6] * t6[6] + t4[7] * t6[7] - t4[11] * t6[1] - t4[12] * t6[2] - t4[14] * t6[0] + t4[15] * t6[0]
);

}
		
	
	  	
template<>
inline Afl re (const Afl& afl, const Sph& sph) {					
					
const Sph& t1 = sph;
const Afl& t2 = afl;
Afl t3 = involute( t2);
Pnt_Dal t4 (
t1[4] * t3[5],
 - t1[4] * t3[4],
t1[4] * t3[3],
 - t1[0] * t3[4] - t1[1] * t3[5] - t1[3] * t3[2],
t1[0] * t3[3] - t1[2] * t3[5] + t1[3] * t3[1],
t1[1] * t3[3] + t1[2] * t3[4] - t1[3] * t3[0],
 - t1[4] * t3[2],
t1[4] * t3[1],
 - t1[4] * t3[0],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[4] * t3[5],
t1[0] * t3[2] - t1[2] * t3[0] - t1[4] * t3[4],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[4] * t3[3],
 - t1[0] * t3[5] + t1[1] * t3[4] - t1[2] * t3[3]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Afl (
t4[5] * t6[4] + t4[8] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1],
 - t4[4] * t6[4] - t4[7] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0],
t4[3] * t6[4] + t4[6] * t6[3] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0],
 - t4[2] * t6[3] - t4[4] * t6[0] - t4[5] * t6[1] + t4[12] * t6[3] - t4[13] * t6[2],
t4[1] * t6[3] + t4[3] * t6[0] - t4[5] * t6[2] - t4[11] * t6[3] + t4[13] * t6[1],
 - t4[0] * t6[3] + t4[3] * t6[1] + t4[4] * t6[2] + t4[10] * t6[3] - t4[13] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	