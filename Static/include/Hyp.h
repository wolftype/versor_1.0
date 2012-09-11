		#ifndef HYP_H_INCLUDED
		#define HYP_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Hyp gp (const Hyp& a, const Sca& b) { 
	return Hyp (
a[0] * b[0],
a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Sca*)(&b));
}			
		 
inline Dil gp (const Hyp& a, const Ori& b) { 
	return Dil (
 - a[1] * b[0],
 - a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Ori*)(&b));
}			
		 
inline Dil gp (const Hyp& a, const Inf& b) { 
	return Dil (
 - a[0] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Inf*)(&b));
}			
		 
inline Hyp gp (const Hyp& a, const Mnk& b) { 
	return Hyp (
a[0] * b[0],
 - a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Mnk*)(&b));
}			
		 
inline Dil gp (const Hyp& a, const Hyp& b) { 
	return Dil (
 - a[0] * b[1] - a[1] * b[0],
a[0] * b[1] - a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Hyp*)(&b));
}			
		 
inline Hyp_Pss gp (const Hyp& a, const Pss& b) { 
	return Hyp_Pss (
 - a[0] * b[0],
a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Pss*)(&b));
}			
		 
inline Hyp_Pnt gp (const Hyp& a, const Pnt& b) { 
	return Hyp_Pnt (
 - a[0] * b[4] - a[1] * b[3],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
a[0] * b[4] - a[1] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Pnt*)(&b));
}			
		 
inline Hyp_Par gp (const Hyp& a, const Par& b) { 
	return Hyp_Par (
a[0] * b[6] + a[1] * b[3],
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9],
 - a[1] * b[9],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
 - a[0] * b[6] + a[1] * b[3],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Par*)(&b));
}			
		 
inline Hyp_Cir gp (const Hyp& a, const Cir& b) { 
	return Hyp_Cir (
 - a[0] * b[3] - a[1] * b[0],
 - a[0] * b[4] - a[1] * b[1],
 - a[0] * b[5] - a[1] * b[2],
 - a[0] * b[6],
 - a[0] * b[7],
 - a[0] * b[8],
a[1] * b[6],
a[1] * b[7],
a[1] * b[8],
a[0] * b[3] - a[1] * b[0],
a[0] * b[4] - a[1] * b[1],
a[0] * b[5] - a[1] * b[2],
 - a[0] * b[9],
 - a[1] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Cir*)(&b));
}			
		 
inline Hyp_Sph gp (const Hyp& a, const Sph& b) { 
	return Hyp_Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
a[0] * b[4] + a[1] * b[3],
 - a[0] * b[4] + a[1] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Sph*)(&b));
}			
		 
inline Hyp_Sta gp (const Hyp& a, const Sta& b) { 
	return Hyp_Sta (
a[0] * b[6] + a[1] * b[3],
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
 - a[0] * b[6] + a[1] * b[3],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Sta*)(&b));
}			
		 
inline Ori_Drv gp (const Hyp& a, const Drv& b) { 
	return Ori_Drv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Drv*)(&b));
}			
		 
inline Ori_Drb gp (const Hyp& a, const Drb& b) { 
	return Ori_Drb (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Drb*)(&b));
}			
		 
inline Ori_Drt gp (const Hyp& a, const Drt& b) { 
	return Ori_Drt (
a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Drt*)(&b));
}			
		 
inline Ori_Drv gp (const Hyp& a, const Tnv& b) { 
	return Ori_Drv (
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Tnv*)(&b));
}			
		 
inline Ori_Drb gp (const Hyp& a, const Tnb& b) { 
	return Ori_Drb (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori_Drt gp (const Hyp& a, const Tnt& b) { 
	return Ori_Drt (
a[1] * b[0],
a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Tnt*)(&b));
}			
		 
inline Hyp_Lin gp (const Hyp& a, const Lin& b) { 
	return Hyp_Lin (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Lin*)(&b));
}			
		 
inline Hyp_Sph gp (const Hyp& a, const Pln& b) { 
	return Hyp_Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
a[0] * b[3],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Pln*)(&b));
}			
		 
inline Hyp_Flp gp (const Hyp& a, const Flp& b) { 
	return Hyp_Flp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[1] * b[3],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Flp*)(&b));
}			
		 
inline Hyp_Dfp gp (const Hyp& a, const Dfp& b) { 
	return Hyp_Dfp (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[3],
 - a[1] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Dfp*)(&b));
}			
		 
inline Hyp_Sta gp (const Hyp& a, const Dll& b) { 
	return Hyp_Sta (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Dll*)(&b));
}			
		 
inline Hyp_Pnt gp (const Hyp& a, const Dlp& b) { 
	return Hyp_Pnt (
 - a[0] * b[3],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Dlp*)(&b));
}			
		 
inline Hyp_Vec gp (const Hyp& a, const Vec& b) { 
	return Hyp_Vec (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Vec*)(&b));
}			
		 
inline Hyp_Biv gp (const Hyp& a, const Biv& b) { 
	return Hyp_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Biv*)(&b));
}			
		 
inline Hyp_Pss gp (const Hyp& a, const Tri& b) { 
	return Hyp_Pss (
 - a[0] * b[0],
 - a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Tri*)(&b));
}			
		 
inline Hyp_Pnt gp (const Hyp& a, const Aff& b) { 
	return Hyp_Pnt (
 - a[1] * b[3],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[1] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Aff*)(&b));
}			
		 
inline Hyp_Sta gp (const Hyp& a, const Afl& b) { 
	return Hyp_Sta (
a[1] * b[3],
a[1] * b[4],
a[1] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Afl*)(&b));
}			
		 
inline Hyp_Dfp gp (const Hyp& a, const Afp& b) { 
	return Hyp_Dfp (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[0] * b[3],
 - a[1] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Afp*)(&b));
}			
		 
inline Hyp_Flp gp (const Hyp& a, const Dap& b) { 
	return Hyp_Flp (
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
a[0] * b[3],
 - a[1] * b[3],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Dap*)(&b));
}			
		 
inline Hyp_Sph gp (const Hyp& a, const Daf& b) { 
	return Hyp_Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
a[1] * b[3],
a[1] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Daf*)(&b));
}			
		 
inline Hyp_Lin gp (const Hyp& a, const Dal& b) { 
	return Hyp_Lin (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Dal*)(&b));
}			
		 
inline Hyp_Vec gp (const Hyp& a, const Mnv& b) { 
	return Hyp_Vec (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Mnv*)(&b));
}			
		 
inline Hyp_Vec_Mnv gp (const Hyp& a, const Rot& b) { 
	return Hyp_Vec_Mnv (
a[0] * b[0],
a[1] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Rot*)(&b));
}			
		 
inline Rtc gp (const Hyp& a, const Mot& b) { 
	return Rtc (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0],
a[1] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
a[0] * b[7],
 - a[0] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Mot*)(&b));
}			
		 
inline Hyp gp (const Hyp& a, const Dil& b) { 
	return Hyp (
a[0] * b[0] + a[0] * b[1],
a[1] * b[0] - a[1] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Dil*)(&b));
}			
		 
inline Hyp_Flp gp (const Hyp& a, const Trv& b) { 
	return Hyp_Flp (
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
a[0] * b[0],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Trv*)(&b));
}			
		 
inline Rtc gp (const Hyp& a, const Mtd& b) { 
	return Rtc (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0] + a[0] * b[7],
a[1] * b[0] - a[1] * b[7],
a[0] * b[1] + a[0] * b[8],
a[0] * b[2] + a[0] * b[9],
a[0] * b[3] + a[0] * b[10],
a[1] * b[1] - a[1] * b[8],
a[1] * b[2] - a[1] * b[9],
a[1] * b[3] - a[1] * b[10],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
a[0] * b[11],
 - a[0] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Mtd*)(&b));
}			
		 
inline Hyp_Flp gp (const Hyp& a, const Trs& b) { 
	return Hyp_Flp (
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[0],
a[1] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Trs*)(&b));
}			
		 
inline Mtt gp (const Hyp& a, const Rtc& b) { 
	return Mtt (
 - a[0] * b[4] - a[1] * b[3],
 - a[0] * b[8] - a[1] * b[5],
 - a[0] * b[9] - a[1] * b[6],
 - a[0] * b[10] - a[1] * b[7],
 - a[0] * b[0] - a[0] * b[11],
 - a[0] * b[1] - a[0] * b[12],
 - a[0] * b[2] - a[0] * b[13],
 - a[1] * b[0] + a[1] * b[11],
 - a[1] * b[1] + a[1] * b[12],
 - a[1] * b[2] + a[1] * b[13],
a[0] * b[4] - a[1] * b[3],
a[0] * b[8] - a[1] * b[5],
a[0] * b[9] - a[1] * b[6],
a[0] * b[10] - a[1] * b[7],
 - a[0] * b[14] - a[0] * b[15],
 - a[1] * b[14] + a[1] * b[15]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Rtc*)(&b));
}			
		 
inline Rtc gp (const Hyp& a, const Mtt& b) { 
	return Rtc (
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9] + a[1] * b[6],
a[0] * b[0] + a[0] * b[10],
a[1] * b[0] - a[1] * b[10],
a[0] * b[1] + a[0] * b[11],
a[0] * b[2] + a[0] * b[12],
a[0] * b[3] + a[0] * b[13],
a[1] * b[1] - a[1] * b[11],
a[1] * b[2] - a[1] * b[12],
a[1] * b[3] - a[1] * b[13],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5],
 - a[0] * b[9] + a[1] * b[6],
a[0] * b[15] + a[1] * b[14],
 - a[0] * b[15] + a[1] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Mtt*)(&b));
}			
		 
inline Rtc gp (const Hyp& a, const Rtt& b) { 
	return Rtc (
a[1] * b[4],
a[1] * b[5],
a[1] * b[6],
a[0] * b[0],
a[1] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5],
a[1] * b[6],
a[1] * b[7],
a[1] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Rtt*)(&b));
}			
		 
inline Hyp_Vec_Mnv gp (const Hyp& a, const Rtd& b) { 
	return Hyp_Vec_Mnv (
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] - a[1] * b[4],
a[0] * b[1] + a[0] * b[5],
a[0] * b[2] + a[0] * b[6],
a[0] * b[3] + a[0] * b[7],
a[1] * b[1] - a[1] * b[5],
a[1] * b[2] - a[1] * b[6],
a[1] * b[3] - a[1] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Rtd*)(&b));
}			
		 
inline Hyp_Flp gp (const Hyp& a, const Tvd& b) { 
	return Hyp_Flp (
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] - a[1] * b[4],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Tvd*)(&b));
}			
		 
inline Hyp_Flp gp (const Hyp& a, const Tsd& b) { 
	return Hyp_Flp (
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] - a[1] * b[4],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Tsd*)(&b));
}			
		 
inline Hyp_Par gp (const Hyp& a, const Trt& b) { 
	return Hyp_Par (
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9] + a[1] * b[6],
a[0] * b[0] + a[0] * b[10],
a[1] * b[0] - a[1] * b[10],
a[0] * b[1] + a[0] * b[11],
a[0] * b[2] + a[0] * b[12],
a[0] * b[3] + a[0] * b[13],
a[1] * b[1] - a[1] * b[11],
a[1] * b[2] - a[1] * b[12],
a[1] * b[3] - a[1] * b[13],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5],
 - a[0] * b[9] + a[1] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Trt*)(&b));
}			
		 
inline Rtc gp (const Hyp& a, const Rvd& b) { 
	return Rtc (
a[1] * b[4],
a[1] * b[5],
a[1] * b[6],
a[0] * b[0] + a[0] * b[7],
a[1] * b[0] - a[1] * b[7],
a[0] * b[1] + a[0] * b[8],
a[0] * b[2] + a[0] * b[9],
a[0] * b[3] + a[0] * b[10],
a[1] * b[1] - a[1] * b[8],
a[1] * b[2] - a[1] * b[9],
a[1] * b[3] - a[1] * b[10],
a[1] * b[4],
a[1] * b[5],
a[1] * b[6],
a[1] * b[11],
a[1] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Rvd*)(&b));
}			
		 
inline Rtc gp (const Hyp& a, const Tst& b) { 
	return Rtc (
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9] + a[1] * b[6],
a[0] * b[0] + a[0] * b[10],
a[1] * b[0] - a[1] * b[10],
a[0] * b[1] + a[0] * b[11],
a[0] * b[2] + a[0] * b[12],
a[0] * b[3] + a[0] * b[13],
a[1] * b[1] - a[1] * b[11],
a[1] * b[2] - a[1] * b[12],
a[1] * b[3] - a[1] * b[13],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5],
 - a[0] * b[9] + a[1] * b[6],
a[1] * b[14],
a[1] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Tst*)(&b));
}			
		 
inline Rtc gp (const Hyp& a, const Tvt& b) { 
	return Rtc (
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9] + a[1] * b[6],
a[0] * b[0] + a[0] * b[10],
a[1] * b[0] - a[1] * b[10],
a[0] * b[1] + a[0] * b[11],
a[0] * b[2] + a[0] * b[12],
a[0] * b[3] + a[0] * b[13],
a[1] * b[1] - a[1] * b[11],
a[1] * b[2] - a[1] * b[12],
a[1] * b[3] - a[1] * b[13],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5],
 - a[0] * b[9] + a[1] * b[6],
a[0] * b[14],
 - a[0] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Tvt*)(&b));
}			
		 
inline Hyp_Par gp (const Hyp& a, const Bst& b) { 
	return Hyp_Par (
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9] + a[1] * b[6],
a[0] * b[0] + a[0] * b[10],
a[1] * b[0] - a[1] * b[10],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5],
 - a[0] * b[9] + a[1] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Hyp, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Hyp*)(&a),*(Bst*)(&b));
}			
		 
inline Hyp op (const Hyp& a, const Sca& b) { 
	return Hyp (
a[0] * b[0],
a[1] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Sca*)(&b));
}			
		 
inline Mnk op (const Hyp& a, const Ori& b) { 
	return Mnk (
 - a[1] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Ori*)(&b));
}			
		 
inline Mnk op (const Hyp& a, const Inf& b) { 
	return Mnk (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Inf*)(&b));
}			
		 
inline Sca op (const Hyp& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Mnk*)(&b));
}			
		 
inline Mnk op (const Hyp& a, const Hyp& b) { 
	return Mnk (
a[0] * b[1] - a[1] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Hyp& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Pss*)(&b));
}			
		 
inline Pss_Sta op (const Hyp& a, const Par& b) { 
	return Pss_Sta (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
 - a[0] * b[6] + a[1] * b[3],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Par*)(&b));
}			
		 
inline Sph op (const Hyp& a, const Cir& b) { 
	return Sph (
a[0] * b[3] - a[1] * b[0],
a[0] * b[4] - a[1] * b[1],
a[0] * b[5] - a[1] * b[2],
 - a[0] * b[9],
 - a[1] * b[9]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Cir*)(&b));
}			
		 
inline Pss op (const Hyp& a, const Sph& b) { 
	return Pss (
 - a[0] * b[4] + a[1] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Sph*)(&b));
}			
		 
inline Pss_Sta op (const Hyp& a, const Sta& b) { 
	return Pss_Sta (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
 - a[0] * b[6] + a[1] * b[3],
 - a[0] * b[7] + a[1] * b[4],
 - a[0] * b[8] + a[1] * b[5]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Sta*)(&b));
}			
		 
inline Mnv op (const Hyp& a, const Drv& b) { 
	return Mnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Drv*)(&b));
}			
		 
inline Mnk_Biv op (const Hyp& a, const Drb& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Drb*)(&b));
}			
		 
inline Pss op (const Hyp& a, const Drt& b) { 
	return Pss (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Drt*)(&b));
}			
		 
inline Mnv op (const Hyp& a, const Tnv& b) { 
	return Mnv (
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Tnv*)(&b));
}			
		 
inline Mnk_Biv op (const Hyp& a, const Tnb& b) { 
	return Mnk_Biv (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Tnb*)(&b));
}			
		 
inline Pss op (const Hyp& a, const Tnt& b) { 
	return Pss (
a[1] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Tnt*)(&b));
}			
		 
inline Mnk_Biv op (const Hyp& a, const Lin& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Lin*)(&b));
}			
		 
inline Pss op (const Hyp& a, const Pln& b) { 
	return Pss (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Pln*)(&b));
}			
		 
inline Mnv op (const Hyp& a, const Flp& b) { 
	return Mnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Flp*)(&b));
}			
		 
inline Sph op (const Hyp& a, const Dfp& b) { 
	return Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[3],
 - a[1] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Dfp*)(&b));
}			
		 
inline Pss_Sta op (const Hyp& a, const Dll& b) { 
	return Pss_Sta (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Dll*)(&b));
}			
		 
inline Hyp_Vec op (const Hyp& a, const Vec& b) { 
	return Hyp_Vec (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Vec*)(&b));
}			
		 
inline Hyp_Biv op (const Hyp& a, const Biv& b) { 
	return Hyp_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Biv*)(&b));
}			
		 
inline Hyp_Pss op (const Hyp& a, const Tri& b) { 
	return Hyp_Pss (
 - a[0] * b[0],
 - a[1] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Tri*)(&b));
}			
		 
inline Pss_Sta op (const Hyp& a, const Afl& b) { 
	return Pss_Sta (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Afl*)(&b));
}			
		 
inline Sph op (const Hyp& a, const Afp& b) { 
	return Sph (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[0] * b[3],
 - a[1] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Afp*)(&b));
}			
		 
inline Mnv op (const Hyp& a, const Dap& b) { 
	return Mnv (
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Dap*)(&b));
}			
		 
inline Pss op (const Hyp& a, const Daf& b) { 
	return Pss (
a[1] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Daf*)(&b));
}			
		 
inline Mnk_Biv op (const Hyp& a, const Dal& b) { 
	return Mnk_Biv (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Dal*)(&b));
}			
		 
inline Sca op (const Hyp& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Hyp, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Hyp*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Hyp& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Hyp& a, const Ori& b) { 
	return Sca (
 - a[1] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Hyp& a, const Inf& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Inf*)(&b));
}			
		 
inline Hyp ip (const Hyp& a, const Mnk& b) { 
	return Hyp (
a[0] * b[0],
 - a[1] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Hyp& a, const Hyp& b) { 
	return Sca (
 - a[0] * b[1] - a[1] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Hyp*)(&b));
}			
		 
inline Hyp_Pss ip (const Hyp& a, const Pss& b) { 
	return Hyp_Pss (
 - a[0] * b[0],
a[1] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Hyp& a, const Pnt& b) { 
	return Sca (
 - a[0] * b[4] - a[1] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Pnt*)(&b));
}			
		 
inline Pnt ip (const Hyp& a, const Par& b) { 
	return Pnt (
a[0] * b[6] + a[1] * b[3],
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5],
a[0] * b[9],
 - a[1] * b[9]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Par*)(&b));
}			
		 
inline Sta ip (const Hyp& a, const Cir& b) { 
	return Sta (
 - a[0] * b[3] - a[1] * b[0],
 - a[0] * b[4] - a[1] * b[1],
 - a[0] * b[5] - a[1] * b[2],
 - a[0] * b[6],
 - a[0] * b[7],
 - a[0] * b[8],
a[1] * b[6],
a[1] * b[7],
a[1] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Cir*)(&b));
}			
		 
inline Vec ip (const Hyp& a, const Sta& b) { 
	return Vec (
a[0] * b[6] + a[1] * b[3],
a[0] * b[7] + a[1] * b[4],
a[0] * b[8] + a[1] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Sta*)(&b));
}			
		 
inline Vec ip (const Hyp& a, const Drv& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Drv*)(&b));
}			
		 
inline Biv ip (const Hyp& a, const Drb& b) { 
	return Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Drb*)(&b));
}			
		 
inline Tri ip (const Hyp& a, const Drt& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Drt*)(&b));
}			
		 
inline Vec ip (const Hyp& a, const Tnv& b) { 
	return Vec (
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Tnv*)(&b));
}			
		 
inline Biv ip (const Hyp& a, const Tnb& b) { 
	return Biv (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Tnb*)(&b));
}			
		 
inline Tri ip (const Hyp& a, const Tnt& b) { 
	return Tri (
a[1] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Tnt*)(&b));
}			
		 
inline Sta ip (const Hyp& a, const Lin& b) { 
	return Sta (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Lin*)(&b));
}			
		 
inline Pnt ip (const Hyp& a, const Flp& b) { 
	return Pnt (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[1] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Flp*)(&b));
}			
		 
inline Biv ip (const Hyp& a, const Dfp& b) { 
	return Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Dfp*)(&b));
}			
		 
inline Vec ip (const Hyp& a, const Dll& b) { 
	return Vec (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Hyp& a, const Dlp& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Hyp& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Hyp& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Biv*)(&b));
}			
		 
inline Sca ip (const Hyp& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Hyp& a, const Aff& b) { 
	return Sca (
 - a[1] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Aff*)(&b));
}			
		 
inline Vec ip (const Hyp& a, const Afl& b) { 
	return Vec (
a[1] * b[3],
a[1] * b[4],
a[1] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Afl*)(&b));
}			
		 
inline Biv ip (const Hyp& a, const Afp& b) { 
	return Biv (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Afp*)(&b));
}			
		 
inline Pnt ip (const Hyp& a, const Dap& b) { 
	return Pnt (
a[1] * b[0],
a[1] * b[1],
a[1] * b[2],
a[0] * b[3],
 - a[1] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Dap*)(&b));
}			
		 
inline Sta ip (const Hyp& a, const Dal& b) { 
	return Sta (
 - a[1] * b[0],
 - a[1] * b[1],
 - a[1] * b[2],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
a[1] * b[3],
a[1] * b[4],
a[1] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Dal*)(&b));
}			
		 
inline Hyp_Vec ip (const Hyp& a, const Mnv& b) { 
	return Hyp_Vec (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[1] * b[0],
a[1] * b[1],
a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Hyp, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Hyp*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Hyp sp (const Hyp& hyp, const Rot& rot) {					
					
const Rot& t1 = rot;
const Hyp& t2 = hyp;
Hyp_Vec_Mnv t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[1] * t2[1],
t1[2] * t2[1],
t1[3] * t2[1]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Hyp (
t3[0] * t5[0] - t3[2] * t5[1] - t3[3] * t5[2] - t3[4] * t5[3],
t3[1] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Mot& mot) {					
					
const Mot& t1 = mot;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0],
t1[0] * t2[1],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[1] * t2[1],
t1[2] * t2[1],
t1[3] * t2[1],
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
 - t1[7] * t2[0],
 - t1[7] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Hyp (
t3[3] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3] + t3[11] * t5[4] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] - t3[15] * t5[7]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Dil& dil) {					
					
const Dil& t1 = dil;
const Hyp& t2 = hyp;
Hyp t3 (
t1[0] * t2[0] - t1[1] * t2[0],
t1[0] * t2[1] + t1[1] * t2[1]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Hyp (
t3[0] * t5[0] + t3[0] * t5[1],
t3[1] * t5[0] - t3[1] * t5[1]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Trv& trv) {					
					
const Trv& t1 = trv;
const Hyp& t2 = hyp;
Hyp_Flp t3 (
 - t1[1] * t2[1],
 - t1[2] * t2[1],
 - t1[3] * t2[1],
t1[0] * t2[0],
t1[0] * t2[1],
t1[1] * t2[1],
t1[2] * t2[1],
t1[3] * t2[1]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Hyp (
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[0]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0] - t1[7] * t2[0],
t1[0] * t2[1] + t1[7] * t2[1],
t1[1] * t2[0] - t1[8] * t2[0],
t1[2] * t2[0] - t1[9] * t2[0],
t1[3] * t2[0] - t1[10] * t2[0],
t1[1] * t2[1] + t1[8] * t2[1],
t1[2] * t2[1] + t1[9] * t2[1],
t1[3] * t2[1] + t1[10] * t2[1],
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
 - t1[11] * t2[0],
 - t1[11] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Hyp (
t3[3] * t5[0] + t3[3] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[3] - t3[7] * t5[10],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] - t3[4] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[10] * t5[3] + t3[10] * t5[10] + t3[11] * t5[4] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[11] - t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Trs& trs) {					
					
const Trs& t1 = trs;
const Hyp& t2 = hyp;
Hyp_Flp t3 (
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0],
t1[0] * t2[0],
t1[0] * t2[1],
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Hyp (
t3[3] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] + t3[5] * t5[1] + t3[6] * t5[2] + t3[7] * t5[3]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Hyp& t2 = hyp;
Mtt t3 (
 - t1[3] * t2[1] - t1[4] * t2[0],
 - t1[5] * t2[1] - t1[8] * t2[0],
 - t1[6] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[1] - t1[10] * t2[0],
t1[0] * t2[0] - t1[11] * t2[0],
t1[1] * t2[0] - t1[12] * t2[0],
t1[2] * t2[0] - t1[13] * t2[0],
t1[0] * t2[1] + t1[11] * t2[1],
t1[1] * t2[1] + t1[12] * t2[1],
t1[2] * t2[1] + t1[13] * t2[1],
t1[3] * t2[1] - t1[4] * t2[0],
t1[5] * t2[1] - t1[8] * t2[0],
t1[6] * t2[1] - t1[9] * t2[0],
t1[7] * t2[1] - t1[10] * t2[0],
t1[14] * t2[0] - t1[15] * t2[0],
t1[14] * t2[1] + t1[15] * t2[1]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Hyp (
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] - t3[4] * t5[0] - t3[4] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] - t3[10] * t5[3] + t3[11] * t5[5] + t3[12] * t5[6] + t3[13] * t5[7] + t3[14] * t5[14] + t3[14] * t5[15],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] - t3[7] * t5[0] + t3[7] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[4] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] + t3[15] * t5[14] - t3[15] * t5[15]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[1] - t1[7] * t2[0],
 - t1[5] * t2[1] - t1[8] * t2[0],
 - t1[6] * t2[1] - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[0] * t2[1] + t1[10] * t2[1],
t1[1] * t2[0] - t1[11] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
t1[3] * t2[0] - t1[13] * t2[0],
t1[1] * t2[1] + t1[11] * t2[1],
t1[2] * t2[1] + t1[12] * t2[1],
t1[3] * t2[1] + t1[13] * t2[1],
t1[4] * t2[1] - t1[7] * t2[0],
t1[5] * t2[1] - t1[8] * t2[0],
t1[6] * t2[1] - t1[9] * t2[0],
 - t1[14] * t2[1] - t1[15] * t2[0],
t1[14] * t2[1] - t1[15] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[14] + t3[15] * t5[14],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9] - t3[14] * t5[15] - t3[15] * t5[15]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[1],
 - t1[5] * t2[1],
 - t1[6] * t2[1],
t1[0] * t2[0],
t1[0] * t2[1],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[1] * t2[1],
t1[2] * t2[1],
t1[3] * t2[1],
t1[4] * t2[1],
t1[5] * t2[1],
t1[6] * t2[1],
 - t1[7] * t2[1],
t1[7] * t2[1]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[4] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Hyp& t2 = hyp;
Hyp_Vec_Mnv t3 (
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] + t1[4] * t2[1],
t1[1] * t2[0] - t1[5] * t2[0],
t1[2] * t2[0] - t1[6] * t2[0],
t1[3] * t2[0] - t1[7] * t2[0],
t1[1] * t2[1] + t1[5] * t2[1],
t1[2] * t2[1] + t1[6] * t2[1],
t1[3] * t2[1] + t1[7] * t2[1]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Hyp (
t3[0] * t5[0] + t3[0] * t5[4] - t3[2] * t5[1] - t3[2] * t5[5] - t3[3] * t5[2] - t3[3] * t5[6] - t3[4] * t5[3] - t3[4] * t5[7],
t3[1] * t5[0] - t3[1] * t5[4] - t3[5] * t5[1] + t3[5] * t5[5] - t3[6] * t5[2] + t3[6] * t5[6] - t3[7] * t5[3] + t3[7] * t5[7]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Hyp& t2 = hyp;
Hyp_Flp t3 (
 - t1[1] * t2[1],
 - t1[2] * t2[1],
 - t1[3] * t2[1],
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] + t1[4] * t2[1],
t1[1] * t2[1],
t1[2] * t2[1],
t1[3] * t2[1]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Hyp (
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0] + t3[3] * t5[4] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[0] - t3[4] * t5[4]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Hyp& t2 = hyp;
Hyp_Flp t3 (
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0],
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] + t1[4] * t2[1],
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Hyp (
t3[3] * t5[0] + t3[3] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] - t3[4] * t5[4] + t3[5] * t5[1] + t3[6] * t5[2] + t3[7] * t5[3]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Trt& trt) {					
					
const Trt& t1 = trt;
const Hyp& t2 = hyp;
Hyp_Par t3 (
 - t1[4] * t2[1] - t1[7] * t2[0],
 - t1[5] * t2[1] - t1[8] * t2[0],
 - t1[6] * t2[1] - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[0] * t2[1] + t1[10] * t2[1],
t1[1] * t2[0] - t1[11] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
t1[3] * t2[0] - t1[13] * t2[0],
t1[1] * t2[1] + t1[11] * t2[1],
t1[2] * t2[1] + t1[12] * t2[1],
t1[3] * t2[1] + t1[13] * t2[1],
t1[4] * t2[1] - t1[7] * t2[0],
t1[5] * t2[1] - t1[8] * t2[0],
t1[6] * t2[1] - t1[9] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[1],
 - t1[5] * t2[1],
 - t1[6] * t2[1],
t1[0] * t2[0] - t1[7] * t2[0],
t1[0] * t2[1] + t1[7] * t2[1],
t1[1] * t2[0] - t1[8] * t2[0],
t1[2] * t2[0] - t1[9] * t2[0],
t1[3] * t2[0] - t1[10] * t2[0],
t1[1] * t2[1] + t1[8] * t2[1],
t1[2] * t2[1] + t1[9] * t2[1],
t1[3] * t2[1] + t1[10] * t2[1],
t1[4] * t2[1],
t1[5] * t2[1],
t1[6] * t2[1],
 - t1[11] * t2[1],
t1[11] * t2[1]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[3] - t3[7] * t5[10] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[11] + t3[15] * t5[11],
t3[4] * t5[0] - t3[4] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[10] * t5[3] + t3[10] * t5[10]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Tst& tst) {					
					
const Tst& t1 = tst;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[1] - t1[7] * t2[0],
 - t1[5] * t2[1] - t1[8] * t2[0],
 - t1[6] * t2[1] - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[0] * t2[1] + t1[10] * t2[1],
t1[1] * t2[0] - t1[11] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
t1[3] * t2[0] - t1[13] * t2[0],
t1[1] * t2[1] + t1[11] * t2[1],
t1[2] * t2[1] + t1[12] * t2[1],
t1[3] * t2[1] + t1[13] * t2[1],
t1[4] * t2[1] - t1[7] * t2[0],
t1[5] * t2[1] - t1[8] * t2[0],
t1[6] * t2[1] - t1[9] * t2[0],
 - t1[14] * t2[1],
t1[14] * t2[1]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[14] + t3[15] * t5[14],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Hyp& t2 = hyp;
Rtc t3 (
 - t1[4] * t2[1] - t1[7] * t2[0],
 - t1[5] * t2[1] - t1[8] * t2[0],
 - t1[6] * t2[1] - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[0] * t2[1] + t1[10] * t2[1],
t1[1] * t2[0] - t1[11] * t2[0],
t1[2] * t2[0] - t1[12] * t2[0],
t1[3] * t2[0] - t1[13] * t2[0],
t1[1] * t2[1] + t1[11] * t2[1],
t1[2] * t2[1] + t1[12] * t2[1],
t1[3] * t2[1] + t1[13] * t2[1],
t1[4] * t2[1] - t1[7] * t2[0],
t1[5] * t2[1] - t1[8] * t2[0],
t1[6] * t2[1] - t1[9] * t2[0],
 - t1[14] * t2[0],
 - t1[14] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9] - t3[14] * t5[14] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Hyp sp (const Hyp& hyp, const Bst& bst) {					
					
const Bst& t1 = bst;
const Hyp& t2 = hyp;
Hyp_Par t3 (
 - t1[4] * t2[1] - t1[7] * t2[0],
 - t1[5] * t2[1] - t1[8] * t2[0],
 - t1[6] * t2[1] - t1[9] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0],
t1[0] * t2[1] + t1[10] * t2[1],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[1] * t2[1],
t1[2] * t2[1],
t1[3] * t2[1],
t1[4] * t2[1] - t1[7] * t2[0],
t1[5] * t2[1] - t1[8] * t2[0],
t1[6] * t2[1] - t1[9] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Hyp (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Vec& vec) {					
					
const Vec& t1 = vec;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Vec t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Hyp (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2],
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Pnt t4 (
 - t1[3] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1],
 - t1[3] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Hyp (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2],
t4[0] * t6[3] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] + t4[7] * t6[3]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Pln& pln) {					
					
const Pln& t1 = pln;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Sph t4 (
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1],
 - t1[3] * t3[0],
 - t1[3] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Hyp (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2],
t4[3] * t6[0] + t4[4] * t6[1] + t4[5] * t6[2] - t4[6] * t6[3] - t4[7] * t6[3]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Dll& dll) {					
					
const Dll& t1 = dll;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Sta t4 (
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1],
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Hyp (
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[6] * t6[0] - t4[7] * t6[1] - t4[8] * t6[2] + t4[9] * t6[3] + t4[10] * t6[4] + t4[11] * t6[5]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Lin& lin) {					
					
const Lin& t1 = lin;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Lin t4 (
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0],
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0],
t1[3] * t3[1],
t1[4] * t3[1],
t1[5] * t3[1],
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Hyp (
 - t4[3] * t6[3] - t4[4] * t6[4] - t4[5] * t6[5],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[6] * t6[3] + t4[7] * t6[4] + t4[8] * t6[5] - t4[9] * t6[0] - t4[10] * t6[1] - t4[11] * t6[2]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Pnt t4 (
 - t1[3] * t3[1] - t1[4] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1],
t1[3] * t3[1] - t1[4] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Hyp (
t4[0] * t6[3] - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] - t4[7] * t6[3],
t4[0] * t6[4] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] + t4[7] * t6[4]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Par& par) {					
					
const Par& t1 = par;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Par t4 (
 - t1[3] * t3[1] - t1[6] * t3[0],
 - t1[4] * t3[1] - t1[7] * t3[0],
 - t1[5] * t3[1] - t1[8] * t3[0],
 - t1[9] * t3[0],
t1[9] * t3[1],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1],
t1[3] * t3[1] - t1[6] * t3[0],
t1[4] * t3[1] - t1[7] * t3[0],
t1[5] * t3[1] - t1[8] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Hyp (
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[3] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[2] - t4[11] * t6[3] - t4[12] * t6[4] - t4[13] * t6[5],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[4] * t6[9] - t4[8] * t6[0] - t4[9] * t6[1] - t4[10] * t6[2] + t4[11] * t6[6] + t4[12] * t6[7] + t4[13] * t6[8]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Cir& cir) {					
					
const Cir& t1 = cir;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Cir t4 (
 - t1[0] * t3[1] - t1[3] * t3[0],
 - t1[1] * t3[1] - t1[4] * t3[0],
 - t1[2] * t3[1] - t1[5] * t3[0],
 - t1[6] * t3[0],
 - t1[7] * t3[0],
 - t1[8] * t3[0],
t1[6] * t3[1],
t1[7] * t3[1],
t1[8] * t3[1],
t1[0] * t3[1] - t1[3] * t3[0],
t1[1] * t3[1] - t1[4] * t3[0],
t1[2] * t3[1] - t1[5] * t3[0],
t1[9] * t3[0],
t1[9] * t3[1]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Hyp (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] - t4[3] * t6[6] - t4[4] * t6[7] - t4[5] * t6[8] + t4[9] * t6[0] + t4[10] * t6[1] + t4[11] * t6[2] + t4[12] * t6[9],
 - t4[0] * t6[3] - t4[1] * t6[4] - t4[2] * t6[5] + t4[6] * t6[6] + t4[7] * t6[7] + t4[8] * t6[8] - t4[9] * t6[3] - t4[10] * t6[4] - t4[11] * t6[5] + t4[13] * t6[9]
);

}
		
	
	  	
template<>
inline Hyp re (const Hyp& hyp, const Sph& sph) {					
					
const Sph& t1 = sph;
const Hyp& t2 = hyp;
Hyp t3 = involute( t2);
Hyp_Sph t4 (
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0],
t1[0] * t3[1],
t1[1] * t3[1],
t1[2] * t3[1],
 - t1[3] * t3[1] - t1[4] * t3[0],
t1[3] * t3[1] - t1[4] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Hyp (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] - t4[6] * t6[3] + t4[7] * t6[3],
t4[3] * t6[0] + t4[4] * t6[1] + t4[5] * t6[2] - t4[6] * t6[4] - t4[7] * t6[4]
);

}
		
	
		
	} //vsr::
	#endif
	