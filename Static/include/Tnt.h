		#ifndef TNT_H_INCLUDED
		#define TNT_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Tnt gp (const Tnt& a, const Sca& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Sca*)(&b));
}			
		 
inline Sca gp (const Tnt& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Ori*)(&b));
}			
		 
inline Ori_Drt gp (const Tnt& a, const Inf& b) { 
	return Ori_Drt (
 - a[0] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Inf*)(&b));
}			
		 
inline Tnt gp (const Tnt& a, const Mnk& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Mnk*)(&b));
}			
		 
inline Ori_Drt gp (const Tnt& a, const Hyp& b) { 
	return Ori_Drt (
 - a[0] * b[1],
a[0] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Hyp*)(&b));
}			
		 
inline Ori gp (const Tnt& a, const Pss& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Pss*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Pnt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Par*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Cir*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Sph*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Sta*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Drv*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Drb*)(&b));
}			
		 
inline Dil gp (const Tnt& a, const Drt& b) { 
	return Dil (
 - a[0] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Drt*)(&b));
}			
		 
inline Sca gp (const Tnt& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca gp (const Tnt& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca gp (const Tnt& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Tnt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Lin*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Pln*)(&b));
}			
		 
inline Ori_Dfp gp (const Tnt& a, const Flp& b) { 
	return Ori_Dfp (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Flp*)(&b));
}			
		 
inline Ori_Flp gp (const Tnt& a, const Dfp& b) { 
	return Ori_Flp (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Dfp*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Dll*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Dlp*)(&b));
}			
		 
inline Tnb gp (const Tnt& a, const Vec& b) { 
	return Tnb (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Vec*)(&b));
}			
		 
inline Tnv gp (const Tnt& a, const Biv& b) { 
	return Tnv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Biv*)(&b));
}			
		 
inline Ori gp (const Tnt& a, const Tri& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Tri*)(&b));
}			
		 
inline Tnb gp (const Tnt& a, const Aff& b) { 
	return Tnb (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Aff*)(&b));
}			
		 
inline Tnv gp (const Tnt& a, const Afl& b) { 
	return Tnv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Afl*)(&b));
}			
		 
inline Ori gp (const Tnt& a, const Afp& b) { 
	return Ori (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Afp*)(&b));
}			
		 
inline Tnt gp (const Tnt& a, const Dap& b) { 
	return Tnt (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Dap*)(&b));
}			
		 
inline Tnv gp (const Tnt& a, const Daf& b) { 
	return Tnv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Daf*)(&b));
}			
		 
inline Tnb gp (const Tnt& a, const Dal& b) { 
	return Tnb (
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Dal*)(&b));
}			
		 
inline Tnb gp (const Tnt& a, const Mnv& b) { 
	return Tnb (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Mnv*)(&b));
}			
		 
inline Tnv_Biv gp (const Tnt& a, const Rot& b) { 
	return Tnv_Biv (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Rot*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Mot*)(&b));
}			
		 
inline Tnt gp (const Tnt& a, const Dil& b) { 
	return Tnt (
a[0] * b[0] + a[0] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Dil*)(&b));
}			
		 
inline Tnt gp (const Tnt& a, const Trv& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Trv*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Mtd*)(&b));
}			
		 
inline Ori_Dfp gp (const Tnt& a, const Trs& b) { 
	return Ori_Dfp (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Trs*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Rtc*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Mtt*)(&b));
}			
		 
inline Tnv_Biv gp (const Tnt& a, const Rtt& b) { 
	return Tnv_Biv (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Rtt*)(&b));
}			
		 
inline Tnv_Biv gp (const Tnt& a, const Rtd& b) { 
	return Tnv_Biv (
 - a[0] * b[3] - a[0] * b[7],
a[0] * b[2] + a[0] * b[6],
 - a[0] * b[1] - a[0] * b[5],
a[0] * b[0] + a[0] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Rtd*)(&b));
}			
		 
inline Tnt gp (const Tnt& a, const Tvd& b) { 
	return Tnt (
a[0] * b[0] + a[0] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Tvd*)(&b));
}			
		 
inline Ori_Dfp gp (const Tnt& a, const Tsd& b) { 
	return Ori_Dfp (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0] + a[0] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Tsd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Trt*)(&b));
}			
		 
inline Tnv_Biv gp (const Tnt& a, const Rvd& b) { 
	return Tnv_Biv (
 - a[0] * b[3] - a[0] * b[10],
a[0] * b[2] + a[0] * b[9],
 - a[0] * b[1] - a[0] * b[8],
a[0] * b[0] + a[0] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Rvd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Tst*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tnt, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Tvt*)(&b));
}			
		 
inline Ori_Cir gp (const Tnt& a, const Bst& b) { 
	return Ori_Cir (
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
 - a[0] * b[9],
a[0] * b[8],
 - a[0] * b[7],
a[0] * b[0] + a[0] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnt, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnt*)(&a),*(Bst*)(&b));
}			
		 
inline Tnt op (const Tnt& a, const Sca& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Sca*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Ori*)(&b));
}			
		 
inline Pss op (const Tnt& a, const Inf& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Inf*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Mnk*)(&b));
}			
		 
inline Pss op (const Tnt& a, const Hyp& b) { 
	return Pss (
a[0] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Pss*)(&b));
}			
		 
inline Pss op (const Tnt& a, const Pnt& b) { 
	return Pss (
a[0] * b[4]
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Par& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Par*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Cir& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Sph*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Sta& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Sta*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Drv*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Drt*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Pln*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Flp*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Dll*)(&b));
}			
		 
inline Pss op (const Tnt& a, const Dlp& b) { 
	return Pss (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Vec*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Biv*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Tri*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Aff*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Afl*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Afp*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Daf*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Dal*)(&b));
}			
		 
inline Sca op (const Tnt& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnt, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnt*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Hyp*)(&b));
}			
		 
inline Ori ip (const Tnt& a, const Pss& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Par& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Par*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Cir& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Cir*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Sph& b) { 
	return Sca (
 - a[0] * b[4]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Sph*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Sta& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Drv*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Drb*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Drt& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Lin*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Pln& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Flp*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Biv*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Afl*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Dap*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Daf*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Dal*)(&b));
}			
		 
inline Sca ip (const Tnt& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnt, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnt*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
inline Tnt sp (const Tnt& tnt, const Trs& trs) {					
					
const Trs& t1 = trs;
const Tnt& t2 = tnt;
Ori_Dfp t3 (
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
inline Tnt sp (const Tnt& tnt, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Tnt& t2 = tnt;
Ori_Dfp t3 (
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
inline Tnt sp (const Tnt& tnt, const Bst& bst) {					
					
const Bst& t1 = bst;
const Tnt& t2 = tnt;
Ori_Cir t3 (
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[9] * t2[0],
 - t1[8] * t2[0],
t1[7] * t2[0],
t1[0] * t2[0] - t1[10] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Tnt (
t3[0] * t5[6] - t3[1] * t5[5] + t3[2] * t5[4] + t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] - t3[6] * t5[6] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[0] + t3[9] * t5[10]
);

}
		
	
	  	
template<>
inline Tnt re (const Tnt& tnt, const Vec& vec) {					
					
const Vec& t1 = vec;
const Tnt& t2 = tnt;
Tnt t3 = involute( t2);
Tnb t4 (
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Tnt (
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Tnt re (const Tnt& tnt, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Tnt& t2 = tnt;
Tnt t3 = involute( t2);
Ori_Sph t4 (
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0],
t1[3] * t3[0],
t1[3] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Tnt (
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Tnt re (const Tnt& tnt, const Pln& pln) {					
					
const Pln& t1 = pln;
const Tnt& t2 = tnt;
Tnt t3 = involute( t2);
Tvd t4 (
 - t1[3] * t3[0],
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0],
 - t1[3] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Tnt (
t4[1] * t6[2] - t4[2] * t6[1] + t4[3] * t6[0]
);

}
		
	
	  	
template<>
inline Tnt re (const Tnt& tnt, const Dll& dll) {					
					
const Dll& t1 = dll;
const Tnt& t2 = tnt;
Tnt t3 = involute( t2);
Ori_Lin t4 (
t1[5] * t3[0],
 - t1[4] * t3[0],
t1[3] * t3[0],
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0],
t1[5] * t3[0],
 - t1[4] * t3[0],
t1[3] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Tnt (
t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0]
);

}
		
	
	  	
template<>
inline Tnt re (const Tnt& tnt, const Lin& lin) {					
					
const Lin& t1 = lin;
const Tnt& t2 = tnt;
Tnt t3 = involute( t2);
Ori_Sta t4 (
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0],
 - t1[5] * t3[0],
t1[4] * t3[0],
 - t1[3] * t3[0],
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Tnt (
 - t4[3] * t6[5] + t4[4] * t6[4] - t4[5] * t6[3]
);

}
		
	
	  	
template<>
inline Tnt re (const Tnt& tnt, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Tnt& t2 = tnt;
Tnt t3 = involute( t2);
Ori_Sph t4 (
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0],
t1[4] * t3[0],
t1[4] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Tnt (
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0] + t4[3] * t6[3] - t4[4] * t6[3]
);

}
		
	
	  	
template<>
inline Tnt re (const Tnt& tnt, const Par& par) {					
					
const Par& t1 = par;
const Tnt& t2 = tnt;
Tnt t3 = involute( t2);
Ori_Cir t4 (
t1[8] * t3[0],
 - t1[7] * t3[0],
t1[6] * t3[0],
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0],
t1[8] * t3[0],
 - t1[7] * t3[0],
t1[6] * t3[0],
 - t1[9] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Tnt (
t4[0] * t6[5] - t4[1] * t6[4] + t4[2] * t6[3] + t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0] - t4[6] * t6[5] + t4[7] * t6[4] - t4[8] * t6[3] + t4[9] * t6[9]
);

}
		
	
	  	
template<>
inline Tnt re (const Tnt& tnt, const Cir& cir) {					
					
const Cir& t1 = cir;
const Tnt& t2 = tnt;
Tnt t3 = involute( t2);
Ori_Par t4 (
 - t1[5] * t3[0],
t1[4] * t3[0],
 - t1[3] * t3[0],
 - t1[9] * t3[0],
 - t1[8] * t3[0],
t1[7] * t3[0],
 - t1[6] * t3[0],
 - t1[5] * t3[0],
t1[4] * t3[0],
 - t1[3] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Tnt (
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[3] * t6[9] - t4[4] * t6[8] + t4[5] * t6[7] - t4[6] * t6[6] - t4[7] * t6[2] + t4[8] * t6[1] - t4[9] * t6[0]
);

}
		
	
	  	
template<>
inline Tnt re (const Tnt& tnt, const Sph& sph) {					
					
const Sph& t1 = sph;
const Tnt& t2 = tnt;
Tnt t3 = involute( t2);
Tvd t4 (
 - t1[4] * t3[0],
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0],
 - t1[4] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Tnt (
t4[0] * t6[3] + t4[1] * t6[2] - t4[2] * t6[1] + t4[3] * t6[0] - t4[4] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	