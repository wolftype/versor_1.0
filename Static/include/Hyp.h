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
		 
inline Hyp_Dfp gp (const Hyp& a, const Dfp& b) { 
	return Hyp_Dfp (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[3],
 - a[1] * b[3]
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
		 
inline Hyp_Dfp gp (const Hyp& a, const Afp& b) { 
	return Hyp_Dfp (
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
		 
inline Hyp_Flp gp (const Hyp& a, const Dap& b) { 
	return Hyp_Flp (
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
a[0] * b[3],
 - a[1] * b[3],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
inline Hyp_Sph gp (const Hyp& a, const Daf& b) { 
	return Hyp_Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
a[1] * b[3],
a[1] * b[3]
);
}			
		 
inline Hyp_Lin gp (const Hyp& a, const Dal& b) { 
	return Hyp_Lin (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
inline Hyp_Vec gp (const Hyp& a, const Mnv& b) { 
	return Hyp_Vec (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
inline Hyp_Vec_Mnv gp (const Hyp& a, const Rot& b) { 
	return Hyp_Vec_Mnv (
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
		 
inline Hyp_Vec_Mnv gp (const Hyp& a, const Rtd& b) { 
	return Hyp_Vec_Mnv (
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
		 
inline Hyp_Par gp (const Hyp& a, const Bst& b) { 
	return Hyp_Par (
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9] + a[1] * b[6],
a[0] * b[0] + a[0] * b[10],
a[1] * b[0] - a[1] * b[10],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5],
 - a[0] * b[9] + a[1] * b[6]
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
		 
inline Mnv op (const Hyp& a, const Drv& b) { 
	return Mnv (
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
		 
inline Mnv op (const Hyp& a, const Tnv& b) { 
	return Mnv (
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
		 
inline Mnv op (const Hyp& a, const Flp& b) { 
	return Mnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Sph op (const Hyp& a, const Dfp& b) { 
	return Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[3],
 - a[1] * b[3]
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
		 
inline Mnv op (const Hyp& a, const Dap& b) { 
	return Mnv (
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
inline Pss op (const Hyp& a, const Daf& b) { 
	return Pss (
a[1] * b[3]
);
}			
		 
inline Mnk_Biv op (const Hyp& a, const Dal& b) { 
	return Mnk_Biv (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
inline Sca op (const Hyp& a, const Mnv& b) { 
	return Sca (
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
		 
inline Biv ip (const Hyp& a, const Dfp& b) { 
	return Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
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
		 
inline Pnt ip (const Hyp& a, const Dap& b) { 
	return Pnt (
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
a[0] * b[3],
 - a[1] * b[3]
);
}			
		 
inline Sta ip (const Hyp& a, const Dal& b) { 
	return Sta (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5]
);
}			
		 
inline Hyp_Vec ip (const Hyp& a, const Mnv& b) { 
	return Hyp_Vec (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		  	
template<>
inline Hyp sp (const Hyp& hyp, const Rot& rot) {					
					
const Rot& t1 = rot;
const Hyp& t2 = hyp;
Hyp_Vec_Mnv t3 (
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Hyp& t2 = hyp;
Hyp_Vec_Mnv t3 (
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Bst& bst) {					
					
const Bst& t1 = bst;
const Hyp& t2 = hyp;
Hyp_Par t3 (
 - t1[4] * t2[1] - t1[7] * t2[0],
 - t1[5] * t2[1] - t1[8] * t2[0],
 - t1[6] * t2[1] - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[0] * t2[1] + t1[10] * t2[1],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[1] * t2[1],
t1[2] * t2[1],
t1[3] * t2[1],
t1[4] * t2[1] - t1[7] * t2[0],
t1[5] * t2[1] - t1[8] * t2[0],
t1[6] * t2[1] - t1[9] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Vec& vec) {					
					
const Vec& t1 = vec;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Vec t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Hyp (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2],
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Pnt t4 (
 - t1[3] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1],
 - t1[3] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Hyp (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2],
t4[0] * t6[3] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] + t4[7] * t6[3]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Pln& pln) {					
					
const Pln& t1 = pln;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Sph t4 (
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1],
 - t1[3] * t3[0],
 - t1[3] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Hyp (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2],
t4[3] * t6[0] + t4[4] * t6[1] + t4[5] * t6[2] - t4[6] * t6[3] - t4[7] * t6[3]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Dll& dll) {					
					
const Dll& t1 = dll;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Sta t4 (
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1],
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Hyp (
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[6] * t6[0] - t4[7] * t6[1] - t4[8] * t6[2] + t4[9] * t6[3] + t4[10] * t6[4] + t4[11] * t6[5]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Lin& lin) {					
					
const Lin& t1 = lin;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Lin t4 (
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0],
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0],
t1[3] * t3[1],
t1[4] * t3[1],
t1[5] * t3[1],
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Hyp (
 - t4[3] * t6[3] - t4[4] * t6[4] - t4[5] * t6[5],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[6] * t6[3] + t4[7] * t6[4] + t4[8] * t6[5] - t4[9] * t6[0] - t4[10] * t6[1] - t4[11] * t6[2]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Pnt t4 (
 - t1[3] * t3[1] - t1[4] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1],
t1[3] * t3[1] - t1[4] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Hyp (
t4[0] * t6[3] - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] - t4[7] * t6[3],
t4[0] * t6[4] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] + t4[7] * t6[4]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Par& par) {					
					
const Par& t1 = par;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Par t4 (
 - t1[3] * t3[1] - t1[6] * t3[0],
 - t1[4] * t3[1] - t1[7] * t3[0],
 - t1[5] * t3[1] - t1[8] * t3[0],
 - t1[9] * t3[0],
t1[9] * t3[1],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1],
t1[3] * t3[1] - t1[6] * t3[0],
t1[4] * t3[1] - t1[7] * t3[0],
t1[5] * t3[1] - t1[8] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Hyp (
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[3] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[2] - t4[11] * t6[3] - t4[12] * t6[4] - t4[13] * t6[5],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[4] * t6[9] - t4[8] * t6[0] - t4[9] * t6[1] - t4[10] * t6[2] + t4[11] * t6[6] + t4[12] * t6[7] + t4[13] * t6[8]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Cir& cir) {					
					
const Cir& t1 = cir;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Cir t4 (
 - t1[0] * t3[1] - t1[3] * t3[0],
 - t1[1] * t3[1] - t1[4] * t3[0],
 - t1[2] * t3[1] - t1[5] * t3[0],
 - t1[6] * t3[0],
 - t1[7] * t3[0],
 - t1[8] * t3[0],
t1[6] * t3[1],
t1[7] * t3[1],
t1[8] * t3[1],
t1[0] * t3[1] - t1[3] * t3[0],
t1[1] * t3[1] - t1[4] * t3[0],
t1[2] * t3[1] - t1[5] * t3[0],
t1[9] * t3[0],
t1[9] * t3[1]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Hyp (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] - t4[3] * t6[6] - t4[4] * t6[7] - t4[5] * t6[8] + t4[9] * t6[0] + t4[10] * t6[1] + t4[11] * t6[2] + t4[12] * t6[9],
 - t4[0] * t6[3] - t4[1] * t6[4] - t4[2] * t6[5] + t4[6] * t6[6] + t4[7] * t6[7] + t4[8] * t6[8] - t4[9] * t6[3] - t4[10] * t6[4] - t4[11] * t6[5] + t4[13] * t6[9]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Sph& sph) {					
					
const Sph& t1 = sph;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Sph t4 (
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1],
 - t1[3] * t3[1] - t1[4] * t3[0],
t1[3] * t3[1] - t1[4] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Hyp (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] - t4[6] * t6[3] + t4[7] * t6[3],
t4[3] * t6[0] + t4[4] * t6[1] + t4[5] * t6[2] - t4[6] * t6[4] - t4[7] * t6[4]
);

}
		
	
		
	} //vsr::
	#endif
	