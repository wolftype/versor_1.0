		#ifndef ROT_H_INCLUDED
		#define ROT_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Rot gp (const Rot& a, const Sca& b) { 
	return Rot (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Sca*)(&b));
}			
		 
inline Tnv_Vec gp (const Rot& a, const Ori& b) { 
	return Tnv_Vec (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Ori*)(&b));
}			
		 
inline Drv_Lin gp (const Rot& a, const Inf& b) { 
	return Drv_Lin (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Inf*)(&b));
}			
		 
inline Vec_Mnv gp (const Rot& a, const Mnk& b) { 
	return Vec_Mnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Vec_Mnv gp (const Rot& a, const Hyp& b) { 
	return Hyp_Vec_Mnv (
a[0] * b[0],
a[0] * b[1],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Hyp*)(&b));
}			
		 
inline Biv_Mnv gp (const Rot& a, const Pss& b) { 
	return Biv_Mnv (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Pss*)(&b));
}			
		 
inline Sta_Vec gp (const Rot& a, const Pnt& b) { 
	return Sta_Vec (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[0] * b[3],
a[0] * b[4],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Pnt*)(&b));
}			
		 
inline Mtt gp (const Rot& a, const Par& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7],
a[0] * b[9],
a[1] * b[9],
a[2] * b[9],
a[3] * b[9],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Par*)(&b));
}			
		 
inline Rtc gp (const Rot& a, const Cir& b) { 
	return Rtc (
 - a[3] * b[9],
a[2] * b[9],
 - a[1] * b[9],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] - a[2] * b[5] + a[3] * b[4],
a[0] * b[4] + a[1] * b[5] - a[3] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7],
a[0] * b[9],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Cir*)(&b));
}			
		 
inline Mnk_Sta_Biv gp (const Rot& a, const Sph& b) { 
	return Mnk_Sta_Biv (
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
 - a[3] * b[4],
a[2] * b[4],
 - a[1] * b[4],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3],
a[0] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Sph*)(&b));
}			
		 
inline Sta_Biv gp (const Rot& a, const Sta& b) { 
	return Sta_Biv (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Sta*)(&b));
}			
		 
inline Drv_Pln gp (const Rot& a, const Drv& b) { 
	return Drv_Pln (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Drv*)(&b));
}			
		 
inline Drv_Lin gp (const Rot& a, const Drb& b) { 
	return Drv_Lin (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Drb*)(&b));
}			
		 
inline Drv_Pln gp (const Rot& a, const Drt& b) { 
	return Drv_Pln (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Drt*)(&b));
}			
		 
inline Tnv_Biv gp (const Rot& a, const Tnv& b) { 
	return Tnv_Biv (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv_Vec gp (const Rot& a, const Tnb& b) { 
	return Tnv_Vec (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnv_Biv gp (const Rot& a, const Tnt& b) { 
	return Tnv_Biv (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Tnt*)(&b));
}			
		 
inline Lin_Dll gp (const Rot& a, const Lin& b) { 
	return Lin_Dll (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Lin*)(&b));
}			
		 
inline Lin_Dlp gp (const Rot& a, const Pln& b) { 
	return Lin_Dlp (
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Pln*)(&b));
}			
		 
inline Lin_Dlp gp (const Rot& a, const Flp& b) { 
	return Lin_Dlp (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Flp*)(&b));
}			
		 
inline Lin_Pln gp (const Rot& a, const Dfp& b) { 
	return Lin_Pln (
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Dfp*)(&b));
}			
		 
inline Mot gp (const Rot& a, const Dll& b) { 
	return Mot (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Dll*)(&b));
}			
		 
inline Lin_Pln gp (const Rot& a, const Dlp& b) { 
	return Lin_Pln (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Dlp*)(&b));
}			
		 
inline Vec_Biv gp (const Rot& a, const Vec& b) { 
	return Vec_Biv (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Vec*)(&b));
}			
		 
inline Rot gp (const Rot& a, const Biv& b) { 
	return Rot (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Biv*)(&b));
}			
		 
inline Vec_Biv gp (const Rot& a, const Tri& b) { 
	return Vec_Biv (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Tri*)(&b));
}			
		 
inline Vec_Afl gp (const Rot& a, const Aff& b) { 
	return Vec_Afl (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Aff*)(&b));
}			
		 
inline Rtt gp (const Rot& a, const Afl& b) { 
	return Rtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Afl*)(&b));
}			
		 
inline Vec_Afl gp (const Rot& a, const Afp& b) { 
	return Vec_Afl (
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Afp*)(&b));
}			
		 
inline Vec_Dal gp (const Rot& a, const Dap& b) { 
	return Vec_Dal (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Dap*)(&b));
}			
		 
inline Vec_Dal gp (const Rot& a, const Daf& b) { 
	return Vec_Dal (
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Daf*)(&b));
}			
		 
inline Biv_Dal gp (const Rot& a, const Dal& b) { 
	return Biv_Dal (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Dal*)(&b));
}			
		 
inline Biv_Mnv gp (const Rot& a, const Mnv& b) { 
	return Biv_Mnv (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Mnv*)(&b));
}			
		 
inline Rot gp (const Rot& a, const Rot& b) { 
	return Rot (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Rot*)(&b));
}			
		 
inline Mot gp (const Rot& a, const Mot& b) { 
	return Mot (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Mot*)(&b));
}			
		 
inline Rtd gp (const Rot& a, const Dil& b) { 
	return Rtd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Dil*)(&b));
}			
		 
inline Rtt gp (const Rot& a, const Trv& b) { 
	return Rtt (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Trv*)(&b));
}			
		 
inline Mtd gp (const Rot& a, const Mtd& b) { 
	return Mtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Mtd*)(&b));
}			
		 
inline Mot gp (const Rot& a, const Trs& b) { 
	return Mot (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Rot& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[14],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14] + a[3] * b[2],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7] + a[3] * b[6],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3] - a[3] * b[5],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[3],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10] + a[3] * b[9],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4] - a[3] * b[8],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[4],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13] - a[3] * b[15],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15] + a[3] * b[13],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11] - a[3] * b[12],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12] + a[3] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Rot& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[15],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15] + a[3] * b[9],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7] - a[3] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Mtt*)(&b));
}			
		 
inline Rtt gp (const Rot& a, const Rtt& b) { 
	return Rtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Rtt*)(&b));
}			
		 
inline Rtd gp (const Rot& a, const Rtd& b) { 
	return Rtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7] + a[3] * b[6],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4] - a[3] * b[5],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Rtd*)(&b));
}			
		 
inline Rvd gp (const Rot& a, const Tvd& b) { 
	return Rvd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Tvd*)(&b));
}			
		 
inline Mtd gp (const Rot& a, const Tsd& b) { 
	return Mtd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtt gp (const Rot& a, const Trt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Trt*)(&b));
}			
		 
inline Rvd gp (const Rot& a, const Rvd& b) { 
	return Rvd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Rot& a, const Tst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Rot& a, const Tvt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[14],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14] + a[3] * b[9],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7] - a[3] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Tvt*)(&b));
}			
		 
inline Mtt gp (const Rot& a, const Bst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8],
a[0] * b[10],
a[1] * b[10],
a[2] * b[10],
a[3] * b[10],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rot, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rot*)(&a),*(Bst*)(&b));
}			
		 
inline Rot ip (const Rot& a, const Rot& b) { 
	return Rot (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Rot, Rot> (const MVBase& a, const MVBase& b) { 
	return ip(*(Rot*)(&a),*(Rot*)(&b));
}			
		  	
template<>
inline Rot sp (const Rot& rot, const Mot& mot) {					
					
const Mot& t1 = mot;
const Rot& t2 = rot;
Mot t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Rot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Dil& dil) {					
					
const Dil& t1 = dil;
const Rot& t2 = rot;
Rtd t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2],
t1[1] * t2[3]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Rot (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] + t3[5] * t5[1],
t3[2] * t5[0] + t3[6] * t5[1],
t3[3] * t5[0] + t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Trv& trv) {					
					
const Trv& t1 = trv;
const Rot& t2 = rot;
Rtt t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3],
t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Rot (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0],
t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Rot& t2 = rot;
Mtd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[11] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[11] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[11] * t2[1],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[11] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Rot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[8],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[7]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Trs& trs) {					
					
const Trs& t1 = trs;
const Rot& t2 = rot;
Mot t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3],
t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Rot (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0],
t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Rot& t2 = rot;
Rtc t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[14] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[14] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[14] * t2[1],
t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[4] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3],
t1[3] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2],
t1[3] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0],
t1[4] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2],
t1[4] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1],
t1[4] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0],
t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[15] * t2[3],
t1[11] * t2[1] + t1[12] * t2[0] - t1[13] * t2[3] + t1[15] * t2[2],
t1[11] * t2[2] + t1[12] * t2[3] + t1[13] * t2[0] - t1[15] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[14] * t2[0],
t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Rot (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Rot& t2 = rot;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[14] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[14] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[14] * t2[1],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[15] * t2[3],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[15] * t2[2],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[15] * t2[1],
t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[14] * t2[0],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[15] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Rot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Rot& t2 = rot;
Rtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Rot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Rot& t2 = rot;
Rtd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Rot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] - t3[7] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[7] + t3[7] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] + t3[5] * t5[7] + t3[6] * t5[4] - t3[7] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[7] - t3[5] * t5[6] + t3[6] * t5[5] + t3[7] * t5[4]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Rot& t2 = rot;
Rvd t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3],
t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
t1[4] * t2[3],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Rot (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4],
t3[3] * t5[0] + t3[10] * t5[4]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Rot& t2 = rot;
Mtd t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3],
t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
t1[4] * t2[3],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Rot (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4],
t3[3] * t5[0] + t3[10] * t5[4]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Trt& trt) {					
					
const Trt& t1 = trt;
const Rot& t2 = rot;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0],
t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Rot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Rot& t2 = rot;
Rvd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[11] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[11] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[11] * t2[1],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[11] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Rot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[8],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[7]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Tst& tst) {					
					
const Tst& t1 = tst;
const Rot& t2 = rot;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[14] * t2[3],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[14] * t2[2],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[14] * t2[1],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0],
t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[14] * t2[0],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Rot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Rot& t2 = rot;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[14] * t2[3],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[14] * t2[2],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[14] * t2[1],
t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[14] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Rot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Rot sp (const Rot& rot, const Bst& bst) {					
					
const Bst& t1 = bst;
const Rot& t2 = rot;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3],
t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0],
t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3],
t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0],
t1[10] * t2[0],
t1[10] * t2[1],
t1[10] * t2[2],
t1[10] * t2[3],
t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1],
t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Rot (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[11] * t5[10] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[12] * t5[10] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Rot re (const Rot& rot, const Vec& vec) {					
					
const Vec& t1 = vec;
const Rot& t2 = rot;
Rot t3 = involute( t2);
Vec_Biv t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Rot (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[3] * t6[0]
);

}
		
	
	  	
template<>
inline Rot re (const Rot& rot, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Rot& t2 = rot;
Rot t3 = involute( t2);
Lin_Pln t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0],
t1[3] * t3[0],
t1[3] * t3[1],
t1[3] * t3[2],
t1[3] * t3[3],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Rot (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[7] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[7] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[7] * t6[0]
);

}
		
	
	  	
template<>
inline Rot re (const Rot& rot, const Pln& pln) {					
					
const Pln& t1 = pln;
const Rot& t2 = rot;
Rot t3 = involute( t2);
Lin_Dlp t4 (
 - t1[3] * t3[3],
t1[3] * t3[2],
 - t1[3] * t3[1],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[3] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Rot (
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
t4[3] * t6[0] - t4[5] * t6[2] + t4[6] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[6] * t6[0],
t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0]
);

}
		
	
	  	
template<>
inline Rot re (const Rot& rot, const Dll& dll) {					
					
const Dll& t1 = dll;
const Rot& t2 = rot;
Rot t3 = involute( t2);
Mot t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3],
t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0],
t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Rot (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Rot re (const Rot& rot, const Lin& lin) {					
					
const Lin& t1 = lin;
const Rot& t2 = rot;
Rot t3 = involute( t2);
Lin_Dll t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3],
t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0],
t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Rot (
t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5],
t4[4] * t6[4] - t4[5] * t6[3] + t4[7] * t6[5],
t4[4] * t6[5] - t4[6] * t6[3] - t4[7] * t6[4],
t4[5] * t6[5] - t4[6] * t6[4] + t4[7] * t6[3]
);

}
		
	
	  	
template<>
inline Rot re (const Rot& rot, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Rot& t2 = rot;
Rot t3 = involute( t2);
Sta_Vec t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0],
t1[3] * t3[0],
t1[4] * t3[0],
t1[3] * t3[1],
t1[3] * t3[2],
t1[3] * t3[3],
t1[4] * t3[1],
t1[4] * t3[2],
t1[4] * t3[3],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Rot (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] - t4[4] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[4] - t4[8] * t6[3] + t4[11] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[4] - t4[9] * t6[3] - t4[11] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[4] - t4[10] * t6[3] + t4[11] * t6[0]
);

}
		
	
	  	
template<>
inline Rot re (const Rot& rot, const Par& par) {					
					
const Par& t1 = par;
const Rot& t2 = rot;
Rot t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3],
t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0],
t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2],
t1[6] * t3[1] + t1[7] * t3[0] - t1[8] * t3[3],
t1[6] * t3[2] + t1[7] * t3[3] + t1[8] * t3[0],
t1[9] * t3[0],
t1[9] * t3[1],
t1[9] * t3[2],
t1[9] * t3[3],
t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1],
t1[6] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Rot (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[6] + t4[5] * t6[7] + t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] + t4[10] * t6[9],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[7] - t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[11] * t6[9] + t4[14] * t6[8] + t4[15] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[8] - t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[12] * t6[9] - t4[14] * t6[7] - t4[15] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[8] - t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[13] * t6[9] + t4[14] * t6[6] + t4[15] * t6[3]
);

}
		
	
	  	
template<>
inline Rot re (const Rot& rot, const Cir& cir) {					
					
const Cir& t1 = cir;
const Rot& t2 = rot;
Rot t3 = involute( t2);
Rtc t4 (
 - t1[9] * t3[3],
t1[9] * t3[2],
 - t1[9] * t3[1],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
 - t1[3] * t3[1] - t1[4] * t3[2] - t1[5] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[3] * t3[0] - t1[4] * t3[3] + t1[5] * t3[2],
t1[3] * t3[3] + t1[4] * t3[0] - t1[5] * t3[1],
 - t1[3] * t3[2] + t1[4] * t3[1] + t1[5] * t3[0],
t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2],
t1[6] * t3[1] + t1[7] * t3[0] - t1[8] * t3[3],
t1[6] * t3[2] + t1[7] * t3[3] + t1[8] * t3[0],
t1[9] * t3[0],
t1[6] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Rot (
t4[5] * t6[3] + t4[6] * t6[4] + t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] + t4[11] * t6[6] + t4[12] * t6[7] + t4[13] * t6[8] - t4[14] * t6[9],
t4[2] * t6[9] - t4[3] * t6[3] - t4[4] * t6[0] + t4[6] * t6[5] - t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[15] * t6[8],
 - t4[1] * t6[9] - t4[3] * t6[4] - t4[4] * t6[1] - t4[5] * t6[5] + t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[15] * t6[7],
t4[0] * t6[9] - t4[3] * t6[5] - t4[4] * t6[2] + t4[5] * t6[4] - t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[12] * t6[8] - t4[13] * t6[7] + t4[15] * t6[6]
);

}
		
	
	  	
template<>
inline Rot re (const Rot& rot, const Sph& sph) {					
					
const Sph& t1 = sph;
const Rot& t2 = rot;
Rot t3 = involute( t2);
Mnk_Sta_Biv t4 (
 - t1[3] * t3[3],
t1[3] * t3[2],
 - t1[3] * t3[1],
 - t1[4] * t3[3],
t1[4] * t3[2],
 - t1[4] * t3[1],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[3] * t3[0],
t1[4] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Rot (
 - t4[7] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] - t4[10] * t6[4] - t4[11] * t6[3],
t4[2] * t6[4] + t4[5] * t6[3] + t4[6] * t6[0] - t4[8] * t6[2] + t4[9] * t6[1],
 - t4[1] * t6[4] - t4[4] * t6[3] + t4[6] * t6[1] + t4[7] * t6[2] - t4[9] * t6[0],
t4[0] * t6[4] + t4[3] * t6[3] + t4[6] * t6[2] - t4[7] * t6[1] + t4[8] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	