		#ifndef LIN_H_INCLUDED
		#define LIN_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Lin gp (const Lin& a, const Sca& b) { 
	return Lin (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
inline Ori_Lin gp (const Lin& a, const Ori& b) { 
	return Ori_Lin (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Drv gp (const Lin& a, const Inf& b) { 
	return Drv (
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
inline Mnk_Lin gp (const Lin& a, const Mnk& b) { 
	return Mnk_Lin (
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Hyp_Lin gp (const Lin& a, const Hyp& b) { 
	return Hyp_Lin (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
a[3] * b[1],
a[4] * b[1],
a[5] * b[1],
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Dll gp (const Lin& a, const Pss& b) { 
	return Dll (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Pnt_Lin gp (const Lin& a, const Pnt& b) { 
	return Pnt_Lin (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[3] * b[3],
 - a[4] * b[3],
 - a[5] * b[3],
 - a[0] * b[1] - a[1] * b[2] + a[3] * b[4],
a[0] * b[0] - a[2] * b[2] + a[4] * b[4],
a[1] * b[0] + a[2] * b[1] + a[5] * b[4],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] - a[4] * b[0],
 - a[1] * b[3] + a[3] * b[2] - a[5] * b[0],
 - a[2] * b[3] + a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Rtc gp (const Lin& a, const Par& b) { 
	return Rtc (
a[0] * b[4] + a[1] * b[5] + a[3] * b[9],
 - a[0] * b[3] + a[2] * b[5] + a[4] * b[9],
 - a[1] * b[3] - a[2] * b[4] + a[5] * b[9],
 - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8],
 - a[3] * b[4] + a[4] * b[3],
 - a[3] * b[5] + a[5] * b[3],
 - a[4] * b[5] + a[5] * b[4],
 - a[0] * b[9] - a[1] * b[2] + a[2] * b[1] + a[3] * b[7] - a[4] * b[6],
a[0] * b[2] - a[1] * b[9] - a[2] * b[0] + a[3] * b[8] - a[5] * b[6],
 - a[0] * b[1] + a[1] * b[0] - a[2] * b[9] + a[4] * b[8] - a[5] * b[7],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Mtt gp (const Lin& a, const Cir& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8],
a[1] * b[2] - a[2] * b[1] + a[3] * b[7] - a[4] * b[6],
 - a[0] * b[2] + a[2] * b[0] + a[3] * b[8] - a[5] * b[6],
a[0] * b[1] - a[1] * b[0] + a[4] * b[8] - a[5] * b[7],
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[4] * b[3] - a[5] * b[4],
 - a[0] * b[6] - a[1] * b[9] + a[2] * b[8] + a[3] * b[3] - a[5] * b[5],
a[0] * b[9] - a[1] * b[6] - a[2] * b[7] + a[3] * b[4] + a[4] * b[5],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1] + a[5] * b[9],
 - a[0] * b[2] + a[2] * b[0] - a[4] * b[9],
a[0] * b[1] - a[1] * b[0] + a[3] * b[9],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3]
);
}			
		 
inline Pnt_Dll gp (const Lin& a, const Sph& b) { 
	return Pnt_Dll (
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
 - a[5] * b[3],
a[4] * b[3],
 - a[3] * b[3],
a[1] * b[2] - a[2] * b[1] + a[5] * b[4],
 - a[0] * b[2] + a[2] * b[0] - a[4] * b[4],
a[0] * b[1] - a[1] * b[0] + a[3] * b[4],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Rtc gp (const Lin& a, const Sta& b) { 
	return Rtc (
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
 - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8],
 - a[3] * b[4] + a[4] * b[3],
 - a[3] * b[5] + a[5] * b[3],
 - a[4] * b[5] + a[5] * b[4],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[7] - a[4] * b[6],
a[0] * b[2] - a[2] * b[0] + a[3] * b[8] - a[5] * b[6],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[8] - a[5] * b[7],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Drv_Lin gp (const Lin& a, const Drv& b) { 
	return Drv_Lin (
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1]
);
}			
		 
inline Drv_Pln gp (const Lin& a, const Drb& b) { 
	return Drv_Pln (
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Drb gp (const Lin& a, const Drt& b) { 
	return Drb (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0]
);
}			
		 
inline Par_Tnb gp (const Lin& a, const Tnv& b) { 
	return Par_Tnb (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[3] * b[1] + a[4] * b[0],
 - a[3] * b[2] + a[5] * b[0],
 - a[4] * b[2] + a[5] * b[1],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Rvd gp (const Lin& a, const Tnb& b) { 
	return Rvd (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Ori_Sta gp (const Lin& a, const Tnt& b) { 
	return Ori_Sta (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Mot gp (const Lin& a, const Lin& b) { 
	return Mot (
a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
a[3] * b[4] - a[4] * b[3],
a[3] * b[5] - a[5] * b[3],
a[4] * b[5] - a[5] * b[4],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Lin_Pln gp (const Lin& a, const Pln& b) { 
	return Lin_Pln (
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1] + a[5] * b[3],
 - a[0] * b[2] + a[2] * b[0] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[3],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Lin_Flp gp (const Lin& a, const Flp& b) { 
	return Lin_Flp (
a[3] * b[3],
a[4] * b[3],
a[5] * b[3],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] - a[4] * b[0],
 - a[1] * b[3] + a[3] * b[2] - a[5] * b[0],
 - a[2] * b[3] + a[4] * b[2] - a[5] * b[1]
);
}			
		 
inline Lin_Dll gp (const Lin& a, const Dll& b) { 
	return Lin_Dll (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[3] + a[4] * b[4] + a[5] * b[5],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[4] - a[4] * b[3],
a[0] * b[2] - a[2] * b[0] + a[3] * b[5] - a[5] * b[3],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[5] - a[5] * b[4],
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Lin_Dlp gp (const Lin& a, const Dlp& b) { 
	return Lin_Dlp (
 - a[0] * b[1] - a[1] * b[2] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[4] * b[3],
a[1] * b[0] + a[2] * b[1] + a[5] * b[3],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Lin_Dlp gp (const Lin& a, const Vec& b) { 
	return Lin_Dlp (
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
		 
inline Lin_Dll gp (const Lin& a, const Biv& b) { 
	return Lin_Dll (
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
		 
inline Mnk_Dll gp (const Lin& a, const Tri& b) { 
	return Mnk_Dll (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0]
);
}			
		 
inline Pnt_Lin gp (const Lin& a, const Aff& b) { 
	return Pnt_Lin (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[3] * b[3],
 - a[4] * b[3],
 - a[5] * b[3],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] - a[4] * b[0],
 - a[1] * b[3] + a[3] * b[2] - a[5] * b[0],
 - a[2] * b[3] + a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Rtc gp (const Lin& a, const Afl& b) { 
	return Rtc (
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
 - a[3] * b[3] - a[4] * b[4] - a[5] * b[5],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[4] + a[4] * b[3],
 - a[3] * b[5] + a[5] * b[3],
 - a[4] * b[5] + a[5] * b[4],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5] - a[4] * b[0] - a[5] * b[1],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[0] - a[5] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[1] + a[4] * b[2],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Tst gp (const Lin& a, const Afp& b) { 
	return Tst (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
a[4] * b[0] + a[5] * b[1],
 - a[3] * b[0] + a[5] * b[2],
 - a[3] * b[1] - a[4] * b[2],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1] + a[5] * b[3],
 - a[0] * b[2] + a[2] * b[0] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[3],
 - a[3] * b[2] + a[4] * b[1] - a[5] * b[0]
);
}			
		 
inline Lin_Dll gp (const Lin& a, const Rot& b) { 
	return Lin_Dll (
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
		 
inline Lin_Dll gp (const Lin& a, const Mot& b) { 
	return Lin_Dll (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[5] - a[4] * b[4] + a[5] * b[7],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[6] - a[4] * b[7] - a[5] * b[4],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[7] + a[4] * b[6] - a[5] * b[5],
a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Inf_Sta gp (const Lin& a, const Dil& b) { 
	return Inf_Sta (
a[3] * b[1],
a[4] * b[1],
a[5] * b[1],
a[0] * b[0] - a[0] * b[1],
a[1] * b[0] - a[1] * b[1],
a[2] * b[0] - a[2] * b[1],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
inline Par_Afp gp (const Lin& a, const Trv& b) { 
	return Par_Afp (
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3],
 - a[3] * b[2] + a[4] * b[1],
 - a[3] * b[3] + a[5] * b[1],
 - a[4] * b[3] + a[5] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[2] + a[1] * b[3] + a[3] * b[0],
 - a[0] * b[1] + a[2] * b[3] + a[4] * b[0],
 - a[1] * b[1] - a[2] * b[2] + a[5] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Par_Drb gp (const Lin& a, const Mtd& b) { 
	return Par_Drb (
a[3] * b[7] - a[4] * b[8] - a[5] * b[9],
a[3] * b[8] + a[4] * b[7] - a[5] * b[10],
a[3] * b[9] + a[4] * b[10] + a[5] * b[7],
 - a[0] * b[1] + a[0] * b[8] - a[1] * b[2] + a[1] * b[9] - a[2] * b[3] + a[2] * b[10] + a[3] * b[4] + a[4] * b[5] + a[5] * b[6],
a[0] * b[0] - a[0] * b[7] - a[1] * b[3] + a[1] * b[10] + a[2] * b[2] - a[2] * b[9] + a[3] * b[5] - a[4] * b[4] + a[5] * b[11],
a[0] * b[3] - a[0] * b[10] + a[1] * b[0] - a[1] * b[7] - a[2] * b[1] + a[2] * b[8] + a[3] * b[6] - a[4] * b[11] - a[5] * b[4],
 - a[0] * b[2] + a[0] * b[9] + a[1] * b[1] - a[1] * b[8] + a[2] * b[0] - a[2] * b[7] + a[3] * b[11] + a[4] * b[6] - a[5] * b[5],
a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[3] * b[10] - a[4] * b[9] + a[5] * b[8],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Flp_Dlp gp (const Lin& a, const Trs& b) { 
	return Flp_Dlp (
a[3] * b[1] + a[4] * b[2] + a[5] * b[3],
a[0] * b[0] + a[3] * b[2] - a[4] * b[1],
a[1] * b[0] + a[3] * b[3] - a[5] * b[1],
a[2] * b[0] + a[4] * b[3] - a[5] * b[2],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
inline Mtt gp (const Lin& a, const Rtc& b) { 
	return Mtt (
a[0] * b[5] + a[1] * b[6] + a[2] * b[7] + a[3] * b[11] + a[4] * b[12] + a[5] * b[13],
 - a[0] * b[3] + a[1] * b[7] - a[2] * b[6] + a[3] * b[12] - a[4] * b[11] + a[5] * b[15],
 - a[0] * b[7] - a[1] * b[3] + a[2] * b[5] + a[3] * b[13] - a[4] * b[15] - a[5] * b[11],
a[0] * b[6] - a[1] * b[5] - a[2] * b[3] + a[3] * b[15] + a[4] * b[13] - a[5] * b[12],
 - a[3] * b[3] + a[4] * b[5] + a[5] * b[6],
 - a[3] * b[5] - a[4] * b[3] + a[5] * b[7],
 - a[3] * b[6] - a[4] * b[7] - a[5] * b[3],
 - a[0] * b[1] + a[0] * b[12] - a[1] * b[2] + a[1] * b[13] + a[2] * b[14] - a[2] * b[15] + a[3] * b[4] - a[4] * b[8] - a[5] * b[9],
a[0] * b[0] - a[0] * b[11] - a[1] * b[14] + a[1] * b[15] - a[2] * b[2] + a[2] * b[13] + a[3] * b[8] + a[4] * b[4] - a[5] * b[10],
a[0] * b[14] - a[0] * b[15] + a[1] * b[0] - a[1] * b[11] + a[2] * b[1] - a[2] * b[12] + a[3] * b[9] + a[4] * b[10] + a[5] * b[4],
a[0] * b[5] + a[1] * b[6] + a[2] * b[7] + a[3] * b[0] + a[4] * b[1] + a[5] * b[2],
 - a[0] * b[3] + a[1] * b[7] - a[2] * b[6] + a[3] * b[1] - a[4] * b[0] + a[5] * b[14],
 - a[0] * b[7] - a[1] * b[3] + a[2] * b[5] + a[3] * b[2] - a[4] * b[14] - a[5] * b[0],
a[0] * b[6] - a[1] * b[5] - a[2] * b[3] + a[3] * b[14] + a[4] * b[2] - a[5] * b[1],
 - a[3] * b[7] + a[4] * b[6] - a[5] * b[5],
 - a[0] * b[2] + a[0] * b[13] + a[1] * b[1] - a[1] * b[12] - a[2] * b[0] + a[2] * b[11] + a[3] * b[10] - a[4] * b[9] + a[5] * b[8]
);
}			
		 
inline Rtc gp (const Lin& a, const Mtt& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] - a[2] * b[14] + a[3] * b[10] - a[4] * b[11] - a[5] * b[12],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[11] + a[4] * b[10] - a[5] * b[13],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5] + a[3] * b[12] + a[4] * b[13] + a[5] * b[10],
 - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
 - a[0] * b[1] + a[0] * b[11] - a[1] * b[2] + a[1] * b[12] - a[2] * b[3] + a[2] * b[13] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
 - a[3] * b[5] + a[4] * b[4] - a[5] * b[14],
 - a[3] * b[6] + a[4] * b[14] + a[5] * b[4],
 - a[3] * b[14] - a[4] * b[6] + a[5] * b[5],
a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[1] * b[13] + a[2] * b[2] - a[2] * b[12] + a[3] * b[8] - a[4] * b[7] + a[5] * b[15],
a[0] * b[3] - a[0] * b[13] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] + a[2] * b[11] + a[3] * b[9] - a[4] * b[15] - a[5] * b[7],
 - a[0] * b[2] + a[0] * b[12] + a[1] * b[1] - a[1] * b[11] + a[2] * b[0] - a[2] * b[10] + a[3] * b[15] + a[4] * b[9] - a[5] * b[8],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[13] - a[4] * b[12] + a[5] * b[11],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Rtc gp (const Lin& a, const Rtt& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] - a[2] * b[7],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5],
 - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
 - a[3] * b[5] + a[4] * b[4] - a[5] * b[7],
 - a[3] * b[6] + a[4] * b[7] + a[5] * b[4],
 - a[3] * b[7] - a[4] * b[6] + a[5] * b[5],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Par_Drb gp (const Lin& a, const Rtd& b) { 
	return Par_Drb (
a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
a[3] * b[5] + a[4] * b[4] - a[5] * b[7],
a[3] * b[6] + a[4] * b[7] + a[5] * b[4],
 - a[0] * b[1] + a[0] * b[5] - a[1] * b[2] + a[1] * b[6] - a[2] * b[3] + a[2] * b[7],
a[0] * b[0] - a[0] * b[4] - a[1] * b[3] + a[1] * b[7] + a[2] * b[2] - a[2] * b[6],
a[0] * b[3] - a[0] * b[7] + a[1] * b[0] - a[1] * b[4] - a[2] * b[1] + a[2] * b[5],
 - a[0] * b[2] + a[0] * b[6] + a[1] * b[1] - a[1] * b[5] + a[2] * b[0] - a[2] * b[4],
a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[3] * b[7] - a[4] * b[6] + a[5] * b[5],
a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Par_Afp gp (const Lin& a, const Tvd& b) { 
	return Par_Afp (
a[0] * b[2] + a[1] * b[3] + a[3] * b[4],
 - a[0] * b[1] + a[2] * b[3] + a[4] * b[4],
 - a[1] * b[1] - a[2] * b[2] + a[5] * b[4],
 - a[3] * b[1] - a[4] * b[2] - a[5] * b[3],
 - a[3] * b[2] + a[4] * b[1],
 - a[3] * b[3] + a[5] * b[1],
 - a[4] * b[3] + a[5] * b[2],
a[0] * b[0] - a[0] * b[4],
a[1] * b[0] - a[1] * b[4],
a[2] * b[0] - a[2] * b[4],
a[0] * b[2] + a[1] * b[3] + a[3] * b[0],
 - a[0] * b[1] + a[2] * b[3] + a[4] * b[0],
 - a[1] * b[1] - a[2] * b[2] + a[5] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
inline Inf_Par gp (const Lin& a, const Tsd& b) { 
	return Inf_Par (
a[3] * b[4],
a[4] * b[4],
a[5] * b[4],
a[3] * b[1] + a[4] * b[2] + a[5] * b[3],
a[0] * b[0] - a[0] * b[4] + a[3] * b[2] - a[4] * b[1],
a[1] * b[0] - a[1] * b[4] + a[3] * b[3] - a[5] * b[1],
a[2] * b[0] - a[2] * b[4] + a[4] * b[3] - a[5] * b[2],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
inline Rtc gp (const Lin& a, const Trt& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] + a[3] * b[10] - a[4] * b[11] - a[5] * b[12],
 - a[0] * b[4] + a[2] * b[6] + a[3] * b[11] + a[4] * b[10] - a[5] * b[13],
 - a[1] * b[4] - a[2] * b[5] + a[3] * b[12] + a[4] * b[13] + a[5] * b[10],
 - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
 - a[0] * b[1] + a[0] * b[11] - a[1] * b[2] + a[1] * b[12] - a[2] * b[3] + a[2] * b[13] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
 - a[3] * b[5] + a[4] * b[4],
 - a[3] * b[6] + a[5] * b[4],
 - a[4] * b[6] + a[5] * b[5],
a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[1] * b[13] + a[2] * b[2] - a[2] * b[12] + a[3] * b[8] - a[4] * b[7],
a[0] * b[3] - a[0] * b[13] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] + a[2] * b[11] + a[3] * b[9] - a[5] * b[7],
 - a[0] * b[2] + a[0] * b[12] + a[1] * b[1] - a[1] * b[11] + a[2] * b[0] - a[2] * b[10] + a[4] * b[9] - a[5] * b[8],
a[0] * b[5] + a[1] * b[6] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[0] * b[4] + a[2] * b[6] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
 - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[13] - a[4] * b[12] + a[5] * b[11],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Rtc gp (const Lin& a, const Rvd& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] + a[3] * b[7] - a[4] * b[8] - a[5] * b[9],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[3] * b[8] + a[4] * b[7] - a[5] * b[10],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] + a[3] * b[9] + a[4] * b[10] + a[5] * b[7],
 - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
 - a[0] * b[1] + a[0] * b[8] - a[1] * b[2] + a[1] * b[9] - a[2] * b[3] + a[2] * b[10],
 - a[3] * b[5] + a[4] * b[4] - a[5] * b[11],
 - a[3] * b[6] + a[4] * b[11] + a[5] * b[4],
 - a[3] * b[11] - a[4] * b[6] + a[5] * b[5],
a[0] * b[0] - a[0] * b[7] - a[1] * b[3] + a[1] * b[10] + a[2] * b[2] - a[2] * b[9],
a[0] * b[3] - a[0] * b[10] + a[1] * b[0] - a[1] * b[7] - a[2] * b[1] + a[2] * b[8],
 - a[0] * b[2] + a[0] * b[9] + a[1] * b[1] - a[1] * b[8] + a[2] * b[0] - a[2] * b[7],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[10] - a[4] * b[9] + a[5] * b[8],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Rtc gp (const Lin& a, const Tst& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] - a[2] * b[14] + a[3] * b[10] - a[4] * b[11] - a[5] * b[12],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[11] + a[4] * b[10] - a[5] * b[13],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5] + a[3] * b[12] + a[4] * b[13] + a[5] * b[10],
 - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
 - a[0] * b[1] + a[0] * b[11] - a[1] * b[2] + a[1] * b[12] - a[2] * b[3] + a[2] * b[13] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
 - a[3] * b[5] + a[4] * b[4] - a[5] * b[14],
 - a[3] * b[6] + a[4] * b[14] + a[5] * b[4],
 - a[3] * b[14] - a[4] * b[6] + a[5] * b[5],
a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[1] * b[13] + a[2] * b[2] - a[2] * b[12] + a[3] * b[8] - a[4] * b[7],
a[0] * b[3] - a[0] * b[13] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] + a[2] * b[11] + a[3] * b[9] - a[5] * b[7],
 - a[0] * b[2] + a[0] * b[12] + a[1] * b[1] - a[1] * b[11] + a[2] * b[0] - a[2] * b[10] + a[4] * b[9] - a[5] * b[8],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[13] - a[4] * b[12] + a[5] * b[11],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Rtc gp (const Lin& a, const Tvt& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] + a[3] * b[10] - a[4] * b[11] - a[5] * b[12],
 - a[0] * b[4] + a[2] * b[6] + a[3] * b[11] + a[4] * b[10] - a[5] * b[13],
 - a[1] * b[4] - a[2] * b[5] + a[3] * b[12] + a[4] * b[13] + a[5] * b[10],
 - a[3] * b[4] - a[4] * b[5] - a[5] * b[6],
 - a[0] * b[1] + a[0] * b[11] - a[1] * b[2] + a[1] * b[12] - a[2] * b[3] + a[2] * b[13] + a[3] * b[7] + a[4] * b[8] + a[5] * b[9],
 - a[3] * b[5] + a[4] * b[4],
 - a[3] * b[6] + a[5] * b[4],
 - a[4] * b[6] + a[5] * b[5],
a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[1] * b[13] + a[2] * b[2] - a[2] * b[12] + a[3] * b[8] - a[4] * b[7] + a[5] * b[14],
a[0] * b[3] - a[0] * b[13] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] + a[2] * b[11] + a[3] * b[9] - a[4] * b[14] - a[5] * b[7],
 - a[0] * b[2] + a[0] * b[12] + a[1] * b[1] - a[1] * b[11] + a[2] * b[0] - a[2] * b[10] + a[3] * b[14] + a[4] * b[9] - a[5] * b[8],
a[0] * b[5] + a[1] * b[6] + a[3] * b[0] - a[4] * b[1] - a[5] * b[2],
 - a[0] * b[4] + a[2] * b[6] + a[3] * b[1] + a[4] * b[0] - a[5] * b[3],
 - a[1] * b[4] - a[2] * b[5] + a[3] * b[2] + a[4] * b[3] + a[5] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[13] - a[4] * b[12] + a[5] * b[11],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1]
);
}			
		 
inline Lin op (const Lin& a, const Sca& b) { 
	return Lin (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0]
);
}			
		 
inline Mnk_Biv op (const Lin& a, const Ori& b) { 
	return Mnk_Biv (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Sca op (const Lin& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Lin& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Mnk_Biv op (const Lin& a, const Hyp& b) { 
	return Mnk_Biv (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
inline Sca op (const Lin& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Pln op (const Lin& a, const Pnt& b) { 
	return Pln (
 - a[0] * b[3] + a[3] * b[1] - a[4] * b[0],
 - a[1] * b[3] + a[3] * b[2] - a[5] * b[0],
 - a[2] * b[3] + a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Pss op (const Lin& a, const Par& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Sca op (const Lin& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Lin& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Lin& a, const Sta& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Sca op (const Lin& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Lin& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Lin& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Lin& a, const Tnv& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Lin& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Lin& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Lin& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Lin& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Lin& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Lin& a, const Dll& b) { 
	return Pss (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Pln op (const Lin& a, const Dlp& b) { 
	return Pln (
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Pln op (const Lin& a, const Vec& b) { 
	return Pln (
a[3] * b[1] - a[4] * b[0],
a[3] * b[2] - a[5] * b[0],
a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Pss op (const Lin& a, const Biv& b) { 
	return Pss (
a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Sca op (const Lin& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Pln op (const Lin& a, const Aff& b) { 
	return Pln (
 - a[0] * b[3] + a[3] * b[1] - a[4] * b[0],
 - a[1] * b[3] + a[3] * b[2] - a[5] * b[0],
 - a[2] * b[3] + a[4] * b[2] - a[5] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
inline Pss op (const Lin& a, const Afl& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0]
);
}			
		 
inline Sca op (const Lin& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Dll ip (const Lin& a, const Pss& b) { 
	return Dll (
a[5] * b[0],
 - a[4] * b[0],
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Lin& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Cir& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[6] + a[4] * b[7] + a[5] * b[8]
);
}			
		 
inline Dlp ip (const Lin& a, const Sph& b) { 
	return Dlp (
 - a[2] * b[3] - a[4] * b[0] - a[5] * b[1],
a[1] * b[3] + a[3] * b[0] - a[5] * b[2],
 - a[0] * b[3] + a[3] * b[1] + a[4] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Sca ip (const Lin& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Tnb& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Vec ip (const Lin& a, const Tnt& b) { 
	return Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Lin& a, const Lin& b) { 
	return Sca (
a[3] * b[3] + a[4] * b[4] + a[5] * b[5]
);
}			
		 
inline Dlp ip (const Lin& a, const Pln& b) { 
	return Dlp (
 - a[4] * b[0] - a[5] * b[1],
a[3] * b[0] - a[5] * b[2],
a[3] * b[1] + a[4] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
inline Sca ip (const Lin& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Lin& a, const Afp& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		  	
inline Lin sp (const Lin& lin, const Rot& rot) {					
					
const Rot& t1 = rot;
const Lin& t2 = lin;
Lin_Dll t3 (
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
return Lin (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Mot& mot) {					
					
const Mot& t1 = mot;
const Lin& t2 = lin;
Lin_Dll t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3] - t1[7] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Lin (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[7] + t3[7] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[7] - t3[6] * t5[4] - t3[7] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[7] + t3[5] * t5[6] - t3[6] * t5[5] + t3[7] * t5[4],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Dil& dil) {					
					
const Dil& t1 = dil;
const Lin& t2 = lin;
Inf_Sta t3 (
t1[1] * t2[3],
t1[1] * t2[4],
t1[1] * t2[5],
t1[0] * t2[0] + t1[1] * t2[0],
t1[0] * t2[1] + t1[1] * t2[1],
t1[0] * t2[2] + t1[1] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4],
t1[0] * t2[5]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Lin (
t3[3] * t5[0] - t3[3] * t5[1],
t3[4] * t5[0] - t3[4] * t5[1],
t3[5] * t5[0] - t3[5] * t5[1],
t3[0] * t5[1] + t3[6] * t5[0],
t3[1] * t5[1] + t3[7] * t5[0],
t3[2] * t5[1] + t3[8] * t5[0]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Trv& trv) {					
					
const Trv& t1 = trv;
const Lin& t2 = lin;
Par_Afp t3 (
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5],
 - t1[1] * t2[4] + t1[2] * t2[3],
 - t1[1] * t2[5] + t1[3] * t2[3],
 - t1[2] * t2[5] + t1[3] * t2[4],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[4] + t1[1] * t2[0] - t1[3] * t2[2],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[2],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Lin (
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0],
t3[7] * t5[2] + t3[8] * t5[3] + t3[10] * t5[0],
 - t3[7] * t5[1] + t3[9] * t5[3] + t3[11] * t5[0],
 - t3[8] * t5[1] - t3[9] * t5[2] + t3[12] * t5[0]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Lin& t2 = lin;
Par_Drb t3 (
t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5],
t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[5],
t1[7] * t2[5] - t1[9] * t2[3] - t1[10] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5] - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1] + t1[11] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[5] - t1[6] * t2[3] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0] - t1[11] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0] + t1[11] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4],
t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Lin (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[1] - t3[3] * t5[8] + t3[4] * t5[0] - t3[4] * t5[7] - t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[2] - t3[6] * t5[9] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[6] + t3[11] * t5[6],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] + t3[3] * t5[2] - t3[3] * t5[9] + t3[4] * t5[3] - t3[4] * t5[10] + t3[5] * t5[0] - t3[5] * t5[7] - t3[6] * t5[1] + t3[6] * t5[8] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] - t3[10] * t5[5] - t3[11] * t5[5],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] - t3[3] * t5[10] - t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[1] - t3[5] * t5[8] + t3[6] * t5[0] - t3[6] * t5[7] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[4],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[10] - t3[11] * t5[3],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[9] + t3[11] * t5[2],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[8] - t3[11] * t5[1]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Trs& trs) {					
					
const Trs& t1 = trs;
const Lin& t2 = lin;
Flp_Dlp t3 (
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[0] * t2[0] + t1[1] * t2[4] - t1[2] * t2[3],
t1[0] * t2[1] + t1[1] * t2[5] - t1[3] * t2[3],
t1[0] * t2[2] + t1[2] * t2[5] - t1[3] * t2[4],
t1[0] * t2[3],
t1[0] * t2[4],
t1[0] * t2[5]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Lin (
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2],
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Lin& t2 = lin;
Mtt t3 (
t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2] + t1[11] * t2[3] + t1[12] * t2[4] + t1[13] * t2[5],
 - t1[3] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1] + t1[11] * t2[4] - t1[12] * t2[3] + t1[15] * t2[5],
 - t1[3] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0] + t1[11] * t2[5] - t1[13] * t2[3] - t1[15] * t2[4],
 - t1[3] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[12] * t2[5] - t1[13] * t2[4] + t1[15] * t2[3],
 - t1[3] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
 - t1[3] * t2[4] + t1[5] * t2[3] - t1[7] * t2[5],
 - t1[3] * t2[5] + t1[6] * t2[3] + t1[7] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] + t1[4] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[12] * t2[0] - t1[13] * t2[1] - t1[14] * t2[2] - t1[15] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[4] * t2[4] - t1[8] * t2[3] + t1[10] * t2[5] + t1[11] * t2[0] - t1[13] * t2[2] + t1[14] * t2[1] + t1[15] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[4] * t2[5] - t1[9] * t2[3] - t1[10] * t2[4] + t1[11] * t2[1] + t1[12] * t2[2] - t1[14] * t2[0] - t1[15] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1] + t1[14] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] + t1[3] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0] - t1[14] * t2[4],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] + t1[14] * t2[3],
 - t1[5] * t2[5] + t1[6] * t2[4] - t1[7] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Lin (
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] + t3[3] * t5[9] - t3[7] * t5[1] + t3[7] * t5[12] + t3[8] * t5[0] - t3[8] * t5[11] - t3[9] * t5[14] + t3[9] * t5[15] + t3[10] * t5[8] + t3[11] * t5[4] - t3[12] * t5[10] + t3[13] * t5[9] - t3[15] * t5[2] + t3[15] * t5[13],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[3] * t5[8] - t3[7] * t5[2] + t3[7] * t5[13] + t3[8] * t5[14] - t3[8] * t5[15] + t3[9] * t5[0] - t3[9] * t5[11] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[4] - t3[13] * t5[8] + t3[15] * t5[1] - t3[15] * t5[12],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[4] - t3[7] * t5[14] + t3[7] * t5[15] - t3[8] * t5[2] + t3[8] * t5[13] + t3[9] * t5[1] - t3[9] * t5[12] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[4] - t3[15] * t5[0] + t3[15] * t5[11],
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] - t3[3] * t5[15] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[3] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] + t3[11] * t5[1] + t3[12] * t5[2] - t3[13] * t5[14] - t3[14] * t5[10] + t3[15] * t5[7],
t3[0] * t5[12] - t3[1] * t5[11] + t3[2] * t5[15] + t3[3] * t5[13] + t3[4] * t5[8] + t3[5] * t5[4] - t3[6] * t5[10] - t3[7] * t5[5] - t3[8] * t5[3] + t3[9] * t5[7] + t3[10] * t5[1] - t3[11] * t5[0] + t3[12] * t5[14] + t3[13] * t5[2] + t3[14] * t5[9] - t3[15] * t5[6],
t3[0] * t5[13] - t3[1] * t5[15] - t3[2] * t5[11] - t3[3] * t5[12] + t3[4] * t5[9] + t3[5] * t5[10] + t3[6] * t5[4] - t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[2] - t3[11] * t5[14] - t3[12] * t5[0] - t3[13] * t5[1] - t3[14] * t5[8] + t3[15] * t5[5]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Lin& t2 = lin;
Rtc t3 (
t1[5] * t2[0] + t1[6] * t2[1] + t1[10] * t2[3] + t1[11] * t2[4] + t1[12] * t2[5] + t1[14] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] + t1[10] * t2[4] - t1[11] * t2[3] + t1[13] * t2[5] - t1[14] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[10] * t2[5] - t1[12] * t2[3] - t1[13] * t2[4] + t1[14] * t2[0],
 - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[4] + t1[5] * t2[3] - t1[14] * t2[5],
 - t1[4] * t2[5] + t1[6] * t2[3] + t1[14] * t2[4],
 - t1[5] * t2[5] + t1[6] * t2[4] - t1[14] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1] + t1[15] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0] - t1[15] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0] + t1[15] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[14] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] + t1[14] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[14] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Lin (
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[4] * t5[1] - t3[4] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[2] - t3[10] * t5[12] + t3[11] * t5[8] - t3[12] * t5[7] + t3[13] * t5[15] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] + t3[4] * t5[2] - t3[4] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] - t3[10] * t5[1] + t3[10] * t5[11] + t3[11] * t5[9] - t3[12] * t5[15] - t3[13] * t5[7] - t3[14] * t5[8] - t3[15] * t5[8],
t3[0] * t5[15] + t3[1] * t5[9] - t3[2] * t5[8] + t3[4] * t5[3] - t3[4] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[0] - t3[10] * t5[10] + t3[11] * t5[15] + t3[12] * t5[9] - t3[13] * t5[8] + t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[15] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[6] * t5[15] - t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[5] * t5[15] + t3[6] * t5[7] + t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Lin& t2 = lin;
Rtc t3 (
t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
 - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[4] * t2[4] + t1[5] * t2[3] - t1[7] * t2[5],
 - t1[4] * t2[5] + t1[6] * t2[3] + t1[7] * t2[4],
 - t1[5] * t2[5] + t1[6] * t2[4] - t1[7] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Lin (
t3[4] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[4] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[4] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
t3[4] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[7] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[15] * t5[3],
t3[4] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[15] * t5[2],
t3[4] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[15] * t5[1]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Lin& t2 = lin;
Par_Drb t3 (
t1[4] * t2[3] + t1[5] * t2[4] + t1[6] * t2[5],
t1[4] * t2[4] - t1[5] * t2[3] + t1[7] * t2[5],
t1[4] * t2[5] - t1[6] * t2[3] - t1[7] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4],
t1[5] * t2[5] - t1[6] * t2[4] + t1[7] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Lin (
t3[3] * t5[1] - t3[3] * t5[5] + t3[4] * t5[0] - t3[4] * t5[4] - t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[2] - t3[6] * t5[6],
t3[3] * t5[2] - t3[3] * t5[6] + t3[4] * t5[3] - t3[4] * t5[7] + t3[5] * t5[0] - t3[5] * t5[4] - t3[6] * t5[1] + t3[6] * t5[5],
t3[3] * t5[3] - t3[3] * t5[7] - t3[4] * t5[2] + t3[4] * t5[6] + t3[5] * t5[1] - t3[5] * t5[5] + t3[6] * t5[0] - t3[6] * t5[4],
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[7] - t3[11] * t5[3],
t3[0] * t5[5] + t3[1] * t5[4] - t3[2] * t5[7] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[6] + t3[11] * t5[2],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[4] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[5] - t3[11] * t5[1]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Lin& t2 = lin;
Par_Afp t3 (
t1[2] * t2[0] + t1[3] * t2[1] + t1[4] * t2[3],
 - t1[1] * t2[0] + t1[3] * t2[2] + t1[4] * t2[4],
 - t1[1] * t2[1] - t1[2] * t2[2] + t1[4] * t2[5],
 - t1[1] * t2[3] - t1[2] * t2[4] - t1[3] * t2[5],
 - t1[1] * t2[4] + t1[2] * t2[3],
 - t1[1] * t2[5] + t1[3] * t2[3],
 - t1[2] * t2[5] + t1[3] * t2[4],
t1[0] * t2[0] + t1[4] * t2[0],
t1[0] * t2[1] + t1[4] * t2[1],
t1[0] * t2[2] + t1[4] * t2[2],
t1[0] * t2[3] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[4] + t1[1] * t2[0] - t1[3] * t2[2],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[2],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Lin (
t3[7] * t5[0] - t3[7] * t5[4],
t3[8] * t5[0] - t3[8] * t5[4],
t3[9] * t5[0] - t3[9] * t5[4],
t3[0] * t5[4] + t3[7] * t5[2] + t3[8] * t5[3] + t3[10] * t5[0],
t3[1] * t5[4] - t3[7] * t5[1] + t3[9] * t5[3] + t3[11] * t5[0],
t3[2] * t5[4] - t3[8] * t5[1] - t3[9] * t5[2] + t3[12] * t5[0]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Lin& t2 = lin;
Inf_Par t3 (
t1[4] * t2[3],
t1[4] * t2[4],
t1[4] * t2[5],
t1[1] * t2[3] + t1[2] * t2[4] + t1[3] * t2[5],
t1[0] * t2[0] + t1[1] * t2[4] - t1[2] * t2[3] + t1[4] * t2[0],
t1[0] * t2[1] + t1[1] * t2[5] - t1[3] * t2[3] + t1[4] * t2[1],
t1[0] * t2[2] + t1[2] * t2[5] - t1[3] * t2[4] + t1[4] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4],
t1[0] * t2[5]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Lin (
t3[0] * t5[2] - t3[1] * t5[1] + t3[4] * t5[0] - t3[4] * t5[4] + t3[7] * t5[2] - t3[8] * t5[1],
t3[0] * t5[3] - t3[2] * t5[1] + t3[5] * t5[0] - t3[5] * t5[4] + t3[7] * t5[3] - t3[9] * t5[1],
t3[1] * t5[3] - t3[2] * t5[2] + t3[6] * t5[0] - t3[6] * t5[4] + t3[8] * t5[3] - t3[9] * t5[2],
t3[0] * t5[4] + t3[7] * t5[0],
t3[1] * t5[4] + t3[8] * t5[0],
t3[2] * t5[4] + t3[9] * t5[0]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Trt& trt) {					
					
const Trt& t1 = trt;
const Lin& t2 = lin;
Rtc t3 (
t1[5] * t2[0] + t1[6] * t2[1] + t1[10] * t2[3] + t1[11] * t2[4] + t1[12] * t2[5],
 - t1[4] * t2[0] + t1[6] * t2[2] + t1[10] * t2[4] - t1[11] * t2[3] + t1[13] * t2[5],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[10] * t2[5] - t1[12] * t2[3] - t1[13] * t2[4],
 - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[4] + t1[5] * t2[3],
 - t1[4] * t2[5] + t1[6] * t2[3],
 - t1[5] * t2[5] + t1[6] * t2[4],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Lin (
t3[0] * t5[8] - t3[1] * t5[7] + t3[4] * t5[1] - t3[4] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[2] - t3[10] * t5[12] + t3[11] * t5[8] - t3[12] * t5[7] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] - t3[2] * t5[7] + t3[4] * t5[2] - t3[4] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] - t3[10] * t5[1] + t3[10] * t5[11] + t3[11] * t5[9] - t3[13] * t5[7] - t3[14] * t5[8] - t3[15] * t5[8],
t3[1] * t5[9] - t3[2] * t5[8] + t3[4] * t5[3] - t3[4] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[0] - t3[10] * t5[10] + t3[12] * t5[9] - t3[13] * t5[8] + t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[6] * t5[7] + t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Lin& t2 = lin;
Rtc t3 (
t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] + t1[11] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[5] - t1[11] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[5] - t1[9] * t2[3] - t1[10] * t2[4] + t1[11] * t2[0],
 - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
 - t1[4] * t2[4] + t1[5] * t2[3] - t1[11] * t2[5],
 - t1[4] * t2[5] + t1[6] * t2[3] + t1[11] * t2[4],
 - t1[5] * t2[5] + t1[6] * t2[4] - t1[11] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[11] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] + t1[11] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[11] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Lin (
t3[4] * t5[1] - t3[4] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[10] * t5[2] - t3[10] * t5[9],
t3[4] * t5[2] - t3[4] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] - t3[10] * t5[1] + t3[10] * t5[8],
t3[4] * t5[3] - t3[4] * t5[10] - t3[8] * t5[2] + t3[8] * t5[9] + t3[9] * t5[1] - t3[9] * t5[8] + t3[10] * t5[0] - t3[10] * t5[7],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] + t3[4] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[11] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[10] - t3[15] * t5[3],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[4] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[9] + t3[15] * t5[2],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] + t3[4] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[8] - t3[15] * t5[1]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Tst& tst) {					
					
const Tst& t1 = tst;
const Lin& t2 = lin;
Rtc t3 (
t1[5] * t2[0] + t1[6] * t2[1] + t1[10] * t2[3] + t1[11] * t2[4] + t1[12] * t2[5] + t1[14] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] + t1[10] * t2[4] - t1[11] * t2[3] + t1[13] * t2[5] - t1[14] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[10] * t2[5] - t1[12] * t2[3] - t1[13] * t2[4] + t1[14] * t2[0],
 - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[4] + t1[5] * t2[3] - t1[14] * t2[5],
 - t1[4] * t2[5] + t1[6] * t2[3] + t1[14] * t2[4],
 - t1[5] * t2[5] + t1[6] * t2[4] - t1[14] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1] - t1[14] * t2[2],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2] + t1[14] * t2[1],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] - t1[14] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Lin (
t3[0] * t5[8] - t3[1] * t5[7] + t3[4] * t5[1] - t3[4] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[2] - t3[10] * t5[12] + t3[11] * t5[8] - t3[12] * t5[7] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] - t3[2] * t5[7] + t3[4] * t5[2] - t3[4] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] - t3[10] * t5[1] + t3[10] * t5[11] + t3[11] * t5[9] - t3[13] * t5[7] - t3[14] * t5[8] - t3[15] * t5[8],
t3[1] * t5[9] - t3[2] * t5[8] + t3[4] * t5[3] - t3[4] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[0] - t3[10] * t5[10] + t3[12] * t5[9] - t3[13] * t5[8] + t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[6] * t5[7] + t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1]
);

}
		
	
	  	
inline Lin sp (const Lin& lin, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Lin& t2 = lin;
Rtc t3 (
t1[5] * t2[0] + t1[6] * t2[1] + t1[10] * t2[3] + t1[11] * t2[4] + t1[12] * t2[5],
 - t1[4] * t2[0] + t1[6] * t2[2] + t1[10] * t2[4] - t1[11] * t2[3] + t1[13] * t2[5],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[10] * t2[5] - t1[12] * t2[3] - t1[13] * t2[4],
 - t1[4] * t2[3] - t1[5] * t2[4] - t1[6] * t2[5],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3] + t1[8] * t2[4] + t1[9] * t2[5] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[4] + t1[5] * t2[3],
 - t1[4] * t2[5] + t1[6] * t2[3],
 - t1[5] * t2[5] + t1[6] * t2[4],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[4] - t1[8] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[5],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[7] * t2[5] - t1[9] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0] - t1[14] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[8] * t2[5] - t1[9] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0] + t1[14] * t2[3],
t1[0] * t2[3] + t1[1] * t2[4] + t1[2] * t2[5] - t1[5] * t2[0] - t1[6] * t2[1],
t1[0] * t2[4] - t1[1] * t2[3] + t1[3] * t2[5] + t1[4] * t2[0] - t1[6] * t2[2],
t1[0] * t2[5] - t1[2] * t2[3] - t1[3] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[3],
t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Lin (
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[4] * t5[1] - t3[4] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[2] - t3[10] * t5[12] + t3[11] * t5[8] - t3[12] * t5[7] + t3[13] * t5[14] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] + t3[4] * t5[2] - t3[4] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] - t3[10] * t5[1] + t3[10] * t5[11] + t3[11] * t5[9] - t3[12] * t5[14] - t3[13] * t5[7] - t3[14] * t5[8] - t3[15] * t5[8],
t3[0] * t5[14] + t3[1] * t5[9] - t3[2] * t5[8] + t3[4] * t5[3] - t3[4] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[0] - t3[10] * t5[10] + t3[11] * t5[14] + t3[12] * t5[9] - t3[13] * t5[8] + t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[7] + t3[4] * t5[4] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[14] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[0] - t3[12] * t5[1] - t3[13] * t5[2] - t3[14] * t5[13] - t3[15] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] - t3[3] * t5[8] + t3[4] * t5[5] + t3[5] * t5[7] - t3[6] * t5[14] - t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[3] + t3[14] * t5[12] + t3[15] * t5[2],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[9] + t3[4] * t5[6] + t3[5] * t5[14] + t3[6] * t5[7] + t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[2] + t3[12] * t5[3] + t3[13] * t5[0] - t3[14] * t5[11] - t3[15] * t5[1]
);

}
		
	
		
	} //vsr::
	#endif
	