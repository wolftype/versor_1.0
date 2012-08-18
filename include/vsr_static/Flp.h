		#ifndef FLP_H_INCLUDED
		#define FLP_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Flp gp (const Flp& a, const Sca& b) { 
	return Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Ori_Flp gp (const Flp& a, const Ori& b) { 
	return Ori_Flp (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Inf gp (const Flp& a, const Inf& b) { 
	return Inf (
a[3] * b[0]
);
}			
		 
inline Trs gp (const Flp& a, const Mnk& b) { 
	return Trs (
a[3] * b[0],
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Hyp_Flp gp (const Flp& a, const Hyp& b) { 
	return Hyp_Flp (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
a[3] * b[1],
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Pss_Flp gp (const Flp& a, const Pss& b) { 
	return Pss_Flp (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Pnt_Flp gp (const Flp& a, const Pnt& b) { 
	return Pnt_Flp (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[3] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] + a[3] * b[2]
);
}			
		 
inline Tvt gp (const Flp& a, const Par& b) { 
	return Tvt (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[3] * b[9],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[0] * b[9] - a[1] * b[0] - a[2] * b[1] + a[3] * b[6],
a[0] * b[0] - a[1] * b[9] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[2] - a[2] * b[9] + a[3] * b[8],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Cir_Flp gp (const Flp& a, const Cir& b) { 
	return Cir_Flp (
a[1] * b[0] + a[2] * b[1] + a[3] * b[6],
 - a[0] * b[0] + a[2] * b[2] + a[3] * b[7],
 - a[0] * b[1] - a[1] * b[2] + a[3] * b[8],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[7] - a[1] * b[6] - a[2] * b[9] + a[3] * b[3],
a[0] * b[8] + a[1] * b[9] - a[2] * b[6] + a[3] * b[4],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[5],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[9]
);
}			
		 
inline Sph_Flp gp (const Flp& a, const Sph& b) { 
	return Sph_Flp (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[3] * b[3],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[4]
);
}			
		 
inline Tvt gp (const Flp& a, const Sta& b) { 
	return Tvt (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[6],
a[0] * b[0] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[2] + a[3] * b[8],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drv gp (const Flp& a, const Drv& b) { 
	return Drv (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
inline Drb gp (const Flp& a, const Drb& b) { 
	return Drb (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
inline Drt gp (const Flp& a, const Drt& b) { 
	return Drt (
a[3] * b[0]
);
}			
		 
inline Tnv_Flp gp (const Flp& a, const Tnv& b) { 
	return Tnv_Flp (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Tnb_Flp gp (const Flp& a, const Tnb& b) { 
	return Tnb_Flp (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Tnt_Flp gp (const Flp& a, const Tnt& b) { 
	return Tnt_Flp (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Lin_Flp gp (const Flp& a, const Lin& b) { 
	return Lin_Flp (
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2]
);
}			
		 
inline Pln_Flp gp (const Flp& a, const Pln& b) { 
	return Pln_Flp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Trs gp (const Flp& a, const Flp& b) { 
	return Trs (
a[3] * b[3],
 - a[0] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] + a[3] * b[2]
);
}			
		 
inline Flp_Dll gp (const Flp& a, const Dll& b) { 
	return Flp_Dll (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Flp_Dlp gp (const Flp& a, const Dlp& b) { 
	return Flp_Dlp (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
inline Flp_Dlp gp (const Flp& a, const Vec& b) { 
	return Flp_Dlp (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
inline Flp_Dll gp (const Flp& a, const Biv& b) { 
	return Flp_Dll (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Flp_Tri gp (const Flp& a, const Tri& b) { 
	return Flp_Tri (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Pnt_Flp gp (const Flp& a, const Aff& b) { 
	return Pnt_Flp (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[3] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] + a[3] * b[2]
);
}			
		 
inline Tvt gp (const Flp& a, const Afl& b) { 
	return Tvt (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Flp_Afp gp (const Flp& a, const Afp& b) { 
	return Flp_Afp (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Lin_Dlp gp (const Flp& a, const Rot& b) { 
	return Lin_Dlp (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Lin_Dlp gp (const Flp& a, const Mot& b) { 
	return Lin_Dlp (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[7]
);
}			
		 
inline Tsd gp (const Flp& a, const Dil& b) { 
	return Tsd (
a[3] * b[1],
a[0] * b[0] - a[0] * b[1],
a[1] * b[0] - a[1] * b[1],
a[2] * b[0] - a[2] * b[1],
a[3] * b[0]
);
}			
		 
inline Trt gp (const Flp& a, const Trv& b) { 
	return Trt (
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2]
);
}			
		 
inline Mtd gp (const Flp& a, const Mtd& b) { 
	return Mtd (
a[3] * b[7],
a[3] * b[8],
a[3] * b[9],
a[3] * b[10],
a[0] * b[0] - a[0] * b[7] - a[1] * b[1] + a[1] * b[8] - a[2] * b[2] + a[2] * b[9] + a[3] * b[4],
a[0] * b[1] - a[0] * b[8] + a[1] * b[0] - a[1] * b[7] - a[2] * b[3] + a[2] * b[10] + a[3] * b[5],
a[0] * b[2] - a[0] * b[9] + a[1] * b[3] - a[1] * b[10] + a[2] * b[0] - a[2] * b[7] + a[3] * b[6],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[3] - a[0] * b[10] - a[1] * b[2] + a[1] * b[9] + a[2] * b[1] - a[2] * b[8] + a[3] * b[11]
);
}			
		 
inline Flp gp (const Flp& a, const Trs& b) { 
	return Flp (
a[0] * b[0] + a[3] * b[1],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] + a[3] * b[3],
a[3] * b[0]
);
}			
		 
inline Rtc gp (const Flp& a, const Rtc& b) { 
	return Rtc (
 - a[0] * b[3] + a[1] * b[5] + a[2] * b[6] + a[3] * b[11],
 - a[0] * b[5] - a[1] * b[3] + a[2] * b[7] + a[3] * b[12],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[3] + a[3] * b[13],
 - a[3] * b[3],
 - a[0] * b[0] + a[0] * b[11] - a[1] * b[1] + a[1] * b[12] - a[2] * b[2] + a[2] * b[13] + a[3] * b[4],
 - a[3] * b[5],
 - a[3] * b[6],
 - a[3] * b[7],
 - a[0] * b[1] + a[0] * b[12] + a[1] * b[0] - a[1] * b[11] - a[2] * b[14] + a[2] * b[15] + a[3] * b[8],
 - a[0] * b[2] + a[0] * b[13] + a[1] * b[14] - a[1] * b[15] + a[2] * b[0] - a[2] * b[11] + a[3] * b[9],
 - a[0] * b[14] + a[0] * b[15] - a[1] * b[2] + a[1] * b[13] + a[2] * b[1] - a[2] * b[12] + a[3] * b[10],
 - a[0] * b[3] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0],
 - a[0] * b[5] - a[1] * b[3] + a[2] * b[7] + a[3] * b[1],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[3] + a[3] * b[2],
 - a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[15],
 - a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[14]
);
}			
		 
inline Mtt gp (const Flp& a, const Mtt& b) { 
	return Mtt (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[11],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] + a[3] * b[12],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[13],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[3] * b[6],
a[0] * b[0] - a[0] * b[10] - a[1] * b[1] + a[1] * b[11] - a[2] * b[2] + a[2] * b[12] + a[3] * b[7],
a[0] * b[1] - a[0] * b[11] + a[1] * b[0] - a[1] * b[10] - a[2] * b[3] + a[2] * b[13] + a[3] * b[8],
a[0] * b[2] - a[0] * b[12] + a[1] * b[3] - a[1] * b[13] + a[2] * b[0] - a[2] * b[10] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[1],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] + a[3] * b[2],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3],
 - a[3] * b[14],
a[0] * b[3] - a[0] * b[13] - a[1] * b[2] + a[1] * b[12] + a[2] * b[1] - a[2] * b[11] + a[3] * b[15]
);
}			
		 
inline Mtt gp (const Flp& a, const Rtt& b) { 
	return Mtt (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[3] * b[6],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[1],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3],
 - a[3] * b[7],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Mtd gp (const Flp& a, const Rtd& b) { 
	return Mtd (
a[3] * b[4],
a[3] * b[5],
a[3] * b[6],
a[3] * b[7],
a[0] * b[0] - a[0] * b[4] - a[1] * b[1] + a[1] * b[5] - a[2] * b[2] + a[2] * b[6],
a[0] * b[1] - a[0] * b[5] + a[1] * b[0] - a[1] * b[4] - a[2] * b[3] + a[2] * b[7],
a[0] * b[2] - a[0] * b[6] + a[1] * b[3] - a[1] * b[7] + a[2] * b[0] - a[2] * b[4],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[3] - a[0] * b[7] - a[1] * b[2] + a[1] * b[6] + a[2] * b[1] - a[2] * b[5]
);
}			
		 
inline Trt gp (const Flp& a, const Tvd& b) { 
	return Trt (
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[4],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3],
a[0] * b[0] - a[0] * b[4],
a[1] * b[0] - a[1] * b[4],
a[2] * b[0] - a[2] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2]
);
}			
		 
inline Tsd gp (const Flp& a, const Tsd& b) { 
	return Tsd (
a[3] * b[4],
a[0] * b[0] - a[0] * b[4] + a[3] * b[1],
a[1] * b[0] - a[1] * b[4] + a[3] * b[2],
a[2] * b[0] - a[2] * b[4] + a[3] * b[3],
a[3] * b[0]
);
}			
		 
inline Tvt gp (const Flp& a, const Trt& b) { 
	return Tvt (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[10],
a[0] * b[5] - a[1] * b[4] + a[3] * b[11],
a[0] * b[6] - a[2] * b[4] + a[3] * b[12],
a[1] * b[6] - a[2] * b[5] + a[3] * b[13],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[3] * b[6],
a[0] * b[0] - a[0] * b[10] - a[1] * b[1] + a[1] * b[11] - a[2] * b[2] + a[2] * b[12] + a[3] * b[7],
a[0] * b[1] - a[0] * b[11] + a[1] * b[0] - a[1] * b[10] - a[2] * b[3] + a[2] * b[13] + a[3] * b[8],
a[0] * b[2] - a[0] * b[12] + a[1] * b[3] - a[1] * b[13] + a[2] * b[0] - a[2] * b[10] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[3] * b[1],
a[0] * b[6] - a[2] * b[4] + a[3] * b[2],
a[1] * b[6] - a[2] * b[5] + a[3] * b[3],
a[0] * b[3] - a[0] * b[13] - a[1] * b[2] + a[1] * b[12] + a[2] * b[1] - a[2] * b[11]
);
}			
		 
inline Mtt gp (const Flp& a, const Rvd& b) { 
	return Mtt (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[8],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] + a[3] * b[9],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[10],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[3] * b[6],
a[0] * b[0] - a[0] * b[7] - a[1] * b[1] + a[1] * b[8] - a[2] * b[2] + a[2] * b[9],
a[0] * b[1] - a[0] * b[8] + a[1] * b[0] - a[1] * b[7] - a[2] * b[3] + a[2] * b[10],
a[0] * b[2] - a[0] * b[9] + a[1] * b[3] - a[1] * b[10] + a[2] * b[0] - a[2] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[1],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] + a[3] * b[2],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3],
 - a[3] * b[11],
a[0] * b[3] - a[0] * b[10] - a[1] * b[2] + a[1] * b[9] + a[2] * b[1] - a[2] * b[8]
);
}			
		 
inline Mtt gp (const Flp& a, const Tst& b) { 
	return Mtt (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[11],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] + a[3] * b[12],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[13],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[3] * b[6],
a[0] * b[0] - a[0] * b[10] - a[1] * b[1] + a[1] * b[11] - a[2] * b[2] + a[2] * b[12] + a[3] * b[7],
a[0] * b[1] - a[0] * b[11] + a[1] * b[0] - a[1] * b[10] - a[2] * b[3] + a[2] * b[13] + a[3] * b[8],
a[0] * b[2] - a[0] * b[12] + a[1] * b[3] - a[1] * b[13] + a[2] * b[0] - a[2] * b[10] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[1],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] + a[3] * b[2],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3],
 - a[3] * b[14],
a[0] * b[3] - a[0] * b[13] - a[1] * b[2] + a[1] * b[12] + a[2] * b[1] - a[2] * b[11]
);
}			
		 
inline Tvt gp (const Flp& a, const Tvt& b) { 
	return Tvt (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[10],
a[0] * b[5] - a[1] * b[4] + a[3] * b[11],
a[0] * b[6] - a[2] * b[4] + a[3] * b[12],
a[1] * b[6] - a[2] * b[5] + a[3] * b[13],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[3] * b[6],
a[0] * b[0] - a[0] * b[10] - a[1] * b[1] + a[1] * b[11] - a[2] * b[2] + a[2] * b[12] + a[3] * b[7],
a[0] * b[1] - a[0] * b[11] + a[1] * b[0] - a[1] * b[10] - a[2] * b[3] + a[2] * b[13] + a[3] * b[8],
a[0] * b[2] - a[0] * b[12] + a[1] * b[3] - a[1] * b[13] + a[2] * b[0] - a[2] * b[10] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[3] * b[1],
a[0] * b[6] - a[2] * b[4] + a[3] * b[2],
a[1] * b[6] - a[2] * b[5] + a[3] * b[3],
a[0] * b[3] - a[0] * b[13] - a[1] * b[2] + a[1] * b[12] + a[2] * b[1] - a[2] * b[11] + a[3] * b[14]
);
}			
		 
inline Flp op (const Flp& a, const Sca& b) { 
	return Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Mnk_Vec op (const Flp& a, const Ori& b) { 
	return Mnk_Vec (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Sca op (const Flp& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Flp& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Mnk_Vec op (const Flp& a, const Hyp& b) { 
	return Mnk_Vec (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Sca op (const Flp& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Lin op (const Flp& a, const Pnt& b) { 
	return Lin (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] + a[3] * b[2]
);
}			
		 
inline Pln op (const Flp& a, const Par& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Flp& a, const Cir& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[9]
);
}			
		 
inline Sca op (const Flp& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Pln op (const Flp& a, const Sta& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Flp& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Flp& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Flp& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Mnk_Biv op (const Flp& a, const Tnv& b) { 
	return Mnk_Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Pss op (const Flp& a, const Tnb& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Sca op (const Flp& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Flp& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Flp& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Flp& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Pln op (const Flp& a, const Dll& b) { 
	return Pln (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Lin op (const Flp& a, const Dlp& b) { 
	return Lin (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
inline Lin op (const Flp& a, const Vec& b) { 
	return Lin (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
inline Pln op (const Flp& a, const Biv& b) { 
	return Pln (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Flp& a, const Tri& b) { 
	return Pss (
a[3] * b[0]
);
}			
		 
inline Lin op (const Flp& a, const Aff& b) { 
	return Lin (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] + a[3] * b[2]
);
}			
		 
inline Pln op (const Flp& a, const Afl& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Flp& a, const Afp& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Sca ip (const Flp& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Flp& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Flp& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Flp& a, const Mnk& b) { 
	return Sca (
a[3] * b[0]
);
}			
		 
inline Sca ip (const Flp& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Pss_Flp ip (const Flp& a, const Pss& b) { 
	return Pss_Flp (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Sca ip (const Flp& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Flp& a, const Par& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[3] * b[9]
);
}			
		 
inline Dlp ip (const Flp& a, const Cir& b) { 
	return Dlp (
a[1] * b[0] + a[2] * b[1] + a[3] * b[6],
 - a[0] * b[0] + a[2] * b[2] + a[3] * b[7],
 - a[0] * b[1] - a[1] * b[2] + a[3] * b[8],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
inline Dll ip (const Flp& a, const Sph& b) { 
	return Dll (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
inline Sca ip (const Flp& a, const Sta& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Sca ip (const Flp& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Flp& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Flp& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Flp& a, const Tnv& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Vec ip (const Flp& a, const Tnb& b) { 
	return Vec (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
inline Biv ip (const Flp& a, const Tnt& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Dlp ip (const Flp& a, const Lin& b) { 
	return Dlp (
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Dll ip (const Flp& a, const Pln& b) { 
	return Dll (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
inline Sca ip (const Flp& a, const Flp& b) { 
	return Sca (
a[3] * b[3]
);
}			
		 
inline Sca ip (const Flp& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Flp& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Flp& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Flp& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Flp& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Flp& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Flp& a, const Afl& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Vec ip (const Flp& a, const Afp& b) { 
	return Vec (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		  	
inline Flp sp (const Flp& flp, const Rot& rot) {					
					
const Rot& t1 = rot;
const Flp& t2 = flp;
Lin_Dlp t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Flp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1],
t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Mot& mot) {					
					
const Mot& t1 = mot;
const Flp& t2 = flp;
Lin_Dlp t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[3],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[7] * t2[3]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Flp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[4] + t3[4] * t5[5] + t3[5] * t5[6] - t3[6] * t5[7] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[5] - t3[4] * t5[4] + t3[5] * t5[7] + t3[6] * t5[6] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[6] - t3[4] * t5[7] - t3[5] * t5[4] - t3[6] * t5[5] - t3[7] * t5[1],
t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Dil& dil) {					
					
const Dil& t1 = dil;
const Flp& t2 = flp;
Tsd t3 (
t1[1] * t2[3],
t1[0] * t2[0] + t1[1] * t2[0],
t1[0] * t2[1] + t1[1] * t2[1],
t1[0] * t2[2] + t1[1] * t2[2],
t1[0] * t2[3]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Flp (
t3[1] * t5[0] - t3[1] * t5[1],
t3[2] * t5[0] - t3[2] * t5[1],
t3[3] * t5[0] - t3[3] * t5[1],
t3[0] * t5[1] + t3[4] * t5[0]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Trv& trv) {					
					
const Trv& t1 = trv;
const Flp& t2 = flp;
Trt t3 (
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Flp (
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0],
t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Flp& t2 = flp;
Mtd t3 (
t1[7] * t2[3],
t1[8] * t2[3],
t1[9] * t2[3],
t1[10] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3] + t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3] + t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[0] * t2[3],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0] - t1[11] * t2[3]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Flp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] - t3[4] * t5[7] - t3[5] * t5[1] + t3[5] * t5[8] - t3[6] * t5[2] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[11] - t3[11] * t5[3] + t3[11] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] - t3[4] * t5[8] + t3[5] * t5[0] - t3[5] * t5[7] - t3[6] * t5[3] + t3[6] * t5[10] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[6] + t3[11] * t5[2] - t3[11] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] - t3[4] * t5[9] + t3[5] * t5[3] - t3[5] * t5[10] + t3[6] * t5[0] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] - t3[10] * t5[5] - t3[11] * t5[1] + t3[11] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Trs& trs) {					
					
const Trs& t1 = trs;
const Flp& t2 = flp;
Flp t3 (
t1[0] * t2[0] - t1[1] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] - t1[3] * t2[3],
t1[0] * t2[3]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Flp (
t3[0] * t5[0] + t3[3] * t5[1],
t3[1] * t5[0] + t3[3] * t5[2],
t3[2] * t5[0] + t3[3] * t5[3],
t3[3] * t5[0]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Flp& t2 = flp;
Rtc t3 (
t1[3] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2] + t1[11] * t2[3],
t1[3] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2] + t1[12] * t2[3],
t1[3] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1] + t1[13] * t2[3],
t1[3] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[5] * t2[3],
t1[6] * t2[3],
t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] - t1[8] * t2[3] + t1[11] * t2[1] - t1[12] * t2[0] + t1[14] * t2[2] + t1[15] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[9] * t2[3] + t1[11] * t2[2] - t1[13] * t2[0] - t1[14] * t2[1] - t1[15] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] - t1[10] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1] + t1[14] * t2[0] + t1[15] * t2[0],
t1[0] * t2[3] - t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3] - t1[3] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
t1[2] * t2[3] - t1[3] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0] + t1[15] * t2[3],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0] + t1[14] * t2[3]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Flp (
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[4] * t5[0] + t3[4] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[14] - t3[10] * t5[15] + t3[11] * t5[4] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[10] - t3[15] * t5[10],
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] - t3[4] * t5[1] + t3[4] * t5[12] + t3[8] * t5[0] - t3[8] * t5[11] - t3[9] * t5[14] + t3[9] * t5[15] - t3[10] * t5[2] + t3[10] * t5[13] + t3[11] * t5[8] + t3[12] * t5[4] - t3[13] * t5[10] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[4] * t5[2] + t3[4] * t5[13] + t3[8] * t5[14] - t3[8] * t5[15] + t3[9] * t5[0] - t3[9] * t5[11] + t3[10] * t5[1] - t3[10] * t5[12] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[4] - t3[14] * t5[8] - t3[15] * t5[8],
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] + t3[3] * t5[4] - t3[4] * t5[3] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[0] + t3[12] * t5[1] + t3[13] * t5[2] - t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Flp& t2 = flp;
Mtt t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2] + t1[10] * t2[3],
t1[4] * t2[1] - t1[5] * t2[0] + t1[11] * t2[3] + t1[14] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] + t1[12] * t2[3] - t1[14] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[13] * t2[3] + t1[14] * t2[0],
t1[4] * t2[3],
t1[5] * t2[3],
t1[6] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
t1[14] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] - t1[15] * t2[3]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Flp (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[15] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[15] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[15] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[15] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Flp& t2 = flp;
Mtt t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0],
t1[4] * t2[3],
t1[5] * t2[3],
t1[6] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
t1[7] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Flp (
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[15] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[15] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[15] * t5[1],
t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[7]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Flp& t2 = flp;
Mtd t3 (
t1[4] * t2[3],
t1[5] * t2[3],
t1[6] * t2[3],
t1[7] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[0] * t2[3],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Flp (
t3[4] * t5[0] - t3[4] * t5[4] - t3[5] * t5[1] + t3[5] * t5[5] - t3[6] * t5[2] + t3[6] * t5[6] - t3[11] * t5[3] + t3[11] * t5[7],
t3[4] * t5[1] - t3[4] * t5[5] + t3[5] * t5[0] - t3[5] * t5[4] - t3[6] * t5[3] + t3[6] * t5[7] + t3[11] * t5[2] - t3[11] * t5[6],
t3[4] * t5[2] - t3[4] * t5[6] + t3[5] * t5[3] - t3[5] * t5[7] + t3[6] * t5[0] - t3[6] * t5[4] - t3[11] * t5[1] + t3[11] * t5[5],
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Flp& t2 = flp;
Trt t3 (
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2] + t1[4] * t2[3],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[0] * t2[0] + t1[4] * t2[0],
t1[0] * t2[1] + t1[4] * t2[1],
t1[0] * t2[2] + t1[4] * t2[2],
t1[0] * t2[3] - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Flp (
t3[7] * t5[0] - t3[7] * t5[4],
t3[8] * t5[0] - t3[8] * t5[4],
t3[9] * t5[0] - t3[9] * t5[4],
t3[0] * t5[4] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Flp& t2 = flp;
Tsd t3 (
t1[4] * t2[3],
t1[0] * t2[0] - t1[1] * t2[3] + t1[4] * t2[0],
t1[0] * t2[1] - t1[2] * t2[3] + t1[4] * t2[1],
t1[0] * t2[2] - t1[3] * t2[3] + t1[4] * t2[2],
t1[0] * t2[3]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Flp (
t3[0] * t5[1] + t3[1] * t5[0] - t3[1] * t5[4] + t3[4] * t5[1],
t3[0] * t5[2] + t3[2] * t5[0] - t3[2] * t5[4] + t3[4] * t5[2],
t3[0] * t5[3] + t3[3] * t5[0] - t3[3] * t5[4] + t3[4] * t5[3],
t3[0] * t5[4] + t3[4] * t5[0]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Trt& trt) {					
					
const Trt& t1 = trt;
const Flp& t2 = flp;
Tvt t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2] + t1[10] * t2[3],
t1[4] * t2[1] - t1[5] * t2[0] + t1[11] * t2[3],
t1[4] * t2[2] - t1[6] * t2[0] + t1[12] * t2[3],
t1[5] * t2[2] - t1[6] * t2[1] + t1[13] * t2[3],
t1[4] * t2[3],
t1[5] * t2[3],
t1[6] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Flp (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[14] * t5[3] + t3[14] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[14] * t5[2] - t3[14] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[1] + t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Flp& t2 = flp;
Mtt t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2] + t1[7] * t2[3],
t1[4] * t2[1] - t1[5] * t2[0] + t1[8] * t2[3] + t1[11] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] + t1[9] * t2[3] - t1[11] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[10] * t2[3] + t1[11] * t2[0],
t1[4] * t2[3],
t1[5] * t2[3],
t1[6] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] + t1[11] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[0],
t1[11] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Flp (
t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[15] * t5[3] + t3[15] * t5[10],
t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[15] * t5[2] - t3[15] * t5[9],
t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] - t3[15] * t5[1] + t3[15] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[11]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Tst& tst) {					
					
const Tst& t1 = tst;
const Flp& t2 = flp;
Mtt t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2] + t1[10] * t2[3],
t1[4] * t2[1] - t1[5] * t2[0] + t1[11] * t2[3] + t1[14] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] + t1[12] * t2[3] - t1[14] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[13] * t2[3] + t1[14] * t2[0],
t1[4] * t2[3],
t1[5] * t2[3],
t1[6] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
t1[14] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Flp (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[14]
);

}
		
	
	  	
inline Flp sp (const Flp& flp, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Flp& t2 = flp;
Tvt t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2] + t1[10] * t2[3],
t1[4] * t2[1] - t1[5] * t2[0] + t1[11] * t2[3],
t1[4] * t2[2] - t1[6] * t2[0] + t1[12] * t2[3],
t1[5] * t2[2] - t1[6] * t2[1] + t1[13] * t2[3],
t1[4] * t2[3],
t1[5] * t2[3],
t1[6] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] - t1[14] * t2[3]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Flp (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[14] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[14] - t3[14] * t5[3] + t3[14] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[14] + t3[13] * t5[9] + t3[14] * t5[2] - t3[14] * t5[12],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[14] - t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[1] + t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
		
	} //vsr::
	#endif
	