		#ifndef DLL_H_INCLUDED
		#define DLL_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
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
		 
inline Flp_Dll gp (const Dll& a, const Flp& b) { 
	return Flp_Dll (
a[0] * b[1] + a[1] * b[2] - a[3] * b[3],
 - a[0] * b[0] + a[2] * b[2] - a[4] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[5] * b[3],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
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
		 
inline Sta_Drt gp (const Dll& a, const Dil& b) { 
	return Sta_Drt (
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
		 
inline Pss_Afl op (const Dll& a, const Ori& b) { 
	return Pss_Afl (
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
		 
inline Pss_Aff op (const Dll& a, const Tnv& b) { 
	return Pss_Aff (
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
		 
inline Drt op (const Dll& a, const Dll& b) { 
	return Drt (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Pss_Flp op (const Dll& a, const Dlp& b) { 
	return Pss_Flp (
a[0] * b[3] - a[3] * b[1] + a[4] * b[0],
a[1] * b[3] - a[3] * b[2] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[5] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Pss_Flp op (const Dll& a, const Vec& b) { 
	return Pss_Flp (
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
		
	
	  	
inline Dll sp (const Dll& dll, const Dil& dil) {					
					
const Dil& t1 = dil;
const Dll& t2 = dll;
Sta_Drt t3 (
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
		
	
		
	} //vsr::
	#endif
	