		#ifndef AFF_H_INCLUDED
		#define AFF_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Aff gp (const Aff& a, const Sca& b) { 
	return Aff (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Sca*)(&b));
}			
		 
inline Tnv gp (const Aff& a, const Ori& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Ori*)(&b));
}			
		 
inline Tsd gp (const Aff& a, const Inf& b) { 
	return Tsd (
 - a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Inf*)(&b));
}			
		 
inline Mnk_Aff gp (const Aff& a, const Mnk& b) { 
	return Mnk_Aff (
a[3] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Pnt gp (const Aff& a, const Hyp& b) { 
	return Hyp_Pnt (
 - a[3] * b[1],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Hyp*)(&b));
}			
		 
inline Daf gp (const Aff& a, const Pss& b) { 
	return Daf (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Pss*)(&b));
}			
		 
inline Bst gp (const Aff& a, const Pnt& b) { 
	return Bst (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[4],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Pnt*)(&b));
}			
		 
inline Pnt_Par gp (const Aff& a, const Par& b) { 
	return Pnt_Par (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[6],
a[0] * b[0] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[2] + a[3] * b[8],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[3] * b[9],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
a[0] * b[9] - a[3] * b[6],
a[1] * b[9] - a[3] * b[7],
a[2] * b[9] - a[3] * b[8],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Par*)(&b));
}			
		 
inline Pnt_Cir gp (const Aff& a, const Cir& b) { 
	return Pnt_Cir (
a[2] * b[9] - a[3] * b[3],
 - a[1] * b[9] - a[3] * b[4],
a[0] * b[9] - a[3] * b[5],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[6],
a[0] * b[0] - a[2] * b[2] - a[3] * b[7],
a[0] * b[1] + a[1] * b[2] - a[3] * b[8],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[3] - a[2] * b[5],
a[0] * b[4] + a[1] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[3],
a[0] * b[8] - a[2] * b[6] + a[3] * b[4],
a[1] * b[8] - a[2] * b[7] + a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt_Sph gp (const Aff& a, const Sph& b) { 
	return Pnt_Sph (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
a[2] * b[4],
 - a[1] * b[4],
a[0] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Sph*)(&b));
}			
		 
inline Pnt_Par gp (const Aff& a, const Sta& b) { 
	return Pnt_Par (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[6],
a[0] * b[0] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[2] + a[3] * b[8],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
 - a[3] * b[6],
 - a[3] * b[7],
 - a[3] * b[8],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Sta*)(&b));
}			
		 
inline Inf_Par gp (const Aff& a, const Drv& b) { 
	return Inf_Par (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Drv*)(&b));
}			
		 
inline Inf_Cir gp (const Aff& a, const Drb& b) { 
	return Inf_Cir (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Drb*)(&b));
}			
		 
inline Inf_Sph gp (const Aff& a, const Drt& b) { 
	return Inf_Sph (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Drt*)(&b));
}			
		 
inline Tnv_Vec gp (const Aff& a, const Tnv& b) { 
	return Tnv_Vec (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv_Biv gp (const Aff& a, const Tnb& b) { 
	return Tnv_Biv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnb gp (const Aff& a, const Tnt& b) { 
	return Tnb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Tnt*)(&b));
}			
		 
inline Pnt_Lin gp (const Aff& a, const Lin& b) { 
	return Pnt_Lin (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
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
		 
		
template<> inline MVBase gp_gen<Aff, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Lin*)(&b));
}			
		 
inline Pnt_Sph gp (const Aff& a, const Pln& b) { 
	return Pnt_Sph (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Pln*)(&b));
}			
		 
inline Pnt_Flp gp (const Aff& a, const Flp& b) { 
	return Pnt_Flp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Flp*)(&b));
}			
		 
inline Pnt_Dfp gp (const Aff& a, const Dfp& b) { 
	return Pnt_Dfp (
a[2] * b[3] - a[3] * b[0],
 - a[1] * b[3] - a[3] * b[1],
a[0] * b[3] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Dfp*)(&b));
}			
		 
inline Pnt_Dll gp (const Aff& a, const Dll& b) { 
	return Pnt_Dll (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Dll*)(&b));
}			
		 
inline Bst gp (const Aff& a, const Dlp& b) { 
	return Bst (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Dlp*)(&b));
}			
		 
inline Vec_Aff gp (const Aff& a, const Vec& b) { 
	return Vec_Aff (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Vec*)(&b));
}			
		 
inline Biv_Aff gp (const Aff& a, const Biv& b) { 
	return Biv_Aff (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Biv*)(&b));
}			
		 
inline Mnk_Daf gp (const Aff& a, const Tri& b) { 
	return Mnk_Daf (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Tri*)(&b));
}			
		 
inline Vec_Aff gp (const Aff& a, const Aff& b) { 
	return Vec_Aff (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Aff*)(&b));
}			
		 
inline Vec_Afl gp (const Aff& a, const Afl& b) { 
	return Vec_Afl (
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
		 
		
template<> inline MVBase gp_gen<Aff, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Afl*)(&b));
}			
		 
inline Vec_Afp gp (const Aff& a, const Afp& b) { 
	return Vec_Afp (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Afp*)(&b));
}			
		 
inline Vec_Dap gp (const Aff& a, const Dap& b) { 
	return Vec_Dap (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Dap*)(&b));
}			
		 
inline Vec_Daf gp (const Aff& a, const Daf& b) { 
	return Vec_Daf (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Daf*)(&b));
}			
		 
inline Vec_Dal gp (const Aff& a, const Dal& b) { 
	return Vec_Dal (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[3],
a[0] * b[0] - a[2] * b[2] - a[3] * b[4],
a[0] * b[1] + a[1] * b[2] - a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Dal*)(&b));
}			
		 
inline Biv_Daf gp (const Aff& a, const Mnv& b) { 
	return Biv_Daf (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Mnv*)(&b));
}			
		 
inline Vec_Afl gp (const Aff& a, const Rot& b) { 
	return Vec_Afl (
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
		 
		
template<> inline MVBase gp_gen<Aff, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Rot*)(&b));
}			
		 
inline Rtc gp (const Aff& a, const Mot& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[7],
 - a[3] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Mot*)(&b));
}			
		 
inline Ori_Flp gp (const Aff& a, const Dil& b) { 
	return Ori_Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] + a[3] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Dil*)(&b));
}			
		 
inline Biv_Afp gp (const Aff& a, const Trv& b) { 
	return Biv_Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Trv*)(&b));
}			
		 
inline Rtc gp (const Aff& a, const Mtd& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[6],
a[3] * b[0] + a[3] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[3] * b[1] + a[3] * b[8],
a[3] * b[2] + a[3] * b[9],
a[3] * b[3] + a[3] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[4],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] - a[3] * b[5],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[11],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] - a[3] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Mtd*)(&b));
}			
		 
inline Pnt_Flp gp (const Aff& a, const Trs& b) { 
	return Pnt_Flp (
a[0] * b[0] + a[3] * b[1],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] + a[3] * b[3],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Trs*)(&b));
}			
		 
inline Mtt gp (const Aff& a, const Rtc& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[4],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14] - a[3] * b[8],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0] - a[3] * b[9],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1] - a[3] * b[10],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6] - a[3] * b[0] - a[3] * b[11],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7] - a[3] * b[1] - a[3] * b[12],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3] - a[3] * b[2] - a[3] * b[13],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13] + a[3] * b[4],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15] + a[3] * b[8],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11] + a[3] * b[9],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12] + a[3] * b[10],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] - a[3] * b[14] - a[3] * b[15],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Rtc*)(&b));
}			
		 
inline Rtc gp (const Aff& a, const Mtt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[1] + a[3] * b[11],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] + a[3] * b[2] + a[3] * b[12],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[13],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[7],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] - a[3] * b[8],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[9],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[15],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] - a[3] * b[15]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Mtt*)(&b));
}			
		 
inline Vec_Afl gp (const Aff& a, const Rtt& b) { 
	return Vec_Afl (
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
		 
		
template<> inline MVBase gp_gen<Aff, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Rtt*)(&b));
}			
		 
inline Par_Tnb gp (const Aff& a, const Rtd& b) { 
	return Par_Tnb (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[3] * b[0] + a[3] * b[4],
a[3] * b[1] + a[3] * b[5],
a[3] * b[2] + a[3] * b[6],
a[3] * b[3] + a[3] * b[7],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Rtd*)(&b));
}			
		 
inline Ori_Par gp (const Aff& a, const Tvd& b) { 
	return Ori_Par (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0] + a[3] * b[4],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Tvd*)(&b));
}			
		 
inline Pnt_Flp gp (const Aff& a, const Tsd& b) { 
	return Pnt_Flp (
a[0] * b[0] + a[3] * b[1],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] + a[3] * b[3],
a[3] * b[0] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[4] - a[3] * b[1],
a[1] * b[4] - a[3] * b[2],
a[2] * b[4] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Tsd*)(&b));
}			
		 
inline Rtc gp (const Aff& a, const Trt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[3] * b[1] + a[3] * b[11],
a[0] * b[6] - a[2] * b[4] + a[3] * b[2] + a[3] * b[12],
a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[13],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[7],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] - a[3] * b[8],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[9],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Trt*)(&b));
}			
		 
inline Par_Tnb gp (const Aff& a, const Rvd& b) { 
	return Par_Tnb (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[1] + a[3] * b[8],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] + a[3] * b[2] + a[3] * b[9],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[10],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Rvd*)(&b));
}			
		 
inline Rtc gp (const Aff& a, const Tst& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[1] + a[3] * b[11],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] + a[3] * b[2] + a[3] * b[12],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[13],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[7],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] - a[3] * b[8],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[9],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Tst*)(&b));
}			
		 
inline Rtc gp (const Aff& a, const Tvt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[3] * b[1] + a[3] * b[11],
a[0] * b[6] - a[2] * b[4] + a[3] * b[2] + a[3] * b[12],
a[1] * b[6] - a[2] * b[5] + a[3] * b[3] + a[3] * b[13],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[7],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] - a[3] * b[8],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[9],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[14],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] - a[3] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Tvt*)(&b));
}			
		 
inline Pnt_Par gp (const Aff& a, const Bst& b) { 
	return Pnt_Par (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[8],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[3] * b[9],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[3] * b[0] + a[3] * b[10],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[3] * b[1],
a[0] * b[6] - a[2] * b[4] + a[3] * b[2],
a[1] * b[6] - a[2] * b[5] + a[3] * b[3],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[3] * b[7],
a[1] * b[10] - a[3] * b[8],
a[2] * b[10] - a[3] * b[9],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Aff, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Aff*)(&a),*(Bst*)(&b));
}			
		 
inline Aff op (const Aff& a, const Sca& b) { 
	return Aff (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Sca*)(&b));
}			
		 
inline Tnv op (const Aff& a, const Ori& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Ori*)(&b));
}			
		 
inline Flp op (const Aff& a, const Inf& b) { 
	return Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Inf*)(&b));
}			
		 
inline Mnv op (const Aff& a, const Mnk& b) { 
	return Mnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca op (const Aff& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Pss*)(&b));
}			
		 
inline Par op (const Aff& a, const Pnt& b) { 
	return Par (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[3] * b[4]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Pnt*)(&b));
}			
		 
inline Cir op (const Aff& a, const Par& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
a[0] * b[9] - a[3] * b[6],
a[1] * b[9] - a[3] * b[7],
a[2] * b[9] - a[3] * b[8],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Par*)(&b));
}			
		 
inline Sph op (const Aff& a, const Cir& b) { 
	return Sph (
a[0] * b[7] - a[1] * b[6] + a[3] * b[3],
a[0] * b[8] - a[2] * b[6] + a[3] * b[4],
a[1] * b[8] - a[2] * b[7] + a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Cir*)(&b));
}			
		 
inline Pss op (const Aff& a, const Sph& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[4]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Sph*)(&b));
}			
		 
inline Cir op (const Aff& a, const Sta& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
 - a[3] * b[6],
 - a[3] * b[7],
 - a[3] * b[8],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Sta*)(&b));
}			
		 
inline Lin op (const Aff& a, const Drv& b) { 
	return Lin (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Drv*)(&b));
}			
		 
inline Pln op (const Aff& a, const Drb& b) { 
	return Pln (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Drb*)(&b));
}			
		 
inline Pss op (const Aff& a, const Drt& b) { 
	return Pss (
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Drt*)(&b));
}			
		 
inline Tnb op (const Aff& a, const Tnv& b) { 
	return Tnb (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnt op (const Aff& a, const Tnb& b) { 
	return Tnt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Aff& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Tnt*)(&b));
}			
		 
inline Pln op (const Aff& a, const Lin& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Lin*)(&b));
}			
		 
inline Pss op (const Aff& a, const Pln& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Pln*)(&b));
}			
		 
inline Lin op (const Aff& a, const Flp& b) { 
	return Lin (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Flp*)(&b));
}			
		 
inline Sph op (const Aff& a, const Dfp& b) { 
	return Sph (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
 - a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Dfp*)(&b));
}			
		 
inline Cir op (const Aff& a, const Dll& b) { 
	return Cir (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Dll*)(&b));
}			
		 
inline Par op (const Aff& a, const Dlp& b) { 
	return Par (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Dlp*)(&b));
}			
		 
inline Afl op (const Aff& a, const Vec& b) { 
	return Afl (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Vec*)(&b));
}			
		 
inline Afp op (const Aff& a, const Biv& b) { 
	return Afp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Biv*)(&b));
}			
		 
inline Tnt op (const Aff& a, const Tri& b) { 
	return Tnt (
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Tri*)(&b));
}			
		 
inline Afl op (const Aff& a, const Aff& b) { 
	return Afl (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[3] * b[0],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Aff*)(&b));
}			
		 
inline Afp op (const Aff& a, const Afl& b) { 
	return Afp (
a[0] * b[4] - a[1] * b[3] + a[3] * b[0],
a[0] * b[5] - a[2] * b[3] + a[3] * b[1],
a[1] * b[5] - a[2] * b[4] + a[3] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Afl*)(&b));
}			
		 
inline Tnt op (const Aff& a, const Afp& b) { 
	return Tnt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Afp*)(&b));
}			
		 
inline Dal op (const Aff& a, const Dap& b) { 
	return Dal (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Dap*)(&b));
}			
		 
inline Pss op (const Aff& a, const Daf& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Daf*)(&b));
}			
		 
inline Daf op (const Aff& a, const Dal& b) { 
	return Daf (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Dal*)(&b));
}			
		 
inline Mnk_Biv op (const Aff& a, const Mnv& b) { 
	return Mnk_Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Aff, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Aff*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Aff& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Aff& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Aff& a, const Inf& b) { 
	return Sca (
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Inf*)(&b));
}			
		 
inline Ori ip (const Aff& a, const Mnk& b) { 
	return Ori (
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Aff& a, const Hyp& b) { 
	return Sca (
 - a[3] * b[1]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Hyp*)(&b));
}			
		 
inline Daf ip (const Aff& a, const Pss& b) { 
	return Daf (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Aff& a, const Pnt& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[4]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Pnt*)(&b));
}			
		 
inline Pnt ip (const Aff& a, const Par& b) { 
	return Pnt (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[6],
a[0] * b[0] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[2] + a[3] * b[8],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[3] * b[9],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Par*)(&b));
}			
		 
inline Par ip (const Aff& a, const Cir& b) { 
	return Par (
a[2] * b[9] - a[3] * b[3],
 - a[1] * b[9] - a[3] * b[4],
a[0] * b[9] - a[3] * b[5],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[6],
a[0] * b[0] - a[2] * b[2] - a[3] * b[7],
a[0] * b[1] + a[1] * b[2] - a[3] * b[8],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[3] - a[2] * b[5],
a[0] * b[4] + a[1] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Cir*)(&b));
}			
		 
inline Cir ip (const Aff& a, const Sph& b) { 
	return Cir (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
a[2] * b[4],
 - a[1] * b[4],
a[0] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[4]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Sph*)(&b));
}			
		 
inline Pnt ip (const Aff& a, const Sta& b) { 
	return Pnt (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[6],
a[0] * b[0] - a[2] * b[2] + a[3] * b[7],
a[0] * b[1] + a[1] * b[2] + a[3] * b[8],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Sta*)(&b));
}			
		 
inline Dlp ip (const Aff& a, const Drv& b) { 
	return Dlp (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Drv*)(&b));
}			
		 
inline Dll ip (const Aff& a, const Drb& b) { 
	return Dll (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Drb*)(&b));
}			
		 
inline Dfp ip (const Aff& a, const Drt& b) { 
	return Dfp (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Drt*)(&b));
}			
		 
inline Ori ip (const Aff& a, const Tnv& b) { 
	return Ori (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv ip (const Aff& a, const Tnb& b) { 
	return Tnv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnb ip (const Aff& a, const Tnt& b) { 
	return Tnb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Tnt*)(&b));
}			
		 
inline Par ip (const Aff& a, const Lin& b) { 
	return Par (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
 - a[3] * b[3],
 - a[3] * b[4],
 - a[3] * b[5],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Lin*)(&b));
}			
		 
inline Cir ip (const Aff& a, const Pln& b) { 
	return Cir (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Pln*)(&b));
}			
		 
inline Pnt ip (const Aff& a, const Flp& b) { 
	return Pnt (
a[3] * b[0],
a[3] * b[1],
a[3] * b[2],
a[3] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Flp*)(&b));
}			
		 
inline Dll ip (const Aff& a, const Dfp& b) { 
	return Dll (
a[2] * b[3] - a[3] * b[0],
 - a[1] * b[3] - a[3] * b[1],
a[0] * b[3] - a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Dfp*)(&b));
}			
		 
inline Dlp ip (const Aff& a, const Dll& b) { 
	return Dlp (
 - a[1] * b[0] - a[2] * b[1] + a[3] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[4],
a[0] * b[1] + a[1] * b[2] + a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Aff& a, const Dlp& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Aff& a, const Vec& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Vec*)(&b));
}			
		 
inline Vec ip (const Aff& a, const Biv& b) { 
	return Vec (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Biv*)(&b));
}			
		 
inline Biv ip (const Aff& a, const Tri& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Aff& a, const Aff& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Aff*)(&b));
}			
		 
inline Aff ip (const Aff& a, const Afl& b) { 
	return Aff (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Afl*)(&b));
}			
		 
inline Afl ip (const Aff& a, const Afp& b) { 
	return Afl (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Afp*)(&b));
}			
		 
inline Ori ip (const Aff& a, const Dap& b) { 
	return Ori (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Dap*)(&b));
}			
		 
inline Dal ip (const Aff& a, const Daf& b) { 
	return Dal (
a[2] * b[3] + a[3] * b[0],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] + a[3] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Daf*)(&b));
}			
		 
inline Dap ip (const Aff& a, const Dal& b) { 
	return Dap (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[3],
a[0] * b[0] - a[2] * b[2] - a[3] * b[4],
a[0] * b[1] + a[1] * b[2] - a[3] * b[5],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Dal*)(&b));
}			
		 
inline Dap ip (const Aff& a, const Mnv& b) { 
	return Dap (
 - a[3] * b[0],
 - a[3] * b[1],
 - a[3] * b[2],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Aff, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Aff*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Aff sp (const Aff& aff, const Rot& rot) {					
					
const Rot& t1 = rot;
const Aff& t2 = aff;
Vec_Afl t3 (
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
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1],
t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Mot& mot) {					
					
const Mot& t1 = mot;
const Aff& t2 = aff;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3],
t1[2] * t2[3],
t1[3] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
 - t1[4] * t2[3],
 - t1[5] * t2[3],
 - t1[6] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[7] * t2[3],
 - t1[7] * t2[3]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] - t3[7] * t5[7] - t3[14] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[5] - t3[5] * t5[4] + t3[6] * t5[7] + t3[7] * t5[6] + t3[14] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[6] - t3[5] * t5[7] - t3[6] * t5[4] - t3[7] * t5[5] - t3[14] * t5[1],
t3[3] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Dil& dil) {					
					
const Dil& t1 = dil;
const Aff& t2 = aff;
Ori_Flp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[3],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Aff (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] + t3[5] * t5[1],
t3[2] * t5[0] + t3[6] * t5[1],
t3[3] * t5[0] + t3[3] * t5[1]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Trv& trv) {					
					
const Trv& t1 = trv;
const Aff& t2 = aff;
Biv_Afp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Aff (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Aff& t2 = aff;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[6] * t2[3],
t1[0] * t2[3] - t1[7] * t2[3],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3] - t1[8] * t2[3],
t1[2] * t2[3] - t1[9] * t2[3],
t1[3] * t2[3] - t1[10] * t2[3],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[11] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[0],
 - t1[4] * t2[3] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
 - t1[5] * t2[3] + t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
 - t1[6] * t2[3] + t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[3],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0] - t1[11] * t2[3]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] - t3[7] * t5[11] + t3[11] * t5[7] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[3] - t3[15] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[5] - t3[5] * t5[4] + t3[6] * t5[11] + t3[7] * t5[6] + t3[11] * t5[8] + t3[12] * t5[7] - t3[13] * t5[10] + t3[14] * t5[2] + t3[15] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[6] - t3[5] * t5[11] - t3[6] * t5[4] - t3[7] * t5[5] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[7] - t3[14] * t5[1] - t3[15] * t5[8],
t3[3] * t5[0] + t3[3] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[7] * t5[3] - t3[7] * t5[10]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Trs& trs) {					
					
const Trs& t1 = trs;
const Aff& t2 = aff;
Pnt_Flp t3 (
t1[0] * t2[0] - t1[1] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] - t1[3] * t2[3],
t1[0] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
 - t1[1] * t2[3],
 - t1[2] * t2[3],
 - t1[3] * t2[3]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Aff (
t3[0] * t5[0] + t3[3] * t5[1],
t3[1] * t5[0] + t3[3] * t5[2],
t3[2] * t5[0] + t3[3] * t5[3],
t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Aff& t2 = aff;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] - t1[8] * t2[3] + t1[14] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[9] * t2[3] - t1[14] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] - t1[10] * t2[3] + t1[14] * t2[0],
t1[0] * t2[3] - t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[11] * t2[3],
t1[1] * t2[3] - t1[3] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2] - t1[12] * t2[3],
t1[2] * t2[3] - t1[3] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1] - t1[13] * t2[3],
 - t1[4] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
 - t1[4] * t2[1] + t1[8] * t2[0] - t1[10] * t2[2],
 - t1[4] * t2[2] + t1[9] * t2[0] + t1[10] * t2[1],
 - t1[4] * t2[3] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
 - t1[8] * t2[3] + t1[11] * t2[1] - t1[12] * t2[0] + t1[15] * t2[2],
 - t1[9] * t2[3] + t1[11] * t2[2] - t1[13] * t2[0] - t1[15] * t2[1],
 - t1[10] * t2[3] + t1[12] * t2[2] - t1[13] * t2[1] + t1[15] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0] + t1[14] * t2[3] - t1[15] * t2[3],
 - t1[8] * t2[2] + t1[9] * t2[1] - t1[10] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Aff (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[14] - t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[3] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[11] + t3[11] * t5[12] + t3[12] * t5[13] - t3[13] * t5[15] + t3[14] * t5[10] + t3[15] * t5[7],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] + t3[3] * t5[2] - t3[4] * t5[8] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[5] - t3[8] * t5[3] + t3[9] * t5[7] + t3[10] * t5[12] - t3[11] * t5[11] + t3[12] * t5[15] + t3[13] * t5[13] - t3[14] * t5[9] - t3[15] * t5[6],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[1] - t3[4] * t5[9] - t3[5] * t5[10] - t3[6] * t5[4] - t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[13] - t3[11] * t5[15] - t3[12] * t5[11] - t3[13] * t5[12] + t3[14] * t5[8] + t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] - t3[4] * t5[0] - t3[4] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] - t3[10] * t5[3] + t3[11] * t5[5] + t3[12] * t5[6] + t3[13] * t5[7] + t3[14] * t5[14] + t3[14] * t5[15]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Aff& t2 = aff;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[12] * t2[3] + t1[14] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[13] * t2[3] - t1[14] * t2[0],
 - t1[7] * t2[1] + t1[8] * t2[0] - t1[15] * t2[2],
 - t1[7] * t2[2] + t1[9] * t2[0] + t1[15] * t2[1],
 - t1[8] * t2[2] + t1[9] * t2[1] - t1[15] * t2[0],
 - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
 - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
 - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[15] * t2[3],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] - t1[15] * t2[3]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[15] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[5] * t5[15] - t3[6] * t5[7] - t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[14] + t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Aff& t2 = aff;
Vec_Afl t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] - t3[7] * t5[7]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Aff& t2 = aff;
Par_Tnb t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[4] * t2[3],
t1[1] * t2[3] - t1[5] * t2[3],
t1[2] * t2[3] - t1[6] * t2[3],
t1[3] * t2[3] - t1[7] * t2[3],
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[3] - t3[11] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[7] + t3[10] * t5[2] + t3[11] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[7] * t5[6] + t3[8] * t5[7] + t3[9] * t5[4] - t3[10] * t5[1] - t3[11] * t5[5],
t3[3] * t5[0] + t3[3] * t5[4] - t3[4] * t5[1] - t3[4] * t5[5] - t3[5] * t5[2] - t3[5] * t5[6] - t3[6] * t5[3] - t3[6] * t5[7]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Aff& t2 = aff;
Ori_Par t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[3],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Aff (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[3] * t5[0] + t3[3] * t5[4] - t3[7] * t5[1] - t3[8] * t5[2] - t3[9] * t5[3]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Aff& t2 = aff;
Pnt_Flp t3 (
t1[0] * t2[0] - t1[1] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] - t1[3] * t2[3],
t1[0] * t2[3] - t1[4] * t2[3],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[0],
 - t1[2] * t2[3] + t1[4] * t2[1],
 - t1[3] * t2[3] + t1[4] * t2[2]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Aff (
t3[0] * t5[0] + t3[3] * t5[1] + t3[8] * t5[4],
t3[1] * t5[0] + t3[3] * t5[2] + t3[9] * t5[4],
t3[2] * t5[0] + t3[3] * t5[3] + t3[10] * t5[4],
t3[3] * t5[0] + t3[3] * t5[4]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Trt& trt) {					
					
const Trt& t1 = trt;
const Aff& t2 = aff;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[3],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[12] * t2[3],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[13] * t2[3],
 - t1[7] * t2[1] + t1[8] * t2[0],
 - t1[7] * t2[2] + t1[9] * t2[0],
 - t1[8] * t2[2] + t1[9] * t2[1],
 - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
 - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
 - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Aff& t2 = aff;
Par_Tnb t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[8] * t2[3] - t1[11] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[9] * t2[3] + t1[11] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[0],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[3] - t3[11] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[2] + t3[11] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[1] - t3[11] * t5[8],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[7] - t3[4] * t5[1] - t3[4] * t5[8] - t3[5] * t5[2] - t3[5] * t5[9] - t3[6] * t5[3] - t3[6] * t5[10] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[11] + t3[11] * t5[11]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Tst& tst) {					
					
const Tst& t1 = tst;
const Aff& t2 = aff;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[12] * t2[3] + t1[14] * t2[1],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[13] * t2[3] - t1[14] * t2[0],
 - t1[7] * t2[1] + t1[8] * t2[0],
 - t1[7] * t2[2] + t1[9] * t2[0],
 - t1[8] * t2[2] + t1[9] * t2[1],
 - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
 - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
 - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6] - t3[14] * t5[14] + t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Aff& t2 = aff;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[3],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0] - t1[12] * t2[3],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[13] * t2[3],
 - t1[7] * t2[1] + t1[8] * t2[0] - t1[14] * t2[2],
 - t1[7] * t2[2] + t1[9] * t2[0] + t1[14] * t2[1],
 - t1[8] * t2[2] + t1[9] * t2[1] - t1[14] * t2[0],
 - t1[7] * t2[3] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
 - t1[8] * t2[3] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
 - t1[9] * t2[3] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[14] * t2[3],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0] - t1[14] * t2[3]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[14] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[5] * t5[14] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[3] - t3[7] * t5[13] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6]
);

}
		
	
	  	
template<>
inline Aff sp (const Aff& aff, const Bst& bst) {					
					
const Bst& t1 = bst;
const Aff& t2 = aff;
Pnt_Par t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[3],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[8] * t2[3],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[9] * t2[3],
t1[0] * t2[3] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[3],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[1] * t2[3] - t1[4] * t2[1] + t1[5] * t2[0],
t1[2] * t2[3] - t1[4] * t2[2] + t1[6] * t2[0],
t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1],
 - t1[7] * t2[1] + t1[8] * t2[0],
 - t1[7] * t2[2] + t1[9] * t2[0],
 - t1[8] * t2[2] + t1[9] * t2[1],
 - t1[7] * t2[3] + t1[10] * t2[0],
 - t1[8] * t2[3] + t1[10] * t2[1],
 - t1[9] * t2[3] + t1[10] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Aff (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[14] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[12] * t5[10] + t3[14] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[13] * t5[10] - t3[14] * t5[1],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[3] * t5[0] + t3[3] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3] - t3[11] * t5[4] - t3[12] * t5[5] - t3[13] * t5[6]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Vec& vec) {					
					
const Vec& t1 = vec;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Vec_Aff t4 (
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
return Aff (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Bst t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2] - t1[3] * t3[3],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
t1[0] * t3[3],
t1[1] * t3[3],
t1[2] * t3[3],
 - t1[3] * t3[0],
 - t1[3] * t3[1],
 - t1[3] * t3[2],
 - t1[3] * t3[3]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Aff (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[4] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2] - t4[5] * t6[3],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1] - t4[6] * t6[3],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Pln& pln) {					
					
const Pln& t1 = pln;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Pnt_Sph t4 (
 - t1[0] * t3[3],
 - t1[1] * t3[3],
 - t1[2] * t3[3],
 - t1[3] * t3[2],
t1[3] * t3[1],
 - t1[3] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[3] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] - t1[3] * t3[3]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Aff (
 - t4[2] * t6[3] - t4[7] * t6[0] - t4[8] * t6[1] - t4[10] * t6[2],
t4[1] * t6[3] + t4[6] * t6[0] - t4[8] * t6[2] + t4[10] * t6[1],
 - t4[0] * t6[3] + t4[6] * t6[1] + t4[7] * t6[2] - t4[10] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Dll& dll) {					
					
const Dll& t1 = dll;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Pnt_Dll t4 (
t1[0] * t3[1] + t1[1] * t3[2] - t1[3] * t3[3],
 - t1[0] * t3[0] + t1[2] * t3[2] - t1[4] * t3[3],
 - t1[1] * t3[0] - t1[2] * t3[1] - t1[5] * t3[3],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
t1[0] * t3[3],
t1[1] * t3[3],
t1[2] * t3[3],
 - t1[3] * t3[1] + t1[4] * t3[0],
 - t1[3] * t3[2] + t1[5] * t3[0],
 - t1[4] * t3[2] + t1[5] * t3[1],
 - t1[3] * t3[3],
 - t1[4] * t3[3],
 - t1[5] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Aff (
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[4] * t6[4] + t4[5] * t6[5] - t4[13] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[4] * t6[3] + t4[6] * t6[5] + t4[13] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[5] * t6[3] - t4[6] * t6[4] - t4[13] * t6[0],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Lin& lin) {					
					
const Lin& t1 = lin;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Pnt_Lin t4 (
 - t1[0] * t3[3],
 - t1[1] * t3[3],
 - t1[2] * t3[3],
 - t1[3] * t3[3],
 - t1[4] * t3[3],
 - t1[5] * t3[3],
 - t1[0] * t3[1] - t1[1] * t3[2],
t1[0] * t3[0] - t1[2] * t3[2],
t1[1] * t3[0] + t1[2] * t3[1],
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
 - t1[0] * t3[3] + t1[3] * t3[1] - t1[4] * t3[0],
 - t1[1] * t3[3] + t1[3] * t3[2] - t1[5] * t3[0],
 - t1[2] * t3[3] + t1[4] * t3[2] - t1[5] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Aff (
t4[4] * t6[0] + t4[5] * t6[1] + t4[9] * t6[3] + t4[10] * t6[4] + t4[11] * t6[5],
 - t4[3] * t6[0] + t4[5] * t6[2] + t4[9] * t6[4] - t4[10] * t6[3] + t4[12] * t6[5],
 - t4[3] * t6[1] - t4[4] * t6[2] + t4[9] * t6[5] - t4[11] * t6[3] - t4[12] * t6[4],
 - t4[3] * t6[3] - t4[4] * t6[4] - t4[5] * t6[5]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Bst t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2] - t1[4] * t3[3],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
t1[0] * t3[3] - t1[3] * t3[0],
t1[1] * t3[3] - t1[3] * t3[1],
t1[2] * t3[3] - t1[3] * t3[2],
 - t1[4] * t3[0],
 - t1[4] * t3[1],
 - t1[4] * t3[2],
 - t1[4] * t3[3]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Aff (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[4] * t6[4] - t4[7] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2] - t4[5] * t6[4] - t4[8] * t6[3],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1] - t4[6] * t6[4] - t4[9] * t6[3],
t4[0] * t6[3] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] - t4[10] * t6[3]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Par& par) {					
					
const Par& t1 = par;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Pnt_Par t4 (
t1[0] * t3[1] + t1[1] * t3[2] - t1[6] * t3[3],
 - t1[0] * t3[0] + t1[2] * t3[2] - t1[7] * t3[3],
 - t1[1] * t3[0] - t1[2] * t3[1] - t1[8] * t3[3],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2] - t1[9] * t3[3],
 - t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2],
t1[0] * t3[3] - t1[3] * t3[1] + t1[4] * t3[0],
t1[1] * t3[3] - t1[3] * t3[2] + t1[5] * t3[0],
t1[2] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1],
 - t1[6] * t3[1] + t1[7] * t3[0],
 - t1[6] * t3[2] + t1[8] * t3[0],
 - t1[7] * t3[2] + t1[8] * t3[1],
 - t1[6] * t3[3] + t1[9] * t3[0],
 - t1[7] * t3[3] + t1[9] * t3[1],
 - t1[8] * t3[3] + t1[9] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Aff (
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[3] * t6[6] + t4[4] * t6[3] + t4[5] * t6[7] + t4[6] * t6[8] + t4[8] * t6[4] + t4[9] * t6[5] + t4[11] * t6[9] - t4[14] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[7] + t4[4] * t6[4] - t4[5] * t6[6] + t4[7] * t6[8] - t4[8] * t6[3] + t4[10] * t6[5] + t4[12] * t6[9] + t4[14] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[3] * t6[8] + t4[4] * t6[5] - t4[6] * t6[6] - t4[7] * t6[7] - t4[9] * t6[3] - t4[10] * t6[4] + t4[13] * t6[9] - t4[14] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[3] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[2] - t4[11] * t6[3] - t4[12] * t6[4] - t4[13] * t6[5]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Cir& cir) {					
					
const Cir& t1 = cir;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Pnt_Cir t4 (
 - t1[3] * t3[3] + t1[9] * t3[2],
 - t1[4] * t3[3] - t1[9] * t3[1],
 - t1[5] * t3[3] + t1[9] * t3[0],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[6] * t3[3],
t1[0] * t3[0] - t1[2] * t3[2] - t1[7] * t3[3],
t1[1] * t3[0] + t1[2] * t3[1] - t1[8] * t3[3],
 - t1[3] * t3[1] - t1[4] * t3[2],
t1[3] * t3[0] - t1[5] * t3[2],
t1[4] * t3[0] + t1[5] * t3[1],
t1[6] * t3[0] + t1[7] * t3[1] + t1[8] * t3[2],
 - t1[3] * t3[3] + t1[6] * t3[1] - t1[7] * t3[0],
 - t1[4] * t3[3] + t1[6] * t3[2] - t1[8] * t3[0],
 - t1[5] * t3[3] + t1[7] * t3[2] - t1[8] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0] + t1[9] * t3[3],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Aff (
 - t4[2] * t6[9] + t4[4] * t6[3] + t4[5] * t6[4] + t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[6] + t4[10] * t6[7] + t4[11] * t6[8] + t4[13] * t6[5] + t4[14] * t6[2],
t4[1] * t6[9] - t4[3] * t6[3] + t4[5] * t6[5] - t4[6] * t6[0] + t4[8] * t6[2] + t4[9] * t6[7] - t4[10] * t6[6] + t4[12] * t6[8] - t4[13] * t6[4] - t4[14] * t6[1],
 - t4[0] * t6[9] - t4[3] * t6[4] - t4[4] * t6[5] - t4[6] * t6[1] - t4[7] * t6[2] + t4[9] * t6[8] - t4[11] * t6[6] - t4[12] * t6[7] + t4[13] * t6[3] + t4[14] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] - t4[3] * t6[6] - t4[4] * t6[7] - t4[5] * t6[8] + t4[10] * t6[0] + t4[11] * t6[1] + t4[12] * t6[2] + t4[13] * t6[9]
);

}
		
	
	  	
template<>
inline Aff re (const Aff& aff, const Sph& sph) {					
					
const Sph& t1 = sph;
const Aff& t2 = aff;
Aff t3 = involute( t2);
Pnt_Sph t4 (
 - t1[0] * t3[3] - t1[3] * t3[2],
 - t1[1] * t3[3] + t1[3] * t3[1],
 - t1[2] * t3[3] - t1[3] * t3[0],
 - t1[4] * t3[2],
t1[4] * t3[1],
 - t1[4] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[4] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] - t1[4] * t3[3]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Aff (
 - t4[2] * t6[4] - t4[5] * t6[3] - t4[7] * t6[0] - t4[8] * t6[1] - t4[10] * t6[2],
t4[1] * t6[4] + t4[4] * t6[3] + t4[6] * t6[0] - t4[8] * t6[2] + t4[10] * t6[1],
 - t4[0] * t6[4] - t4[3] * t6[3] + t4[6] * t6[1] + t4[7] * t6[2] - t4[10] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] - t4[9] * t6[3] + t4[10] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	