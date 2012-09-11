		#ifndef SPH_H_INCLUDED
		#define SPH_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Sph gp (const Sph& a, const Sca& b) { 
	return Sph (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Sca*)(&b));
}			
		 
inline Ori_Sph gp (const Sph& a, const Ori& b) { 
	return Ori_Sph (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[4] * b[0],
 - a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Ori*)(&b));
}			
		 
inline Inf_Sph gp (const Sph& a, const Inf& b) { 
	return Inf_Sph (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[3] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Inf*)(&b));
}			
		 
inline Mnk_Sph gp (const Sph& a, const Mnk& b) { 
	return Mnk_Sph (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
 - a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Sph gp (const Sph& a, const Hyp& b) { 
	return Hyp_Sph (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
 - a[3] * b[1] - a[4] * b[0],
a[3] * b[1] - a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Hyp*)(&b));
}			
		 
inline Pnt gp (const Sph& a, const Pss& b) { 
	return Pnt (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0],
 - a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Pss*)(&b));
}			
		 
inline Pnt_Sph gp (const Sph& a, const Pnt& b) { 
	return Pnt_Sph (
 - a[0] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] - a[3] * b[0],
a[0] * b[4] - a[4] * b[2],
a[1] * b[4] + a[4] * b[1],
a[2] * b[4] - a[4] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[4] - a[4] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[4] - a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Pnt*)(&b));
}			
		 
inline Pnt_Cir gp (const Sph& a, const Par& b) { 
	return Pnt_Cir (
a[0] * b[9] + a[3] * b[8] + a[4] * b[5],
a[1] * b[9] - a[3] * b[7] - a[4] * b[4],
a[2] * b[9] + a[3] * b[6] + a[4] * b[3],
 - a[0] * b[4] - a[1] * b[5] - a[3] * b[2],
a[0] * b[3] - a[2] * b[5] + a[3] * b[1],
a[1] * b[3] + a[2] * b[4] - a[3] * b[0],
a[0] * b[7] + a[1] * b[8] - a[4] * b[2],
 - a[0] * b[6] + a[2] * b[8] + a[4] * b[1],
 - a[1] * b[6] - a[2] * b[7] - a[4] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[8] + a[4] * b[5],
a[0] * b[2] - a[2] * b[0] + a[3] * b[7] - a[4] * b[4],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[6] + a[4] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3] + a[3] * b[9],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6] - a[4] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Par*)(&b));
}			
		 
inline Pnt_Par gp (const Sph& a, const Cir& b) { 
	return Pnt_Par (
a[0] * b[7] + a[1] * b[8] + a[3] * b[5] + a[4] * b[2],
 - a[0] * b[6] + a[2] * b[8] - a[3] * b[4] - a[4] * b[1],
 - a[1] * b[6] - a[2] * b[7] + a[3] * b[3] + a[4] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[9],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5] + a[4] * b[9],
a[1] * b[2] - a[2] * b[1] - a[3] * b[8],
 - a[0] * b[2] + a[2] * b[0] + a[3] * b[7],
a[0] * b[1] - a[1] * b[0] - a[3] * b[6],
 - a[1] * b[5] + a[2] * b[4] + a[4] * b[8],
a[0] * b[5] - a[2] * b[3] - a[4] * b[7],
 - a[0] * b[4] + a[1] * b[3] + a[4] * b[6],
 - a[2] * b[9] - a[3] * b[5] + a[4] * b[2],
a[1] * b[9] + a[3] * b[4] - a[4] * b[1],
 - a[0] * b[9] - a[3] * b[3] + a[4] * b[0],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Cir*)(&b));
}			
		 
inline Bst gp (const Sph& a, const Sph& b) { 
	return Bst (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[4] - a[4] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[2] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] - a[3] * b[0],
 - a[2] * b[4] + a[4] * b[2],
a[1] * b[4] - a[4] * b[1],
 - a[0] * b[4] + a[4] * b[0],
a[3] * b[4] - a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Sph*)(&b));
}			
		 
inline Pnt_Cir gp (const Sph& a, const Sta& b) { 
	return Pnt_Cir (
a[3] * b[8] + a[4] * b[5],
 - a[3] * b[7] - a[4] * b[4],
a[3] * b[6] + a[4] * b[3],
 - a[0] * b[4] - a[1] * b[5] - a[3] * b[2],
a[0] * b[3] - a[2] * b[5] + a[3] * b[1],
a[1] * b[3] + a[2] * b[4] - a[3] * b[0],
a[0] * b[7] + a[1] * b[8] - a[4] * b[2],
 - a[0] * b[6] + a[2] * b[8] + a[4] * b[1],
 - a[1] * b[6] - a[2] * b[7] - a[4] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[8] + a[4] * b[5],
a[0] * b[2] - a[2] * b[0] + a[3] * b[7] - a[4] * b[4],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[6] + a[4] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Sta*)(&b));
}			
		 
inline Inf_Cir gp (const Sph& a, const Drv& b) { 
	return Inf_Cir (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Drv*)(&b));
}			
		 
inline Inf_Par gp (const Sph& a, const Drb& b) { 
	return Inf_Par (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Drb*)(&b));
}			
		 
inline Tsd gp (const Sph& a, const Drt& b) { 
	return Tsd (
 - a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Drt*)(&b));
}			
		 
inline Ori_Cir gp (const Sph& a, const Tnv& b) { 
	return Ori_Cir (
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Tnv*)(&b));
}			
		 
inline Ori_Par gp (const Sph& a, const Tnb& b) { 
	return Ori_Par (
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Tnb*)(&b));
}			
		 
inline Tvd gp (const Sph& a, const Tnt& b) { 
	return Tvd (
 - a[4] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Tnt*)(&b));
}			
		 
inline Pnt_Dll gp (const Sph& a, const Lin& b) { 
	return Pnt_Dll (
a[0] * b[4] + a[1] * b[5] + a[3] * b[2],
 - a[0] * b[3] + a[2] * b[5] - a[3] * b[1],
 - a[1] * b[3] - a[2] * b[4] + a[3] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[3] * b[5],
a[3] * b[4],
 - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1] + a[4] * b[5],
a[0] * b[2] - a[2] * b[0] - a[4] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[3],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Lin*)(&b));
}			
		 
inline Bst gp (const Sph& a, const Pln& b) { 
	return Bst (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[2] * b[3] + a[4] * b[2],
a[1] * b[3] - a[4] * b[1],
 - a[0] * b[3] + a[4] * b[0],
a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Pln*)(&b));
}			
		 
inline Pnt_Dfp gp (const Sph& a, const Flp& b) { 
	return Pnt_Dfp (
a[0] * b[3] + a[3] * b[2],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] + a[3] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Flp*)(&b));
}			
		 
inline Pnt_Flp gp (const Sph& a, const Dfp& b) { 
	return Pnt_Flp (
a[3] * b[2],
 - a[3] * b[1],
a[3] * b[0],
a[3] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] + a[4] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[2] * b[3] - a[3] * b[2],
a[1] * b[3] + a[3] * b[1],
 - a[0] * b[3] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Dfp*)(&b));
}			
		 
inline Pnt_Lin gp (const Sph& a, const Dll& b) { 
	return Pnt_Lin (
a[3] * b[5],
 - a[3] * b[4],
a[3] * b[3],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[4] + a[1] * b[5] - a[4] * b[2],
 - a[0] * b[3] + a[2] * b[5] + a[4] * b[1],
 - a[1] * b[3] - a[2] * b[4] - a[4] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[5],
a[0] * b[2] - a[2] * b[0] + a[3] * b[4],
 - a[0] * b[1] + a[1] * b[0] - a[3] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Dll*)(&b));
}			
		 
inline Pnt_Sph gp (const Sph& a, const Dlp& b) { 
	return Pnt_Sph (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[0] * b[3] - a[4] * b[2],
a[1] * b[3] + a[4] * b[1],
a[2] * b[3] - a[4] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Dlp*)(&b));
}			
		 
inline Sph_Vec gp (const Sph& a, const Vec& b) { 
	return Sph_Vec (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[4] * b[2],
a[4] * b[1],
 - a[4] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Vec*)(&b));
}			
		 
inline Pnt_Mnv gp (const Sph& a, const Biv& b) { 
	return Pnt_Mnv (
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
 - a[4] * b[2],
a[4] * b[1],
 - a[4] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Biv*)(&b));
}			
		 
inline Mnk_Pnt gp (const Sph& a, const Tri& b) { 
	return Mnk_Pnt (
a[3] * b[0],
a[4] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Tri*)(&b));
}			
		 
inline Pnt_Sph gp (const Sph& a, const Aff& b) { 
	return Pnt_Sph (
 - a[0] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
 - a[2] * b[3] - a[3] * b[0],
 - a[4] * b[2],
a[4] * b[1],
 - a[4] * b[0],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[4] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Aff*)(&b));
}			
		 
inline Pnt_Dal gp (const Sph& a, const Afl& b) { 
	return Pnt_Dal (
a[4] * b[5],
 - a[4] * b[4],
a[4] * b[3],
 - a[0] * b[4] - a[1] * b[5] - a[3] * b[2],
a[0] * b[3] - a[2] * b[5] + a[3] * b[1],
a[1] * b[3] + a[2] * b[4] - a[3] * b[0],
 - a[4] * b[2],
a[4] * b[1],
 - a[4] * b[0],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] + a[4] * b[5],
a[0] * b[2] - a[2] * b[0] - a[4] * b[4],
 - a[0] * b[1] + a[1] * b[0] + a[4] * b[3],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Afl*)(&b));
}			
		 
inline Pnt_Dap gp (const Sph& a, const Afp& b) { 
	return Pnt_Dap (
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[4] * b[3],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[2] + a[2] * b[0],
a[0] * b[1] - a[1] * b[0],
 - a[2] * b[3] + a[4] * b[2],
a[1] * b[3] - a[4] * b[1],
 - a[0] * b[3] + a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Afp*)(&b));
}			
		 
inline Pnt_Afp gp (const Sph& a, const Dap& b) { 
	return Pnt_Afp (
a[0] * b[3] + a[4] * b[2],
a[1] * b[3] - a[4] * b[1],
a[2] * b[3] + a[4] * b[0],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[0] - a[2] * b[2],
a[1] * b[0] + a[2] * b[1],
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3],
 - a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Dap*)(&b));
}			
		 
inline Bst gp (const Sph& a, const Daf& b) { 
	return Bst (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[4] * b[3],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[2] * b[3] - a[3] * b[2],
 - a[1] * b[3] + a[3] * b[1],
a[0] * b[3] - a[3] * b[0],
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0],
 - a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Daf*)(&b));
}			
		 
inline Pnt_Afl gp (const Sph& a, const Dal& b) { 
	return Pnt_Afl (
a[0] * b[4] + a[1] * b[5] + a[4] * b[2],
 - a[0] * b[3] + a[2] * b[5] - a[4] * b[1],
 - a[1] * b[3] - a[2] * b[4] + a[4] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[1] * b[2] - a[2] * b[1] - a[3] * b[5],
 - a[0] * b[2] + a[2] * b[0] + a[3] * b[4],
a[0] * b[1] - a[1] * b[0] - a[3] * b[3],
a[4] * b[5],
 - a[4] * b[4],
a[4] * b[3],
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Dal*)(&b));
}			
		 
inline Pnt_Biv gp (const Sph& a, const Mnv& b) { 
	return Pnt_Biv (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
 - a[3] * b[2],
a[3] * b[1],
 - a[3] * b[0],
a[4] * b[2],
 - a[4] * b[1],
a[4] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Mnv*)(&b));
}			
		 
inline Mnk_Sta_Biv gp (const Sph& a, const Rot& b) { 
	return Mnk_Sta_Biv (
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
 - a[4] * b[3],
a[4] * b[2],
 - a[4] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0],
a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Rot*)(&b));
}			
		 
inline Mtt gp (const Sph& a, const Mot& b) { 
	return Mtt (
 - a[3] * b[7],
a[3] * b[6],
 - a[3] * b[5],
a[3] * b[4],
 - a[3] * b[3],
a[3] * b[2],
 - a[3] * b[1],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7] - a[4] * b[3],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[4] * b[2],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5] - a[4] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[7],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[4],
a[3] * b[0],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Mot*)(&b));
}			
		 
inline Hyp_Dfp gp (const Sph& a, const Dil& b) { 
	return Hyp_Dfp (
a[0] * b[1],
a[1] * b[1],
a[2] * b[1],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0] + a[3] * b[1],
a[4] * b[0] - a[4] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Dil*)(&b));
}			
		 
inline Pnt_Afp gp (const Sph& a, const Trv& b) { 
	return Pnt_Afp (
a[4] * b[3],
 - a[4] * b[2],
a[4] * b[1],
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0] + a[4] * b[3],
a[1] * b[0] - a[4] * b[2],
a[2] * b[0] + a[4] * b[1],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Trv*)(&b));
}			
		 
inline Mtt gp (const Sph& a, const Mtd& b) { 
	return Mtt (
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[3] * b[11],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9] + a[3] * b[6],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8] - a[3] * b[5],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7] + a[3] * b[4],
 - a[3] * b[3] - a[3] * b[10],
a[3] * b[2] + a[3] * b[9],
 - a[3] * b[1] - a[3] * b[8],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11] - a[4] * b[3] + a[4] * b[10],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[4] * b[2] - a[4] * b[9],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5] - a[4] * b[1] + a[4] * b[8],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[11],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[4],
a[3] * b[0] + a[3] * b[7],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[4] * b[0] - a[4] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Mtd*)(&b));
}			
		 
inline Pnt_Dfp gp (const Sph& a, const Trs& b) { 
	return Pnt_Dfp (
a[3] * b[3],
 - a[3] * b[2],
a[3] * b[1],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] - a[3] * b[3],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] - a[3] * b[1],
a[3] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Sph& a, const Rtc& b) { 
	return Rtc (
a[0] * b[12] + a[1] * b[13] - a[2] * b[15] + a[3] * b[10] + a[4] * b[7],
 - a[0] * b[11] + a[1] * b[15] + a[2] * b[13] - a[3] * b[9] - a[4] * b[6],
 - a[0] * b[15] - a[1] * b[11] - a[2] * b[12] + a[3] * b[8] + a[4] * b[5],
a[0] * b[5] + a[1] * b[6] + a[2] * b[7] + a[3] * b[14] + a[3] * b[15],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] + a[4] * b[14] - a[4] * b[15],
 - a[0] * b[3] + a[1] * b[7] - a[2] * b[6] - a[3] * b[2] - a[3] * b[13],
 - a[0] * b[7] - a[1] * b[3] + a[2] * b[5] + a[3] * b[1] + a[3] * b[12],
a[0] * b[6] - a[1] * b[5] - a[2] * b[3] - a[3] * b[0] - a[3] * b[11],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9] - a[4] * b[2] + a[4] * b[13],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8] + a[4] * b[1] - a[4] * b[12],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4] - a[4] * b[0] + a[4] * b[11],
a[0] * b[1] + a[1] * b[2] - a[2] * b[14] - a[3] * b[10] + a[4] * b[7],
 - a[0] * b[0] + a[1] * b[14] + a[2] * b[2] + a[3] * b[9] - a[4] * b[6],
 - a[0] * b[14] - a[1] * b[0] - a[2] * b[1] - a[3] * b[8] + a[4] * b[5],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] - a[3] * b[4] - a[4] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[4] - a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Sph& a, const Mtt& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[15] - a[4] * b[14],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[9] + a[4] * b[6],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[8] - a[4] * b[5],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[7] + a[4] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[14] - a[3] * b[3] - a[3] * b[13],
a[0] * b[4] - a[1] * b[14] - a[2] * b[6] + a[3] * b[2] + a[3] * b[12],
a[0] * b[14] + a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[11],
a[0] * b[8] + a[1] * b[9] - a[2] * b[15] - a[4] * b[3] + a[4] * b[13],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9] + a[4] * b[2] - a[4] * b[12],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8] - a[4] * b[1] + a[4] * b[11],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[15] - a[4] * b[14],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8] - a[4] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7] + a[4] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[4] * b[0] - a[4] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Mtt*)(&b));
}			
		 
inline Mtt gp (const Sph& a, const Rtt& b) { 
	return Mtt (
 - a[4] * b[7],
a[4] * b[6],
 - a[4] * b[5],
a[4] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[7] - a[3] * b[3],
a[0] * b[4] - a[1] * b[7] - a[2] * b[6] + a[3] * b[2],
a[0] * b[7] + a[1] * b[4] + a[2] * b[5] - a[3] * b[1],
 - a[4] * b[3],
a[4] * b[2],
 - a[4] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[4] * b[7],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[4] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[4] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0],
a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Rtt*)(&b));
}			
		 
inline Mtt gp (const Sph& a, const Rtd& b) { 
	return Mtt (
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7],
a[0] * b[4] - a[1] * b[7] + a[2] * b[6],
a[0] * b[7] + a[1] * b[4] - a[2] * b[5],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[4],
 - a[3] * b[3] - a[3] * b[7],
a[3] * b[2] + a[3] * b[6],
 - a[3] * b[1] - a[3] * b[5],
 - a[4] * b[3] + a[4] * b[7],
a[4] * b[2] - a[4] * b[6],
 - a[4] * b[1] + a[4] * b[5],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[3] * b[0] + a[3] * b[4],
a[4] * b[0] - a[4] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Rtd*)(&b));
}			
		 
inline Pnt_Afp gp (const Sph& a, const Tvd& b) { 
	return Pnt_Afp (
a[0] * b[4] + a[4] * b[3],
a[1] * b[4] - a[4] * b[2],
a[2] * b[4] + a[4] * b[1],
 - a[0] * b[2] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[1] * b[1] + a[2] * b[2],
a[0] * b[0] + a[4] * b[3],
a[1] * b[0] - a[4] * b[2],
a[2] * b[0] + a[4] * b[1],
 - a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[3] * b[4],
a[4] * b[0] - a[4] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Tvd*)(&b));
}			
		 
inline Pnt_Dfp gp (const Sph& a, const Tsd& b) { 
	return Pnt_Dfp (
a[0] * b[4] + a[3] * b[3],
a[1] * b[4] - a[3] * b[2],
a[2] * b[4] + a[3] * b[1],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] - a[3] * b[3],
a[1] * b[0] + a[3] * b[2],
a[2] * b[0] - a[3] * b[1],
a[3] * b[0] + a[3] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[4] * b[0] - a[4] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtt gp (const Sph& a, const Trt& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[9] + a[4] * b[6],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[8] - a[4] * b[5],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[7] + a[4] * b[4],
 - a[0] * b[5] - a[1] * b[6] - a[3] * b[3] - a[3] * b[13],
a[0] * b[4] - a[2] * b[6] + a[3] * b[2] + a[3] * b[12],
a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[11],
a[0] * b[8] + a[1] * b[9] - a[4] * b[3] + a[4] * b[13],
 - a[0] * b[7] + a[2] * b[9] + a[4] * b[2] - a[4] * b[12],
 - a[1] * b[7] - a[2] * b[8] - a[4] * b[1] + a[4] * b[11],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8] - a[4] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7] + a[4] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[4] * b[0] - a[4] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Trt*)(&b));
}			
		 
inline Mtt gp (const Sph& a, const Rvd& b) { 
	return Mtt (
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10] - a[4] * b[11],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9] + a[4] * b[6],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8] - a[4] * b[5],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7] + a[4] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[11] - a[3] * b[3] - a[3] * b[10],
a[0] * b[4] - a[1] * b[11] - a[2] * b[6] + a[3] * b[2] + a[3] * b[9],
a[0] * b[11] + a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[8],
 - a[4] * b[3] + a[4] * b[10],
a[4] * b[2] - a[4] * b[9],
 - a[4] * b[1] + a[4] * b[8],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[4] * b[11],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[4] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[4] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[4] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[7],
a[4] * b[0] - a[4] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Sph& a, const Tst& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[4] * b[14],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[9] + a[4] * b[6],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[8] - a[4] * b[5],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[7] + a[4] * b[4],
 - a[0] * b[5] - a[1] * b[6] + a[2] * b[14] - a[3] * b[3] - a[3] * b[13],
a[0] * b[4] - a[1] * b[14] - a[2] * b[6] + a[3] * b[2] + a[3] * b[12],
a[0] * b[14] + a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[11],
a[0] * b[8] + a[1] * b[9] - a[4] * b[3] + a[4] * b[13],
 - a[0] * b[7] + a[2] * b[9] + a[4] * b[2] - a[4] * b[12],
 - a[1] * b[7] - a[2] * b[8] - a[4] * b[1] + a[4] * b[11],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[4] * b[14],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8] - a[4] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7] + a[4] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[4] * b[0] - a[4] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Sph& a, const Tvt& b) { 
	return Mtt (
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13] - a[3] * b[14],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12] + a[3] * b[9] + a[4] * b[6],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11] - a[3] * b[8] - a[4] * b[5],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10] + a[3] * b[7] + a[4] * b[4],
 - a[0] * b[5] - a[1] * b[6] - a[3] * b[3] - a[3] * b[13],
a[0] * b[4] - a[2] * b[6] + a[3] * b[2] + a[3] * b[12],
a[1] * b[4] + a[2] * b[5] - a[3] * b[1] - a[3] * b[11],
a[0] * b[8] + a[1] * b[9] - a[2] * b[14] - a[4] * b[3] + a[4] * b[13],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9] + a[4] * b[2] - a[4] * b[12],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8] - a[4] * b[1] + a[4] * b[11],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3] + a[3] * b[14],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8] - a[4] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7] + a[4] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[4] * b[0] - a[4] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Tvt*)(&b));
}			
		 
inline Pnt_Cir gp (const Sph& a, const Bst& b) { 
	return Pnt_Cir (
a[0] * b[10] + a[3] * b[9] + a[4] * b[6],
a[1] * b[10] - a[3] * b[8] - a[4] * b[5],
a[2] * b[10] + a[3] * b[7] + a[4] * b[4],
 - a[0] * b[5] - a[1] * b[6] - a[3] * b[3],
a[0] * b[4] - a[2] * b[6] + a[3] * b[2],
a[1] * b[4] + a[2] * b[5] - a[3] * b[1],
a[0] * b[8] + a[1] * b[9] - a[4] * b[3],
 - a[0] * b[7] + a[2] * b[9] + a[4] * b[2],
 - a[1] * b[7] - a[2] * b[8] - a[4] * b[1],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2] - a[3] * b[9] + a[4] * b[6],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1] + a[3] * b[8] - a[4] * b[5],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[3] * b[7] + a[4] * b[4],
 - a[0] * b[6] + a[1] * b[5] - a[2] * b[4] + a[3] * b[0] + a[3] * b[10],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7] + a[4] * b[0] - a[4] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Sph, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Sph*)(&a),*(Bst*)(&b));
}			
		 
inline Sph op (const Sph& a, const Sca& b) { 
	return Sph (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Sca*)(&b));
}			
		 
inline Pss op (const Sph& a, const Ori& b) { 
	return Pss (
 - a[4] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Ori*)(&b));
}			
		 
inline Pss op (const Sph& a, const Inf& b) { 
	return Pss (
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Inf*)(&b));
}			
		 
inline Sca op (const Sph& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Mnk*)(&b));
}			
		 
inline Pss op (const Sph& a, const Hyp& b) { 
	return Pss (
a[3] * b[1] - a[4] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Sph& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Pss*)(&b));
}			
		 
inline Pss op (const Sph& a, const Pnt& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[4] - a[4] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca op (const Sph& a, const Par& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Par*)(&b));
}			
		 
inline Sca op (const Sph& a, const Cir& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Sph& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Sph*)(&b));
}			
		 
inline Sca op (const Sph& a, const Sta& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Sta*)(&b));
}			
		 
inline Sca op (const Sph& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Drv*)(&b));
}			
		 
inline Sca op (const Sph& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Sph& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Drt*)(&b));
}			
		 
inline Sca op (const Sph& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca op (const Sph& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Sph& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca op (const Sph& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Sph& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Pln*)(&b));
}			
		 
inline Sca op (const Sph& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Flp*)(&b));
}			
		 
inline Sca op (const Sph& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca op (const Sph& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Dll*)(&b));
}			
		 
inline Pss op (const Sph& a, const Dlp& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Dlp*)(&b));
}			
		 
inline Pss op (const Sph& a, const Vec& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Vec*)(&b));
}			
		 
inline Sca op (const Sph& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Biv*)(&b));
}			
		 
inline Sca op (const Sph& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Tri*)(&b));
}			
		 
inline Pss op (const Sph& a, const Aff& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Aff*)(&b));
}			
		 
inline Sca op (const Sph& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Afl*)(&b));
}			
		 
inline Sca op (const Sph& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Afp*)(&b));
}			
		 
inline Sca op (const Sph& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Sph& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Daf*)(&b));
}			
		 
inline Sca op (const Sph& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Dal*)(&b));
}			
		 
inline Sca op (const Sph& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Sph, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Sph*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Hyp*)(&b));
}			
		 
inline Pnt ip (const Sph& a, const Pss& b) { 
	return Pnt (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0],
a[3] * b[0],
 - a[4] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Par& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Par*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Cir& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Cir*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Sph& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[4] - a[4] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Sph*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Sta& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Drv*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Drb*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Drt& b) { 
	return Sca (
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Tnt& b) { 
	return Sca (
 - a[4] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Lin*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Pln& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Flp*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Biv*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Afl*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Dap*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Daf& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[4] * b[3]
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Daf*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Dal*)(&b));
}			
		 
inline Sca ip (const Sph& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Sph, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Sph*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Sph sp (const Sph& sph, const Rot& rot) {					
					
const Rot& t1 = rot;
const Sph& t2 = sph;
Mnk_Sta_Biv t3 (
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
 - t1[3] * t2[4],
t1[2] * t2[4],
 - t1[1] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3],
t1[0] * t2[4]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Sph (
t3[6] * t5[1] + t3[7] * t5[0] - t3[8] * t5[3] + t3[9] * t5[2],
t3[6] * t5[2] + t3[7] * t5[3] + t3[8] * t5[0] - t3[9] * t5[1],
t3[6] * t5[3] - t3[7] * t5[2] + t3[8] * t5[1] + t3[9] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[10] * t5[0],
t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[11] * t5[0]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Mot& mot) {					
					
const Mot& t1 = mot;
const Sph& t2 = sph;
Mtt t3 (
 - t1[7] * t2[3],
t1[6] * t2[3],
 - t1[5] * t2[3],
t1[4] * t2[3],
 - t1[3] * t2[3],
t1[2] * t2[3],
 - t1[1] * t2[3],
 - t1[3] * t2[4] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
t1[2] * t2[4] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
 - t1[1] * t2[4] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[7] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[4] * t2[3],
t1[0] * t2[3],
t1[0] * t2[4] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Sph (
 - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[7] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[6],
 - t3[4] * t5[6] + t3[5] * t5[7] + t3[6] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[5],
 - t3[4] * t5[7] - t3[5] * t5[6] + t3[6] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[4],
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[14] * t5[0],
t3[0] * t5[7] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[7] + t3[11] * t5[6] - t3[12] * t5[5] + t3[13] * t5[4] + t3[15] * t5[0]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Dil& dil) {					
					
const Dil& t1 = dil;
const Sph& t2 = sph;
Hyp_Dfp t3 (
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3] - t1[1] * t2[3],
t1[0] * t2[4] + t1[1] * t2[4]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Sph (
t3[0] * t5[1] + t3[3] * t5[0],
t3[1] * t5[1] + t3[4] * t5[0],
t3[2] * t5[1] + t3[5] * t5[0],
t3[6] * t5[0] + t3[6] * t5[1],
t3[7] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Trv& trv) {					
					
const Trv& t1 = trv;
const Sph& t2 = sph;
Pnt_Afp t3 (
t1[3] * t2[4],
 - t1[2] * t2[4],
t1[1] * t2[4],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[0] - t1[3] * t2[4],
t1[0] * t2[1] + t1[2] * t2[4],
t1[0] * t2[2] - t1[1] * t2[4],
t1[0] * t2[3] + t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Sph (
t3[6] * t5[0] + t3[10] * t5[3],
t3[7] * t5[0] - t3[10] * t5[2],
t3[8] * t5[0] + t3[10] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] - t3[6] * t5[3] + t3[7] * t5[2] - t3[8] * t5[1] + t3[9] * t5[0],
t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Sph& t2 = sph;
Mtt t3 (
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2] - t1[11] * t2[3],
t1[6] * t2[3] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
 - t1[5] * t2[3] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[4] * t2[3] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
 - t1[3] * t2[3] + t1[10] * t2[3],
t1[2] * t2[3] - t1[9] * t2[3],
 - t1[1] * t2[3] + t1[8] * t2[3],
 - t1[3] * t2[4] + t1[5] * t2[0] + t1[6] * t2[1] - t1[10] * t2[4] + t1[11] * t2[2],
t1[2] * t2[4] - t1[4] * t2[0] + t1[6] * t2[2] + t1[9] * t2[4] - t1[11] * t2[1],
 - t1[1] * t2[4] - t1[4] * t2[1] - t1[5] * t2[2] - t1[8] * t2[4] + t1[11] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[11] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[6] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] - t1[5] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[4] * t2[3],
t1[0] * t2[3] - t1[7] * t2[3],
t1[0] * t2[4] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0] + t1[7] * t2[4]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Sph (
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[11] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[6],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] - t3[4] * t5[6] + t3[5] * t5[11] + t3[6] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[5],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] - t3[4] * t5[11] - t3[5] * t5[6] + t3[6] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[4],
t3[4] * t5[3] + t3[4] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] + t3[14] * t5[0] + t3[14] * t5[7],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[7] * t5[3] - t3[7] * t5[10] - t3[8] * t5[2] + t3[8] * t5[9] + t3[9] * t5[1] - t3[9] * t5[8] + t3[10] * t5[11] + t3[11] * t5[6] - t3[12] * t5[5] + t3[13] * t5[4] + t3[15] * t5[0] - t3[15] * t5[7]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Trs& trs) {					
					
const Trs& t1 = trs;
const Sph& t2 = sph;
Pnt_Dfp t3 (
t1[3] * t2[3],
 - t1[2] * t2[3],
t1[1] * t2[3],
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[0] + t1[3] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] + t1[1] * t2[3],
t1[0] * t2[3],
t1[0] * t2[4] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Sph (
t3[6] * t5[0] - t3[9] * t5[3],
t3[7] * t5[0] + t3[9] * t5[2],
t3[8] * t5[0] - t3[9] * t5[1],
t3[9] * t5[0],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[6] * t5[3] - t3[7] * t5[2] + t3[8] * t5[1] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Sph& t2 = sph;
Rtc t3 (
 - t1[7] * t2[4] - t1[10] * t2[3] - t1[12] * t2[0] - t1[13] * t2[1] - t1[15] * t2[2],
t1[6] * t2[4] + t1[9] * t2[3] + t1[11] * t2[0] - t1[13] * t2[2] + t1[15] * t2[1],
 - t1[5] * t2[4] - t1[8] * t2[3] + t1[11] * t2[1] + t1[12] * t2[2] - t1[15] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2] - t1[14] * t2[3] + t1[15] * t2[3],
t1[8] * t2[0] + t1[9] * t2[1] + t1[10] * t2[2] - t1[14] * t2[4] - t1[15] * t2[4],
t1[2] * t2[3] + t1[3] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1] - t1[13] * t2[3],
 - t1[1] * t2[3] + t1[3] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0] + t1[12] * t2[3],
t1[0] * t2[3] + t1[3] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[11] * t2[3],
t1[2] * t2[4] - t1[4] * t2[0] + t1[9] * t2[2] - t1[10] * t2[1] + t1[13] * t2[4],
 - t1[1] * t2[4] - t1[4] * t2[1] - t1[8] * t2[2] + t1[10] * t2[0] - t1[12] * t2[4],
t1[0] * t2[4] - t1[4] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[11] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] + t1[7] * t2[4] - t1[10] * t2[3] - t1[14] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] - t1[6] * t2[4] + t1[9] * t2[3] + t1[14] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] + t1[5] * t2[4] - t1[8] * t2[3] - t1[14] * t2[0],
t1[3] * t2[4] + t1[4] * t2[3] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[3] * t2[4] + t1[4] * t2[3]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Sph (
t3[0] * t5[12] - t3[1] * t5[11] + t3[2] * t5[15] + t3[3] * t5[8] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[10] + t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[1] - t3[12] * t5[0] + t3[13] * t5[14] + t3[14] * t5[13] + t3[15] * t5[2],
t3[0] * t5[13] - t3[1] * t5[15] - t3[2] * t5[11] + t3[3] * t5[9] - t3[4] * t5[6] + t3[5] * t5[10] + t3[6] * t5[4] - t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[2] - t3[12] * t5[14] - t3[13] * t5[0] - t3[14] * t5[12] - t3[15] * t5[1],
t3[0] * t5[15] + t3[1] * t5[13] - t3[2] * t5[12] + t3[3] * t5[10] - t3[4] * t5[7] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[14] + t3[12] * t5[2] - t3[13] * t5[1] + t3[14] * t5[11] + t3[15] * t5[0],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] - t3[3] * t5[14] - t3[3] * t5[15] - t3[5] * t5[2] - t3[5] * t5[13] + t3[6] * t5[1] + t3[6] * t5[12] - t3[7] * t5[0] - t3[7] * t5[11] - t3[11] * t5[7] + t3[12] * t5[6] - t3[13] * t5[5] + t3[14] * t5[3] - t3[15] * t5[3],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] - t3[4] * t5[14] + t3[4] * t5[15] - t3[8] * t5[2] + t3[8] * t5[13] + t3[9] * t5[1] - t3[9] * t5[12] - t3[10] * t5[0] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[9] + t3[13] * t5[8] + t3[14] * t5[4] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Sph& t2 = sph;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[14] * t2[4] - t1[15] * t2[3],
t1[6] * t2[4] + t1[9] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[4] * t2[4] + t1[7] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[13] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[12] * t2[3] + t1[14] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[11] * t2[3] - t1[14] * t2[0],
 - t1[3] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[4] + t1[15] * t2[2],
t1[2] * t2[4] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[4] - t1[15] * t2[1],
 - t1[1] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[4] + t1[15] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[14] * t2[4] - t1[15] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[4] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[4]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Sph (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[15] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[15] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[10] * t5[14] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10],
t3[0] * t5[15] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[15] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Sph& t2 = sph;
Mtt t3 (
 - t1[7] * t2[4],
t1[6] * t2[4],
 - t1[5] * t2[4],
t1[4] * t2[4],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
 - t1[3] * t2[4],
t1[2] * t2[4],
 - t1[1] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[4],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[4],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[0] * t2[4]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Sph (
t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] + t3[15] * t5[6],
t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] - t3[15] * t5[5],
t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] - t3[10] * t5[7] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0],
t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[15] * t5[0]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Sph& t2 = sph;
Mtt t3 (
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
 - t1[3] * t2[3] + t1[7] * t2[3],
t1[2] * t2[3] - t1[6] * t2[3],
 - t1[1] * t2[3] + t1[5] * t2[3],
 - t1[3] * t2[4] - t1[7] * t2[4],
t1[2] * t2[4] + t1[6] * t2[4],
 - t1[1] * t2[4] - t1[5] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[0] * t2[3] - t1[4] * t2[3],
t1[0] * t2[4] + t1[4] * t2[4]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Sph (
t3[0] * t5[5] + t3[1] * t5[4] - t3[2] * t5[7] + t3[3] * t5[6] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[4] - t3[3] * t5[5] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] + t3[3] * t5[4] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0],
t3[4] * t5[3] + t3[4] * t5[7] - t3[5] * t5[2] - t3[5] * t5[6] + t3[6] * t5[1] + t3[6] * t5[5] + t3[14] * t5[0] + t3[14] * t5[4],
t3[7] * t5[3] - t3[7] * t5[7] - t3[8] * t5[2] + t3[8] * t5[6] + t3[9] * t5[1] - t3[9] * t5[5] + t3[15] * t5[0] - t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Sph& t2 = sph;
Pnt_Afp t3 (
t1[3] * t2[4] + t1[4] * t2[0],
 - t1[2] * t2[4] + t1[4] * t2[1],
t1[1] * t2[4] + t1[4] * t2[2],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[0] - t1[3] * t2[4],
t1[0] * t2[1] + t1[2] * t2[4],
t1[0] * t2[2] - t1[1] * t2[4],
t1[0] * t2[3] + t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[4] * t2[3],
t1[0] * t2[4] + t1[4] * t2[4]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Sph (
t3[0] * t5[4] + t3[6] * t5[0] + t3[10] * t5[3],
t3[1] * t5[4] + t3[7] * t5[0] - t3[10] * t5[2],
t3[2] * t5[4] + t3[8] * t5[0] + t3[10] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] - t3[6] * t5[3] + t3[7] * t5[2] - t3[8] * t5[1] + t3[9] * t5[0] + t3[9] * t5[4],
t3[10] * t5[0] - t3[10] * t5[4]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Sph& t2 = sph;
Pnt_Dfp t3 (
t1[3] * t2[3] + t1[4] * t2[0],
 - t1[2] * t2[3] + t1[4] * t2[1],
t1[1] * t2[3] + t1[4] * t2[2],
t1[2] * t2[0] + t1[3] * t2[1],
 - t1[1] * t2[0] + t1[3] * t2[2],
 - t1[1] * t2[1] - t1[2] * t2[2],
t1[0] * t2[0] + t1[3] * t2[3],
t1[0] * t2[1] - t1[2] * t2[3],
t1[0] * t2[2] + t1[1] * t2[3],
t1[0] * t2[3] - t1[4] * t2[3],
t1[0] * t2[4] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0] + t1[4] * t2[4]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Sph (
t3[0] * t5[4] + t3[6] * t5[0] - t3[9] * t5[3],
t3[1] * t5[4] + t3[7] * t5[0] + t3[9] * t5[2],
t3[2] * t5[4] + t3[8] * t5[0] - t3[9] * t5[1],
t3[9] * t5[0] + t3[9] * t5[4],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[6] * t5[3] - t3[7] * t5[2] + t3[8] * t5[1] + t3[10] * t5[0] - t3[10] * t5[4]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Trt& trt) {					
					
const Trt& t1 = trt;
const Sph& t2 = sph;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[6] * t2[4] + t1[9] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[4] * t2[4] + t1[7] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[13] * t2[3],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[12] * t2[3],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[11] * t2[3],
 - t1[3] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[4],
t1[2] * t2[4] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[4],
 - t1[1] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[4] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[4]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Sph (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10],
t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Sph& t2 = sph;
Mtt t3 (
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2] - t1[11] * t2[4],
t1[6] * t2[4] + t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
 - t1[5] * t2[4] + t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[4] * t2[4] + t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[10] * t2[3] - t1[11] * t2[2],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[9] * t2[3] + t1[11] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[8] * t2[3] - t1[11] * t2[0],
 - t1[3] * t2[4] - t1[10] * t2[4],
t1[2] * t2[4] + t1[9] * t2[4],
 - t1[1] * t2[4] - t1[8] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[11] * t2[4],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[4],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[7] * t2[3],
t1[0] * t2[4] + t1[7] * t2[4]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Sph (
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] + t3[15] * t5[6],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] - t3[15] * t5[5],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] + t3[15] * t5[4],
t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] - t3[10] * t5[11] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[7],
t3[7] * t5[3] - t3[7] * t5[10] - t3[8] * t5[2] + t3[8] * t5[9] + t3[9] * t5[1] - t3[9] * t5[8] + t3[15] * t5[0] - t3[15] * t5[7]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Tst& tst) {					
					
const Tst& t1 = tst;
const Sph& t2 = sph;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[14] * t2[4],
t1[6] * t2[4] + t1[9] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[4] * t2[4] + t1[7] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[13] * t2[3] - t1[14] * t2[2],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[12] * t2[3] + t1[14] * t2[1],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[11] * t2[3] - t1[14] * t2[0],
 - t1[3] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[4],
t1[2] * t2[4] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[4],
 - t1[1] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[4],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[14] * t2[4],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[4] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[4]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Sph (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[10] * t5[14] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10],
t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Sph& t2 = sph;
Mtt t3 (
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[14] * t2[3],
t1[6] * t2[4] + t1[9] * t2[3] + t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
 - t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[4] * t2[4] + t1[7] * t2[3] + t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1] + t1[13] * t2[3],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2] - t1[12] * t2[3],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[11] * t2[3],
 - t1[3] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1] - t1[13] * t2[4] + t1[14] * t2[2],
t1[2] * t2[4] - t1[7] * t2[0] + t1[9] * t2[2] + t1[12] * t2[4] - t1[14] * t2[1],
 - t1[1] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2] - t1[11] * t2[4] + t1[14] * t2[0],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[14] * t2[3],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[4] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[4]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Sph (
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[14] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[14] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10],
t3[0] * t5[14] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[14] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Sph sp (const Sph& sph, const Bst& bst) {					
					
const Bst& t1 = bst;
const Sph& t2 = sph;
Pnt_Cir t3 (
t1[6] * t2[4] + t1[9] * t2[3] + t1[10] * t2[0],
 - t1[5] * t2[4] - t1[8] * t2[3] + t1[10] * t2[1],
t1[4] * t2[4] + t1[7] * t2[3] + t1[10] * t2[2],
 - t1[3] * t2[3] - t1[5] * t2[0] - t1[6] * t2[1],
t1[2] * t2[3] + t1[4] * t2[0] - t1[6] * t2[2],
 - t1[1] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2],
 - t1[3] * t2[4] + t1[8] * t2[0] + t1[9] * t2[1],
t1[2] * t2[4] - t1[7] * t2[0] + t1[9] * t2[2],
 - t1[1] * t2[4] - t1[7] * t2[1] - t1[8] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[4] + t1[9] * t2[3],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[4] - t1[8] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[4] + t1[7] * t2[3],
t1[0] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] - t1[10] * t2[3],
t1[0] * t2[4] - t1[7] * t2[2] + t1[8] * t2[1] - t1[9] * t2[0] + t1[10] * t2[4]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Sph (
t3[0] * t5[10] - t3[3] * t5[8] + t3[4] * t5[7] + t3[6] * t5[5] - t3[7] * t5[4] + t3[9] * t5[1] + t3[10] * t5[0] - t3[11] * t5[3] + t3[12] * t5[2] - t3[13] * t5[9] + t3[14] * t5[6],
t3[1] * t5[10] - t3[3] * t5[9] + t3[5] * t5[7] + t3[6] * t5[6] - t3[8] * t5[4] + t3[9] * t5[2] + t3[10] * t5[3] + t3[11] * t5[0] - t3[12] * t5[1] + t3[13] * t5[8] - t3[14] * t5[5],
t3[2] * t5[10] - t3[4] * t5[9] + t3[5] * t5[8] + t3[7] * t5[6] - t3[8] * t5[5] + t3[9] * t5[3] - t3[10] * t5[2] + t3[11] * t5[1] + t3[12] * t5[0] - t3[13] * t5[7] + t3[14] * t5[4],
t3[0] * t5[6] - t3[1] * t5[5] + t3[2] * t5[4] + t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] - t3[10] * t5[6] + t3[11] * t5[5] - t3[12] * t5[4] + t3[13] * t5[0] + t3[13] * t5[10],
t3[0] * t5[9] - t3[1] * t5[8] + t3[2] * t5[7] + t3[6] * t5[3] - t3[7] * t5[2] + t3[8] * t5[1] + t3[10] * t5[9] - t3[11] * t5[8] + t3[12] * t5[7] + t3[14] * t5[0] - t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Sph re (const Sph& sph, const Vec& vec) {					
					
const Vec& t1 = vec;
const Sph& t2 = sph;
Sph t3 = involute( t2);
Sph_Vec t4 (
t1[2] * t3[3],
 - t1[1] * t3[3],
t1[0] * t3[3],
t1[2] * t3[4],
 - t1[1] * t3[4],
t1[0] * t3[4],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Sph (
t4[6] * t6[1] - t4[7] * t6[0] + t4[9] * t6[2],
t4[6] * t6[2] - t4[8] * t6[0] - t4[9] * t6[1],
t4[7] * t6[2] - t4[8] * t6[1] + t4[9] * t6[0],
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0],
 - t4[3] * t6[2] + t4[4] * t6[1] - t4[5] * t6[0]
);

}
		
	
	  	
template<>
inline Sph re (const Sph& sph, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Sph& t2 = sph;
Sph t3 = involute( t2);
Pnt_Sph t4 (
t1[2] * t3[3],
 - t1[1] * t3[3],
t1[0] * t3[3],
t1[2] * t3[4] - t1[3] * t3[0],
 - t1[1] * t3[4] - t1[3] * t3[1],
t1[0] * t3[4] - t1[3] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[3] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] + t1[3] * t3[3]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Sph (
t4[0] * t6[3] + t4[6] * t6[1] - t4[7] * t6[0] + t4[10] * t6[2],
t4[1] * t6[3] + t4[6] * t6[2] - t4[8] * t6[0] - t4[10] * t6[1],
t4[2] * t6[3] + t4[7] * t6[2] - t4[8] * t6[1] + t4[10] * t6[0],
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0],
 - t4[3] * t6[2] + t4[4] * t6[1] - t4[5] * t6[0] + t4[9] * t6[3] + t4[10] * t6[3]
);

}
		
	
	  	
template<>
inline Sph re (const Sph& sph, const Pln& pln) {					
					
const Pln& t1 = pln;
const Sph& t2 = sph;
Sph t3 = involute( t2);
Bst t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] - t1[3] * t3[3],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
t1[2] * t3[3],
 - t1[1] * t3[3],
t1[0] * t3[3],
 - t1[2] * t3[4] + t1[3] * t3[2],
t1[1] * t3[4] - t1[3] * t3[1],
 - t1[0] * t3[4] + t1[3] * t3[0],
 - t1[3] * t3[3]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Sph (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] - t4[6] * t6[3],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[5] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[4] * t6[3],
t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0],
t4[0] * t6[3] - t4[7] * t6[2] + t4[8] * t6[1] - t4[9] * t6[0] + t4[10] * t6[3]
);

}
		
	
	  	
template<>
inline Sph re (const Sph& sph, const Dll& dll) {					
					
const Dll& t1 = dll;
const Sph& t2 = sph;
Sph t3 = involute( t2);
Pnt_Lin t4 (
t1[5] * t3[3],
 - t1[4] * t3[3],
t1[3] * t3[3],
 - t1[2] * t3[3],
t1[1] * t3[3],
 - t1[0] * t3[3],
 - t1[2] * t3[4] + t1[4] * t3[0] + t1[5] * t3[1],
t1[1] * t3[4] - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[0] * t3[4] - t1[3] * t3[1] - t1[4] * t3[2],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1] + t1[5] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] - t1[4] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] + t1[3] * t3[3],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Sph (
 - t4[3] * t6[4] + t4[4] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1],
 - t4[3] * t6[5] + t4[5] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0],
 - t4[4] * t6[5] + t4[5] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0],
t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0],
t4[0] * t6[5] - t4[1] * t6[4] + t4[2] * t6[3] + t4[6] * t6[2] - t4[7] * t6[1] + t4[8] * t6[0] + t4[10] * t6[5] - t4[11] * t6[4] + t4[12] * t6[3]
);

}
		
	
	  	
template<>
inline Sph re (const Sph& sph, const Lin& lin) {					
					
const Lin& t1 = lin;
const Sph& t2 = sph;
Sph t3 = involute( t2);
Pnt_Dll t4 (
 - t1[2] * t3[3] - t1[4] * t3[0] - t1[5] * t3[1],
t1[1] * t3[3] + t1[3] * t3[0] - t1[5] * t3[2],
 - t1[0] * t3[3] + t1[3] * t3[1] + t1[4] * t3[2],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
 - t1[5] * t3[3],
t1[4] * t3[3],
 - t1[3] * t3[3],
t1[1] * t3[2] - t1[2] * t3[1] + t1[5] * t3[4],
 - t1[0] * t3[2] + t1[2] * t3[0] - t1[4] * t3[4],
t1[0] * t3[1] - t1[1] * t3[0] + t1[3] * t3[4],
 - t1[2] * t3[3],
t1[1] * t3[3],
 - t1[0] * t3[3],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Sph (
t4[0] * t6[4] - t4[1] * t6[3] - t4[5] * t6[2] + t4[6] * t6[1] + t4[13] * t6[5],
t4[0] * t6[5] - t4[2] * t6[3] + t4[4] * t6[2] - t4[6] * t6[0] - t4[13] * t6[4],
t4[1] * t6[5] - t4[2] * t6[4] - t4[4] * t6[1] + t4[5] * t6[0] + t4[13] * t6[3],
 - t4[4] * t6[5] + t4[5] * t6[4] - t4[6] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[7] * t6[5] - t4[8] * t6[4] + t4[9] * t6[3] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0]
);

}
		
	
	  	
template<>
inline Sph re (const Sph& sph, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Sph& t2 = sph;
Sph t3 = involute( t2);
Pnt_Sph t4 (
t1[2] * t3[3] + t1[3] * t3[0],
 - t1[1] * t3[3] + t1[3] * t3[1],
t1[0] * t3[3] + t1[3] * t3[2],
t1[2] * t3[4] - t1[4] * t3[0],
 - t1[1] * t3[4] - t1[4] * t3[1],
t1[0] * t3[4] - t1[4] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[3] * t3[4] + t1[4] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] - t1[3] * t3[4] + t1[4] * t3[3]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Sph (
t4[0] * t6[4] - t4[3] * t6[3] + t4[6] * t6[1] - t4[7] * t6[0] + t4[10] * t6[2],
t4[1] * t6[4] - t4[4] * t6[3] + t4[6] * t6[2] - t4[8] * t6[0] - t4[10] * t6[1],
t4[2] * t6[4] - t4[5] * t6[3] + t4[7] * t6[2] - t4[8] * t6[1] + t4[10] * t6[0],
 - t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0] + t4[9] * t6[3] - t4[10] * t6[3],
 - t4[3] * t6[2] + t4[4] * t6[1] - t4[5] * t6[0] + t4[9] * t6[4] + t4[10] * t6[4]
);

}
		
	
	  	
template<>
inline Sph re (const Sph& sph, const Par& par) {					
					
const Par& t1 = par;
const Sph& t2 = sph;
Sph t3 = involute( t2);
Pnt_Cir t4 (
t1[5] * t3[4] + t1[8] * t3[3] + t1[9] * t3[0],
 - t1[4] * t3[4] - t1[7] * t3[3] + t1[9] * t3[1],
t1[3] * t3[4] + t1[6] * t3[3] + t1[9] * t3[2],
 - t1[2] * t3[3] - t1[4] * t3[0] - t1[5] * t3[1],
t1[1] * t3[3] + t1[3] * t3[0] - t1[5] * t3[2],
 - t1[0] * t3[3] + t1[3] * t3[1] + t1[4] * t3[2],
 - t1[2] * t3[4] + t1[7] * t3[0] + t1[8] * t3[1],
t1[1] * t3[4] - t1[6] * t3[0] + t1[8] * t3[2],
 - t1[0] * t3[4] - t1[6] * t3[1] - t1[7] * t3[2],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1] - t1[5] * t3[4] + t1[8] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] + t1[4] * t3[4] - t1[7] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] - t1[3] * t3[4] + t1[6] * t3[3],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0] - t1[9] * t3[3],
 - t1[6] * t3[2] + t1[7] * t3[1] - t1[8] * t3[0] + t1[9] * t3[4]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Sph (
t4[0] * t6[9] - t4[3] * t6[7] + t4[4] * t6[6] + t4[6] * t6[4] - t4[7] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1] - t4[13] * t6[8] + t4[14] * t6[5],
t4[1] * t6[9] - t4[3] * t6[8] + t4[5] * t6[6] + t4[6] * t6[5] - t4[8] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0] + t4[13] * t6[7] - t4[14] * t6[4],
t4[2] * t6[9] - t4[4] * t6[8] + t4[5] * t6[7] + t4[7] * t6[5] - t4[8] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0] - t4[13] * t6[6] + t4[14] * t6[3],
t4[0] * t6[5] - t4[1] * t6[4] + t4[2] * t6[3] + t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0] - t4[10] * t6[5] + t4[11] * t6[4] - t4[12] * t6[3] + t4[13] * t6[9],
t4[0] * t6[8] - t4[1] * t6[7] + t4[2] * t6[6] + t4[6] * t6[2] - t4[7] * t6[1] + t4[8] * t6[0] + t4[10] * t6[8] - t4[11] * t6[7] + t4[12] * t6[6] - t4[14] * t6[9]
);

}
		
	
	  	
template<>
inline Sph re (const Sph& sph, const Cir& cir) {					
					
const Cir& t1 = cir;
const Sph& t2 = sph;
Sph t3 = involute( t2);
Pnt_Par t4 (
 - t1[2] * t3[4] - t1[5] * t3[3] - t1[7] * t3[0] - t1[8] * t3[1],
t1[1] * t3[4] + t1[4] * t3[3] + t1[6] * t3[0] - t1[8] * t3[2],
 - t1[0] * t3[4] - t1[3] * t3[3] + t1[6] * t3[1] + t1[7] * t3[2],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] - t1[9] * t3[3],
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2] - t1[9] * t3[4],
 - t1[1] * t3[2] + t1[2] * t3[1] - t1[8] * t3[3],
t1[0] * t3[2] - t1[2] * t3[0] + t1[7] * t3[3],
 - t1[0] * t3[1] + t1[1] * t3[0] - t1[6] * t3[3],
t1[4] * t3[2] - t1[5] * t3[1] + t1[8] * t3[4],
 - t1[3] * t3[2] + t1[5] * t3[0] - t1[7] * t3[4],
t1[3] * t3[1] - t1[4] * t3[0] + t1[6] * t3[4],
t1[2] * t3[4] - t1[5] * t3[3] - t1[9] * t3[2],
 - t1[1] * t3[4] + t1[4] * t3[3] + t1[9] * t3[1],
t1[0] * t3[4] - t1[3] * t3[3] - t1[9] * t3[0],
t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Sph (
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[3] - t4[4] * t6[0] - t4[6] * t6[5] + t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[13] * t6[9] + t4[14] * t6[8],
t4[0] * t6[8] - t4[2] * t6[6] + t4[3] * t6[4] - t4[4] * t6[1] + t4[5] * t6[5] - t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] - t4[12] * t6[9] - t4[14] * t6[7],
t4[1] * t6[8] - t4[2] * t6[7] + t4[3] * t6[5] - t4[4] * t6[2] - t4[5] * t6[4] + t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[11] * t6[9] + t4[14] * t6[6],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[3] * t6[9] - t4[5] * t6[8] + t4[6] * t6[7] - t4[7] * t6[6] - t4[11] * t6[2] + t4[12] * t6[1] - t4[13] * t6[0],
t4[0] * t6[5] - t4[1] * t6[4] + t4[2] * t6[3] - t4[4] * t6[9] + t4[8] * t6[8] - t4[9] * t6[7] + t4[10] * t6[6] + t4[11] * t6[5] - t4[12] * t6[4] + t4[13] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	