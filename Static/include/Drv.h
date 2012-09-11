		#ifndef DRV_H_INCLUDED
		#define DRV_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Drv gp (const Drv& a, const Sca& b) { 
	return Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Sca*)(&b));
}			
		 
inline Ori_Drv gp (const Drv& a, const Ori& b) { 
	return Ori_Drv (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Ori*)(&b));
}			
		 
inline Sca gp (const Drv& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Inf*)(&b));
}			
		 
inline Drv gp (const Drv& a, const Mnk& b) { 
	return Drv (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Mnk*)(&b));
}			
		 
inline Ori_Drv gp (const Drv& a, const Hyp& b) { 
	return Ori_Drv (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Hyp*)(&b));
}			
		 
inline Drb gp (const Drv& a, const Pss& b) { 
	return Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Pss*)(&b));
}			
		 
inline Inf_Par gp (const Drv& a, const Pnt& b) { 
	return Inf_Par (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Pnt*)(&b));
}			
		 
inline Mtd gp (const Drv& a, const Par& b) { 
	return Mtd (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
 - a[0] * b[9] - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[1] * b[9] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2] - a[2] * b[9],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Par*)(&b));
}			
		 
inline Par_Drb gp (const Drv& a, const Cir& b) { 
	return Par_Drb (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
a[0] * b[7] - a[1] * b[6] - a[2] * b[9],
a[0] * b[8] + a[1] * b[9] - a[2] * b[6],
 - a[0] * b[9] + a[1] * b[8] - a[2] * b[7],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Cir*)(&b));
}			
		 
inline Inf_Cir gp (const Drv& a, const Sph& b) { 
	return Inf_Cir (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Sph*)(&b));
}			
		 
inline Mtd gp (const Drv& a, const Sta& b) { 
	return Mtd (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
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
		 
		
template<> inline MVBase gp_gen<Drv, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Sta*)(&b));
}			
		 
inline Sca gp (const Drv& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Drv*)(&b));
}			
		 
inline Sca gp (const Drv& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Drb*)(&b));
}			
		 
inline Sca gp (const Drv& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Drt*)(&b));
}			
		 
inline Rtd gp (const Drv& a, const Tnv& b) { 
	return Rtd (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Tnv*)(&b));
}			
		 
inline Drv_Tnb gp (const Drv& a, const Tnb& b) { 
	return Drv_Tnb (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori_Drb gp (const Drv& a, const Tnt& b) { 
	return Ori_Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Tnt*)(&b));
}			
		 
inline Drv_Lin gp (const Drv& a, const Lin& b) { 
	return Drv_Lin (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Lin*)(&b));
}			
		 
inline Drv_Pln gp (const Drv& a, const Pln& b) { 
	return Drv_Pln (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Pln*)(&b));
}			
		 
inline Drv gp (const Drv& a, const Flp& b) { 
	return Drv (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Flp*)(&b));
}			
		 
inline Drb gp (const Drv& a, const Dfp& b) { 
	return Drb (
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Dfp*)(&b));
}			
		 
inline Drv_Pln gp (const Drv& a, const Dll& b) { 
	return Drv_Pln (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Dll*)(&b));
}			
		 
inline Drv_Lin gp (const Drv& a, const Dlp& b) { 
	return Drv_Lin (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Dlp*)(&b));
}			
		 
inline Drv_Lin gp (const Drv& a, const Vec& b) { 
	return Drv_Lin (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Vec*)(&b));
}			
		 
inline Drv_Pln gp (const Drv& a, const Biv& b) { 
	return Drv_Pln (
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[0] - a[2] * b[2],
a[0] * b[1] + a[1] * b[2],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Biv*)(&b));
}			
		 
inline Drb gp (const Drv& a, const Tri& b) { 
	return Drb (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Tri*)(&b));
}			
		 
inline Inf_Par gp (const Drv& a, const Aff& b) { 
	return Inf_Par (
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Aff*)(&b));
}			
		 
inline Mtd gp (const Drv& a, const Afl& b) { 
	return Mtd (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
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
		 
		
template<> inline MVBase gp_gen<Drv, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Afl*)(&b));
}			
		 
inline Drv_Afp gp (const Drv& a, const Afp& b) { 
	return Drv_Afp (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[2] * b[3],
a[1] * b[3],
 - a[0] * b[3],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Afp*)(&b));
}			
		 
inline Drv_Dap gp (const Drv& a, const Dap& b) { 
	return Drv_Dap (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1],
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Dap*)(&b));
}			
		 
inline Inf_Cir gp (const Drv& a, const Daf& b) { 
	return Inf_Cir (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Daf*)(&b));
}			
		 
inline Par_Drb gp (const Drv& a, const Dal& b) { 
	return Par_Drb (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0],
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Dal*)(&b));
}			
		 
inline Drv_Lin gp (const Drv& a, const Mnv& b) { 
	return Drv_Lin (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Mnv*)(&b));
}			
		 
inline Drv_Pln gp (const Drv& a, const Rot& b) { 
	return Drv_Pln (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Rot*)(&b));
}			
		 
inline Drv_Pln gp (const Drv& a, const Mot& b) { 
	return Drv_Pln (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Mot*)(&b));
}			
		 
inline Drv gp (const Drv& a, const Dil& b) { 
	return Drv (
a[0] * b[0] - a[0] * b[1],
a[1] * b[0] - a[1] * b[1],
a[2] * b[0] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Dil*)(&b));
}			
		 
inline Drv_Dap gp (const Drv& a, const Trv& b) { 
	return Drv_Dap (
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Trv*)(&b));
}			
		 
inline Drv_Pln gp (const Drv& a, const Mtd& b) { 
	return Drv_Pln (
a[0] * b[0] - a[0] * b[7] - a[1] * b[1] + a[1] * b[8] - a[2] * b[2] + a[2] * b[9],
a[0] * b[1] - a[0] * b[8] + a[1] * b[0] - a[1] * b[7] - a[2] * b[3] + a[2] * b[10],
a[0] * b[2] - a[0] * b[9] + a[1] * b[3] - a[1] * b[10] + a[2] * b[0] - a[2] * b[7],
a[0] * b[3] - a[0] * b[10] - a[1] * b[2] + a[1] * b[9] + a[2] * b[1] - a[2] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Mtd*)(&b));
}			
		 
inline Drv gp (const Drv& a, const Trs& b) { 
	return Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Trs*)(&b));
}			
		 
inline Par_Drb gp (const Drv& a, const Rtc& b) { 
	return Par_Drb (
 - a[0] * b[3] + a[1] * b[5] + a[2] * b[6],
 - a[0] * b[5] - a[1] * b[3] + a[2] * b[7],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[3],
 - a[0] * b[0] + a[0] * b[11] - a[1] * b[1] + a[1] * b[12] - a[2] * b[2] + a[2] * b[13],
 - a[0] * b[1] + a[0] * b[12] + a[1] * b[0] - a[1] * b[11] - a[2] * b[14] + a[2] * b[15],
 - a[0] * b[2] + a[0] * b[13] + a[1] * b[14] - a[1] * b[15] + a[2] * b[0] - a[2] * b[11],
 - a[0] * b[14] + a[0] * b[15] - a[1] * b[2] + a[1] * b[13] + a[2] * b[1] - a[2] * b[12],
 - a[0] * b[3] + a[1] * b[5] + a[2] * b[6],
 - a[0] * b[5] - a[1] * b[3] + a[2] * b[7],
 - a[0] * b[6] - a[1] * b[7] - a[2] * b[3],
 - a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
 - a[0] * b[7] + a[1] * b[6] - a[2] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtd gp (const Drv& a, const Mtt& b) { 
	return Mtd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[0] * b[10] - a[1] * b[1] + a[1] * b[11] - a[2] * b[2] + a[2] * b[12],
a[0] * b[1] - a[0] * b[11] + a[1] * b[0] - a[1] * b[10] - a[2] * b[3] + a[2] * b[13],
a[0] * b[2] - a[0] * b[12] + a[1] * b[3] - a[1] * b[13] + a[2] * b[0] - a[2] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[0] * b[13] - a[1] * b[2] + a[1] * b[12] + a[2] * b[1] - a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Mtt*)(&b));
}			
		 
inline Mtd gp (const Drv& a, const Rtt& b) { 
	return Mtd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
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
		 
		
template<> inline MVBase gp_gen<Drv, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Rtt*)(&b));
}			
		 
inline Drv_Pln gp (const Drv& a, const Rtd& b) { 
	return Drv_Pln (
a[0] * b[0] - a[0] * b[4] - a[1] * b[1] + a[1] * b[5] - a[2] * b[2] + a[2] * b[6],
a[0] * b[1] - a[0] * b[5] + a[1] * b[0] - a[1] * b[4] - a[2] * b[3] + a[2] * b[7],
a[0] * b[2] - a[0] * b[6] + a[1] * b[3] - a[1] * b[7] + a[2] * b[0] - a[2] * b[4],
a[0] * b[3] - a[0] * b[7] - a[1] * b[2] + a[1] * b[6] + a[2] * b[1] - a[2] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Rtd*)(&b));
}			
		 
inline Drv_Dap gp (const Drv& a, const Tvd& b) { 
	return Drv_Dap (
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2],
a[0] * b[0] - a[0] * b[4],
a[1] * b[0] - a[1] * b[4],
a[2] * b[0] - a[2] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
a[0] * b[2] - a[1] * b[1],
a[0] * b[3] - a[2] * b[1],
a[1] * b[3] - a[2] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Tvd*)(&b));
}			
		 
inline Drv gp (const Drv& a, const Tsd& b) { 
	return Drv (
a[0] * b[0] - a[0] * b[4],
a[1] * b[0] - a[1] * b[4],
a[2] * b[0] - a[2] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtd gp (const Drv& a, const Trt& b) { 
	return Mtd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[0] * b[10] - a[1] * b[1] + a[1] * b[11] - a[2] * b[2] + a[2] * b[12],
a[0] * b[1] - a[0] * b[11] + a[1] * b[0] - a[1] * b[10] - a[2] * b[3] + a[2] * b[13],
a[0] * b[2] - a[0] * b[12] + a[1] * b[3] - a[1] * b[13] + a[2] * b[0] - a[2] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[0] * b[13] - a[1] * b[2] + a[1] * b[12] + a[2] * b[1] - a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Trt*)(&b));
}			
		 
inline Mtd gp (const Drv& a, const Rvd& b) { 
	return Mtd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[0] * b[7] - a[1] * b[1] + a[1] * b[8] - a[2] * b[2] + a[2] * b[9],
a[0] * b[1] - a[0] * b[8] + a[1] * b[0] - a[1] * b[7] - a[2] * b[3] + a[2] * b[10],
a[0] * b[2] - a[0] * b[9] + a[1] * b[3] - a[1] * b[10] + a[2] * b[0] - a[2] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[0] * b[10] - a[1] * b[2] + a[1] * b[9] + a[2] * b[1] - a[2] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtd gp (const Drv& a, const Tst& b) { 
	return Mtd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[0] * b[10] - a[1] * b[1] + a[1] * b[11] - a[2] * b[2] + a[2] * b[12],
a[0] * b[1] - a[0] * b[11] + a[1] * b[0] - a[1] * b[10] - a[2] * b[3] + a[2] * b[13],
a[0] * b[2] - a[0] * b[12] + a[1] * b[3] - a[1] * b[13] + a[2] * b[0] - a[2] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[0] * b[13] - a[1] * b[2] + a[1] * b[12] + a[2] * b[1] - a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Tst*)(&b));
}			
		 
inline Mtd gp (const Drv& a, const Tvt& b) { 
	return Mtd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[0] * b[10] - a[1] * b[1] + a[1] * b[11] - a[2] * b[2] + a[2] * b[12],
a[0] * b[1] - a[0] * b[11] + a[1] * b[0] - a[1] * b[10] - a[2] * b[3] + a[2] * b[13],
a[0] * b[2] - a[0] * b[12] + a[1] * b[3] - a[1] * b[13] + a[2] * b[0] - a[2] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[0] * b[13] - a[1] * b[2] + a[1] * b[12] + a[2] * b[1] - a[2] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Tvt*)(&b));
}			
		 
inline Mtd gp (const Drv& a, const Bst& b) { 
	return Mtd (
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[0] - a[0] * b[10] - a[1] * b[1] - a[2] * b[2],
a[0] * b[1] + a[1] * b[0] - a[1] * b[10] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[2] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
a[0] * b[5] - a[1] * b[4],
a[0] * b[6] - a[2] * b[4],
a[1] * b[6] - a[2] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Drv, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Drv*)(&a),*(Bst*)(&b));
}			
		 
inline Drv op (const Drv& a, const Sca& b) { 
	return Drv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Sca> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Sca*)(&b));
}			
		 
inline Mnv op (const Drv& a, const Ori& b) { 
	return Mnv (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Ori> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Ori*)(&b));
}			
		 
inline Sca op (const Drv& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Inf> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Inf*)(&b));
}			
		 
inline Sca op (const Drv& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Mnk> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Mnk*)(&b));
}			
		 
inline Mnv op (const Drv& a, const Hyp& b) { 
	return Mnv (
 - a[0] * b[0],
 - a[1] * b[0],
 - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Hyp> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Hyp*)(&b));
}			
		 
inline Sca op (const Drv& a, const Pss& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Pss> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Pss*)(&b));
}			
		 
inline Lin op (const Drv& a, const Pnt& b) { 
	return Lin (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Pnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Pnt*)(&b));
}			
		 
inline Pln op (const Drv& a, const Par& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Par> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Par*)(&b));
}			
		 
inline Pss op (const Drv& a, const Cir& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Cir> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Cir*)(&b));
}			
		 
inline Sca op (const Drv& a, const Sph& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Sph> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Sph*)(&b));
}			
		 
inline Pln op (const Drv& a, const Sta& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Sta> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Sta*)(&b));
}			
		 
inline Sca op (const Drv& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Drv> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Drv*)(&b));
}			
		 
inline Sca op (const Drv& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Drb> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Drb*)(&b));
}			
		 
inline Sca op (const Drv& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Drt> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Drt*)(&b));
}			
		 
inline Mnk_Biv op (const Drv& a, const Tnv& b) { 
	return Mnk_Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Tnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Tnv*)(&b));
}			
		 
inline Pss op (const Drv& a, const Tnb& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Tnb> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Tnb*)(&b));
}			
		 
inline Sca op (const Drv& a, const Tnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Tnt> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Tnt*)(&b));
}			
		 
inline Sca op (const Drv& a, const Lin& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Lin> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Lin*)(&b));
}			
		 
inline Sca op (const Drv& a, const Pln& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Pln> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Pln*)(&b));
}			
		 
inline Sca op (const Drv& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Flp> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Flp*)(&b));
}			
		 
inline Sca op (const Drv& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Dfp> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Dfp*)(&b));
}			
		 
inline Drt op (const Drv& a, const Dll& b) { 
	return Drt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Dll> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Dll*)(&b));
}			
		 
inline Drb op (const Drv& a, const Dlp& b) { 
	return Drb (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Dlp> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Dlp*)(&b));
}			
		 
inline Drb op (const Drv& a, const Vec& b) { 
	return Drb (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Vec> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Vec*)(&b));
}			
		 
inline Drt op (const Drv& a, const Biv& b) { 
	return Drt (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Biv> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Biv*)(&b));
}			
		 
inline Sca op (const Drv& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Tri> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Tri*)(&b));
}			
		 
inline Lin op (const Drv& a, const Aff& b) { 
	return Lin (
 - a[0] * b[1] + a[1] * b[0],
 - a[0] * b[2] + a[2] * b[0],
 - a[1] * b[2] + a[2] * b[1],
 - a[0] * b[3],
 - a[1] * b[3],
 - a[2] * b[3]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Aff> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Aff*)(&b));
}			
		 
inline Pln op (const Drv& a, const Afl& b) { 
	return Pln (
a[0] * b[4] - a[1] * b[3],
a[0] * b[5] - a[2] * b[3],
a[1] * b[5] - a[2] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Afl> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Afl*)(&b));
}			
		 
inline Pss op (const Drv& a, const Afp& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Afp> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Afp*)(&b));
}			
		 
inline Mnk_Biv op (const Drv& a, const Dap& b) { 
	return Mnk_Biv (
a[0] * b[1] - a[1] * b[0],
a[0] * b[2] - a[2] * b[0],
a[1] * b[2] - a[2] * b[1]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Dap> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Dap*)(&b));
}			
		 
inline Sca op (const Drv& a, const Daf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Daf> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Daf*)(&b));
}			
		 
inline Pss op (const Drv& a, const Dal& b) { 
	return Pss (
 - a[0] * b[2] + a[1] * b[1] - a[2] * b[0]
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Dal> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Dal*)(&b));
}			
		 
inline Sca op (const Drv& a, const Mnv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase op_gen<Drv, Mnv> (const MVBase& a, const MVBase& b) { 
	return op(*(Drv*)(&a),*(Mnv*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Sca& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Sca> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Sca*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Ori& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Ori> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Ori*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Inf& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Inf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Inf*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Mnk& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Mnk> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Mnk*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Hyp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Hyp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Hyp*)(&b));
}			
		 
inline Drb ip (const Drv& a, const Pss& b) { 
	return Drb (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Pss> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Pss*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Pnt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Pnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Pnt*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Par& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Par> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Par*)(&b));
}			
		 
inline Dlp ip (const Drv& a, const Cir& b) { 
	return Dlp (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Cir> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Cir*)(&b));
}			
		 
inline Dll ip (const Drv& a, const Sph& b) { 
	return Dll (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Sph> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Sph*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Sta& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Sta> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Sta*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Drv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Drv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Drv*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Drb& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Drb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Drb*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Drt& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Drt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Drt*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Tnv& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Tnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Tnv*)(&b));
}			
		 
inline Vec ip (const Drv& a, const Tnb& b) { 
	return Vec (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Tnb> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Tnb*)(&b));
}			
		 
inline Biv ip (const Drv& a, const Tnt& b) { 
	return Biv (
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Tnt> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Tnt*)(&b));
}			
		 
inline Inf ip (const Drv& a, const Lin& b) { 
	return Inf (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Lin> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Lin*)(&b));
}			
		 
inline Drv ip (const Drv& a, const Pln& b) { 
	return Drv (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Pln> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Pln*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Flp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Flp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Flp*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Dfp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Dfp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Dfp*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Dll& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Dll> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Dll*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Dlp& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Dlp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Dlp*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Vec& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Vec> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Vec*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Biv& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Biv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Biv*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Tri& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Tri> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Tri*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Aff& b) { 
	return Sca (
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Aff> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Aff*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Afl& b) { 
	return Sca (
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Afl> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Afl*)(&b));
}			
		 
inline Vec ip (const Drv& a, const Afp& b) { 
	return Vec (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Afp> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Afp*)(&b));
}			
		 
inline Sca ip (const Drv& a, const Dap& b) { 
	return Sca (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Dap> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Dap*)(&b));
}			
		 
inline Dll ip (const Drv& a, const Daf& b) { 
	return Dll (
a[2] * b[3],
 - a[1] * b[3],
a[0] * b[3],
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Daf> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Daf*)(&b));
}			
		 
inline Dlp ip (const Drv& a, const Dal& b) { 
	return Dlp (
a[1] * b[0] + a[2] * b[1],
 - a[0] * b[0] + a[2] * b[2],
 - a[0] * b[1] - a[1] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Dal> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Dal*)(&b));
}			
		 
inline Inf ip (const Drv& a, const Mnv& b) { 
	return Inf (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
);
}			
		 
		
template<> inline MVBase ip_gen<Drv, Mnv> (const MVBase& a, const MVBase& b) { 
	return ip(*(Drv*)(&a),*(Mnv*)(&b));
}			
		  	
template<>
inline Drv sp (const Drv& drv, const Rot& rot) {					
					
const Rot& t1 = rot;
const Drv& t2 = drv;
Drv_Pln t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Drv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Mot& mot) {					
					
const Mot& t1 = mot;
const Drv& t2 = drv;
Drv_Pln t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Drv (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Dil& dil) {					
					
const Dil& t1 = dil;
const Drv& t2 = drv;
Drv t3 (
t1[0] * t2[0] + t1[1] * t2[0],
t1[0] * t2[1] + t1[1] * t2[1],
t1[0] * t2[2] + t1[1] * t2[2]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Drv (
t3[0] * t5[0] - t3[0] * t5[1],
t3[1] * t5[0] - t3[1] * t5[1],
t3[2] * t5[0] - t3[2] * t5[1]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Trv& trv) {					
					
const Trv& t1 = trv;
const Drv& t2 = drv;
Drv_Dap t3 (
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
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
return Drv (
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Drv& t2 = drv;
Drv_Pln t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Drv (
t3[0] * t5[0] - t3[0] * t5[7] - t3[1] * t5[1] + t3[1] * t5[8] - t3[2] * t5[2] + t3[2] * t5[9] - t3[3] * t5[3] + t3[3] * t5[10],
t3[0] * t5[1] - t3[0] * t5[8] + t3[1] * t5[0] - t3[1] * t5[7] - t3[2] * t5[3] + t3[2] * t5[10] + t3[3] * t5[2] - t3[3] * t5[9],
t3[0] * t5[2] - t3[0] * t5[9] + t3[1] * t5[3] - t3[1] * t5[10] + t3[2] * t5[0] - t3[2] * t5[7] - t3[3] * t5[1] + t3[3] * t5[8]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Trs& trs) {					
					
const Trs& t1 = trs;
const Drv& t2 = drv;
Drv t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Drv (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Drv& t2 = drv;
Par_Drb t3 (
t1[3] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[3] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[3] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[11] * t2[1] - t1[12] * t2[0] + t1[14] * t2[2] + t1[15] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] + t1[11] * t2[2] - t1[13] * t2[0] - t1[14] * t2[1] - t1[15] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[12] * t2[2] - t1[13] * t2[1] + t1[14] * t2[0] + t1[15] * t2[0],
 - t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[3] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
 - t1[3] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Drv (
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[0] + t3[3] * t5[11] - t3[4] * t5[1] + t3[4] * t5[12] - t3[5] * t5[2] + t3[5] * t5[13] + t3[6] * t5[14] - t3[6] * t5[15] + t3[7] * t5[4] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10] - t3[11] * t5[10],
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] - t3[3] * t5[1] + t3[3] * t5[12] + t3[4] * t5[0] - t3[4] * t5[11] - t3[5] * t5[14] + t3[5] * t5[15] - t3[6] * t5[2] + t3[6] * t5[13] + t3[7] * t5[8] + t3[8] * t5[4] - t3[9] * t5[10] + t3[10] * t5[9] + t3[11] * t5[9],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[3] * t5[2] + t3[3] * t5[13] + t3[4] * t5[14] - t3[4] * t5[15] + t3[5] * t5[0] - t3[5] * t5[11] + t3[6] * t5[1] - t3[6] * t5[12] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[4] - t3[10] * t5[8] - t3[11] * t5[8]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Drv& t2 = drv;
Mtd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[14] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[14] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[14] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Drv (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[15] + t3[4] * t5[0] - t3[4] * t5[10] - t3[5] * t5[1] + t3[5] * t5[11] - t3[6] * t5[2] + t3[6] * t5[12] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9] - t3[10] * t5[15] - t3[11] * t5[3] + t3[11] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[3] * t5[9] + t3[4] * t5[1] - t3[4] * t5[11] + t3[5] * t5[0] - t3[5] * t5[10] - t3[6] * t5[3] + t3[6] * t5[13] + t3[7] * t5[8] - t3[8] * t5[7] + t3[9] * t5[15] + t3[10] * t5[9] + t3[11] * t5[2] - t3[11] * t5[12],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] - t3[3] * t5[8] + t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[0] - t3[6] * t5[10] + t3[7] * t5[9] - t3[8] * t5[15] - t3[9] * t5[7] - t3[10] * t5[8] - t3[11] * t5[1] + t3[11] * t5[11]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Drv& t2 = drv;
Mtd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0],
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
return Drv (
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[11] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[11] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[11] * t5[1]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Drv& t2 = drv;
Drv_Pln t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Drv (
t3[0] * t5[0] - t3[0] * t5[4] - t3[1] * t5[1] + t3[1] * t5[5] - t3[2] * t5[2] + t3[2] * t5[6] - t3[3] * t5[3] + t3[3] * t5[7],
t3[0] * t5[1] - t3[0] * t5[5] + t3[1] * t5[0] - t3[1] * t5[4] - t3[2] * t5[3] + t3[2] * t5[7] + t3[3] * t5[2] - t3[3] * t5[6],
t3[0] * t5[2] - t3[0] * t5[6] + t3[1] * t5[3] - t3[1] * t5[7] + t3[2] * t5[0] - t3[2] * t5[4] - t3[3] * t5[1] + t3[3] * t5[5]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Drv& t2 = drv;
Drv_Dap t3 (
t1[1] * t2[0] + t1[2] * t2[1] + t1[3] * t2[2],
t1[1] * t2[1] - t1[2] * t2[0],
t1[1] * t2[2] - t1[3] * t2[0],
t1[2] * t2[2] - t1[3] * t2[1],
t1[0] * t2[0] + t1[4] * t2[0],
t1[0] * t2[1] + t1[4] * t2[1],
t1[0] * t2[2] + t1[4] * t2[2],
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
 - t1[1] * t2[1] + t1[2] * t2[0],
 - t1[1] * t2[2] + t1[3] * t2[0],
 - t1[2] * t2[2] + t1[3] * t2[1]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Drv (
t3[4] * t5[0] - t3[4] * t5[4],
t3[5] * t5[0] - t3[5] * t5[4],
t3[6] * t5[0] - t3[6] * t5[4]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Drv& t2 = drv;
Drv t3 (
t1[0] * t2[0] + t1[4] * t2[0],
t1[0] * t2[1] + t1[4] * t2[1],
t1[0] * t2[2] + t1[4] * t2[2]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Drv (
t3[0] * t5[0] - t3[0] * t5[4],
t3[1] * t5[0] - t3[1] * t5[4],
t3[2] * t5[0] - t3[2] * t5[4]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Trt& trt) {					
					
const Trt& t1 = trt;
const Drv& t2 = drv;
Mtd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0],
t1[4] * t2[2] - t1[6] * t2[0],
t1[5] * t2[2] - t1[6] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Drv (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[5] * t5[1] + t3[5] * t5[11] - t3[6] * t5[2] + t3[6] * t5[12] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9] - t3[11] * t5[3] + t3[11] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[4] * t5[1] - t3[4] * t5[11] + t3[5] * t5[0] - t3[5] * t5[10] - t3[6] * t5[3] + t3[6] * t5[13] + t3[7] * t5[8] - t3[8] * t5[7] + t3[10] * t5[9] + t3[11] * t5[2] - t3[11] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[0] - t3[6] * t5[10] + t3[7] * t5[9] - t3[9] * t5[7] - t3[10] * t5[8] - t3[11] * t5[1] + t3[11] * t5[11]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Drv& t2 = drv;
Mtd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[11] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[11] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[11] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[11] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Drv (
t3[4] * t5[0] - t3[4] * t5[7] - t3[5] * t5[1] + t3[5] * t5[8] - t3[6] * t5[2] + t3[6] * t5[9] - t3[11] * t5[3] + t3[11] * t5[10],
t3[4] * t5[1] - t3[4] * t5[8] + t3[5] * t5[0] - t3[5] * t5[7] - t3[6] * t5[3] + t3[6] * t5[10] + t3[11] * t5[2] - t3[11] * t5[9],
t3[4] * t5[2] - t3[4] * t5[9] + t3[5] * t5[3] - t3[5] * t5[10] + t3[6] * t5[0] - t3[6] * t5[7] - t3[11] * t5[1] + t3[11] * t5[8]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Tst& tst) {					
					
const Tst& t1 = tst;
const Drv& t2 = drv;
Mtd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0] + t1[14] * t2[2],
t1[4] * t2[2] - t1[6] * t2[0] - t1[14] * t2[1],
t1[5] * t2[2] - t1[6] * t2[1] + t1[14] * t2[0],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
 - t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
 - t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Drv (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[5] * t5[1] + t3[5] * t5[11] - t3[6] * t5[2] + t3[6] * t5[12] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9] - t3[11] * t5[3] + t3[11] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[4] * t5[1] - t3[4] * t5[11] + t3[5] * t5[0] - t3[5] * t5[10] - t3[6] * t5[3] + t3[6] * t5[13] + t3[7] * t5[8] - t3[8] * t5[7] + t3[10] * t5[9] + t3[11] * t5[2] - t3[11] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[0] - t3[6] * t5[10] + t3[7] * t5[9] - t3[9] * t5[7] - t3[10] * t5[8] - t3[11] * t5[1] + t3[11] * t5[11]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Drv& t2 = drv;
Mtd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0],
t1[4] * t2[2] - t1[6] * t2[0],
t1[5] * t2[2] - t1[6] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Drv (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[14] + t3[4] * t5[0] - t3[4] * t5[10] - t3[5] * t5[1] + t3[5] * t5[11] - t3[6] * t5[2] + t3[6] * t5[12] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9] - t3[10] * t5[14] - t3[11] * t5[3] + t3[11] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[9] + t3[4] * t5[1] - t3[4] * t5[11] + t3[5] * t5[0] - t3[5] * t5[10] - t3[6] * t5[3] + t3[6] * t5[13] + t3[7] * t5[8] - t3[8] * t5[7] + t3[9] * t5[14] + t3[10] * t5[9] + t3[11] * t5[2] - t3[11] * t5[12],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] - t3[3] * t5[8] + t3[4] * t5[2] - t3[4] * t5[12] + t3[5] * t5[3] - t3[5] * t5[13] + t3[6] * t5[0] - t3[6] * t5[10] + t3[7] * t5[9] - t3[8] * t5[14] - t3[9] * t5[7] - t3[10] * t5[8] - t3[11] * t5[1] + t3[11] * t5[11]
);

}
		
	
	  	
template<>
inline Drv sp (const Drv& drv, const Bst& bst) {					
					
const Bst& t1 = bst;
const Drv& t2 = drv;
Mtd t3 (
t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
t1[4] * t2[1] - t1[5] * t2[0],
t1[4] * t2[2] - t1[6] * t2[0],
t1[5] * t2[2] - t1[6] * t2[1],
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[10] * t2[0],
t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2] + t1[10] * t2[1],
t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[2],
 - t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
 - t1[4] * t2[1] + t1[5] * t2[0],
 - t1[4] * t2[2] + t1[6] * t2[0],
 - t1[5] * t2[2] + t1[6] * t2[1],
t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Drv (
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[4] * t5[0] - t3[4] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] + t3[7] * t5[7] + t3[8] * t5[8] + t3[9] * t5[9] - t3[11] * t5[3],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[4] * t5[1] + t3[5] * t5[0] - t3[5] * t5[10] - t3[6] * t5[3] + t3[7] * t5[8] - t3[8] * t5[7] + t3[10] * t5[9] + t3[11] * t5[2],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[6] * t5[10] + t3[7] * t5[9] - t3[9] * t5[7] - t3[10] * t5[8] - t3[11] * t5[1]
);

}
		
	
	  	
template<>
inline Drv re (const Drv& drv, const Vec& vec) {					
					
const Vec& t1 = vec;
const Drv& t2 = drv;
Drv t3 = involute( t2);
Drv_Lin t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Drv (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2],
 - t4[0] * t6[1] + t4[1] * t6[0] - t4[3] * t6[2],
 - t4[0] * t6[2] + t4[2] * t6[0] + t4[3] * t6[1]
);

}
		
	
	  	
template<>
inline Drv re (const Drv& drv, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Drv& t2 = drv;
Drv t3 = involute( t2);
Drv_Lin t4 (
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Drv (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2],
 - t4[0] * t6[1] + t4[1] * t6[0] - t4[3] * t6[2],
 - t4[0] * t6[2] + t4[2] * t6[0] + t4[3] * t6[1]
);

}
		
	
	  	
template<>
inline Drv re (const Drv& drv, const Pln& pln) {					
					
const Pln& t1 = pln;
const Drv& t2 = drv;
Drv t3 = involute( t2);
Drv_Pln t4 (
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Drv (
t4[1] * t6[0] + t4[2] * t6[1] + t4[3] * t6[2],
 - t4[0] * t6[0] + t4[2] * t6[2] - t4[3] * t6[1],
 - t4[0] * t6[1] - t4[1] * t6[2] + t4[3] * t6[0]
);

}
		
	
	  	
template<>
inline Drv re (const Drv& drv, const Dll& dll) {					
					
const Dll& t1 = dll;
const Drv& t2 = drv;
Drv t3 = involute( t2);
Drv_Pln t4 (
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Drv (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0]
);

}
		
	
	  	
template<>
inline Drv re (const Drv& drv, const Lin& lin) {					
					
const Lin& t1 = lin;
const Drv& t2 = drv;
Drv t3 = involute( t2);
Drv_Lin t4 (
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
t1[3] * t3[1] - t1[4] * t3[0],
t1[3] * t3[2] - t1[5] * t3[0],
t1[4] * t3[2] - t1[5] * t3[1]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Drv (
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4]
);

}
		
	
	  	
template<>
inline Drv re (const Drv& drv, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Drv& t2 = drv;
Drv t3 = involute( t2);
Inf_Par t4 (
t1[3] * t3[0],
t1[3] * t3[1],
t1[3] * t3[2],
t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
t1[0] * t3[1] - t1[1] * t3[0],
t1[0] * t3[2] - t1[2] * t3[0],
t1[1] * t3[2] - t1[2] * t3[1],
 - t1[3] * t3[0],
 - t1[3] * t3[1],
 - t1[3] * t3[2]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Drv (
t4[0] * t6[4] - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2] + t4[7] * t6[4],
t4[1] * t6[4] - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2] + t4[8] * t6[4],
t4[2] * t6[4] - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1] + t4[9] * t6[4]
);

}
		
	
	  	
template<>
inline Drv re (const Drv& drv, const Par& par) {					
					
const Par& t1 = par;
const Drv& t2 = drv;
Drv t3 = involute( t2);
Mtd t4 (
t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
t1[3] * t3[1] - t1[4] * t3[0],
t1[3] * t3[2] - t1[5] * t3[0],
t1[4] * t3[2] - t1[5] * t3[1],
t1[0] * t3[1] + t1[1] * t3[2] + t1[9] * t3[0],
 - t1[0] * t3[0] + t1[2] * t3[2] + t1[9] * t3[1],
 - t1[1] * t3[0] - t1[2] * t3[1] + t1[9] * t3[2],
 - t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[3] * t3[1] + t1[4] * t3[0],
 - t1[3] * t3[2] + t1[5] * t3[0],
 - t1[4] * t3[2] + t1[5] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Drv (
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[4] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] + t4[7] * t6[6] + t4[8] * t6[7] + t4[9] * t6[8] - t4[11] * t6[2],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[8] + t4[4] * t6[0] - t4[5] * t6[9] - t4[6] * t6[2] + t4[7] * t6[7] - t4[8] * t6[6] + t4[10] * t6[8] + t4[11] * t6[1],
t4[0] * t6[8] - t4[2] * t6[6] - t4[3] * t6[7] + t4[4] * t6[1] + t4[5] * t6[2] - t4[6] * t6[9] + t4[7] * t6[8] - t4[9] * t6[6] - t4[10] * t6[7] - t4[11] * t6[0]
);

}
		
	
	  	
template<>
inline Drv re (const Drv& drv, const Cir& cir) {					
					
const Cir& t1 = cir;
const Drv& t2 = drv;
Drv t3 = involute( t2);
Par_Drb t4 (
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
t1[6] * t3[0] + t1[7] * t3[1] + t1[8] * t3[2],
t1[6] * t3[1] - t1[7] * t3[0] + t1[9] * t3[2],
t1[6] * t3[2] - t1[8] * t3[0] - t1[9] * t3[1],
t1[7] * t3[2] - t1[8] * t3[1] + t1[9] * t3[0],
 - t1[0] * t3[1] - t1[1] * t3[2],
t1[0] * t3[0] - t1[2] * t3[2],
t1[1] * t3[0] + t1[2] * t3[1],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0],
 - t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Drv (
 - t4[1] * t6[3] - t4[2] * t6[4] + t4[3] * t6[6] + t4[4] * t6[7] + t4[5] * t6[8] + t4[6] * t6[9] - t4[8] * t6[3] - t4[9] * t6[4] - t4[10] * t6[5] - t4[11] * t6[5],
t4[0] * t6[3] - t4[2] * t6[5] + t4[3] * t6[7] - t4[4] * t6[6] - t4[5] * t6[9] + t4[6] * t6[8] + t4[7] * t6[3] - t4[9] * t6[5] + t4[10] * t6[4] + t4[11] * t6[4],
t4[0] * t6[4] + t4[1] * t6[5] + t4[3] * t6[8] + t4[4] * t6[9] - t4[5] * t6[6] - t4[6] * t6[7] + t4[7] * t6[4] + t4[8] * t6[5] - t4[10] * t6[3] - t4[11] * t6[3]
);

}
		
	
	  	
template<>
inline Drv re (const Drv& drv, const Sph& sph) {					
					
const Sph& t1 = sph;
const Drv& t2 = drv;
Drv t3 = involute( t2);
Inf_Cir t4 (
t1[3] * t3[2],
 - t1[3] * t3[1],
t1[3] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2],
 - t1[0] * t3[0] + t1[2] * t3[2],
 - t1[1] * t3[0] - t1[2] * t3[1],
 - t1[3] * t3[2],
t1[3] * t3[1],
 - t1[3] * t3[0],
t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Drv (
 - t4[2] * t6[4] + t4[4] * t6[0] + t4[5] * t6[1] - t4[8] * t6[4] + t4[9] * t6[2],
t4[1] * t6[4] - t4[3] * t6[0] + t4[5] * t6[2] + t4[7] * t6[4] - t4[9] * t6[1],
 - t4[0] * t6[4] - t4[3] * t6[1] - t4[4] * t6[2] - t4[6] * t6[4] + t4[9] * t6[0]
);

}
		
	
		
	} //vsr::
	#endif
	