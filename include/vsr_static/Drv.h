		#ifndef DRV_H_INCLUDED
		#define DRV_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Drv gp (const Drv& a, const Sca& b) { 
	return Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Ori_Drv gp (const Drv& a, const Ori& b) { 
	return Ori_Drv (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Sca gp (const Drv& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Drv gp (const Drv& a, const Mnk& b) { 
	return Drv (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Ori_Drv gp (const Drv& a, const Hyp& b) { 
	return Ori_Drv (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Drb gp (const Drv& a, const Pss& b) { 
	return Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Inf_Par gp (const Drv& a, const Pnt& b) { 
	return Inf_Par (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3]
);
}			
		 
inline Mtd gp (const Drv& a, const Par& b) { 
	return Mtd (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[0] * b[9] - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[1] * b[9] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2] - a[2] * b[9],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Par_Drb gp (const Drv& a, const Cir& b) { 
	return Par_Drb (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6] - a[2] * b[9],
a[0] * b[8] + a[1] * b[9] - a[2] * b[6],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Inf_Cir gp (const Drv& a, const Sph& b) { 
	return Inf_Cir (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Mtd gp (const Drv& a, const Sta& b) { 
	return Mtd (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca gp (const Drv& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Drv& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Drv& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Rtd gp (const Drv& a, const Tnv& b) { 
	return Rtd (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Drv_Tnb gp (const Drv& a, const Tnb& b) { 
	return Drv_Tnb (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Ori_Drb gp (const Drv& a, const Tnt& b) { 
	return Ori_Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Drv_Lin gp (const Drv& a, const Lin& b) { 
	return Drv_Lin (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4]
);
}			
		 
inline Drv_Pln gp (const Drv& a, const Pln& b) { 
	return Drv_Pln (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Drv gp (const Drv& a, const Flp& b) { 
	return Drv (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3]
);
}			
		 
inline Drv_Pln gp (const Drv& a, const Dll& b) { 
	return Drv_Pln (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drv_Lin gp (const Drv& a, const Dlp& b) { 
	return Drv_Lin (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Drv_Lin gp (const Drv& a, const Vec& b) { 
	return Drv_Lin (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Drv_Pln gp (const Drv& a, const Biv& b) { 
	return Drv_Pln (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drb gp (const Drv& a, const Tri& b) { 
	return Drb (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Inf_Par gp (const Drv& a, const Aff& b) { 
	return Inf_Par (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3]
);
}			
		 
inline Mtd gp (const Drv& a, const Afl& b) { 
	return Mtd (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drv_Afp gp (const Drv& a, const Afp& b) { 
	return Drv_Afp (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Drv_Pln gp (const Drv& a, const Rot& b) { 
	return Drv_Pln (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Drv_Pln gp (const Drv& a, const Mot& b) { 
	return Drv_Pln (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Drv gp (const Drv& a, const Dil& b) { 
	return Drv (
a[0] * b[0] - a[0] * b[1],
a[1] * b[0] - a[1] * b[1],
a[2] * b[0] - a[2] * b[1]
);
}			
		 
inline Drb_Afp gp (const Drv& a, const Trv& b) { 
	return Drb_Afp (
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2]
);
}			
		 
inline Drv_Pln gp (const Drv& a, const Mtd& b) { 
	return Drv_Pln (
a[0] * b[0] - a[0] * b[7] - a[1] * b[1] + a[1] * b[8] - a[2] * b[2] + a[2] * b[9],
a[0] * b[1] - a[0] * b[8] + a[1] * b[0] - a[1] * b[7] - a[2] * b[3] + a[2] * b[10],
a[0] * b[2] - a[0] * b[9] + a[1] * b[3] - a[1] * b[10] + a[2] * b[0] - a[2] * b[7],
a[0] * b[3] - a[0] * b[10] - a[1] * b[2] + a[1] * b[9] + a[2] * b[1] - a[2] * b[8]
);
}			
		 
inline Drv gp (const Drv& a, const Trs& b) { 
	return Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Par_Drb gp (const Drv& a, const Rtc& b) { 
	return Par_Drb (
 - a[0] * b[3] + a[1] * b[5] + a[2] * b[6],
 - a[0] * b[5] - a[1] * b[3] + a[2] * b[7],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[3],
 - a[0] * b[0] + a[0] * b[11] - a[1] * b[1] + a[1] * b[12] - a[2] * b[2] + a[2] * b[13],
 - a[0] * b[1] + a[0] * b[12] + a[1] * b[0] - a[1] * b[11] - a[2] * b[14] + a[2] * b[15],
 - a[0] * b[2] + a[0] * b[13] + a[1] * b[14] - a[1] * b[15] + a[2] * b[0] - a[2] * b[11],
 - a[0] * b[14] + a[0] * b[15] - a[1] * b[2] + a[1] * b[13] + a[2] * b[1] - a[2] * b[12],
 - a[0] * b[3] + a[1] * b[5] + a[2] * b[6],
 - a[0] * b[5] - a[1] * b[3] + a[2] * b[7],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[3],
 - a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
 - a[0] * b[7] + a[1] * b[6] - a[2] * b[5]
);
}			
		 
inline Mtd gp (const Drv& a, const Mtt& b) { 
	return Mtd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[0] * b[10] - a[1] * b[1] + a[1] * b[11] - a[2] * b[2] + a[2] * b[12],
a[0] * b[1] - a[0] * b[11] + a[1] * b[0] - a[1] * b[10] - a[2] * b[3] + a[2] * b[13],
a[0] * b[2] - a[0] * b[12] + a[1] * b[3] - a[1] * b[13] + a[2] * b[0] - a[2] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[0] * b[13] - a[1] * b[2] + a[1] * b[12] + a[2] * b[1] - a[2] * b[11]
);
}			
		 
inline Mtd gp (const Drv& a, const Rtt& b) { 
	return Mtd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Drv_Pln gp (const Drv& a, const Rtd& b) { 
	return Drv_Pln (
a[0] * b[0] - a[0] * b[4] - a[1] * b[1] + a[1] * b[5] - a[2] * b[2] + a[2] * b[6],
a[0] * b[1] - a[0] * b[5] + a[1] * b[0] - a[1] * b[4] - a[2] * b[3] + a[2] * b[7],
a[0] * b[2] - a[0] * b[6] + a[1] * b[3] - a[1] * b[7] + a[2] * b[0] - a[2] * b[4],
a[0] * b[3] - a[0] * b[7] - a[1] * b[2] + a[1] * b[6] + a[2] * b[1] - a[2] * b[5]
);
}			
		 
inline Drb_Afp gp (const Drv& a, const Tvd& b) { 
	return Drb_Afp (
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[0] - a[0] * b[4],
a[1] * b[0] - a[1] * b[4],
a[2] * b[0] - a[2] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2]
);
}			
		 
inline Drv gp (const Drv& a, const Tsd& b) { 
	return Drv (
a[0] * b[0] - a[0] * b[4],
a[1] * b[0] - a[1] * b[4],
a[2] * b[0] - a[2] * b[4]
);
}			
		 
inline Mtd gp (const Drv& a, const Trt& b) { 
	return Mtd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[0] * b[10] - a[1] * b[1] + a[1] * b[11] - a[2] * b[2] + a[2] * b[12],
a[0] * b[1] - a[0] * b[11] + a[1] * b[0] - a[1] * b[10] - a[2] * b[3] + a[2] * b[13],
a[0] * b[2] - a[0] * b[12] + a[1] * b[3] - a[1] * b[13] + a[2] * b[0] - a[2] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[0] * b[13] - a[1] * b[2] + a[1] * b[12] + a[2] * b[1] - a[2] * b[11]
);
}			
		 
inline Mtd gp (const Drv& a, const Rvd& b) { 
	return Mtd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[0] * b[7] - a[1] * b[1] + a[1] * b[8] - a[2] * b[2] + a[2] * b[9],
a[0] * b[1] - a[0] * b[8] + a[1] * b[0] - a[1] * b[7] - a[2] * b[3] + a[2] * b[10],
a[0] * b[2] - a[0] * b[9] + a[1] * b[3] - a[1] * b[10] + a[2] * b[0] - a[2] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[0] * b[10] - a[1] * b[2] + a[1] * b[9] + a[2] * b[1] - a[2] * b[8]
);
}			
		 
inline Mtd gp (const Drv& a, const Tst& b) { 
	return Mtd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[0] * b[10] - a[1] * b[1] + a[1] * b[11] - a[2] * b[2] + a[2] * b[12],
a[0] * b[1] - a[0] * b[11] + a[1] * b[0] - a[1] * b[10] - a[2] * b[3] + a[2] * b[13],
a[0] * b[2] - a[0] * b[12] + a[1] * b[3] - a[1] * b[13] + a[2] * b[0] - a[2] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[0] * b[13] - a[1] * b[2] + a[1] * b[12] + a[2] * b[1] - a[2] * b[11]
);
}			
		 
inline Mtd gp (const Drv& a, const Tvt& b) { 
	return Mtd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[0] * b[10] - a[1] * b[1] + a[1] * b[11] - a[2] * b[2] + a[2] * b[12],
a[0] * b[1] - a[0] * b[11] + a[1] * b[0] - a[1] * b[10] - a[2] * b[3] + a[2] * b[13],
a[0] * b[2] - a[0] * b[12] + a[1] * b[3] - a[1] * b[13] + a[2] * b[0] - a[2] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[0] * b[13] - a[1] * b[2] + a[1] * b[12] + a[2] * b[1] - a[2] * b[11]
);
}			
		 
inline Drv op (const Drv& a, const Sca& b) { 
	return Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Mnk_Vec op (const Drv& a, const Ori& b) { 
	return Mnk_Vec (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Sca op (const Drv& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drv& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Mnk_Vec op (const Drv& a, const Hyp& b) { 
	return Mnk_Vec (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Sca op (const Drv& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Lin op (const Drv& a, const Pnt& b) { 
	return Lin (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3]
);
}			
		 
inline Pln op (const Drv& a, const Par& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Drv& a, const Cir& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Sca op (const Drv& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Pln op (const Drv& a, const Sta& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Drv& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drv& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drv& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Mnk_Biv op (const Drv& a, const Tnv& b) { 
	return Mnk_Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Pss op (const Drv& a, const Tnb& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Sca op (const Drv& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drv& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drv& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drv& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Drt op (const Drv& a, const Dll& b) { 
	return Drt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drb op (const Drv& a, const Dlp& b) { 
	return Drb (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Drb op (const Drv& a, const Vec& b) { 
	return Drb (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Drt op (const Drv& a, const Biv& b) { 
	return Drt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Drv& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Lin op (const Drv& a, const Aff& b) { 
	return Lin (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3]
);
}			
		 
inline Pln op (const Drv& a, const Afl& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Drv& a, const Afp& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Sca ip (const Drv& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Drb ip (const Drv& a, const Pss& b) { 
	return Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Sca ip (const Drv& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Par& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Dlp ip (const Drv& a, const Cir& b) { 
	return Dlp (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
inline Dll ip (const Drv& a, const Sph& b) { 
	return Dll (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
inline Sca ip (const Drv& a, const Sta& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Sca ip (const Drv& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Tnv& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Vec ip (const Drv& a, const Tnb& b) { 
	return Vec (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
inline Biv ip (const Drv& a, const Tnt& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Inf ip (const Drv& a, const Lin& b) { 
	return Inf (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Drv ip (const Drv& a, const Pln& b) { 
	return Drv (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
inline Sca ip (const Drv& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drv& a, const Afl& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Vec ip (const Drv& a, const Afp& b) { 
	return Vec (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		  	
inline Drv sp (const Drv& drv, const Rot& rot) {					
					
const Rot& t1 = rot;
const Drv& t2 = drv;
Drv_Pln t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Drv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Mot& mot) {					
					
const Mot& t1 = mot;
const Drv& t2 = drv;
Drv_Pln t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Drv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Dil& dil) {					
					
const Dil& t1 = dil;
const Drv& t2 = drv;
Drv t3 (
t1[0] * t2[0] + t1[1] * t2[0],
t1[0] * t2[1] + t1[1] * t2[1],
t1[0] * t2[2] + t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Drv (
t3[0] * t5[0] - t3[0] * t5[1],
t3[1] * t5[0] - t3[1] * t5[1],
t3[2] * t5[0] - t3[2] * t5[1]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Trv& trv) {					
					
const Trv& t1 = trv;
const Drv& t2 = drv;
Drb_Afp t3 (
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Drv (
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Drv& t2 = drv;
Drv_Pln t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Drv (
t3[0] * t5[0] - t3[0] * t5[7] - t3[1] * t5[1] + t3[1] * t5[8] - t3[2] * t5[2] + t3[2] * t5[9] - t3[3] * t5[3] + t3[3] * t5[10],
t3[0] * t5[1] - t3[0] * t5[8] + t3[1] * t5[0] - t3[1] * t5[7] - t3[2] * t5[3] + t3[2] * t5[10] + t3[3] * t5[2] - t3[3] * t5[9],
t3[0] * t5[2] - t3[0] * t5[9] + t3[1] * t5[3] - t3[1] * t5[10] + t3[2] * t5[0] - t3[2] * t5[7] - t3[3] * t5[1] + t3[3] * t5[8]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Trs& trs) {					
					
const Trs& t1 = trs;
const Drv& t2 = drv;
Drv t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Drv (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Drv& t2 = drv;
Par_Drb t3 (
t1[3] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[3] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[3] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[11] * t2[1] - t1[12] * t2[0] + t1[14] * t2[2] + t1[15] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] + t1[11] * t2[2] - t1[13] * t2[0] - t1[14] * t2[1] - t1[15] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[12] * t2[2] - t1[13] * t2[1] + t1[14] * t2[0] + t1[15] * t2[0],
 - t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[3] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[3] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Drv (
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[0] + t3[3] * t5[11] - t3[4] * t5[1] + t3[4] * t5[12] - t3[5] * t5[2] + t3[5] * t5[13] + t3[6] * t5[14] - t3[6] * t5[15] + t3[7] * t5[4] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10] - t3[11] * t5[10],
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] - t3[3] * t5[1] + t3[3] * t5[12] + t3[4] * t5[0] - t3[4] * t5[11] - t3[5] * t5[14] + t3[5] * t5[15] - t3[6] * t5[2] + t3[6] * t5[13] + t3[7] * t5[8] + t3[8] * t5[4] - t3[9] * t5[10] + t3[10] * t5[9] + t3[11] * t5[9],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[3] * t5[2] + t3[3] * t5[13] + t3[4] * t5[14] - t3[4] * t5[15] + t3[5] * t5[0] - t3[5] * t5[11] + t3[6] * t5[1] - t3[6] * t5[12] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[4] - t3[10] * t5[8] - t3[11] * t5[8]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Drv& t2 = drv;
Mtd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[14] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[14] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[14] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Drv (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[15] + t3[4] * t5[0] - t3[4] * t5[10] - t3[5] * t5[1] + t3[5] * t5[11] - t3[6] * t5[2] + t3[6] * t5[12] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9] - t3[10] * t5[15] - t3[11] * t5[3] + t3[11] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[3] * t5[9] + t3[4] * t5[1] - t3[4] * t5[11] + t3[5] * t5[0] - t3[5] * t5[10] - t3[6] * t5[3] + t3[6] * t5[13] + t3[7] * t5[8] - t3[8] * t5[7] + t3[9] * t5[15] + t3[10] * t5[9] + t3[11] * t5[2] - t3[11] * t5[12],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] - t3[3] * t5[8] + t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[0] - t3[6] * t5[10] + t3[7] * t5[9] - t3[8] * t5[15] - t3[9] * t5[7] - t3[10] * t5[8] - t3[11] * t5[1] + t3[11] * t5[11]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Drv& t2 = drv;
Mtd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Drv (
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[11] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[11] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[11] * t5[1]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Drv& t2 = drv;
Drv_Pln t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Drv (
t3[0] * t5[0] - t3[0] * t5[4] - t3[1] * t5[1] + t3[1] * t5[5] - t3[2] * t5[2] + t3[2] * t5[6] - t3[3] * t5[3] + t3[3] * t5[7],
t3[0] * t5[1] - t3[0] * t5[5] + t3[1] * t5[0] - t3[1] * t5[4] - t3[2] * t5[3] + t3[2] * t5[7] + t3[3] * t5[2] - t3[3] * t5[6],
t3[0] * t5[2] - t3[0] * t5[6] + t3[1] * t5[3] - t3[1] * t5[7] + t3[2] * t5[0] - t3[2] * t5[4] - t3[3] * t5[1] + t3[3] * t5[5]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Drv& t2 = drv;
Drb_Afp t3 (
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
t1[0] * t2[0] + t1[4] * t2[0],
t1[0] * t2[1] + t1[4] * t2[1],
t1[0] * t2[2] + t1[4] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Drv (
t3[4] * t5[0] - t3[4] * t5[4],
t3[5] * t5[0] - t3[5] * t5[4],
t3[6] * t5[0] - t3[6] * t5[4]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Drv& t2 = drv;
Drv t3 (
t1[0] * t2[0] + t1[4] * t2[0],
t1[0] * t2[1] + t1[4] * t2[1],
t1[0] * t2[2] + t1[4] * t2[2]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Drv (
t3[0] * t5[0] - t3[0] * t5[4],
t3[1] * t5[0] - t3[1] * t5[4],
t3[2] * t5[0] - t3[2] * t5[4]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Trt& trt) {					
					
const Trt& t1 = trt;
const Drv& t2 = drv;
Mtd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0],
t1[4] * t2[2] - t1[6] * t2[0],
t1[5] * t2[2] - t1[6] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Drv (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[5] * t5[1] + t3[5] * t5[11] - t3[6] * t5[2] + t3[6] * t5[12] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9] - t3[11] * t5[3] + t3[11] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[4] * t5[1] - t3[4] * t5[11] + t3[5] * t5[0] - t3[5] * t5[10] - t3[6] * t5[3] + t3[6] * t5[13] + t3[7] * t5[8] - t3[8] * t5[7] + t3[10] * t5[9] + t3[11] * t5[2] - t3[11] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[0] - t3[6] * t5[10] + t3[7] * t5[9] - t3[9] * t5[7] - t3[10] * t5[8] - t3[11] * t5[1] + t3[11] * t5[11]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Drv& t2 = drv;
Mtd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[11] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[11] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[11] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[11] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Drv (
t3[4] * t5[0] - t3[4] * t5[7] - t3[5] * t5[1] + t3[5] * t5[8] - t3[6] * t5[2] + t3[6] * t5[9] - t3[11] * t5[3] + t3[11] * t5[10],
t3[4] * t5[1] - t3[4] * t5[8] + t3[5] * t5[0] - t3[5] * t5[7] - t3[6] * t5[3] + t3[6] * t5[10] + t3[11] * t5[2] - t3[11] * t5[9],
t3[4] * t5[2] - t3[4] * t5[9] + t3[5] * t5[3] - t3[5] * t5[10] + t3[6] * t5[0] - t3[6] * t5[7] - t3[11] * t5[1] + t3[11] * t5[8]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Tst& tst) {					
					
const Tst& t1 = tst;
const Drv& t2 = drv;
Mtd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[14] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[14] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[14] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Drv (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[5] * t5[1] + t3[5] * t5[11] - t3[6] * t5[2] + t3[6] * t5[12] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9] - t3[11] * t5[3] + t3[11] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[4] * t5[1] - t3[4] * t5[11] + t3[5] * t5[0] - t3[5] * t5[10] - t3[6] * t5[3] + t3[6] * t5[13] + t3[7] * t5[8] - t3[8] * t5[7] + t3[10] * t5[9] + t3[11] * t5[2] - t3[11] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[0] - t3[6] * t5[10] + t3[7] * t5[9] - t3[9] * t5[7] - t3[10] * t5[8] - t3[11] * t5[1] + t3[11] * t5[11]
);

}
		
	
	  	
inline Drv sp (const Drv& drv, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Drv& t2 = drv;
Mtd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0],
t1[4] * t2[2] - t1[6] * t2[0],
t1[5] * t2[2] - t1[6] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Drv (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[14] + t3[4] * t5[0] - t3[4] * t5[10] - t3[5] * t5[1] + t3[5] * t5[11] - t3[6] * t5[2] + t3[6] * t5[12] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9] - t3[10] * t5[14] - t3[11] * t5[3] + t3[11] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[9] + t3[4] * t5[1] - t3[4] * t5[11] + t3[5] * t5[0] - t3[5] * t5[10] - t3[6] * t5[3] + t3[6] * t5[13] + t3[7] * t5[8] - t3[8] * t5[7] + t3[9] * t5[14] + t3[10] * t5[9] + t3[11] * t5[2] - t3[11] * t5[12],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] - t3[3] * t5[8] + t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[0] - t3[6] * t5[10] + t3[7] * t5[9] - t3[8] * t5[14] - t3[9] * t5[7] - t3[10] * t5[8] - t3[11] * t5[1] + t3[11] * t5[11]
);

}
		
	
		
	} //vsr::
	#endif
	