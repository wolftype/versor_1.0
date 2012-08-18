		#ifndef TRI_H_INCLUDED
		#define TRI_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Tri gp (const Tri& a, const Sca& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
inline Tnt gp (const Tri& a, const Ori& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
inline Drt gp (const Tri& a, const Inf& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
inline Pss gp (const Tri& a, const Mnk& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
inline Hyp_Pss gp (const Tri& a, const Hyp& b) { 
	return Hyp_Pss (
a[0] * b[0],
a[0] * b[1]
);
}			
		 
inline Mnk gp (const Tri& a, const Pss& b) { 
	return Mnk (
 - a[0] * b[0]
);
}			
		 
inline Mnk_Sph gp (const Tri& a, const Pnt& b) { 
	return Mnk_Sph (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3],
a[0] * b[4]
);
}			
		 
inline Mnk_Cir gp (const Tri& a, const Par& b) { 
	return Mnk_Cir (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3],
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[6],
a[0] * b[9]
);
}			
		 
inline Mnk_Par gp (const Tri& a, const Cir& b) { 
	return Mnk_Par (
 - a[0] * b[9],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3],
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[6]
);
}			
		 
inline Mnk_Pnt gp (const Tri& a, const Sph& b) { 
	return Mnk_Pnt (
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Sta_Tri gp (const Tri& a, const Sta& b) { 
	return Sta_Tri (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3],
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[6]
);
}			
		 
inline Drb gp (const Tri& a, const Drv& b) { 
	return Drb (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Drv gp (const Tri& a, const Drb& b) { 
	return Drv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Inf gp (const Tri& a, const Drt& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
inline Tnb gp (const Tri& a, const Tnv& b) { 
	return Tnb (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Tnv gp (const Tri& a, const Tnb& b) { 
	return Tnv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Ori gp (const Tri& a, const Tnt& b) { 
	return Ori (
 - a[0] * b[0]
);
}			
		 
inline Mnk_Dll gp (const Tri& a, const Lin& b) { 
	return Mnk_Dll (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3]
);
}			
		 
inline Mnk_Dlp gp (const Tri& a, const Pln& b) { 
	return Mnk_Dlp (
 - a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Flp_Tri gp (const Tri& a, const Flp& b) { 
	return Flp_Tri (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3]
);
}			
		 
inline Mnk_Lin gp (const Tri& a, const Dll& b) { 
	return Mnk_Lin (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3]
);
}			
		 
inline Mnk_Pln gp (const Tri& a, const Dlp& b) { 
	return Mnk_Pln (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3]
);
}			
		 
inline Biv gp (const Tri& a, const Vec& b) { 
	return Biv (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Vec gp (const Tri& a, const Biv& b) { 
	return Vec (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Sca gp (const Tri& a, const Tri& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
inline Tri_Aff gp (const Tri& a, const Aff& b) { 
	return Tri_Aff (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3]
);
}			
		 
inline Tri_Afl gp (const Tri& a, const Afl& b) { 
	return Tri_Afl (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3]
);
}			
		 
inline Trv gp (const Tri& a, const Afp& b) { 
	return Trv (
 - a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Vec_Biv gp (const Tri& a, const Rot& b) { 
	return Vec_Biv (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Lin_Pln gp (const Tri& a, const Mot& b) { 
	return Lin_Pln (
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
		 
inline Ori_Drt gp (const Tri& a, const Dil& b) { 
	return Ori_Drt (
a[0] * b[0],
a[0] * b[1]
);
}			
		 
inline Afp gp (const Tri& a, const Trv& b) { 
	return Afp (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Par_Drb gp (const Tri& a, const Mtd& b) { 
	return Par_Drb (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
 - a[0] * b[11],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[10],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[0],
a[0] * b[7]
);
}			
		 
inline Pss_Flp gp (const Tri& a, const Trs& b) { 
	return Pss_Flp (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Mtt gp (const Tri& a, const Rtc& b) { 
	return Mtt (
 - a[0] * b[14],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[7],
a[0] * b[6],
 - a[0] * b[5],
 - a[0] * b[10],
a[0] * b[9],
 - a[0] * b[8],
 - a[0] * b[15],
a[0] * b[13],
 - a[0] * b[12],
a[0] * b[11],
a[0] * b[3],
a[0] * b[4]
);
}			
		 
inline Rtc gp (const Tri& a, const Mtt& b) { 
	return Rtc (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
 - a[0] * b[14],
 - a[0] * b[15],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[13],
a[0] * b[12],
 - a[0] * b[11],
a[0] * b[0],
a[0] * b[10]
);
}			
		 
inline Vec_Afl gp (const Tri& a, const Rtt& b) { 
	return Vec_Afl (
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
		 
inline Drv_Tnb gp (const Tri& a, const Rtd& b) { 
	return Drv_Tnb (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
 - a[0] * b[7],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[0],
a[0] * b[4]
);
}			
		 
inline Ori_Sph gp (const Tri& a, const Tvd& b) { 
	return Ori_Sph (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
a[0] * b[0],
a[0] * b[4]
);
}			
		 
inline Inf_Sph gp (const Tri& a, const Tsd& b) { 
	return Inf_Sph (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
a[0] * b[0],
a[0] * b[4]
);
}			
		 
inline Flp_Afp gp (const Tri& a, const Trt& b) { 
	return Flp_Afp (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[13],
a[0] * b[12],
 - a[0] * b[11],
a[0] * b[0],
a[0] * b[10]
);
}			
		 
inline Par_Tnb gp (const Tri& a, const Rvd& b) { 
	return Par_Tnb (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
 - a[0] * b[11],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[10],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[0],
a[0] * b[7]
);
}			
		 
inline Par_Afp gp (const Tri& a, const Tst& b) { 
	return Par_Afp (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
 - a[0] * b[14],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[13],
a[0] * b[12],
 - a[0] * b[11],
a[0] * b[0],
a[0] * b[10]
);
}			
		 
inline Cir_Flp gp (const Tri& a, const Tvt& b) { 
	return Cir_Flp (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
 - a[0] * b[14],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[13],
a[0] * b[12],
 - a[0] * b[11],
a[0] * b[0],
a[0] * b[10]
);
}			
		 
inline Tri op (const Tri& a, const Sca& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
inline Tnt op (const Tri& a, const Ori& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
inline Drt op (const Tri& a, const Inf& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
inline Pss op (const Tri& a, const Mnk& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
inline Hyp_Pss op (const Tri& a, const Hyp& b) { 
	return Hyp_Pss (
a[0] * b[0],
a[0] * b[1]
);
}			
		 
inline Sca op (const Tri& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Hyp_Pss op (const Tri& a, const Pnt& b) { 
	return Hyp_Pss (
a[0] * b[3],
a[0] * b[4]
);
}			
		 
inline Pss op (const Tri& a, const Par& b) { 
	return Pss (
a[0] * b[9]
);
}			
		 
inline Sca op (const Tri& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Pss op (const Tri& a, const Flp& b) { 
	return Pss (
a[0] * b[3]
);
}			
		 
inline Sca op (const Tri& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Drt op (const Tri& a, const Dlp& b) { 
	return Drt (
a[0] * b[3]
);
}			
		 
inline Sca op (const Tri& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Tnt op (const Tri& a, const Aff& b) { 
	return Tnt (
a[0] * b[3]
);
}			
		 
inline Sca op (const Tri& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Mnk ip (const Tri& a, const Pss& b) { 
	return Mnk (
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Tri& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Cir& b) { 
	return Sca (
 - a[0] * b[9]
);
}			
		 
inline Hyp ip (const Tri& a, const Sph& b) { 
	return Hyp (
 - a[0] * b[3],
 - a[0] * b[4]
);
}			
		 
inline Sca ip (const Tri& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Inf ip (const Tri& a, const Drt& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Tri& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Ori ip (const Tri& a, const Tnt& b) { 
	return Ori (
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Tri& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Inf ip (const Tri& a, const Pln& b) { 
	return Inf (
 - a[0] * b[3]
);
}			
		 
inline Sca ip (const Tri& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Tri& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Tri& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Afp& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		  	
inline Tri sp (const Tri& tri, const Rot& rot) {					
					
const Rot& t1 = rot;
const Tri& t2 = tri;
Vec_Biv t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Tri (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Mot& mot) {					
					
const Mot& t1 = mot;
const Tri& t2 = tri;
Lin_Pln t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[7] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
t1[0] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Tri (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Dil& dil) {					
					
const Dil& t1 = dil;
const Tri& t2 = tri;
Ori_Drt t3 (
t1[0] * t2[0],
t1[1] * t2[0]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Tri (
t3[0] * t5[0] + t3[1] * t5[1]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Trv& trv) {					
					
const Trv& t1 = trv;
const Tri& t2 = tri;
Afp t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Tri (
t3[3] * t5[0]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Tri& t2 = tri;
Par_Drb t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[11] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
 - t1[10] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[0] * t2[0],
t1[7] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Tri (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[0] + t3[11] * t5[7]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Trs& trs) {					
					
const Trs& t1 = trs;
const Tri& t2 = tri;
Pss_Flp t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Tri (
t3[3] * t5[0]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Tri& t2 = tri;
Mtt t3 (
 - t1[14] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0],
t1[7] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
t1[10] * t2[0],
 - t1[9] * t2[0],
t1[8] * t2[0],
 - t1[15] * t2[0],
t1[13] * t2[0],
 - t1[12] * t2[0],
t1[11] * t2[0],
 - t1[3] * t2[0],
 - t1[4] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Tri (
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] + t3[3] * t5[0] - t3[4] * t5[10] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[15] + t3[11] * t5[13] - t3[12] * t5[12] + t3[13] * t5[11] - t3[14] * t5[4] - t3[15] * t5[3]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Tri& t2 = tri;
Rtc t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[14] * t2[0],
t1[15] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
 - t1[9] * t2[0],
t1[8] * t2[0],
 - t1[7] * t2[0],
 - t1[13] * t2[0],
t1[12] * t2[0],
 - t1[11] * t2[0],
t1[0] * t2[0],
t1[10] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Tri (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[15] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[13] - t3[12] * t5[12] + t3[13] * t5[11] + t3[14] * t5[0] + t3[15] * t5[10]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Tri& t2 = tri;
Vec_Afl t3 (
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
return Tri (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Tri& t2 = tri;
Drv_Tnb t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
 - t1[7] * t2[0],
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[0] * t2[0],
t1[4] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Tri (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[7] - t3[4] * t5[6] + t3[5] * t5[5] + t3[6] * t5[0] + t3[7] * t5[4]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Tri& t2 = tri;
Ori_Sph t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0],
t1[4] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Tri (
t3[3] * t5[0] + t3[4] * t5[4]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Tri& t2 = tri;
Inf_Sph t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0],
t1[4] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Tri (
t3[3] * t5[0] + t3[4] * t5[4]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Trt& trt) {					
					
const Trt& t1 = trt;
const Tri& t2 = tri;
Flp_Afp t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
 - t1[9] * t2[0],
t1[8] * t2[0],
 - t1[7] * t2[0],
 - t1[13] * t2[0],
t1[12] * t2[0],
 - t1[11] * t2[0],
t1[0] * t2[0],
t1[10] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Tri (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[9] - t3[4] * t5[8] + t3[5] * t5[7] + t3[6] * t5[6] - t3[7] * t5[5] + t3[8] * t5[4] + t3[9] * t5[13] - t3[10] * t5[12] + t3[11] * t5[11] + t3[12] * t5[0] + t3[13] * t5[10]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Tri& t2 = tri;
Par_Tnb t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[11] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
 - t1[10] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[0] * t2[0],
t1[7] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Tri (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[0] + t3[11] * t5[7]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Tst& tst) {					
					
const Tst& t1 = tst;
const Tri& t2 = tri;
Par_Afp t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[14] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
 - t1[9] * t2[0],
t1[8] * t2[0],
 - t1[7] * t2[0],
 - t1[13] * t2[0],
t1[12] * t2[0],
 - t1[11] * t2[0],
t1[0] * t2[0],
t1[10] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Tri (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[9] - t3[5] * t5[8] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[5] + t3[9] * t5[4] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
inline Tri sp (const Tri& tri, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Tri& t2 = tri;
Cir_Flp t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[14] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
 - t1[9] * t2[0],
t1[8] * t2[0],
 - t1[7] * t2[0],
 - t1[13] * t2[0],
t1[12] * t2[0],
 - t1[11] * t2[0],
t1[0] * t2[0],
t1[10] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Tri (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[9] - t3[5] * t5[8] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[5] + t3[9] * t5[4] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[0] + t3[14] * t5[10]
);

}
		
	
		
	} //vsr::
	#endif
	