		#ifndef ORI_H_INCLUDED
		#define ORI_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Ori gp (const Ori& a, const Sca& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Sca*)(&b));
}			
		 
inline Sca gp (const Ori& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Ori*)(&b));
}			
		 
inline Dil gp (const Ori& a, const Inf& b) { 
	return Dil (
 - a[0] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Inf*)(&b));
}			
		 
inline Ori gp (const Ori& a, const Mnk& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Mnk*)(&b));
}			
		 
inline Dil gp (const Ori& a, const Hyp& b) { 
	return Dil (
 - a[0] * b[1],
a[0] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Hyp*)(&b));
}			
		 
inline Tnt gp (const Ori& a, const Pss& b) { 
	return Tnt (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Pss*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Pnt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Par*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Cir*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Sph*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Sta*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Drv*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Drb*)(&b));
}			
		 
inline Ori_Drt gp (const Ori& a, const Drt& b) { 
	return Ori_Drt (
a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Drt*)(&b));
}			
		 
inline Sca gp (const Ori& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca gp (const Ori& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca gp (const Ori& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Tnt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Lin*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Pln*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Flp*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Dfp*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Dll*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Dlp*)(&b));
}			
		 
inline Tnv gp (const Ori& a, const Vec& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Vec*)(&b));
}			
		 
inline Tnb gp (const Ori& a, const Biv& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Biv*)(&b));
}			
		 
inline Tnt gp (const Ori& a, const Tri& b) { 
	return Tnt (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Tri*)(&b));
}			
		 
inline Tnv gp (const Ori& a, const Aff& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Aff*)(&b));
}			
		 
inline Tnb gp (const Ori& a, const Afl& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Afl*)(&b));
}			
		 
inline Tnt gp (const Ori& a, const Afp& b) { 
	return Tnt (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Afp*)(&b));
}			
		 
inline Ori gp (const Ori& a, const Dap& b) { 
	return Ori (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Dap*)(&b));
}			
		 
inline Tnb gp (const Ori& a, const Daf& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Daf*)(&b));
}			
		 
inline Tnv gp (const Ori& a, const Dal& b) { 
	return Tnv (
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Dal*)(&b));
}			
		 
inline Tnv gp (const Ori& a, const Mnv& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Mnv*)(&b));
}			
		 
inline Tnv_Vec gp (const Ori& a, const Rot& b) { 
	return Tnv_Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Rot*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Mot*)(&b));
}			
		 
inline Ori gp (const Ori& a, const Dil& b) { 
	return Ori (
a[0] * b[0] + a[0] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Dil*)(&b));
}			
		 
inline Ori gp (const Ori& a, const Trv& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Trv*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Mtd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Trs*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Rtc*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Mtt*)(&b));
}			
		 
inline Tnv_Vec gp (const Ori& a, const Rtt& b) { 
	return Tnv_Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Rtt*)(&b));
}			
		 
inline Tnv_Vec gp (const Ori& a, const Rtd& b) { 
	return Tnv_Vec (
a[0] * b[0] + a[0] * b[4],
a[0] * b[1] + a[0] * b[5],
a[0] * b[2] + a[0] * b[6],
a[0] * b[3] + a[0] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Rtd*)(&b));
}			
		 
inline Ori gp (const Ori& a, const Tvd& b) { 
	return Ori (
a[0] * b[0] + a[0] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Tvd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Tsd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Trt*)(&b));
}			
		 
inline Tnv_Vec gp (const Ori& a, const Rvd& b) { 
	return Tnv_Vec (
a[0] * b[0] + a[0] * b[7],
a[0] * b[1] + a[0] * b[8],
a[0] * b[2] + a[0] * b[9],
a[0] * b[3] + a[0] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Ori, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Rvd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Tst*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Tvt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Ori, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Ori*)(&a),*(Bst*)(&b));
}			
		 
inline Ori op (const Ori& a, const Sca& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Sca*)(&b));
}			
		 
inline Sca op (const Ori& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Ori*)(&b));
}			
		 
inline Mnk op (const Ori& a, const Inf& b) { 
	return Mnk (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Inf*)(&b));
}			
		 
inline Sca op (const Ori& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Mnk*)(&b));
}			
		 
inline Mnk op (const Ori& a, const Hyp& b) { 
	return Mnk (
a[0] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Ori& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Pss*)(&b));
}			
		 
inline Dap op (const Ori& a, const Pnt& b) { 
	return Dap (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[4]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Pnt*)(&b));
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
		 
		
template<> inline MVBase op_gen<Ori, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Par*)(&b));
}			
		 
inline Daf op (const Ori& a, const Cir& b) { 
	return Daf (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
 - a[0] * b[9]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Cir*)(&b));
}			
		 
inline Pss op (const Ori& a, const Sph& b) { 
	return Pss (
 - a[0] * b[4]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Sph*)(&b));
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
		 
		
template<> inline MVBase op_gen<Ori, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Sta*)(&b));
}			
		 
inline Mnv op (const Ori& a, const Drv& b) { 
	return Mnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Drv*)(&b));
}			
		 
inline Mnk_Biv op (const Ori& a, const Drb& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Drb*)(&b));
}			
		 
inline Pss op (const Ori& a, const Drt& b) { 
	return Pss (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Drt*)(&b));
}			
		 
inline Sca op (const Ori& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca op (const Ori& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Ori& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Tnt*)(&b));
}			
		 
inline Mnk_Biv op (const Ori& a, const Lin& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Lin*)(&b));
}			
		 
inline Pss op (const Ori& a, const Pln& b) { 
	return Pss (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Pln*)(&b));
}			
		 
inline Mnv op (const Ori& a, const Flp& b) { 
	return Mnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Flp*)(&b));
}			
		 
inline Daf op (const Ori& a, const Dfp& b) { 
	return Daf (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Dfp*)(&b));
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
		 
		
template<> inline MVBase op_gen<Ori, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Dll*)(&b));
}			
		 
inline Dap op (const Ori& a, const Dlp& b) { 
	return Dap (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Dlp*)(&b));
}			
		 
inline Tnv op (const Ori& a, const Vec& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Vec*)(&b));
}			
		 
inline Tnb op (const Ori& a, const Biv& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Biv*)(&b));
}			
		 
inline Tnt op (const Ori& a, const Tri& b) { 
	return Tnt (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Tri*)(&b));
}			
		 
inline Tnv op (const Ori& a, const Aff& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Aff*)(&b));
}			
		 
inline Tnb op (const Ori& a, const Afl& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Afl*)(&b));
}			
		 
inline Tnt op (const Ori& a, const Afp& b) { 
	return Tnt (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Afp*)(&b));
}			
		 
inline Sca op (const Ori& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Ori& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Daf*)(&b));
}			
		 
inline Sca op (const Ori& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Dal*)(&b));
}			
		 
inline Sca op (const Ori& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Ori, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Ori*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Inf& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Inf*)(&b));
}			
		 
inline Ori ip (const Ori& a, const Mnk& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Hyp& b) { 
	return Sca (
 - a[0] * b[1]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Hyp*)(&b));
}			
		 
inline Tnt ip (const Ori& a, const Pss& b) { 
	return Tnt (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Pnt& b) { 
	return Sca (
 - a[0] * b[4]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Pnt*)(&b));
}			
		 
inline Aff ip (const Ori& a, const Par& b) { 
	return Aff (
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Par*)(&b));
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
		 
		
template<> inline MVBase ip_gen<Ori, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Cir*)(&b));
}			
		 
inline Afp ip (const Ori& a, const Sph& b) { 
	return Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[4]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Sph*)(&b));
}			
		 
inline Vec ip (const Ori& a, const Sta& b) { 
	return Vec (
a[0] * b[6],
a[0] * b[7],
a[0] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Sta*)(&b));
}			
		 
inline Vec ip (const Ori& a, const Drv& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Drv*)(&b));
}			
		 
inline Biv ip (const Ori& a, const Drb& b) { 
	return Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Drb*)(&b));
}			
		 
inline Tri ip (const Ori& a, const Drt& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Tnt*)(&b));
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
		 
		
template<> inline MVBase ip_gen<Ori, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Lin*)(&b));
}			
		 
inline Afp ip (const Ori& a, const Pln& b) { 
	return Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Pln*)(&b));
}			
		 
inline Aff ip (const Ori& a, const Flp& b) { 
	return Aff (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Flp*)(&b));
}			
		 
inline Biv ip (const Ori& a, const Dfp& b) { 
	return Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Dfp*)(&b));
}			
		 
inline Vec ip (const Ori& a, const Dll& b) { 
	return Vec (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Dlp& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Biv*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Afl*)(&b));
}			
		 
inline Sca ip (const Ori& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Afp*)(&b));
}			
		 
inline Ori ip (const Ori& a, const Dap& b) { 
	return Ori (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Dap*)(&b));
}			
		 
inline Tnb ip (const Ori& a, const Daf& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Daf*)(&b));
}			
		 
inline Tnv ip (const Ori& a, const Dal& b) { 
	return Tnv (
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Dal*)(&b));
}			
		 
inline Tnv ip (const Ori& a, const Mnv& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Ori, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Ori*)(&a),*(Mnv*)(&b));
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
	