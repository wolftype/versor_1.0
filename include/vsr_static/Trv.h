		#ifndef TRV_H_INCLUDED
		#define TRV_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Trv gp (const Trv& a, const Sca& b) { 
	return Trv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Ori gp (const Trv& a, const Ori& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
inline Drt_Afp gp (const Trv& a, const Inf& b) { 
	return Drt_Afp (
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Pss_Afp gp (const Trv& a, const Mnk& b) { 
	return Pss_Afp (
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[0]
);
}			
		 
inline Hyp_Flp gp (const Trv& a, const Hyp& b) { 
	return Hyp_Flp (
 - a[1] * b[1],
 - a[2] * b[1],
 - a[3] * b[1],
a[0] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1]
);
}			
		 
inline Mnk_Afp gp (const Trv& a, const Pss& b) { 
	return Mnk_Afp (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Sph_Afp gp (const Trv& a, const Pnt& b) { 
	return Sph_Afp (
a[0] * b[0] - a[1] * b[4],
a[0] * b[1] - a[2] * b[4],
a[0] * b[2] - a[3] * b[4],
a[0] * b[3] - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[4],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4]
);
}			
		 
inline Tst gp (const Trv& a, const Par& b) { 
	return Tst (
a[1] * b[6] + a[2] * b[7] + a[3] * b[8],
a[0] * b[0] + a[1] * b[7] - a[2] * b[6],
a[0] * b[1] + a[1] * b[8] - a[3] * b[6],
a[0] * b[2] + a[2] * b[8] - a[3] * b[7],
a[0] * b[3] + a[1] * b[9] - a[2] * b[0] - a[3] * b[1],
a[0] * b[4] + a[1] * b[0] + a[2] * b[9] - a[3] * b[2],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2] + a[3] * b[9],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9] - a[1] * b[6] - a[2] * b[7] - a[3] * b[8],
 - a[1] * b[7] + a[2] * b[6],
 - a[1] * b[8] + a[3] * b[6],
 - a[2] * b[8] + a[3] * b[7],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
inline Par_Afp gp (const Trv& a, const Cir& b) { 
	return Par_Afp (
a[2] * b[3] + a[3] * b[4],
 - a[1] * b[3] + a[3] * b[5],
 - a[1] * b[4] - a[2] * b[5],
 - a[1] * b[6] - a[2] * b[7] - a[3] * b[8],
a[0] * b[0] - a[1] * b[7] + a[2] * b[6] - a[3] * b[9],
a[0] * b[1] - a[1] * b[8] + a[2] * b[9] + a[3] * b[6],
a[0] * b[2] - a[1] * b[9] - a[2] * b[8] + a[3] * b[7],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6] - a[2] * b[3] - a[3] * b[4],
a[0] * b[7] + a[1] * b[3] - a[3] * b[5],
a[0] * b[8] + a[1] * b[4] + a[2] * b[5],
a[0] * b[9] - a[1] * b[5] + a[2] * b[4] - a[3] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3]
);
}			
		 
inline Pnt_Afp gp (const Trv& a, const Sph& b) { 
	return Pnt_Afp (
a[3] * b[4],
 - a[2] * b[4],
a[1] * b[4],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0] - a[3] * b[4],
a[0] * b[1] + a[2] * b[4],
a[0] * b[2] - a[1] * b[4],
a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[0] * b[4]
);
}			
		 
inline Tst gp (const Trv& a, const Sta& b) { 
	return Tst (
a[1] * b[6] + a[2] * b[7] + a[3] * b[8],
a[0] * b[0] + a[1] * b[7] - a[2] * b[6],
a[0] * b[1] + a[1] * b[8] - a[3] * b[6],
a[0] * b[2] + a[2] * b[8] - a[3] * b[7],
a[0] * b[3] - a[2] * b[0] - a[3] * b[1],
a[0] * b[4] + a[1] * b[0] - a[3] * b[2],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
 - a[1] * b[6] - a[2] * b[7] - a[3] * b[8],
 - a[1] * b[7] + a[2] * b[6],
 - a[1] * b[8] + a[3] * b[6],
 - a[2] * b[8] + a[3] * b[7],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
inline Drb_Afp gp (const Trv& a, const Drv& b) { 
	return Drb_Afp (
a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1]
);
}			
		 
inline Drv_Afp gp (const Trv& a, const Drb& b) { 
	return Drv_Afp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
inline Inf_Afp gp (const Trv& a, const Drt& b) { 
	return Inf_Afp (
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Tnv gp (const Trv& a, const Tnv& b) { 
	return Tnv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnb gp (const Trv& a, const Tnb& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnt gp (const Trv& a, const Tnt& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
inline Par_Afp gp (const Trv& a, const Lin& b) { 
	return Par_Afp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5],
 - a[1] * b[4] + a[2] * b[3],
 - a[1] * b[5] + a[3] * b[3],
 - a[2] * b[5] + a[3] * b[4],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[2] * b[0] - a[3] * b[1],
a[0] * b[4] + a[1] * b[0] - a[3] * b[2],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
inline Pnt_Afp gp (const Trv& a, const Pln& b) { 
	return Pnt_Afp (
a[3] * b[3],
 - a[2] * b[3],
a[1] * b[3],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0] - a[3] * b[3],
a[0] * b[1] + a[2] * b[3],
a[0] * b[2] - a[1] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[0] * b[3]
);
}			
		 
inline Trt gp (const Trv& a, const Flp& b) { 
	return Trt (
a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1]
);
}			
		 
inline Tst gp (const Trv& a, const Dll& b) { 
	return Tst (
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[0] * b[0] + a[1] * b[4] - a[2] * b[3],
a[0] * b[1] + a[1] * b[5] - a[3] * b[3],
a[0] * b[2] + a[2] * b[5] - a[3] * b[4],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5],
 - a[1] * b[4] + a[2] * b[3],
 - a[1] * b[5] + a[3] * b[3],
 - a[2] * b[5] + a[3] * b[4],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
inline Sph_Afp gp (const Trv& a, const Dlp& b) { 
	return Sph_Afp (
a[0] * b[0] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[0] * b[2] - a[3] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[3],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3]
);
}			
		 
inline Biv_Afp gp (const Trv& a, const Vec& b) { 
	return Biv_Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1]
);
}			
		 
inline Vec_Afp gp (const Trv& a, const Biv& b) { 
	return Vec_Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
inline Afp gp (const Trv& a, const Tri& b) { 
	return Afp (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Biv_Afp gp (const Trv& a, const Aff& b) { 
	return Biv_Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1]
);
}			
		 
inline Vec_Afp gp (const Trv& a, const Afl& b) { 
	return Vec_Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[2] * b[0] - a[3] * b[1],
a[0] * b[4] + a[1] * b[0] - a[3] * b[2],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
inline Afp gp (const Trv& a, const Afp& b) { 
	return Afp (
a[0] * b[0] - a[3] * b[3],
a[0] * b[1] + a[2] * b[3],
a[0] * b[2] - a[1] * b[3],
a[0] * b[3]
);
}			
		 
inline Rtt gp (const Trv& a, const Rot& b) { 
	return Rtt (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
inline Mtt gp (const Trv& a, const Mot& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[7],
a[0] * b[2] + a[1] * b[6] - a[2] * b[7] - a[3] * b[4],
a[0] * b[3] + a[1] * b[7] + a[2] * b[6] - a[3] * b[5],
a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
 - a[1] * b[4] - a[2] * b[5] - a[3] * b[6],
 - a[1] * b[5] + a[2] * b[4] - a[3] * b[7],
 - a[1] * b[6] + a[2] * b[7] + a[3] * b[4],
 - a[1] * b[7] - a[2] * b[6] + a[3] * b[5],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1],
a[0] * b[7]
);
}			
		 
inline Tvd gp (const Trv& a, const Dil& b) { 
	return Tvd (
a[0] * b[0],
a[1] * b[0] + a[1] * b[1],
a[2] * b[0] + a[2] * b[1],
a[3] * b[0] + a[3] * b[1],
a[0] * b[1]
);
}			
		 
inline Trv gp (const Trv& a, const Trv& b) { 
	return Trv (
a[0] * b[0],
a[0] * b[1] + a[1] * b[0],
a[0] * b[2] + a[2] * b[0],
a[0] * b[3] + a[3] * b[0]
);
}			
		 
inline Mtt gp (const Trv& a, const Mtd& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[11],
a[0] * b[2] + a[1] * b[6] - a[2] * b[11] - a[3] * b[4],
a[0] * b[3] + a[1] * b[11] + a[2] * b[6] - a[3] * b[5],
a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8] - a[3] * b[2] - a[3] * b[9],
a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7] - a[3] * b[3] - a[3] * b[10],
a[1] * b[2] + a[1] * b[9] + a[2] * b[3] + a[2] * b[10] + a[3] * b[0] + a[3] * b[7],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7] - a[1] * b[4] - a[2] * b[5] - a[3] * b[6],
a[0] * b[8] - a[1] * b[5] + a[2] * b[4] - a[3] * b[11],
a[0] * b[9] - a[1] * b[6] + a[2] * b[11] + a[3] * b[4],
a[0] * b[10] - a[1] * b[11] - a[2] * b[6] + a[3] * b[5],
a[1] * b[3] + a[1] * b[10] - a[2] * b[2] - a[2] * b[9] + a[3] * b[1] + a[3] * b[8],
a[0] * b[11]
);
}			
		 
inline Trt gp (const Trv& a, const Trs& b) { 
	return Trt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] + a[3] * b[2]
);
}			
		 
inline Rtc gp (const Trv& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[4] + a[2] * b[8] + a[3] * b[9],
a[0] * b[1] - a[1] * b[8] - a[2] * b[4] + a[3] * b[10],
a[0] * b[2] - a[1] * b[9] - a[2] * b[10] - a[3] * b[4],
a[0] * b[3] - a[1] * b[0] - a[1] * b[11] - a[2] * b[1] - a[2] * b[12] - a[3] * b[2] - a[3] * b[13],
a[0] * b[4],
a[0] * b[5] - a[1] * b[1] - a[1] * b[12] + a[2] * b[0] + a[2] * b[11] - a[3] * b[14] - a[3] * b[15],
a[0] * b[6] - a[1] * b[2] - a[1] * b[13] + a[2] * b[14] + a[2] * b[15] + a[3] * b[0] + a[3] * b[11],
a[0] * b[7] - a[1] * b[14] - a[1] * b[15] - a[2] * b[2] - a[2] * b[13] + a[3] * b[1] + a[3] * b[12],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11] + a[1] * b[4] - a[2] * b[8] - a[3] * b[9],
a[0] * b[12] + a[1] * b[8] + a[2] * b[4] - a[3] * b[10],
a[0] * b[13] + a[1] * b[9] + a[2] * b[10] + a[3] * b[4],
a[0] * b[14] - a[1] * b[10] + a[2] * b[9] - a[3] * b[8],
a[0] * b[15] + a[1] * b[10] - a[2] * b[9] + a[3] * b[8]
);
}			
		 
inline Mtt gp (const Trv& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7] + a[3] * b[15],
a[0] * b[2] + a[1] * b[9] - a[2] * b[15] - a[3] * b[7],
a[0] * b[3] + a[1] * b[15] + a[2] * b[9] - a[3] * b[8],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[2] - a[3] * b[12],
a[0] * b[5] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3] - a[3] * b[13],
a[0] * b[6] + a[1] * b[2] + a[1] * b[12] + a[2] * b[3] + a[2] * b[13] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9],
a[0] * b[11] - a[1] * b[8] + a[2] * b[7] - a[3] * b[15],
a[0] * b[12] - a[1] * b[9] + a[2] * b[15] + a[3] * b[7],
a[0] * b[13] - a[1] * b[15] - a[2] * b[9] + a[3] * b[8],
a[0] * b[14] + a[1] * b[3] + a[1] * b[13] - a[2] * b[2] - a[2] * b[12] + a[3] * b[1] + a[3] * b[11],
a[0] * b[15]
);
}			
		 
inline Rtt gp (const Trv& a, const Rtt& b) { 
	return Rtt (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4] + a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[5] + a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
a[0] * b[6] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[0] * b[7] + a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
inline Rvd gp (const Trv& a, const Rtd& b) { 
	return Rvd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[0] + a[1] * b[4] - a[2] * b[1] - a[2] * b[5] - a[3] * b[2] - a[3] * b[6],
a[1] * b[1] + a[1] * b[5] + a[2] * b[0] + a[2] * b[4] - a[3] * b[3] - a[3] * b[7],
a[1] * b[2] + a[1] * b[6] + a[2] * b[3] + a[2] * b[7] + a[3] * b[0] + a[3] * b[4],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[1] * b[3] + a[1] * b[7] - a[2] * b[2] - a[2] * b[6] + a[3] * b[1] + a[3] * b[5]
);
}			
		 
inline Tvd gp (const Trv& a, const Tvd& b) { 
	return Tvd (
a[0] * b[0],
a[0] * b[1] + a[1] * b[0] + a[1] * b[4],
a[0] * b[2] + a[2] * b[0] + a[2] * b[4],
a[0] * b[3] + a[3] * b[0] + a[3] * b[4],
a[0] * b[4]
);
}			
		 
inline Trt gp (const Trv& a, const Tsd& b) { 
	return Trt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4],
a[3] * b[0] + a[3] * b[4],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] + a[3] * b[2]
);
}			
		 
inline Tst gp (const Trv& a, const Trt& b) { 
	return Tst (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7],
a[0] * b[2] + a[1] * b[9] - a[3] * b[7],
a[0] * b[3] + a[2] * b[9] - a[3] * b[8],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[2] - a[3] * b[12],
a[0] * b[5] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3] - a[3] * b[13],
a[0] * b[6] + a[1] * b[2] + a[1] * b[12] + a[2] * b[3] + a[2] * b[13] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9],
a[0] * b[11] - a[1] * b[8] + a[2] * b[7],
a[0] * b[12] - a[1] * b[9] + a[3] * b[7],
a[0] * b[13] - a[2] * b[9] + a[3] * b[8],
a[1] * b[3] + a[1] * b[13] - a[2] * b[2] - a[2] * b[12] + a[3] * b[1] + a[3] * b[11]
);
}			
		 
inline Rvd gp (const Trv& a, const Rvd& b) { 
	return Rvd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4] + a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8] - a[3] * b[2] - a[3] * b[9],
a[0] * b[5] + a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7] - a[3] * b[3] - a[3] * b[10],
a[0] * b[6] + a[1] * b[2] + a[1] * b[9] + a[2] * b[3] + a[2] * b[10] + a[3] * b[0] + a[3] * b[7],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11] + a[1] * b[3] + a[1] * b[10] - a[2] * b[2] - a[2] * b[9] + a[3] * b[1] + a[3] * b[8]
);
}			
		 
inline Tst gp (const Trv& a, const Tst& b) { 
	return Tst (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7],
a[0] * b[2] + a[1] * b[9] - a[3] * b[7],
a[0] * b[3] + a[2] * b[9] - a[3] * b[8],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[2] - a[3] * b[12],
a[0] * b[5] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3] - a[3] * b[13],
a[0] * b[6] + a[1] * b[2] + a[1] * b[12] + a[2] * b[3] + a[2] * b[13] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9],
a[0] * b[11] - a[1] * b[8] + a[2] * b[7],
a[0] * b[12] - a[1] * b[9] + a[3] * b[7],
a[0] * b[13] - a[2] * b[9] + a[3] * b[8],
a[0] * b[14] + a[1] * b[3] + a[1] * b[13] - a[2] * b[2] - a[2] * b[12] + a[3] * b[1] + a[3] * b[11]
);
}			
		 
inline Mtt gp (const Trv& a, const Tvt& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7] + a[3] * b[14],
a[0] * b[2] + a[1] * b[9] - a[2] * b[14] - a[3] * b[7],
a[0] * b[3] + a[1] * b[14] + a[2] * b[9] - a[3] * b[8],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[2] - a[3] * b[12],
a[0] * b[5] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3] - a[3] * b[13],
a[0] * b[6] + a[1] * b[2] + a[1] * b[12] + a[2] * b[3] + a[2] * b[13] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9],
a[0] * b[11] - a[1] * b[8] + a[2] * b[7] - a[3] * b[14],
a[0] * b[12] - a[1] * b[9] + a[2] * b[14] + a[3] * b[7],
a[0] * b[13] - a[1] * b[14] - a[2] * b[9] + a[3] * b[8],
a[1] * b[3] + a[1] * b[13] - a[2] * b[2] - a[2] * b[12] + a[3] * b[1] + a[3] * b[11],
a[0] * b[14]
);
}			
		  	
inline Trv sp (const Trv& trv, const Rot& rot) {					
					
const Rot& t1 = rot;
const Trv& t2 = trv;
Rtt t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Mot& mot) {					
					
const Mot& t1 = mot;
const Trv& t2 = trv;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[7] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] - t1[7] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[7] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[7] * t2[3],
t1[4] * t2[3] - t1[6] * t2[1] - t1[7] * t2[2],
t1[5] * t2[3] - t1[6] * t2[2] + t1[7] * t2[1],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1],
t1[7] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] - t3[14] * t5[7],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Dil& dil) {					
					
const Dil& t1 = dil;
const Trv& t2 = trv;
Tvd t3 (
t1[0] * t2[0],
t1[0] * t2[1] - t1[1] * t2[1],
t1[0] * t2[2] - t1[1] * t2[2],
t1[0] * t2[3] - t1[1] * t2[3],
t1[1] * t2[0]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Trv (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] + t3[1] * t5[1],
t3[2] * t5[0] + t3[2] * t5[1],
t3[3] * t5[0] + t3[3] * t5[1]
);

}
		
	
	  	
inline Trv sp (const Trv& trva, const Trv& trv) {					
					
const Trv& t1 = trva;
const Trv& t2 = trv;
Trv t3 (
t1[0] * t2[0],
t1[0] * t2[1] + t1[1] * t2[0],
t1[0] * t2[2] + t1[2] * t2[0],
t1[0] * t2[3] + t1[3] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Trv (
t3[0] * t5[0],
t3[0] * t5[1] + t3[1] * t5[0],
t3[0] * t5[2] + t3[2] * t5[0],
t3[0] * t5[3] + t3[3] * t5[0]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Trv& t2 = trv;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[11] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] - t1[11] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[11] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] - t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[10] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] - t1[7] * t2[3] + t1[9] * t2[1] + t1[10] * t2[2],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3] + t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[8] * t2[0] + t1[11] * t2[3],
t1[4] * t2[3] - t1[6] * t2[1] + t1[9] * t2[0] - t1[11] * t2[2],
t1[5] * t2[3] - t1[6] * t2[2] + t1[10] * t2[0] + t1[11] * t2[1],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[8] * t2[3] + t1[9] * t2[2] - t1[10] * t2[1],
t1[11] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] + t3[10] * t5[7] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] - t3[14] * t5[11],
t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[14] * t5[3] - t3[14] * t5[10],
t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[14] * t5[2] + t3[14] * t5[9],
t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[14] * t5[1] - t3[14] * t5[8]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Trs& trs) {					
					
const Trs& t1 = trs;
const Trv& t2 = trv;
Trt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Trv (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3],
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Trv& t2 = trv;
Rtc t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[8] * t2[1] + t1[10] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[9] * t2[1] - t1[10] * t2[2],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[4] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] + t1[14] * t2[3] - t1[15] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] + t1[6] * t2[0] - t1[11] * t2[3] + t1[13] * t2[1] - t1[14] * t2[2] + t1[15] * t2[2],
t1[1] * t2[3] - t1[2] * t2[2] + t1[7] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] + t1[14] * t2[1] - t1[15] * t2[1],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
t1[4] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[11] * t2[0],
t1[4] * t2[2] - t1[8] * t2[1] + t1[10] * t2[3] + t1[12] * t2[0],
t1[4] * t2[3] - t1[9] * t2[1] - t1[10] * t2[2] + t1[13] * t2[0],
t1[8] * t2[3] - t1[9] * t2[2] + t1[10] * t2[1] + t1[14] * t2[0],
t1[8] * t2[3] - t1[9] * t2[2] + t1[10] * t2[1] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Trv (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[0] - t3[3] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] + t3[7] * t5[14] + t3[7] * t5[15] - t3[11] * t5[3] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[7] * t5[2] - t3[7] * t5[13] - t3[11] * t5[5] - t3[12] * t5[3] + t3[13] * t5[7] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[2] - t3[3] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] + t3[7] * t5[1] + t3[7] * t5[12] - t3[11] * t5[6] - t3[12] * t5[7] - t3[13] * t5[3] - t3[14] * t5[5] + t3[15] * t5[5]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Trv& t2 = trv;
Mtt t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1] + t1[15] * t2[3],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1] - t1[15] * t2[2],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2] + t1[15] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[10] * t2[1] - t1[11] * t2[2] - t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] - t1[10] * t2[2] + t1[11] * t2[1] - t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] - t1[10] * t2[3] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[0] + t1[15] * t2[3],
t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[0] - t1[15] * t2[2],
t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[0] + t1[15] * t2[1],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[11] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1] + t1[14] * t2[0],
t1[15] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Trv& t2 = trv;
Rtt t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Trv& t2 = trv;
Rvd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[7] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[3] + t1[6] * t2[1] + t1[7] * t2[2],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[5] * t2[3] + t1[6] * t2[2] - t1[7] * t2[1]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[7],
t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[1] - t3[5] * t5[5] - t3[6] * t5[2] - t3[6] * t5[6] - t3[11] * t5[3] - t3[11] * t5[7],
t3[4] * t5[1] + t3[4] * t5[5] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[3] - t3[6] * t5[7] + t3[11] * t5[2] + t3[11] * t5[6],
t3[4] * t5[2] + t3[4] * t5[6] + t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[0] + t3[6] * t5[4] - t3[11] * t5[1] - t3[11] * t5[5]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Trv& t2 = trv;
Tvd t3 (
t1[0] * t2[0],
t1[0] * t2[1] + t1[1] * t2[0] - t1[4] * t2[1],
t1[0] * t2[2] + t1[2] * t2[0] - t1[4] * t2[2],
t1[0] * t2[3] + t1[3] * t2[0] - t1[4] * t2[3],
t1[4] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Trv (
t3[0] * t5[0] + t3[4] * t5[4],
t3[0] * t5[1] + t3[1] * t5[0] + t3[1] * t5[4] - t3[4] * t5[1],
t3[0] * t5[2] + t3[2] * t5[0] + t3[2] * t5[4] - t3[4] * t5[2],
t3[0] * t5[3] + t3[3] * t5[0] + t3[3] * t5[4] - t3[4] * t5[3]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Trv& t2 = trv;
Trt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2],
t1[0] * t2[3] - t1[4] * t2[3],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3] + t1[4] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Trv (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3] + t3[10] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Trt& trt) {					
					
const Trt& t1 = trt;
const Trv& t2 = trv;
Tst t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[10] * t2[1] - t1[11] * t2[2] - t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] - t1[10] * t2[2] + t1[11] * t2[1] - t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] - t1[10] * t2[3] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[0],
t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[0],
t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[11] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Trv& t2 = trv;
Rvd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[7] * t2[1] - t1[8] * t2[2] - t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] - t1[7] * t2[2] + t1[8] * t2[1] - t1[10] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] - t1[7] * t2[3] + t1[9] * t2[1] + t1[10] * t2[2],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[8] * t2[3] + t1[9] * t2[2] - t1[10] * t2[1] + t1[11] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] + t3[10] * t5[11] - t3[11] * t5[3] - t3[11] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[11] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[6] + t3[8] * t5[11] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[8]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Tst& tst) {					
					
const Tst& t1 = tst;
const Trv& t2 = trv;
Tst t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[10] * t2[1] - t1[11] * t2[2] - t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] - t1[10] * t2[2] + t1[11] * t2[1] - t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] - t1[10] * t2[3] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[0],
t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[0],
t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[11] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1] + t1[14] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11]
);

}
		
	
	  	
inline Trv sp (const Trv& trv, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Trv& t2 = trv;
Mtt t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1] + t1[14] * t2[3],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1] - t1[14] * t2[2],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2] + t1[14] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[10] * t2[1] - t1[11] * t2[2] - t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] - t1[10] * t2[2] + t1[11] * t2[1] - t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] - t1[10] * t2[3] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[0] + t1[14] * t2[3],
t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[0] - t1[14] * t2[2],
t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[0] + t1[14] * t2[1],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[11] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1],
t1[14] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[14],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11]
);

}
		
	
		
	} //vsr::
	#endif
	