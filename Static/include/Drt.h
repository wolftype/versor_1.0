		#ifndef DRT_H_INCLUDED
		#define DRT_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Drt gp (const Drt& a, const Sca& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
inline Ori_Drt gp (const Drt& a, const Ori& b) { 
	return Ori_Drt (
 - a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca gp (const Drt& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Drt gp (const Drt& a, const Mnk& b) { 
	return Drt (
 - a[0] * b[0]
);
}			
		 
inline Ori_Drt gp (const Drt& a, const Hyp& b) { 
	return Ori_Drt (
 - a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Inf gp (const Drt& a, const Pss& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
inline Inf_Sph gp (const Drt& a, const Pnt& b) { 
	return Inf_Sph (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
 - a[0] * b[3],
 - a[0] * b[3]
);
}			
		 
inline Inf_Cir gp (const Drt& a, const Par& b) { 
	return Inf_Cir (
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3],
 - a[0] * b[9]
);
}			
		 
inline Inf_Par gp (const Drt& a, const Cir& b) { 
	return Inf_Par (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[9],
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[6],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Tsd gp (const Drt& a, const Sph& b) { 
	return Tsd (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[3]
);
}			
		 
inline Inf_Dal gp (const Drt& a, const Sta& b) { 
	return Inf_Dal (
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3]
);
}			
		 
inline Sca gp (const Drt& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Drt& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Drt& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Ori_Drb gp (const Drt& a, const Tnv& b) { 
	return Ori_Drb (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Ori_Drv gp (const Drt& a, const Tnb& b) { 
	return Ori_Drv (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Dil gp (const Drt& a, const Tnt& b) { 
	return Dil (
 - a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Drb gp (const Drt& a, const Lin& b) { 
	return Drb (
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3]
);
}			
		 
inline Drv gp (const Drt& a, const Pln& b) { 
	return Drv (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Drt gp (const Drt& a, const Flp& b) { 
	return Drt (
 - a[0] * b[3]
);
}			
		 
inline Inf gp (const Drt& a, const Dfp& b) { 
	return Inf (
a[0] * b[3]
);
}			
		 
inline Drv gp (const Drt& a, const Dll& b) { 
	return Drv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Drb gp (const Drt& a, const Dlp& b) { 
	return Drb (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Drb gp (const Drt& a, const Vec& b) { 
	return Drb (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Drv gp (const Drt& a, const Biv& b) { 
	return Drv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Inf gp (const Drt& a, const Tri& b) { 
	return Inf (
a[0] * b[0]
);
}			
		 
inline Inf_Sph gp (const Drt& a, const Aff& b) { 
	return Inf_Sph (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
 - a[0] * b[3],
 - a[0] * b[3]
);
}			
		 
inline Inf_Dal gp (const Drt& a, const Afl& b) { 
	return Inf_Dal (
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3]
);
}			
		 
inline Inf_Dap gp (const Drt& a, const Afp& b) { 
	return Inf_Dap (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Inf_Afp gp (const Drt& a, const Dap& b) { 
	return Inf_Afp (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[3]
);
}			
		 
inline Tsd gp (const Drt& a, const Daf& b) { 
	return Tsd (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[3]
);
}			
		 
inline Inf_Sta gp (const Drt& a, const Dal& b) { 
	return Inf_Sta (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Drb gp (const Drt& a, const Mnv& b) { 
	return Drb (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Drv_Pln gp (const Drt& a, const Rot& b) { 
	return Drv_Pln (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Drv_Pln gp (const Drt& a, const Mot& b) { 
	return Drv_Pln (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Drt gp (const Drt& a, const Dil& b) { 
	return Drt (
a[0] * b[0] - a[0] * b[1]
);
}			
		 
inline Inf_Afp gp (const Drt& a, const Trv& b) { 
	return Inf_Afp (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Drv_Pln gp (const Drt& a, const Mtd& b) { 
	return Drv_Pln (
 - a[0] * b[3] + a[0] * b[10],
a[0] * b[2] - a[0] * b[9],
 - a[0] * b[1] + a[0] * b[8],
a[0] * b[0] - a[0] * b[7]
);
}			
		 
inline Drt gp (const Drt& a, const Trs& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
inline Par_Drb gp (const Drt& a, const Rtc& b) { 
	return Par_Drb (
a[0] * b[7],
 - a[0] * b[6],
a[0] * b[5],
a[0] * b[14] - a[0] * b[15],
 - a[0] * b[2] + a[0] * b[13],
a[0] * b[1] - a[0] * b[12],
 - a[0] * b[0] + a[0] * b[11],
a[0] * b[7],
 - a[0] * b[6],
a[0] * b[5],
 - a[0] * b[3],
 - a[0] * b[3]
);
}			
		 
inline Mtd gp (const Drt& a, const Mtt& b) { 
	return Mtd (
 - a[0] * b[14],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3] + a[0] * b[13],
a[0] * b[2] - a[0] * b[12],
 - a[0] * b[1] + a[0] * b[11],
 - a[0] * b[14],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
a[0] * b[0] - a[0] * b[10]
);
}			
		 
inline Mtd gp (const Drt& a, const Rtt& b) { 
	return Mtd (
 - a[0] * b[7],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
 - a[0] * b[7],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
a[0] * b[0]
);
}			
		 
inline Drv_Pln gp (const Drt& a, const Rtd& b) { 
	return Drv_Pln (
 - a[0] * b[3] + a[0] * b[7],
a[0] * b[2] - a[0] * b[6],
 - a[0] * b[1] + a[0] * b[5],
a[0] * b[0] - a[0] * b[4]
);
}			
		 
inline Inf_Afp gp (const Drt& a, const Tvd& b) { 
	return Inf_Afp (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
a[0] * b[0] - a[0] * b[4]
);
}			
		 
inline Drt gp (const Drt& a, const Tsd& b) { 
	return Drt (
a[0] * b[0] - a[0] * b[4]
);
}			
		 
inline Inf_Cir gp (const Drt& a, const Trt& b) { 
	return Inf_Cir (
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3] + a[0] * b[13],
a[0] * b[2] - a[0] * b[12],
 - a[0] * b[1] + a[0] * b[11],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
a[0] * b[0] - a[0] * b[10]
);
}			
		 
inline Mtd gp (const Drt& a, const Rvd& b) { 
	return Mtd (
 - a[0] * b[11],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3] + a[0] * b[10],
a[0] * b[2] - a[0] * b[9],
 - a[0] * b[1] + a[0] * b[8],
 - a[0] * b[11],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
a[0] * b[0] - a[0] * b[7]
);
}			
		 
inline Mtd gp (const Drt& a, const Tst& b) { 
	return Mtd (
 - a[0] * b[14],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3] + a[0] * b[13],
a[0] * b[2] - a[0] * b[12],
 - a[0] * b[1] + a[0] * b[11],
 - a[0] * b[14],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
a[0] * b[0] - a[0] * b[10]
);
}			
		 
inline Inf_Cir gp (const Drt& a, const Tvt& b) { 
	return Inf_Cir (
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3] + a[0] * b[13],
a[0] * b[2] - a[0] * b[12],
 - a[0] * b[1] + a[0] * b[11],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
a[0] * b[0] - a[0] * b[10]
);
}			
		 
inline Inf_Cir gp (const Drt& a, const Bst& b) { 
	return Inf_Cir (
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
a[0] * b[0] - a[0] * b[10]
);
}			
		 
inline Drt op (const Drt& a, const Sca& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
inline Pss op (const Drt& a, const Ori& b) { 
	return Pss (
 - a[0] * b[0]
);
}			
		 
inline Sca op (const Drt& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Drt& a, const Hyp& b) { 
	return Pss (
 - a[0] * b[0]
);
}			
		 
inline Sca op (const Drt& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Drt& a, const Pnt& b) { 
	return Pss (
 - a[0] * b[3]
);
}			
		 
inline Sca op (const Drt& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Dfp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Drt& a, const Aff& b) { 
	return Pss (
 - a[0] * b[3]
);
}			
		 
inline Sca op (const Drt& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Dap& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Daf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Dal& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Drt& a, const Mnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Inf ip (const Drt& a, const Pss& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Drt& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Sph& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
inline Sca ip (const Drt& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Tnt& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Drt& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Dfp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Dap& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Daf& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
inline Sca ip (const Drt& a, const Dal& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Drt& a, const Mnv& b) { 
	return Sca (
);
}			
		  	
template<>
inline Drt sp (const Drt& drt, const Rot& rot) {					
					
const Rot& t1 = rot;
const Drt& t2 = drt;
Drv_Pln t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Drt (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Mot& mot) {					
					
const Mot& t1 = mot;
const Drt& t2 = drt;
Drv_Pln t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Drt (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Dil& dil) {					
					
const Dil& t1 = dil;
const Drt& t2 = drt;
Drt t3 (
t1[0] * t2[0] + t1[1] * t2[0]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Drt (
t3[0] * t5[0] - t3[0] * t5[1]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Trv& trv) {					
					
const Trv& t1 = trv;
const Drt& t2 = drt;
Inf_Afp t3 (
t1[3] * t2[0],
 - t1[2] * t2[0],
t1[1] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Drt (
t3[6] * t5[0]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Drt& t2 = drt;
Drv_Pln t3 (
 - t1[3] * t2[0] - t1[10] * t2[0],
t1[2] * t2[0] + t1[9] * t2[0],
 - t1[1] * t2[0] - t1[8] * t2[0],
t1[0] * t2[0] + t1[7] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Drt (
t3[0] * t5[3] - t3[0] * t5[10] - t3[1] * t5[2] + t3[1] * t5[9] + t3[2] * t5[1] - t3[2] * t5[8] + t3[3] * t5[0] - t3[3] * t5[7]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Trs& trs) {					
					
const Trs& t1 = trs;
const Drt& t2 = drt;
Drt t3 (
t1[0] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Drt (
t3[0] * t5[0]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Drt& t2 = drt;
Par_Drb t3 (
 - t1[7] * t2[0],
t1[6] * t2[0],
 - t1[5] * t2[0],
 - t1[14] * t2[0] - t1[15] * t2[0],
t1[2] * t2[0] + t1[13] * t2[0],
 - t1[1] * t2[0] - t1[12] * t2[0],
t1[0] * t2[0] + t1[11] * t2[0],
t1[7] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
t1[3] * t2[0],
 - t1[3] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Drt (
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] - t3[3] * t5[14] + t3[3] * t5[15] - t3[4] * t5[2] + t3[4] * t5[13] + t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[0] + t3[6] * t5[11] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[4] + t3[11] * t5[4]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Drt& t2 = drt;
Mtd t3 (
 - t1[14] * t2[0],
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[4] * t2[0],
 - t1[3] * t2[0] - t1[13] * t2[0],
t1[2] * t2[0] + t1[12] * t2[0],
 - t1[1] * t2[0] - t1[11] * t2[0],
t1[14] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
t1[0] * t2[0] + t1[10] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Drt (
t3[0] * t5[15] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[4] * t5[3] - t3[4] * t5[13] - t3[5] * t5[2] + t3[5] * t5[12] + t3[6] * t5[1] - t3[6] * t5[11] + t3[7] * t5[15] + t3[8] * t5[9] - t3[9] * t5[8] + t3[10] * t5[7] + t3[11] * t5[0] - t3[11] * t5[10]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Drt& t2 = drt;
Mtd t3 (
 - t1[7] * t2[0],
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[4] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[7] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
t1[0] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Drt (
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[11] * t5[0]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Drt& t2 = drt;
Drv_Pln t3 (
 - t1[3] * t2[0] - t1[7] * t2[0],
t1[2] * t2[0] + t1[6] * t2[0],
 - t1[1] * t2[0] - t1[5] * t2[0],
t1[0] * t2[0] + t1[4] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Drt (
t3[0] * t5[3] - t3[0] * t5[7] - t3[1] * t5[2] + t3[1] * t5[6] + t3[2] * t5[1] - t3[2] * t5[5] + t3[3] * t5[0] - t3[3] * t5[4]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Drt& t2 = drt;
Inf_Afp t3 (
t1[3] * t2[0],
 - t1[2] * t2[0],
t1[1] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0] + t1[4] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Drt (
t3[6] * t5[0] - t3[6] * t5[4]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Drt& t2 = drt;
Drt t3 (
t1[0] * t2[0] + t1[4] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Drt (
t3[0] * t5[0] - t3[0] * t5[4]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Trt& trt) {					
					
const Trt& t1 = trt;
const Drt& t2 = drt;
Inf_Cir t3 (
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[4] * t2[0],
 - t1[3] * t2[0] - t1[13] * t2[0],
t1[2] * t2[0] + t1[12] * t2[0],
 - t1[1] * t2[0] - t1[11] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
t1[0] * t2[0] + t1[10] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Drt (
t3[0] * t5[9] - t3[1] * t5[8] + t3[2] * t5[7] + t3[3] * t5[3] - t3[3] * t5[13] - t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[1] - t3[5] * t5[11] + t3[6] * t5[9] - t3[7] * t5[8] + t3[8] * t5[7] + t3[9] * t5[0] - t3[9] * t5[10]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Drt& t2 = drt;
Mtd t3 (
 - t1[11] * t2[0],
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[4] * t2[0],
 - t1[3] * t2[0] - t1[10] * t2[0],
t1[2] * t2[0] + t1[9] * t2[0],
 - t1[1] * t2[0] - t1[8] * t2[0],
t1[11] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
t1[0] * t2[0] + t1[7] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Drt (
t3[4] * t5[3] - t3[4] * t5[10] - t3[5] * t5[2] + t3[5] * t5[9] + t3[6] * t5[1] - t3[6] * t5[8] + t3[11] * t5[0] - t3[11] * t5[7]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Tst& tst) {					
					
const Tst& t1 = tst;
const Drt& t2 = drt;
Mtd t3 (
 - t1[14] * t2[0],
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[4] * t2[0],
 - t1[3] * t2[0] - t1[13] * t2[0],
t1[2] * t2[0] + t1[12] * t2[0],
 - t1[1] * t2[0] - t1[11] * t2[0],
t1[14] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
t1[0] * t2[0] + t1[10] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Drt (
t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[4] * t5[3] - t3[4] * t5[13] - t3[5] * t5[2] + t3[5] * t5[12] + t3[6] * t5[1] - t3[6] * t5[11] + t3[8] * t5[9] - t3[9] * t5[8] + t3[10] * t5[7] + t3[11] * t5[0] - t3[11] * t5[10]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Drt& t2 = drt;
Inf_Cir t3 (
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[4] * t2[0],
 - t1[3] * t2[0] - t1[13] * t2[0],
t1[2] * t2[0] + t1[12] * t2[0],
 - t1[1] * t2[0] - t1[11] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
t1[0] * t2[0] + t1[10] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Drt (
t3[0] * t5[9] - t3[1] * t5[8] + t3[2] * t5[7] + t3[3] * t5[3] - t3[3] * t5[13] - t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[1] - t3[5] * t5[11] + t3[6] * t5[9] - t3[7] * t5[8] + t3[8] * t5[7] + t3[9] * t5[0] - t3[9] * t5[10]
);

}
		
	
	  	
template<>
inline Drt sp (const Drt& drt, const Bst& bst) {					
					
const Bst& t1 = bst;
const Drt& t2 = drt;
Inf_Cir t3 (
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[4] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
t1[0] * t2[0] + t1[10] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Drt (
t3[0] * t5[9] - t3[1] * t5[8] + t3[2] * t5[7] + t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[9] - t3[7] * t5[8] + t3[8] * t5[7] + t3[9] * t5[0] - t3[9] * t5[10]
);

}
		
	
	  	
template<>
inline Drt re (const Drt& drt, const Vec& vec) {					
					
const Vec& t1 = vec;
const Drt& t2 = drt;
Drt t3 = involute( t2);
Drb t4 (
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Drt (
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Drt re (const Drt& drt, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Drt& t2 = drt;
Drt t3 = involute( t2);
Drb t4 (
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Drt (
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Drt re (const Drt& drt, const Pln& pln) {					
					
const Pln& t1 = pln;
const Drt& t2 = drt;
Drt t3 = involute( t2);
Drv t4 (
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Drt (
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Drt re (const Drt& drt, const Dll& dll) {					
					
const Dll& t1 = dll;
const Drt& t2 = drt;
Drt t3 = involute( t2);
Drv t4 (
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Drt (
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Drt re (const Drt& drt, const Lin& lin) {					
					
const Lin& t1 = lin;
const Drt& t2 = drt;
Drt t3 = involute( t2);
Drb t4 (
t1[5] * t3[0],
 - t1[4] * t3[0],
t1[3] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Drt (
t4[0] * t6[5] - t4[1] * t6[4] + t4[2] * t6[3]
);

}
		
	
	  	
template<>
inline Drt re (const Drt& drt, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Drt& t2 = drt;
Drt t3 = involute( t2);
Inf_Sph t4 (
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0],
t1[3] * t3[0],
 - t1[3] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Drt (
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0] + t4[3] * t6[4] + t4[4] * t6[4]
);

}
		
	
	  	
template<>
inline Drt re (const Drt& drt, const Par& par) {					
					
const Par& t1 = par;
const Drt& t2 = drt;
Drt t3 = involute( t2);
Inf_Cir t4 (
t1[5] * t3[0],
 - t1[4] * t3[0],
t1[3] * t3[0],
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0],
 - t1[5] * t3[0],
t1[4] * t3[0],
 - t1[3] * t3[0],
t1[9] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Drt (
t4[0] * t6[8] - t4[1] * t6[7] + t4[2] * t6[6] + t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0] + t4[6] * t6[8] - t4[7] * t6[7] + t4[8] * t6[6] - t4[9] * t6[9]
);

}
		
	
	  	
template<>
inline Drt re (const Drt& drt, const Cir& cir) {					
					
const Cir& t1 = cir;
const Drt& t2 = drt;
Drt t3 = involute( t2);
Inf_Par t4 (
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0],
 - t1[9] * t3[0],
t1[8] * t3[0],
 - t1[7] * t3[0],
t1[6] * t3[0],
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Drt (
t4[0] * t6[5] - t4[1] * t6[4] + t4[2] * t6[3] - t4[3] * t6[9] + t4[4] * t6[8] - t4[5] * t6[7] + t4[6] * t6[6] + t4[7] * t6[5] - t4[8] * t6[4] + t4[9] * t6[3]
);

}
		
	
	  	
template<>
inline Drt re (const Drt& drt, const Sph& sph) {					
					
const Sph& t1 = sph;
const Drt& t2 = drt;
Drt t3 = involute( t2);
Tsd t4 (
 - t1[3] * t3[0],
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0],
t1[3] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Drt (
t4[0] * t6[4] - t4[1] * t6[2] + t4[2] * t6[1] - t4[3] * t6[0] + t4[4] * t6[4]
);

}
		
	
		
	} //vsr::
	#endif
	