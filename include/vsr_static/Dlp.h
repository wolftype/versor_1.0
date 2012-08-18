		#ifndef DLP_H_INCLUDED
		#define DLP_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Dlp gp (const Dlp& a, const Sca& b) { 
	return Dlp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Tvd gp (const Dlp& a, const Ori& b) { 
	return Tvd (
 - a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Drv gp (const Dlp& a, const Inf& b) { 
	return Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Mnk_Dlp gp (const Dlp& a, const Mnk& b) { 
	return Mnk_Dlp (
 - a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Hyp_Pnt gp (const Dlp& a, const Hyp& b) { 
	return Hyp_Pnt (
 - a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
 - a[3] * b[0]
);
}			
		 
inline Pln gp (const Dlp& a, const Pss& b) { 
	return Pln (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Pnt_Pnt gp (const Dlp& a, const Pnt& b) { 
	return Pnt_Pnt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[4] - a[3] * b[0],
a[1] * b[4] - a[3] * b[1],
a[2] * b[4] - a[3] * b[2],
 - a[3] * b[3]
);
}			
		 
inline Pnt_Par gp (const Dlp& a, const Par& b) { 
	return Pnt_Par (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[3] * b[9],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[7] - a[1] * b[6] + a[3] * b[0],
a[0] * b[8] - a[2] * b[6] + a[3] * b[1],
a[1] * b[8] - a[2] * b[7] + a[3] * b[2],
a[0] * b[9] + a[3] * b[3],
a[1] * b[9] + a[3] * b[4],
a[2] * b[9] + a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pnt_Cir gp (const Dlp& a, const Cir& b) { 
	return Pnt_Cir (
a[2] * b[9] - a[3] * b[0],
 - a[1] * b[9] - a[3] * b[1],
a[0] * b[9] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[6],
a[0] * b[3] - a[2] * b[5] + a[3] * b[7],
a[0] * b[4] + a[1] * b[5] + a[3] * b[8],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6] - a[3] * b[0],
a[0] * b[8] - a[2] * b[6] - a[3] * b[1],
a[1] * b[8] - a[2] * b[7] - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[3] * b[9]
);
}			
		 
inline Pnt_Sph gp (const Dlp& a, const Sph& b) { 
	return Pnt_Sph (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[2] * b[4] - a[3] * b[0],
 - a[1] * b[4] - a[3] * b[1],
a[0] * b[4] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Pnt_Par gp (const Dlp& a, const Sta& b) { 
	return Pnt_Par (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[7] - a[1] * b[6] + a[3] * b[0],
a[0] * b[8] - a[2] * b[6] + a[3] * b[1],
a[1] * b[8] - a[2] * b[7] + a[3] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drv_Lin gp (const Dlp& a, const Drv& b) { 
	return Drv_Lin (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Drv_Pln gp (const Dlp& a, const Drb& b) { 
	return Drv_Pln (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drb gp (const Dlp& a, const Drt& b) { 
	return Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Ori_Par gp (const Dlp& a, const Tnv& b) { 
	return Ori_Par (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
inline Ori_Cir gp (const Dlp& a, const Tnb& b) { 
	return Ori_Cir (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Ori_Sph gp (const Dlp& a, const Tnt& b) { 
	return Ori_Sph (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0],
a[3] * b[0]
);
}			
		 
inline Lin_Dlp gp (const Dlp& a, const Lin& b) { 
	return Lin_Dlp (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pln_Dlp gp (const Dlp& a, const Pln& b) { 
	return Pln_Dlp (
a[2] * b[3] - a[3] * b[0],
 - a[1] * b[3] - a[3] * b[1],
a[0] * b[3] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Flp_Dlp gp (const Dlp& a, const Flp& b) { 
	return Flp_Dlp (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
inline Lin_Pln gp (const Dlp& a, const Dll& b) { 
	return Lin_Pln (
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
		 
inline Pln_Pln gp (const Dlp& a, const Dlp& b) { 
	return Pln_Pln (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
inline Pln_Pln gp (const Dlp& a, const Vec& b) { 
	return Pln_Pln (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
inline Dlp_Biv gp (const Dlp& a, const Biv& b) { 
	return Dlp_Biv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mnk_Pln gp (const Dlp& a, const Tri& b) { 
	return Mnk_Pln (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Pnt_Pnt gp (const Dlp& a, const Aff& b) { 
	return Pnt_Pnt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3]
);
}			
		 
inline Pnt_Afl gp (const Dlp& a, const Afl& b) { 
	return Pnt_Afl (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pnt_Afp gp (const Dlp& a, const Afp& b) { 
	return Pnt_Afp (
a[2] * b[3] - a[3] * b[0],
 - a[1] * b[3] - a[3] * b[1],
a[0] * b[3] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[3] * b[3]
);
}			
		 
inline Lin_Pln gp (const Dlp& a, const Rot& b) { 
	return Lin_Pln (
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
		 
inline Lin_Pln gp (const Dlp& a, const Mot& b) { 
	return Lin_Pln (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[1],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Drt_Afp gp (const Dlp& a, const Dil& b) { 
	return Drt_Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] - a[3] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Sph_Afp gp (const Dlp& a, const Trv& b) { 
	return Sph_Afp (
a[0] * b[0] + a[3] * b[1],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] + a[3] * b[3],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[3] * b[0],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3]
);
}			
		 
inline Par_Drb gp (const Dlp& a, const Mtd& b) { 
	return Par_Drb (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] - a[3] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[1] - a[3] * b[8],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] + a[3] * b[2] - a[3] * b[9],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3] - a[3] * b[10],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8]
);
}			
		 
inline Lin_Flp gp (const Dlp& a, const Trs& b) { 
	return Lin_Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2]
);
}			
		 
inline Mtt gp (const Dlp& a, const Rtc& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14] - a[3] * b[5],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0] - a[3] * b[6],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1] - a[3] * b[7],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9] - a[3] * b[0] + a[3] * b[11],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10] - a[3] * b[1] + a[3] * b[12],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4] - a[3] * b[2] + a[3] * b[13],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13] - a[3] * b[3],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15] - a[3] * b[5],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11] - a[3] * b[6],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12] - a[3] * b[7],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] - a[3] * b[14] + a[3] * b[15]
);
}			
		 
inline Rtc gp (const Dlp& a, const Mtt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[0] - a[3] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15] + a[3] * b[1] - a[3] * b[11],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7] + a[3] * b[2] - a[3] * b[12],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8] + a[3] * b[3] - a[3] * b[13],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] + a[3] * b[4],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[5],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] + a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[14],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[14]
);
}			
		 
inline Rtc gp (const Dlp& a, const Rtt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[7],
a[3] * b[7]
);
}			
		 
inline Par_Drb gp (const Dlp& a, const Rtd& b) { 
	return Par_Drb (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[3] * b[0] - a[3] * b[4],
a[3] * b[1] - a[3] * b[5],
a[3] * b[2] - a[3] * b[6],
a[3] * b[3] - a[3] * b[7],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5]
);
}			
		 
inline Sph_Afp gp (const Dlp& a, const Tvd& b) { 
	return Sph_Afp (
a[0] * b[0] + a[3] * b[1],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] + a[3] * b[3],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[3] * b[0] - a[3] * b[4],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[4] + a[3] * b[1],
a[1] * b[4] + a[3] * b[2],
a[2] * b[4] + a[3] * b[3]
);
}			
		 
inline Inf_Par gp (const Dlp& a, const Tsd& b) { 
	return Inf_Par (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0] - a[3] * b[4],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4]
);
}			
		 
inline Rtc gp (const Dlp& a, const Trt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[0] - a[3] * b[10],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7] + a[3] * b[1] - a[3] * b[11],
a[0] * b[9] - a[2] * b[7] + a[3] * b[2] - a[3] * b[12],
a[1] * b[9] - a[2] * b[8] + a[3] * b[3] - a[3] * b[13],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] + a[3] * b[4],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[5],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] + a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
inline Rtc gp (const Dlp& a, const Rvd& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[3] * b[0] - a[3] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
a[3] * b[1] - a[3] * b[8],
a[3] * b[2] - a[3] * b[9],
a[3] * b[3] - a[3] * b[10],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] + a[3] * b[4],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[5],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] + a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[11],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[11]
);
}			
		 
inline Rtc gp (const Dlp& a, const Tst& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[0] - a[3] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7] + a[3] * b[1] - a[3] * b[11],
a[0] * b[9] - a[2] * b[7] + a[3] * b[2] - a[3] * b[12],
a[1] * b[9] - a[2] * b[8] + a[3] * b[3] - a[3] * b[13],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] + a[3] * b[4],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[5],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] + a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[14],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[14]
);
}			
		 
inline Rtc gp (const Dlp& a, const Tvt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[0] - a[3] * b[10],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14] + a[3] * b[1] - a[3] * b[11],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7] + a[3] * b[2] - a[3] * b[12],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8] + a[3] * b[3] - a[3] * b[13],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] + a[3] * b[4],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[5],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] + a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
inline Dlp op (const Dlp& a, const Sca& b) { 
	return Dlp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Pss_Afp op (const Dlp& a, const Ori& b) { 
	return Pss_Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Drv op (const Dlp& a, const Inf& b) { 
	return Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Mnk_Vec op (const Dlp& a, const Mnk& b) { 
	return Mnk_Vec (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Sca op (const Dlp& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Par op (const Dlp& a, const Pnt& b) { 
	return Par (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[4] - a[3] * b[0],
a[1] * b[4] - a[3] * b[1],
a[2] * b[4] - a[3] * b[2],
 - a[3] * b[3]
);
}			
		 
inline Cir op (const Dlp& a, const Par& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[7] - a[1] * b[6] + a[3] * b[0],
a[0] * b[8] - a[2] * b[6] + a[3] * b[1],
a[1] * b[8] - a[2] * b[7] + a[3] * b[2],
a[0] * b[9] + a[3] * b[3],
a[1] * b[9] + a[3] * b[4],
a[2] * b[9] + a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sph op (const Dlp& a, const Cir& b) { 
	return Sph (
a[0] * b[7] - a[1] * b[6] - a[3] * b[0],
a[0] * b[8] - a[2] * b[6] - a[3] * b[1],
a[1] * b[8] - a[2] * b[7] - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[3] * b[9]
);
}			
		 
inline Pss op (const Dlp& a, const Sph& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Cir op (const Dlp& a, const Sta& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[7] - a[1] * b[6] + a[3] * b[0],
a[0] * b[8] - a[2] * b[6] + a[3] * b[1],
a[1] * b[8] - a[2] * b[7] + a[3] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drb op (const Dlp& a, const Drv& b) { 
	return Drb (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Drt op (const Dlp& a, const Drb& b) { 
	return Drt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Dlp& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Pss_Afl op (const Dlp& a, const Tnv& b) { 
	return Pss_Afl (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
inline Pss_Aff op (const Dlp& a, const Tnb& b) { 
	return Pss_Aff (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Dlp& a, const Tnt& b) { 
	return Pss (
a[3] * b[0]
);
}			
		 
inline Pln op (const Dlp& a, const Lin& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Dlp& a, const Pln& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Lin op (const Dlp& a, const Flp& b) { 
	return Lin (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
inline Pss_Flp op (const Dlp& a, const Dll& b) { 
	return Pss_Flp (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Dll op (const Dlp& a, const Dlp& b) { 
	return Dll (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
inline Dll op (const Dlp& a, const Vec& b) { 
	return Dll (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
inline Pss_Flp op (const Dlp& a, const Biv& b) { 
	return Pss_Flp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drt op (const Dlp& a, const Tri& b) { 
	return Drt (
 - a[3] * b[0]
);
}			
		 
inline Par op (const Dlp& a, const Aff& b) { 
	return Par (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3]
);
}			
		 
inline Cir op (const Dlp& a, const Afl& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sph op (const Dlp& a, const Afp& b) { 
	return Sph (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[3] * b[3]
);
}			
		 
inline Sca ip (const Dlp& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dlp& a, const Ori& b) { 
	return Sca (
 - a[3] * b[0]
);
}			
		 
inline Sca ip (const Dlp& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Inf ip (const Dlp& a, const Mnk& b) { 
	return Inf (
 - a[3] * b[0]
);
}			
		 
inline Sca ip (const Dlp& a, const Hyp& b) { 
	return Sca (
 - a[3] * b[0]
);
}			
		 
inline Pln ip (const Dlp& a, const Pss& b) { 
	return Pln (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Sca ip (const Dlp& a, const Pnt& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3]
);
}			
		 
inline Pnt ip (const Dlp& a, const Par& b) { 
	return Pnt (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[3] * b[9]
);
}			
		 
inline Par ip (const Dlp& a, const Cir& b) { 
	return Par (
a[2] * b[9] - a[3] * b[0],
 - a[1] * b[9] - a[3] * b[1],
a[0] * b[9] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[6],
a[0] * b[3] - a[2] * b[5] + a[3] * b[7],
a[0] * b[4] + a[1] * b[5] + a[3] * b[8],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
inline Cir ip (const Dlp& a, const Sph& b) { 
	return Cir (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[2] * b[4] - a[3] * b[0],
 - a[1] * b[4] - a[3] * b[1],
a[0] * b[4] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3]
);
}			
		 
inline Pnt ip (const Dlp& a, const Sta& b) { 
	return Pnt (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
inline Inf ip (const Dlp& a, const Drv& b) { 
	return Inf (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Drv ip (const Dlp& a, const Drb& b) { 
	return Drv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Drb ip (const Dlp& a, const Drt& b) { 
	return Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Aff ip (const Dlp& a, const Tnv& b) { 
	return Aff (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Afl ip (const Dlp& a, const Tnb& b) { 
	return Afl (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Afp ip (const Dlp& a, const Tnt& b) { 
	return Afp (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Flp ip (const Dlp& a, const Lin& b) { 
	return Flp (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Lin ip (const Dlp& a, const Pln& b) { 
	return Lin (
a[2] * b[3] - a[3] * b[0],
 - a[1] * b[3] - a[3] * b[1],
a[0] * b[3] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Inf ip (const Dlp& a, const Flp& b) { 
	return Inf (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3]
);
}			
		 
inline Dlp ip (const Dlp& a, const Dll& b) { 
	return Dlp (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Sca ip (const Dlp& a, const Dlp& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Sca ip (const Dlp& a, const Vec& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Vec ip (const Dlp& a, const Biv& b) { 
	return Vec (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Biv ip (const Dlp& a, const Tri& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Sca ip (const Dlp& a, const Aff& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3]
);
}			
		 
inline Aff ip (const Dlp& a, const Afl& b) { 
	return Aff (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Afl ip (const Dlp& a, const Afp& b) { 
	return Afl (
a[2] * b[3] - a[3] * b[0],
 - a[1] * b[3] - a[3] * b[1],
a[0] * b[3] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		  	
inline Dlp sp (const Dlp& dlp, const Rot& rot) {					
					
const Rot& t1 = rot;
const Dlp& t2 = dlp;
Lin_Pln t3 (
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
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1],
t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Mot& mot) {					
					
const Mot& t1 = mot;
const Dlp& t2 = dlp;
Lin_Pln t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] - t3[7] * t5[7]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Dil& dil) {					
					
const Dil& t1 = dil;
const Dlp& t2 = dlp;
Drt_Afp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] + t1[1] * t2[3],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] + t3[5] * t5[1],
t3[2] * t5[0] + t3[6] * t5[1],
t3[3] * t5[0] - t3[3] * t5[1]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Trv& trv) {					
					
const Trv& t1 = trv;
const Dlp& t2 = dlp;
Sph_Afp t3 (
t1[0] * t2[0] - t1[1] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] - t1[3] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[3],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] + t3[4] * t5[2],
t3[2] * t5[0] + t3[4] * t5[3],
t3[4] * t5[0]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Dlp& t2 = dlp;
Par_Drb t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] + t1[7] * t2[3],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] + t1[8] * t2[3] - t1[11] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] + t1[9] * t2[3] + t1[11] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[10] * t2[3] - t1[11] * t2[0],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[3] - t3[11] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[2] + t3[11] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[1] - t3[11] * t5[8],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] - t3[3] * t5[7] - t3[4] * t5[1] + t3[4] * t5[8] - t3[5] * t5[2] + t3[5] * t5[9] - t3[6] * t5[3] + t3[6] * t5[10] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[11] - t3[11] * t5[11]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Trs& trs) {					
					
const Trs& t1 = trs;
const Dlp& t2 = dlp;
Lin_Flp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Dlp (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Dlp& t2 = dlp;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] - t1[5] * t2[3] + t1[14] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[6] * t2[3] - t1[14] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] - t1[7] * t2[3] + t1[14] * t2[0],
 - t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[3] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[3] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[11] * t2[3],
t1[1] * t2[3] - t1[4] * t2[1] + t1[8] * t2[0] - t1[10] * t2[2] + t1[12] * t2[3],
t1[2] * t2[3] - t1[4] * t2[2] + t1[9] * t2[0] + t1[10] * t2[1] + t1[13] * t2[3],
t1[3] * t2[3] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[5] * t2[3] + t1[11] * t2[1] - t1[12] * t2[0] + t1[15] * t2[2],
t1[6] * t2[3] + t1[11] * t2[2] - t1[13] * t2[0] - t1[15] * t2[1],
t1[7] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1] + t1[15] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
 - t1[8] * t2[2] + t1[9] * t2[1] - t1[10] * t2[0] + t1[14] * t2[3] + t1[15] * t2[3]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[14] - t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[3] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[11] + t3[11] * t5[12] + t3[12] * t5[13] - t3[13] * t5[15] + t3[14] * t5[10] + t3[15] * t5[7],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] + t3[3] * t5[2] - t3[4] * t5[8] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[5] - t3[8] * t5[3] + t3[9] * t5[7] + t3[10] * t5[12] - t3[11] * t5[11] + t3[12] * t5[15] + t3[13] * t5[13] - t3[14] * t5[9] - t3[15] * t5[6],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[1] - t3[4] * t5[9] - t3[5] * t5[10] - t3[6] * t5[4] - t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[13] - t3[11] * t5[15] - t3[12] * t5[11] - t3[13] * t5[12] + t3[14] * t5[8] + t3[15] * t5[5],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] - t3[7] * t5[0] + t3[7] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[4] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] + t3[15] * t5[14] - t3[15] * t5[15]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Dlp& t2 = dlp;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[3] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
t1[1] * t2[3] - t1[7] * t2[1] + t1[8] * t2[0] + t1[11] * t2[3] - t1[15] * t2[2],
t1[2] * t2[3] - t1[7] * t2[2] + t1[9] * t2[0] + t1[12] * t2[3] + t1[15] * t2[1],
t1[3] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[13] * t2[3] - t1[15] * t2[0],
t1[4] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[5] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[6] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[14] * t2[3],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] + t1[14] * t2[3]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[15] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[5] * t5[15] - t3[6] * t5[7] - t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9] - t3[14] * t5[15] - t3[15] * t5[15]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Dlp& t2 = dlp;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[4] * t2[3],
t1[5] * t2[3],
t1[6] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[7] * t2[3],
t1[7] * t2[3]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[4] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[7] - t3[14] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[4] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[10] * t5[6] + t3[14] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[4] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[10] * t5[5] - t3[14] * t5[1],
t3[4] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Dlp& t2 = dlp;
Par_Drb t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] + t1[4] * t2[3],
t1[1] * t2[3] + t1[5] * t2[3],
t1[2] * t2[3] + t1[6] * t2[3],
t1[3] * t2[3] + t1[7] * t2[3],
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[3] - t3[11] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[7] + t3[10] * t5[2] + t3[11] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[7] * t5[6] + t3[8] * t5[7] + t3[9] * t5[4] - t3[10] * t5[1] - t3[11] * t5[5],
t3[3] * t5[0] - t3[3] * t5[4] - t3[4] * t5[1] + t3[4] * t5[5] - t3[5] * t5[2] + t3[5] * t5[6] - t3[6] * t5[3] + t3[6] * t5[7]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Dlp& t2 = dlp;
Sph_Afp t3 (
t1[0] * t2[0] - t1[1] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] - t1[3] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[3] + t1[4] * t2[3],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[1] * t2[3] + t1[4] * t2[0],
t1[2] * t2[3] + t1[4] * t2[1],
t1[3] * t2[3] + t1[4] * t2[2]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] + t3[4] * t5[1] + t3[8] * t5[4],
t3[1] * t5[0] + t3[4] * t5[2] + t3[9] * t5[4],
t3[2] * t5[0] + t3[4] * t5[3] + t3[10] * t5[4],
t3[4] * t5[0] - t3[4] * t5[4]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Dlp& t2 = dlp;
Inf_Par t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0] - t3[3] * t5[4] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Trt& trt) {					
					
const Trt& t1 = trt;
const Dlp& t2 = dlp;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[3] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
t1[1] * t2[3] - t1[7] * t2[1] + t1[8] * t2[0] + t1[11] * t2[3],
t1[2] * t2[3] - t1[7] * t2[2] + t1[9] * t2[0] + t1[12] * t2[3],
t1[3] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[13] * t2[3],
t1[4] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[5] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[6] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Dlp& t2 = dlp;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[3] + t1[7] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[11] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[0],
t1[1] * t2[3] + t1[8] * t2[3],
t1[2] * t2[3] + t1[9] * t2[3],
t1[3] * t2[3] + t1[10] * t2[3],
t1[4] * t2[3] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[5] * t2[3] + t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[6] * t2[3] + t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[3],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0] + t1[11] * t2[3]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[4] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[11] + t3[11] * t5[7] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[3] - t3[15] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[4] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[6] + t3[11] * t5[8] + t3[12] * t5[7] - t3[13] * t5[10] + t3[14] * t5[2] + t3[15] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[4] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[7] - t3[14] * t5[1] - t3[15] * t5[8],
t3[4] * t5[0] - t3[4] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[10] * t5[3] + t3[10] * t5[10]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Tst& tst) {					
					
const Tst& t1 = tst;
const Dlp& t2 = dlp;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[3] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
t1[1] * t2[3] - t1[7] * t2[1] + t1[8] * t2[0] + t1[11] * t2[3],
t1[2] * t2[3] - t1[7] * t2[2] + t1[9] * t2[0] + t1[12] * t2[3],
t1[3] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[13] * t2[3],
t1[4] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[5] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[6] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[14] * t2[3],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] + t1[14] * t2[3]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
inline Dlp sp (const Dlp& dlp, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Dlp& t2 = dlp;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[3] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
t1[1] * t2[3] - t1[7] * t2[1] + t1[8] * t2[0] + t1[11] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] - t1[7] * t2[2] + t1[9] * t2[0] + t1[12] * t2[3] + t1[14] * t2[1],
t1[3] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[13] * t2[3] - t1[14] * t2[0],
t1[4] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[5] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[6] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[14] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[5] * t5[14] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9] - t3[14] * t5[14] - t3[15] * t5[14]
);

}
		
	
		
	} //vsr::
	#endif
	