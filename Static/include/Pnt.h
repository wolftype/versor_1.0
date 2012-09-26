		#ifndef PNT_H_INCLUDED
		#define PNT_H_INCLUDED
		
		#include "vsr_casts.h"
		
		namespace vsr{
	 
inline Pnt gp (const Pnt& a, const Sca& b) { 
	return Pnt (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0]
);
}			
		 
inline Tvd gp (const Pnt& a, const Ori& b) { 
	return Tvd (
 - a[4] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[4] * b[0]
);
}			
		 
inline Tsd gp (const Pnt& a, const Inf& b) { 
	return Tsd (
 - a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Mnk_Pnt gp (const Pnt& a, const Mnk& b) { 
	return Mnk_Pnt (
a[3] * b[0],
 - a[4] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Hyp_Pnt gp (const Pnt& a, const Hyp& b) { 
	return Hyp_Pnt (
 - a[3] * b[1] - a[4] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1] - a[4] * b[0]
);
}			
		 
inline Sph gp (const Pnt& a, const Pss& b) { 
	return Sph (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0],
a[4] * b[0]
);
}			
		 
inline Bst gp (const Pnt& a, const Pnt& b) { 
	return Bst (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[4] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[0] * b[4] - a[4] * b[0],
a[1] * b[4] - a[4] * b[1],
a[2] * b[4] - a[4] * b[2],
a[3] * b[4] - a[4] * b[3]
);
}			
		 
inline Pnt_Par gp (const Pnt& a, const Par& b) { 
	return Pnt_Par (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[6] + a[4] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[7] + a[4] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[8] + a[4] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[3] * b[9],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[4] * b[9],
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] - a[1] * b[6] + a[4] * b[0],
a[0] * b[8] - a[2] * b[6] + a[4] * b[1],
a[1] * b[8] - a[2] * b[7] + a[4] * b[2],
a[0] * b[9] - a[3] * b[6] + a[4] * b[3],
a[1] * b[9] - a[3] * b[7] + a[4] * b[4],
a[2] * b[9] - a[3] * b[8] + a[4] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pnt_Cir gp (const Pnt& a, const Cir& b) { 
	return Pnt_Cir (
a[2] * b[9] - a[3] * b[3] - a[4] * b[0],
 - a[1] * b[9] - a[3] * b[4] - a[4] * b[1],
a[0] * b[9] - a[3] * b[5] - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[6],
a[0] * b[0] - a[2] * b[2] - a[3] * b[7],
a[0] * b[1] + a[1] * b[2] - a[3] * b[8],
 - a[1] * b[3] - a[2] * b[4] + a[4] * b[6],
a[0] * b[3] - a[2] * b[5] + a[4] * b[7],
a[0] * b[4] + a[1] * b[5] + a[4] * b[8],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[3] - a[4] * b[0],
a[0] * b[8] - a[2] * b[6] + a[3] * b[4] - a[4] * b[1],
a[1] * b[8] - a[2] * b[7] + a[3] * b[5] - a[4] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[4] * b[9]
);
}			
		 
inline Pnt_Sph gp (const Pnt& a, const Sph& b) { 
	return Pnt_Sph (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
a[2] * b[4] - a[4] * b[0],
 - a[1] * b[4] - a[4] * b[1],
a[0] * b[4] - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[4] + a[4] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[4] + a[4] * b[3]
);
}			
		 
inline Pnt_Par gp (const Pnt& a, const Sta& b) { 
	return Pnt_Par (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[6] + a[4] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[7] + a[4] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[8] + a[4] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] - a[1] * b[6] + a[4] * b[0],
a[0] * b[8] - a[2] * b[6] + a[4] * b[1],
a[1] * b[8] - a[2] * b[7] + a[4] * b[2],
 - a[3] * b[6] + a[4] * b[3],
 - a[3] * b[7] + a[4] * b[4],
 - a[3] * b[8] + a[4] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Inf_Par gp (const Pnt& a, const Drv& b) { 
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
		 
inline Inf_Cir gp (const Pnt& a, const Drb& b) { 
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
		 
inline Inf_Sph gp (const Pnt& a, const Drt& b) { 
	return Inf_Sph (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Ori_Par gp (const Pnt& a, const Tnv& b) { 
	return Ori_Par (
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2]
);
}			
		 
inline Ori_Cir gp (const Pnt& a, const Tnb& b) { 
	return Ori_Cir (
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Ori_Sph gp (const Pnt& a, const Tnt& b) { 
	return Ori_Sph (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[4] * b[0],
a[4] * b[0]
);
}			
		 
inline Pnt_Lin gp (const Pnt& a, const Lin& b) { 
	return Pnt_Lin (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[1] * b[0] - a[2] * b[1] + a[4] * b[3],
a[0] * b[0] - a[2] * b[2] + a[4] * b[4],
a[0] * b[1] + a[1] * b[2] + a[4] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pnt_Sph gp (const Pnt& a, const Pln& b) { 
	return Pnt_Sph (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[2] * b[3] - a[4] * b[0],
 - a[1] * b[3] - a[4] * b[1],
a[0] * b[3] - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
inline Pnt_Flp gp (const Pnt& a, const Flp& b) { 
	return Pnt_Flp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
inline Pnt_Dfp gp (const Pnt& a, const Dfp& b) { 
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
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3]
);
}			
		 
inline Pnt_Dll gp (const Pnt& a, const Dll& b) { 
	return Pnt_Dll (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[4] - a[1] * b[3] + a[4] * b[0],
a[0] * b[5] - a[2] * b[3] + a[4] * b[1],
a[1] * b[5] - a[2] * b[4] + a[4] * b[2],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Bst gp (const Pnt& a, const Dlp& b) { 
	return Bst (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[3] - a[4] * b[0],
a[1] * b[3] - a[4] * b[1],
a[2] * b[3] - a[4] * b[2],
a[3] * b[3]
);
}			
		 
inline Pnt_Vec gp (const Pnt& a, const Vec& b) { 
	return Pnt_Vec (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2]
);
}			
		 
inline Pnt_Biv gp (const Pnt& a, const Biv& b) { 
	return Pnt_Biv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mnk_Sph gp (const Pnt& a, const Tri& b) { 
	return Mnk_Sph (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0],
 - a[4] * b[0]
);
}			
		 
inline Bst gp (const Pnt& a, const Aff& b) { 
	return Bst (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2],
 - a[4] * b[3]
);
}			
		 
inline Pnt_Afl gp (const Pnt& a, const Afl& b) { 
	return Pnt_Afl (
 - a[1] * b[0] - a[2] * b[1] + a[4] * b[3],
a[0] * b[0] - a[2] * b[2] + a[4] * b[4],
a[0] * b[1] + a[1] * b[2] + a[4] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[4] * b[3],
a[4] * b[4],
a[4] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pnt_Afp gp (const Pnt& a, const Afp& b) { 
	return Pnt_Afp (
a[2] * b[3] - a[4] * b[0],
 - a[1] * b[3] - a[4] * b[1],
a[0] * b[3] - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
 - a[4] * b[3]
);
}			
		 
inline Pnt_Dap gp (const Pnt& a, const Dap& b) { 
	return Pnt_Dap (
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
 - a[4] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] + a[4] * b[0],
a[1] * b[3] + a[4] * b[1],
a[2] * b[3] + a[4] * b[2]
);
}			
		 
inline Pnt_Sph gp (const Pnt& a, const Daf& b) { 
	return Pnt_Sph (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[4] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[4] * b[3]
);
}			
		 
inline Pnt_Dal gp (const Pnt& a, const Dal& b) { 
	return Pnt_Dal (
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[3],
a[0] * b[0] - a[2] * b[2] - a[3] * b[4],
a[0] * b[1] + a[1] * b[2] - a[3] * b[5],
a[4] * b[3],
a[4] * b[4],
a[4] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] - a[4] * b[0],
a[0] * b[5] - a[2] * b[3] - a[4] * b[1],
a[1] * b[5] - a[2] * b[4] - a[4] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pnt_Mnv gp (const Pnt& a, const Mnv& b) { 
	return Pnt_Mnv (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Sta_Vec gp (const Pnt& a, const Rot& b) { 
	return Sta_Vec (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[4] * b[1],
a[4] * b[2],
a[4] * b[3],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Rtc gp (const Pnt& a, const Mot& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[4] * b[1],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] + a[4] * b[2],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[4] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[7],
 - a[3] * b[7]
);
}			
		 
inline Hyp_Flp gp (const Pnt& a, const Dil& b) { 
	return Hyp_Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] + a[3] * b[1],
a[4] * b[0] - a[4] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Pnt_Dap gp (const Pnt& a, const Trv& b) { 
	return Pnt_Dap (
a[0] * b[0] + a[4] * b[1],
a[1] * b[0] + a[4] * b[2],
a[2] * b[0] + a[4] * b[3],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[4] * b[0],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[4] * b[1],
a[4] * b[2],
a[4] * b[3]
);
}			
		 
inline Rtc gp (const Pnt& a, const Mtd& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[3] * b[0] + a[3] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0] - a[4] * b[7],
a[3] * b[1] + a[3] * b[8],
a[3] * b[2] + a[3] * b[9],
a[3] * b[3] + a[3] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[4] * b[1] - a[4] * b[8],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] + a[4] * b[2] - a[4] * b[9],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[4] * b[3] - a[4] * b[10],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[4],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] - a[3] * b[5],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[11],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] - a[3] * b[11]
);
}			
		 
inline Pnt_Flp gp (const Pnt& a, const Trs& b) { 
	return Pnt_Flp (
a[0] * b[0] + a[3] * b[1],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] + a[3] * b[3],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[0],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3]
);
}			
		 
inline Mtt gp (const Pnt& a, const Rtc& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[4] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14] - a[3] * b[8] - a[4] * b[5],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0] - a[3] * b[9] - a[4] * b[6],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1] - a[3] * b[10] - a[4] * b[7],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6] - a[3] * b[0] - a[3] * b[11],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7] - a[3] * b[1] - a[3] * b[12],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3] - a[3] * b[2] - a[3] * b[13],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9] - a[4] * b[0] + a[4] * b[11],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10] - a[4] * b[1] + a[4] * b[12],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4] - a[4] * b[2] + a[4] * b[13],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13] + a[3] * b[4] - a[4] * b[3],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15] + a[3] * b[8] - a[4] * b[5],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11] + a[3] * b[9] - a[4] * b[6],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12] + a[3] * b[10] - a[4] * b[7],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] - a[3] * b[14] - a[3] * b[15],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] - a[4] * b[14] + a[4] * b[15]
);
}			
		 
inline Rtc gp (const Pnt& a, const Mtt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7] + a[4] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8] + a[4] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9] + a[4] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[0] - a[4] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[1] + a[3] * b[11],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] + a[3] * b[2] + a[3] * b[12],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[13],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15] + a[4] * b[1] - a[4] * b[11],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7] + a[4] * b[2] - a[4] * b[12],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8] + a[4] * b[3] - a[4] * b[13],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[7] + a[4] * b[4],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] - a[3] * b[8] + a[4] * b[5],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[15] + a[4] * b[14],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] - a[3] * b[15] + a[4] * b[14]
);
}			
		 
inline Rtc gp (const Pnt& a, const Rtt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[4] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[4] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[4] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0],
a[4] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[1],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3],
a[4] * b[1],
a[4] * b[2],
a[4] * b[3],
a[4] * b[4],
a[4] * b[5],
a[4] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[4] * b[7],
a[4] * b[7]
);
}			
		 
inline Rtc gp (const Pnt& a, const Rtd& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[3] * b[0] + a[3] * b[4],
a[4] * b[0] - a[4] * b[4],
a[3] * b[1] + a[3] * b[5],
a[3] * b[2] + a[3] * b[6],
a[3] * b[3] + a[3] * b[7],
a[4] * b[1] - a[4] * b[5],
a[4] * b[2] - a[4] * b[6],
a[4] * b[3] - a[4] * b[7],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5]
);
}			
		 
inline Pnt_Dap gp (const Pnt& a, const Tvd& b) { 
	return Pnt_Dap (
a[0] * b[0] + a[4] * b[1],
a[1] * b[0] + a[4] * b[2],
a[2] * b[0] + a[4] * b[3],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0] + a[3] * b[4],
a[4] * b[0] - a[4] * b[4],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[4] + a[4] * b[1],
a[1] * b[4] + a[4] * b[2],
a[2] * b[4] + a[4] * b[3]
);
}			
		 
inline Pnt_Flp gp (const Pnt& a, const Tsd& b) { 
	return Pnt_Flp (
a[0] * b[0] + a[3] * b[1],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] + a[3] * b[3],
a[3] * b[0] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[0] - a[4] * b[4],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[4] - a[3] * b[1],
a[1] * b[4] - a[3] * b[2],
a[2] * b[4] - a[3] * b[3]
);
}			
		 
inline Rtc gp (const Pnt& a, const Trt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7] + a[4] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8] + a[4] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9] + a[4] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[0] - a[4] * b[10],
a[0] * b[5] - a[1] * b[4] + a[3] * b[1] + a[3] * b[11],
a[0] * b[6] - a[2] * b[4] + a[3] * b[2] + a[3] * b[12],
a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[13],
a[0] * b[8] - a[1] * b[7] + a[4] * b[1] - a[4] * b[11],
a[0] * b[9] - a[2] * b[7] + a[4] * b[2] - a[4] * b[12],
a[1] * b[9] - a[2] * b[8] + a[4] * b[3] - a[4] * b[13],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[7] + a[4] * b[4],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] - a[3] * b[8] + a[4] * b[5],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
inline Rtc gp (const Pnt& a, const Rvd& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[4] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[4] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[4] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[7],
a[4] * b[0] - a[4] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[1] + a[3] * b[8],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] + a[3] * b[2] + a[3] * b[9],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[10],
a[4] * b[1] - a[4] * b[8],
a[4] * b[2] - a[4] * b[9],
a[4] * b[3] - a[4] * b[10],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] + a[4] * b[4],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[4] * b[5],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] + a[4] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[4] * b[11],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[4] * b[11]
);
}			
		 
inline Rtc gp (const Pnt& a, const Tst& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7] + a[4] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8] + a[4] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9] + a[4] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[0] - a[4] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[1] + a[3] * b[11],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] + a[3] * b[2] + a[3] * b[12],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[13],
a[0] * b[8] - a[1] * b[7] + a[4] * b[1] - a[4] * b[11],
a[0] * b[9] - a[2] * b[7] + a[4] * b[2] - a[4] * b[12],
a[1] * b[9] - a[2] * b[8] + a[4] * b[3] - a[4] * b[13],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[7] + a[4] * b[4],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] - a[3] * b[8] + a[4] * b[5],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[4] * b[14],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[4] * b[14]
);
}			
		 
inline Rtc gp (const Pnt& a, const Tvt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7] + a[4] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8] + a[4] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9] + a[4] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[0] - a[4] * b[10],
a[0] * b[5] - a[1] * b[4] + a[3] * b[1] + a[3] * b[11],
a[0] * b[6] - a[2] * b[4] + a[3] * b[2] + a[3] * b[12],
a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[13],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14] + a[4] * b[1] - a[4] * b[11],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7] + a[4] * b[2] - a[4] * b[12],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8] + a[4] * b[3] - a[4] * b[13],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[7] + a[4] * b[4],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] - a[3] * b[8] + a[4] * b[5],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[14],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] - a[3] * b[14]
);
}			
		 
inline Pnt_Par gp (const Pnt& a, const Bst& b) { 
	return Pnt_Par (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7] + a[4] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8] + a[4] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9] + a[4] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[0] - a[4] * b[10],
a[0] * b[5] - a[1] * b[4] + a[3] * b[1],
a[0] * b[6] - a[2] * b[4] + a[3] * b[2],
a[1] * b[6] - a[2] * b[5] + a[3] * b[3],
a[0] * b[8] - a[1] * b[7] + a[4] * b[1],
a[0] * b[9] - a[2] * b[7] + a[4] * b[2],
a[1] * b[9] - a[2] * b[8] + a[4] * b[3],
a[0] * b[10] - a[3] * b[7] + a[4] * b[4],
a[1] * b[10] - a[3] * b[8] + a[4] * b[5],
a[2] * b[10] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Pnt op (const Pnt& a, const Sca& b) { 
	return Pnt (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0]
);
}			
		 
inline Dap op (const Pnt& a, const Ori& b) { 
	return Dap (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[4] * b[0]
);
}			
		 
inline Flp op (const Pnt& a, const Inf& b) { 
	return Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Mnv op (const Pnt& a, const Mnk& b) { 
	return Mnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Sca op (const Pnt& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Par op (const Pnt& a, const Pnt& b) { 
	return Par (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[0] * b[4] - a[4] * b[0],
a[1] * b[4] - a[4] * b[1],
a[2] * b[4] - a[4] * b[2],
a[3] * b[4] - a[4] * b[3]
);
}			
		 
inline Cir op (const Pnt& a, const Par& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] - a[1] * b[6] + a[4] * b[0],
a[0] * b[8] - a[2] * b[6] + a[4] * b[1],
a[1] * b[8] - a[2] * b[7] + a[4] * b[2],
a[0] * b[9] - a[3] * b[6] + a[4] * b[3],
a[1] * b[9] - a[3] * b[7] + a[4] * b[4],
a[2] * b[9] - a[3] * b[8] + a[4] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sph op (const Pnt& a, const Cir& b) { 
	return Sph (
a[0] * b[7] - a[1] * b[6] + a[3] * b[3] - a[4] * b[0],
a[0] * b[8] - a[2] * b[6] + a[3] * b[4] - a[4] * b[1],
a[1] * b[8] - a[2] * b[7] + a[3] * b[5] - a[4] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[4] * b[9]
);
}			
		 
inline Pss op (const Pnt& a, const Sph& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[4] + a[4] * b[3]
);
}			
		 
inline Cir op (const Pnt& a, const Sta& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] - a[1] * b[6] + a[4] * b[0],
a[0] * b[8] - a[2] * b[6] + a[4] * b[1],
a[1] * b[8] - a[2] * b[7] + a[4] * b[2],
 - a[3] * b[6] + a[4] * b[3],
 - a[3] * b[7] + a[4] * b[4],
 - a[3] * b[8] + a[4] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Lin op (const Pnt& a, const Drv& b) { 
	return Lin (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
inline Pln op (const Pnt& a, const Drb& b) { 
	return Pln (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Pnt& a, const Drt& b) { 
	return Pss (
 - a[3] * b[0]
);
}			
		 
inline Dal op (const Pnt& a, const Tnv& b) { 
	return Dal (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2]
);
}			
		 
inline Daf op (const Pnt& a, const Tnb& b) { 
	return Daf (
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Pnt& a, const Tnt& b) { 
	return Pss (
a[4] * b[0]
);
}			
		 
inline Pln op (const Pnt& a, const Lin& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Pnt& a, const Pln& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
inline Lin op (const Pnt& a, const Flp& b) { 
	return Lin (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
inline Sph op (const Pnt& a, const Dfp& b) { 
	return Sph (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3]
);
}			
		 
inline Cir op (const Pnt& a, const Dll& b) { 
	return Cir (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[4] - a[1] * b[3] + a[4] * b[0],
a[0] * b[5] - a[2] * b[3] + a[4] * b[1],
a[1] * b[5] - a[2] * b[4] + a[4] * b[2],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Par op (const Pnt& a, const Dlp& b) { 
	return Par (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[3] - a[4] * b[0],
a[1] * b[3] - a[4] * b[1],
a[2] * b[3] - a[4] * b[2],
a[3] * b[3]
);
}			
		 
inline Sta op (const Pnt& a, const Vec& b) { 
	return Sta (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2]
);
}			
		 
inline Hyp_Pss op (const Pnt& a, const Tri& b) { 
	return Hyp_Pss (
 - a[3] * b[0],
 - a[4] * b[0]
);
}			
		 
inline Par op (const Pnt& a, const Aff& b) { 
	return Par (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2],
 - a[4] * b[3]
);
}			
		 
inline Cir op (const Pnt& a, const Afl& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[4] * b[3],
a[4] * b[4],
a[4] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sph op (const Pnt& a, const Afp& b) { 
	return Sph (
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
 - a[4] * b[3]
);
}			
		 
inline Dal op (const Pnt& a, const Dap& b) { 
	return Dal (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] + a[4] * b[0],
a[1] * b[3] + a[4] * b[1],
a[2] * b[3] + a[4] * b[2]
);
}			
		 
inline Pss op (const Pnt& a, const Daf& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[4] * b[3]
);
}			
		 
inline Daf op (const Pnt& a, const Dal& b) { 
	return Daf (
a[0] * b[4] - a[1] * b[3] - a[4] * b[0],
a[0] * b[5] - a[2] * b[3] - a[4] * b[1],
a[1] * b[5] - a[2] * b[4] - a[4] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mnk_Biv op (const Pnt& a, const Mnv& b) { 
	return Mnk_Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Sca ip (const Pnt& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pnt& a, const Ori& b) { 
	return Sca (
 - a[4] * b[0]
);
}			
		 
inline Sca ip (const Pnt& a, const Inf& b) { 
	return Sca (
 - a[3] * b[0]
);
}			
		 
inline Hyp ip (const Pnt& a, const Mnk& b) { 
	return Hyp (
a[3] * b[0],
 - a[4] * b[0]
);
}			
		 
inline Sca ip (const Pnt& a, const Hyp& b) { 
	return Sca (
 - a[3] * b[1] - a[4] * b[0]
);
}			
		 
inline Sph ip (const Pnt& a, const Pss& b) { 
	return Sph (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0],
a[4] * b[0]
);
}			
		 
inline Sca ip (const Pnt& a, const Pnt& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[4] - a[4] * b[3]
);
}			
		 
inline Pnt ip (const Pnt& a, const Par& b) { 
	return Pnt (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[6] + a[4] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[7] + a[4] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[8] + a[4] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[3] * b[9],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[4] * b[9]
);
}			
		 
inline Par ip (const Pnt& a, const Cir& b) { 
	return Par (
a[2] * b[9] - a[3] * b[3] - a[4] * b[0],
 - a[1] * b[9] - a[3] * b[4] - a[4] * b[1],
a[0] * b[9] - a[3] * b[5] - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[6],
a[0] * b[0] - a[2] * b[2] - a[3] * b[7],
a[0] * b[1] + a[1] * b[2] - a[3] * b[8],
 - a[1] * b[3] - a[2] * b[4] + a[4] * b[6],
a[0] * b[3] - a[2] * b[5] + a[4] * b[7],
a[0] * b[4] + a[1] * b[5] + a[4] * b[8],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
inline Cir ip (const Pnt& a, const Sph& b) { 
	return Cir (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
a[2] * b[4] - a[4] * b[0],
 - a[1] * b[4] - a[4] * b[1],
a[0] * b[4] - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[4] + a[4] * b[3]
);
}			
		 
inline Pnt ip (const Pnt& a, const Sta& b) { 
	return Pnt (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[6] + a[4] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[7] + a[4] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[8] + a[4] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
inline Dlp ip (const Pnt& a, const Drv& b) { 
	return Dlp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Dll ip (const Pnt& a, const Drb& b) { 
	return Dll (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Dfp ip (const Pnt& a, const Drt& b) { 
	return Dfp (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Aff ip (const Pnt& a, const Tnv& b) { 
	return Aff (
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Afl ip (const Pnt& a, const Tnb& b) { 
	return Afl (
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Afp ip (const Pnt& a, const Tnt& b) { 
	return Afp (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[4] * b[0]
);
}			
		 
inline Par ip (const Pnt& a, const Lin& b) { 
	return Par (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[1] * b[0] - a[2] * b[1] + a[4] * b[3],
a[0] * b[0] - a[2] * b[2] + a[4] * b[4],
a[0] * b[1] + a[1] * b[2] + a[4] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Cir ip (const Pnt& a, const Pln& b) { 
	return Cir (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[2] * b[3] - a[4] * b[0],
 - a[1] * b[3] - a[4] * b[1],
a[0] * b[3] - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3]
);
}			
		 
inline Pnt ip (const Pnt& a, const Flp& b) { 
	return Pnt (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3]
);
}			
		 
inline Dll ip (const Pnt& a, const Dfp& b) { 
	return Dll (
a[2] * b[3] - a[3] * b[0],
 - a[1] * b[3] - a[3] * b[1],
a[0] * b[3] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Dlp ip (const Pnt& a, const Dll& b) { 
	return Dlp (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Sca ip (const Pnt& a, const Dlp& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3]
);
}			
		 
inline Sca ip (const Pnt& a, const Vec& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Vec ip (const Pnt& a, const Biv& b) { 
	return Vec (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Biv ip (const Pnt& a, const Tri& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Sca ip (const Pnt& a, const Aff& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3]
);
}			
		 
inline Aff ip (const Pnt& a, const Afl& b) { 
	return Aff (
 - a[1] * b[0] - a[2] * b[1] + a[4] * b[3],
a[0] * b[0] - a[2] * b[2] + a[4] * b[4],
a[0] * b[1] + a[1] * b[2] + a[4] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Afl ip (const Pnt& a, const Afp& b) { 
	return Afl (
a[2] * b[3] - a[4] * b[0],
 - a[1] * b[3] - a[4] * b[1],
a[0] * b[3] - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Pnt ip (const Pnt& a, const Dap& b) { 
	return Pnt (
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
 - a[4] * b[3]
);
}			
		 
inline Cir ip (const Pnt& a, const Daf& b) { 
	return Cir (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[4] * b[3]
);
}			
		 
inline Par ip (const Pnt& a, const Dal& b) { 
	return Par (
 - a[4] * b[0],
 - a[4] * b[1],
 - a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[3],
a[0] * b[0] - a[2] * b[2] - a[3] * b[4],
a[0] * b[1] + a[1] * b[2] - a[3] * b[5],
a[4] * b[3],
a[4] * b[4],
a[4] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		  	
template<>
inline Pnt sp (const Pnt& pnt, const Rot& rot) {					
					
const Rot& t1 = rot;
const Pnt& t2 = pnt;
Sta_Vec t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3],
t1[0] * t2[4],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[1] * t2[4],
t1[2] * t2[4],
t1[3] * t2[4],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[11] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[11] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[11] * t5[1],
t3[3] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Mot& mot) {					
					
const Mot& t1 = mot;
const Pnt& t2 = pnt;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[3],
t1[0] * t2[4] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[1] * t2[4] - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
t1[2] * t2[4] - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[3] * t2[4] - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
 - t1[4] * t2[3],
 - t1[5] * t2[3],
 - t1[6] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[7] * t2[3],
 - t1[7] * t2[3]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] - t3[7] * t5[7] - t3[14] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[5] - t3[5] * t5[4] + t3[6] * t5[7] + t3[7] * t5[6] + t3[14] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[6] - t3[5] * t5[7] - t3[6] * t5[4] - t3[7] * t5[5] - t3[14] * t5[1],
t3[3] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3] + t3[11] * t5[4] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] - t3[15] * t5[7]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Dil& dil) {					
					
const Dil& t1 = dil;
const Pnt& t2 = pnt;
Hyp_Flp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[3],
t1[0] * t2[4] + t1[1] * t2[4],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] + t3[5] * t5[1],
t3[1] * t5[0] + t3[6] * t5[1],
t3[2] * t5[0] + t3[7] * t5[1],
t3[3] * t5[0] + t3[3] * t5[1],
t3[4] * t5[0] - t3[4] * t5[1]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Trv& trv) {					
					
const Trv& t1 = trv;
const Pnt& t2 = pnt;
Pnt_Dap t3 (
t1[0] * t2[0] - t1[1] * t2[4],
t1[0] * t2[1] - t1[2] * t2[4],
t1[0] * t2[2] - t1[3] * t2[4],
t1[0] * t2[3] - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[4],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[1] * t2[4],
t1[2] * t2[4],
t1[3] * t2[4]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] + t3[4] * t5[2],
t3[2] * t5[0] + t3[4] * t5[3],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3],
t3[4] * t5[0]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Pnt& t2 = pnt;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[3] - t1[7] * t2[3],
t1[0] * t2[4] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] + t1[7] * t2[4],
t1[1] * t2[3] - t1[8] * t2[3],
t1[2] * t2[3] - t1[9] * t2[3],
t1[3] * t2[3] - t1[10] * t2[3],
t1[1] * t2[4] - t1[4] * t2[1] + t1[5] * t2[0] + t1[8] * t2[4] - t1[11] * t2[2],
t1[2] * t2[4] - t1[4] * t2[2] + t1[6] * t2[0] + t1[9] * t2[4] + t1[11] * t2[1],
t1[3] * t2[4] - t1[5] * t2[2] + t1[6] * t2[1] + t1[10] * t2[4] - t1[11] * t2[0],
 - t1[4] * t2[3] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
 - t1[5] * t2[3] + t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
 - t1[6] * t2[3] + t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[3],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0] - t1[11] * t2[3]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] - t3[7] * t5[11] + t3[11] * t5[7] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[3] - t3[15] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[5] - t3[5] * t5[4] + t3[6] * t5[11] + t3[7] * t5[6] + t3[11] * t5[8] + t3[12] * t5[7] - t3[13] * t5[10] + t3[14] * t5[2] + t3[15] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[6] - t3[5] * t5[11] - t3[6] * t5[4] - t3[7] * t5[5] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[7] - t3[14] * t5[1] - t3[15] * t5[8],
t3[3] * t5[0] + t3[3] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[3] - t3[7] * t5[10],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] - t3[4] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[10] * t5[3] + t3[10] * t5[10] + t3[11] * t5[4] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[11] - t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Trs& trs) {					
					
const Trs& t1 = trs;
const Pnt& t2 = pnt;
Pnt_Flp t3 (
t1[0] * t2[0] - t1[1] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] - t1[3] * t2[3],
t1[0] * t2[3],
t1[0] * t2[4] - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
 - t1[1] * t2[3],
 - t1[2] * t2[3],
 - t1[3] * t2[3]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] + t3[3] * t5[1],
t3[1] * t5[0] + t3[3] * t5[2],
t3[2] * t5[0] + t3[3] * t5[3],
t3[3] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] + t3[8] * t5[1] + t3[9] * t5[2] + t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Pnt& t2 = pnt;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[3] * t2[4] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] - t1[5] * t2[4] - t1[8] * t2[3] + t1[14] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[6] * t2[4] - t1[9] * t2[3] - t1[14] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] - t1[7] * t2[4] - t1[10] * t2[3] + t1[14] * t2[0],
t1[0] * t2[3] - t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[11] * t2[3],
t1[1] * t2[3] - t1[3] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2] - t1[12] * t2[3],
t1[2] * t2[3] - t1[3] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1] - t1[13] * t2[3],
t1[0] * t2[4] - t1[4] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[11] * t2[4],
t1[1] * t2[4] - t1[4] * t2[1] + t1[8] * t2[0] - t1[10] * t2[2] + t1[12] * t2[4],
t1[2] * t2[4] - t1[4] * t2[2] + t1[9] * t2[0] + t1[10] * t2[1] + t1[13] * t2[4],
t1[3] * t2[4] - t1[4] * t2[3] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[5] * t2[4] - t1[8] * t2[3] + t1[11] * t2[1] - t1[12] * t2[0] + t1[15] * t2[2],
t1[6] * t2[4] - t1[9] * t2[3] + t1[11] * t2[2] - t1[13] * t2[0] - t1[15] * t2[1],
t1[7] * t2[4] - t1[10] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1] + t1[15] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0] + t1[14] * t2[3] - t1[15] * t2[3],
 - t1[8] * t2[2] + t1[9] * t2[1] - t1[10] * t2[0] + t1[14] * t2[4] + t1[15] * t2[4]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[14] - t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[3] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[11] + t3[11] * t5[12] + t3[12] * t5[13] - t3[13] * t5[15] + t3[14] * t5[10] + t3[15] * t5[7],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] + t3[3] * t5[2] - t3[4] * t5[8] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[5] - t3[8] * t5[3] + t3[9] * t5[7] + t3[10] * t5[12] - t3[11] * t5[11] + t3[12] * t5[15] + t3[13] * t5[13] - t3[14] * t5[9] - t3[15] * t5[6],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[1] - t3[4] * t5[9] - t3[5] * t5[10] - t3[6] * t5[4] - t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[13] - t3[11] * t5[15] - t3[12] * t5[11] - t3[13] * t5[12] + t3[14] * t5[8] + t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] - t3[4] * t5[0] - t3[4] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] - t3[10] * t5[3] + t3[11] * t5[5] + t3[12] * t5[6] + t3[13] * t5[7] + t3[14] * t5[14] + t3[14] * t5[15],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] - t3[7] * t5[0] + t3[7] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[4] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] + t3[15] * t5[14] - t3[15] * t5[15]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Pnt& t2 = pnt;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[4] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[4] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[4],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[12] * t2[3] + t1[14] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[13] * t2[3] - t1[14] * t2[0],
t1[1] * t2[4] - t1[7] * t2[1] + t1[8] * t2[0] + t1[11] * t2[4] - t1[15] * t2[2],
t1[2] * t2[4] - t1[7] * t2[2] + t1[9] * t2[0] + t1[12] * t2[4] + t1[15] * t2[1],
t1[3] * t2[4] - t1[8] * t2[2] + t1[9] * t2[1] + t1[13] * t2[4] - t1[15] * t2[0],
t1[4] * t2[4] - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[6] * t2[4] - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[14] * t2[4] - t1[15] * t2[3],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] + t1[14] * t2[4] - t1[15] * t2[3]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[15] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[5] * t5[15] - t3[6] * t5[7] - t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[14] + t3[15] * t5[14],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9] - t3[14] * t5[15] - t3[15] * t5[15]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Pnt& t2 = pnt;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[4],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[4],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[4],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[4],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
t1[1] * t2[4],
t1[2] * t2[4],
t1[3] * t2[4],
t1[4] * t2[4],
t1[5] * t2[4],
t1[6] * t2[4],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[7] * t2[4],
t1[7] * t2[4]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[4] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[7] - t3[14] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[4] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[10] * t5[6] + t3[14] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[4] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[10] * t5[5] - t3[14] * t5[1],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[4] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Pnt& t2 = pnt;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[4] * t2[3],
t1[0] * t2[4] + t1[4] * t2[4],
t1[1] * t2[3] - t1[5] * t2[3],
t1[2] * t2[3] - t1[6] * t2[3],
t1[3] * t2[3] - t1[7] * t2[3],
t1[1] * t2[4] + t1[5] * t2[4],
t1[2] * t2[4] + t1[6] * t2[4],
t1[3] * t2[4] + t1[7] * t2[4],
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[3] - t3[15] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[11] * t5[5] + t3[12] * t5[4] - t3[13] * t5[7] + t3[14] * t5[2] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[11] * t5[6] + t3[12] * t5[7] + t3[13] * t5[4] - t3[14] * t5[1] - t3[15] * t5[5],
t3[3] * t5[0] + t3[3] * t5[4] - t3[5] * t5[1] - t3[5] * t5[5] - t3[6] * t5[2] - t3[6] * t5[6] - t3[7] * t5[3] - t3[7] * t5[7],
t3[4] * t5[0] - t3[4] * t5[4] - t3[8] * t5[1] + t3[8] * t5[5] - t3[9] * t5[2] + t3[9] * t5[6] - t3[10] * t5[3] + t3[10] * t5[7]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Pnt& t2 = pnt;
Pnt_Dap t3 (
t1[0] * t2[0] - t1[1] * t2[4],
t1[0] * t2[1] - t1[2] * t2[4],
t1[0] * t2[2] - t1[3] * t2[4],
t1[0] * t2[3] - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[3],
t1[0] * t2[4] + t1[4] * t2[4],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[1] * t2[4] + t1[4] * t2[0],
t1[2] * t2[4] + t1[4] * t2[1],
t1[3] * t2[4] + t1[4] * t2[2]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] + t3[4] * t5[1] + t3[8] * t5[4],
t3[1] * t5[0] + t3[4] * t5[2] + t3[9] * t5[4],
t3[2] * t5[0] + t3[4] * t5[3] + t3[10] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0] + t3[3] * t5[4] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3],
t3[4] * t5[0] - t3[4] * t5[4]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Pnt& t2 = pnt;
Pnt_Flp t3 (
t1[0] * t2[0] - t1[1] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] - t1[3] * t2[3],
t1[0] * t2[3] - t1[4] * t2[3],
t1[0] * t2[4] - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[4],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[0],
 - t1[2] * t2[3] + t1[4] * t2[1],
 - t1[3] * t2[3] + t1[4] * t2[2]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] + t3[3] * t5[1] + t3[8] * t5[4],
t3[1] * t5[0] + t3[3] * t5[2] + t3[9] * t5[4],
t3[2] * t5[0] + t3[3] * t5[3] + t3[10] * t5[4],
t3[3] * t5[0] + t3[3] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] - t3[4] * t5[4] + t3[8] * t5[1] + t3[9] * t5[2] + t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Trt& trt) {					
					
const Trt& t1 = trt;
const Pnt& t2 = pnt;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[4] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[4] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[4],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[3],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[12] * t2[3],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[13] * t2[3],
t1[1] * t2[4] - t1[7] * t2[1] + t1[8] * t2[0] + t1[11] * t2[4],
t1[2] * t2[4] - t1[7] * t2[2] + t1[9] * t2[0] + t1[12] * t2[4],
t1[3] * t2[4] - t1[8] * t2[2] + t1[9] * t2[1] + t1[13] * t2[4],
t1[4] * t2[4] - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[6] * t2[4] - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Pnt& t2 = pnt;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[4],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[4],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[4],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[0] * t2[4] + t1[7] * t2[4],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[8] * t2[3] - t1[11] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[9] * t2[3] + t1[11] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[0],
t1[1] * t2[4] + t1[8] * t2[4],
t1[2] * t2[4] + t1[9] * t2[4],
t1[3] * t2[4] + t1[10] * t2[4],
t1[4] * t2[4] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[5] * t2[4] + t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[6] * t2[4] + t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[4],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0] + t1[11] * t2[4]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[4] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[11] + t3[11] * t5[7] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[3] - t3[15] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[4] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[6] + t3[11] * t5[8] + t3[12] * t5[7] - t3[13] * t5[10] + t3[14] * t5[2] + t3[15] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[4] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[7] - t3[14] * t5[1] - t3[15] * t5[8],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[3] - t3[7] * t5[10] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[11] + t3[15] * t5[11],
t3[4] * t5[0] - t3[4] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[10] * t5[3] + t3[10] * t5[10]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Tst& tst) {					
					
const Tst& t1 = tst;
const Pnt& t2 = pnt;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[4] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[4] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[4],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[12] * t2[3] + t1[14] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[13] * t2[3] - t1[14] * t2[0],
t1[1] * t2[4] - t1[7] * t2[1] + t1[8] * t2[0] + t1[11] * t2[4],
t1[2] * t2[4] - t1[7] * t2[2] + t1[9] * t2[0] + t1[12] * t2[4],
t1[3] * t2[4] - t1[8] * t2[2] + t1[9] * t2[1] + t1[13] * t2[4],
t1[4] * t2[4] - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[6] * t2[4] - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[14] * t2[4],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] + t1[14] * t2[4]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[14] + t3[15] * t5[14],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Pnt& t2 = pnt;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[4] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[4] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[4],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[3],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[12] * t2[3],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[13] * t2[3],
t1[1] * t2[4] - t1[7] * t2[1] + t1[8] * t2[0] + t1[11] * t2[4] - t1[14] * t2[2],
t1[2] * t2[4] - t1[7] * t2[2] + t1[9] * t2[0] + t1[12] * t2[4] + t1[14] * t2[1],
t1[3] * t2[4] - t1[8] * t2[2] + t1[9] * t2[1] + t1[13] * t2[4] - t1[14] * t2[0],
t1[4] * t2[4] - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[6] * t2[4] - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[14] * t2[3],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] - t1[14] * t2[3]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[14] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[5] * t5[14] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9] - t3[14] * t5[14] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Pnt sp (const Pnt& pnt, const Bst& bst) {					
					
const Bst& t1 = bst;
const Pnt& t2 = pnt;
Pnt_Par t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[4] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[4] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[4],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1],
t1[1] * t2[4] - t1[7] * t2[1] + t1[8] * t2[0],
t1[2] * t2[4] - t1[7] * t2[2] + t1[9] * t2[0],
t1[3] * t2[4] - t1[8] * t2[2] + t1[9] * t2[1],
t1[4] * t2[4] - t1[7] * t2[3] + t1[10] * t2[0],
t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1],
t1[6] * t2[4] - t1[9] * t2[3] + t1[10] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Pnt (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[14] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[12] * t5[10] + t3[14] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[13] * t5[10] - t3[14] * t5[1],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
template<>
inline Pnt re (const Pnt& pnt, const Vec& vec) {					
					
const Vec& t1 = vec;
const Pnt& t2 = pnt;
Pnt t3 = involute( t2);
Pnt_Vec t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
t1[0] * t3[3],
t1[1] * t3[3],
t1[2] * t3[3],
t1[0] * t3[4],
t1[1] * t3[4],
t1[2] * t3[4]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Pnt (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[7] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2]
);

}
		
	
	  	
template<>
inline Pnt re (const Pnt& pnt, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Pnt& t2 = pnt;
Pnt t3 = involute( t2);
Bst t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2] - t1[3] * t3[3],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
t1[0] * t3[3],
t1[1] * t3[3],
t1[2] * t3[3],
t1[0] * t3[4] - t1[3] * t3[0],
t1[1] * t3[4] - t1[3] * t3[1],
t1[2] * t3[4] - t1[3] * t3[2],
 - t1[3] * t3[3]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Pnt (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[4] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2] - t4[5] * t6[3],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1] - t4[6] * t6[3],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
t4[0] * t6[3] - t4[7] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] + t4[10] * t6[3]
);

}
		
	
	  	
template<>
inline Pnt re (const Pnt& pnt, const Pln& pln) {					
					
const Pln& t1 = pln;
const Pnt& t2 = pnt;
Pnt t3 = involute( t2);
Pnt_Sph t4 (
 - t1[0] * t3[3],
 - t1[1] * t3[3],
 - t1[2] * t3[3],
t1[0] * t3[4] - t1[3] * t3[2],
t1[1] * t3[4] + t1[3] * t3[1],
t1[2] * t3[4] - t1[3] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[3] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] - t1[3] * t3[3]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Pnt (
 - t4[2] * t6[3] - t4[7] * t6[0] - t4[8] * t6[1] - t4[10] * t6[2],
t4[1] * t6[3] + t4[6] * t6[0] - t4[8] * t6[2] + t4[10] * t6[1],
 - t4[0] * t6[3] + t4[6] * t6[1] + t4[7] * t6[2] - t4[10] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2],
t4[3] * t6[0] + t4[4] * t6[1] + t4[5] * t6[2] - t4[9] * t6[3] - t4[10] * t6[3]
);

}
		
	
	  	
template<>
inline Pnt re (const Pnt& pnt, const Dll& dll) {					
					
const Dll& t1 = dll;
const Pnt& t2 = pnt;
Pnt t3 = involute( t2);
Pnt_Dll t4 (
t1[0] * t3[1] + t1[1] * t3[2] - t1[3] * t3[3],
 - t1[0] * t3[0] + t1[2] * t3[2] - t1[4] * t3[3],
 - t1[1] * t3[0] - t1[2] * t3[1] - t1[5] * t3[3],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
t1[0] * t3[3],
t1[1] * t3[3],
t1[2] * t3[3],
t1[0] * t3[4] - t1[3] * t3[1] + t1[4] * t3[0],
t1[1] * t3[4] - t1[3] * t3[2] + t1[5] * t3[0],
t1[2] * t3[4] - t1[4] * t3[2] + t1[5] * t3[1],
 - t1[3] * t3[3],
 - t1[4] * t3[3],
 - t1[5] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Pnt (
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[4] * t6[4] + t4[5] * t6[5] - t4[13] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[4] * t6[3] + t4[6] * t6[5] + t4[13] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[5] * t6[3] - t4[6] * t6[4] - t4[13] * t6[0],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[7] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] + t4[10] * t6[3] + t4[11] * t6[4] + t4[12] * t6[5]
);

}
		
	
	  	
template<>
inline Pnt re (const Pnt& pnt, const Lin& lin) {					
					
const Lin& t1 = lin;
const Pnt& t2 = pnt;
Pnt t3 = involute( t2);
Pnt_Lin t4 (
 - t1[0] * t3[3],
 - t1[1] * t3[3],
 - t1[2] * t3[3],
 - t1[3] * t3[3],
 - t1[4] * t3[3],
 - t1[5] * t3[3],
 - t1[0] * t3[1] - t1[1] * t3[2] + t1[3] * t3[4],
t1[0] * t3[0] - t1[2] * t3[2] + t1[4] * t3[4],
t1[1] * t3[0] + t1[2] * t3[1] + t1[5] * t3[4],
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
 - t1[0] * t3[3] + t1[3] * t3[1] - t1[4] * t3[0],
 - t1[1] * t3[3] + t1[3] * t3[2] - t1[5] * t3[0],
 - t1[2] * t3[3] + t1[4] * t3[2] - t1[5] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Pnt (
t4[4] * t6[0] + t4[5] * t6[1] + t4[9] * t6[3] + t4[10] * t6[4] + t4[11] * t6[5],
 - t4[3] * t6[0] + t4[5] * t6[2] + t4[9] * t6[4] - t4[10] * t6[3] + t4[12] * t6[5],
 - t4[3] * t6[1] - t4[4] * t6[2] + t4[9] * t6[5] - t4[11] * t6[3] - t4[12] * t6[4],
 - t4[3] * t6[3] - t4[4] * t6[4] - t4[5] * t6[5],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[6] * t6[3] + t4[7] * t6[4] + t4[8] * t6[5] - t4[10] * t6[0] - t4[11] * t6[1] - t4[12] * t6[2]
);

}
		
	
	  	
template<>
inline Pnt re (const Pnt& pnt, const Par& par) {					
					
const Par& t1 = par;
const Pnt& t2 = pnt;
Pnt t3 = involute( t2);
Pnt_Par t4 (
t1[0] * t3[1] + t1[1] * t3[2] - t1[3] * t3[4] - t1[6] * t3[3],
 - t1[0] * t3[0] + t1[2] * t3[2] - t1[4] * t3[4] - t1[7] * t3[3],
 - t1[1] * t3[0] - t1[2] * t3[1] - t1[5] * t3[4] - t1[8] * t3[3],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2] - t1[9] * t3[3],
 - t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2] + t1[9] * t3[4],
t1[0] * t3[3] - t1[3] * t3[1] + t1[4] * t3[0],
t1[1] * t3[3] - t1[3] * t3[2] + t1[5] * t3[0],
t1[2] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1],
t1[0] * t3[4] - t1[6] * t3[1] + t1[7] * t3[0],
t1[1] * t3[4] - t1[6] * t3[2] + t1[8] * t3[0],
t1[2] * t3[4] - t1[7] * t3[2] + t1[8] * t3[1],
t1[3] * t3[4] - t1[6] * t3[3] + t1[9] * t3[0],
t1[4] * t3[4] - t1[7] * t3[3] + t1[9] * t3[1],
t1[5] * t3[4] - t1[8] * t3[3] + t1[9] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Pnt (
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[3] * t6[6] + t4[4] * t6[3] + t4[5] * t6[7] + t4[6] * t6[8] + t4[8] * t6[4] + t4[9] * t6[5] + t4[11] * t6[9] - t4[14] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[7] + t4[4] * t6[4] - t4[5] * t6[6] + t4[7] * t6[8] - t4[8] * t6[3] + t4[10] * t6[5] + t4[12] * t6[9] + t4[14] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[3] * t6[8] + t4[4] * t6[5] - t4[6] * t6[6] - t4[7] * t6[7] - t4[9] * t6[3] - t4[10] * t6[4] + t4[13] * t6[9] - t4[14] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[3] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[2] - t4[11] * t6[3] - t4[12] * t6[4] - t4[13] * t6[5],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[4] * t6[9] - t4[8] * t6[0] - t4[9] * t6[1] - t4[10] * t6[2] + t4[11] * t6[6] + t4[12] * t6[7] + t4[13] * t6[8]
);

}
		
	
	  	
template<>
inline Pnt re (const Pnt& pnt, const Cir& cir) {					
					
const Cir& t1 = cir;
const Pnt& t2 = pnt;
Pnt t3 = involute( t2);
Pnt_Cir t4 (
 - t1[0] * t3[4] - t1[3] * t3[3] + t1[9] * t3[2],
 - t1[1] * t3[4] - t1[4] * t3[3] - t1[9] * t3[1],
 - t1[2] * t3[4] - t1[5] * t3[3] + t1[9] * t3[0],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[6] * t3[3],
t1[0] * t3[0] - t1[2] * t3[2] - t1[7] * t3[3],
t1[1] * t3[0] + t1[2] * t3[1] - t1[8] * t3[3],
 - t1[3] * t3[1] - t1[4] * t3[2] + t1[6] * t3[4],
t1[3] * t3[0] - t1[5] * t3[2] + t1[7] * t3[4],
t1[4] * t3[0] + t1[5] * t3[1] + t1[8] * t3[4],
t1[6] * t3[0] + t1[7] * t3[1] + t1[8] * t3[2],
t1[0] * t3[4] - t1[3] * t3[3] + t1[6] * t3[1] - t1[7] * t3[0],
t1[1] * t3[4] - t1[4] * t3[3] + t1[6] * t3[2] - t1[8] * t3[0],
t1[2] * t3[4] - t1[5] * t3[3] + t1[7] * t3[2] - t1[8] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0] + t1[9] * t3[3],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0] + t1[9] * t3[4]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Pnt (
 - t4[2] * t6[9] + t4[4] * t6[3] + t4[5] * t6[4] + t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[6] + t4[10] * t6[7] + t4[11] * t6[8] + t4[13] * t6[5] + t4[14] * t6[2],
t4[1] * t6[9] - t4[3] * t6[3] + t4[5] * t6[5] - t4[6] * t6[0] + t4[8] * t6[2] + t4[9] * t6[7] - t4[10] * t6[6] + t4[12] * t6[8] - t4[13] * t6[4] - t4[14] * t6[1],
 - t4[0] * t6[9] - t4[3] * t6[4] - t4[4] * t6[5] - t4[6] * t6[1] - t4[7] * t6[2] + t4[9] * t6[8] - t4[11] * t6[6] - t4[12] * t6[7] + t4[13] * t6[3] + t4[14] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] - t4[3] * t6[6] - t4[4] * t6[7] - t4[5] * t6[8] + t4[10] * t6[0] + t4[11] * t6[1] + t4[12] * t6[2] + t4[13] * t6[9],
 - t4[0] * t6[3] - t4[1] * t6[4] - t4[2] * t6[5] + t4[6] * t6[6] + t4[7] * t6[7] + t4[8] * t6[8] - t4[10] * t6[3] - t4[11] * t6[4] - t4[12] * t6[5] + t4[14] * t6[9]
);

}
		
	
	  	
template<>
inline Pnt re (const Pnt& pnt, const Sph& sph) {					
					
const Sph& t1 = sph;
const Pnt& t2 = pnt;
Pnt t3 = involute( t2);
Pnt_Sph t4 (
 - t1[0] * t3[3] - t1[3] * t3[2],
 - t1[1] * t3[3] + t1[3] * t3[1],
 - t1[2] * t3[3] - t1[3] * t3[0],
t1[0] * t3[4] - t1[4] * t3[2],
t1[1] * t3[4] + t1[4] * t3[1],
t1[2] * t3[4] - t1[4] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[3] * t3[4] - t1[4] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] + t1[3] * t3[4] - t1[4] * t3[3]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Pnt (
 - t4[2] * t6[4] - t4[5] * t6[3] - t4[7] * t6[0] - t4[8] * t6[1] - t4[10] * t6[2],
t4[1] * t6[4] + t4[4] * t6[3] + t4[6] * t6[0] - t4[8] * t6[2] + t4[10] * t6[1],
 - t4[0] * t6[4] - t4[3] * t6[3] + t4[6] * t6[1] + t4[7] * t6[2] - t4[10] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] - t4[9] * t6[3] + t4[10] * t6[3],
t4[3] * t6[0] + t4[4] * t6[1] + t4[5] * t6[2] - t4[9] * t6[4] - t4[10] * t6[4]
);

}
		
	
		
	} //vsr::
	#endif
	