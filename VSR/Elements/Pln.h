		#ifndef PLN_H_INCLUDED
		#define PLN_H_INCLUDED
		
		#include "vsr_casts.h"
		
		namespace vsr{
	 
inline Pln gp (const Pln& a, const Sca& b) { 
	return Pln (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Ori_Sph gp (const Pln& a, const Ori& b) { 
	return Ori_Sph (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Drb gp (const Pln& a, const Inf& b) { 
	return Drb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Mnk_Pln gp (const Pln& a, const Mnk& b) { 
	return Mnk_Pln (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Hyp_Sph gp (const Pln& a, const Hyp& b) { 
	return Hyp_Sph (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Dlp gp (const Pln& a, const Pss& b) { 
	return Dlp (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Pnt_Sph gp (const Pln& a, const Pnt& b) { 
	return Pnt_Sph (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
a[0] * b[4] - a[3] * b[2],
a[1] * b[4] + a[3] * b[1],
a[2] * b[4] - a[3] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
inline Pnt_Cir gp (const Pln& a, const Par& b) { 
	return Pnt_Cir (
a[0] * b[9] + a[3] * b[5],
a[1] * b[9] - a[3] * b[4],
a[2] * b[9] + a[3] * b[3],
 - a[0] * b[4] - a[1] * b[5],
a[0] * b[3] - a[2] * b[5],
a[1] * b[3] + a[2] * b[4],
a[0] * b[7] + a[1] * b[8] - a[3] * b[2],
 - a[0] * b[6] + a[2] * b[8] + a[3] * b[1],
 - a[1] * b[6] - a[2] * b[7] - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[5],
a[0] * b[2] - a[2] * b[0] - a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[3] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] - a[3] * b[9]
);
}			
		 
inline Pnt_Par gp (const Pln& a, const Cir& b) { 
	return Pnt_Par (
a[0] * b[7] + a[1] * b[8] + a[3] * b[2],
 - a[0] * b[6] + a[2] * b[8] - a[3] * b[1],
 - a[1] * b[6] - a[2] * b[7] + a[3] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5] + a[3] * b[9],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[1] * b[5] + a[2] * b[4] + a[3] * b[8],
a[0] * b[5] - a[2] * b[3] - a[3] * b[7],
 - a[0] * b[4] + a[1] * b[3] + a[3] * b[6],
 - a[2] * b[9] + a[3] * b[2],
a[1] * b[9] - a[3] * b[1],
 - a[0] * b[9] + a[3] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
inline Bst gp (const Pln& a, const Sph& b) { 
	return Bst (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[2] * b[4] + a[3] * b[2],
a[1] * b[4] - a[3] * b[1],
 - a[0] * b[4] + a[3] * b[0],
 - a[3] * b[3]
);
}			
		 
inline Pnt_Cir gp (const Pln& a, const Sta& b) { 
	return Pnt_Cir (
a[3] * b[5],
 - a[3] * b[4],
a[3] * b[3],
 - a[0] * b[4] - a[1] * b[5],
a[0] * b[3] - a[2] * b[5],
a[1] * b[3] + a[2] * b[4],
a[0] * b[7] + a[1] * b[8] - a[3] * b[2],
 - a[0] * b[6] + a[2] * b[8] + a[3] * b[1],
 - a[1] * b[6] - a[2] * b[7] - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[5],
a[0] * b[2] - a[2] * b[0] - a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[3] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
inline Drv_Pln gp (const Pln& a, const Drv& b) { 
	return Drv_Pln (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drv_Lin gp (const Pln& a, const Drb& b) { 
	return Drv_Lin (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Drv gp (const Pln& a, const Drt& b) { 
	return Drv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Ori_Cir gp (const Pln& a, const Tnv& b) { 
	return Ori_Cir (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Ori_Par gp (const Pln& a, const Tnb& b) { 
	return Ori_Par (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0]
);
}			
		 
inline Tvd gp (const Pln& a, const Tnt& b) { 
	return Tvd (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Lin_Pln gp (const Pln& a, const Lin& b) { 
	return Lin_Pln (
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[5],
a[0] * b[2] - a[2] * b[0] - a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[3] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Pln_Pln gp (const Pln& a, const Pln& b) { 
	return Pln_Pln (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[2] * b[3] + a[3] * b[2],
a[1] * b[3] - a[3] * b[1],
 - a[0] * b[3] + a[3] * b[0]
);
}			
		 
inline Pln_Flp gp (const Pln& a, const Flp& b) { 
	return Pln_Flp (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
inline Pln_Dfp gp (const Pln& a, const Dfp& b) { 
	return Pln_Dfp (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3]
);
}			
		 
inline Lin_Dlp gp (const Pln& a, const Dll& b) { 
	return Lin_Dlp (
a[0] * b[4] + a[1] * b[5] - a[3] * b[2],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[1],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Pln_Dlp gp (const Pln& a, const Dlp& b) { 
	return Pln_Dlp (
a[0] * b[3] - a[3] * b[2],
a[1] * b[3] + a[3] * b[1],
a[2] * b[3] - a[3] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pln_Dlp gp (const Pln& a, const Vec& b) { 
	return Pln_Dlp (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pln_Biv gp (const Pln& a, const Biv& b) { 
	return Pln_Biv (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Mnk_Dlp gp (const Pln& a, const Tri& b) { 
	return Mnk_Dlp (
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Pnt_Sph gp (const Pln& a, const Aff& b) { 
	return Pnt_Sph (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
inline Pnt_Dal gp (const Pln& a, const Afl& b) { 
	return Pnt_Dal (
a[3] * b[5],
 - a[3] * b[4],
a[3] * b[3],
 - a[0] * b[4] - a[1] * b[5],
a[0] * b[3] - a[2] * b[5],
a[1] * b[3] + a[2] * b[4],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[5],
a[0] * b[2] - a[2] * b[0] - a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[3] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
inline Pnt_Dap gp (const Pln& a, const Afp& b) { 
	return Pnt_Dap (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[3] * b[3],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[2] * b[3] + a[3] * b[2],
a[1] * b[3] - a[3] * b[1],
 - a[0] * b[3] + a[3] * b[0]
);
}			
		 
inline Pnt_Afp gp (const Pln& a, const Dap& b) { 
	return Pnt_Afp (
a[0] * b[3] + a[3] * b[2],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] + a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[3] * b[3]
);
}			
		 
inline Bst gp (const Pln& a, const Daf& b) { 
	return Bst (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[3] * b[3]
);
}			
		 
inline Pnt_Afl gp (const Pln& a, const Dal& b) { 
	return Pnt_Afl (
a[0] * b[4] + a[1] * b[5] + a[3] * b[2],
 - a[0] * b[3] + a[2] * b[5] - a[3] * b[1],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
a[3] * b[5],
 - a[3] * b[4],
a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Pln_Mnv gp (const Pln& a, const Mnv& b) { 
	return Pln_Mnv (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Lin_Dlp gp (const Pln& a, const Rot& b) { 
	return Lin_Dlp (
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
		 
inline Lin_Dlp gp (const Pln& a, const Mot& b) { 
	return Lin_Dlp (
a[0] * b[5] + a[1] * b[6] - a[2] * b[7] - a[3] * b[3],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[3] * b[2],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5] - a[3] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[0]
);
}			
		 
inline Inf_Afp gp (const Pln& a, const Dil& b) { 
	return Inf_Afp (
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] - a[3] * b[1]
);
}			
		 
inline Pnt_Afp gp (const Pln& a, const Trv& b) { 
	return Pnt_Afp (
a[3] * b[3],
 - a[3] * b[2],
a[3] * b[1],
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0] + a[3] * b[3],
a[1] * b[0] - a[3] * b[2],
a[2] * b[0] + a[3] * b[1],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1],
a[3] * b[0]
);
}			
		 
inline Mtd gp (const Pln& a, const Mtd& b) { 
	return Mtd (
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] - a[3] * b[3] + a[3] * b[10],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[3] * b[2] - a[3] * b[9],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] - a[3] * b[1] + a[3] * b[8],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[0] - a[3] * b[7]
);
}			
		 
inline Lin_Dfp gp (const Pln& a, const Trs& b) { 
	return Lin_Dfp (
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0]
);
}			
		 
inline Rtc gp (const Pln& a, const Rtc& b) { 
	return Rtc (
a[0] * b[12] + a[1] * b[13] - a[2] * b[15] + a[3] * b[7],
 - a[0] * b[11] + a[1] * b[15] + a[2] * b[13] - a[3] * b[6],
 - a[0] * b[15] - a[1] * b[11] - a[2] * b[12] + a[3] * b[5],
a[0] * b[5] + a[1] * b[6] + a[2] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] + a[3] * b[14] - a[3] * b[15],
 - a[0] * b[3] + a[1] * b[7] - a[2] * b[6],
 - a[0] * b[7] - a[1] * b[3] + a[2] * b[5],
a[0] * b[6] - a[1] * b[5] - a[2] * b[3],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9] - a[3] * b[2] + a[3] * b[13],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8] + a[3] * b[1] - a[3] * b[12],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4] - a[3] * b[0] + a[3] * b[11],
a[0] * b[1] + a[1] * b[2] - a[2] * b[14] + a[3] * b[7],
 - a[0] * b[0] + a[1] * b[14] + a[2] * b[2] - a[3] * b[6],
 - a[0] * b[14] - a[1] * b[0] - a[2] * b[1] + a[3] * b[5],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] - a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
inline Mtt gp (const Pln& a, const Mtt& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[14],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[6],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[5],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[14],
a[0] * b[4] - a[1] * b[14] - a[2] * b[6],
a[0] * b[14] + a[1] * b[4] + a[2] * b[5],
a[0] * b[8] + a[1] * b[9] - a[2] * b[15] - a[3] * b[3] + a[3] * b[13],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9] + a[3] * b[2] - a[3] * b[12],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8] - a[3] * b[1] + a[3] * b[11],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[3] * b[14],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0] - a[3] * b[10]
);
}			
		 
inline Mtt gp (const Pln& a, const Rtt& b) { 
	return Mtt (
 - a[3] * b[7],
a[3] * b[6],
 - a[3] * b[5],
a[3] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[7],
a[0] * b[4] - a[1] * b[7] - a[2] * b[6],
a[0] * b[7] + a[1] * b[4] + a[2] * b[5],
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[3] * b[7],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4],
a[3] * b[0]
);
}			
		 
inline Mtd gp (const Pln& a, const Rtd& b) { 
	return Mtd (
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7],
a[0] * b[4] - a[1] * b[7] + a[2] * b[6],
a[0] * b[7] + a[1] * b[4] - a[2] * b[5],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[4],
 - a[3] * b[3] + a[3] * b[7],
a[3] * b[2] - a[3] * b[6],
 - a[3] * b[1] + a[3] * b[5],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0] - a[3] * b[4]
);
}			
		 
inline Pnt_Afp gp (const Pln& a, const Tvd& b) { 
	return Pnt_Afp (
a[0] * b[4] + a[3] * b[3],
a[1] * b[4] - a[3] * b[2],
a[2] * b[4] + a[3] * b[1],
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0] + a[3] * b[3],
a[1] * b[0] - a[3] * b[2],
a[2] * b[0] + a[3] * b[1],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1],
a[3] * b[0] - a[3] * b[4]
);
}			
		 
inline Inf_Cir gp (const Pln& a, const Tsd& b) { 
	return Inf_Cir (
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] - a[3] * b[4]
);
}			
		 
inline Mtt gp (const Pln& a, const Trt& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[6],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[5],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[4],
 - a[0] * b[5] - a[1] * b[6],
a[0] * b[4] - a[2] * b[6],
a[1] * b[4] + a[2] * b[5],
a[0] * b[8] + a[1] * b[9] - a[3] * b[3] + a[3] * b[13],
 - a[0] * b[7] + a[2] * b[9] + a[3] * b[2] - a[3] * b[12],
 - a[1] * b[7] - a[2] * b[8] - a[3] * b[1] + a[3] * b[11],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0] - a[3] * b[10]
);
}			
		 
inline Mtt gp (const Pln& a, const Rvd& b) { 
	return Mtt (
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[3] * b[11],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9] + a[3] * b[6],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8] - a[3] * b[5],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7] + a[3] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[11],
a[0] * b[4] - a[1] * b[11] - a[2] * b[6],
a[0] * b[11] + a[1] * b[4] + a[2] * b[5],
 - a[3] * b[3] + a[3] * b[10],
a[3] * b[2] - a[3] * b[9],
 - a[3] * b[1] + a[3] * b[8],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[3] * b[11],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4],
a[3] * b[0] - a[3] * b[7]
);
}			
		 
inline Mtt gp (const Pln& a, const Tst& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[14],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[6],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[5],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[14],
a[0] * b[4] - a[1] * b[14] - a[2] * b[6],
a[0] * b[14] + a[1] * b[4] + a[2] * b[5],
a[0] * b[8] + a[1] * b[9] - a[3] * b[3] + a[3] * b[13],
 - a[0] * b[7] + a[2] * b[9] + a[3] * b[2] - a[3] * b[12],
 - a[1] * b[7] - a[2] * b[8] - a[3] * b[1] + a[3] * b[11],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[3] * b[14],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0] - a[3] * b[10]
);
}			
		 
inline Mtt gp (const Pln& a, const Tvt& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[6],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[5],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[4],
 - a[0] * b[5] - a[1] * b[6],
a[0] * b[4] - a[2] * b[6],
a[1] * b[4] + a[2] * b[5],
a[0] * b[8] + a[1] * b[9] - a[2] * b[14] - a[3] * b[3] + a[3] * b[13],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9] + a[3] * b[2] - a[3] * b[12],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8] - a[3] * b[1] + a[3] * b[11],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0] - a[3] * b[10]
);
}			
		 
inline Pnt_Cir gp (const Pln& a, const Bst& b) { 
	return Pnt_Cir (
a[0] * b[10] + a[3] * b[6],
a[1] * b[10] - a[3] * b[5],
a[2] * b[10] + a[3] * b[4],
 - a[0] * b[5] - a[1] * b[6],
a[0] * b[4] - a[2] * b[6],
a[1] * b[4] + a[2] * b[5],
a[0] * b[8] + a[1] * b[9] - a[3] * b[3],
 - a[0] * b[7] + a[2] * b[9] + a[3] * b[2],
 - a[1] * b[7] - a[2] * b[8] - a[3] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0] - a[3] * b[10]
);
}			
		 
inline Pln op (const Pln& a, const Sca& b) { 
	return Pln (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Pss op (const Pln& a, const Ori& b) { 
	return Pss (
 - a[3] * b[0]
);
}			
		 
inline Sca op (const Pln& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Pln& a, const Hyp& b) { 
	return Pss (
 - a[3] * b[0]
);
}			
		 
inline Sca op (const Pln& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Pln& a, const Pnt& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
inline Sca op (const Pln& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Dfp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Pln& a, const Dlp& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Pln& a, const Vec& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Pln& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Pln& a, const Aff& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
inline Sca op (const Pln& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Dap& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Daf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Dal& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pln& a, const Mnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Dlp ip (const Pln& a, const Pss& b) { 
	return Dlp (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Sca ip (const Pln& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Sph& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3]
);
}			
		 
inline Sca ip (const Pln& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Tnt& b) { 
	return Sca (
 - a[3] * b[0]
);
}			
		 
inline Sca ip (const Pln& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Pln& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Pln& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Dfp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Dap& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Daf& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3]
);
}			
		 
inline Sca ip (const Pln& a, const Dal& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pln& a, const Mnv& b) { 
	return Sca (
);
}			
		  	
template<>
inline Pln sp (const Pln& pln, const Rot& rot) {					
					
const Rot& t1 = rot;
const Pln& t2 = pln;
Lin_Dlp t3 (
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
return Pln (
t3[3] * t5[1] + t3[4] * t5[0] - t3[5] * t5[3] + t3[6] * t5[2],
t3[3] * t5[2] + t3[4] * t5[3] + t3[5] * t5[0] - t3[6] * t5[1],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Mot& mot) {					
					
const Mot& t1 = mot;
const Pln& t2 = pln;
Lin_Dlp t3 (
 - t1[3] * t2[3] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
t1[2] * t2[3] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
 - t1[1] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Pln (
t3[3] * t5[1] + t3[4] * t5[0] - t3[5] * t5[3] + t3[6] * t5[2],
t3[3] * t5[2] + t3[4] * t5[3] + t3[5] * t5[0] - t3[6] * t5[1],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[7] + t3[4] * t5[6] - t3[5] * t5[5] + t3[6] * t5[4] + t3[7] * t5[0]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Dil& dil) {					
					
const Dil& t1 = dil;
const Pln& t2 = pln;
Inf_Afp t3 (
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] + t1[1] * t2[3]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Pln (
t3[0] * t5[1] + t3[3] * t5[0],
t3[1] * t5[1] + t3[4] * t5[0],
t3[2] * t5[1] + t3[5] * t5[0],
t3[6] * t5[0] - t3[6] * t5[1]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Trv& trv) {					
					
const Trv& t1 = trv;
const Pln& t2 = pln;
Pnt_Afp t3 (
t1[3] * t2[3],
 - t1[2] * t2[3],
t1[1] * t2[3],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[0] - t1[3] * t2[3],
t1[0] * t2[1] + t1[2] * t2[3],
t1[0] * t2[2] - t1[1] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[3]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Pln (
t3[6] * t5[0] + t3[10] * t5[3],
t3[7] * t5[0] - t3[10] * t5[2],
t3[8] * t5[0] + t3[10] * t5[1],
t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Pln& t2 = pln;
Mtd t3 (
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
 - t1[3] * t2[3] + t1[5] * t2[0] + t1[6] * t2[1] - t1[10] * t2[3] + t1[11] * t2[2],
t1[2] * t2[3] - t1[4] * t2[0] + t1[6] * t2[2] + t1[9] * t2[3] - t1[11] * t2[1],
 - t1[1] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2] - t1[8] * t2[3] + t1[11] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[7] * t2[3]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Pln (
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] - t3[4] * t5[10] - t3[5] * t5[2] + t3[5] * t5[9] + t3[6] * t5[1] - t3[6] * t5[8] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[0] - t3[11] * t5[7]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Trs& trs) {					
					
const Trs& t1 = trs;
const Pln& t2 = pln;
Lin_Dfp t3 (
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Pln (
t3[3] * t5[0],
t3[4] * t5[0],
t3[5] * t5[0],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Pln& t2 = pln;
Rtc t3 (
 - t1[7] * t2[3] - t1[12] * t2[0] - t1[13] * t2[1] - t1[15] * t2[2],
t1[6] * t2[3] + t1[11] * t2[0] - t1[13] * t2[2] + t1[15] * t2[1],
 - t1[5] * t2[3] + t1[11] * t2[1] + t1[12] * t2[2] - t1[15] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2] - t1[14] * t2[3] - t1[15] * t2[3],
t1[3] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[3] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[3] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[2] * t2[3] - t1[4] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1] + t1[13] * t2[3],
 - t1[1] * t2[3] - t1[4] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0] - t1[12] * t2[3],
t1[0] * t2[3] - t1[4] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] + t1[7] * t2[3] - t1[14] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] - t1[6] * t2[3] + t1[14] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[5] * t2[3] - t1[14] * t2[0],
t1[3] * t2[3] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Pln (
t3[0] * t5[12] - t3[1] * t5[11] + t3[2] * t5[15] + t3[3] * t5[8] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[10] + t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[1] - t3[12] * t5[0] + t3[13] * t5[14] + t3[14] * t5[13] + t3[15] * t5[2],
t3[0] * t5[13] - t3[1] * t5[15] - t3[2] * t5[11] + t3[3] * t5[9] - t3[4] * t5[6] + t3[5] * t5[10] + t3[6] * t5[4] - t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[2] - t3[12] * t5[14] - t3[13] * t5[0] - t3[14] * t5[12] - t3[15] * t5[1],
t3[0] * t5[15] + t3[1] * t5[13] - t3[2] * t5[12] + t3[3] * t5[10] - t3[4] * t5[7] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[14] + t3[12] * t5[2] - t3[13] * t5[1] + t3[14] * t5[11] + t3[15] * t5[0],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] - t3[4] * t5[14] + t3[4] * t5[15] - t3[8] * t5[2] + t3[8] * t5[13] + t3[9] * t5[1] - t3[9] * t5[12] - t3[10] * t5[0] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[9] + t3[13] * t5[8] + t3[14] * t5[4] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Pln& t2 = pln;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[14] * t2[3],
t1[6] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[5] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[4] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[14] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[14] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[14] * t2[0],
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[3] + t1[15] * t2[2],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[3] - t1[15] * t2[1],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[3] + t1[15] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[14] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Pln (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[15] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[15] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[15] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[15] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Pln& t2 = pln;
Mtt t3 (
 - t1[7] * t2[3],
t1[6] * t2[3],
 - t1[5] * t2[3],
t1[4] * t2[3],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[0] * t2[3]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Pln (
t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] + t3[15] * t5[6],
t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] - t3[15] * t5[5],
t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] + t3[15] * t5[4],
t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[15] * t5[0]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Pln& t2 = pln;
Mtd t3 (
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
 - t1[3] * t2[3] - t1[7] * t2[3],
t1[2] * t2[3] + t1[6] * t2[3],
 - t1[1] * t2[3] - t1[5] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[4] * t2[3]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Pln (
t3[0] * t5[5] + t3[1] * t5[4] - t3[2] * t5[7] + t3[3] * t5[6] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[4] - t3[3] * t5[5] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] + t3[3] * t5[4] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
t3[4] * t5[3] - t3[4] * t5[7] - t3[5] * t5[2] + t3[5] * t5[6] + t3[6] * t5[1] - t3[6] * t5[5] + t3[11] * t5[0] - t3[11] * t5[4]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Pln& t2 = pln;
Pnt_Afp t3 (
t1[3] * t2[3] + t1[4] * t2[0],
 - t1[2] * t2[3] + t1[4] * t2[1],
t1[1] * t2[3] + t1[4] * t2[2],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[0] - t1[3] * t2[3],
t1[0] * t2[1] + t1[2] * t2[3],
t1[0] * t2[2] - t1[1] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[3] + t1[4] * t2[3]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Pln (
t3[0] * t5[4] + t3[6] * t5[0] + t3[10] * t5[3],
t3[1] * t5[4] + t3[7] * t5[0] - t3[10] * t5[2],
t3[2] * t5[4] + t3[8] * t5[0] + t3[10] * t5[1],
t3[10] * t5[0] - t3[10] * t5[4]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Pln& t2 = pln;
Inf_Cir t3 (
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0] + t1[4] * t2[3]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Pln (
t3[0] * t5[4] + t3[6] * t5[0],
t3[1] * t5[4] + t3[7] * t5[0],
t3[2] * t5[4] + t3[8] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[6] * t5[3] - t3[7] * t5[2] + t3[8] * t5[1] + t3[9] * t5[0] - t3[9] * t5[4]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Trt& trt) {					
					
const Trt& t1 = trt;
const Pln& t2 = pln;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[6] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[5] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[4] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1],
t1[4] * t2[0] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[2],
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[3],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[3],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Pln (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Pln& t2 = pln;
Mtt t3 (
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2] - t1[11] * t2[3],
t1[6] * t2[3] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
 - t1[5] * t2[3] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[4] * t2[3] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[11] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[11] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[11] * t2[0],
 - t1[3] * t2[3] - t1[10] * t2[3],
t1[2] * t2[3] + t1[9] * t2[3],
 - t1[1] * t2[3] - t1[8] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[0] * t2[3] + t1[7] * t2[3]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Pln (
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] + t3[15] * t5[6],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] - t3[15] * t5[5],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] + t3[15] * t5[4],
t3[7] * t5[3] - t3[7] * t5[10] - t3[8] * t5[2] + t3[8] * t5[9] + t3[9] * t5[1] - t3[9] * t5[8] + t3[15] * t5[0] - t3[15] * t5[7]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Tst& tst) {					
					
const Tst& t1 = tst;
const Pln& t2 = pln;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[14] * t2[3],
t1[6] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[5] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[4] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[14] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[14] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[14] * t2[0],
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[3],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[3],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[14] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Pln (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Pln& t2 = pln;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[6] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[5] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[4] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1],
t1[4] * t2[0] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[2],
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[3] + t1[14] * t2[2],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[3] - t1[14] * t2[1],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[3] + t1[14] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Pln (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[14] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[14] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[14] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[14] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Pln sp (const Pln& pln, const Bst& bst) {					
					
const Bst& t1 = bst;
const Pln& t2 = pln;
Pnt_Cir t3 (
t1[6] * t2[3] + t1[10] * t2[0],
 - t1[5] * t2[3] + t1[10] * t2[1],
t1[4] * t2[3] + t1[10] * t2[2],
 - t1[5] * t2[0] - t1[6] * t2[1],
t1[4] * t2[0] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[2],
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Pln (
t3[0] * t5[10] - t3[3] * t5[8] + t3[4] * t5[7] + t3[6] * t5[5] - t3[7] * t5[4] + t3[9] * t5[1] + t3[10] * t5[0] - t3[11] * t5[3] + t3[12] * t5[2] - t3[13] * t5[9] + t3[14] * t5[6],
t3[1] * t5[10] - t3[3] * t5[9] + t3[5] * t5[7] + t3[6] * t5[6] - t3[8] * t5[4] + t3[9] * t5[2] + t3[10] * t5[3] + t3[11] * t5[0] - t3[12] * t5[1] + t3[13] * t5[8] - t3[14] * t5[5],
t3[2] * t5[10] - t3[4] * t5[9] + t3[5] * t5[8] + t3[7] * t5[6] - t3[8] * t5[5] + t3[9] * t5[3] - t3[10] * t5[2] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[7] + t3[14] * t5[4],
t3[0] * t5[9] - t3[1] * t5[8] + t3[2] * t5[7] + t3[6] * t5[3] - t3[7] * t5[2] + t3[8] * t5[1] + t3[10] * t5[9] - t3[11] * t5[8] + t3[12] * t5[7] + t3[14] * t5[0] - t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Pln re (const Pln& pln, const Vec& vec) {					
					
const Vec& t1 = vec;
const Pln& t2 = pln;
Pln t3 = involute( t2);
Pln_Dlp t4 (
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
return Pln (
t4[3] * t6[1] - t4[4] * t6[0] + t4[6] * t6[2],
t4[3] * t6[2] - t4[5] * t6[0] - t4[6] * t6[1],
t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0],
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Pln re (const Pln& pln, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Pln& t2 = pln;
Pln t3 = involute( t2);
Pln_Dlp t4 (
t1[2] * t3[3] - t1[3] * t3[0],
 - t1[1] * t3[3] - t1[3] * t3[1],
t1[0] * t3[3] - t1[3] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Pln (
t4[3] * t6[1] - t4[4] * t6[0] + t4[6] * t6[2],
t4[3] * t6[2] - t4[5] * t6[0] - t4[6] * t6[1],
t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0],
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0] + t4[6] * t6[3]
);

}
		
	
	  	
template<>
inline Pln re (const Pln& pln, const Dll& dll) {					
					
const Dll& t1 = dll;
const Pln& t2 = pln;
Pln t3 = involute( t2);
Lin_Dlp t4 (
 - t1[2] * t3[3] + t1[4] * t3[0] + t1[5] * t3[1],
t1[1] * t3[3] - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[0] * t3[3] - t1[3] * t3[1] - t1[4] * t3[2],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Pln (
t4[3] * t6[0] - t4[5] * t6[2] + t4[6] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[6] * t6[0],
t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[4] * t6[5] - t4[5] * t6[4] + t4[6] * t6[3]
);

}
		
	
	  	
template<>
inline Pln re (const Pln& pln, const Lin& lin) {					
					
const Lin& t1 = lin;
const Pln& t2 = pln;
Pln t3 = involute( t2);
Lin_Pln t4 (
 - t1[4] * t3[0] - t1[5] * t3[1],
t1[3] * t3[0] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[2],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[1] * t3[2] - t1[2] * t3[1] + t1[5] * t3[3],
 - t1[0] * t3[2] + t1[2] * t3[0] - t1[4] * t3[3],
t1[0] * t3[1] - t1[1] * t3[0] + t1[3] * t3[3],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Pln (
t4[0] * t6[4] - t4[1] * t6[3] + t4[7] * t6[5],
t4[0] * t6[5] - t4[2] * t6[3] - t4[7] * t6[4],
t4[1] * t6[5] - t4[2] * t6[4] + t4[7] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[4] * t6[5] - t4[5] * t6[4] + t4[6] * t6[3]
);

}
		
	
	  	
template<>
inline Pln re (const Pln& pln, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Pln& t2 = pln;
Pln t3 = involute( t2);
Pnt_Sph t4 (
t1[3] * t3[0],
t1[3] * t3[1],
t1[3] * t3[2],
t1[2] * t3[3] - t1[4] * t3[0],
 - t1[1] * t3[3] - t1[4] * t3[1],
t1[0] * t3[3] - t1[4] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[3] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] - t1[3] * t3[3]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Pln (
t4[0] * t6[4] - t4[3] * t6[3] + t4[6] * t6[1] - t4[7] * t6[0] + t4[10] * t6[2],
t4[1] * t6[4] - t4[4] * t6[3] + t4[6] * t6[2] - t4[8] * t6[0] - t4[10] * t6[1],
t4[2] * t6[4] - t4[5] * t6[3] + t4[7] * t6[2] - t4[8] * t6[1] + t4[10] * t6[0],
 - t4[3] * t6[2] + t4[4] * t6[1] - t4[5] * t6[0] + t4[9] * t6[4] + t4[10] * t6[4]
);

}
		
	
	  	
template<>
inline Pln re (const Pln& pln, const Par& par) {					
					
const Par& t1 = par;
const Pln& t2 = pln;
Pln t3 = involute( t2);
Pnt_Cir t4 (
t1[5] * t3[3] + t1[9] * t3[0],
 - t1[4] * t3[3] + t1[9] * t3[1],
t1[3] * t3[3] + t1[9] * t3[2],
 - t1[4] * t3[0] - t1[5] * t3[1],
t1[3] * t3[0] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[2],
 - t1[2] * t3[3] + t1[7] * t3[0] + t1[8] * t3[1],
t1[1] * t3[3] - t1[6] * t3[0] + t1[8] * t3[2],
 - t1[0] * t3[3] - t1[6] * t3[1] - t1[7] * t3[2],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1] - t1[5] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] + t1[4] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] - t1[3] * t3[3],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0],
 - t1[6] * t3[2] + t1[7] * t3[1] - t1[8] * t3[0] + t1[9] * t3[3]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Pln (
t4[0] * t6[9] - t4[3] * t6[7] + t4[4] * t6[6] + t4[6] * t6[4] - t4[7] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1] - t4[13] * t6[8] + t4[14] * t6[5],
t4[1] * t6[9] - t4[3] * t6[8] + t4[5] * t6[6] + t4[6] * t6[5] - t4[8] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0] + t4[13] * t6[7] - t4[14] * t6[4],
t4[2] * t6[9] - t4[4] * t6[8] + t4[5] * t6[7] + t4[7] * t6[5] - t4[8] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0] - t4[13] * t6[6] + t4[14] * t6[3],
t4[0] * t6[8] - t4[1] * t6[7] + t4[2] * t6[6] + t4[6] * t6[2] - t4[7] * t6[1] + t4[8] * t6[0] + t4[10] * t6[8] - t4[11] * t6[7] + t4[12] * t6[6] - t4[14] * t6[9]
);

}
		
	
	  	
template<>
inline Pln re (const Pln& pln, const Cir& cir) {					
					
const Cir& t1 = cir;
const Pln& t2 = pln;
Pln t3 = involute( t2);
Pnt_Par t4 (
 - t1[2] * t3[3] - t1[7] * t3[0] - t1[8] * t3[1],
t1[1] * t3[3] + t1[6] * t3[0] - t1[8] * t3[2],
 - t1[0] * t3[3] + t1[6] * t3[1] + t1[7] * t3[2],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2] - t1[9] * t3[3],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
t1[4] * t3[2] - t1[5] * t3[1] + t1[8] * t3[3],
 - t1[3] * t3[2] + t1[5] * t3[0] - t1[7] * t3[3],
t1[3] * t3[1] - t1[4] * t3[0] + t1[6] * t3[3],
t1[2] * t3[3] - t1[9] * t3[2],
 - t1[1] * t3[3] + t1[9] * t3[1],
t1[0] * t3[3] - t1[9] * t3[0],
t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Pln (
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[3] - t4[4] * t6[0] - t4[6] * t6[5] + t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[13] * t6[9] + t4[14] * t6[8],
t4[0] * t6[8] - t4[2] * t6[6] + t4[3] * t6[4] - t4[4] * t6[1] + t4[5] * t6[5] - t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] - t4[12] * t6[9] - t4[14] * t6[7],
t4[1] * t6[8] - t4[2] * t6[7] + t4[3] * t6[5] - t4[4] * t6[2] - t4[5] * t6[4] + t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[11] * t6[9] + t4[14] * t6[6],
t4[0] * t6[5] - t4[1] * t6[4] + t4[2] * t6[3] - t4[4] * t6[9] + t4[8] * t6[8] - t4[9] * t6[7] + t4[10] * t6[6] + t4[11] * t6[5] - t4[12] * t6[4] + t4[13] * t6[3]
);

}
		
	
	  	
template<>
inline Pln re (const Pln& pln, const Sph& sph) {					
					
const Sph& t1 = sph;
const Pln& t2 = pln;
Pln t3 = involute( t2);
Bst t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] - t1[3] * t3[3],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
 - t1[3] * t3[2],
t1[3] * t3[1],
 - t1[3] * t3[0],
 - t1[2] * t3[3] + t1[4] * t3[2],
t1[1] * t3[3] - t1[4] * t3[1],
 - t1[0] * t3[3] + t1[4] * t3[0],
t1[3] * t3[3]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Pln (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] - t4[6] * t6[4] + t4[9] * t6[3],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[5] * t6[4] - t4[8] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[4] * t6[4] + t4[7] * t6[3],
t4[0] * t6[4] - t4[7] * t6[2] + t4[8] * t6[1] - t4[9] * t6[0] + t4[10] * t6[4]
);

}
		
	
		
	} //vsr::
	#endif
	