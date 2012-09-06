		#ifndef DRT_H_INCLUDED
		#define DRT_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Drt gp (const Drt& a, const Sca& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Sca*)(&b));
}			
		 
inline Ori_Drt gp (const Drt& a, const Ori& b) { 
	return Ori_Drt (
 - a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Ori*)(&b));
}			
		 
inline Sca gp (const Drt& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Inf*)(&b));
}			
		 
inline Drt gp (const Drt& a, const Mnk& b) { 
	return Drt (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Mnk*)(&b));
}			
		 
inline Ori_Drt gp (const Drt& a, const Hyp& b) { 
	return Ori_Drt (
 - a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Hyp*)(&b));
}			
		 
inline Inf gp (const Drt& a, const Pss& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Pss*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Pnt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Par*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Cir*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Sph*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Sta*)(&b));
}			
		 
inline Sca gp (const Drt& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Drv*)(&b));
}			
		 
inline Sca gp (const Drt& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Drb*)(&b));
}			
		 
inline Sca gp (const Drt& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Drt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Tnv*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Tnb*)(&b));
}			
		 
inline Dil gp (const Drt& a, const Tnt& b) { 
	return Dil (
 - a[0] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Tnt*)(&b));
}			
		 
inline Drb gp (const Drt& a, const Lin& b) { 
	return Drb (
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Lin*)(&b));
}			
		 
inline Drv gp (const Drt& a, const Pln& b) { 
	return Drv (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Pln*)(&b));
}			
		 
inline Drt gp (const Drt& a, const Flp& b) { 
	return Drt (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Flp*)(&b));
}			
		 
inline Inf gp (const Drt& a, const Dfp& b) { 
	return Inf (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Dfp*)(&b));
}			
		 
inline Drv gp (const Drt& a, const Dll& b) { 
	return Drv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Dll*)(&b));
}			
		 
inline Drb gp (const Drt& a, const Dlp& b) { 
	return Drb (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Dlp*)(&b));
}			
		 
inline Drb gp (const Drt& a, const Vec& b) { 
	return Drb (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Vec*)(&b));
}			
		 
inline Drv gp (const Drt& a, const Biv& b) { 
	return Drv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Biv*)(&b));
}			
		 
inline Inf gp (const Drt& a, const Tri& b) { 
	return Inf (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Tri*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Aff*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Afl*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Afp*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Dap*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Daf*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Dal*)(&b));
}			
		 
inline Drb gp (const Drt& a, const Mnv& b) { 
	return Drb (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Mnv*)(&b));
}			
		 
inline Drv_Pln gp (const Drt& a, const Rot& b) { 
	return Drv_Pln (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Rot*)(&b));
}			
		 
inline Drv_Pln gp (const Drt& a, const Mot& b) { 
	return Drv_Pln (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Mot*)(&b));
}			
		 
inline Drt gp (const Drt& a, const Dil& b) { 
	return Drt (
a[0] * b[0] - a[0] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Dil*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Trv*)(&b));
}			
		 
inline Drv_Pln gp (const Drt& a, const Mtd& b) { 
	return Drv_Pln (
 - a[0] * b[3] + a[0] * b[10],
a[0] * b[2] - a[0] * b[9],
 - a[0] * b[1] + a[0] * b[8],
a[0] * b[0] - a[0] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Mtd*)(&b));
}			
		 
inline Drt gp (const Drt& a, const Trs& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Trs*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Rtc*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Mtt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Rtt*)(&b));
}			
		 
inline Drv_Pln gp (const Drt& a, const Rtd& b) { 
	return Drv_Pln (
 - a[0] * b[3] + a[0] * b[7],
a[0] * b[2] - a[0] * b[6],
 - a[0] * b[1] + a[0] * b[5],
a[0] * b[0] - a[0] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Rtd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Tvd*)(&b));
}			
		 
inline Drt gp (const Drt& a, const Tsd& b) { 
	return Drt (
a[0] * b[0] - a[0] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Drt, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Tsd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Trt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Rvd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Tst*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Tvt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Drt, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drt*)(&a),*(Bst*)(&b));
}			
		 
inline Drt op (const Drt& a, const Sca& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Sca*)(&b));
}			
		 
inline Pss op (const Drt& a, const Ori& b) { 
	return Pss (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Ori*)(&b));
}			
		 
inline Sca op (const Drt& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Inf*)(&b));
}			
		 
inline Sca op (const Drt& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Mnk*)(&b));
}			
		 
inline Pss op (const Drt& a, const Hyp& b) { 
	return Pss (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Drt& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Pss*)(&b));
}			
		 
inline Pss op (const Drt& a, const Pnt& b) { 
	return Pss (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca op (const Drt& a, const Par& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Par*)(&b));
}			
		 
inline Sca op (const Drt& a, const Cir& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Drt& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Sph*)(&b));
}			
		 
inline Sca op (const Drt& a, const Sta& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Sta*)(&b));
}			
		 
inline Sca op (const Drt& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Drv*)(&b));
}			
		 
inline Sca op (const Drt& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Drt& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Drt*)(&b));
}			
		 
inline Sca op (const Drt& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca op (const Drt& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Drt& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca op (const Drt& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Drt& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Pln*)(&b));
}			
		 
inline Sca op (const Drt& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Flp*)(&b));
}			
		 
inline Sca op (const Drt& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca op (const Drt& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Dll*)(&b));
}			
		 
inline Sca op (const Drt& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca op (const Drt& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Vec*)(&b));
}			
		 
inline Sca op (const Drt& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Biv*)(&b));
}			
		 
inline Sca op (const Drt& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Tri*)(&b));
}			
		 
inline Pss op (const Drt& a, const Aff& b) { 
	return Pss (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Aff*)(&b));
}			
		 
inline Sca op (const Drt& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Afl*)(&b));
}			
		 
inline Sca op (const Drt& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Afp*)(&b));
}			
		 
inline Sca op (const Drt& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Drt& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Daf*)(&b));
}			
		 
inline Sca op (const Drt& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Dal*)(&b));
}			
		 
inline Sca op (const Drt& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drt, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Drt*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Hyp*)(&b));
}			
		 
inline Inf ip (const Drt& a, const Pss& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Par& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Par*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Cir& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Cir*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Sph& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Sph*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Sta& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Drv*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Drb*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Tnt& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Lin*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Flp*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Biv*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Afl*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Dap*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Daf& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Daf*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Dal*)(&b));
}			
		 
inline Sca ip (const Drt& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drt, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drt*)(&a),*(Mnv*)(&b));
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
	