		#ifndef TNV_H_INCLUDED
		#define TNV_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Tnv gp (const Tnv& a, const Sca& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Sca gp (const Tnv& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Ori_Drv gp (const Tnv& a, const Inf& b) { 
	return Ori_Drv (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Tnv gp (const Tnv& a, const Mnk& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Ori_Drv gp (const Tnv& a, const Hyp& b) { 
	return Ori_Drv (
 - a[0] * b[1],
 - a[1] * b[1],
 - a[2] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Tnb gp (const Tnv& a, const Pss& b) { 
	return Tnb (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Ori_Par gp (const Tnv& a, const Pnt& b) { 
	return Ori_Par (
 - a[0] * b[4],
 - a[1] * b[4],
 - a[2] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4]
);
}			
		 
inline Rvd gp (const Tnv& a, const Par& b) { 
	return Rvd (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
a[0] * b[9] - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] + a[1] * b[9] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2] + a[2] * b[9],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[7] + a[1] * b[6],
 - a[0] * b[8] + a[2] * b[6],
 - a[1] * b[8] + a[2] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Par_Tnb gp (const Tnv& a, const Cir& b) { 
	return Par_Tnb (
a[1] * b[3] + a[2] * b[4],
 - a[0] * b[3] + a[2] * b[5],
 - a[0] * b[4] - a[1] * b[5],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[7] + a[1] * b[6] - a[2] * b[9],
 - a[0] * b[8] + a[1] * b[9] + a[2] * b[6],
 - a[0] * b[9] - a[1] * b[8] + a[2] * b[7],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[3] - a[2] * b[5],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Ori_Cir gp (const Tnv& a, const Sph& b) { 
	return Ori_Cir (
a[2] * b[4],
 - a[1] * b[4],
a[0] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Rvd gp (const Tnv& a, const Sta& b) { 
	return Rvd (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[7] + a[1] * b[6],
 - a[0] * b[8] + a[2] * b[6],
 - a[1] * b[8] + a[2] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Rtd gp (const Tnv& a, const Drv& b) { 
	return Rtd (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Drv_Tnb gp (const Tnv& a, const Drb& b) { 
	return Drv_Tnb (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Ori_Drb gp (const Tnv& a, const Drt& b) { 
	return Ori_Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca gp (const Tnv& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Tnv& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Tnv& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Par_Tnb gp (const Tnv& a, const Lin& b) { 
	return Par_Tnb (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[4] + a[1] * b[3],
 - a[0] * b[5] + a[2] * b[3],
 - a[1] * b[5] + a[2] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Ori_Cir gp (const Tnv& a, const Pln& b) { 
	return Ori_Cir (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Tnv_Flp gp (const Tnv& a, const Flp& b) { 
	return Tnv_Flp (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Rvd gp (const Tnv& a, const Dll& b) { 
	return Rvd (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[4] + a[1] * b[3],
 - a[0] * b[5] + a[2] * b[3],
 - a[1] * b[5] + a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Ori_Par gp (const Tnv& a, const Dlp& b) { 
	return Ori_Par (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
inline Tnv_Vec gp (const Tnv& a, const Vec& b) { 
	return Tnv_Vec (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Tnv_Biv gp (const Tnv& a, const Biv& b) { 
	return Tnv_Biv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Tnb gp (const Tnv& a, const Tri& b) { 
	return Tnb (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Tnv_Vec gp (const Tnv& a, const Aff& b) { 
	return Tnv_Vec (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Tnv_Biv gp (const Tnv& a, const Afl& b) { 
	return Tnv_Biv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Tnb gp (const Tnv& a, const Afp& b) { 
	return Tnb (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3]
);
}			
		 
inline Tnv_Biv gp (const Tnv& a, const Rot& b) { 
	return Tnv_Biv (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Rvd gp (const Tnv& a, const Mot& b) { 
	return Rvd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
 - a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[7],
 - a[0] * b[6] + a[1] * b[7] + a[2] * b[4],
 - a[0] * b[7] - a[1] * b[6] + a[2] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Tnv gp (const Tnv& a, const Dil& b) { 
	return Tnv (
a[0] * b[0] + a[0] * b[1],
a[1] * b[0] + a[1] * b[1],
a[2] * b[0] + a[2] * b[1]
);
}			
		 
inline Tnv gp (const Tnv& a, const Trv& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Rvd gp (const Tnv& a, const Mtd& b) { 
	return Rvd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] + a[0] * b[7] - a[1] * b[1] - a[1] * b[8] - a[2] * b[2] - a[2] * b[9],
a[0] * b[1] + a[0] * b[8] + a[1] * b[0] + a[1] * b[7] - a[2] * b[3] - a[2] * b[10],
a[0] * b[2] + a[0] * b[9] + a[1] * b[3] + a[1] * b[10] + a[2] * b[0] + a[2] * b[7],
 - a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[11],
 - a[0] * b[6] + a[1] * b[11] + a[2] * b[4],
 - a[0] * b[11] - a[1] * b[6] + a[2] * b[5],
a[0] * b[3] + a[0] * b[10] - a[1] * b[2] - a[1] * b[9] + a[2] * b[1] + a[2] * b[8]
);
}			
		 
inline Tnv_Flp gp (const Tnv& a, const Trs& b) { 
	return Tnv_Flp (
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
 - a[0] * b[2] + a[1] * b[1],
 - a[0] * b[3] + a[2] * b[1],
 - a[1] * b[3] + a[2] * b[2]
);
}			
		 
inline Par_Tnb gp (const Tnv& a, const Rtc& b) { 
	return Par_Tnb (
 - a[0] * b[4] + a[1] * b[8] + a[2] * b[9],
 - a[0] * b[8] - a[1] * b[4] + a[2] * b[10],
 - a[0] * b[9] - a[1] * b[10] - a[2] * b[4],
 - a[0] * b[0] - a[0] * b[11] - a[1] * b[1] - a[1] * b[12] - a[2] * b[2] - a[2] * b[13],
 - a[0] * b[1] - a[0] * b[12] + a[1] * b[0] + a[1] * b[11] - a[2] * b[14] - a[2] * b[15],
 - a[0] * b[2] - a[0] * b[13] + a[1] * b[14] + a[1] * b[15] + a[2] * b[0] + a[2] * b[11],
 - a[0] * b[14] - a[0] * b[15] - a[1] * b[2] - a[1] * b[13] + a[2] * b[1] + a[2] * b[12],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4],
 - a[0] * b[10] + a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8]
);
}			
		 
inline Rvd gp (const Tnv& a, const Mtt& b) { 
	return Rvd (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[1] * b[11] - a[2] * b[2] - a[2] * b[12],
a[0] * b[1] + a[0] * b[11] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3] - a[2] * b[13],
a[0] * b[2] + a[0] * b[12] + a[1] * b[3] + a[1] * b[13] + a[2] * b[0] + a[2] * b[10],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[15],
 - a[0] * b[9] + a[1] * b[15] + a[2] * b[7],
 - a[0] * b[15] - a[1] * b[9] + a[2] * b[8],
a[0] * b[3] + a[0] * b[13] - a[1] * b[2] - a[1] * b[12] + a[2] * b[1] + a[2] * b[11]
);
}			
		 
inline Tnv_Biv gp (const Tnv& a, const Rtt& b) { 
	return Tnv_Biv (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Tnv_Biv gp (const Tnv& a, const Rtd& b) { 
	return Tnv_Biv (
a[0] * b[0] + a[0] * b[4] - a[1] * b[1] - a[1] * b[5] - a[2] * b[2] - a[2] * b[6],
a[0] * b[1] + a[0] * b[5] + a[1] * b[0] + a[1] * b[4] - a[2] * b[3] - a[2] * b[7],
a[0] * b[2] + a[0] * b[6] + a[1] * b[3] + a[1] * b[7] + a[2] * b[0] + a[2] * b[4],
a[0] * b[3] + a[0] * b[7] - a[1] * b[2] - a[1] * b[6] + a[2] * b[1] + a[2] * b[5]
);
}			
		 
inline Tnv gp (const Tnv& a, const Tvd& b) { 
	return Tnv (
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4]
);
}			
		 
inline Tnv_Flp gp (const Tnv& a, const Tsd& b) { 
	return Tnv_Flp (
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
 - a[0] * b[2] + a[1] * b[1],
 - a[0] * b[3] + a[2] * b[1],
 - a[1] * b[3] + a[2] * b[2]
);
}			
		 
inline Rvd gp (const Tnv& a, const Trt& b) { 
	return Rvd (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[1] * b[11] - a[2] * b[2] - a[2] * b[12],
a[0] * b[1] + a[0] * b[11] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3] - a[2] * b[13],
a[0] * b[2] + a[0] * b[12] + a[1] * b[3] + a[1] * b[13] + a[2] * b[0] + a[2] * b[10],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
 - a[0] * b[8] + a[1] * b[7],
 - a[0] * b[9] + a[2] * b[7],
 - a[1] * b[9] + a[2] * b[8],
a[0] * b[3] + a[0] * b[13] - a[1] * b[2] - a[1] * b[12] + a[2] * b[1] + a[2] * b[11]
);
}			
		 
inline Tnv_Biv gp (const Tnv& a, const Rvd& b) { 
	return Tnv_Biv (
a[0] * b[0] + a[0] * b[7] - a[1] * b[1] - a[1] * b[8] - a[2] * b[2] - a[2] * b[9],
a[0] * b[1] + a[0] * b[8] + a[1] * b[0] + a[1] * b[7] - a[2] * b[3] - a[2] * b[10],
a[0] * b[2] + a[0] * b[9] + a[1] * b[3] + a[1] * b[10] + a[2] * b[0] + a[2] * b[7],
a[0] * b[3] + a[0] * b[10] - a[1] * b[2] - a[1] * b[9] + a[2] * b[1] + a[2] * b[8]
);
}			
		 
inline Rvd gp (const Tnv& a, const Tst& b) { 
	return Rvd (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[1] * b[11] - a[2] * b[2] - a[2] * b[12],
a[0] * b[1] + a[0] * b[11] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3] - a[2] * b[13],
a[0] * b[2] + a[0] * b[12] + a[1] * b[3] + a[1] * b[13] + a[2] * b[0] + a[2] * b[10],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
 - a[0] * b[8] + a[1] * b[7],
 - a[0] * b[9] + a[2] * b[7],
 - a[1] * b[9] + a[2] * b[8],
a[0] * b[3] + a[0] * b[13] - a[1] * b[2] - a[1] * b[12] + a[2] * b[1] + a[2] * b[11]
);
}			
		 
inline Rvd gp (const Tnv& a, const Tvt& b) { 
	return Rvd (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[1] * b[11] - a[2] * b[2] - a[2] * b[12],
a[0] * b[1] + a[0] * b[11] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3] - a[2] * b[13],
a[0] * b[2] + a[0] * b[12] + a[1] * b[3] + a[1] * b[13] + a[2] * b[0] + a[2] * b[10],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[14],
 - a[0] * b[9] + a[1] * b[14] + a[2] * b[7],
 - a[0] * b[14] - a[1] * b[9] + a[2] * b[8],
a[0] * b[3] + a[0] * b[13] - a[1] * b[2] - a[1] * b[12] + a[2] * b[1] + a[2] * b[11]
);
}			
		 
inline Tnv op (const Tnv& a, const Sca& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Sca op (const Tnv& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Mnk_Vec op (const Tnv& a, const Inf& b) { 
	return Mnk_Vec (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Sca op (const Tnv& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Mnk_Vec op (const Tnv& a, const Hyp& b) { 
	return Mnk_Vec (
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Sca op (const Tnv& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Pss_Afl op (const Tnv& a, const Pnt& b) { 
	return Pss_Afl (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4]
);
}			
		 
inline Pss_Aff op (const Tnv& a, const Par& b) { 
	return Pss_Aff (
 - a[0] * b[7] + a[1] * b[6],
 - a[0] * b[8] + a[2] * b[6],
 - a[1] * b[8] + a[2] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Tnv& a, const Cir& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Sca op (const Tnv& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Pss_Aff op (const Tnv& a, const Sta& b) { 
	return Pss_Aff (
 - a[0] * b[7] + a[1] * b[6],
 - a[0] * b[8] + a[2] * b[6],
 - a[1] * b[8] + a[2] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mnk_Biv op (const Tnv& a, const Drv& b) { 
	return Mnk_Biv (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Pss op (const Tnv& a, const Drb& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Tnv& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnv& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnv& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnv& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Tnv& a, const Lin& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Tnv& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Mnk_Biv op (const Tnv& a, const Flp& b) { 
	return Mnk_Biv (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Pss_Aff op (const Tnv& a, const Dll& b) { 
	return Pss_Aff (
 - a[0] * b[4] + a[1] * b[3],
 - a[0] * b[5] + a[2] * b[3],
 - a[1] * b[5] + a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss_Afl op (const Tnv& a, const Dlp& b) { 
	return Pss_Afl (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
inline Tnb op (const Tnv& a, const Vec& b) { 
	return Tnb (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Tnt op (const Tnv& a, const Biv& b) { 
	return Tnt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Tnv& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Tnb op (const Tnv& a, const Aff& b) { 
	return Tnb (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Tnt op (const Tnv& a, const Afl& b) { 
	return Tnt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Tnv& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Tnb ip (const Tnv& a, const Pss& b) { 
	return Tnb (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Tnv& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Par& b) { 
	return Sca (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
inline Aff ip (const Tnv& a, const Cir& b) { 
	return Aff (
a[1] * b[3] + a[2] * b[4],
 - a[0] * b[3] + a[2] * b[5],
 - a[0] * b[4] - a[1] * b[5],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[8]
);
}			
		 
inline Afl ip (const Tnv& a, const Sph& b) { 
	return Afl (
a[2] * b[4],
 - a[1] * b[4],
a[0] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Sca ip (const Tnv& a, const Sta& b) { 
	return Sca (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
inline Sca ip (const Tnv& a, const Drv& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Vec ip (const Tnv& a, const Drb& b) { 
	return Vec (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
inline Biv ip (const Tnv& a, const Drt& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Sca ip (const Tnv& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Aff ip (const Tnv& a, const Lin& b) { 
	return Aff (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5]
);
}			
		 
inline Afl ip (const Tnv& a, const Pln& b) { 
	return Afl (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Sca ip (const Tnv& a, const Flp& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Sca ip (const Tnv& a, const Dll& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Sca ip (const Tnv& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnv& a, const Afp& b) { 
	return Sca (
);
}			
		  	
inline Tnv sp (const Tnv& tnv, const Rot& rot) {					
					
const Rot& t1 = rot;
const Tnv& t2 = tnv;
Tnv_Biv t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Tnv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Mot& mot) {					
					
const Mot& t1 = mot;
const Tnv& t2 = tnv;
Rvd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Tnv (
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[11] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[11] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[11] * t5[1]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Dil& dil) {					
					
const Dil& t1 = dil;
const Tnv& t2 = tnv;
Tnv t3 (
t1[0] * t2[0] - t1[1] * t2[0],
t1[0] * t2[1] - t1[1] * t2[1],
t1[0] * t2[2] - t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Tnv (
t3[0] * t5[0] + t3[0] * t5[1],
t3[1] * t5[0] + t3[1] * t5[1],
t3[2] * t5[0] + t3[2] * t5[1]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Trv& trv) {					
					
const Trv& t1 = trv;
const Tnv& t2 = tnv;
Tnv t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Tnv (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Tnv& t2 = tnv;
Rvd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[11] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[11] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[11] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[7] * t2[1] + t1[8] * t2[0] - t1[10] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[7] * t2[2] + t1[9] * t2[0] + t1[10] * t2[1],
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[11] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[11] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[11] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[8] * t2[2] + t1[9] * t2[1] - t1[10] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Tnv (
t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[11] * t5[3] - t3[11] * t5[10],
t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[11] * t5[2] + t3[11] * t5[9],
t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[11] * t5[1] - t3[11] * t5[8]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Trs& trs) {					
					
const Trs& t1 = trs;
const Tnv& t2 = tnv;
Tnv_Flp t3 (
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Tnv (
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Tnv& t2 = tnv;
Par_Tnb t3 (
t1[4] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[4] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[4] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] - t1[11] * t2[1] + t1[12] * t2[0] + t1[14] * t2[2] - t1[15] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[11] * t2[2] + t1[13] * t2[0] - t1[14] * t2[1] + t1[15] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[0] - t1[15] * t2[0],
t1[4] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[4] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[4] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Tnv (
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[0] - t3[3] * t5[11] - t3[4] * t5[1] - t3[4] * t5[12] - t3[5] * t5[2] - t3[5] * t5[13] + t3[6] * t5[14] + t3[6] * t5[15] - t3[7] * t5[3] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[7] + t3[11] * t5[7],
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[12] + t3[4] * t5[0] + t3[4] * t5[11] - t3[5] * t5[14] - t3[5] * t5[15] - t3[6] * t5[2] - t3[6] * t5[13] - t3[7] * t5[5] - t3[8] * t5[3] + t3[9] * t5[7] + t3[10] * t5[6] - t3[11] * t5[6],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[2] - t3[3] * t5[13] + t3[4] * t5[14] + t3[4] * t5[15] + t3[5] * t5[0] + t3[5] * t5[11] + t3[6] * t5[1] + t3[6] * t5[12] - t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[3] - t3[10] * t5[5] + t3[11] * t5[5]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Tnv& t2 = tnv;
Rvd t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[15] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[15] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[15] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[10] * t2[1] + t1[11] * t2[0] - t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[10] * t2[2] + t1[12] * t2[0] + t1[13] * t2[1],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[15] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[15] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[15] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Tnv (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] + t3[10] * t5[14] - t3[11] * t5[3] - t3[11] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[14] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[6] + t3[8] * t5[14] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[11]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Tnv& t2 = tnv;
Tnv_Biv t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Tnv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Tnv& t2 = tnv;
Tnv_Biv t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Tnv (
t3[0] * t5[0] + t3[0] * t5[4] - t3[1] * t5[1] - t3[1] * t5[5] - t3[2] * t5[2] - t3[2] * t5[6] - t3[3] * t5[3] - t3[3] * t5[7],
t3[0] * t5[1] + t3[0] * t5[5] + t3[1] * t5[0] + t3[1] * t5[4] - t3[2] * t5[3] - t3[2] * t5[7] + t3[3] * t5[2] + t3[3] * t5[6],
t3[0] * t5[2] + t3[0] * t5[6] + t3[1] * t5[3] + t3[1] * t5[7] + t3[2] * t5[0] + t3[2] * t5[4] - t3[3] * t5[1] - t3[3] * t5[5]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Tnv& t2 = tnv;
Tnv t3 (
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Tnv (
t3[0] * t5[0] + t3[0] * t5[4],
t3[1] * t5[0] + t3[1] * t5[4],
t3[2] * t5[0] + t3[2] * t5[4]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Tnv& t2 = tnv;
Tnv_Flp t3 (
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2],
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Tnv (
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Trt& trt) {					
					
const Trt& t1 = trt;
const Tnv& t2 = tnv;
Rvd t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[10] * t2[1] + t1[11] * t2[0] - t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[10] * t2[2] + t1[12] * t2[0] + t1[13] * t2[1],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Tnv (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[11] * t5[3] - t3[11] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[7] * t5[5] + t3[8] * t5[4] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[6] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[11]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Tnv& t2 = tnv;
Tnv_Biv t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[7] * t2[1] + t1[8] * t2[0] - t1[10] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[7] * t2[2] + t1[9] * t2[0] + t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[8] * t2[2] + t1[9] * t2[1] - t1[10] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Tnv (
t3[0] * t5[0] + t3[0] * t5[7] - t3[1] * t5[1] - t3[1] * t5[8] - t3[2] * t5[2] - t3[2] * t5[9] - t3[3] * t5[3] - t3[3] * t5[10],
t3[0] * t5[1] + t3[0] * t5[8] + t3[1] * t5[0] + t3[1] * t5[7] - t3[2] * t5[3] - t3[2] * t5[10] + t3[3] * t5[2] + t3[3] * t5[9],
t3[0] * t5[2] + t3[0] * t5[9] + t3[1] * t5[3] + t3[1] * t5[10] + t3[2] * t5[0] + t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[8]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Tst& tst) {					
					
const Tst& t1 = tst;
const Tnv& t2 = tnv;
Rvd t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[10] * t2[1] + t1[11] * t2[0] - t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[10] * t2[2] + t1[12] * t2[0] + t1[13] * t2[1],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Tnv (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] + t3[10] * t5[14] - t3[11] * t5[3] - t3[11] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[14] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[6] + t3[8] * t5[14] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[11]
);

}
		
	
	  	
inline Tnv sp (const Tnv& tnv, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Tnv& t2 = tnv;
Rvd t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[14] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[14] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[14] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[10] * t2[1] + t1[11] * t2[0] - t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[10] * t2[2] + t1[12] * t2[0] + t1[13] * t2[1],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[14] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[14] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[14] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Tnv (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[11] * t5[3] - t3[11] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[7] * t5[5] + t3[8] * t5[4] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[6] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[11]
);

}
		
	
		
	} //vsr::
	#endif
	