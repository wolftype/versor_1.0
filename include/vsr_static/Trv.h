		#ifndef TRV_H_INCLUDED
		#define TRV_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Trv gp (const Trv& a, const Sca& b) { 
	return Trv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Sca*)(&b));
}			
		 
inline Ori gp (const Trv& a, const Ori& b) { 
	return Ori (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Ori*)(&b));
}			
		 
inline Inf_Dap gp (const Trv& a, const Inf& b) { 
	return Inf_Dap (
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Inf*)(&b));
}			
		 
inline Dap gp (const Trv& a, const Mnk& b) { 
	return Dap (
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Flp gp (const Trv& a, const Hyp& b) { 
	return Hyp_Flp (
 - a[1] * b[1],
 - a[2] * b[1],
 - a[3] * b[1],
a[0] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Hyp*)(&b));
}			
		 
inline Mnk_Afp gp (const Trv& a, const Pss& b) { 
	return Mnk_Afp (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Pss*)(&b));
}			
		 
inline Pnt_Dap gp (const Trv& a, const Pnt& b) { 
	return Pnt_Dap (
a[0] * b[0] - a[1] * b[4],
a[0] * b[1] - a[2] * b[4],
a[0] * b[2] - a[3] * b[4],
a[0] * b[3] - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[4],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Pnt*)(&b));
}			
		 
inline Tst gp (const Trv& a, const Par& b) { 
	return Tst (
a[1] * b[6] + a[2] * b[7] + a[3] * b[8],
a[0] * b[0] + a[1] * b[7] - a[2] * b[6],
a[0] * b[1] + a[1] * b[8] - a[3] * b[6],
a[0] * b[2] + a[2] * b[8] - a[3] * b[7],
a[0] * b[3] + a[1] * b[9] - a[2] * b[0] - a[3] * b[1],
a[0] * b[4] + a[1] * b[0] + a[2] * b[9] - a[3] * b[2],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2] + a[3] * b[9],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9] - a[1] * b[6] - a[2] * b[7] - a[3] * b[8],
 - a[1] * b[7] + a[2] * b[6],
 - a[1] * b[8] + a[3] * b[6],
 - a[2] * b[8] + a[3] * b[7],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Par*)(&b));
}			
		 
inline Par_Afp gp (const Trv& a, const Cir& b) { 
	return Par_Afp (
a[2] * b[3] + a[3] * b[4],
 - a[1] * b[3] + a[3] * b[5],
 - a[1] * b[4] - a[2] * b[5],
 - a[1] * b[6] - a[2] * b[7] - a[3] * b[8],
a[0] * b[0] - a[1] * b[7] + a[2] * b[6] - a[3] * b[9],
a[0] * b[1] - a[1] * b[8] + a[2] * b[9] + a[3] * b[6],
a[0] * b[2] - a[1] * b[9] - a[2] * b[8] + a[3] * b[7],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6] - a[2] * b[3] - a[3] * b[4],
a[0] * b[7] + a[1] * b[3] - a[3] * b[5],
a[0] * b[8] + a[1] * b[4] + a[2] * b[5],
a[0] * b[9] - a[1] * b[5] + a[2] * b[4] - a[3] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt_Afp gp (const Trv& a, const Sph& b) { 
	return Pnt_Afp (
a[3] * b[4],
 - a[2] * b[4],
a[1] * b[4],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0] - a[3] * b[4],
a[0] * b[1] + a[2] * b[4],
a[0] * b[2] - a[1] * b[4],
a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[0] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Sph*)(&b));
}			
		 
inline Tst gp (const Trv& a, const Sta& b) { 
	return Tst (
a[1] * b[6] + a[2] * b[7] + a[3] * b[8],
a[0] * b[0] + a[1] * b[7] - a[2] * b[6],
a[0] * b[1] + a[1] * b[8] - a[3] * b[6],
a[0] * b[2] + a[2] * b[8] - a[3] * b[7],
a[0] * b[3] - a[2] * b[0] - a[3] * b[1],
a[0] * b[4] + a[1] * b[0] - a[3] * b[2],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
 - a[1] * b[6] - a[2] * b[7] - a[3] * b[8],
 - a[1] * b[7] + a[2] * b[6],
 - a[1] * b[8] + a[3] * b[6],
 - a[2] * b[8] + a[3] * b[7],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Sta*)(&b));
}			
		 
inline Drv_Dap gp (const Trv& a, const Drv& b) { 
	return Drv_Dap (
a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Drv*)(&b));
}			
		 
inline Drv_Afp gp (const Trv& a, const Drb& b) { 
	return Drv_Afp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Drb*)(&b));
}			
		 
inline Inf_Afp gp (const Trv& a, const Drt& b) { 
	return Inf_Afp (
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Drt*)(&b));
}			
		 
inline Tnv gp (const Trv& a, const Tnv& b) { 
	return Tnv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnb gp (const Trv& a, const Tnb& b) { 
	return Tnb (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnt gp (const Trv& a, const Tnt& b) { 
	return Tnt (
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Tnt*)(&b));
}			
		 
inline Par_Afp gp (const Trv& a, const Lin& b) { 
	return Par_Afp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5],
 - a[1] * b[4] + a[2] * b[3],
 - a[1] * b[5] + a[3] * b[3],
 - a[2] * b[5] + a[3] * b[4],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[2] * b[0] - a[3] * b[1],
a[0] * b[4] + a[1] * b[0] - a[3] * b[2],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Lin*)(&b));
}			
		 
inline Pnt_Afp gp (const Trv& a, const Pln& b) { 
	return Pnt_Afp (
a[3] * b[3],
 - a[2] * b[3],
a[1] * b[3],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0] - a[3] * b[3],
a[0] * b[1] + a[2] * b[3],
a[0] * b[2] - a[1] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Pln*)(&b));
}			
		 
inline Trt gp (const Trv& a, const Flp& b) { 
	return Trt (
a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Flp*)(&b));
}			
		 
inline Flp_Afp gp (const Trv& a, const Dfp& b) { 
	return Flp_Afp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Dfp*)(&b));
}			
		 
inline Tst gp (const Trv& a, const Dll& b) { 
	return Tst (
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[0] * b[0] + a[1] * b[4] - a[2] * b[3],
a[0] * b[1] + a[1] * b[5] - a[3] * b[3],
a[0] * b[2] + a[2] * b[5] - a[3] * b[4],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5],
 - a[1] * b[4] + a[2] * b[3],
 - a[1] * b[5] + a[3] * b[3],
 - a[2] * b[5] + a[3] * b[4],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Dll*)(&b));
}			
		 
inline Pnt_Dap gp (const Trv& a, const Dlp& b) { 
	return Pnt_Dap (
a[0] * b[0] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[0] * b[2] - a[3] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[3],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Dlp*)(&b));
}			
		 
inline Biv_Afp gp (const Trv& a, const Vec& b) { 
	return Biv_Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Vec*)(&b));
}			
		 
inline Vec_Afp gp (const Trv& a, const Biv& b) { 
	return Vec_Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Biv*)(&b));
}			
		 
inline Afp gp (const Trv& a, const Tri& b) { 
	return Afp (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Tri*)(&b));
}			
		 
inline Biv_Afp gp (const Trv& a, const Aff& b) { 
	return Biv_Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Aff*)(&b));
}			
		 
inline Vec_Afp gp (const Trv& a, const Afl& b) { 
	return Vec_Afp (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[2] * b[0] - a[3] * b[1],
a[0] * b[4] + a[1] * b[0] - a[3] * b[2],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Afl*)(&b));
}			
		 
inline Afp gp (const Trv& a, const Afp& b) { 
	return Afp (
a[0] * b[0] - a[3] * b[3],
a[0] * b[1] + a[2] * b[3],
a[0] * b[2] - a[1] * b[3],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Afp*)(&b));
}			
		 
inline Dap gp (const Trv& a, const Dap& b) { 
	return Dap (
a[0] * b[0] + a[1] * b[3],
a[0] * b[1] + a[2] * b[3],
a[0] * b[2] + a[3] * b[3],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Dap*)(&b));
}			
		 
inline Biv_Dap gp (const Trv& a, const Daf& b) { 
	return Biv_Dap (
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Daf*)(&b));
}			
		 
inline Vec_Dap gp (const Trv& a, const Dal& b) { 
	return Vec_Dap (
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5],
a[0] * b[0] - a[1] * b[4] + a[2] * b[3],
a[0] * b[1] - a[1] * b[5] + a[3] * b[3],
a[0] * b[2] - a[2] * b[5] + a[3] * b[4],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Dal*)(&b));
}			
		 
inline Vec_Dap gp (const Trv& a, const Mnv& b) { 
	return Vec_Dap (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Mnv*)(&b));
}			
		 
inline Rtt gp (const Trv& a, const Rot& b) { 
	return Rtt (
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
		 
		
template<> inline MVBase gp_gen<Trv, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Rot*)(&b));
}			
		 
inline Mtt gp (const Trv& a, const Mot& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[7],
a[0] * b[2] + a[1] * b[6] - a[2] * b[7] - a[3] * b[4],
a[0] * b[3] + a[1] * b[7] + a[2] * b[6] - a[3] * b[5],
a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
 - a[1] * b[4] - a[2] * b[5] - a[3] * b[6],
 - a[1] * b[5] + a[2] * b[4] - a[3] * b[7],
 - a[1] * b[6] + a[2] * b[7] + a[3] * b[4],
 - a[1] * b[7] - a[2] * b[6] + a[3] * b[5],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1],
a[0] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Mot*)(&b));
}			
		 
inline Tvd gp (const Trv& a, const Dil& b) { 
	return Tvd (
a[0] * b[0],
a[1] * b[0] + a[1] * b[1],
a[2] * b[0] + a[2] * b[1],
a[3] * b[0] + a[3] * b[1],
a[0] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Dil*)(&b));
}			
		 
inline Trv gp (const Trv& a, const Trv& b) { 
	return Trv (
a[0] * b[0],
a[0] * b[1] + a[1] * b[0],
a[0] * b[2] + a[2] * b[0],
a[0] * b[3] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Trv*)(&b));
}			
		 
inline Mtt gp (const Trv& a, const Mtd& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[11],
a[0] * b[2] + a[1] * b[6] - a[2] * b[11] - a[3] * b[4],
a[0] * b[3] + a[1] * b[11] + a[2] * b[6] - a[3] * b[5],
a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8] - a[3] * b[2] - a[3] * b[9],
a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7] - a[3] * b[3] - a[3] * b[10],
a[1] * b[2] + a[1] * b[9] + a[2] * b[3] + a[2] * b[10] + a[3] * b[0] + a[3] * b[7],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7] - a[1] * b[4] - a[2] * b[5] - a[3] * b[6],
a[0] * b[8] - a[1] * b[5] + a[2] * b[4] - a[3] * b[11],
a[0] * b[9] - a[1] * b[6] + a[2] * b[11] + a[3] * b[4],
a[0] * b[10] - a[1] * b[11] - a[2] * b[6] + a[3] * b[5],
a[1] * b[3] + a[1] * b[10] - a[2] * b[2] - a[2] * b[9] + a[3] * b[1] + a[3] * b[8],
a[0] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Mtd*)(&b));
}			
		 
inline Trt gp (const Trv& a, const Trs& b) { 
	return Trt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
 - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] + a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Trv& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[4] + a[2] * b[8] + a[3] * b[9],
a[0] * b[1] - a[1] * b[8] - a[2] * b[4] + a[3] * b[10],
a[0] * b[2] - a[1] * b[9] - a[2] * b[10] - a[3] * b[4],
a[0] * b[3] - a[1] * b[0] - a[1] * b[11] - a[2] * b[1] - a[2] * b[12] - a[3] * b[2] - a[3] * b[13],
a[0] * b[4],
a[0] * b[5] - a[1] * b[1] - a[1] * b[12] + a[2] * b[0] + a[2] * b[11] - a[3] * b[14] - a[3] * b[15],
a[0] * b[6] - a[1] * b[2] - a[1] * b[13] + a[2] * b[14] + a[2] * b[15] + a[3] * b[0] + a[3] * b[11],
a[0] * b[7] - a[1] * b[14] - a[1] * b[15] - a[2] * b[2] - a[2] * b[13] + a[3] * b[1] + a[3] * b[12],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11] + a[1] * b[4] - a[2] * b[8] - a[3] * b[9],
a[0] * b[12] + a[1] * b[8] + a[2] * b[4] - a[3] * b[10],
a[0] * b[13] + a[1] * b[9] + a[2] * b[10] + a[3] * b[4],
a[0] * b[14] - a[1] * b[10] + a[2] * b[9] - a[3] * b[8],
a[0] * b[15] + a[1] * b[10] - a[2] * b[9] + a[3] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Trv& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7] + a[3] * b[15],
a[0] * b[2] + a[1] * b[9] - a[2] * b[15] - a[3] * b[7],
a[0] * b[3] + a[1] * b[15] + a[2] * b[9] - a[3] * b[8],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[2] - a[3] * b[12],
a[0] * b[5] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3] - a[3] * b[13],
a[0] * b[6] + a[1] * b[2] + a[1] * b[12] + a[2] * b[3] + a[2] * b[13] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9],
a[0] * b[11] - a[1] * b[8] + a[2] * b[7] - a[3] * b[15],
a[0] * b[12] - a[1] * b[9] + a[2] * b[15] + a[3] * b[7],
a[0] * b[13] - a[1] * b[15] - a[2] * b[9] + a[3] * b[8],
a[0] * b[14] + a[1] * b[3] + a[1] * b[13] - a[2] * b[2] - a[2] * b[12] + a[3] * b[1] + a[3] * b[11],
a[0] * b[15]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Mtt*)(&b));
}			
		 
inline Rtt gp (const Trv& a, const Rtt& b) { 
	return Rtt (
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
		 
		
template<> inline MVBase gp_gen<Trv, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Rtt*)(&b));
}			
		 
inline Rvd gp (const Trv& a, const Rtd& b) { 
	return Rvd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[0] + a[1] * b[4] - a[2] * b[1] - a[2] * b[5] - a[3] * b[2] - a[3] * b[6],
a[1] * b[1] + a[1] * b[5] + a[2] * b[0] + a[2] * b[4] - a[3] * b[3] - a[3] * b[7],
a[1] * b[2] + a[1] * b[6] + a[2] * b[3] + a[2] * b[7] + a[3] * b[0] + a[3] * b[4],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[1] * b[3] + a[1] * b[7] - a[2] * b[2] - a[2] * b[6] + a[3] * b[1] + a[3] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Rtd*)(&b));
}			
		 
inline Tvd gp (const Trv& a, const Tvd& b) { 
	return Tvd (
a[0] * b[0],
a[0] * b[1] + a[1] * b[0] + a[1] * b[4],
a[0] * b[2] + a[2] * b[0] + a[2] * b[4],
a[0] * b[3] + a[3] * b[0] + a[3] * b[4],
a[0] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Tvd*)(&b));
}			
		 
inline Trt gp (const Trv& a, const Tsd& b) { 
	return Trt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4],
a[3] * b[0] + a[3] * b[4],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] + a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Tsd*)(&b));
}			
		 
inline Tst gp (const Trv& a, const Trt& b) { 
	return Tst (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7],
a[0] * b[2] + a[1] * b[9] - a[3] * b[7],
a[0] * b[3] + a[2] * b[9] - a[3] * b[8],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[2] - a[3] * b[12],
a[0] * b[5] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3] - a[3] * b[13],
a[0] * b[6] + a[1] * b[2] + a[1] * b[12] + a[2] * b[3] + a[2] * b[13] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9],
a[0] * b[11] - a[1] * b[8] + a[2] * b[7],
a[0] * b[12] - a[1] * b[9] + a[3] * b[7],
a[0] * b[13] - a[2] * b[9] + a[3] * b[8],
a[1] * b[3] + a[1] * b[13] - a[2] * b[2] - a[2] * b[12] + a[3] * b[1] + a[3] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Trt*)(&b));
}			
		 
inline Rvd gp (const Trv& a, const Rvd& b) { 
	return Rvd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4] + a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8] - a[3] * b[2] - a[3] * b[9],
a[0] * b[5] + a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7] - a[3] * b[3] - a[3] * b[10],
a[0] * b[6] + a[1] * b[2] + a[1] * b[9] + a[2] * b[3] + a[2] * b[10] + a[3] * b[0] + a[3] * b[7],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11] + a[1] * b[3] + a[1] * b[10] - a[2] * b[2] - a[2] * b[9] + a[3] * b[1] + a[3] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Rvd*)(&b));
}			
		 
inline Tst gp (const Trv& a, const Tst& b) { 
	return Tst (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7],
a[0] * b[2] + a[1] * b[9] - a[3] * b[7],
a[0] * b[3] + a[2] * b[9] - a[3] * b[8],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[2] - a[3] * b[12],
a[0] * b[5] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3] - a[3] * b[13],
a[0] * b[6] + a[1] * b[2] + a[1] * b[12] + a[2] * b[3] + a[2] * b[13] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9],
a[0] * b[11] - a[1] * b[8] + a[2] * b[7],
a[0] * b[12] - a[1] * b[9] + a[3] * b[7],
a[0] * b[13] - a[2] * b[9] + a[3] * b[8],
a[0] * b[14] + a[1] * b[3] + a[1] * b[13] - a[2] * b[2] - a[2] * b[12] + a[3] * b[1] + a[3] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Trv& a, const Tvt& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7] + a[3] * b[14],
a[0] * b[2] + a[1] * b[9] - a[2] * b[14] - a[3] * b[7],
a[0] * b[3] + a[1] * b[14] + a[2] * b[9] - a[3] * b[8],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[2] - a[3] * b[12],
a[0] * b[5] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3] - a[3] * b[13],
a[0] * b[6] + a[1] * b[2] + a[1] * b[12] + a[2] * b[3] + a[2] * b[13] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9],
a[0] * b[11] - a[1] * b[8] + a[2] * b[7] - a[3] * b[14],
a[0] * b[12] - a[1] * b[9] + a[2] * b[14] + a[3] * b[7],
a[0] * b[13] - a[1] * b[14] - a[2] * b[9] + a[3] * b[8],
a[1] * b[3] + a[1] * b[13] - a[2] * b[2] - a[2] * b[12] + a[3] * b[1] + a[3] * b[11],
a[0] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Tvt*)(&b));
}			
		 
inline Tst gp (const Trv& a, const Bst& b) { 
	return Tst (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7],
a[0] * b[2] + a[1] * b[9] - a[3] * b[7],
a[0] * b[3] + a[2] * b[9] - a[3] * b[8],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[3] * b[2],
a[0] * b[5] + a[1] * b[1] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3],
a[0] * b[6] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9],
 - a[1] * b[8] + a[2] * b[7],
 - a[1] * b[9] + a[3] * b[7],
 - a[2] * b[9] + a[3] * b[8],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Trv, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Trv*)(&a),*(Bst*)(&b));
}			
		 
inline Trv ip (const Trv& a, const Trv& b) { 
	return Trv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Trv, Trv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Trv*)(&a),*(Trv*)(&b));
}			
		  	
template<>
inline Trv sp (const Trv& trv, const Rot& rot) {					
					
const Rot& t1 = rot;
const Trv& t2 = trv;
Rtt t3 (
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
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Mot& mot) {					
					
const Mot& t1 = mot;
const Trv& t2 = trv;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[7] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] - t1[7] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[7] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[4] * t2[2] - t1[5] * t2[1] + t1[7] * t2[3],
t1[4] * t2[3] - t1[6] * t2[1] - t1[7] * t2[2],
t1[5] * t2[3] - t1[6] * t2[2] + t1[7] * t2[1],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1],
t1[7] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] - t3[14] * t5[7],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Dil& dil) {					
					
const Dil& t1 = dil;
const Trv& t2 = trv;
Tvd t3 (
t1[0] * t2[0],
t1[0] * t2[1] - t1[1] * t2[1],
t1[0] * t2[2] - t1[1] * t2[2],
t1[0] * t2[3] - t1[1] * t2[3],
t1[1] * t2[0]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Trv (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] + t3[1] * t5[1],
t3[2] * t5[0] + t3[2] * t5[1],
t3[3] * t5[0] + t3[3] * t5[1]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Trv& t2 = trv;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[11] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] - t1[11] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[11] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] - t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[10] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] - t1[7] * t2[3] + t1[9] * t2[1] + t1[10] * t2[2],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3] + t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[8] * t2[0] + t1[11] * t2[3],
t1[4] * t2[3] - t1[6] * t2[1] + t1[9] * t2[0] - t1[11] * t2[2],
t1[5] * t2[3] - t1[6] * t2[2] + t1[10] * t2[0] + t1[11] * t2[1],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[8] * t2[3] + t1[9] * t2[2] - t1[10] * t2[1],
t1[11] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] + t3[10] * t5[7] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] - t3[14] * t5[11],
t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[14] * t5[3] - t3[14] * t5[10],
t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[14] * t5[2] + t3[14] * t5[9],
t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[14] * t5[1] - t3[14] * t5[8]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Trs& trs) {					
					
const Trs& t1 = trs;
const Trv& t2 = trv;
Trt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Trv (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3],
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Trv& t2 = trv;
Rtc t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[8] * t2[1] + t1[10] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[9] * t2[1] - t1[10] * t2[2],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[4] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] + t1[14] * t2[3] - t1[15] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] + t1[6] * t2[0] - t1[11] * t2[3] + t1[13] * t2[1] - t1[14] * t2[2] + t1[15] * t2[2],
t1[1] * t2[3] - t1[2] * t2[2] + t1[7] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] + t1[14] * t2[1] - t1[15] * t2[1],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
t1[4] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[11] * t2[0],
t1[4] * t2[2] - t1[8] * t2[1] + t1[10] * t2[3] + t1[12] * t2[0],
t1[4] * t2[3] - t1[9] * t2[1] - t1[10] * t2[2] + t1[13] * t2[0],
t1[8] * t2[3] - t1[9] * t2[2] + t1[10] * t2[1] + t1[14] * t2[0],
t1[8] * t2[3] - t1[9] * t2[2] + t1[10] * t2[1] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Trv (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[0] - t3[3] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] + t3[7] * t5[14] + t3[7] * t5[15] - t3[11] * t5[3] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[7] * t5[2] - t3[7] * t5[13] - t3[11] * t5[5] - t3[12] * t5[3] + t3[13] * t5[7] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[2] - t3[3] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] + t3[7] * t5[1] + t3[7] * t5[12] - t3[11] * t5[6] - t3[12] * t5[7] - t3[13] * t5[3] - t3[14] * t5[5] + t3[15] * t5[5]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Trv& t2 = trv;
Mtt t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1] + t1[15] * t2[3],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1] - t1[15] * t2[2],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2] + t1[15] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[10] * t2[1] - t1[11] * t2[2] - t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] - t1[10] * t2[2] + t1[11] * t2[1] - t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] - t1[10] * t2[3] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[0] + t1[15] * t2[3],
t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[0] - t1[15] * t2[2],
t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[0] + t1[15] * t2[1],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[11] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1] + t1[14] * t2[0],
t1[15] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Trv& t2 = trv;
Rtt t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Trv& t2 = trv;
Rvd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[7] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[3] + t1[6] * t2[1] + t1[7] * t2[2],
t1[4] * t2[0],
t1[5] * t2[0],
t1[6] * t2[0],
t1[7] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[5] * t2[3] + t1[6] * t2[2] - t1[7] * t2[1]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[7],
t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[1] - t3[5] * t5[5] - t3[6] * t5[2] - t3[6] * t5[6] - t3[11] * t5[3] - t3[11] * t5[7],
t3[4] * t5[1] + t3[4] * t5[5] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[3] - t3[6] * t5[7] + t3[11] * t5[2] + t3[11] * t5[6],
t3[4] * t5[2] + t3[4] * t5[6] + t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[0] + t3[6] * t5[4] - t3[11] * t5[1] - t3[11] * t5[5]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Trv& t2 = trv;
Tvd t3 (
t1[0] * t2[0],
t1[0] * t2[1] + t1[1] * t2[0] - t1[4] * t2[1],
t1[0] * t2[2] + t1[2] * t2[0] - t1[4] * t2[2],
t1[0] * t2[3] + t1[3] * t2[0] - t1[4] * t2[3],
t1[4] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Trv (
t3[0] * t5[0] + t3[4] * t5[4],
t3[0] * t5[1] + t3[1] * t5[0] + t3[1] * t5[4] - t3[4] * t5[1],
t3[0] * t5[2] + t3[2] * t5[0] + t3[2] * t5[4] - t3[4] * t5[2],
t3[0] * t5[3] + t3[3] * t5[0] + t3[3] * t5[4] - t3[4] * t5[3]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Trv& t2 = trv;
Trt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2],
t1[0] * t2[3] - t1[4] * t2[3],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3] + t1[4] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Trv (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3] + t3[10] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Trt& trt) {					
					
const Trt& t1 = trt;
const Trv& t2 = trv;
Tst t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[10] * t2[1] - t1[11] * t2[2] - t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] - t1[10] * t2[2] + t1[11] * t2[1] - t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] - t1[10] * t2[3] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[0],
t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[0],
t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[11] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Trv& t2 = trv;
Rvd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[7] * t2[1] - t1[8] * t2[2] - t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] - t1[7] * t2[2] + t1[8] * t2[1] - t1[10] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] - t1[7] * t2[3] + t1[9] * t2[1] + t1[10] * t2[2],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[10] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[8] * t2[3] + t1[9] * t2[2] - t1[10] * t2[1] + t1[11] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] + t3[10] * t5[11] - t3[11] * t5[3] - t3[11] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[11] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[6] + t3[8] * t5[11] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[8]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Tst& tst) {					
					
const Tst& t1 = tst;
const Trv& t2 = trv;
Tst t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[10] * t2[1] - t1[11] * t2[2] - t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] - t1[10] * t2[2] + t1[11] * t2[1] - t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] - t1[10] * t2[3] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[0],
t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[0],
t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[11] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1] + t1[14] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Trv& t2 = trv;
Mtt t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1] + t1[14] * t2[3],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1] - t1[14] * t2[2],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2] + t1[14] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[10] * t2[1] - t1[11] * t2[2] - t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] - t1[10] * t2[2] + t1[11] * t2[1] - t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] - t1[10] * t2[3] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[0] + t1[14] * t2[3],
t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[0] - t1[14] * t2[2],
t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[0] + t1[14] * t2[1],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[11] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1],
t1[14] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[14],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Trv sp (const Trv& trv, const Bst& bst) {					
					
const Bst& t1 = bst;
const Trv& t2 = trv;
Tst t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[10] * t2[1],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] - t1[10] * t2[2],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] - t1[10] * t2[3],
t1[7] * t2[0],
t1[8] * t2[0],
t1[9] * t2[0],
t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1],
t1[7] * t2[3] - t1[9] * t2[1],
t1[8] * t2[3] - t1[9] * t2[2],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Trv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1]
);

}
		
	
	  	
template<>
inline Trv re (const Trv& trv, const Vec& vec) {					
					
const Vec& t1 = vec;
const Trv& t2 = trv;
Trv t3 = involute( t2);
Biv_Afp t4 (
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
return Trv (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1]
);

}
		
	
	  	
template<>
inline Trv re (const Trv& trv, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Trv& t2 = trv;
Trv t3 = involute( t2);
Pnt_Dap t4 (
t1[0] * t3[0] + t1[3] * t3[1],
t1[1] * t3[0] + t1[3] * t3[2],
t1[2] * t3[0] + t1[3] * t3[3],
t1[0] * t3[1] + t1[1] * t3[2] + t1[2] * t3[3],
t1[3] * t3[0],
t1[0] * t3[2] - t1[1] * t3[1],
t1[0] * t3[3] - t1[2] * t3[1],
t1[1] * t3[3] - t1[2] * t3[2],
t1[3] * t3[1],
t1[3] * t3[2],
t1[3] * t3[3]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Trv (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[3],
 - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2],
 - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1]
);

}
		
	
	  	
template<>
inline Trv re (const Trv& trv, const Pln& pln) {					
					
const Pln& t1 = pln;
const Trv& t2 = trv;
Trv t3 = involute( t2);
Pnt_Afp t4 (
t1[3] * t3[3],
 - t1[3] * t3[2],
t1[3] * t3[1],
 - t1[0] * t3[2] - t1[1] * t3[3],
t1[0] * t3[1] - t1[2] * t3[3],
t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[0] + t1[3] * t3[3],
t1[1] * t3[0] - t1[3] * t3[2],
t1[2] * t3[0] + t1[3] * t3[1],
 - t1[0] * t3[3] + t1[1] * t3[2] - t1[2] * t3[1],
t1[3] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Trv (
 - t4[6] * t6[0] - t4[7] * t6[1] - t4[8] * t6[2] - t4[9] * t6[3],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[9] * t6[2],
t4[3] * t6[0] - t4[5] * t6[2] + t4[9] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[9] * t6[0]
);

}
		
	
	  	
template<>
inline Trv re (const Trv& trv, const Dll& dll) {					
					
const Dll& t1 = dll;
const Trv& t2 = trv;
Trv t3 = involute( t2);
Tst t4 (
t1[3] * t3[1] + t1[4] * t3[2] + t1[5] * t3[3],
t1[0] * t3[0] + t1[3] * t3[2] - t1[4] * t3[1],
t1[1] * t3[0] + t1[3] * t3[3] - t1[5] * t3[1],
t1[2] * t3[0] + t1[4] * t3[3] - t1[5] * t3[2],
t1[0] * t3[2] + t1[1] * t3[3],
 - t1[0] * t3[1] + t1[2] * t3[3],
 - t1[1] * t3[1] - t1[2] * t3[2],
t1[3] * t3[0],
t1[4] * t3[0],
t1[5] * t3[0],
t1[3] * t3[1] + t1[4] * t3[2] + t1[5] * t3[3],
t1[3] * t3[2] - t1[4] * t3[1],
t1[3] * t3[3] - t1[5] * t3[1],
t1[4] * t3[3] - t1[5] * t3[2],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Trv (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5],
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0]
);

}
		
	
	  	
template<>
inline Trv re (const Trv& trv, const Lin& lin) {					
					
const Lin& t1 = lin;
const Trv& t2 = trv;
Trv t3 = involute( t2);
Par_Afp t4 (
t1[0] * t3[2] + t1[1] * t3[3],
 - t1[0] * t3[1] + t1[2] * t3[3],
 - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[3] * t3[1] - t1[4] * t3[2] - t1[5] * t3[3],
 - t1[3] * t3[2] + t1[4] * t3[1],
 - t1[3] * t3[3] + t1[5] * t3[1],
 - t1[4] * t3[3] + t1[5] * t3[2],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[2] + t1[1] * t3[3] + t1[3] * t3[0],
 - t1[0] * t3[1] + t1[2] * t3[3] + t1[4] * t3[0],
 - t1[1] * t3[1] - t1[2] * t3[2] + t1[5] * t3[0],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Trv (
t4[4] * t6[0] + t4[5] * t6[1] + t4[6] * t6[2] + t4[10] * t6[3] + t4[11] * t6[4] + t4[12] * t6[5],
 - t4[3] * t6[3] - t4[4] * t6[4] - t4[5] * t6[5],
 - t4[3] * t6[4] + t4[4] * t6[3] - t4[6] * t6[5],
 - t4[3] * t6[5] + t4[5] * t6[3] + t4[6] * t6[4]
);

}
		
	
	  	
template<>
inline Trv re (const Trv& trv, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Trv& t2 = trv;
Trv t3 = involute( t2);
Pnt_Dap t4 (
t1[0] * t3[0] + t1[4] * t3[1],
t1[1] * t3[0] + t1[4] * t3[2],
t1[2] * t3[0] + t1[4] * t3[3],
t1[0] * t3[1] + t1[1] * t3[2] + t1[2] * t3[3] + t1[3] * t3[0],
t1[4] * t3[0],
t1[0] * t3[2] - t1[1] * t3[1],
t1[0] * t3[3] - t1[2] * t3[1],
t1[1] * t3[3] - t1[2] * t3[2],
t1[4] * t3[1],
t1[4] * t3[2],
t1[4] * t3[3]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Trv (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] - t4[4] * t6[3],
t4[0] * t6[3] - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] - t4[8] * t6[3],
t4[1] * t6[3] - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2] - t4[9] * t6[3],
t4[2] * t6[3] - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1] - t4[10] * t6[3]
);

}
		
	
	  	
template<>
inline Trv re (const Trv& trv, const Par& par) {					
					
const Par& t1 = par;
const Trv& t2 = trv;
Trv t3 = involute( t2);
Tst t4 (
t1[6] * t3[1] + t1[7] * t3[2] + t1[8] * t3[3],
t1[0] * t3[0] + t1[6] * t3[2] - t1[7] * t3[1],
t1[1] * t3[0] + t1[6] * t3[3] - t1[8] * t3[1],
t1[2] * t3[0] + t1[7] * t3[3] - t1[8] * t3[2],
t1[0] * t3[2] + t1[1] * t3[3] + t1[3] * t3[0] - t1[9] * t3[1],
 - t1[0] * t3[1] + t1[2] * t3[3] + t1[4] * t3[0] - t1[9] * t3[2],
 - t1[1] * t3[1] - t1[2] * t3[2] + t1[5] * t3[0] - t1[9] * t3[3],
t1[6] * t3[0],
t1[7] * t3[0],
t1[8] * t3[0],
t1[6] * t3[1] + t1[7] * t3[2] + t1[8] * t3[3] + t1[9] * t3[0],
t1[6] * t3[2] - t1[7] * t3[1],
t1[6] * t3[3] - t1[8] * t3[1],
t1[7] * t3[3] - t1[8] * t3[2],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Trv (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[6] + t4[5] * t6[7] + t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] + t4[10] * t6[9],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[4] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[10] * t6[3] - t4[11] * t6[4] - t4[12] * t6[5] - t4[14] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] + t4[5] * t6[9] - t4[6] * t6[2] - t4[10] * t6[4] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] + t4[6] * t6[9] - t4[10] * t6[5] + t4[12] * t6[3] + t4[13] * t6[4] - t4[14] * t6[0]
);

}
		
	
	  	
template<>
inline Trv re (const Trv& trv, const Cir& cir) {					
					
const Cir& t1 = cir;
const Trv& t2 = trv;
Trv t3 = involute( t2);
Par_Afp t4 (
t1[3] * t3[2] + t1[4] * t3[3],
 - t1[3] * t3[1] + t1[5] * t3[3],
 - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[6] * t3[1] - t1[7] * t3[2] - t1[8] * t3[3],
t1[0] * t3[0] - t1[6] * t3[2] + t1[7] * t3[1] + t1[9] * t3[3],
t1[1] * t3[0] - t1[6] * t3[3] + t1[8] * t3[1] - t1[9] * t3[2],
t1[2] * t3[0] - t1[7] * t3[3] + t1[8] * t3[2] + t1[9] * t3[1],
t1[3] * t3[0],
t1[4] * t3[0],
t1[5] * t3[0],
t1[3] * t3[2] + t1[4] * t3[3] + t1[6] * t3[0],
 - t1[3] * t3[1] + t1[5] * t3[3] + t1[7] * t3[0],
 - t1[4] * t3[1] - t1[5] * t3[2] + t1[8] * t3[0],
t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1] + t1[9] * t3[0],
t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Trv (
t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5] + t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2] + t4[10] * t6[6] + t4[11] * t6[7] + t4[12] * t6[8] - t4[13] * t6[9],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[6] - t4[4] * t6[7] - t4[5] * t6[8] + t4[6] * t6[9] + t4[11] * t6[0] + t4[12] * t6[1] - t4[13] * t6[2] + t4[14] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[3] * t6[7] + t4[4] * t6[6] - t4[5] * t6[9] - t4[6] * t6[8] - t4[10] * t6[0] + t4[12] * t6[2] + t4[13] * t6[1] - t4[14] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[8] + t4[4] * t6[9] + t4[5] * t6[6] + t4[6] * t6[7] - t4[10] * t6[1] - t4[11] * t6[2] - t4[13] * t6[0] + t4[14] * t6[0]
);

}
		
	
	  	
template<>
inline Trv re (const Trv& trv, const Sph& sph) {					
					
const Sph& t1 = sph;
const Trv& t2 = trv;
Trv t3 = involute( t2);
Pnt_Afp t4 (
t1[4] * t3[3],
 - t1[4] * t3[2],
t1[4] * t3[1],
 - t1[0] * t3[2] - t1[1] * t3[3],
t1[0] * t3[1] - t1[2] * t3[3],
t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[0] + t1[4] * t3[3],
t1[1] * t3[0] - t1[4] * t3[2],
t1[2] * t3[0] + t1[4] * t3[1],
 - t1[0] * t3[3] + t1[1] * t3[2] - t1[2] * t3[1] + t1[3] * t3[0],
t1[4] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Trv (
 - t4[6] * t6[0] - t4[7] * t6[1] - t4[8] * t6[2] - t4[9] * t6[4] - t4[10] * t6[3],
 - t4[2] * t6[3] - t4[4] * t6[0] - t4[5] * t6[1] + t4[8] * t6[3] - t4[9] * t6[2],
t4[1] * t6[3] + t4[3] * t6[0] - t4[5] * t6[2] - t4[7] * t6[3] + t4[9] * t6[1],
 - t4[0] * t6[3] + t4[3] * t6[1] + t4[4] * t6[2] + t4[6] * t6[3] - t4[9] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	