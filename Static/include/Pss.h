		#ifndef PSS_H_INCLUDED
		#define PSS_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Pss gp (const Pss& a, const Sca& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Sca*)(&b));
}			
		 
inline Tnt gp (const Pss& a, const Ori& b) { 
	return Tnt (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Ori*)(&b));
}			
		 
inline Drt gp (const Pss& a, const Inf& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Inf*)(&b));
}			
		 
inline Tri gp (const Pss& a, const Mnk& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Pss gp (const Pss& a, const Hyp& b) { 
	return Hyp_Pss (
 - a[0] * b[0],
a[0] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca gp (const Pss& a, const Pss& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Pss*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Pnt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Par*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Cir*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Sph*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Sta*)(&b));
}			
		 
inline Drb gp (const Pss& a, const Drv& b) { 
	return Drb (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Drv*)(&b));
}			
		 
inline Drv gp (const Pss& a, const Drb& b) { 
	return Drv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Drb*)(&b));
}			
		 
inline Inf gp (const Pss& a, const Drt& b) { 
	return Inf (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Drt*)(&b));
}			
		 
inline Tnb gp (const Pss& a, const Tnv& b) { 
	return Tnb (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv gp (const Pss& a, const Tnb& b) { 
	return Tnv (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori gp (const Pss& a, const Tnt& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Tnt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Lin*)(&b));
}			
		 
inline Dlp gp (const Pss& a, const Pln& b) { 
	return Dlp (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Pln*)(&b));
}			
		 
inline Dfp gp (const Pss& a, const Flp& b) { 
	return Dfp (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Flp*)(&b));
}			
		 
inline Flp gp (const Pss& a, const Dfp& b) { 
	return Flp (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Dfp*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Dll*)(&b));
}			
		 
inline Pln gp (const Pss& a, const Dlp& b) { 
	return Pln (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Dlp*)(&b));
}			
		 
inline Mnk_Biv gp (const Pss& a, const Vec& b) { 
	return Mnk_Biv (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Vec*)(&b));
}			
		 
inline Mnv gp (const Pss& a, const Biv& b) { 
	return Mnv (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Biv*)(&b));
}			
		 
inline Mnk gp (const Pss& a, const Tri& b) { 
	return Mnk (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Tri*)(&b));
}			
		 
inline Daf gp (const Pss& a, const Aff& b) { 
	return Daf (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Aff*)(&b));
}			
		 
inline Dal gp (const Pss& a, const Afl& b) { 
	return Dal (
 - a[0] * b[5],
a[0] * b[4],
 - a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Afl*)(&b));
}			
		 
inline Dap gp (const Pss& a, const Afp& b) { 
	return Dap (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Afp*)(&b));
}			
		 
inline Afp gp (const Pss& a, const Dap& b) { 
	return Afp (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Dap*)(&b));
}			
		 
inline Aff gp (const Pss& a, const Daf& b) { 
	return Aff (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Daf*)(&b));
}			
		 
inline Afl gp (const Pss& a, const Dal& b) { 
	return Afl (
a[0] * b[5],
 - a[0] * b[4],
a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Dal*)(&b));
}			
		 
inline Biv gp (const Pss& a, const Mnv& b) { 
	return Biv (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Mnv*)(&b));
}			
		 
inline Biv_Mnv gp (const Pss& a, const Rot& b) { 
	return Biv_Mnv (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Rot*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Mot*)(&b));
}			
		 
inline Ori_Drt gp (const Pss& a, const Dil& b) { 
	return Ori_Drt (
a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Dil*)(&b));
}			
		 
inline Mnk_Afp gp (const Pss& a, const Trv& b) { 
	return Mnk_Afp (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Trv*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Mtd*)(&b));
}			
		 
inline Mnk_Dfp gp (const Pss& a, const Trs& b) { 
	return Mnk_Dfp (
a[0] * b[3],
 - a[0] * b[2],
a[0] * b[1],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Pss, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Trs*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Rtc*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Mtt*)(&b));
}			
		 
inline Biv_Dal gp (const Pss& a, const Rtt& b) { 
	return Biv_Dal (
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
		 
		
template<> inline MVBase gp_gen<Pss, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Rtt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Rtd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Tvd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Tsd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Trt*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Rvd*)(&b));
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
		 
		
template<> inline MVBase gp_gen<Pss, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Tst*)(&b));
}			
		 
inline Par_Dfp gp (const Pss& a, const Tvt& b) { 
	return Par_Dfp (
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
		 
		
template<> inline MVBase gp_gen<Pss, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Tvt*)(&b));
}			
		 
inline Pnt_Sph gp (const Pss& a, const Bst& b) { 
	return Pnt_Sph (
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
		 
		
template<> inline MVBase gp_gen<Pss, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Pss*)(&a),*(Bst*)(&b));
}			
		 
inline Pss op (const Pss& a, const Sca& b) { 
	return Pss (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Sca*)(&b));
}			
		 
inline Sca op (const Pss& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Ori*)(&b));
}			
		 
inline Sca op (const Pss& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Inf*)(&b));
}			
		 
inline Sca op (const Pss& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca op (const Pss& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Pss& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Pss*)(&b));
}			
		 
inline Sca op (const Pss& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca op (const Pss& a, const Par& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Par*)(&b));
}			
		 
inline Sca op (const Pss& a, const Cir& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Pss& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Sph*)(&b));
}			
		 
inline Sca op (const Pss& a, const Sta& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Sta*)(&b));
}			
		 
inline Sca op (const Pss& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Drv*)(&b));
}			
		 
inline Sca op (const Pss& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Pss& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Drt*)(&b));
}			
		 
inline Sca op (const Pss& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca op (const Pss& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Pss& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca op (const Pss& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Pss& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Pln*)(&b));
}			
		 
inline Sca op (const Pss& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Flp*)(&b));
}			
		 
inline Sca op (const Pss& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca op (const Pss& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Dll*)(&b));
}			
		 
inline Sca op (const Pss& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca op (const Pss& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Vec*)(&b));
}			
		 
inline Sca op (const Pss& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Biv*)(&b));
}			
		 
inline Sca op (const Pss& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Tri*)(&b));
}			
		 
inline Sca op (const Pss& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Aff*)(&b));
}			
		 
inline Sca op (const Pss& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Afl*)(&b));
}			
		 
inline Sca op (const Pss& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Afp*)(&b));
}			
		 
inline Sca op (const Pss& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Pss& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Daf*)(&b));
}			
		 
inline Sca op (const Pss& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Dal*)(&b));
}			
		 
inline Sca op (const Pss& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Pss, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Pss*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Pss& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Par& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Par*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Cir& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Cir*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Sph*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Sta& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Drv*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Drb*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Lin*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Flp*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Biv*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Afl*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Dap*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Daf*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Dal*)(&b));
}			
		 
inline Sca ip (const Pss& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Pss, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Pss*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Pss sp (const Pss& pss, const Rot& rot) {					
					
const Rot& t1 = rot;
const Pss& t2 = pss;
Biv_Mnv t3 (
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
inline Pss sp (const Pss& pss, const Trs& trs) {					
					
const Trs& t1 = trs;
const Pss& t2 = pss;
Mnk_Dfp t3 (
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
inline Pss sp (const Pss& pss, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Pss& t2 = pss;
Biv_Dal t3 (
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
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
		
	
	  	
template<>
inline Pss sp (const Pss& pss, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Pss& t2 = pss;
Par_Dfp t3 (
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
		
	
	  	
template<>
inline Pss sp (const Pss& pss, const Bst& bst) {					
					
const Bst& t1 = bst;
const Pss& t2 = pss;
Pnt_Sph t3 (
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
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Pss (
 - t3[0] * t5[9] + t3[1] * t5[8] - t3[2] * t5[7] + t3[3] * t5[6] - t3[4] * t5[5] + t3[5] * t5[4] + t3[6] * t5[3] - t3[7] * t5[2] + t3[8] * t5[1] + t3[9] * t5[10] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Pss re (const Pss& pss, const Vec& vec) {					
					
const Vec& t1 = vec;
const Pss& t2 = pss;
Pss t3 = involute( t2);
Mnk_Biv t4 (
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Pss (
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Pss re (const Pss& pss, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Pss& t2 = pss;
Pss t3 = involute( t2);
Pln t4 (
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0],
t1[3] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Pss (
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Pss re (const Pss& pss, const Pln& pln) {					
					
const Pln& t1 = pln;
const Pss& t2 = pss;
Pss t3 = involute( t2);
Dlp t4 (
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0],
 - t1[3] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Pss (
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Pss re (const Pss& pss, const Dll& dll) {					
					
const Dll& t1 = dll;
const Pss& t2 = pss;
Pss t3 = involute( t2);
Lin t4 (
t1[5] * t3[0],
 - t1[4] * t3[0],
t1[3] * t3[0],
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Pss (
t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0]
);

}
		
	
	  	
template<>
inline Pss re (const Pss& pss, const Lin& lin) {					
					
const Lin& t1 = lin;
const Pss& t2 = pss;
Pss t3 = involute( t2);
Dll t4 (
t1[5] * t3[0],
 - t1[4] * t3[0],
t1[3] * t3[0],
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Pss (
t4[0] * t6[5] - t4[1] * t6[4] + t4[2] * t6[3]
);

}
		
	
	  	
template<>
inline Pss re (const Pss& pss, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Pss& t2 = pss;
Pss t3 = involute( t2);
Sph t4 (
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0],
 - t1[3] * t3[0],
t1[4] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Pss (
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[3] * t6[4] - t4[4] * t6[3]
);

}
		
	
	  	
template<>
inline Pss re (const Pss& pss, const Par& par) {					
					
const Par& t1 = par;
const Pss& t2 = pss;
Pss t3 = involute( t2);
Cir t4 (
 - t1[5] * t3[0],
t1[4] * t3[0],
 - t1[3] * t3[0],
t1[8] * t3[0],
 - t1[7] * t3[0],
t1[6] * t3[0],
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0],
t1[9] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Pss (
 - t4[0] * t6[8] + t4[1] * t6[7] - t4[2] * t6[6] + t4[3] * t6[5] - t4[4] * t6[4] + t4[5] * t6[3] + t4[6] * t6[2] - t4[7] * t6[1] + t4[8] * t6[0] + t4[9] * t6[9]
);

}
		
	
	  	
template<>
inline Pss re (const Pss& pss, const Cir& cir) {					
					
const Cir& t1 = cir;
const Pss& t2 = pss;
Pss t3 = involute( t2);
Par t4 (
t1[8] * t3[0],
 - t1[7] * t3[0],
t1[6] * t3[0],
t1[2] * t3[0],
 - t1[1] * t3[0],
t1[0] * t3[0],
 - t1[5] * t3[0],
t1[4] * t3[0],
 - t1[3] * t3[0],
 - t1[9] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Pss (
t4[0] * t6[8] - t4[1] * t6[7] + t4[2] * t6[6] + t4[3] * t6[5] - t4[4] * t6[4] + t4[5] * t6[3] - t4[6] * t6[2] + t4[7] * t6[1] - t4[8] * t6[0] + t4[9] * t6[9]
);

}
		
	
	  	
template<>
inline Pss re (const Pss& pss, const Sph& sph) {					
					
const Sph& t1 = sph;
const Pss& t2 = pss;
Pss t3 = involute( t2);
Pnt t4 (
 - t1[2] * t3[0],
t1[1] * t3[0],
 - t1[0] * t3[0],
t1[3] * t3[0],
 - t1[4] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Pss (
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[3] * t6[4] + t4[4] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	