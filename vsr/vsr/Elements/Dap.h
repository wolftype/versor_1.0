		#ifndef DAP_H_INCLUDED
		#define DAP_H_INCLUDED
		
		#include "vsr_casts.h"
		
		namespace vsr{
	 
inline Dap gp (const Dap& a, const Sca& b) { 
	return Dap (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Ori gp (const Dap& a, const Ori& b) { 
	return Ori (
 - a[3] * b[0]
);
}			
		 
inline Inf_Dap gp (const Dap& a, const Inf& b) { 
	return Inf_Dap (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Trv gp (const Dap& a, const Mnk& b) { 
	return Trv (
a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Hyp_Flp gp (const Dap& a, const Hyp& b) { 
	return Hyp_Flp (
 - a[0] * b[1],
 - a[1] * b[1],
 - a[2] * b[1],
 - a[3] * b[0],
a[3] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Afp gp (const Dap& a, const Pss& b) { 
	return Afp (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Pnt_Dap gp (const Dap& a, const Pnt& b) { 
	return Pnt_Dap (
 - a[0] * b[4],
 - a[1] * b[4],
 - a[2] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[4] + a[3] * b[0],
a[1] * b[4] + a[3] * b[1],
a[2] * b[4] + a[3] * b[2]
);
}			
		 
inline Tst gp (const Dap& a, const Par& b) { 
	return Tst (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
a[0] * b[9] - a[1] * b[0] - a[2] * b[1] - a[3] * b[3],
a[0] * b[0] + a[1] * b[9] - a[2] * b[2] - a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[9] - a[3] * b[5],
a[3] * b[6],
a[3] * b[7],
a[3] * b[8],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[7] + a[1] * b[6] + a[3] * b[0],
 - a[0] * b[8] + a[2] * b[6] + a[3] * b[1],
 - a[1] * b[8] + a[2] * b[7] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Par_Afp gp (const Dap& a, const Cir& b) { 
	return Par_Afp (
a[1] * b[3] + a[2] * b[4] + a[3] * b[6],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[7],
 - a[0] * b[4] - a[1] * b[5] + a[3] * b[8],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[7] + a[1] * b[6] - a[2] * b[9] - a[3] * b[0],
 - a[0] * b[8] + a[1] * b[9] + a[2] * b[6] - a[3] * b[1],
 - a[0] * b[9] - a[1] * b[8] + a[2] * b[7] - a[3] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[3] - a[2] * b[5],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[9]
);
}			
		 
inline Pnt_Afp gp (const Dap& a, const Sph& b) { 
	return Pnt_Afp (
a[2] * b[4] + a[3] * b[0],
 - a[1] * b[4] + a[3] * b[1],
a[0] * b[4] + a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
a[3] * b[4]
);
}			
		 
inline Tst gp (const Dap& a, const Sta& b) { 
	return Tst (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[3],
a[0] * b[0] - a[2] * b[2] - a[3] * b[4],
a[0] * b[1] + a[1] * b[2] - a[3] * b[5],
a[3] * b[6],
a[3] * b[7],
a[3] * b[8],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[7] + a[1] * b[6] + a[3] * b[0],
 - a[0] * b[8] + a[2] * b[6] + a[3] * b[1],
 - a[1] * b[8] + a[2] * b[7] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drv_Dap gp (const Dap& a, const Drv& b) { 
	return Drv_Dap (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Drv_Afp gp (const Dap& a, const Drb& b) { 
	return Drv_Afp (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Inf_Afp gp (const Dap& a, const Drt& b) { 
	return Inf_Afp (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Tnv gp (const Dap& a, const Tnv& b) { 
	return Tnv (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
inline Tnb gp (const Dap& a, const Tnb& b) { 
	return Tnb (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
inline Tnt gp (const Dap& a, const Tnt& b) { 
	return Tnt (
 - a[3] * b[0]
);
}			
		 
inline Par_Afp gp (const Dap& a, const Lin& b) { 
	return Par_Afp (
a[1] * b[0] + a[2] * b[1] + a[3] * b[3],
 - a[0] * b[0] + a[2] * b[2] + a[3] * b[4],
 - a[0] * b[1] - a[1] * b[2] + a[3] * b[5],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[4] + a[1] * b[3],
 - a[0] * b[5] + a[2] * b[3],
 - a[1] * b[5] + a[2] * b[4],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pnt_Afp gp (const Dap& a, const Pln& b) { 
	return Pnt_Afp (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[3] * b[3]
);
}			
		 
inline Trt gp (const Dap& a, const Flp& b) { 
	return Trt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Flp_Afp gp (const Dap& a, const Dfp& b) { 
	return Flp_Afp (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Tst gp (const Dap& a, const Dll& b) { 
	return Tst (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[4] + a[1] * b[3] + a[3] * b[0],
 - a[0] * b[5] + a[2] * b[3] + a[3] * b[1],
 - a[1] * b[5] + a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pnt_Dap gp (const Dap& a, const Dlp& b) { 
	return Pnt_Dap (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[3] * b[3],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[3] + a[3] * b[0],
a[1] * b[3] + a[3] * b[1],
a[2] * b[3] + a[3] * b[2]
);
}			
		 
inline Vec_Dap gp (const Dap& a, const Vec& b) { 
	return Vec_Dap (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
inline Biv_Dap gp (const Dap& a, const Biv& b) { 
	return Biv_Dap (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mnk_Afp gp (const Dap& a, const Tri& b) { 
	return Mnk_Afp (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Vec_Dap gp (const Dap& a, const Aff& b) { 
	return Vec_Dap (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
inline Biv_Dap gp (const Dap& a, const Afl& b) { 
	return Biv_Dap (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[3],
a[0] * b[0] - a[2] * b[2] - a[3] * b[4],
a[0] * b[1] + a[1] * b[2] - a[3] * b[5],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mnk_Afp gp (const Dap& a, const Afp& b) { 
	return Mnk_Afp (
 - a[2] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
 - a[0] * b[3] - a[3] * b[2],
a[3] * b[3]
);
}			
		 
inline Trv gp (const Dap& a, const Dap& b) { 
	return Trv (
a[3] * b[3],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
inline Vec_Afp gp (const Dap& a, const Daf& b) { 
	return Vec_Afp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
inline Biv_Afp gp (const Dap& a, const Dal& b) { 
	return Biv_Afp (
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[4] + a[1] * b[3] - a[3] * b[0],
 - a[0] * b[5] + a[2] * b[3] - a[3] * b[1],
 - a[1] * b[5] + a[2] * b[4] - a[3] * b[2]
);
}			
		 
inline Biv_Afp gp (const Dap& a, const Mnv& b) { 
	return Biv_Afp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Vec_Dal gp (const Dap& a, const Rot& b) { 
	return Vec_Dal (
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
		 
inline Mtt gp (const Dap& a, const Mot& b) { 
	return Mtt (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[3] * b[4],
a[3] * b[5],
a[3] * b[6],
 - a[0] * b[4] - a[1] * b[5] - a[2] * b[6] + a[3] * b[0],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[7] + a[3] * b[1],
 - a[0] * b[6] + a[1] * b[7] + a[2] * b[4] + a[3] * b[2],
 - a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[3],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[3] * b[7]
);
}			
		 
inline Tvd gp (const Dap& a, const Dil& b) { 
	return Tvd (
a[3] * b[1],
a[0] * b[0] + a[0] * b[1],
a[1] * b[0] + a[1] * b[1],
a[2] * b[0] + a[2] * b[1],
a[3] * b[0]
);
}			
		 
inline Dap gp (const Dap& a, const Trv& b) { 
	return Dap (
a[0] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[2] * b[0] - a[3] * b[3],
a[3] * b[0]
);
}			
		 
inline Mtt gp (const Dap& a, const Mtd& b) { 
	return Mtt (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[8],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] + a[3] * b[9],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[10],
a[0] * b[0] + a[0] * b[7] - a[1] * b[1] - a[1] * b[8] - a[2] * b[2] - a[2] * b[9],
a[0] * b[1] + a[0] * b[8] + a[1] * b[0] + a[1] * b[7] - a[2] * b[3] - a[2] * b[10],
a[0] * b[2] + a[0] * b[9] + a[1] * b[3] + a[1] * b[10] + a[2] * b[0] + a[2] * b[7],
a[3] * b[4],
a[3] * b[5],
a[3] * b[6],
 - a[0] * b[4] - a[1] * b[5] - a[2] * b[6] + a[3] * b[0],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[11] + a[3] * b[1],
 - a[0] * b[6] + a[1] * b[11] + a[2] * b[4] + a[3] * b[2],
 - a[0] * b[11] - a[1] * b[6] + a[2] * b[5] + a[3] * b[3],
a[0] * b[3] + a[0] * b[10] - a[1] * b[2] - a[1] * b[9] + a[2] * b[1] + a[2] * b[8],
a[3] * b[11]
);
}			
		 
inline Trt gp (const Dap& a, const Trs& b) { 
	return Trt (
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[0],
 - a[0] * b[2] + a[1] * b[1],
 - a[0] * b[3] + a[2] * b[1],
 - a[1] * b[3] + a[2] * b[2]
);
}			
		 
inline Rtc gp (const Dap& a, const Rtc& b) { 
	return Rtc (
 - a[0] * b[4] + a[1] * b[8] + a[2] * b[9] + a[3] * b[11],
 - a[0] * b[8] - a[1] * b[4] + a[2] * b[10] + a[3] * b[12],
 - a[0] * b[9] - a[1] * b[10] - a[2] * b[4] + a[3] * b[13],
 - a[0] * b[0] - a[0] * b[11] - a[1] * b[1] - a[1] * b[12] - a[2] * b[2] - a[2] * b[13] - a[3] * b[3],
a[3] * b[4],
 - a[0] * b[1] - a[0] * b[12] + a[1] * b[0] + a[1] * b[11] - a[2] * b[14] - a[2] * b[15] - a[3] * b[5],
 - a[0] * b[2] - a[0] * b[13] + a[1] * b[14] + a[1] * b[15] + a[2] * b[0] + a[2] * b[11] - a[3] * b[6],
 - a[0] * b[14] - a[0] * b[15] - a[1] * b[2] - a[1] * b[13] + a[2] * b[1] + a[2] * b[12] - a[3] * b[7],
a[3] * b[8],
a[3] * b[9],
a[3] * b[10],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9] + a[3] * b[0],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10] + a[3] * b[1],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4] + a[3] * b[2],
 - a[0] * b[10] + a[1] * b[9] - a[2] * b[8] + a[3] * b[15],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[14]
);
}			
		 
inline Mtt gp (const Dap& a, const Mtt& b) { 
	return Mtt (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[10],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15] + a[3] * b[11],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7] + a[3] * b[12],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8] + a[3] * b[13],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[1] * b[11] - a[2] * b[2] - a[2] * b[12] - a[3] * b[4],
a[0] * b[1] + a[0] * b[11] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3] - a[2] * b[13] - a[3] * b[5],
a[0] * b[2] + a[0] * b[12] + a[1] * b[3] + a[1] * b[13] + a[2] * b[0] + a[2] * b[10] - a[3] * b[6],
a[3] * b[7],
a[3] * b[8],
a[3] * b[9],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9] + a[3] * b[0],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[15] + a[3] * b[1],
 - a[0] * b[9] + a[1] * b[15] + a[2] * b[7] + a[3] * b[2],
 - a[0] * b[15] - a[1] * b[9] + a[2] * b[8] + a[3] * b[3],
a[0] * b[3] + a[0] * b[13] - a[1] * b[2] - a[1] * b[12] + a[2] * b[1] + a[2] * b[11] - a[3] * b[14],
a[3] * b[15]
);
}			
		 
inline Vec_Dal gp (const Dap& a, const Rtt& b) { 
	return Vec_Dal (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] - a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[6],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] - a[3] * b[7]
);
}			
		 
inline Rvd gp (const Dap& a, const Rtd& b) { 
	return Rvd (
a[3] * b[4],
a[3] * b[5],
a[3] * b[6],
a[3] * b[7],
a[0] * b[0] + a[0] * b[4] - a[1] * b[1] - a[1] * b[5] - a[2] * b[2] - a[2] * b[6],
a[0] * b[1] + a[0] * b[5] + a[1] * b[0] + a[1] * b[4] - a[2] * b[3] - a[2] * b[7],
a[0] * b[2] + a[0] * b[6] + a[1] * b[3] + a[1] * b[7] + a[2] * b[0] + a[2] * b[4],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[3] + a[0] * b[7] - a[1] * b[2] - a[1] * b[6] + a[2] * b[1] + a[2] * b[5]
);
}			
		 
inline Tvd gp (const Dap& a, const Tvd& b) { 
	return Tvd (
a[3] * b[4],
a[0] * b[0] + a[0] * b[4] - a[3] * b[1],
a[1] * b[0] + a[1] * b[4] - a[3] * b[2],
a[2] * b[0] + a[2] * b[4] - a[3] * b[3],
a[3] * b[0]
);
}			
		 
inline Trt gp (const Dap& a, const Tsd& b) { 
	return Trt (
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[4],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[0],
 - a[0] * b[2] + a[1] * b[1],
 - a[0] * b[3] + a[2] * b[1],
 - a[1] * b[3] + a[2] * b[2]
);
}			
		 
inline Tst gp (const Dap& a, const Trt& b) { 
	return Tst (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[10],
a[0] * b[8] - a[1] * b[7] + a[3] * b[11],
a[0] * b[9] - a[2] * b[7] + a[3] * b[12],
a[1] * b[9] - a[2] * b[8] + a[3] * b[13],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[1] * b[11] - a[2] * b[2] - a[2] * b[12] - a[3] * b[4],
a[0] * b[1] + a[0] * b[11] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3] - a[2] * b[13] - a[3] * b[5],
a[0] * b[2] + a[0] * b[12] + a[1] * b[3] + a[1] * b[13] + a[2] * b[0] + a[2] * b[10] - a[3] * b[6],
a[3] * b[7],
a[3] * b[8],
a[3] * b[9],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9] + a[3] * b[0],
 - a[0] * b[8] + a[1] * b[7] + a[3] * b[1],
 - a[0] * b[9] + a[2] * b[7] + a[3] * b[2],
 - a[1] * b[9] + a[2] * b[8] + a[3] * b[3],
a[0] * b[3] + a[0] * b[13] - a[1] * b[2] - a[1] * b[12] + a[2] * b[1] + a[2] * b[11]
);
}			
		 
inline Rvd gp (const Dap& a, const Rvd& b) { 
	return Rvd (
a[3] * b[7],
a[3] * b[8],
a[3] * b[9],
a[3] * b[10],
a[0] * b[0] + a[0] * b[7] - a[1] * b[1] - a[1] * b[8] - a[2] * b[2] - a[2] * b[9] - a[3] * b[4],
a[0] * b[1] + a[0] * b[8] + a[1] * b[0] + a[1] * b[7] - a[2] * b[3] - a[2] * b[10] - a[3] * b[5],
a[0] * b[2] + a[0] * b[9] + a[1] * b[3] + a[1] * b[10] + a[2] * b[0] + a[2] * b[7] - a[3] * b[6],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[3] + a[0] * b[10] - a[1] * b[2] - a[1] * b[9] + a[2] * b[1] + a[2] * b[8] - a[3] * b[11]
);
}			
		 
inline Tst gp (const Dap& a, const Tst& b) { 
	return Tst (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[10],
a[0] * b[8] - a[1] * b[7] + a[3] * b[11],
a[0] * b[9] - a[2] * b[7] + a[3] * b[12],
a[1] * b[9] - a[2] * b[8] + a[3] * b[13],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[1] * b[11] - a[2] * b[2] - a[2] * b[12] - a[3] * b[4],
a[0] * b[1] + a[0] * b[11] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3] - a[2] * b[13] - a[3] * b[5],
a[0] * b[2] + a[0] * b[12] + a[1] * b[3] + a[1] * b[13] + a[2] * b[0] + a[2] * b[10] - a[3] * b[6],
a[3] * b[7],
a[3] * b[8],
a[3] * b[9],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9] + a[3] * b[0],
 - a[0] * b[8] + a[1] * b[7] + a[3] * b[1],
 - a[0] * b[9] + a[2] * b[7] + a[3] * b[2],
 - a[1] * b[9] + a[2] * b[8] + a[3] * b[3],
a[0] * b[3] + a[0] * b[13] - a[1] * b[2] - a[1] * b[12] + a[2] * b[1] + a[2] * b[11] - a[3] * b[14]
);
}			
		 
inline Mtt gp (const Dap& a, const Tvt& b) { 
	return Mtt (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[10],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14] + a[3] * b[11],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7] + a[3] * b[12],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8] + a[3] * b[13],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[1] * b[11] - a[2] * b[2] - a[2] * b[12] - a[3] * b[4],
a[0] * b[1] + a[0] * b[11] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3] - a[2] * b[13] - a[3] * b[5],
a[0] * b[2] + a[0] * b[12] + a[1] * b[3] + a[1] * b[13] + a[2] * b[0] + a[2] * b[10] - a[3] * b[6],
a[3] * b[7],
a[3] * b[8],
a[3] * b[9],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9] + a[3] * b[0],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[14] + a[3] * b[1],
 - a[0] * b[9] + a[1] * b[14] + a[2] * b[7] + a[3] * b[2],
 - a[0] * b[14] - a[1] * b[9] + a[2] * b[8] + a[3] * b[3],
a[0] * b[3] + a[0] * b[13] - a[1] * b[2] - a[1] * b[12] + a[2] * b[1] + a[2] * b[11],
a[3] * b[14]
);
}			
		 
inline Tst gp (const Dap& a, const Bst& b) { 
	return Tst (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[10],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[2] * b[2] - a[3] * b[4],
a[0] * b[1] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3] - a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[2] * b[10] - a[3] * b[6],
a[3] * b[7],
a[3] * b[8],
a[3] * b[9],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9] + a[3] * b[0],
 - a[0] * b[8] + a[1] * b[7] + a[3] * b[1],
 - a[0] * b[9] + a[2] * b[7] + a[3] * b[2],
 - a[1] * b[9] + a[2] * b[8] + a[3] * b[3],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Dap op (const Dap& a, const Sca& b) { 
	return Dap (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Sca op (const Dap& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Mnv op (const Dap& a, const Inf& b) { 
	return Mnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Sca op (const Dap& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Mnv op (const Dap& a, const Hyp& b) { 
	return Mnv (
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Sca op (const Dap& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Dal op (const Dap& a, const Pnt& b) { 
	return Dal (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[4] + a[3] * b[0],
a[1] * b[4] + a[3] * b[1],
a[2] * b[4] + a[3] * b[2]
);
}			
		 
inline Daf op (const Dap& a, const Par& b) { 
	return Daf (
 - a[0] * b[7] + a[1] * b[6] + a[3] * b[0],
 - a[0] * b[8] + a[2] * b[6] + a[3] * b[1],
 - a[1] * b[8] + a[2] * b[7] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Dap& a, const Cir& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[9]
);
}			
		 
inline Sca op (const Dap& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Daf op (const Dap& a, const Sta& b) { 
	return Daf (
 - a[0] * b[7] + a[1] * b[6] + a[3] * b[0],
 - a[0] * b[8] + a[2] * b[6] + a[3] * b[1],
 - a[1] * b[8] + a[2] * b[7] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mnk_Biv op (const Dap& a, const Drv& b) { 
	return Mnk_Biv (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Pss op (const Dap& a, const Drb& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Dap& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dap& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dap& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dap& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Dap& a, const Lin& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Dap& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Mnk_Biv op (const Dap& a, const Flp& b) { 
	return Mnk_Biv (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Pss op (const Dap& a, const Dfp& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
inline Daf op (const Dap& a, const Dll& b) { 
	return Daf (
 - a[0] * b[4] + a[1] * b[3] + a[3] * b[0],
 - a[0] * b[5] + a[2] * b[3] + a[3] * b[1],
 - a[1] * b[5] + a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Dal op (const Dap& a, const Dlp& b) { 
	return Dal (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[3] + a[3] * b[0],
a[1] * b[3] + a[3] * b[1],
a[2] * b[3] + a[3] * b[2]
);
}			
		 
inline Dal op (const Dap& a, const Vec& b) { 
	return Dal (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
inline Daf op (const Dap& a, const Biv& b) { 
	return Daf (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Dap& a, const Tri& b) { 
	return Pss (
a[3] * b[0]
);
}			
		 
inline Dal op (const Dap& a, const Aff& b) { 
	return Dal (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
inline Daf op (const Dap& a, const Afl& b) { 
	return Daf (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Dap& a, const Afp& b) { 
	return Pss (
a[3] * b[3]
);
}			
		 
inline Sca op (const Dap& a, const Dap& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dap& a, const Daf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dap& a, const Dal& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dap& a, const Mnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Mnk& b) { 
	return Sca (
a[3] * b[0]
);
}			
		 
inline Sca ip (const Dap& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Afp ip (const Dap& a, const Pss& b) { 
	return Afp (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0]
);
}			
		 
inline Sca ip (const Dap& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Par& b) { 
	return Sca (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9]
);
}			
		 
inline Aff ip (const Dap& a, const Cir& b) { 
	return Aff (
a[1] * b[3] + a[2] * b[4] + a[3] * b[6],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[7],
 - a[0] * b[4] - a[1] * b[5] + a[3] * b[8],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[8]
);
}			
		 
inline Afl ip (const Dap& a, const Sph& b) { 
	return Afl (
a[2] * b[4] + a[3] * b[0],
 - a[1] * b[4] + a[3] * b[1],
a[0] * b[4] + a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Sca ip (const Dap& a, const Sta& b) { 
	return Sca (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
inline Sca ip (const Dap& a, const Drv& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Vec ip (const Dap& a, const Drb& b) { 
	return Vec (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
inline Biv ip (const Dap& a, const Drt& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Sca ip (const Dap& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Aff ip (const Dap& a, const Lin& b) { 
	return Aff (
a[1] * b[0] + a[2] * b[1] + a[3] * b[3],
 - a[0] * b[0] + a[2] * b[2] + a[3] * b[4],
 - a[0] * b[1] - a[1] * b[2] + a[3] * b[5],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5]
);
}			
		 
inline Afl ip (const Dap& a, const Pln& b) { 
	return Afl (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Sca ip (const Dap& a, const Flp& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3]
);
}			
		 
inline Vec ip (const Dap& a, const Dfp& b) { 
	return Vec (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
inline Sca ip (const Dap& a, const Dll& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
inline Sca ip (const Dap& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dap& a, const Dap& b) { 
	return Sca (
a[3] * b[3]
);
}			
		 
inline Afl ip (const Dap& a, const Daf& b) { 
	return Afl (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
inline Aff ip (const Dap& a, const Dal& b) { 
	return Aff (
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5]
);
}			
		 
inline Aff ip (const Dap& a, const Mnv& b) { 
	return Aff (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		  	
template<>
inline Dap sp (const Dap& dap, const Rot& rot) {					
					
const Rot& t1 = rot;
const Dap& t2 = dap;
Vec_Dal t3 (
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
return Dap (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1],
t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Mot& mot) {					
					
const Mot& t1 = mot;
const Dap& t2 = dap;
Mtt t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
 - t1[4] * t2[3],
 - t1[5] * t2[3],
 - t1[6] * t2[3],
t1[0] * t2[3] + t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[1] * t2[3] + t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[2] * t2[3] + t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[3] * t2[3] + t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
 - t1[7] * t2[3]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Dap (
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1],
 - t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[7]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Dil& dil) {					
					
const Dil& t1 = dil;
const Dap& t2 = dap;
Tvd t3 (
t1[1] * t2[3],
t1[0] * t2[0] - t1[1] * t2[0],
t1[0] * t2[1] - t1[1] * t2[1],
t1[0] * t2[2] - t1[1] * t2[2],
t1[0] * t2[3]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Dap (
t3[1] * t5[0] + t3[1] * t5[1],
t3[2] * t5[0] + t3[2] * t5[1],
t3[3] * t5[0] + t3[3] * t5[1],
t3[0] * t5[1] + t3[4] * t5[0]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Trv& trv) {					
					
const Trv& t1 = trv;
const Dap& t2 = dap;
Dap t3 (
t1[0] * t2[0] + t1[1] * t2[3],
t1[0] * t2[1] + t1[2] * t2[3],
t1[0] * t2[2] + t1[3] * t2[3],
t1[0] * t2[3]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Dap (
t3[0] * t5[0] - t3[3] * t5[1],
t3[1] * t5[0] - t3[3] * t5[2],
t3[2] * t5[0] - t3[3] * t5[3],
t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Dap& t2 = dap;
Mtt t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2] + t1[7] * t2[3],
t1[4] * t2[1] - t1[5] * t2[0] + t1[8] * t2[3] + t1[11] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] + t1[9] * t2[3] - t1[11] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[10] * t2[3] + t1[11] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[7] * t2[1] + t1[8] * t2[0] - t1[10] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[7] * t2[2] + t1[9] * t2[0] + t1[10] * t2[1],
 - t1[4] * t2[3],
 - t1[5] * t2[3],
 - t1[6] * t2[3],
t1[0] * t2[3] + t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[1] * t2[3] + t1[4] * t2[1] - t1[5] * t2[0] + t1[11] * t2[2],
t1[2] * t2[3] + t1[4] * t2[2] - t1[6] * t2[0] - t1[11] * t2[1],
t1[3] * t2[3] + t1[5] * t2[2] - t1[6] * t2[1] + t1[11] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[8] * t2[2] + t1[9] * t2[1] - t1[10] * t2[0],
 - t1[11] * t2[3]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Dap (
t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[14] * t5[3] - t3[14] * t5[10],
t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[14] * t5[2] + t3[14] * t5[9],
t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[14] * t5[1] - t3[14] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] - t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Trs& trs) {					
					
const Trs& t1 = trs;
const Dap& t2 = dap;
Trt t3 (
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[1] * t2[3],
 - t1[2] * t2[3],
 - t1[3] * t2[3],
t1[0] * t2[3] + t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Dap (
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0],
 - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Dap& t2 = dap;
Rtc t3 (
t1[4] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2] + t1[11] * t2[3],
t1[4] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2] + t1[12] * t2[3],
t1[4] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1] + t1[13] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[5] * t2[3] - t1[11] * t2[1] + t1[12] * t2[0] + t1[14] * t2[2] - t1[15] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] + t1[6] * t2[3] - t1[11] * t2[2] + t1[13] * t2[0] - t1[14] * t2[1] + t1[15] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[7] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[0] - t1[15] * t2[0],
 - t1[8] * t2[3],
 - t1[9] * t2[3],
 - t1[10] * t2[3],
t1[0] * t2[3] + t1[4] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[1] * t2[3] + t1[4] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[2] * t2[3] + t1[4] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0] + t1[15] * t2[3],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0] + t1[14] * t2[3]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Dap (
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[0] - t3[3] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] + t3[7] * t5[14] + t3[7] * t5[15] - t3[11] * t5[3] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[7] * t5[2] - t3[7] * t5[13] - t3[11] * t5[5] - t3[12] * t5[3] + t3[13] * t5[7] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[2] - t3[3] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] + t3[7] * t5[1] + t3[7] * t5[12] - t3[11] * t5[6] - t3[12] * t5[7] - t3[13] * t5[3] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] + t3[3] * t5[4] - t3[4] * t5[3] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[0] + t3[12] * t5[1] + t3[13] * t5[2] - t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Dap& t2 = dap;
Mtt t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2] + t1[10] * t2[3],
t1[7] * t2[1] - t1[8] * t2[0] + t1[11] * t2[3] + t1[15] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] + t1[12] * t2[3] - t1[15] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[13] * t2[3] + t1[15] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[4] * t2[3] - t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[5] * t2[3] - t1[10] * t2[1] + t1[11] * t2[0] - t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[6] * t2[3] - t1[10] * t2[2] + t1[12] * t2[0] + t1[13] * t2[1],
 - t1[7] * t2[3],
 - t1[8] * t2[3],
 - t1[9] * t2[3],
t1[0] * t2[3] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[1] * t2[3] + t1[7] * t2[1] - t1[8] * t2[0] + t1[15] * t2[2],
t1[2] * t2[3] + t1[7] * t2[2] - t1[9] * t2[0] - t1[15] * t2[1],
t1[3] * t2[3] + t1[8] * t2[2] - t1[9] * t2[1] + t1[15] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0] + t1[14] * t2[3],
 - t1[15] * t2[3]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Dap (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Dap& t2 = dap;
Vec_Dal t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[6] * t2[3],
t1[0] * t2[3],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[3]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Dap (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[5] - t3[5] * t5[6] + t3[6] * t5[7] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] - t3[3] * t5[5] + t3[4] * t5[4] - t3[5] * t5[7] - t3[6] * t5[6] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[6] + t3[4] * t5[7] + t3[5] * t5[4] + t3[6] * t5[5] - t3[7] * t5[1],
t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Dap& t2 = dap;
Rvd t3 (
t1[4] * t2[3],
t1[5] * t2[3],
t1[6] * t2[3],
t1[7] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[0] * t2[3],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Dap (
t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[1] - t3[5] * t5[5] - t3[6] * t5[2] - t3[6] * t5[6] - t3[11] * t5[3] - t3[11] * t5[7],
t3[4] * t5[1] + t3[4] * t5[5] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[3] - t3[6] * t5[7] + t3[11] * t5[2] + t3[11] * t5[6],
t3[4] * t5[2] + t3[4] * t5[6] + t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[0] + t3[6] * t5[4] - t3[11] * t5[1] - t3[11] * t5[5],
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Dap& t2 = dap;
Tvd t3 (
t1[4] * t2[3],
t1[0] * t2[0] + t1[1] * t2[3] - t1[4] * t2[0],
t1[0] * t2[1] + t1[2] * t2[3] - t1[4] * t2[1],
t1[0] * t2[2] + t1[3] * t2[3] - t1[4] * t2[2],
t1[0] * t2[3]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Dap (
t3[0] * t5[1] + t3[1] * t5[0] + t3[1] * t5[4] - t3[4] * t5[1],
t3[0] * t5[2] + t3[2] * t5[0] + t3[2] * t5[4] - t3[4] * t5[2],
t3[0] * t5[3] + t3[3] * t5[0] + t3[3] * t5[4] - t3[4] * t5[3],
t3[0] * t5[4] + t3[4] * t5[0]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Dap& t2 = dap;
Trt t3 (
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2] + t1[4] * t2[3],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2],
 - t1[1] * t2[3],
 - t1[2] * t2[3],
 - t1[3] * t2[3],
t1[0] * t2[3] + t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Dap (
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4],
t3[0] * t5[4] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Trt& trt) {					
					
const Trt& t1 = trt;
const Dap& t2 = dap;
Tst t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2] + t1[10] * t2[3],
t1[7] * t2[1] - t1[8] * t2[0] + t1[11] * t2[3],
t1[7] * t2[2] - t1[9] * t2[0] + t1[12] * t2[3],
t1[8] * t2[2] - t1[9] * t2[1] + t1[13] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[4] * t2[3] - t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[5] * t2[3] - t1[10] * t2[1] + t1[11] * t2[0] - t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[6] * t2[3] - t1[10] * t2[2] + t1[12] * t2[0] + t1[13] * t2[1],
 - t1[7] * t2[3],
 - t1[8] * t2[3],
 - t1[9] * t2[3],
t1[0] * t2[3] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[1] * t2[3] + t1[7] * t2[1] - t1[8] * t2[0],
t1[2] * t2[3] + t1[7] * t2[2] - t1[9] * t2[0],
t1[3] * t2[3] + t1[8] * t2[2] - t1[9] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Dap (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Dap& t2 = dap;
Rvd t3 (
t1[7] * t2[3],
t1[8] * t2[3],
t1[9] * t2[3],
t1[10] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[4] * t2[3] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[5] * t2[3] - t1[7] * t2[1] + t1[8] * t2[0] - t1[10] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[6] * t2[3] - t1[7] * t2[2] + t1[9] * t2[0] + t1[10] * t2[1],
t1[0] * t2[3],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[8] * t2[2] + t1[9] * t2[1] - t1[10] * t2[0] + t1[11] * t2[3]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Dap (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] + t3[10] * t5[11] - t3[11] * t5[3] - t3[11] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[11] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[6] + t3[8] * t5[11] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Tst& tst) {					
					
const Tst& t1 = tst;
const Dap& t2 = dap;
Tst t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2] + t1[10] * t2[3],
t1[7] * t2[1] - t1[8] * t2[0] + t1[11] * t2[3],
t1[7] * t2[2] - t1[9] * t2[0] + t1[12] * t2[3],
t1[8] * t2[2] - t1[9] * t2[1] + t1[13] * t2[3],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[4] * t2[3] - t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[5] * t2[3] - t1[10] * t2[1] + t1[11] * t2[0] - t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[6] * t2[3] - t1[10] * t2[2] + t1[12] * t2[0] + t1[13] * t2[1],
 - t1[7] * t2[3],
 - t1[8] * t2[3],
 - t1[9] * t2[3],
t1[0] * t2[3] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[1] * t2[3] + t1[7] * t2[1] - t1[8] * t2[0],
t1[2] * t2[3] + t1[7] * t2[2] - t1[9] * t2[0],
t1[3] * t2[3] + t1[8] * t2[2] - t1[9] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0] + t1[14] * t2[3]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Dap (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Dap& t2 = dap;
Mtt t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2] + t1[10] * t2[3],
t1[7] * t2[1] - t1[8] * t2[0] + t1[11] * t2[3] + t1[14] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] + t1[12] * t2[3] - t1[14] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[13] * t2[3] + t1[14] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[4] * t2[3] - t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[5] * t2[3] - t1[10] * t2[1] + t1[11] * t2[0] - t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[6] * t2[3] - t1[10] * t2[2] + t1[12] * t2[0] + t1[13] * t2[1],
 - t1[7] * t2[3],
 - t1[8] * t2[3],
 - t1[9] * t2[3],
t1[0] * t2[3] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[1] * t2[3] + t1[7] * t2[1] - t1[8] * t2[0] + t1[14] * t2[2],
t1[2] * t2[3] + t1[7] * t2[2] - t1[9] * t2[0] - t1[14] * t2[1],
t1[3] * t2[3] + t1[8] * t2[2] - t1[9] * t2[1] + t1[14] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0],
 - t1[14] * t2[3]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Dap (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[14]
);

}
		
	
	  	
template<>
inline Dap sp (const Dap& dap, const Bst& bst) {					
					
const Bst& t1 = bst;
const Dap& t2 = dap;
Tst t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2] + t1[10] * t2[3],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[4] * t2[3] - t1[10] * t2[0],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[5] * t2[3] - t1[10] * t2[1],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[6] * t2[3] - t1[10] * t2[2],
 - t1[7] * t2[3],
 - t1[8] * t2[3],
 - t1[9] * t2[3],
t1[0] * t2[3] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[1] * t2[3] + t1[7] * t2[1] - t1[8] * t2[0],
t1[2] * t2[3] + t1[7] * t2[2] - t1[9] * t2[0],
t1[3] * t2[3] + t1[8] * t2[2] - t1[9] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Dap (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1],
t3[0] * t5[10] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Dap re (const Dap& dap, const Vec& vec) {					
					
const Vec& t1 = vec;
const Dap& t2 = dap;
Dap t3 = involute( t2);
Vec_Dap t4 (
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
return Dap (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2],
 - t4[0] * t6[1] + t4[1] * t6[0] - t4[3] * t6[2],
 - t4[0] * t6[2] + t4[2] * t6[0] + t4[3] * t6[1],
t4[4] * t6[0] + t4[5] * t6[1] + t4[6] * t6[2]
);

}
		
	
	  	
template<>
inline Dap re (const Dap& dap, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Dap& t2 = dap;
Dap t3 = involute( t2);
Pnt_Dap t4 (
t1[3] * t3[0],
t1[3] * t3[1],
t1[3] * t3[2],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
 - t1[3] * t3[3],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
t1[0] * t3[3] + t1[3] * t3[0],
t1[1] * t3[3] + t1[3] * t3[1],
t1[2] * t3[3] + t1[3] * t3[2]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Dap (
 - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2],
 - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1],
t4[3] * t6[3] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2]
);

}
		
	
	  	
template<>
inline Dap re (const Dap& dap, const Pln& pln) {					
					
const Pln& t1 = pln;
const Dap& t2 = dap;
Dap t3 = involute( t2);
Pnt_Afp t4 (
t1[0] * t3[3] + t1[3] * t3[2],
t1[1] * t3[3] - t1[3] * t3[1],
t1[2] * t3[3] + t1[3] * t3[0],
 - t1[0] * t3[1] - t1[1] * t3[2],
t1[0] * t3[0] - t1[2] * t3[2],
t1[1] * t3[0] + t1[2] * t3[1],
t1[3] * t3[2],
 - t1[3] * t3[1],
t1[3] * t3[0],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0],
 - t1[3] * t3[3]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Dap (
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[9] * t6[2],
t4[3] * t6[0] - t4[5] * t6[2] + t4[9] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[9] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[9] * t6[3]
);

}
		
	
	  	
template<>
inline Dap re (const Dap& dap, const Dll& dll) {					
					
const Dll& t1 = dll;
const Dap& t2 = dap;
Dap t3 = involute( t2);
Tst t4 (
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
t1[3] * t3[1] - t1[4] * t3[0],
t1[3] * t3[2] - t1[5] * t3[0],
t1[4] * t3[2] - t1[5] * t3[1],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[3] * t3[3],
 - t1[4] * t3[3],
 - t1[5] * t3[3],
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
t1[0] * t3[3] + t1[3] * t3[1] - t1[4] * t3[0],
t1[1] * t3[3] + t1[3] * t3[2] - t1[5] * t3[0],
t1[2] * t3[3] + t1[4] * t3[2] - t1[5] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Dap (
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0],
 - t4[4] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Dap re (const Dap& dap, const Lin& lin) {					
					
const Lin& t1 = lin;
const Dap& t2 = dap;
Dap t3 = involute( t2);
Par_Afp t4 (
t1[0] * t3[1] + t1[1] * t3[2] + t1[3] * t3[3],
 - t1[0] * t3[0] + t1[2] * t3[2] + t1[4] * t3[3],
 - t1[1] * t3[0] - t1[2] * t3[1] + t1[5] * t3[3],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[3] * t3[1] + t1[4] * t3[0],
 - t1[3] * t3[2] + t1[5] * t3[0],
 - t1[4] * t3[2] + t1[5] * t3[1],
 - t1[0] * t3[3],
 - t1[1] * t3[3],
 - t1[2] * t3[3],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Dap (
 - t4[3] * t6[3] - t4[4] * t6[4] - t4[5] * t6[5],
 - t4[3] * t6[4] + t4[4] * t6[3] - t4[6] * t6[5],
 - t4[3] * t6[5] + t4[5] * t6[3] + t4[6] * t6[4],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2]
);

}
		
	
	  	
template<>
inline Dap re (const Dap& dap, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Dap& t2 = dap;
Dap t3 = involute( t2);
Pnt_Dap t4 (
t1[4] * t3[0],
t1[4] * t3[1],
t1[4] * t3[2],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2] + t1[3] * t3[3],
 - t1[4] * t3[3],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
t1[0] * t3[3] + t1[4] * t3[0],
t1[1] * t3[3] + t1[4] * t3[1],
t1[2] * t3[3] + t1[4] * t3[2]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Dap (
t4[0] * t6[3] - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] - t4[8] * t6[3],
t4[1] * t6[3] - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2] - t4[9] * t6[3],
t4[2] * t6[3] - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1] - t4[10] * t6[3],
t4[3] * t6[4] - t4[4] * t6[3] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2]
);

}
		
	
	  	
template<>
inline Dap re (const Dap& dap, const Par& par) {					
					
const Par& t1 = par;
const Dap& t2 = dap;
Dap t3 = involute( t2);
Tst t4 (
t1[6] * t3[0] + t1[7] * t3[1] + t1[8] * t3[2] + t1[9] * t3[3],
t1[6] * t3[1] - t1[7] * t3[0],
t1[6] * t3[2] - t1[8] * t3[0],
t1[7] * t3[2] - t1[8] * t3[1],
t1[0] * t3[1] + t1[1] * t3[2] + t1[3] * t3[3] - t1[9] * t3[0],
 - t1[0] * t3[0] + t1[2] * t3[2] + t1[4] * t3[3] - t1[9] * t3[1],
 - t1[1] * t3[0] - t1[2] * t3[1] + t1[5] * t3[3] - t1[9] * t3[2],
 - t1[6] * t3[3],
 - t1[7] * t3[3],
 - t1[8] * t3[3],
t1[6] * t3[0] + t1[7] * t3[1] + t1[8] * t3[2],
t1[0] * t3[3] + t1[6] * t3[1] - t1[7] * t3[0],
t1[1] * t3[3] + t1[6] * t3[2] - t1[8] * t3[0],
t1[2] * t3[3] + t1[7] * t3[2] - t1[8] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Dap (
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[4] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[10] * t6[3] - t4[11] * t6[4] - t4[12] * t6[5] - t4[14] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] + t4[5] * t6[9] - t4[6] * t6[2] - t4[10] * t6[4] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] + t4[6] * t6[9] - t4[10] * t6[5] + t4[12] * t6[3] + t4[13] * t6[4] - t4[14] * t6[0],
t4[0] * t6[9] - t4[4] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Dap re (const Dap& dap, const Cir& cir) {					
					
const Cir& t1 = cir;
const Dap& t2 = dap;
Dap t3 = involute( t2);
Par_Afp t4 (
t1[3] * t3[1] + t1[4] * t3[2] + t1[6] * t3[3],
 - t1[3] * t3[0] + t1[5] * t3[2] + t1[7] * t3[3],
 - t1[4] * t3[0] - t1[5] * t3[1] + t1[8] * t3[3],
 - t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2],
t1[0] * t3[3] - t1[6] * t3[1] + t1[7] * t3[0] + t1[9] * t3[2],
t1[1] * t3[3] - t1[6] * t3[2] + t1[8] * t3[0] - t1[9] * t3[1],
t1[2] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1] + t1[9] * t3[0],
 - t1[3] * t3[3],
 - t1[4] * t3[3],
 - t1[5] * t3[3],
t1[3] * t3[1] + t1[4] * t3[2],
 - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[4] * t3[0] - t1[5] * t3[1],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0] + t1[9] * t3[3]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Dap (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[6] - t4[4] * t6[7] - t4[5] * t6[8] + t4[6] * t6[9] + t4[11] * t6[0] + t4[12] * t6[1] - t4[13] * t6[2] + t4[14] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[3] * t6[7] + t4[4] * t6[6] - t4[5] * t6[9] - t4[6] * t6[8] - t4[10] * t6[0] + t4[12] * t6[2] + t4[13] * t6[1] - t4[14] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[8] + t4[4] * t6[9] + t4[5] * t6[6] + t4[6] * t6[7] - t4[10] * t6[1] - t4[11] * t6[2] - t4[13] * t6[0] + t4[14] * t6[0],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[4] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5] + t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2] - t4[14] * t6[9]
);

}
		
	
	  	
template<>
inline Dap re (const Dap& dap, const Sph& sph) {					
					
const Sph& t1 = sph;
const Dap& t2 = dap;
Dap t3 = involute( t2);
Pnt_Afp t4 (
t1[0] * t3[3] + t1[4] * t3[2],
t1[1] * t3[3] - t1[4] * t3[1],
t1[2] * t3[3] + t1[4] * t3[0],
 - t1[0] * t3[1] - t1[1] * t3[2],
t1[0] * t3[0] - t1[2] * t3[2],
t1[1] * t3[0] + t1[2] * t3[1],
t1[4] * t3[2],
 - t1[4] * t3[1],
t1[4] * t3[0],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0] + t1[3] * t3[3],
 - t1[4] * t3[3]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Dap (
 - t4[2] * t6[3] - t4[4] * t6[0] - t4[5] * t6[1] + t4[8] * t6[3] - t4[9] * t6[2],
t4[1] * t6[3] + t4[3] * t6[0] - t4[5] * t6[2] - t4[7] * t6[3] + t4[9] * t6[1],
 - t4[0] * t6[3] + t4[3] * t6[1] + t4[4] * t6[2] + t4[6] * t6[3] - t4[9] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[9] * t6[4] - t4[10] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	