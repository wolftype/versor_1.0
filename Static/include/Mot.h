		#ifndef MOT_H_INCLUDED
		#define MOT_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Mot gp (const Mot& a, const Sca& b) { 
	return Mot (
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
		 
		
template<> inline MVBase gp_gen<Mot, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Sca*)(&b));
}			
		 
inline Par_Tnb gp (const Mot& a, const Ori& b) { 
	return Par_Tnb (
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
 - a[7] * b[0],
 - a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Ori*)(&b));
}			
		 
inline Drv_Lin gp (const Mot& a, const Inf& b) { 
	return Drv_Lin (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Inf*)(&b));
}			
		 
inline Lin_Dlp gp (const Mot& a, const Mnk& b) { 
	return Lin_Dlp (
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
 - a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Mnk*)(&b));
}			
		 
inline Rtc gp (const Mot& a, const Hyp& b) { 
	return Rtc (
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
a[0] * b[0],
a[0] * b[1],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1],
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
 - a[7] * b[0],
 - a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Hyp*)(&b));
}			
		 
inline Lin_Dll gp (const Mot& a, const Pss& b) { 
	return Lin_Dll (
 - a[7] * b[0],
a[6] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Pss*)(&b));
}			
		 
inline Rtc gp (const Mot& a, const Pnt& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[3],
a[0] * b[3],
a[0] * b[4] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[1] * b[4] - a[4] * b[1] + a[5] * b[0] - a[7] * b[2],
a[2] * b[4] - a[4] * b[2] + a[6] * b[0] + a[7] * b[1],
a[3] * b[4] - a[5] * b[2] + a[6] * b[1] - a[7] * b[0],
 - a[4] * b[3],
 - a[5] * b[3],
 - a[6] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[7] * b[3],
 - a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Pnt*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Par& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[4] - a[5] * b[3] + a[7] * b[5],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[5] - a[6] * b[3] - a[7] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[5] - a[6] * b[4] + a[7] * b[3],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[4] * b[9] - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[4] * b[0] - a[5] * b[9] - a[6] * b[2] + a[7] * b[1],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[4] * b[1] + a[5] * b[2] - a[6] * b[9] - a[7] * b[0],
a[0] * b[9] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[1] * b[9] + a[4] * b[4] - a[5] * b[3] + a[7] * b[5],
a[2] * b[9] + a[4] * b[5] - a[6] * b[3] - a[7] * b[4],
a[3] * b[9] + a[5] * b[5] - a[6] * b[4] + a[7] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] - a[7] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Par*)(&b));
}			
		 
inline Rtc gp (const Mot& a, const Cir& b) { 
	return Rtc (
 - a[3] * b[9] + a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
a[2] * b[9] - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
 - a[1] * b[9] - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5] + a[4] * b[6] + a[5] * b[7] + a[6] * b[8] + a[7] * b[9],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] - a[2] * b[5] + a[3] * b[4] + a[4] * b[7] - a[5] * b[6] - a[6] * b[9] + a[7] * b[8],
a[0] * b[4] + a[1] * b[5] - a[3] * b[3] + a[4] * b[8] + a[5] * b[9] - a[6] * b[6] - a[7] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[4] * b[9] + a[5] * b[8] - a[6] * b[7] + a[7] * b[6],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] + a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
a[0] * b[9] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Cir*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Sph& b) { 
	return Mtt (
 - a[7] * b[3],
a[6] * b[3],
 - a[5] * b[3],
a[4] * b[3],
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
 - a[3] * b[4] + a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
a[2] * b[4] - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
 - a[1] * b[4] - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[7] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[6] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[4] * b[3],
a[0] * b[3],
a[0] * b[4] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Sph*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Sta& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[4] - a[5] * b[3] + a[7] * b[5],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[5] - a[6] * b[3] - a[7] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[5] - a[6] * b[4] + a[7] * b[3],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[4] * b[4] - a[5] * b[3] + a[7] * b[5],
a[4] * b[5] - a[6] * b[3] - a[7] * b[4],
a[5] * b[5] - a[6] * b[4] + a[7] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Sta*)(&b));
}			
		 
inline Drv_Pln gp (const Mot& a, const Drv& b) { 
	return Drv_Pln (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Drv*)(&b));
}			
		 
inline Drv_Lin gp (const Mot& a, const Drb& b) { 
	return Drv_Lin (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Drb*)(&b));
}			
		 
inline Drv_Pln gp (const Mot& a, const Drt& b) { 
	return Drv_Pln (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Drt*)(&b));
}			
		 
inline Rvd gp (const Mot& a, const Tnv& b) { 
	return Rvd (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[5] * b[2] - a[6] * b[1] + a[7] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[5] * b[2] - a[6] * b[1] + a[7] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Tnv*)(&b));
}			
		 
inline Par_Tnb gp (const Mot& a, const Tnb& b) { 
	return Par_Tnb (
a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
 - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
 - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
 - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
 - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Tnb*)(&b));
}			
		 
inline Rvd gp (const Mot& a, const Tnt& b) { 
	return Rvd (
 - a[7] * b[0],
a[6] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
 - a[7] * b[0],
a[6] * b[0],
 - a[5] * b[0],
a[4] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Tnt*)(&b));
}			
		 
inline Lin_Dll gp (const Mot& a, const Lin& b) { 
	return Lin_Dll (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[4] - a[5] * b[3] + a[7] * b[5],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[5] - a[6] * b[3] - a[7] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[5] - a[6] * b[4] + a[7] * b[3],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Lin*)(&b));
}			
		 
inline Lin_Dlp gp (const Mot& a, const Pln& b) { 
	return Lin_Dlp (
 - a[3] * b[3] + a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
a[2] * b[3] - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
 - a[1] * b[3] - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Pln*)(&b));
}			
		 
inline Lin_Dlp gp (const Mot& a, const Flp& b) { 
	return Lin_Dlp (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[3],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Flp*)(&b));
}			
		 
inline Lin_Pln gp (const Mot& a, const Dfp& b) { 
	return Lin_Pln (
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
		 
		
template<> inline MVBase gp_gen<Mot, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Dfp*)(&b));
}			
		 
inline Mot gp (const Mot& a, const Dll& b) { 
	return Mot (
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
		 
		
template<> inline MVBase gp_gen<Mot, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Dll*)(&b));
}			
		 
inline Lin_Pln gp (const Mot& a, const Dlp& b) { 
	return Lin_Pln (
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
		 
		
template<> inline MVBase gp_gen<Mot, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Dlp*)(&b));
}			
		 
inline Lin_Pln gp (const Mot& a, const Vec& b) { 
	return Lin_Pln (
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
		 
		
template<> inline MVBase gp_gen<Mot, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Vec*)(&b));
}			
		 
inline Mot gp (const Mot& a, const Biv& b) { 
	return Mot (
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
		 
		
template<> inline MVBase gp_gen<Mot, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Biv*)(&b));
}			
		 
inline Lin_Pln gp (const Mot& a, const Tri& b) { 
	return Lin_Pln (
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
		 
		
template<> inline MVBase gp_gen<Mot, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Tri*)(&b));
}			
		 
inline Rtc gp (const Mot& a, const Aff& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[3],
a[0] * b[3],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
 - a[4] * b[1] + a[5] * b[0] - a[7] * b[2],
 - a[4] * b[2] + a[6] * b[0] + a[7] * b[1],
 - a[5] * b[2] + a[6] * b[1] - a[7] * b[0],
 - a[4] * b[3],
 - a[5] * b[3],
 - a[6] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[7] * b[3],
 - a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Aff*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Afl& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[4] - a[5] * b[3] + a[7] * b[5],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[5] - a[6] * b[3] - a[7] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[5] - a[6] * b[4] + a[7] * b[3],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
 - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[4] * b[4] - a[5] * b[3] + a[7] * b[5],
a[4] * b[5] - a[6] * b[3] - a[7] * b[4],
a[5] * b[5] - a[6] * b[4] + a[7] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Afl*)(&b));
}			
		 
inline Rtc gp (const Mot& a, const Afp& b) { 
	return Rtc (
 - a[3] * b[3] + a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
a[2] * b[3] - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
 - a[1] * b[3] - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[7] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[6] * b[3],
a[5] * b[3],
 - a[4] * b[3],
a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
 - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
 - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
a[0] * b[3] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Afp*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Dap& b) { 
	return Mtt (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[5] * b[2] - a[6] * b[1] + a[7] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
 - a[4] * b[3],
 - a[5] * b[3],
 - a[6] * b[3],
a[0] * b[3] + a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[1] * b[3] + a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[2] * b[3] + a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[3] * b[3] + a[5] * b[2] - a[6] * b[1] + a[7] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
 - a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Dap*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Daf& b) { 
	return Mtt (
 - a[7] * b[3],
a[6] * b[3],
 - a[5] * b[3],
a[4] * b[3],
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
 - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
 - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[7] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[6] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[4] * b[3],
a[0] * b[3],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Daf*)(&b));
}			
		 
inline Rtc gp (const Mot& a, const Dal& b) { 
	return Rtc (
a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
 - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
 - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[4] * b[4] - a[5] * b[3] + a[7] * b[5],
a[4] * b[5] - a[6] * b[3] - a[7] * b[4],
a[5] * b[5] - a[6] * b[4] + a[7] * b[3],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Dal*)(&b));
}			
		 
inline Lin_Dll gp (const Mot& a, const Mnv& b) { 
	return Lin_Dll (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[5] * b[2] - a[6] * b[1] + a[7] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Mnv*)(&b));
}			
		 
inline Mot gp (const Mot& a, const Rot& b) { 
	return Mot (
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
		 
		
template<> inline MVBase gp_gen<Mot, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Rot*)(&b));
}			
		 
inline Mot gp (const Mot& a, const Mot& b) { 
	return Mot (
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
		 
		
template<> inline MVBase gp_gen<Mot, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Mot*)(&b));
}			
		 
inline Mtd gp (const Mot& a, const Dil& b) { 
	return Mtd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0] - a[4] * b[1],
a[5] * b[0] - a[5] * b[1],
a[6] * b[0] - a[6] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1],
a[7] * b[0] - a[7] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Dil*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Trv& b) { 
	return Mtt (
a[0] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3],
a[1] * b[0] + a[4] * b[2] - a[5] * b[1] + a[7] * b[3],
a[2] * b[0] + a[4] * b[3] - a[6] * b[1] - a[7] * b[2],
a[3] * b[0] + a[5] * b[3] - a[6] * b[2] + a[7] * b[1],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[4] * b[1] + a[5] * b[2] + a[6] * b[3],
a[4] * b[2] - a[5] * b[1] + a[7] * b[3],
a[4] * b[3] - a[6] * b[1] - a[7] * b[2],
a[5] * b[3] - a[6] * b[2] + a[7] * b[1],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1],
a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Trv*)(&b));
}			
		 
inline Mtd gp (const Mot& a, const Mtd& b) { 
	return Mtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11] + a[4] * b[0] - a[4] * b[7] - a[5] * b[1] + a[5] * b[8] - a[6] * b[2] + a[6] * b[9] - a[7] * b[3] + a[7] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6] + a[4] * b[1] - a[4] * b[8] + a[5] * b[0] - a[5] * b[7] - a[6] * b[3] + a[6] * b[10] + a[7] * b[2] - a[7] * b[9],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] - a[4] * b[9] + a[5] * b[3] - a[5] * b[10] + a[6] * b[0] - a[6] * b[7] - a[7] * b[1] + a[7] * b[8],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] - a[4] * b[10] - a[5] * b[2] + a[5] * b[9] + a[6] * b[1] - a[6] * b[8] + a[7] * b[0] - a[7] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Mtd*)(&b));
}			
		 
inline Mot gp (const Mot& a, const Trs& b) { 
	return Mot (
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
		 
		
template<> inline MVBase gp_gen<Mot, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Mot& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[14] - a[4] * b[3] + a[5] * b[5] + a[6] * b[6] + a[7] * b[7],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14] + a[3] * b[2] - a[4] * b[5] - a[5] * b[3] + a[6] * b[7] - a[7] * b[6],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0] - a[3] * b[1] - a[4] * b[6] - a[5] * b[7] - a[6] * b[3] + a[7] * b[5],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] - a[4] * b[0] + a[4] * b[11] - a[5] * b[1] + a[5] * b[12] - a[6] * b[2] + a[6] * b[13] + a[7] * b[14] - a[7] * b[15],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7] + a[3] * b[6],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3] - a[3] * b[5],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[3],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10] + a[3] * b[9] - a[4] * b[1] + a[4] * b[12] + a[5] * b[0] - a[5] * b[11] - a[6] * b[14] + a[6] * b[15] - a[7] * b[2] + a[7] * b[13],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4] - a[3] * b[8] - a[4] * b[2] + a[4] * b[13] + a[5] * b[14] - a[5] * b[15] + a[6] * b[0] - a[6] * b[11] + a[7] * b[1] - a[7] * b[12],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[4] - a[4] * b[14] + a[4] * b[15] - a[5] * b[2] + a[5] * b[13] + a[6] * b[1] - a[6] * b[12] - a[7] * b[0] + a[7] * b[11],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13] - a[3] * b[15] - a[4] * b[3] + a[5] * b[5] + a[6] * b[6] + a[7] * b[7],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15] + a[3] * b[13] - a[4] * b[5] - a[5] * b[3] + a[6] * b[7] - a[7] * b[6],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11] - a[3] * b[12] - a[4] * b[6] - a[5] * b[7] - a[6] * b[3] + a[7] * b[5],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[4] * b[7] + a[5] * b[6] - a[6] * b[5] - a[7] * b[3],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12] + a[3] * b[11] - a[4] * b[7] + a[5] * b[6] - a[6] * b[5] - a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[7] * b[14],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[14] + a[7] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[14] - a[6] * b[4] - a[7] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[14] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[15] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] + a[5] * b[11] - a[6] * b[2] + a[6] * b[12] - a[7] * b[3] + a[7] * b[13],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15] + a[3] * b[9] + a[4] * b[1] - a[4] * b[11] + a[5] * b[0] - a[5] * b[10] - a[6] * b[3] + a[6] * b[13] + a[7] * b[2] - a[7] * b[12],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7] - a[3] * b[8] + a[4] * b[2] - a[4] * b[12] + a[5] * b[3] - a[5] * b[13] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] + a[7] * b[11],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[7] * b[14],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] + a[4] * b[5] - a[5] * b[4] + a[6] * b[14] + a[7] * b[6],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] + a[4] * b[6] - a[5] * b[14] - a[6] * b[4] - a[7] * b[5],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] + a[4] * b[14] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[4] * b[3] - a[4] * b[13] - a[5] * b[2] + a[5] * b[12] + a[6] * b[1] - a[6] * b[11] + a[7] * b[0] - a[7] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Mtt*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Rtt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[7] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[7] + a[7] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[7] - a[6] * b[4] - a[7] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[7] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[7] * b[7],
a[4] * b[5] - a[5] * b[4] + a[6] * b[7] + a[7] * b[6],
a[4] * b[6] - a[5] * b[7] - a[6] * b[4] - a[7] * b[5],
a[4] * b[7] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Rtt*)(&b));
}			
		 
inline Mtd gp (const Mot& a, const Rtd& b) { 
	return Mtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[4] * b[0] - a[4] * b[4] - a[5] * b[1] + a[5] * b[5] - a[6] * b[2] + a[6] * b[6] - a[7] * b[3] + a[7] * b[7],
a[4] * b[1] - a[4] * b[5] + a[5] * b[0] - a[5] * b[4] - a[6] * b[3] + a[6] * b[7] + a[7] * b[2] - a[7] * b[6],
a[4] * b[2] - a[4] * b[6] + a[5] * b[3] - a[5] * b[7] + a[6] * b[0] - a[6] * b[4] - a[7] * b[1] + a[7] * b[5],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7] + a[3] * b[6],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4] - a[3] * b[5],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[4],
a[4] * b[3] - a[4] * b[7] - a[5] * b[2] + a[5] * b[6] + a[6] * b[1] - a[6] * b[5] + a[7] * b[0] - a[7] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Rtd*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Tvd& b) { 
	return Mtt (
a[0] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3],
a[1] * b[0] + a[4] * b[2] - a[5] * b[1] + a[7] * b[3],
a[2] * b[0] + a[4] * b[3] - a[6] * b[1] - a[7] * b[2],
a[3] * b[0] + a[5] * b[3] - a[6] * b[2] + a[7] * b[1],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2],
a[4] * b[0] - a[4] * b[4],
a[5] * b[0] - a[5] * b[4],
a[6] * b[0] - a[6] * b[4],
a[0] * b[4] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3],
a[1] * b[4] + a[4] * b[2] - a[5] * b[1] + a[7] * b[3],
a[2] * b[4] + a[4] * b[3] - a[6] * b[1] - a[7] * b[2],
a[3] * b[4] + a[5] * b[3] - a[6] * b[2] + a[7] * b[1],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1],
a[7] * b[0] - a[7] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Tvd*)(&b));
}			
		 
inline Mtd gp (const Mot& a, const Tsd& b) { 
	return Mtd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[0] - a[4] * b[4],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[5] * b[0] - a[5] * b[4],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[6] * b[0] - a[6] * b[4],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] + a[7] * b[0] - a[7] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Trt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[7] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[6] * b[4] - a[7] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] + a[5] * b[11] - a[6] * b[2] + a[6] * b[12] - a[7] * b[3] + a[7] * b[13],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[4] * b[1] - a[4] * b[11] + a[5] * b[0] - a[5] * b[10] - a[6] * b[3] + a[6] * b[13] + a[7] * b[2] - a[7] * b[12],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[4] * b[2] - a[4] * b[12] + a[5] * b[3] - a[5] * b[13] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] + a[7] * b[11],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] + a[4] * b[5] - a[5] * b[4] + a[7] * b[6],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] + a[4] * b[6] - a[6] * b[4] - a[7] * b[5],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[4] * b[3] - a[4] * b[13] - a[5] * b[2] + a[5] * b[12] + a[6] * b[1] - a[6] * b[11] + a[7] * b[0] - a[7] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Trt*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Rvd& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[7] * b[11],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[11] + a[7] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[11] - a[6] * b[4] - a[7] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[11] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5],
a[4] * b[0] - a[4] * b[7] - a[5] * b[1] + a[5] * b[8] - a[6] * b[2] + a[6] * b[9] - a[7] * b[3] + a[7] * b[10],
a[4] * b[1] - a[4] * b[8] + a[5] * b[0] - a[5] * b[7] - a[6] * b[3] + a[6] * b[10] + a[7] * b[2] - a[7] * b[9],
a[4] * b[2] - a[4] * b[9] + a[5] * b[3] - a[5] * b[10] + a[6] * b[0] - a[6] * b[7] - a[7] * b[1] + a[7] * b[8],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[7] * b[11],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9] + a[4] * b[5] - a[5] * b[4] + a[6] * b[11] + a[7] * b[6],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8] + a[4] * b[6] - a[5] * b[11] - a[6] * b[4] - a[7] * b[5],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7] + a[4] * b[11] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4],
a[4] * b[3] - a[4] * b[10] - a[5] * b[2] + a[5] * b[9] + a[6] * b[1] - a[6] * b[8] + a[7] * b[0] - a[7] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Tst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[7] * b[14],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[14] + a[7] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[14] - a[6] * b[4] - a[7] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[14] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] + a[5] * b[11] - a[6] * b[2] + a[6] * b[12] - a[7] * b[3] + a[7] * b[13],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[4] * b[1] - a[4] * b[11] + a[5] * b[0] - a[5] * b[10] - a[6] * b[3] + a[6] * b[13] + a[7] * b[2] - a[7] * b[12],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[4] * b[2] - a[4] * b[12] + a[5] * b[3] - a[5] * b[13] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] + a[7] * b[11],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[7] * b[14],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] + a[4] * b[5] - a[5] * b[4] + a[6] * b[14] + a[7] * b[6],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] + a[4] * b[6] - a[5] * b[14] - a[6] * b[4] - a[7] * b[5],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] + a[4] * b[14] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[4] * b[3] - a[4] * b[13] - a[5] * b[2] + a[5] * b[12] + a[6] * b[1] - a[6] * b[11] + a[7] * b[0] - a[7] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Tvt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[7] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[6] * b[4] - a[7] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[14] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] + a[5] * b[11] - a[6] * b[2] + a[6] * b[12] - a[7] * b[3] + a[7] * b[13],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14] + a[3] * b[9] + a[4] * b[1] - a[4] * b[11] + a[5] * b[0] - a[5] * b[10] - a[6] * b[3] + a[6] * b[13] + a[7] * b[2] - a[7] * b[12],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7] - a[3] * b[8] + a[4] * b[2] - a[4] * b[12] + a[5] * b[3] - a[5] * b[13] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1] + a[7] * b[11],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] + a[4] * b[5] - a[5] * b[4] + a[7] * b[6],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] + a[4] * b[6] - a[6] * b[4] - a[7] * b[5],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[4] * b[3] - a[4] * b[13] - a[5] * b[2] + a[5] * b[12] + a[6] * b[1] - a[6] * b[11] + a[7] * b[0] - a[7] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Tvt*)(&b));
}			
		 
inline Mtt gp (const Mot& a, const Bst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[7] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[6] * b[4] - a[7] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[4] * b[1] + a[5] * b[0] - a[5] * b[10] - a[6] * b[3] + a[7] * b[2],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[6] * b[10] - a[7] * b[1],
a[0] * b[10] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6],
a[1] * b[10] + a[4] * b[5] - a[5] * b[4] + a[7] * b[6],
a[2] * b[10] + a[4] * b[6] - a[6] * b[4] - a[7] * b[5],
a[3] * b[10] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0] - a[7] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Mot, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mot*)(&a),*(Bst*)(&b));
}			
		 
inline Mot ip (const Mot& a, const Mot& b) { 
	return Mot (
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
		 
		
template<> inline MVBase ip_gen<Mot, Mot> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mot*)(&a),*(Mot*)(&b));
}			
		  	
template<>
inline Mot sp (const Mot& mot, const Rot& rot) {					
					
const Rot& t1 = rot;
const Mot& t2 = mot;
Mot t3 (
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
return Mot (
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
inline Mot sp (const Mot& mot, const Dil& dil) {					
					
const Dil& t1 = dil;
const Mot& t2 = mot;
Mtd t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4] + t1[1] * t2[4],
t1[0] * t2[5] + t1[1] * t2[5],
t1[0] * t2[6] + t1[1] * t2[6],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2],
t1[1] * t2[3],
t1[0] * t2[7] + t1[1] * t2[7]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Mot (
t3[0] * t5[0] + t3[7] * t5[1],
t3[1] * t5[0] + t3[8] * t5[1],
t3[2] * t5[0] + t3[9] * t5[1],
t3[3] * t5[0] + t3[10] * t5[1],
t3[4] * t5[0] - t3[4] * t5[1],
t3[5] * t5[0] - t3[5] * t5[1],
t3[6] * t5[0] - t3[6] * t5[1],
t3[11] * t5[0] - t3[11] * t5[1]
);

}
		
	
	  	
template<>
inline Mot sp (const Mot& mot, const Trv& trv) {					
					
const Trv& t1 = trv;
const Mot& t2 = mot;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6],
t1[0] * t2[1] + t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[7],
t1[0] * t2[2] + t1[1] * t2[6] - t1[2] * t2[7] - t1[3] * t2[4],
t1[0] * t2[3] + t1[1] * t2[7] + t1[2] * t2[6] - t1[3] * t2[5],
t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3],
t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0],
t1[0] * t2[4],
t1[0] * t2[5],
t1[0] * t2[6],
 - t1[1] * t2[4] - t1[2] * t2[5] - t1[3] * t2[6],
 - t1[1] * t2[5] + t1[2] * t2[4] - t1[3] * t2[7],
 - t1[1] * t2[6] + t1[2] * t2[7] + t1[3] * t2[4],
 - t1[1] * t2[7] - t1[2] * t2[6] + t1[3] * t2[5],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[7]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Mot (
t3[0] * t5[0] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3],
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1] + t3[15] * t5[3],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1] - t3[15] * t5[2],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2] + t3[15] * t5[1],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0],
t3[15] * t5[0]
);

}
		
	
	  	
template<>
inline Mot sp (const Mot& mot, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Mot& t2 = mot;
Mtd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] - t1[10] * t2[7] - t1[11] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7] + t1[10] * t2[6] + t1[11] * t2[2],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] + t1[7] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4] - t1[10] * t2[5] - t1[11] * t2[1],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[4] + t1[11] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Mot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[8],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[7],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] - t3[4] * t5[7] - t3[5] * t5[1] + t3[5] * t5[8] - t3[6] * t5[2] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[11] - t3[11] * t5[3] + t3[11] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] - t3[4] * t5[8] + t3[5] * t5[0] - t3[5] * t5[7] - t3[6] * t5[3] + t3[6] * t5[10] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[6] + t3[11] * t5[2] - t3[11] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] - t3[4] * t5[9] + t3[5] * t5[3] - t3[5] * t5[10] + t3[6] * t5[0] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] - t3[10] * t5[5] - t3[11] * t5[1] + t3[11] * t5[8],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] - t3[4] * t5[10] - t3[5] * t5[2] + t3[5] * t5[9] + t3[6] * t5[1] - t3[6] * t5[8] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[0] - t3[11] * t5[7]
);

}
		
	
	  	
template<>
inline Mot sp (const Mot& mot, const Trs& trs) {					
					
const Trs& t1 = trs;
const Mot& t2 = mot;
Mot t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4] + t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3],
t1[0] * t2[6] + t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0],
t1[0] * t2[7] + t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Mot (
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
inline Mot sp (const Mot& mot, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Mot& t2 = mot;
Rtc t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] + t1[3] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[7] * t2[7] - t1[14] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[5] - t1[5] * t2[4] + t1[6] * t2[7] + t1[7] * t2[6] + t1[14] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] + t1[3] * t2[6] - t1[5] * t2[7] - t1[6] * t2[4] - t1[7] * t2[5] - t1[14] * t2[1],
t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3] + t1[11] * t2[4] + t1[12] * t2[5] + t1[13] * t2[6] - t1[14] * t2[7] - t1[15] * t2[7],
t1[3] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2],
t1[3] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[4] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[7] + t1[14] * t2[6] + t1[15] * t2[6],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] + t1[4] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1] + t1[11] * t2[6] - t1[12] * t2[7] - t1[13] * t2[4] - t1[14] * t2[5] - t1[15] * t2[5],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[4] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0] + t1[11] * t2[7] + t1[12] * t2[6] - t1[13] * t2[5] + t1[14] * t2[4] + t1[15] * t2[4],
 - t1[3] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[7] * t2[7] + t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[15] * t2[3],
 - t1[3] * t2[5] + t1[5] * t2[4] - t1[6] * t2[7] - t1[7] * t2[6] + t1[11] * t2[1] + t1[12] * t2[0] - t1[13] * t2[3] + t1[15] * t2[2],
 - t1[3] * t2[6] + t1[5] * t2[7] + t1[6] * t2[4] + t1[7] * t2[5] + t1[11] * t2[2] + t1[12] * t2[3] + t1[13] * t2[0] - t1[15] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[7] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4] + t1[14] * t2[0],
 - t1[3] * t2[7] - t1[5] * t2[6] + t1[6] * t2[5] - t1[7] * t2[4] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Mot (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[4] * t5[0] + t3[4] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[14] - t3[10] * t5[15] + t3[11] * t5[4] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[10] - t3[15] * t5[10],
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] - t3[4] * t5[1] + t3[4] * t5[12] + t3[8] * t5[0] - t3[8] * t5[11] - t3[9] * t5[14] + t3[9] * t5[15] - t3[10] * t5[2] + t3[10] * t5[13] + t3[11] * t5[8] + t3[12] * t5[4] - t3[13] * t5[10] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[4] * t5[2] + t3[4] * t5[13] + t3[8] * t5[14] - t3[8] * t5[15] + t3[9] * t5[0] - t3[9] * t5[11] + t3[10] * t5[1] - t3[10] * t5[12] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[4] - t3[14] * t5[8] - t3[15] * t5[8],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] - t3[4] * t5[14] + t3[4] * t5[15] - t3[8] * t5[2] + t3[8] * t5[13] + t3[9] * t5[1] - t3[9] * t5[12] - t3[10] * t5[0] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[9] + t3[13] * t5[8] + t3[14] * t5[4] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Mot sp (const Mot& mot, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Mot& t2 = mot;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[14] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[7] + t1[14] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[4] - t1[14] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[5] + t1[14] * t2[4],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[14] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[14] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[14] * t2[1],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[4] + t1[11] * t2[5] + t1[12] * t2[6] - t1[13] * t2[7] - t1[15] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[5] - t1[11] * t2[4] + t1[12] * t2[7] + t1[13] * t2[6] + t1[15] * t2[2],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] + t1[10] * t2[6] - t1[11] * t2[7] - t1[12] * t2[4] - t1[13] * t2[5] - t1[15] * t2[1],
 - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3] + t1[14] * t2[7],
 - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[7] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] - t1[14] * t2[6],
 - t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] + t1[14] * t2[5],
 - t1[4] * t2[7] - t1[5] * t2[6] + t1[6] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] - t1[14] * t2[4],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[14] * t2[0],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[7] + t1[11] * t2[6] - t1[12] * t2[5] + t1[13] * t2[4] + t1[15] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Mot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[15] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[15] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[15] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[15] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[15] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[15] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Mot sp (const Mot& mot, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Mot& t2 = mot;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[7] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[7] + t1[7] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[4] - t1[7] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5],
 - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[7] * t2[7],
 - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[7] - t1[7] * t2[6],
 - t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[4] + t1[7] * t2[5],
 - t1[4] * t2[7] - t1[5] * t2[6] + t1[6] * t2[5] - t1[7] * t2[4],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Mot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[15] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[15] * t5[4],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[15] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[15] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[15] * t5[1],
t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[15] * t5[0]
);

}
		
	
	  	
template<>
inline Mot sp (const Mot& mot, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Mot& t2 = mot;
Mtd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[7] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[7] + t1[7] * t2[6],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[4] - t1[7] * t2[5],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Mot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[7] + t3[10] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] + t3[8] * t5[7] + t3[9] * t5[4] - t3[10] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[7] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[4],
t3[4] * t5[0] - t3[4] * t5[4] - t3[5] * t5[1] + t3[5] * t5[5] - t3[6] * t5[2] + t3[6] * t5[6] - t3[11] * t5[3] + t3[11] * t5[7],
t3[4] * t5[1] - t3[4] * t5[5] + t3[5] * t5[0] - t3[5] * t5[4] - t3[6] * t5[3] + t3[6] * t5[7] + t3[11] * t5[2] - t3[11] * t5[6],
t3[4] * t5[2] - t3[4] * t5[6] + t3[5] * t5[3] - t3[5] * t5[7] + t3[6] * t5[0] - t3[6] * t5[4] - t3[11] * t5[1] + t3[11] * t5[5],
t3[4] * t5[3] - t3[4] * t5[7] - t3[5] * t5[2] + t3[5] * t5[6] + t3[6] * t5[1] - t3[6] * t5[5] + t3[11] * t5[0] - t3[11] * t5[4]
);

}
		
	
	  	
template<>
inline Mot sp (const Mot& mot, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Mot& t2 = mot;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6],
t1[0] * t2[1] + t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[7],
t1[0] * t2[2] + t1[1] * t2[6] - t1[2] * t2[7] - t1[3] * t2[4],
t1[0] * t2[3] + t1[1] * t2[7] + t1[2] * t2[6] - t1[3] * t2[5],
t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3],
t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0],
t1[0] * t2[4] + t1[4] * t2[4],
t1[0] * t2[5] + t1[4] * t2[5],
t1[0] * t2[6] + t1[4] * t2[6],
 - t1[1] * t2[4] - t1[2] * t2[5] - t1[3] * t2[6] + t1[4] * t2[0],
 - t1[1] * t2[5] + t1[2] * t2[4] - t1[3] * t2[7] + t1[4] * t2[1],
 - t1[1] * t2[6] + t1[2] * t2[7] + t1[3] * t2[4] + t1[4] * t2[2],
 - t1[1] * t2[7] - t1[2] * t2[6] + t1[3] * t2[5] + t1[4] * t2[3],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[7] + t1[4] * t2[7]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Mot (
t3[0] * t5[0] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[4],
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1] + t3[11] * t5[4] + t3[15] * t5[3],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1] + t3[12] * t5[4] - t3[15] * t5[2],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2] + t3[13] * t5[4] + t3[15] * t5[1],
t3[7] * t5[0] - t3[7] * t5[4],
t3[8] * t5[0] - t3[8] * t5[4],
t3[9] * t5[0] - t3[9] * t5[4],
t3[15] * t5[0] - t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Mot sp (const Mot& mot, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Mot& t2 = mot;
Mtd t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4] + t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[4],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3] + t1[4] * t2[5],
t1[0] * t2[6] + t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0] + t1[4] * t2[6],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
t1[4] * t2[3],
t1[0] * t2[7] + t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[7]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Mot (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4],
t3[3] * t5[0] + t3[10] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] - t3[4] * t5[4] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] - t3[5] * t5[4] + t3[7] * t5[2] - t3[8] * t5[1] + t3[10] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] - t3[6] * t5[4] + t3[7] * t5[3] - t3[9] * t5[1] - t3[10] * t5[2],
t3[1] * t5[3] - t3[2] * t5[2] + t3[3] * t5[1] + t3[8] * t5[3] - t3[9] * t5[2] + t3[10] * t5[1] + t3[11] * t5[0] - t3[11] * t5[4]
);

}
		
	
	  	
template<>
inline Mot sp (const Mot& mot, const Trt& trt) {					
					
const Trt& t1 = trt;
const Mot& t2 = mot;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[7],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[4],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[5],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[4] + t1[11] * t2[5] + t1[12] * t2[6] - t1[13] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[5] - t1[11] * t2[4] + t1[12] * t2[7] + t1[13] * t2[6],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] + t1[10] * t2[6] - t1[11] * t2[7] - t1[12] * t2[4] - t1[13] * t2[5],
 - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
 - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[7] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
 - t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[7] - t1[5] * t2[6] + t1[6] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[7] + t1[11] * t2[6] - t1[12] * t2[5] + t1[13] * t2[4]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Mot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Mot sp (const Mot& mot, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Mot& t2 = mot;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[11] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[7] + t1[11] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[4] - t1[11] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[5] + t1[11] * t2[4],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[11] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[11] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[11] * t2[1],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] - t1[10] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[7] + t1[10] * t2[6],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[6] - t1[8] * t2[7] - t1[9] * t2[4] - t1[10] * t2[5],
 - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3] + t1[11] * t2[7],
 - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[7] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2] - t1[11] * t2[6],
 - t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[4] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1] + t1[11] * t2[5],
 - t1[4] * t2[7] - t1[5] * t2[6] + t1[6] * t2[5] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0] - t1[11] * t2[4],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[11] * t2[0],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[4]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Mot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] - t3[15] * t5[11],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[4],
t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[15] * t5[3] + t3[15] * t5[10],
t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[15] * t5[2] - t3[15] * t5[9],
t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] - t3[15] * t5[1] + t3[15] * t5[8],
t3[7] * t5[3] - t3[7] * t5[10] - t3[8] * t5[2] + t3[8] * t5[9] + t3[9] * t5[1] - t3[9] * t5[8] + t3[15] * t5[0] - t3[15] * t5[7]
);

}
		
	
	  	
template<>
inline Mot sp (const Mot& mot, const Tst& tst) {					
					
const Tst& t1 = tst;
const Mot& t2 = mot;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[14] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[7] + t1[14] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[4] - t1[14] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[5] + t1[14] * t2[4],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[14] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[14] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[14] * t2[1],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[4] + t1[11] * t2[5] + t1[12] * t2[6] - t1[13] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[5] - t1[11] * t2[4] + t1[12] * t2[7] + t1[13] * t2[6],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] + t1[10] * t2[6] - t1[11] * t2[7] - t1[12] * t2[4] - t1[13] * t2[5],
 - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3] + t1[14] * t2[7],
 - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[7] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] - t1[14] * t2[6],
 - t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] + t1[14] * t2[5],
 - t1[4] * t2[7] - t1[5] * t2[6] + t1[6] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] - t1[14] * t2[4],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[14] * t2[0],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[7] + t1[11] * t2[6] - t1[12] * t2[5] + t1[13] * t2[4]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Mot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Mot sp (const Mot& mot, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Mot& t2 = mot;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[7],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[4],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[5],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[4] + t1[11] * t2[5] + t1[12] * t2[6] - t1[13] * t2[7] - t1[14] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[5] - t1[11] * t2[4] + t1[12] * t2[7] + t1[13] * t2[6] + t1[14] * t2[2],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] + t1[10] * t2[6] - t1[11] * t2[7] - t1[12] * t2[4] - t1[13] * t2[5] - t1[14] * t2[1],
 - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
 - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[7] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
 - t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[7] - t1[5] * t2[6] + t1[6] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[7] + t1[11] * t2[6] - t1[12] * t2[5] + t1[13] * t2[4] + t1[14] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Mot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[14] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[14] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[14] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[14] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[14] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[14] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Mot sp (const Mot& mot, const Bst& bst) {					
					
const Bst& t1 = bst;
const Mot& t2 = mot;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[7],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[7] - t1[6] * t2[4],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[7] + t1[5] * t2[6] - t1[6] * t2[5],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[4],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[5],
t1[0] * t2[6] - t1[1] * t2[7] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] + t1[10] * t2[6],
 - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[10] * t2[0],
 - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[7] + t1[10] * t2[1],
 - t1[4] * t2[6] + t1[5] * t2[7] + t1[6] * t2[4] + t1[10] * t2[2],
 - t1[4] * t2[7] - t1[5] * t2[6] + t1[6] * t2[5] + t1[10] * t2[3],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1],
t1[0] * t2[7] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[7]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Mot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[11] * t5[10] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[12] * t5[10] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] - t3[9] * t5[2] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1],
t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Mot re (const Mot& mot, const Vec& vec) {					
					
const Vec& t1 = vec;
const Mot& t2 = mot;
Mot t3 = involute( t2);
Lin_Pln t4 (
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
return Mot (
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
inline Mot re (const Mot& mot, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Mot& t2 = mot;
Mot t3 = involute( t2);
Lin_Pln t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6] + t1[3] * t3[0],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[7] + t1[3] * t3[1],
t1[0] * t3[6] - t1[1] * t3[7] - t1[2] * t3[4] + t1[3] * t3[2],
t1[0] * t3[7] + t1[1] * t3[6] - t1[2] * t3[5] + t1[3] * t3[3],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Mot (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[7] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[7] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[7] * t6[0],
t4[0] * t6[3] - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
t4[1] * t6[3] - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
t4[2] * t6[3] - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1],
 - t4[4] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] + t4[7] * t6[3]
);

}
		
	
	  	
template<>
inline Mot re (const Mot& mot, const Pln& pln) {					
					
const Pln& t1 = pln;
const Mot& t2 = mot;
Mot t3 = involute( t2);
Lin_Dlp t4 (
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[7] - t1[3] * t3[3],
 - t1[0] * t3[4] + t1[1] * t3[7] + t1[2] * t3[6] + t1[3] * t3[2],
 - t1[0] * t3[7] - t1[1] * t3[4] - t1[2] * t3[5] - t1[3] * t3[1],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Mot (
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
t4[3] * t6[0] - t4[5] * t6[2] + t4[6] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[6] * t6[0],
t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0],
t4[1] * t6[0] + t4[2] * t6[1] - t4[6] * t6[3] + t4[7] * t6[2],
 - t4[0] * t6[0] + t4[2] * t6[2] + t4[5] * t6[3] - t4[7] * t6[1],
 - t4[0] * t6[1] - t4[1] * t6[2] - t4[4] * t6[3] + t4[7] * t6[0],
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0] + t4[3] * t6[3]
);

}
		
	
	  	
template<>
inline Mot re (const Mot& mot, const Dll& dll) {					
					
const Dll& t1 = dll;
const Mot& t2 = mot;
Mot t3 = involute( t2);
Mot t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[7] + t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[0] * t3[4] + t1[1] * t3[7] + t1[2] * t3[6] + t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3],
 - t1[0] * t3[7] - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Mot (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] - t4[6] * t6[2] + t4[7] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] - t4[7] * t6[0],
t4[1] * t6[5] - t4[2] * t6[4] + t4[3] * t6[3] + t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Mot re (const Mot& mot, const Lin& lin) {					
					
const Lin& t1 = lin;
const Mot& t2 = mot;
Mot t3 = involute( t2);
Lin_Dll t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[3] * t3[4] + t1[4] * t3[5] + t1[5] * t3[6],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[7],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[6] - t1[4] * t3[7] - t1[5] * t3[4],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[3] * t3[7] + t1[4] * t3[6] - t1[5] * t3[5],
t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3],
t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0],
t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Mot (
t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5],
t4[4] * t6[4] - t4[5] * t6[3] + t4[7] * t6[5],
t4[4] * t6[5] - t4[6] * t6[3] - t4[7] * t6[4],
t4[5] * t6[5] - t4[6] * t6[4] + t4[7] * t6[3],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] - t4[6] * t6[2] + t4[7] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] - t4[7] * t6[0],
t4[1] * t6[5] - t4[2] * t6[4] + t4[3] * t6[3] + t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Mot re (const Mot& mot, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Mot& t2 = mot;
Mot t3 = involute( t2);
Rtc t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[4],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3] + t1[3] * t3[5],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0] + t1[3] * t3[6],
t1[3] * t3[0],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6] + t1[4] * t3[0],
t1[3] * t3[1],
t1[3] * t3[2],
t1[3] * t3[3],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[7] + t1[4] * t3[1],
t1[0] * t3[6] - t1[1] * t3[7] - t1[2] * t3[4] + t1[4] * t3[2],
t1[0] * t3[7] + t1[1] * t3[6] - t1[2] * t3[5] + t1[4] * t3[3],
 - t1[3] * t3[4],
 - t1[3] * t3[5],
 - t1[3] * t3[6],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[7],
 - t1[3] * t3[7]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Mot (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] - t4[4] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[4] - t4[8] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[4] - t4[9] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[4] - t4[10] * t6[3] + t4[14] * t6[0],
t4[0] * t6[4] - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] + t4[11] * t6[4],
t4[1] * t6[4] - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2] + t4[12] * t6[4],
t4[2] * t6[4] - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1] + t4[13] * t6[4],
 - t4[8] * t6[2] + t4[9] * t6[1] - t4[10] * t6[0] + t4[14] * t6[4] + t4[15] * t6[4]
);

}
		
	
	  	
template<>
inline Mot re (const Mot& mot, const Par& par) {					
					
const Par& t1 = par;
const Mot& t2 = mot;
Mot t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[3] * t3[4] + t1[4] * t3[5] + t1[5] * t3[6],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[7],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[6] - t1[4] * t3[7] - t1[5] * t3[4],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[3] * t3[7] + t1[4] * t3[6] - t1[5] * t3[5],
t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3],
t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0],
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[7] + t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2] + t1[9] * t3[4],
 - t1[0] * t3[4] + t1[1] * t3[7] + t1[2] * t3[6] + t1[6] * t3[1] + t1[7] * t3[0] - t1[8] * t3[3] + t1[9] * t3[5],
 - t1[0] * t3[7] - t1[1] * t3[4] - t1[2] * t3[5] + t1[6] * t3[2] + t1[7] * t3[3] + t1[8] * t3[0] + t1[9] * t3[6],
 - t1[3] * t3[4] - t1[4] * t3[5] - t1[5] * t3[6] + t1[9] * t3[0],
 - t1[3] * t3[5] + t1[4] * t3[4] - t1[5] * t3[7] + t1[9] * t3[1],
 - t1[3] * t3[6] + t1[4] * t3[7] + t1[5] * t3[4] + t1[9] * t3[2],
 - t1[3] * t3[7] - t1[4] * t3[6] + t1[5] * t3[5] + t1[9] * t3[3],
t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[6] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1] + t1[9] * t3[7]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Mot (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[6] + t4[5] * t6[7] + t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] + t4[10] * t6[9],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[7] - t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[11] * t6[9] + t4[14] * t6[8] + t4[15] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[8] - t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[12] * t6[9] - t4[14] * t6[7] - t4[15] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[8] - t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[13] * t6[9] + t4[14] * t6[6] + t4[15] * t6[3],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[7] * t6[9] - t4[8] * t6[0] - t4[9] * t6[1] + t4[10] * t6[6] + t4[11] * t6[7] + t4[12] * t6[8] - t4[15] * t6[2],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[8] + t4[7] * t6[0] - t4[8] * t6[9] - t4[9] * t6[2] + t4[10] * t6[7] - t4[11] * t6[6] + t4[13] * t6[8] + t4[15] * t6[1],
t4[0] * t6[8] - t4[2] * t6[6] - t4[3] * t6[7] + t4[7] * t6[1] + t4[8] * t6[2] - t4[9] * t6[9] + t4[10] * t6[8] - t4[12] * t6[6] - t4[13] * t6[7] - t4[15] * t6[0],
t4[1] * t6[8] - t4[2] * t6[7] + t4[3] * t6[6] + t4[7] * t6[2] - t4[8] * t6[1] + t4[9] * t6[0] + t4[11] * t6[8] - t4[12] * t6[7] + t4[13] * t6[6] - t4[15] * t6[9]
);

}
		
	
	  	
template<>
inline Mot re (const Mot& mot, const Cir& cir) {					
					
const Cir& t1 = cir;
const Mot& t2 = mot;
Mot t3 = involute( t2);
Rtc t4 (
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[7] - t1[9] * t3[3],
 - t1[0] * t3[4] + t1[1] * t3[7] + t1[2] * t3[6] + t1[9] * t3[2],
 - t1[0] * t3[7] - t1[1] * t3[4] - t1[2] * t3[5] - t1[9] * t3[1],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
 - t1[3] * t3[1] - t1[4] * t3[2] - t1[5] * t3[3] + t1[6] * t3[4] + t1[7] * t3[5] + t1[8] * t3[6] - t1[9] * t3[7],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[3] * t3[0] - t1[4] * t3[3] + t1[5] * t3[2] + t1[6] * t3[5] - t1[7] * t3[4] + t1[8] * t3[7] + t1[9] * t3[6],
t1[3] * t3[3] + t1[4] * t3[0] - t1[5] * t3[1] + t1[6] * t3[6] - t1[7] * t3[7] - t1[8] * t3[4] - t1[9] * t3[5],
 - t1[3] * t3[2] + t1[4] * t3[1] + t1[5] * t3[0] + t1[6] * t3[7] + t1[7] * t3[6] - t1[8] * t3[5] + t1[9] * t3[4],
 - t1[0] * t3[5] - t1[1] * t3[6] + t1[2] * t3[7] + t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2],
t1[0] * t3[4] - t1[1] * t3[7] - t1[2] * t3[6] + t1[6] * t3[1] + t1[7] * t3[0] - t1[8] * t3[3],
t1[0] * t3[7] + t1[1] * t3[4] + t1[2] * t3[5] + t1[6] * t3[2] + t1[7] * t3[3] + t1[8] * t3[0],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[9] * t3[0],
 - t1[0] * t3[6] + t1[1] * t3[5] - t1[2] * t3[4] + t1[6] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Mot (
t4[5] * t6[3] + t4[6] * t6[4] + t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] + t4[11] * t6[6] + t4[12] * t6[7] + t4[13] * t6[8] - t4[14] * t6[9],
t4[2] * t6[9] - t4[3] * t6[3] - t4[4] * t6[0] + t4[6] * t6[5] - t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[15] * t6[8],
 - t4[1] * t6[9] - t4[3] * t6[4] - t4[4] * t6[1] - t4[5] * t6[5] + t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[15] * t6[7],
t4[0] * t6[9] - t4[3] * t6[5] - t4[4] * t6[2] + t4[5] * t6[4] - t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[12] * t6[8] - t4[13] * t6[7] + t4[15] * t6[6],
 - t4[1] * t6[3] - t4[2] * t6[4] + t4[4] * t6[6] + t4[8] * t6[7] + t4[9] * t6[8] + t4[10] * t6[9] - t4[12] * t6[3] - t4[13] * t6[4] - t4[14] * t6[5] - t4[15] * t6[5],
t4[0] * t6[3] - t4[2] * t6[5] + t4[4] * t6[7] - t4[8] * t6[6] - t4[9] * t6[9] + t4[10] * t6[8] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[4] + t4[15] * t6[4],
t4[0] * t6[4] + t4[1] * t6[5] + t4[4] * t6[8] + t4[8] * t6[9] - t4[9] * t6[6] - t4[10] * t6[7] + t4[11] * t6[4] + t4[12] * t6[5] - t4[14] * t6[3] - t4[15] * t6[3],
t4[0] * t6[5] - t4[1] * t6[4] + t4[2] * t6[3] - t4[4] * t6[9] + t4[8] * t6[8] - t4[9] * t6[7] + t4[10] * t6[6] + t4[11] * t6[5] - t4[12] * t6[4] + t4[13] * t6[3]
);

}
		
	
	  	
template<>
inline Mot re (const Mot& mot, const Sph& sph) {					
					
const Sph& t1 = sph;
const Mot& t2 = mot;
Mot t3 = involute( t2);
Mtt t4 (
 - t1[3] * t3[7],
t1[3] * t3[6],
 - t1[3] * t3[5],
t1[3] * t3[4],
 - t1[3] * t3[3],
t1[3] * t3[2],
 - t1[3] * t3[1],
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[7] - t1[4] * t3[3],
 - t1[0] * t3[4] + t1[1] * t3[7] + t1[2] * t3[6] + t1[4] * t3[2],
 - t1[0] * t3[7] - t1[1] * t3[4] - t1[2] * t3[5] - t1[4] * t3[1],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[3] * t3[7],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] - t1[3] * t3[6],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[5],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] - t1[3] * t3[4],
t1[3] * t3[0],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[4] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Mot (
 - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2] - t4[14] * t6[4] - t4[15] * t6[3],
t4[6] * t6[4] + t4[9] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1],
 - t4[5] * t6[4] - t4[8] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0],
t4[4] * t6[4] + t4[7] * t6[3] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0],
 - t4[3] * t6[4] + t4[8] * t6[0] + t4[9] * t6[1] - t4[13] * t6[4] + t4[15] * t6[2],
t4[2] * t6[4] - t4[7] * t6[0] + t4[9] * t6[2] + t4[12] * t6[4] - t4[15] * t6[1],
 - t4[1] * t6[4] - t4[7] * t6[1] - t4[8] * t6[2] - t4[11] * t6[4] + t4[15] * t6[0],
t4[0] * t6[4] - t4[7] * t6[2] + t4[8] * t6[1] - t4[9] * t6[0] + t4[10] * t6[4]
);

}
		
	
		
	} //vsr::
	#endif
	