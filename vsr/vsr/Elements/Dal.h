		#ifndef DAL_H_INCLUDED
		#define DAL_H_INCLUDED
		
		#include "vsr_casts.h"
		
		namespace vsr{
	 
inline Dal gp (const Dal& a, const Sca& b) { 
	return Dal (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
inline Tnv gp (const Dal& a, const Ori& b) { 
	return Tnv (
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0]
);
}			
		 
inline Inf_Dal gp (const Dal& a, const Inf& b) { 
	return Inf_Dal (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Mnk_Dal gp (const Dal& a, const Mnk& b) { 
	return Mnk_Dal (
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Hyp_Lin gp (const Dal& a, const Hyp& b) { 
	return Hyp_Lin (
 - a[0] * b[1],
 - a[1] * b[1],
 - a[2] * b[1],
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
a[3] * b[1],
a[4] * b[1],
a[5] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Afl gp (const Dal& a, const Pss& b) { 
	return Afl (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Pnt_Dal gp (const Dal& a, const Pnt& b) { 
	return Pnt_Dal (
 - a[0] * b[4],
 - a[1] * b[4],
 - a[2] * b[4],
 - a[0] * b[1] - a[1] * b[2] - a[3] * b[3],
a[0] * b[0] - a[2] * b[2] - a[4] * b[3],
a[1] * b[0] + a[2] * b[1] - a[5] * b[3],
a[3] * b[4],
a[4] * b[4],
a[5] * b[4],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[0] * b[4] + a[3] * b[1] - a[4] * b[0],
a[1] * b[4] + a[3] * b[2] - a[5] * b[0],
a[2] * b[4] + a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Rtc gp (const Dal& a, const Par& b) { 
	return Rtc (
a[0] * b[7] + a[1] * b[8] + a[3] * b[9],
 - a[0] * b[6] + a[2] * b[8] + a[4] * b[9],
 - a[1] * b[6] - a[2] * b[7] + a[5] * b[9],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
a[3] * b[6] + a[4] * b[7] + a[5] * b[8],
a[0] * b[9] - a[1] * b[2] + a[2] * b[1] - a[3] * b[4] + a[4] * b[3],
a[0] * b[2] + a[1] * b[9] - a[2] * b[0] - a[3] * b[5] + a[5] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[2] * b[9] - a[4] * b[5] + a[5] * b[4],
a[3] * b[7] - a[4] * b[6],
a[3] * b[8] - a[5] * b[6],
a[4] * b[8] - a[5] * b[7],
 - a[0] * b[7] - a[1] * b[8] - a[4] * b[0] - a[5] * b[1],
a[0] * b[6] - a[2] * b[8] + a[3] * b[0] - a[5] * b[2],
a[1] * b[6] + a[2] * b[7] + a[3] * b[1] + a[4] * b[2],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Mtt gp (const Dal& a, const Cir& b) { 
	return Mtt (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8],
a[1] * b[5] - a[2] * b[4] + a[3] * b[7] - a[4] * b[6],
 - a[0] * b[5] + a[2] * b[3] + a[3] * b[8] - a[5] * b[6],
a[0] * b[4] - a[1] * b[3] + a[4] * b[8] - a[5] * b[7],
 - a[0] * b[7] - a[1] * b[8] + a[2] * b[9] + a[4] * b[0] + a[5] * b[1],
a[0] * b[6] - a[1] * b[9] - a[2] * b[8] - a[3] * b[0] + a[5] * b[2],
a[0] * b[9] + a[1] * b[6] + a[2] * b[7] - a[3] * b[1] - a[4] * b[2],
 - a[4] * b[3] - a[5] * b[4],
a[3] * b[3] - a[5] * b[5],
a[3] * b[4] + a[4] * b[5],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[1] * b[5] + a[2] * b[4] + a[5] * b[9],
a[0] * b[5] - a[2] * b[3] - a[4] * b[9],
 - a[0] * b[4] + a[1] * b[3] + a[3] * b[9],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] - a[3] * b[2] + a[4] * b[1] - a[5] * b[0],
a[3] * b[5] - a[4] * b[4] + a[5] * b[3]
);
}			
		 
inline Pnt_Afl gp (const Dal& a, const Sph& b) { 
	return Pnt_Afl (
 - a[2] * b[4] - a[4] * b[0] - a[5] * b[1],
a[1] * b[4] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[4] + a[3] * b[1] + a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] + a[4] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[3],
a[5] * b[4],
 - a[4] * b[4],
a[3] * b[4],
a[2] * b[4],
 - a[1] * b[4],
a[0] * b[4],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Rtc gp (const Dal& a, const Sta& b) { 
	return Rtc (
a[0] * b[7] + a[1] * b[8],
 - a[0] * b[6] + a[2] * b[8],
 - a[1] * b[6] - a[2] * b[7],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
a[3] * b[6] + a[4] * b[7] + a[5] * b[8],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[4] + a[4] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[5] + a[5] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[4] * b[5] + a[5] * b[4],
a[3] * b[7] - a[4] * b[6],
a[3] * b[8] - a[5] * b[6],
a[4] * b[8] - a[5] * b[7],
 - a[0] * b[7] - a[1] * b[8] - a[4] * b[0] - a[5] * b[1],
a[0] * b[6] - a[2] * b[8] + a[3] * b[0] - a[5] * b[2],
a[1] * b[6] + a[2] * b[7] + a[3] * b[1] + a[4] * b[2],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Par_Drb gp (const Dal& a, const Drv& b) { 
	return Par_Drb (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Mtd gp (const Dal& a, const Drb& b) { 
	return Mtd (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Inf_Sta gp (const Dal& a, const Drt& b) { 
	return Inf_Sta (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Tnv_Vec gp (const Dal& a, const Tnv& b) { 
	return Tnv_Vec (
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Tnv_Biv gp (const Dal& a, const Tnb& b) { 
	return Tnv_Biv (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Tnb gp (const Dal& a, const Tnt& b) { 
	return Tnb (
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Mtt gp (const Dal& a, const Lin& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
a[1] * b[2] - a[2] * b[1] + a[3] * b[4] - a[4] * b[3],
 - a[0] * b[2] + a[2] * b[0] + a[3] * b[5] - a[5] * b[3],
a[0] * b[1] - a[1] * b[0] + a[4] * b[5] - a[5] * b[4],
 - a[0] * b[4] - a[1] * b[5],
a[0] * b[3] - a[2] * b[5],
a[1] * b[3] + a[2] * b[4],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Pnt_Afl gp (const Dal& a, const Pln& b) { 
	return Pnt_Afl (
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[5] * b[3],
 - a[4] * b[3],
a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Par_Dfp gp (const Dal& a, const Flp& b) { 
	return Par_Dfp (
a[0] * b[1] + a[1] * b[2] + a[3] * b[3],
 - a[0] * b[0] + a[2] * b[2] + a[4] * b[3],
 - a[1] * b[0] - a[2] * b[1] + a[5] * b[3],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Tvt gp (const Dal& a, const Dfp& b) { 
	return Tvt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[5] * b[3],
a[0] * b[2] - a[2] * b[0] - a[4] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[3] * b[3],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Rtc gp (const Dal& a, const Dll& b) { 
	return Rtc (
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[3] * b[4] - a[4] * b[3],
a[3] * b[5] - a[5] * b[3],
a[4] * b[5] - a[5] * b[4],
 - a[0] * b[4] - a[1] * b[5] - a[4] * b[0] - a[5] * b[1],
a[0] * b[3] - a[2] * b[5] + a[3] * b[0] - a[5] * b[2],
a[1] * b[3] + a[2] * b[4] + a[3] * b[1] + a[4] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Pnt_Dal gp (const Dal& a, const Dlp& b) { 
	return Pnt_Dal (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[3] * b[3],
a[4] * b[3],
a[5] * b[3],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[0] * b[3] + a[3] * b[1] - a[4] * b[0],
a[1] * b[3] + a[3] * b[2] - a[5] * b[0],
a[2] * b[3] + a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Vec_Dal gp (const Dal& a, const Vec& b) { 
	return Vec_Dal (
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Biv_Dal gp (const Dal& a, const Biv& b) { 
	return Biv_Dal (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Mnk_Afl gp (const Dal& a, const Tri& b) { 
	return Mnk_Afl (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0]
);
}			
		 
inline Vec_Dal gp (const Dal& a, const Aff& b) { 
	return Vec_Dal (
 - a[0] * b[1] - a[1] * b[2] - a[3] * b[3],
a[0] * b[0] - a[2] * b[2] - a[4] * b[3],
a[1] * b[0] + a[2] * b[1] - a[5] * b[3],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Biv_Dal gp (const Dal& a, const Afl& b) { 
	return Biv_Dal (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[4] + a[4] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[5] + a[5] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[4] * b[5] + a[5] * b[4],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Biv_Dap gp (const Dal& a, const Afp& b) { 
	return Biv_Dap (
a[2] * b[3] + a[4] * b[0] + a[5] * b[1],
 - a[1] * b[3] - a[3] * b[0] + a[5] * b[2],
a[0] * b[3] - a[3] * b[1] - a[4] * b[2],
a[5] * b[3],
 - a[4] * b[3],
a[3] * b[3],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Biv_Afp gp (const Dal& a, const Dap& b) { 
	return Biv_Afp (
a[3] * b[3],
a[4] * b[3],
a[5] * b[3],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Vec_Afl gp (const Dal& a, const Daf& b) { 
	return Vec_Afl (
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] + a[4] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[3],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Rtt gp (const Dal& a, const Dal& b) { 
	return Rtt (
a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
a[3] * b[4] - a[4] * b[3],
a[3] * b[5] - a[5] * b[3],
a[4] * b[5] - a[5] * b[4],
 - a[0] * b[4] - a[1] * b[5] + a[4] * b[0] + a[5] * b[1],
a[0] * b[3] - a[2] * b[5] - a[3] * b[0] + a[5] * b[2],
a[1] * b[3] + a[2] * b[4] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3] - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Rtt gp (const Dal& a, const Mnv& b) { 
	return Rtt (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Biv_Dal gp (const Dal& a, const Rot& b) { 
	return Biv_Dal (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Rtc gp (const Dal& a, const Mot& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] - a[2] * b[7],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[5] - a[4] * b[4] + a[5] * b[7],
a[3] * b[6] - a[4] * b[7] - a[5] * b[4],
a[3] * b[7] + a[4] * b[6] - a[5] * b[5],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[7] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[4] - a[1] * b[7] - a[2] * b[6] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[0] * b[7] + a[1] * b[4] + a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Ori_Sta gp (const Dal& a, const Dil& b) { 
	return Ori_Sta (
a[3] * b[1],
a[4] * b[1],
a[5] * b[1],
a[0] * b[0] + a[0] * b[1],
a[1] * b[0] + a[1] * b[1],
a[2] * b[0] + a[2] * b[1],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
inline Vec_Dap gp (const Dal& a, const Trv& b) { 
	return Vec_Dap (
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3],
a[0] * b[0] - a[3] * b[2] + a[4] * b[1],
a[1] * b[0] - a[3] * b[3] + a[5] * b[1],
a[2] * b[0] - a[4] * b[3] + a[5] * b[2],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
inline Rtc gp (const Dal& a, const Mtd& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] + a[3] * b[7] - a[4] * b[8] - a[5] * b[9],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[3] * b[8] + a[4] * b[7] - a[5] * b[10],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] + a[3] * b[9] + a[4] * b[10] + a[5] * b[7],
 - a[0] * b[1] - a[0] * b[8] - a[1] * b[2] - a[1] * b[9] - a[2] * b[3] - a[2] * b[10],
a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] + a[0] * b[7] - a[1] * b[3] - a[1] * b[10] + a[2] * b[2] + a[2] * b[9],
a[0] * b[3] + a[0] * b[10] + a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8],
 - a[0] * b[2] - a[0] * b[9] + a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7],
a[3] * b[5] - a[4] * b[4] + a[5] * b[11],
a[3] * b[6] - a[4] * b[11] - a[5] * b[4],
a[3] * b[11] + a[4] * b[6] - a[5] * b[5],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[11] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[4] - a[1] * b[11] - a[2] * b[6] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[0] * b[11] + a[1] * b[4] + a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[10] - a[4] * b[9] + a[5] * b[8],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Par_Dfp gp (const Dal& a, const Trs& b) { 
	return Par_Dfp (
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[3] * b[1] + a[4] * b[2] + a[5] * b[3],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[2] - a[4] * b[1],
a[3] * b[3] - a[5] * b[1],
a[4] * b[3] - a[5] * b[2],
 - a[0] * b[2] - a[1] * b[3] + a[3] * b[0],
a[0] * b[1] - a[2] * b[3] + a[4] * b[0],
a[1] * b[1] + a[2] * b[2] + a[5] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Mtt gp (const Dal& a, const Rtc& b) { 
	return Mtt (
a[0] * b[8] + a[1] * b[9] + a[2] * b[10] + a[3] * b[11] + a[4] * b[12] + a[5] * b[13],
 - a[0] * b[4] + a[1] * b[10] - a[2] * b[9] + a[3] * b[12] - a[4] * b[11] + a[5] * b[15],
 - a[0] * b[10] - a[1] * b[4] + a[2] * b[8] + a[3] * b[13] - a[4] * b[15] - a[5] * b[11],
a[0] * b[9] - a[1] * b[8] - a[2] * b[4] + a[3] * b[15] + a[4] * b[13] - a[5] * b[12],
 - a[0] * b[1] - a[0] * b[12] - a[1] * b[2] - a[1] * b[13] + a[2] * b[14] + a[2] * b[15] - a[3] * b[3] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] + a[0] * b[11] - a[1] * b[14] - a[1] * b[15] - a[2] * b[2] - a[2] * b[13] - a[3] * b[5] - a[4] * b[3] + a[5] * b[7],
a[0] * b[14] + a[0] * b[15] + a[1] * b[0] + a[1] * b[11] + a[2] * b[1] + a[2] * b[12] - a[3] * b[6] - a[4] * b[7] - a[5] * b[3],
a[3] * b[4] - a[4] * b[8] - a[5] * b[9],
a[3] * b[8] + a[4] * b[4] - a[5] * b[10],
a[3] * b[9] + a[4] * b[10] + a[5] * b[4],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] + a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9] + a[3] * b[1] - a[4] * b[0] + a[5] * b[14],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8] + a[3] * b[2] - a[4] * b[14] - a[5] * b[0],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4] + a[3] * b[14] + a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] - a[0] * b[13] + a[1] * b[1] + a[1] * b[12] - a[2] * b[0] - a[2] * b[11] - a[3] * b[7] + a[4] * b[6] - a[5] * b[5],
a[3] * b[10] - a[4] * b[9] + a[5] * b[8]
);
}			
		 
inline Rtc gp (const Dal& a, const Mtt& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] - a[2] * b[15] + a[3] * b[10] - a[4] * b[11] - a[5] * b[12],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9] + a[3] * b[11] + a[4] * b[10] - a[5] * b[13],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8] + a[3] * b[12] + a[4] * b[13] + a[5] * b[10],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13] - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] - a[3] * b[5] + a[4] * b[4] - a[5] * b[14],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[6] + a[4] * b[14] + a[5] * b[4],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[14] - a[4] * b[6] + a[5] * b[5],
a[3] * b[8] - a[4] * b[7] + a[5] * b[15],
a[3] * b[9] - a[4] * b[15] - a[5] * b[7],
a[3] * b[15] + a[4] * b[9] - a[5] * b[8],
 - a[0] * b[8] - a[1] * b[9] + a[2] * b[15] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[7] - a[1] * b[15] - a[2] * b[9] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[0] * b[15] + a[1] * b[7] + a[2] * b[8] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[13] - a[4] * b[12] + a[5] * b[11],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Biv_Dal gp (const Dal& a, const Rtt& b) { 
	return Biv_Dal (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[5] + a[4] * b[4] - a[5] * b[7],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[3] * b[6] + a[4] * b[7] + a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7] - a[4] * b[6] + a[5] * b[5],
a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Par_Tnb gp (const Dal& a, const Rtd& b) { 
	return Par_Tnb (
a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
a[3] * b[5] + a[4] * b[4] - a[5] * b[7],
a[3] * b[6] + a[4] * b[7] + a[5] * b[4],
 - a[0] * b[1] - a[0] * b[5] - a[1] * b[2] - a[1] * b[6] - a[2] * b[3] - a[2] * b[7],
a[0] * b[0] + a[0] * b[4] - a[1] * b[3] - a[1] * b[7] + a[2] * b[2] + a[2] * b[6],
a[0] * b[3] + a[0] * b[7] + a[1] * b[0] + a[1] * b[4] - a[2] * b[1] - a[2] * b[5],
 - a[0] * b[2] - a[0] * b[6] + a[1] * b[1] + a[1] * b[5] + a[2] * b[0] + a[2] * b[4],
a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[3] * b[7] - a[4] * b[6] + a[5] * b[5],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Ori_Par gp (const Dal& a, const Tvd& b) { 
	return Ori_Par (
a[3] * b[4],
a[4] * b[4],
a[5] * b[4],
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3],
a[0] * b[0] + a[0] * b[4] - a[3] * b[2] + a[4] * b[1],
a[1] * b[0] + a[1] * b[4] - a[3] * b[3] + a[5] * b[1],
a[2] * b[0] + a[2] * b[4] - a[4] * b[3] + a[5] * b[2],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
inline Par_Dfp gp (const Dal& a, const Tsd& b) { 
	return Par_Dfp (
a[0] * b[2] + a[1] * b[3] + a[3] * b[4],
 - a[0] * b[1] + a[2] * b[3] + a[4] * b[4],
 - a[1] * b[1] - a[2] * b[2] + a[5] * b[4],
a[3] * b[1] + a[4] * b[2] + a[5] * b[3],
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4],
a[3] * b[2] - a[4] * b[1],
a[3] * b[3] - a[5] * b[1],
a[4] * b[3] - a[5] * b[2],
 - a[0] * b[2] - a[1] * b[3] + a[3] * b[0],
a[0] * b[1] - a[2] * b[3] + a[4] * b[0],
a[1] * b[1] + a[2] * b[2] + a[5] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Rtc gp (const Dal& a, const Trt& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] + a[3] * b[10] - a[4] * b[11] - a[5] * b[12],
 - a[0] * b[7] + a[2] * b[9] + a[3] * b[11] + a[4] * b[10] - a[5] * b[13],
 - a[1] * b[7] - a[2] * b[8] + a[3] * b[12] + a[4] * b[13] + a[5] * b[10],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13] - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] - a[3] * b[5] + a[4] * b[4],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[6] + a[5] * b[4],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[4] * b[6] + a[5] * b[5],
a[3] * b[8] - a[4] * b[7],
a[3] * b[9] - a[5] * b[7],
a[4] * b[9] - a[5] * b[8],
 - a[0] * b[8] - a[1] * b[9] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[7] - a[2] * b[9] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[1] * b[7] + a[2] * b[8] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[13] - a[4] * b[12] + a[5] * b[11],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Par_Tnb gp (const Dal& a, const Rvd& b) { 
	return Par_Tnb (
a[3] * b[7] - a[4] * b[8] - a[5] * b[9],
a[3] * b[8] + a[4] * b[7] - a[5] * b[10],
a[3] * b[9] + a[4] * b[10] + a[5] * b[7],
 - a[0] * b[1] - a[0] * b[8] - a[1] * b[2] - a[1] * b[9] - a[2] * b[3] - a[2] * b[10] - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
a[0] * b[0] + a[0] * b[7] - a[1] * b[3] - a[1] * b[10] + a[2] * b[2] + a[2] * b[9] - a[3] * b[5] + a[4] * b[4] - a[5] * b[11],
a[0] * b[3] + a[0] * b[10] + a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8] - a[3] * b[6] + a[4] * b[11] + a[5] * b[4],
 - a[0] * b[2] - a[0] * b[9] + a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7] - a[3] * b[11] - a[4] * b[6] + a[5] * b[5],
a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[3] * b[10] - a[4] * b[9] + a[5] * b[8],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Rtc gp (const Dal& a, const Tst& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] + a[3] * b[10] - a[4] * b[11] - a[5] * b[12],
 - a[0] * b[7] + a[2] * b[9] + a[3] * b[11] + a[4] * b[10] - a[5] * b[13],
 - a[1] * b[7] - a[2] * b[8] + a[3] * b[12] + a[4] * b[13] + a[5] * b[10],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13] - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] - a[3] * b[5] + a[4] * b[4] - a[5] * b[14],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[6] + a[4] * b[14] + a[5] * b[4],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[14] - a[4] * b[6] + a[5] * b[5],
a[3] * b[8] - a[4] * b[7],
a[3] * b[9] - a[5] * b[7],
a[4] * b[9] - a[5] * b[8],
 - a[0] * b[8] - a[1] * b[9] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[7] - a[2] * b[9] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[1] * b[7] + a[2] * b[8] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[13] - a[4] * b[12] + a[5] * b[11],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Rtc gp (const Dal& a, const Tvt& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] - a[2] * b[14] + a[3] * b[10] - a[4] * b[11] - a[5] * b[12],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9] + a[3] * b[11] + a[4] * b[10] - a[5] * b[13],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8] + a[3] * b[12] + a[4] * b[13] + a[5] * b[10],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13] - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] - a[3] * b[5] + a[4] * b[4],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[6] + a[5] * b[4],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[4] * b[6] + a[5] * b[5],
a[3] * b[8] - a[4] * b[7] + a[5] * b[14],
a[3] * b[9] - a[4] * b[14] - a[5] * b[7],
a[3] * b[14] + a[4] * b[9] - a[5] * b[8],
 - a[0] * b[8] - a[1] * b[9] + a[2] * b[14] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[7] - a[1] * b[14] - a[2] * b[9] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[0] * b[14] + a[1] * b[7] + a[2] * b[8] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[13] - a[4] * b[12] + a[5] * b[11],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Rtc gp (const Dal& a, const Bst& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] + a[3] * b[10],
 - a[0] * b[7] + a[2] * b[9] + a[4] * b[10],
 - a[1] * b[7] - a[2] * b[8] + a[5] * b[10],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] + a[2] * b[2] - a[3] * b[5] + a[4] * b[4],
a[0] * b[3] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[3] * b[6] + a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[2] * b[10] - a[4] * b[6] + a[5] * b[5],
a[3] * b[8] - a[4] * b[7],
a[3] * b[9] - a[5] * b[7],
a[4] * b[9] - a[5] * b[8],
 - a[0] * b[8] - a[1] * b[9] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[7] - a[2] * b[9] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[1] * b[7] + a[2] * b[8] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Dal op (const Dal& a, const Sca& b) { 
	return Dal (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
inline Sca op (const Dal& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Mnk_Biv op (const Dal& a, const Inf& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Sca op (const Dal& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Mnk_Biv op (const Dal& a, const Hyp& b) { 
	return Mnk_Biv (
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Sca op (const Dal& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Daf op (const Dal& a, const Pnt& b) { 
	return Daf (
a[0] * b[4] + a[3] * b[1] - a[4] * b[0],
a[1] * b[4] + a[3] * b[2] - a[5] * b[0],
a[2] * b[4] + a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Pss op (const Dal& a, const Par& b) { 
	return Pss (
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Sca op (const Dal& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dal& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Dal& a, const Sta& b) { 
	return Pss (
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Pss op (const Dal& a, const Drv& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Sca op (const Dal& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dal& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dal& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dal& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dal& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dal& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dal& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Dal& a, const Flp& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Sca op (const Dal& a, const Dfp& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Dal& a, const Dll& b) { 
	return Pss (
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Daf op (const Dal& a, const Dlp& b) { 
	return Daf (
a[0] * b[3] + a[3] * b[1] - a[4] * b[0],
a[1] * b[3] + a[3] * b[2] - a[5] * b[0],
a[2] * b[3] + a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Daf op (const Dal& a, const Vec& b) { 
	return Daf (
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Pss op (const Dal& a, const Biv& b) { 
	return Pss (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Sca op (const Dal& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Daf op (const Dal& a, const Aff& b) { 
	return Daf (
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Pss op (const Dal& a, const Afl& b) { 
	return Pss (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Sca op (const Dal& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dal& a, const Dap& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dal& a, const Daf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dal& a, const Dal& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dal& a, const Mnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Afl ip (const Dal& a, const Pss& b) { 
	return Afl (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Sca ip (const Dal& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Cir& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8]
);
}			
		 
inline Aff ip (const Dal& a, const Sph& b) { 
	return Aff (
 - a[2] * b[4] - a[4] * b[0] - a[5] * b[1],
a[1] * b[4] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[4] + a[3] * b[1] + a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Dal& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Drb& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Vec ip (const Dal& a, const Drt& b) { 
	return Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Dal& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Lin& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5]
);
}			
		 
inline Aff ip (const Dal& a, const Pln& b) { 
	return Aff (
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Dal& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Dfp& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Sca ip (const Dal& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dal& a, const Dap& b) { 
	return Sca (
);
}			
		 
inline Aff ip (const Dal& a, const Daf& b) { 
	return Aff (
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Dal& a, const Dal& b) { 
	return Sca (
a[3] * b[3] + a[4] * b[4] + a[5] * b[5]
);
}			
		 
inline Sca ip (const Dal& a, const Mnv& b) { 
	return Sca (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2]
);
}			
		  	
template<>
inline Dal sp (const Dal& dal, const Rot& rot) {					
					
const Rot& t1 = rot;
const Dal& t2 = dal;
Biv_Dal t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Dal (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Mot& mot) {					
					
const Mot& t1 = mot;
const Dal& t2 = dal;
Rtc t3 (
t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[5],
t1[4] * t2[5] - t1[6] * t2[3] - t1[7] * t2[4],
t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Dal (
t3[3] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[3] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1],
t3[3] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[7] * t5[0],
 - t3[3] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[7] * t5[7] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[15] * t5[3],
 - t3[3] * t5[5] + t3[5] * t5[4] - t3[6] * t5[7] - t3[7] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[15] * t5[2],
 - t3[3] * t5[6] + t3[5] * t5[7] + t3[6] * t5[4] + t3[7] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Dil& dil) {					
					
const Dil& t1 = dil;
const Dal& t2 = dal;
Ori_Sta t3 (
t1[1] * t2[3],
t1[1] * t2[4],
t1[1] * t2[5],
t1[0] * t2[0] - t1[1] * t2[0],
t1[0] * t2[1] - t1[1] * t2[1],
t1[0] * t2[2] - t1[1] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4],
t1[0] * t2[5]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Dal (
t3[3] * t5[0] + t3[3] * t5[1],
t3[4] * t5[0] + t3[4] * t5[1],
t3[5] * t5[0] + t3[5] * t5[1],
t3[0] * t5[1] + t3[6] * t5[0],
t3[1] * t5[1] + t3[7] * t5[0],
t3[2] * t5[1] + t3[8] * t5[0]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Trv& trv) {					
					
const Trv& t1 = trv;
const Dal& t2 = dal;
Vec_Dap t3 (
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[0] - t1[1] * t2[4] + t1[2] * t2[3],
t1[0] * t2[1] - t1[1] * t2[5] + t1[3] * t2[3],
t1[0] * t2[2] - t1[2] * t2[5] + t1[3] * t2[4],
t1[0] * t2[3],
t1[0] * t2[4],
t1[0] * t2[5]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Dal (
t3[1] * t5[0] - t3[4] * t5[2] + t3[5] * t5[1],
t3[2] * t5[0] - t3[4] * t5[3] + t3[6] * t5[1],
t3[3] * t5[0] - t3[5] * t5[3] + t3[6] * t5[2],
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Dal& t2 = dal;
Rtc t3 (
t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] + t1[11] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[5] - t1[11] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[5] - t1[9] * t2[3] - t1[10] * t2[4] + t1[11] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2],
t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[7] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
t1[4] * t2[4] - t1[5] * t2[3] + t1[11] * t2[5],
t1[4] * t2[5] - t1[6] * t2[3] - t1[11] * t2[4],
t1[5] * t2[5] - t1[6] * t2[4] + t1[11] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[5] * t2[0] + t1[6] * t2[1] + t1[11] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] - t1[4] * t2[0] + t1[6] * t2[2] - t1[11] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] - t1[4] * t2[1] - t1[5] * t2[2] + t1[11] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Dal (
t3[3] * t5[1] + t3[3] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[7] * t5[2] + t3[7] * t5[9],
t3[3] * t5[2] + t3[3] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[1] - t3[7] * t5[8],
t3[3] * t5[3] + t3[3] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] + t3[7] * t5[0] + t3[7] * t5[7],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[7] * t5[11] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[10] - t3[15] * t5[3],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] - t3[3] * t5[5] + t3[5] * t5[4] - t3[6] * t5[11] - t3[7] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[9] + t3[15] * t5[2],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[6] + t3[5] * t5[11] + t3[6] * t5[4] + t3[7] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[8] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Trs& trs) {					
					
const Trs& t1 = trs;
const Dal& t2 = dal;
Par_Dfp t3 (
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[1] * t2[4] - t1[2] * t2[3],
t1[1] * t2[5] - t1[3] * t2[3],
t1[2] * t2[5] - t1[3] * t2[4],
t1[0] * t2[3] + t1[2] * t2[0] + t1[3] * t2[1],
t1[0] * t2[4] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[5] - t1[1] * t2[1] - t1[2] * t2[2],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Dal (
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0],
 - t3[4] * t5[2] - t3[5] * t5[3] + t3[10] * t5[0],
t3[4] * t5[1] - t3[6] * t5[3] + t3[11] * t5[0],
t3[5] * t5[1] + t3[6] * t5[2] + t3[12] * t5[0]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Dal& t2 = dal;
Mtt t3 (
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[4] + t1[13] * t2[5],
 - t1[4] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1] + t1[11] * t2[4] - t1[12] * t2[3] + t1[15] * t2[5],
 - t1[4] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0] + t1[11] * t2[5] - t1[13] * t2[3] - t1[15] * t2[4],
 - t1[4] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[12] * t2[5] - t1[13] * t2[4] + t1[15] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5] + t1[12] * t2[0] + t1[13] * t2[1] - t1[14] * t2[2] + t1[15] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] - t1[3] * t2[4] + t1[5] * t2[3] - t1[7] * t2[5] - t1[11] * t2[0] + t1[13] * t2[2] + t1[14] * t2[1] - t1[15] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[5] + t1[6] * t2[3] + t1[7] * t2[4] - t1[11] * t2[1] - t1[12] * t2[2] - t1[14] * t2[0] + t1[15] * t2[0],
t1[4] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[4] * t2[4] - t1[8] * t2[3] + t1[10] * t2[5],
t1[4] * t2[5] - t1[9] * t2[3] - t1[10] * t2[4],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] - t1[4] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1] + t1[14] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[4] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0] - t1[14] * t2[4],
t1[1] * t2[5] - t1[2] * t2[4] - t1[4] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[14] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[5] * t2[5] + t1[6] * t2[4] - t1[7] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0],
t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Dal (
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] + t3[3] * t5[6] - t3[4] * t5[1] - t3[4] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[10] * t5[5] - t3[11] * t5[3] + t3[12] * t5[7] - t3[13] * t5[6] - t3[14] * t5[2] - t3[14] * t5[13],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[5] - t3[4] * t5[2] - t3[4] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] - t3[10] * t5[6] - t3[11] * t5[7] - t3[12] * t5[3] + t3[13] * t5[5] + t3[14] * t5[1] + t3[14] * t5[12],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] + t3[3] * t5[3] - t3[4] * t5[14] - t3[4] * t5[15] - t3[5] * t5[2] - t3[5] * t5[13] + t3[6] * t5[1] + t3[6] * t5[12] - t3[10] * t5[7] + t3[11] * t5[6] - t3[12] * t5[5] - t3[13] * t5[3] - t3[14] * t5[0] - t3[14] * t5[11],
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] - t3[3] * t5[15] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[3] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] + t3[11] * t5[1] + t3[12] * t5[2] - t3[13] * t5[14] - t3[14] * t5[10] + t3[15] * t5[7],
t3[0] * t5[12] - t3[1] * t5[11] + t3[2] * t5[15] + t3[3] * t5[13] + t3[4] * t5[8] + t3[5] * t5[4] - t3[6] * t5[10] - t3[7] * t5[5] - t3[8] * t5[3] + t3[9] * t5[7] + t3[10] * t5[1] - t3[11] * t5[0] + t3[12] * t5[14] + t3[13] * t5[2] + t3[14] * t5[9] - t3[15] * t5[6],
t3[0] * t5[13] - t3[1] * t5[15] - t3[2] * t5[11] - t3[3] * t5[12] + t3[4] * t5[9] + t3[5] * t5[10] + t3[6] * t5[4] - t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[2] - t3[11] * t5[14] - t3[12] * t5[0] - t3[13] * t5[1] - t3[14] * t5[8] + t3[15] * t5[5]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Dal& t2 = dal;
Rtc t3 (
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[3] + t1[11] * t2[4] + t1[12] * t2[5] + t1[15] * t2[2],
 - t1[7] * t2[0] + t1[9] * t2[2] + t1[10] * t2[4] - t1[11] * t2[3] + t1[13] * t2[5] - t1[15] * t2[1],
 - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[5] - t1[12] * t2[3] - t1[13] * t2[4] + t1[15] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[4] + t1[5] * t2[3] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1] - t1[14] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[5] + t1[6] * t2[3] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0] + t1[14] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[5] * t2[5] + t1[6] * t2[4] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0] - t1[14] * t2[3],
t1[7] * t2[4] - t1[8] * t2[3] + t1[15] * t2[5],
t1[7] * t2[5] - t1[9] * t2[3] - t1[15] * t2[4],
t1[8] * t2[5] - t1[9] * t2[4] + t1[15] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[8] * t2[0] + t1[9] * t2[1] + t1[15] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2] - t1[15] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2] + t1[15] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Dal (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[1] + t3[3] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] + t3[7] * t5[2] + t3[7] * t5[12] - t3[11] * t5[5] + t3[12] * t5[4] - t3[13] * t5[14] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[7] * t5[11] - t3[11] * t5[6] + t3[12] * t5[14] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[0] + t3[7] * t5[10] - t3[11] * t5[14] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[15] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[6] * t5[15] - t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[5] * t5[15] + t3[6] * t5[7] + t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Dal& t2 = dal;
Biv_Dal t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[4] + t1[5] * t2[3] - t1[7] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[5] + t1[6] * t2[3] + t1[7] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[5] * t2[5] + t1[6] * t2[4] - t1[7] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Dal (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[7] - t3[7] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] - t3[4] * t5[6] + t3[5] * t5[7] + t3[6] * t5[4] + t3[7] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] - t3[4] * t5[7] - t3[5] * t5[6] + t3[6] * t5[5] - t3[7] * t5[4],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Dal& t2 = dal;
Par_Tnb t3 (
t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[5],
t1[4] * t2[5] - t1[6] * t2[3] - t1[7] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4],
t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Dal (
t3[3] * t5[1] + t3[3] * t5[5] + t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[3] - t3[5] * t5[7] + t3[6] * t5[2] + t3[6] * t5[6],
t3[3] * t5[2] + t3[3] * t5[6] + t3[4] * t5[3] + t3[4] * t5[7] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[1] - t3[6] * t5[5],
t3[3] * t5[3] + t3[3] * t5[7] - t3[4] * t5[2] - t3[4] * t5[6] + t3[5] * t5[1] + t3[5] * t5[5] + t3[6] * t5[0] + t3[6] * t5[4],
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[7] - t3[11] * t5[3],
t3[0] * t5[5] + t3[1] * t5[4] - t3[2] * t5[7] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[6] + t3[11] * t5[2],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[4] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[5] - t3[11] * t5[1]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Dal& t2 = dal;
Ori_Par t3 (
t1[4] * t2[3],
t1[4] * t2[4],
t1[4] * t2[5],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[0] - t1[1] * t2[4] + t1[2] * t2[3] - t1[4] * t2[0],
t1[0] * t2[1] - t1[1] * t2[5] + t1[3] * t2[3] - t1[4] * t2[1],
t1[0] * t2[2] - t1[2] * t2[5] + t1[3] * t2[4] - t1[4] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4],
t1[0] * t2[5]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Dal (
t3[0] * t5[2] - t3[1] * t5[1] + t3[4] * t5[0] + t3[4] * t5[4] - t3[7] * t5[2] + t3[8] * t5[1],
t3[0] * t5[3] - t3[2] * t5[1] + t3[5] * t5[0] + t3[5] * t5[4] - t3[7] * t5[3] + t3[9] * t5[1],
t3[1] * t5[3] - t3[2] * t5[2] + t3[6] * t5[0] + t3[6] * t5[4] - t3[8] * t5[3] + t3[9] * t5[2],
t3[0] * t5[4] + t3[7] * t5[0],
t3[1] * t5[4] + t3[8] * t5[0],
t3[2] * t5[4] + t3[9] * t5[0]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Dal& t2 = dal;
Par_Dfp t3 (
t1[2] * t2[0] + t1[3] * t2[1] + t1[4] * t2[3],
 - t1[1] * t2[0] + t1[3] * t2[2] + t1[4] * t2[4],
 - t1[1] * t2[1] - t1[2] * t2[2] + t1[4] * t2[5],
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2],
t1[1] * t2[4] - t1[2] * t2[3],
t1[1] * t2[5] - t1[3] * t2[3],
t1[2] * t2[5] - t1[3] * t2[4],
t1[0] * t2[3] + t1[2] * t2[0] + t1[3] * t2[1],
t1[0] * t2[4] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[5] - t1[1] * t2[1] - t1[2] * t2[2],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Dal (
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4],
t3[0] * t5[4] - t3[4] * t5[2] - t3[5] * t5[3] + t3[10] * t5[0],
t3[1] * t5[4] + t3[4] * t5[1] - t3[6] * t5[3] + t3[11] * t5[0],
t3[2] * t5[4] + t3[5] * t5[1] + t3[6] * t5[2] + t3[12] * t5[0]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Trt& trt) {					
					
const Trt& t1 = trt;
const Dal& t2 = dal;
Rtc t3 (
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[3] + t1[11] * t2[4] + t1[12] * t2[5],
 - t1[7] * t2[0] + t1[9] * t2[2] + t1[10] * t2[4] - t1[11] * t2[3] + t1[13] * t2[5],
 - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[5] - t1[12] * t2[3] - t1[13] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[4] + t1[5] * t2[3] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[5] + t1[6] * t2[3] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[5] * t2[5] + t1[6] * t2[4] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
t1[7] * t2[4] - t1[8] * t2[3],
t1[7] * t2[5] - t1[9] * t2[3],
t1[8] * t2[5] - t1[9] * t2[4],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[8] * t2[0] + t1[9] * t2[1],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Dal (
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[1] + t3[3] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] + t3[7] * t5[2] + t3[7] * t5[12] - t3[11] * t5[5] + t3[12] * t5[4] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[7] * t5[11] - t3[11] * t5[6] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[0] + t3[7] * t5[10] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[6] * t5[7] + t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Dal& t2 = dal;
Par_Tnb t3 (
t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[5],
t1[7] * t2[5] - t1[9] * t2[3] - t1[10] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[4] + t1[5] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1] - t1[11] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[5] + t1[6] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0] + t1[11] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[5] * t2[5] + t1[6] * t2[4] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] - t1[11] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4],
t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Dal (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[1] + t3[3] * t5[8] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[3] - t3[5] * t5[10] + t3[6] * t5[2] + t3[6] * t5[9] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[11] + t3[10] * t5[6] - t3[11] * t5[6],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[9] + t3[4] * t5[3] + t3[4] * t5[10] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[1] - t3[6] * t5[8] - t3[7] * t5[6] + t3[8] * t5[11] + t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[5],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[10] - t3[4] * t5[2] - t3[4] * t5[9] + t3[5] * t5[1] + t3[5] * t5[8] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[11] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[4] - t3[11] * t5[4],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[10] - t3[11] * t5[3],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[9] + t3[11] * t5[2],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[8] - t3[11] * t5[1]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Tst& tst) {					
					
const Tst& t1 = tst;
const Dal& t2 = dal;
Rtc t3 (
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[3] + t1[11] * t2[4] + t1[12] * t2[5],
 - t1[7] * t2[0] + t1[9] * t2[2] + t1[10] * t2[4] - t1[11] * t2[3] + t1[13] * t2[5],
 - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[5] - t1[12] * t2[3] - t1[13] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[4] + t1[5] * t2[3] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1] - t1[14] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[5] + t1[6] * t2[3] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0] + t1[14] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[5] * t2[5] + t1[6] * t2[4] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0] - t1[14] * t2[3],
t1[7] * t2[4] - t1[8] * t2[3],
t1[7] * t2[5] - t1[9] * t2[3],
t1[8] * t2[5] - t1[9] * t2[4],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[8] * t2[0] + t1[9] * t2[1],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Dal (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[1] + t3[3] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] + t3[7] * t5[2] + t3[7] * t5[12] - t3[11] * t5[5] + t3[12] * t5[4] - t3[13] * t5[14] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[7] * t5[11] - t3[11] * t5[6] + t3[12] * t5[14] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[0] + t3[7] * t5[10] - t3[11] * t5[14] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[6] * t5[7] + t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Dal& t2 = dal;
Rtc t3 (
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[3] + t1[11] * t2[4] + t1[12] * t2[5] + t1[14] * t2[2],
 - t1[7] * t2[0] + t1[9] * t2[2] + t1[10] * t2[4] - t1[11] * t2[3] + t1[13] * t2[5] - t1[14] * t2[1],
 - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[5] - t1[12] * t2[3] - t1[13] * t2[4] + t1[14] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[4] + t1[5] * t2[3] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[5] + t1[6] * t2[3] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[5] * t2[5] + t1[6] * t2[4] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
t1[7] * t2[4] - t1[8] * t2[3] + t1[14] * t2[5],
t1[7] * t2[5] - t1[9] * t2[3] - t1[14] * t2[4],
t1[8] * t2[5] - t1[9] * t2[4] + t1[14] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[8] * t2[0] + t1[9] * t2[1] + t1[14] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2] - t1[14] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2] + t1[14] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Dal (
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[1] + t3[3] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] + t3[7] * t5[2] + t3[7] * t5[12] - t3[11] * t5[5] + t3[12] * t5[4] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[7] * t5[11] - t3[11] * t5[6] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[0] + t3[7] * t5[10] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[14] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[6] * t5[14] - t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[5] * t5[14] + t3[6] * t5[7] + t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Dal sp (const Dal& dal, const Bst& bst) {					
					
const Bst& t1 = bst;
const Dal& t2 = dal;
Rtc t3 (
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[3],
 - t1[7] * t2[0] + t1[9] * t2[2] + t1[10] * t2[4],
 - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[5],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[4] + t1[5] * t2[3] - t1[10] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[5] + t1[6] * t2[3] - t1[10] * t2[1],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[5] * t2[5] + t1[6] * t2[4] - t1[10] * t2[2],
t1[7] * t2[4] - t1[8] * t2[3],
t1[7] * t2[5] - t1[9] * t2[3],
t1[8] * t2[5] - t1[9] * t2[4],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[8] * t2[0] + t1[9] * t2[1],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] - t1[7] * t2[0] + t1[9] * t2[2],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Dal (
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[1] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] + t3[7] * t5[2] - t3[11] * t5[5] + t3[12] * t5[4] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[2] * t5[4] + t3[3] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[11] * t5[6] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[7] * t5[0] + t3[7] * t5[10] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[10] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[15] * t5[3],
t3[1] * t5[10] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[15] * t5[2],
t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[6] * t5[7] + t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Dal re (const Dal& dal, const Vec& vec) {					
					
const Vec& t1 = vec;
const Dal& t2 = dal;
Dal t3 = involute( t2);
Vec_Dal t4 (
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[0] * t3[3] + t1[1] * t3[4] + t1[2] * t3[5],
t1[0] * t3[4] - t1[1] * t3[3],
t1[0] * t3[5] - t1[2] * t3[3],
t1[1] * t3[5] - t1[2] * t3[4],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Dal (
 - t4[0] * t6[1] + t4[1] * t6[0] - t4[7] * t6[2],
 - t4[0] * t6[2] + t4[2] * t6[0] + t4[7] * t6[1],
 - t4[1] * t6[2] + t4[2] * t6[1] - t4[7] * t6[0],
t4[3] * t6[0] + t4[4] * t6[1] + t4[5] * t6[2],
t4[3] * t6[1] - t4[4] * t6[0] + t4[6] * t6[2],
t4[3] * t6[2] - t4[5] * t6[0] - t4[6] * t6[1]
);

}
		
	
	  	
template<>
inline Dal re (const Dal& dal, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Dal& t2 = dal;
Dal t3 = involute( t2);
Pnt_Dal t4 (
 - t1[3] * t3[0],
 - t1[3] * t3[1],
 - t1[3] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[3] * t3[3],
t1[3] * t3[4],
t1[3] * t3[5],
t1[0] * t3[3] + t1[1] * t3[4] + t1[2] * t3[5],
t1[0] * t3[4] - t1[1] * t3[3] - t1[3] * t3[0],
t1[0] * t3[5] - t1[2] * t3[3] - t1[3] * t3[1],
t1[1] * t3[5] - t1[2] * t3[4] - t1[3] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Dal (
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[13] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[13] * t6[1],
 - t4[4] * t6[2] + t4[5] * t6[1] - t4[13] * t6[0],
t4[3] * t6[3] + t4[9] * t6[0] + t4[10] * t6[1] + t4[11] * t6[2],
t4[4] * t6[3] + t4[9] * t6[1] - t4[10] * t6[0] + t4[12] * t6[2],
t4[5] * t6[3] + t4[9] * t6[2] - t4[11] * t6[0] - t4[12] * t6[1]
);

}
		
	
	  	
template<>
inline Dal re (const Dal& dal, const Pln& pln) {					
					
const Pln& t1 = pln;
const Dal& t2 = dal;
Dal t3 = involute( t2);
Pnt_Afl t4 (
t1[0] * t3[4] + t1[1] * t3[5] + t1[3] * t3[2],
 - t1[0] * t3[3] + t1[2] * t3[5] - t1[3] * t3[1],
 - t1[1] * t3[3] - t1[2] * t3[4] + t1[3] * t3[0],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[1] * t3[2] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[2] * t3[0],
t1[0] * t3[1] - t1[1] * t3[0],
t1[3] * t3[5],
 - t1[3] * t3[4],
t1[3] * t3[3],
t1[3] * t3[2],
 - t1[3] * t3[1],
t1[3] * t3[0],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Dal (
t4[3] * t6[0] - t4[5] * t6[2] + t4[6] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[6] * t6[0],
t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0],
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[6] * t6[3] - t4[13] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[5] * t6[3] + t4[13] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[4] * t6[3] - t4[13] * t6[0]
);

}
		
	
	  	
template<>
inline Dal re (const Dal& dal, const Dll& dll) {					
					
const Dll& t1 = dll;
const Dal& t2 = dal;
Dal t3 = involute( t2);
Rtc t4 (
t1[4] * t3[0] + t1[5] * t3[1],
 - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[3] * t3[1] - t1[4] * t3[2],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[3] * t3[3] + t1[4] * t3[4] + t1[5] * t3[5],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
t1[3] * t3[4] - t1[4] * t3[3],
t1[3] * t3[5] - t1[5] * t3[3],
t1[4] * t3[5] - t1[5] * t3[4],
t1[0] * t3[4] + t1[1] * t3[5] + t1[4] * t3[0] + t1[5] * t3[1],
 - t1[0] * t3[3] + t1[2] * t3[5] - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[1] * t3[3] - t1[2] * t3[4] - t1[3] * t3[1] - t1[4] * t3[2],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3] - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Dal (
t4[3] * t6[0] - t4[6] * t6[2] + t4[7] * t6[1],
t4[3] * t6[1] + t4[5] * t6[2] - t4[7] * t6[0],
t4[3] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0],
 - t4[3] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5] - t4[12] * t6[0] - t4[13] * t6[1] - t4[15] * t6[2],
 - t4[3] * t6[4] + t4[5] * t6[3] - t4[7] * t6[5] + t4[11] * t6[0] - t4[13] * t6[2] + t4[15] * t6[1],
 - t4[3] * t6[5] + t4[6] * t6[3] + t4[7] * t6[4] + t4[11] * t6[1] + t4[12] * t6[2] - t4[15] * t6[0]
);

}
		
	
	  	
template<>
inline Dal re (const Dal& dal, const Lin& lin) {					
					
const Lin& t1 = lin;
const Dal& t2 = dal;
Dal t3 = involute( t2);
Mtt t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2] + t1[3] * t3[3] + t1[4] * t3[4] + t1[5] * t3[5],
t1[1] * t3[2] - t1[2] * t3[1] + t1[3] * t3[4] - t1[4] * t3[3],
 - t1[0] * t3[2] + t1[2] * t3[0] + t1[3] * t3[5] - t1[5] * t3[3],
t1[0] * t3[1] - t1[1] * t3[0] + t1[4] * t3[5] - t1[5] * t3[4],
t1[4] * t3[0] + t1[5] * t3[1],
 - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[3] * t3[1] - t1[4] * t3[2],
t1[0] * t3[4] + t1[1] * t3[5],
 - t1[0] * t3[3] + t1[2] * t3[5],
 - t1[1] * t3[3] - t1[2] * t3[4],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[1] * t3[2] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[2] * t3[0],
t1[0] * t3[1] - t1[1] * t3[0],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Dal (
 - t4[4] * t6[4] + t4[5] * t6[3] - t4[14] * t6[5],
 - t4[4] * t6[5] + t4[6] * t6[3] + t4[14] * t6[4],
 - t4[5] * t6[5] + t4[6] * t6[4] - t4[14] * t6[3],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0]
);

}
		
	
	  	
template<>
inline Dal re (const Dal& dal, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Dal& t2 = dal;
Dal t3 = involute( t2);
Pnt_Dal t4 (
 - t1[4] * t3[0],
 - t1[4] * t3[1],
 - t1[4] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1] - t1[3] * t3[3],
t1[0] * t3[0] - t1[2] * t3[2] - t1[3] * t3[4],
t1[0] * t3[1] + t1[1] * t3[2] - t1[3] * t3[5],
t1[4] * t3[3],
t1[4] * t3[4],
t1[4] * t3[5],
t1[0] * t3[3] + t1[1] * t3[4] + t1[2] * t3[5],
t1[0] * t3[4] - t1[1] * t3[3] - t1[4] * t3[0],
t1[0] * t3[5] - t1[2] * t3[3] - t1[4] * t3[1],
t1[1] * t3[5] - t1[2] * t3[4] - t1[4] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Dal (
t4[0] * t6[3] - t4[3] * t6[1] + t4[4] * t6[0] - t4[10] * t6[3] - t4[13] * t6[2],
t4[1] * t6[3] - t4[3] * t6[2] + t4[5] * t6[0] - t4[11] * t6[3] + t4[13] * t6[1],
t4[2] * t6[3] - t4[4] * t6[2] + t4[5] * t6[1] - t4[12] * t6[3] - t4[13] * t6[0],
t4[3] * t6[4] - t4[6] * t6[3] + t4[9] * t6[0] + t4[10] * t6[1] + t4[11] * t6[2],
t4[4] * t6[4] - t4[7] * t6[3] + t4[9] * t6[1] - t4[10] * t6[0] + t4[12] * t6[2],
t4[5] * t6[4] - t4[8] * t6[3] + t4[9] * t6[2] - t4[11] * t6[0] - t4[12] * t6[1]
);

}
		
	
	  	
template<>
inline Dal re (const Dal& dal, const Par& par) {					
					
const Par& t1 = par;
const Dal& t2 = dal;
Dal t3 = involute( t2);
Rtc t4 (
t1[7] * t3[0] + t1[8] * t3[1] + t1[9] * t3[3],
 - t1[6] * t3[0] + t1[8] * t3[2] + t1[9] * t3[4],
 - t1[6] * t3[1] - t1[7] * t3[2] + t1[9] * t3[5],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] - t1[3] * t3[3] - t1[4] * t3[4] - t1[5] * t3[5],
t1[6] * t3[3] + t1[7] * t3[4] + t1[8] * t3[5],
 - t1[1] * t3[2] + t1[2] * t3[1] - t1[3] * t3[4] + t1[4] * t3[3] - t1[9] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0] - t1[3] * t3[5] + t1[5] * t3[3] - t1[9] * t3[1],
 - t1[0] * t3[1] + t1[1] * t3[0] - t1[4] * t3[5] + t1[5] * t3[4] - t1[9] * t3[2],
t1[6] * t3[4] - t1[7] * t3[3],
t1[6] * t3[5] - t1[8] * t3[3],
t1[7] * t3[5] - t1[8] * t3[4],
t1[0] * t3[4] + t1[1] * t3[5] + t1[7] * t3[0] + t1[8] * t3[1],
 - t1[0] * t3[3] + t1[2] * t3[5] - t1[6] * t3[0] + t1[8] * t3[2],
 - t1[1] * t3[3] - t1[2] * t3[4] - t1[6] * t3[1] - t1[7] * t3[2],
 - t1[6] * t3[2] + t1[7] * t3[1] - t1[8] * t3[0],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3] - t1[6] * t3[2] + t1[7] * t3[1] - t1[8] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Dal (
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[0] + t4[5] * t6[9] - t4[6] * t6[2] + t4[7] * t6[1] - t4[11] * t6[4] + t4[12] * t6[3] + t4[14] * t6[5] - t4[15] * t6[5],
t4[0] * t6[5] - t4[2] * t6[3] + t4[3] * t6[1] + t4[5] * t6[2] + t4[6] * t6[9] - t4[7] * t6[0] - t4[11] * t6[5] + t4[13] * t6[3] - t4[14] * t6[4] + t4[15] * t6[4],
t4[1] * t6[5] - t4[2] * t6[4] + t4[3] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0] + t4[7] * t6[9] - t4[12] * t6[5] + t4[13] * t6[4] + t4[14] * t6[3] - t4[15] * t6[3],
t4[0] * t6[9] - t4[3] * t6[6] + t4[4] * t6[3] - t4[5] * t6[7] - t4[6] * t6[8] + t4[8] * t6[4] + t4[9] * t6[5] - t4[12] * t6[0] - t4[13] * t6[1] - t4[15] * t6[2],
t4[1] * t6[9] - t4[3] * t6[7] + t4[4] * t6[4] + t4[5] * t6[6] - t4[7] * t6[8] - t4[8] * t6[3] + t4[10] * t6[5] + t4[11] * t6[0] - t4[13] * t6[2] + t4[15] * t6[1],
t4[2] * t6[9] - t4[3] * t6[8] + t4[4] * t6[5] + t4[6] * t6[6] + t4[7] * t6[7] - t4[9] * t6[3] - t4[10] * t6[4] + t4[11] * t6[1] + t4[12] * t6[2] - t4[15] * t6[0]
);

}
		
	
	  	
template<>
inline Dal re (const Dal& dal, const Cir& cir) {					
					
const Cir& t1 = cir;
const Dal& t2 = dal;
Dal t3 = involute( t2);
Mtt t4 (
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2] + t1[6] * t3[3] + t1[7] * t3[4] + t1[8] * t3[5],
t1[4] * t3[2] - t1[5] * t3[1] + t1[6] * t3[4] - t1[7] * t3[3],
 - t1[3] * t3[2] + t1[5] * t3[0] + t1[6] * t3[5] - t1[8] * t3[3],
t1[3] * t3[1] - t1[4] * t3[0] + t1[7] * t3[5] - t1[8] * t3[4],
 - t1[0] * t3[4] - t1[1] * t3[5] + t1[7] * t3[0] + t1[8] * t3[1] - t1[9] * t3[2],
t1[0] * t3[3] - t1[2] * t3[5] - t1[6] * t3[0] + t1[8] * t3[2] + t1[9] * t3[1],
t1[1] * t3[3] + t1[2] * t3[4] - t1[6] * t3[1] - t1[7] * t3[2] - t1[9] * t3[0],
t1[3] * t3[4] + t1[4] * t3[5],
 - t1[3] * t3[3] + t1[5] * t3[5],
 - t1[4] * t3[3] - t1[5] * t3[4],
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
t1[4] * t3[2] - t1[5] * t3[1] + t1[9] * t3[5],
 - t1[3] * t3[2] + t1[5] * t3[0] - t1[9] * t3[4],
t1[3] * t3[1] - t1[4] * t3[0] + t1[9] * t3[3],
 - t1[0] * t3[5] + t1[1] * t3[4] - t1[2] * t3[3] - t1[6] * t3[2] + t1[7] * t3[1] - t1[8] * t3[0],
t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[3]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Dal (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] - t4[4] * t6[7] + t4[5] * t6[6] - t4[6] * t6[9] - t4[10] * t6[0] + t4[12] * t6[2] - t4[13] * t6[1] - t4[14] * t6[8],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] - t4[4] * t6[8] + t4[5] * t6[9] + t4[6] * t6[6] - t4[10] * t6[1] - t4[11] * t6[2] + t4[13] * t6[0] + t4[14] * t6[7],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[4] * t6[9] - t4[5] * t6[8] + t4[6] * t6[7] - t4[10] * t6[2] + t4[11] * t6[1] - t4[12] * t6[0] - t4[14] * t6[6],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[5] * t6[3] - t4[6] * t6[4] + t4[8] * t6[0] + t4[9] * t6[1] - t4[13] * t6[9] - t4[14] * t6[5] + t4[15] * t6[2],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[8] + t4[4] * t6[3] - t4[6] * t6[5] - t4[7] * t6[0] + t4[9] * t6[2] + t4[12] * t6[9] + t4[14] * t6[4] - t4[15] * t6[1],
t4[0] * t6[8] - t4[2] * t6[6] - t4[3] * t6[7] + t4[4] * t6[4] + t4[5] * t6[5] - t4[7] * t6[1] - t4[8] * t6[2] - t4[11] * t6[9] - t4[14] * t6[3] + t4[15] * t6[0]
);

}
		
	
	  	
template<>
inline Dal re (const Dal& dal, const Sph& sph) {					
					
const Sph& t1 = sph;
const Dal& t2 = dal;
Dal t3 = involute( t2);
Pnt_Afl t4 (
t1[0] * t3[4] + t1[1] * t3[5] + t1[4] * t3[2],
 - t1[0] * t3[3] + t1[2] * t3[5] - t1[4] * t3[1],
 - t1[1] * t3[3] - t1[2] * t3[4] + t1[4] * t3[0],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[1] * t3[2] - t1[2] * t3[1] - t1[3] * t3[5],
 - t1[0] * t3[2] + t1[2] * t3[0] + t1[3] * t3[4],
t1[0] * t3[1] - t1[1] * t3[0] - t1[3] * t3[3],
t1[4] * t3[5],
 - t1[4] * t3[4],
t1[4] * t3[3],
t1[4] * t3[2],
 - t1[4] * t3[1],
t1[4] * t3[0],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Dal (
t4[2] * t6[3] + t4[3] * t6[0] - t4[5] * t6[2] + t4[6] * t6[1] - t4[12] * t6[3],
 - t4[1] * t6[3] + t4[3] * t6[1] + t4[4] * t6[2] - t4[6] * t6[0] + t4[11] * t6[3],
t4[0] * t6[3] + t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0] - t4[10] * t6[3],
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[6] * t6[4] - t4[9] * t6[3] - t4[13] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[5] * t6[4] + t4[8] * t6[3] + t4[13] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[4] * t6[4] - t4[7] * t6[3] - t4[13] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	