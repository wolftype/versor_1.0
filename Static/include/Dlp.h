		#ifndef DLP_H_INCLUDED
		#define DLP_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Dlp gp (const Dlp& a, const Sca& b) { 
	return Dlp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Sca*)(&b));
}			
		 
inline Tvd gp (const Dlp& a, const Ori& b) { 
	return Tvd (
 - a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Ori*)(&b));
}			
		 
inline Drv gp (const Dlp& a, const Inf& b) { 
	return Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Inf*)(&b));
}			
		 
inline Mnk_Dlp gp (const Dlp& a, const Mnk& b) { 
	return Mnk_Dlp (
 - a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Pnt gp (const Dlp& a, const Hyp& b) { 
	return Hyp_Pnt (
 - a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Hyp*)(&b));
}			
		 
inline Pln gp (const Dlp& a, const Pss& b) { 
	return Pln (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Pss*)(&b));
}			
		 
inline Bst gp (const Dlp& a, const Pnt& b) { 
	return Bst (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[4] - a[3] * b[0],
a[1] * b[4] - a[3] * b[1],
a[2] * b[4] - a[3] * b[2],
 - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Pnt*)(&b));
}			
		 
inline Pnt_Par gp (const Dlp& a, const Par& b) { 
	return Pnt_Par (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[3] * b[9],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[7] - a[1] * b[6] + a[3] * b[0],
a[0] * b[8] - a[2] * b[6] + a[3] * b[1],
a[1] * b[8] - a[2] * b[7] + a[3] * b[2],
a[0] * b[9] + a[3] * b[3],
a[1] * b[9] + a[3] * b[4],
a[2] * b[9] + a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Par*)(&b));
}			
		 
inline Pnt_Cir gp (const Dlp& a, const Cir& b) { 
	return Pnt_Cir (
a[2] * b[9] - a[3] * b[0],
 - a[1] * b[9] - a[3] * b[1],
a[0] * b[9] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[6],
a[0] * b[3] - a[2] * b[5] + a[3] * b[7],
a[0] * b[4] + a[1] * b[5] + a[3] * b[8],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6] - a[3] * b[0],
a[0] * b[8] - a[2] * b[6] - a[3] * b[1],
a[1] * b[8] - a[2] * b[7] - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[3] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt_Sph gp (const Dlp& a, const Sph& b) { 
	return Pnt_Sph (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[2] * b[4] - a[3] * b[0],
 - a[1] * b[4] - a[3] * b[1],
a[0] * b[4] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Sph*)(&b));
}			
		 
inline Pnt_Par gp (const Dlp& a, const Sta& b) { 
	return Pnt_Par (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[7] - a[1] * b[6] + a[3] * b[0],
a[0] * b[8] - a[2] * b[6] + a[3] * b[1],
a[1] * b[8] - a[2] * b[7] + a[3] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Sta*)(&b));
}			
		 
inline Drv_Lin gp (const Dlp& a, const Drv& b) { 
	return Drv_Lin (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Drv*)(&b));
}			
		 
inline Drv_Pln gp (const Dlp& a, const Drb& b) { 
	return Drv_Pln (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Drb*)(&b));
}			
		 
inline Drb gp (const Dlp& a, const Drt& b) { 
	return Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Drt*)(&b));
}			
		 
inline Ori_Par gp (const Dlp& a, const Tnv& b) { 
	return Ori_Par (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Tnv*)(&b));
}			
		 
inline Ori_Cir gp (const Dlp& a, const Tnb& b) { 
	return Ori_Cir (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori_Sph gp (const Dlp& a, const Tnt& b) { 
	return Ori_Sph (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Tnt*)(&b));
}			
		 
inline Lin_Dlp gp (const Dlp& a, const Lin& b) { 
	return Lin_Dlp (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Lin*)(&b));
}			
		 
inline Pln_Dlp gp (const Dlp& a, const Pln& b) { 
	return Pln_Dlp (
a[2] * b[3] - a[3] * b[0],
 - a[1] * b[3] - a[3] * b[1],
a[0] * b[3] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Pln*)(&b));
}			
		 
inline Pln_Dfp gp (const Dlp& a, const Flp& b) { 
	return Pln_Dfp (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Flp*)(&b));
}			
		 
inline Pln_Flp gp (const Dlp& a, const Dfp& b) { 
	return Pln_Flp (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Dfp*)(&b));
}			
		 
inline Lin_Pln gp (const Dlp& a, const Dll& b) { 
	return Lin_Pln (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Dll*)(&b));
}			
		 
inline Pln_Pln gp (const Dlp& a, const Dlp& b) { 
	return Pln_Pln (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Dlp*)(&b));
}			
		 
inline Pln_Pln gp (const Dlp& a, const Vec& b) { 
	return Pln_Pln (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Vec*)(&b));
}			
		 
inline Pln_Mnv gp (const Dlp& a, const Biv& b) { 
	return Pln_Mnv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Biv*)(&b));
}			
		 
inline Mnk_Pln gp (const Dlp& a, const Tri& b) { 
	return Mnk_Pln (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Tri*)(&b));
}			
		 
inline Bst gp (const Dlp& a, const Aff& b) { 
	return Bst (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Aff*)(&b));
}			
		 
inline Pnt_Afl gp (const Dlp& a, const Afl& b) { 
	return Pnt_Afl (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Afl*)(&b));
}			
		 
inline Pnt_Afp gp (const Dlp& a, const Afp& b) { 
	return Pnt_Afp (
a[2] * b[3] - a[3] * b[0],
 - a[1] * b[3] - a[3] * b[1],
a[0] * b[3] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Afp*)(&b));
}			
		 
inline Pnt_Dap gp (const Dlp& a, const Dap& b) { 
	return Pnt_Dap (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
 - a[3] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] + a[3] * b[0],
a[1] * b[3] + a[3] * b[1],
a[2] * b[3] + a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Dap*)(&b));
}			
		 
inline Pnt_Sph gp (const Dlp& a, const Daf& b) { 
	return Pnt_Sph (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Daf*)(&b));
}			
		 
inline Pnt_Dal gp (const Dlp& a, const Dal& b) { 
	return Pnt_Dal (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] - a[3] * b[0],
a[0] * b[5] - a[2] * b[3] - a[3] * b[1],
a[1] * b[5] - a[2] * b[4] - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Dal*)(&b));
}			
		 
inline Pln_Biv gp (const Dlp& a, const Mnv& b) { 
	return Pln_Biv (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Mnv*)(&b));
}			
		 
inline Lin_Pln gp (const Dlp& a, const Rot& b) { 
	return Lin_Pln (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Rot*)(&b));
}			
		 
inline Lin_Pln gp (const Dlp& a, const Mot& b) { 
	return Lin_Pln (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[1],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Mot*)(&b));
}			
		 
inline Inf_Dap gp (const Dlp& a, const Dil& b) { 
	return Inf_Dap (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] - a[3] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Dil*)(&b));
}			
		 
inline Pnt_Dap gp (const Dlp& a, const Trv& b) { 
	return Pnt_Dap (
a[0] * b[0] + a[3] * b[1],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] + a[3] * b[3],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[3] * b[0],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Trv*)(&b));
}			
		 
inline Par_Drb gp (const Dlp& a, const Mtd& b) { 
	return Par_Drb (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] - a[3] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[1] - a[3] * b[8],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] + a[3] * b[2] - a[3] * b[9],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3] - a[3] * b[10],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Mtd*)(&b));
}			
		 
inline Lin_Flp gp (const Dlp& a, const Trs& b) { 
	return Lin_Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Trs*)(&b));
}			
		 
inline Mtt gp (const Dlp& a, const Rtc& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14] - a[3] * b[5],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0] - a[3] * b[6],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1] - a[3] * b[7],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9] - a[3] * b[0] + a[3] * b[11],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10] - a[3] * b[1] + a[3] * b[12],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4] - a[3] * b[2] + a[3] * b[13],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13] - a[3] * b[3],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15] - a[3] * b[5],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11] - a[3] * b[6],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12] - a[3] * b[7],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] - a[3] * b[14] + a[3] * b[15]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Rtc*)(&b));
}			
		 
inline Rtc gp (const Dlp& a, const Mtt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[0] - a[3] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15] + a[3] * b[1] - a[3] * b[11],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7] + a[3] * b[2] - a[3] * b[12],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8] + a[3] * b[3] - a[3] * b[13],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] + a[3] * b[4],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[5],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] + a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[14],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Mtt*)(&b));
}			
		 
inline Rtc gp (const Dlp& a, const Rtt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[7],
a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Rtt*)(&b));
}			
		 
inline Par_Drb gp (const Dlp& a, const Rtd& b) { 
	return Par_Drb (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[3] * b[0] - a[3] * b[4],
a[3] * b[1] - a[3] * b[5],
a[3] * b[2] - a[3] * b[6],
a[3] * b[3] - a[3] * b[7],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Rtd*)(&b));
}			
		 
inline Pnt_Dap gp (const Dlp& a, const Tvd& b) { 
	return Pnt_Dap (
a[0] * b[0] + a[3] * b[1],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] + a[3] * b[3],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[3] * b[0] - a[3] * b[4],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[4] + a[3] * b[1],
a[1] * b[4] + a[3] * b[2],
a[2] * b[4] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Tvd*)(&b));
}			
		 
inline Inf_Par gp (const Dlp& a, const Tsd& b) { 
	return Inf_Par (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0] - a[3] * b[4],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Tsd*)(&b));
}			
		 
inline Rtc gp (const Dlp& a, const Trt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[0] - a[3] * b[10],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7] + a[3] * b[1] - a[3] * b[11],
a[0] * b[9] - a[2] * b[7] + a[3] * b[2] - a[3] * b[12],
a[1] * b[9] - a[2] * b[8] + a[3] * b[3] - a[3] * b[13],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] + a[3] * b[4],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[5],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] + a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Trt*)(&b));
}			
		 
inline Rtc gp (const Dlp& a, const Rvd& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[3] * b[0] - a[3] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
a[3] * b[1] - a[3] * b[8],
a[3] * b[2] - a[3] * b[9],
a[3] * b[3] - a[3] * b[10],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] + a[3] * b[4],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[5],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] + a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[11],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Rvd*)(&b));
}			
		 
inline Rtc gp (const Dlp& a, const Tst& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[0] - a[3] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7] + a[3] * b[1] - a[3] * b[11],
a[0] * b[9] - a[2] * b[7] + a[3] * b[2] - a[3] * b[12],
a[1] * b[9] - a[2] * b[8] + a[3] * b[3] - a[3] * b[13],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] + a[3] * b[4],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[5],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] + a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[14],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Tst*)(&b));
}			
		 
inline Rtc gp (const Dlp& a, const Tvt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[0] - a[3] * b[10],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14] + a[3] * b[1] - a[3] * b[11],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7] + a[3] * b[2] - a[3] * b[12],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8] + a[3] * b[3] - a[3] * b[13],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] + a[3] * b[4],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[5],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] + a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Tvt*)(&b));
}			
		 
inline Pnt_Par gp (const Dlp& a, const Bst& b) { 
	return Pnt_Par (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[3] * b[0] - a[3] * b[10],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7] + a[3] * b[1],
a[0] * b[9] - a[2] * b[7] + a[3] * b[2],
a[1] * b[9] - a[2] * b[8] + a[3] * b[3],
a[0] * b[10] + a[3] * b[4],
a[1] * b[10] + a[3] * b[5],
a[2] * b[10] + a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Dlp, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Dlp*)(&a),*(Bst*)(&b));
}			
		 
inline Dlp op (const Dlp& a, const Sca& b) { 
	return Dlp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Sca*)(&b));
}			
		 
inline Dap op (const Dlp& a, const Ori& b) { 
	return Dap (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Ori*)(&b));
}			
		 
inline Drv op (const Dlp& a, const Inf& b) { 
	return Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Inf*)(&b));
}			
		 
inline Mnv op (const Dlp& a, const Mnk& b) { 
	return Mnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca op (const Dlp& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Pss*)(&b));
}			
		 
inline Par op (const Dlp& a, const Pnt& b) { 
	return Par (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[4] - a[3] * b[0],
a[1] * b[4] - a[3] * b[1],
a[2] * b[4] - a[3] * b[2],
 - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Pnt*)(&b));
}			
		 
inline Cir op (const Dlp& a, const Par& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[7] - a[1] * b[6] + a[3] * b[0],
a[0] * b[8] - a[2] * b[6] + a[3] * b[1],
a[1] * b[8] - a[2] * b[7] + a[3] * b[2],
a[0] * b[9] + a[3] * b[3],
a[1] * b[9] + a[3] * b[4],
a[2] * b[9] + a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Par*)(&b));
}			
		 
inline Sph op (const Dlp& a, const Cir& b) { 
	return Sph (
a[0] * b[7] - a[1] * b[6] - a[3] * b[0],
a[0] * b[8] - a[2] * b[6] - a[3] * b[1],
a[1] * b[8] - a[2] * b[7] - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[3] * b[9]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Cir*)(&b));
}			
		 
inline Pss op (const Dlp& a, const Sph& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Sph*)(&b));
}			
		 
inline Cir op (const Dlp& a, const Sta& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[7] - a[1] * b[6] + a[3] * b[0],
a[0] * b[8] - a[2] * b[6] + a[3] * b[1],
a[1] * b[8] - a[2] * b[7] + a[3] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Sta*)(&b));
}			
		 
inline Drb op (const Dlp& a, const Drv& b) { 
	return Drb (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Drv*)(&b));
}			
		 
inline Drt op (const Dlp& a, const Drb& b) { 
	return Drt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Dlp& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Drt*)(&b));
}			
		 
inline Dal op (const Dlp& a, const Tnv& b) { 
	return Dal (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Tnv*)(&b));
}			
		 
inline Daf op (const Dlp& a, const Tnb& b) { 
	return Daf (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Tnb*)(&b));
}			
		 
inline Pss op (const Dlp& a, const Tnt& b) { 
	return Pss (
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Tnt*)(&b));
}			
		 
inline Pln op (const Dlp& a, const Lin& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Lin*)(&b));
}			
		 
inline Pss op (const Dlp& a, const Pln& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Pln*)(&b));
}			
		 
inline Lin op (const Dlp& a, const Flp& b) { 
	return Lin (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Flp*)(&b));
}			
		 
inline Drt op (const Dlp& a, const Dfp& b) { 
	return Drt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Dfp*)(&b));
}			
		 
inline Dfp op (const Dlp& a, const Dll& b) { 
	return Dfp (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Dll*)(&b));
}			
		 
inline Dll op (const Dlp& a, const Dlp& b) { 
	return Dll (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Dlp*)(&b));
}			
		 
inline Dll op (const Dlp& a, const Vec& b) { 
	return Dll (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Vec*)(&b));
}			
		 
inline Dfp op (const Dlp& a, const Biv& b) { 
	return Dfp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Biv*)(&b));
}			
		 
inline Drt op (const Dlp& a, const Tri& b) { 
	return Drt (
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Tri*)(&b));
}			
		 
inline Par op (const Dlp& a, const Aff& b) { 
	return Par (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Aff*)(&b));
}			
		 
inline Cir op (const Dlp& a, const Afl& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Afl*)(&b));
}			
		 
inline Sph op (const Dlp& a, const Afp& b) { 
	return Sph (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Afp*)(&b));
}			
		 
inline Dal op (const Dlp& a, const Dap& b) { 
	return Dal (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] + a[3] * b[0],
a[1] * b[3] + a[3] * b[1],
a[2] * b[3] + a[3] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Dap*)(&b));
}			
		 
inline Pss op (const Dlp& a, const Daf& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Daf*)(&b));
}			
		 
inline Daf op (const Dlp& a, const Dal& b) { 
	return Daf (
a[0] * b[4] - a[1] * b[3] - a[3] * b[0],
a[0] * b[5] - a[2] * b[3] - a[3] * b[1],
a[1] * b[5] - a[2] * b[4] - a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Dal*)(&b));
}			
		 
inline Mnk_Biv op (const Dlp& a, const Mnv& b) { 
	return Mnk_Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Dlp, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Dlp*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Dlp& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Dlp& a, const Ori& b) { 
	return Sca (
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Dlp& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Inf*)(&b));
}			
		 
inline Inf ip (const Dlp& a, const Mnk& b) { 
	return Inf (
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Dlp& a, const Hyp& b) { 
	return Sca (
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Hyp*)(&b));
}			
		 
inline Pln ip (const Dlp& a, const Pss& b) { 
	return Pln (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Dlp& a, const Pnt& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Pnt*)(&b));
}			
		 
inline Pnt ip (const Dlp& a, const Par& b) { 
	return Pnt (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[3] * b[9]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Par*)(&b));
}			
		 
inline Par ip (const Dlp& a, const Cir& b) { 
	return Par (
a[2] * b[9] - a[3] * b[0],
 - a[1] * b[9] - a[3] * b[1],
a[0] * b[9] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[6],
a[0] * b[3] - a[2] * b[5] + a[3] * b[7],
a[0] * b[4] + a[1] * b[5] + a[3] * b[8],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Cir*)(&b));
}			
		 
inline Cir ip (const Dlp& a, const Sph& b) { 
	return Cir (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[2] * b[4] - a[3] * b[0],
 - a[1] * b[4] - a[3] * b[1],
a[0] * b[4] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Sph*)(&b));
}			
		 
inline Pnt ip (const Dlp& a, const Sta& b) { 
	return Pnt (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Sta*)(&b));
}			
		 
inline Inf ip (const Dlp& a, const Drv& b) { 
	return Inf (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Drv*)(&b));
}			
		 
inline Drv ip (const Dlp& a, const Drb& b) { 
	return Drv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Drb*)(&b));
}			
		 
inline Drb ip (const Dlp& a, const Drt& b) { 
	return Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Drt*)(&b));
}			
		 
inline Aff ip (const Dlp& a, const Tnv& b) { 
	return Aff (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Tnv*)(&b));
}			
		 
inline Afl ip (const Dlp& a, const Tnb& b) { 
	return Afl (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Tnb*)(&b));
}			
		 
inline Afp ip (const Dlp& a, const Tnt& b) { 
	return Afp (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Tnt*)(&b));
}			
		 
inline Flp ip (const Dlp& a, const Lin& b) { 
	return Flp (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Lin*)(&b));
}			
		 
inline Lin ip (const Dlp& a, const Pln& b) { 
	return Lin (
a[2] * b[3] - a[3] * b[0],
 - a[1] * b[3] - a[3] * b[1],
a[0] * b[3] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Pln*)(&b));
}			
		 
inline Inf ip (const Dlp& a, const Flp& b) { 
	return Inf (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Flp*)(&b));
}			
		 
inline Dll ip (const Dlp& a, const Dfp& b) { 
	return Dll (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Dfp*)(&b));
}			
		 
inline Dlp ip (const Dlp& a, const Dll& b) { 
	return Dlp (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Dlp& a, const Dlp& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Dlp& a, const Vec& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Vec*)(&b));
}			
		 
inline Vec ip (const Dlp& a, const Biv& b) { 
	return Vec (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Biv*)(&b));
}			
		 
inline Biv ip (const Dlp& a, const Tri& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Dlp& a, const Aff& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Aff*)(&b));
}			
		 
inline Aff ip (const Dlp& a, const Afl& b) { 
	return Aff (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Afl*)(&b));
}			
		 
inline Afl ip (const Dlp& a, const Afp& b) { 
	return Afl (
a[2] * b[3] - a[3] * b[0],
 - a[1] * b[3] - a[3] * b[1],
a[0] * b[3] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Afp*)(&b));
}			
		 
inline Pnt ip (const Dlp& a, const Dap& b) { 
	return Pnt (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
 - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Dap*)(&b));
}			
		 
inline Cir ip (const Dlp& a, const Daf& b) { 
	return Cir (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Daf*)(&b));
}			
		 
inline Par ip (const Dlp& a, const Dal& b) { 
	return Par (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3],
a[3] * b[4],
a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Dal*)(&b));
}			
		 
inline Flp ip (const Dlp& a, const Mnv& b) { 
	return Flp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Dlp, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Dlp*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Dlp sp (const Dlp& dlp, const Rot& rot) {					
					
const Rot& t1 = rot;
const Dlp& t2 = dlp;
Lin_Pln t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1],
t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Mot& mot) {					
					
const Mot& t1 = mot;
const Dlp& t2 = dlp;
Lin_Pln t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] - t3[7] * t5[7]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Dil& dil) {					
					
const Dil& t1 = dil;
const Dlp& t2 = dlp;
Inf_Dap t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] + t1[1] * t2[3],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] + t3[5] * t5[1],
t3[2] * t5[0] + t3[6] * t5[1],
t3[3] * t5[0] - t3[3] * t5[1]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Trv& trv) {					
					
const Trv& t1 = trv;
const Dlp& t2 = dlp;
Pnt_Dap t3 (
t1[0] * t2[0] - t1[1] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] - t1[3] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[3],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] + t3[4] * t5[2],
t3[2] * t5[0] + t3[4] * t5[3],
t3[4] * t5[0]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Dlp& t2 = dlp;
Par_Drb t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] + t1[7] * t2[3],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] + t1[8] * t2[3] - t1[11] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] + t1[9] * t2[3] + t1[11] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[10] * t2[3] - t1[11] * t2[0],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[3] - t3[11] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[2] + t3[11] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[1] - t3[11] * t5[8],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] - t3[3] * t5[7] - t3[4] * t5[1] + t3[4] * t5[8] - t3[5] * t5[2] + t3[5] * t5[9] - t3[6] * t5[3] + t3[6] * t5[10] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[11] - t3[11] * t5[11]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Trs& trs) {					
					
const Trs& t1 = trs;
const Dlp& t2 = dlp;
Lin_Flp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Dlp (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Dlp& t2 = dlp;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] - t1[5] * t2[3] + t1[14] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[6] * t2[3] - t1[14] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] - t1[7] * t2[3] + t1[14] * t2[0],
 - t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[3] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[3] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[11] * t2[3],
t1[1] * t2[3] - t1[4] * t2[1] + t1[8] * t2[0] - t1[10] * t2[2] + t1[12] * t2[3],
t1[2] * t2[3] - t1[4] * t2[2] + t1[9] * t2[0] + t1[10] * t2[1] + t1[13] * t2[3],
t1[3] * t2[3] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[5] * t2[3] + t1[11] * t2[1] - t1[12] * t2[0] + t1[15] * t2[2],
t1[6] * t2[3] + t1[11] * t2[2] - t1[13] * t2[0] - t1[15] * t2[1],
t1[7] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1] + t1[15] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
 - t1[8] * t2[2] + t1[9] * t2[1] - t1[10] * t2[0] + t1[14] * t2[3] + t1[15] * t2[3]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[14] - t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[3] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[11] + t3[11] * t5[12] + t3[12] * t5[13] - t3[13] * t5[15] + t3[14] * t5[10] + t3[15] * t5[7],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] + t3[3] * t5[2] - t3[4] * t5[8] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[5] - t3[8] * t5[3] + t3[9] * t5[7] + t3[10] * t5[12] - t3[11] * t5[11] + t3[12] * t5[15] + t3[13] * t5[13] - t3[14] * t5[9] - t3[15] * t5[6],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[1] - t3[4] * t5[9] - t3[5] * t5[10] - t3[6] * t5[4] - t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[13] - t3[11] * t5[15] - t3[12] * t5[11] - t3[13] * t5[12] + t3[14] * t5[8] + t3[15] * t5[5],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] - t3[7] * t5[0] + t3[7] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[4] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] + t3[15] * t5[14] - t3[15] * t5[15]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Dlp& t2 = dlp;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[3] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
t1[1] * t2[3] - t1[7] * t2[1] + t1[8] * t2[0] + t1[11] * t2[3] - t1[15] * t2[2],
t1[2] * t2[3] - t1[7] * t2[2] + t1[9] * t2[0] + t1[12] * t2[3] + t1[15] * t2[1],
t1[3] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[13] * t2[3] - t1[15] * t2[0],
t1[4] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[5] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[6] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[14] * t2[3],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] + t1[14] * t2[3]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[15] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[5] * t5[15] - t3[6] * t5[7] - t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9] - t3[14] * t5[15] - t3[15] * t5[15]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Dlp& t2 = dlp;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
t1[4] * t2[3],
t1[5] * t2[3],
t1[6] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[7] * t2[3],
t1[7] * t2[3]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[4] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[7] - t3[14] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[4] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[10] * t5[6] + t3[14] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[4] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[10] * t5[5] - t3[14] * t5[1],
t3[4] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Dlp& t2 = dlp;
Par_Drb t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] + t1[4] * t2[3],
t1[1] * t2[3] + t1[5] * t2[3],
t1[2] * t2[3] + t1[6] * t2[3],
t1[3] * t2[3] + t1[7] * t2[3],
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[3] - t3[11] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[7] + t3[10] * t5[2] + t3[11] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[7] * t5[6] + t3[8] * t5[7] + t3[9] * t5[4] - t3[10] * t5[1] - t3[11] * t5[5],
t3[3] * t5[0] - t3[3] * t5[4] - t3[4] * t5[1] + t3[4] * t5[5] - t3[5] * t5[2] + t3[5] * t5[6] - t3[6] * t5[3] + t3[6] * t5[7]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Dlp& t2 = dlp;
Pnt_Dap t3 (
t1[0] * t2[0] - t1[1] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] - t1[3] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[3] + t1[4] * t2[3],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[1] * t2[3] + t1[4] * t2[0],
t1[2] * t2[3] + t1[4] * t2[1],
t1[3] * t2[3] + t1[4] * t2[2]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] + t3[4] * t5[1] + t3[8] * t5[4],
t3[1] * t5[0] + t3[4] * t5[2] + t3[9] * t5[4],
t3[2] * t5[0] + t3[4] * t5[3] + t3[10] * t5[4],
t3[4] * t5[0] - t3[4] * t5[4]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Dlp& t2 = dlp;
Inf_Par t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0] - t3[3] * t5[4] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Trt& trt) {					
					
const Trt& t1 = trt;
const Dlp& t2 = dlp;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[3] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
t1[1] * t2[3] - t1[7] * t2[1] + t1[8] * t2[0] + t1[11] * t2[3],
t1[2] * t2[3] - t1[7] * t2[2] + t1[9] * t2[0] + t1[12] * t2[3],
t1[3] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[13] * t2[3],
t1[4] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[5] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[6] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Dlp& t2 = dlp;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[3] + t1[7] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[11] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[0],
t1[1] * t2[3] + t1[8] * t2[3],
t1[2] * t2[3] + t1[9] * t2[3],
t1[3] * t2[3] + t1[10] * t2[3],
t1[4] * t2[3] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[5] * t2[3] + t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[6] * t2[3] + t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[3],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0] + t1[11] * t2[3]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[4] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[11] + t3[11] * t5[7] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[3] - t3[15] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[4] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[6] + t3[11] * t5[8] + t3[12] * t5[7] - t3[13] * t5[10] + t3[14] * t5[2] + t3[15] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[4] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[7] - t3[14] * t5[1] - t3[15] * t5[8],
t3[4] * t5[0] - t3[4] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[10] * t5[3] + t3[10] * t5[10]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Tst& tst) {					
					
const Tst& t1 = tst;
const Dlp& t2 = dlp;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[3] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
t1[1] * t2[3] - t1[7] * t2[1] + t1[8] * t2[0] + t1[11] * t2[3],
t1[2] * t2[3] - t1[7] * t2[2] + t1[9] * t2[0] + t1[12] * t2[3],
t1[3] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[13] * t2[3],
t1[4] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[5] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[6] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[14] * t2[3],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] + t1[14] * t2[3]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Dlp& t2 = dlp;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[3] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
t1[1] * t2[3] - t1[7] * t2[1] + t1[8] * t2[0] + t1[11] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] - t1[7] * t2[2] + t1[9] * t2[0] + t1[12] * t2[3] + t1[14] * t2[1],
t1[3] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[13] * t2[3] - t1[14] * t2[0],
t1[4] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[5] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[6] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[14] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[5] * t5[14] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] - t3[10] * t5[3] + t3[10] * t5[13] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9] - t3[14] * t5[14] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Dlp sp (const Dlp& dlp, const Bst& bst) {					
					
const Bst& t1 = bst;
const Dlp& t2 = dlp;
Pnt_Par t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[3] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
t1[1] * t2[3] - t1[7] * t2[1] + t1[8] * t2[0],
t1[2] * t2[3] - t1[7] * t2[2] + t1[9] * t2[0],
t1[3] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1],
t1[4] * t2[3] + t1[10] * t2[0],
t1[5] * t2[3] + t1[10] * t2[1],
t1[6] * t2[3] + t1[10] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Dlp (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[14] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[12] * t5[10] + t3[14] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[13] * t5[10] - t3[14] * t5[1],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3] + t3[11] * t5[7] + t3[12] * t5[8] + t3[13] * t5[9]
);

}
		
	
	  	
template<>
inline Dlp re (const Dlp& dlp, const Vec& vec) {					
					
const Vec& t1 = vec;
const Dlp& t2 = dlp;
Dlp t3 = involute( t2);
Pln_Pln t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
t1[0] * t3[3],
t1[1] * t3[3],
t1[2] * t3[3]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Dlp (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2]
);

}
		
	
	  	
template<>
inline Dlp re (const Dlp& dlp, const Pln& pln) {					
					
const Pln& t1 = pln;
const Dlp& t2 = dlp;
Dlp t3 = involute( t2);
Pln_Dlp t4 (
t1[0] * t3[3] - t1[3] * t3[2],
t1[1] * t3[3] + t1[3] * t3[1],
t1[2] * t3[3] - t1[3] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Dlp (
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
t4[3] * t6[0] - t4[5] * t6[2] + t4[6] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[6] * t6[0],
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[6] * t6[3]
);

}
		
	
	  	
template<>
inline Dlp re (const Dlp& dlp, const Dll& dll) {					
					
const Dll& t1 = dll;
const Dlp& t2 = dlp;
Dlp t3 = involute( t2);
Lin_Pln t4 (
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
t1[0] * t3[3] - t1[3] * t3[1] + t1[4] * t3[0],
t1[1] * t3[3] - t1[3] * t3[2] + t1[5] * t3[0],
t1[2] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Dlp (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[7] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[7] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[7] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2]
);

}
		
	
	  	
template<>
inline Dlp re (const Dlp& dlp, const Lin& lin) {					
					
const Lin& t1 = lin;
const Dlp& t2 = dlp;
Dlp t3 = involute( t2);
Lin_Dlp t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] + t1[3] * t3[3],
t1[0] * t3[0] - t1[2] * t3[2] + t1[4] * t3[3],
t1[1] * t3[0] + t1[2] * t3[1] + t1[5] * t3[3],
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
t1[3] * t3[1] - t1[4] * t3[0],
t1[3] * t3[2] - t1[5] * t3[0],
t1[4] * t3[2] - t1[5] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Dlp (
t4[3] * t6[3] + t4[4] * t6[4] + t4[5] * t6[5],
t4[3] * t6[4] - t4[4] * t6[3] + t4[6] * t6[5],
t4[3] * t6[5] - t4[5] * t6[3] - t4[6] * t6[4],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2]
);

}
		
	
	  	
template<>
inline Dlp re (const Dlp& dlp, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Dlp& t2 = dlp;
Dlp t3 = involute( t2);
Bst t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2] - t1[3] * t3[3],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
 - t1[3] * t3[0],
 - t1[3] * t3[1],
 - t1[3] * t3[2],
t1[0] * t3[3] - t1[4] * t3[0],
t1[1] * t3[3] - t1[4] * t3[1],
t1[2] * t3[3] - t1[4] * t3[2],
t1[3] * t3[3]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Dlp (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[4] * t6[4] - t4[7] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2] - t4[5] * t6[4] - t4[8] * t6[3],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1] - t4[6] * t6[4] - t4[9] * t6[3],
t4[0] * t6[4] - t4[7] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] + t4[10] * t6[4]
);

}
		
	
	  	
template<>
inline Dlp re (const Dlp& dlp, const Par& par) {					
					
const Par& t1 = par;
const Dlp& t2 = dlp;
Dlp t3 = involute( t2);
Pnt_Par t4 (
t1[0] * t3[1] + t1[1] * t3[2] - t1[3] * t3[3],
 - t1[0] * t3[0] + t1[2] * t3[2] - t1[4] * t3[3],
 - t1[1] * t3[0] - t1[2] * t3[1] - t1[5] * t3[3],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2] + t1[9] * t3[3],
 - t1[3] * t3[1] + t1[4] * t3[0],
 - t1[3] * t3[2] + t1[5] * t3[0],
 - t1[4] * t3[2] + t1[5] * t3[1],
t1[0] * t3[3] - t1[6] * t3[1] + t1[7] * t3[0],
t1[1] * t3[3] - t1[6] * t3[2] + t1[8] * t3[0],
t1[2] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1],
t1[3] * t3[3] + t1[9] * t3[0],
t1[4] * t3[3] + t1[9] * t3[1],
t1[5] * t3[3] + t1[9] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Dlp (
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[3] * t6[6] + t4[4] * t6[3] + t4[5] * t6[7] + t4[6] * t6[8] + t4[8] * t6[4] + t4[9] * t6[5] + t4[11] * t6[9] - t4[14] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[7] + t4[4] * t6[4] - t4[5] * t6[6] + t4[7] * t6[8] - t4[8] * t6[3] + t4[10] * t6[5] + t4[12] * t6[9] + t4[14] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[3] * t6[8] + t4[4] * t6[5] - t4[6] * t6[6] - t4[7] * t6[7] - t4[9] * t6[3] - t4[10] * t6[4] + t4[13] * t6[9] - t4[14] * t6[0],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[4] * t6[9] - t4[8] * t6[0] - t4[9] * t6[1] - t4[10] * t6[2] + t4[11] * t6[6] + t4[12] * t6[7] + t4[13] * t6[8]
);

}
		
	
	  	
template<>
inline Dlp re (const Dlp& dlp, const Cir& cir) {					
					
const Cir& t1 = cir;
const Dlp& t2 = dlp;
Dlp t3 = involute( t2);
Pnt_Cir t4 (
 - t1[0] * t3[3] + t1[9] * t3[2],
 - t1[1] * t3[3] - t1[9] * t3[1],
 - t1[2] * t3[3] + t1[9] * t3[0],
 - t1[0] * t3[1] - t1[1] * t3[2],
t1[0] * t3[0] - t1[2] * t3[2],
t1[1] * t3[0] + t1[2] * t3[1],
 - t1[3] * t3[1] - t1[4] * t3[2] + t1[6] * t3[3],
t1[3] * t3[0] - t1[5] * t3[2] + t1[7] * t3[3],
t1[4] * t3[0] + t1[5] * t3[1] + t1[8] * t3[3],
t1[6] * t3[0] + t1[7] * t3[1] + t1[8] * t3[2],
t1[0] * t3[3] + t1[6] * t3[1] - t1[7] * t3[0],
t1[1] * t3[3] + t1[6] * t3[2] - t1[8] * t3[0],
t1[2] * t3[3] + t1[7] * t3[2] - t1[8] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0] + t1[9] * t3[3]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Dlp (
 - t4[2] * t6[9] + t4[4] * t6[3] + t4[5] * t6[4] + t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[6] + t4[10] * t6[7] + t4[11] * t6[8] + t4[13] * t6[5] + t4[14] * t6[2],
t4[1] * t6[9] - t4[3] * t6[3] + t4[5] * t6[5] - t4[6] * t6[0] + t4[8] * t6[2] + t4[9] * t6[7] - t4[10] * t6[6] + t4[12] * t6[8] - t4[13] * t6[4] - t4[14] * t6[1],
 - t4[0] * t6[9] - t4[3] * t6[4] - t4[4] * t6[5] - t4[6] * t6[1] - t4[7] * t6[2] + t4[9] * t6[8] - t4[11] * t6[6] - t4[12] * t6[7] + t4[13] * t6[3] + t4[14] * t6[0],
 - t4[0] * t6[3] - t4[1] * t6[4] - t4[2] * t6[5] + t4[6] * t6[6] + t4[7] * t6[7] + t4[8] * t6[8] - t4[10] * t6[3] - t4[11] * t6[4] - t4[12] * t6[5] + t4[14] * t6[9]
);

}
		
	
	  	
template<>
inline Dlp re (const Dlp& dlp, const Sph& sph) {					
					
const Sph& t1 = sph;
const Dlp& t2 = dlp;
Dlp t3 = involute( t2);
Pnt_Sph t4 (
 - t1[3] * t3[2],
t1[3] * t3[1],
 - t1[3] * t3[0],
t1[0] * t3[3] - t1[4] * t3[2],
t1[1] * t3[3] + t1[4] * t3[1],
t1[2] * t3[3] - t1[4] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[3] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] + t1[3] * t3[3]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Dlp (
 - t4[2] * t6[4] - t4[5] * t6[3] - t4[7] * t6[0] - t4[8] * t6[1] - t4[10] * t6[2],
t4[1] * t6[4] + t4[4] * t6[3] + t4[6] * t6[0] - t4[8] * t6[2] + t4[10] * t6[1],
 - t4[0] * t6[4] - t4[3] * t6[3] + t4[6] * t6[1] + t4[7] * t6[2] - t4[10] * t6[0],
t4[3] * t6[0] + t4[4] * t6[1] + t4[5] * t6[2] - t4[9] * t6[4] - t4[10] * t6[4]
);

}
		
	
		
	} //vsr::
	#endif
	