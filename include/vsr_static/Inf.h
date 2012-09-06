		#ifndef INF_H_INCLUDED
		#define INF_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Inf gp (const Inf& a, const Sca& b) { 
	return Inf (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Sca*)(&b));
}			
		 
inline Dil gp (const Inf& a, const Ori& b) { 
	return Dil (
 - a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Ori*)(&b));
}			
		 
inline Sca gp (const Inf& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Inf*)(&b));
}			
		 
inline Inf gp (const Inf& a, const Mnk& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Mnk*)(&b));
}			
		 
inline Dil gp (const Inf& a, const Hyp& b) { 
	return Dil (
 - a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Hyp*)(&b));
}			
		 
inline Drt gp (const Inf& a, const Pss& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Pss*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Pnt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Par*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Cir*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Sph*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Sta*)(&b));
}			
		 
inline Sca gp (const Inf& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Drv*)(&b));
}			
		 
inline Sca gp (const Inf& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Drb*)(&b));
}			
		 
inline Sca gp (const Inf& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Drt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Tnv*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori_Drt gp (const Inf& a, const Tnt& b) { 
	return Ori_Drt (
a[0] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Tnt*)(&b));
}			
		 
inline Drv gp (const Inf& a, const Lin& b) { 
	return Drv (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Lin*)(&b));
}			
		 
inline Drb gp (const Inf& a, const Pln& b) { 
	return Drb (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Pln*)(&b));
}			
		 
inline Inf gp (const Inf& a, const Flp& b) { 
	return Inf (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Flp*)(&b));
}			
		 
inline Drt gp (const Inf& a, const Dfp& b) { 
	return Drt (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Dfp*)(&b));
}			
		 
inline Drb gp (const Inf& a, const Dll& b) { 
	return Drb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Dll*)(&b));
}			
		 
inline Drv gp (const Inf& a, const Dlp& b) { 
	return Drv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Dlp*)(&b));
}			
		 
inline Drv gp (const Inf& a, const Vec& b) { 
	return Drv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Vec*)(&b));
}			
		 
inline Drb gp (const Inf& a, const Biv& b) { 
	return Drb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Biv*)(&b));
}			
		 
inline Drt gp (const Inf& a, const Tri& b) { 
	return Drt (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Tri*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Aff*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Afl*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Afp*)(&b));
}			
		 
inline Inf_Dap gp (const Inf& a, const Dap& b) { 
	return Inf_Dap (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[3],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Dap*)(&b));
}			
		 
inline Inf_Sph gp (const Inf& a, const Daf& b) { 
	return Inf_Sph (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[3],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Daf*)(&b));
}			
		 
inline Inf_Dal gp (const Inf& a, const Dal& b) { 
	return Inf_Dal (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Dal*)(&b));
}			
		 
inline Drv gp (const Inf& a, const Mnv& b) { 
	return Drv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Mnv*)(&b));
}			
		 
inline Drv_Lin gp (const Inf& a, const Rot& b) { 
	return Drv_Lin (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Rot*)(&b));
}			
		 
inline Drv_Lin gp (const Inf& a, const Mot& b) { 
	return Drv_Lin (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Mot*)(&b));
}			
		 
inline Inf gp (const Inf& a, const Dil& b) { 
	return Inf (
a[0] * b[0] - a[0] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Dil*)(&b));
}			
		 
inline Inf_Dap gp (const Inf& a, const Trv& b) { 
	return Inf_Dap (
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Trv*)(&b));
}			
		 
inline Drv_Lin gp (const Inf& a, const Mtd& b) { 
	return Drv_Lin (
a[0] * b[0] - a[0] * b[7],
a[0] * b[1] - a[0] * b[8],
a[0] * b[2] - a[0] * b[9],
a[0] * b[3] - a[0] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Mtd*)(&b));
}			
		 
inline Inf gp (const Inf& a, const Trs& b) { 
	return Inf (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Trs*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Rtc*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Mtt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Rtt*)(&b));
}			
		 
inline Drv_Lin gp (const Inf& a, const Rtd& b) { 
	return Drv_Lin (
a[0] * b[0] - a[0] * b[4],
a[0] * b[1] - a[0] * b[5],
a[0] * b[2] - a[0] * b[6],
a[0] * b[3] - a[0] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Rtd*)(&b));
}			
		 
inline Inf_Dap gp (const Inf& a, const Tvd& b) { 
	return Inf_Dap (
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[0] - a[0] * b[4],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Tvd*)(&b));
}			
		 
inline Inf gp (const Inf& a, const Tsd& b) { 
	return Inf (
a[0] * b[0] - a[0] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Tsd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Trt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Rvd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Tst*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Inf, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Tvt*)(&b));
}			
		 
inline Inf_Par gp (const Inf& a, const Bst& b) { 
	return Inf_Par (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0] - a[0] * b[10],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Inf, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Inf*)(&a),*(Bst*)(&b));
}			
		 
inline Inf op (const Inf& a, const Sca& b) { 
	return Inf (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Sca*)(&b));
}			
		 
inline Mnk op (const Inf& a, const Ori& b) { 
	return Mnk (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Ori*)(&b));
}			
		 
inline Sca op (const Inf& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Inf*)(&b));
}			
		 
inline Sca op (const Inf& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Mnk*)(&b));
}			
		 
inline Mnk op (const Inf& a, const Hyp& b) { 
	return Mnk (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Inf& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Pss*)(&b));
}			
		 
inline Flp op (const Inf& a, const Pnt& b) { 
	return Flp (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Pnt*)(&b));
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
		 
		
template<> inline MVBase op_gen<Inf, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Par*)(&b));
}			
		 
inline Pln op (const Inf& a, const Cir& b) { 
	return Pln (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[9]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Cir*)(&b));
}			
		 
inline Pss op (const Inf& a, const Sph& b) { 
	return Pss (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Sph*)(&b));
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
		 
		
template<> inline MVBase op_gen<Inf, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Sta*)(&b));
}			
		 
inline Sca op (const Inf& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Drv*)(&b));
}			
		 
inline Sca op (const Inf& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Inf& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Drt*)(&b));
}			
		 
inline Mnv op (const Inf& a, const Tnv& b) { 
	return Mnv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Tnv*)(&b));
}			
		 
inline Mnk_Biv op (const Inf& a, const Tnb& b) { 
	return Mnk_Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Tnb*)(&b));
}			
		 
inline Pss op (const Inf& a, const Tnt& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca op (const Inf& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Inf& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Pln*)(&b));
}			
		 
inline Sca op (const Inf& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Flp*)(&b));
}			
		 
inline Drt op (const Inf& a, const Dfp& b) { 
	return Drt (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Dfp*)(&b));
}			
		 
inline Drb op (const Inf& a, const Dll& b) { 
	return Drb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Dll*)(&b));
}			
		 
inline Drv op (const Inf& a, const Dlp& b) { 
	return Drv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Dlp*)(&b));
}			
		 
inline Drv op (const Inf& a, const Vec& b) { 
	return Drv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Vec*)(&b));
}			
		 
inline Drb op (const Inf& a, const Biv& b) { 
	return Drb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Biv*)(&b));
}			
		 
inline Drt op (const Inf& a, const Tri& b) { 
	return Drt (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Tri*)(&b));
}			
		 
inline Flp op (const Inf& a, const Aff& b) { 
	return Flp (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Aff*)(&b));
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
		 
		
template<> inline MVBase op_gen<Inf, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Afl*)(&b));
}			
		 
inline Pln op (const Inf& a, const Afp& b) { 
	return Pln (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Afp*)(&b));
}			
		 
inline Mnv op (const Inf& a, const Dap& b) { 
	return Mnv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Dap*)(&b));
}			
		 
inline Pss op (const Inf& a, const Daf& b) { 
	return Pss (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Daf*)(&b));
}			
		 
inline Mnk_Biv op (const Inf& a, const Dal& b) { 
	return Mnk_Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Dal*)(&b));
}			
		 
inline Sca op (const Inf& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Inf, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Inf*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Ori& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Inf*)(&b));
}			
		 
inline Inf ip (const Inf& a, const Mnk& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Hyp& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Hyp*)(&b));
}			
		 
inline Drt ip (const Inf& a, const Pss& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Pnt& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Pnt*)(&b));
}			
		 
inline Dlp ip (const Inf& a, const Par& b) { 
	return Dlp (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
 - a[0] * b[9]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Par*)(&b));
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
		 
		
template<> inline MVBase ip_gen<Inf, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Cir*)(&b));
}			
		 
inline Dfp ip (const Inf& a, const Sph& b) { 
	return Dfp (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Sph*)(&b));
}			
		 
inline Vec ip (const Inf& a, const Sta& b) { 
	return Vec (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Drv*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Drb*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Drt*)(&b));
}			
		 
inline Vec ip (const Inf& a, const Tnv& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Tnv*)(&b));
}			
		 
inline Biv ip (const Inf& a, const Tnb& b) { 
	return Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Tnb*)(&b));
}			
		 
inline Tri ip (const Inf& a, const Tnt& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Tnt*)(&b));
}			
		 
inline Drv ip (const Inf& a, const Lin& b) { 
	return Drv (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Lin*)(&b));
}			
		 
inline Drb ip (const Inf& a, const Pln& b) { 
	return Drb (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Pln*)(&b));
}			
		 
inline Inf ip (const Inf& a, const Flp& b) { 
	return Inf (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Flp*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Biv*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Inf& a, const Aff& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Aff*)(&b));
}			
		 
inline Vec ip (const Inf& a, const Afl& b) { 
	return Vec (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Afl*)(&b));
}			
		 
inline Biv ip (const Inf& a, const Afp& b) { 
	return Biv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Afp*)(&b));
}			
		 
inline Dlp ip (const Inf& a, const Dap& b) { 
	return Dlp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Dap*)(&b));
}			
		 
inline Dfp ip (const Inf& a, const Daf& b) { 
	return Dfp (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Daf*)(&b));
}			
		 
inline Dll ip (const Inf& a, const Dal& b) { 
	return Dll (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Dal*)(&b));
}			
		 
inline Drv ip (const Inf& a, const Mnv& b) { 
	return Drv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Inf, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Inf*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
inline Inf sp (const Inf& inf, const Trv& trv) {					
					
const Trv& t1 = trv;
const Inf& t2 = inf;
Inf_Dap t3 (
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
inline Inf sp (const Inf& inf, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Inf& t2 = inf;
Inf_Dap t3 (
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
inline Inf sp (const Inf& inf, const Bst& bst) {					
					
const Bst& t1 = bst;
const Inf& t2 = inf;
Inf_Par t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0] + t1[10] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Inf (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[3] * t5[0] - t3[3] * t5[10] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9]
);

}
		
	
	  	
template<>
inline Inf re (const Inf& inf, const Vec& vec) {					
					
const Vec& t1 = vec;
const Inf& t2 = inf;
Inf t3 = involute( t2);
Drv t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Inf (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2]
);

}
		
	
	  	
template<>
inline Inf re (const Inf& inf, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Inf& t2 = inf;
Inf t3 = involute( t2);
Drv t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Inf (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2]
);

}
		
	
	  	
template<>
inline Inf re (const Inf& inf, const Pln& pln) {					
					
const Pln& t1 = pln;
const Inf& t2 = inf;
Inf t3 = involute( t2);
Drb t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Inf (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2]
);

}
		
	
	  	
template<>
inline Inf re (const Inf& inf, const Dll& dll) {					
					
const Dll& t1 = dll;
const Inf& t2 = inf;
Inf t3 = involute( t2);
Drb t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Inf (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2]
);

}
		
	
	  	
template<>
inline Inf re (const Inf& inf, const Lin& lin) {					
					
const Lin& t1 = lin;
const Inf& t2 = inf;
Inf t3 = involute( t2);
Drv t4 (
t1[3] * t3[0],
t1[4] * t3[0],
t1[5] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Inf (
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5]
);

}
		
	
	  	
template<>
inline Inf re (const Inf& inf, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Inf& t2 = inf;
Inf t3 = involute( t2);
Tsd t4 (
 - t1[3] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[3] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Inf (
t4[0] * t6[4] - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[4]
);

}
		
	
	  	
template<>
inline Inf re (const Inf& inf, const Par& par) {					
					
const Par& t1 = par;
const Inf& t2 = inf;
Inf t3 = involute( t2);
Inf_Par t4 (
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0],
t1[9] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[3] * t3[0],
t1[4] * t3[0],
t1[5] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Inf (
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[3] * t6[9] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] + t4[7] * t6[6] + t4[8] * t6[7] + t4[9] * t6[8]
);

}
		
	
	  	
template<>
inline Inf re (const Inf& inf, const Cir& cir) {					
					
const Cir& t1 = cir;
const Inf& t2 = inf;
Inf t3 = involute( t2);
Inf_Cir t4 (
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0],
t1[6] * t3[0],
t1[7] * t3[0],
t1[8] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[9] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Inf (
 - t4[0] * t6[3] - t4[1] * t6[4] - t4[2] * t6[5] + t4[3] * t6[6] + t4[4] * t6[7] + t4[5] * t6[8] - t4[6] * t6[3] - t4[7] * t6[4] - t4[8] * t6[5] + t4[9] * t6[9]
);

}
		
	
	  	
template<>
inline Inf re (const Inf& inf, const Sph& sph) {					
					
const Sph& t1 = sph;
const Inf& t2 = inf;
Inf t3 = involute( t2);
Inf_Sph t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
 - t1[3] * t3[0],
t1[3] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Inf (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] - t4[4] * t6[4]
);

}
		
	
		
	} //vsr::
	#endif
	