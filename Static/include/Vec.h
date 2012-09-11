		#ifndef VEC_H_INCLUDED
		#define VEC_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Vec gp (const Vec& a, const Sca& b) { 
	return Vec (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Sca*)(&b));
}			
		 
inline Tnv gp (const Vec& a, const Ori& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Ori*)(&b));
}			
		 
inline Drv gp (const Vec& a, const Inf& b) { 
	return Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Inf*)(&b));
}			
		 
inline Mnv gp (const Vec& a, const Mnk& b) { 
	return Mnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Vec gp (const Vec& a, const Hyp& b) { 
	return Hyp_Vec (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Hyp*)(&b));
}			
		 
inline Mnk_Biv gp (const Vec& a, const Pss& b) { 
	return Mnk_Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Pss*)(&b));
}			
		 
inline Pnt_Vec gp (const Vec& a, const Pnt& b) { 
	return Pnt_Vec (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Pnt*)(&b));
}			
		 
inline Pnt_Par gp (const Vec& a, const Par& b) { 
	return Pnt_Par (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
a[0] * b[9],
a[1] * b[9],
a[2] * b[9],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Par*)(&b));
}			
		 
inline Pnt_Cir gp (const Vec& a, const Cir& b) { 
	return Pnt_Cir (
a[2] * b[9],
 - a[1] * b[9],
a[0] * b[9],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[3] - a[2] * b[5],
a[0] * b[4] + a[1] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Cir*)(&b));
}			
		 
inline Sph_Vec gp (const Vec& a, const Sph& b) { 
	return Sph_Vec (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[2] * b[4],
 - a[1] * b[4],
a[0] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Sph*)(&b));
}			
		 
inline Sta_Vec gp (const Vec& a, const Sta& b) { 
	return Sta_Vec (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Sta*)(&b));
}			
		 
inline Drv_Lin gp (const Vec& a, const Drv& b) { 
	return Drv_Lin (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Drv*)(&b));
}			
		 
inline Drv_Pln gp (const Vec& a, const Drb& b) { 
	return Drv_Pln (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Drb*)(&b));
}			
		 
inline Drb gp (const Vec& a, const Drt& b) { 
	return Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Drt*)(&b));
}			
		 
inline Tnv_Vec gp (const Vec& a, const Tnv& b) { 
	return Tnv_Vec (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv_Biv gp (const Vec& a, const Tnb& b) { 
	return Tnv_Biv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnb gp (const Vec& a, const Tnt& b) { 
	return Tnb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Tnt*)(&b));
}			
		 
inline Lin_Dlp gp (const Vec& a, const Lin& b) { 
	return Lin_Dlp (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Lin*)(&b));
}			
		 
inline Pln_Dlp gp (const Vec& a, const Pln& b) { 
	return Pln_Dlp (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Pln*)(&b));
}			
		 
inline Pln_Dfp gp (const Vec& a, const Flp& b) { 
	return Pln_Dfp (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Flp*)(&b));
}			
		 
inline Pln_Flp gp (const Vec& a, const Dfp& b) { 
	return Pln_Flp (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Dfp*)(&b));
}			
		 
inline Lin_Pln gp (const Vec& a, const Dll& b) { 
	return Lin_Pln (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Dll*)(&b));
}			
		 
inline Pln_Pln gp (const Vec& a, const Dlp& b) { 
	return Pln_Pln (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Dlp*)(&b));
}			
		 
inline Rot gp (const Vec& a, const Vec& b) { 
	return Rot (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Vec*)(&b));
}			
		 
inline Vec_Biv gp (const Vec& a, const Biv& b) { 
	return Vec_Biv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Biv*)(&b));
}			
		 
inline Biv gp (const Vec& a, const Tri& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Tri*)(&b));
}			
		 
inline Vec_Aff gp (const Vec& a, const Aff& b) { 
	return Vec_Aff (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Aff*)(&b));
}			
		 
inline Vec_Afl gp (const Vec& a, const Afl& b) { 
	return Vec_Afl (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Afl*)(&b));
}			
		 
inline Vec_Afp gp (const Vec& a, const Afp& b) { 
	return Vec_Afp (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Afp*)(&b));
}			
		 
inline Vec_Dap gp (const Vec& a, const Dap& b) { 
	return Vec_Dap (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Dap*)(&b));
}			
		 
inline Vec_Daf gp (const Vec& a, const Daf& b) { 
	return Vec_Daf (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Daf*)(&b));
}			
		 
inline Vec_Dal gp (const Vec& a, const Dal& b) { 
	return Vec_Dal (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Dal*)(&b));
}			
		 
inline Vec_Mnv gp (const Vec& a, const Mnv& b) { 
	return Vec_Mnv (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Mnv*)(&b));
}			
		 
inline Vec_Biv gp (const Vec& a, const Rot& b) { 
	return Vec_Biv (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Rot*)(&b));
}			
		 
inline Lin_Pln gp (const Vec& a, const Mot& b) { 
	return Lin_Pln (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Mot*)(&b));
}			
		 
inline Ori_Drv gp (const Vec& a, const Dil& b) { 
	return Ori_Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Dil*)(&b));
}			
		 
inline Biv_Afp gp (const Vec& a, const Trv& b) { 
	return Biv_Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Trv*)(&b));
}			
		 
inline Par_Drb gp (const Vec& a, const Mtd& b) { 
	return Par_Drb (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Mtd*)(&b));
}			
		 
inline Lin_Flp gp (const Vec& a, const Trs& b) { 
	return Lin_Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Trs*)(&b));
}			
		 
inline Mtt gp (const Vec& a, const Rtc& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Rtc*)(&b));
}			
		 
inline Rtc gp (const Vec& a, const Mtt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Mtt*)(&b));
}			
		 
inline Vec_Afl gp (const Vec& a, const Rtt& b) { 
	return Vec_Afl (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Rtt*)(&b));
}			
		 
inline Drv_Tnb gp (const Vec& a, const Rtd& b) { 
	return Drv_Tnb (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Rtd*)(&b));
}			
		 
inline Ori_Par gp (const Vec& a, const Tvd& b) { 
	return Ori_Par (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Tvd*)(&b));
}			
		 
inline Inf_Par gp (const Vec& a, const Tsd& b) { 
	return Inf_Par (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Tsd*)(&b));
}			
		 
inline Rtc gp (const Vec& a, const Trt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Trt*)(&b));
}			
		 
inline Par_Tnb gp (const Vec& a, const Rvd& b) { 
	return Par_Tnb (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Rvd*)(&b));
}			
		 
inline Rtc gp (const Vec& a, const Tst& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Tst*)(&b));
}			
		 
inline Rtc gp (const Vec& a, const Tvt& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Tvt*)(&b));
}			
		 
inline Pnt_Par gp (const Vec& a, const Bst& b) { 
	return Pnt_Par (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[10],
a[1] * b[10],
a[2] * b[10],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Vec, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Vec*)(&a),*(Bst*)(&b));
}			
		 
inline Vec op (const Vec& a, const Sca& b) { 
	return Vec (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Sca*)(&b));
}			
		 
inline Tnv op (const Vec& a, const Ori& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Ori*)(&b));
}			
		 
inline Drv op (const Vec& a, const Inf& b) { 
	return Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Inf*)(&b));
}			
		 
inline Mnv op (const Vec& a, const Mnk& b) { 
	return Mnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Vec op (const Vec& a, const Hyp& b) { 
	return Hyp_Vec (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Vec& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Pss*)(&b));
}			
		 
inline Sta op (const Vec& a, const Pnt& b) { 
	return Sta (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Pnt*)(&b));
}			
		 
inline Cir op (const Vec& a, const Par& b) { 
	return Cir (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
a[0] * b[9],
a[1] * b[9],
a[2] * b[9],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Par*)(&b));
}			
		 
inline Sph op (const Vec& a, const Cir& b) { 
	return Sph (
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Cir*)(&b));
}			
		 
inline Pss op (const Vec& a, const Sph& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Sph*)(&b));
}			
		 
inline Drb op (const Vec& a, const Drv& b) { 
	return Drb (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Drv*)(&b));
}			
		 
inline Drt op (const Vec& a, const Drb& b) { 
	return Drt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Vec& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Drt*)(&b));
}			
		 
inline Tnb op (const Vec& a, const Tnv& b) { 
	return Tnb (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnt op (const Vec& a, const Tnb& b) { 
	return Tnt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Vec& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Tnt*)(&b));
}			
		 
inline Pln op (const Vec& a, const Lin& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Lin*)(&b));
}			
		 
inline Pss op (const Vec& a, const Pln& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Pln*)(&b));
}			
		 
inline Lin op (const Vec& a, const Flp& b) { 
	return Lin (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Flp*)(&b));
}			
		 
inline Drt op (const Vec& a, const Dfp& b) { 
	return Drt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Dfp*)(&b));
}			
		 
inline Dfp op (const Vec& a, const Dll& b) { 
	return Dfp (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Dll*)(&b));
}			
		 
inline Dll op (const Vec& a, const Dlp& b) { 
	return Dll (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Dlp*)(&b));
}			
		 
inline Biv op (const Vec& a, const Vec& b) { 
	return Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Vec*)(&b));
}			
		 
inline Tri op (const Vec& a, const Biv& b) { 
	return Tri (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Biv*)(&b));
}			
		 
inline Sca op (const Vec& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Tri*)(&b));
}			
		 
inline Afl op (const Vec& a, const Aff& b) { 
	return Afl (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Aff*)(&b));
}			
		 
inline Afp op (const Vec& a, const Afl& b) { 
	return Afp (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Afl*)(&b));
}			
		 
inline Tnt op (const Vec& a, const Afp& b) { 
	return Tnt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Afp*)(&b));
}			
		 
inline Dal op (const Vec& a, const Dap& b) { 
	return Dal (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Dap*)(&b));
}			
		 
inline Pss op (const Vec& a, const Daf& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Daf*)(&b));
}			
		 
inline Daf op (const Vec& a, const Dal& b) { 
	return Daf (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Dal*)(&b));
}			
		 
inline Mnk_Biv op (const Vec& a, const Mnv& b) { 
	return Mnk_Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Vec, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Vec*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Vec& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Vec& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Vec& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Vec& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Vec& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Hyp*)(&b));
}			
		 
inline Mnk_Biv ip (const Vec& a, const Pss& b) { 
	return Mnk_Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Vec& a, const Pnt& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Pnt*)(&b));
}			
		 
inline Pnt ip (const Vec& a, const Par& b) { 
	return Pnt (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Par*)(&b));
}			
		 
inline Par ip (const Vec& a, const Cir& b) { 
	return Par (
a[2] * b[9],
 - a[1] * b[9],
a[0] * b[9],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[3] - a[2] * b[5],
a[0] * b[4] + a[1] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Cir*)(&b));
}			
		 
inline Pss_Sta ip (const Vec& a, const Sph& b) { 
	return Pss_Sta (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[2] * b[4],
 - a[1] * b[4],
a[0] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Sph*)(&b));
}			
		 
inline Pnt ip (const Vec& a, const Sta& b) { 
	return Pnt (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Sta*)(&b));
}			
		 
inline Inf ip (const Vec& a, const Drv& b) { 
	return Inf (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Drv*)(&b));
}			
		 
inline Drv ip (const Vec& a, const Drb& b) { 
	return Drv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Drb*)(&b));
}			
		 
inline Drb ip (const Vec& a, const Drt& b) { 
	return Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Drt*)(&b));
}			
		 
inline Ori ip (const Vec& a, const Tnv& b) { 
	return Ori (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv ip (const Vec& a, const Tnb& b) { 
	return Tnv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnb ip (const Vec& a, const Tnt& b) { 
	return Tnb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Tnt*)(&b));
}			
		 
inline Flp ip (const Vec& a, const Lin& b) { 
	return Flp (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Lin*)(&b));
}			
		 
inline Lin ip (const Vec& a, const Pln& b) { 
	return Lin (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Pln*)(&b));
}			
		 
inline Inf ip (const Vec& a, const Flp& b) { 
	return Inf (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Flp*)(&b));
}			
		 
inline Dll ip (const Vec& a, const Dfp& b) { 
	return Dll (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Dfp*)(&b));
}			
		 
inline Dlp ip (const Vec& a, const Dll& b) { 
	return Dlp (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Vec& a, const Dlp& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Vec& a, const Vec& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Vec*)(&b));
}			
		 
inline Vec ip (const Vec& a, const Biv& b) { 
	return Vec (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Biv*)(&b));
}			
		 
inline Biv ip (const Vec& a, const Tri& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Vec& a, const Aff& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Aff*)(&b));
}			
		 
inline Aff ip (const Vec& a, const Afl& b) { 
	return Aff (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Afl*)(&b));
}			
		 
inline Afl ip (const Vec& a, const Afp& b) { 
	return Afl (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Afp*)(&b));
}			
		 
inline Ori ip (const Vec& a, const Dap& b) { 
	return Ori (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Dap*)(&b));
}			
		 
inline Dal ip (const Vec& a, const Daf& b) { 
	return Dal (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Daf*)(&b));
}			
		 
inline Dap ip (const Vec& a, const Dal& b) { 
	return Dap (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Dal*)(&b));
}			
		 
inline Mnk ip (const Vec& a, const Mnv& b) { 
	return Mnk (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Vec, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Vec*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Vec sp (const Vec& vec, const Rot& rot) {					
					
const Rot& t1 = rot;
const Vec& t2 = vec;
Vec_Biv t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Vec (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Mot& mot) {					
					
const Mot& t1 = mot;
const Vec& t2 = vec;
Lin_Pln t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Vec (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Dil& dil) {					
					
const Dil& t1 = dil;
const Vec& t2 = vec;
Ori_Drv t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Vec (
t3[0] * t5[0] + t3[3] * t5[1],
t3[1] * t5[0] + t3[4] * t5[1],
t3[2] * t5[0] + t3[5] * t5[1]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Trv& trv) {					
					
const Trv& t1 = trv;
const Vec& t2 = vec;
Biv_Afp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Vec (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Vec& t2 = vec;
Par_Drb t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[11] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[0],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Vec (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[3] - t3[11] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[2] + t3[11] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[1] - t3[11] * t5[8]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Trs& trs) {					
					
const Trs& t1 = trs;
const Vec& t2 = vec;
Lin_Flp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Vec (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Vec& t2 = vec;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[14] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[14] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[14] * t2[0],
 - t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[3] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[3] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
 - t1[4] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
 - t1[4] * t2[1] + t1[8] * t2[0] - t1[10] * t2[2],
 - t1[4] * t2[2] + t1[9] * t2[0] + t1[10] * t2[1],
t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[11] * t2[1] - t1[12] * t2[0] + t1[15] * t2[2],
t1[11] * t2[2] - t1[13] * t2[0] - t1[15] * t2[1],
t1[12] * t2[2] - t1[13] * t2[1] + t1[15] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
 - t1[8] * t2[2] + t1[9] * t2[1] - t1[10] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Vec (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[14] - t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[3] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[11] + t3[11] * t5[12] + t3[12] * t5[13] - t3[13] * t5[15] + t3[14] * t5[10] + t3[15] * t5[7],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] + t3[3] * t5[2] - t3[4] * t5[8] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[5] - t3[8] * t5[3] + t3[9] * t5[7] + t3[10] * t5[12] - t3[11] * t5[11] + t3[12] * t5[15] + t3[13] * t5[13] - t3[14] * t5[9] - t3[15] * t5[6],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[1] - t3[4] * t5[9] - t3[5] * t5[10] - t3[6] * t5[4] - t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[13] - t3[11] * t5[15] - t3[12] * t5[11] - t3[13] * t5[12] + t3[14] * t5[8] + t3[15] * t5[5]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Vec& t2 = vec;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
 - t1[7] * t2[1] + t1[8] * t2[0] - t1[15] * t2[2],
 - t1[7] * t2[2] + t1[9] * t2[0] + t1[15] * t2[1],
 - t1[8] * t2[2] + t1[9] * t2[1] - t1[15] * t2[0],
t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Vec (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[15] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[5] * t5[15] - t3[6] * t5[7] - t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Vec& t2 = vec;
Vec_Afl t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Vec (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Vec& t2 = vec;
Drv_Tnb t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Vec (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[4] - t3[4] * t5[5] - t3[5] * t5[6] - t3[6] * t5[3] - t3[7] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[5] + t3[4] * t5[4] - t3[5] * t5[7] + t3[6] * t5[2] + t3[7] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[6] + t3[4] * t5[7] + t3[5] * t5[4] - t3[6] * t5[1] - t3[7] * t5[5]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Vec& t2 = vec;
Ori_Par t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Vec (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Vec& t2 = vec;
Inf_Par t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Vec (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Trt& trt) {					
					
const Trt& t1 = trt;
const Vec& t2 = vec;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
 - t1[7] * t2[1] + t1[8] * t2[0],
 - t1[7] * t2[2] + t1[9] * t2[0],
 - t1[8] * t2[2] + t1[9] * t2[1],
t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Vec (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Vec& t2 = vec;
Par_Tnb t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[11] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[0],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Vec (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[3] - t3[11] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[2] + t3[11] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[1] - t3[11] * t5[8]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Tst& tst) {					
					
const Tst& t1 = tst;
const Vec& t2 = vec;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
 - t1[7] * t2[1] + t1[8] * t2[0],
 - t1[7] * t2[2] + t1[9] * t2[0],
 - t1[8] * t2[2] + t1[9] * t2[1],
t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Vec (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Vec& t2 = vec;
Rtc t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
 - t1[7] * t2[1] + t1[8] * t2[0] - t1[14] * t2[2],
 - t1[7] * t2[2] + t1[9] * t2[0] + t1[14] * t2[1],
 - t1[8] * t2[2] + t1[9] * t2[1] - t1[14] * t2[0],
t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Vec (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[14] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[5] * t5[14] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Vec sp (const Vec& vec, const Bst& bst) {					
					
const Bst& t1 = bst;
const Vec& t2 = vec;
Pnt_Par t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
 - t1[7] * t2[1] + t1[8] * t2[0],
 - t1[7] * t2[2] + t1[9] * t2[0],
 - t1[8] * t2[2] + t1[9] * t2[1],
t1[10] * t2[0],
t1[10] * t2[1],
t1[10] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Vec (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] + t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[14] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] + t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] + t3[10] * t5[6] + t3[12] * t5[10] + t3[14] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] + t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] - t3[10] * t5[5] + t3[13] * t5[10] - t3[14] * t5[1]
);

}
		
	
	  	
template<>
inline Vec re (const Vec& vec, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Vec& t2 = vec;
Vec t3 = involute( t2);
Pln_Pln t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
 - t1[3] * t3[0],
 - t1[3] * t3[1],
 - t1[3] * t3[2]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Vec (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1]
);

}
		
	
	  	
template<>
inline Vec re (const Vec& vec, const Pln& pln) {					
					
const Pln& t1 = pln;
const Vec& t2 = vec;
Vec t3 = involute( t2);
Pln_Dlp t4 (
 - t1[3] * t3[2],
t1[3] * t3[1],
 - t1[3] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Vec (
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
t4[3] * t6[0] - t4[5] * t6[2] + t4[6] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Vec re (const Vec& vec, const Dll& dll) {					
					
const Dll& t1 = dll;
const Vec& t2 = vec;
Vec t3 = involute( t2);
Lin_Pln t4 (
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[3] * t3[1] + t1[4] * t3[0],
 - t1[3] * t3[2] + t1[5] * t3[0],
 - t1[4] * t3[2] + t1[5] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Vec (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[7] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[7] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[7] * t6[0]
);

}
		
	
	  	
template<>
inline Vec re (const Vec& vec, const Lin& lin) {					
					
const Lin& t1 = lin;
const Vec& t2 = vec;
Vec t3 = involute( t2);
Lin_Dlp t4 (
 - t1[0] * t3[1] - t1[1] * t3[2],
t1[0] * t3[0] - t1[2] * t3[2],
t1[1] * t3[0] + t1[2] * t3[1],
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
t1[3] * t3[1] - t1[4] * t3[0],
t1[3] * t3[2] - t1[5] * t3[0],
t1[4] * t3[2] - t1[5] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Vec (
t4[3] * t6[3] + t4[4] * t6[4] + t4[5] * t6[5],
t4[3] * t6[4] - t4[4] * t6[3] + t4[6] * t6[5],
t4[3] * t6[5] - t4[5] * t6[3] - t4[6] * t6[4]
);

}
		
	
	  	
template<>
inline Vec re (const Vec& vec, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Vec& t2 = vec;
Vec t3 = involute( t2);
Pnt_Vec t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
 - t1[3] * t3[0],
 - t1[3] * t3[1],
 - t1[3] * t3[2],
 - t1[4] * t3[0],
 - t1[4] * t3[1],
 - t1[4] * t3[2]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Vec (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[4] * t6[4] - t4[7] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2] - t4[5] * t6[4] - t4[8] * t6[3],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1] - t4[6] * t6[4] - t4[9] * t6[3]
);

}
		
	
	  	
template<>
inline Vec re (const Vec& vec, const Par& par) {					
					
const Par& t1 = par;
const Vec& t2 = vec;
Vec t3 = involute( t2);
Pnt_Par t4 (
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2],
 - t1[3] * t3[1] + t1[4] * t3[0],
 - t1[3] * t3[2] + t1[5] * t3[0],
 - t1[4] * t3[2] + t1[5] * t3[1],
 - t1[6] * t3[1] + t1[7] * t3[0],
 - t1[6] * t3[2] + t1[8] * t3[0],
 - t1[7] * t3[2] + t1[8] * t3[1],
t1[9] * t3[0],
t1[9] * t3[1],
t1[9] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Vec (
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[3] * t6[6] + t4[4] * t6[3] + t4[5] * t6[7] + t4[6] * t6[8] + t4[8] * t6[4] + t4[9] * t6[5] + t4[11] * t6[9] - t4[14] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[7] + t4[4] * t6[4] - t4[5] * t6[6] + t4[7] * t6[8] - t4[8] * t6[3] + t4[10] * t6[5] + t4[12] * t6[9] + t4[14] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[3] * t6[8] + t4[4] * t6[5] - t4[6] * t6[6] - t4[7] * t6[7] - t4[9] * t6[3] - t4[10] * t6[4] + t4[13] * t6[9] - t4[14] * t6[0]
);

}
		
	
	  	
template<>
inline Vec re (const Vec& vec, const Cir& cir) {					
					
const Cir& t1 = cir;
const Vec& t2 = vec;
Vec t3 = involute( t2);
Pnt_Cir t4 (
t1[9] * t3[2],
 - t1[9] * t3[1],
t1[9] * t3[0],
 - t1[0] * t3[1] - t1[1] * t3[2],
t1[0] * t3[0] - t1[2] * t3[2],
t1[1] * t3[0] + t1[2] * t3[1],
 - t1[3] * t3[1] - t1[4] * t3[2],
t1[3] * t3[0] - t1[5] * t3[2],
t1[4] * t3[0] + t1[5] * t3[1],
t1[6] * t3[0] + t1[7] * t3[1] + t1[8] * t3[2],
t1[6] * t3[1] - t1[7] * t3[0],
t1[6] * t3[2] - t1[8] * t3[0],
t1[7] * t3[2] - t1[8] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0],
 - t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Vec (
 - t4[2] * t6[9] + t4[4] * t6[3] + t4[5] * t6[4] + t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[6] + t4[10] * t6[7] + t4[11] * t6[8] + t4[13] * t6[5] + t4[14] * t6[2],
t4[1] * t6[9] - t4[3] * t6[3] + t4[5] * t6[5] - t4[6] * t6[0] + t4[8] * t6[2] + t4[9] * t6[7] - t4[10] * t6[6] + t4[12] * t6[8] - t4[13] * t6[4] - t4[14] * t6[1],
 - t4[0] * t6[9] - t4[3] * t6[4] - t4[4] * t6[5] - t4[6] * t6[1] - t4[7] * t6[2] + t4[9] * t6[8] - t4[11] * t6[6] - t4[12] * t6[7] + t4[13] * t6[3] + t4[14] * t6[0]
);

}
		
	
	  	
template<>
inline Vec re (const Vec& vec, const Sph& sph) {					
					
const Sph& t1 = sph;
const Vec& t2 = vec;
Vec t3 = involute( t2);
Sph_Vec t4 (
 - t1[3] * t3[2],
t1[3] * t3[1],
 - t1[3] * t3[0],
 - t1[4] * t3[2],
t1[4] * t3[1],
 - t1[4] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Vec (
 - t4[2] * t6[4] - t4[5] * t6[3] - t4[7] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2],
t4[1] * t6[4] + t4[4] * t6[3] + t4[6] * t6[0] - t4[8] * t6[2] + t4[9] * t6[1],
 - t4[0] * t6[4] - t4[3] * t6[3] + t4[6] * t6[1] + t4[7] * t6[2] - t4[9] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	