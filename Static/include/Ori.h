		#ifndef ORI_H_INCLUDED
		#define ORI_H_INCLUDED
		
		#include "vsr_casts.h"
		
		namespace vsr{
	 
inline Ori gp (const Ori& a, const Sca& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
inline Sca gp (const Ori& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Dil gp (const Ori& a, const Inf& b) { 
	return Dil (
 - a[0] * b[0],
a[0] * b[0]
);
}			
		 
inline Ori gp (const Ori& a, const Mnk& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
inline Dil gp (const Ori& a, const Hyp& b) { 
	return Dil (
 - a[0] * b[1],
a[0] * b[1]
);
}			
		 
inline Tnt gp (const Ori& a, const Pss& b) { 
	return Tnt (
 - a[0] * b[0]
);
}			
		 
inline Tvd gp (const Ori& a, const Pnt& b) { 
	return Tvd (
 - a[0] * b[4],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[4]
);
}			
		 
inline Ori_Par gp (const Ori& a, const Par& b) { 
	return Ori_Par (
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[6],
 - a[0] * b[7],
 - a[0] * b[8]
);
}			
		 
inline Ori_Cir gp (const Ori& a, const Cir& b) { 
	return Ori_Cir (
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
 - a[0] * b[7],
 - a[0] * b[8],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
 - a[0] * b[9]
);
}			
		 
inline Ori_Sph gp (const Ori& a, const Sph& b) { 
	return Ori_Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[4],
 - a[0] * b[4]
);
}			
		 
inline Ori_Sta gp (const Ori& a, const Sta& b) { 
	return Ori_Sta (
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[6],
 - a[0] * b[7],
 - a[0] * b[8]
);
}			
		 
inline Ori_Drv gp (const Ori& a, const Drv& b) { 
	return Ori_Drv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Ori_Drb gp (const Ori& a, const Drb& b) { 
	return Ori_Drb (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Ori_Drt gp (const Ori& a, const Drt& b) { 
	return Ori_Drt (
a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca gp (const Ori& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Ori& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Ori& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Ori_Lin gp (const Ori& a, const Lin& b) { 
	return Ori_Lin (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Ori_Sph gp (const Ori& a, const Pln& b) { 
	return Ori_Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[0] * b[3]
);
}			
		 
inline Ori_Flp gp (const Ori& a, const Flp& b) { 
	return Ori_Flp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Ori_Dfp gp (const Ori& a, const Dfp& b) { 
	return Ori_Dfp (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
inline Ori_Sta gp (const Ori& a, const Dll& b) { 
	return Ori_Sta (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5]
);
}			
		 
inline Tvd gp (const Ori& a, const Dlp& b) { 
	return Tvd (
 - a[0] * b[3],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Tnv gp (const Ori& a, const Vec& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Tnb gp (const Ori& a, const Biv& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnt gp (const Ori& a, const Tri& b) { 
	return Tnt (
 - a[0] * b[0]
);
}			
		 
inline Tnv gp (const Ori& a, const Aff& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Tnb gp (const Ori& a, const Afl& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnt gp (const Ori& a, const Afp& b) { 
	return Tnt (
 - a[0] * b[3]
);
}			
		 
inline Ori gp (const Ori& a, const Dap& b) { 
	return Ori (
a[0] * b[3]
);
}			
		 
inline Tnb gp (const Ori& a, const Daf& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnv gp (const Ori& a, const Dal& b) { 
	return Tnv (
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5]
);
}			
		 
inline Tnv gp (const Ori& a, const Mnv& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Tnv_Vec gp (const Ori& a, const Rot& b) { 
	return Tnv_Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Par_Tnb gp (const Ori& a, const Mot& b) { 
	return Par_Tnb (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
a[0] * b[7],
 - a[0] * b[7]
);
}			
		 
inline Ori gp (const Ori& a, const Dil& b) { 
	return Ori (
a[0] * b[0] + a[0] * b[1]
);
}			
		 
inline Ori gp (const Ori& a, const Trv& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
inline Par_Tnb gp (const Ori& a, const Mtd& b) { 
	return Par_Tnb (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0] + a[0] * b[7],
a[0] * b[1] + a[0] * b[8],
a[0] * b[2] + a[0] * b[9],
a[0] * b[3] + a[0] * b[10],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
a[0] * b[11],
 - a[0] * b[11]
);
}			
		 
inline Ori_Flp gp (const Ori& a, const Trs& b) { 
	return Ori_Flp (
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
inline Rvd gp (const Ori& a, const Rtc& b) { 
	return Rvd (
 - a[0] * b[4],
 - a[0] * b[8],
 - a[0] * b[9],
 - a[0] * b[10],
 - a[0] * b[0] - a[0] * b[11],
 - a[0] * b[1] - a[0] * b[12],
 - a[0] * b[2] - a[0] * b[13],
a[0] * b[4],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
 - a[0] * b[14] - a[0] * b[15]
);
}			
		 
inline Par_Tnb gp (const Ori& a, const Mtt& b) { 
	return Par_Tnb (
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[0] + a[0] * b[10],
a[0] * b[1] + a[0] * b[11],
a[0] * b[2] + a[0] * b[12],
a[0] * b[3] + a[0] * b[13],
 - a[0] * b[7],
 - a[0] * b[8],
 - a[0] * b[9],
a[0] * b[15],
 - a[0] * b[15]
);
}			
		 
inline Tnv_Vec gp (const Ori& a, const Rtt& b) { 
	return Tnv_Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Tnv_Vec gp (const Ori& a, const Rtd& b) { 
	return Tnv_Vec (
a[0] * b[0] + a[0] * b[4],
a[0] * b[1] + a[0] * b[5],
a[0] * b[2] + a[0] * b[6],
a[0] * b[3] + a[0] * b[7]
);
}			
		 
inline Ori gp (const Ori& a, const Tvd& b) { 
	return Ori (
a[0] * b[0] + a[0] * b[4]
);
}			
		 
inline Ori_Flp gp (const Ori& a, const Tsd& b) { 
	return Ori_Flp (
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[0] + a[0] * b[4],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
inline Ori_Par gp (const Ori& a, const Trt& b) { 
	return Ori_Par (
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[0] + a[0] * b[10],
a[0] * b[1] + a[0] * b[11],
a[0] * b[2] + a[0] * b[12],
a[0] * b[3] + a[0] * b[13],
 - a[0] * b[7],
 - a[0] * b[8],
 - a[0] * b[9]
);
}			
		 
inline Tnv_Vec gp (const Ori& a, const Rvd& b) { 
	return Tnv_Vec (
a[0] * b[0] + a[0] * b[7],
a[0] * b[1] + a[0] * b[8],
a[0] * b[2] + a[0] * b[9],
a[0] * b[3] + a[0] * b[10]
);
}			
		 
inline Ori_Par gp (const Ori& a, const Tst& b) { 
	return Ori_Par (
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[0] + a[0] * b[10],
a[0] * b[1] + a[0] * b[11],
a[0] * b[2] + a[0] * b[12],
a[0] * b[3] + a[0] * b[13],
 - a[0] * b[7],
 - a[0] * b[8],
 - a[0] * b[9]
);
}			
		 
inline Par_Tnb gp (const Ori& a, const Tvt& b) { 
	return Par_Tnb (
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[0] + a[0] * b[10],
a[0] * b[1] + a[0] * b[11],
a[0] * b[2] + a[0] * b[12],
a[0] * b[3] + a[0] * b[13],
 - a[0] * b[7],
 - a[0] * b[8],
 - a[0] * b[9],
a[0] * b[14],
 - a[0] * b[14]
);
}			
		 
inline Ori_Par gp (const Ori& a, const Bst& b) { 
	return Ori_Par (
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[0] + a[0] * b[10],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[0] * b[7],
 - a[0] * b[8],
 - a[0] * b[9]
);
}			
		 
inline Ori op (const Ori& a, const Sca& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
inline Sca op (const Ori& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Mnk op (const Ori& a, const Inf& b) { 
	return Mnk (
a[0] * b[0]
);
}			
		 
inline Sca op (const Ori& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Mnk op (const Ori& a, const Hyp& b) { 
	return Mnk (
a[0] * b[1]
);
}			
		 
inline Sca op (const Ori& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Dap op (const Ori& a, const Pnt& b) { 
	return Dap (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[4]
);
}			
		 
inline Dal op (const Ori& a, const Par& b) { 
	return Dal (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[6],
 - a[0] * b[7],
 - a[0] * b[8]
);
}			
		 
inline Daf op (const Ori& a, const Cir& b) { 
	return Daf (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
 - a[0] * b[9]
);
}			
		 
inline Pss op (const Ori& a, const Sph& b) { 
	return Pss (
 - a[0] * b[4]
);
}			
		 
inline Dal op (const Ori& a, const Sta& b) { 
	return Dal (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[6],
 - a[0] * b[7],
 - a[0] * b[8]
);
}			
		 
inline Mnv op (const Ori& a, const Drv& b) { 
	return Mnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Mnk_Biv op (const Ori& a, const Drb& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Pss op (const Ori& a, const Drt& b) { 
	return Pss (
 - a[0] * b[0]
);
}			
		 
inline Sca op (const Ori& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Ori& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Ori& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Mnk_Biv op (const Ori& a, const Lin& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Pss op (const Ori& a, const Pln& b) { 
	return Pss (
 - a[0] * b[3]
);
}			
		 
inline Mnv op (const Ori& a, const Flp& b) { 
	return Mnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Daf op (const Ori& a, const Dfp& b) { 
	return Daf (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
inline Dal op (const Ori& a, const Dll& b) { 
	return Dal (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5]
);
}			
		 
inline Dap op (const Ori& a, const Dlp& b) { 
	return Dap (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Tnv op (const Ori& a, const Vec& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Tnb op (const Ori& a, const Biv& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnt op (const Ori& a, const Tri& b) { 
	return Tnt (
 - a[0] * b[0]
);
}			
		 
inline Tnv op (const Ori& a, const Aff& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Tnb op (const Ori& a, const Afl& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnt op (const Ori& a, const Afp& b) { 
	return Tnt (
 - a[0] * b[3]
);
}			
		 
inline Sca op (const Ori& a, const Dap& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Ori& a, const Daf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Ori& a, const Dal& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Ori& a, const Mnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Ori& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Ori& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Ori& a, const Inf& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
inline Ori ip (const Ori& a, const Mnk& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
inline Sca ip (const Ori& a, const Hyp& b) { 
	return Sca (
 - a[0] * b[1]
);
}			
		 
inline Tnt ip (const Ori& a, const Pss& b) { 
	return Tnt (
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Ori& a, const Pnt& b) { 
	return Sca (
 - a[0] * b[4]
);
}			
		 
inline Aff ip (const Ori& a, const Par& b) { 
	return Aff (
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9]
);
}			
		 
inline Afl ip (const Ori& a, const Cir& b) { 
	return Afl (
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
 - a[0] * b[7],
 - a[0] * b[8]
);
}			
		 
inline Afp ip (const Ori& a, const Sph& b) { 
	return Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[4]
);
}			
		 
inline Vec ip (const Ori& a, const Sta& b) { 
	return Vec (
a[0] * b[6],
a[0] * b[7],
a[0] * b[8]
);
}			
		 
inline Vec ip (const Ori& a, const Drv& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Biv ip (const Ori& a, const Drb& b) { 
	return Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Tri ip (const Ori& a, const Drt& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
inline Sca ip (const Ori& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Ori& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Ori& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Afl ip (const Ori& a, const Lin& b) { 
	return Afl (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5]
);
}			
		 
inline Afp ip (const Ori& a, const Pln& b) { 
	return Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Aff ip (const Ori& a, const Flp& b) { 
	return Aff (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Biv ip (const Ori& a, const Dfp& b) { 
	return Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Vec ip (const Ori& a, const Dll& b) { 
	return Vec (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Sca ip (const Ori& a, const Dlp& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
inline Sca ip (const Ori& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Ori& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Ori& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Ori& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Ori& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Ori& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Ori ip (const Ori& a, const Dap& b) { 
	return Ori (
a[0] * b[3]
);
}			
		 
inline Tnb ip (const Ori& a, const Daf& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnv ip (const Ori& a, const Dal& b) { 
	return Tnv (
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5]
);
}			
		 
inline Tnv ip (const Ori& a, const Mnv& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		  	
template<>
inline Ori sp (const Ori& ori, const Rot& rot) {					
					
const Rot& t1 = rot;
const Ori& t2 = ori;
Tnv_Vec t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Ori (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Mot& mot) {					
					
const Mot& t1 = mot;
const Ori& t2 = ori;
Par_Tnb t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
 - t1[7] * t2[0],
 - t1[7] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Ori (
t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Dil& dil) {					
					
const Dil& t1 = dil;
const Ori& t2 = ori;
Ori t3 (
t1[0] * t2[0] - t1[1] * t2[0]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Ori (
t3[0] * t5[0] + t3[0] * t5[1]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Trv& trv) {					
					
const Trv& t1 = trv;
const Ori& t2 = ori;
Ori t3 (
t1[0] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Ori (
t3[0] * t5[0]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Ori& t2 = ori;
Par_Tnb t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0] - t1[7] * t2[0],
t1[1] * t2[0] - t1[8] * t2[0],
t1[2] * t2[0] - t1[9] * t2[0],
t1[3] * t2[0] - t1[10] * t2[0],
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
 - t1[11] * t2[0],
 - t1[11] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Ori (
t3[3] * t5[0] + t3[3] * t5[7] - t3[4] * t5[1] - t3[4] * t5[8] - t3[5] * t5[2] - t3[5] * t5[9] - t3[6] * t5[3] - t3[6] * t5[10]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Trs& trs) {					
					
const Trs& t1 = trs;
const Ori& t2 = ori;
Ori_Flp t3 (
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0],
t1[0] * t2[0],
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Ori (
t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Ori& t2 = ori;
Rvd t3 (
 - t1[4] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
 - t1[10] * t2[0],
t1[0] * t2[0] - t1[11] * t2[0],
t1[1] * t2[0] - t1[12] * t2[0],
t1[2] * t2[0] - t1[13] * t2[0],
 - t1[4] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
 - t1[10] * t2[0],
t1[14] * t2[0] - t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Ori (
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] - t3[4] * t5[0] - t3[4] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] - t3[7] * t5[3] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[14] + t3[11] * t5[15]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Ori& t2 = ori;
Par_Tnb t3 (
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[1] * t2[0] - t1[11] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
t1[3] * t2[0] - t1[13] * t2[0],
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
 - t1[15] * t2[0],
 - t1[15] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Ori (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[4] * t5[1] - t3[4] * t5[11] - t3[5] * t5[2] - t3[5] * t5[12] - t3[6] * t5[3] - t3[6] * t5[13] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[14]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Ori& t2 = ori;
Tnv_Vec t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Ori (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Ori& t2 = ori;
Tnv_Vec t3 (
t1[0] * t2[0] - t1[4] * t2[0],
t1[1] * t2[0] - t1[5] * t2[0],
t1[2] * t2[0] - t1[6] * t2[0],
t1[3] * t2[0] - t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Ori (
t3[0] * t5[0] + t3[0] * t5[4] - t3[1] * t5[1] - t3[1] * t5[5] - t3[2] * t5[2] - t3[2] * t5[6] - t3[3] * t5[3] - t3[3] * t5[7]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Ori& t2 = ori;
Ori t3 (
t1[0] * t2[0] - t1[4] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Ori (
t3[0] * t5[0] + t3[0] * t5[4]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Ori& t2 = ori;
Ori_Flp t3 (
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0],
t1[0] * t2[0] - t1[4] * t2[0],
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Ori (
t3[3] * t5[0] + t3[3] * t5[4]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Trt& trt) {					
					
const Trt& t1 = trt;
const Ori& t2 = ori;
Ori_Par t3 (
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[1] * t2[0] - t1[11] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
t1[3] * t2[0] - t1[13] * t2[0],
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Ori (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[4] * t5[1] - t3[4] * t5[11] - t3[5] * t5[2] - t3[5] * t5[12] - t3[6] * t5[3] - t3[6] * t5[13] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Ori& t2 = ori;
Tnv_Vec t3 (
t1[0] * t2[0] - t1[7] * t2[0],
t1[1] * t2[0] - t1[8] * t2[0],
t1[2] * t2[0] - t1[9] * t2[0],
t1[3] * t2[0] - t1[10] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Ori (
t3[0] * t5[0] + t3[0] * t5[7] - t3[1] * t5[1] - t3[1] * t5[8] - t3[2] * t5[2] - t3[2] * t5[9] - t3[3] * t5[3] - t3[3] * t5[10]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Tst& tst) {					
					
const Tst& t1 = tst;
const Ori& t2 = ori;
Ori_Par t3 (
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[1] * t2[0] - t1[11] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
t1[3] * t2[0] - t1[13] * t2[0],
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Ori (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[4] * t5[1] - t3[4] * t5[11] - t3[5] * t5[2] - t3[5] * t5[12] - t3[6] * t5[3] - t3[6] * t5[13] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Ori& t2 = ori;
Par_Tnb t3 (
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[1] * t2[0] - t1[11] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
t1[3] * t2[0] - t1[13] * t2[0],
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
 - t1[14] * t2[0],
 - t1[14] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Ori (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[4] * t5[1] - t3[4] * t5[11] - t3[5] * t5[2] - t3[5] * t5[12] - t3[6] * t5[3] - t3[6] * t5[13] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6]
);

}
		
	
	  	
template<>
inline Ori sp (const Ori& ori, const Bst& bst) {					
					
const Bst& t1 = bst;
const Ori& t2 = ori;
Ori_Par t3 (
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Ori (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6]
);

}
		
	
	  	
template<>
inline Ori re (const Ori& ori, const Vec& vec) {					
					
const Vec& t1 = vec;
const Ori& t2 = ori;
Ori t3 = involute( t2);
Tnv t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Ori (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2]
);

}
		
	
	  	
template<>
inline Ori re (const Ori& ori, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Ori& t2 = ori;
Ori t3 = involute( t2);
Tvd t4 (
 - t1[3] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
 - t1[3] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Ori (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2]
);

}
		
	
	  	
template<>
inline Ori re (const Ori& ori, const Pln& pln) {					
					
const Pln& t1 = pln;
const Ori& t2 = ori;
Ori t3 = involute( t2);
Ori_Sph t4 (
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0],
 - t1[3] * t3[0],
 - t1[3] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Ori (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2]
);

}
		
	
	  	
template<>
inline Ori re (const Ori& ori, const Dll& dll) {					
					
const Dll& t1 = dll;
const Ori& t2 = ori;
Ori t3 = involute( t2);
Ori_Sta t4 (
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Ori (
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2]
);

}
		
	
	  	
template<>
inline Ori re (const Ori& ori, const Lin& lin) {					
					
const Lin& t1 = lin;
const Ori& t2 = ori;
Ori t3 = involute( t2);
Ori_Lin t4 (
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0],
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0],
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Ori (
 - t4[3] * t6[3] - t4[4] * t6[4] - t4[5] * t6[5]
);

}
		
	
	  	
template<>
inline Ori re (const Ori& ori, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Ori& t2 = ori;
Ori t3 = involute( t2);
Tvd t4 (
 - t1[4] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
 - t1[4] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Ori (
t4[0] * t6[3] - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] - t4[4] * t6[3]
);

}
		
	
	  	
template<>
inline Ori re (const Ori& ori, const Par& par) {					
					
const Par& t1 = par;
const Ori& t2 = ori;
Ori t3 = involute( t2);
Ori_Par t4 (
 - t1[6] * t3[0],
 - t1[7] * t3[0],
 - t1[8] * t3[0],
 - t1[9] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
 - t1[6] * t3[0],
 - t1[7] * t3[0],
 - t1[8] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Ori (
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[3] * t6[9] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] - t4[7] * t6[3] - t4[8] * t6[4] - t4[9] * t6[5]
);

}
		
	
	  	
template<>
inline Ori re (const Ori& ori, const Cir& cir) {					
					
const Cir& t1 = cir;
const Ori& t2 = ori;
Ori t3 = involute( t2);
Ori_Cir t4 (
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0],
 - t1[6] * t3[0],
 - t1[7] * t3[0],
 - t1[8] * t3[0],
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0],
t1[9] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Ori (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] - t4[3] * t6[6] - t4[4] * t6[7] - t4[5] * t6[8] + t4[6] * t6[0] + t4[7] * t6[1] + t4[8] * t6[2] + t4[9] * t6[9]
);

}
		
	
	  	
template<>
inline Ori re (const Ori& ori, const Sph& sph) {					
					
const Sph& t1 = sph;
const Ori& t2 = ori;
Ori t3 = involute( t2);
Ori_Sph t4 (
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0],
 - t1[4] * t3[0],
 - t1[4] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Ori (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] - t4[3] * t6[3] + t4[4] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	