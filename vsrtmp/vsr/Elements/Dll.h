		#ifndef DLL_H_INCLUDED
		#define DLL_H_INCLUDED
		
		#include "vsr_casts.h"
		
		namespace vsr{
	 
inline Dll gp (const Dll& a, const Sca& b) { 
	return Dll (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
inline Ori_Sta gp (const Dll& a, const Ori& b) { 
	return Ori_Sta (
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0]
);
}			
		 
inline Drb gp (const Dll& a, const Inf& b) { 
	return Drb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Mnk_Dll gp (const Dll& a, const Mnk& b) { 
	return Mnk_Dll (
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Hyp_Sta gp (const Dll& a, const Hyp& b) { 
	return Hyp_Sta (
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0]
);
}			
		 
inline Lin gp (const Dll& a, const Pss& b) { 
	return Lin (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Pnt_Dll gp (const Dll& a, const Pnt& b) { 
	return Pnt_Dll (
a[0] * b[1] + a[1] * b[2] - a[3] * b[3],
 - a[0] * b[0] + a[2] * b[2] - a[4] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[5] * b[3],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[4] - a[3] * b[1] + a[4] * b[0],
a[1] * b[4] - a[3] * b[2] + a[5] * b[0],
a[2] * b[4] - a[4] * b[2] + a[5] * b[1],
 - a[3] * b[3],
 - a[4] * b[3],
 - a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mtt gp (const Dll& a, const Par& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[4] - a[4] * b[3],
a[0] * b[2] - a[2] * b[0] + a[3] * b[5] - a[5] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[5] - a[5] * b[4],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[7] + a[1] * b[8] - a[3] * b[9] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[6] + a[2] * b[8] + a[3] * b[0] - a[4] * b[9] - a[5] * b[2],
 - a[1] * b[6] - a[2] * b[7] + a[3] * b[1] + a[4] * b[2] - a[5] * b[9],
a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
a[0] * b[9] + a[3] * b[4] - a[4] * b[3],
a[1] * b[9] + a[3] * b[5] - a[5] * b[3],
a[2] * b[9] + a[4] * b[5] - a[5] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Rtc gp (const Dll& a, const Cir& b) { 
	return Rtc (
 - a[2] * b[9] + a[4] * b[0] + a[5] * b[1],
a[1] * b[9] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[9] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[1] * b[5] + a[2] * b[4] + a[3] * b[7] - a[4] * b[6] - a[5] * b[9],
a[0] * b[5] - a[2] * b[3] + a[3] * b[8] + a[4] * b[9] - a[5] * b[6],
 - a[0] * b[4] + a[1] * b[3] - a[3] * b[9] + a[4] * b[8] - a[5] * b[7],
a[0] * b[7] + a[1] * b[8] + a[4] * b[0] + a[5] * b[1],
 - a[0] * b[6] + a[2] * b[8] - a[3] * b[0] + a[5] * b[2],
 - a[1] * b[6] - a[2] * b[7] - a[3] * b[1] - a[4] * b[2],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Pnt_Lin gp (const Dll& a, const Sph& b) { 
	return Pnt_Lin (
a[5] * b[3],
 - a[4] * b[3],
a[3] * b[3],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[2] * b[4] + a[4] * b[0] + a[5] * b[1],
a[1] * b[4] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[4] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[5] * b[3],
a[0] * b[2] - a[2] * b[0] - a[4] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[3] * b[3],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Mtt gp (const Dll& a, const Sta& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[4] - a[4] * b[3],
a[0] * b[2] - a[2] * b[0] + a[3] * b[5] - a[5] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[5] - a[5] * b[4],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[7] + a[1] * b[8] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[6] + a[2] * b[8] + a[3] * b[0] - a[5] * b[2],
 - a[1] * b[6] - a[2] * b[7] + a[3] * b[1] + a[4] * b[2],
a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
a[3] * b[4] - a[4] * b[3],
a[3] * b[5] - a[5] * b[3],
a[4] * b[5] - a[5] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Drv_Pln gp (const Dll& a, const Drv& b) { 
	return Drv_Pln (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drv_Lin gp (const Dll& a, const Drb& b) { 
	return Drv_Lin (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Drv gp (const Dll& a, const Drt& b) { 
	return Drv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Rvd gp (const Dll& a, const Tnv& b) { 
	return Rvd (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Par_Tnb gp (const Dll& a, const Tnb& b) { 
	return Par_Tnb (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Ori_Lin gp (const Dll& a, const Tnt& b) { 
	return Ori_Lin (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0]
);
}			
		 
inline Lin_Dll gp (const Dll& a, const Lin& b) { 
	return Lin_Dll (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[4] - a[4] * b[3],
a[0] * b[2] - a[2] * b[0] + a[3] * b[5] - a[5] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[5] - a[5] * b[4],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Lin_Dlp gp (const Dll& a, const Pln& b) { 
	return Lin_Dlp (
 - a[2] * b[3] + a[4] * b[0] + a[5] * b[1],
a[1] * b[3] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[3] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Lin_Dfp gp (const Dll& a, const Flp& b) { 
	return Lin_Dfp (
a[0] * b[1] + a[1] * b[2] - a[3] * b[3],
 - a[0] * b[0] + a[2] * b[2] - a[4] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[5] * b[3],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Lin_Flp gp (const Dll& a, const Dfp& b) { 
	return Lin_Flp (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] + a[4] * b[3],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[3]
);
}			
		 
inline Mot gp (const Dll& a, const Dll& b) { 
	return Mot (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Lin_Pln gp (const Dll& a, const Dlp& b) { 
	return Lin_Pln (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Lin_Pln gp (const Dll& a, const Vec& b) { 
	return Lin_Pln (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mot gp (const Dll& a, const Biv& b) { 
	return Mot (
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
		 
inline Mnk_Lin gp (const Dll& a, const Tri& b) { 
	return Mnk_Lin (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0]
);
}			
		 
inline Pnt_Dll gp (const Dll& a, const Aff& b) { 
	return Pnt_Dll (
a[0] * b[1] + a[1] * b[2] - a[3] * b[3],
 - a[0] * b[0] + a[2] * b[2] - a[4] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[5] * b[3],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
 - a[3] * b[3],
 - a[4] * b[3],
 - a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mtt gp (const Dll& a, const Afl& b) { 
	return Mtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[4] - a[4] * b[3],
a[0] * b[2] - a[2] * b[0] + a[3] * b[5] - a[5] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[5] - a[5] * b[4],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
a[3] * b[4] - a[4] * b[3],
a[3] * b[5] - a[5] * b[3],
a[4] * b[5] - a[5] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Par_Afp gp (const Dll& a, const Afp& b) { 
	return Par_Afp (
 - a[2] * b[3] + a[4] * b[0] + a[5] * b[1],
a[1] * b[3] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[3] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[5] * b[3],
a[4] * b[3],
 - a[3] * b[3],
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Tst gp (const Dll& a, const Dap& b) { 
	return Tst (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[3],
 - a[4] * b[3],
 - a[5] * b[3],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[0] * b[3] + a[3] * b[1] - a[4] * b[0],
a[1] * b[3] + a[3] * b[2] - a[5] * b[0],
a[2] * b[3] + a[4] * b[2] - a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pnt_Lin gp (const Dll& a, const Daf& b) { 
	return Pnt_Lin (
a[5] * b[3],
 - a[4] * b[3],
a[3] * b[3],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[5] * b[3],
a[0] * b[2] - a[2] * b[0] - a[4] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[3] * b[3],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Rtc gp (const Dll& a, const Dal& b) { 
	return Rtc (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[3] * b[4] - a[4] * b[3],
a[3] * b[5] - a[5] * b[3],
a[4] * b[5] - a[5] * b[4],
a[0] * b[4] + a[1] * b[5] + a[4] * b[0] + a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] - a[3] * b[0] + a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[1] - a[4] * b[2],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Lin_Dll gp (const Dll& a, const Mnv& b) { 
	return Lin_Dll (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Mot gp (const Dll& a, const Rot& b) { 
	return Mot (
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
		 
inline Mot gp (const Dll& a, const Mot& b) { 
	return Mot (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Inf_Dal gp (const Dll& a, const Dil& b) { 
	return Inf_Dal (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] - a[3] * b[1],
a[4] * b[0] - a[4] * b[1],
a[5] * b[0] - a[5] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
inline Tst gp (const Dll& a, const Trv& b) { 
	return Tst (
a[3] * b[1] + a[4] * b[2] + a[5] * b[3],
a[0] * b[0] + a[3] * b[2] - a[4] * b[1],
a[1] * b[0] + a[3] * b[3] - a[5] * b[1],
a[2] * b[0] + a[4] * b[3] - a[5] * b[2],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[3] * b[1] + a[4] * b[2] + a[5] * b[3],
a[3] * b[2] - a[4] * b[1],
a[3] * b[3] - a[5] * b[1],
a[4] * b[3] - a[5] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Mtd gp (const Dll& a, const Mtd& b) { 
	return Mtd (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] + a[3] * b[0] - a[3] * b[7] - a[4] * b[1] + a[4] * b[8] - a[5] * b[2] + a[5] * b[9],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[3] * b[1] - a[3] * b[8] + a[4] * b[0] - a[4] * b[7] - a[5] * b[3] + a[5] * b[10],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] - a[3] * b[9] + a[4] * b[3] - a[4] * b[10] + a[5] * b[0] - a[5] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[3] * b[10] - a[4] * b[2] + a[4] * b[9] + a[5] * b[1] - a[5] * b[8]
);
}			
		 
inline Pln_Flp gp (const Dll& a, const Trs& b) { 
	return Pln_Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[2] + a[1] * b[3] + a[3] * b[0],
 - a[0] * b[1] + a[2] * b[3] + a[4] * b[0],
 - a[1] * b[1] - a[2] * b[2] + a[5] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Rtc gp (const Dll& a, const Rtc& b) { 
	return Rtc (
a[0] * b[1] + a[1] * b[2] - a[2] * b[14] - a[3] * b[3] + a[4] * b[5] + a[5] * b[6],
 - a[0] * b[0] + a[1] * b[14] + a[2] * b[2] - a[3] * b[5] - a[4] * b[3] + a[5] * b[7],
 - a[0] * b[14] - a[1] * b[0] - a[2] * b[1] - a[3] * b[6] - a[4] * b[7] - a[5] * b[3],
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[3] * b[0] + a[3] * b[11] - a[4] * b[1] + a[4] * b[12] - a[5] * b[2] + a[5] * b[13],
a[0] * b[3] - a[1] * b[7] + a[2] * b[6],
a[0] * b[7] + a[1] * b[3] - a[2] * b[5],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[3],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9] - a[3] * b[1] + a[3] * b[12] + a[4] * b[0] - a[4] * b[11] - a[5] * b[14] + a[5] * b[15],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8] - a[3] * b[2] + a[3] * b[13] + a[4] * b[14] - a[4] * b[15] + a[5] * b[0] - a[5] * b[11],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4] - a[3] * b[14] + a[3] * b[15] - a[4] * b[2] + a[4] * b[13] + a[5] * b[1] - a[5] * b[12],
a[0] * b[12] + a[1] * b[13] - a[2] * b[15] - a[3] * b[3] + a[4] * b[5] + a[5] * b[6],
 - a[0] * b[11] + a[1] * b[15] + a[2] * b[13] - a[3] * b[5] - a[4] * b[3] + a[5] * b[7],
 - a[0] * b[15] - a[1] * b[11] - a[2] * b[12] - a[3] * b[6] - a[4] * b[7] - a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[7] + a[4] * b[6] - a[5] * b[5],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] - a[3] * b[7] + a[4] * b[6] - a[5] * b[5]
);
}			
		 
inline Mtt gp (const Dll& a, const Mtt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4] + a[5] * b[14],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[4] * b[14] - a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[14] + a[4] * b[6] - a[5] * b[5],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9] - a[2] * b[15] + a[3] * b[0] - a[3] * b[10] - a[4] * b[1] + a[4] * b[11] - a[5] * b[2] + a[5] * b[12],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9] + a[3] * b[1] - a[3] * b[11] + a[4] * b[0] - a[4] * b[10] - a[5] * b[3] + a[5] * b[13],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8] + a[3] * b[2] - a[3] * b[12] + a[4] * b[3] - a[4] * b[13] + a[5] * b[0] - a[5] * b[10],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[5] - a[4] * b[4] + a[5] * b[14],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] + a[3] * b[6] - a[4] * b[14] - a[5] * b[4],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[14] + a[4] * b[6] - a[5] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[3] - a[3] * b[13] - a[4] * b[2] + a[4] * b[12] + a[5] * b[1] - a[5] * b[11]
);
}			
		 
inline Mtt gp (const Dll& a, const Rtt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4] + a[5] * b[7],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[4] * b[7] - a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[7] + a[4] * b[6] - a[5] * b[5],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5],
a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[3] * b[5] - a[4] * b[4] + a[5] * b[7],
a[3] * b[6] - a[4] * b[7] - a[5] * b[4],
a[3] * b[7] + a[4] * b[6] - a[5] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Mtd gp (const Dll& a, const Rtd& b) { 
	return Mtd (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0] - a[3] * b[4] - a[4] * b[1] + a[4] * b[5] - a[5] * b[2] + a[5] * b[6],
a[3] * b[1] - a[3] * b[5] + a[4] * b[0] - a[4] * b[4] - a[5] * b[3] + a[5] * b[7],
a[3] * b[2] - a[3] * b[6] + a[4] * b[3] - a[4] * b[7] + a[5] * b[0] - a[5] * b[4],
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7],
a[0] * b[4] - a[1] * b[7] + a[2] * b[6],
a[0] * b[7] + a[1] * b[4] - a[2] * b[5],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[4],
a[3] * b[3] - a[3] * b[7] - a[4] * b[2] + a[4] * b[6] + a[5] * b[1] - a[5] * b[5]
);
}			
		 
inline Tst gp (const Dll& a, const Tvd& b) { 
	return Tst (
a[3] * b[1] + a[4] * b[2] + a[5] * b[3],
a[0] * b[0] + a[3] * b[2] - a[4] * b[1],
a[1] * b[0] + a[3] * b[3] - a[5] * b[1],
a[2] * b[0] + a[4] * b[3] - a[5] * b[2],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[3] * b[0] - a[3] * b[4],
a[4] * b[0] - a[4] * b[4],
a[5] * b[0] - a[5] * b[4],
a[3] * b[1] + a[4] * b[2] + a[5] * b[3],
a[0] * b[4] + a[3] * b[2] - a[4] * b[1],
a[1] * b[4] + a[3] * b[3] - a[5] * b[1],
a[2] * b[4] + a[4] * b[3] - a[5] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Inf_Cir gp (const Dll& a, const Tsd& b) { 
	return Inf_Cir (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[2] + a[1] * b[3] + a[3] * b[0] - a[3] * b[4],
 - a[0] * b[1] + a[2] * b[3] + a[4] * b[0] - a[4] * b[4],
 - a[1] * b[1] - a[2] * b[2] + a[5] * b[0] - a[5] * b[4],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Mtt gp (const Dll& a, const Trt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[6] - a[5] * b[5],
a[0] * b[5] + a[1] * b[6],
 - a[0] * b[4] + a[2] * b[6],
 - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9] + a[3] * b[0] - a[3] * b[10] - a[4] * b[1] + a[4] * b[11] - a[5] * b[2] + a[5] * b[12],
 - a[0] * b[7] + a[2] * b[9] + a[3] * b[1] - a[3] * b[11] + a[4] * b[0] - a[4] * b[10] - a[5] * b[3] + a[5] * b[13],
 - a[1] * b[7] - a[2] * b[8] + a[3] * b[2] - a[3] * b[12] + a[4] * b[3] - a[4] * b[13] + a[5] * b[0] - a[5] * b[10],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[5] - a[4] * b[4],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] + a[3] * b[6] - a[5] * b[4],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[4] * b[6] - a[5] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[3] - a[3] * b[13] - a[4] * b[2] + a[4] * b[12] + a[5] * b[1] - a[5] * b[11]
);
}			
		 
inline Mtt gp (const Dll& a, const Rvd& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4] + a[5] * b[11],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[4] * b[11] - a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[11] + a[4] * b[6] - a[5] * b[5],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5],
a[3] * b[0] - a[3] * b[7] - a[4] * b[1] + a[4] * b[8] - a[5] * b[2] + a[5] * b[9],
a[3] * b[1] - a[3] * b[8] + a[4] * b[0] - a[4] * b[7] - a[5] * b[3] + a[5] * b[10],
a[3] * b[2] - a[3] * b[9] + a[4] * b[3] - a[4] * b[10] + a[5] * b[0] - a[5] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9] + a[3] * b[5] - a[4] * b[4] + a[5] * b[11],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8] + a[3] * b[6] - a[4] * b[11] - a[5] * b[4],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7] + a[3] * b[11] + a[4] * b[6] - a[5] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[3] * b[3] - a[3] * b[10] - a[4] * b[2] + a[4] * b[9] + a[5] * b[1] - a[5] * b[8]
);
}			
		 
inline Mtt gp (const Dll& a, const Tst& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4] + a[5] * b[14],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[4] * b[14] - a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[14] + a[4] * b[6] - a[5] * b[5],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9] + a[3] * b[0] - a[3] * b[10] - a[4] * b[1] + a[4] * b[11] - a[5] * b[2] + a[5] * b[12],
 - a[0] * b[7] + a[2] * b[9] + a[3] * b[1] - a[3] * b[11] + a[4] * b[0] - a[4] * b[10] - a[5] * b[3] + a[5] * b[13],
 - a[1] * b[7] - a[2] * b[8] + a[3] * b[2] - a[3] * b[12] + a[4] * b[3] - a[4] * b[13] + a[5] * b[0] - a[5] * b[10],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[5] - a[4] * b[4] + a[5] * b[14],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] + a[3] * b[6] - a[4] * b[14] - a[5] * b[4],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[14] + a[4] * b[6] - a[5] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[3] - a[3] * b[13] - a[4] * b[2] + a[4] * b[12] + a[5] * b[1] - a[5] * b[11]
);
}			
		 
inline Mtt gp (const Dll& a, const Tvt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[6] - a[5] * b[5],
a[0] * b[5] + a[1] * b[6],
 - a[0] * b[4] + a[2] * b[6],
 - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9] - a[2] * b[14] + a[3] * b[0] - a[3] * b[10] - a[4] * b[1] + a[4] * b[11] - a[5] * b[2] + a[5] * b[12],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9] + a[3] * b[1] - a[3] * b[11] + a[4] * b[0] - a[4] * b[10] - a[5] * b[3] + a[5] * b[13],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8] + a[3] * b[2] - a[3] * b[12] + a[4] * b[3] - a[4] * b[13] + a[5] * b[0] - a[5] * b[10],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[5] - a[4] * b[4],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] + a[3] * b[6] - a[5] * b[4],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[4] * b[6] - a[5] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[3] - a[3] * b[13] - a[4] * b[2] + a[4] * b[12] + a[5] * b[1] - a[5] * b[11]
);
}			
		 
inline Mtt gp (const Dll& a, const Bst& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[6] - a[5] * b[5],
a[0] * b[5] + a[1] * b[6],
 - a[0] * b[4] + a[2] * b[6],
 - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9] + a[3] * b[0] - a[3] * b[10] - a[4] * b[1] - a[5] * b[2],
 - a[0] * b[7] + a[2] * b[9] + a[3] * b[1] + a[4] * b[0] - a[4] * b[10] - a[5] * b[3],
 - a[1] * b[7] - a[2] * b[8] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0] - a[5] * b[10],
a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[10] + a[3] * b[5] - a[4] * b[4],
a[1] * b[10] + a[3] * b[6] - a[5] * b[4],
a[2] * b[10] + a[4] * b[6] - a[5] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Dll op (const Dll& a, const Sca& b) { 
	return Dll (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
inline Dal op (const Dll& a, const Ori& b) { 
	return Dal (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0]
);
}			
		 
inline Drb op (const Dll& a, const Inf& b) { 
	return Drb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Mnk_Biv op (const Dll& a, const Mnk& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Pss_Sta op (const Dll& a, const Hyp& b) { 
	return Pss_Sta (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0]
);
}			
		 
inline Sca op (const Dll& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Cir op (const Dll& a, const Pnt& b) { 
	return Cir (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[4] - a[3] * b[1] + a[4] * b[0],
a[1] * b[4] - a[3] * b[2] + a[5] * b[0],
a[2] * b[4] - a[4] * b[2] + a[5] * b[1],
 - a[3] * b[3],
 - a[4] * b[3],
 - a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sph op (const Dll& a, const Par& b) { 
	return Sph (
a[0] * b[9] + a[3] * b[4] - a[4] * b[3],
a[1] * b[9] + a[3] * b[5] - a[5] * b[3],
a[2] * b[9] + a[4] * b[5] - a[5] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Pss op (const Dll& a, const Cir& b) { 
	return Pss (
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Sca op (const Dll& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Sph op (const Dll& a, const Sta& b) { 
	return Sph (
a[3] * b[4] - a[4] * b[3],
a[3] * b[5] - a[5] * b[3],
a[4] * b[5] - a[5] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Drt op (const Dll& a, const Drv& b) { 
	return Drt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Dll& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Dll& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Daf op (const Dll& a, const Tnv& b) { 
	return Daf (
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss op (const Dll& a, const Tnb& b) { 
	return Pss (
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Sca op (const Dll& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Dll& a, const Lin& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
inline Sca op (const Dll& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Pln op (const Dll& a, const Flp& b) { 
	return Pln (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Dll& a, const Dfp& b) { 
	return Sca (
);
}			
		 
inline Drt op (const Dll& a, const Dll& b) { 
	return Drt (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Dfp op (const Dll& a, const Dlp& b) { 
	return Dfp (
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Dfp op (const Dll& a, const Vec& b) { 
	return Dfp (
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Drt op (const Dll& a, const Biv& b) { 
	return Drt (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Sca op (const Dll& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Cir op (const Dll& a, const Aff& b) { 
	return Cir (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
 - a[3] * b[3],
 - a[4] * b[3],
 - a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sph op (const Dll& a, const Afl& b) { 
	return Sph (
a[3] * b[4] - a[4] * b[3],
a[3] * b[5] - a[5] * b[3],
a[4] * b[5] - a[5] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Pss op (const Dll& a, const Afp& b) { 
	return Pss (
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Daf op (const Dll& a, const Dap& b) { 
	return Daf (
a[0] * b[3] + a[3] * b[1] - a[4] * b[0],
a[1] * b[3] + a[3] * b[2] - a[5] * b[0],
a[2] * b[3] + a[4] * b[2] - a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Dll& a, const Daf& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Dll& a, const Dal& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Pss op (const Dll& a, const Mnv& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca ip (const Dll& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dll& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dll& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dll& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dll& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Lin ip (const Dll& a, const Pss& b) { 
	return Lin (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Dll& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dll& a, const Par& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5]
);
}			
		 
inline Pnt ip (const Dll& a, const Cir& b) { 
	return Pnt (
 - a[2] * b[9] + a[4] * b[0] + a[5] * b[1],
a[1] * b[9] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[9] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8]
);
}			
		 
inline Par ip (const Dll& a, const Sph& b) { 
	return Par (
a[5] * b[3],
 - a[4] * b[3],
a[3] * b[3],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[2] * b[4] + a[4] * b[0] + a[5] * b[1],
a[1] * b[4] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[4] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Dll& a, const Sta& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5]
);
}			
		 
inline Sca ip (const Dll& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Inf ip (const Dll& a, const Drb& b) { 
	return Inf (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Drv ip (const Dll& a, const Drt& b) { 
	return Drv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Dll& a, const Tnv& b) { 
	return Sca (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2]
);
}			
		 
inline Aff ip (const Dll& a, const Tnb& b) { 
	return Aff (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Afl ip (const Dll& a, const Tnt& b) { 
	return Afl (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Inf ip (const Dll& a, const Lin& b) { 
	return Inf (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5]
);
}			
		 
inline Flp ip (const Dll& a, const Pln& b) { 
	return Flp (
 - a[2] * b[3] + a[4] * b[0] + a[5] * b[1],
a[1] * b[3] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[3] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Dll& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Dlp ip (const Dll& a, const Dfp& b) { 
	return Dlp (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Dll& a, const Dll& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Dll& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dll& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dll& a, const Biv& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Vec ip (const Dll& a, const Tri& b) { 
	return Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Dll& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Dll& a, const Afl& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5]
);
}			
		 
inline Aff ip (const Dll& a, const Afp& b) { 
	return Aff (
 - a[2] * b[3] + a[4] * b[0] + a[5] * b[1],
a[1] * b[3] - a[3] * b[0] + a[5] * b[2],
 - a[0] * b[3] - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Sca ip (const Dll& a, const Dap& b) { 
	return Sca (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2]
);
}			
		 
inline Par ip (const Dll& a, const Daf& b) { 
	return Par (
a[5] * b[3],
 - a[4] * b[3],
a[3] * b[3],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Pnt ip (const Dll& a, const Dal& b) { 
	return Pnt (
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[3] * b[3] + a[4] * b[4] + a[5] * b[5]
);
}			
		 
inline Inf ip (const Dll& a, const Mnv& b) { 
	return Inf (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2]
);
}			
		  	
template<>
inline Dll sp (const Dll& dll, const Rot& rot) {					
					
const Rot& t1 = rot;
const Dll& t2 = dll;
Mot t3 (
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
return Dll (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Mot& mot) {					
					
const Mot& t1 = mot;
const Dll& t2 = dll;
Mot t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Dll (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Dil& dil) {					
					
const Dil& t1 = dil;
const Dll& t2 = dll;
Inf_Dal t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] + t1[1] * t2[3],
t1[0] * t2[4] + t1[1] * t2[4],
t1[0] * t2[5] + t1[1] * t2[5],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Dll (
t3[0] * t5[0] + t3[6] * t5[1],
t3[1] * t5[0] + t3[7] * t5[1],
t3[2] * t5[0] + t3[8] * t5[1],
t3[3] * t5[0] - t3[3] * t5[1],
t3[4] * t5[0] - t3[4] * t5[1],
t3[5] * t5[0] - t3[5] * t5[1]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Trv& trv) {					
					
const Trv& t1 = trv;
const Dll& t2 = dll;
Tst t3 (
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[0] * t2[0] + t1[1] * t2[4] - t1[2] * t2[3],
t1[0] * t2[1] + t1[1] * t2[5] - t1[3] * t2[3],
t1[0] * t2[2] + t1[2] * t2[5] - t1[3] * t2[4],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4],
t1[0] * t2[5],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5],
 - t1[1] * t2[4] + t1[2] * t2[3],
 - t1[1] * t2[5] + t1[3] * t2[3],
 - t1[2] * t2[5] + t1[3] * t2[4],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Dll (
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Dll& t2 = dll;
Mtd t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[5] + t1[11] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] + t1[7] * t2[5] - t1[9] * t2[3] - t1[10] * t2[4] - t1[11] * t2[0],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Dll (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[8],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[7],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] - t3[4] * t5[7] - t3[5] * t5[1] + t3[5] * t5[8] - t3[6] * t5[2] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[11] - t3[11] * t5[3] + t3[11] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] - t3[4] * t5[8] + t3[5] * t5[0] - t3[5] * t5[7] - t3[6] * t5[3] + t3[6] * t5[10] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[6] + t3[11] * t5[2] - t3[11] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] - t3[4] * t5[9] + t3[5] * t5[3] - t3[5] * t5[10] + t3[6] * t5[0] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] - t3[10] * t5[5] - t3[11] * t5[1] + t3[11] * t5[8]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Trs& trs) {					
					
const Trs& t1 = trs;
const Dll& t2 = dll;
Pln_Flp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[4] + t1[1] * t2[0] - t1[3] * t2[2],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Dll (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0],
t3[0] * t5[2] + t3[1] * t5[3] + t3[3] * t5[0],
 - t3[0] * t5[1] + t3[2] * t5[3] + t3[4] * t5[0],
 - t3[1] * t5[1] - t3[2] * t5[2] + t3[5] * t5[0]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Dll& t2 = dll;
Rtc t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] + t1[3] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5] - t1[14] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[4] - t1[5] * t2[3] + t1[7] * t2[5] + t1[14] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[3] * t2[5] - t1[6] * t2[3] - t1[7] * t2[4] - t1[14] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[4] + t1[13] * t2[5],
t1[3] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[3] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[3] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[0] * t2[4] - t1[1] * t2[3] + t1[4] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1] + t1[11] * t2[4] - t1[12] * t2[3] + t1[14] * t2[5] + t1[15] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] + t1[4] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0] + t1[11] * t2[5] - t1[13] * t2[3] - t1[14] * t2[4] - t1[15] * t2[4],
t1[1] * t2[5] - t1[2] * t2[4] + t1[4] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[12] * t2[5] - t1[13] * t2[4] + t1[14] * t2[3] + t1[15] * t2[3],
 - t1[3] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5] - t1[12] * t2[0] - t1[13] * t2[1] - t1[15] * t2[2],
 - t1[3] * t2[4] + t1[5] * t2[3] - t1[7] * t2[5] + t1[11] * t2[0] - t1[13] * t2[2] + t1[15] * t2[1],
 - t1[3] * t2[5] + t1[6] * t2[3] + t1[7] * t2[4] + t1[11] * t2[1] + t1[12] * t2[2] - t1[15] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[3],
 - t1[5] * t2[5] + t1[6] * t2[4] - t1[7] * t2[3] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Dll (
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[4] * t5[0] + t3[4] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[14] - t3[10] * t5[15] + t3[11] * t5[4] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[10] - t3[15] * t5[10],
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] - t3[4] * t5[1] + t3[4] * t5[12] + t3[8] * t5[0] - t3[8] * t5[11] - t3[9] * t5[14] + t3[9] * t5[15] - t3[10] * t5[2] + t3[10] * t5[13] + t3[11] * t5[8] + t3[12] * t5[4] - t3[13] * t5[10] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[4] * t5[2] + t3[4] * t5[13] + t3[8] * t5[14] - t3[8] * t5[15] + t3[9] * t5[0] - t3[9] * t5[11] + t3[10] * t5[1] - t3[10] * t5[12] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[4] - t3[14] * t5[8] - t3[15] * t5[8]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Dll& t2 = dll;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3] + t1[14] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3] - t1[14] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4] + t1[14] * t2[3],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[14] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[14] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[14] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[3] + t1[11] * t2[4] + t1[12] * t2[5] - t1[15] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[4] - t1[11] * t2[3] + t1[13] * t2[5] + t1[15] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[7] * t2[1] + t1[8] * t2[2] + t1[10] * t2[5] - t1[12] * t2[3] - t1[13] * t2[4] - t1[15] * t2[0],
 - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[4] + t1[5] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1] - t1[14] * t2[5],
 - t1[4] * t2[5] + t1[6] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0] + t1[14] * t2[4],
 - t1[5] * t2[5] + t1[6] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0] - t1[14] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[3]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Dll (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[15] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[15] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[15] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[15] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Dll& t2 = dll;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3] - t1[7] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[3],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4],
 - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
 - t1[4] * t2[4] + t1[5] * t2[3] - t1[7] * t2[5],
 - t1[4] * t2[5] + t1[6] * t2[3] + t1[7] * t2[4],
 - t1[5] * t2[5] + t1[6] * t2[4] - t1[7] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Dll (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[15] * t5[4],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[15] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[15] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Dll& t2 = dll;
Mtd t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[5] - t1[6] * t2[3] - t1[7] * t2[4],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[3]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Dll (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[7] + t3[10] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] + t3[8] * t5[7] + t3[9] * t5[4] - t3[10] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[7] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[4],
t3[4] * t5[0] - t3[4] * t5[4] - t3[5] * t5[1] + t3[5] * t5[5] - t3[6] * t5[2] + t3[6] * t5[6] - t3[11] * t5[3] + t3[11] * t5[7],
t3[4] * t5[1] - t3[4] * t5[5] + t3[5] * t5[0] - t3[5] * t5[4] - t3[6] * t5[3] + t3[6] * t5[7] + t3[11] * t5[2] - t3[11] * t5[6],
t3[4] * t5[2] - t3[4] * t5[6] + t3[5] * t5[3] - t3[5] * t5[7] + t3[6] * t5[0] - t3[6] * t5[4] - t3[11] * t5[1] + t3[11] * t5[5]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Dll& t2 = dll;
Tst t3 (
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[0] * t2[0] + t1[1] * t2[4] - t1[2] * t2[3],
t1[0] * t2[1] + t1[1] * t2[5] - t1[3] * t2[3],
t1[0] * t2[2] + t1[2] * t2[5] - t1[3] * t2[4],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[3] + t1[4] * t2[3],
t1[0] * t2[4] + t1[4] * t2[4],
t1[0] * t2[5] + t1[4] * t2[5],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5],
 - t1[1] * t2[4] + t1[2] * t2[3] + t1[4] * t2[0],
 - t1[1] * t2[5] + t1[3] * t2[3] + t1[4] * t2[1],
 - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Dll (
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1] + t3[11] * t5[4],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1] + t3[12] * t5[4],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2] + t3[13] * t5[4],
t3[7] * t5[0] - t3[7] * t5[4],
t3[8] * t5[0] - t3[8] * t5[4],
t3[9] * t5[0] - t3[9] * t5[4]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Dll& t2 = dll;
Inf_Cir t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[3],
t1[0] * t2[4] + t1[1] * t2[0] - t1[3] * t2[2] + t1[4] * t2[4],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[2] + t1[4] * t2[5],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Dll (
t3[0] * t5[0] + t3[6] * t5[4],
t3[1] * t5[0] + t3[7] * t5[4],
t3[2] * t5[0] + t3[8] * t5[4],
t3[0] * t5[2] + t3[1] * t5[3] + t3[3] * t5[0] - t3[3] * t5[4] + t3[6] * t5[2] + t3[7] * t5[3],
 - t3[0] * t5[1] + t3[2] * t5[3] + t3[4] * t5[0] - t3[4] * t5[4] - t3[6] * t5[1] + t3[8] * t5[3],
 - t3[1] * t5[1] - t3[2] * t5[2] + t3[5] * t5[0] - t3[5] * t5[4] - t3[7] * t5[1] - t3[8] * t5[2]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Trt& trt) {					
					
const Trt& t1 = trt;
const Dll& t2 = dll;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4],
 - t1[5] * t2[0] - t1[6] * t2[1],
t1[4] * t2[0] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[2],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[3] + t1[11] * t2[4] + t1[12] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[4] - t1[11] * t2[3] + t1[13] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[7] * t2[1] + t1[8] * t2[2] + t1[10] * t2[5] - t1[12] * t2[3] - t1[13] * t2[4],
 - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[4] + t1[5] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[4] * t2[5] + t1[6] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
 - t1[5] * t2[5] + t1[6] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[3]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Dll (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Dll& t2 = dll;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3] + t1[11] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3] - t1[11] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4] + t1[11] * t2[3],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[11] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[11] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[11] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[7] * t2[5] - t1[9] * t2[3] - t1[10] * t2[4],
 - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5] - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
 - t1[4] * t2[4] + t1[5] * t2[3] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1] - t1[11] * t2[5],
 - t1[4] * t2[5] + t1[6] * t2[3] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0] + t1[11] * t2[4],
 - t1[5] * t2[5] + t1[6] * t2[4] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] - t1[11] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Dll (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[4],
t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[15] * t5[3] + t3[15] * t5[10],
t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[15] * t5[2] - t3[15] * t5[9],
t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] - t3[15] * t5[1] + t3[15] * t5[8]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Tst& tst) {					
					
const Tst& t1 = tst;
const Dll& t2 = dll;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3] + t1[14] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3] - t1[14] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4] + t1[14] * t2[3],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[14] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[14] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[14] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[3] + t1[11] * t2[4] + t1[12] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[4] - t1[11] * t2[3] + t1[13] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[7] * t2[1] + t1[8] * t2[2] + t1[10] * t2[5] - t1[12] * t2[3] - t1[13] * t2[4],
 - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[4] + t1[5] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1] - t1[14] * t2[5],
 - t1[4] * t2[5] + t1[6] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0] + t1[14] * t2[4],
 - t1[5] * t2[5] + t1[6] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0] - t1[14] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[3]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Dll (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Dll& t2 = dll;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4],
 - t1[5] * t2[0] - t1[6] * t2[1],
t1[4] * t2[0] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[2],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[3] + t1[11] * t2[4] + t1[12] * t2[5] - t1[14] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[4] - t1[11] * t2[3] + t1[13] * t2[5] + t1[14] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[7] * t2[1] + t1[8] * t2[2] + t1[10] * t2[5] - t1[12] * t2[3] - t1[13] * t2[4] - t1[14] * t2[0],
 - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[4] + t1[5] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[4] * t2[5] + t1[6] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
 - t1[5] * t2[5] + t1[6] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[3]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Dll (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[14] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[14] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[14] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[14] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Dll sp (const Dll& dll, const Bst& bst) {					
					
const Bst& t1 = bst;
const Dll& t2 = dll;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4],
 - t1[5] * t2[0] - t1[6] * t2[1],
t1[4] * t2[0] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[2],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[8] * t2[0] - t1[9] * t2[1] + t1[10] * t2[3],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[4],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[7] * t2[1] + t1[8] * t2[2] + t1[10] * t2[5],
 - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
 - t1[4] * t2[4] + t1[5] * t2[3] + t1[10] * t2[0],
 - t1[4] * t2[5] + t1[6] * t2[3] + t1[10] * t2[1],
 - t1[5] * t2[5] + t1[6] * t2[4] + t1[10] * t2[2],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Dll (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[11] * t5[10] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[12] * t5[10] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] - t3[9] * t5[2] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Dll re (const Dll& dll, const Vec& vec) {					
					
const Vec& t1 = vec;
const Dll& t2 = dll;
Dll t3 = involute( t2);
Lin_Pln t4 (
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
return Dll (
t4[0] * t6[1] - t4[1] * t6[0] + t4[7] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[7] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[7] * t6[0],
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1]
);

}
		
	
	  	
template<>
inline Dll re (const Dll& dll, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Dll& t2 = dll;
Dll t3 = involute( t2);
Lin_Pln t4 (
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[0] * t3[3] + t1[1] * t3[4] + t1[2] * t3[5],
t1[0] * t3[4] - t1[1] * t3[3] + t1[3] * t3[0],
t1[0] * t3[5] - t1[2] * t3[3] + t1[3] * t3[1],
t1[1] * t3[5] - t1[2] * t3[4] + t1[3] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Dll (
t4[0] * t6[1] - t4[1] * t6[0] + t4[7] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[7] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[7] * t6[0],
t4[0] * t6[3] - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
t4[1] * t6[3] - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
t4[2] * t6[3] - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1]
);

}
		
	
	  	
template<>
inline Dll re (const Dll& dll, const Pln& pln) {					
					
const Pln& t1 = pln;
const Dll& t2 = dll;
Dll t3 = involute( t2);
Lin_Dlp t4 (
t1[0] * t3[4] + t1[1] * t3[5] - t1[3] * t3[2],
 - t1[0] * t3[3] + t1[2] * t3[5] + t1[3] * t3[1],
 - t1[1] * t3[3] - t1[2] * t3[4] - t1[3] * t3[0],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Dll (
t4[3] * t6[0] - t4[5] * t6[2] + t4[6] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[6] * t6[0],
t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0],
t4[1] * t6[0] + t4[2] * t6[1] - t4[6] * t6[3] + t4[7] * t6[2],
 - t4[0] * t6[0] + t4[2] * t6[2] + t4[5] * t6[3] - t4[7] * t6[1],
 - t4[0] * t6[1] - t4[1] * t6[2] - t4[4] * t6[3] + t4[7] * t6[0]
);

}
		
	
	  	
template<>
inline Dll re (const Dll& dll, const Lin& lin) {					
					
const Lin& t1 = lin;
const Dll& t2 = dll;
Dll t3 = involute( t2);
Lin_Dll t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[3] + t1[4] * t3[4] + t1[5] * t3[5],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[4] - t1[4] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] + t1[3] * t3[5] - t1[5] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[4] * t3[5] - t1[5] * t3[4],
 - t1[4] * t3[0] - t1[5] * t3[1],
t1[3] * t3[0] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[2],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Dll (
t4[4] * t6[4] - t4[5] * t6[3] + t4[7] * t6[5],
t4[4] * t6[5] - t4[6] * t6[3] - t4[7] * t6[4],
t4[5] * t6[5] - t4[6] * t6[4] + t4[7] * t6[3],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] - t4[6] * t6[2] + t4[7] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] - t4[7] * t6[0]
);

}
		
	
	  	
template<>
inline Dll re (const Dll& dll, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Dll& t2 = dll;
Dll t3 = involute( t2);
Pnt_Dll t4 (
 - t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[3],
t1[0] * t3[0] - t1[2] * t3[2] + t1[3] * t3[4],
t1[0] * t3[1] + t1[1] * t3[2] + t1[3] * t3[5],
t1[0] * t3[3] + t1[1] * t3[4] + t1[2] * t3[5],
t1[3] * t3[0],
t1[3] * t3[1],
t1[3] * t3[2],
t1[0] * t3[4] - t1[1] * t3[3] + t1[4] * t3[0],
t1[0] * t3[5] - t1[2] * t3[3] + t1[4] * t3[1],
t1[1] * t3[5] - t1[2] * t3[4] + t1[4] * t3[2],
 - t1[3] * t3[3],
 - t1[3] * t3[4],
 - t1[3] * t3[5],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Dll (
t4[0] * t6[1] - t4[1] * t6[0] - t4[4] * t6[4] - t4[7] * t6[3] + t4[13] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[5] * t6[4] - t4[8] * t6[3] - t4[13] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[6] * t6[4] - t4[9] * t6[3] + t4[13] * t6[0],
t4[0] * t6[4] - t4[3] * t6[0] - t4[7] * t6[1] - t4[8] * t6[2] + t4[10] * t6[4],
t4[1] * t6[4] - t4[3] * t6[1] + t4[7] * t6[0] - t4[9] * t6[2] + t4[11] * t6[4],
t4[2] * t6[4] - t4[3] * t6[2] + t4[8] * t6[0] + t4[9] * t6[1] + t4[12] * t6[4]
);

}
		
	
	  	
template<>
inline Dll re (const Dll& dll, const Par& par) {					
					
const Par& t1 = par;
const Dll& t2 = dll;
Dll t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[3] + t1[4] * t3[4] + t1[5] * t3[5],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[4] - t1[4] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] + t1[3] * t3[5] - t1[5] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[4] * t3[5] - t1[5] * t3[4],
 - t1[4] * t3[0] - t1[5] * t3[1],
t1[3] * t3[0] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[2],
t1[0] * t3[4] + t1[1] * t3[5] - t1[7] * t3[0] - t1[8] * t3[1] + t1[9] * t3[3],
 - t1[0] * t3[3] + t1[2] * t3[5] + t1[6] * t3[0] - t1[8] * t3[2] + t1[9] * t3[4],
 - t1[1] * t3[3] - t1[2] * t3[4] + t1[6] * t3[1] + t1[7] * t3[2] + t1[9] * t3[5],
 - t1[3] * t3[3] - t1[4] * t3[4] - t1[5] * t3[5],
 - t1[3] * t3[4] + t1[4] * t3[3] + t1[9] * t3[0],
 - t1[3] * t3[5] + t1[5] * t3[3] + t1[9] * t3[1],
 - t1[4] * t3[5] + t1[5] * t3[4] + t1[9] * t3[2],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3] + t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Dll (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[7] - t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[11] * t6[9] + t4[14] * t6[8] + t4[15] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[8] - t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[12] * t6[9] - t4[14] * t6[7] - t4[15] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[8] - t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[13] * t6[9] + t4[14] * t6[6] + t4[15] * t6[3],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[7] * t6[9] - t4[8] * t6[0] - t4[9] * t6[1] + t4[10] * t6[6] + t4[11] * t6[7] + t4[12] * t6[8] - t4[15] * t6[2],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[8] + t4[7] * t6[0] - t4[8] * t6[9] - t4[9] * t6[2] + t4[10] * t6[7] - t4[11] * t6[6] + t4[13] * t6[8] + t4[15] * t6[1],
t4[0] * t6[8] - t4[2] * t6[6] - t4[3] * t6[7] + t4[7] * t6[1] + t4[8] * t6[2] - t4[9] * t6[9] + t4[10] * t6[8] - t4[12] * t6[6] - t4[13] * t6[7] - t4[15] * t6[0]
);

}
		
	
	  	
template<>
inline Dll re (const Dll& dll, const Cir& cir) {					
					
const Cir& t1 = cir;
const Dll& t2 = dll;
Dll t3 = involute( t2);
Rtc t4 (
t1[0] * t3[4] + t1[1] * t3[5] - t1[9] * t3[2],
 - t1[0] * t3[3] + t1[2] * t3[5] + t1[9] * t3[1],
 - t1[1] * t3[3] - t1[2] * t3[4] - t1[9] * t3[0],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2] + t1[6] * t3[3] + t1[7] * t3[4] + t1[8] * t3[5],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
 - t1[4] * t3[2] + t1[5] * t3[1] + t1[6] * t3[4] - t1[7] * t3[3] + t1[9] * t3[5],
t1[3] * t3[2] - t1[5] * t3[0] + t1[6] * t3[5] - t1[8] * t3[3] - t1[9] * t3[4],
 - t1[3] * t3[1] + t1[4] * t3[0] + t1[7] * t3[5] - t1[8] * t3[4] + t1[9] * t3[3],
 - t1[0] * t3[4] - t1[1] * t3[5] - t1[7] * t3[0] - t1[8] * t3[1],
t1[0] * t3[3] - t1[2] * t3[5] + t1[6] * t3[0] - t1[8] * t3[2],
t1[1] * t3[3] + t1[2] * t3[4] + t1[6] * t3[1] + t1[7] * t3[2],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3],
 - t1[0] * t3[5] + t1[1] * t3[4] - t1[2] * t3[3] + t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Dll (
t4[2] * t6[9] - t4[3] * t6[3] - t4[4] * t6[0] + t4[6] * t6[5] - t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[15] * t6[8],
 - t4[1] * t6[9] - t4[3] * t6[4] - t4[4] * t6[1] - t4[5] * t6[5] + t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[15] * t6[7],
t4[0] * t6[9] - t4[3] * t6[5] - t4[4] * t6[2] + t4[5] * t6[4] - t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[12] * t6[8] - t4[13] * t6[7] + t4[15] * t6[6],
 - t4[1] * t6[3] - t4[2] * t6[4] + t4[4] * t6[6] + t4[8] * t6[7] + t4[9] * t6[8] + t4[10] * t6[9] - t4[12] * t6[3] - t4[13] * t6[4] - t4[14] * t6[5] - t4[15] * t6[5],
t4[0] * t6[3] - t4[2] * t6[5] + t4[4] * t6[7] - t4[8] * t6[6] - t4[9] * t6[9] + t4[10] * t6[8] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[4] + t4[15] * t6[4],
t4[0] * t6[4] + t4[1] * t6[5] + t4[4] * t6[8] + t4[8] * t6[9] - t4[9] * t6[6] - t4[10] * t6[7] + t4[11] * t6[4] + t4[12] * t6[5] - t4[14] * t6[3] - t4[15] * t6[3]
);

}
		
	
	  	
template<>
inline Dll re (const Dll& dll, const Sph& sph) {					
					
const Sph& t1 = sph;
const Dll& t2 = dll;
Dll t3 = involute( t2);
Pnt_Lin t4 (
t1[3] * t3[5],
 - t1[3] * t3[4],
t1[3] * t3[3],
 - t1[3] * t3[2],
t1[3] * t3[1],
 - t1[3] * t3[0],
t1[0] * t3[4] + t1[1] * t3[5] - t1[4] * t3[2],
 - t1[0] * t3[3] + t1[2] * t3[5] + t1[4] * t3[1],
 - t1[1] * t3[3] - t1[2] * t3[4] - t1[4] * t3[0],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1] - t1[3] * t3[5],
t1[0] * t3[2] - t1[2] * t3[0] + t1[3] * t3[4],
 - t1[0] * t3[1] + t1[1] * t3[0] - t1[3] * t3[3],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[3]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Dll (
t4[5] * t6[4] + t4[8] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1],
 - t4[4] * t6[4] - t4[7] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0],
t4[3] * t6[4] + t4[6] * t6[3] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0],
 - t4[2] * t6[4] + t4[7] * t6[0] + t4[8] * t6[1] - t4[12] * t6[4] + t4[13] * t6[2],
t4[1] * t6[4] - t4[6] * t6[0] + t4[8] * t6[2] + t4[11] * t6[4] - t4[13] * t6[1],
 - t4[0] * t6[4] - t4[6] * t6[1] - t4[7] * t6[2] - t4[10] * t6[4] + t4[13] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	