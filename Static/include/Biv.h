		#ifndef BIV_H_INCLUDED
		#define BIV_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Biv gp (const Biv& a, const Sca& b) { 
	return Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Sca*)(&b));
}			
		 
inline Tnb gp (const Biv& a, const Ori& b) { 
	return Tnb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Ori*)(&b));
}			
		 
inline Drb gp (const Biv& a, const Inf& b) { 
	return Drb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Inf*)(&b));
}			
		 
inline Mnk_Biv gp (const Biv& a, const Mnk& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Biv gp (const Biv& a, const Hyp& b) { 
	return Hyp_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Hyp*)(&b));
}			
		 
inline Mnv gp (const Biv& a, const Pss& b) { 
	return Mnv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Pss*)(&b));
}			
		 
inline Pnt_Biv gp (const Biv& a, const Pnt& b) { 
	return Pnt_Biv (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Pnt*)(&b));
}			
		 
inline Par_Biv gp (const Biv& a, const Par& b) { 
	return Par_Biv (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[7] + a[1] * b[8],
 - a[0] * b[6] + a[2] * b[8],
 - a[1] * b[6] - a[2] * b[7],
a[0] * b[9],
a[1] * b[9],
a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Par*)(&b));
}			
		 
inline Par_Mnv gp (const Biv& a, const Cir& b) { 
	return Par_Mnv (
 - a[2] * b[9],
a[1] * b[9],
 - a[0] * b[9],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
 - a[1] * b[5] + a[2] * b[4],
a[0] * b[5] - a[2] * b[3],
 - a[0] * b[4] + a[1] * b[3],
a[0] * b[7] + a[1] * b[8],
 - a[0] * b[6] + a[2] * b[8],
 - a[1] * b[6] - a[2] * b[7],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt_Mnv gp (const Biv& a, const Sph& b) { 
	return Pnt_Mnv (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Sph*)(&b));
}			
		 
inline Sta_Biv gp (const Biv& a, const Sta& b) { 
	return Sta_Biv (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[7] + a[1] * b[8],
 - a[0] * b[6] + a[2] * b[8],
 - a[1] * b[6] - a[2] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Sta*)(&b));
}			
		 
inline Drv_Pln gp (const Biv& a, const Drv& b) { 
	return Drv_Pln (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Drv*)(&b));
}			
		 
inline Drv_Lin gp (const Biv& a, const Drb& b) { 
	return Drv_Lin (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Drb*)(&b));
}			
		 
inline Drv gp (const Biv& a, const Drt& b) { 
	return Drv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Drt*)(&b));
}			
		 
inline Tnv_Biv gp (const Biv& a, const Tnv& b) { 
	return Tnv_Biv (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv_Vec gp (const Biv& a, const Tnb& b) { 
	return Tnv_Vec (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnv gp (const Biv& a, const Tnt& b) { 
	return Tnv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Tnt*)(&b));
}			
		 
inline Lin_Dll gp (const Biv& a, const Lin& b) { 
	return Lin_Dll (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Lin*)(&b));
}			
		 
inline Pln_Biv gp (const Biv& a, const Pln& b) { 
	return Pln_Biv (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Pln*)(&b));
}			
		 
inline Lin_Dfp gp (const Biv& a, const Flp& b) { 
	return Lin_Dfp (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Flp*)(&b));
}			
		 
inline Lin_Flp gp (const Biv& a, const Dfp& b) { 
	return Lin_Flp (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Dfp*)(&b));
}			
		 
inline Mot gp (const Biv& a, const Dll& b) { 
	return Mot (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Dll*)(&b));
}			
		 
inline Pln_Mnv gp (const Biv& a, const Dlp& b) { 
	return Pln_Mnv (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Dlp*)(&b));
}			
		 
inline Vec_Biv gp (const Biv& a, const Vec& b) { 
	return Vec_Biv (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Vec*)(&b));
}			
		 
inline Rot gp (const Biv& a, const Biv& b) { 
	return Rot (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Biv*)(&b));
}			
		 
inline Vec gp (const Biv& a, const Tri& b) { 
	return Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Tri*)(&b));
}			
		 
inline Biv_Aff gp (const Biv& a, const Aff& b) { 
	return Biv_Aff (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Aff*)(&b));
}			
		 
inline Rtt gp (const Biv& a, const Afl& b) { 
	return Rtt (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Afl*)(&b));
}			
		 
inline Biv_Afp gp (const Biv& a, const Afp& b) { 
	return Biv_Afp (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Afp*)(&b));
}			
		 
inline Biv_Dap gp (const Biv& a, const Dap& b) { 
	return Biv_Dap (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Dap*)(&b));
}			
		 
inline Biv_Daf gp (const Biv& a, const Daf& b) { 
	return Biv_Daf (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Daf*)(&b));
}			
		 
inline Biv_Dal gp (const Biv& a, const Dal& b) { 
	return Biv_Dal (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[3] + a[2] * b[5],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Dal*)(&b));
}			
		 
inline Biv_Mnv gp (const Biv& a, const Mnv& b) { 
	return Biv_Mnv (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Mnv*)(&b));
}			
		 
inline Rot gp (const Biv& a, const Rot& b) { 
	return Rot (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Rot*)(&b));
}			
		 
inline Mot gp (const Biv& a, const Mot& b) { 
	return Mot (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Mot*)(&b));
}			
		 
inline Ori_Drb gp (const Biv& a, const Dil& b) { 
	return Ori_Drb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Dil*)(&b));
}			
		 
inline Vec_Afp gp (const Biv& a, const Trv& b) { 
	return Vec_Afp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Trv*)(&b));
}			
		 
inline Mtd gp (const Biv& a, const Mtd& b) { 
	return Mtd (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Mtd*)(&b));
}			
		 
inline Pln_Flp gp (const Biv& a, const Trs& b) { 
	return Pln_Flp (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Biv& a, const Rtc& b) { 
	return Rtc (
a[0] * b[1] + a[1] * b[2] - a[2] * b[14],
 - a[0] * b[0] + a[1] * b[14] + a[2] * b[2],
 - a[0] * b[14] - a[1] * b[0] - a[2] * b[1],
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10],
a[0] * b[3] - a[1] * b[7] + a[2] * b[6],
a[0] * b[7] + a[1] * b[3] - a[2] * b[5],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[3],
a[0] * b[4] - a[1] * b[10] + a[2] * b[9],
a[0] * b[10] + a[1] * b[4] - a[2] * b[8],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[4],
a[0] * b[12] + a[1] * b[13] - a[2] * b[15],
 - a[0] * b[11] + a[1] * b[15] + a[2] * b[13],
 - a[0] * b[15] - a[1] * b[11] - a[2] * b[12],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Biv& a, const Mtt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9] - a[2] * b[15],
 - a[0] * b[7] + a[1] * b[15] + a[2] * b[9],
 - a[0] * b[15] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Mtt*)(&b));
}			
		 
inline Rtt gp (const Biv& a, const Rtt& b) { 
	return Rtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[7],
 - a[0] * b[4] + a[1] * b[7] + a[2] * b[6],
 - a[0] * b[7] - a[1] * b[4] - a[2] * b[5],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Rtt*)(&b));
}			
		 
inline Rtd gp (const Biv& a, const Rtd& b) { 
	return Rtd (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
 - a[0] * b[5] - a[1] * b[6] - a[2] * b[7],
a[0] * b[4] - a[1] * b[7] + a[2] * b[6],
a[0] * b[7] + a[1] * b[4] - a[2] * b[5],
 - a[0] * b[6] + a[1] * b[5] + a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Rtd*)(&b));
}			
		 
inline Ori_Cir gp (const Biv& a, const Tvd& b) { 
	return Ori_Cir (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Tvd*)(&b));
}			
		 
inline Inf_Cir gp (const Biv& a, const Tsd& b) { 
	return Inf_Cir (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[2] + a[1] * b[3],
 - a[0] * b[1] + a[2] * b[3],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtt gp (const Biv& a, const Trt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6],
 - a[0] * b[4] + a[2] * b[6],
 - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9],
 - a[0] * b[7] + a[2] * b[9],
 - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Trt*)(&b));
}			
		 
inline Rvd gp (const Biv& a, const Rvd& b) { 
	return Rvd (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[11],
 - a[0] * b[4] + a[1] * b[11] + a[2] * b[6],
 - a[0] * b[11] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[8] - a[1] * b[9] - a[2] * b[10],
a[0] * b[7] - a[1] * b[10] + a[2] * b[9],
a[0] * b[10] + a[1] * b[7] - a[2] * b[8],
 - a[0] * b[9] + a[1] * b[8] + a[2] * b[7],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Biv& a, const Tst& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6] - a[2] * b[14],
 - a[0] * b[4] + a[1] * b[14] + a[2] * b[6],
 - a[0] * b[14] - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9],
 - a[0] * b[7] + a[2] * b[9],
 - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Biv& a, const Tvt& b) { 
	return Mtt (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6],
 - a[0] * b[4] + a[2] * b[6],
 - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9] - a[2] * b[14],
 - a[0] * b[7] + a[1] * b[14] + a[2] * b[9],
 - a[0] * b[14] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[11] - a[1] * b[12] - a[2] * b[13],
a[0] * b[10] - a[1] * b[13] + a[2] * b[12],
a[0] * b[13] + a[1] * b[10] - a[2] * b[11],
 - a[0] * b[12] + a[1] * b[11] + a[2] * b[10],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Tvt*)(&b));
}			
		 
inline Par_Biv gp (const Biv& a, const Bst& b) { 
	return Par_Biv (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
a[0] * b[5] + a[1] * b[6],
 - a[0] * b[4] + a[2] * b[6],
 - a[1] * b[4] - a[2] * b[5],
a[0] * b[8] + a[1] * b[9],
 - a[0] * b[7] + a[2] * b[9],
 - a[1] * b[7] - a[2] * b[8],
a[0] * b[10],
a[1] * b[10],
a[2] * b[10],
a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
a[0] * b[9] - a[1] * b[8] + a[2] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Biv, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Biv*)(&a),*(Bst*)(&b));
}			
		 
inline Biv op (const Biv& a, const Sca& b) { 
	return Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Sca*)(&b));
}			
		 
inline Tnb op (const Biv& a, const Ori& b) { 
	return Tnb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Ori*)(&b));
}			
		 
inline Drb op (const Biv& a, const Inf& b) { 
	return Drb (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Inf*)(&b));
}			
		 
inline Mnk_Biv op (const Biv& a, const Mnk& b) { 
	return Mnk_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Biv op (const Biv& a, const Hyp& b) { 
	return Hyp_Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Biv& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Pss*)(&b));
}			
		 
inline Sph op (const Biv& a, const Par& b) { 
	return Sph (
a[0] * b[9],
a[1] * b[9],
a[2] * b[9],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Par*)(&b));
}			
		 
inline Pss op (const Biv& a, const Cir& b) { 
	return Pss (
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Biv& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Sph*)(&b));
}			
		 
inline Hyp_Pss op (const Biv& a, const Sta& b) { 
	return Hyp_Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
a[0] * b[8] - a[1] * b[7] + a[2] * b[6]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Sta*)(&b));
}			
		 
inline Drt op (const Biv& a, const Drv& b) { 
	return Drt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Drv*)(&b));
}			
		 
inline Sca op (const Biv& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Biv& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Drt*)(&b));
}			
		 
inline Tnt op (const Biv& a, const Tnv& b) { 
	return Tnt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca op (const Biv& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Biv& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Tnt*)(&b));
}			
		 
inline Pss op (const Biv& a, const Lin& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Biv& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Pln*)(&b));
}			
		 
inline Pln op (const Biv& a, const Flp& b) { 
	return Pln (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Flp*)(&b));
}			
		 
inline Sca op (const Biv& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Dfp*)(&b));
}			
		 
inline Drt op (const Biv& a, const Dll& b) { 
	return Drt (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Dll*)(&b));
}			
		 
inline Dfp op (const Biv& a, const Dlp& b) { 
	return Dfp (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Dlp*)(&b));
}			
		 
inline Tri op (const Biv& a, const Vec& b) { 
	return Tri (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Vec*)(&b));
}			
		 
inline Sca op (const Biv& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Biv*)(&b));
}			
		 
inline Sca op (const Biv& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Tri*)(&b));
}			
		 
inline Afp op (const Biv& a, const Aff& b) { 
	return Afp (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Aff*)(&b));
}			
		 
inline Tnt op (const Biv& a, const Afl& b) { 
	return Tnt (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Afl*)(&b));
}			
		 
inline Sca op (const Biv& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Afp*)(&b));
}			
		 
inline Daf op (const Biv& a, const Dap& b) { 
	return Daf (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Biv& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Daf*)(&b));
}			
		 
inline Pss op (const Biv& a, const Dal& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Dal*)(&b));
}			
		 
inline Pss op (const Biv& a, const Mnv& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Biv, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Biv*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Hyp*)(&b));
}			
		 
inline Mnv ip (const Biv& a, const Pss& b) { 
	return Mnv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Par& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Par*)(&b));
}			
		 
inline Pnt ip (const Biv& a, const Cir& b) { 
	return Pnt (
 - a[2] * b[9],
a[1] * b[9],
 - a[0] * b[9],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Cir*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Sta& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Drv*)(&b));
}			
		 
inline Inf ip (const Biv& a, const Drb& b) { 
	return Inf (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Drb*)(&b));
}			
		 
inline Drv ip (const Biv& a, const Drt& b) { 
	return Drv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Tnv*)(&b));
}			
		 
inline Ori ip (const Biv& a, const Tnb& b) { 
	return Ori (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnv ip (const Biv& a, const Tnt& b) { 
	return Tnv (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Tnt*)(&b));
}			
		 
inline Inf ip (const Biv& a, const Lin& b) { 
	return Inf (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Lin*)(&b));
}			
		 
inline Flp ip (const Biv& a, const Pln& b) { 
	return Flp (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Flp*)(&b));
}			
		 
inline Dlp ip (const Biv& a, const Dfp& b) { 
	return Dlp (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Dll& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Biv& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Biv*)(&b));
}			
		 
inline Vec ip (const Biv& a, const Tri& b) { 
	return Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Afl& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Afl*)(&b));
}			
		 
inline Aff ip (const Biv& a, const Afp& b) { 
	return Aff (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Dap*)(&b));
}			
		 
inline Dap ip (const Biv& a, const Daf& b) { 
	return Dap (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Daf*)(&b));
}			
		 
inline Ori ip (const Biv& a, const Dal& b) { 
	return Ori (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Dal*)(&b));
}			
		 
inline Sca ip (const Biv& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Biv, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Biv*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Biv sp (const Biv& biv, const Rot& rot) {					
					
const Rot& t1 = rot;
const Biv& t2 = biv;
Rot t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Mot& mot) {					
					
const Mot& t1 = mot;
const Biv& t2 = biv;
Mot t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Dil& dil) {					
					
const Dil& t1 = dil;
const Biv& t2 = biv;
Ori_Drb t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Biv (
t3[0] * t5[0] + t3[3] * t5[1],
t3[1] * t5[0] + t3[4] * t5[1],
t3[2] * t5[0] + t3[5] * t5[1]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Trv& trv) {					
					
const Trv& t1 = trv;
const Biv& t2 = biv;
Vec_Afp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Biv (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Biv& t2 = biv;
Mtd t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[11] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[11] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[11] * t2[0],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[8],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[7]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Trs& trs) {					
					
const Trs& t1 = trs;
const Biv& t2 = biv;
Pln_Flp t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Biv (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Biv& t2 = biv;
Rtc t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[14] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[14] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[14] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[3] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[3] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[3] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[4] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
t1[4] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[4] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
 - t1[12] * t2[0] - t1[13] * t2[1] - t1[15] * t2[2],
t1[11] * t2[0] - t1[13] * t2[2] + t1[15] * t2[1],
t1[11] * t2[1] + t1[12] * t2[2] - t1[15] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Biv (
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Biv& t2 = biv;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[14] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[14] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[14] * t2[0],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[15] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[15] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[15] * t2[0],
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Biv& t2 = biv;
Rtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Biv& t2 = biv;
Rtd t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[7] + t3[7] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] + t3[5] * t5[7] + t3[6] * t5[4] - t3[7] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[7] - t3[5] * t5[6] + t3[6] * t5[5] + t3[7] * t5[4]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Biv& t2 = biv;
Ori_Cir t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Biv (
t3[0] * t5[0] + t3[6] * t5[4],
t3[1] * t5[0] + t3[7] * t5[4],
t3[2] * t5[0] + t3[8] * t5[4]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Biv& t2 = biv;
Inf_Cir t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
 - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[0] - t1[3] * t2[2],
t1[1] * t2[1] + t1[2] * t2[2],
t1[4] * t2[0],
t1[4] * t2[1],
t1[4] * t2[2],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Biv (
t3[0] * t5[0] + t3[6] * t5[4],
t3[1] * t5[0] + t3[7] * t5[4],
t3[2] * t5[0] + t3[8] * t5[4]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Trt& trt) {					
					
const Trt& t1 = trt;
const Biv& t2 = biv;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1],
t1[4] * t2[0] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[2],
 - t1[8] * t2[0] - t1[9] * t2[1],
t1[7] * t2[0] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[2],
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Biv& t2 = biv;
Rvd t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[11] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[11] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[11] * t2[0],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[10] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[8],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[7]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Tst& tst) {					
					
const Tst& t1 = tst;
const Biv& t2 = biv;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1] - t1[14] * t2[2],
t1[4] * t2[0] - t1[6] * t2[2] + t1[14] * t2[1],
t1[4] * t2[1] + t1[5] * t2[2] - t1[14] * t2[0],
 - t1[8] * t2[0] - t1[9] * t2[1],
t1[7] * t2[0] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[2],
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Biv& t2 = biv;
Mtt t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1],
t1[4] * t2[0] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[2],
 - t1[8] * t2[0] - t1[9] * t2[1] - t1[14] * t2[2],
t1[7] * t2[0] - t1[9] * t2[2] + t1[14] * t2[1],
t1[7] * t2[1] + t1[8] * t2[2] - t1[14] * t2[0],
 - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Biv sp (const Biv& biv, const Bst& bst) {					
					
const Bst& t1 = bst;
const Biv& t2 = biv;
Par_Biv t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[5] * t2[0] - t1[6] * t2[1],
t1[4] * t2[0] - t1[6] * t2[2],
t1[4] * t2[1] + t1[5] * t2[2],
 - t1[8] * t2[0] - t1[9] * t2[1],
t1[7] * t2[0] - t1[9] * t2[2],
t1[7] * t2[1] + t1[8] * t2[2],
t1[10] * t2[0],
t1[10] * t2[1],
t1[10] * t2[2],
t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[10] + t3[13] * t5[9] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[11] * t5[10] - t3[13] * t5[8] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[12] * t5[10] + t3[13] * t5[7] + t3[14] * t5[4]
);

}
		
	
	  	
template<>
inline Biv re (const Biv& biv, const Vec& vec) {					
					
const Vec& t1 = vec;
const Biv& t2 = biv;
Biv t3 = involute( t2);
Vec_Biv t4 (
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Biv (
t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[3] * t6[0]
);

}
		
	
	  	
template<>
inline Biv re (const Biv& biv, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Biv& t2 = biv;
Biv t3 = involute( t2);
Pln_Mnv t4 (
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[3] * t3[0],
t1[3] * t3[1],
t1[3] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Biv (
t4[0] * t6[1] - t4[1] * t6[0] + t4[6] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Biv re (const Biv& biv, const Pln& pln) {					
					
const Pln& t1 = pln;
const Biv& t2 = biv;
Biv t3 = involute( t2);
Pln_Biv t4 (
 - t1[3] * t3[2],
t1[3] * t3[1],
 - t1[3] * t3[0],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Biv (
t4[3] * t6[0] - t4[5] * t6[2] + t4[6] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[6] * t6[0],
t4[3] * t6[2] - t4[4] * t6[1] + t4[5] * t6[0]
);

}
		
	
	  	
template<>
inline Biv re (const Biv& biv, const Dll& dll) {					
					
const Dll& t1 = dll;
const Biv& t2 = biv;
Biv t3 = involute( t2);
Mot t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
 - t1[4] * t3[0] - t1[5] * t3[1],
t1[3] * t3[0] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[2],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Biv (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Biv re (const Biv& biv, const Lin& lin) {					
					
const Lin& t1 = lin;
const Biv& t2 = biv;
Biv t3 = involute( t2);
Lin_Dll t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
 - t1[4] * t3[0] - t1[5] * t3[1],
t1[3] * t3[0] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[2],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Biv (
t4[4] * t6[4] - t4[5] * t6[3] + t4[7] * t6[5],
t4[4] * t6[5] - t4[6] * t6[3] - t4[7] * t6[4],
t4[5] * t6[5] - t4[6] * t6[4] + t4[7] * t6[3]
);

}
		
	
	  	
template<>
inline Biv re (const Biv& biv, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Biv& t2 = biv;
Biv t3 = involute( t2);
Pnt_Biv t4 (
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[0] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[2],
t1[3] * t3[0],
t1[3] * t3[1],
t1[3] * t3[2],
t1[4] * t3[0],
t1[4] * t3[1],
t1[4] * t3[2],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Biv (
t4[0] * t6[1] - t4[1] * t6[0] - t4[3] * t6[4] - t4[6] * t6[3] + t4[9] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[4] * t6[4] - t4[7] * t6[3] - t4[9] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[5] * t6[4] - t4[8] * t6[3] + t4[9] * t6[0]
);

}
		
	
	  	
template<>
inline Biv re (const Biv& biv, const Par& par) {					
					
const Par& t1 = par;
const Biv& t2 = biv;
Biv t3 = involute( t2);
Par_Biv t4 (
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
 - t1[4] * t3[0] - t1[5] * t3[1],
t1[3] * t3[0] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[2],
 - t1[7] * t3[0] - t1[8] * t3[1],
t1[6] * t3[0] - t1[8] * t3[2],
t1[6] * t3[1] + t1[7] * t3[2],
t1[9] * t3[0],
t1[9] * t3[1],
t1[9] * t3[2],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0],
t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Biv (
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[7] - t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[10] * t6[9] + t4[13] * t6[8] + t4[14] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[8] - t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[11] * t6[9] - t4[13] * t6[7] - t4[14] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[8] - t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[12] * t6[9] + t4[13] * t6[6] + t4[14] * t6[3]
);

}
		
	
	  	
template<>
inline Biv re (const Biv& biv, const Cir& cir) {					
					
const Cir& t1 = cir;
const Biv& t2 = biv;
Biv t3 = involute( t2);
Par_Mnv t4 (
 - t1[9] * t3[2],
t1[9] * t3[1],
 - t1[9] * t3[0],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0],
 - t1[4] * t3[2] + t1[5] * t3[1],
t1[3] * t3[2] - t1[5] * t3[0],
 - t1[3] * t3[1] + t1[4] * t3[0],
 - t1[7] * t3[0] - t1[8] * t3[1],
t1[6] * t3[0] - t1[8] * t3[2],
t1[6] * t3[1] + t1[7] * t3[2],
t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Biv (
t4[2] * t6[9] - t4[3] * t6[3] - t4[4] * t6[0] + t4[6] * t6[5] - t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[14] * t6[8],
 - t4[1] * t6[9] - t4[3] * t6[4] - t4[4] * t6[1] - t4[5] * t6[5] + t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[14] * t6[7],
t4[0] * t6[9] - t4[3] * t6[5] - t4[4] * t6[2] + t4[5] * t6[4] - t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[12] * t6[8] - t4[13] * t6[7] + t4[14] * t6[6]
);

}
		
	
	  	
template<>
inline Biv re (const Biv& biv, const Sph& sph) {					
					
const Sph& t1 = sph;
const Biv& t2 = biv;
Biv t3 = involute( t2);
Pnt_Mnv t4 (
 - t1[3] * t3[2],
t1[3] * t3[1],
 - t1[3] * t3[0],
 - t1[4] * t3[2],
t1[4] * t3[1],
 - t1[4] * t3[0],
 - t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
 - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[2] - t1[2] * t3[0],
 - t1[0] * t3[1] + t1[1] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Biv (
t4[2] * t6[4] + t4[5] * t6[3] + t4[6] * t6[0] - t4[8] * t6[2] + t4[9] * t6[1],
 - t4[1] * t6[4] - t4[4] * t6[3] + t4[6] * t6[1] + t4[7] * t6[2] - t4[9] * t6[0],
t4[0] * t6[4] + t4[3] * t6[3] + t4[6] * t6[2] - t4[7] * t6[1] + t4[8] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	