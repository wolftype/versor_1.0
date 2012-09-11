		#ifndef MNK_H_INCLUDED
		#define MNK_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Mnk gp (const Mnk& a, const Sca& b) { 
	return Mnk (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Sca*)(&b));
}			
		 
inline Ori gp (const Mnk& a, const Ori& b) { 
	return Ori (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Ori*)(&b));
}			
		 
inline Inf gp (const Mnk& a, const Inf& b) { 
	return Inf (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Inf*)(&b));
}			
		 
inline Sca gp (const Mnk& a, const Mnk& b) { 
	return Sca (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp gp (const Mnk& a, const Hyp& b) { 
	return Hyp (
 - a[0] * b[0],
a[0] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Hyp*)(&b));
}			
		 
inline Tri gp (const Mnk& a, const Pss& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Pss*)(&b));
}			
		 
inline Mnk_Pnt gp (const Mnk& a, const Pnt& b) { 
	return Mnk_Pnt (
 - a[0] * b[3],
a[0] * b[4],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Pnt*)(&b));
}			
		 
inline Mnk_Par gp (const Mnk& a, const Par& b) { 
	return Mnk_Par (
a[0] * b[9],
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Par*)(&b));
}			
		 
inline Mnk_Cir gp (const Mnk& a, const Cir& b) { 
	return Mnk_Cir (
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Cir*)(&b));
}			
		 
inline Mnk_Sph gp (const Mnk& a, const Sph& b) { 
	return Mnk_Sph (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[3],
a[0] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Sph*)(&b));
}			
		 
inline Mnk_Sta gp (const Mnk& a, const Sta& b) { 
	return Mnk_Sta (
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Sta*)(&b));
}			
		 
inline Drv gp (const Mnk& a, const Drv& b) { 
	return Drv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Drv*)(&b));
}			
		 
inline Drb gp (const Mnk& a, const Drb& b) { 
	return Drb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Drb*)(&b));
}			
		 
inline Drt gp (const Mnk& a, const Drt& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Drt*)(&b));
}			
		 
inline Tnv gp (const Mnk& a, const Tnv& b) { 
	return Tnv (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnb gp (const Mnk& a, const Tnb& b) { 
	return Tnb (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnt gp (const Mnk& a, const Tnt& b) { 
	return Tnt (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Tnt*)(&b));
}			
		 
inline Mnk_Lin gp (const Mnk& a, const Lin& b) { 
	return Mnk_Lin (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Lin*)(&b));
}			
		 
inline Mnk_Pln gp (const Mnk& a, const Pln& b) { 
	return Mnk_Pln (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Pln*)(&b));
}			
		 
inline Trs gp (const Mnk& a, const Flp& b) { 
	return Trs (
a[0] * b[3],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Flp*)(&b));
}			
		 
inline Mnk_Dfp gp (const Mnk& a, const Dfp& b) { 
	return Mnk_Dfp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Dfp*)(&b));
}			
		 
inline Mnk_Dll gp (const Mnk& a, const Dll& b) { 
	return Mnk_Dll (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Dll*)(&b));
}			
		 
inline Mnk_Dlp gp (const Mnk& a, const Dlp& b) { 
	return Mnk_Dlp (
a[0] * b[3],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Dlp*)(&b));
}			
		 
inline Mnv gp (const Mnk& a, const Vec& b) { 
	return Mnv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Vec*)(&b));
}			
		 
inline Mnk_Biv gp (const Mnk& a, const Biv& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Biv*)(&b));
}			
		 
inline Pss gp (const Mnk& a, const Tri& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Tri*)(&b));
}			
		 
inline Mnk_Aff gp (const Mnk& a, const Aff& b) { 
	return Mnk_Aff (
 - a[0] * b[3],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Aff*)(&b));
}			
		 
inline Mnk_Afl gp (const Mnk& a, const Afl& b) { 
	return Mnk_Afl (
 - a[0] * b[3],
 - a[0] * b[4],
 - a[0] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Afl*)(&b));
}			
		 
inline Mnk_Afp gp (const Mnk& a, const Afp& b) { 
	return Mnk_Afp (
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Afp*)(&b));
}			
		 
inline Trv gp (const Mnk& a, const Dap& b) { 
	return Trv (
a[0] * b[3],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Dap*)(&b));
}			
		 
inline Mnk_Daf gp (const Mnk& a, const Daf& b) { 
	return Mnk_Daf (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Daf*)(&b));
}			
		 
inline Mnk_Dal gp (const Mnk& a, const Dal& b) { 
	return Mnk_Dal (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
 - a[0] * b[0],
 - a[0] * b[1],
 - a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Dal*)(&b));
}			
		 
inline Vec gp (const Mnk& a, const Mnv& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Mnv*)(&b));
}			
		 
inline Vec_Mnv gp (const Mnk& a, const Rot& b) { 
	return Vec_Mnv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Rot*)(&b));
}			
		 
inline Lin_Dlp gp (const Mnk& a, const Mot& b) { 
	return Lin_Dlp (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Mot*)(&b));
}			
		 
inline Dil gp (const Mnk& a, const Dil& b) { 
	return Dil (
a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Dil*)(&b));
}			
		 
inline Dap gp (const Mnk& a, const Trv& b) { 
	return Dap (
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Trv*)(&b));
}			
		 
inline Mtd gp (const Mnk& a, const Mtd& b) { 
	return Mtd (
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Mtd*)(&b));
}			
		 
inline Flp gp (const Mnk& a, const Trs& b) { 
	return Flp (
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Mnk& a, const Rtc& b) { 
	return Rtc (
a[0] * b[11],
a[0] * b[12],
a[0] * b[13],
 - a[0] * b[3],
a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
 - a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[15],
a[0] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Mnk& a, const Mtt& b) { 
	return Mtt (
a[0] * b[10],
a[0] * b[11],
a[0] * b[12],
a[0] * b[13],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[0] * b[14],
a[0] * b[15]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Mtt*)(&b));
}			
		 
inline Vec_Dal gp (const Mnk& a, const Rtt& b) { 
	return Vec_Dal (
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[0] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Rtt*)(&b));
}			
		 
inline Rtd gp (const Mnk& a, const Rtd& b) { 
	return Rtd (
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Rtd*)(&b));
}			
		 
inline Tvd gp (const Mnk& a, const Tvd& b) { 
	return Tvd (
a[0] * b[4],
 - a[0] * b[1],
 - a[0] * b[2],
 - a[0] * b[3],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Tvd*)(&b));
}			
		 
inline Tsd gp (const Mnk& a, const Tsd& b) { 
	return Tsd (
a[0] * b[4],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Tsd*)(&b));
}			
		 
inline Trt gp (const Mnk& a, const Trt& b) { 
	return Trt (
a[0] * b[10],
a[0] * b[11],
a[0] * b[12],
a[0] * b[13],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Trt*)(&b));
}			
		 
inline Rvd gp (const Mnk& a, const Rvd& b) { 
	return Rvd (
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[0] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Rvd*)(&b));
}			
		 
inline Tst gp (const Mnk& a, const Tst& b) { 
	return Tst (
a[0] * b[10],
a[0] * b[11],
a[0] * b[12],
a[0] * b[13],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[0] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Tst*)(&b));
}			
		 
inline Tvt gp (const Mnk& a, const Tvt& b) { 
	return Tvt (
a[0] * b[10],
a[0] * b[11],
a[0] * b[12],
a[0] * b[13],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Tvt*)(&b));
}			
		 
inline Pss_Mnk_Pnt_Sph gp (const Mnk& a, const Bst& b) { 
	return Pss_Mnk_Pnt_Sph (
a[0] * b[10],
 - a[0] * b[4],
 - a[0] * b[5],
 - a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mnk, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mnk*)(&a),*(Bst*)(&b));
}			
		 
inline Mnk op (const Mnk& a, const Sca& b) { 
	return Mnk (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Sca*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Ori*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Inf*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Pss*)(&b));
}			
		 
inline Mnv op (const Mnk& a, const Pnt& b) { 
	return Mnv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Pnt*)(&b));
}			
		 
inline Mnk_Biv op (const Mnk& a, const Par& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Par*)(&b));
}			
		 
inline Pss op (const Mnk& a, const Cir& b) { 
	return Pss (
a[0] * b[9]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Sph*)(&b));
}			
		 
inline Mnk_Biv op (const Mnk& a, const Sta& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Sta*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Drv*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Drt*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Pln*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Flp*)(&b));
}			
		 
inline Pss op (const Mnk& a, const Dfp& b) { 
	return Pss (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Dfp*)(&b));
}			
		 
inline Mnk_Biv op (const Mnk& a, const Dll& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Dll*)(&b));
}			
		 
inline Mnv op (const Mnk& a, const Dlp& b) { 
	return Mnv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Dlp*)(&b));
}			
		 
inline Mnv op (const Mnk& a, const Vec& b) { 
	return Mnv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Vec*)(&b));
}			
		 
inline Mnk_Biv op (const Mnk& a, const Biv& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Biv*)(&b));
}			
		 
inline Pss op (const Mnk& a, const Tri& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Tri*)(&b));
}			
		 
inline Mnv op (const Mnk& a, const Aff& b) { 
	return Mnv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Aff*)(&b));
}			
		 
inline Mnk_Biv op (const Mnk& a, const Afl& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Afl*)(&b));
}			
		 
inline Pss op (const Mnk& a, const Afp& b) { 
	return Pss (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Afp*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Daf*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Dal*)(&b));
}			
		 
inline Sca op (const Mnk& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Mnk, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Mnk*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Mnk& b) { 
	return Sca (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Hyp*)(&b));
}			
		 
inline Tri ip (const Mnk& a, const Pss& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Par& b) { 
	return Sca (
a[0] * b[9]
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Par*)(&b));
}			
		 
inline Vec ip (const Mnk& a, const Cir& b) { 
	return Vec (
a[0] * b[6],
a[0] * b[7],
a[0] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Cir*)(&b));
}			
		 
inline Biv ip (const Mnk& a, const Sph& b) { 
	return Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Sph*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Sta& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Drv*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Drb*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Tnt*)(&b));
}			
		 
inline Vec ip (const Mnk& a, const Lin& b) { 
	return Vec (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Lin*)(&b));
}			
		 
inline Biv ip (const Mnk& a, const Pln& b) { 
	return Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Flp& b) { 
	return Sca (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Flp*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Biv*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Afl*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Mnk& a, const Dap& b) { 
	return Sca (
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Dap*)(&b));
}			
		 
inline Biv ip (const Mnk& a, const Daf& b) { 
	return Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Daf*)(&b));
}			
		 
inline Vec ip (const Mnk& a, const Dal& b) { 
	return Vec (
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Dal*)(&b));
}			
		 
inline Vec ip (const Mnk& a, const Mnv& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Mnk, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mnk*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Mnk sp (const Mnk& mnk, const Rot& rot) {					
					
const Rot& t1 = rot;
const Mnk& t2 = mnk;
Vec_Mnv t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Mnk (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Mot& mot) {					
					
const Mot& t1 = mot;
const Mnk& t2 = mnk;
Lin_Dlp t3 (
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
 - t1[7] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Mnk (
t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Dil& dil) {					
					
const Dil& t1 = dil;
const Mnk& t2 = mnk;
Dil t3 (
t1[1] * t2[0],
t1[0] * t2[0]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Mnk (
t3[0] * t5[1] + t3[1] * t5[0]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Trv& trv) {					
					
const Trv& t1 = trv;
const Mnk& t2 = mnk;
Dap t3 (
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Mnk (
t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Mnk& t2 = mnk;
Mtd t3 (
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
 - t1[4] * t2[0],
 - t1[5] * t2[0],
 - t1[6] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
 - t1[11] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Mnk (
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Trs& trs) {					
					
const Trs& t1 = trs;
const Mnk& t2 = mnk;
Flp t3 (
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0],
t1[0] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Mnk (
t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Mnk& t2 = mnk;
Rtc t3 (
t1[11] * t2[0],
t1[12] * t2[0],
t1[13] * t2[0],
t1[3] * t2[0],
 - t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
 - t1[10] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[15] * t2[0],
t1[14] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Mnk (
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] + t3[3] * t5[4] - t3[4] * t5[3] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[0] + t3[12] * t5[1] + t3[13] * t5[2] - t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Mnk& t2 = mnk;
Mtt t3 (
t1[10] * t2[0],
t1[11] * t2[0],
t1[12] * t2[0],
t1[13] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[14] * t2[0],
 - t1[15] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Mnk (
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Mnk& t2 = mnk;
Vec_Dal t3 (
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[7] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Mnk (
t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Mnk& t2 = mnk;
Rtd t3 (
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Mnk (
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Mnk& t2 = mnk;
Tvd t3 (
t1[4] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Mnk (
t3[0] * t5[4] + t3[4] * t5[0]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Mnk& t2 = mnk;
Tsd t3 (
t1[4] * t2[0],
 - t1[1] * t2[0],
 - t1[2] * t2[0],
 - t1[3] * t2[0],
t1[0] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Mnk (
t3[0] * t5[4] + t3[4] * t5[0]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Trt& trt) {					
					
const Trt& t1 = trt;
const Mnk& t2 = mnk;
Trt t3 (
t1[10] * t2[0],
t1[11] * t2[0],
t1[12] * t2[0],
t1[13] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Mnk (
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Mnk& t2 = mnk;
Rvd t3 (
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[11] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Mnk (
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Tst& tst) {					
					
const Tst& t1 = tst;
const Mnk& t2 = mnk;
Tst t3 (
t1[10] * t2[0],
t1[11] * t2[0],
t1[12] * t2[0],
t1[13] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[14] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Mnk (
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Mnk& t2 = mnk;
Tvt t3 (
t1[10] * t2[0],
t1[11] * t2[0],
t1[12] * t2[0],
t1[13] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
 - t1[14] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Mnk (
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Mnk sp (const Mnk& mnk, const Bst& bst) {					
					
const Bst& t1 = bst;
const Mnk& t2 = mnk;
Pss_Mnk_Pnt_Sph t3 (
t1[10] * t2[0],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
 - t1[7] * t2[0],
 - t1[8] * t2[0],
 - t1[9] * t2[0],
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Mnk (
t3[0] * t5[10] - t3[1] * t5[7] - t3[2] * t5[8] - t3[3] * t5[9] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Mnk re (const Mnk& mnk, const Vec& vec) {					
					
const Vec& t1 = vec;
const Mnk& t2 = mnk;
Mnk t3 = involute( t2);
Mnv t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Mnk (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2]
);

}
		
	
	  	
template<>
inline Mnk re (const Mnk& mnk, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Mnk& t2 = mnk;
Mnk t3 = involute( t2);
Mnk_Dlp t4 (
 - t1[3] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Mnk (
t4[1] * t6[0] + t4[2] * t6[1] + t4[3] * t6[2]
);

}
		
	
	  	
template<>
inline Mnk re (const Mnk& mnk, const Pln& pln) {					
					
const Pln& t1 = pln;
const Mnk& t2 = mnk;
Mnk t3 = involute( t2);
Mnk_Pln t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
 - t1[3] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Mnk (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2]
);

}
		
	
	  	
template<>
inline Mnk re (const Mnk& mnk, const Dll& dll) {					
					
const Dll& t1 = dll;
const Mnk& t2 = mnk;
Mnk t3 = involute( t2);
Mnk_Dll t4 (
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Mnk (
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2]
);

}
		
	
	  	
template<>
inline Mnk re (const Mnk& mnk, const Lin& lin) {					
					
const Lin& t1 = lin;
const Mnk& t2 = mnk;
Mnk t3 = involute( t2);
Mnk_Lin t4 (
t1[3] * t3[0],
t1[4] * t3[0],
t1[5] * t3[0],
 - t1[0] * t3[0],
 - t1[1] * t3[0],
 - t1[2] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Mnk (
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5]
);

}
		
	
	  	
template<>
inline Mnk re (const Mnk& mnk, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Mnk& t2 = mnk;
Mnk t3 = involute( t2);
Mnk_Pnt t4 (
t1[3] * t3[0],
 - t1[4] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Mnk (
t4[0] * t6[4] - t4[1] * t6[3] + t4[2] * t6[0] + t4[3] * t6[1] + t4[4] * t6[2]
);

}
		
	
	  	
template<>
inline Mnk re (const Mnk& mnk, const Par& par) {					
					
const Par& t1 = par;
const Mnk& t2 = mnk;
Mnk t3 = involute( t2);
Mnk_Par t4 (
t1[9] * t3[0],
t1[3] * t3[0],
t1[4] * t3[0],
t1[5] * t3[0],
 - t1[6] * t3[0],
 - t1[7] * t3[0],
 - t1[8] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Mnk (
t4[0] * t6[9] - t4[1] * t6[6] - t4[2] * t6[7] - t4[3] * t6[8] + t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5] - t4[7] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2]
);

}
		
	
	  	
template<>
inline Mnk re (const Mnk& mnk, const Cir& cir) {					
					
const Cir& t1 = cir;
const Mnk& t2 = mnk;
Mnk t3 = involute( t2);
Mnk_Cir t4 (
t1[6] * t3[0],
t1[7] * t3[0],
t1[8] * t3[0],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
 - t1[3] * t3[0],
 - t1[4] * t3[0],
 - t1[5] * t3[0],
t1[9] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Mnk (
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[3] * t6[3] - t4[4] * t6[4] - t4[5] * t6[5] + t4[6] * t6[0] + t4[7] * t6[1] + t4[8] * t6[2] - t4[9] * t6[9]
);

}
		
	
	  	
template<>
inline Mnk re (const Mnk& mnk, const Sph& sph) {					
					
const Sph& t1 = sph;
const Mnk& t2 = mnk;
Mnk t3 = involute( t2);
Mnk_Sph t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[3] * t3[0],
 - t1[4] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Mnk (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[3] * t6[4] - t4[4] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	