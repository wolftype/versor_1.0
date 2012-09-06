		#ifndef TNV_H_INCLUDED
		#define TNV_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Tnv gp (const Tnv& a, const Sca& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Sca*)(&b));
}			
		 
inline Sca gp (const Tnv& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Ori*)(&b));
}			
		 
inline Ori_Drv gp (const Tnv& a, const Inf& b) { 
	return Ori_Drv (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Inf*)(&b));
}			
		 
inline Tnv gp (const Tnv& a, const Mnk& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Mnk*)(&b));
}			
		 
inline Ori_Drv gp (const Tnv& a, const Hyp& b) { 
	return Ori_Drv (
 - a[0] * b[1],
 - a[1] * b[1],
 - a[2] * b[1],
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Hyp*)(&b));
}			
		 
inline Tnb gp (const Tnv& a, const Pss& b) { 
	return Tnb (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Pss*)(&b));
}			
		 
inline Ori_Par gp (const Tnv& a, const Pnt& b) { 
	return Ori_Par (
 - a[0] * b[4],
 - a[1] * b[4],
 - a[2] * b[4],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Pnt*)(&b));
}			
		 
inline Rvd gp (const Tnv& a, const Par& b) { 
	return Rvd (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
a[0] * b[9] - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] + a[1] * b[9] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2] + a[2] * b[9],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[7] + a[1] * b[6],
 - a[0] * b[8] + a[2] * b[6],
 - a[1] * b[8] + a[2] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Par*)(&b));
}			
		 
inline Par_Tnb gp (const Tnv& a, const Cir& b) { 
	return Par_Tnb (
a[1] * b[3] + a[2] * b[4],
 - a[0] * b[3] + a[2] * b[5],
 - a[0] * b[4] - a[1] * b[5],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[7] + a[1] * b[6] - a[2] * b[9],
 - a[0] * b[8] + a[1] * b[9] + a[2] * b[6],
 - a[0] * b[9] - a[1] * b[8] + a[2] * b[7],
 - a[1] * b[3] - a[2] * b[4],
a[0] * b[3] - a[2] * b[5],
a[0] * b[4] + a[1] * b[5],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Cir*)(&b));
}			
		 
inline Ori_Cir gp (const Tnv& a, const Sph& b) { 
	return Ori_Cir (
a[2] * b[4],
 - a[1] * b[4],
a[0] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[2] * b[4],
a[1] * b[4],
 - a[0] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Sph*)(&b));
}			
		 
inline Rvd gp (const Tnv& a, const Sta& b) { 
	return Rvd (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6],
a[0] * b[8] - a[2] * b[6],
a[1] * b[8] - a[2] * b[7],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[8],
 - a[0] * b[7] + a[1] * b[6],
 - a[0] * b[8] + a[2] * b[6],
 - a[1] * b[8] + a[2] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Sta*)(&b));
}			
		 
inline Rtd gp (const Tnv& a, const Drv& b) { 
	return Rtd (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Drv*)(&b));
}			
		 
inline Drv_Tnb gp (const Tnv& a, const Drb& b) { 
	return Drv_Tnb (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Drb*)(&b));
}			
		 
inline Ori_Drb gp (const Tnv& a, const Drt& b) { 
	return Ori_Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Drt*)(&b));
}			
		 
inline Sca gp (const Tnv& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca gp (const Tnv& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca gp (const Tnv& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Tnt*)(&b));
}			
		 
inline Par_Tnb gp (const Tnv& a, const Lin& b) { 
	return Par_Tnb (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[4] + a[1] * b[3],
 - a[0] * b[5] + a[2] * b[3],
 - a[1] * b[5] + a[2] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Lin*)(&b));
}			
		 
inline Ori_Cir gp (const Tnv& a, const Pln& b) { 
	return Ori_Cir (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Pln*)(&b));
}			
		 
inline Tnv_Flp gp (const Tnv& a, const Flp& b) { 
	return Tnv_Flp (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Flp*)(&b));
}			
		 
inline Tnv_Dfp gp (const Tnv& a, const Dfp& b) { 
	return Tnv_Dfp (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Dfp*)(&b));
}			
		 
inline Rvd gp (const Tnv& a, const Dll& b) { 
	return Rvd (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[4] + a[1] * b[3],
 - a[0] * b[5] + a[2] * b[3],
 - a[1] * b[5] + a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Dll*)(&b));
}			
		 
inline Ori_Par gp (const Tnv& a, const Dlp& b) { 
	return Ori_Par (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Dlp*)(&b));
}			
		 
inline Tnv_Vec gp (const Tnv& a, const Vec& b) { 
	return Tnv_Vec (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Vec*)(&b));
}			
		 
inline Tnv_Biv gp (const Tnv& a, const Biv& b) { 
	return Tnv_Biv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Biv*)(&b));
}			
		 
inline Tnb gp (const Tnv& a, const Tri& b) { 
	return Tnb (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Tri*)(&b));
}			
		 
inline Tnv_Vec gp (const Tnv& a, const Aff& b) { 
	return Tnv_Vec (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Aff*)(&b));
}			
		 
inline Tnv_Biv gp (const Tnv& a, const Afl& b) { 
	return Tnv_Biv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Afl*)(&b));
}			
		 
inline Tnb gp (const Tnv& a, const Afp& b) { 
	return Tnb (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Afp*)(&b));
}			
		 
inline Tnv gp (const Tnv& a, const Dap& b) { 
	return Tnv (
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Dap*)(&b));
}			
		 
inline Tnv_Biv gp (const Tnv& a, const Daf& b) { 
	return Tnv_Biv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Daf*)(&b));
}			
		 
inline Tnv_Vec gp (const Tnv& a, const Dal& b) { 
	return Tnv_Vec (
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5],
 - a[0] * b[4] + a[1] * b[3],
 - a[0] * b[5] + a[2] * b[3],
 - a[1] * b[5] + a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Dal*)(&b));
}			
		 
inline Tnv_Vec gp (const Tnv& a, const Mnv& b) { 
	return Tnv_Vec (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Mnv*)(&b));
}			
		 
inline Tnv_Biv gp (const Tnv& a, const Rot& b) { 
	return Tnv_Biv (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Rot*)(&b));
}			
		 
inline Rvd gp (const Tnv& a, const Mot& b) { 
	return Rvd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
 - a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[7],
 - a[0] * b[6] + a[1] * b[7] + a[2] * b[4],
 - a[0] * b[7] - a[1] * b[6] + a[2] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Mot*)(&b));
}			
		 
inline Tnv gp (const Tnv& a, const Dil& b) { 
	return Tnv (
a[0] * b[0] + a[0] * b[1],
a[1] * b[0] + a[1] * b[1],
a[2] * b[0] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Dil*)(&b));
}			
		 
inline Tnv gp (const Tnv& a, const Trv& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Trv*)(&b));
}			
		 
inline Rvd gp (const Tnv& a, const Mtd& b) { 
	return Rvd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] + a[0] * b[7] - a[1] * b[1] - a[1] * b[8] - a[2] * b[2] - a[2] * b[9],
a[0] * b[1] + a[0] * b[8] + a[1] * b[0] + a[1] * b[7] - a[2] * b[3] - a[2] * b[10],
a[0] * b[2] + a[0] * b[9] + a[1] * b[3] + a[1] * b[10] + a[2] * b[0] + a[2] * b[7],
 - a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
 - a[0] * b[5] + a[1] * b[4] - a[2] * b[11],
 - a[0] * b[6] + a[1] * b[11] + a[2] * b[4],
 - a[0] * b[11] - a[1] * b[6] + a[2] * b[5],
a[0] * b[3] + a[0] * b[10] - a[1] * b[2] - a[1] * b[9] + a[2] * b[1] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Mtd*)(&b));
}			
		 
inline Tnv_Flp gp (const Tnv& a, const Trs& b) { 
	return Tnv_Flp (
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
 - a[0] * b[2] + a[1] * b[1],
 - a[0] * b[3] + a[2] * b[1],
 - a[1] * b[3] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Trs*)(&b));
}			
		 
inline Par_Tnb gp (const Tnv& a, const Rtc& b) { 
	return Par_Tnb (
 - a[0] * b[4] + a[1] * b[8] + a[2] * b[9],
 - a[0] * b[8] - a[1] * b[4] + a[2] * b[10],
 - a[0] * b[9] - a[1] * b[10] - a[2] * b[4],
 - a[0] * b[0] - a[0] * b[11] - a[1] * b[1] - a[1] * b[12] - a[2] * b[2] - a[2] * b[13],
 - a[0] * b[1] - a[0] * b[12] + a[1] * b[0] + a[1] * b[11] - a[2] * b[14] - a[2] * b[15],
 - a[0] * b[2] - a[0] * b[13] + a[1] * b[14] + a[1] * b[15] + a[2] * b[0] + a[2] * b[11],
 - a[0] * b[14] - a[0] * b[15] - a[1] * b[2] - a[1] * b[13] + a[2] * b[1] + a[2] * b[12],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4],
 - a[0] * b[10] + a[1] * b[9] - a[2] * b[8],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Rtc*)(&b));
}			
		 
inline Rvd gp (const Tnv& a, const Mtt& b) { 
	return Rvd (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[1] * b[11] - a[2] * b[2] - a[2] * b[12],
a[0] * b[1] + a[0] * b[11] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3] - a[2] * b[13],
a[0] * b[2] + a[0] * b[12] + a[1] * b[3] + a[1] * b[13] + a[2] * b[0] + a[2] * b[10],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[15],
 - a[0] * b[9] + a[1] * b[15] + a[2] * b[7],
 - a[0] * b[15] - a[1] * b[9] + a[2] * b[8],
a[0] * b[3] + a[0] * b[13] - a[1] * b[2] - a[1] * b[12] + a[2] * b[1] + a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Mtt*)(&b));
}			
		 
inline Tnv_Biv gp (const Tnv& a, const Rtt& b) { 
	return Tnv_Biv (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Rtt*)(&b));
}			
		 
inline Tnv_Biv gp (const Tnv& a, const Rtd& b) { 
	return Tnv_Biv (
a[0] * b[0] + a[0] * b[4] - a[1] * b[1] - a[1] * b[5] - a[2] * b[2] - a[2] * b[6],
a[0] * b[1] + a[0] * b[5] + a[1] * b[0] + a[1] * b[4] - a[2] * b[3] - a[2] * b[7],
a[0] * b[2] + a[0] * b[6] + a[1] * b[3] + a[1] * b[7] + a[2] * b[0] + a[2] * b[4],
a[0] * b[3] + a[0] * b[7] - a[1] * b[2] - a[1] * b[6] + a[2] * b[1] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Rtd*)(&b));
}			
		 
inline Tnv gp (const Tnv& a, const Tvd& b) { 
	return Tnv (
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Tvd*)(&b));
}			
		 
inline Tnv_Flp gp (const Tnv& a, const Tsd& b) { 
	return Tnv_Flp (
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[0] + a[0] * b[4],
a[1] * b[0] + a[1] * b[4],
a[2] * b[0] + a[2] * b[4],
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
 - a[0] * b[2] + a[1] * b[1],
 - a[0] * b[3] + a[2] * b[1],
 - a[1] * b[3] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Tsd*)(&b));
}			
		 
inline Rvd gp (const Tnv& a, const Trt& b) { 
	return Rvd (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[1] * b[11] - a[2] * b[2] - a[2] * b[12],
a[0] * b[1] + a[0] * b[11] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3] - a[2] * b[13],
a[0] * b[2] + a[0] * b[12] + a[1] * b[3] + a[1] * b[13] + a[2] * b[0] + a[2] * b[10],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
 - a[0] * b[8] + a[1] * b[7],
 - a[0] * b[9] + a[2] * b[7],
 - a[1] * b[9] + a[2] * b[8],
a[0] * b[3] + a[0] * b[13] - a[1] * b[2] - a[1] * b[12] + a[2] * b[1] + a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Trt*)(&b));
}			
		 
inline Tnv_Biv gp (const Tnv& a, const Rvd& b) { 
	return Tnv_Biv (
a[0] * b[0] + a[0] * b[7] - a[1] * b[1] - a[1] * b[8] - a[2] * b[2] - a[2] * b[9],
a[0] * b[1] + a[0] * b[8] + a[1] * b[0] + a[1] * b[7] - a[2] * b[3] - a[2] * b[10],
a[0] * b[2] + a[0] * b[9] + a[1] * b[3] + a[1] * b[10] + a[2] * b[0] + a[2] * b[7],
a[0] * b[3] + a[0] * b[10] - a[1] * b[2] - a[1] * b[9] + a[2] * b[1] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Rvd*)(&b));
}			
		 
inline Rvd gp (const Tnv& a, const Tst& b) { 
	return Rvd (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[1] * b[11] - a[2] * b[2] - a[2] * b[12],
a[0] * b[1] + a[0] * b[11] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3] - a[2] * b[13],
a[0] * b[2] + a[0] * b[12] + a[1] * b[3] + a[1] * b[13] + a[2] * b[0] + a[2] * b[10],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
 - a[0] * b[8] + a[1] * b[7],
 - a[0] * b[9] + a[2] * b[7],
 - a[1] * b[9] + a[2] * b[8],
a[0] * b[3] + a[0] * b[13] - a[1] * b[2] - a[1] * b[12] + a[2] * b[1] + a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Tst*)(&b));
}			
		 
inline Rvd gp (const Tnv& a, const Tvt& b) { 
	return Rvd (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[1] * b[11] - a[2] * b[2] - a[2] * b[12],
a[0] * b[1] + a[0] * b[11] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3] - a[2] * b[13],
a[0] * b[2] + a[0] * b[12] + a[1] * b[3] + a[1] * b[13] + a[2] * b[0] + a[2] * b[10],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
 - a[0] * b[8] + a[1] * b[7] - a[2] * b[14],
 - a[0] * b[9] + a[1] * b[14] + a[2] * b[7],
 - a[0] * b[14] - a[1] * b[9] + a[2] * b[8],
a[0] * b[3] + a[0] * b[13] - a[1] * b[2] - a[1] * b[12] + a[2] * b[1] + a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Tvt*)(&b));
}			
		 
inline Rvd gp (const Tnv& a, const Bst& b) { 
	return Rvd (
a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
a[0] * b[8] - a[1] * b[7],
a[0] * b[9] - a[2] * b[7],
a[1] * b[9] - a[2] * b[8],
a[0] * b[0] + a[0] * b[10] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] + a[1] * b[10] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] + a[2] * b[10],
 - a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
 - a[0] * b[8] + a[1] * b[7],
 - a[0] * b[9] + a[2] * b[7],
 - a[1] * b[9] + a[2] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tnv, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tnv*)(&a),*(Bst*)(&b));
}			
		 
inline Tnv op (const Tnv& a, const Sca& b) { 
	return Tnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Sca*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Ori*)(&b));
}			
		 
inline Mnv op (const Tnv& a, const Inf& b) { 
	return Mnv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Inf*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Mnk*)(&b));
}			
		 
inline Mnv op (const Tnv& a, const Hyp& b) { 
	return Mnv (
a[0] * b[1],
a[1] * b[1],
a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Pss*)(&b));
}			
		 
inline Dal op (const Tnv& a, const Pnt& b) { 
	return Dal (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[4],
a[1] * b[4],
a[2] * b[4]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Pnt*)(&b));
}			
		 
inline Daf op (const Tnv& a, const Par& b) { 
	return Daf (
 - a[0] * b[7] + a[1] * b[6],
 - a[0] * b[8] + a[2] * b[6],
 - a[1] * b[8] + a[2] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Par*)(&b));
}			
		 
inline Pss op (const Tnv& a, const Cir& b) { 
	return Pss (
a[0] * b[5] - a[1] * b[4] + a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Sph*)(&b));
}			
		 
inline Daf op (const Tnv& a, const Sta& b) { 
	return Daf (
 - a[0] * b[7] + a[1] * b[6],
 - a[0] * b[8] + a[2] * b[6],
 - a[1] * b[8] + a[2] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Sta*)(&b));
}			
		 
inline Mnk_Biv op (const Tnv& a, const Drv& b) { 
	return Mnk_Biv (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Drv*)(&b));
}			
		 
inline Pss op (const Tnv& a, const Drb& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Drt*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Tnt*)(&b));
}			
		 
inline Pss op (const Tnv& a, const Lin& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Pln*)(&b));
}			
		 
inline Mnk_Biv op (const Tnv& a, const Flp& b) { 
	return Mnk_Biv (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Flp*)(&b));
}			
		 
inline Pss op (const Tnv& a, const Dfp& b) { 
	return Pss (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Dfp*)(&b));
}			
		 
inline Daf op (const Tnv& a, const Dll& b) { 
	return Daf (
 - a[0] * b[4] + a[1] * b[3],
 - a[0] * b[5] + a[2] * b[3],
 - a[1] * b[5] + a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Dll*)(&b));
}			
		 
inline Dal op (const Tnv& a, const Dlp& b) { 
	return Dal (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Dlp*)(&b));
}			
		 
inline Tnb op (const Tnv& a, const Vec& b) { 
	return Tnb (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Vec*)(&b));
}			
		 
inline Tnt op (const Tnv& a, const Biv& b) { 
	return Tnt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Biv*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Tri*)(&b));
}			
		 
inline Tnb op (const Tnv& a, const Aff& b) { 
	return Tnb (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Aff*)(&b));
}			
		 
inline Tnt op (const Tnv& a, const Afl& b) { 
	return Tnt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Afl*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Afp*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Daf*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Dal& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Dal*)(&b));
}			
		 
inline Sca op (const Tnv& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Tnv, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Tnv*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Hyp*)(&b));
}			
		 
inline Tnb ip (const Tnv& a, const Pss& b) { 
	return Tnb (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Par& b) { 
	return Sca (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Par*)(&b));
}			
		 
inline Aff ip (const Tnv& a, const Cir& b) { 
	return Aff (
a[1] * b[3] + a[2] * b[4],
 - a[0] * b[3] + a[2] * b[5],
 - a[0] * b[4] - a[1] * b[5],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Cir*)(&b));
}			
		 
inline Afl ip (const Tnv& a, const Sph& b) { 
	return Afl (
a[2] * b[4],
 - a[1] * b[4],
a[0] * b[4],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Sph*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Sta& b) { 
	return Sca (
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Drv& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Drv*)(&b));
}			
		 
inline Vec ip (const Tnv& a, const Drb& b) { 
	return Vec (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Drb*)(&b));
}			
		 
inline Biv ip (const Tnv& a, const Drt& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Tnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Tnv*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Tnb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Tnt*)(&b));
}			
		 
inline Aff ip (const Tnv& a, const Lin& b) { 
	return Aff (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Lin*)(&b));
}			
		 
inline Afl ip (const Tnv& a, const Pln& b) { 
	return Afl (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Flp& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Flp*)(&b));
}			
		 
inline Vec ip (const Tnv& a, const Dfp& b) { 
	return Vec (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Dll& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Biv*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Afl& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Afl*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Afp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Tnv& a, const Dap& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Dap*)(&b));
}			
		 
inline Tnv ip (const Tnv& a, const Daf& b) { 
	return Tnv (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Daf*)(&b));
}			
		 
inline Ori ip (const Tnv& a, const Dal& b) { 
	return Ori (
 - a[0] * b[3] - a[1] * b[4] - a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Dal*)(&b));
}			
		 
inline Ori ip (const Tnv& a, const Mnv& b) { 
	return Ori (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Tnv, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tnv*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Tnv sp (const Tnv& tnv, const Rot& rot) {					
					
const Rot& t1 = rot;
const Tnv& t2 = tnv;
Tnv_Biv t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Tnv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Mot& mot) {					
					
const Mot& t1 = mot;
const Tnv& t2 = tnv;
Rvd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Tnv (
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[11] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[11] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[11] * t5[1]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Dil& dil) {					
					
const Dil& t1 = dil;
const Tnv& t2 = tnv;
Tnv t3 (
t1[0] * t2[0] - t1[1] * t2[0],
t1[0] * t2[1] - t1[1] * t2[1],
t1[0] * t2[2] - t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Tnv (
t3[0] * t5[0] + t3[0] * t5[1],
t3[1] * t5[0] + t3[1] * t5[1],
t3[2] * t5[0] + t3[2] * t5[1]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Trv& trv) {					
					
const Trv& t1 = trv;
const Tnv& t2 = tnv;
Tnv t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Tnv (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Tnv& t2 = tnv;
Rvd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[11] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[11] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[11] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[7] * t2[1] + t1[8] * t2[0] - t1[10] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[7] * t2[2] + t1[9] * t2[0] + t1[10] * t2[1],
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[11] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[11] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[11] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[8] * t2[2] + t1[9] * t2[1] - t1[10] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Tnv (
t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[11] * t5[3] - t3[11] * t5[10],
t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[11] * t5[2] + t3[11] * t5[9],
t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[11] * t5[1] - t3[11] * t5[8]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Trs& trs) {					
					
const Trs& t1 = trs;
const Tnv& t2 = tnv;
Tnv_Flp t3 (
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Tnv (
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Tnv& t2 = tnv;
Par_Tnb t3 (
t1[4] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[4] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[4] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] - t1[11] * t2[1] + t1[12] * t2[0] + t1[14] * t2[2] - t1[15] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[11] * t2[2] + t1[13] * t2[0] - t1[14] * t2[1] + t1[15] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[0] - t1[15] * t2[0],
t1[4] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[4] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[4] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Tnv (
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[0] - t3[3] * t5[11] - t3[4] * t5[1] - t3[4] * t5[12] - t3[5] * t5[2] - t3[5] * t5[13] + t3[6] * t5[14] + t3[6] * t5[15] - t3[7] * t5[3] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[7] + t3[11] * t5[7],
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[12] + t3[4] * t5[0] + t3[4] * t5[11] - t3[5] * t5[14] - t3[5] * t5[15] - t3[6] * t5[2] - t3[6] * t5[13] - t3[7] * t5[5] - t3[8] * t5[3] + t3[9] * t5[7] + t3[10] * t5[6] - t3[11] * t5[6],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[2] - t3[3] * t5[13] + t3[4] * t5[14] + t3[4] * t5[15] + t3[5] * t5[0] + t3[5] * t5[11] + t3[6] * t5[1] + t3[6] * t5[12] - t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[3] - t3[10] * t5[5] + t3[11] * t5[5]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Tnv& t2 = tnv;
Rvd t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[15] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[15] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[15] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[10] * t2[1] + t1[11] * t2[0] - t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[10] * t2[2] + t1[12] * t2[0] + t1[13] * t2[1],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[15] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[15] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[15] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Tnv (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] + t3[10] * t5[14] - t3[11] * t5[3] - t3[11] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[14] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[6] + t3[8] * t5[14] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[11]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Tnv& t2 = tnv;
Tnv_Biv t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Tnv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Tnv& t2 = tnv;
Tnv_Biv t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Tnv (
t3[0] * t5[0] + t3[0] * t5[4] - t3[1] * t5[1] - t3[1] * t5[5] - t3[2] * t5[2] - t3[2] * t5[6] - t3[3] * t5[3] - t3[3] * t5[7],
t3[0] * t5[1] + t3[0] * t5[5] + t3[1] * t5[0] + t3[1] * t5[4] - t3[2] * t5[3] - t3[2] * t5[7] + t3[3] * t5[2] + t3[3] * t5[6],
t3[0] * t5[2] + t3[0] * t5[6] + t3[1] * t5[3] + t3[1] * t5[7] + t3[2] * t5[0] + t3[2] * t5[4] - t3[3] * t5[1] - t3[3] * t5[5]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Tnv& t2 = tnv;
Tnv t3 (
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Tnv (
t3[0] * t5[0] + t3[0] * t5[4],
t3[1] * t5[0] + t3[1] * t5[4],
t3[2] * t5[0] + t3[2] * t5[4]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Tnv& t2 = tnv;
Tnv_Flp t3 (
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
t1[0] * t2[0] - t1[4] * t2[0],
t1[0] * t2[1] - t1[4] * t2[1],
t1[0] * t2[2] - t1[4] * t2[2],
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Tnv (
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Trt& trt) {					
					
const Trt& t1 = trt;
const Tnv& t2 = tnv;
Rvd t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[10] * t2[1] + t1[11] * t2[0] - t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[10] * t2[2] + t1[12] * t2[0] + t1[13] * t2[1],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Tnv (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[11] * t5[3] - t3[11] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[7] * t5[5] + t3[8] * t5[4] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[6] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[11]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Tnv& t2 = tnv;
Tnv_Biv t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[7] * t2[1] + t1[8] * t2[0] - t1[10] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[7] * t2[2] + t1[9] * t2[0] + t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[8] * t2[2] + t1[9] * t2[1] - t1[10] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Tnv (
t3[0] * t5[0] + t3[0] * t5[7] - t3[1] * t5[1] - t3[1] * t5[8] - t3[2] * t5[2] - t3[2] * t5[9] - t3[3] * t5[3] - t3[3] * t5[10],
t3[0] * t5[1] + t3[0] * t5[8] + t3[1] * t5[0] + t3[1] * t5[7] - t3[2] * t5[3] - t3[2] * t5[10] + t3[3] * t5[2] + t3[3] * t5[9],
t3[0] * t5[2] + t3[0] * t5[9] + t3[1] * t5[3] + t3[1] * t5[10] + t3[2] * t5[0] + t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[8]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Tst& tst) {					
					
const Tst& t1 = tst;
const Tnv& t2 = tnv;
Rvd t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[10] * t2[1] + t1[11] * t2[0] - t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[10] * t2[2] + t1[12] * t2[0] + t1[13] * t2[1],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Tnv (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] + t3[10] * t5[14] - t3[11] * t5[3] - t3[11] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[14] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[6] + t3[8] * t5[14] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[11]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Tnv& t2 = tnv;
Rvd t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[14] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[14] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[14] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[10] * t2[1] + t1[11] * t2[0] - t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[10] * t2[2] + t1[12] * t2[0] + t1[13] * t2[1],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0] + t1[14] * t2[2],
t1[7] * t2[2] - t1[9] * t2[0] - t1[14] * t2[1],
t1[8] * t2[2] - t1[9] * t2[1] + t1[14] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] - t1[11] * t2[2] + t1[12] * t2[1] - t1[13] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Tnv (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[11] * t5[3] - t3[11] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[7] * t5[5] + t3[8] * t5[4] - t3[10] * t5[6] + t3[11] * t5[2] + t3[11] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[6] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1] - t3[11] * t5[11]
);

}
		
	
	  	
template<>
inline Tnv sp (const Tnv& tnv, const Bst& bst) {					
					
const Bst& t1 = bst;
const Tnv& t2 = tnv;
Rvd t3 (
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] - t1[10] * t2[0],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] - t1[10] * t2[1],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] - t1[10] * t2[2],
t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[7] * t2[1] - t1[8] * t2[0],
t1[7] * t2[2] - t1[9] * t2[0],
t1[8] * t2[2] - t1[9] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Tnv (
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[11] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[7] * t5[5] + t3[8] * t5[4] - t3[10] * t5[6] + t3[11] * t5[2],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[6] * t5[10] - t3[7] * t5[6] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1]
);

}
		
	
	  	
template<>
inline Tnv re (const Tnv& tnv, const Vec& vec) {					
					
const Vec& t1 = vec;
const Tnv& t2 = tnv;
Tnv t3 = involute( t2);
Tnv_Vec t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Tnv (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2],
 - t4[0] * t6[1] + t4[1] * t6[0] - t4[3] * t6[2],
 - t4[0] * t6[2] + t4[2] * t6[0] + t4[3] * t6[1]
);

}
		
	
	  	
template<>
inline Tnv re (const Tnv& tnv, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Tnv& t2 = tnv;
Tnv t3 = involute( t2);
Ori_Par t4 (
t1[3] * t3[0],
t1[3] * t3[1],
t1[3] * t3[2],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
t1[3] * t3[0],
t1[3] * t3[1],
t1[3] * t3[2]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Tnv (
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1]
);

}
		
	
	  	
template<>
inline Tnv re (const Tnv& tnv, const Pln& pln) {					
					
const Pln& t1 = pln;
const Tnv& t2 = tnv;
Tnv t3 = involute( t2);
Ori_Cir t4 (
t1[3] * t3[2],
 - t1[3] * t3[1],
t1[3] * t3[0],
 - t1[0] * t3[1] - t1[1] * t3[2],
t1[0] * t3[0] - t1[2] * t3[2],
t1[1] * t3[0] + t1[2] * t3[1],
t1[3] * t3[2],
 - t1[3] * t3[1],
t1[3] * t3[0],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Tnv (
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[9] * t6[2],
t4[3] * t6[0] - t4[5] * t6[2] + t4[9] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[9] * t6[0]
);

}
		
	
	  	
template<>
inline Tnv re (const Tnv& tnv, const Dll& dll) {					
					
const Dll& t1 = dll;
const Tnv& t2 = tnv;
Tnv t3 = involute( t2);
Rvd t4 (
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
t1[3] * t3[1] - t1[4] * t3[0],
t1[3] * t3[2] - t1[5] * t3[0],
t1[4] * t3[2] - t1[5] * t3[1],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
t1[3] * t3[1] - t1[4] * t3[0],
t1[3] * t3[2] - t1[5] * t3[0],
t1[4] * t3[2] - t1[5] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Tnv (
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[11] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[11] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[11] * t6[0]
);

}
		
	
	  	
template<>
inline Tnv re (const Tnv& tnv, const Lin& lin) {					
					
const Lin& t1 = lin;
const Tnv& t2 = tnv;
Tnv t3 = involute( t2);
Par_Tnb t4 (
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[3] * t3[1] + t1[4] * t3[0],
 - t1[3] * t3[2] + t1[5] * t3[0],
 - t1[4] * t3[2] + t1[5] * t3[1],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Tnv (
 - t4[3] * t6[3] - t4[4] * t6[4] - t4[5] * t6[5],
 - t4[3] * t6[4] + t4[4] * t6[3] - t4[6] * t6[5],
 - t4[3] * t6[5] + t4[5] * t6[3] + t4[6] * t6[4]
);

}
		
	
	  	
template<>
inline Tnv re (const Tnv& tnv, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Tnv& t2 = tnv;
Tnv t3 = involute( t2);
Ori_Par t4 (
t1[4] * t3[0],
t1[4] * t3[1],
t1[4] * t3[2],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
t1[4] * t3[0],
t1[4] * t3[1],
t1[4] * t3[2]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Tnv (
t4[0] * t6[3] - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2] - t4[7] * t6[3],
t4[1] * t6[3] - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2] - t4[8] * t6[3],
t4[2] * t6[3] - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1] - t4[9] * t6[3]
);

}
		
	
	  	
template<>
inline Tnv re (const Tnv& tnv, const Par& par) {					
					
const Par& t1 = par;
const Tnv& t2 = tnv;
Tnv t3 = involute( t2);
Rvd t4 (
t1[6] * t3[0] + t1[7] * t3[1] + t1[8] * t3[2],
t1[6] * t3[1] - t1[7] * t3[0],
t1[6] * t3[2] - t1[8] * t3[0],
t1[7] * t3[2] - t1[8] * t3[1],
t1[0] * t3[1] + t1[1] * t3[2] - t1[9] * t3[0],
 - t1[0] * t3[0] + t1[2] * t3[2] - t1[9] * t3[1],
 - t1[1] * t3[0] - t1[2] * t3[1] - t1[9] * t3[2],
t1[6] * t3[0] + t1[7] * t3[1] + t1[8] * t3[2],
t1[6] * t3[1] - t1[7] * t3[0],
t1[6] * t3[2] - t1[8] * t3[0],
t1[7] * t3[2] - t1[8] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Tnv (
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[4] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[3] - t4[8] * t6[4] - t4[9] * t6[5] - t4[11] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] + t4[5] * t6[9] - t4[6] * t6[2] - t4[7] * t6[4] + t4[8] * t6[3] - t4[10] * t6[5] + t4[11] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] + t4[6] * t6[9] - t4[7] * t6[5] + t4[9] * t6[3] + t4[10] * t6[4] - t4[11] * t6[0]
);

}
		
	
	  	
template<>
inline Tnv re (const Tnv& tnv, const Cir& cir) {					
					
const Cir& t1 = cir;
const Tnv& t2 = tnv;
Tnv t3 = involute( t2);
Par_Tnb t4 (
t1[3] * t3[1] + t1[4] * t3[2],
 - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[4] * t3[0] - t1[5] * t3[1],
 - t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2],
 - t1[6] * t3[1] + t1[7] * t3[0] + t1[9] * t3[2],
 - t1[6] * t3[2] + t1[8] * t3[0] - t1[9] * t3[1],
 - t1[7] * t3[2] + t1[8] * t3[1] + t1[9] * t3[0],
t1[3] * t3[1] + t1[4] * t3[2],
 - t1[3] * t3[0] + t1[5] * t3[2],
 - t1[4] * t3[0] - t1[5] * t3[1],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0],
t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Tnv (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[6] - t4[4] * t6[7] - t4[5] * t6[8] + t4[6] * t6[9] + t4[8] * t6[0] + t4[9] * t6[1] - t4[10] * t6[2] + t4[11] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[3] * t6[7] + t4[4] * t6[6] - t4[5] * t6[9] - t4[6] * t6[8] - t4[7] * t6[0] + t4[9] * t6[2] + t4[10] * t6[1] - t4[11] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[8] + t4[4] * t6[9] + t4[5] * t6[6] + t4[6] * t6[7] - t4[7] * t6[1] - t4[8] * t6[2] - t4[10] * t6[0] + t4[11] * t6[0]
);

}
		
	
	  	
template<>
inline Tnv re (const Tnv& tnv, const Sph& sph) {					
					
const Sph& t1 = sph;
const Tnv& t2 = tnv;
Tnv t3 = involute( t2);
Ori_Cir t4 (
t1[4] * t3[2],
 - t1[4] * t3[1],
t1[4] * t3[0],
 - t1[0] * t3[1] - t1[1] * t3[2],
t1[0] * t3[0] - t1[2] * t3[2],
t1[1] * t3[0] + t1[2] * t3[1],
t1[4] * t3[2],
 - t1[4] * t3[1],
t1[4] * t3[0],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Tnv (
 - t4[2] * t6[3] - t4[4] * t6[0] - t4[5] * t6[1] + t4[8] * t6[3] - t4[9] * t6[2],
t4[1] * t6[3] + t4[3] * t6[0] - t4[5] * t6[2] - t4[7] * t6[3] + t4[9] * t6[1],
 - t4[0] * t6[3] + t4[3] * t6[1] + t4[4] * t6[2] + t4[6] * t6[3] - t4[9] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	