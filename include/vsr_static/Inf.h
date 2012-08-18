		#ifndef INF_H_INCLUDED
		#define INF_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Inf gp (const Inf& a, const Sca& b) { 
	return Inf (
a[0] * b[0]
);
}			
		 
inline Dil gp (const Inf& a, const Ori& b) { 
	return Dil (
 - a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Sca gp (const Inf& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Inf gp (const Inf& a, const Mnk& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
inline Dil gp (const Inf& a, const Hyp& b) { 
	return Dil (
 - a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Drt gp (const Inf& a, const Pss& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
inline Tsd gp (const Inf& a, const Pnt& b) { 
	return Tsd (
 - a[0] * b[3],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
inline Inf_Par gp (const Inf& a, const Par& b) { 
	return Inf_Par (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
 - a[0] * b[9],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Inf_Cir gp (const Inf& a, const Cir& b) { 
	return Inf_Cir (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[9]
);
}			
		 
inline Inf_Sph gp (const Inf& a, const Sph& b) { 
	return Inf_Sph (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[3],
a[0] * b[3]
);
}			
		 
inline Inf_Sta gp (const Inf& a, const Sta& b) { 
	return Inf_Sta (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Sca gp (const Inf& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Inf& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Inf& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Ori_Drv gp (const Inf& a, const Tnv& b) { 
	return Ori_Drv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Ori_Drb gp (const Inf& a, const Tnb& b) { 
	return Ori_Drb (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Ori_Drt gp (const Inf& a, const Tnt& b) { 
	return Ori_Drt (
a[0] * b[0],
a[0] * b[0]
);
}			
		 
inline Drv gp (const Inf& a, const Lin& b) { 
	return Drv (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Drb gp (const Inf& a, const Pln& b) { 
	return Drb (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Inf gp (const Inf& a, const Flp& b) { 
	return Inf (
 - a[0] * b[3]
);
}			
		 
inline Drb gp (const Inf& a, const Dll& b) { 
	return Drb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Drv gp (const Inf& a, const Dlp& b) { 
	return Drv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Drv gp (const Inf& a, const Vec& b) { 
	return Drv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Drb gp (const Inf& a, const Biv& b) { 
	return Drb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Drt gp (const Inf& a, const Tri& b) { 
	return Drt (
 - a[0] * b[0]
);
}			
		 
inline Tsd gp (const Inf& a, const Aff& b) { 
	return Tsd (
 - a[0] * b[3],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
inline Inf_Sta gp (const Inf& a, const Afl& b) { 
	return Inf_Sta (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Inf_Afp gp (const Inf& a, const Afp& b) { 
	return Inf_Afp (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
inline Drv_Lin gp (const Inf& a, const Rot& b) { 
	return Drv_Lin (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Drv_Lin gp (const Inf& a, const Mot& b) { 
	return Drv_Lin (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Inf gp (const Inf& a, const Dil& b) { 
	return Inf (
a[0] * b[0] - a[0] * b[1]
);
}			
		 
inline Drt_Afp gp (const Inf& a, const Trv& b) { 
	return Drt_Afp (
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Drv_Lin gp (const Inf& a, const Mtd& b) { 
	return Drv_Lin (
a[0] * b[0] - a[0] * b[7],
a[0] * b[1] - a[0] * b[8],
a[0] * b[2] - a[0] * b[9],
a[0] * b[3] - a[0] * b[10]
);
}			
		 
inline Inf gp (const Inf& a, const Trs& b) { 
	return Inf (
a[0] * b[0]
);
}			
		 
inline Mtd gp (const Inf& a, const Rtc& b) { 
	return Mtd (
 - a[0] * b[3],
 - a[0] * b[5],
 - a[0] * b[6],
 - a[0] * b[7],
 - a[0] * b[0] + a[0] * b[11],
 - a[0] * b[1] + a[0] * b[12],
 - a[0] * b[2] + a[0] * b[13],
 - a[0] * b[3],
 - a[0] * b[5],
 - a[0] * b[6],
 - a[0] * b[7],
 - a[0] * b[14] + a[0] * b[15]
);
}			
		 
inline Par_Drb gp (const Inf& a, const Mtt& b) { 
	return Par_Drb (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0] - a[0] * b[10],
a[0] * b[1] - a[0] * b[11],
a[0] * b[2] - a[0] * b[12],
a[0] * b[3] - a[0] * b[13],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[14],
a[0] * b[14]
);
}			
		 
inline Par_Drb gp (const Inf& a, const Rtt& b) { 
	return Par_Drb (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[7]
);
}			
		 
inline Drv_Lin gp (const Inf& a, const Rtd& b) { 
	return Drv_Lin (
a[0] * b[0] - a[0] * b[4],
a[0] * b[1] - a[0] * b[5],
a[0] * b[2] - a[0] * b[6],
a[0] * b[3] - a[0] * b[7]
);
}			
		 
inline Drt_Afp gp (const Inf& a, const Tvd& b) { 
	return Drt_Afp (
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[0] - a[0] * b[4],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Inf gp (const Inf& a, const Tsd& b) { 
	return Inf (
a[0] * b[0] - a[0] * b[4]
);
}			
		 
inline Inf_Par gp (const Inf& a, const Trt& b) { 
	return Inf_Par (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0] - a[0] * b[10],
a[0] * b[1] - a[0] * b[11],
a[0] * b[2] - a[0] * b[12],
a[0] * b[3] - a[0] * b[13],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6]
);
}			
		 
inline Par_Drb gp (const Inf& a, const Rvd& b) { 
	return Par_Drb (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0] - a[0] * b[7],
a[0] * b[1] - a[0] * b[8],
a[0] * b[2] - a[0] * b[9],
a[0] * b[3] - a[0] * b[10],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[11],
a[0] * b[11]
);
}			
		 
inline Par_Drb gp (const Inf& a, const Tst& b) { 
	return Par_Drb (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0] - a[0] * b[10],
a[0] * b[1] - a[0] * b[11],
a[0] * b[2] - a[0] * b[12],
a[0] * b[3] - a[0] * b[13],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[14],
a[0] * b[14]
);
}			
		 
inline Inf_Par gp (const Inf& a, const Tvt& b) { 
	return Inf_Par (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0] - a[0] * b[10],
a[0] * b[1] - a[0] * b[11],
a[0] * b[2] - a[0] * b[12],
a[0] * b[3] - a[0] * b[13],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6]
);
}			
		 
inline Inf op (const Inf& a, const Sca& b) { 
	return Inf (
a[0] * b[0]
);
}			
		 
inline Mnk op (const Inf& a, const Ori& b) { 
	return Mnk (
 - a[0] * b[0]
);
}			
		 
inline Sca op (const Inf& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Inf& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Mnk op (const Inf& a, const Hyp& b) { 
	return Mnk (
 - a[0] * b[0]
);
}			
		 
inline Sca op (const Inf& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Flp op (const Inf& a, const Pnt& b) { 
	return Flp (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
inline Lin op (const Inf& a, const Par& b) { 
	return Lin (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Pln op (const Inf& a, const Cir& b) { 
	return Pln (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[9]
);
}			
		 
inline Pss op (const Inf& a, const Sph& b) { 
	return Pss (
a[0] * b[3]
);
}			
		 
inline Lin op (const Inf& a, const Sta& b) { 
	return Lin (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Sca op (const Inf& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Inf& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Inf& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Mnk_Vec op (const Inf& a, const Tnv& b) { 
	return Mnk_Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Mnk_Biv op (const Inf& a, const Tnb& b) { 
	return Mnk_Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Pss op (const Inf& a, const Tnt& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
inline Sca op (const Inf& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Inf& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Inf& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Drb op (const Inf& a, const Dll& b) { 
	return Drb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Drv op (const Inf& a, const Dlp& b) { 
	return Drv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Drv op (const Inf& a, const Vec& b) { 
	return Drv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Drb op (const Inf& a, const Biv& b) { 
	return Drb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Drt op (const Inf& a, const Tri& b) { 
	return Drt (
 - a[0] * b[0]
);
}			
		 
inline Flp op (const Inf& a, const Aff& b) { 
	return Flp (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
inline Lin op (const Inf& a, const Afl& b) { 
	return Lin (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Pln op (const Inf& a, const Afp& b) { 
	return Pln (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
inline Sca ip (const Inf& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Inf& a, const Ori& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Inf& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Inf ip (const Inf& a, const Mnk& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Inf& a, const Hyp& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
inline Drt ip (const Inf& a, const Pss& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
inline Sca ip (const Inf& a, const Pnt& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
inline Dlp ip (const Inf& a, const Par& b) { 
	return Dlp (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
 - a[0] * b[9]
);
}			
		 
inline Dll ip (const Inf& a, const Cir& b) { 
	return Dll (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8]
);
}			
		 
inline Pss_Flp ip (const Inf& a, const Sph& b) { 
	return Pss_Flp (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Vec ip (const Inf& a, const Sta& b) { 
	return Vec (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Sca ip (const Inf& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Inf& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Inf& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Vec ip (const Inf& a, const Tnv& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Biv ip (const Inf& a, const Tnb& b) { 
	return Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Tri ip (const Inf& a, const Tnt& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
inline Drv ip (const Inf& a, const Lin& b) { 
	return Drv (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Drb ip (const Inf& a, const Pln& b) { 
	return Drb (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
inline Inf ip (const Inf& a, const Flp& b) { 
	return Inf (
 - a[0] * b[3]
);
}			
		 
inline Sca ip (const Inf& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Inf& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Inf& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Inf& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Inf& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Inf& a, const Aff& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
inline Vec ip (const Inf& a, const Afl& b) { 
	return Vec (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Biv ip (const Inf& a, const Afp& b) { 
	return Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		  	
inline Inf sp (const Inf& inf, const Rot& rot) {					
					
const Rot& t1 = rot;
const Inf& t2 = inf;
Drv_Lin t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Inf (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Mot& mot) {					
					
const Mot& t1 = mot;
const Inf& t2 = inf;
Drv_Lin t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Inf (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Dil& dil) {					
					
const Dil& t1 = dil;
const Inf& t2 = inf;
Inf t3 (
t1[0] * t2[0] + t1[1] * t2[0]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Inf (
t3[0] * t5[0] - t3[0] * t5[1]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Trv& trv) {					
					
const Trv& t1 = trv;
const Inf& t2 = inf;
Drt_Afp t3 (
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Inf (
t3[3] * t5[0]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Inf& t2 = inf;
Drv_Lin t3 (
t1[0] * t2[0] + t1[7] * t2[0],
t1[1] * t2[0] + t1[8] * t2[0],
t1[2] * t2[0] + t1[9] * t2[0],
t1[3] * t2[0] + t1[10] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Inf (
t3[0] * t5[0] - t3[0] * t5[7] - t3[1] * t5[1] + t3[1] * t5[8] - t3[2] * t5[2] + t3[2] * t5[9] - t3[3] * t5[3] + t3[3] * t5[10]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Trs& trs) {					
					
const Trs& t1 = trs;
const Inf& t2 = inf;
Inf t3 (
t1[0] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Inf (
t3[0] * t5[0]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Inf& t2 = inf;
Mtd t3 (
 - t1[3] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
 - t1[7] * t2[0],
t1[0] * t2[0] + t1[11] * t2[0],
t1[1] * t2[0] + t1[12] * t2[0],
t1[2] * t2[0] + t1[13] * t2[0],
t1[3] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
t1[14] * t2[0] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Inf (
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] - t3[4] * t5[0] + t3[4] * t5[11] - t3[5] * t5[1] + t3[5] * t5[12] - t3[6] * t5[2] + t3[6] * t5[13] + t3[7] * t5[4] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10] + t3[11] * t5[14] - t3[11] * t5[15]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Inf& t2 = inf;
Par_Drb t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0] + t1[10] * t2[0],
t1[1] * t2[0] + t1[11] * t2[0],
t1[2] * t2[0] + t1[12] * t2[0],
t1[3] * t2[0] + t1[13] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
 - t1[14] * t2[0],
t1[14] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Inf (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[3] * t5[0] - t3[3] * t5[10] - t3[4] * t5[1] + t3[4] * t5[11] - t3[5] * t5[2] + t3[5] * t5[12] - t3[6] * t5[3] + t3[6] * t5[13] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9] - t3[10] * t5[15] - t3[11] * t5[15]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Inf& t2 = inf;
Par_Drb t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
 - t1[7] * t2[0],
t1[7] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Inf (
t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Inf& t2 = inf;
Drv_Lin t3 (
t1[0] * t2[0] + t1[4] * t2[0],
t1[1] * t2[0] + t1[5] * t2[0],
t1[2] * t2[0] + t1[6] * t2[0],
t1[3] * t2[0] + t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Inf (
t3[0] * t5[0] - t3[0] * t5[4] - t3[1] * t5[1] + t3[1] * t5[5] - t3[2] * t5[2] + t3[2] * t5[6] - t3[3] * t5[3] + t3[3] * t5[7]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Inf& t2 = inf;
Drt_Afp t3 (
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0],
t1[0] * t2[0] + t1[4] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Inf (
t3[3] * t5[0] - t3[3] * t5[4]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Inf& t2 = inf;
Inf t3 (
t1[0] * t2[0] + t1[4] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Inf (
t3[0] * t5[0] - t3[0] * t5[4]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Trt& trt) {					
					
const Trt& t1 = trt;
const Inf& t2 = inf;
Inf_Par t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0] + t1[10] * t2[0],
t1[1] * t2[0] + t1[11] * t2[0],
t1[2] * t2[0] + t1[12] * t2[0],
t1[3] * t2[0] + t1[13] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Inf (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[3] * t5[0] - t3[3] * t5[10] - t3[4] * t5[1] + t3[4] * t5[11] - t3[5] * t5[2] + t3[5] * t5[12] - t3[6] * t5[3] + t3[6] * t5[13] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Inf& t2 = inf;
Par_Drb t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0] + t1[7] * t2[0],
t1[1] * t2[0] + t1[8] * t2[0],
t1[2] * t2[0] + t1[9] * t2[0],
t1[3] * t2[0] + t1[10] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
 - t1[11] * t2[0],
t1[11] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Inf (
t3[3] * t5[0] - t3[3] * t5[7] - t3[4] * t5[1] + t3[4] * t5[8] - t3[5] * t5[2] + t3[5] * t5[9] - t3[6] * t5[3] + t3[6] * t5[10]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Tst& tst) {					
					
const Tst& t1 = tst;
const Inf& t2 = inf;
Par_Drb t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0] + t1[10] * t2[0],
t1[1] * t2[0] + t1[11] * t2[0],
t1[2] * t2[0] + t1[12] * t2[0],
t1[3] * t2[0] + t1[13] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
 - t1[14] * t2[0],
t1[14] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Inf (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[3] * t5[0] - t3[3] * t5[10] - t3[4] * t5[1] + t3[4] * t5[11] - t3[5] * t5[2] + t3[5] * t5[12] - t3[6] * t5[3] + t3[6] * t5[13] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9]
);

}
		
	
	  	
inline Inf sp (const Inf& inf, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Inf& t2 = inf;
Inf_Par t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0] + t1[10] * t2[0],
t1[1] * t2[0] + t1[11] * t2[0],
t1[2] * t2[0] + t1[12] * t2[0],
t1[3] * t2[0] + t1[13] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Inf (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[3] * t5[0] - t3[3] * t5[10] - t3[4] * t5[1] + t3[4] * t5[11] - t3[5] * t5[2] + t3[5] * t5[12] - t3[6] * t5[3] + t3[6] * t5[13] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9]
);

}
		
	
		
	} //vsr::
	#endif
	