		#ifndef AFP_H_INCLUDED
		#define AFP_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Afp gp (const Afp& a, const Sca& b) { 
	return Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Sca*)(&b));
}			
		 
inline Tnt gp (const Afp& a, const Ori& b) { 
	return Tnt (
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Ori*)(&b));
}			
		 
inline Inf_Afp gp (const Afp& a, const Inf& b) { 
	return Inf_Afp (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Inf*)(&b));
}			
		 
inline Mnk_Afp gp (const Afp& a, const Mnk& b) { 
	return Mnk_Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Dfp gp (const Afp& a, const Hyp& b) { 
	return Hyp_Dfp (
 - a[0] * b[1],
 - a[1] * b[1],
 - a[2] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[0],
a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Hyp*)(&b));
}			
		 
inline Dap gp (const Afp& a, const Pss& b) { 
	return Dap (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Pss*)(&b));
}			
		 
inline Pnt_Afp gp (const Afp& a, const Pnt& b) { 
	return Pnt_Afp (
 - a[0] * b[4] + a[3] * b[2],
 - a[1] * b[4] - a[3] * b[1],
 - a[2] * b[4] + a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3],
a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Pnt*)(&b));
}			
		 
inline Par_Afp gp (const Afp& a, const Par& b) { 
	return Par_Afp (
a[0] * b[7] + a[1] * b[8] - a[3] * b[2],
 - a[0] * b[6] + a[2] * b[8] + a[3] * b[1],
 - a[1] * b[6] - a[2] * b[7] - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[9] - a[1] * b[2] + a[2] * b[1] + a[3] * b[5],
a[0] * b[2] + a[1] * b[9] - a[2] * b[0] - a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[2] * b[9] + a[3] * b[3],
a[3] * b[8],
 - a[3] * b[7],
a[3] * b[6],
 - a[0] * b[7] - a[1] * b[8],
a[0] * b[6] - a[2] * b[8],
a[1] * b[6] + a[2] * b[7],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] + a[3] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Par*)(&b));
}			
		 
inline Tst gp (const Afp& a, const Cir& b) { 
	return Tst (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[3] * b[9],
a[1] * b[5] - a[2] * b[4],
 - a[0] * b[5] + a[2] * b[3],
a[0] * b[4] - a[1] * b[3],
 - a[0] * b[7] - a[1] * b[8] + a[2] * b[9] - a[3] * b[2],
a[0] * b[6] - a[1] * b[9] - a[2] * b[8] + a[3] * b[1],
a[0] * b[9] + a[1] * b[6] + a[2] * b[7] - a[3] * b[0],
 - a[3] * b[5],
a[3] * b[4],
 - a[3] * b[3],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[1] * b[5] + a[2] * b[4] + a[3] * b[8],
a[0] * b[5] - a[2] * b[3] - a[3] * b[7],
 - a[0] * b[4] + a[1] * b[3] + a[3] * b[6],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt_Dap gp (const Afp& a, const Sph& b) { 
	return Pnt_Dap (
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[3] * b[4],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[2] * b[4] - a[3] * b[2],
 - a[1] * b[4] + a[3] * b[1],
a[0] * b[4] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Sph*)(&b));
}			
		 
inline Par_Afp gp (const Afp& a, const Sta& b) { 
	return Par_Afp (
a[0] * b[7] + a[1] * b[8] - a[3] * b[2],
 - a[0] * b[6] + a[2] * b[8] + a[3] * b[1],
 - a[1] * b[6] - a[2] * b[7] - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[5],
a[0] * b[2] - a[2] * b[0] - a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[3] * b[3],
a[3] * b[8],
 - a[3] * b[7],
a[3] * b[6],
 - a[0] * b[7] - a[1] * b[8],
a[0] * b[6] - a[2] * b[8],
a[1] * b[6] + a[2] * b[7],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Sta*)(&b));
}			
		 
inline Drv_Afp gp (const Afp& a, const Drv& b) { 
	return Drv_Afp (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Drv*)(&b));
}			
		 
inline Drv_Dap gp (const Afp& a, const Drb& b) { 
	return Drv_Dap (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Drb*)(&b));
}			
		 
inline Inf_Dap gp (const Afp& a, const Drt& b) { 
	return Inf_Dap (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Drt*)(&b));
}			
		 
inline Tnb gp (const Afp& a, const Tnv& b) { 
	return Tnb (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv gp (const Afp& a, const Tnb& b) { 
	return Tnv (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori gp (const Afp& a, const Tnt& b) { 
	return Ori (
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Tnt*)(&b));
}			
		 
inline Tst gp (const Afp& a, const Lin& b) { 
	return Tst (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[0] * b[4] - a[1] * b[5],
a[0] * b[3] - a[2] * b[5],
a[1] * b[3] + a[2] * b[4],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[5],
a[0] * b[2] - a[2] * b[0] - a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[3] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Lin*)(&b));
}			
		 
inline Pnt_Dap gp (const Afp& a, const Pln& b) { 
	return Pnt_Dap (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[2] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Pln*)(&b));
}			
		 
inline Flp_Afp gp (const Afp& a, const Flp& b) { 
	return Flp_Afp (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Flp*)(&b));
}			
		 
inline Trt gp (const Afp& a, const Dfp& b) { 
	return Trt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Dfp*)(&b));
}			
		 
inline Par_Afp gp (const Afp& a, const Dll& b) { 
	return Par_Afp (
a[0] * b[4] + a[1] * b[5] - a[3] * b[2],
 - a[0] * b[3] + a[2] * b[5] + a[3] * b[1],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[3] * b[5],
 - a[3] * b[4],
a[3] * b[3],
 - a[0] * b[4] - a[1] * b[5],
a[0] * b[3] - a[2] * b[5],
a[1] * b[3] + a[2] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Dll*)(&b));
}			
		 
inline Pnt_Afp gp (const Afp& a, const Dlp& b) { 
	return Pnt_Afp (
 - a[0] * b[3] + a[3] * b[2],
 - a[1] * b[3] - a[3] * b[1],
 - a[2] * b[3] + a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Dlp*)(&b));
}			
		 
inline Vec_Afp gp (const Afp& a, const Vec& b) { 
	return Vec_Afp (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Vec*)(&b));
}			
		 
inline Biv_Afp gp (const Afp& a, const Biv& b) { 
	return Biv_Afp (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Biv*)(&b));
}			
		 
inline Trv gp (const Afp& a, const Tri& b) { 
	return Trv (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Tri*)(&b));
}			
		 
inline Vec_Afp gp (const Afp& a, const Aff& b) { 
	return Vec_Afp (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Aff*)(&b));
}			
		 
inline Biv_Afp gp (const Afp& a, const Afl& b) { 
	return Biv_Afp (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[3] * b[5],
a[0] * b[2] - a[2] * b[0] - a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Afl*)(&b));
}			
		 
inline Trv gp (const Afp& a, const Afp& b) { 
	return Trv (
 - a[3] * b[3],
a[2] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Afp*)(&b));
}			
		 
inline Mnk_Afp gp (const Afp& a, const Dap& b) { 
	return Mnk_Afp (
a[0] * b[3] + a[3] * b[2],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] + a[3] * b[0],
a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Dap*)(&b));
}			
		 
inline Vec_Dap gp (const Afp& a, const Daf& b) { 
	return Vec_Dap (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Daf*)(&b));
}			
		 
inline Biv_Dap gp (const Afp& a, const Dal& b) { 
	return Biv_Dap (
 - a[0] * b[4] - a[1] * b[5] - a[3] * b[2],
a[0] * b[3] - a[2] * b[5] + a[3] * b[1],
a[1] * b[3] + a[2] * b[4] - a[3] * b[0],
a[3] * b[5],
 - a[3] * b[4],
a[3] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Dal*)(&b));
}			
		 
inline Biv_Dap gp (const Afp& a, const Mnv& b) { 
	return Biv_Dap (
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Mnv*)(&b));
}			
		 
inline Vec_Afl gp (const Afp& a, const Rot& b) { 
	return Vec_Afl (
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Rot*)(&b));
}			
		 
inline Rtc gp (const Afp& a, const Mot& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] - a[2] * b[7] - a[3] * b[3],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[3] * b[2],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5] - a[3] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
 - a[3] * b[7],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[6],
 - a[3] * b[5],
a[3] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[7],
a[0] * b[4] - a[1] * b[7] - a[2] * b[6],
a[0] * b[7] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[0],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Mot*)(&b));
}			
		 
inline Ori_Sph gp (const Afp& a, const Dil& b) { 
	return Ori_Sph (
a[0] * b[0] + a[0] * b[1],
a[1] * b[0] + a[1] * b[1],
a[2] * b[0] + a[2] * b[1],
a[3] * b[0],
a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Dil*)(&b));
}			
		 
inline Afp gp (const Afp& a, const Trv& b) { 
	return Afp (
a[0] * b[0] + a[3] * b[3],
a[1] * b[0] - a[3] * b[2],
a[2] * b[0] + a[3] * b[1],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Trv*)(&b));
}			
		 
inline Rtc gp (const Afp& a, const Mtd& b) { 
	return Rtc (
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] - a[3] * b[3],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[3] * b[2],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[8] - a[1] * b[2] - a[1] * b[9] - a[2] * b[3] - a[2] * b[10],
 - a[3] * b[11],
a[0] * b[0] + a[0] * b[7] - a[1] * b[3] - a[1] * b[10] + a[2] * b[2] + a[2] * b[9],
a[0] * b[3] + a[0] * b[10] + a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8],
 - a[0] * b[2] - a[0] * b[9] + a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7],
a[3] * b[6],
 - a[3] * b[5],
a[3] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[11] - a[3] * b[10],
a[0] * b[4] - a[1] * b[11] - a[2] * b[6] + a[3] * b[9],
a[0] * b[11] + a[1] * b[4] + a[2] * b[5] - a[3] * b[8],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[0],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Mtd*)(&b));
}			
		 
inline Flp_Afp gp (const Afp& a, const Trs& b) { 
	return Flp_Afp (
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[3],
 - a[3] * b[2],
a[3] * b[1],
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Trs*)(&b));
}			
		 
inline Mtt gp (const Afp& a, const Rtc& b) { 
	return Mtt (
a[0] * b[8] + a[1] * b[9] + a[2] * b[10] - a[3] * b[14],
 - a[0] * b[4] + a[1] * b[10] - a[2] * b[9] + a[3] * b[2],
 - a[0] * b[10] - a[1] * b[4] + a[2] * b[8] - a[3] * b[1],
a[0] * b[9] - a[1] * b[8] - a[2] * b[4] + a[3] * b[0],
 - a[0] * b[1] - a[0] * b[12] - a[1] * b[2] - a[1] * b[13] + a[2] * b[14] + a[2] * b[15] - a[3] * b[7],
a[0] * b[0] + a[0] * b[11] - a[1] * b[14] - a[1] * b[15] - a[2] * b[2] - a[2] * b[13] + a[3] * b[6],
a[0] * b[14] + a[0] * b[15] + a[1] * b[0] + a[1] * b[11] + a[2] * b[1] + a[2] * b[12] - a[3] * b[5],
 - a[3] * b[10],
a[3] * b[9],
 - a[3] * b[8],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[3] * b[15],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9] + a[3] * b[13],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8] - a[3] * b[12],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4] + a[3] * b[11],
 - a[0] * b[2] - a[0] * b[13] + a[1] * b[1] + a[1] * b[12] - a[2] * b[0] - a[2] * b[11] + a[3] * b[3],
a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Rtc*)(&b));
}			
		 
inline Rtc gp (const Afp& a, const Mtt& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] - a[2] * b[15] - a[3] * b[3],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9] + a[3] * b[2],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8] - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13] - a[3] * b[14],
 - a[3] * b[15],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] + a[3] * b[6],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[5],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] + a[3] * b[4],
a[3] * b[9],
 - a[3] * b[8],
a[3] * b[7],
 - a[0] * b[8] - a[1] * b[9] + a[2] * b[15] - a[3] * b[13],
a[0] * b[7] - a[1] * b[15] - a[2] * b[9] + a[3] * b[12],
a[0] * b[15] + a[1] * b[7] + a[2] * b[8] - a[3] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Mtt*)(&b));
}			
		 
inline Vec_Afl gp (const Afp& a, const Rtt& b) { 
	return Vec_Afl (
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[3] * b[7],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[4],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Rtt*)(&b));
}			
		 
inline Par_Tnb gp (const Afp& a, const Rtd& b) { 
	return Par_Tnb (
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[5] - a[1] * b[2] - a[1] * b[6] - a[2] * b[3] - a[2] * b[7],
a[0] * b[0] + a[0] * b[4] - a[1] * b[3] - a[1] * b[7] + a[2] * b[2] + a[2] * b[6],
a[0] * b[3] + a[0] * b[7] + a[1] * b[0] + a[1] * b[4] - a[2] * b[1] - a[2] * b[5],
 - a[0] * b[2] - a[0] * b[6] + a[1] * b[1] + a[1] * b[5] + a[2] * b[0] + a[2] * b[4],
 - a[3] * b[7],
a[3] * b[6],
 - a[3] * b[5],
a[3] * b[0],
a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Rtd*)(&b));
}			
		 
inline Ori_Sph gp (const Afp& a, const Tvd& b) { 
	return Ori_Sph (
a[0] * b[0] + a[0] * b[4] + a[3] * b[3],
a[1] * b[0] + a[1] * b[4] - a[3] * b[2],
a[2] * b[0] + a[2] * b[4] + a[3] * b[1],
a[3] * b[0],
a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Tvd*)(&b));
}			
		 
inline Flp_Afp gp (const Afp& a, const Tsd& b) { 
	return Flp_Afp (
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4],
a[3] * b[3],
 - a[3] * b[2],
a[3] * b[1],
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Tsd*)(&b));
}			
		 
inline Par_Afp gp (const Afp& a, const Trt& b) { 
	return Par_Afp (
a[0] * b[8] + a[1] * b[9] - a[3] * b[3],
 - a[0] * b[7] + a[2] * b[9] + a[3] * b[2],
 - a[1] * b[7] - a[2] * b[8] - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] + a[3] * b[6],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[5],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] + a[3] * b[4],
a[3] * b[9],
 - a[3] * b[8],
a[3] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[3] * b[13],
a[0] * b[7] - a[2] * b[9] + a[3] * b[12],
a[1] * b[7] + a[2] * b[8] - a[3] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Trt*)(&b));
}			
		 
inline Par_Tnb gp (const Afp& a, const Rvd& b) { 
	return Par_Tnb (
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[8] - a[1] * b[2] - a[1] * b[9] - a[2] * b[3] - a[2] * b[10] - a[3] * b[11],
a[0] * b[0] + a[0] * b[7] - a[1] * b[3] - a[1] * b[10] + a[2] * b[2] + a[2] * b[9] + a[3] * b[6],
a[0] * b[3] + a[0] * b[10] + a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8] - a[3] * b[5],
 - a[0] * b[2] - a[0] * b[9] + a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7] + a[3] * b[4],
 - a[3] * b[10],
a[3] * b[9],
 - a[3] * b[8],
a[3] * b[0],
a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Rvd*)(&b));
}			
		 
inline Par_Afp gp (const Afp& a, const Tst& b) { 
	return Par_Afp (
a[0] * b[8] + a[1] * b[9] - a[3] * b[3],
 - a[0] * b[7] + a[2] * b[9] + a[3] * b[2],
 - a[1] * b[7] - a[2] * b[8] - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13] - a[3] * b[14],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] + a[3] * b[6],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[5],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] + a[3] * b[4],
a[3] * b[9],
 - a[3] * b[8],
a[3] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[3] * b[13],
a[0] * b[7] - a[2] * b[9] + a[3] * b[12],
a[1] * b[7] + a[2] * b[8] - a[3] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Tst*)(&b));
}			
		 
inline Rtc gp (const Afp& a, const Tvt& b) { 
	return Rtc (
a[0] * b[8] + a[1] * b[9] - a[2] * b[14] - a[3] * b[3],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9] + a[3] * b[2],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8] - a[3] * b[1],
 - a[0] * b[1] - a[0] * b[11] - a[1] * b[2] - a[1] * b[12] - a[2] * b[3] - a[2] * b[13],
 - a[3] * b[14],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] - a[1] * b[13] + a[2] * b[2] + a[2] * b[12] + a[3] * b[6],
a[0] * b[3] + a[0] * b[13] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[5],
 - a[0] * b[2] - a[0] * b[12] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] + a[3] * b[4],
a[3] * b[9],
 - a[3] * b[8],
a[3] * b[7],
 - a[0] * b[8] - a[1] * b[9] + a[2] * b[14] - a[3] * b[13],
a[0] * b[7] - a[1] * b[14] - a[2] * b[9] + a[3] * b[12],
a[0] * b[14] + a[1] * b[7] + a[2] * b[8] - a[3] * b[11],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Tvt*)(&b));
}			
		 
inline Par_Afp gp (const Afp& a, const Bst& b) { 
	return Par_Afp (
a[0] * b[8] + a[1] * b[9] - a[3] * b[3],
 - a[0] * b[7] + a[2] * b[9] + a[3] * b[2],
 - a[1] * b[7] - a[2] * b[8] - a[3] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] + a[0] * b[10] - a[1] * b[3] + a[2] * b[2] + a[3] * b[6],
a[0] * b[3] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[2] * b[10] + a[3] * b[4],
a[3] * b[9],
 - a[3] * b[8],
a[3] * b[7],
 - a[0] * b[8] - a[1] * b[9],
a[0] * b[7] - a[2] * b[9],
a[1] * b[7] + a[2] * b[8],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[3] * b[0],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7] + a[3] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Afp, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Afp*)(&a),*(Bst*)(&b));
}			
		 
inline Afp op (const Afp& a, const Sca& b) { 
	return Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Sca*)(&b));
}			
		 
inline Tnt op (const Afp& a, const Ori& b) { 
	return Tnt (
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Ori*)(&b));
}			
		 
inline Pln op (const Afp& a, const Inf& b) { 
	return Pln (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Inf*)(&b));
}			
		 
inline Pss op (const Afp& a, const Mnk& b) { 
	return Pss (
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Mnk*)(&b));
}			
		 
inline Sph op (const Afp& a, const Hyp& b) { 
	return Sph (
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[0],
a[3] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Afp& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Pss*)(&b));
}			
		 
inline Sph op (const Afp& a, const Pnt& b) { 
	return Sph (
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3],
a[3] * b[4]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Pnt*)(&b));
}			
		 
inline Pss op (const Afp& a, const Par& b) { 
	return Pss (
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6] + a[3] * b[9]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Par*)(&b));
}			
		 
inline Sca op (const Afp& a, const Cir& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Afp& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Sph*)(&b));
}			
		 
inline Pss op (const Afp& a, const Sta& b) { 
	return Pss (
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[6]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Sta*)(&b));
}			
		 
inline Pss op (const Afp& a, const Drv& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Drv*)(&b));
}			
		 
inline Sca op (const Afp& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Afp& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Drt*)(&b));
}			
		 
inline Sca op (const Afp& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca op (const Afp& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Afp& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca op (const Afp& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Afp& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Pln*)(&b));
}			
		 
inline Pss op (const Afp& a, const Flp& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Flp*)(&b));
}			
		 
inline Sca op (const Afp& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Dfp*)(&b));
}			
		 
inline Pss op (const Afp& a, const Dll& b) { 
	return Pss (
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Dll*)(&b));
}			
		 
inline Sph op (const Afp& a, const Dlp& b) { 
	return Sph (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Dlp*)(&b));
}			
		 
inline Tnt op (const Afp& a, const Vec& b) { 
	return Tnt (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Vec*)(&b));
}			
		 
inline Sca op (const Afp& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Biv*)(&b));
}			
		 
inline Sca op (const Afp& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Tri*)(&b));
}			
		 
inline Tnt op (const Afp& a, const Aff& b) { 
	return Tnt (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Aff*)(&b));
}			
		 
inline Sca op (const Afp& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Afl*)(&b));
}			
		 
inline Sca op (const Afp& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Afp*)(&b));
}			
		 
inline Pss op (const Afp& a, const Dap& b) { 
	return Pss (
a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Afp& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Daf*)(&b));
}			
		 
inline Sca op (const Afp& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Dal*)(&b));
}			
		 
inline Sca op (const Afp& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Afp, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Afp*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Hyp*)(&b));
}			
		 
inline Dap ip (const Afp& a, const Pss& b) { 
	return Dap (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Par& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Par*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Cir& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[3] * b[9]
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt ip (const Afp& a, const Sph& b) { 
	return Pnt (
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[3] * b[4]
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Sph*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Sta& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Drv*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Drb& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Drb*)(&b));
}			
		 
inline Dlp ip (const Afp& a, const Drt& b) { 
	return Dlp (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori ip (const Afp& a, const Tnt& b) { 
	return Ori (
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Lin& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Lin*)(&b));
}			
		 
inline Pnt ip (const Afp& a, const Pln& b) { 
	return Pnt (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Flp*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Dfp& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Biv*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Tri& b) { 
	return Sca (
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Afl*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Afp& b) { 
	return Sca (
 - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Dap*)(&b));
}			
		 
inline Ori ip (const Afp& a, const Daf& b) { 
	return Ori (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Daf*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Dal*)(&b));
}			
		 
inline Sca ip (const Afp& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Afp, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Afp*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Afp sp (const Afp& afp, const Rot& rot) {					
					
const Rot& t1 = rot;
const Afp& t2 = afp;
Vec_Afl t3 (
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Afp (
t3[3] * t5[1] + t3[4] * t5[0] - t3[5] * t5[3] + t3[6] * t5[2],
t3[3] * t5[2] + t3[4] * t5[3] + t3[5] * t5[0] - t3[6] * t5[1],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Mot& mot) {					
					
const Mot& t1 = mot;
const Afp& t2 = afp;
Rtc t3 (
 - t1[3] * t2[3] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
t1[2] * t2[3] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
 - t1[1] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[7] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[6] * t2[3],
t1[5] * t2[3],
 - t1[4] * t2[3],
t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
t1[0] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Afp (
t3[3] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[3] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1],
t3[3] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[7] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[7] + t3[5] * t5[6] - t3[6] * t5[5] + t3[7] * t5[4] + t3[14] * t5[0]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Dil& dil) {					
					
const Dil& t1 = dil;
const Afp& t2 = afp;
Ori_Sph t3 (
t1[0] * t2[0] - t1[1] * t2[0],
t1[0] * t2[1] - t1[1] * t2[1],
t1[0] * t2[2] - t1[1] * t2[2],
t1[0] * t2[3],
t1[1] * t2[3]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Afp (
t3[0] * t5[0] + t3[0] * t5[1],
t3[1] * t5[0] + t3[1] * t5[1],
t3[2] * t5[0] + t3[2] * t5[1],
t3[3] * t5[0] + t3[4] * t5[1]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Trv& trv) {					
					
const Trv& t1 = trv;
const Afp& t2 = afp;
Afp t3 (
t1[0] * t2[0] - t1[3] * t2[3],
t1[0] * t2[1] + t1[2] * t2[3],
t1[0] * t2[2] - t1[1] * t2[3],
t1[0] * t2[3]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Afp (
t3[0] * t5[0] + t3[3] * t5[3],
t3[1] * t5[0] - t3[3] * t5[2],
t3[2] * t5[0] + t3[3] * t5[1],
t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Afp& t2 = afp;
Rtc t3 (
 - t1[3] * t2[3] + t1[5] * t2[0] + t1[6] * t2[1] + t1[11] * t2[2],
t1[2] * t2[3] - t1[4] * t2[0] + t1[6] * t2[2] - t1[11] * t2[1],
 - t1[1] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2] + t1[11] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2],
t1[11] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[7] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[6] * t2[3],
t1[5] * t2[3],
 - t1[4] * t2[3],
t1[5] * t2[0] + t1[6] * t2[1] - t1[10] * t2[3] + t1[11] * t2[2],
 - t1[4] * t2[0] + t1[6] * t2[2] + t1[9] * t2[3] - t1[11] * t2[1],
 - t1[4] * t2[1] - t1[5] * t2[2] - t1[8] * t2[3] + t1[11] * t2[0],
t1[0] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
 - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[7] * t2[3]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Afp (
t3[3] * t5[1] + t3[3] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[7] * t5[2] + t3[7] * t5[9],
t3[3] * t5[2] + t3[3] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[1] - t3[7] * t5[8],
t3[3] * t5[3] + t3[3] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] + t3[7] * t5[0] + t3[7] * t5[7],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[11] + t3[5] * t5[6] - t3[6] * t5[5] + t3[7] * t5[4] + t3[11] * t5[10] - t3[12] * t5[9] + t3[13] * t5[8] + t3[14] * t5[0] + t3[15] * t5[7]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Trs& trs) {					
					
const Trs& t1 = trs;
const Afp& t2 = afp;
Flp_Afp t3 (
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Afp (
t3[3] * t5[0],
t3[4] * t5[0],
t3[5] * t5[0],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[12] * t5[0]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Afp& t2 = afp;
Mtt t3 (
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2] - t1[14] * t2[3],
t1[2] * t2[3] - t1[4] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1],
 - t1[1] * t2[3] - t1[4] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0],
t1[0] * t2[3] - t1[4] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] + t1[7] * t2[3] + t1[12] * t2[0] + t1[13] * t2[1] - t1[14] * t2[2] + t1[15] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] - t1[6] * t2[3] - t1[11] * t2[0] + t1[13] * t2[2] + t1[14] * t2[1] - t1[15] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[5] * t2[3] - t1[11] * t2[1] - t1[12] * t2[2] - t1[14] * t2[0] + t1[15] * t2[0],
t1[10] * t2[3],
 - t1[9] * t2[3],
t1[8] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2] - t1[15] * t2[3],
 - t1[4] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1] + t1[13] * t2[3],
 - t1[4] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0] - t1[12] * t2[3],
 - t1[4] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0],
 - t1[4] * t2[3]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Afp (
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] + t3[3] * t5[6] - t3[4] * t5[1] - t3[4] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[10] * t5[5] - t3[11] * t5[3] + t3[12] * t5[7] - t3[13] * t5[6] - t3[14] * t5[2] - t3[14] * t5[13],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[5] - t3[4] * t5[2] - t3[4] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] - t3[10] * t5[6] - t3[11] * t5[7] - t3[12] * t5[3] + t3[13] * t5[5] + t3[14] * t5[1] + t3[14] * t5[12],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] + t3[3] * t5[3] - t3[4] * t5[14] - t3[4] * t5[15] - t3[5] * t5[2] - t3[5] * t5[13] + t3[6] * t5[1] + t3[6] * t5[12] - t3[10] * t5[7] + t3[11] * t5[6] - t3[12] * t5[5] - t3[13] * t5[3] - t3[14] * t5[0] - t3[14] * t5[11],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] + t3[3] * t5[0] - t3[4] * t5[10] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[15] + t3[11] * t5[13] - t3[12] * t5[12] + t3[13] * t5[11] - t3[14] * t5[4] - t3[15] * t5[3]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Afp& t2 = afp;
Rtc t3 (
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1] + t1[15] * t2[2],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2] - t1[15] * t2[1],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] + t1[15] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2] + t1[14] * t2[3],
t1[15] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
 - t1[9] * t2[3],
t1[8] * t2[3],
 - t1[7] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[3] + t1[15] * t2[2],
 - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[3] - t1[15] * t2[1],
 - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[3] + t1[15] * t2[0],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Afp (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[1] + t3[3] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] + t3[7] * t5[2] + t3[7] * t5[12] - t3[11] * t5[5] + t3[12] * t5[4] - t3[13] * t5[14] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[7] * t5[11] - t3[11] * t5[6] + t3[12] * t5[14] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[0] + t3[7] * t5[10] - t3[11] * t5[14] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[15] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[13] - t3[12] * t5[12] + t3[13] * t5[11] + t3[14] * t5[0] + t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Afp& t2 = afp;
Vec_Afl t3 (
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3],
t1[0] * t2[3]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Afp (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[1] + t3[4] * t5[0] - t3[5] * t5[3] + t3[6] * t5[2] + t3[7] * t5[6],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] + t3[3] * t5[2] + t3[4] * t5[3] + t3[5] * t5[0] - t3[6] * t5[1] - t3[7] * t5[5],
t3[0] * t5[7] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0] + t3[7] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Afp& t2 = afp;
Par_Tnb t3 (
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
 - t1[7] * t2[3],
t1[6] * t2[3],
 - t1[5] * t2[3],
t1[0] * t2[3],
t1[4] * t2[3]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Afp (
t3[3] * t5[1] + t3[3] * t5[5] + t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[3] - t3[5] * t5[7] + t3[6] * t5[2] + t3[6] * t5[6],
t3[3] * t5[2] + t3[3] * t5[6] + t3[4] * t5[3] + t3[4] * t5[7] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[1] - t3[6] * t5[5],
t3[3] * t5[3] + t3[3] * t5[7] - t3[4] * t5[2] - t3[4] * t5[6] + t3[5] * t5[1] + t3[5] * t5[5] + t3[6] * t5[0] + t3[6] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[7] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[0] + t3[11] * t5[4]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Afp& t2 = afp;
Ori_Sph t3 (
t1[0] * t2[0] - t1[3] * t2[3] - t1[4] * t2[0],
t1[0] * t2[1] + t1[2] * t2[3] - t1[4] * t2[1],
t1[0] * t2[2] - t1[1] * t2[3] - t1[4] * t2[2],
t1[0] * t2[3],
t1[4] * t2[3]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Afp (
t3[0] * t5[0] + t3[0] * t5[4] + t3[3] * t5[3] - t3[4] * t5[3],
t3[1] * t5[0] + t3[1] * t5[4] - t3[3] * t5[2] + t3[4] * t5[2],
t3[2] * t5[0] + t3[2] * t5[4] + t3[3] * t5[1] - t3[4] * t5[1],
t3[3] * t5[0] + t3[4] * t5[4]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Afp& t2 = afp;
Flp_Afp t3 (
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2],
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
 - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0] + t1[4] * t2[3]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Afp (
t3[3] * t5[0] + t3[3] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[12] * t5[0] + t3[13] * t5[4]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Trt& trt) {					
					
const Trt& t1 = trt;
const Afp& t2 = afp;
Par_Afp t3 (
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
 - t1[9] * t2[3],
t1[8] * t2[3],
 - t1[7] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[3],
 - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[3],
 - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[3],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Afp (
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[1] + t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[2] + t3[6] * t5[12] - t3[10] * t5[5] + t3[11] * t5[4] + t3[13] * t5[6] - t3[14] * t5[6],
t3[0] * t5[6] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[4] * t5[3] + t3[4] * t5[13] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[1] - t3[6] * t5[11] - t3[10] * t5[6] + t3[12] * t5[4] - t3[13] * t5[5] + t3[14] * t5[5],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[1] + t3[5] * t5[11] + t3[6] * t5[0] + t3[6] * t5[10] - t3[11] * t5[6] + t3[12] * t5[5] + t3[13] * t5[4] - t3[14] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[9] - t3[5] * t5[8] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[5] + t3[9] * t5[4] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Afp& t2 = afp;
Par_Tnb t3 (
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2] + t1[11] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[10] * t2[3],
t1[9] * t2[3],
 - t1[8] * t2[3],
t1[0] * t2[3],
t1[7] * t2[3]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Afp (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[1] + t3[3] * t5[8] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[3] - t3[5] * t5[10] + t3[6] * t5[2] + t3[6] * t5[9] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[11] + t3[10] * t5[6] - t3[11] * t5[6],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[9] + t3[4] * t5[3] + t3[4] * t5[10] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[1] - t3[6] * t5[8] - t3[7] * t5[6] + t3[8] * t5[11] + t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[5],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[10] - t3[4] * t5[2] - t3[4] * t5[9] + t3[5] * t5[1] + t3[5] * t5[8] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[11] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[4] - t3[11] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[0] + t3[11] * t5[7]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Tst& tst) {					
					
const Tst& t1 = tst;
const Afp& t2 = afp;
Par_Afp t3 (
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2] + t1[14] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
 - t1[9] * t2[3],
t1[8] * t2[3],
 - t1[7] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[3],
 - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[3],
 - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[3],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Afp (
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[1] + t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[2] + t3[6] * t5[12] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] + t3[13] * t5[6] - t3[14] * t5[6],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[4] * t5[3] + t3[4] * t5[13] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[1] - t3[6] * t5[11] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] - t3[13] * t5[5] + t3[14] * t5[5],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[1] + t3[5] * t5[11] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[14] - t3[11] * t5[6] + t3[12] * t5[5] + t3[13] * t5[4] - t3[14] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[9] - t3[5] * t5[8] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[5] + t3[9] * t5[4] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Afp& t2 = afp;
Rtc t3 (
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1] + t1[14] * t2[2],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2] - t1[14] * t2[1],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] + t1[14] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[14] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3] - t1[10] * t2[0] + t1[12] * t2[2] - t1[13] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3] - t1[10] * t2[1] - t1[11] * t2[2] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3] - t1[10] * t2[2] + t1[11] * t2[1] - t1[12] * t2[0],
 - t1[9] * t2[3],
t1[8] * t2[3],
 - t1[7] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[3] + t1[14] * t2[2],
 - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[3] - t1[14] * t2[1],
 - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[3] + t1[14] * t2[0],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Afp (
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[1] + t3[3] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] + t3[7] * t5[2] + t3[7] * t5[12] - t3[11] * t5[5] + t3[12] * t5[4] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] - t3[2] * t5[4] + t3[3] * t5[2] + t3[3] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[1] - t3[7] * t5[11] - t3[11] * t5[6] + t3[13] * t5[4] - t3[14] * t5[5] + t3[15] * t5[5],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] + t3[3] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[0] + t3[7] * t5[10] - t3[12] * t5[6] + t3[13] * t5[5] + t3[14] * t5[4] - t3[15] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[13] - t3[12] * t5[12] + t3[13] * t5[11] + t3[14] * t5[0] + t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Afp sp (const Afp& afp, const Bst& bst) {					
					
const Bst& t1 = bst;
const Afp& t2 = afp;
Par_Afp t3 (
 - t1[3] * t2[3] + t1[8] * t2[0] + t1[9] * t2[1],
t1[2] * t2[3] - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[1] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3] - t1[10] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3] - t1[10] * t2[1],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3] - t1[10] * t2[2],
 - t1[9] * t2[3],
t1[8] * t2[3],
 - t1[7] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1],
 - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[7] * t2[1] - t1[8] * t2[2],
t1[0] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0],
 - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[3]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Afp (
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[1] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[3] + t3[6] * t5[2] - t3[10] * t5[5] + t3[11] * t5[4] + t3[13] * t5[6] - t3[14] * t5[6],
t3[0] * t5[6] - t3[2] * t5[4] + t3[3] * t5[2] + t3[4] * t5[3] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[1] - t3[10] * t5[6] + t3[12] * t5[4] - t3[13] * t5[5] + t3[14] * t5[5],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0] + t3[6] * t5[10] - t3[11] * t5[6] + t3[12] * t5[5] + t3[13] * t5[4] - t3[14] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[9] - t3[5] * t5[8] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[5] + t3[9] * t5[4] + t3[13] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Afp re (const Afp& afp, const Vec& vec) {					
					
const Vec& t1 = vec;
const Afp& t2 = afp;
Afp t3 = involute( t2);
Vec_Afp t4 (
t1[2] * t3[3],
 - t1[1] * t3[3],
t1[0] * t3[3],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Afp (
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1],
 - t4[4] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Afp re (const Afp& afp, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Afp& t2 = afp;
Afp t3 = involute( t2);
Pnt_Afp t4 (
t1[2] * t3[3] - t1[3] * t3[0],
 - t1[1] * t3[3] - t1[3] * t3[1],
t1[0] * t3[3] - t1[3] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[3] * t3[0],
 - t1[3] * t3[1],
 - t1[3] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0],
 - t1[3] * t3[3]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Afp (
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[9] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[9] * t6[1],
 - t4[4] * t6[2] + t4[5] * t6[1] - t4[9] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[9] * t6[3]
);

}
		
	
	  	
template<>
inline Afp re (const Afp& afp, const Pln& pln) {					
					
const Pln& t1 = pln;
const Afp& t2 = afp;
Afp t3 = involute( t2);
Pnt_Dap t4 (
t1[3] * t3[2],
 - t1[3] * t3[1],
t1[3] * t3[0],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[3] * t3[3],
t1[1] * t3[2] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[2] * t3[0],
t1[0] * t3[1] - t1[1] * t3[0],
 - t1[2] * t3[3] + t1[3] * t3[2],
t1[1] * t3[3] - t1[3] * t3[1],
 - t1[0] * t3[3] + t1[3] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Afp (
t4[3] * t6[0] - t4[6] * t6[2] + t4[7] * t6[1],
t4[3] * t6[1] + t4[5] * t6[2] - t4[7] * t6[0],
t4[3] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0],
t4[3] * t6[3] + t4[8] * t6[2] - t4[9] * t6[1] + t4[10] * t6[0]
);

}
		
	
	  	
template<>
inline Afp re (const Afp& afp, const Dll& dll) {					
					
const Dll& t1 = dll;
const Afp& t2 = afp;
Afp t3 = involute( t2);
Par_Afp t4 (
 - t1[2] * t3[3] + t1[4] * t3[0] + t1[5] * t3[1],
t1[1] * t3[3] - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[0] * t3[3] - t1[3] * t3[1] - t1[4] * t3[2],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
 - t1[5] * t3[3],
t1[4] * t3[3],
 - t1[3] * t3[3],
t1[4] * t3[0] + t1[5] * t3[1],
 - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[3] * t3[1] - t1[4] * t3[2],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Afp (
t4[3] * t6[0] - t4[5] * t6[2] + t4[6] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[6] * t6[0],
t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[4] * t6[5] - t4[5] * t6[4] + t4[6] * t6[3]
);

}
		
	
	  	
template<>
inline Afp re (const Afp& afp, const Lin& lin) {					
					
const Lin& t1 = lin;
const Afp& t2 = afp;
Afp t3 = involute( t2);
Tst t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[1] * t3[2] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[2] * t3[0],
t1[0] * t3[1] - t1[1] * t3[0],
t1[4] * t3[0] + t1[5] * t3[1],
 - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[3] * t3[1] - t1[4] * t3[2],
t1[2] * t3[3],
 - t1[1] * t3[3],
t1[0] * t3[3],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[1] * t3[2] - t1[2] * t3[1] + t1[5] * t3[3],
 - t1[0] * t3[2] + t1[2] * t3[0] - t1[4] * t3[3],
t1[0] * t3[1] - t1[1] * t3[0] + t1[3] * t3[3],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Afp (
 - t4[4] * t6[4] + t4[5] * t6[3] - t4[14] * t6[5],
 - t4[4] * t6[5] + t4[6] * t6[3] + t4[14] * t6[4],
 - t4[5] * t6[5] + t4[6] * t6[4] - t4[14] * t6[3],
 - t4[4] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] + t4[11] * t6[5] - t4[12] * t6[4] + t4[13] * t6[3]
);

}
		
	
	  	
template<>
inline Afp re (const Afp& afp, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Afp& t2 = afp;
Afp t3 = involute( t2);
Pnt_Afp t4 (
t1[2] * t3[3] - t1[4] * t3[0],
 - t1[1] * t3[3] - t1[4] * t3[1],
t1[0] * t3[3] - t1[4] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[4] * t3[0],
 - t1[4] * t3[1],
 - t1[4] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] - t1[3] * t3[3],
 - t1[4] * t3[3]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Afp (
t4[0] * t6[3] - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[3] - t4[9] * t6[2],
t4[1] * t6[3] - t4[3] * t6[2] + t4[5] * t6[0] - t4[7] * t6[3] + t4[9] * t6[1],
t4[2] * t6[3] - t4[4] * t6[2] + t4[5] * t6[1] - t4[8] * t6[3] - t4[9] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[9] * t6[4] - t4[10] * t6[3]
);

}
		
	
	  	
template<>
inline Afp re (const Afp& afp, const Par& par) {					
					
const Par& t1 = par;
const Afp& t2 = afp;
Afp t3 = involute( t2);
Par_Afp t4 (
 - t1[2] * t3[3] + t1[7] * t3[0] + t1[8] * t3[1],
t1[1] * t3[3] - t1[6] * t3[0] + t1[8] * t3[2],
 - t1[0] * t3[3] - t1[6] * t3[1] - t1[7] * t3[2],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1] - t1[5] * t3[3] - t1[9] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0] + t1[4] * t3[3] - t1[9] * t3[1],
 - t1[0] * t3[1] + t1[1] * t3[0] - t1[3] * t3[3] - t1[9] * t3[2],
 - t1[8] * t3[3],
t1[7] * t3[3],
 - t1[6] * t3[3],
t1[7] * t3[0] + t1[8] * t3[1],
 - t1[6] * t3[0] + t1[8] * t3[2],
 - t1[6] * t3[1] - t1[7] * t3[2],
 - t1[6] * t3[2] + t1[7] * t3[1] - t1[8] * t3[0],
 - t1[6] * t3[2] + t1[7] * t3[1] - t1[8] * t3[0] + t1[9] * t3[3]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Afp (
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[0] + t4[4] * t6[9] - t4[5] * t6[2] + t4[6] * t6[1] - t4[10] * t6[4] + t4[11] * t6[3] + t4[13] * t6[5] - t4[14] * t6[5],
t4[0] * t6[5] - t4[2] * t6[3] + t4[3] * t6[1] + t4[4] * t6[2] + t4[5] * t6[9] - t4[6] * t6[0] - t4[10] * t6[5] + t4[12] * t6[3] - t4[13] * t6[4] + t4[14] * t6[4],
t4[1] * t6[5] - t4[2] * t6[4] + t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0] + t4[6] * t6[9] - t4[11] * t6[5] + t4[12] * t6[4] + t4[13] * t6[3] - t4[14] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[4] * t6[8] - t4[5] * t6[7] + t4[6] * t6[6] + t4[7] * t6[5] - t4[8] * t6[4] + t4[9] * t6[3] + t4[14] * t6[9]
);

}
		
	
	  	
template<>
inline Afp re (const Afp& afp, const Cir& cir) {					
					
const Cir& t1 = cir;
const Afp& t2 = afp;
Afp t3 = involute( t2);
Tst t4 (
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2] - t1[9] * t3[3],
t1[4] * t3[2] - t1[5] * t3[1],
 - t1[3] * t3[2] + t1[5] * t3[0],
t1[3] * t3[1] - t1[4] * t3[0],
t1[2] * t3[3] + t1[7] * t3[0] + t1[8] * t3[1] - t1[9] * t3[2],
 - t1[1] * t3[3] - t1[6] * t3[0] + t1[8] * t3[2] + t1[9] * t3[1],
t1[0] * t3[3] - t1[6] * t3[1] - t1[7] * t3[2] - t1[9] * t3[0],
t1[5] * t3[3],
 - t1[4] * t3[3],
t1[3] * t3[3],
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
t1[4] * t3[2] - t1[5] * t3[1] + t1[8] * t3[3],
 - t1[3] * t3[2] + t1[5] * t3[0] - t1[7] * t3[3],
t1[3] * t3[1] - t1[4] * t3[0] + t1[6] * t3[3],
 - t1[6] * t3[2] + t1[7] * t3[1] - t1[8] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Afp (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] - t4[4] * t6[7] + t4[5] * t6[6] - t4[6] * t6[9] - t4[10] * t6[0] + t4[12] * t6[2] - t4[13] * t6[1] - t4[14] * t6[8],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] - t4[4] * t6[8] + t4[5] * t6[9] + t4[6] * t6[6] - t4[10] * t6[1] - t4[11] * t6[2] + t4[13] * t6[0] + t4[14] * t6[7],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[4] * t6[9] - t4[5] * t6[8] + t4[6] * t6[7] - t4[10] * t6[2] + t4[11] * t6[1] - t4[12] * t6[0] - t4[14] * t6[6],
t4[0] * t6[9] - t4[4] * t6[5] + t4[5] * t6[4] - t4[6] * t6[3] - t4[7] * t6[2] + t4[8] * t6[1] - t4[9] * t6[0] + t4[11] * t6[8] - t4[12] * t6[7] + t4[13] * t6[6]
);

}
		
	
	  	
template<>
inline Afp re (const Afp& afp, const Sph& sph) {					
					
const Sph& t1 = sph;
const Afp& t2 = afp;
Afp t3 = involute( t2);
Pnt_Dap t4 (
t1[4] * t3[2],
 - t1[4] * t3[1],
t1[4] * t3[0],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2] + t1[3] * t3[3],
t1[4] * t3[3],
t1[1] * t3[2] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[2] * t3[0],
t1[0] * t3[1] - t1[1] * t3[0],
 - t1[2] * t3[3] + t1[4] * t3[2],
t1[1] * t3[3] - t1[4] * t3[1],
 - t1[0] * t3[3] + t1[4] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Afp (
t4[2] * t6[3] + t4[3] * t6[0] - t4[6] * t6[2] + t4[7] * t6[1] - t4[10] * t6[3],
 - t4[1] * t6[3] + t4[3] * t6[1] + t4[5] * t6[2] - t4[7] * t6[0] + t4[9] * t6[3],
t4[0] * t6[3] + t4[3] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0] - t4[8] * t6[3],
t4[3] * t6[4] + t4[4] * t6[3] + t4[8] * t6[2] - t4[9] * t6[1] + t4[10] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	