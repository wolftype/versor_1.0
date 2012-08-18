		#ifndef SCA_H_INCLUDED
		#define SCA_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Sca gp (const Sca& a, const Sca& b) { 
	return Sca (
a[0] * b[0]
);
}			
		 
inline Ori gp (const Sca& a, const Ori& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
inline Inf gp (const Sca& a, const Inf& b) { 
	return Inf (
a[0] * b[0]
);
}			
		 
inline Mnk gp (const Sca& a, const Mnk& b) { 
	return Mnk (
a[0] * b[0]
);
}			
		 
inline Hyp gp (const Sca& a, const Hyp& b) { 
	return Hyp (
a[0] * b[0],
a[0] * b[1]
);
}			
		 
inline Pss gp (const Sca& a, const Pss& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
inline Pnt gp (const Sca& a, const Pnt& b) { 
	return Pnt (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4]
);
}			
		 
inline Par gp (const Sca& a, const Par& b) { 
	return Par (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9]
);
}			
		 
inline Cir gp (const Sca& a, const Cir& b) { 
	return Cir (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9]
);
}			
		 
inline Sph gp (const Sca& a, const Sph& b) { 
	return Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4]
);
}			
		 
inline Sta gp (const Sca& a, const Sta& b) { 
	return Sta (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8]
);
}			
		 
inline Drv gp (const Sca& a, const Drv& b) { 
	return Drv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Drb gp (const Sca& a, const Drb& b) { 
	return Drb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Drt gp (const Sca& a, const Drt& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
inline Tnv gp (const Sca& a, const Tnv& b) { 
	return Tnv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnb gp (const Sca& a, const Tnb& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnt gp (const Sca& a, const Tnt& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
inline Lin gp (const Sca& a, const Lin& b) { 
	return Lin (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Pln gp (const Sca& a, const Pln& b) { 
	return Pln (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Flp gp (const Sca& a, const Flp& b) { 
	return Flp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Dll gp (const Sca& a, const Dll& b) { 
	return Dll (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Dlp gp (const Sca& a, const Dlp& b) { 
	return Dlp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Vec gp (const Sca& a, const Vec& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Biv gp (const Sca& a, const Biv& b) { 
	return Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tri gp (const Sca& a, const Tri& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
inline Aff gp (const Sca& a, const Aff& b) { 
	return Aff (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Afl gp (const Sca& a, const Afl& b) { 
	return Afl (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Afp gp (const Sca& a, const Afp& b) { 
	return Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Rot gp (const Sca& a, const Rot& b) { 
	return Rot (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Mot gp (const Sca& a, const Mot& b) { 
	return Mot (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7]
);
}			
		 
inline Dil gp (const Sca& a, const Dil& b) { 
	return Dil (
a[0] * b[0],
a[0] * b[1]
);
}			
		 
inline Trv gp (const Sca& a, const Trv& b) { 
	return Trv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Mtd gp (const Sca& a, const Mtd& b) { 
	return Mtd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11]
);
}			
		 
inline Trs gp (const Sca& a, const Trs& b) { 
	return Trs (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Rtc gp (const Sca& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11],
a[0] * b[12],
a[0] * b[13],
a[0] * b[14],
a[0] * b[15]
);
}			
		 
inline Mtt gp (const Sca& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11],
a[0] * b[12],
a[0] * b[13],
a[0] * b[14],
a[0] * b[15]
);
}			
		 
inline Rtt gp (const Sca& a, const Rtt& b) { 
	return Rtt (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7]
);
}			
		 
inline Rtd gp (const Sca& a, const Rtd& b) { 
	return Rtd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7]
);
}			
		 
inline Tvd gp (const Sca& a, const Tvd& b) { 
	return Tvd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4]
);
}			
		 
inline Tsd gp (const Sca& a, const Tsd& b) { 
	return Tsd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4]
);
}			
		 
inline Trt gp (const Sca& a, const Trt& b) { 
	return Trt (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11],
a[0] * b[12],
a[0] * b[13]
);
}			
		 
inline Rvd gp (const Sca& a, const Rvd& b) { 
	return Rvd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11]
);
}			
		 
inline Tst gp (const Sca& a, const Tst& b) { 
	return Tst (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11],
a[0] * b[12],
a[0] * b[13],
a[0] * b[14]
);
}			
		 
inline Tvt gp (const Sca& a, const Tvt& b) { 
	return Tvt (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11],
a[0] * b[12],
a[0] * b[13],
a[0] * b[14]
);
}			
		 
inline Sca op (const Sca& a, const Sca& b) { 
	return Sca (
a[0] * b[0]
);
}			
		 
inline Ori op (const Sca& a, const Ori& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
inline Inf op (const Sca& a, const Inf& b) { 
	return Inf (
a[0] * b[0]
);
}			
		 
inline Mnk op (const Sca& a, const Mnk& b) { 
	return Mnk (
a[0] * b[0]
);
}			
		 
inline Hyp op (const Sca& a, const Hyp& b) { 
	return Hyp (
a[0] * b[0],
a[0] * b[1]
);
}			
		 
inline Pss op (const Sca& a, const Pss& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
inline Pnt op (const Sca& a, const Pnt& b) { 
	return Pnt (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4]
);
}			
		 
inline Par op (const Sca& a, const Par& b) { 
	return Par (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9]
);
}			
		 
inline Cir op (const Sca& a, const Cir& b) { 
	return Cir (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9]
);
}			
		 
inline Sph op (const Sca& a, const Sph& b) { 
	return Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4]
);
}			
		 
inline Sta op (const Sca& a, const Sta& b) { 
	return Sta (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8]
);
}			
		 
inline Drv op (const Sca& a, const Drv& b) { 
	return Drv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Drb op (const Sca& a, const Drb& b) { 
	return Drb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Drt op (const Sca& a, const Drt& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
inline Tnv op (const Sca& a, const Tnv& b) { 
	return Tnv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnb op (const Sca& a, const Tnb& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnt op (const Sca& a, const Tnt& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
inline Lin op (const Sca& a, const Lin& b) { 
	return Lin (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Pln op (const Sca& a, const Pln& b) { 
	return Pln (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Flp op (const Sca& a, const Flp& b) { 
	return Flp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Dll op (const Sca& a, const Dll& b) { 
	return Dll (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Dlp op (const Sca& a, const Dlp& b) { 
	return Dlp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Vec op (const Sca& a, const Vec& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Biv op (const Sca& a, const Biv& b) { 
	return Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tri op (const Sca& a, const Tri& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
inline Aff op (const Sca& a, const Aff& b) { 
	return Aff (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Afl op (const Sca& a, const Afl& b) { 
	return Afl (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Afp op (const Sca& a, const Afp& b) { 
	return Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Sca ip (const Sca& a, const Sca& b) { 
	return Sca (
a[0] * b[0]
);
}			
		 
inline Ori ip (const Sca& a, const Ori& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
inline Inf ip (const Sca& a, const Inf& b) { 
	return Inf (
a[0] * b[0]
);
}			
		 
inline Mnk ip (const Sca& a, const Mnk& b) { 
	return Mnk (
a[0] * b[0]
);
}			
		 
inline Hyp ip (const Sca& a, const Hyp& b) { 
	return Hyp (
a[0] * b[0],
a[0] * b[1]
);
}			
		 
inline Pss ip (const Sca& a, const Pss& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
inline Pnt ip (const Sca& a, const Pnt& b) { 
	return Pnt (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4]
);
}			
		 
inline Par ip (const Sca& a, const Par& b) { 
	return Par (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9]
);
}			
		 
inline Cir ip (const Sca& a, const Cir& b) { 
	return Cir (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9]
);
}			
		 
inline Sph ip (const Sca& a, const Sph& b) { 
	return Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4]
);
}			
		 
inline Sta ip (const Sca& a, const Sta& b) { 
	return Sta (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8]
);
}			
		 
inline Drv ip (const Sca& a, const Drv& b) { 
	return Drv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Drb ip (const Sca& a, const Drb& b) { 
	return Drb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Drt ip (const Sca& a, const Drt& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
inline Tnv ip (const Sca& a, const Tnv& b) { 
	return Tnv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnb ip (const Sca& a, const Tnb& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tnt ip (const Sca& a, const Tnt& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
inline Lin ip (const Sca& a, const Lin& b) { 
	return Lin (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Pln ip (const Sca& a, const Pln& b) { 
	return Pln (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Flp ip (const Sca& a, const Flp& b) { 
	return Flp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Dll ip (const Sca& a, const Dll& b) { 
	return Dll (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Dlp ip (const Sca& a, const Dlp& b) { 
	return Dlp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Vec ip (const Sca& a, const Vec& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Biv ip (const Sca& a, const Biv& b) { 
	return Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tri ip (const Sca& a, const Tri& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
inline Aff ip (const Sca& a, const Aff& b) { 
	return Aff (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Afl ip (const Sca& a, const Afl& b) { 
	return Afl (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
inline Afp ip (const Sca& a, const Afp& b) { 
	return Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		  	
inline Sca sp (const Sca& sca, const Rot& rot) {					
					
const Rot& t1 = rot;
const Sca& t2 = sca;
Rot t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Sca (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Mot& mot) {					
					
const Mot& t1 = mot;
const Sca& t2 = sca;
Mot t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Sca (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Dil& dil) {					
					
const Dil& t1 = dil;
const Sca& t2 = sca;
Dil t3 (
t1[0] * t2[0],
t1[1] * t2[0]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Sca (
t3[0] * t5[0] + t3[1] * t5[1]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Trv& trv) {					
					
const Trv& t1 = trv;
const Sca& t2 = sca;
Trv t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Sca (
t3[0] * t5[0]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Sca& t2 = sca;
Mtd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
t1[11] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Sca (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Trs& trs) {					
					
const Trs& t1 = trs;
const Sca& t2 = sca;
Trs t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Sca (
t3[0] * t5[0]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Sca& t2 = sca;
Rtc t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
t1[11] * t2[0],
t1[12] * t2[0],
t1[13] * t2[0],
t1[14] * t2[0],
t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Sca (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Sca& t2 = sca;
Mtt t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
t1[11] * t2[0],
t1[12] * t2[0],
t1[13] * t2[0],
t1[14] * t2[0],
t1[15] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Sca (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Sca& t2 = sca;
Rtt t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Sca (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Sca& t2 = sca;
Rtd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Sca (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] - t3[7] * t5[7]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Sca& t2 = sca;
Tvd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Sca (
t3[0] * t5[0] + t3[4] * t5[4]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Sca& t2 = sca;
Tsd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Sca (
t3[0] * t5[0] + t3[4] * t5[4]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Trt& trt) {					
					
const Trt& t1 = trt;
const Sca& t2 = sca;
Trt t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
t1[11] * t2[0],
t1[12] * t2[0],
t1[13] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Sca (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Sca& t2 = sca;
Rvd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
t1[11] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Sca (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Tst& tst) {					
					
const Tst& t1 = tst;
const Sca& t2 = sca;
Tst t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
t1[11] * t2[0],
t1[12] * t2[0],
t1[13] * t2[0],
t1[14] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Sca (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13]
);

}
		
	
	  	
inline Sca sp (const Sca& sca, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Sca& t2 = sca;
Tvt t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
t1[11] * t2[0],
t1[12] * t2[0],
t1[13] * t2[0],
t1[14] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Sca (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13]
);

}
		
	
		
	} //vsr::
	#endif
	