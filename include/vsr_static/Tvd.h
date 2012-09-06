		#ifndef TVD_H_INCLUDED
		#define TVD_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Tvd gp (const Tvd& a, const Sca& b) { 
	return Tvd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Sca*)(&b));
}			
		 
inline Ori gp (const Tvd& a, const Ori& b) { 
	return Ori (
a[0] * b[0] - a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Ori*)(&b));
}			
		 
inline Inf_Dap gp (const Tvd& a, const Inf& b) { 
	return Inf_Dap (
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
a[0] * b[0] + a[4] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Inf*)(&b));
}			
		 
inline Tvd gp (const Tvd& a, const Mnk& b) { 
	return Tvd (
a[4] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Flp gp (const Tvd& a, const Hyp& b) { 
	return Hyp_Flp (
 - a[1] * b[1],
 - a[2] * b[1],
 - a[3] * b[1],
a[0] * b[0] - a[4] * b[0],
a[0] * b[1] + a[4] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Hyp*)(&b));
}			
		 
inline Ori_Sph gp (const Tvd& a, const Pss& b) { 
	return Ori_Sph (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[4] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Pss*)(&b));
}			
		 
inline Pnt_Dap gp (const Tvd& a, const Pnt& b) { 
	return Pnt_Dap (
a[0] * b[0] - a[1] * b[4],
a[0] * b[1] - a[2] * b[4],
a[0] * b[2] - a[3] * b[4],
a[0] * b[3] - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[4] * b[3],
a[0] * b[4] + a[4] * b[4],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
a[1] * b[4] + a[4] * b[0],
a[2] * b[4] + a[4] * b[1],
a[3] * b[4] + a[4] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Pnt*)(&b));
}			
		 
inline Tst gp (const Tvd& a, const Par& b) { 
	return Tst (
a[1] * b[6] + a[2] * b[7] + a[3] * b[8] + a[4] * b[9],
a[0] * b[0] + a[1] * b[7] - a[2] * b[6],
a[0] * b[1] + a[1] * b[8] - a[3] * b[6],
a[0] * b[2] + a[2] * b[8] - a[3] * b[7],
a[0] * b[3] + a[1] * b[9] - a[2] * b[0] - a[3] * b[1] - a[4] * b[3],
a[0] * b[4] + a[1] * b[0] + a[2] * b[9] - a[3] * b[2] - a[4] * b[4],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2] + a[3] * b[9] - a[4] * b[5],
a[0] * b[6] + a[4] * b[6],
a[0] * b[7] + a[4] * b[7],
a[0] * b[8] + a[4] * b[8],
a[0] * b[9] - a[1] * b[6] - a[2] * b[7] - a[3] * b[8],
 - a[1] * b[7] + a[2] * b[6] + a[4] * b[0],
 - a[1] * b[8] + a[3] * b[6] + a[4] * b[1],
 - a[2] * b[8] + a[3] * b[7] + a[4] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Par*)(&b));
}			
		 
inline Par_Afp gp (const Tvd& a, const Cir& b) { 
	return Par_Afp (
a[2] * b[3] + a[3] * b[4] + a[4] * b[6],
 - a[1] * b[3] + a[3] * b[5] + a[4] * b[7],
 - a[1] * b[4] - a[2] * b[5] + a[4] * b[8],
 - a[1] * b[6] - a[2] * b[7] - a[3] * b[8],
a[0] * b[0] - a[1] * b[7] + a[2] * b[6] - a[3] * b[9] - a[4] * b[0],
a[0] * b[1] - a[1] * b[8] + a[2] * b[9] + a[3] * b[6] - a[4] * b[1],
a[0] * b[2] - a[1] * b[9] - a[2] * b[8] + a[3] * b[7] - a[4] * b[2],
a[0] * b[3] + a[4] * b[3],
a[0] * b[4] + a[4] * b[4],
a[0] * b[5] + a[4] * b[5],
a[0] * b[6] - a[2] * b[3] - a[3] * b[4],
a[0] * b[7] + a[1] * b[3] - a[3] * b[5],
a[0] * b[8] + a[1] * b[4] + a[2] * b[5],
a[0] * b[9] - a[1] * b[5] + a[2] * b[4] - a[3] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt_Afp gp (const Tvd& a, const Sph& b) { 
	return Pnt_Afp (
a[3] * b[4] + a[4] * b[0],
 - a[2] * b[4] + a[4] * b[1],
a[1] * b[4] + a[4] * b[2],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0] - a[3] * b[4],
a[0] * b[1] + a[2] * b[4],
a[0] * b[2] - a[1] * b[4],
a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[4] * b[3],
a[0] * b[4] + a[4] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Sph*)(&b));
}			
		 
inline Tst gp (const Tvd& a, const Sta& b) { 
	return Tst (
a[1] * b[6] + a[2] * b[7] + a[3] * b[8],
a[0] * b[0] + a[1] * b[7] - a[2] * b[6],
a[0] * b[1] + a[1] * b[8] - a[3] * b[6],
a[0] * b[2] + a[2] * b[8] - a[3] * b[7],
a[0] * b[3] - a[2] * b[0] - a[3] * b[1] - a[4] * b[3],
a[0] * b[4] + a[1] * b[0] - a[3] * b[2] - a[4] * b[4],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2] - a[4] * b[5],
a[0] * b[6] + a[4] * b[6],
a[0] * b[7] + a[4] * b[7],
a[0] * b[8] + a[4] * b[8],
 - a[1] * b[6] - a[2] * b[7] - a[3] * b[8],
 - a[1] * b[7] + a[2] * b[6] + a[4] * b[0],
 - a[1] * b[8] + a[3] * b[6] + a[4] * b[1],
 - a[2] * b[8] + a[3] * b[7] + a[4] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Sta*)(&b));
}			
		 
inline Drv_Dap gp (const Tvd& a, const Drv& b) { 
	return Drv_Dap (
a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1],
a[0] * b[0] + a[4] * b[0],
a[0] * b[1] + a[4] * b[1],
a[0] * b[2] + a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Drv*)(&b));
}			
		 
inline Drv_Afp gp (const Tvd& a, const Drb& b) { 
	return Drv_Afp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] + a[4] * b[0],
a[0] * b[1] + a[4] * b[1],
a[0] * b[2] + a[4] * b[2],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Drb*)(&b));
}			
		 
inline Inf_Afp gp (const Tvd& a, const Drt& b) { 
	return Inf_Afp (
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0] + a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Drt*)(&b));
}			
		 
inline Tnv gp (const Tvd& a, const Tnv& b) { 
	return Tnv (
a[0] * b[0] - a[4] * b[0],
a[0] * b[1] - a[4] * b[1],
a[0] * b[2] - a[4] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnb gp (const Tvd& a, const Tnb& b) { 
	return Tnb (
a[0] * b[0] - a[4] * b[0],
a[0] * b[1] - a[4] * b[1],
a[0] * b[2] - a[4] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnt gp (const Tvd& a, const Tnt& b) { 
	return Tnt (
a[0] * b[0] - a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Tnt*)(&b));
}			
		 
inline Par_Afp gp (const Tvd& a, const Lin& b) { 
	return Par_Afp (
a[2] * b[0] + a[3] * b[1] + a[4] * b[3],
 - a[1] * b[0] + a[3] * b[2] + a[4] * b[4],
 - a[1] * b[1] - a[2] * b[2] + a[4] * b[5],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5],
 - a[1] * b[4] + a[2] * b[3],
 - a[1] * b[5] + a[3] * b[3],
 - a[2] * b[5] + a[3] * b[4],
a[0] * b[0] + a[4] * b[0],
a[0] * b[1] + a[4] * b[1],
a[0] * b[2] + a[4] * b[2],
a[0] * b[3] - a[2] * b[0] - a[3] * b[1],
a[0] * b[4] + a[1] * b[0] - a[3] * b[2],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Lin*)(&b));
}			
		 
inline Pnt_Afp gp (const Tvd& a, const Pln& b) { 
	return Pnt_Afp (
a[3] * b[3] + a[4] * b[0],
 - a[2] * b[3] + a[4] * b[1],
a[1] * b[3] + a[4] * b[2],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0] - a[3] * b[3],
a[0] * b[1] + a[2] * b[3],
a[0] * b[2] - a[1] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[0] * b[3] + a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Pln*)(&b));
}			
		 
inline Trt gp (const Tvd& a, const Flp& b) { 
	return Trt (
a[1] * b[0] + a[2] * b[1] + a[3] * b[2] + a[4] * b[3],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[0] * b[0] + a[4] * b[0],
a[0] * b[1] + a[4] * b[1],
a[0] * b[2] + a[4] * b[2],
a[0] * b[3] - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Flp*)(&b));
}			
		 
inline Flp_Afp gp (const Tvd& a, const Dfp& b) { 
	return Flp_Afp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[0] + a[4] * b[0],
a[0] * b[1] + a[4] * b[1],
a[0] * b[2] + a[4] * b[2],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Dfp*)(&b));
}			
		 
inline Tst gp (const Tvd& a, const Dll& b) { 
	return Tst (
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[0] * b[0] + a[1] * b[4] - a[2] * b[3],
a[0] * b[1] + a[1] * b[5] - a[3] * b[3],
a[0] * b[2] + a[2] * b[5] - a[3] * b[4],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[0] * b[3] + a[4] * b[3],
a[0] * b[4] + a[4] * b[4],
a[0] * b[5] + a[4] * b[5],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5],
 - a[1] * b[4] + a[2] * b[3] + a[4] * b[0],
 - a[1] * b[5] + a[3] * b[3] + a[4] * b[1],
 - a[2] * b[5] + a[3] * b[4] + a[4] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Dll*)(&b));
}			
		 
inline Pnt_Dap gp (const Tvd& a, const Dlp& b) { 
	return Pnt_Dap (
a[0] * b[0] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[0] * b[2] - a[3] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[3] + a[4] * b[3],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
a[1] * b[3] + a[4] * b[0],
a[2] * b[3] + a[4] * b[1],
a[3] * b[3] + a[4] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Dlp*)(&b));
}			
		 
inline Ori_Par gp (const Tvd& a, const Vec& b) { 
	return Ori_Par (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Vec*)(&b));
}			
		 
inline Ori_Cir gp (const Tvd& a, const Biv& b) { 
	return Ori_Cir (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Biv*)(&b));
}			
		 
inline Ori_Sph gp (const Tvd& a, const Tri& b) { 
	return Ori_Sph (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Tri*)(&b));
}			
		 
inline Ori_Par gp (const Tvd& a, const Aff& b) { 
	return Ori_Par (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[4] * b[3],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Aff*)(&b));
}			
		 
inline Ori_Cir gp (const Tvd& a, const Afl& b) { 
	return Ori_Cir (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[2] * b[0] - a[3] * b[1] - a[4] * b[3],
a[0] * b[4] + a[1] * b[0] - a[3] * b[2] - a[4] * b[4],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2] - a[4] * b[5],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Afl*)(&b));
}			
		 
inline Ori_Sph gp (const Tvd& a, const Afp& b) { 
	return Ori_Sph (
a[0] * b[0] - a[3] * b[3] - a[4] * b[0],
a[0] * b[1] + a[2] * b[3] - a[4] * b[1],
a[0] * b[2] - a[1] * b[3] - a[4] * b[2],
a[0] * b[3],
a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Afp*)(&b));
}			
		 
inline Tvd gp (const Tvd& a, const Dap& b) { 
	return Tvd (
a[4] * b[3],
a[0] * b[0] + a[1] * b[3] - a[4] * b[0],
a[0] * b[1] + a[2] * b[3] - a[4] * b[1],
a[0] * b[2] + a[3] * b[3] - a[4] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Dap*)(&b));
}			
		 
inline Ori_Cir gp (const Tvd& a, const Daf& b) { 
	return Ori_Cir (
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Daf*)(&b));
}			
		 
inline Ori_Par gp (const Tvd& a, const Dal& b) { 
	return Ori_Par (
a[4] * b[3],
a[4] * b[4],
a[4] * b[5],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5],
a[0] * b[0] - a[1] * b[4] + a[2] * b[3] - a[4] * b[0],
a[0] * b[1] - a[1] * b[5] + a[3] * b[3] - a[4] * b[1],
a[0] * b[2] - a[2] * b[5] + a[3] * b[4] - a[4] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Dal*)(&b));
}			
		 
inline Ori_Par gp (const Tvd& a, const Mnv& b) { 
	return Ori_Par (
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Mnv*)(&b));
}			
		 
inline Rvd gp (const Tvd& a, const Rot& b) { 
	return Rvd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[4] * b[3],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Rot*)(&b));
}			
		 
inline Mtt gp (const Tvd& a, const Mot& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[7],
a[0] * b[2] + a[1] * b[6] - a[2] * b[7] - a[3] * b[4],
a[0] * b[3] + a[1] * b[7] + a[2] * b[6] - a[3] * b[5],
a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[0] * b[4] + a[4] * b[4],
a[0] * b[5] + a[4] * b[5],
a[0] * b[6] + a[4] * b[6],
 - a[1] * b[4] - a[2] * b[5] - a[3] * b[6] + a[4] * b[0],
 - a[1] * b[5] + a[2] * b[4] - a[3] * b[7] + a[4] * b[1],
 - a[1] * b[6] + a[2] * b[7] + a[3] * b[4] + a[4] * b[2],
 - a[1] * b[7] - a[2] * b[6] + a[3] * b[5] + a[4] * b[3],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1],
a[0] * b[7] + a[4] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Mot*)(&b));
}			
		 
inline Tvd gp (const Tvd& a, const Dil& b) { 
	return Tvd (
a[0] * b[0] + a[4] * b[1],
a[1] * b[0] + a[1] * b[1],
a[2] * b[0] + a[2] * b[1],
a[3] * b[0] + a[3] * b[1],
a[0] * b[1] + a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Dil*)(&b));
}			
		 
inline Tvd gp (const Tvd& a, const Trv& b) { 
	return Tvd (
a[0] * b[0],
a[0] * b[1] + a[1] * b[0] - a[4] * b[1],
a[0] * b[2] + a[2] * b[0] - a[4] * b[2],
a[0] * b[3] + a[3] * b[0] - a[4] * b[3],
a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Trv*)(&b));
}			
		 
inline Mtt gp (const Tvd& a, const Mtd& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[7],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[11] + a[4] * b[8],
a[0] * b[2] + a[1] * b[6] - a[2] * b[11] - a[3] * b[4] + a[4] * b[9],
a[0] * b[3] + a[1] * b[11] + a[2] * b[6] - a[3] * b[5] + a[4] * b[10],
a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8] - a[3] * b[2] - a[3] * b[9],
a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7] - a[3] * b[3] - a[3] * b[10],
a[1] * b[2] + a[1] * b[9] + a[2] * b[3] + a[2] * b[10] + a[3] * b[0] + a[3] * b[7],
a[0] * b[4] + a[4] * b[4],
a[0] * b[5] + a[4] * b[5],
a[0] * b[6] + a[4] * b[6],
a[0] * b[7] - a[1] * b[4] - a[2] * b[5] - a[3] * b[6] + a[4] * b[0],
a[0] * b[8] - a[1] * b[5] + a[2] * b[4] - a[3] * b[11] + a[4] * b[1],
a[0] * b[9] - a[1] * b[6] + a[2] * b[11] + a[3] * b[4] + a[4] * b[2],
a[0] * b[10] - a[1] * b[11] - a[2] * b[6] + a[3] * b[5] + a[4] * b[3],
a[1] * b[3] + a[1] * b[10] - a[2] * b[2] - a[2] * b[9] + a[3] * b[1] + a[3] * b[8],
a[0] * b[11] + a[4] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Mtd*)(&b));
}			
		 
inline Trt gp (const Tvd& a, const Trs& b) { 
	return Trt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1] + a[4] * b[1],
a[0] * b[2] + a[4] * b[2],
a[0] * b[3] + a[4] * b[3],
 - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] + a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Tvd& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[4] + a[2] * b[8] + a[3] * b[9] + a[4] * b[11],
a[0] * b[1] - a[1] * b[8] - a[2] * b[4] + a[3] * b[10] + a[4] * b[12],
a[0] * b[2] - a[1] * b[9] - a[2] * b[10] - a[3] * b[4] + a[4] * b[13],
a[0] * b[3] - a[1] * b[0] - a[1] * b[11] - a[2] * b[1] - a[2] * b[12] - a[3] * b[2] - a[3] * b[13] - a[4] * b[3],
a[0] * b[4] + a[4] * b[4],
a[0] * b[5] - a[1] * b[1] - a[1] * b[12] + a[2] * b[0] + a[2] * b[11] - a[3] * b[14] - a[3] * b[15] - a[4] * b[5],
a[0] * b[6] - a[1] * b[2] - a[1] * b[13] + a[2] * b[14] + a[2] * b[15] + a[3] * b[0] + a[3] * b[11] - a[4] * b[6],
a[0] * b[7] - a[1] * b[14] - a[1] * b[15] - a[2] * b[2] - a[2] * b[13] + a[3] * b[1] + a[3] * b[12] - a[4] * b[7],
a[0] * b[8] + a[4] * b[8],
a[0] * b[9] + a[4] * b[9],
a[0] * b[10] + a[4] * b[10],
a[0] * b[11] + a[1] * b[4] - a[2] * b[8] - a[3] * b[9] + a[4] * b[0],
a[0] * b[12] + a[1] * b[8] + a[2] * b[4] - a[3] * b[10] + a[4] * b[1],
a[0] * b[13] + a[1] * b[9] + a[2] * b[10] + a[3] * b[4] + a[4] * b[2],
a[0] * b[14] - a[1] * b[10] + a[2] * b[9] - a[3] * b[8] + a[4] * b[15],
a[0] * b[15] + a[1] * b[10] - a[2] * b[9] + a[3] * b[8] + a[4] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Tvd& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9] + a[4] * b[10],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7] + a[3] * b[15] + a[4] * b[11],
a[0] * b[2] + a[1] * b[9] - a[2] * b[15] - a[3] * b[7] + a[4] * b[12],
a[0] * b[3] + a[1] * b[15] + a[2] * b[9] - a[3] * b[8] + a[4] * b[13],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[2] - a[3] * b[12] - a[4] * b[4],
a[0] * b[5] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3] - a[3] * b[13] - a[4] * b[5],
a[0] * b[6] + a[1] * b[2] + a[1] * b[12] + a[2] * b[3] + a[2] * b[13] + a[3] * b[0] + a[3] * b[10] - a[4] * b[6],
a[0] * b[7] + a[4] * b[7],
a[0] * b[8] + a[4] * b[8],
a[0] * b[9] + a[4] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9] + a[4] * b[0],
a[0] * b[11] - a[1] * b[8] + a[2] * b[7] - a[3] * b[15] + a[4] * b[1],
a[0] * b[12] - a[1] * b[9] + a[2] * b[15] + a[3] * b[7] + a[4] * b[2],
a[0] * b[13] - a[1] * b[15] - a[2] * b[9] + a[3] * b[8] + a[4] * b[3],
a[0] * b[14] + a[1] * b[3] + a[1] * b[13] - a[2] * b[2] - a[2] * b[12] + a[3] * b[1] + a[3] * b[11] - a[4] * b[14],
a[0] * b[15] + a[4] * b[15]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Mtt*)(&b));
}			
		 
inline Rvd gp (const Tvd& a, const Rtt& b) { 
	return Rvd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4] + a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[4] * b[4],
a[0] * b[5] + a[1] * b[1] + a[2] * b[0] - a[3] * b[3] - a[4] * b[5],
a[0] * b[6] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0] - a[4] * b[6],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[4] * b[3],
a[0] * b[7] + a[1] * b[3] - a[2] * b[2] + a[3] * b[1] - a[4] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Rtt*)(&b));
}			
		 
inline Rvd gp (const Tvd& a, const Rtd& b) { 
	return Rvd (
a[0] * b[0] + a[4] * b[4],
a[0] * b[1] + a[4] * b[5],
a[0] * b[2] + a[4] * b[6],
a[0] * b[3] + a[4] * b[7],
a[1] * b[0] + a[1] * b[4] - a[2] * b[1] - a[2] * b[5] - a[3] * b[2] - a[3] * b[6],
a[1] * b[1] + a[1] * b[5] + a[2] * b[0] + a[2] * b[4] - a[3] * b[3] - a[3] * b[7],
a[1] * b[2] + a[1] * b[6] + a[2] * b[3] + a[2] * b[7] + a[3] * b[0] + a[3] * b[4],
a[0] * b[4] + a[4] * b[0],
a[0] * b[5] + a[4] * b[1],
a[0] * b[6] + a[4] * b[2],
a[0] * b[7] + a[4] * b[3],
a[1] * b[3] + a[1] * b[7] - a[2] * b[2] - a[2] * b[6] + a[3] * b[1] + a[3] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Rtd*)(&b));
}			
		 
inline Tvd gp (const Tvd& a, const Tvd& b) { 
	return Tvd (
a[0] * b[0] + a[4] * b[4],
a[0] * b[1] + a[1] * b[0] + a[1] * b[4] - a[4] * b[1],
a[0] * b[2] + a[2] * b[0] + a[2] * b[4] - a[4] * b[2],
a[0] * b[3] + a[3] * b[0] + a[3] * b[4] - a[4] * b[3],
a[0] * b[4] + a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Tvd*)(&b));
}			
		 
inline Trt gp (const Tvd& a, const Tsd& b) { 
	return Trt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3] + a[4] * b[4],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4],
a[3] * b[0] + a[3] * b[4],
a[0] * b[1] + a[4] * b[1],
a[0] * b[2] + a[4] * b[2],
a[0] * b[3] + a[4] * b[3],
a[0] * b[4] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] + a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Tsd*)(&b));
}			
		 
inline Tst gp (const Tvd& a, const Trt& b) { 
	return Tst (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9] + a[4] * b[10],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7] + a[4] * b[11],
a[0] * b[2] + a[1] * b[9] - a[3] * b[7] + a[4] * b[12],
a[0] * b[3] + a[2] * b[9] - a[3] * b[8] + a[4] * b[13],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[2] - a[3] * b[12] - a[4] * b[4],
a[0] * b[5] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3] - a[3] * b[13] - a[4] * b[5],
a[0] * b[6] + a[1] * b[2] + a[1] * b[12] + a[2] * b[3] + a[2] * b[13] + a[3] * b[0] + a[3] * b[10] - a[4] * b[6],
a[0] * b[7] + a[4] * b[7],
a[0] * b[8] + a[4] * b[8],
a[0] * b[9] + a[4] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9] + a[4] * b[0],
a[0] * b[11] - a[1] * b[8] + a[2] * b[7] + a[4] * b[1],
a[0] * b[12] - a[1] * b[9] + a[3] * b[7] + a[4] * b[2],
a[0] * b[13] - a[2] * b[9] + a[3] * b[8] + a[4] * b[3],
a[1] * b[3] + a[1] * b[13] - a[2] * b[2] - a[2] * b[12] + a[3] * b[1] + a[3] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Trt*)(&b));
}			
		 
inline Rvd gp (const Tvd& a, const Rvd& b) { 
	return Rvd (
a[0] * b[0] + a[4] * b[7],
a[0] * b[1] + a[4] * b[8],
a[0] * b[2] + a[4] * b[9],
a[0] * b[3] + a[4] * b[10],
a[0] * b[4] + a[1] * b[0] + a[1] * b[7] - a[2] * b[1] - a[2] * b[8] - a[3] * b[2] - a[3] * b[9] - a[4] * b[4],
a[0] * b[5] + a[1] * b[1] + a[1] * b[8] + a[2] * b[0] + a[2] * b[7] - a[3] * b[3] - a[3] * b[10] - a[4] * b[5],
a[0] * b[6] + a[1] * b[2] + a[1] * b[9] + a[2] * b[3] + a[2] * b[10] + a[3] * b[0] + a[3] * b[7] - a[4] * b[6],
a[0] * b[7] + a[4] * b[0],
a[0] * b[8] + a[4] * b[1],
a[0] * b[9] + a[4] * b[2],
a[0] * b[10] + a[4] * b[3],
a[0] * b[11] + a[1] * b[3] + a[1] * b[10] - a[2] * b[2] - a[2] * b[9] + a[3] * b[1] + a[3] * b[8] - a[4] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Rvd*)(&b));
}			
		 
inline Tst gp (const Tvd& a, const Tst& b) { 
	return Tst (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9] + a[4] * b[10],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7] + a[4] * b[11],
a[0] * b[2] + a[1] * b[9] - a[3] * b[7] + a[4] * b[12],
a[0] * b[3] + a[2] * b[9] - a[3] * b[8] + a[4] * b[13],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[2] - a[3] * b[12] - a[4] * b[4],
a[0] * b[5] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3] - a[3] * b[13] - a[4] * b[5],
a[0] * b[6] + a[1] * b[2] + a[1] * b[12] + a[2] * b[3] + a[2] * b[13] + a[3] * b[0] + a[3] * b[10] - a[4] * b[6],
a[0] * b[7] + a[4] * b[7],
a[0] * b[8] + a[4] * b[8],
a[0] * b[9] + a[4] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9] + a[4] * b[0],
a[0] * b[11] - a[1] * b[8] + a[2] * b[7] + a[4] * b[1],
a[0] * b[12] - a[1] * b[9] + a[3] * b[7] + a[4] * b[2],
a[0] * b[13] - a[2] * b[9] + a[3] * b[8] + a[4] * b[3],
a[0] * b[14] + a[1] * b[3] + a[1] * b[13] - a[2] * b[2] - a[2] * b[12] + a[3] * b[1] + a[3] * b[11] - a[4] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Tvd& a, const Tvt& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9] + a[4] * b[10],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7] + a[3] * b[14] + a[4] * b[11],
a[0] * b[2] + a[1] * b[9] - a[2] * b[14] - a[3] * b[7] + a[4] * b[12],
a[0] * b[3] + a[1] * b[14] + a[2] * b[9] - a[3] * b[8] + a[4] * b[13],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[2] * b[11] - a[3] * b[2] - a[3] * b[12] - a[4] * b[4],
a[0] * b[5] + a[1] * b[1] + a[1] * b[11] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3] - a[3] * b[13] - a[4] * b[5],
a[0] * b[6] + a[1] * b[2] + a[1] * b[12] + a[2] * b[3] + a[2] * b[13] + a[3] * b[0] + a[3] * b[10] - a[4] * b[6],
a[0] * b[7] + a[4] * b[7],
a[0] * b[8] + a[4] * b[8],
a[0] * b[9] + a[4] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9] + a[4] * b[0],
a[0] * b[11] - a[1] * b[8] + a[2] * b[7] - a[3] * b[14] + a[4] * b[1],
a[0] * b[12] - a[1] * b[9] + a[2] * b[14] + a[3] * b[7] + a[4] * b[2],
a[0] * b[13] - a[1] * b[14] - a[2] * b[9] + a[3] * b[8] + a[4] * b[3],
a[1] * b[3] + a[1] * b[13] - a[2] * b[2] - a[2] * b[12] + a[3] * b[1] + a[3] * b[11],
a[0] * b[14] + a[4] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Tvt*)(&b));
}			
		 
inline Tst gp (const Tvd& a, const Bst& b) { 
	return Tst (
a[0] * b[0] + a[1] * b[7] + a[2] * b[8] + a[3] * b[9] + a[4] * b[10],
a[0] * b[1] + a[1] * b[8] - a[2] * b[7],
a[0] * b[2] + a[1] * b[9] - a[3] * b[7],
a[0] * b[3] + a[2] * b[9] - a[3] * b[8],
a[0] * b[4] + a[1] * b[0] + a[1] * b[10] - a[2] * b[1] - a[3] * b[2] - a[4] * b[4],
a[0] * b[5] + a[1] * b[1] + a[2] * b[0] + a[2] * b[10] - a[3] * b[3] - a[4] * b[5],
a[0] * b[6] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0] + a[3] * b[10] - a[4] * b[6],
a[0] * b[7] + a[4] * b[7],
a[0] * b[8] + a[4] * b[8],
a[0] * b[9] + a[4] * b[9],
a[0] * b[10] - a[1] * b[7] - a[2] * b[8] - a[3] * b[9] + a[4] * b[0],
 - a[1] * b[8] + a[2] * b[7] + a[4] * b[1],
 - a[1] * b[9] + a[3] * b[7] + a[4] * b[2],
 - a[2] * b[9] + a[3] * b[8] + a[4] * b[3],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tvd, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tvd*)(&a),*(Bst*)(&b));
}			
		 
inline Tvd ip (const Tvd& a, const Tvd& b) { 
	return Tvd (
a[0] * b[0] + a[4] * b[4],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4]
);
}			
		 
		
template<> inline MVBase ip_gen<Tvd, Tvd> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tvd*)(&a),*(Tvd*)(&b));
}			
		  	
template<>
inline Tvd sp (const Tvd& tvd, const Rot& rot) {					
					
const Rot& t1 = rot;
const Tvd& t2 = tvd;
Rvd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[4],
t1[1] * t2[4],
t1[2] * t2[4],
t1[3] * t2[4],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[11] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[11] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[11] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Mot& mot) {					
					
const Mot& t1 = mot;
const Tvd& t2 = tvd;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[7] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] - t1[7] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[7] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2],
t1[4] * t2[0] - t1[4] * t2[4],
t1[5] * t2[0] - t1[5] * t2[4],
t1[6] * t2[0] - t1[6] * t2[4],
t1[0] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[4] + t1[4] * t2[2] - t1[5] * t2[1] + t1[7] * t2[3],
t1[2] * t2[4] + t1[4] * t2[3] - t1[6] * t2[1] - t1[7] * t2[2],
t1[3] * t2[4] + t1[5] * t2[3] - t1[6] * t2[2] + t1[7] * t2[1],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1],
t1[7] * t2[0] - t1[7] * t2[4]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] - t3[14] * t5[7],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1],
 - t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[7]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Dil& dil) {					
					
const Dil& t1 = dil;
const Tvd& t2 = tvd;
Tvd t3 (
t1[0] * t2[0] + t1[1] * t2[4],
t1[0] * t2[1] - t1[1] * t2[1],
t1[0] * t2[2] - t1[1] * t2[2],
t1[0] * t2[3] - t1[1] * t2[3],
t1[0] * t2[4] + t1[1] * t2[0]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] + t3[1] * t5[1],
t3[2] * t5[0] + t3[2] * t5[1],
t3[3] * t5[0] + t3[3] * t5[1],
t3[0] * t5[1] + t3[4] * t5[0]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Trv& trv) {					
					
const Trv& t1 = trv;
const Tvd& t2 = tvd;
Tvd t3 (
t1[0] * t2[0],
t1[0] * t2[1] + t1[1] * t2[0] + t1[1] * t2[4],
t1[0] * t2[2] + t1[2] * t2[0] + t1[2] * t2[4],
t1[0] * t2[3] + t1[3] * t2[0] + t1[3] * t2[4],
t1[0] * t2[4]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Tvd (
t3[0] * t5[0],
t3[0] * t5[1] + t3[1] * t5[0] - t3[4] * t5[1],
t3[0] * t5[2] + t3[2] * t5[0] - t3[4] * t5[2],
t3[0] * t5[3] + t3[3] * t5[0] - t3[4] * t5[3],
t3[4] * t5[0]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Tvd& t2 = tvd;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3] + t1[7] * t2[4],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[8] * t2[4] + t1[11] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] + t1[9] * t2[4] - t1[11] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[10] * t2[4] + t1[11] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] - t1[7] * t2[1] - t1[8] * t2[2] - t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] - t1[7] * t2[2] + t1[8] * t2[1] - t1[10] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] - t1[7] * t2[3] + t1[9] * t2[1] + t1[10] * t2[2],
t1[4] * t2[0] - t1[4] * t2[4],
t1[5] * t2[0] - t1[5] * t2[4],
t1[6] * t2[0] - t1[6] * t2[4],
t1[0] * t2[4] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3] + t1[7] * t2[0],
t1[1] * t2[4] + t1[4] * t2[2] - t1[5] * t2[1] + t1[8] * t2[0] + t1[11] * t2[3],
t1[2] * t2[4] + t1[4] * t2[3] - t1[6] * t2[1] + t1[9] * t2[0] - t1[11] * t2[2],
t1[3] * t2[4] + t1[5] * t2[3] - t1[6] * t2[2] + t1[10] * t2[0] + t1[11] * t2[1],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[8] * t2[3] + t1[9] * t2[2] - t1[10] * t2[1],
t1[11] * t2[0] - t1[11] * t2[4]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] + t3[10] * t5[7] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] - t3[14] * t5[11],
t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[14] * t5[3] - t3[14] * t5[10],
t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[14] * t5[2] + t3[14] * t5[9],
t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[14] * t5[1] - t3[14] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] - t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Trs& trs) {					
					
const Trs& t1 = trs;
const Tvd& t2 = tvd;
Trt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[1] * t2[0] - t1[1] * t2[4],
t1[2] * t2[0] - t1[2] * t2[4],
t1[3] * t2[0] - t1[3] * t2[4],
t1[0] * t2[4] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3],
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0],
 - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Tvd& t2 = tvd;
Rtc t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[11] * t2[4],
t1[1] * t2[0] + t1[4] * t2[2] - t1[8] * t2[1] + t1[10] * t2[3] + t1[12] * t2[4],
t1[2] * t2[0] + t1[4] * t2[3] - t1[9] * t2[1] - t1[10] * t2[2] + t1[13] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0] + t1[3] * t2[4] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[4] * t2[0] - t1[4] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[5] * t2[0] + t1[5] * t2[4] - t1[11] * t2[2] + t1[12] * t2[1] + t1[14] * t2[3] - t1[15] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] + t1[6] * t2[0] + t1[6] * t2[4] - t1[11] * t2[3] + t1[13] * t2[1] - t1[14] * t2[2] + t1[15] * t2[2],
t1[1] * t2[3] - t1[2] * t2[2] + t1[7] * t2[0] + t1[7] * t2[4] - t1[12] * t2[3] + t1[13] * t2[2] + t1[14] * t2[1] - t1[15] * t2[1],
t1[8] * t2[0] - t1[8] * t2[4],
t1[9] * t2[0] - t1[9] * t2[4],
t1[10] * t2[0] - t1[10] * t2[4],
t1[0] * t2[4] + t1[4] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[11] * t2[0],
t1[1] * t2[4] + t1[4] * t2[2] - t1[8] * t2[1] + t1[10] * t2[3] + t1[12] * t2[0],
t1[2] * t2[4] + t1[4] * t2[3] - t1[9] * t2[1] - t1[10] * t2[2] + t1[13] * t2[0],
t1[8] * t2[3] - t1[9] * t2[2] + t1[10] * t2[1] + t1[14] * t2[0] + t1[15] * t2[4],
t1[8] * t2[3] - t1[9] * t2[2] + t1[10] * t2[1] + t1[14] * t2[4] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[0] - t3[3] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] + t3[7] * t5[14] + t3[7] * t5[15] - t3[11] * t5[3] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[7] * t5[2] - t3[7] * t5[13] - t3[11] * t5[5] - t3[12] * t5[3] + t3[13] * t5[7] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[2] - t3[3] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] + t3[7] * t5[1] + t3[7] * t5[12] - t3[11] * t5[6] - t3[12] * t5[7] - t3[13] * t5[3] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] + t3[3] * t5[4] - t3[4] * t5[3] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[0] + t3[12] * t5[1] + t3[13] * t5[2] - t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Tvd& t2 = tvd;
Mtt t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[4],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[4] + t1[15] * t2[3],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[4] - t1[15] * t2[2],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[4] + t1[15] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] + t1[4] * t2[4] - t1[10] * t2[1] - t1[11] * t2[2] - t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] + t1[5] * t2[4] - t1[10] * t2[2] + t1[11] * t2[1] - t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] + t1[6] * t2[4] - t1[10] * t2[3] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[0] - t1[7] * t2[4],
t1[8] * t2[0] - t1[8] * t2[4],
t1[9] * t2[0] - t1[9] * t2[4],
t1[0] * t2[4] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[1] * t2[4] + t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[0] + t1[15] * t2[3],
t1[2] * t2[4] + t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[0] - t1[15] * t2[2],
t1[3] * t2[4] + t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[0] + t1[15] * t2[1],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[11] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1] + t1[14] * t2[0] + t1[14] * t2[4],
t1[15] * t2[0] - t1[15] * t2[4]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Tvd& t2 = tvd;
Rvd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] + t1[4] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] + t1[5] * t2[4],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] + t1[6] * t2[4],
t1[0] * t2[4],
t1[1] * t2[4],
t1[2] * t2[4],
t1[3] * t2[4],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[0] + t1[7] * t2[4]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] + t3[10] * t5[7] - t3[11] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[6] + t3[8] * t5[7] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Tvd& t2 = tvd;
Rvd t3 (
t1[0] * t2[0] + t1[4] * t2[4],
t1[1] * t2[0] + t1[5] * t2[4],
t1[2] * t2[0] + t1[6] * t2[4],
t1[3] * t2[0] + t1[7] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[7] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[3] + t1[6] * t2[1] + t1[7] * t2[2],
t1[0] * t2[4] + t1[4] * t2[0],
t1[1] * t2[4] + t1[5] * t2[0],
t1[2] * t2[4] + t1[6] * t2[0],
t1[3] * t2[4] + t1[7] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[5] * t2[3] + t1[6] * t2[2] - t1[7] * t2[1]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[7],
t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[1] - t3[5] * t5[5] - t3[6] * t5[2] - t3[6] * t5[6] - t3[11] * t5[3] - t3[11] * t5[7],
t3[4] * t5[1] + t3[4] * t5[5] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[3] - t3[6] * t5[7] + t3[11] * t5[2] + t3[11] * t5[6],
t3[4] * t5[2] + t3[4] * t5[6] + t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[0] + t3[6] * t5[4] - t3[11] * t5[1] - t3[11] * t5[5],
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Tvd& t2 = tvd;
Trt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3] + t1[4] * t2[4],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2],
t1[0] * t2[3] - t1[4] * t2[3],
t1[1] * t2[0] - t1[1] * t2[4],
t1[2] * t2[0] - t1[2] * t2[4],
t1[3] * t2[0] - t1[3] * t2[4],
t1[0] * t2[4] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3] + t1[4] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3] + t3[10] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4],
t3[0] * t5[4] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Trt& trt) {					
					
const Trt& t1 = trt;
const Tvd& t2 = tvd;
Tst t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[4],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[4],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[4],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] + t1[4] * t2[4] - t1[10] * t2[1] - t1[11] * t2[2] - t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] + t1[5] * t2[4] - t1[10] * t2[2] + t1[11] * t2[1] - t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] + t1[6] * t2[4] - t1[10] * t2[3] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[0] - t1[7] * t2[4],
t1[8] * t2[0] - t1[8] * t2[4],
t1[9] * t2[0] - t1[9] * t2[4],
t1[0] * t2[4] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[1] * t2[4] + t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[0],
t1[2] * t2[4] + t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[0],
t1[3] * t2[4] + t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[11] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Tvd& t2 = tvd;
Rvd t3 (
t1[0] * t2[0] + t1[7] * t2[4],
t1[1] * t2[0] + t1[8] * t2[4],
t1[2] * t2[0] + t1[9] * t2[4],
t1[3] * t2[0] + t1[10] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] + t1[4] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2] - t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] + t1[5] * t2[4] - t1[7] * t2[2] + t1[8] * t2[1] - t1[10] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] + t1[6] * t2[4] - t1[7] * t2[3] + t1[9] * t2[1] + t1[10] * t2[2],
t1[0] * t2[4] + t1[7] * t2[0],
t1[1] * t2[4] + t1[8] * t2[0],
t1[2] * t2[4] + t1[9] * t2[0],
t1[3] * t2[4] + t1[10] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[8] * t2[3] + t1[9] * t2[2] - t1[10] * t2[1] + t1[11] * t2[0] + t1[11] * t2[4]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] + t3[10] * t5[11] - t3[11] * t5[3] - t3[11] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[11] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[7] * t5[6] + t3[8] * t5[11] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Tst& tst) {					
					
const Tst& t1 = tst;
const Tvd& t2 = tvd;
Tst t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[4],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[4],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[4],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] + t1[4] * t2[4] - t1[10] * t2[1] - t1[11] * t2[2] - t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] + t1[5] * t2[4] - t1[10] * t2[2] + t1[11] * t2[1] - t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] + t1[6] * t2[4] - t1[10] * t2[3] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[0] - t1[7] * t2[4],
t1[8] * t2[0] - t1[8] * t2[4],
t1[9] * t2[0] - t1[9] * t2[4],
t1[0] * t2[4] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[1] * t2[4] + t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[0],
t1[2] * t2[4] + t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[0],
t1[3] * t2[4] + t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[11] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1] + t1[14] * t2[0] + t1[14] * t2[4]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Tvd& t2 = tvd;
Mtt t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[4],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[4] + t1[14] * t2[3],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[4] - t1[14] * t2[2],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[4] + t1[14] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] + t1[4] * t2[4] - t1[10] * t2[1] - t1[11] * t2[2] - t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] + t1[5] * t2[4] - t1[10] * t2[2] + t1[11] * t2[1] - t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] + t1[6] * t2[4] - t1[10] * t2[3] + t1[12] * t2[1] + t1[13] * t2[2],
t1[7] * t2[0] - t1[7] * t2[4],
t1[8] * t2[0] - t1[8] * t2[4],
t1[9] * t2[0] - t1[9] * t2[4],
t1[0] * t2[4] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[1] * t2[4] + t1[7] * t2[2] - t1[8] * t2[1] + t1[11] * t2[0] + t1[14] * t2[3],
t1[2] * t2[4] + t1[7] * t2[3] - t1[9] * t2[1] + t1[12] * t2[0] - t1[14] * t2[2],
t1[3] * t2[4] + t1[8] * t2[3] - t1[9] * t2[2] + t1[13] * t2[0] + t1[14] * t2[1],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] - t1[11] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1],
t1[14] * t2[0] - t1[14] * t2[4]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[14],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[14]
);

}
		
	
	  	
template<>
inline Tvd sp (const Tvd& tvd, const Bst& bst) {					
					
const Bst& t1 = bst;
const Tvd& t2 = tvd;
Tst t3 (
t1[0] * t2[0] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[4],
t1[1] * t2[0] + t1[7] * t2[2] - t1[8] * t2[1],
t1[2] * t2[0] + t1[7] * t2[3] - t1[9] * t2[1],
t1[3] * t2[0] + t1[8] * t2[3] - t1[9] * t2[2],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] + t1[4] * t2[4] - t1[10] * t2[1],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] + t1[5] * t2[4] - t1[10] * t2[2],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] + t1[6] * t2[4] - t1[10] * t2[3],
t1[7] * t2[0] - t1[7] * t2[4],
t1[8] * t2[0] - t1[8] * t2[4],
t1[9] * t2[0] - t1[9] * t2[4],
t1[0] * t2[4] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3] + t1[10] * t2[0],
t1[1] * t2[4] + t1[7] * t2[2] - t1[8] * t2[1],
t1[2] * t2[4] + t1[7] * t2[3] - t1[9] * t2[1],
t1[3] * t2[4] + t1[8] * t2[3] - t1[9] * t2[2],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Tvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1],
t3[0] * t5[10] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Tvd re (const Tvd& tvd, const Vec& vec) {					
					
const Vec& t1 = vec;
const Tvd& t2 = tvd;
Tvd t3 = involute( t2);
Ori_Par t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2] + t1[2] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1],
t1[0] * t3[3] - t1[2] * t3[1],
t1[1] * t3[3] - t1[2] * t3[2],
t1[0] * t3[4],
t1[1] * t3[4],
t1[2] * t3[4]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Tvd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1],
t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2]
);

}
		
	
	  	
template<>
inline Tvd re (const Tvd& tvd, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Tvd& t2 = tvd;
Tvd t3 = involute( t2);
Pnt_Dap t4 (
t1[0] * t3[0] + t1[3] * t3[1],
t1[1] * t3[0] + t1[3] * t3[2],
t1[2] * t3[0] + t1[3] * t3[3],
t1[0] * t3[1] + t1[1] * t3[2] + t1[2] * t3[3],
t1[3] * t3[0] - t1[3] * t3[4],
t1[0] * t3[2] - t1[1] * t3[1],
t1[0] * t3[3] - t1[2] * t3[1],
t1[1] * t3[3] - t1[2] * t3[2],
t1[0] * t3[4] + t1[3] * t3[1],
t1[1] * t3[4] + t1[3] * t3[2],
t1[2] * t3[4] + t1[3] * t3[3]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Tvd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[3],
 - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2],
 - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1],
t4[3] * t6[3] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2]
);

}
		
	
	  	
template<>
inline Tvd re (const Tvd& tvd, const Pln& pln) {					
					
const Pln& t1 = pln;
const Tvd& t2 = tvd;
Tvd t3 = involute( t2);
Pnt_Afp t4 (
t1[0] * t3[4] + t1[3] * t3[3],
t1[1] * t3[4] - t1[3] * t3[2],
t1[2] * t3[4] + t1[3] * t3[1],
 - t1[0] * t3[2] - t1[1] * t3[3],
t1[0] * t3[1] - t1[2] * t3[3],
t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[0] + t1[3] * t3[3],
t1[1] * t3[0] - t1[3] * t3[2],
t1[2] * t3[0] + t1[3] * t3[1],
 - t1[0] * t3[3] + t1[1] * t3[2] - t1[2] * t3[1],
t1[3] * t3[0] - t1[3] * t3[4]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Tvd (
 - t4[6] * t6[0] - t4[7] * t6[1] - t4[8] * t6[2] - t4[9] * t6[3],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[9] * t6[2],
t4[3] * t6[0] - t4[5] * t6[2] + t4[9] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[9] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[9] * t6[3]
);

}
		
	
	  	
template<>
inline Tvd re (const Tvd& tvd, const Dll& dll) {					
					
const Dll& t1 = dll;
const Tvd& t2 = tvd;
Tvd t3 = involute( t2);
Tst t4 (
t1[3] * t3[1] + t1[4] * t3[2] + t1[5] * t3[3],
t1[0] * t3[0] + t1[3] * t3[2] - t1[4] * t3[1],
t1[1] * t3[0] + t1[3] * t3[3] - t1[5] * t3[1],
t1[2] * t3[0] + t1[4] * t3[3] - t1[5] * t3[2],
t1[0] * t3[2] + t1[1] * t3[3],
 - t1[0] * t3[1] + t1[2] * t3[3],
 - t1[1] * t3[1] - t1[2] * t3[2],
t1[3] * t3[0] - t1[3] * t3[4],
t1[4] * t3[0] - t1[4] * t3[4],
t1[5] * t3[0] - t1[5] * t3[4],
t1[3] * t3[1] + t1[4] * t3[2] + t1[5] * t3[3],
t1[0] * t3[4] + t1[3] * t3[2] - t1[4] * t3[1],
t1[1] * t3[4] + t1[3] * t3[3] - t1[5] * t3[1],
t1[2] * t3[4] + t1[4] * t3[3] - t1[5] * t3[2],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Tvd (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5],
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0],
 - t4[4] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Tvd re (const Tvd& tvd, const Lin& lin) {					
					
const Lin& t1 = lin;
const Tvd& t2 = tvd;
Tvd t3 = involute( t2);
Par_Afp t4 (
t1[0] * t3[2] + t1[1] * t3[3] + t1[3] * t3[4],
 - t1[0] * t3[1] + t1[2] * t3[3] + t1[4] * t3[4],
 - t1[1] * t3[1] - t1[2] * t3[2] + t1[5] * t3[4],
 - t1[3] * t3[1] - t1[4] * t3[2] - t1[5] * t3[3],
 - t1[3] * t3[2] + t1[4] * t3[1],
 - t1[3] * t3[3] + t1[5] * t3[1],
 - t1[4] * t3[3] + t1[5] * t3[2],
t1[0] * t3[0] - t1[0] * t3[4],
t1[1] * t3[0] - t1[1] * t3[4],
t1[2] * t3[0] - t1[2] * t3[4],
t1[0] * t3[2] + t1[1] * t3[3] + t1[3] * t3[0],
 - t1[0] * t3[1] + t1[2] * t3[3] + t1[4] * t3[0],
 - t1[1] * t3[1] - t1[2] * t3[2] + t1[5] * t3[0],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Tvd (
t4[4] * t6[0] + t4[5] * t6[1] + t4[6] * t6[2] + t4[10] * t6[3] + t4[11] * t6[4] + t4[12] * t6[5],
 - t4[3] * t6[3] - t4[4] * t6[4] - t4[5] * t6[5],
 - t4[3] * t6[4] + t4[4] * t6[3] - t4[6] * t6[5],
 - t4[3] * t6[5] + t4[5] * t6[3] + t4[6] * t6[4],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2]
);

}
		
	
	  	
template<>
inline Tvd re (const Tvd& tvd, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Tvd& t2 = tvd;
Tvd t3 = involute( t2);
Pnt_Dap t4 (
t1[0] * t3[0] + t1[4] * t3[1],
t1[1] * t3[0] + t1[4] * t3[2],
t1[2] * t3[0] + t1[4] * t3[3],
t1[0] * t3[1] + t1[1] * t3[2] + t1[2] * t3[3] + t1[3] * t3[0] + t1[3] * t3[4],
t1[4] * t3[0] - t1[4] * t3[4],
t1[0] * t3[2] - t1[1] * t3[1],
t1[0] * t3[3] - t1[2] * t3[1],
t1[1] * t3[3] - t1[2] * t3[2],
t1[0] * t3[4] + t1[4] * t3[1],
t1[1] * t3[4] + t1[4] * t3[2],
t1[2] * t3[4] + t1[4] * t3[3]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Tvd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] - t4[4] * t6[3],
t4[0] * t6[3] - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] - t4[8] * t6[3],
t4[1] * t6[3] - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2] - t4[9] * t6[3],
t4[2] * t6[3] - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1] - t4[10] * t6[3],
t4[3] * t6[4] - t4[4] * t6[3] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2]
);

}
		
	
	  	
template<>
inline Tvd re (const Tvd& tvd, const Par& par) {					
					
const Par& t1 = par;
const Tvd& t2 = tvd;
Tvd t3 = involute( t2);
Tst t4 (
t1[6] * t3[1] + t1[7] * t3[2] + t1[8] * t3[3] + t1[9] * t3[4],
t1[0] * t3[0] + t1[6] * t3[2] - t1[7] * t3[1],
t1[1] * t3[0] + t1[6] * t3[3] - t1[8] * t3[1],
t1[2] * t3[0] + t1[7] * t3[3] - t1[8] * t3[2],
t1[0] * t3[2] + t1[1] * t3[3] + t1[3] * t3[0] + t1[3] * t3[4] - t1[9] * t3[1],
 - t1[0] * t3[1] + t1[2] * t3[3] + t1[4] * t3[0] + t1[4] * t3[4] - t1[9] * t3[2],
 - t1[1] * t3[1] - t1[2] * t3[2] + t1[5] * t3[0] + t1[5] * t3[4] - t1[9] * t3[3],
t1[6] * t3[0] - t1[6] * t3[4],
t1[7] * t3[0] - t1[7] * t3[4],
t1[8] * t3[0] - t1[8] * t3[4],
t1[6] * t3[1] + t1[7] * t3[2] + t1[8] * t3[3] + t1[9] * t3[0],
t1[0] * t3[4] + t1[6] * t3[2] - t1[7] * t3[1],
t1[1] * t3[4] + t1[6] * t3[3] - t1[8] * t3[1],
t1[2] * t3[4] + t1[7] * t3[3] - t1[8] * t3[2],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Tvd (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[6] + t4[5] * t6[7] + t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] + t4[10] * t6[9],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[4] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[10] * t6[3] - t4[11] * t6[4] - t4[12] * t6[5] - t4[14] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] + t4[5] * t6[9] - t4[6] * t6[2] - t4[10] * t6[4] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] + t4[6] * t6[9] - t4[10] * t6[5] + t4[12] * t6[3] + t4[13] * t6[4] - t4[14] * t6[0],
t4[0] * t6[9] - t4[4] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Tvd re (const Tvd& tvd, const Cir& cir) {					
					
const Cir& t1 = cir;
const Tvd& t2 = tvd;
Tvd t3 = involute( t2);
Par_Afp t4 (
t1[3] * t3[2] + t1[4] * t3[3] + t1[6] * t3[4],
 - t1[3] * t3[1] + t1[5] * t3[3] + t1[7] * t3[4],
 - t1[4] * t3[1] - t1[5] * t3[2] + t1[8] * t3[4],
 - t1[6] * t3[1] - t1[7] * t3[2] - t1[8] * t3[3],
t1[0] * t3[0] + t1[0] * t3[4] - t1[6] * t3[2] + t1[7] * t3[1] + t1[9] * t3[3],
t1[1] * t3[0] + t1[1] * t3[4] - t1[6] * t3[3] + t1[8] * t3[1] - t1[9] * t3[2],
t1[2] * t3[0] + t1[2] * t3[4] - t1[7] * t3[3] + t1[8] * t3[2] + t1[9] * t3[1],
t1[3] * t3[0] - t1[3] * t3[4],
t1[4] * t3[0] - t1[4] * t3[4],
t1[5] * t3[0] - t1[5] * t3[4],
t1[3] * t3[2] + t1[4] * t3[3] + t1[6] * t3[0],
 - t1[3] * t3[1] + t1[5] * t3[3] + t1[7] * t3[0],
 - t1[4] * t3[1] - t1[5] * t3[2] + t1[8] * t3[0],
t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1] + t1[9] * t3[0],
t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1] + t1[9] * t3[4]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Tvd (
t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5] + t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2] + t4[10] * t6[6] + t4[11] * t6[7] + t4[12] * t6[8] - t4[13] * t6[9],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[6] - t4[4] * t6[7] - t4[5] * t6[8] + t4[6] * t6[9] + t4[11] * t6[0] + t4[12] * t6[1] - t4[13] * t6[2] + t4[14] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[3] * t6[7] + t4[4] * t6[6] - t4[5] * t6[9] - t4[6] * t6[8] - t4[10] * t6[0] + t4[12] * t6[2] + t4[13] * t6[1] - t4[14] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[8] + t4[4] * t6[9] + t4[5] * t6[6] + t4[6] * t6[7] - t4[10] * t6[1] - t4[11] * t6[2] - t4[13] * t6[0] + t4[14] * t6[0],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[4] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5] + t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2] - t4[14] * t6[9]
);

}
		
	
	  	
template<>
inline Tvd re (const Tvd& tvd, const Sph& sph) {					
					
const Sph& t1 = sph;
const Tvd& t2 = tvd;
Tvd t3 = involute( t2);
Pnt_Afp t4 (
t1[0] * t3[4] + t1[4] * t3[3],
t1[1] * t3[4] - t1[4] * t3[2],
t1[2] * t3[4] + t1[4] * t3[1],
 - t1[0] * t3[2] - t1[1] * t3[3],
t1[0] * t3[1] - t1[2] * t3[3],
t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[0] + t1[4] * t3[3],
t1[1] * t3[0] - t1[4] * t3[2],
t1[2] * t3[0] + t1[4] * t3[1],
 - t1[0] * t3[3] + t1[1] * t3[2] - t1[2] * t3[1] + t1[3] * t3[0] + t1[3] * t3[4],
t1[4] * t3[0] - t1[4] * t3[4]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Tvd (
 - t4[6] * t6[0] - t4[7] * t6[1] - t4[8] * t6[2] - t4[9] * t6[4] - t4[10] * t6[3],
 - t4[2] * t6[3] - t4[4] * t6[0] - t4[5] * t6[1] + t4[8] * t6[3] - t4[9] * t6[2],
t4[1] * t6[3] + t4[3] * t6[0] - t4[5] * t6[2] - t4[7] * t6[3] + t4[9] * t6[1],
 - t4[0] * t6[3] + t4[3] * t6[1] + t4[4] * t6[2] + t4[6] * t6[3] - t4[9] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[9] * t6[4] - t4[10] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	