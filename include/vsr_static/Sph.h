		#ifndef SPH_H_INCLUDED
		#define SPH_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Sph gp (const Sph& a, const Sca& b) { 
	return Sph (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0]
);
}			
		 
inline Ori_Sph gp (const Sph& a, const Ori& b) { 
	return Ori_Sph (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[4] * b[0],
 - a[4] * b[0]
);
}			
		 
inline Inf_Sph gp (const Sph& a, const Inf& b) { 
	return Inf_Sph (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[3] * b[0],
a[3] * b[0]
);
}			
		 
inline Mnk_Sph gp (const Sph& a, const Mnk& b) { 
	return Mnk_Sph (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
 - a[4] * b[0]
);
}			
		 
inline Hyp_Sph gp (const Sph& a, const Hyp& b) { 
	return Hyp_Sph (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
 - a[3] * b[1] - a[4] * b[0],
a[3] * b[1] - a[4] * b[0]
);
}			
		 
inline Pnt gp (const Sph& a, const Pss& b) { 
	return Pnt (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0],
 - a[4] * b[0]
);
}			
		 
inline Pnt_Sph gp (const Sph& a, const Pnt& b) { 
	return Pnt_Sph (
 - a[0] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] - a[3] * b[0],
a[0] * b[4] - a[4] * b[2],
a[1] * b[4] + a[4] * b[1],
a[2] * b[4] - a[4] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[4] - a[4] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[4] - a[4] * b[3]
);
}			
		 
inline Pnt_Cir gp (const Sph& a, const Par& b) { 
	return Pnt_Cir (
a[0] * b[9] + a[3] * b[8] + a[4] * b[5],
a[1] * b[9] - a[3] * b[7] - a[4] * b[4],
a[2] * b[9] + a[3] * b[6] + a[4] * b[3],
 - a[0] * b[4] - a[1] * b[5] - a[3] * b[2],
a[0] * b[3] - a[2] * b[5] + a[3] * b[1],
a[1] * b[3] + a[2] * b[4] - a[3] * b[0],
a[0] * b[7] + a[1] * b[8] - a[4] * b[2],
 - a[0] * b[6] + a[2] * b[8] + a[4] * b[1],
 - a[1] * b[6] - a[2] * b[7] - a[4] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[8] + a[4] * b[5],
a[0] * b[2] - a[2] * b[0] + a[3] * b[7] - a[4] * b[4],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[6] + a[4] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3] + a[3] * b[9],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] - a[4] * b[9]
);
}			
		 
inline Pnt_Par gp (const Sph& a, const Cir& b) { 
	return Pnt_Par (
a[0] * b[7] + a[1] * b[8] + a[3] * b[5] + a[4] * b[2],
 - a[0] * b[6] + a[2] * b[8] - a[3] * b[4] - a[4] * b[1],
 - a[1] * b[6] - a[2] * b[7] + a[3] * b[3] + a[4] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[9],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5] + a[4] * b[9],
a[1] * b[2] - a[2] * b[1] - a[3] * b[8],
 - a[0] * b[2] + a[2] * b[0] + a[3] * b[7],
a[0] * b[1] - a[1] * b[0] - a[3] * b[6],
 - a[1] * b[5] + a[2] * b[4] + a[4] * b[8],
a[0] * b[5] - a[2] * b[3] - a[4] * b[7],
 - a[0] * b[4] + a[1] * b[3] + a[4] * b[6],
 - a[2] * b[9] - a[3] * b[5] + a[4] * b[2],
a[1] * b[9] + a[3] * b[4] - a[4] * b[1],
 - a[0] * b[9] - a[3] * b[3] + a[4] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
inline Pnt_Pnt gp (const Sph& a, const Sph& b) { 
	return Pnt_Pnt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[4] - a[4] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[2] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] - a[3] * b[0],
 - a[2] * b[4] + a[4] * b[2],
a[1] * b[4] - a[4] * b[1],
 - a[0] * b[4] + a[4] * b[0],
a[3] * b[4] - a[4] * b[3]
);
}			
		 
inline Pnt_Cir gp (const Sph& a, const Sta& b) { 
	return Pnt_Cir (
a[3] * b[8] + a[4] * b[5],
 - a[3] * b[7] - a[4] * b[4],
a[3] * b[6] + a[4] * b[3],
 - a[0] * b[4] - a[1] * b[5] - a[3] * b[2],
a[0] * b[3] - a[2] * b[5] + a[3] * b[1],
a[1] * b[3] + a[2] * b[4] - a[3] * b[0],
a[0] * b[7] + a[1] * b[8] - a[4] * b[2],
 - a[0] * b[6] + a[2] * b[8] + a[4] * b[1],
 - a[1] * b[6] - a[2] * b[7] - a[4] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[8] + a[4] * b[5],
a[0] * b[2] - a[2] * b[0] + a[3] * b[7] - a[4] * b[4],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[6] + a[4] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
inline Inf_Cir gp (const Sph& a, const Drv& b) { 
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
		 
inline Inf_Par gp (const Sph& a, const Drb& b) { 
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
		 
inline Tsd gp (const Sph& a, const Drt& b) { 
	return Tsd (
 - a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Ori_Cir gp (const Sph& a, const Tnv& b) { 
	return Ori_Cir (
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Ori_Par gp (const Sph& a, const Tnb& b) { 
	return Ori_Par (
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0]
);
}			
		 
inline Tvd gp (const Sph& a, const Tnt& b) { 
	return Tvd (
 - a[4] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[4] * b[0]
);
}			
		 
inline Pnt_Dll gp (const Sph& a, const Lin& b) { 
	return Pnt_Dll (
a[0] * b[4] + a[1] * b[5] + a[3] * b[2],
 - a[0] * b[3] + a[2] * b[5] - a[3] * b[1],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[5],
a[3] * b[4],
 - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1] + a[4] * b[5],
a[0] * b[2] - a[2] * b[0] - a[4] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[3],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Pnt_Pnt gp (const Sph& a, const Pln& b) { 
	return Pnt_Pnt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[2] * b[3] + a[4] * b[2],
a[1] * b[3] - a[4] * b[1],
 - a[0] * b[3] + a[4] * b[0],
a[3] * b[3]
);
}			
		 
inline Sph_Flp gp (const Sph& a, const Flp& b) { 
	return Sph_Flp (
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
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3]
);
}			
		 
inline Pnt_Lin gp (const Sph& a, const Dll& b) { 
	return Pnt_Lin (
a[3] * b[5],
 - a[3] * b[4],
a[3] * b[3],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[4] + a[1] * b[5] - a[4] * b[2],
 - a[0] * b[3] + a[2] * b[5] + a[4] * b[1],
 - a[1] * b[3] - a[2] * b[4] - a[4] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[5],
a[0] * b[2] - a[2] * b[0] + a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Pnt_Sph gp (const Sph& a, const Dlp& b) { 
	return Pnt_Sph (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[3] - a[4] * b[2],
a[1] * b[3] + a[4] * b[1],
a[2] * b[3] - a[4] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Sph_Vec gp (const Sph& a, const Vec& b) { 
	return Sph_Vec (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[4] * b[2],
a[4] * b[1],
 - a[4] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sph_Biv gp (const Sph& a, const Biv& b) { 
	return Sph_Biv (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[4] * b[2],
a[4] * b[1],
 - a[4] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Mnk_Pnt gp (const Sph& a, const Tri& b) { 
	return Mnk_Pnt (
a[3] * b[0],
a[4] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Pnt_Sph gp (const Sph& a, const Aff& b) { 
	return Pnt_Sph (
 - a[0] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] - a[3] * b[0],
 - a[4] * b[2],
a[4] * b[1],
 - a[4] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[4] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3]
);
}			
		 
inline Sph_Afl gp (const Sph& a, const Afl& b) { 
	return Sph_Afl (
a[4] * b[5],
 - a[4] * b[4],
a[4] * b[3],
 - a[0] * b[4] - a[1] * b[5] - a[3] * b[2],
a[0] * b[3] - a[2] * b[5] + a[3] * b[1],
a[1] * b[3] + a[2] * b[4] - a[3] * b[0],
 - a[4] * b[2],
a[4] * b[1],
 - a[4] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[4] * b[5],
a[0] * b[2] - a[2] * b[0] - a[4] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
inline Sph_Afp gp (const Sph& a, const Afp& b) { 
	return Sph_Afp (
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[4] * b[3],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[2] * b[3] + a[4] * b[2],
a[1] * b[3] - a[4] * b[1],
 - a[0] * b[3] + a[4] * b[0]
);
}			
		 
inline Mnk_Sta_Biv gp (const Sph& a, const Rot& b) { 
	return Mnk_Sta_Biv (
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
 - a[4] * b[3],
a[4] * b[2],
 - a[4] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0],
a[4] * b[0]
);
}			
		 
inline Mtt gp (const Sph& a, const Mot& b) { 
	return Mtt (
 - a[3] * b[7],
a[3] * b[6],
 - a[3] * b[5],
a[3] * b[4],
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7] - a[4] * b[3],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[4] * b[2],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5] - a[4] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[4],
a[3] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[4] * b[0]
);
}			
		 
inline Hyp_Afp gp (const Sph& a, const Dil& b) { 
	return Hyp_Afp (
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] + a[3] * b[1],
a[4] * b[0] - a[4] * b[1]
);
}			
		 
inline Pnt_Afp gp (const Sph& a, const Trv& b) { 
	return Pnt_Afp (
a[4] * b[3],
 - a[4] * b[2],
a[4] * b[1],
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0] + a[4] * b[3],
a[1] * b[0] - a[4] * b[2],
a[2] * b[0] + a[4] * b[1],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[4] * b[0]
);
}			
		 
inline Mtt gp (const Sph& a, const Mtd& b) { 
	return Mtt (
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[3] * b[11],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9] + a[3] * b[6],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8] - a[3] * b[5],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7] + a[3] * b[4],
 - a[3] * b[3] - a[3] * b[10],
a[3] * b[2] + a[3] * b[9],
 - a[3] * b[1] - a[3] * b[8],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] - a[4] * b[3] + a[4] * b[10],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[4] * b[2] - a[4] * b[9],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] - a[4] * b[1] + a[4] * b[8],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[11],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[4],
a[3] * b[0] + a[3] * b[7],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[4] * b[0] - a[4] * b[7]
);
}			
		 
inline Sph_Flp gp (const Sph& a, const Trs& b) { 
	return Sph_Flp (
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
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[4] * b[0]
);
}			
		 
inline Rtc gp (const Sph& a, const Rtc& b) { 
	return Rtc (
a[0] * b[12] + a[1] * b[13] - a[2] * b[15] + a[3] * b[10] + a[4] * b[7],
 - a[0] * b[11] + a[1] * b[15] + a[2] * b[13] - a[3] * b[9] - a[4] * b[6],
 - a[0] * b[15] - a[1] * b[11] - a[2] * b[12] + a[3] * b[8] + a[4] * b[5],
a[0] * b[5] + a[1] * b[6] + a[2] * b[7] + a[3] * b[14] + a[3] * b[15],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] + a[4] * b[14] - a[4] * b[15],
 - a[0] * b[3] + a[1] * b[7] - a[2] * b[6] - a[3] * b[2] - a[3] * b[13],
 - a[0] * b[7] - a[1] * b[3] + a[2] * b[5] + a[3] * b[1] + a[3] * b[12],
a[0] * b[6] - a[1] * b[5] - a[2] * b[3] - a[3] * b[0] - a[3] * b[11],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9] - a[4] * b[2] + a[4] * b[13],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8] + a[4] * b[1] - a[4] * b[12],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4] - a[4] * b[0] + a[4] * b[11],
a[0] * b[1] + a[1] * b[2] - a[2] * b[14] - a[3] * b[10] + a[4] * b[7],
 - a[0] * b[0] + a[1] * b[14] + a[2] * b[2] + a[3] * b[9] - a[4] * b[6],
 - a[0] * b[14] - a[1] * b[0] - a[2] * b[1] - a[3] * b[8] + a[4] * b[5],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] - a[3] * b[4] - a[4] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[4] - a[4] * b[3]
);
}			
		 
inline Mtt gp (const Sph& a, const Mtt& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[15] - a[4] * b[14],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[9] + a[4] * b[6],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[8] - a[4] * b[5],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[7] + a[4] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[14] - a[3] * b[3] - a[3] * b[13],
a[0] * b[4] - a[1] * b[14] - a[2] * b[6] + a[3] * b[2] + a[3] * b[12],
a[0] * b[14] + a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[11],
a[0] * b[8] + a[1] * b[9] - a[2] * b[15] - a[4] * b[3] + a[4] * b[13],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9] + a[4] * b[2] - a[4] * b[12],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8] - a[4] * b[1] + a[4] * b[11],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[15] - a[4] * b[14],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8] - a[4] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7] + a[4] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[4] * b[0] - a[4] * b[10]
);
}			
		 
inline Mtt gp (const Sph& a, const Rtt& b) { 
	return Mtt (
 - a[4] * b[7],
a[4] * b[6],
 - a[4] * b[5],
a[4] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[7] - a[3] * b[3],
a[0] * b[4] - a[1] * b[7] - a[2] * b[6] + a[3] * b[2],
a[0] * b[7] + a[1] * b[4] + a[2] * b[5] - a[3] * b[1],
 - a[4] * b[3],
a[4] * b[2],
 - a[4] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[4] * b[7],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[4] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[4] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0],
a[4] * b[0]
);
}			
		 
inline Mtt gp (const Sph& a, const Rtd& b) { 
	return Mtt (
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7],
a[0] * b[4] - a[1] * b[7] + a[2] * b[6],
a[0] * b[7] + a[1] * b[4] - a[2] * b[5],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[4],
 - a[3] * b[3] - a[3] * b[7],
a[3] * b[2] + a[3] * b[6],
 - a[3] * b[1] - a[3] * b[5],
 - a[4] * b[3] + a[4] * b[7],
a[4] * b[2] - a[4] * b[6],
 - a[4] * b[1] + a[4] * b[5],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0] + a[3] * b[4],
a[4] * b[0] - a[4] * b[4]
);
}			
		 
inline Pnt_Afp gp (const Sph& a, const Tvd& b) { 
	return Pnt_Afp (
a[0] * b[4] + a[4] * b[3],
a[1] * b[4] - a[4] * b[2],
a[2] * b[4] + a[4] * b[1],
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0] + a[4] * b[3],
a[1] * b[0] - a[4] * b[2],
a[2] * b[0] + a[4] * b[1],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[3] * b[4],
a[4] * b[0] - a[4] * b[4]
);
}			
		 
inline Sph_Flp gp (const Sph& a, const Tsd& b) { 
	return Sph_Flp (
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
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[4] * b[0] - a[4] * b[4]
);
}			
		 
inline Mtt gp (const Sph& a, const Trt& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[9] + a[4] * b[6],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[8] - a[4] * b[5],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[7] + a[4] * b[4],
 - a[0] * b[5] - a[1] * b[6] - a[3] * b[3] - a[3] * b[13],
a[0] * b[4] - a[2] * b[6] + a[3] * b[2] + a[3] * b[12],
a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[11],
a[0] * b[8] + a[1] * b[9] - a[4] * b[3] + a[4] * b[13],
 - a[0] * b[7] + a[2] * b[9] + a[4] * b[2] - a[4] * b[12],
 - a[1] * b[7] - a[2] * b[8] - a[4] * b[1] + a[4] * b[11],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8] - a[4] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7] + a[4] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[4] * b[0] - a[4] * b[10]
);
}			
		 
inline Mtt gp (const Sph& a, const Rvd& b) { 
	return Mtt (
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[4] * b[11],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9] + a[4] * b[6],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8] - a[4] * b[5],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7] + a[4] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[11] - a[3] * b[3] - a[3] * b[10],
a[0] * b[4] - a[1] * b[11] - a[2] * b[6] + a[3] * b[2] + a[3] * b[9],
a[0] * b[11] + a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[8],
 - a[4] * b[3] + a[4] * b[10],
a[4] * b[2] - a[4] * b[9],
 - a[4] * b[1] + a[4] * b[8],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[4] * b[11],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[4] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[4] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[7],
a[4] * b[0] - a[4] * b[7]
);
}			
		 
inline Mtt gp (const Sph& a, const Tst& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[4] * b[14],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[9] + a[4] * b[6],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[8] - a[4] * b[5],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[7] + a[4] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[14] - a[3] * b[3] - a[3] * b[13],
a[0] * b[4] - a[1] * b[14] - a[2] * b[6] + a[3] * b[2] + a[3] * b[12],
a[0] * b[14] + a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[11],
a[0] * b[8] + a[1] * b[9] - a[4] * b[3] + a[4] * b[13],
 - a[0] * b[7] + a[2] * b[9] + a[4] * b[2] - a[4] * b[12],
 - a[1] * b[7] - a[2] * b[8] - a[4] * b[1] + a[4] * b[11],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[4] * b[14],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8] - a[4] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7] + a[4] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[4] * b[0] - a[4] * b[10]
);
}			
		 
inline Mtt gp (const Sph& a, const Tvt& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[14],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[9] + a[4] * b[6],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[8] - a[4] * b[5],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[7] + a[4] * b[4],
 - a[0] * b[5] - a[1] * b[6] - a[3] * b[3] - a[3] * b[13],
a[0] * b[4] - a[2] * b[6] + a[3] * b[2] + a[3] * b[12],
a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[11],
a[0] * b[8] + a[1] * b[9] - a[2] * b[14] - a[4] * b[3] + a[4] * b[13],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9] + a[4] * b[2] - a[4] * b[12],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8] - a[4] * b[1] + a[4] * b[11],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[14],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8] - a[4] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7] + a[4] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[4] * b[0] - a[4] * b[10]
);
}			
		 
inline Sph op (const Sph& a, const Sca& b) { 
	return Sph (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0]
);
}			
		 
inline Pss op (const Sph& a, const Ori& b) { 
	return Pss (
 - a[4] * b[0]
);
}			
		 
inline Pss op (const Sph& a, const Inf& b) { 
	return Pss (
a[3] * b[0]
);
}			
		 
inline Sca op (const Sph& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Sph& a, const Hyp& b) { 
	return Pss (
a[3] * b[1] - a[4] * b[0]
);
}			
		 
inline Sca op (const Sph& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Sph& a, const Pnt& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[4] - a[4] * b[3]
);
}			
		 
inline Sca op (const Sph& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Sph& a, const Dlp& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Pss op (const Sph& a, const Vec& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Sph& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Sph& a, const Aff& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3]
);
}			
		 
inline Sca op (const Sph& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Sph& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Pnt ip (const Sph& a, const Pss& b) { 
	return Pnt (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0],
 - a[4] * b[0]
);
}			
		 
inline Sca ip (const Sph& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Sph& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[4] - a[4] * b[3]
);
}			
		 
inline Sca ip (const Sph& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Drt& b) { 
	return Sca (
 - a[3] * b[0]
);
}			
		 
inline Sca ip (const Sph& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Tnt& b) { 
	return Sca (
 - a[4] * b[0]
);
}			
		 
inline Sca ip (const Sph& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Pln& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3]
);
}			
		 
inline Sca ip (const Sph& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Sph& a, const Afp& b) { 
	return Sca (
);
}			
		  	
inline Sph sp (const Sph& sph, const Rot& rot) {					
					
const Rot& t1 = rot;
const Sph& t2 = sph;
Mnk_Sta_Biv t3 (
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
 - t1[3] * t2[4],
t1[2] * t2[4],
 - t1[1] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3],
t1[0] * t2[4]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Sph (
t3[6] * t5[1] + t3[7] * t5[0] - t3[8] * t5[3] + t3[9] * t5[2],
t3[6] * t5[2] + t3[7] * t5[3] + t3[8] * t5[0] - t3[9] * t5[1],
t3[6] * t5[3] - t3[7] * t5[2] + t3[8] * t5[1] + t3[9] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[10] * t5[0],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[11] * t5[0]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Mot& mot) {					
					
const Mot& t1 = mot;
const Sph& t2 = sph;
Mtt t3 (
 - t1[7] * t2[3],
t1[6] * t2[3],
 - t1[5] * t2[3],
t1[4] * t2[3],
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
 - t1[3] * t2[4] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
t1[2] * t2[4] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
 - t1[1] * t2[4] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[7] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[4] * t2[3],
t1[0] * t2[3],
t1[0] * t2[4] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Sph (
 - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[7] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[6],
 - t3[4] * t5[6] + t3[5] * t5[7] + t3[6] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[5],
 - t3[4] * t5[7] - t3[5] * t5[6] + t3[6] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[4],
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[14] * t5[0],
t3[0] * t5[7] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[7] + t3[11] * t5[6] - t3[12] * t5[5] + t3[13] * t5[4] + t3[15] * t5[0]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Dil& dil) {					
					
const Dil& t1 = dil;
const Sph& t2 = sph;
Hyp_Afp t3 (
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[3],
t1[0] * t2[4] + t1[1] * t2[4]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Sph (
t3[0] * t5[1] + t3[3] * t5[0],
t3[1] * t5[1] + t3[4] * t5[0],
t3[2] * t5[1] + t3[5] * t5[0],
t3[6] * t5[0] + t3[6] * t5[1],
t3[7] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Trv& trv) {					
					
const Trv& t1 = trv;
const Sph& t2 = sph;
Pnt_Afp t3 (
t1[3] * t2[4],
 - t1[2] * t2[4],
t1[1] * t2[4],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[0] - t1[3] * t2[4],
t1[0] * t2[1] + t1[2] * t2[4],
t1[0] * t2[2] - t1[1] * t2[4],
t1[0] * t2[3] + t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Sph (
t3[6] * t5[0] + t3[10] * t5[3],
t3[7] * t5[0] - t3[10] * t5[2],
t3[8] * t5[0] + t3[10] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] - t3[6] * t5[3] + t3[7] * t5[2] - t3[8] * t5[1] + t3[9] * t5[0],
t3[10] * t5[0]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Sph& t2 = sph;
Mtt t3 (
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2] - t1[11] * t2[3],
t1[6] * t2[3] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
 - t1[5] * t2[3] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[4] * t2[3] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
 - t1[3] * t2[3] + t1[10] * t2[3],
t1[2] * t2[3] - t1[9] * t2[3],
 - t1[1] * t2[3] + t1[8] * t2[3],
 - t1[3] * t2[4] + t1[5] * t2[0] + t1[6] * t2[1] - t1[10] * t2[4] + t1[11] * t2[2],
t1[2] * t2[4] - t1[4] * t2[0] + t1[6] * t2[2] + t1[9] * t2[4] - t1[11] * t2[1],
 - t1[1] * t2[4] - t1[4] * t2[1] - t1[5] * t2[2] - t1[8] * t2[4] + t1[11] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[11] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[4] * t2[3],
t1[0] * t2[3] - t1[7] * t2[3],
t1[0] * t2[4] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[7] * t2[4]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Sph (
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[11] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[6],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] - t3[4] * t5[6] + t3[5] * t5[11] + t3[6] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[5],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] - t3[4] * t5[11] - t3[5] * t5[6] + t3[6] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[4],
t3[4] * t5[3] + t3[4] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] + t3[14] * t5[0] + t3[14] * t5[7],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[7] * t5[3] - t3[7] * t5[10] - t3[8] * t5[2] + t3[8] * t5[9] + t3[9] * t5[1] - t3[9] * t5[8] + t3[10] * t5[11] + t3[11] * t5[6] - t3[12] * t5[5] + t3[13] * t5[4] + t3[15] * t5[0] - t3[15] * t5[7]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Trs& trs) {					
					
const Trs& t1 = trs;
const Sph& t2 = sph;
Sph_Flp t3 (
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
t1[0] * t2[4] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Sph (
t3[6] * t5[0] - t3[9] * t5[3],
t3[7] * t5[0] + t3[9] * t5[2],
t3[8] * t5[0] - t3[9] * t5[1],
t3[9] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[6] * t5[3] - t3[7] * t5[2] + t3[8] * t5[1] + t3[10] * t5[0]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Sph& t2 = sph;
Rtc t3 (
 - t1[7] * t2[4] - t1[10] * t2[3] - t1[12] * t2[0] - t1[13] * t2[1] - t1[15] * t2[2],
t1[6] * t2[4] + t1[9] * t2[3] + t1[11] * t2[0] - t1[13] * t2[2] + t1[15] * t2[1],
 - t1[5] * t2[4] - t1[8] * t2[3] + t1[11] * t2[1] + t1[12] * t2[2] - t1[15] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2] - t1[14] * t2[3] + t1[15] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2] - t1[14] * t2[4] - t1[15] * t2[4],
t1[2] * t2[3] + t1[3] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1] - t1[13] * t2[3],
 - t1[1] * t2[3] + t1[3] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0] + t1[12] * t2[3],
t1[0] * t2[3] + t1[3] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[3],
t1[2] * t2[4] - t1[4] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1] + t1[13] * t2[4],
 - t1[1] * t2[4] - t1[4] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0] - t1[12] * t2[4],
t1[0] * t2[4] - t1[4] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] + t1[7] * t2[4] - t1[10] * t2[3] - t1[14] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] - t1[6] * t2[4] + t1[9] * t2[3] + t1[14] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[5] * t2[4] - t1[8] * t2[3] - t1[14] * t2[0],
t1[3] * t2[4] + t1[4] * t2[3] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[4] + t1[4] * t2[3]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Sph (
t3[0] * t5[12] - t3[1] * t5[11] + t3[2] * t5[15] + t3[3] * t5[8] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[10] + t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[1] - t3[12] * t5[0] + t3[13] * t5[14] + t3[14] * t5[13] + t3[15] * t5[2],
t3[0] * t5[13] - t3[1] * t5[15] - t3[2] * t5[11] + t3[3] * t5[9] - t3[4] * t5[6] + t3[5] * t5[10] + t3[6] * t5[4] - t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[2] - t3[12] * t5[14] - t3[13] * t5[0] - t3[14] * t5[12] - t3[15] * t5[1],
t3[0] * t5[15] + t3[1] * t5[13] - t3[2] * t5[12] + t3[3] * t5[10] - t3[4] * t5[7] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[14] + t3[12] * t5[2] - t3[13] * t5[1] + t3[14] * t5[11] + t3[15] * t5[0],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] - t3[3] * t5[14] - t3[3] * t5[15] - t3[5] * t5[2] - t3[5] * t5[13] + t3[6] * t5[1] + t3[6] * t5[12] - t3[7] * t5[0] - t3[7] * t5[11] - t3[11] * t5[7] + t3[12] * t5[6] - t3[13] * t5[5] + t3[14] * t5[3] - t3[15] * t5[3],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] - t3[4] * t5[14] + t3[4] * t5[15] - t3[8] * t5[2] + t3[8] * t5[13] + t3[9] * t5[1] - t3[9] * t5[12] - t3[10] * t5[0] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[9] + t3[13] * t5[8] + t3[14] * t5[4] + t3[15] * t5[4]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Sph& t2 = sph;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[14] * t2[4] - t1[15] * t2[3],
t1[6] * t2[4] + t1[9] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[4] * t2[4] + t1[7] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[13] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[12] * t2[3] + t1[14] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[11] * t2[3] - t1[14] * t2[0],
 - t1[3] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[4] + t1[15] * t2[2],
t1[2] * t2[4] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[4] - t1[15] * t2[1],
 - t1[1] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[4] + t1[15] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[14] * t2[4] - t1[15] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[4] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[4]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Sph (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[15] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[15] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[10] * t5[14] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10],
t3[0] * t5[15] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[15] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Sph& t2 = sph;
Mtt t3 (
 - t1[7] * t2[4],
t1[6] * t2[4],
 - t1[5] * t2[4],
t1[4] * t2[4],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
 - t1[3] * t2[4],
t1[2] * t2[4],
 - t1[1] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[4],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[4],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[0] * t2[4]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Sph (
t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] + t3[15] * t5[6],
t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] - t3[15] * t5[5],
t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] - t3[10] * t5[7] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0],
t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[15] * t5[0]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Sph& t2 = sph;
Mtt t3 (
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
 - t1[3] * t2[3] + t1[7] * t2[3],
t1[2] * t2[3] - t1[6] * t2[3],
 - t1[1] * t2[3] + t1[5] * t2[3],
 - t1[3] * t2[4] - t1[7] * t2[4],
t1[2] * t2[4] + t1[6] * t2[4],
 - t1[1] * t2[4] - t1[5] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] - t1[4] * t2[3],
t1[0] * t2[4] + t1[4] * t2[4]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Sph (
t3[0] * t5[5] + t3[1] * t5[4] - t3[2] * t5[7] + t3[3] * t5[6] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[4] - t3[3] * t5[5] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] + t3[3] * t5[4] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0],
t3[4] * t5[3] + t3[4] * t5[7] - t3[5] * t5[2] - t3[5] * t5[6] + t3[6] * t5[1] + t3[6] * t5[5] + t3[14] * t5[0] + t3[14] * t5[4],
t3[7] * t5[3] - t3[7] * t5[7] - t3[8] * t5[2] + t3[8] * t5[6] + t3[9] * t5[1] - t3[9] * t5[5] + t3[15] * t5[0] - t3[15] * t5[4]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Sph& t2 = sph;
Pnt_Afp t3 (
t1[3] * t2[4] + t1[4] * t2[0],
 - t1[2] * t2[4] + t1[4] * t2[1],
t1[1] * t2[4] + t1[4] * t2[2],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[0] - t1[3] * t2[4],
t1[0] * t2[1] + t1[2] * t2[4],
t1[0] * t2[2] - t1[1] * t2[4],
t1[0] * t2[3] + t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[4] * t2[3],
t1[0] * t2[4] + t1[4] * t2[4]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Sph (
t3[0] * t5[4] + t3[6] * t5[0] + t3[10] * t5[3],
t3[1] * t5[4] + t3[7] * t5[0] - t3[10] * t5[2],
t3[2] * t5[4] + t3[8] * t5[0] + t3[10] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] - t3[6] * t5[3] + t3[7] * t5[2] - t3[8] * t5[1] + t3[9] * t5[0] + t3[9] * t5[4],
t3[10] * t5[0] - t3[10] * t5[4]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Sph& t2 = sph;
Sph_Flp t3 (
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
t1[0] * t2[4] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0] + t1[4] * t2[4]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Sph (
t3[0] * t5[4] + t3[6] * t5[0] - t3[9] * t5[3],
t3[1] * t5[4] + t3[7] * t5[0] + t3[9] * t5[2],
t3[2] * t5[4] + t3[8] * t5[0] - t3[9] * t5[1],
t3[9] * t5[0] + t3[9] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[6] * t5[3] - t3[7] * t5[2] + t3[8] * t5[1] + t3[10] * t5[0] - t3[10] * t5[4]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Trt& trt) {					
					
const Trt& t1 = trt;
const Sph& t2 = sph;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[6] * t2[4] + t1[9] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[4] * t2[4] + t1[7] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[13] * t2[3],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[12] * t2[3],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[11] * t2[3],
 - t1[3] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[4],
t1[2] * t2[4] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[4],
 - t1[1] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[4] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[4]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Sph (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10],
t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Sph& t2 = sph;
Mtt t3 (
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2] - t1[11] * t2[4],
t1[6] * t2[4] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
 - t1[5] * t2[4] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[4] * t2[4] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[10] * t2[3] - t1[11] * t2[2],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[9] * t2[3] + t1[11] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[8] * t2[3] - t1[11] * t2[0],
 - t1[3] * t2[4] - t1[10] * t2[4],
t1[2] * t2[4] + t1[9] * t2[4],
 - t1[1] * t2[4] - t1[8] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[4],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[4],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[7] * t2[3],
t1[0] * t2[4] + t1[7] * t2[4]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Sph (
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] + t3[15] * t5[6],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] - t3[15] * t5[5],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] + t3[15] * t5[4],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] - t3[10] * t5[11] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[7],
t3[7] * t5[3] - t3[7] * t5[10] - t3[8] * t5[2] + t3[8] * t5[9] + t3[9] * t5[1] - t3[9] * t5[8] + t3[15] * t5[0] - t3[15] * t5[7]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Tst& tst) {					
					
const Tst& t1 = tst;
const Sph& t2 = sph;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[14] * t2[4],
t1[6] * t2[4] + t1[9] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[4] * t2[4] + t1[7] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[13] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[12] * t2[3] + t1[14] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[11] * t2[3] - t1[14] * t2[0],
 - t1[3] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[4],
t1[2] * t2[4] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[4],
 - t1[1] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[14] * t2[4],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[4] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[4]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Sph (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[10] * t5[14] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10],
t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
inline Sph sp (const Sph& sph, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Sph& t2 = sph;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[14] * t2[3],
t1[6] * t2[4] + t1[9] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[4] * t2[4] + t1[7] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[13] * t2[3],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[12] * t2[3],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[11] * t2[3],
 - t1[3] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[4] + t1[14] * t2[2],
t1[2] * t2[4] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[4] - t1[14] * t2[1],
 - t1[1] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[4] + t1[14] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[14] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[4] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[4]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Sph (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[14] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[14] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10],
t3[0] * t5[14] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[14] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
		
	} //vsr::
	#endif
	