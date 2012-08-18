		#ifndef HYP_H_INCLUDED
		#define HYP_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Hyp gp (const Hyp& a, const Sca& b) { 
	return Hyp (
a[0] * b[0],
a[1] * b[0]
);
}			
		 
inline Dil gp (const Hyp& a, const Ori& b) { 
	return Dil (
 - a[1] * b[0],
 - a[1] * b[0]
);
}			
		 
inline Dil gp (const Hyp& a, const Inf& b) { 
	return Dil (
 - a[0] * b[0],
a[0] * b[0]
);
}			
		 
inline Hyp gp (const Hyp& a, const Mnk& b) { 
	return Hyp (
a[0] * b[0],
 - a[1] * b[0]
);
}			
		 
inline Dil gp (const Hyp& a, const Hyp& b) { 
	return Dil (
 - a[0] * b[1] - a[1] * b[0],
a[0] * b[1] - a[1] * b[0]
);
}			
		 
inline Hyp_Pss gp (const Hyp& a, const Pss& b) { 
	return Hyp_Pss (
 - a[0] * b[0],
a[1] * b[0]
);
}			
		 
inline Hyp_Pnt gp (const Hyp& a, const Pnt& b) { 
	return Hyp_Pnt (
 - a[0] * b[4] - a[1] * b[3],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
a[0] * b[4] - a[1] * b[3]
);
}			
		 
inline Hyp_Par gp (const Hyp& a, const Par& b) { 
	return Hyp_Par (
a[0] * b[6] + a[1] * b[3],
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9],
 - a[1] * b[9],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
 - a[0] * b[6] + a[1] * b[3],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5]
);
}			
		 
inline Hyp_Cir gp (const Hyp& a, const Cir& b) { 
	return Hyp_Cir (
 - a[0] * b[3] - a[1] * b[0],
 - a[0] * b[4] - a[1] * b[1],
 - a[0] * b[5] - a[1] * b[2],
 - a[0] * b[6],
 - a[0] * b[7],
 - a[0] * b[8],
a[1] * b[6],
a[1] * b[7],
a[1] * b[8],
a[0] * b[3] - a[1] * b[0],
a[0] * b[4] - a[1] * b[1],
a[0] * b[5] - a[1] * b[2],
 - a[0] * b[9],
 - a[1] * b[9]
);
}			
		 
inline Hyp_Sph gp (const Hyp& a, const Sph& b) { 
	return Hyp_Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
a[0] * b[4] + a[1] * b[3],
 - a[0] * b[4] + a[1] * b[3]
);
}			
		 
inline Hyp_Sta gp (const Hyp& a, const Sta& b) { 
	return Hyp_Sta (
a[0] * b[6] + a[1] * b[3],
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
 - a[0] * b[6] + a[1] * b[3],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5]
);
}			
		 
inline Ori_Drv gp (const Hyp& a, const Drv& b) { 
	return Ori_Drv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Ori_Drb gp (const Hyp& a, const Drb& b) { 
	return Ori_Drb (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Ori_Drt gp (const Hyp& a, const Drt& b) { 
	return Ori_Drt (
a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Ori_Drv gp (const Hyp& a, const Tnv& b) { 
	return Ori_Drv (
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
inline Ori_Drb gp (const Hyp& a, const Tnb& b) { 
	return Ori_Drb (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
inline Ori_Drt gp (const Hyp& a, const Tnt& b) { 
	return Ori_Drt (
a[1] * b[0],
a[1] * b[0]
);
}			
		 
inline Hyp_Lin gp (const Hyp& a, const Lin& b) { 
	return Hyp_Lin (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Hyp_Sph gp (const Hyp& a, const Pln& b) { 
	return Hyp_Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
a[0] * b[3],
 - a[0] * b[3]
);
}			
		 
inline Hyp_Flp gp (const Hyp& a, const Flp& b) { 
	return Hyp_Flp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[1] * b[3],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Hyp_Sta gp (const Hyp& a, const Dll& b) { 
	return Hyp_Sta (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5]
);
}			
		 
inline Hyp_Pnt gp (const Hyp& a, const Dlp& b) { 
	return Hyp_Pnt (
 - a[0] * b[3],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
a[0] * b[3]
);
}			
		 
inline Hyp_Vec gp (const Hyp& a, const Vec& b) { 
	return Hyp_Vec (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
inline Hyp_Biv gp (const Hyp& a, const Biv& b) { 
	return Hyp_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
inline Hyp_Pss gp (const Hyp& a, const Tri& b) { 
	return Hyp_Pss (
 - a[0] * b[0],
 - a[1] * b[0]
);
}			
		 
inline Hyp_Pnt gp (const Hyp& a, const Aff& b) { 
	return Hyp_Pnt (
 - a[1] * b[3],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[1] * b[3]
);
}			
		 
inline Hyp_Sta gp (const Hyp& a, const Afl& b) { 
	return Hyp_Sta (
a[1] * b[3],
a[1] * b[4],
a[1] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5]
);
}			
		 
inline Hyp_Afp gp (const Hyp& a, const Afp& b) { 
	return Hyp_Afp (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[0] * b[3],
 - a[1] * b[3]
);
}			
		 
inline Pss_Hyp_Drv_Tnb gp (const Hyp& a, const Rot& b) { 
	return Pss_Hyp_Drv_Tnb (
a[0] * b[0],
a[1] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3]
);
}			
		 
inline Rtc gp (const Hyp& a, const Mot& b) { 
	return Rtc (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0],
a[1] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
a[0] * b[7],
 - a[0] * b[7]
);
}			
		 
inline Hyp gp (const Hyp& a, const Dil& b) { 
	return Hyp (
a[0] * b[0] + a[0] * b[1],
a[1] * b[0] - a[1] * b[1]
);
}			
		 
inline Hyp_Flp gp (const Hyp& a, const Trv& b) { 
	return Hyp_Flp (
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
a[0] * b[0],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3]
);
}			
		 
inline Rtc gp (const Hyp& a, const Mtd& b) { 
	return Rtc (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0] + a[0] * b[7],
a[1] * b[0] - a[1] * b[7],
a[0] * b[1] + a[0] * b[8],
a[0] * b[2] + a[0] * b[9],
a[0] * b[3] + a[0] * b[10],
a[1] * b[1] - a[1] * b[8],
a[1] * b[2] - a[1] * b[9],
a[1] * b[3] - a[1] * b[10],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
a[0] * b[11],
 - a[0] * b[11]
);
}			
		 
inline Hyp_Flp gp (const Hyp& a, const Trs& b) { 
	return Hyp_Flp (
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[0],
a[1] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
inline Mtt gp (const Hyp& a, const Rtc& b) { 
	return Mtt (
 - a[0] * b[4] - a[1] * b[3],
 - a[0] * b[8] - a[1] * b[5],
 - a[0] * b[9] - a[1] * b[6],
 - a[0] * b[10] - a[1] * b[7],
 - a[0] * b[0] - a[0] * b[11],
 - a[0] * b[1] - a[0] * b[12],
 - a[0] * b[2] - a[0] * b[13],
 - a[1] * b[0] + a[1] * b[11],
 - a[1] * b[1] + a[1] * b[12],
 - a[1] * b[2] + a[1] * b[13],
a[0] * b[4] - a[1] * b[3],
a[0] * b[8] - a[1] * b[5],
a[0] * b[9] - a[1] * b[6],
a[0] * b[10] - a[1] * b[7],
 - a[0] * b[14] - a[0] * b[15],
 - a[1] * b[14] + a[1] * b[15]
);
}			
		 
inline Rtc gp (const Hyp& a, const Mtt& b) { 
	return Rtc (
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9] + a[1] * b[6],
a[0] * b[0] + a[0] * b[10],
a[1] * b[0] - a[1] * b[10],
a[0] * b[1] + a[0] * b[11],
a[0] * b[2] + a[0] * b[12],
a[0] * b[3] + a[0] * b[13],
a[1] * b[1] - a[1] * b[11],
a[1] * b[2] - a[1] * b[12],
a[1] * b[3] - a[1] * b[13],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5],
 - a[0] * b[9] + a[1] * b[6],
a[0] * b[15] + a[1] * b[14],
 - a[0] * b[15] + a[1] * b[14]
);
}			
		 
inline Rtc gp (const Hyp& a, const Rtt& b) { 
	return Rtc (
a[1] * b[4],
a[1] * b[5],
a[1] * b[6],
a[0] * b[0],
a[1] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5],
a[1] * b[6],
a[1] * b[7],
a[1] * b[7]
);
}			
		 
inline Pss_Hyp_Drv_Tnb gp (const Hyp& a, const Rtd& b) { 
	return Pss_Hyp_Drv_Tnb (
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] - a[1] * b[4],
a[0] * b[1] + a[0] * b[5],
a[0] * b[2] + a[0] * b[6],
a[0] * b[3] + a[0] * b[7],
a[1] * b[1] - a[1] * b[5],
a[1] * b[2] - a[1] * b[6],
a[1] * b[3] - a[1] * b[7]
);
}			
		 
inline Hyp_Flp gp (const Hyp& a, const Tvd& b) { 
	return Hyp_Flp (
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] - a[1] * b[4],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3]
);
}			
		 
inline Hyp_Flp gp (const Hyp& a, const Tsd& b) { 
	return Hyp_Flp (
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] - a[1] * b[4],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
inline Hyp_Par gp (const Hyp& a, const Trt& b) { 
	return Hyp_Par (
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9] + a[1] * b[6],
a[0] * b[0] + a[0] * b[10],
a[1] * b[0] - a[1] * b[10],
a[0] * b[1] + a[0] * b[11],
a[0] * b[2] + a[0] * b[12],
a[0] * b[3] + a[0] * b[13],
a[1] * b[1] - a[1] * b[11],
a[1] * b[2] - a[1] * b[12],
a[1] * b[3] - a[1] * b[13],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5],
 - a[0] * b[9] + a[1] * b[6]
);
}			
		 
inline Rtc gp (const Hyp& a, const Rvd& b) { 
	return Rtc (
a[1] * b[4],
a[1] * b[5],
a[1] * b[6],
a[0] * b[0] + a[0] * b[7],
a[1] * b[0] - a[1] * b[7],
a[0] * b[1] + a[0] * b[8],
a[0] * b[2] + a[0] * b[9],
a[0] * b[3] + a[0] * b[10],
a[1] * b[1] - a[1] * b[8],
a[1] * b[2] - a[1] * b[9],
a[1] * b[3] - a[1] * b[10],
a[1] * b[4],
a[1] * b[5],
a[1] * b[6],
a[1] * b[11],
a[1] * b[11]
);
}			
		 
inline Rtc gp (const Hyp& a, const Tst& b) { 
	return Rtc (
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9] + a[1] * b[6],
a[0] * b[0] + a[0] * b[10],
a[1] * b[0] - a[1] * b[10],
a[0] * b[1] + a[0] * b[11],
a[0] * b[2] + a[0] * b[12],
a[0] * b[3] + a[0] * b[13],
a[1] * b[1] - a[1] * b[11],
a[1] * b[2] - a[1] * b[12],
a[1] * b[3] - a[1] * b[13],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5],
 - a[0] * b[9] + a[1] * b[6],
a[1] * b[14],
a[1] * b[14]
);
}			
		 
inline Rtc gp (const Hyp& a, const Tvt& b) { 
	return Rtc (
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9] + a[1] * b[6],
a[0] * b[0] + a[0] * b[10],
a[1] * b[0] - a[1] * b[10],
a[0] * b[1] + a[0] * b[11],
a[0] * b[2] + a[0] * b[12],
a[0] * b[3] + a[0] * b[13],
a[1] * b[1] - a[1] * b[11],
a[1] * b[2] - a[1] * b[12],
a[1] * b[3] - a[1] * b[13],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5],
 - a[0] * b[9] + a[1] * b[6],
a[0] * b[14],
 - a[0] * b[14]
);
}			
		 
inline Hyp op (const Hyp& a, const Sca& b) { 
	return Hyp (
a[0] * b[0],
a[1] * b[0]
);
}			
		 
inline Mnk op (const Hyp& a, const Ori& b) { 
	return Mnk (
 - a[1] * b[0]
);
}			
		 
inline Mnk op (const Hyp& a, const Inf& b) { 
	return Mnk (
a[0] * b[0]
);
}			
		 
inline Sca op (const Hyp& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Mnk op (const Hyp& a, const Hyp& b) { 
	return Mnk (
a[0] * b[1] - a[1] * b[0]
);
}			
		 
inline Sca op (const Hyp& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Pss_Sta op (const Hyp& a, const Par& b) { 
	return Pss_Sta (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
 - a[0] * b[6] + a[1] * b[3],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5]
);
}			
		 
inline Sph op (const Hyp& a, const Cir& b) { 
	return Sph (
a[0] * b[3] - a[1] * b[0],
a[0] * b[4] - a[1] * b[1],
a[0] * b[5] - a[1] * b[2],
 - a[0] * b[9],
 - a[1] * b[9]
);
}			
		 
inline Pss op (const Hyp& a, const Sph& b) { 
	return Pss (
 - a[0] * b[4] + a[1] * b[3]
);
}			
		 
inline Pss_Sta op (const Hyp& a, const Sta& b) { 
	return Pss_Sta (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
 - a[0] * b[6] + a[1] * b[3],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5]
);
}			
		 
inline Mnk_Vec op (const Hyp& a, const Drv& b) { 
	return Mnk_Vec (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Mnk_Biv op (const Hyp& a, const Drb& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Pss op (const Hyp& a, const Drt& b) { 
	return Pss (
 - a[0] * b[0]
);
}			
		 
inline Mnk_Vec op (const Hyp& a, const Tnv& b) { 
	return Mnk_Vec (
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
inline Mnk_Biv op (const Hyp& a, const Tnb& b) { 
	return Mnk_Biv (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
inline Pss op (const Hyp& a, const Tnt& b) { 
	return Pss (
a[1] * b[0]
);
}			
		 
inline Mnk_Biv op (const Hyp& a, const Lin& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Pss op (const Hyp& a, const Pln& b) { 
	return Pss (
 - a[0] * b[3]
);
}			
		 
inline Mnk_Vec op (const Hyp& a, const Flp& b) { 
	return Mnk_Vec (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Pss_Sta op (const Hyp& a, const Dll& b) { 
	return Pss_Sta (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5]
);
}			
		 
inline Hyp_Vec op (const Hyp& a, const Vec& b) { 
	return Hyp_Vec (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
inline Hyp_Biv op (const Hyp& a, const Biv& b) { 
	return Hyp_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
inline Hyp_Pss op (const Hyp& a, const Tri& b) { 
	return Hyp_Pss (
 - a[0] * b[0],
 - a[1] * b[0]
);
}			
		 
inline Pss_Sta op (const Hyp& a, const Afl& b) { 
	return Pss_Sta (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5]
);
}			
		 
inline Sph op (const Hyp& a, const Afp& b) { 
	return Sph (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[0] * b[3],
 - a[1] * b[3]
);
}			
		 
inline Sca ip (const Hyp& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Hyp& a, const Ori& b) { 
	return Sca (
 - a[1] * b[0]
);
}			
		 
inline Sca ip (const Hyp& a, const Inf& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
inline Hyp ip (const Hyp& a, const Mnk& b) { 
	return Hyp (
a[0] * b[0],
 - a[1] * b[0]
);
}			
		 
inline Sca ip (const Hyp& a, const Hyp& b) { 
	return Sca (
 - a[0] * b[1] - a[1] * b[0]
);
}			
		 
inline Hyp_Pss ip (const Hyp& a, const Pss& b) { 
	return Hyp_Pss (
 - a[0] * b[0],
a[1] * b[0]
);
}			
		 
inline Sca ip (const Hyp& a, const Pnt& b) { 
	return Sca (
 - a[0] * b[4] - a[1] * b[3]
);
}			
		 
inline Pnt ip (const Hyp& a, const Par& b) { 
	return Pnt (
a[0] * b[6] + a[1] * b[3],
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9],
 - a[1] * b[9]
);
}			
		 
inline Sta ip (const Hyp& a, const Cir& b) { 
	return Sta (
 - a[0] * b[3] - a[1] * b[0],
 - a[0] * b[4] - a[1] * b[1],
 - a[0] * b[5] - a[1] * b[2],
 - a[0] * b[6],
 - a[0] * b[7],
 - a[0] * b[8],
a[1] * b[6],
a[1] * b[7],
a[1] * b[8]
);
}			
		 
inline Vec ip (const Hyp& a, const Sta& b) { 
	return Vec (
a[0] * b[6] + a[1] * b[3],
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5]
);
}			
		 
inline Vec ip (const Hyp& a, const Drv& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Biv ip (const Hyp& a, const Drb& b) { 
	return Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Tri ip (const Hyp& a, const Drt& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
inline Vec ip (const Hyp& a, const Tnv& b) { 
	return Vec (
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
inline Biv ip (const Hyp& a, const Tnb& b) { 
	return Biv (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
inline Tri ip (const Hyp& a, const Tnt& b) { 
	return Tri (
a[1] * b[0]
);
}			
		 
inline Sta ip (const Hyp& a, const Lin& b) { 
	return Sta (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5]
);
}			
		 
inline Pnt ip (const Hyp& a, const Flp& b) { 
	return Pnt (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[1] * b[3]
);
}			
		 
inline Vec ip (const Hyp& a, const Dll& b) { 
	return Vec (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Sca ip (const Hyp& a, const Dlp& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
inline Sca ip (const Hyp& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Hyp& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Hyp& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Hyp& a, const Aff& b) { 
	return Sca (
 - a[1] * b[3]
);
}			
		 
inline Vec ip (const Hyp& a, const Afl& b) { 
	return Vec (
a[1] * b[3],
a[1] * b[4],
a[1] * b[5]
);
}			
		 
inline Biv ip (const Hyp& a, const Afp& b) { 
	return Biv (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		  	
inline Hyp sp (const Hyp& hyp, const Rot& rot) {					
					
const Rot& t1 = rot;
const Hyp& t2 = hyp;
Pss_Hyp_Drv_Tnb t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[1] * t2[1],
t1[2] * t2[1],
t1[3] * t2[1]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Hyp (
t3[0] * t5[0] - t3[2] * t5[1] - t3[3] * t5[2] - t3[4] * t5[3],
t3[1] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Mot& mot) {					
					
const Mot& t1 = mot;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0],
t1[0] * t2[1],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[1] * t2[1],
t1[2] * t2[1],
t1[3] * t2[1],
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
 - t1[7] * t2[0],
 - t1[7] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Hyp (
t3[3] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3] + t3[11] * t5[4] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] - t3[15] * t5[7]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Dil& dil) {					
					
const Dil& t1 = dil;
const Hyp& t2 = hyp;
Hyp t3 (
t1[0] * t2[0] - t1[1] * t2[0],
t1[0] * t2[1] + t1[1] * t2[1]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Hyp (
t3[0] * t5[0] + t3[0] * t5[1],
t3[1] * t5[0] - t3[1] * t5[1]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Trv& trv) {					
					
const Trv& t1 = trv;
const Hyp& t2 = hyp;
Hyp_Flp t3 (
 - t1[1] * t2[1],
 - t1[2] * t2[1],
 - t1[3] * t2[1],
t1[0] * t2[0],
t1[0] * t2[1],
t1[1] * t2[1],
t1[2] * t2[1],
t1[3] * t2[1]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Hyp (
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[0]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0] - t1[7] * t2[0],
t1[0] * t2[1] + t1[7] * t2[1],
t1[1] * t2[0] - t1[8] * t2[0],
t1[2] * t2[0] - t1[9] * t2[0],
t1[3] * t2[0] - t1[10] * t2[0],
t1[1] * t2[1] + t1[8] * t2[1],
t1[2] * t2[1] + t1[9] * t2[1],
t1[3] * t2[1] + t1[10] * t2[1],
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
 - t1[11] * t2[0],
 - t1[11] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Hyp (
t3[3] * t5[0] + t3[3] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[3] - t3[7] * t5[10],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] - t3[4] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[10] * t5[3] + t3[10] * t5[10] + t3[11] * t5[4] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[11] - t3[15] * t5[11]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Trs& trs) {					
					
const Trs& t1 = trs;
const Hyp& t2 = hyp;
Hyp_Flp t3 (
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0],
t1[0] * t2[0],
t1[0] * t2[1],
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Hyp (
t3[3] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] + t3[5] * t5[1] + t3[6] * t5[2] + t3[7] * t5[3]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Hyp& t2 = hyp;
Mtt t3 (
 - t1[3] * t2[1] - t1[4] * t2[0],
 - t1[5] * t2[1] - t1[8] * t2[0],
 - t1[6] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[1] - t1[10] * t2[0],
t1[0] * t2[0] - t1[11] * t2[0],
t1[1] * t2[0] - t1[12] * t2[0],
t1[2] * t2[0] - t1[13] * t2[0],
t1[0] * t2[1] + t1[11] * t2[1],
t1[1] * t2[1] + t1[12] * t2[1],
t1[2] * t2[1] + t1[13] * t2[1],
t1[3] * t2[1] - t1[4] * t2[0],
t1[5] * t2[1] - t1[8] * t2[0],
t1[6] * t2[1] - t1[9] * t2[0],
t1[7] * t2[1] - t1[10] * t2[0],
t1[14] * t2[0] - t1[15] * t2[0],
t1[14] * t2[1] + t1[15] * t2[1]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Hyp (
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] - t3[4] * t5[0] - t3[4] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] - t3[10] * t5[3] + t3[11] * t5[5] + t3[12] * t5[6] + t3[13] * t5[7] + t3[14] * t5[14] + t3[14] * t5[15],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] - t3[7] * t5[0] + t3[7] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[4] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] + t3[15] * t5[14] - t3[15] * t5[15]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[1] - t1[7] * t2[0],
 - t1[5] * t2[1] - t1[8] * t2[0],
 - t1[6] * t2[1] - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[0] * t2[1] + t1[10] * t2[1],
t1[1] * t2[0] - t1[11] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
t1[3] * t2[0] - t1[13] * t2[0],
t1[1] * t2[1] + t1[11] * t2[1],
t1[2] * t2[1] + t1[12] * t2[1],
t1[3] * t2[1] + t1[13] * t2[1],
t1[4] * t2[1] - t1[7] * t2[0],
t1[5] * t2[1] - t1[8] * t2[0],
t1[6] * t2[1] - t1[9] * t2[0],
 - t1[14] * t2[1] - t1[15] * t2[0],
t1[14] * t2[1] - t1[15] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[14] + t3[15] * t5[14],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9] - t3[14] * t5[15] - t3[15] * t5[15]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[1],
 - t1[5] * t2[1],
 - t1[6] * t2[1],
t1[0] * t2[0],
t1[0] * t2[1],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[1] * t2[1],
t1[2] * t2[1],
t1[3] * t2[1],
t1[4] * t2[1],
t1[5] * t2[1],
t1[6] * t2[1],
 - t1[7] * t2[1],
t1[7] * t2[1]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[4] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Hyp& t2 = hyp;
Pss_Hyp_Drv_Tnb t3 (
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] + t1[4] * t2[1],
t1[1] * t2[0] - t1[5] * t2[0],
t1[2] * t2[0] - t1[6] * t2[0],
t1[3] * t2[0] - t1[7] * t2[0],
t1[1] * t2[1] + t1[5] * t2[1],
t1[2] * t2[1] + t1[6] * t2[1],
t1[3] * t2[1] + t1[7] * t2[1]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Hyp (
t3[0] * t5[0] + t3[0] * t5[4] - t3[2] * t5[1] - t3[2] * t5[5] - t3[3] * t5[2] - t3[3] * t5[6] - t3[4] * t5[3] - t3[4] * t5[7],
t3[1] * t5[0] - t3[1] * t5[4] - t3[5] * t5[1] + t3[5] * t5[5] - t3[6] * t5[2] + t3[6] * t5[6] - t3[7] * t5[3] + t3[7] * t5[7]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Hyp& t2 = hyp;
Hyp_Flp t3 (
 - t1[1] * t2[1],
 - t1[2] * t2[1],
 - t1[3] * t2[1],
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] + t1[4] * t2[1],
t1[1] * t2[1],
t1[2] * t2[1],
t1[3] * t2[1]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Hyp (
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0] + t3[3] * t5[4] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[0] - t3[4] * t5[4]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Hyp& t2 = hyp;
Hyp_Flp t3 (
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0],
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] + t1[4] * t2[1],
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Hyp (
t3[3] * t5[0] + t3[3] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] - t3[4] * t5[4] + t3[5] * t5[1] + t3[6] * t5[2] + t3[7] * t5[3]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Trt& trt) {					
					
const Trt& t1 = trt;
const Hyp& t2 = hyp;
Hyp_Par t3 (
 - t1[4] * t2[1] - t1[7] * t2[0],
 - t1[5] * t2[1] - t1[8] * t2[0],
 - t1[6] * t2[1] - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[0] * t2[1] + t1[10] * t2[1],
t1[1] * t2[0] - t1[11] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
t1[3] * t2[0] - t1[13] * t2[0],
t1[1] * t2[1] + t1[11] * t2[1],
t1[2] * t2[1] + t1[12] * t2[1],
t1[3] * t2[1] + t1[13] * t2[1],
t1[4] * t2[1] - t1[7] * t2[0],
t1[5] * t2[1] - t1[8] * t2[0],
t1[6] * t2[1] - t1[9] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[1],
 - t1[5] * t2[1],
 - t1[6] * t2[1],
t1[0] * t2[0] - t1[7] * t2[0],
t1[0] * t2[1] + t1[7] * t2[1],
t1[1] * t2[0] - t1[8] * t2[0],
t1[2] * t2[0] - t1[9] * t2[0],
t1[3] * t2[0] - t1[10] * t2[0],
t1[1] * t2[1] + t1[8] * t2[1],
t1[2] * t2[1] + t1[9] * t2[1],
t1[3] * t2[1] + t1[10] * t2[1],
t1[4] * t2[1],
t1[5] * t2[1],
t1[6] * t2[1],
 - t1[11] * t2[1],
t1[11] * t2[1]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[3] - t3[7] * t5[10] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[11] + t3[15] * t5[11],
t3[4] * t5[0] - t3[4] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[10] * t5[3] + t3[10] * t5[10]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Tst& tst) {					
					
const Tst& t1 = tst;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[1] - t1[7] * t2[0],
 - t1[5] * t2[1] - t1[8] * t2[0],
 - t1[6] * t2[1] - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[0] * t2[1] + t1[10] * t2[1],
t1[1] * t2[0] - t1[11] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
t1[3] * t2[0] - t1[13] * t2[0],
t1[1] * t2[1] + t1[11] * t2[1],
t1[2] * t2[1] + t1[12] * t2[1],
t1[3] * t2[1] + t1[13] * t2[1],
t1[4] * t2[1] - t1[7] * t2[0],
t1[5] * t2[1] - t1[8] * t2[0],
t1[6] * t2[1] - t1[9] * t2[0],
 - t1[14] * t2[1],
t1[14] * t2[1]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[14] + t3[15] * t5[14],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
inline Hyp sp (const Hyp& hyp, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[1] - t1[7] * t2[0],
 - t1[5] * t2[1] - t1[8] * t2[0],
 - t1[6] * t2[1] - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[0] * t2[1] + t1[10] * t2[1],
t1[1] * t2[0] - t1[11] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
t1[3] * t2[0] - t1[13] * t2[0],
t1[1] * t2[1] + t1[11] * t2[1],
t1[2] * t2[1] + t1[12] * t2[1],
t1[3] * t2[1] + t1[13] * t2[1],
t1[4] * t2[1] - t1[7] * t2[0],
t1[5] * t2[1] - t1[8] * t2[0],
t1[6] * t2[1] - t1[9] * t2[0],
 - t1[14] * t2[0],
 - t1[14] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9] - t3[14] * t5[14] - t3[15] * t5[14]
);

}
		
	
		
	} //vsr::
	#endif
	