		#ifndef TRI_H_INCLUDED
		#define TRI_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Tri gp (const Tri& a, const Sca& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Sca*)(&b));
}			
		 
inline Tnt gp (const Tri& a, const Ori& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Ori*)(&b));
}			
		 
inline Drt gp (const Tri& a, const Inf& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Inf*)(&b));
}			
		 
inline Pss gp (const Tri& a, const Mnk& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Pss gp (const Tri& a, const Hyp& b) { 
	return Hyp_Pss (
a[0] * b[0],
a[0] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Hyp*)(&b));
}			
		 
inline Mnk gp (const Tri& a, const Pss& b) { 
	return Mnk (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Pss*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Pnt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Par*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Cir*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Sph*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Sta*)(&b));
}			
		 
inline Drb gp (const Tri& a, const Drv& b) { 
	return Drb (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Drv*)(&b));
}			
		 
inline Drv gp (const Tri& a, const Drb& b) { 
	return Drv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Drb*)(&b));
}			
		 
inline Inf gp (const Tri& a, const Drt& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Drt*)(&b));
}			
		 
inline Tnb gp (const Tri& a, const Tnv& b) { 
	return Tnb (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv gp (const Tri& a, const Tnb& b) { 
	return Tnv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori gp (const Tri& a, const Tnt& b) { 
	return Ori (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Tnt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Lin*)(&b));
}			
		 
inline Mnk_Dlp gp (const Tri& a, const Pln& b) { 
	return Mnk_Dlp (
 - a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Pln*)(&b));
}			
		 
inline Mnk_Dfp gp (const Tri& a, const Flp& b) { 
	return Mnk_Dfp (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Flp*)(&b));
}			
		 
inline Trs gp (const Tri& a, const Dfp& b) { 
	return Trs (
 - a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Dfp*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Dll*)(&b));
}			
		 
inline Mnk_Pln gp (const Tri& a, const Dlp& b) { 
	return Mnk_Pln (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Dlp*)(&b));
}			
		 
inline Biv gp (const Tri& a, const Vec& b) { 
	return Biv (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Vec*)(&b));
}			
		 
inline Vec gp (const Tri& a, const Biv& b) { 
	return Vec (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Biv*)(&b));
}			
		 
inline Sca gp (const Tri& a, const Tri& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Tri*)(&b));
}			
		 
inline Mnk_Daf gp (const Tri& a, const Aff& b) { 
	return Mnk_Daf (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Aff*)(&b));
}			
		 
inline Mnk_Dal gp (const Tri& a, const Afl& b) { 
	return Mnk_Dal (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Afl*)(&b));
}			
		 
inline Trv gp (const Tri& a, const Afp& b) { 
	return Trv (
 - a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Afp*)(&b));
}			
		 
inline Mnk_Afp gp (const Tri& a, const Dap& b) { 
	return Mnk_Afp (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Dap*)(&b));
}			
		 
inline Mnk_Aff gp (const Tri& a, const Daf& b) { 
	return Mnk_Aff (
 - a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Daf*)(&b));
}			
		 
inline Mnk_Afl gp (const Tri& a, const Dal& b) { 
	return Mnk_Afl (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Dal*)(&b));
}			
		 
inline Mnk_Biv gp (const Tri& a, const Mnv& b) { 
	return Mnk_Biv (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Mnv*)(&b));
}			
		 
inline Vec_Biv gp (const Tri& a, const Rot& b) { 
	return Vec_Biv (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Rot*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Mot*)(&b));
}			
		 
inline Ori_Drt gp (const Tri& a, const Dil& b) { 
	return Ori_Drt (
a[0] * b[0],
a[0] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Dil*)(&b));
}			
		 
inline Afp gp (const Tri& a, const Trv& b) { 
	return Afp (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Trv*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Mtd*)(&b));
}			
		 
inline Dfp gp (const Tri& a, const Trs& b) { 
	return Dfp (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Trs*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Rtc*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Mtt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Rtt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Rtd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Tvd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Tsd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Trt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Rvd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Tri, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Tst*)(&b));
}			
		 
inline Par_Dfp gp (const Tri& a, const Tvt& b) { 
	return Par_Dfp (
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
		 
		
template<> inline MVBase gp_gen<Tri, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Tvt*)(&b));
}			
		 
inline Mnk_Pnt_Sph gp (const Tri& a, const Bst& b) { 
	return Mnk_Pnt_Sph (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[6],
 - a[0] * b[5],
a[0] * b[4],
a[0] * b[9],
 - a[0] * b[8],
a[0] * b[7],
a[0] * b[0],
a[0] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Tri, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tri*)(&a),*(Bst*)(&b));
}			
		 
inline Tri op (const Tri& a, const Sca& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Sca*)(&b));
}			
		 
inline Tnt op (const Tri& a, const Ori& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Ori*)(&b));
}			
		 
inline Drt op (const Tri& a, const Inf& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Inf*)(&b));
}			
		 
inline Pss op (const Tri& a, const Mnk& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Pss op (const Tri& a, const Hyp& b) { 
	return Hyp_Pss (
a[0] * b[0],
a[0] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Tri& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Pss*)(&b));
}			
		 
inline Hyp_Pss op (const Tri& a, const Pnt& b) { 
	return Hyp_Pss (
a[0] * b[3],
a[0] * b[4]
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Pnt*)(&b));
}			
		 
inline Pss op (const Tri& a, const Par& b) { 
	return Pss (
a[0] * b[9]
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Par*)(&b));
}			
		 
inline Sca op (const Tri& a, const Cir& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Tri& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Sph*)(&b));
}			
		 
inline Sca op (const Tri& a, const Sta& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Sta*)(&b));
}			
		 
inline Sca op (const Tri& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Drv*)(&b));
}			
		 
inline Sca op (const Tri& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Tri& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Drt*)(&b));
}			
		 
inline Sca op (const Tri& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca op (const Tri& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Tri& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca op (const Tri& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Tri& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Pln*)(&b));
}			
		 
inline Pss op (const Tri& a, const Flp& b) { 
	return Pss (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Flp*)(&b));
}			
		 
inline Sca op (const Tri& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca op (const Tri& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Dll*)(&b));
}			
		 
inline Drt op (const Tri& a, const Dlp& b) { 
	return Drt (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca op (const Tri& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Vec*)(&b));
}			
		 
inline Sca op (const Tri& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Biv*)(&b));
}			
		 
inline Sca op (const Tri& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Tri*)(&b));
}			
		 
inline Tnt op (const Tri& a, const Aff& b) { 
	return Tnt (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Aff*)(&b));
}			
		 
inline Sca op (const Tri& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Afl*)(&b));
}			
		 
inline Sca op (const Tri& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Afp*)(&b));
}			
		 
inline Pss op (const Tri& a, const Dap& b) { 
	return Pss (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Tri& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Daf*)(&b));
}			
		 
inline Sca op (const Tri& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Dal*)(&b));
}			
		 
inline Sca op (const Tri& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tri, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Tri*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Hyp*)(&b));
}			
		 
inline Mnk ip (const Tri& a, const Pss& b) { 
	return Mnk (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Par& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Par*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Cir& b) { 
	return Sca (
 - a[0] * b[9]
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Cir*)(&b));
}			
		 
inline Hyp ip (const Tri& a, const Sph& b) { 
	return Hyp (
 - a[0] * b[3],
 - a[0] * b[4]
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Sph*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Sta& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Drv*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Drb*)(&b));
}			
		 
inline Inf ip (const Tri& a, const Drt& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori ip (const Tri& a, const Tnt& b) { 
	return Ori (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Lin*)(&b));
}			
		 
inline Inf ip (const Tri& a, const Pln& b) { 
	return Inf (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Flp*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Dfp& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Biv*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Tri& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Afl*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Afp& b) { 
	return Sca (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Dap*)(&b));
}			
		 
inline Ori ip (const Tri& a, const Daf& b) { 
	return Ori (
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Daf*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Dal*)(&b));
}			
		 
inline Sca ip (const Tri& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tri, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tri*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
inline Tri sp (const Tri& tri, const Trs& trs) {					
					
const Trs& t1 = trs;
const Tri& t2 = tri;
Dfp t3 (
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
inline Tri sp (const Tri& tri, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Tri& t2 = tri;
Par_Dfp t3 (
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
		
	
	  	
template<>
inline Tri sp (const Tri& tri, const Bst& bst) {					
					
const Bst& t1 = bst;
const Tri& t2 = tri;
Mnk_Pnt_Sph t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
 - t1[6] * t2[0],
t1[5] * t2[0],
 - t1[4] * t2[0],
 - t1[9] * t2[0],
t1[8] * t2[0],
 - t1[7] * t2[0],
t1[0] * t2[0],
t1[10] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Tri (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[9] - t3[4] * t5[8] + t3[5] * t5[7] + t3[6] * t5[6] - t3[7] * t5[5] + t3[8] * t5[4] + t3[9] * t5[0] + t3[10] * t5[10]
);

}
		
	
	  	
template<>
inline Tri re (const Tri& tri, const Vec& vec) {					
					
const Vec& t1 = vec;
const Tri& t2 = tri;
Tri t3 = involute( t2);
Biv t4 (
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Tri (
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Tri re (const Tri& tri, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Tri& t2 = tri;
Tri t3 = involute( t2);
Mnk_Pln t4 (
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0],
 - t1[3] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Tri (
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Tri re (const Tri& tri, const Pln& pln) {					
					
const Pln& t1 = pln;
const Tri& t2 = tri;
Tri t3 = involute( t2);
Mnk_Dlp t4 (
t1[3] * t3[0],
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Tri (
t4[1] * t6[2] - t4[2] * t6[1] + t4[3] * t6[0]
);

}
		
	
	  	
template<>
inline Tri re (const Tri& tri, const Dll& dll) {					
					
const Dll& t1 = dll;
const Tri& t2 = tri;
Tri t3 = involute( t2);
Mnk_Lin t4 (
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0],
 - t1[5] * t3[0],
t1[4] * t3[0],
 - t1[3] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Tri (
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Tri re (const Tri& tri, const Lin& lin) {					
					
const Lin& t1 = lin;
const Tri& t2 = tri;
Tri t3 = involute( t2);
Mnk_Dll t4 (
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0],
t1[5] * t3[0],
 - t1[4] * t3[0],
t1[3] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Tri (
t4[3] * t6[5] - t4[4] * t6[4] + t4[5] * t6[3]
);

}
		
	
	  	
template<>
inline Tri re (const Tri& tri, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Tri& t2 = tri;
Tri t3 = involute( t2);
Mnk_Sph t4 (
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0],
 - t1[3] * t3[0],
 - t1[4] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Tri (
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[3] * t6[4] - t4[4] * t6[3]
);

}
		
	
	  	
template<>
inline Tri re (const Tri& tri, const Par& par) {					
					
const Par& t1 = par;
const Tri& t2 = tri;
Tri t3 = involute( t2);
Mnk_Cir t4 (
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0],
 - t1[5] * t3[0],
t1[4] * t3[0],
 - t1[3] * t3[0],
 - t1[8] * t3[0],
t1[7] * t3[0],
 - t1[6] * t3[0],
t1[9] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Tri (
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[3] * t6[8] - t4[4] * t6[7] + t4[5] * t6[6] + t4[6] * t6[5] - t4[7] * t6[4] + t4[8] * t6[3] + t4[9] * t6[9]
);

}
		
	
	  	
template<>
inline Tri re (const Tri& tri, const Cir& cir) {					
					
const Cir& t1 = cir;
const Tri& t2 = tri;
Tri t3 = involute( t2);
Mnk_Par t4 (
 - t1[9] * t3[0],
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0],
t1[5] * t3[0],
 - t1[4] * t3[0],
t1[3] * t3[0],
t1[8] * t3[0],
 - t1[7] * t3[0],
t1[6] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Tri (
t4[0] * t6[9] - t4[1] * t6[5] + t4[2] * t6[4] - t4[3] * t6[3] - t4[4] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] + t4[7] * t6[8] - t4[8] * t6[7] + t4[9] * t6[6]
);

}
		
	
	  	
template<>
inline Tri re (const Tri& tri, const Sph& sph) {					
					
const Sph& t1 = sph;
const Tri& t2 = tri;
Tri t3 = involute( t2);
Mnk_Pnt t4 (
t1[3] * t3[0],
t1[4] * t3[0],
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Tri (
t4[0] * t6[4] + t4[1] * t6[3] + t4[2] * t6[2] - t4[3] * t6[1] + t4[4] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	