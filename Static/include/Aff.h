		#ifndef AFF_H_INCLUDED
		#define AFF_H_INCLUDED
		
		#include "vsr_casts.h"
		
		namespace vsr{
	 
inline Aff gp (const Aff& a, const Sca& b) { 
	return Aff (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Tnv gp (const Aff& a, const Ori& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Tsd gp (const Aff& a, const Inf& b) { 
	return Tsd (
 - a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Mnk_Aff gp (const Aff& a, const Mnk& b) { 
	return Mnk_Aff (
a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Hyp_Pnt gp (const Aff& a, const Hyp& b) { 
	return Hyp_Pnt (
 - a[3] * b[1],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1]
);
}			
		 
inline Daf gp (const Aff& a, const Pss& b) { 
	return Daf (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Bst gp (const Aff& a, const Pnt& b) { 
	return Bst (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[4],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4]
);
}			
		 
inline Pnt_Par gp (const Aff& a, const Par& b) { 
	return Pnt_Par (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[6],
a[0] * b[0] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[2] + a[3] * b[8],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[3] * b[9],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
a[0] * b[9] - a[3] * b[6],
a[1] * b[9] - a[3] * b[7],
a[2] * b[9] - a[3] * b[8],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pnt_Cir gp (const Aff& a, const Cir& b) { 
	return Pnt_Cir (
a[2] * b[9] - a[3] * b[3],
 - a[1] * b[9] - a[3] * b[4],
a[0] * b[9] - a[3] * b[5],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[6],
a[0] * b[0] - a[2] * b[2] - a[3] * b[7],
a[0] * b[1] + a[1] * b[2] - a[3] * b[8],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[3] - a[2] * b[5],
a[0] * b[4] + a[1] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[3],
a[0] * b[8] - a[2] * b[6] + a[3] * b[4],
a[1] * b[8] - a[2] * b[7] + a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Pnt_Sph gp (const Aff& a, const Sph& b) { 
	return Pnt_Sph (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
a[2] * b[4],
 - a[1] * b[4],
a[0] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[4]
);
}			
		 
inline Pnt_Par gp (const Aff& a, const Sta& b) { 
	return Pnt_Par (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[6],
a[0] * b[0] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[2] + a[3] * b[8],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
 - a[3] * b[6],
 - a[3] * b[7],
 - a[3] * b[8],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Inf_Par gp (const Aff& a, const Drv& b) { 
	return Inf_Par (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
inline Inf_Cir gp (const Aff& a, const Drb& b) { 
	return Inf_Cir (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Inf_Sph gp (const Aff& a, const Drt& b) { 
	return Inf_Sph (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Tnv_Vec gp (const Aff& a, const Tnv& b) { 
	return Tnv_Vec (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Tnv_Biv gp (const Aff& a, const Tnb& b) { 
	return Tnv_Biv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Tnb gp (const Aff& a, const Tnt& b) { 
	return Tnb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Pnt_Lin gp (const Aff& a, const Lin& b) { 
	return Pnt_Lin (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
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
		 
inline Pnt_Sph gp (const Aff& a, const Pln& b) { 
	return Pnt_Sph (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
inline Pnt_Flp gp (const Aff& a, const Flp& b) { 
	return Pnt_Flp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
inline Pnt_Dfp gp (const Aff& a, const Dfp& b) { 
	return Pnt_Dfp (
a[2] * b[3] - a[3] * b[0],
 - a[1] * b[3] - a[3] * b[1],
a[0] * b[3] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pnt_Dll gp (const Aff& a, const Dll& b) { 
	return Pnt_Dll (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Bst gp (const Aff& a, const Dlp& b) { 
	return Bst (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3]
);
}			
		 
inline Vec_Aff gp (const Aff& a, const Vec& b) { 
	return Vec_Aff (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
inline Biv_Aff gp (const Aff& a, const Biv& b) { 
	return Biv_Aff (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mnk_Daf gp (const Aff& a, const Tri& b) { 
	return Mnk_Daf (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Vec_Aff gp (const Aff& a, const Aff& b) { 
	return Vec_Aff (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
inline Vec_Afl gp (const Aff& a, const Afl& b) { 
	return Vec_Afl (
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
		 
inline Vec_Afp gp (const Aff& a, const Afp& b) { 
	return Vec_Afp (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
inline Vec_Dap gp (const Aff& a, const Dap& b) { 
	return Vec_Dap (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
inline Vec_Daf gp (const Aff& a, const Daf& b) { 
	return Vec_Daf (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Vec_Dal gp (const Aff& a, const Dal& b) { 
	return Vec_Dal (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[3],
a[0] * b[0] - a[2] * b[2] - a[3] * b[4],
a[0] * b[1] + a[1] * b[2] - a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Biv_Daf gp (const Aff& a, const Mnv& b) { 
	return Biv_Daf (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Vec_Afl gp (const Aff& a, const Rot& b) { 
	return Vec_Afl (
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
		 
inline Rtc gp (const Aff& a, const Mot& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[7],
 - a[3] * b[7]
);
}			
		 
inline Ori_Flp gp (const Aff& a, const Dil& b) { 
	return Ori_Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] + a[3] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Biv_Afp gp (const Aff& a, const Trv& b) { 
	return Biv_Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2]
);
}			
		 
inline Rtc gp (const Aff& a, const Mtd& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[3] * b[0] + a[3] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[3] * b[1] + a[3] * b[8],
a[3] * b[2] + a[3] * b[9],
a[3] * b[3] + a[3] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[4],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] - a[3] * b[5],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[11],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] - a[3] * b[11]
);
}			
		 
inline Pnt_Flp gp (const Aff& a, const Trs& b) { 
	return Pnt_Flp (
a[0] * b[0] + a[3] * b[1],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] + a[3] * b[3],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3]
);
}			
		 
inline Mtt gp (const Aff& a, const Rtc& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[4],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14] - a[3] * b[8],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0] - a[3] * b[9],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1] - a[3] * b[10],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6] - a[3] * b[0] - a[3] * b[11],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7] - a[3] * b[1] - a[3] * b[12],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3] - a[3] * b[2] - a[3] * b[13],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13] + a[3] * b[4],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15] + a[3] * b[8],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11] + a[3] * b[9],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12] + a[3] * b[10],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] - a[3] * b[14] - a[3] * b[15],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8]
);
}			
		 
inline Rtc gp (const Aff& a, const Mtt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[1] + a[3] * b[11],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] + a[3] * b[2] + a[3] * b[12],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[13],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[7],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] - a[3] * b[8],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[9],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[15],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] - a[3] * b[15]
);
}			
		 
inline Vec_Afl gp (const Aff& a, const Rtt& b) { 
	return Vec_Afl (
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
		 
inline Par_Tnb gp (const Aff& a, const Rtd& b) { 
	return Par_Tnb (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[3] * b[0] + a[3] * b[4],
a[3] * b[1] + a[3] * b[5],
a[3] * b[2] + a[3] * b[6],
a[3] * b[3] + a[3] * b[7],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5]
);
}			
		 
inline Ori_Par gp (const Aff& a, const Tvd& b) { 
	return Ori_Par (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0] + a[3] * b[4],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4]
);
}			
		 
inline Pnt_Flp gp (const Aff& a, const Tsd& b) { 
	return Pnt_Flp (
a[0] * b[0] + a[3] * b[1],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] + a[3] * b[3],
a[3] * b[0] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[4] - a[3] * b[1],
a[1] * b[4] - a[3] * b[2],
a[2] * b[4] - a[3] * b[3]
);
}			
		 
inline Rtc gp (const Aff& a, const Trt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[3] * b[1] + a[3] * b[11],
a[0] * b[6] - a[2] * b[4] + a[3] * b[2] + a[3] * b[12],
a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[13],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[7],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] - a[3] * b[8],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[9],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
inline Par_Tnb gp (const Aff& a, const Rvd& b) { 
	return Par_Tnb (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[1] + a[3] * b[8],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] + a[3] * b[2] + a[3] * b[9],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[10],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8]
);
}			
		 
inline Rtc gp (const Aff& a, const Tst& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[1] + a[3] * b[11],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] + a[3] * b[2] + a[3] * b[12],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[13],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[7],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] - a[3] * b[8],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[9],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
inline Rtc gp (const Aff& a, const Tvt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[3] * b[1] + a[3] * b[11],
a[0] * b[6] - a[2] * b[4] + a[3] * b[2] + a[3] * b[12],
a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[13],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[7],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] - a[3] * b[8],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[9],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[14],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] - a[3] * b[14]
);
}			
		 
inline Pnt_Par gp (const Aff& a, const Bst& b) { 
	return Pnt_Par (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[3] * b[1],
a[0] * b[6] - a[2] * b[4] + a[3] * b[2],
a[1] * b[6] - a[2] * b[5] + a[3] * b[3],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[3] * b[7],
a[1] * b[10] - a[3] * b[8],
a[2] * b[10] - a[3] * b[9],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Aff op (const Aff& a, const Sca& b) { 
	return Aff (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Tnv op (const Aff& a, const Ori& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Flp op (const Aff& a, const Inf& b) { 
	return Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Mnv op (const Aff& a, const Mnk& b) { 
	return Mnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Sca op (const Aff& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Par op (const Aff& a, const Pnt& b) { 
	return Par (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4]
);
}			
		 
inline Cir op (const Aff& a, const Par& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
a[0] * b[9] - a[3] * b[6],
a[1] * b[9] - a[3] * b[7],
a[2] * b[9] - a[3] * b[8],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sph op (const Aff& a, const Cir& b) { 
	return Sph (
a[0] * b[7] - a[1] * b[6] + a[3] * b[3],
a[0] * b[8] - a[2] * b[6] + a[3] * b[4],
a[1] * b[8] - a[2] * b[7] + a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Pss op (const Aff& a, const Sph& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[4]
);
}			
		 
inline Cir op (const Aff& a, const Sta& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
 - a[3] * b[6],
 - a[3] * b[7],
 - a[3] * b[8],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Lin op (const Aff& a, const Drv& b) { 
	return Lin (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
inline Pln op (const Aff& a, const Drb& b) { 
	return Pln (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Aff& a, const Drt& b) { 
	return Pss (
 - a[3] * b[0]
);
}			
		 
inline Tnb op (const Aff& a, const Tnv& b) { 
	return Tnb (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Tnt op (const Aff& a, const Tnb& b) { 
	return Tnt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Aff& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Pln op (const Aff& a, const Lin& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Aff& a, const Pln& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
inline Lin op (const Aff& a, const Flp& b) { 
	return Lin (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
inline Sph op (const Aff& a, const Dfp& b) { 
	return Sph (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Cir op (const Aff& a, const Dll& b) { 
	return Cir (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Par op (const Aff& a, const Dlp& b) { 
	return Par (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3]
);
}			
		 
inline Afl op (const Aff& a, const Vec& b) { 
	return Afl (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
inline Afp op (const Aff& a, const Biv& b) { 
	return Afp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Tnt op (const Aff& a, const Tri& b) { 
	return Tnt (
 - a[3] * b[0]
);
}			
		 
inline Afl op (const Aff& a, const Aff& b) { 
	return Afl (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
inline Afp op (const Aff& a, const Afl& b) { 
	return Afp (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Tnt op (const Aff& a, const Afp& b) { 
	return Tnt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
inline Dal op (const Aff& a, const Dap& b) { 
	return Dal (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
inline Pss op (const Aff& a, const Daf& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Daf op (const Aff& a, const Dal& b) { 
	return Daf (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mnk_Biv op (const Aff& a, const Mnv& b) { 
	return Mnk_Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Sca ip (const Aff& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Aff& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Aff& a, const Inf& b) { 
	return Sca (
 - a[3] * b[0]
);
}			
		 
inline Ori ip (const Aff& a, const Mnk& b) { 
	return Ori (
a[3] * b[0]
);
}			
		 
inline Sca ip (const Aff& a, const Hyp& b) { 
	return Sca (
 - a[3] * b[1]
);
}			
		 
inline Daf ip (const Aff& a, const Pss& b) { 
	return Daf (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Sca ip (const Aff& a, const Pnt& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[4]
);
}			
		 
inline Pnt ip (const Aff& a, const Par& b) { 
	return Pnt (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[6],
a[0] * b[0] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[2] + a[3] * b[8],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[3] * b[9],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
inline Par ip (const Aff& a, const Cir& b) { 
	return Par (
a[2] * b[9] - a[3] * b[3],
 - a[1] * b[9] - a[3] * b[4],
a[0] * b[9] - a[3] * b[5],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[6],
a[0] * b[0] - a[2] * b[2] - a[3] * b[7],
a[0] * b[1] + a[1] * b[2] - a[3] * b[8],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[3] - a[2] * b[5],
a[0] * b[4] + a[1] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
inline Cir ip (const Aff& a, const Sph& b) { 
	return Cir (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
a[2] * b[4],
 - a[1] * b[4],
a[0] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[4]
);
}			
		 
inline Pnt ip (const Aff& a, const Sta& b) { 
	return Pnt (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[6],
a[0] * b[0] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[2] + a[3] * b[8],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
inline Dlp ip (const Aff& a, const Drv& b) { 
	return Dlp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Dll ip (const Aff& a, const Drb& b) { 
	return Dll (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Dfp ip (const Aff& a, const Drt& b) { 
	return Dfp (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Ori ip (const Aff& a, const Tnv& b) { 
	return Ori (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Tnv ip (const Aff& a, const Tnb& b) { 
	return Tnv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Tnb ip (const Aff& a, const Tnt& b) { 
	return Tnb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Par ip (const Aff& a, const Lin& b) { 
	return Par (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Cir ip (const Aff& a, const Pln& b) { 
	return Cir (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3]
);
}			
		 
inline Pnt ip (const Aff& a, const Flp& b) { 
	return Pnt (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Dll ip (const Aff& a, const Dfp& b) { 
	return Dll (
a[2] * b[3] - a[3] * b[0],
 - a[1] * b[3] - a[3] * b[1],
a[0] * b[3] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Dlp ip (const Aff& a, const Dll& b) { 
	return Dlp (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Sca ip (const Aff& a, const Dlp& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3]
);
}			
		 
inline Sca ip (const Aff& a, const Vec& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Vec ip (const Aff& a, const Biv& b) { 
	return Vec (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Biv ip (const Aff& a, const Tri& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Sca ip (const Aff& a, const Aff& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Aff ip (const Aff& a, const Afl& b) { 
	return Aff (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Afl ip (const Aff& a, const Afp& b) { 
	return Afl (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Ori ip (const Aff& a, const Dap& b) { 
	return Ori (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3]
);
}			
		 
inline Dal ip (const Aff& a, const Daf& b) { 
	return Dal (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Dap ip (const Aff& a, const Dal& b) { 
	return Dap (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[3],
a[0] * b[0] - a[2] * b[2] - a[3] * b[4],
a[0] * b[1] + a[1] * b[2] - a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Dap ip (const Aff& a, const Mnv& b) { 
	return Dap (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		  	
template<>
inline Aff sp (const Aff& aff, const Rot& rot) {					
					
const Rot& t1 = rot;
const Aff& t2 = aff;
Vec_Afl t3 (
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
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1],
t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Mot& mot) {					
					
const Mot& t1 = mot;
const Aff& t2 = aff;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
 - t1[4] * t2[3],
 - t1[5] * t2[3],
 - t1[6] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[7] * t2[3],
 - t1[7] * t2[3]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] - t3[7] * t5[7] - t3[14] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[5] - t3[5] * t5[4] + t3[6] * t5[7] + t3[7] * t5[6] + t3[14] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[6] - t3[5] * t5[7] - t3[6] * t5[4] - t3[7] * t5[5] - t3[14] * t5[1],
t3[3] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Dil& dil) {					
					
const Dil& t1 = dil;
const Aff& t2 = aff;
Ori_Flp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[3],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Aff (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] + t3[5] * t5[1],
t3[2] * t5[0] + t3[6] * t5[1],
t3[3] * t5[0] + t3[3] * t5[1]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Trv& trv) {					
					
const Trv& t1 = trv;
const Aff& t2 = aff;
Biv_Afp t3 (
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
return Aff (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Aff& t2 = aff;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[3] - t1[7] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3] - t1[8] * t2[3],
t1[2] * t2[3] - t1[9] * t2[3],
t1[3] * t2[3] - t1[10] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[11] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[0],
 - t1[4] * t2[3] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
 - t1[5] * t2[3] + t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
 - t1[6] * t2[3] + t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[3],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0] - t1[11] * t2[3]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] - t3[7] * t5[11] + t3[11] * t5[7] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[3] - t3[15] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[5] - t3[5] * t5[4] + t3[6] * t5[11] + t3[7] * t5[6] + t3[11] * t5[8] + t3[12] * t5[7] - t3[13] * t5[10] + t3[14] * t5[2] + t3[15] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[6] - t3[5] * t5[11] - t3[6] * t5[4] - t3[7] * t5[5] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[7] - t3[14] * t5[1] - t3[15] * t5[8],
t3[3] * t5[0] + t3[3] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[3] - t3[7] * t5[10]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Trs& trs) {					
					
const Trs& t1 = trs;
const Aff& t2 = aff;
Pnt_Flp t3 (
t1[0] * t2[0] - t1[1] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] - t1[3] * t2[3],
t1[0] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
 - t1[1] * t2[3],
 - t1[2] * t2[3],
 - t1[3] * t2[3]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Aff (
t3[0] * t5[0] + t3[3] * t5[1],
t3[1] * t5[0] + t3[3] * t5[2],
t3[2] * t5[0] + t3[3] * t5[3],
t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Aff& t2 = aff;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] - t1[8] * t2[3] + t1[14] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[9] * t2[3] - t1[14] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] - t1[10] * t2[3] + t1[14] * t2[0],
t1[0] * t2[3] - t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[11] * t2[3],
t1[1] * t2[3] - t1[3] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2] - t1[12] * t2[3],
t1[2] * t2[3] - t1[3] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1] - t1[13] * t2[3],
 - t1[4] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
 - t1[4] * t2[1] + t1[8] * t2[0] - t1[10] * t2[2],
 - t1[4] * t2[2] + t1[9] * t2[0] + t1[10] * t2[1],
 - t1[4] * t2[3] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
 - t1[8] * t2[3] + t1[11] * t2[1] - t1[12] * t2[0] + t1[15] * t2[2],
 - t1[9] * t2[3] + t1[11] * t2[2] - t1[13] * t2[0] - t1[15] * t2[1],
 - t1[10] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1] + t1[15] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0] + t1[14] * t2[3] - t1[15] * t2[3],
 - t1[8] * t2[2] + t1[9] * t2[1] - t1[10] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Aff (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[14] - t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[3] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[11] + t3[11] * t5[12] + t3[12] * t5[13] - t3[13] * t5[15] + t3[14] * t5[10] + t3[15] * t5[7],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] + t3[3] * t5[2] - t3[4] * t5[8] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[5] - t3[8] * t5[3] + t3[9] * t5[7] + t3[10] * t5[12] - t3[11] * t5[11] + t3[12] * t5[15] + t3[13] * t5[13] - t3[14] * t5[9] - t3[15] * t5[6],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[1] - t3[4] * t5[9] - t3[5] * t5[10] - t3[6] * t5[4] - t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[13] - t3[11] * t5[15] - t3[12] * t5[11] - t3[13] * t5[12] + t3[14] * t5[8] + t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] - t3[4] * t5[0] - t3[4] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] - t3[10] * t5[3] + t3[11] * t5[5] + t3[12] * t5[6] + t3[13] * t5[7] + t3[14] * t5[14] + t3[14] * t5[15]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Aff& t2 = aff;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[12] * t2[3] + t1[14] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[13] * t2[3] - t1[14] * t2[0],
 - t1[7] * t2[1] + t1[8] * t2[0] - t1[15] * t2[2],
 - t1[7] * t2[2] + t1[9] * t2[0] + t1[15] * t2[1],
 - t1[8] * t2[2] + t1[9] * t2[1] - t1[15] * t2[0],
 - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
 - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
 - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[15] * t2[3],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] - t1[15] * t2[3]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[15] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[5] * t5[15] - t3[6] * t5[7] - t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[14] + t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Aff& t2 = aff;
Vec_Afl t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] - t3[7] * t5[7]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Aff& t2 = aff;
Par_Tnb t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[4] * t2[3],
t1[1] * t2[3] - t1[5] * t2[3],
t1[2] * t2[3] - t1[6] * t2[3],
t1[3] * t2[3] - t1[7] * t2[3],
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[3] - t3[11] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[7] + t3[10] * t5[2] + t3[11] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[7] * t5[6] + t3[8] * t5[7] + t3[9] * t5[4] - t3[10] * t5[1] - t3[11] * t5[5],
t3[3] * t5[0] + t3[3] * t5[4] - t3[4] * t5[1] - t3[4] * t5[5] - t3[5] * t5[2] - t3[5] * t5[6] - t3[6] * t5[3] - t3[6] * t5[7]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Aff& t2 = aff;
Ori_Par t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[3],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Aff (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0] + t3[3] * t5[4] - t3[7] * t5[1] - t3[8] * t5[2] - t3[9] * t5[3]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Aff& t2 = aff;
Pnt_Flp t3 (
t1[0] * t2[0] - t1[1] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] - t1[3] * t2[3],
t1[0] * t2[3] - t1[4] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[0],
 - t1[2] * t2[3] + t1[4] * t2[1],
 - t1[3] * t2[3] + t1[4] * t2[2]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Aff (
t3[0] * t5[0] + t3[3] * t5[1] + t3[8] * t5[4],
t3[1] * t5[0] + t3[3] * t5[2] + t3[9] * t5[4],
t3[2] * t5[0] + t3[3] * t5[3] + t3[10] * t5[4],
t3[3] * t5[0] + t3[3] * t5[4]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Trt& trt) {					
					
const Trt& t1 = trt;
const Aff& t2 = aff;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[3],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[12] * t2[3],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[13] * t2[3],
 - t1[7] * t2[1] + t1[8] * t2[0],
 - t1[7] * t2[2] + t1[9] * t2[0],
 - t1[8] * t2[2] + t1[9] * t2[1],
 - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
 - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
 - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Aff& t2 = aff;
Par_Tnb t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[8] * t2[3] - t1[11] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[9] * t2[3] + t1[11] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[0],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[3] - t3[11] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[2] + t3[11] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[1] - t3[11] * t5[8],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[7] - t3[4] * t5[1] - t3[4] * t5[8] - t3[5] * t5[2] - t3[5] * t5[9] - t3[6] * t5[3] - t3[6] * t5[10] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[11] + t3[11] * t5[11]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Tst& tst) {					
					
const Tst& t1 = tst;
const Aff& t2 = aff;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[12] * t2[3] + t1[14] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[13] * t2[3] - t1[14] * t2[0],
 - t1[7] * t2[1] + t1[8] * t2[0],
 - t1[7] * t2[2] + t1[9] * t2[0],
 - t1[8] * t2[2] + t1[9] * t2[1],
 - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
 - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
 - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[14] + t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Aff& t2 = aff;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[3],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[12] * t2[3],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[13] * t2[3],
 - t1[7] * t2[1] + t1[8] * t2[0] - t1[14] * t2[2],
 - t1[7] * t2[2] + t1[9] * t2[0] + t1[14] * t2[1],
 - t1[8] * t2[2] + t1[9] * t2[1] - t1[14] * t2[0],
 - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
 - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
 - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[14] * t2[3],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] - t1[14] * t2[3]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[14] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[5] * t5[14] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Bst& bst) {					
					
const Bst& t1 = bst;
const Aff& t2 = aff;
Pnt_Par t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1],
 - t1[7] * t2[1] + t1[8] * t2[0],
 - t1[7] * t2[2] + t1[9] * t2[0],
 - t1[8] * t2[2] + t1[9] * t2[1],
 - t1[7] * t2[3] + t1[10] * t2[0],
 - t1[8] * t2[3] + t1[10] * t2[1],
 - t1[9] * t2[3] + t1[10] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[14] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[12] * t5[10] + t3[14] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[13] * t5[10] - t3[14] * t5[1],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Vec& vec) {					
					
const Vec& t1 = vec;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Vec_Aff t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
t1[0] * t3[3],
t1[1] * t3[3],
t1[2] * t3[3]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Aff (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Bst t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2] - t1[3] * t3[3],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
t1[0] * t3[3],
t1[1] * t3[3],
t1[2] * t3[3],
 - t1[3] * t3[0],
 - t1[3] * t3[1],
 - t1[3] * t3[2],
 - t1[3] * t3[3]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Aff (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[4] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2] - t4[5] * t6[3],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1] - t4[6] * t6[3],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Pln& pln) {					
					
const Pln& t1 = pln;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Pnt_Sph t4 (
 - t1[0] * t3[3],
 - t1[1] * t3[3],
 - t1[2] * t3[3],
 - t1[3] * t3[2],
t1[3] * t3[1],
 - t1[3] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[3] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] - t1[3] * t3[3]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Aff (
 - t4[2] * t6[3] - t4[7] * t6[0] - t4[8] * t6[1] - t4[10] * t6[2],
t4[1] * t6[3] + t4[6] * t6[0] - t4[8] * t6[2] + t4[10] * t6[1],
 - t4[0] * t6[3] + t4[6] * t6[1] + t4[7] * t6[2] - t4[10] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Dll& dll) {					
					
const Dll& t1 = dll;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Pnt_Dll t4 (
t1[0] * t3[1] + t1[1] * t3[2] - t1[3] * t3[3],
 - t1[0] * t3[0] + t1[2] * t3[2] - t1[4] * t3[3],
 - t1[1] * t3[0] - t1[2] * t3[1] - t1[5] * t3[3],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
t1[0] * t3[3],
t1[1] * t3[3],
t1[2] * t3[3],
 - t1[3] * t3[1] + t1[4] * t3[0],
 - t1[3] * t3[2] + t1[5] * t3[0],
 - t1[4] * t3[2] + t1[5] * t3[1],
 - t1[3] * t3[3],
 - t1[4] * t3[3],
 - t1[5] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Aff (
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[4] * t6[4] + t4[5] * t6[5] - t4[13] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[4] * t6[3] + t4[6] * t6[5] + t4[13] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[5] * t6[3] - t4[6] * t6[4] - t4[13] * t6[0],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Lin& lin) {					
					
const Lin& t1 = lin;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Pnt_Lin t4 (
 - t1[0] * t3[3],
 - t1[1] * t3[3],
 - t1[2] * t3[3],
 - t1[3] * t3[3],
 - t1[4] * t3[3],
 - t1[5] * t3[3],
 - t1[0] * t3[1] - t1[1] * t3[2],
t1[0] * t3[0] - t1[2] * t3[2],
t1[1] * t3[0] + t1[2] * t3[1],
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
 - t1[0] * t3[3] + t1[3] * t3[1] - t1[4] * t3[0],
 - t1[1] * t3[3] + t1[3] * t3[2] - t1[5] * t3[0],
 - t1[2] * t3[3] + t1[4] * t3[2] - t1[5] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Aff (
t4[4] * t6[0] + t4[5] * t6[1] + t4[9] * t6[3] + t4[10] * t6[4] + t4[11] * t6[5],
 - t4[3] * t6[0] + t4[5] * t6[2] + t4[9] * t6[4] - t4[10] * t6[3] + t4[12] * t6[5],
 - t4[3] * t6[1] - t4[4] * t6[2] + t4[9] * t6[5] - t4[11] * t6[3] - t4[12] * t6[4],
 - t4[3] * t6[3] - t4[4] * t6[4] - t4[5] * t6[5]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Bst t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2] - t1[4] * t3[3],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
t1[0] * t3[3] - t1[3] * t3[0],
t1[1] * t3[3] - t1[3] * t3[1],
t1[2] * t3[3] - t1[3] * t3[2],
 - t1[4] * t3[0],
 - t1[4] * t3[1],
 - t1[4] * t3[2],
 - t1[4] * t3[3]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Aff (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[4] * t6[4] - t4[7] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2] - t4[5] * t6[4] - t4[8] * t6[3],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1] - t4[6] * t6[4] - t4[9] * t6[3],
t4[0] * t6[3] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] - t4[10] * t6[3]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Par& par) {					
					
const Par& t1 = par;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Pnt_Par t4 (
t1[0] * t3[1] + t1[1] * t3[2] - t1[6] * t3[3],
 - t1[0] * t3[0] + t1[2] * t3[2] - t1[7] * t3[3],
 - t1[1] * t3[0] - t1[2] * t3[1] - t1[8] * t3[3],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2] - t1[9] * t3[3],
 - t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2],
t1[0] * t3[3] - t1[3] * t3[1] + t1[4] * t3[0],
t1[1] * t3[3] - t1[3] * t3[2] + t1[5] * t3[0],
t1[2] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1],
 - t1[6] * t3[1] + t1[7] * t3[0],
 - t1[6] * t3[2] + t1[8] * t3[0],
 - t1[7] * t3[2] + t1[8] * t3[1],
 - t1[6] * t3[3] + t1[9] * t3[0],
 - t1[7] * t3[3] + t1[9] * t3[1],
 - t1[8] * t3[3] + t1[9] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Aff (
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[3] * t6[6] + t4[4] * t6[3] + t4[5] * t6[7] + t4[6] * t6[8] + t4[8] * t6[4] + t4[9] * t6[5] + t4[11] * t6[9] - t4[14] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[7] + t4[4] * t6[4] - t4[5] * t6[6] + t4[7] * t6[8] - t4[8] * t6[3] + t4[10] * t6[5] + t4[12] * t6[9] + t4[14] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[3] * t6[8] + t4[4] * t6[5] - t4[6] * t6[6] - t4[7] * t6[7] - t4[9] * t6[3] - t4[10] * t6[4] + t4[13] * t6[9] - t4[14] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[3] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[2] - t4[11] * t6[3] - t4[12] * t6[4] - t4[13] * t6[5]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Cir& cir) {					
					
const Cir& t1 = cir;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Pnt_Cir t4 (
 - t1[3] * t3[3] + t1[9] * t3[2],
 - t1[4] * t3[3] - t1[9] * t3[1],
 - t1[5] * t3[3] + t1[9] * t3[0],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[6] * t3[3],
t1[0] * t3[0] - t1[2] * t3[2] - t1[7] * t3[3],
t1[1] * t3[0] + t1[2] * t3[1] - t1[8] * t3[3],
 - t1[3] * t3[1] - t1[4] * t3[2],
t1[3] * t3[0] - t1[5] * t3[2],
t1[4] * t3[0] + t1[5] * t3[1],
t1[6] * t3[0] + t1[7] * t3[1] + t1[8] * t3[2],
 - t1[3] * t3[3] + t1[6] * t3[1] - t1[7] * t3[0],
 - t1[4] * t3[3] + t1[6] * t3[2] - t1[8] * t3[0],
 - t1[5] * t3[3] + t1[7] * t3[2] - t1[8] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0] + t1[9] * t3[3],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Aff (
 - t4[2] * t6[9] + t4[4] * t6[3] + t4[5] * t6[4] + t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[6] + t4[10] * t6[7] + t4[11] * t6[8] + t4[13] * t6[5] + t4[14] * t6[2],
t4[1] * t6[9] - t4[3] * t6[3] + t4[5] * t6[5] - t4[6] * t6[0] + t4[8] * t6[2] + t4[9] * t6[7] - t4[10] * t6[6] + t4[12] * t6[8] - t4[13] * t6[4] - t4[14] * t6[1],
 - t4[0] * t6[9] - t4[3] * t6[4] - t4[4] * t6[5] - t4[6] * t6[1] - t4[7] * t6[2] + t4[9] * t6[8] - t4[11] * t6[6] - t4[12] * t6[7] + t4[13] * t6[3] + t4[14] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] - t4[3] * t6[6] - t4[4] * t6[7] - t4[5] * t6[8] + t4[10] * t6[0] + t4[11] * t6[1] + t4[12] * t6[2] + t4[13] * t6[9]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Sph& sph) {					
					
const Sph& t1 = sph;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Pnt_Sph t4 (
 - t1[0] * t3[3] - t1[3] * t3[2],
 - t1[1] * t3[3] + t1[3] * t3[1],
 - t1[2] * t3[3] - t1[3] * t3[0],
 - t1[4] * t3[2],
t1[4] * t3[1],
 - t1[4] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[4] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] - t1[4] * t3[3]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Aff (
 - t4[2] * t6[4] - t4[5] * t6[3] - t4[7] * t6[0] - t4[8] * t6[1] - t4[10] * t6[2],
t4[1] * t6[4] + t4[4] * t6[3] + t4[6] * t6[0] - t4[8] * t6[2] + t4[10] * t6[1],
 - t4[0] * t6[4] - t4[3] * t6[3] + t4[6] * t6[1] + t4[7] * t6[2] - t4[10] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] - t4[9] * t6[3] + t4[10] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	