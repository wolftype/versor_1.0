		#ifndef TNT_H_INCLUDED
		#define TNT_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Tnt gp (const Tnt& a, const Sca& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
inline Sca gp (const Tnt& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Ori_Drt gp (const Tnt& a, const Inf& b) { 
	return Ori_Drt (
 - a[0] * b[0],
a[0] * b[0]
);
}			
		 
inline Tnt gp (const Tnt& a, const Mnk& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
inline Ori_Drt gp (const Tnt& a, const Hyp& b) { 
	return Ori_Drt (
 - a[0] * b[1],
a[0] * b[1]
);
}			
		 
inline Ori gp (const Tnt& a, const Pss& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
inline Ori_Sph gp (const Tnt& a, const Pnt& b) { 
	return Ori_Sph (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
 - a[0] * b[4],
a[0] * b[4]
);
}			
		 
inline Ori_Cir gp (const Tnt& a, const Par& b) { 
	return Ori_Cir (
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[6],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[6],
a[0] * b[9]
);
}			
		 
inline Ori_Par gp (const Tnt& a, const Cir& b) { 
	return Ori_Par (
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3]
);
}			
		 
inline Tvd gp (const Tnt& a, const Sph& b) { 
	return Tvd (
 - a[0] * b[4],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[4]
);
}			
		 
inline Ori_Lin gp (const Tnt& a, const Sta& b) { 
	return Ori_Lin (
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[6],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[6]
);
}			
		 
inline Ori_Drb gp (const Tnt& a, const Drv& b) { 
	return Ori_Drb (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Ori_Drv gp (const Tnt& a, const Drb& b) { 
	return Ori_Drv (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Dil gp (const Tnt& a, const Drt& b) { 
	return Dil (
 - a[0] * b[0],
a[0] * b[0]
);
}			
		 
inline Sca gp (const Tnt& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Tnt& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca gp (const Tnt& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Ori_Sta gp (const Tnt& a, const Lin& b) { 
	return Ori_Sta (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Tvd gp (const Tnt& a, const Pln& b) { 
	return Tvd (
 - a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[3]
);
}			
		 
inline Tnt_Flp gp (const Tnt& a, const Flp& b) { 
	return Tnt_Flp (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[3]
);
}			
		 
inline Ori_Lin gp (const Tnt& a, const Dll& b) { 
	return Ori_Lin (
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3]
);
}			
		 
inline Ori_Sph gp (const Tnt& a, const Dlp& b) { 
	return Ori_Sph (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
 - a[0] * b[3],
a[0] * b[3]
);
}			
		 
inline Tnb gp (const Tnt& a, const Vec& b) { 
	return Tnb (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Tnv gp (const Tnt& a, const Biv& b) { 
	return Tnv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Ori gp (const Tnt& a, const Tri& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
inline Tnb gp (const Tnt& a, const Aff& b) { 
	return Tnb (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Tnv gp (const Tnt& a, const Afl& b) { 
	return Tnv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Ori gp (const Tnt& a, const Afp& b) { 
	return Ori (
a[0] * b[3]
);
}			
		 
inline Tnv_Biv gp (const Tnt& a, const Rot& b) { 
	return Tnv_Biv (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Rvd gp (const Tnt& a, const Mot& b) { 
	return Rvd (
 - a[0] * b[7],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[7],
 - a[0] * b[6],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[0]
);
}			
		 
inline Tnt gp (const Tnt& a, const Dil& b) { 
	return Tnt (
a[0] * b[0] + a[0] * b[1]
);
}			
		 
inline Tnt gp (const Tnt& a, const Trv& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
inline Rvd gp (const Tnt& a, const Mtd& b) { 
	return Rvd (
 - a[0] * b[11],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3] - a[0] * b[10],
a[0] * b[2] + a[0] * b[9],
 - a[0] * b[1] - a[0] * b[8],
a[0] * b[11],
 - a[0] * b[6],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[0] + a[0] * b[7]
);
}			
		 
inline Tnt_Flp gp (const Tnt& a, const Trs& b) { 
	return Tnt_Flp (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Par_Tnb gp (const Tnt& a, const Rtc& b) { 
	return Par_Tnb (
a[0] * b[10],
 - a[0] * b[9],
a[0] * b[8],
a[0] * b[14] + a[0] * b[15],
 - a[0] * b[2] - a[0] * b[13],
a[0] * b[1] + a[0] * b[12],
 - a[0] * b[0] - a[0] * b[11],
 - a[0] * b[10],
a[0] * b[9],
 - a[0] * b[8],
 - a[0] * b[4],
a[0] * b[4]
);
}			
		 
inline Rvd gp (const Tnt& a, const Mtt& b) { 
	return Rvd (
 - a[0] * b[15],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[3] - a[0] * b[13],
a[0] * b[2] + a[0] * b[12],
 - a[0] * b[1] - a[0] * b[11],
a[0] * b[15],
 - a[0] * b[9],
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[0] + a[0] * b[10]
);
}			
		 
inline Tnv_Biv gp (const Tnt& a, const Rtt& b) { 
	return Tnv_Biv (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Tnv_Biv gp (const Tnt& a, const Rtd& b) { 
	return Tnv_Biv (
 - a[0] * b[3] - a[0] * b[7],
a[0] * b[2] + a[0] * b[6],
 - a[0] * b[1] - a[0] * b[5],
a[0] * b[0] + a[0] * b[4]
);
}			
		 
inline Tnt gp (const Tnt& a, const Tvd& b) { 
	return Tnt (
a[0] * b[0] + a[0] * b[4]
);
}			
		 
inline Tnt_Flp gp (const Tnt& a, const Tsd& b) { 
	return Tnt_Flp (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0] + a[0] * b[4]
);
}			
		 
inline Ori_Cir gp (const Tnt& a, const Trt& b) { 
	return Ori_Cir (
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[3] - a[0] * b[13],
a[0] * b[2] + a[0] * b[12],
 - a[0] * b[1] - a[0] * b[11],
 - a[0] * b[9],
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[0] + a[0] * b[10]
);
}			
		 
inline Tnv_Biv gp (const Tnt& a, const Rvd& b) { 
	return Tnv_Biv (
 - a[0] * b[3] - a[0] * b[10],
a[0] * b[2] + a[0] * b[9],
 - a[0] * b[1] - a[0] * b[8],
a[0] * b[0] + a[0] * b[7]
);
}			
		 
inline Ori_Cir gp (const Tnt& a, const Tst& b) { 
	return Ori_Cir (
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[3] - a[0] * b[13],
a[0] * b[2] + a[0] * b[12],
 - a[0] * b[1] - a[0] * b[11],
 - a[0] * b[9],
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[0] + a[0] * b[10]
);
}			
		 
inline Rvd gp (const Tnt& a, const Tvt& b) { 
	return Rvd (
 - a[0] * b[14],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[3] - a[0] * b[13],
a[0] * b[2] + a[0] * b[12],
 - a[0] * b[1] - a[0] * b[11],
a[0] * b[14],
 - a[0] * b[9],
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[0] + a[0] * b[10]
);
}			
		 
inline Tnt op (const Tnt& a, const Sca& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
inline Sca op (const Tnt& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Tnt& a, const Inf& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
inline Sca op (const Tnt& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Tnt& a, const Hyp& b) { 
	return Pss (
a[0] * b[1]
);
}			
		 
inline Sca op (const Tnt& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Tnt& a, const Pnt& b) { 
	return Pss (
a[0] * b[4]
);
}			
		 
inline Sca op (const Tnt& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Tnt& a, const Dlp& b) { 
	return Pss (
a[0] * b[3]
);
}			
		 
inline Sca op (const Tnt& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tnt& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Ori ip (const Tnt& a, const Pss& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
inline Sca ip (const Tnt& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Sph& b) { 
	return Sca (
 - a[0] * b[4]
);
}			
		 
inline Sca ip (const Tnt& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Drt& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Tnt& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Pln& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
inline Sca ip (const Tnt& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tnt& a, const Afp& b) { 
	return Sca (
);
}			
		  	
inline Tnt sp (const Tnt& tnt, const Rot& rot) {					
					
const Rot& t1 = rot;
const Tnt& t2 = tnt;
Tnv_Biv t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Tnt (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Mot& mot) {					
					
const Mot& t1 = mot;
const Tnt& t2 = tnt;
Rvd t3 (
 - t1[7] * t2[0],
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[4] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
 - t1[7] * t2[0],
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[4] * t2[0],
t1[0] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Tnt (
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[11] * t5[0]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Dil& dil) {					
					
const Dil& t1 = dil;
const Tnt& t2 = tnt;
Tnt t3 (
t1[0] * t2[0] - t1[1] * t2[0]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Tnt (
t3[0] * t5[0] + t3[0] * t5[1]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Trv& trv) {					
					
const Trv& t1 = trv;
const Tnt& t2 = tnt;
Tnt t3 (
t1[0] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Tnt (
t3[0] * t5[0]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Tnt& t2 = tnt;
Rvd t3 (
 - t1[11] * t2[0],
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[4] * t2[0],
 - t1[3] * t2[0] + t1[10] * t2[0],
t1[2] * t2[0] - t1[9] * t2[0],
 - t1[1] * t2[0] + t1[8] * t2[0],
 - t1[11] * t2[0],
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[4] * t2[0],
t1[0] * t2[0] - t1[7] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Tnt (
t3[4] * t5[3] + t3[4] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] + t3[11] * t5[0] + t3[11] * t5[7]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Trs& trs) {					
					
const Trs& t1 = trs;
const Tnt& t2 = tnt;
Tnt_Flp t3 (
t1[3] * t2[0],
 - t1[2] * t2[0],
t1[1] * t2[0],
t1[3] * t2[0],
 - t1[2] * t2[0],
t1[1] * t2[0],
t1[0] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Tnt (
t3[6] * t5[0]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Tnt& t2 = tnt;
Par_Tnb t3 (
 - t1[10] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
 - t1[14] * t2[0] + t1[15] * t2[0],
t1[2] * t2[0] - t1[13] * t2[0],
 - t1[1] * t2[0] + t1[12] * t2[0],
t1[0] * t2[0] - t1[11] * t2[0],
 - t1[10] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[4] * t2[0],
t1[4] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Tnt (
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] - t3[3] * t5[14] - t3[3] * t5[15] - t3[4] * t5[2] - t3[4] * t5[13] + t3[5] * t5[1] + t3[5] * t5[12] - t3[6] * t5[0] - t3[6] * t5[11] - t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[3]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Tnt& t2 = tnt;
Rvd t3 (
 - t1[15] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
 - t1[3] * t2[0] + t1[13] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
 - t1[1] * t2[0] + t1[11] * t2[0],
 - t1[15] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Tnt (
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[7] * t5[14] - t3[8] * t5[6] + t3[9] * t5[5] - t3[10] * t5[4] + t3[11] * t5[0] + t3[11] * t5[10]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Tnt& t2 = tnt;
Tnv_Biv t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Tnt (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Tnt& t2 = tnt;
Tnv_Biv t3 (
 - t1[3] * t2[0] + t1[7] * t2[0],
t1[2] * t2[0] - t1[6] * t2[0],
 - t1[1] * t2[0] + t1[5] * t2[0],
t1[0] * t2[0] - t1[4] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Tnt (
t3[0] * t5[3] + t3[0] * t5[7] - t3[1] * t5[2] - t3[1] * t5[6] + t3[2] * t5[1] + t3[2] * t5[5] + t3[3] * t5[0] + t3[3] * t5[4]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Tnt& t2 = tnt;
Tnt t3 (
t1[0] * t2[0] - t1[4] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Tnt (
t3[0] * t5[0] + t3[0] * t5[4]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Tnt& t2 = tnt;
Tnt_Flp t3 (
t1[3] * t2[0],
 - t1[2] * t2[0],
t1[1] * t2[0],
t1[3] * t2[0],
 - t1[2] * t2[0],
t1[1] * t2[0],
t1[0] * t2[0] - t1[4] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Tnt (
t3[6] * t5[0] + t3[6] * t5[4]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Trt& trt) {					
					
const Trt& t1 = trt;
const Tnt& t2 = tnt;
Ori_Cir t3 (
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
 - t1[3] * t2[0] + t1[13] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
 - t1[1] * t2[0] + t1[11] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Tnt (
t3[0] * t5[6] - t3[1] * t5[5] + t3[2] * t5[4] + t3[3] * t5[3] + t3[3] * t5[13] - t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[1] + t3[5] * t5[11] - t3[6] * t5[6] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[0] + t3[9] * t5[10]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Tnt& t2 = tnt;
Tnv_Biv t3 (
 - t1[3] * t2[0] + t1[10] * t2[0],
t1[2] * t2[0] - t1[9] * t2[0],
 - t1[1] * t2[0] + t1[8] * t2[0],
t1[0] * t2[0] - t1[7] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Tnt (
t3[0] * t5[3] + t3[0] * t5[10] - t3[1] * t5[2] - t3[1] * t5[9] + t3[2] * t5[1] + t3[2] * t5[8] + t3[3] * t5[0] + t3[3] * t5[7]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Tst& tst) {					
					
const Tst& t1 = tst;
const Tnt& t2 = tnt;
Ori_Cir t3 (
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
 - t1[3] * t2[0] + t1[13] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
 - t1[1] * t2[0] + t1[11] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Tnt (
t3[0] * t5[6] - t3[1] * t5[5] + t3[2] * t5[4] + t3[3] * t5[3] + t3[3] * t5[13] - t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[1] + t3[5] * t5[11] - t3[6] * t5[6] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[0] + t3[9] * t5[10]
);

}
		
	
	  	
inline Tnt sp (const Tnt& tnt, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Tnt& t2 = tnt;
Rvd t3 (
 - t1[14] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
 - t1[3] * t2[0] + t1[13] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
 - t1[1] * t2[0] + t1[11] * t2[0],
 - t1[14] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Tnt (
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[8] * t5[6] + t3[9] * t5[5] - t3[10] * t5[4] + t3[11] * t5[0] + t3[11] * t5[10]
);

}
		
	
		
	} //vsr::
	#endif
	