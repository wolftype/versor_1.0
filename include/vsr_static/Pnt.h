		#ifndef PNT_H_INCLUDED
		#define PNT_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
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
		 
inline Pnt_Pnt gp (const Pnt& a, const Pnt& b) { 
	return Pnt_Pnt (
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
		 
inline Pnt_Pnt gp (const Pnt& a, const Dlp& b) { 
	return Pnt_Pnt (
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
		 
inline Pnt_Pnt gp (const Pnt& a, const Aff& b) { 
	return Pnt_Pnt (
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
		 
inline Sph_Afp gp (const Pnt& a, const Trv& b) { 
	return Sph_Afp (
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
		 
inline Sph_Afp gp (const Pnt& a, const Tvd& b) { 
	return Sph_Afp (
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
		 
inline Pnt op (const Pnt& a, const Sca& b) { 
	return Pnt (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0]
);
}			
		 
inline Pss_Afp op (const Pnt& a, const Ori& b) { 
	return Pss_Afp (
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
		 
inline Mnk_Vec op (const Pnt& a, const Mnk& b) { 
	return Mnk_Vec (
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
		 
inline Pss_Afl op (const Pnt& a, const Tnv& b) { 
	return Pss_Afl (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2]
);
}			
		 
inline Pss_Aff op (const Pnt& a, const Tnb& b) { 
	return Pss_Aff (
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
		 
inline Pss_Flp ip (const Pnt& a, const Drt& b) { 
	return Pss_Flp (
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
		
	
	  	
inline Pnt sp (const Pnt& pnt, const Trv& trv) {					
					
const Trv& t1 = trv;
const Pnt& t2 = pnt;
Sph_Afp t3 (
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
		
	
	  	
inline Pnt sp (const Pnt& pnt, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Pnt& t2 = pnt;
Sph_Afp t3 (
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
		
	
		
	} //vsr::
	#endif
	