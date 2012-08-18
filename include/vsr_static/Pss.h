		#ifndef PSS_H_INCLUDED
		#define PSS_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Pss gp (const Pss& a, const Sca& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
inline Tnt gp (const Pss& a, const Ori& b) { 
	return Tnt (
 - a[0] * b[0]
);
}			
		 
inline Drt gp (const Pss& a, const Inf& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
inline Tri gp (const Pss& a, const Mnk& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
inline Hyp_Pss gp (const Pss& a, const Hyp& b) { 
	return Hyp_Pss (
 - a[0] * b[0],
a[0] * b[1]
);
}			
		 
inline Sca gp (const Pss& a, const Pss& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
inline Sph gp (const Pss& a, const Pnt& b) { 
	return Sph (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[3],
a[0] * b[4]
);
}			
		 
inline Cir gp (const Pss& a, const Par& b) { 
	return Cir (
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3],
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[6],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[9]
);
}			
		 
inline Par gp (const Pss& a, const Cir& b) { 
	return Par (
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[6],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3],
 - a[0] * b[9]
);
}			
		 
inline Pnt gp (const Pss& a, const Sph& b) { 
	return Pnt (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[3],
 - a[0] * b[4]
);
}			
		 
inline Pss_Sta gp (const Pss& a, const Sta& b) { 
	return Pss_Sta (
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3],
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[6],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Drb gp (const Pss& a, const Drv& b) { 
	return Drb (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Drv gp (const Pss& a, const Drb& b) { 
	return Drv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Inf gp (const Pss& a, const Drt& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
inline Tnb gp (const Pss& a, const Tnv& b) { 
	return Tnb (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Tnv gp (const Pss& a, const Tnb& b) { 
	return Tnv (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Ori gp (const Pss& a, const Tnt& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
inline Dll gp (const Pss& a, const Lin& b) { 
	return Dll (
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Dlp gp (const Pss& a, const Pln& b) { 
	return Dlp (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
 - a[0] * b[3]
);
}			
		 
inline Pss_Flp gp (const Pss& a, const Flp& b) { 
	return Pss_Flp (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3]
);
}			
		 
inline Lin gp (const Pss& a, const Dll& b) { 
	return Lin (
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Pln gp (const Pss& a, const Dlp& b) { 
	return Pln (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3]
);
}			
		 
inline Mnk_Biv gp (const Pss& a, const Vec& b) { 
	return Mnk_Biv (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Mnk_Vec gp (const Pss& a, const Biv& b) { 
	return Mnk_Vec (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Mnk gp (const Pss& a, const Tri& b) { 
	return Mnk (
 - a[0] * b[0]
);
}			
		 
inline Pss_Aff gp (const Pss& a, const Aff& b) { 
	return Pss_Aff (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[3]
);
}			
		 
inline Pss_Afl gp (const Pss& a, const Afl& b) { 
	return Pss_Afl (
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Pss_Afp gp (const Pss& a, const Afp& b) { 
	return Pss_Afp (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[3]
);
}			
		 
inline Mnk_Vec_Biv gp (const Pss& a, const Rot& b) { 
	return Mnk_Vec_Biv (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Lin_Dll gp (const Pss& a, const Mot& b) { 
	return Lin_Dll (
 - a[0] * b[7],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Ori_Drt gp (const Pss& a, const Dil& b) { 
	return Ori_Drt (
a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Mnk_Afp gp (const Pss& a, const Trv& b) { 
	return Mnk_Afp (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Par_Drb gp (const Pss& a, const Mtd& b) { 
	return Par_Drb (
 - a[0] * b[10],
a[0] * b[9],
 - a[0] * b[8],
 - a[0] * b[11],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[7],
a[0] * b[0]
);
}			
		 
inline Flp_Tri gp (const Pss& a, const Trs& b) { 
	return Flp_Tri (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Mtt gp (const Pss& a, const Rtc& b) { 
	return Mtt (
 - a[0] * b[15],
a[0] * b[13],
 - a[0] * b[12],
a[0] * b[11],
a[0] * b[7],
 - a[0] * b[6],
a[0] * b[5],
 - a[0] * b[10],
a[0] * b[9],
 - a[0] * b[8],
 - a[0] * b[14],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[3],
a[0] * b[4]
);
}			
		 
inline Rtc gp (const Pss& a, const Mtt& b) { 
	return Rtc (
 - a[0] * b[13],
a[0] * b[12],
 - a[0] * b[11],
a[0] * b[14],
 - a[0] * b[15],
 - a[0] * b[6],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[10],
a[0] * b[0]
);
}			
		 
inline Mnk_Vec_Afl gp (const Pss& a, const Rtt& b) { 
	return Mnk_Vec_Afl (
a[0] * b[7],
 - a[0] * b[6],
a[0] * b[5],
 - a[0] * b[4],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Drv_Tnb gp (const Pss& a, const Rtd& b) { 
	return Drv_Tnb (
 - a[0] * b[7],
a[0] * b[6],
 - a[0] * b[5],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[4],
a[0] * b[0]
);
}			
		 
inline Ori_Sph gp (const Pss& a, const Tvd& b) { 
	return Ori_Sph (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[4],
a[0] * b[0]
);
}			
		 
inline Inf_Sph gp (const Pss& a, const Tsd& b) { 
	return Inf_Sph (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
a[0] * b[4],
a[0] * b[0]
);
}			
		 
inline Flp_Afp gp (const Pss& a, const Trt& b) { 
	return Flp_Afp (
 - a[0] * b[13],
a[0] * b[12],
 - a[0] * b[11],
 - a[0] * b[6],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[10],
a[0] * b[0]
);
}			
		 
inline Par_Tnb gp (const Pss& a, const Rvd& b) { 
	return Par_Tnb (
 - a[0] * b[10],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[11],
 - a[0] * b[6],
a[0] * b[5],
 - a[0] * b[4],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[7],
a[0] * b[0]
);
}			
		 
inline Par_Afp gp (const Pss& a, const Tst& b) { 
	return Par_Afp (
 - a[0] * b[13],
a[0] * b[12],
 - a[0] * b[11],
a[0] * b[14],
 - a[0] * b[6],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[10],
a[0] * b[0]
);
}			
		 
inline Cir_Flp gp (const Pss& a, const Tvt& b) { 
	return Cir_Flp (
 - a[0] * b[13],
a[0] * b[12],
 - a[0] * b[11],
 - a[0] * b[14],
 - a[0] * b[6],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[10],
a[0] * b[0]
);
}			
		 
inline Pss op (const Pss& a, const Sca& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
inline Sca op (const Pss& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Pss& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Pss& a, const Afp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Ori& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Inf& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Mnk& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Hyp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Pss& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
inline Sca ip (const Pss& a, const Pnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Par& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Cir& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Sph& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Sta& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Drv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Drb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Drt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Tnv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Tnb& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Tnt& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Lin& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Pln& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Flp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Dll& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Dlp& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Aff& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Afl& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Pss& a, const Afp& b) { 
	return Sca (
);
}			
		  	
inline Pss sp (const Pss& pss, const Rot& rot) {					
					
const Rot& t1 = rot;
const Pss& t2 = pss;
Mnk_Vec_Biv t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Pss (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Mot& mot) {					
					
const Mot& t1 = mot;
const Pss& t2 = pss;
Lin_Dll t3 (
 - t1[7] * t2[0],
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[4] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Pss (
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Dil& dil) {					
					
const Dil& t1 = dil;
const Pss& t2 = pss;
Ori_Drt t3 (
t1[1] * t2[0],
t1[0] * t2[0]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Pss (
t3[0] * t5[1] + t3[1] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Trv& trv) {					
					
const Trv& t1 = trv;
const Pss& t2 = pss;
Mnk_Afp t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Pss (
t3[3] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Pss& t2 = pss;
Par_Drb t3 (
 - t1[10] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
 - t1[11] * t2[0],
t1[6] * t2[0],
 - t1[5] * t2[0],
t1[4] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[7] * t2[0],
t1[0] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Pss (
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[7] + t3[11] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Trs& trs) {					
					
const Trs& t1 = trs;
const Pss& t2 = pss;
Flp_Tri t3 (
t1[3] * t2[0],
 - t1[2] * t2[0],
t1[1] * t2[0],
t1[0] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Pss (
t3[3] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Pss& t2 = pss;
Mtt t3 (
 - t1[15] * t2[0],
t1[13] * t2[0],
 - t1[12] * t2[0],
t1[11] * t2[0],
t1[7] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[10] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
 - t1[14] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0],
 - t1[3] * t2[0],
t1[4] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Pss (
t3[0] * t5[15] + t3[1] * t5[13] - t3[2] * t5[12] + t3[3] * t5[11] + t3[4] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] - t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[14] + t3[11] * t5[2] - t3[12] * t5[1] + t3[13] * t5[0] + t3[14] * t5[4] - t3[15] * t5[3]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Pss& t2 = pss;
Rtc t3 (
 - t1[13] * t2[0],
t1[12] * t2[0],
 - t1[11] * t2[0],
t1[14] * t2[0],
 - t1[15] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[10] * t2[0],
t1[0] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Pss (
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] - t3[3] * t5[15] + t3[4] * t5[14] - t3[5] * t5[9] + t3[6] * t5[8] - t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[3] - t3[12] * t5[2] + t3[13] * t5[1] + t3[14] * t5[10] + t3[15] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Pss& t2 = pss;
Mnk_Vec_Afl t3 (
t1[7] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Pss (
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Pss& t2 = pss;
Drv_Tnb t3 (
 - t1[7] * t2[0],
t1[6] * t2[0],
 - t1[5] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[4] * t2[0],
t1[0] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Pss (
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] + t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[4] + t3[7] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Pss& t2 = pss;
Ori_Sph t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[4] * t2[0],
t1[0] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Pss (
t3[3] * t5[4] + t3[4] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Pss& t2 = pss;
Inf_Sph t3 (
t1[3] * t2[0],
 - t1[2] * t2[0],
t1[1] * t2[0],
t1[4] * t2[0],
t1[0] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Pss (
t3[3] * t5[4] + t3[4] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Trt& trt) {					
					
const Trt& t1 = trt;
const Pss& t2 = pss;
Flp_Afp t3 (
 - t1[13] * t2[0],
t1[12] * t2[0],
 - t1[11] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[10] * t2[0],
t1[0] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Pss (
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] - t3[3] * t5[9] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[6] - t3[7] * t5[5] + t3[8] * t5[4] + t3[9] * t5[3] - t3[10] * t5[2] + t3[11] * t5[1] + t3[12] * t5[10] + t3[13] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Pss& t2 = pss;
Par_Tnb t3 (
 - t1[10] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[11] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[7] * t2[0],
t1[0] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Pss (
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[7] + t3[11] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Tst& tst) {					
					
const Tst& t1 = tst;
const Pss& t2 = pss;
Par_Afp t3 (
 - t1[13] * t2[0],
t1[12] * t2[0],
 - t1[11] * t2[0],
t1[14] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[10] * t2[0],
t1[0] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Pss (
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] - t3[4] * t5[9] + t3[5] * t5[8] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[5] + t3[9] * t5[4] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[10] + t3[14] * t5[0]
);

}
		
	
	  	
inline Pss sp (const Pss& pss, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Pss& t2 = pss;
Cir_Flp t3 (
 - t1[13] * t2[0],
t1[12] * t2[0],
 - t1[11] * t2[0],
 - t1[14] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[10] * t2[0],
t1[0] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Pss (
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] - t3[4] * t5[9] + t3[5] * t5[8] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[5] + t3[9] * t5[4] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[10] + t3[14] * t5[0]
);

}
		
	
		
	} //vsr::
	#endif
	