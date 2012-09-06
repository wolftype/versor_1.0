		#ifndef TRS_H_INCLUDED
		#define TRS_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Trs gp (const Trs& a, const Sca& b) { 
	return Trs (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Sca*)(&b));
}			
		 
inline Ori_Flp gp (const Trs& a, const Ori& b) { 
	return Ori_Flp (
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Ori*)(&b));
}			
		 
inline Inf gp (const Trs& a, const Inf& b) { 
	return Inf (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Inf*)(&b));
}			
		 
inline Flp gp (const Trs& a, const Mnk& b) { 
	return Flp (
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Flp gp (const Trs& a, const Hyp& b) { 
	return Hyp_Flp (
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
a[0] * b[0],
a[0] * b[1],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Hyp*)(&b));
}			
		 
inline Mnk_Dfp gp (const Trs& a, const Pss& b) { 
	return Mnk_Dfp (
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Pss*)(&b));
}			
		 
inline Pnt_Flp gp (const Trs& a, const Pnt& b) { 
	return Pnt_Flp (
a[0] * b[0] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[0] * b[2] - a[3] * b[3],
a[0] * b[3],
a[0] * b[4] - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Pnt*)(&b));
}			
		 
inline Tvt gp (const Trs& a, const Par& b) { 
	return Tvt (
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[0] * b[0] + a[1] * b[4] - a[2] * b[3],
a[0] * b[1] + a[1] * b[5] - a[3] * b[3],
a[0] * b[2] + a[2] * b[5] - a[3] * b[4],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6] - a[1] * b[9] - a[2] * b[0] - a[3] * b[1],
a[0] * b[7] + a[1] * b[0] - a[2] * b[9] - a[3] * b[2],
a[0] * b[8] + a[1] * b[1] + a[2] * b[2] - a[3] * b[9],
a[0] * b[9] + a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[1] * b[4] - a[2] * b[3],
a[1] * b[5] - a[3] * b[3],
a[2] * b[5] - a[3] * b[4],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Par*)(&b));
}			
		 
inline Par_Dfp gp (const Trs& a, const Cir& b) { 
	return Par_Dfp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[1] * b[6] + a[2] * b[7] + a[3] * b[8],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] + a[1] * b[7] - a[2] * b[6] - a[3] * b[9],
a[0] * b[4] + a[1] * b[8] + a[2] * b[9] - a[3] * b[6],
a[0] * b[5] - a[1] * b[9] + a[2] * b[8] - a[3] * b[7],
a[0] * b[6] + a[2] * b[0] + a[3] * b[1],
a[0] * b[7] - a[1] * b[0] + a[3] * b[2],
a[0] * b[8] - a[1] * b[1] - a[2] * b[2],
a[0] * b[9] - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt_Dfp gp (const Trs& a, const Sph& b) { 
	return Pnt_Dfp (
a[3] * b[3],
 - a[2] * b[3],
a[1] * b[3],
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] + a[3] * b[3],
a[0] * b[1] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3],
a[0] * b[3],
a[0] * b[4] - a[1] * b[2] + a[2] * b[1] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Sph*)(&b));
}			
		 
inline Tvt gp (const Trs& a, const Sta& b) { 
	return Tvt (
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[0] * b[0] + a[1] * b[4] - a[2] * b[3],
a[0] * b[1] + a[1] * b[5] - a[3] * b[3],
a[0] * b[2] + a[2] * b[5] - a[3] * b[4],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6] - a[2] * b[0] - a[3] * b[1],
a[0] * b[7] + a[1] * b[0] - a[3] * b[2],
a[0] * b[8] + a[1] * b[1] + a[2] * b[2],
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[1] * b[4] - a[2] * b[3],
a[1] * b[5] - a[3] * b[3],
a[2] * b[5] - a[3] * b[4],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Sta*)(&b));
}			
		 
inline Drv gp (const Trs& a, const Drv& b) { 
	return Drv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Drv*)(&b));
}			
		 
inline Drb gp (const Trs& a, const Drb& b) { 
	return Drb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Drb*)(&b));
}			
		 
inline Drt gp (const Trs& a, const Drt& b) { 
	return Drt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Drt*)(&b));
}			
		 
inline Tnv_Flp gp (const Trs& a, const Tnv& b) { 
	return Tnv_Flp (
a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv_Dfp gp (const Trs& a, const Tnb& b) { 
	return Tnv_Dfp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori_Dfp gp (const Trs& a, const Tnt& b) { 
	return Ori_Dfp (
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Tnt*)(&b));
}			
		 
inline Pln_Dfp gp (const Trs& a, const Lin& b) { 
	return Pln_Dfp (
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[0] * b[0] + a[1] * b[4] - a[2] * b[3],
a[0] * b[1] + a[1] * b[5] - a[3] * b[3],
a[0] * b[2] + a[2] * b[5] - a[3] * b[4],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Lin*)(&b));
}			
		 
inline Lin_Dfp gp (const Trs& a, const Pln& b) { 
	return Lin_Dfp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Pln*)(&b));
}			
		 
inline Flp gp (const Trs& a, const Flp& b) { 
	return Flp (
a[0] * b[0] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[0] * b[2] - a[3] * b[3],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Flp*)(&b));
}			
		 
inline Dfp gp (const Trs& a, const Dfp& b) { 
	return Dfp (
a[0] * b[0] - a[3] * b[3],
a[0] * b[1] + a[2] * b[3],
a[0] * b[2] - a[1] * b[3],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Dfp*)(&b));
}			
		 
inline Pln_Flp gp (const Trs& a, const Dll& b) { 
	return Pln_Flp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[2] * b[0] - a[3] * b[1],
a[0] * b[4] + a[1] * b[0] - a[3] * b[2],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Dll*)(&b));
}			
		 
inline Lin_Flp gp (const Trs& a, const Dlp& b) { 
	return Lin_Flp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Dlp*)(&b));
}			
		 
inline Lin_Flp gp (const Trs& a, const Vec& b) { 
	return Lin_Flp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Vec*)(&b));
}			
		 
inline Pln_Flp gp (const Trs& a, const Biv& b) { 
	return Pln_Flp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Biv*)(&b));
}			
		 
inline Dfp gp (const Trs& a, const Tri& b) { 
	return Dfp (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Tri*)(&b));
}			
		 
inline Pnt_Flp gp (const Trs& a, const Aff& b) { 
	return Pnt_Flp (
a[0] * b[0] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[0] * b[2] - a[3] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Aff*)(&b));
}			
		 
inline Tvt gp (const Trs& a, const Afl& b) { 
	return Tvt (
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[0] * b[0] + a[1] * b[4] - a[2] * b[3],
a[0] * b[1] + a[1] * b[5] - a[3] * b[3],
a[0] * b[2] + a[2] * b[5] - a[3] * b[4],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[1] * b[4] - a[2] * b[3],
a[1] * b[5] - a[3] * b[3],
a[2] * b[5] - a[3] * b[4],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Afl*)(&b));
}			
		 
inline Flp_Afp gp (const Trs& a, const Afp& b) { 
	return Flp_Afp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Afp*)(&b));
}			
		 
inline Trt gp (const Trs& a, const Dap& b) { 
	return Trt (
a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[3] * b[3],
a[0] * b[3] + a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Dap*)(&b));
}			
		 
inline Pnt_Dfp gp (const Trs& a, const Daf& b) { 
	return Pnt_Dfp (
a[3] * b[3],
 - a[2] * b[3],
a[1] * b[3],
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] + a[3] * b[3],
a[0] * b[1] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3],
a[0] * b[3],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Daf*)(&b));
}			
		 
inline Par_Dfp gp (const Trs& a, const Dal& b) { 
	return Par_Dfp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[1] * b[4] - a[2] * b[3],
a[1] * b[5] - a[3] * b[3],
a[2] * b[5] - a[3] * b[4],
a[0] * b[3] + a[2] * b[0] + a[3] * b[1],
a[0] * b[4] - a[1] * b[0] + a[3] * b[2],
a[0] * b[5] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Dal*)(&b));
}			
		 
inline Pln_Dfp gp (const Trs& a, const Mnv& b) { 
	return Pln_Dfp (
a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Mnv*)(&b));
}			
		 
inline Mot gp (const Trs& a, const Rot& b) { 
	return Mot (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Rot*)(&b));
}			
		 
inline Mot gp (const Trs& a, const Mot& b) { 
	return Mot (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4] + a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[5] + a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
a[0] * b[6] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[0] * b[7] + a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Mot*)(&b));
}			
		 
inline Tsd gp (const Trs& a, const Dil& b) { 
	return Tsd (
a[0] * b[0],
a[1] * b[0] - a[1] * b[1],
a[2] * b[0] - a[2] * b[1],
a[3] * b[0] - a[3] * b[1],
a[0] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Dil*)(&b));
}			
		 
inline Trt gp (const Trs& a, const Trv& b) { 
	return Trt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Trv*)(&b));
}			
		 
inline Mtd gp (const Trs& a, const Mtd& b) { 
	return Mtd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4] + a[1] * b[0] - a[1] * b[7] - a[2] * b[1] + a[2] * b[8] - a[3] * b[2] + a[3] * b[9],
a[0] * b[5] + a[1] * b[1] - a[1] * b[8] + a[2] * b[0] - a[2] * b[7] - a[3] * b[3] + a[3] * b[10],
a[0] * b[6] + a[1] * b[2] - a[1] * b[9] + a[2] * b[3] - a[2] * b[10] + a[3] * b[0] - a[3] * b[7],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11] + a[1] * b[3] - a[1] * b[10] - a[2] * b[2] + a[2] * b[9] + a[3] * b[1] - a[3] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Mtd*)(&b));
}			
		 
inline Trs gp (const Trs& a, const Trs& b) { 
	return Trs (
a[0] * b[0],
a[0] * b[1] + a[1] * b[0],
a[0] * b[2] + a[2] * b[0],
a[0] * b[3] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Trs& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[3] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] - a[1] * b[5] - a[2] * b[3] + a[3] * b[7],
a[0] * b[2] - a[1] * b[6] - a[2] * b[7] - a[3] * b[3],
a[0] * b[3],
a[0] * b[4] - a[1] * b[0] + a[1] * b[11] - a[2] * b[1] + a[2] * b[12] - a[3] * b[2] + a[3] * b[13],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8] - a[1] * b[1] + a[1] * b[12] + a[2] * b[0] - a[2] * b[11] - a[3] * b[14] + a[3] * b[15],
a[0] * b[9] - a[1] * b[2] + a[1] * b[13] + a[2] * b[14] - a[2] * b[15] + a[3] * b[0] - a[3] * b[11],
a[0] * b[10] - a[1] * b[14] + a[1] * b[15] - a[2] * b[2] + a[2] * b[13] + a[3] * b[1] - a[3] * b[12],
a[0] * b[11] - a[1] * b[3] + a[2] * b[5] + a[3] * b[6],
a[0] * b[12] - a[1] * b[5] - a[2] * b[3] + a[3] * b[7],
a[0] * b[13] - a[1] * b[6] - a[2] * b[7] - a[3] * b[3],
a[0] * b[14] - a[1] * b[7] + a[2] * b[6] - a[3] * b[5],
a[0] * b[15] - a[1] * b[7] + a[2] * b[6] - a[3] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Trs& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[14],
a[0] * b[2] + a[1] * b[6] - a[2] * b[14] - a[3] * b[4],
a[0] * b[3] + a[1] * b[14] + a[2] * b[6] - a[3] * b[5],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] + a[2] * b[11] - a[3] * b[2] + a[3] * b[12],
a[0] * b[8] + a[1] * b[1] - a[1] * b[11] + a[2] * b[0] - a[2] * b[10] - a[3] * b[3] + a[3] * b[13],
a[0] * b[9] + a[1] * b[2] - a[1] * b[12] + a[2] * b[3] - a[2] * b[13] + a[3] * b[0] - a[3] * b[10],
a[0] * b[10] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[11] + a[1] * b[5] - a[2] * b[4] + a[3] * b[14],
a[0] * b[12] + a[1] * b[6] - a[2] * b[14] - a[3] * b[4],
a[0] * b[13] + a[1] * b[14] + a[2] * b[6] - a[3] * b[5],
a[0] * b[14],
a[0] * b[15] + a[1] * b[3] - a[1] * b[13] - a[2] * b[2] + a[2] * b[12] + a[3] * b[1] - a[3] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Mtt*)(&b));
}			
		 
inline Mtt gp (const Trs& a, const Rtt& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[7],
a[0] * b[2] + a[1] * b[6] - a[2] * b[7] - a[3] * b[4],
a[0] * b[3] + a[1] * b[7] + a[2] * b[6] - a[3] * b[5],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[1] * b[5] - a[2] * b[4] + a[3] * b[7],
a[1] * b[6] - a[2] * b[7] - a[3] * b[4],
a[1] * b[7] + a[2] * b[6] - a[3] * b[5],
a[0] * b[7],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Rtt*)(&b));
}			
		 
inline Mtd gp (const Trs& a, const Rtd& b) { 
	return Mtd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[0] - a[1] * b[4] - a[2] * b[1] + a[2] * b[5] - a[3] * b[2] + a[3] * b[6],
a[1] * b[1] - a[1] * b[5] + a[2] * b[0] - a[2] * b[4] - a[3] * b[3] + a[3] * b[7],
a[1] * b[2] - a[1] * b[6] + a[2] * b[3] - a[2] * b[7] + a[3] * b[0] - a[3] * b[4],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[1] * b[3] - a[1] * b[7] - a[2] * b[2] + a[2] * b[6] + a[3] * b[1] - a[3] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Rtd*)(&b));
}			
		 
inline Trt gp (const Trs& a, const Tvd& b) { 
	return Trt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[0] - a[1] * b[4],
a[2] * b[0] - a[2] * b[4],
a[3] * b[0] - a[3] * b[4],
a[0] * b[4] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Tvd*)(&b));
}			
		 
inline Tsd gp (const Trs& a, const Tsd& b) { 
	return Tsd (
a[0] * b[0],
a[0] * b[1] + a[1] * b[0] - a[1] * b[4],
a[0] * b[2] + a[2] * b[0] - a[2] * b[4],
a[0] * b[3] + a[3] * b[0] - a[3] * b[4],
a[0] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Tsd*)(&b));
}			
		 
inline Tvt gp (const Trs& a, const Trt& b) { 
	return Tvt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4],
a[0] * b[2] + a[1] * b[6] - a[3] * b[4],
a[0] * b[3] + a[2] * b[6] - a[3] * b[5],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] + a[2] * b[11] - a[3] * b[2] + a[3] * b[12],
a[0] * b[8] + a[1] * b[1] - a[1] * b[11] + a[2] * b[0] - a[2] * b[10] - a[3] * b[3] + a[3] * b[13],
a[0] * b[9] + a[1] * b[2] - a[1] * b[12] + a[2] * b[3] - a[2] * b[13] + a[3] * b[0] - a[3] * b[10],
a[0] * b[10] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[11] + a[1] * b[5] - a[2] * b[4],
a[0] * b[12] + a[1] * b[6] - a[3] * b[4],
a[0] * b[13] + a[2] * b[6] - a[3] * b[5],
a[1] * b[3] - a[1] * b[13] - a[2] * b[2] + a[2] * b[12] + a[3] * b[1] - a[3] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Trt*)(&b));
}			
		 
inline Mtt gp (const Trs& a, const Rvd& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[11],
a[0] * b[2] + a[1] * b[6] - a[2] * b[11] - a[3] * b[4],
a[0] * b[3] + a[1] * b[11] + a[2] * b[6] - a[3] * b[5],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[1] * b[0] - a[1] * b[7] - a[2] * b[1] + a[2] * b[8] - a[3] * b[2] + a[3] * b[9],
a[1] * b[1] - a[1] * b[8] + a[2] * b[0] - a[2] * b[7] - a[3] * b[3] + a[3] * b[10],
a[1] * b[2] - a[1] * b[9] + a[2] * b[3] - a[2] * b[10] + a[3] * b[0] - a[3] * b[7],
a[0] * b[7] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[8] + a[1] * b[5] - a[2] * b[4] + a[3] * b[11],
a[0] * b[9] + a[1] * b[6] - a[2] * b[11] - a[3] * b[4],
a[0] * b[10] + a[1] * b[11] + a[2] * b[6] - a[3] * b[5],
a[0] * b[11],
a[1] * b[3] - a[1] * b[10] - a[2] * b[2] + a[2] * b[9] + a[3] * b[1] - a[3] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Trs& a, const Tst& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[14],
a[0] * b[2] + a[1] * b[6] - a[2] * b[14] - a[3] * b[4],
a[0] * b[3] + a[1] * b[14] + a[2] * b[6] - a[3] * b[5],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] + a[2] * b[11] - a[3] * b[2] + a[3] * b[12],
a[0] * b[8] + a[1] * b[1] - a[1] * b[11] + a[2] * b[0] - a[2] * b[10] - a[3] * b[3] + a[3] * b[13],
a[0] * b[9] + a[1] * b[2] - a[1] * b[12] + a[2] * b[3] - a[2] * b[13] + a[3] * b[0] - a[3] * b[10],
a[0] * b[10] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[11] + a[1] * b[5] - a[2] * b[4] + a[3] * b[14],
a[0] * b[12] + a[1] * b[6] - a[2] * b[14] - a[3] * b[4],
a[0] * b[13] + a[1] * b[14] + a[2] * b[6] - a[3] * b[5],
a[0] * b[14],
a[1] * b[3] - a[1] * b[13] - a[2] * b[2] + a[2] * b[12] + a[3] * b[1] - a[3] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Tst*)(&b));
}			
		 
inline Tvt gp (const Trs& a, const Tvt& b) { 
	return Tvt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4],
a[0] * b[2] + a[1] * b[6] - a[3] * b[4],
a[0] * b[3] + a[2] * b[6] - a[3] * b[5],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] + a[2] * b[11] - a[3] * b[2] + a[3] * b[12],
a[0] * b[8] + a[1] * b[1] - a[1] * b[11] + a[2] * b[0] - a[2] * b[10] - a[3] * b[3] + a[3] * b[13],
a[0] * b[9] + a[1] * b[2] - a[1] * b[12] + a[2] * b[3] - a[2] * b[13] + a[3] * b[0] - a[3] * b[10],
a[0] * b[10] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[11] + a[1] * b[5] - a[2] * b[4],
a[0] * b[12] + a[1] * b[6] - a[3] * b[4],
a[0] * b[13] + a[2] * b[6] - a[3] * b[5],
a[0] * b[14] + a[1] * b[3] - a[1] * b[13] - a[2] * b[2] + a[2] * b[12] + a[3] * b[1] - a[3] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Tvt*)(&b));
}			
		 
inline Tvt gp (const Trs& a, const Bst& b) { 
	return Tvt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4],
a[0] * b[2] + a[1] * b[6] - a[3] * b[4],
a[0] * b[3] + a[2] * b[6] - a[3] * b[5],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] - a[3] * b[2],
a[0] * b[8] + a[1] * b[1] + a[2] * b[0] - a[2] * b[10] - a[3] * b[3],
a[0] * b[9] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0] - a[3] * b[10],
a[0] * b[10] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[1] * b[5] - a[2] * b[4],
a[1] * b[6] - a[3] * b[4],
a[2] * b[6] - a[3] * b[5],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trs, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trs*)(&a),*(Bst*)(&b));
}			
		 
inline Trs ip (const Trs& a, const Trs& b) { 
	return Trs (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Trs, Trs> (const MVBase& a, const MVBase& b) { 
	return ip(*(Trs*)(&a),*(Trs*)(&b));
}			
		  	
template<>
inline Trs sp (const Trs& trs, const Rot& rot) {					
					
const Rot& t1 = rot;
const Trs& t2 = trs;
Mot t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Trs (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Mot& mot) {					
					
const Mot& t1 = mot;
const Trs& t2 = trs;
Mot t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Trs (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Dil& dil) {					
					
const Dil& t1 = dil;
const Trs& t2 = trs;
Tsd t3 (
t1[0] * t2[0],
t1[0] * t2[1] + t1[1] * t2[1],
t1[0] * t2[2] + t1[1] * t2[2],
t1[0] * t2[3] + t1[1] * t2[3],
t1[1] * t2[0]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Trs (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] - t3[1] * t5[1],
t3[2] * t5[0] - t3[2] * t5[1],
t3[3] * t5[0] - t3[3] * t5[1]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Trv& trv) {					
					
const Trv& t1 = trv;
const Trs& t2 = trs;
Trt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
 - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
 - t1[1] * t2[2] + t1[2] * t2[1],
 - t1[1] * t2[3] + t1[3] * t2[1],
 - t1[2] * t2[3] + t1[3] * t2[2]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Trs (
t3[0] * t5[0] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Trs& t2 = trs;
Mtd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1] + t1[10] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1] - t1[10] * t2[2],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[8] * t2[3] - t1[9] * t2[2] + t1[10] * t2[1] + t1[11] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Trs (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] - t3[4] * t5[7] - t3[5] * t5[1] + t3[5] * t5[8] - t3[6] * t5[2] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[11] - t3[11] * t5[3] + t3[11] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] - t3[4] * t5[8] + t3[5] * t5[0] - t3[5] * t5[7] - t3[6] * t5[3] + t3[6] * t5[10] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[6] + t3[11] * t5[2] - t3[11] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] - t3[4] * t5[9] + t3[5] * t5[3] - t3[5] * t5[10] + t3[6] * t5[0] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] - t3[10] * t5[5] - t3[11] * t5[1] + t3[11] * t5[8]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Trs& t2 = trs;
Rtc t3 (
t1[0] * t2[0] + t1[3] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[1] + t1[7] * t2[3],
t1[2] * t2[0] + t1[3] * t2[3] - t1[6] * t2[1] - t1[7] * t2[2],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2] + t1[13] * t2[3],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[8] * t2[0] + t1[11] * t2[2] - t1[12] * t2[1] + t1[14] * t2[3] + t1[15] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] + t1[9] * t2[0] + t1[11] * t2[3] - t1[13] * t2[1] - t1[14] * t2[2] - t1[15] * t2[2],
t1[1] * t2[3] - t1[2] * t2[2] + t1[10] * t2[0] + t1[12] * t2[3] - t1[13] * t2[2] + t1[14] * t2[1] + t1[15] * t2[1],
 - t1[3] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[11] * t2[0],
 - t1[3] * t2[2] + t1[5] * t2[1] - t1[7] * t2[3] + t1[12] * t2[0],
 - t1[3] * t2[3] + t1[6] * t2[1] + t1[7] * t2[2] + t1[13] * t2[0],
t1[5] * t2[3] - t1[6] * t2[2] + t1[7] * t2[1] + t1[14] * t2[0],
 - t1[5] * t2[3] + t1[6] * t2[2] - t1[7] * t2[1] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Trs (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[4] * t5[0] + t3[4] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[14] - t3[10] * t5[15] + t3[11] * t5[4] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[10] - t3[15] * t5[10],
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] - t3[4] * t5[1] + t3[4] * t5[12] + t3[8] * t5[0] - t3[8] * t5[11] - t3[9] * t5[14] + t3[9] * t5[15] - t3[10] * t5[2] + t3[10] * t5[13] + t3[11] * t5[8] + t3[12] * t5[4] - t3[13] * t5[10] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[4] * t5[2] + t3[4] * t5[13] + t3[8] * t5[14] - t3[8] * t5[15] + t3[9] * t5[0] - t3[9] * t5[11] + t3[10] * t5[1] - t3[10] * t5[12] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[4] - t3[14] * t5[8] - t3[15] * t5[8]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Trs& t2 = trs;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[14] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] - t1[14] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[14] * t2[1],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[7] * t2[0] + t1[10] * t2[1] + t1[11] * t2[2] + t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[8] * t2[0] + t1[10] * t2[2] - t1[11] * t2[1] + t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[9] * t2[0] + t1[10] * t2[3] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[10] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] + t1[11] * t2[0] - t1[14] * t2[3],
 - t1[4] * t2[3] + t1[6] * t2[1] + t1[12] * t2[0] + t1[14] * t2[2],
 - t1[5] * t2[3] + t1[6] * t2[2] + t1[13] * t2[0] - t1[14] * t2[1],
t1[14] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1] + t1[15] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Trs (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[15] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[15] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[15] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[15] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Trs& t2 = trs;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[7] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] - t1[7] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[7] * t2[3],
 - t1[4] * t2[3] + t1[6] * t2[1] + t1[7] * t2[2],
 - t1[5] * t2[3] + t1[6] * t2[2] - t1[7] * t2[1],
t1[7] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Trs (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[15] * t5[7],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[15] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[15] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[15] * t5[1]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Trs& t2 = trs;
Mtd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[7] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[5] * t2[3] - t1[6] * t2[2] + t1[7] * t2[1]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Trs (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[7],
t3[4] * t5[0] - t3[4] * t5[4] - t3[5] * t5[1] + t3[5] * t5[5] - t3[6] * t5[2] + t3[6] * t5[6] - t3[11] * t5[3] + t3[11] * t5[7],
t3[4] * t5[1] - t3[4] * t5[5] + t3[5] * t5[0] - t3[5] * t5[4] - t3[6] * t5[3] + t3[6] * t5[7] + t3[11] * t5[2] - t3[11] * t5[6],
t3[4] * t5[2] - t3[4] * t5[6] + t3[5] * t5[3] - t3[5] * t5[7] + t3[6] * t5[0] - t3[6] * t5[4] - t3[11] * t5[1] + t3[11] * t5[5]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Trs& t2 = trs;
Trt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[4] * t2[1],
t1[0] * t2[2] + t1[4] * t2[2],
t1[0] * t2[3] + t1[4] * t2[3],
 - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[0],
 - t1[1] * t2[2] + t1[2] * t2[1],
 - t1[1] * t2[3] + t1[3] * t2[1],
 - t1[2] * t2[3] + t1[3] * t2[2]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Trs (
t3[0] * t5[0] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[4],
t3[7] * t5[0] - t3[7] * t5[4],
t3[8] * t5[0] - t3[8] * t5[4],
t3[9] * t5[0] - t3[9] * t5[4]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Trs& t2 = trs;
Tsd t3 (
t1[0] * t2[0],
t1[0] * t2[1] + t1[1] * t2[0] + t1[4] * t2[1],
t1[0] * t2[2] + t1[2] * t2[0] + t1[4] * t2[2],
t1[0] * t2[3] + t1[3] * t2[0] + t1[4] * t2[3],
t1[4] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Trs (
t3[0] * t5[0] + t3[4] * t5[4],
t3[0] * t5[1] + t3[1] * t5[0] - t3[1] * t5[4] + t3[4] * t5[1],
t3[0] * t5[2] + t3[2] * t5[0] - t3[2] * t5[4] + t3[4] * t5[2],
t3[0] * t5[3] + t3[3] * t5[0] - t3[3] * t5[4] + t3[4] * t5[3]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Trt& trt) {					
					
const Trt& t1 = trt;
const Trs& t2 = trs;
Tvt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[7] * t2[0] + t1[10] * t2[1] + t1[11] * t2[2] + t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[8] * t2[0] + t1[10] * t2[2] - t1[11] * t2[1] + t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[9] * t2[0] + t1[10] * t2[3] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[10] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] + t1[11] * t2[0],
 - t1[4] * t2[3] + t1[6] * t2[1] + t1[12] * t2[0],
 - t1[5] * t2[3] + t1[6] * t2[2] + t1[13] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Trs (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[14] * t5[3] + t3[14] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[14] * t5[2] - t3[14] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[1] + t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Trs& t2 = trs;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[11] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] - t1[11] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[11] * t2[1],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[7] * t2[2] - t1[8] * t2[1] + t1[10] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3] - t1[9] * t2[1] - t1[10] * t2[2],
 - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[7] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] + t1[8] * t2[0] - t1[11] * t2[3],
 - t1[4] * t2[3] + t1[6] * t2[1] + t1[9] * t2[0] + t1[11] * t2[2],
 - t1[5] * t2[3] + t1[6] * t2[2] + t1[10] * t2[0] - t1[11] * t2[1],
t1[11] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[8] * t2[3] - t1[9] * t2[2] + t1[10] * t2[1]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Trs (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] - t3[15] * t5[11],
t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[15] * t5[3] + t3[15] * t5[10],
t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[15] * t5[2] - t3[15] * t5[9],
t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] - t3[15] * t5[1] + t3[15] * t5[8]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Tst& tst) {					
					
const Tst& t1 = tst;
const Trs& t2 = trs;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[14] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] - t1[14] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[14] * t2[1],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[7] * t2[0] + t1[10] * t2[1] + t1[11] * t2[2] + t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[8] * t2[0] + t1[10] * t2[2] - t1[11] * t2[1] + t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[9] * t2[0] + t1[10] * t2[3] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[10] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] + t1[11] * t2[0] - t1[14] * t2[3],
 - t1[4] * t2[3] + t1[6] * t2[1] + t1[12] * t2[0] + t1[14] * t2[2],
 - t1[5] * t2[3] + t1[6] * t2[2] + t1[13] * t2[0] - t1[14] * t2[1],
t1[14] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Trs (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[15] * t5[14],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Trs& t2 = trs;
Tvt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[7] * t2[0] + t1[10] * t2[1] + t1[11] * t2[2] + t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[8] * t2[0] + t1[10] * t2[2] - t1[11] * t2[1] + t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[9] * t2[0] + t1[10] * t2[3] - t1[12] * t2[1] - t1[13] * t2[2],
 - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[10] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] + t1[11] * t2[0],
 - t1[4] * t2[3] + t1[6] * t2[1] + t1[12] * t2[0],
 - t1[5] * t2[3] + t1[6] * t2[2] + t1[13] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Trs (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[14] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[14] - t3[14] * t5[3] + t3[14] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[14] + t3[13] * t5[9] + t3[14] * t5[2] - t3[14] * t5[12],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[14] - t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[1] + t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Trs sp (const Trs& trs, const Bst& bst) {					
					
const Bst& t1 = bst;
const Trs& t2 = trs;
Tvt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[7] * t2[0] + t1[10] * t2[1],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[8] * t2[0] + t1[10] * t2[2],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[9] * t2[0] + t1[10] * t2[3],
 - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[10] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1],
 - t1[4] * t2[3] + t1[6] * t2[1],
 - t1[5] * t2[3] + t1[6] * t2[2],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Trs (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] - t3[9] * t5[2] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[14] * t5[3],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[14] * t5[2],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[1]
);

}
		
	
	  	
template<>
inline Trs re (const Trs& trs, const Vec& vec) {					
					
const Vec& t1 = vec;
const Trs& t2 = trs;
Trs t3 = involute( t2);
Lin_Flp t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2] + t1[2] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1],
t1[0] * t3[3] - t1[2] * t3[1],
t1[1] * t3[3] - t1[2] * t3[2]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Trs (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1]
);

}
		
	
	  	
template<>
inline Trs re (const Trs& trs, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Trs& t2 = trs;
Trs t3 = involute( t2);
Lin_Flp t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2] + t1[2] * t3[3] + t1[3] * t3[0],
t1[0] * t3[2] - t1[1] * t3[1],
t1[0] * t3[3] - t1[2] * t3[1],
t1[1] * t3[3] - t1[2] * t3[2]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Trs (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[3] - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
t4[1] * t6[3] - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
t4[2] * t6[3] - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1]
);

}
		
	
	  	
template<>
inline Trs re (const Trs& trs, const Pln& pln) {					
					
const Pln& t1 = pln;
const Trs& t2 = trs;
Trs t3 = involute( t2);
Lin_Dfp t4 (
t1[0] * t3[2] + t1[1] * t3[3],
 - t1[0] * t3[1] + t1[2] * t3[3],
 - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Trs (
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
t4[1] * t6[0] + t4[2] * t6[1] - t4[5] * t6[3] + t4[6] * t6[2],
 - t4[0] * t6[0] + t4[2] * t6[2] + t4[4] * t6[3] - t4[6] * t6[1],
 - t4[0] * t6[1] - t4[1] * t6[2] - t4[3] * t6[3] + t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Trs re (const Trs& trs, const Dll& dll) {					
					
const Dll& t1 = dll;
const Trs& t2 = trs;
Trs t3 = involute( t2);
Pln_Flp t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[2] + t1[1] * t3[3] + t1[3] * t3[0],
 - t1[0] * t3[1] + t1[2] * t3[3] + t1[4] * t3[0],
 - t1[1] * t3[1] - t1[2] * t3[2] + t1[5] * t3[0],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Trs (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2],
t4[0] * t6[4] + t4[1] * t6[5] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[0] * t6[3] + t4[2] * t6[5] + t4[3] * t6[0] - t4[5] * t6[2] + t4[6] * t6[1],
 - t4[1] * t6[3] - t4[2] * t6[4] + t4[3] * t6[1] + t4[4] * t6[2] - t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Trs re (const Trs& trs, const Lin& lin) {					
					
const Lin& t1 = lin;
const Trs& t2 = trs;
Trs t3 = involute( t2);
Pln_Dfp t4 (
t1[3] * t3[1] + t1[4] * t3[2] + t1[5] * t3[3],
t1[0] * t3[0] + t1[3] * t3[2] - t1[4] * t3[1],
t1[1] * t3[0] + t1[3] * t3[3] - t1[5] * t3[1],
t1[2] * t3[0] + t1[4] * t3[3] - t1[5] * t3[2],
t1[3] * t3[0],
t1[4] * t3[0],
t1[5] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Trs (
t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[5] * t6[0] - t4[6] * t6[1],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] - t4[6] * t6[2],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2]
);

}
		
	
	  	
template<>
inline Trs re (const Trs& trs, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Trs& t2 = trs;
Trs t3 = involute( t2);
Pnt_Flp t4 (
t1[0] * t3[0] + t1[3] * t3[1],
t1[1] * t3[0] + t1[3] * t3[2],
t1[2] * t3[0] + t1[3] * t3[3],
t1[3] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2] + t1[2] * t3[3] + t1[4] * t3[0],
t1[0] * t3[2] - t1[1] * t3[1],
t1[0] * t3[3] - t1[2] * t3[1],
t1[1] * t3[3] - t1[2] * t3[2],
 - t1[3] * t3[1],
 - t1[3] * t3[2],
 - t1[3] * t3[3]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Trs (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] - t4[4] * t6[3],
t4[0] * t6[4] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] + t4[8] * t6[4],
t4[1] * t6[4] - t4[4] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2] + t4[9] * t6[4],
t4[2] * t6[4] - t4[4] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1] + t4[10] * t6[4]
);

}
		
	
	  	
template<>
inline Trs re (const Trs& trs, const Par& par) {					
					
const Par& t1 = par;
const Trs& t2 = trs;
Trs t3 = involute( t2);
Tvt t4 (
t1[3] * t3[1] + t1[4] * t3[2] + t1[5] * t3[3],
t1[0] * t3[0] + t1[3] * t3[2] - t1[4] * t3[1],
t1[1] * t3[0] + t1[3] * t3[3] - t1[5] * t3[1],
t1[2] * t3[0] + t1[4] * t3[3] - t1[5] * t3[2],
t1[3] * t3[0],
t1[4] * t3[0],
t1[5] * t3[0],
t1[0] * t3[2] + t1[1] * t3[3] + t1[6] * t3[0] + t1[9] * t3[1],
 - t1[0] * t3[1] + t1[2] * t3[3] + t1[7] * t3[0] + t1[9] * t3[2],
 - t1[1] * t3[1] - t1[2] * t3[2] + t1[8] * t3[0] + t1[9] * t3[3],
 - t1[3] * t3[1] - t1[4] * t3[2] - t1[5] * t3[3] + t1[9] * t3[0],
 - t1[3] * t3[2] + t1[4] * t3[1],
 - t1[3] * t3[3] + t1[5] * t3[1],
 - t1[4] * t3[3] + t1[5] * t3[2],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Trs (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[6] + t4[5] * t6[7] + t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] + t4[10] * t6[9],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[7] * t6[9] - t4[8] * t6[0] - t4[9] * t6[1] + t4[10] * t6[6] + t4[11] * t6[7] + t4[12] * t6[8] - t4[14] * t6[2],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[8] + t4[7] * t6[0] - t4[8] * t6[9] - t4[9] * t6[2] + t4[10] * t6[7] - t4[11] * t6[6] + t4[13] * t6[8] + t4[14] * t6[1],
t4[0] * t6[8] - t4[2] * t6[6] - t4[3] * t6[7] + t4[7] * t6[1] + t4[8] * t6[2] - t4[9] * t6[9] + t4[10] * t6[8] - t4[12] * t6[6] - t4[13] * t6[7] - t4[14] * t6[0]
);

}
		
	
	  	
template<>
inline Trs re (const Trs& trs, const Cir& cir) {					
					
const Cir& t1 = cir;
const Trs& t2 = trs;
Trs t3 = involute( t2);
Par_Dfp t4 (
t1[0] * t3[2] + t1[1] * t3[3],
 - t1[0] * t3[1] + t1[2] * t3[3],
 - t1[1] * t3[1] - t1[2] * t3[2],
t1[6] * t3[1] + t1[7] * t3[2] + t1[8] * t3[3],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[3] * t3[0] + t1[6] * t3[2] - t1[7] * t3[1] + t1[9] * t3[3],
t1[4] * t3[0] + t1[6] * t3[3] - t1[8] * t3[1] - t1[9] * t3[2],
t1[5] * t3[0] + t1[7] * t3[3] - t1[8] * t3[2] + t1[9] * t3[1],
 - t1[0] * t3[2] - t1[1] * t3[3] + t1[6] * t3[0],
t1[0] * t3[1] - t1[2] * t3[3] + t1[7] * t3[0],
t1[1] * t3[1] + t1[2] * t3[2] + t1[8] * t3[0],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1] + t1[9] * t3[0],
 - t1[0] * t3[3] + t1[1] * t3[2] - t1[2] * t3[1]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Trs (
t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5] + t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2] + t4[10] * t6[6] + t4[11] * t6[7] + t4[12] * t6[8] - t4[13] * t6[9],
 - t4[1] * t6[3] - t4[2] * t6[4] + t4[3] * t6[6] + t4[7] * t6[7] + t4[8] * t6[8] + t4[9] * t6[9] - t4[11] * t6[3] - t4[12] * t6[4] - t4[13] * t6[5] - t4[14] * t6[5],
t4[0] * t6[3] - t4[2] * t6[5] + t4[3] * t6[7] - t4[7] * t6[6] - t4[8] * t6[9] + t4[9] * t6[8] + t4[10] * t6[3] - t4[12] * t6[5] + t4[13] * t6[4] + t4[14] * t6[4],
t4[0] * t6[4] + t4[1] * t6[5] + t4[3] * t6[8] + t4[7] * t6[9] - t4[8] * t6[6] - t4[9] * t6[7] + t4[10] * t6[4] + t4[11] * t6[5] - t4[13] * t6[3] - t4[14] * t6[3]
);

}
		
	
	  	
template<>
inline Trs re (const Trs& trs, const Sph& sph) {					
					
const Sph& t1 = sph;
const Trs& t2 = trs;
Trs t3 = involute( t2);
Pnt_Dfp t4 (
t1[3] * t3[3],
 - t1[3] * t3[2],
t1[3] * t3[1],
t1[0] * t3[2] + t1[1] * t3[3],
 - t1[0] * t3[1] + t1[2] * t3[3],
 - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[0] - t1[3] * t3[3],
t1[1] * t3[0] + t1[3] * t3[2],
t1[2] * t3[0] - t1[3] * t3[1],
t1[3] * t3[0],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1] + t1[4] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Trs (
 - t4[6] * t6[0] - t4[7] * t6[1] - t4[8] * t6[2] - t4[9] * t6[4] - t4[10] * t6[3],
 - t4[2] * t6[4] + t4[4] * t6[0] + t4[5] * t6[1] - t4[8] * t6[4] + t4[10] * t6[2],
t4[1] * t6[4] - t4[3] * t6[0] + t4[5] * t6[2] + t4[7] * t6[4] - t4[10] * t6[1],
 - t4[0] * t6[4] - t4[3] * t6[1] - t4[4] * t6[2] - t4[6] * t6[4] + t4[10] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	