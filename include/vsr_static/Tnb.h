		#ifndef TNB_H_INCLUDED
		#define TNB_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Tnb gp (const Tnb& a, const Sca& b) { 
	return Tnb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Sca gp (const Tnb& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Ori_Drb gp (const Tnb& a, const Inf& b) { 
	return Ori_Drb (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Tnb gp (const Tnb& a, const Mnk& b) { 
	return Tnb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Ori_Drb gp (const Tnb& a, const Hyp& b) { 
	return Ori_Drb (
 - a[0] * b[1],
 - a[1] * b[1],
 - a[2] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Tnv gp (const Tnb& a, const Pss& b) { 
	return Tnv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Ori_Cir gp (const Tnb& a, const Pnt& b) { 
	return Ori_Cir (
 - a[0] * b[4],
 - a[1] * b[4],
 - a[2] * b[4],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Par_Tnb gp (const Tnb& a, const Par& b) { 
	return Par_Tnb (
a[0] * b[7] + a[1] * b[8],
 - a[0] * b[6] + a[2] * b[8],
 - a[1] * b[6] - a[2] * b[7],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[9] - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] + a[1] * b[9] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0] + a[2] * b[9],
 - a[0] * b[7] - a[1] * b[8],
a[0] * b[6] - a[2] * b[8],
a[1] * b[6] + a[2] * b[7],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6]
);
}			
		 
inline Rvd gp (const Tnb& a, const Cir& b) { 
	return Rvd (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[1] * b[5] - a[2] * b[4],
 - a[0] * b[5] + a[2] * b[3],
a[0] * b[4] - a[1] * b[3],
 - a[0] * b[7] - a[1] * b[8] + a[2] * b[9],
a[0] * b[6] - a[1] * b[9] - a[2] * b[8],
a[0] * b[9] + a[1] * b[6] + a[2] * b[7],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[1] * b[5] + a[2] * b[4],
a[0] * b[5] - a[2] * b[3],
 - a[0] * b[4] + a[1] * b[3],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6]
);
}			
		 
inline Ori_Par gp (const Tnb& a, const Sph& b) { 
	return Ori_Par (
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[2] * b[4],
 - a[1] * b[4],
a[0] * b[4]
);
}			
		 
inline Par_Tnb gp (const Tnb& a, const Sta& b) { 
	return Par_Tnb (
a[0] * b[7] + a[1] * b[8],
 - a[0] * b[6] + a[2] * b[8],
 - a[1] * b[6] - a[2] * b[7],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[7] - a[1] * b[8],
a[0] * b[6] - a[2] * b[8],
a[1] * b[6] + a[2] * b[7],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6]
);
}			
		 
inline Drv_Tnb gp (const Tnb& a, const Drv& b) { 
	return Drv_Tnb (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Rtd gp (const Tnb& a, const Drb& b) { 
	return Rtd (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Ori_Drv gp (const Tnb& a, const Drt& b) { 
	return Ori_Drv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Sca gp (const Tnb& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Tnb& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Tnb& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Rvd gp (const Tnb& a, const Lin& b) { 
	return Rvd (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[0] * b[4] - a[1] * b[5],
a[0] * b[3] - a[2] * b[5],
a[1] * b[3] + a[2] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
inline Ori_Par gp (const Tnb& a, const Pln& b) { 
	return Ori_Par (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3]
);
}			
		 
inline Tnb_Flp gp (const Tnb& a, const Flp& b) { 
	return Tnb_Flp (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Par_Tnb gp (const Tnb& a, const Dll& b) { 
	return Par_Tnb (
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[4] - a[1] * b[5],
a[0] * b[3] - a[2] * b[5],
a[1] * b[3] + a[2] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
inline Ori_Cir gp (const Tnb& a, const Dlp& b) { 
	return Ori_Cir (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Tnv_Biv gp (const Tnb& a, const Vec& b) { 
	return Tnv_Biv (
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Tnv_Vec gp (const Tnb& a, const Biv& b) { 
	return Tnv_Vec (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Tnv gp (const Tnb& a, const Tri& b) { 
	return Tnv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Tnv_Biv gp (const Tnb& a, const Aff& b) { 
	return Tnv_Biv (
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Tnv_Vec gp (const Tnb& a, const Afl& b) { 
	return Tnv_Vec (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Tnv gp (const Tnb& a, const Afp& b) { 
	return Tnv (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3]
);
}			
		 
inline Tnv_Vec gp (const Tnb& a, const Rot& b) { 
	return Tnv_Vec (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Par_Tnb gp (const Tnb& a, const Mot& b) { 
	return Par_Tnb (
a[0] * b[5] + a[1] * b[6] - a[2] * b[7],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[7],
a[0] * b[4] - a[1] * b[7] - a[2] * b[6],
a[0] * b[7] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4]
);
}			
		 
inline Tnb gp (const Tnb& a, const Dil& b) { 
	return Tnb (
a[0] * b[0] + a[0] * b[1],
a[1] * b[0] + a[1] * b[1],
a[2] * b[0] + a[2] * b[1]
);
}			
		 
inline Tnb gp (const Tnb& a, const Trv& b) { 
	return Tnb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Par_Tnb gp (const Tnb& a, const Mtd& b) { 
	return Par_Tnb (
a[0] * b[5] + a[1] * b[6] - a[2] * b[11],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[1] - a[0] * b[8] - a[1] * b[2] - a[1] * b[9] - a[2] * b[3] - a[2] * b[10],
a[0] * b[0] + a[0] * b[7] - a[1] * b[3] - a[1] * b[10] + a[2] * b[2] + a[2] * b[9],
a[0] * b[3] + a[0] * b[10] + a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8],
 - a[0] * b[2] - a[0] * b[9] + a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[11],
a[0] * b[4] - a[1] * b[11] - a[2] * b[6],
a[0] * b[11] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4]
);
}			
		 
inline Tnb_Flp gp (const Tnb& a, const Trs& b) { 
	return Tnb_Flp (
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Rvd gp (const Tnb& a, const Rtc& b) { 
	return Rvd (
a[0] * b[8] + a[1] * b[9] + a[2] * b[10],
 - a[0] * b[4] + a[1] * b[10] - a[2] * b[9],
 - a[0] * b[10] - a[1] * b[4] + a[2] * b[8],
a[0] * b[9] - a[1] * b[8] - a[2] * b[4],
 - a[0] * b[1] - a[0] * b[12] - a[1] * b[2] - a[1] * b[13] + a[2] * b[14] + a[2] * b[15],
a[0] * b[0] + a[0] * b[11] - a[1] * b[14] - a[1] * b[15] - a[2] * b[2] - a[2] * b[13],
a[0] * b[14] + a[0] * b[15] + a[1] * b[0] + a[1] * b[11] + a[2] * b[1] + a[2] * b[12],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4],
 - a[0] * b[2] - a[0] * b[13] + a[1] * b[1] + a[1] * b[12] - a[2] * b[0] - a[2] * b[11]
);
}			
		 
inline Par_Tnb gp (const Tnb& a, const Mtt& b) { 
	return Par_Tnb (
a[0] * b[8] + a[1] * b[9] - a[2] * b[15],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10],
 - a[0] * b[8] - a[1] * b[9] + a[2] * b[15],
a[0] * b[7] - a[1] * b[15] - a[2] * b[9],
a[0] * b[15] + a[1] * b[7] + a[2] * b[8],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7]
);
}			
		 
inline Tnv_Vec gp (const Tnb& a, const Rtt& b) { 
	return Tnv_Vec (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Tnv_Vec gp (const Tnb& a, const Rtd& b) { 
	return Tnv_Vec (
 - a[0] * b[1] - a[0] * b[5] - a[1] * b[2] - a[1] * b[6] - a[2] * b[3] - a[2] * b[7],
a[0] * b[0] + a[0] * b[4] - a[1] * b[3] - a[1] * b[7] + a[2] * b[2] + a[2] * b[6],
a[0] * b[3] + a[0] * b[7] + a[1] * b[0] + a[1] * b[4] - a[2] * b[1] - a[2] * b[5],
 - a[0] * b[2] - a[0] * b[6] + a[1] * b[1] + a[1] * b[5] + a[2] * b[0] + a[2] * b[4]
);
}			
		 
inline Tnb gp (const Tnb& a, const Tvd& b) { 
	return Tnb (
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4]
);
}			
		 
inline Tnb_Flp gp (const Tnb& a, const Tsd& b) { 
	return Tnb_Flp (
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4],
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Par_Tnb gp (const Tnb& a, const Trt& b) { 
	return Par_Tnb (
a[0] * b[8] + a[1] * b[9],
 - a[0] * b[7] + a[2] * b[9],
 - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10],
 - a[0] * b[8] - a[1] * b[9],
a[0] * b[7] - a[2] * b[9],
a[1] * b[7] + a[2] * b[8],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7]
);
}			
		 
inline Tnv_Vec gp (const Tnb& a, const Rvd& b) { 
	return Tnv_Vec (
 - a[0] * b[1] - a[0] * b[8] - a[1] * b[2] - a[1] * b[9] - a[2] * b[3] - a[2] * b[10],
a[0] * b[0] + a[0] * b[7] - a[1] * b[3] - a[1] * b[10] + a[2] * b[2] + a[2] * b[9],
a[0] * b[3] + a[0] * b[10] + a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8],
 - a[0] * b[2] - a[0] * b[9] + a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7]
);
}			
		 
inline Par_Tnb gp (const Tnb& a, const Tst& b) { 
	return Par_Tnb (
a[0] * b[8] + a[1] * b[9],
 - a[0] * b[7] + a[2] * b[9],
 - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10],
 - a[0] * b[8] - a[1] * b[9],
a[0] * b[7] - a[2] * b[9],
a[1] * b[7] + a[2] * b[8],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7]
);
}			
		 
inline Par_Tnb gp (const Tnb& a, const Tvt& b) { 
	return Par_Tnb (
a[0] * b[8] + a[1] * b[9] - a[2] * b[14],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10],
 - a[0] * b[8] - a[1] * b[9] + a[2] * b[14],
a[0] * b[7] - a[1] * b[14] - a[2] * b[9],
a[0] * b[14] + a[1] * b[7] + a[2] * b[8],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7]
);
}			
		 
inline Tnb op (const Tnb& a, const Sca& b) { 
	return Tnb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Sca op (const Tnb& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Mnk_Biv op (const Tnb& a, const Inf& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Sca op (const Tnb& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Mnk_Biv op (const Tnb& a, const Hyp& b) { 
	return Mnk_Biv (
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Sca op (const Tnb& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Pss_Aff op (const Tnb& a, const Pnt& b) { 
	return Pss_Aff (
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Pss op (const Tnb& a, const Par& b) { 
	return Pss (
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6]
);
}			
		 
inline Sca op (const Tnb& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnb& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Tnb& a, const Sta& b) { 
	return Pss (
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6]
);
}			
		 
inline Pss op (const Tnb& a, const Drv& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Sca op (const Tnb& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnb& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnb& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnb& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnb& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnb& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnb& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Tnb& a, const Flp& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Pss op (const Tnb& a, const Dll& b) { 
	return Pss (
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
inline Pss_Aff op (const Tnb& a, const Dlp& b) { 
	return Pss_Aff (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Tnt op (const Tnb& a, const Vec& b) { 
	return Tnt (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Sca op (const Tnb& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnb& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Tnt op (const Tnb& a, const Aff& b) { 
	return Tnt (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Sca op (const Tnb& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnb& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Tnv ip (const Tnb& a, const Pss& b) { 
	return Tnv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Sca ip (const Tnb& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Cir& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Aff ip (const Tnb& a, const Sph& b) { 
	return Aff (
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Tnb& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Drb& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Vec ip (const Tnb& a, const Drt& b) { 
	return Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Tnb& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Lin& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Aff ip (const Tnb& a, const Pln& b) { 
	return Aff (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Tnb& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnb& a, const Afp& b) { 
	return Sca (
);
}			
		  	
inline Tnb sp (const Tnb& tnb, const Rot& rot) {					
					
const Rot& t1 = rot;
const Tnb& t2 = tnb;
Tnv_Vec t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Tnb (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Mot& mot) {					
					
const Mot& t1 = mot;
const Tnb& t2 = tnb;
Par_Tnb t3 (
t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Tnb (
t3[3] * t5[1] + t3[4] * t5[0] - t3[5] * t5[3] + t3[6] * t5[2],
t3[3] * t5[2] + t3[4] * t5[3] + t3[5] * t5[0] - t3[6] * t5[1],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Dil& dil) {					
					
const Dil& t1 = dil;
const Tnb& t2 = tnb;
Tnb t3 (
t1[0] * t2[0] - t1[1] * t2[0],
t1[0] * t2[1] - t1[1] * t2[1],
t1[0] * t2[2] - t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Tnb (
t3[0] * t5[0] + t3[0] * t5[1],
t3[1] * t5[0] + t3[1] * t5[1],
t3[2] * t5[0] + t3[2] * t5[1]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Trv& trv) {					
					
const Trv& t1 = trv;
const Tnb& t2 = tnb;
Tnb t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Tnb (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Tnb& t2 = tnb;
Par_Tnb t3 (
t1[5] * t2[0] + t1[6] * t2[1] + t1[11] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] - t1[11] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[11] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[7] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
t1[5] * t2[0] + t1[6] * t2[1] + t1[11] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] - t1[11] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[11] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Tnb (
t3[3] * t5[1] + t3[3] * t5[8] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[3] - t3[5] * t5[10] + t3[6] * t5[2] + t3[6] * t5[9],
t3[3] * t5[2] + t3[3] * t5[9] + t3[4] * t5[3] + t3[4] * t5[10] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[1] - t3[6] * t5[8],
t3[3] * t5[3] + t3[3] * t5[10] - t3[4] * t5[2] - t3[4] * t5[9] + t3[5] * t5[1] + t3[5] * t5[8] + t3[6] * t5[0] + t3[6] * t5[7]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Trs& trs) {					
					
const Trs& t1 = trs;
const Tnb& t2 = tnb;
Tnb_Flp t3 (
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Tnb (
t3[3] * t5[0],
t3[4] * t5[0],
t3[5] * t5[0]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Tnb& t2 = tnb;
Rvd t3 (
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2],
 - t1[4] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1],
 - t1[4] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0],
 - t1[4] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] + t1[12] * t2[0] + t1[13] * t2[1] - t1[14] * t2[2] + t1[15] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] - t1[11] * t2[0] + t1[13] * t2[2] + t1[14] * t2[1] - t1[15] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[11] * t2[1] - t1[12] * t2[2] - t1[14] * t2[0] + t1[15] * t2[0],
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2],
 - t1[4] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1],
 - t1[4] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0],
 - t1[4] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Tnb (
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] + t3[3] * t5[6] - t3[4] * t5[1] - t3[4] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[7] * t5[5] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] - t3[11] * t5[2] - t3[11] * t5[13],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[5] - t3[4] * t5[2] - t3[4] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] - t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[1] + t3[11] * t5[12],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] + t3[3] * t5[3] - t3[4] * t5[14] - t3[4] * t5[15] - t3[5] * t5[2] - t3[5] * t5[13] + t3[6] * t5[1] + t3[6] * t5[12] - t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] - t3[11] * t5[0] - t3[11] * t5[11]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Tnb& t2 = tnb;
Par_Tnb t3 (
t1[8] * t2[0] + t1[9] * t2[1] + t1[15] * t2[2],
 - t1[7] * t2[0] + t1[9] * t2[2] - t1[15] * t2[1],
 - t1[7] * t2[1] - t1[8] * t2[2] + t1[15] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
t1[8] * t2[0] + t1[9] * t2[1] + t1[15] * t2[2],
 - t1[7] * t2[0] + t1[9] * t2[2] - t1[15] * t2[1],
 - t1[7] * t2[1] - t1[8] * t2[2] + t1[15] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Tnb (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[1] + t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[2] + t3[6] * t5[12] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[14] + t3[10] * t5[6] - t3[11] * t5[6],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[4] * t5[3] + t3[4] * t5[13] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[1] - t3[6] * t5[11] - t3[7] * t5[6] + t3[8] * t5[14] + t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[5],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[1] + t3[5] * t5[11] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[14] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[4] - t3[11] * t5[4]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Tnb& t2 = tnb;
Tnv_Vec t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Tnb (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Tnb& t2 = tnb;
Tnv_Vec t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Tnb (
t3[0] * t5[1] + t3[0] * t5[5] + t3[1] * t5[0] + t3[1] * t5[4] - t3[2] * t5[3] - t3[2] * t5[7] + t3[3] * t5[2] + t3[3] * t5[6],
t3[0] * t5[2] + t3[0] * t5[6] + t3[1] * t5[3] + t3[1] * t5[7] + t3[2] * t5[0] + t3[2] * t5[4] - t3[3] * t5[1] - t3[3] * t5[5],
t3[0] * t5[3] + t3[0] * t5[7] - t3[1] * t5[2] - t3[1] * t5[6] + t3[2] * t5[1] + t3[2] * t5[5] + t3[3] * t5[0] + t3[3] * t5[4]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Tnb& t2 = tnb;
Tnb t3 (
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Tnb (
t3[0] * t5[0] + t3[0] * t5[4],
t3[1] * t5[0] + t3[1] * t5[4],
t3[2] * t5[0] + t3[2] * t5[4]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Tnb& t2 = tnb;
Tnb_Flp t3 (
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2],
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Tnb (
t3[3] * t5[0] + t3[3] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Trt& trt) {					
					
const Trt& t1 = trt;
const Tnb& t2 = tnb;
Par_Tnb t3 (
t1[8] * t2[0] + t1[9] * t2[1],
 - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
t1[8] * t2[0] + t1[9] * t2[1],
 - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Tnb (
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[1] + t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[2] + t3[6] * t5[12] - t3[7] * t5[5] + t3[8] * t5[4] + t3[10] * t5[6] - t3[11] * t5[6],
t3[0] * t5[6] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[4] * t5[3] + t3[4] * t5[13] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[1] - t3[6] * t5[11] - t3[7] * t5[6] + t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[5],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[1] + t3[5] * t5[11] + t3[6] * t5[0] + t3[6] * t5[10] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[4] - t3[11] * t5[4]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Tnb& t2 = tnb;
Tnv_Vec t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[7] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Tnb (
t3[0] * t5[1] + t3[0] * t5[8] + t3[1] * t5[0] + t3[1] * t5[7] - t3[2] * t5[3] - t3[2] * t5[10] + t3[3] * t5[2] + t3[3] * t5[9],
t3[0] * t5[2] + t3[0] * t5[9] + t3[1] * t5[3] + t3[1] * t5[10] + t3[2] * t5[0] + t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[8],
t3[0] * t5[3] + t3[0] * t5[10] - t3[1] * t5[2] - t3[1] * t5[9] + t3[2] * t5[1] + t3[2] * t5[8] + t3[3] * t5[0] + t3[3] * t5[7]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Tst& tst) {					
					
const Tst& t1 = tst;
const Tnb& t2 = tnb;
Par_Tnb t3 (
t1[8] * t2[0] + t1[9] * t2[1],
 - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
t1[8] * t2[0] + t1[9] * t2[1],
 - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Tnb (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[1] + t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[2] + t3[6] * t5[12] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[14] + t3[10] * t5[6] - t3[11] * t5[6],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[4] * t5[3] + t3[4] * t5[13] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[1] - t3[6] * t5[11] - t3[7] * t5[6] + t3[8] * t5[14] + t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[5],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[1] + t3[5] * t5[11] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[14] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[4] - t3[11] * t5[4]
);

}
		
	
	  	
inline Tnb sp (const Tnb& tnb, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Tnb& t2 = tnb;
Par_Tnb t3 (
t1[8] * t2[0] + t1[9] * t2[1] + t1[14] * t2[2],
 - t1[7] * t2[0] + t1[9] * t2[2] - t1[14] * t2[1],
 - t1[7] * t2[1] - t1[8] * t2[2] + t1[14] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
t1[8] * t2[0] + t1[9] * t2[1] + t1[14] * t2[2],
 - t1[7] * t2[0] + t1[9] * t2[2] - t1[14] * t2[1],
 - t1[7] * t2[1] - t1[8] * t2[2] + t1[14] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Tnb (
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[1] + t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[2] + t3[6] * t5[12] - t3[7] * t5[5] + t3[8] * t5[4] + t3[10] * t5[6] - t3[11] * t5[6],
t3[0] * t5[6] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[4] * t5[3] + t3[4] * t5[13] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[1] - t3[6] * t5[11] - t3[7] * t5[6] + t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[5],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[1] + t3[5] * t5[11] + t3[6] * t5[0] + t3[6] * t5[10] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[4] - t3[11] * t5[4]
);

}
		
	
		
	} //vsr::
	#endif
	