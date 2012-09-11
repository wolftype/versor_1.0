		#ifndef MNV_H_INCLUDED
		#define MNV_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Mnv gp (const Mnv& a, const Sca& b) { 
	return Mnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Tnv gp (const Mnv& a, const Ori& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Drv gp (const Mnv& a, const Inf& b) { 
	return Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Vec gp (const Mnv& a, const Mnk& b) { 
	return Vec (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Hyp_Vec gp (const Mnv& a, const Hyp& b) { 
	return Hyp_Vec (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Biv gp (const Mnv& a, const Pss& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Pnt_Mnv gp (const Mnv& a, const Pnt& b) { 
	return Pnt_Mnv (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Par_Mnv gp (const Mnv& a, const Par& b) { 
	return Par_Mnv (
a[0] * b[9],
a[1] * b[9],
a[2] * b[9],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
 - a[0] * b[4] + a[1] * b[3],
 - a[0] * b[5] + a[2] * b[3],
 - a[1] * b[5] + a[2] * b[4],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Par_Biv gp (const Mnv& a, const Cir& b) { 
	return Par_Biv (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[3] - a[2] * b[5],
a[0] * b[4] + a[1] * b[5],
a[2] * b[9],
 - a[1] * b[9],
a[0] * b[9],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Pnt_Biv gp (const Mnv& a, const Sph& b) { 
	return Pnt_Biv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
a[2] * b[4],
 - a[1] * b[4],
a[0] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sta_Mnv gp (const Mnv& a, const Sta& b) { 
	return Sta_Mnv (
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
 - a[0] * b[4] + a[1] * b[3],
 - a[0] * b[5] + a[2] * b[3],
 - a[1] * b[5] + a[2] * b[4],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drv_Lin gp (const Mnv& a, const Drv& b) { 
	return Drv_Lin (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Drv_Pln gp (const Mnv& a, const Drb& b) { 
	return Drv_Pln (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drb gp (const Mnv& a, const Drt& b) { 
	return Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Tnv_Vec gp (const Mnv& a, const Tnv& b) { 
	return Tnv_Vec (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Tnv_Biv gp (const Mnv& a, const Tnb& b) { 
	return Tnv_Biv (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Tnb gp (const Mnv& a, const Tnt& b) { 
	return Tnb (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Mot gp (const Mnv& a, const Lin& b) { 
	return Mot (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pln_Mnv gp (const Mnv& a, const Pln& b) { 
	return Pln_Mnv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Lin_Flp gp (const Mnv& a, const Flp& b) { 
	return Lin_Flp (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Lin_Dfp gp (const Mnv& a, const Dfp& b) { 
	return Lin_Dfp (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Lin_Dll gp (const Mnv& a, const Dll& b) { 
	return Lin_Dll (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pln_Biv gp (const Mnv& a, const Dlp& b) { 
	return Pln_Biv (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Vec_Mnv gp (const Mnv& a, const Vec& b) { 
	return Vec_Mnv (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Biv_Mnv gp (const Mnv& a, const Biv& b) { 
	return Biv_Mnv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mnk_Biv gp (const Mnv& a, const Tri& b) { 
	return Mnk_Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Biv_Daf gp (const Mnv& a, const Aff& b) { 
	return Biv_Daf (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Biv_Dal gp (const Mnv& a, const Afl& b) { 
	return Biv_Dal (
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[4] + a[1] * b[3],
 - a[0] * b[5] + a[2] * b[3],
 - a[1] * b[5] + a[2] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Biv_Dap gp (const Mnv& a, const Afp& b) { 
	return Biv_Dap (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Biv_Afp gp (const Mnv& a, const Dap& b) { 
	return Biv_Afp (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Biv_Aff gp (const Mnv& a, const Daf& b) { 
	return Biv_Aff (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Rtt gp (const Mnv& a, const Dal& b) { 
	return Rtt (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Rot gp (const Mnv& a, const Mnv& b) { 
	return Rot (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Biv_Mnv gp (const Mnv& a, const Rot& b) { 
	return Biv_Mnv (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Lin_Dll gp (const Mnv& a, const Mot& b) { 
	return Lin_Dll (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Ori_Drv gp (const Mnv& a, const Dil& b) { 
	return Ori_Drv (
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Vec_Dap gp (const Mnv& a, const Trv& b) { 
	return Vec_Dap (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
 - a[0] * b[2] + a[1] * b[1],
 - a[0] * b[3] + a[2] * b[1],
 - a[1] * b[3] + a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Par_Drb gp (const Mnv& a, const Mtd& b) { 
	return Par_Drb (
a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Pln_Dfp gp (const Mnv& a, const Trs& b) { 
	return Pln_Dfp (
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Mtt gp (const Mnv& a, const Rtc& b) { 
	return Mtt (
a[0] * b[11] + a[1] * b[12] + a[2] * b[13],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12],
 - a[0] * b[3] + a[1] * b[5] + a[2] * b[6],
 - a[0] * b[5] - a[1] * b[3] + a[2] * b[7],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[3],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1],
 - a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8]
);
}			
		 
inline Rtc gp (const Mnv& a, const Mtt& b) { 
	return Rtc (
a[0] * b[10] - a[1] * b[11] - a[2] * b[12],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10],
 - a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[14],
 - a[0] * b[6] + a[1] * b[14] + a[2] * b[4],
 - a[0] * b[14] - a[1] * b[6] + a[2] * b[5],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Biv_Dal gp (const Mnv& a, const Rtt& b) { 
	return Biv_Dal (
 - a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[7],
 - a[0] * b[6] + a[1] * b[7] + a[2] * b[4],
 - a[0] * b[7] - a[1] * b[6] + a[2] * b[5],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Drv_Tnb gp (const Mnv& a, const Rtd& b) { 
	return Drv_Tnb (
a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Ori_Par gp (const Mnv& a, const Tvd& b) { 
	return Ori_Par (
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
 - a[0] * b[2] + a[1] * b[1],
 - a[0] * b[3] + a[2] * b[1],
 - a[1] * b[3] + a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Inf_Par gp (const Mnv& a, const Tsd& b) { 
	return Inf_Par (
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Rtc gp (const Mnv& a, const Trt& b) { 
	return Rtc (
a[0] * b[10] - a[1] * b[11] - a[2] * b[12],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10],
 - a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
 - a[0] * b[5] + a[1] * b[4],
 - a[0] * b[6] + a[2] * b[4],
 - a[1] * b[6] + a[2] * b[5],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Par_Tnb gp (const Mnv& a, const Rvd& b) { 
	return Par_Tnb (
a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7],
 - a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[11],
 - a[0] * b[6] + a[1] * b[11] + a[2] * b[4],
 - a[0] * b[11] - a[1] * b[6] + a[2] * b[5],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Rtc gp (const Mnv& a, const Tst& b) { 
	return Rtc (
a[0] * b[10] - a[1] * b[11] - a[2] * b[12],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10],
 - a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[14],
 - a[0] * b[6] + a[1] * b[14] + a[2] * b[4],
 - a[0] * b[14] - a[1] * b[6] + a[2] * b[5],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Rtc gp (const Mnv& a, const Tvt& b) { 
	return Rtc (
a[0] * b[10] - a[1] * b[11] - a[2] * b[12],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10],
 - a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
 - a[0] * b[5] + a[1] * b[4],
 - a[0] * b[6] + a[2] * b[4],
 - a[1] * b[6] + a[2] * b[5],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Par_Mnv gp (const Mnv& a, const Bst& b) { 
	return Par_Mnv (
a[0] * b[10],
a[1] * b[10],
a[2] * b[10],
 - a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
 - a[0] * b[5] + a[1] * b[4],
 - a[0] * b[6] + a[2] * b[4],
 - a[1] * b[6] + a[2] * b[5],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Mnv op (const Mnv& a, const Sca& b) { 
	return Mnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Sca op (const Mnv& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Mnk_Biv op (const Mnv& a, const Pnt& b) { 
	return Mnk_Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Pss op (const Mnv& a, const Par& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Mnv& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Mnv& a, const Sta& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Mnv& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Dfp& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Mnv& a, const Dll& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mnk_Biv op (const Mnv& a, const Dlp& b) { 
	return Mnk_Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Mnk_Biv op (const Mnv& a, const Vec& b) { 
	return Mnk_Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Pss op (const Mnv& a, const Biv& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Mnv& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Mnk_Biv op (const Mnv& a, const Aff& b) { 
	return Mnk_Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
inline Pss op (const Mnv& a, const Afl& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Mnv& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Dap& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Daf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Dal& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Mnv& a, const Mnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Biv ip (const Mnv& a, const Pss& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Sca ip (const Mnv& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Cir& b) { 
	return Sca (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
inline Vec ip (const Mnv& a, const Sph& b) { 
	return Vec (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Sca ip (const Mnv& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Lin& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Vec ip (const Mnv& a, const Pln& b) { 
	return Vec (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Sca ip (const Mnv& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Dfp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Mnv& a, const Dap& b) { 
	return Sca (
);
}			
		 
inline Vec ip (const Mnv& a, const Daf& b) { 
	return Vec (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Sca ip (const Mnv& a, const Dal& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Sca ip (const Mnv& a, const Mnv& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		  	
template<>
inline Mnv sp (const Mnv& mnv, const Rot& rot) {					
					
const Rot& t1 = rot;
const Mnv& t2 = mnv;
Biv_Mnv t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Mnv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Mot& mot) {					
					
const Mot& t1 = mot;
const Mnv& t2 = mnv;
Lin_Dll t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Mnv (
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Dil& dil) {					
					
const Dil& t1 = dil;
const Mnv& t2 = mnv;
Ori_Drv t3 (
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Mnv (
t3[0] * t5[1] + t3[3] * t5[0],
t3[1] * t5[1] + t3[4] * t5[0],
t3[2] * t5[1] + t3[5] * t5[0]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Trv& trv) {					
					
const Trv& t1 = trv;
const Mnv& t2 = mnv;
Vec_Dap t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Mnv (
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Mnv& t2 = mnv;
Par_Drb t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[11] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[11] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[11] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Mnv (
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[10] - t3[11] * t5[3],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[9] + t3[11] * t5[2],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[8] - t3[11] * t5[1]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Trs& trs) {					
					
const Trs& t1 = trs;
const Mnv& t2 = mnv;
Pln_Dfp t3 (
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Mnv (
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Mnv& t2 = mnv;
Mtt t3 (
t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[11] * t2[1] - t1[12] * t2[0] + t1[15] * t2[2],
t1[11] * t2[2] - t1[13] * t2[0] - t1[15] * t2[1],
t1[12] * t2[2] - t1[13] * t2[1] + t1[15] * t2[0],
 - t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[3] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[3] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[4] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[4] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[4] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[14] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[14] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[14] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Mnv (
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] - t3[3] * t5[15] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[3] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] + t3[11] * t5[1] + t3[12] * t5[2] - t3[13] * t5[14] - t3[14] * t5[10] + t3[15] * t5[7],
t3[0] * t5[12] - t3[1] * t5[11] + t3[2] * t5[15] + t3[3] * t5[13] + t3[4] * t5[8] + t3[5] * t5[4] - t3[6] * t5[10] - t3[7] * t5[5] - t3[8] * t5[3] + t3[9] * t5[7] + t3[10] * t5[1] - t3[11] * t5[0] + t3[12] * t5[14] + t3[13] * t5[2] + t3[14] * t5[9] - t3[15] * t5[6],
t3[0] * t5[13] - t3[1] * t5[15] - t3[2] * t5[11] - t3[3] * t5[12] + t3[4] * t5[9] + t3[5] * t5[10] + t3[6] * t5[4] - t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[2] - t3[11] * t5[14] - t3[12] * t5[0] - t3[13] * t5[1] - t3[14] * t5[8] + t3[15] * t5[5]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Mnv& t2 = mnv;
Rtc t3 (
t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
t1[7] * t2[1] - t1[8] * t2[0] + t1[15] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[15] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[15] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Mnv (
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[15] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[6] * t5[15] - t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[5] * t5[15] + t3[6] * t5[7] + t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Mnv& t2 = mnv;
Biv_Dal t3 (
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Mnv (
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Mnv& t2 = mnv;
Drv_Tnb t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Mnv (
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] + t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[7] - t3[7] * t5[3],
t3[0] * t5[5] + t3[1] * t5[4] - t3[2] * t5[7] + t3[3] * t5[1] + t3[4] * t5[0] - t3[5] * t5[3] + t3[6] * t5[6] + t3[7] * t5[2],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[4] + t3[3] * t5[2] + t3[4] * t5[3] + t3[5] * t5[0] - t3[6] * t5[5] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Mnv& t2 = mnv;
Ori_Par t3 (
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Mnv (
t3[0] * t5[4] + t3[7] * t5[0],
t3[1] * t5[4] + t3[8] * t5[0],
t3[2] * t5[4] + t3[9] * t5[0]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Mnv& t2 = mnv;
Inf_Par t3 (
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Mnv (
t3[0] * t5[4] + t3[7] * t5[0],
t3[1] * t5[4] + t3[8] * t5[0],
t3[2] * t5[4] + t3[9] * t5[0]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Trt& trt) {					
					
const Trt& t1 = trt;
const Mnv& t2 = mnv;
Rtc t3 (
t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Mnv (
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[6] * t5[7] + t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Mnv& t2 = mnv;
Par_Tnb t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[11] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Mnv (
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[10] - t3[11] * t5[3],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[9] + t3[11] * t5[2],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[8] - t3[11] * t5[1]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Tst& tst) {					
					
const Tst& t1 = tst;
const Mnv& t2 = mnv;
Rtc t3 (
t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Mnv (
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[6] * t5[7] + t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Mnv& t2 = mnv;
Rtc t3 (
t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
t1[7] * t2[1] - t1[8] * t2[0] + t1[14] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[14] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[14] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Mnv (
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[14] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[6] * t5[14] - t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[5] * t5[14] + t3[6] * t5[7] + t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Mnv sp (const Mnv& mnv, const Bst& bst) {					
					
const Bst& t1 = bst;
const Mnv& t2 = mnv;
Par_Mnv t3 (
t1[10] * t2[0],
t1[10] * t2[1],
t1[10] * t2[2],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Mnv (
t3[0] * t5[10] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[3],
t3[1] * t5[10] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[2],
t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[6] * t5[7] + t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[1]
);

}
		
	
	  	
template<>
inline Mnv re (const Mnv& mnv, const Vec& vec) {					
					
const Vec& t1 = vec;
const Mnv& t2 = mnv;
Mnv t3 = involute( t2);
Vec_Mnv t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Mnv (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1]
);

}
		
	
	  	
template<>
inline Mnv re (const Mnv& mnv, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Mnv& t2 = mnv;
Mnv t3 = involute( t2);
Pln_Biv t4 (
t1[3] * t3[0],
t1[3] * t3[1],
t1[3] * t3[2],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Mnv (
t4[3] * t6[0] + t4[4] * t6[1] + t4[5] * t6[2],
t4[3] * t6[1] - t4[4] * t6[0] + t4[6] * t6[2],
t4[3] * t6[2] - t4[5] * t6[0] - t4[6] * t6[1]
);

}
		
	
	  	
template<>
inline Mnv re (const Mnv& mnv, const Pln& pln) {					
					
const Pln& t1 = pln;
const Mnv& t2 = mnv;
Mnv t3 = involute( t2);
Pln_Mnv t4 (
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[3] * t3[2],
 - t1[3] * t3[1],
t1[3] * t3[0],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Mnv (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[6] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[6] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Mnv re (const Mnv& mnv, const Dll& dll) {					
					
const Dll& t1 = dll;
const Mnv& t2 = mnv;
Mnv t3 = involute( t2);
Lin_Dll t4 (
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
t1[3] * t3[1] - t1[4] * t3[0],
t1[3] * t3[2] - t1[5] * t3[0],
t1[4] * t3[2] - t1[5] * t3[1],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Mnv (
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[7] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[7] * t6[0]
);

}
		
	
	  	
template<>
inline Mnv re (const Mnv& mnv, const Lin& lin) {					
					
const Lin& t1 = lin;
const Mnv& t2 = mnv;
Mnv t3 = involute( t2);
Mot t4 (
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
t1[3] * t3[1] - t1[4] * t3[0],
t1[3] * t3[2] - t1[5] * t3[0],
t1[4] * t3[2] - t1[5] * t3[1],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Mnv (
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4]
);

}
		
	
	  	
template<>
inline Mnv re (const Mnv& mnv, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Mnv& t2 = mnv;
Mnv t3 = involute( t2);
Pnt_Mnv t4 (
 - t1[3] * t3[0],
 - t1[3] * t3[1],
 - t1[3] * t3[2],
t1[4] * t3[0],
t1[4] * t3[1],
t1[4] * t3[2],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Mnv (
t4[0] * t6[4] - t4[3] * t6[3] + t4[6] * t6[0] + t4[7] * t6[1] + t4[8] * t6[2],
t4[1] * t6[4] - t4[4] * t6[3] + t4[6] * t6[1] - t4[7] * t6[0] + t4[9] * t6[2],
t4[2] * t6[4] - t4[5] * t6[3] + t4[6] * t6[2] - t4[8] * t6[0] - t4[9] * t6[1]
);

}
		
	
	  	
template<>
inline Mnv re (const Mnv& mnv, const Par& par) {					
					
const Par& t1 = par;
const Mnv& t2 = mnv;
Mnv t3 = involute( t2);
Par_Mnv t4 (
t1[9] * t3[0],
t1[9] * t3[1],
t1[9] * t3[2],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
t1[6] * t3[0] + t1[7] * t3[1] + t1[8] * t3[2],
 - t1[3] * t3[1] + t1[4] * t3[0],
 - t1[3] * t3[2] + t1[5] * t3[0],
 - t1[4] * t3[2] + t1[5] * t3[1],
t1[6] * t3[1] - t1[7] * t3[0],
t1[6] * t3[2] - t1[8] * t3[0],
t1[7] * t3[2] - t1[8] * t3[1],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Mnv (
t4[0] * t6[9] - t4[3] * t6[6] + t4[4] * t6[3] - t4[5] * t6[7] - t4[6] * t6[8] + t4[8] * t6[4] + t4[9] * t6[5] - t4[12] * t6[0] - t4[13] * t6[1] - t4[14] * t6[2],
t4[1] * t6[9] - t4[3] * t6[7] + t4[4] * t6[4] + t4[5] * t6[6] - t4[7] * t6[8] - t4[8] * t6[3] + t4[10] * t6[5] + t4[11] * t6[0] - t4[13] * t6[2] + t4[14] * t6[1],
t4[2] * t6[9] - t4[3] * t6[8] + t4[4] * t6[5] + t4[6] * t6[6] + t4[7] * t6[7] - t4[9] * t6[3] - t4[10] * t6[4] + t4[11] * t6[1] + t4[12] * t6[2] - t4[14] * t6[0]
);

}
		
	
	  	
template<>
inline Mnv re (const Mnv& mnv, const Cir& cir) {					
					
const Cir& t1 = cir;
const Mnv& t2 = mnv;
Mnv t3 = involute( t2);
Par_Biv t4 (
t1[6] * t3[0] + t1[7] * t3[1] + t1[8] * t3[2],
t1[6] * t3[1] - t1[7] * t3[0],
t1[6] * t3[2] - t1[8] * t3[0],
t1[7] * t3[2] - t1[8] * t3[1],
 - t1[0] * t3[1] - t1[1] * t3[2],
t1[0] * t3[0] - t1[2] * t3[2],
t1[1] * t3[0] + t1[2] * t3[1],
t1[3] * t3[1] + t1[4] * t3[2],
 - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[4] * t3[0] - t1[5] * t3[1],
t1[9] * t3[2],
 - t1[9] * t3[1],
t1[9] * t3[0],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Mnv (
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[5] * t6[3] - t4[6] * t6[4] + t4[8] * t6[0] + t4[9] * t6[1] - t4[12] * t6[9] - t4[13] * t6[5] + t4[14] * t6[2],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[8] + t4[4] * t6[3] - t4[6] * t6[5] - t4[7] * t6[0] + t4[9] * t6[2] + t4[11] * t6[9] + t4[13] * t6[4] - t4[14] * t6[1],
t4[0] * t6[8] - t4[2] * t6[6] - t4[3] * t6[7] + t4[4] * t6[4] + t4[5] * t6[5] - t4[7] * t6[1] - t4[8] * t6[2] - t4[10] * t6[9] - t4[13] * t6[3] + t4[14] * t6[0]
);

}
		
	
	  	
template<>
inline Mnv re (const Mnv& mnv, const Sph& sph) {					
					
const Sph& t1 = sph;
const Mnv& t2 = mnv;
Mnv t3 = involute( t2);
Pnt_Biv t4 (
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[3] * t3[2],
t1[3] * t3[1],
 - t1[3] * t3[0],
t1[4] * t3[2],
 - t1[4] * t3[1],
t1[4] * t3[0],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Mnv (
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[5] * t6[4] - t4[8] * t6[3] - t4[9] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[4] * t6[4] + t4[7] * t6[3] + t4[9] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[3] * t6[4] - t4[6] * t6[3] - t4[9] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	