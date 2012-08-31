		#ifndef DAF_H_INCLUDED
		#define DAF_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Daf gp (const Daf& a, const Sca& b) { 
	return Daf (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Tnb gp (const Daf& a, const Ori& b) { 
	return Tnb (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Inf_Sph gp (const Daf& a, const Inf& b) { 
	return Inf_Sph (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[3] * b[0],
a[3] * b[0]
);
}			
		 
inline Mnk_Daf gp (const Daf& a, const Mnk& b) { 
	return Mnk_Daf (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Hyp_Sph gp (const Daf& a, const Hyp& b) { 
	return Hyp_Sph (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
 - a[3] * b[1],
a[3] * b[1]
);
}			
		 
inline Aff gp (const Daf& a, const Pss& b) { 
	return Aff (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Pnt_Sph gp (const Daf& a, const Pnt& b) { 
	return Pnt_Sph (
 - a[0] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] - a[3] * b[0],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[4]
);
}			
		 
inline Pnt_Cir gp (const Daf& a, const Par& b) { 
	return Pnt_Cir (
a[0] * b[9] + a[3] * b[8],
a[1] * b[9] - a[3] * b[7],
a[2] * b[9] + a[3] * b[6],
 - a[0] * b[4] - a[1] * b[5] - a[3] * b[2],
a[0] * b[3] - a[2] * b[5] + a[3] * b[1],
a[1] * b[3] + a[2] * b[4] - a[3] * b[0],
a[0] * b[7] + a[1] * b[8],
 - a[0] * b[6] + a[2] * b[8],
 - a[1] * b[6] - a[2] * b[7],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[8],
a[0] * b[2] - a[2] * b[0] + a[3] * b[7],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[6],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3] + a[3] * b[9],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
inline Pnt_Par gp (const Daf& a, const Cir& b) { 
	return Pnt_Par (
a[0] * b[7] + a[1] * b[8] + a[3] * b[5],
 - a[0] * b[6] + a[2] * b[8] - a[3] * b[4],
 - a[1] * b[6] - a[2] * b[7] + a[3] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[9],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
a[1] * b[2] - a[2] * b[1] - a[3] * b[8],
 - a[0] * b[2] + a[2] * b[0] + a[3] * b[7],
a[0] * b[1] - a[1] * b[0] - a[3] * b[6],
 - a[1] * b[5] + a[2] * b[4],
a[0] * b[5] - a[2] * b[3],
 - a[0] * b[4] + a[1] * b[3],
 - a[2] * b[9] - a[3] * b[5],
a[1] * b[9] + a[3] * b[4],
 - a[0] * b[9] - a[3] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
inline Bst gp (const Daf& a, const Sph& b) { 
	return Bst (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[4],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[2] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] - a[3] * b[0],
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
a[3] * b[4]
);
}			
		 
inline Pnt_Cir gp (const Daf& a, const Sta& b) { 
	return Pnt_Cir (
a[3] * b[8],
 - a[3] * b[7],
a[3] * b[6],
 - a[0] * b[4] - a[1] * b[5] - a[3] * b[2],
a[0] * b[3] - a[2] * b[5] + a[3] * b[1],
a[1] * b[3] + a[2] * b[4] - a[3] * b[0],
a[0] * b[7] + a[1] * b[8],
 - a[0] * b[6] + a[2] * b[8],
 - a[1] * b[6] - a[2] * b[7],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[8],
a[0] * b[2] - a[2] * b[0] + a[3] * b[7],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[6],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
inline Inf_Cir gp (const Daf& a, const Drv& b) { 
	return Inf_Cir (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Inf_Par gp (const Daf& a, const Drb& b) { 
	return Inf_Par (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0]
);
}			
		 
inline Tsd gp (const Daf& a, const Drt& b) { 
	return Tsd (
 - a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Tnv_Biv gp (const Daf& a, const Tnv& b) { 
	return Tnv_Biv (
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Tnv_Vec gp (const Daf& a, const Tnb& b) { 
	return Tnv_Vec (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0]
);
}			
		 
inline Tnv gp (const Daf& a, const Tnt& b) { 
	return Tnv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Pnt_Dll gp (const Daf& a, const Lin& b) { 
	return Pnt_Dll (
a[0] * b[4] + a[1] * b[5] + a[3] * b[2],
 - a[0] * b[3] + a[2] * b[5] - a[3] * b[1],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[5],
a[3] * b[4],
 - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Bst gp (const Daf& a, const Pln& b) { 
	return Bst (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
a[3] * b[3]
);
}			
		 
inline Pnt_Dfp gp (const Daf& a, const Flp& b) { 
	return Pnt_Dfp (
a[0] * b[3] + a[3] * b[2],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] + a[3] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pnt_Flp gp (const Daf& a, const Dfp& b) { 
	return Pnt_Flp (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
a[3] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[2] * b[3] - a[3] * b[2],
a[1] * b[3] + a[3] * b[1],
 - a[0] * b[3] - a[3] * b[0]
);
}			
		 
inline Pnt_Lin gp (const Daf& a, const Dll& b) { 
	return Pnt_Lin (
a[3] * b[5],
 - a[3] * b[4],
a[3] * b[3],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[5],
a[0] * b[2] - a[2] * b[0] + a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Pnt_Sph gp (const Daf& a, const Dlp& b) { 
	return Pnt_Sph (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Vec_Daf gp (const Daf& a, const Vec& b) { 
	return Vec_Daf (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Biv_Daf gp (const Daf& a, const Biv& b) { 
	return Biv_Daf (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Mnk_Aff gp (const Daf& a, const Tri& b) { 
	return Mnk_Aff (
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Vec_Daf gp (const Daf& a, const Aff& b) { 
	return Vec_Daf (
 - a[0] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] - a[3] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Vec_Dal gp (const Daf& a, const Afl& b) { 
	return Vec_Dal (
 - a[0] * b[4] - a[1] * b[5] - a[3] * b[2],
a[0] * b[3] - a[2] * b[5] + a[3] * b[1],
a[1] * b[3] + a[2] * b[4] - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
inline Vec_Dap gp (const Daf& a, const Afp& b) { 
	return Vec_Dap (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3]
);
}			
		 
inline Vec_Afp gp (const Daf& a, const Dap& b) { 
	return Vec_Afp (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Vec_Aff gp (const Daf& a, const Daf& b) { 
	return Vec_Aff (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[2] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] - a[3] * b[0]
);
}			
		 
inline Vec_Afl gp (const Daf& a, const Dal& b) { 
	return Vec_Afl (
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1] - a[3] * b[5],
 - a[0] * b[2] + a[2] * b[0] + a[3] * b[4],
a[0] * b[1] - a[1] * b[0] - a[3] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Biv_Aff gp (const Daf& a, const Mnv& b) { 
	return Biv_Aff (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Vec_Dal gp (const Daf& a, const Rot& b) { 
	return Vec_Dal (
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
		 
inline Mtt gp (const Daf& a, const Mot& b) { 
	return Mtt (
 - a[3] * b[7],
a[3] * b[6],
 - a[3] * b[5],
a[3] * b[4],
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[4],
a[3] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4]
);
}			
		 
inline Ori_Dfp gp (const Daf& a, const Dil& b) { 
	return Ori_Dfp (
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] + a[3] * b[1]
);
}			
		 
inline Biv_Dap gp (const Daf& a, const Trv& b) { 
	return Biv_Dap (
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
inline Mtt gp (const Daf& a, const Mtd& b) { 
	return Mtt (
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[3] * b[11],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9] + a[3] * b[6],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8] - a[3] * b[5],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7] + a[3] * b[4],
 - a[3] * b[3] - a[3] * b[10],
a[3] * b[2] + a[3] * b[9],
 - a[3] * b[1] - a[3] * b[8],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[11],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[4],
a[3] * b[0] + a[3] * b[7],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4]
);
}			
		 
inline Pnt_Dfp gp (const Daf& a, const Trs& b) { 
	return Pnt_Dfp (
a[3] * b[3],
 - a[3] * b[2],
a[3] * b[1],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] - a[3] * b[3],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] - a[3] * b[1],
a[3] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Rtc gp (const Daf& a, const Rtc& b) { 
	return Rtc (
a[0] * b[12] + a[1] * b[13] - a[2] * b[15] + a[3] * b[10],
 - a[0] * b[11] + a[1] * b[15] + a[2] * b[13] - a[3] * b[9],
 - a[0] * b[15] - a[1] * b[11] - a[2] * b[12] + a[3] * b[8],
a[0] * b[5] + a[1] * b[6] + a[2] * b[7] + a[3] * b[14] + a[3] * b[15],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10],
 - a[0] * b[3] + a[1] * b[7] - a[2] * b[6] - a[3] * b[2] - a[3] * b[13],
 - a[0] * b[7] - a[1] * b[3] + a[2] * b[5] + a[3] * b[1] + a[3] * b[12],
a[0] * b[6] - a[1] * b[5] - a[2] * b[3] - a[3] * b[0] - a[3] * b[11],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4],
a[0] * b[1] + a[1] * b[2] - a[2] * b[14] - a[3] * b[10],
 - a[0] * b[0] + a[1] * b[14] + a[2] * b[2] + a[3] * b[9],
 - a[0] * b[14] - a[1] * b[0] - a[2] * b[1] - a[3] * b[8],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] - a[3] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[4]
);
}			
		 
inline Mtt gp (const Daf& a, const Mtt& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[15],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[9],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[8],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[7],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[14] - a[3] * b[3] - a[3] * b[13],
a[0] * b[4] - a[1] * b[14] - a[2] * b[6] + a[3] * b[2] + a[3] * b[12],
a[0] * b[14] + a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[11],
a[0] * b[8] + a[1] * b[9] - a[2] * b[15],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[15],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
inline Vec_Dal gp (const Daf& a, const Rtt& b) { 
	return Vec_Dal (
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[7] - a[3] * b[3],
a[0] * b[4] - a[1] * b[7] - a[2] * b[6] + a[3] * b[2],
a[0] * b[7] + a[1] * b[4] + a[2] * b[5] - a[3] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0]
);
}			
		 
inline Rvd gp (const Daf& a, const Rtd& b) { 
	return Rvd (
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7],
a[0] * b[4] - a[1] * b[7] + a[2] * b[6],
a[0] * b[7] + a[1] * b[4] - a[2] * b[5],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[4],
 - a[3] * b[3] - a[3] * b[7],
a[3] * b[2] + a[3] * b[6],
 - a[3] * b[1] - a[3] * b[5],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0] + a[3] * b[4]
);
}			
		 
inline Ori_Cir gp (const Daf& a, const Tvd& b) { 
	return Ori_Cir (
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[3] * b[4]
);
}			
		 
inline Pnt_Dfp gp (const Daf& a, const Tsd& b) { 
	return Pnt_Dfp (
a[0] * b[4] + a[3] * b[3],
a[1] * b[4] - a[3] * b[2],
a[2] * b[4] + a[3] * b[1],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] - a[3] * b[3],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] - a[3] * b[1],
a[3] * b[0] + a[3] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Mtt gp (const Daf& a, const Trt& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[9],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[8],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[7],
 - a[0] * b[5] - a[1] * b[6] - a[3] * b[3] - a[3] * b[13],
a[0] * b[4] - a[2] * b[6] + a[3] * b[2] + a[3] * b[12],
a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[11],
a[0] * b[8] + a[1] * b[9],
 - a[0] * b[7] + a[2] * b[9],
 - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
inline Rvd gp (const Daf& a, const Rvd& b) { 
	return Rvd (
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[11] - a[3] * b[3] - a[3] * b[10],
a[0] * b[4] - a[1] * b[11] - a[2] * b[6] + a[3] * b[2] + a[3] * b[9],
a[0] * b[11] + a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[8],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[7]
);
}			
		 
inline Mtt gp (const Daf& a, const Tst& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[9],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[8],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[7],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[14] - a[3] * b[3] - a[3] * b[13],
a[0] * b[4] - a[1] * b[14] - a[2] * b[6] + a[3] * b[2] + a[3] * b[12],
a[0] * b[14] + a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[11],
a[0] * b[8] + a[1] * b[9],
 - a[0] * b[7] + a[2] * b[9],
 - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
inline Mtt gp (const Daf& a, const Tvt& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[14],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[9],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[8],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[7],
 - a[0] * b[5] - a[1] * b[6] - a[3] * b[3] - a[3] * b[13],
a[0] * b[4] - a[2] * b[6] + a[3] * b[2] + a[3] * b[12],
a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[11],
a[0] * b[8] + a[1] * b[9] - a[2] * b[14],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[14],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
inline Pnt_Cir gp (const Daf& a, const Bst& b) { 
	return Pnt_Cir (
a[0] * b[10] + a[3] * b[9],
a[1] * b[10] - a[3] * b[8],
a[2] * b[10] + a[3] * b[7],
 - a[0] * b[5] - a[1] * b[6] - a[3] * b[3],
a[0] * b[4] - a[2] * b[6] + a[3] * b[2],
a[1] * b[4] + a[2] * b[5] - a[3] * b[1],
a[0] * b[8] + a[1] * b[9],
 - a[0] * b[7] + a[2] * b[9],
 - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
inline Daf op (const Daf& a, const Sca& b) { 
	return Daf (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Sca op (const Daf& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Daf& a, const Inf& b) { 
	return Pss (
a[3] * b[0]
);
}			
		 
inline Sca op (const Daf& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Daf& a, const Hyp& b) { 
	return Pss (
a[3] * b[1]
);
}			
		 
inline Sca op (const Daf& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Daf& a, const Pnt& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[4]
);
}			
		 
inline Sca op (const Daf& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Dfp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Daf& a, const Dlp& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Pss op (const Daf& a, const Vec& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Daf& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Daf& a, const Aff& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Daf& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Dap& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Daf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Dal& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Daf& a, const Mnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Aff ip (const Daf& a, const Pss& b) { 
	return Aff (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Sca ip (const Daf& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Sph& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[4]
);
}			
		 
inline Sca ip (const Daf& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Drt& b) { 
	return Sca (
 - a[3] * b[0]
);
}			
		 
inline Sca ip (const Daf& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Pln& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3]
);
}			
		 
inline Sca ip (const Daf& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Dfp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Dap& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Daf& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Daf& a, const Dal& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Daf& a, const Mnv& b) { 
	return Sca (
);
}			
		  	
template<>
inline Daf sp (const Daf& daf, const Rot& rot) {					
					
const Rot& t1 = rot;
const Daf& t2 = daf;
Vec_Dal t3 (
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
return Daf (
t3[3] * t5[1] + t3[4] * t5[0] - t3[5] * t5[3] + t3[6] * t5[2],
t3[3] * t5[2] + t3[4] * t5[3] + t3[5] * t5[0] - t3[6] * t5[1],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Mot& mot) {					
					
const Mot& t1 = mot;
const Daf& t2 = daf;
Mtt t3 (
 - t1[7] * t2[3],
t1[6] * t2[3],
 - t1[5] * t2[3],
t1[4] * t2[3],
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[7] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[4] * t2[3],
t1[0] * t2[3],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Daf (
 - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[7] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[6],
 - t3[4] * t5[6] + t3[5] * t5[7] + t3[6] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[5],
 - t3[4] * t5[7] - t3[5] * t5[6] + t3[6] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[4],
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[14] * t5[0]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Dil& dil) {					
					
const Dil& t1 = dil;
const Daf& t2 = daf;
Ori_Dfp t3 (
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[3]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Daf (
t3[0] * t5[1] + t3[3] * t5[0],
t3[1] * t5[1] + t3[4] * t5[0],
t3[2] * t5[1] + t3[5] * t5[0],
t3[6] * t5[0] + t3[6] * t5[1]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Trv& trv) {					
					
const Trv& t1 = trv;
const Daf& t2 = daf;
Biv_Dap t3 (
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] + t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Daf (
t3[3] * t5[0],
t3[4] * t5[0],
t3[5] * t5[0],
 - t3[3] * t5[3] + t3[4] * t5[2] - t3[5] * t5[1] + t3[6] * t5[0]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Daf& t2 = daf;
Mtt t3 (
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2] - t1[11] * t2[3],
t1[6] * t2[3] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
 - t1[5] * t2[3] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[4] * t2[3] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
 - t1[3] * t2[3] + t1[10] * t2[3],
t1[2] * t2[3] - t1[9] * t2[3],
 - t1[1] * t2[3] + t1[8] * t2[3],
t1[5] * t2[0] + t1[6] * t2[1] + t1[11] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] - t1[11] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[11] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[11] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[4] * t2[3],
t1[0] * t2[3] - t1[7] * t2[3],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Daf (
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[11] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[6],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] - t3[4] * t5[6] + t3[5] * t5[11] + t3[6] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[5],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] - t3[4] * t5[11] - t3[5] * t5[6] + t3[6] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[4],
t3[4] * t5[3] + t3[4] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] + t3[14] * t5[0] + t3[14] * t5[7]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Trs& trs) {					
					
const Trs& t1 = trs;
const Daf& t2 = daf;
Pnt_Dfp t3 (
t1[3] * t2[3],
 - t1[2] * t2[3],
t1[1] * t2[3],
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[0] + t1[3] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] + t1[1] * t2[3],
t1[0] * t2[3],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Daf (
t3[6] * t5[0] - t3[9] * t5[3],
t3[7] * t5[0] + t3[9] * t5[2],
t3[8] * t5[0] - t3[9] * t5[1],
t3[9] * t5[0]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Daf& t2 = daf;
Rtc t3 (
 - t1[10] * t2[3] - t1[12] * t2[0] - t1[13] * t2[1] - t1[15] * t2[2],
t1[9] * t2[3] + t1[11] * t2[0] - t1[13] * t2[2] + t1[15] * t2[1],
 - t1[8] * t2[3] + t1[11] * t2[1] + t1[12] * t2[2] - t1[15] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2] - t1[14] * t2[3] + t1[15] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2],
t1[2] * t2[3] + t1[3] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1] - t1[13] * t2[3],
 - t1[1] * t2[3] + t1[3] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0] + t1[12] * t2[3],
t1[0] * t2[3] + t1[3] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[3],
 - t1[4] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1],
 - t1[4] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0],
 - t1[4] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[10] * t2[3] - t1[14] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[9] * t2[3] + t1[14] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[8] * t2[3] - t1[14] * t2[0],
t1[4] * t2[3] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[4] * t2[3]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Daf (
t3[0] * t5[12] - t3[1] * t5[11] + t3[2] * t5[15] + t3[3] * t5[8] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[10] + t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[1] - t3[12] * t5[0] + t3[13] * t5[14] + t3[14] * t5[13] + t3[15] * t5[2],
t3[0] * t5[13] - t3[1] * t5[15] - t3[2] * t5[11] + t3[3] * t5[9] - t3[4] * t5[6] + t3[5] * t5[10] + t3[6] * t5[4] - t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[2] - t3[12] * t5[14] - t3[13] * t5[0] - t3[14] * t5[12] - t3[15] * t5[1],
t3[0] * t5[15] + t3[1] * t5[13] - t3[2] * t5[12] + t3[3] * t5[10] - t3[4] * t5[7] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[14] + t3[12] * t5[2] - t3[13] * t5[1] + t3[14] * t5[11] + t3[15] * t5[0],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] - t3[3] * t5[14] - t3[3] * t5[15] - t3[5] * t5[2] - t3[5] * t5[13] + t3[6] * t5[1] + t3[6] * t5[12] - t3[7] * t5[0] - t3[7] * t5[11] - t3[11] * t5[7] + t3[12] * t5[6] - t3[13] * t5[5] + t3[14] * t5[3] - t3[15] * t5[3]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Daf& t2 = daf;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[15] * t2[3],
t1[9] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[8] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[7] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[13] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[12] * t2[3] + t1[14] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[11] * t2[3] - t1[14] * t2[0],
t1[8] * t2[0] + t1[9] * t2[1] + t1[15] * t2[2],
 - t1[7] * t2[0] + t1[9] * t2[2] - t1[15] * t2[1],
 - t1[7] * t2[1] - t1[8] * t2[2] + t1[15] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[15] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Daf (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[15] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[15] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[10] * t5[14] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Daf& t2 = daf;
Vec_Dal t3 (
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Daf (
t3[3] * t5[1] + t3[4] * t5[0] - t3[5] * t5[3] + t3[6] * t5[2],
t3[3] * t5[2] + t3[4] * t5[3] + t3[5] * t5[0] - t3[6] * t5[1],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] - t3[3] * t5[7] - t3[4] * t5[6] + t3[5] * t5[5] - t3[6] * t5[4] + t3[7] * t5[0]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Daf& t2 = daf;
Rvd t3 (
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
 - t1[3] * t2[3] + t1[7] * t2[3],
t1[2] * t2[3] - t1[6] * t2[3],
 - t1[1] * t2[3] + t1[5] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] - t1[4] * t2[3]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Daf (
t3[0] * t5[5] + t3[1] * t5[4] - t3[2] * t5[7] + t3[3] * t5[6] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[4] - t3[3] * t5[5] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] + t3[3] * t5[4] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
t3[4] * t5[3] + t3[4] * t5[7] - t3[5] * t5[2] - t3[5] * t5[6] + t3[6] * t5[1] + t3[6] * t5[5] + t3[11] * t5[0] + t3[11] * t5[4]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Daf& t2 = daf;
Ori_Cir t3 (
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] + t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[4] * t2[3]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Daf (
t3[0] * t5[4] + t3[6] * t5[0],
t3[1] * t5[4] + t3[7] * t5[0],
t3[2] * t5[4] + t3[8] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] - t3[6] * t5[3] + t3[7] * t5[2] - t3[8] * t5[1] + t3[9] * t5[0] + t3[9] * t5[4]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Daf& t2 = daf;
Pnt_Dfp t3 (
t1[3] * t2[3] + t1[4] * t2[0],
 - t1[2] * t2[3] + t1[4] * t2[1],
t1[1] * t2[3] + t1[4] * t2[2],
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[0] + t1[3] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] + t1[1] * t2[3],
t1[0] * t2[3] - t1[4] * t2[3],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Daf (
t3[0] * t5[4] + t3[6] * t5[0] - t3[9] * t5[3],
t3[1] * t5[4] + t3[7] * t5[0] + t3[9] * t5[2],
t3[2] * t5[4] + t3[8] * t5[0] - t3[9] * t5[1],
t3[9] * t5[0] + t3[9] * t5[4]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Trt& trt) {					
					
const Trt& t1 = trt;
const Daf& t2 = daf;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[9] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[8] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[7] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[13] * t2[3],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[12] * t2[3],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[11] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1],
 - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Daf (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Daf& t2 = daf;
Rvd t3 (
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[10] * t2[3] - t1[11] * t2[2],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[9] * t2[3] + t1[11] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[8] * t2[3] - t1[11] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[7] * t2[3]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Daf (
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] - t3[7] * t5[11] - t3[8] * t5[6] + t3[9] * t5[5] - t3[10] * t5[4] + t3[11] * t5[0] + t3[11] * t5[7]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Tst& tst) {					
					
const Tst& t1 = tst;
const Daf& t2 = daf;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[9] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[8] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[7] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[13] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[12] * t2[3] + t1[14] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[11] * t2[3] - t1[14] * t2[0],
t1[8] * t2[0] + t1[9] * t2[1],
 - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Daf (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[10] * t5[14] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Daf& t2 = daf;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[14] * t2[3],
t1[9] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[8] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[7] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[13] * t2[3],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[12] * t2[3],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[11] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] + t1[14] * t2[2],
 - t1[7] * t2[0] + t1[9] * t2[2] - t1[14] * t2[1],
 - t1[7] * t2[1] - t1[8] * t2[2] + t1[14] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[14] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Daf (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[14] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[14] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Daf sp (const Daf& daf, const Bst& bst) {					
					
const Bst& t1 = bst;
const Daf& t2 = daf;
Pnt_Cir t3 (
t1[9] * t2[3] + t1[10] * t2[0],
 - t1[8] * t2[3] + t1[10] * t2[1],
t1[7] * t2[3] + t1[10] * t2[2],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2],
t1[8] * t2[0] + t1[9] * t2[1],
 - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Daf (
t3[0] * t5[10] - t3[3] * t5[8] + t3[4] * t5[7] + t3[6] * t5[5] - t3[7] * t5[4] + t3[9] * t5[1] + t3[10] * t5[0] - t3[11] * t5[3] + t3[12] * t5[2] - t3[13] * t5[9] + t3[14] * t5[6],
t3[1] * t5[10] - t3[3] * t5[9] + t3[5] * t5[7] + t3[6] * t5[6] - t3[8] * t5[4] + t3[9] * t5[2] + t3[10] * t5[3] + t3[11] * t5[0] - t3[12] * t5[1] + t3[13] * t5[8] - t3[14] * t5[5],
t3[2] * t5[10] - t3[4] * t5[9] + t3[5] * t5[8] + t3[7] * t5[6] - t3[8] * t5[5] + t3[9] * t5[3] - t3[10] * t5[2] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[7] + t3[14] * t5[4],
t3[0] * t5[6] - t3[1] * t5[5] + t3[2] * t5[4] + t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] - t3[10] * t5[6] + t3[11] * t5[5] - t3[12] * t5[4] + t3[13] * t5[0] + t3[13] * t5[10]
);

}
		
	
	  	
template<>
inline Daf re (const Daf& daf, const Vec& vec) {					
					
const Vec& t1 = vec;
const Daf& t2 = daf;
Daf t3 = involute( t2);
Vec_Daf t4 (
t1[2] * t3[3],
 - t1[1] * t3[3],
t1[0] * t3[3],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Daf (
t4[3] * t6[1] - t4[4] * t6[0] + t4[6] * t6[2],
t4[3] * t6[2] - t4[5] * t6[0] - t4[6] * t6[1],
t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0],
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Daf re (const Daf& daf, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Daf& t2 = daf;
Daf t3 = involute( t2);
Pnt_Sph t4 (
t1[2] * t3[3],
 - t1[1] * t3[3],
t1[0] * t3[3],
 - t1[3] * t3[0],
 - t1[3] * t3[1],
 - t1[3] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[3] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] + t1[3] * t3[3]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Daf (
t4[0] * t6[3] + t4[6] * t6[1] - t4[7] * t6[0] + t4[10] * t6[2],
t4[1] * t6[3] + t4[6] * t6[2] - t4[8] * t6[0] - t4[10] * t6[1],
t4[2] * t6[3] + t4[7] * t6[2] - t4[8] * t6[1] + t4[10] * t6[0],
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Daf re (const Daf& daf, const Pln& pln) {					
					
const Pln& t1 = pln;
const Daf& t2 = daf;
Daf t3 = involute( t2);
Bst t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] - t1[3] * t3[3],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
t1[2] * t3[3],
 - t1[1] * t3[3],
t1[0] * t3[3],
t1[3] * t3[2],
 - t1[3] * t3[1],
t1[3] * t3[0],
 - t1[3] * t3[3]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Daf (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] - t4[6] * t6[3],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[5] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[4] * t6[3],
t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Daf re (const Daf& daf, const Dll& dll) {					
					
const Dll& t1 = dll;
const Daf& t2 = daf;
Daf t3 = involute( t2);
Pnt_Lin t4 (
t1[5] * t3[3],
 - t1[4] * t3[3],
t1[3] * t3[3],
 - t1[2] * t3[3],
t1[1] * t3[3],
 - t1[0] * t3[3],
t1[4] * t3[0] + t1[5] * t3[1],
 - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[3] * t3[1] - t1[4] * t3[2],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[5] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] - t1[4] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[3] * t3[3],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Daf (
 - t4[3] * t6[4] + t4[4] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1],
 - t4[3] * t6[5] + t4[5] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0],
 - t4[4] * t6[5] + t4[5] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0],
t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0]
);

}
		
	
	  	
template<>
inline Daf re (const Daf& daf, const Lin& lin) {					
					
const Lin& t1 = lin;
const Daf& t2 = daf;
Daf t3 = involute( t2);
Pnt_Dll t4 (
 - t1[2] * t3[3] - t1[4] * t3[0] - t1[5] * t3[1],
t1[1] * t3[3] + t1[3] * t3[0] - t1[5] * t3[2],
 - t1[0] * t3[3] + t1[3] * t3[1] + t1[4] * t3[2],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
 - t1[5] * t3[3],
t1[4] * t3[3],
 - t1[3] * t3[3],
t1[1] * t3[2] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[2] * t3[0],
t1[0] * t3[1] - t1[1] * t3[0],
 - t1[2] * t3[3],
t1[1] * t3[3],
 - t1[0] * t3[3],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Daf (
t4[0] * t6[4] - t4[1] * t6[3] - t4[5] * t6[2] + t4[6] * t6[1] + t4[13] * t6[5],
t4[0] * t6[5] - t4[2] * t6[3] + t4[4] * t6[2] - t4[6] * t6[0] - t4[13] * t6[4],
t4[1] * t6[5] - t4[2] * t6[4] - t4[4] * t6[1] + t4[5] * t6[0] + t4[13] * t6[3],
 - t4[4] * t6[5] + t4[5] * t6[4] - t4[6] * t6[3]
);

}
		
	
	  	
template<>
inline Daf re (const Daf& daf, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Daf& t2 = daf;
Daf t3 = involute( t2);
Pnt_Sph t4 (
t1[2] * t3[3] + t1[3] * t3[0],
 - t1[1] * t3[3] + t1[3] * t3[1],
t1[0] * t3[3] + t1[3] * t3[2],
 - t1[4] * t3[0],
 - t1[4] * t3[1],
 - t1[4] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[4] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] + t1[4] * t3[3]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Daf (
t4[0] * t6[4] - t4[3] * t6[3] + t4[6] * t6[1] - t4[7] * t6[0] + t4[10] * t6[2],
t4[1] * t6[4] - t4[4] * t6[3] + t4[6] * t6[2] - t4[8] * t6[0] - t4[10] * t6[1],
t4[2] * t6[4] - t4[5] * t6[3] + t4[7] * t6[2] - t4[8] * t6[1] + t4[10] * t6[0],
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0] + t4[9] * t6[3] - t4[10] * t6[3]
);

}
		
	
	  	
template<>
inline Daf re (const Daf& daf, const Par& par) {					
					
const Par& t1 = par;
const Daf& t2 = daf;
Daf t3 = involute( t2);
Pnt_Cir t4 (
t1[8] * t3[3] + t1[9] * t3[0],
 - t1[7] * t3[3] + t1[9] * t3[1],
t1[6] * t3[3] + t1[9] * t3[2],
 - t1[2] * t3[3] - t1[4] * t3[0] - t1[5] * t3[1],
t1[1] * t3[3] + t1[3] * t3[0] - t1[5] * t3[2],
 - t1[0] * t3[3] + t1[3] * t3[1] + t1[4] * t3[2],
t1[7] * t3[0] + t1[8] * t3[1],
 - t1[6] * t3[0] + t1[8] * t3[2],
 - t1[6] * t3[1] - t1[7] * t3[2],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[8] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] - t1[7] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[6] * t3[3],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0] - t1[9] * t3[3],
 - t1[6] * t3[2] + t1[7] * t3[1] - t1[8] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Daf (
t4[0] * t6[9] - t4[3] * t6[7] + t4[4] * t6[6] + t4[6] * t6[4] - t4[7] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1] - t4[13] * t6[8] + t4[14] * t6[5],
t4[1] * t6[9] - t4[3] * t6[8] + t4[5] * t6[6] + t4[6] * t6[5] - t4[8] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0] + t4[13] * t6[7] - t4[14] * t6[4],
t4[2] * t6[9] - t4[4] * t6[8] + t4[5] * t6[7] + t4[7] * t6[5] - t4[8] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0] - t4[13] * t6[6] + t4[14] * t6[3],
t4[0] * t6[5] - t4[1] * t6[4] + t4[2] * t6[3] + t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0] - t4[10] * t6[5] + t4[11] * t6[4] - t4[12] * t6[3] + t4[13] * t6[9]
);

}
		
	
	  	
template<>
inline Daf re (const Daf& daf, const Cir& cir) {					
					
const Cir& t1 = cir;
const Daf& t2 = daf;
Daf t3 = involute( t2);
Pnt_Par t4 (
 - t1[5] * t3[3] - t1[7] * t3[0] - t1[8] * t3[1],
t1[4] * t3[3] + t1[6] * t3[0] - t1[8] * t3[2],
 - t1[3] * t3[3] + t1[6] * t3[1] + t1[7] * t3[2],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] - t1[9] * t3[3],
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1] - t1[8] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] + t1[7] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] - t1[6] * t3[3],
t1[4] * t3[2] - t1[5] * t3[1],
 - t1[3] * t3[2] + t1[5] * t3[0],
t1[3] * t3[1] - t1[4] * t3[0],
 - t1[5] * t3[3] - t1[9] * t3[2],
t1[4] * t3[3] + t1[9] * t3[1],
 - t1[3] * t3[3] - t1[9] * t3[0],
t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Daf (
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[3] - t4[4] * t6[0] - t4[6] * t6[5] + t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[13] * t6[9] + t4[14] * t6[8],
t4[0] * t6[8] - t4[2] * t6[6] + t4[3] * t6[4] - t4[4] * t6[1] + t4[5] * t6[5] - t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] - t4[12] * t6[9] - t4[14] * t6[7],
t4[1] * t6[8] - t4[2] * t6[7] + t4[3] * t6[5] - t4[4] * t6[2] - t4[5] * t6[4] + t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[11] * t6[9] + t4[14] * t6[6],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[3] * t6[9] - t4[5] * t6[8] + t4[6] * t6[7] - t4[7] * t6[6] - t4[11] * t6[2] + t4[12] * t6[1] - t4[13] * t6[0]
);

}
		
	
	  	
template<>
inline Daf re (const Daf& daf, const Sph& sph) {					
					
const Sph& t1 = sph;
const Daf& t2 = daf;
Daf t3 = involute( t2);
Bst t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] - t1[4] * t3[3],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
t1[2] * t3[3] - t1[3] * t3[2],
 - t1[1] * t3[3] + t1[3] * t3[1],
t1[0] * t3[3] - t1[3] * t3[0],
t1[4] * t3[2],
 - t1[4] * t3[1],
t1[4] * t3[0],
 - t1[4] * t3[3]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Daf (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] - t4[6] * t6[4] + t4[9] * t6[3],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[5] * t6[4] - t4[8] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[4] * t6[4] + t4[7] * t6[3],
t4[0] * t6[3] + t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0] - t4[10] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	