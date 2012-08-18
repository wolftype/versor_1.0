		#ifndef AFP_H_INCLUDED
		#define AFP_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Afp gp (const Afp& a, const Sca& b) { 
	return Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Tnt gp (const Afp& a, const Ori& b) { 
	return Tnt (
a[3] * b[0]
);
}			
		 
inline Inf_Afp gp (const Afp& a, const Inf& b) { 
	return Inf_Afp (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Mnk_Afp gp (const Afp& a, const Mnk& b) { 
	return Mnk_Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Hyp_Afp gp (const Afp& a, const Hyp& b) { 
	return Hyp_Afp (
 - a[0] * b[1],
 - a[1] * b[1],
 - a[2] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[0],
a[3] * b[1]
);
}			
		 
inline Pss_Afp gp (const Afp& a, const Pss& b) { 
	return Pss_Afp (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Pnt_Afp gp (const Afp& a, const Pnt& b) { 
	return Pnt_Afp (
 - a[0] * b[4] + a[3] * b[2],
 - a[1] * b[4] - a[3] * b[1],
 - a[2] * b[4] + a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3],
a[3] * b[4]
);
}			
		 
inline Par_Afp gp (const Afp& a, const Par& b) { 
	return Par_Afp (
a[0] * b[7] + a[1] * b[8] - a[3] * b[2],
 - a[0] * b[6] + a[2] * b[8] + a[3] * b[1],
 - a[1] * b[6] - a[2] * b[7] - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[9] - a[1] * b[2] + a[2] * b[1] + a[3] * b[5],
a[0] * b[2] + a[1] * b[9] - a[2] * b[0] - a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[2] * b[9] + a[3] * b[3],
a[3] * b[8],
 - a[3] * b[7],
a[3] * b[6],
 - a[0] * b[7] - a[1] * b[8],
a[0] * b[6] - a[2] * b[8],
a[1] * b[6] + a[2] * b[7],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] + a[3] * b[9]
);
}			
		 
inline Tst gp (const Afp& a, const Cir& b) { 
	return Tst (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[3] * b[9],
a[1] * b[5] - a[2] * b[4],
 - a[0] * b[5] + a[2] * b[3],
a[0] * b[4] - a[1] * b[3],
 - a[0] * b[7] - a[1] * b[8] + a[2] * b[9] - a[3] * b[2],
a[0] * b[6] - a[1] * b[9] - a[2] * b[8] + a[3] * b[1],
a[0] * b[9] + a[1] * b[6] + a[2] * b[7] - a[3] * b[0],
 - a[3] * b[5],
a[3] * b[4],
 - a[3] * b[3],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[1] * b[5] + a[2] * b[4] + a[3] * b[8],
a[0] * b[5] - a[2] * b[3] - a[3] * b[7],
 - a[0] * b[4] + a[1] * b[3] + a[3] * b[6],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6]
);
}			
		 
inline Sph_Afp gp (const Afp& a, const Sph& b) { 
	return Sph_Afp (
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[3] * b[4],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[2] * b[4] - a[3] * b[2],
 - a[1] * b[4] + a[3] * b[1],
a[0] * b[4] - a[3] * b[0]
);
}			
		 
inline Par_Afp gp (const Afp& a, const Sta& b) { 
	return Par_Afp (
a[0] * b[7] + a[1] * b[8] - a[3] * b[2],
 - a[0] * b[6] + a[2] * b[8] + a[3] * b[1],
 - a[1] * b[6] - a[2] * b[7] - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[5],
a[0] * b[2] - a[2] * b[0] - a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[3] * b[3],
a[3] * b[8],
 - a[3] * b[7],
a[3] * b[6],
 - a[0] * b[7] - a[1] * b[8],
a[0] * b[6] - a[2] * b[8],
a[1] * b[6] + a[2] * b[7],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6]
);
}			
		 
inline Drv_Afp gp (const Afp& a, const Drv& b) { 
	return Drv_Afp (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Drb_Afp gp (const Afp& a, const Drb& b) { 
	return Drb_Afp (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Drt_Afp gp (const Afp& a, const Drt& b) { 
	return Drt_Afp (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Tnb gp (const Afp& a, const Tnv& b) { 
	return Tnb (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0]
);
}			
		 
inline Tnv gp (const Afp& a, const Tnb& b) { 
	return Tnv (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0]
);
}			
		 
inline Ori gp (const Afp& a, const Tnt& b) { 
	return Ori (
 - a[3] * b[0]
);
}			
		 
inline Tst gp (const Afp& a, const Lin& b) { 
	return Tst (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[0] * b[4] - a[1] * b[5],
a[0] * b[3] - a[2] * b[5],
a[1] * b[3] + a[2] * b[4],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[5],
a[0] * b[2] - a[2] * b[0] - a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[3] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
inline Sph_Afp gp (const Afp& a, const Pln& b) { 
	return Sph_Afp (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[2] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] - a[3] * b[0]
);
}			
		 
inline Flp_Afp gp (const Afp& a, const Flp& b) { 
	return Flp_Afp (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Par_Afp gp (const Afp& a, const Dll& b) { 
	return Par_Afp (
a[0] * b[4] + a[1] * b[5] - a[3] * b[2],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[1],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[3] * b[5],
 - a[3] * b[4],
a[3] * b[3],
 - a[0] * b[4] - a[1] * b[5],
a[0] * b[3] - a[2] * b[5],
a[1] * b[3] + a[2] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
inline Pnt_Afp gp (const Afp& a, const Dlp& b) { 
	return Pnt_Afp (
 - a[0] * b[3] + a[3] * b[2],
 - a[1] * b[3] - a[3] * b[1],
 - a[2] * b[3] + a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[3] * b[3]
);
}			
		 
inline Vec_Afp gp (const Afp& a, const Vec& b) { 
	return Vec_Afp (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Biv_Afp gp (const Afp& a, const Biv& b) { 
	return Biv_Afp (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Trv gp (const Afp& a, const Tri& b) { 
	return Trv (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Vec_Afp gp (const Afp& a, const Aff& b) { 
	return Vec_Afp (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Biv_Afp gp (const Afp& a, const Afl& b) { 
	return Biv_Afp (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[5],
a[0] * b[2] - a[2] * b[0] - a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[3] * b[3]
);
}			
		 
inline Trv gp (const Afp& a, const Afp& b) { 
	return Trv (
 - a[3] * b[3],
a[2] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] - a[3] * b[0]
);
}			
		 
inline Vec_Afl gp (const Afp& a, const Rot& b) { 
	return Vec_Afl (
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Rtc gp (const Afp& a, const Mot& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] - a[2] * b[7] - a[3] * b[3],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[3] * b[2],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5] - a[3] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
 - a[3] * b[7],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[6],
 - a[3] * b[5],
a[3] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[7],
a[0] * b[4] - a[1] * b[7] - a[2] * b[6],
a[0] * b[7] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[0],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4]
);
}			
		 
inline Ori_Sph gp (const Afp& a, const Dil& b) { 
	return Ori_Sph (
a[0] * b[0] + a[0] * b[1],
a[1] * b[0] + a[1] * b[1],
a[2] * b[0] + a[2] * b[1],
a[3] * b[0],
a[3] * b[1]
);
}			
		 
inline Afp gp (const Afp& a, const Trv& b) { 
	return Afp (
a[0] * b[0] + a[3] * b[3],
a[1] * b[0] - a[3] * b[2],
a[2] * b[0] + a[3] * b[1],
a[3] * b[0]
);
}			
		 
inline Rtc gp (const Afp& a, const Mtd& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] - a[3] * b[3],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[3] * b[2],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[8] - a[1] * b[2] - a[1] * b[9] - a[2] * b[3] - a[2] * b[10],
 - a[3] * b[11],
a[0] * b[0] + a[0] * b[7] - a[1] * b[3] - a[1] * b[10] + a[2] * b[2] + a[2] * b[9],
a[0] * b[3] + a[0] * b[10] + a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8],
 - a[0] * b[2] - a[0] * b[9] + a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7],
a[3] * b[6],
 - a[3] * b[5],
a[3] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[11] - a[3] * b[10],
a[0] * b[4] - a[1] * b[11] - a[2] * b[6] + a[3] * b[9],
a[0] * b[11] + a[1] * b[4] + a[2] * b[5] - a[3] * b[8],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[0],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[7]
);
}			
		 
inline Flp_Afp gp (const Afp& a, const Trs& b) { 
	return Flp_Afp (
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[3],
 - a[3] * b[2],
a[3] * b[1],
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Mtt gp (const Afp& a, const Rtc& b) { 
	return Mtt (
a[0] * b[8] + a[1] * b[9] + a[2] * b[10] - a[3] * b[14],
 - a[0] * b[4] + a[1] * b[10] - a[2] * b[9] + a[3] * b[2],
 - a[0] * b[10] - a[1] * b[4] + a[2] * b[8] - a[3] * b[1],
a[0] * b[9] - a[1] * b[8] - a[2] * b[4] + a[3] * b[0],
 - a[0] * b[1] - a[0] * b[12] - a[1] * b[2] - a[1] * b[13] + a[2] * b[14] + a[2] * b[15] - a[3] * b[7],
a[0] * b[0] + a[0] * b[11] - a[1] * b[14] - a[1] * b[15] - a[2] * b[2] - a[2] * b[13] + a[3] * b[6],
a[0] * b[14] + a[0] * b[15] + a[1] * b[0] + a[1] * b[11] + a[2] * b[1] + a[2] * b[12] - a[3] * b[5],
 - a[3] * b[10],
a[3] * b[9],
 - a[3] * b[8],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[3] * b[15],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9] + a[3] * b[13],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8] - a[3] * b[12],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4] + a[3] * b[11],
 - a[0] * b[2] - a[0] * b[13] + a[1] * b[1] + a[1] * b[12] - a[2] * b[0] - a[2] * b[11] + a[3] * b[3],
a[3] * b[4]
);
}			
		 
inline Rtc gp (const Afp& a, const Mtt& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] - a[2] * b[15] - a[3] * b[3],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9] + a[3] * b[2],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8] - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13] - a[3] * b[14],
 - a[3] * b[15],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] + a[3] * b[6],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[5],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] + a[3] * b[4],
a[3] * b[9],
 - a[3] * b[8],
a[3] * b[7],
 - a[0] * b[8] - a[1] * b[9] + a[2] * b[15] - a[3] * b[13],
a[0] * b[7] - a[1] * b[15] - a[2] * b[9] + a[3] * b[12],
a[0] * b[15] + a[1] * b[7] + a[2] * b[8] - a[3] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[10]
);
}			
		 
inline Vec_Afl gp (const Afp& a, const Rtt& b) { 
	return Vec_Afl (
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[3] * b[7],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[4],
a[3] * b[0]
);
}			
		 
inline Par_Tnb gp (const Afp& a, const Rtd& b) { 
	return Par_Tnb (
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[5] - a[1] * b[2] - a[1] * b[6] - a[2] * b[3] - a[2] * b[7],
a[0] * b[0] + a[0] * b[4] - a[1] * b[3] - a[1] * b[7] + a[2] * b[2] + a[2] * b[6],
a[0] * b[3] + a[0] * b[7] + a[1] * b[0] + a[1] * b[4] - a[2] * b[1] - a[2] * b[5],
 - a[0] * b[2] - a[0] * b[6] + a[1] * b[1] + a[1] * b[5] + a[2] * b[0] + a[2] * b[4],
 - a[3] * b[7],
a[3] * b[6],
 - a[3] * b[5],
a[3] * b[0],
a[3] * b[4]
);
}			
		 
inline Ori_Sph gp (const Afp& a, const Tvd& b) { 
	return Ori_Sph (
a[0] * b[0] + a[0] * b[4] + a[3] * b[3],
a[1] * b[0] + a[1] * b[4] - a[3] * b[2],
a[2] * b[0] + a[2] * b[4] + a[3] * b[1],
a[3] * b[0],
a[3] * b[4]
);
}			
		 
inline Flp_Afp gp (const Afp& a, const Tsd& b) { 
	return Flp_Afp (
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4],
a[3] * b[3],
 - a[3] * b[2],
a[3] * b[1],
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[4]
);
}			
		 
inline Par_Afp gp (const Afp& a, const Trt& b) { 
	return Par_Afp (
a[0] * b[8] + a[1] * b[9] - a[3] * b[3],
 - a[0] * b[7] + a[2] * b[9] + a[3] * b[2],
 - a[1] * b[7] - a[2] * b[8] - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] + a[3] * b[6],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[5],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] + a[3] * b[4],
a[3] * b[9],
 - a[3] * b[8],
a[3] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[3] * b[13],
a[0] * b[7] - a[2] * b[9] + a[3] * b[12],
a[1] * b[7] + a[2] * b[8] - a[3] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[10]
);
}			
		 
inline Par_Tnb gp (const Afp& a, const Rvd& b) { 
	return Par_Tnb (
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[8] - a[1] * b[2] - a[1] * b[9] - a[2] * b[3] - a[2] * b[10] - a[3] * b[11],
a[0] * b[0] + a[0] * b[7] - a[1] * b[3] - a[1] * b[10] + a[2] * b[2] + a[2] * b[9] + a[3] * b[6],
a[0] * b[3] + a[0] * b[10] + a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8] - a[3] * b[5],
 - a[0] * b[2] - a[0] * b[9] + a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7] + a[3] * b[4],
 - a[3] * b[10],
a[3] * b[9],
 - a[3] * b[8],
a[3] * b[0],
a[3] * b[7]
);
}			
		 
inline Par_Afp gp (const Afp& a, const Tst& b) { 
	return Par_Afp (
a[0] * b[8] + a[1] * b[9] - a[3] * b[3],
 - a[0] * b[7] + a[2] * b[9] + a[3] * b[2],
 - a[1] * b[7] - a[2] * b[8] - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13] - a[3] * b[14],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] + a[3] * b[6],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[5],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] + a[3] * b[4],
a[3] * b[9],
 - a[3] * b[8],
a[3] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[3] * b[13],
a[0] * b[7] - a[2] * b[9] + a[3] * b[12],
a[1] * b[7] + a[2] * b[8] - a[3] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[10]
);
}			
		 
inline Rtc gp (const Afp& a, const Tvt& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] - a[2] * b[14] - a[3] * b[3],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9] + a[3] * b[2],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8] - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13],
 - a[3] * b[14],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] + a[3] * b[6],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[5],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] + a[3] * b[4],
a[3] * b[9],
 - a[3] * b[8],
a[3] * b[7],
 - a[0] * b[8] - a[1] * b[9] + a[2] * b[14] - a[3] * b[13],
a[0] * b[7] - a[1] * b[14] - a[2] * b[9] + a[3] * b[12],
a[0] * b[14] + a[1] * b[7] + a[2] * b[8] - a[3] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[10]
);
}			
		 
inline Afp op (const Afp& a, const Sca& b) { 
	return Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Tnt op (const Afp& a, const Ori& b) { 
	return Tnt (
a[3] * b[0]
);
}			
		 
inline Pln op (const Afp& a, const Inf& b) { 
	return Pln (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Pss op (const Afp& a, const Mnk& b) { 
	return Pss (
a[3] * b[0]
);
}			
		 
inline Sph op (const Afp& a, const Hyp& b) { 
	return Sph (
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[0],
a[3] * b[1]
);
}			
		 
inline Sca op (const Afp& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Sph op (const Afp& a, const Pnt& b) { 
	return Sph (
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3],
a[3] * b[4]
);
}			
		 
inline Pss op (const Afp& a, const Par& b) { 
	return Pss (
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] + a[3] * b[9]
);
}			
		 
inline Sca op (const Afp& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Afp& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Afp& a, const Sta& b) { 
	return Pss (
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6]
);
}			
		 
inline Pss op (const Afp& a, const Drv& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Sca op (const Afp& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Afp& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Afp& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Afp& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Afp& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Afp& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Afp& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Afp& a, const Flp& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Pss op (const Afp& a, const Dll& b) { 
	return Pss (
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
inline Sph op (const Afp& a, const Dlp& b) { 
	return Sph (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[3] * b[3]
);
}			
		 
inline Tnt op (const Afp& a, const Vec& b) { 
	return Tnt (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Sca op (const Afp& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Afp& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Tnt op (const Afp& a, const Aff& b) { 
	return Tnt (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Sca op (const Afp& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Afp& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Pss_Afp ip (const Afp& a, const Pss& b) { 
	return Pss_Afp (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Sca ip (const Afp& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Cir& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[3] * b[9]
);
}			
		 
inline Pnt ip (const Afp& a, const Sph& b) { 
	return Pnt (
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[3] * b[4]
);
}			
		 
inline Sca ip (const Afp& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Drb& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Dlp ip (const Afp& a, const Drt& b) { 
	return Dlp (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Sca ip (const Afp& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Ori ip (const Afp& a, const Tnt& b) { 
	return Ori (
 - a[3] * b[0]
);
}			
		 
inline Sca ip (const Afp& a, const Lin& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Pnt ip (const Afp& a, const Pln& b) { 
	return Pnt (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[3]
);
}			
		 
inline Sca ip (const Afp& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Tri& b) { 
	return Sca (
 - a[3] * b[0]
);
}			
		 
inline Sca ip (const Afp& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Afp& a, const Afp& b) { 
	return Sca (
 - a[3] * b[3]
);
}			
		  	
inline Afp sp (const Afp& afp, const Rot& rot) {					
					
const Rot& t1 = rot;
const Afp& t2 = afp;
Vec_Afl t3 (
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Afp (
t3[3] * t5[1] + t3[4] * t5[0] - t3[5] * t5[3] + t3[6] * t5[2],
t3[3] * t5[2] + t3[4] * t5[3] + t3[5] * t5[0] - t3[6] * t5[1],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Mot& mot) {					
					
const Mot& t1 = mot;
const Afp& t2 = afp;
Rtc t3 (
 - t1[3] * t2[3] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
t1[2] * t2[3] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
 - t1[1] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[7] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[6] * t2[3],
t1[5] * t2[3],
 - t1[4] * t2[3],
t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
t1[0] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Afp (
t3[3] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[3] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1],
t3[3] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[7] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[7] + t3[5] * t5[6] - t3[6] * t5[5] + t3[7] * t5[4] + t3[14] * t5[0]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Dil& dil) {					
					
const Dil& t1 = dil;
const Afp& t2 = afp;
Ori_Sph t3 (
t1[0] * t2[0] - t1[1] * t2[0],
t1[0] * t2[1] - t1[1] * t2[1],
t1[0] * t2[2] - t1[1] * t2[2],
t1[0] * t2[3],
t1[1] * t2[3]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Afp (
t3[0] * t5[0] + t3[0] * t5[1],
t3[1] * t5[0] + t3[1] * t5[1],
t3[2] * t5[0] + t3[2] * t5[1],
t3[3] * t5[0] + t3[4] * t5[1]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Trv& trv) {					
					
const Trv& t1 = trv;
const Afp& t2 = afp;
Afp t3 (
t1[0] * t2[0] - t1[3] * t2[3],
t1[0] * t2[1] + t1[2] * t2[3],
t1[0] * t2[2] - t1[1] * t2[3],
t1[0] * t2[3]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Afp (
t3[0] * t5[0] + t3[3] * t5[3],
t3[1] * t5[0] - t3[3] * t5[2],
t3[2] * t5[0] + t3[3] * t5[1],
t3[3] * t5[0]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Afp& t2 = afp;
Rtc t3 (
 - t1[3] * t2[3] + t1[5] * t2[0] + t1[6] * t2[1] + t1[11] * t2[2],
t1[2] * t2[3] - t1[4] * t2[0] + t1[6] * t2[2] - t1[11] * t2[1],
 - t1[1] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2] + t1[11] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2],
t1[11] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[7] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[6] * t2[3],
t1[5] * t2[3],
 - t1[4] * t2[3],
t1[5] * t2[0] + t1[6] * t2[1] - t1[10] * t2[3] + t1[11] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] + t1[9] * t2[3] - t1[11] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] - t1[8] * t2[3] + t1[11] * t2[0],
t1[0] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[7] * t2[3]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Afp (
t3[3] * t5[1] + t3[3] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[7] * t5[2] + t3[7] * t5[9],
t3[3] * t5[2] + t3[3] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[1] - t3[7] * t5[8],
t3[3] * t5[3] + t3[3] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] + t3[7] * t5[0] + t3[7] * t5[7],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[11] + t3[5] * t5[6] - t3[6] * t5[5] + t3[7] * t5[4] + t3[11] * t5[10] - t3[12] * t5[9] + t3[13] * t5[8] + t3[14] * t5[0] + t3[15] * t5[7]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Trs& trs) {					
					
const Trs& t1 = trs;
const Afp& t2 = afp;
Flp_Afp t3 (
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Afp (
t3[3] * t5[0],
t3[4] * t5[0],
t3[5] * t5[0],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[12] * t5[0]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Afp& t2 = afp;
Mtt t3 (
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2] - t1[14] * t2[3],
t1[2] * t2[3] - t1[4] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1],
 - t1[1] * t2[3] - t1[4] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0],
t1[0] * t2[3] - t1[4] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] + t1[7] * t2[3] + t1[12] * t2[0] + t1[13] * t2[1] - t1[14] * t2[2] + t1[15] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] - t1[6] * t2[3] - t1[11] * t2[0] + t1[13] * t2[2] + t1[14] * t2[1] - t1[15] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[5] * t2[3] - t1[11] * t2[1] - t1[12] * t2[2] - t1[14] * t2[0] + t1[15] * t2[0],
t1[10] * t2[3],
 - t1[9] * t2[3],
t1[8] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2] - t1[15] * t2[3],
 - t1[4] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1] + t1[13] * t2[3],
 - t1[4] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0] - t1[12] * t2[3],
 - t1[4] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0],
 - t1[4] * t2[3]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Afp (
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] + t3[3] * t5[6] - t3[4] * t5[1] - t3[4] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[10] * t5[5] - t3[11] * t5[3] + t3[12] * t5[7] - t3[13] * t5[6] - t3[14] * t5[2] - t3[14] * t5[13],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[5] - t3[4] * t5[2] - t3[4] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] - t3[10] * t5[6] - t3[11] * t5[7] - t3[12] * t5[3] + t3[13] * t5[5] + t3[14] * t5[1] + t3[14] * t5[12],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] + t3[3] * t5[3] - t3[4] * t5[14] - t3[4] * t5[15] - t3[5] * t5[2] - t3[5] * t5[13] + t3[6] * t5[1] + t3[6] * t5[12] - t3[10] * t5[7] + t3[11] * t5[6] - t3[12] * t5[5] - t3[13] * t5[3] - t3[14] * t5[0] - t3[14] * t5[11],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] + t3[3] * t5[0] - t3[4] * t5[10] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[15] + t3[11] * t5[13] - t3[12] * t5[12] + t3[13] * t5[11] - t3[14] * t5[4] - t3[15] * t5[3]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Afp& t2 = afp;
Rtc t3 (
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1] + t1[15] * t2[2],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2] - t1[15] * t2[1],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] + t1[15] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2] + t1[14] * t2[3],
t1[15] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
 - t1[9] * t2[3],
t1[8] * t2[3],
 - t1[7] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[3] + t1[15] * t2[2],
 - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[3] - t1[15] * t2[1],
 - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[3] + t1[15] * t2[0],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Afp (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[1] + t3[3] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] + t3[7] * t5[2] + t3[7] * t5[12] - t3[11] * t5[5] + t3[12] * t5[4] - t3[13] * t5[14] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[7] * t5[11] - t3[11] * t5[6] + t3[12] * t5[14] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[0] + t3[7] * t5[10] - t3[11] * t5[14] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[15] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[13] - t3[12] * t5[12] + t3[13] * t5[11] + t3[14] * t5[0] + t3[15] * t5[10]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Afp& t2 = afp;
Vec_Afl t3 (
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3],
t1[0] * t2[3]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Afp (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[1] + t3[4] * t5[0] - t3[5] * t5[3] + t3[6] * t5[2] + t3[7] * t5[6],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] + t3[3] * t5[2] + t3[4] * t5[3] + t3[5] * t5[0] - t3[6] * t5[1] - t3[7] * t5[5],
t3[0] * t5[7] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0] + t3[7] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Afp& t2 = afp;
Par_Tnb t3 (
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
 - t1[7] * t2[3],
t1[6] * t2[3],
 - t1[5] * t2[3],
t1[0] * t2[3],
t1[4] * t2[3]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Afp (
t3[3] * t5[1] + t3[3] * t5[5] + t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[3] - t3[5] * t5[7] + t3[6] * t5[2] + t3[6] * t5[6],
t3[3] * t5[2] + t3[3] * t5[6] + t3[4] * t5[3] + t3[4] * t5[7] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[1] - t3[6] * t5[5],
t3[3] * t5[3] + t3[3] * t5[7] - t3[4] * t5[2] - t3[4] * t5[6] + t3[5] * t5[1] + t3[5] * t5[5] + t3[6] * t5[0] + t3[6] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[7] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[0] + t3[11] * t5[4]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Afp& t2 = afp;
Ori_Sph t3 (
t1[0] * t2[0] - t1[3] * t2[3] - t1[4] * t2[0],
t1[0] * t2[1] + t1[2] * t2[3] - t1[4] * t2[1],
t1[0] * t2[2] - t1[1] * t2[3] - t1[4] * t2[2],
t1[0] * t2[3],
t1[4] * t2[3]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Afp (
t3[0] * t5[0] + t3[0] * t5[4] + t3[3] * t5[3] - t3[4] * t5[3],
t3[1] * t5[0] + t3[1] * t5[4] - t3[3] * t5[2] + t3[4] * t5[2],
t3[2] * t5[0] + t3[2] * t5[4] + t3[3] * t5[1] - t3[4] * t5[1],
t3[3] * t5[0] + t3[4] * t5[4]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Afp& t2 = afp;
Flp_Afp t3 (
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2],
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0] + t1[4] * t2[3]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Afp (
t3[3] * t5[0] + t3[3] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[12] * t5[0] + t3[13] * t5[4]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Trt& trt) {					
					
const Trt& t1 = trt;
const Afp& t2 = afp;
Par_Afp t3 (
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
 - t1[9] * t2[3],
t1[8] * t2[3],
 - t1[7] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[3],
 - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[3],
 - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[3],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Afp (
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[1] + t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[2] + t3[6] * t5[12] - t3[10] * t5[5] + t3[11] * t5[4] + t3[13] * t5[6] - t3[14] * t5[6],
t3[0] * t5[6] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[4] * t5[3] + t3[4] * t5[13] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[1] - t3[6] * t5[11] - t3[10] * t5[6] + t3[12] * t5[4] - t3[13] * t5[5] + t3[14] * t5[5],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[1] + t3[5] * t5[11] + t3[6] * t5[0] + t3[6] * t5[10] - t3[11] * t5[6] + t3[12] * t5[5] + t3[13] * t5[4] - t3[14] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[9] - t3[5] * t5[8] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[5] + t3[9] * t5[4] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Afp& t2 = afp;
Par_Tnb t3 (
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2] + t1[11] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[10] * t2[3],
t1[9] * t2[3],
 - t1[8] * t2[3],
t1[0] * t2[3],
t1[7] * t2[3]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Afp (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[1] + t3[3] * t5[8] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[3] - t3[5] * t5[10] + t3[6] * t5[2] + t3[6] * t5[9] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[11] + t3[10] * t5[6] - t3[11] * t5[6],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[9] + t3[4] * t5[3] + t3[4] * t5[10] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[1] - t3[6] * t5[8] - t3[7] * t5[6] + t3[8] * t5[11] + t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[5],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[10] - t3[4] * t5[2] - t3[4] * t5[9] + t3[5] * t5[1] + t3[5] * t5[8] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[11] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[4] - t3[11] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[0] + t3[11] * t5[7]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Tst& tst) {					
					
const Tst& t1 = tst;
const Afp& t2 = afp;
Par_Afp t3 (
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2] + t1[14] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
 - t1[9] * t2[3],
t1[8] * t2[3],
 - t1[7] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[3],
 - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[3],
 - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[3],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Afp (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[1] + t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[2] + t3[6] * t5[12] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] + t3[13] * t5[6] - t3[14] * t5[6],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[4] * t5[3] + t3[4] * t5[13] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[1] - t3[6] * t5[11] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] - t3[13] * t5[5] + t3[14] * t5[5],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[1] + t3[5] * t5[11] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[14] - t3[11] * t5[6] + t3[12] * t5[5] + t3[13] * t5[4] - t3[14] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[9] - t3[5] * t5[8] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[5] + t3[9] * t5[4] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
inline Afp sp (const Afp& afp, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Afp& t2 = afp;
Rtc t3 (
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1] + t1[14] * t2[2],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2] - t1[14] * t2[1],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] + t1[14] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[14] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
 - t1[9] * t2[3],
t1[8] * t2[3],
 - t1[7] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[3] + t1[14] * t2[2],
 - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[3] - t1[14] * t2[1],
 - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[3] + t1[14] * t2[0],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Afp (
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[1] + t3[3] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] + t3[7] * t5[2] + t3[7] * t5[12] - t3[11] * t5[5] + t3[12] * t5[4] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[7] * t5[11] - t3[11] * t5[6] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[0] + t3[7] * t5[10] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[13] - t3[12] * t5[12] + t3[13] * t5[11] + t3[14] * t5[0] + t3[15] * t5[10]
);

}
		
	
		
	} //vsr::
	#endif
	