		#ifndef BIV_H_INCLUDED
		#define BIV_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Biv gp (const Biv& a, const Sca& b) { 
	return Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Tnb gp (const Biv& a, const Ori& b) { 
	return Tnb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Drb gp (const Biv& a, const Inf& b) { 
	return Drb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Mnk_Biv gp (const Biv& a, const Mnk& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Hyp_Biv gp (const Biv& a, const Hyp& b) { 
	return Hyp_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Mnk_Vec gp (const Biv& a, const Pss& b) { 
	return Mnk_Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Pnt_Biv gp (const Biv& a, const Pnt& b) { 
	return Pnt_Biv (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Par_Biv gp (const Biv& a, const Par& b) { 
	return Par_Biv (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[7] + a[1] * b[8],
 - a[0] * b[6] + a[2] * b[8],
 - a[1] * b[6] - a[2] * b[7],
a[0] * b[9],
a[1] * b[9],
a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
inline Cir_Biv gp (const Biv& a, const Cir& b) { 
	return Cir_Biv (
 - a[2] * b[9],
a[1] * b[9],
 - a[0] * b[9],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[1] * b[5] + a[2] * b[4],
a[0] * b[5] - a[2] * b[3],
 - a[0] * b[4] + a[1] * b[3],
a[0] * b[7] + a[1] * b[8],
 - a[0] * b[6] + a[2] * b[8],
 - a[1] * b[6] - a[2] * b[7],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
inline Sph_Biv gp (const Biv& a, const Sph& b) { 
	return Sph_Biv (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Sta_Biv gp (const Biv& a, const Sta& b) { 
	return Sta_Biv (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[7] + a[1] * b[8],
 - a[0] * b[6] + a[2] * b[8],
 - a[1] * b[6] - a[2] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
inline Drv_Pln gp (const Biv& a, const Drv& b) { 
	return Drv_Pln (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drv_Lin gp (const Biv& a, const Drb& b) { 
	return Drv_Lin (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Drv gp (const Biv& a, const Drt& b) { 
	return Drv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Tnv_Biv gp (const Biv& a, const Tnv& b) { 
	return Tnv_Biv (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Tnv_Vec gp (const Biv& a, const Tnb& b) { 
	return Tnv_Vec (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Tnv gp (const Biv& a, const Tnt& b) { 
	return Tnv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Lin_Dll gp (const Biv& a, const Lin& b) { 
	return Lin_Dll (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Pln_Biv gp (const Biv& a, const Pln& b) { 
	return Pln_Biv (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Flp_Dll gp (const Biv& a, const Flp& b) { 
	return Flp_Dll (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mot gp (const Biv& a, const Dll& b) { 
	return Mot (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Dlp_Biv gp (const Biv& a, const Dlp& b) { 
	return Dlp_Biv (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Vec_Biv gp (const Biv& a, const Vec& b) { 
	return Vec_Biv (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Rot gp (const Biv& a, const Biv& b) { 
	return Rot (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Vec gp (const Biv& a, const Tri& b) { 
	return Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Biv_Aff gp (const Biv& a, const Aff& b) { 
	return Biv_Aff (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Rtt gp (const Biv& a, const Afl& b) { 
	return Rtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Biv_Afp gp (const Biv& a, const Afp& b) { 
	return Biv_Afp (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Rot gp (const Biv& a, const Rot& b) { 
	return Rot (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mot gp (const Biv& a, const Mot& b) { 
	return Mot (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4]
);
}			
		 
inline Ori_Drb gp (const Biv& a, const Dil& b) { 
	return Ori_Drb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Vec_Afp gp (const Biv& a, const Trv& b) { 
	return Vec_Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Mtd gp (const Biv& a, const Mtd& b) { 
	return Mtd (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4]
);
}			
		 
inline Pln_Flp gp (const Biv& a, const Trs& b) { 
	return Pln_Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Rtc gp (const Biv& a, const Rtc& b) { 
	return Rtc (
a[0] * b[1] + a[1] * b[2] - a[2] * b[14],
 - a[0] * b[0] + a[1] * b[14] + a[2] * b[2],
 - a[0] * b[14] - a[1] * b[0] - a[2] * b[1],
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10],
a[0] * b[3] - a[1] * b[7] + a[2] * b[6],
a[0] * b[7] + a[1] * b[3] - a[2] * b[5],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[3],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4],
a[0] * b[12] + a[1] * b[13] - a[2] * b[15],
 - a[0] * b[11] + a[1] * b[15] + a[2] * b[13],
 - a[0] * b[15] - a[1] * b[11] - a[2] * b[12],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
inline Mtt gp (const Biv& a, const Mtt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9] - a[2] * b[15],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
inline Rtt gp (const Biv& a, const Rtt& b) { 
	return Rtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4]
);
}			
		 
inline Rtd gp (const Biv& a, const Rtd& b) { 
	return Rtd (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7],
a[0] * b[4] - a[1] * b[7] + a[2] * b[6],
a[0] * b[7] + a[1] * b[4] - a[2] * b[5],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[4]
);
}			
		 
inline Ori_Cir gp (const Biv& a, const Tvd& b) { 
	return Ori_Cir (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Inf_Cir gp (const Biv& a, const Tsd& b) { 
	return Inf_Cir (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Mtt gp (const Biv& a, const Trt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6],
 - a[0] * b[4] + a[2] * b[6],
 - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9],
 - a[0] * b[7] + a[2] * b[9],
 - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
inline Rvd gp (const Biv& a, const Rvd& b) { 
	return Rvd (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4]
);
}			
		 
inline Mtt gp (const Biv& a, const Tst& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9],
 - a[0] * b[7] + a[2] * b[9],
 - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
inline Mtt gp (const Biv& a, const Tvt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6],
 - a[0] * b[4] + a[2] * b[6],
 - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9] - a[2] * b[14],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
inline Biv op (const Biv& a, const Sca& b) { 
	return Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Tnb op (const Biv& a, const Ori& b) { 
	return Tnb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Drb op (const Biv& a, const Inf& b) { 
	return Drb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Mnk_Biv op (const Biv& a, const Mnk& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Hyp_Biv op (const Biv& a, const Hyp& b) { 
	return Hyp_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Sca op (const Biv& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Sph op (const Biv& a, const Par& b) { 
	return Sph (
a[0] * b[9],
a[1] * b[9],
a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
inline Pss op (const Biv& a, const Cir& b) { 
	return Pss (
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
inline Sca op (const Biv& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Hyp_Pss op (const Biv& a, const Sta& b) { 
	return Hyp_Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
inline Drt op (const Biv& a, const Drv& b) { 
	return Drt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Biv& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Biv& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Tnt op (const Biv& a, const Tnv& b) { 
	return Tnt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Biv& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Biv& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Biv& a, const Lin& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Sca op (const Biv& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Pln op (const Biv& a, const Flp& b) { 
	return Pln (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drt op (const Biv& a, const Dll& b) { 
	return Drt (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Pss_Flp op (const Biv& a, const Dlp& b) { 
	return Pss_Flp (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Tri op (const Biv& a, const Vec& b) { 
	return Tri (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Biv& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Biv& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Afp op (const Biv& a, const Aff& b) { 
	return Afp (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Tnt op (const Biv& a, const Afl& b) { 
	return Tnt (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Sca op (const Biv& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Biv& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Biv& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Biv& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Biv& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Biv& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Mnk_Vec ip (const Biv& a, const Pss& b) { 
	return Mnk_Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Biv& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Biv& a, const Par& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Pnt ip (const Biv& a, const Cir& b) { 
	return Pnt (
 - a[2] * b[9],
a[1] * b[9],
 - a[0] * b[9],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5]
);
}			
		 
inline Sca ip (const Biv& a, const Sta& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Biv& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Inf ip (const Biv& a, const Drb& b) { 
	return Inf (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Drv ip (const Biv& a, const Drt& b) { 
	return Drv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Biv& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Ori ip (const Biv& a, const Tnb& b) { 
	return Ori (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Tnv ip (const Biv& a, const Tnt& b) { 
	return Tnv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Inf ip (const Biv& a, const Lin& b) { 
	return Inf (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Flp ip (const Biv& a, const Pln& b) { 
	return Flp (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Biv& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Biv& a, const Dll& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Biv& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Biv& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Biv& a, const Biv& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Vec ip (const Biv& a, const Tri& b) { 
	return Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Biv& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Biv& a, const Afl& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Aff ip (const Biv& a, const Afp& b) { 
	return Aff (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		  	
inline Biv sp (const Biv& biv, const Rot& rot) {					
					
const Rot& t1 = rot;
const Biv& t2 = biv;
Rot t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Mot& mot) {					
					
const Mot& t1 = mot;
const Biv& t2 = biv;
Mot t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Dil& dil) {					
					
const Dil& t1 = dil;
const Biv& t2 = biv;
Ori_Drb t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Biv (
t3[0] * t5[0] + t3[3] * t5[1],
t3[1] * t5[0] + t3[4] * t5[1],
t3[2] * t5[0] + t3[5] * t5[1]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Trv& trv) {					
					
const Trv& t1 = trv;
const Biv& t2 = biv;
Vec_Afp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Biv (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Biv& t2 = biv;
Mtd t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[11] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[11] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[11] * t2[0],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[8],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[7]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Trs& trs) {					
					
const Trs& t1 = trs;
const Biv& t2 = biv;
Pln_Flp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Biv (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Biv& t2 = biv;
Rtc t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[14] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[14] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[14] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[3] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[3] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[3] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[4] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
t1[4] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[4] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
 - t1[12] * t2[0] - t1[13] * t2[1] - t1[15] * t2[2],
t1[11] * t2[0] - t1[13] * t2[2] + t1[15] * t2[1],
t1[11] * t2[1] + t1[12] * t2[2] - t1[15] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Biv (
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Biv& t2 = biv;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[14] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[14] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[14] * t2[0],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[15] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[15] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[15] * t2[0],
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Biv& t2 = biv;
Rtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Biv& t2 = biv;
Rtd t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[7] + t3[7] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] + t3[5] * t5[7] + t3[6] * t5[4] - t3[7] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[7] - t3[5] * t5[6] + t3[6] * t5[5] + t3[7] * t5[4]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Biv& t2 = biv;
Ori_Cir t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Biv (
t3[0] * t5[0] + t3[6] * t5[4],
t3[1] * t5[0] + t3[7] * t5[4],
t3[2] * t5[0] + t3[8] * t5[4]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Biv& t2 = biv;
Inf_Cir t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Biv (
t3[0] * t5[0] + t3[6] * t5[4],
t3[1] * t5[0] + t3[7] * t5[4],
t3[2] * t5[0] + t3[8] * t5[4]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Trt& trt) {					
					
const Trt& t1 = trt;
const Biv& t2 = biv;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1],
t1[4] * t2[0] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[2],
 - t1[8] * t2[0] - t1[9] * t2[1],
t1[7] * t2[0] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[2],
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Biv& t2 = biv;
Rvd t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[11] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[11] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[11] * t2[0],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[8],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[7]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Tst& tst) {					
					
const Tst& t1 = tst;
const Biv& t2 = biv;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[14] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[14] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[14] * t2[0],
 - t1[8] * t2[0] - t1[9] * t2[1],
t1[7] * t2[0] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[2],
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
inline Biv sp (const Biv& biv, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Biv& t2 = biv;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1],
t1[4] * t2[0] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[2],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[14] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[14] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[14] * t2[0],
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
		
	} //vsr::
	#endif
	