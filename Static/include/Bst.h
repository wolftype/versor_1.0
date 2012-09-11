		#ifndef BST_H_INCLUDED
		#define BST_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Bst gp (const Bst& a, const Sca& b) { 
	return Bst (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[7] * b[0],
a[8] * b[0],
a[9] * b[0],
a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Sca*)(&b));
}			
		 
inline Ori_Par gp (const Bst& a, const Ori& b) { 
	return Ori_Par (
 - a[7] * b[0],
 - a[8] * b[0],
 - a[9] * b[0],
a[0] * b[0] - a[10] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
 - a[7] * b[0],
 - a[8] * b[0],
 - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Ori*)(&b));
}			
		 
inline Inf_Par gp (const Bst& a, const Inf& b) { 
	return Inf_Par (
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
a[0] * b[0] + a[10] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Inf*)(&b));
}			
		 
inline Pss_Mnk_Pnt_Sph gp (const Bst& a, const Mnk& b) { 
	return Pss_Mnk_Pnt_Sph (
a[10] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
 - a[7] * b[0],
 - a[8] * b[0],
 - a[9] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Par gp (const Bst& a, const Hyp& b) { 
	return Hyp_Par (
 - a[4] * b[1] - a[7] * b[0],
 - a[5] * b[1] - a[8] * b[0],
 - a[6] * b[1] - a[9] * b[0],
a[0] * b[0] - a[10] * b[0],
a[0] * b[1] + a[10] * b[1],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1],
a[4] * b[1] - a[7] * b[0],
a[5] * b[1] - a[8] * b[0],
a[6] * b[1] - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Hyp*)(&b));
}			
		 
inline Pnt_Sph gp (const Bst& a, const Pss& b) { 
	return Pnt_Sph (
 - a[6] * b[0],
a[5] * b[0],
 - a[4] * b[0],
a[9] * b[0],
 - a[8] * b[0],
a[7] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[10] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Pss*)(&b));
}			
		 
inline Pnt_Par gp (const Bst& a, const Pnt& b) { 
	return Pnt_Par (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[4] - a[7] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[4] - a[8] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[4] - a[9] * b[3],
a[0] * b[3] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[10] * b[3],
a[0] * b[4] - a[7] * b[0] - a[8] * b[1] - a[9] * b[2] + a[10] * b[4],
a[1] * b[3] - a[4] * b[1] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[6] * b[0],
a[3] * b[3] - a[5] * b[2] + a[6] * b[1],
a[1] * b[4] - a[7] * b[1] + a[8] * b[0],
a[2] * b[4] - a[7] * b[2] + a[9] * b[0],
a[3] * b[4] - a[8] * b[2] + a[9] * b[1],
a[4] * b[4] - a[7] * b[3] + a[10] * b[0],
a[5] * b[4] - a[8] * b[3] + a[10] * b[1],
a[6] * b[4] - a[9] * b[3] + a[10] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Pnt*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Par& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[6] + a[5] * b[7] + a[6] * b[8] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5] + a[10] * b[9],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[7] - a[5] * b[6] + a[7] * b[4] - a[8] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[8] - a[6] * b[6] + a[7] * b[5] - a[9] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[8] - a[6] * b[7] + a[8] * b[5] - a[9] * b[4],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[4] * b[9] - a[5] * b[0] - a[6] * b[1] - a[10] * b[3],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] + a[5] * b[9] - a[6] * b[2] - a[10] * b[4],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] + a[6] * b[9] - a[10] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[7] * b[9] - a[8] * b[0] - a[9] * b[1] + a[10] * b[6],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[7] * b[0] - a[8] * b[9] - a[9] * b[2] + a[10] * b[7],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[7] * b[1] + a[8] * b[2] - a[9] * b[9] + a[10] * b[8],
a[0] * b[9] - a[4] * b[6] - a[5] * b[7] - a[6] * b[8] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5],
a[1] * b[9] - a[4] * b[7] + a[5] * b[6] + a[7] * b[4] - a[8] * b[3] + a[10] * b[0],
a[2] * b[9] - a[4] * b[8] + a[6] * b[6] + a[7] * b[5] - a[9] * b[3] + a[10] * b[1],
a[3] * b[9] - a[5] * b[8] + a[6] * b[7] + a[8] * b[5] - a[9] * b[4] + a[10] * b[2],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Par*)(&b));
}			
		 
inline Rtc gp (const Bst& a, const Cir& b) { 
	return Rtc (
 - a[3] * b[9] + a[5] * b[3] + a[6] * b[4] + a[8] * b[0] + a[9] * b[1] + a[10] * b[6],
a[2] * b[9] - a[4] * b[3] + a[6] * b[5] - a[7] * b[0] + a[9] * b[2] + a[10] * b[7],
 - a[1] * b[9] - a[4] * b[4] - a[5] * b[5] - a[7] * b[1] - a[8] * b[2] + a[10] * b[8],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[4] * b[6] - a[5] * b[7] - a[6] * b[8],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5] + a[7] * b[6] + a[8] * b[7] + a[9] * b[8],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[4] * b[7] + a[5] * b[6] - a[6] * b[9] - a[10] * b[0],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[4] * b[8] + a[5] * b[9] + a[6] * b[6] - a[10] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[9] - a[5] * b[8] + a[6] * b[7] - a[10] * b[2],
a[0] * b[3] - a[2] * b[5] + a[3] * b[4] + a[7] * b[7] - a[8] * b[6] - a[9] * b[9] + a[10] * b[3],
a[0] * b[4] + a[1] * b[5] - a[3] * b[3] + a[7] * b[8] + a[8] * b[9] - a[9] * b[6] + a[10] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[7] * b[9] + a[8] * b[8] - a[9] * b[7] + a[10] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[5] * b[3] - a[6] * b[4] + a[8] * b[0] + a[9] * b[1],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[4] * b[3] - a[6] * b[5] - a[7] * b[0] + a[9] * b[2],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[4] * b[4] + a[5] * b[5] - a[7] * b[1] - a[8] * b[2],
a[0] * b[9] - a[4] * b[5] + a[5] * b[4] - a[6] * b[3] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[4] * b[5] - a[5] * b[4] + a[6] * b[3] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0] + a[10] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt_Cir gp (const Bst& a, const Sph& b) { 
	return Pnt_Cir (
a[6] * b[4] + a[9] * b[3] + a[10] * b[0],
 - a[5] * b[4] - a[8] * b[3] + a[10] * b[1],
a[4] * b[4] + a[7] * b[3] + a[10] * b[2],
 - a[3] * b[3] - a[5] * b[0] - a[6] * b[1],
a[2] * b[3] + a[4] * b[0] - a[6] * b[2],
 - a[1] * b[3] + a[4] * b[1] + a[5] * b[2],
 - a[3] * b[4] + a[8] * b[0] + a[9] * b[1],
a[2] * b[4] - a[7] * b[0] + a[9] * b[2],
 - a[1] * b[4] - a[7] * b[1] - a[8] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[6] * b[4] + a[9] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[5] * b[4] - a[8] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[4] + a[7] * b[3],
a[0] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] - a[10] * b[3],
a[0] * b[4] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0] + a[10] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Sph*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Sta& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[6] + a[5] * b[7] + a[6] * b[8] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[7] - a[5] * b[6] + a[7] * b[4] - a[8] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[8] - a[6] * b[6] + a[7] * b[5] - a[9] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[8] - a[6] * b[7] + a[8] * b[5] - a[9] * b[4],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[5] * b[0] - a[6] * b[1] - a[10] * b[3],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] - a[6] * b[2] - a[10] * b[4],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] - a[10] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[8] * b[0] - a[9] * b[1] + a[10] * b[6],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[7] * b[0] - a[9] * b[2] + a[10] * b[7],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[7] * b[1] + a[8] * b[2] + a[10] * b[8],
 - a[4] * b[6] - a[5] * b[7] - a[6] * b[8] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5],
 - a[4] * b[7] + a[5] * b[6] + a[7] * b[4] - a[8] * b[3] + a[10] * b[0],
 - a[4] * b[8] + a[6] * b[6] + a[7] * b[5] - a[9] * b[3] + a[10] * b[1],
 - a[5] * b[8] + a[6] * b[7] + a[8] * b[5] - a[9] * b[4] + a[10] * b[2],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Sta*)(&b));
}			
		 
inline Mtd gp (const Bst& a, const Drv& b) { 
	return Mtd (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0],
a[4] * b[2] - a[6] * b[0],
a[5] * b[2] - a[6] * b[1],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[10] * b[0],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] + a[10] * b[1],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] + a[10] * b[2],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
 - a[4] * b[1] + a[5] * b[0],
 - a[4] * b[2] + a[6] * b[0],
 - a[5] * b[2] + a[6] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Drv*)(&b));
}			
		 
inline Par_Drb gp (const Bst& a, const Drb& b) { 
	return Par_Drb (
a[5] * b[0] + a[6] * b[1],
 - a[4] * b[0] + a[6] * b[2],
 - a[4] * b[1] - a[5] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[10] * b[0],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[10] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[10] * b[2],
 - a[5] * b[0] - a[6] * b[1],
a[4] * b[0] - a[6] * b[2],
a[4] * b[1] + a[5] * b[2],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Drb*)(&b));
}			
		 
inline Inf_Cir gp (const Bst& a, const Drt& b) { 
	return Inf_Cir (
a[6] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
 - a[6] * b[0],
a[5] * b[0],
 - a[4] * b[0],
a[0] * b[0] + a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Drt*)(&b));
}			
		 
inline Rvd gp (const Bst& a, const Tnv& b) { 
	return Rvd (
a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[7] * b[1] - a[8] * b[0],
a[7] * b[2] - a[9] * b[0],
a[8] * b[2] - a[9] * b[1],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[10] * b[0],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[10] * b[1],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[10] * b[2],
a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[7] * b[1] - a[8] * b[0],
a[7] * b[2] - a[9] * b[0],
a[8] * b[2] - a[9] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Tnv*)(&b));
}			
		 
inline Par_Tnb gp (const Bst& a, const Tnb& b) { 
	return Par_Tnb (
a[8] * b[0] + a[9] * b[1],
 - a[7] * b[0] + a[9] * b[2],
 - a[7] * b[1] - a[8] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[10] * b[0],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[10] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[10] * b[2],
a[8] * b[0] + a[9] * b[1],
 - a[7] * b[0] + a[9] * b[2],
 - a[7] * b[1] - a[8] * b[2],
 - a[7] * b[2] + a[8] * b[1] - a[9] * b[0],
 - a[7] * b[2] + a[8] * b[1] - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori_Cir gp (const Bst& a, const Tnt& b) { 
	return Ori_Cir (
a[9] * b[0],
 - a[8] * b[0],
a[7] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[9] * b[0],
 - a[8] * b[0],
a[7] * b[0],
a[0] * b[0] - a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Tnt*)(&b));
}			
		 
inline Rtc gp (const Bst& a, const Lin& b) { 
	return Rtc (
a[5] * b[0] + a[6] * b[1] + a[10] * b[3],
 - a[4] * b[0] + a[6] * b[2] + a[10] * b[4],
 - a[4] * b[1] - a[5] * b[2] + a[10] * b[5],
 - a[4] * b[3] - a[5] * b[4] - a[6] * b[5],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5],
 - a[4] * b[4] + a[5] * b[3],
 - a[4] * b[5] + a[6] * b[3],
 - a[5] * b[5] + a[6] * b[4],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[7] * b[4] - a[8] * b[3] + a[10] * b[0],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[7] * b[5] - a[9] * b[3] + a[10] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[8] * b[5] - a[9] * b[4] + a[10] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[5] * b[0] - a[6] * b[1],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] - a[6] * b[2],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Lin*)(&b));
}			
		 
inline Pnt_Cir gp (const Bst& a, const Pln& b) { 
	return Pnt_Cir (
a[6] * b[3] + a[10] * b[0],
 - a[5] * b[3] + a[10] * b[1],
a[4] * b[3] + a[10] * b[2],
 - a[5] * b[0] - a[6] * b[1],
a[4] * b[0] - a[6] * b[2],
a[4] * b[1] + a[5] * b[2],
 - a[3] * b[3] + a[8] * b[0] + a[9] * b[1],
a[2] * b[3] - a[7] * b[0] + a[9] * b[2],
 - a[1] * b[3] - a[7] * b[1] - a[8] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[6] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[0] * b[3] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0] + a[10] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Pln*)(&b));
}			
		 
inline Tvt gp (const Bst& a, const Flp& b) { 
	return Tvt (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2] + a[10] * b[3],
a[4] * b[1] - a[5] * b[0],
a[4] * b[2] - a[6] * b[0],
a[5] * b[2] - a[6] * b[1],
a[4] * b[3],
a[5] * b[3],
a[6] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[7] * b[3] + a[10] * b[0],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[8] * b[3] + a[10] * b[1],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[9] * b[3] + a[10] * b[2],
a[0] * b[3] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[1] * b[3] - a[4] * b[1] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[6] * b[0],
a[3] * b[3] - a[5] * b[2] + a[6] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Flp*)(&b));
}			
		 
inline Par_Dfp gp (const Bst& a, const Dfp& b) { 
	return Par_Dfp (
 - a[3] * b[3] + a[5] * b[0] + a[6] * b[1],
a[2] * b[3] - a[4] * b[0] + a[6] * b[2],
 - a[1] * b[3] - a[4] * b[1] - a[5] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[6] * b[3],
a[5] * b[3],
 - a[4] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[9] * b[3] + a[10] * b[0],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[8] * b[3] + a[10] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[7] * b[3] + a[10] * b[2],
 - a[5] * b[0] - a[6] * b[1],
a[4] * b[0] - a[6] * b[2],
a[4] * b[1] + a[5] * b[2],
a[0] * b[3] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0] + a[10] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Dfp*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Dll& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[4] - a[5] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[5] - a[6] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[5] - a[6] * b[4],
 - a[5] * b[0] - a[6] * b[1],
a[4] * b[0] - a[6] * b[2],
a[4] * b[1] + a[5] * b[2],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[8] * b[0] - a[9] * b[1] + a[10] * b[3],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[7] * b[0] - a[9] * b[2] + a[10] * b[4],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[7] * b[1] + a[8] * b[2] + a[10] * b[5],
 - a[4] * b[3] - a[5] * b[4] - a[6] * b[5],
 - a[4] * b[4] + a[5] * b[3] + a[10] * b[0],
 - a[4] * b[5] + a[6] * b[3] + a[10] * b[1],
 - a[5] * b[5] + a[6] * b[4] + a[10] * b[2],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Dll*)(&b));
}			
		 
inline Pnt_Par gp (const Bst& a, const Dlp& b) { 
	return Pnt_Par (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[3],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[0] * b[3] - a[7] * b[0] - a[8] * b[1] - a[9] * b[2] + a[10] * b[3],
 - a[4] * b[1] + a[5] * b[0],
 - a[4] * b[2] + a[6] * b[0],
 - a[5] * b[2] + a[6] * b[1],
a[1] * b[3] - a[7] * b[1] + a[8] * b[0],
a[2] * b[3] - a[7] * b[2] + a[9] * b[0],
a[3] * b[3] - a[8] * b[2] + a[9] * b[1],
a[4] * b[3] + a[10] * b[0],
a[5] * b[3] + a[10] * b[1],
a[6] * b[3] + a[10] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Dlp*)(&b));
}			
		 
inline Pnt_Par gp (const Bst& a, const Vec& b) { 
	return Pnt_Par (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
 - a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
 - a[4] * b[1] + a[5] * b[0],
 - a[4] * b[2] + a[6] * b[0],
 - a[5] * b[2] + a[6] * b[1],
 - a[7] * b[1] + a[8] * b[0],
 - a[7] * b[2] + a[9] * b[0],
 - a[8] * b[2] + a[9] * b[1],
a[10] * b[0],
a[10] * b[1],
a[10] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Vec*)(&b));
}			
		 
inline Par_Biv gp (const Bst& a, const Biv& b) { 
	return Par_Biv (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[5] * b[0] - a[6] * b[1],
a[4] * b[0] - a[6] * b[2],
a[4] * b[1] + a[5] * b[2],
 - a[8] * b[0] - a[9] * b[1],
a[7] * b[0] - a[9] * b[2],
a[7] * b[1] + a[8] * b[2],
a[10] * b[0],
a[10] * b[1],
a[10] * b[2],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[7] * b[2] - a[8] * b[1] + a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Biv*)(&b));
}			
		 
inline Mnk_Pnt_Sph gp (const Bst& a, const Tri& b) { 
	return Mnk_Pnt_Sph (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
 - a[6] * b[0],
a[5] * b[0],
 - a[4] * b[0],
 - a[9] * b[0],
a[8] * b[0],
 - a[7] * b[0],
a[0] * b[0],
a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Tri*)(&b));
}			
		 
inline Pnt_Par gp (const Bst& a, const Aff& b) { 
	return Pnt_Par (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[7] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[8] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[9] * b[3],
a[0] * b[3] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[10] * b[3],
 - a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
a[1] * b[3] - a[4] * b[1] + a[5] * b[0],
a[2] * b[3] - a[4] * b[2] + a[6] * b[0],
a[3] * b[3] - a[5] * b[2] + a[6] * b[1],
 - a[7] * b[1] + a[8] * b[0],
 - a[7] * b[2] + a[9] * b[0],
 - a[8] * b[2] + a[9] * b[1],
 - a[7] * b[3] + a[10] * b[0],
 - a[8] * b[3] + a[10] * b[1],
 - a[9] * b[3] + a[10] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Aff*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Afl& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[7] * b[4] - a[8] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[7] * b[5] - a[9] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[8] * b[5] - a[9] * b[4],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[5] * b[0] - a[6] * b[1] - a[10] * b[3],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] - a[6] * b[2] - a[10] * b[4],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] - a[10] * b[5],
 - a[8] * b[0] - a[9] * b[1],
a[7] * b[0] - a[9] * b[2],
a[7] * b[1] + a[8] * b[2],
a[7] * b[3] + a[8] * b[4] + a[9] * b[5],
a[7] * b[4] - a[8] * b[3] + a[10] * b[0],
a[7] * b[5] - a[9] * b[3] + a[10] * b[1],
a[8] * b[5] - a[9] * b[4] + a[10] * b[2],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[7] * b[2] - a[8] * b[1] + a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Afl*)(&b));
}			
		 
inline Par_Afp gp (const Bst& a, const Afp& b) { 
	return Par_Afp (
 - a[3] * b[3] + a[8] * b[0] + a[9] * b[1],
a[2] * b[3] - a[7] * b[0] + a[9] * b[2],
 - a[1] * b[3] - a[7] * b[1] - a[8] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[6] * b[3] - a[10] * b[0],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[5] * b[3] - a[10] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3] - a[10] * b[2],
 - a[9] * b[3],
a[8] * b[3],
 - a[7] * b[3],
a[8] * b[0] + a[9] * b[1],
 - a[7] * b[0] + a[9] * b[2],
 - a[7] * b[1] - a[8] * b[2],
a[0] * b[3] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0],
 - a[7] * b[2] + a[8] * b[1] - a[9] * b[0] + a[10] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Afp*)(&b));
}			
		 
inline Tst gp (const Bst& a, const Dap& b) { 
	return Tst (
a[7] * b[0] + a[8] * b[1] + a[9] * b[2] + a[10] * b[3],
a[7] * b[1] - a[8] * b[0],
a[7] * b[2] - a[9] * b[0],
a[8] * b[2] - a[9] * b[1],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[4] * b[3] - a[10] * b[0],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] + a[5] * b[3] - a[10] * b[1],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] + a[6] * b[3] - a[10] * b[2],
 - a[7] * b[3],
 - a[8] * b[3],
 - a[9] * b[3],
a[0] * b[3] + a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[1] * b[3] + a[7] * b[1] - a[8] * b[0],
a[2] * b[3] + a[7] * b[2] - a[9] * b[0],
a[3] * b[3] + a[8] * b[2] - a[9] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Dap*)(&b));
}			
		 
inline Pnt_Cir gp (const Bst& a, const Daf& b) { 
	return Pnt_Cir (
a[9] * b[3] + a[10] * b[0],
 - a[8] * b[3] + a[10] * b[1],
a[7] * b[3] + a[10] * b[2],
 - a[3] * b[3] - a[5] * b[0] - a[6] * b[1],
a[2] * b[3] + a[4] * b[0] - a[6] * b[2],
 - a[1] * b[3] + a[4] * b[1] + a[5] * b[2],
a[8] * b[0] + a[9] * b[1],
 - a[7] * b[0] + a[9] * b[2],
 - a[7] * b[1] - a[8] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[9] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[8] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[7] * b[3],
a[0] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] - a[10] * b[3],
 - a[7] * b[2] + a[8] * b[1] - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Daf*)(&b));
}			
		 
inline Rtc gp (const Bst& a, const Dal& b) { 
	return Rtc (
a[8] * b[0] + a[9] * b[1] + a[10] * b[3],
 - a[7] * b[0] + a[9] * b[2] + a[10] * b[4],
 - a[7] * b[1] - a[8] * b[2] + a[10] * b[5],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[4] * b[3] - a[5] * b[4] - a[6] * b[5],
a[7] * b[3] + a[8] * b[4] + a[9] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[4] * b[4] + a[5] * b[3] - a[10] * b[0],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[4] * b[5] + a[6] * b[3] - a[10] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[5] * b[5] + a[6] * b[4] - a[10] * b[2],
a[7] * b[4] - a[8] * b[3],
a[7] * b[5] - a[9] * b[3],
a[8] * b[5] - a[9] * b[4],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[8] * b[0] + a[9] * b[1],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] - a[7] * b[0] + a[9] * b[2],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] - a[7] * b[1] - a[8] * b[2],
 - a[7] * b[2] + a[8] * b[1] - a[9] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Dal*)(&b));
}			
		 
inline Par_Mnv gp (const Bst& a, const Mnv& b) { 
	return Par_Mnv (
a[10] * b[0],
a[10] * b[1],
a[10] * b[2],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
 - a[4] * b[1] + a[5] * b[0],
 - a[4] * b[2] + a[6] * b[0],
 - a[5] * b[2] + a[6] * b[1],
a[7] * b[1] - a[8] * b[0],
a[7] * b[2] - a[9] * b[0],
a[8] * b[2] - a[9] * b[1],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Mnv*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Rot& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0],
a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
a[7] * b[1] + a[8] * b[0] - a[9] * b[3],
a[7] * b[2] + a[8] * b[3] + a[9] * b[0],
a[10] * b[0],
a[10] * b[1],
a[10] * b[2],
a[10] * b[3],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1],
a[7] * b[3] - a[8] * b[2] + a[9] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Rot*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Mot& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[7],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[7] - a[6] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[7] + a[5] * b[6] - a[6] * b[5],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] + a[10] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[5],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] + a[10] * b[6],
 - a[4] * b[4] - a[5] * b[5] - a[6] * b[6] + a[10] * b[0],
 - a[4] * b[5] + a[5] * b[4] - a[6] * b[7] + a[10] * b[1],
 - a[4] * b[6] + a[5] * b[7] + a[6] * b[4] + a[10] * b[2],
 - a[4] * b[7] - a[5] * b[6] + a[6] * b[5] + a[10] * b[3],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Mot*)(&b));
}			
		 
inline Trt gp (const Bst& a, const Dil& b) { 
	return Trt (
a[0] * b[0] + a[10] * b[1],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0] + a[4] * b[1],
a[5] * b[0] + a[5] * b[1],
a[6] * b[0] + a[6] * b[1],
a[7] * b[0] - a[7] * b[1],
a[8] * b[0] - a[8] * b[1],
a[9] * b[0] - a[9] * b[1],
a[0] * b[1] + a[10] * b[0],
a[1] * b[1],
a[2] * b[1],
a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Dil*)(&b));
}			
		 
inline Tst gp (const Bst& a, const Trv& b) { 
	return Tst (
a[0] * b[0] + a[7] * b[1] + a[8] * b[2] + a[9] * b[3],
a[1] * b[0] + a[7] * b[2] - a[8] * b[1],
a[2] * b[0] + a[7] * b[3] - a[9] * b[1],
a[3] * b[0] + a[8] * b[3] - a[9] * b[2],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[0] - a[10] * b[1],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[5] * b[0] - a[10] * b[2],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[6] * b[0] - a[10] * b[3],
a[7] * b[0],
a[8] * b[0],
a[9] * b[0],
a[7] * b[1] + a[8] * b[2] + a[9] * b[3] + a[10] * b[0],
a[7] * b[2] - a[8] * b[1],
a[7] * b[3] - a[9] * b[1],
a[8] * b[3] - a[9] * b[2],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Trv*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Mtd& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[10] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[11] + a[10] * b[8],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[11] - a[6] * b[4] + a[10] * b[9],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[11] + a[5] * b[6] - a[6] * b[5] + a[10] * b[10],
a[4] * b[0] + a[4] * b[7] - a[5] * b[1] - a[5] * b[8] - a[6] * b[2] - a[6] * b[9],
a[4] * b[1] + a[4] * b[8] + a[5] * b[0] + a[5] * b[7] - a[6] * b[3] - a[6] * b[10],
a[4] * b[2] + a[4] * b[9] + a[5] * b[3] + a[5] * b[10] + a[6] * b[0] + a[6] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11] + a[7] * b[0] - a[7] * b[7] - a[8] * b[1] + a[8] * b[8] - a[9] * b[2] + a[9] * b[9] + a[10] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6] + a[7] * b[1] - a[7] * b[8] + a[8] * b[0] - a[8] * b[7] - a[9] * b[3] + a[9] * b[10] + a[10] * b[5],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5] + a[7] * b[2] - a[7] * b[9] + a[8] * b[3] - a[8] * b[10] + a[9] * b[0] - a[9] * b[7] + a[10] * b[6],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] - a[4] * b[4] - a[5] * b[5] - a[6] * b[6] + a[10] * b[0],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9] - a[4] * b[5] + a[5] * b[4] - a[6] * b[11] + a[10] * b[1],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8] - a[4] * b[6] + a[5] * b[11] + a[6] * b[4] + a[10] * b[2],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7] - a[4] * b[11] - a[5] * b[6] + a[6] * b[5] + a[10] * b[3],
a[4] * b[3] + a[4] * b[10] - a[5] * b[2] - a[5] * b[9] + a[6] * b[1] + a[6] * b[8],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[7] * b[3] - a[7] * b[10] - a[8] * b[2] + a[8] * b[9] + a[9] * b[1] - a[9] * b[8] + a[10] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Mtd*)(&b));
}			
		 
inline Tvt gp (const Bst& a, const Trs& b) { 
	return Tvt (
a[0] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3],
a[1] * b[0] + a[4] * b[2] - a[5] * b[1],
a[2] * b[0] + a[4] * b[3] - a[6] * b[1],
a[3] * b[0] + a[5] * b[3] - a[6] * b[2],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[7] * b[0] + a[10] * b[1],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[8] * b[0] + a[10] * b[2],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[9] * b[0] + a[10] * b[3],
 - a[4] * b[1] - a[5] * b[2] - a[6] * b[3] + a[10] * b[0],
 - a[4] * b[2] + a[5] * b[1],
 - a[4] * b[3] + a[6] * b[1],
 - a[5] * b[3] + a[6] * b[2],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Bst& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[14] - a[4] * b[4] + a[5] * b[8] + a[6] * b[9] - a[7] * b[3] + a[8] * b[5] + a[9] * b[6] + a[10] * b[11],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14] + a[3] * b[2] - a[4] * b[8] - a[5] * b[4] + a[6] * b[10] - a[7] * b[5] - a[8] * b[3] + a[9] * b[7] + a[10] * b[12],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0] - a[3] * b[1] - a[4] * b[9] - a[5] * b[10] - a[6] * b[4] - a[7] * b[6] - a[8] * b[7] - a[9] * b[3] + a[10] * b[13],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7] - a[4] * b[0] - a[4] * b[11] - a[5] * b[1] - a[5] * b[12] - a[6] * b[2] - a[6] * b[13] - a[10] * b[3],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] - a[7] * b[0] + a[7] * b[11] - a[8] * b[1] + a[8] * b[12] - a[9] * b[2] + a[9] * b[13] + a[10] * b[4],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7] + a[3] * b[6] - a[4] * b[1] - a[4] * b[12] + a[5] * b[0] + a[5] * b[11] - a[6] * b[14] - a[6] * b[15] - a[10] * b[5],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3] - a[3] * b[5] - a[4] * b[2] - a[4] * b[13] + a[5] * b[14] + a[5] * b[15] + a[6] * b[0] + a[6] * b[11] - a[10] * b[6],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[3] - a[4] * b[14] - a[4] * b[15] - a[5] * b[2] - a[5] * b[13] + a[6] * b[1] + a[6] * b[12] - a[10] * b[7],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10] + a[3] * b[9] - a[7] * b[1] + a[7] * b[12] + a[8] * b[0] - a[8] * b[11] - a[9] * b[14] + a[9] * b[15] + a[10] * b[8],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4] - a[3] * b[8] - a[7] * b[2] + a[7] * b[13] + a[8] * b[14] - a[8] * b[15] + a[9] * b[0] - a[9] * b[11] + a[10] * b[9],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[4] - a[7] * b[14] + a[7] * b[15] - a[8] * b[2] + a[8] * b[13] + a[9] * b[1] - a[9] * b[12] + a[10] * b[10],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13] - a[3] * b[15] + a[4] * b[4] - a[5] * b[8] - a[6] * b[9] - a[7] * b[3] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15] + a[3] * b[13] + a[4] * b[8] + a[5] * b[4] - a[6] * b[10] - a[7] * b[5] - a[8] * b[3] + a[9] * b[7] + a[10] * b[1],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11] - a[3] * b[12] + a[4] * b[9] + a[5] * b[10] + a[6] * b[4] - a[7] * b[6] - a[8] * b[7] - a[9] * b[3] + a[10] * b[2],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[4] * b[10] + a[5] * b[9] - a[6] * b[8] - a[7] * b[7] + a[8] * b[6] - a[9] * b[5] + a[10] * b[15],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12] + a[3] * b[11] + a[4] * b[10] - a[5] * b[9] + a[6] * b[8] - a[7] * b[7] + a[8] * b[6] - a[9] * b[5] + a[10] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[6] * b[15] + a[7] * b[5] - a[8] * b[4] + a[9] * b[14] + a[10] * b[11],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[5] * b[15] - a[6] * b[7] + a[7] * b[6] - a[8] * b[14] - a[9] * b[4] + a[10] * b[12],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[15] + a[5] * b[9] - a[6] * b[8] + a[7] * b[14] + a[8] * b[6] - a[9] * b[5] + a[10] * b[13],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[10] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] - a[10] * b[5],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[10] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[15] + a[7] * b[0] - a[7] * b[10] - a[8] * b[1] + a[8] * b[11] - a[9] * b[2] + a[9] * b[12] + a[10] * b[7],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15] + a[3] * b[9] + a[7] * b[1] - a[7] * b[11] + a[8] * b[0] - a[8] * b[10] - a[9] * b[3] + a[9] * b[13] + a[10] * b[8],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7] - a[3] * b[8] + a[7] * b[2] - a[7] * b[12] + a[8] * b[3] - a[8] * b[13] + a[9] * b[0] - a[9] * b[10] + a[10] * b[9],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] - a[6] * b[15] + a[7] * b[5] - a[8] * b[4] + a[9] * b[14] + a[10] * b[1],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[5] * b[15] + a[6] * b[7] + a[7] * b[6] - a[8] * b[14] - a[9] * b[4] + a[10] * b[2],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[4] * b[15] - a[5] * b[9] + a[6] * b[8] + a[7] * b[14] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] - a[10] * b[14],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[7] * b[3] - a[7] * b[13] - a[8] * b[2] + a[8] * b[12] + a[9] * b[1] - a[9] * b[11] + a[10] * b[15]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Mtt*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Rtt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[7] * b[5] - a[8] * b[4] + a[9] * b[7],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[7] * b[6] - a[8] * b[7] - a[9] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[7] * b[7] + a[8] * b[6] - a[9] * b[5],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7] + a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[10] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6] + a[4] * b[1] + a[5] * b[0] - a[6] * b[3] - a[10] * b[5],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[10] * b[6],
a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
a[7] * b[1] + a[8] * b[0] - a[9] * b[3],
a[7] * b[2] + a[8] * b[3] + a[9] * b[0],
a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0],
a[7] * b[5] - a[8] * b[4] + a[9] * b[7] + a[10] * b[1],
a[7] * b[6] - a[8] * b[7] - a[9] * b[4] + a[10] * b[2],
a[7] * b[7] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] - a[10] * b[7],
a[7] * b[3] - a[8] * b[2] + a[9] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Rtt*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Rtd& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[10] * b[4],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[10] * b[5],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[10] * b[6],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[10] * b[7],
a[4] * b[0] + a[4] * b[4] - a[5] * b[1] - a[5] * b[5] - a[6] * b[2] - a[6] * b[6],
a[4] * b[1] + a[4] * b[5] + a[5] * b[0] + a[5] * b[4] - a[6] * b[3] - a[6] * b[7],
a[4] * b[2] + a[4] * b[6] + a[5] * b[3] + a[5] * b[7] + a[6] * b[0] + a[6] * b[4],
a[7] * b[0] - a[7] * b[4] - a[8] * b[1] + a[8] * b[5] - a[9] * b[2] + a[9] * b[6],
a[7] * b[1] - a[7] * b[5] + a[8] * b[0] - a[8] * b[4] - a[9] * b[3] + a[9] * b[7],
a[7] * b[2] - a[7] * b[6] + a[8] * b[3] - a[8] * b[7] + a[9] * b[0] - a[9] * b[4],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7] + a[10] * b[0],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7] + a[3] * b[6] + a[10] * b[1],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4] - a[3] * b[5] + a[10] * b[2],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[4] + a[10] * b[3],
a[4] * b[3] + a[4] * b[7] - a[5] * b[2] - a[5] * b[6] + a[6] * b[1] + a[6] * b[5],
a[7] * b[3] - a[7] * b[7] - a[8] * b[2] + a[8] * b[6] + a[9] * b[1] - a[9] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Rtd*)(&b));
}			
		 
inline Tst gp (const Bst& a, const Tvd& b) { 
	return Tst (
a[0] * b[0] + a[7] * b[1] + a[8] * b[2] + a[9] * b[3] + a[10] * b[4],
a[1] * b[0] + a[7] * b[2] - a[8] * b[1],
a[2] * b[0] + a[7] * b[3] - a[9] * b[1],
a[3] * b[0] + a[8] * b[3] - a[9] * b[2],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[0] + a[4] * b[4] - a[10] * b[1],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[5] * b[0] + a[5] * b[4] - a[10] * b[2],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[6] * b[0] + a[6] * b[4] - a[10] * b[3],
a[7] * b[0] - a[7] * b[4],
a[8] * b[0] - a[8] * b[4],
a[9] * b[0] - a[9] * b[4],
a[0] * b[4] + a[7] * b[1] + a[8] * b[2] + a[9] * b[3] + a[10] * b[0],
a[1] * b[4] + a[7] * b[2] - a[8] * b[1],
a[2] * b[4] + a[7] * b[3] - a[9] * b[1],
a[3] * b[4] + a[8] * b[3] - a[9] * b[2],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Tvd*)(&b));
}			
		 
inline Tvt gp (const Bst& a, const Tsd& b) { 
	return Tvt (
a[0] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3] + a[10] * b[4],
a[1] * b[0] + a[4] * b[2] - a[5] * b[1],
a[2] * b[0] + a[4] * b[3] - a[6] * b[1],
a[3] * b[0] + a[5] * b[3] - a[6] * b[2],
a[4] * b[0] + a[4] * b[4],
a[5] * b[0] + a[5] * b[4],
a[6] * b[0] + a[6] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[7] * b[0] - a[7] * b[4] + a[10] * b[1],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[8] * b[0] - a[8] * b[4] + a[10] * b[2],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[9] * b[0] - a[9] * b[4] + a[10] * b[3],
a[0] * b[4] - a[4] * b[1] - a[5] * b[2] - a[6] * b[3] + a[10] * b[0],
a[1] * b[4] - a[4] * b[2] + a[5] * b[1],
a[2] * b[4] - a[4] * b[3] + a[6] * b[1],
a[3] * b[4] - a[5] * b[3] + a[6] * b[2],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Trt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[10] * b[11],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[6] * b[7] + a[7] * b[6] - a[9] * b[4] + a[10] * b[12],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[9] - a[6] * b[8] + a[8] * b[6] - a[9] * b[5] + a[10] * b[13],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[10] * b[4],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] - a[10] * b[5],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[10] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[7] * b[0] - a[7] * b[10] - a[8] * b[1] + a[8] * b[11] - a[9] * b[2] + a[9] * b[12] + a[10] * b[7],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[7] * b[1] - a[7] * b[11] + a[8] * b[0] - a[8] * b[10] - a[9] * b[3] + a[9] * b[13] + a[10] * b[8],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[7] * b[2] - a[7] * b[12] + a[8] * b[3] - a[8] * b[13] + a[9] * b[0] - a[9] * b[10] + a[10] * b[9],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[10] * b[1],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[6] * b[7] + a[7] * b[6] - a[9] * b[4] + a[10] * b[2],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[5] * b[9] + a[6] * b[8] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[7] * b[3] - a[7] * b[13] - a[8] * b[2] + a[8] * b[12] + a[9] * b[1] - a[9] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Trt*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Rvd& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[7] * b[5] - a[8] * b[4] + a[9] * b[11] + a[10] * b[8],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[7] * b[6] - a[8] * b[11] - a[9] * b[4] + a[10] * b[9],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[7] * b[11] + a[8] * b[6] - a[9] * b[5] + a[10] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11] + a[4] * b[0] + a[4] * b[7] - a[5] * b[1] - a[5] * b[8] - a[6] * b[2] - a[6] * b[9] - a[10] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6] + a[4] * b[1] + a[4] * b[8] + a[5] * b[0] + a[5] * b[7] - a[6] * b[3] - a[6] * b[10] - a[10] * b[5],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[9] + a[5] * b[3] + a[5] * b[10] + a[6] * b[0] + a[6] * b[7] - a[10] * b[6],
a[7] * b[0] - a[7] * b[7] - a[8] * b[1] + a[8] * b[8] - a[9] * b[2] + a[9] * b[9],
a[7] * b[1] - a[7] * b[8] + a[8] * b[0] - a[8] * b[7] - a[9] * b[3] + a[9] * b[10],
a[7] * b[2] - a[7] * b[9] + a[8] * b[3] - a[8] * b[10] + a[9] * b[0] - a[9] * b[7],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9] + a[7] * b[5] - a[8] * b[4] + a[9] * b[11] + a[10] * b[1],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8] + a[7] * b[6] - a[8] * b[11] - a[9] * b[4] + a[10] * b[2],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7] + a[7] * b[11] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[10] - a[5] * b[2] - a[5] * b[9] + a[6] * b[1] + a[6] * b[8] - a[10] * b[11],
a[7] * b[3] - a[7] * b[10] - a[8] * b[2] + a[8] * b[9] + a[9] * b[1] - a[9] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Tst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[9] * b[14] + a[10] * b[11],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[6] * b[7] + a[7] * b[6] - a[8] * b[14] - a[9] * b[4] + a[10] * b[12],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[9] - a[6] * b[8] + a[7] * b[14] + a[8] * b[6] - a[9] * b[5] + a[10] * b[13],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[10] * b[4],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] - a[10] * b[5],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[10] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[7] * b[0] - a[7] * b[10] - a[8] * b[1] + a[8] * b[11] - a[9] * b[2] + a[9] * b[12] + a[10] * b[7],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[7] * b[1] - a[7] * b[11] + a[8] * b[0] - a[8] * b[10] - a[9] * b[3] + a[9] * b[13] + a[10] * b[8],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[7] * b[2] - a[7] * b[12] + a[8] * b[3] - a[8] * b[13] + a[9] * b[0] - a[9] * b[10] + a[10] * b[9],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[9] * b[14] + a[10] * b[1],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[6] * b[7] + a[7] * b[6] - a[8] * b[14] - a[9] * b[4] + a[10] * b[2],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[5] * b[9] + a[6] * b[8] + a[7] * b[14] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] - a[10] * b[14],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[7] * b[3] - a[7] * b[13] - a[8] * b[2] + a[8] * b[12] + a[9] * b[1] - a[9] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Tvt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[6] * b[14] + a[7] * b[5] - a[8] * b[4] + a[10] * b[11],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[5] * b[14] - a[6] * b[7] + a[7] * b[6] - a[9] * b[4] + a[10] * b[12],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[14] + a[5] * b[9] - a[6] * b[8] + a[8] * b[6] - a[9] * b[5] + a[10] * b[13],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[10] * b[4],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] - a[10] * b[5],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[10] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[14] + a[7] * b[0] - a[7] * b[10] - a[8] * b[1] + a[8] * b[11] - a[9] * b[2] + a[9] * b[12] + a[10] * b[7],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14] + a[3] * b[9] + a[7] * b[1] - a[7] * b[11] + a[8] * b[0] - a[8] * b[10] - a[9] * b[3] + a[9] * b[13] + a[10] * b[8],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7] - a[3] * b[8] + a[7] * b[2] - a[7] * b[12] + a[8] * b[3] - a[8] * b[13] + a[9] * b[0] - a[9] * b[10] + a[10] * b[9],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] - a[6] * b[14] + a[7] * b[5] - a[8] * b[4] + a[10] * b[1],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[5] * b[14] + a[6] * b[7] + a[7] * b[6] - a[9] * b[4] + a[10] * b[2],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[4] * b[14] - a[5] * b[9] + a[6] * b[8] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[7] * b[3] - a[7] * b[13] - a[8] * b[2] + a[8] * b[12] + a[9] * b[1] - a[9] * b[11] + a[10] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Tvt*)(&b));
}			
		 
inline Mtt gp (const Bst& a, const Bst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[7] * b[5] - a[8] * b[4],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[6] * b[7] + a[7] * b[6] - a[9] * b[4],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[9] - a[6] * b[8] + a[8] * b[6] - a[9] * b[5],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[6] * b[2] - a[10] * b[4],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] + a[4] * b[1] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[10] * b[5],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] + a[6] * b[10] - a[10] * b[6],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[7] * b[0] - a[7] * b[10] - a[8] * b[1] - a[9] * b[2] + a[10] * b[7],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[7] * b[1] + a[8] * b[0] - a[8] * b[10] - a[9] * b[3] + a[10] * b[8],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[9] * b[10] + a[10] * b[9],
a[0] * b[10] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[0],
a[1] * b[10] - a[4] * b[8] + a[5] * b[7] + a[7] * b[5] - a[8] * b[4] + a[10] * b[1],
a[2] * b[10] - a[4] * b[9] + a[6] * b[7] + a[7] * b[6] - a[9] * b[4] + a[10] * b[2],
a[3] * b[10] - a[5] * b[9] + a[6] * b[8] + a[8] * b[6] - a[9] * b[5] + a[10] * b[3],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Bst, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Bst*)(&a),*(Bst*)(&b));
}			
		 
inline Bst ip (const Bst& a, const Bst& b) { 
	return Bst (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] + a[10] * b[10],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10]
);
}			
		 
		
template<> inline MVBase ip_gen<Bst, Bst> (const MVBase& a, const MVBase& b) { 
	return ip(*(Bst*)(&a),*(Bst*)(&b));
}			
		  	
template<>
inline Bst sp (const Bst& bst, const Rot& rot) {					
					
const Rot& t1 = rot;
const Bst& t2 = bst;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8],
t1[0] * t2[10],
t1[1] * t2[10],
t1[2] * t2[10],
t1[3] * t2[10],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Bst (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[15] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[15] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[15] * t5[1],
t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Mot& mot) {					
					
const Mot& t1 = mot;
const Bst& t2 = bst;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[7] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[6] * t2[4] - t1[7] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[4] * t2[0] - t1[4] * t2[10] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[4] * t2[1] + t1[5] * t2[0] - t1[5] * t2[10] - t1[6] * t2[3] + t1[7] * t2[2],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[6] * t2[10] - t1[7] * t2[1],
t1[0] * t2[10] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6],
t1[1] * t2[10] + t1[4] * t2[5] - t1[5] * t2[4] + t1[7] * t2[6],
t1[2] * t2[10] + t1[4] * t2[6] - t1[6] * t2[4] - t1[7] * t2[5],
t1[3] * t2[10] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0] - t1[7] * t2[10]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Bst (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] - t3[14] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[7] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[7] - t3[6] * t5[4] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[7] + t3[5] * t5[6] - t3[6] * t5[5] + t3[14] * t5[4],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] + t3[10] * t5[4] + t3[11] * t5[5] + t3[12] * t5[6] - t3[13] * t5[7] - t3[15] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[5] - t3[11] * t5[4] + t3[12] * t5[7] + t3[13] * t5[6] + t3[15] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] + t3[10] * t5[6] - t3[11] * t5[7] - t3[12] * t5[4] - t3[13] * t5[5] - t3[15] * t5[1],
 - t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[7]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Dil& dil) {					
					
const Dil& t1 = dil;
const Bst& t2 = bst;
Trt t3 (
t1[0] * t2[0] + t1[1] * t2[10],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4] - t1[1] * t2[4],
t1[0] * t2[5] - t1[1] * t2[5],
t1[0] * t2[6] - t1[1] * t2[6],
t1[0] * t2[7] + t1[1] * t2[7],
t1[0] * t2[8] + t1[1] * t2[8],
t1[0] * t2[9] + t1[1] * t2[9],
t1[0] * t2[10] + t1[1] * t2[0],
t1[1] * t2[1],
t1[1] * t2[2],
t1[1] * t2[3]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Bst (
t3[0] * t5[0] + t3[10] * t5[1],
t3[1] * t5[0] + t3[11] * t5[1],
t3[2] * t5[0] + t3[12] * t5[1],
t3[3] * t5[0] + t3[13] * t5[1],
t3[4] * t5[0] + t3[4] * t5[1],
t3[5] * t5[0] + t3[5] * t5[1],
t3[6] * t5[0] + t3[6] * t5[1],
t3[7] * t5[0] - t3[7] * t5[1],
t3[8] * t5[0] - t3[8] * t5[1],
t3[9] * t5[0] - t3[9] * t5[1],
t3[0] * t5[1] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Trv& trv) {					
					
const Trv& t1 = trv;
const Bst& t2 = bst;
Tst t3 (
t1[0] * t2[0] + t1[1] * t2[7] + t1[2] * t2[8] + t1[3] * t2[9],
t1[0] * t2[1] + t1[1] * t2[8] - t1[2] * t2[7],
t1[0] * t2[2] + t1[1] * t2[9] - t1[3] * t2[7],
t1[0] * t2[3] + t1[2] * t2[9] - t1[3] * t2[8],
t1[0] * t2[4] + t1[1] * t2[0] + t1[1] * t2[10] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[0] + t1[2] * t2[10] - t1[3] * t2[3],
t1[0] * t2[6] + t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0] + t1[3] * t2[10],
t1[0] * t2[7],
t1[0] * t2[8],
t1[0] * t2[9],
t1[0] * t2[10] - t1[1] * t2[7] - t1[2] * t2[8] - t1[3] * t2[9],
 - t1[1] * t2[8] + t1[2] * t2[7],
 - t1[1] * t2[9] + t1[3] * t2[7],
 - t1[2] * t2[9] + t1[3] * t2[8],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Bst (
t3[0] * t5[0] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3],
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] - t3[10] * t5[1] - t3[11] * t5[2] - t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] - t3[10] * t5[2] + t3[11] * t5[1] - t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] - t3[10] * t5[3] + t3[12] * t5[1] + t3[13] * t5[2],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0],
t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Bst& t2 = bst;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] + t1[7] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[8] * t2[10] + t1[11] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[6] * t2[4] + t1[9] * t2[10] - t1[11] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[6] - t1[6] * t2[5] + t1[10] * t2[10] + t1[11] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[7] * t2[4] - t1[8] * t2[5] - t1[9] * t2[6],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] - t1[7] * t2[5] + t1[8] * t2[4] - t1[10] * t2[6],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] - t1[7] * t2[6] + t1[9] * t2[4] + t1[10] * t2[5],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[4] * t2[0] - t1[4] * t2[10] - t1[5] * t2[1] - t1[6] * t2[2] + t1[7] * t2[7] + t1[8] * t2[8] + t1[9] * t2[9] - t1[11] * t2[3],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[4] * t2[1] + t1[5] * t2[0] - t1[5] * t2[10] - t1[6] * t2[3] + t1[7] * t2[8] - t1[8] * t2[7] + t1[10] * t2[9] + t1[11] * t2[2],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[6] * t2[10] + t1[7] * t2[9] - t1[9] * t2[7] - t1[10] * t2[8] - t1[11] * t2[1],
t1[0] * t2[10] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3],
t1[1] * t2[10] + t1[4] * t2[5] - t1[5] * t2[4] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2] + t1[11] * t2[6],
t1[2] * t2[10] + t1[4] * t2[6] - t1[6] * t2[4] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1] - t1[11] * t2[5],
t1[3] * t2[10] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0] + t1[11] * t2[4],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] - t1[8] * t2[6] + t1[9] * t2[5] - t1[10] * t2[4],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[8] * t2[9] - t1[9] * t2[8] + t1[10] * t2[7] + t1[11] * t2[0] - t1[11] * t2[10]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Bst (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] + t3[10] * t5[7] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] - t3[14] * t5[11],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[11] - t3[6] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[11] + t3[5] * t5[6] - t3[6] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[14] * t5[4],
t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[14] * t5[3] - t3[14] * t5[10],
t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[14] * t5[2] + t3[14] * t5[9],
t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[14] * t5[1] - t3[14] * t5[8],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] + t3[10] * t5[4] + t3[11] * t5[5] + t3[12] * t5[6] - t3[13] * t5[11] - t3[15] * t5[3] + t3[15] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[10] * t5[5] - t3[11] * t5[4] + t3[12] * t5[11] + t3[13] * t5[6] + t3[15] * t5[2] - t3[15] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] + t3[10] * t5[6] - t3[11] * t5[11] - t3[12] * t5[4] - t3[13] * t5[5] - t3[15] * t5[1] + t3[15] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] - t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[11]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Trs& trs) {					
					
const Trs& t1 = trs;
const Bst& t2 = bst;
Tvt t3 (
t1[0] * t2[0] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6],
t1[0] * t2[1] + t1[1] * t2[5] - t1[2] * t2[4],
t1[0] * t2[2] + t1[1] * t2[6] - t1[3] * t2[4],
t1[0] * t2[3] + t1[2] * t2[6] - t1[3] * t2[5],
t1[0] * t2[4],
t1[0] * t2[5],
t1[0] * t2[6],
t1[0] * t2[7] + t1[1] * t2[0] - t1[1] * t2[10] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[8] + t1[1] * t2[1] + t1[2] * t2[0] - t1[2] * t2[10] - t1[3] * t2[3],
t1[0] * t2[9] + t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0] - t1[3] * t2[10],
t1[0] * t2[10] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6],
t1[1] * t2[5] - t1[2] * t2[4],
t1[1] * t2[6] - t1[3] * t2[4],
t1[2] * t2[6] - t1[3] * t2[5],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Bst (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3],
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2],
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[7] * t5[0] + t3[10] * t5[1] + t3[11] * t5[2] + t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[8] * t5[0] + t3[10] * t5[2] - t3[11] * t5[1] + t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[9] * t5[0] + t3[10] * t5[3] - t3[12] * t5[1] - t3[13] * t5[2],
 - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Bst& t2 = bst;
Rtc t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] + t1[3] * t2[7] + t1[4] * t2[4] + t1[5] * t2[8] + t1[6] * t2[9] + t1[8] * t2[5] + t1[9] * t2[6] + t1[11] * t2[10] - t1[14] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[8] + t1[4] * t2[5] - t1[5] * t2[7] + t1[7] * t2[9] - t1[8] * t2[4] + t1[10] * t2[6] + t1[12] * t2[10] + t1[14] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] + t1[3] * t2[9] + t1[4] * t2[6] - t1[6] * t2[7] - t1[7] * t2[8] - t1[9] * t2[4] - t1[10] * t2[5] + t1[13] * t2[10] - t1[14] * t2[1],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[3] * t2[0] + t1[3] * t2[10] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3] - t1[11] * t2[4] - t1[12] * t2[5] - t1[13] * t2[6],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[4] * t2[0] - t1[4] * t2[10] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3] + t1[11] * t2[7] + t1[12] * t2[8] + t1[13] * t2[9],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[1] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] + t1[7] * t2[2] - t1[11] * t2[5] + t1[12] * t2[4] + t1[14] * t2[6] - t1[15] * t2[6],
t1[0] * t2[6] - t1[2] * t2[4] + t1[3] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] + t1[6] * t2[10] - t1[7] * t2[1] - t1[11] * t2[6] + t1[13] * t2[4] - t1[14] * t2[5] + t1[15] * t2[5],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0] + t1[7] * t2[10] - t1[12] * t2[6] + t1[13] * t2[5] + t1[14] * t2[4] - t1[15] * t2[4],
t1[0] * t2[8] - t1[1] * t2[7] + t1[4] * t2[1] + t1[8] * t2[0] - t1[8] * t2[10] - t1[9] * t2[3] + t1[10] * t2[2] + t1[11] * t2[8] - t1[12] * t2[7] + t1[14] * t2[9] + t1[15] * t2[9],
t1[0] * t2[9] - t1[2] * t2[7] + t1[4] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[9] * t2[10] - t1[10] * t2[1] + t1[11] * t2[9] - t1[13] * t2[7] - t1[14] * t2[8] - t1[15] * t2[8],
t1[1] * t2[9] - t1[2] * t2[8] + t1[4] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0] - t1[10] * t2[10] + t1[12] * t2[9] - t1[13] * t2[8] + t1[14] * t2[7] + t1[15] * t2[7],
t1[0] * t2[10] - t1[3] * t2[7] + t1[4] * t2[4] - t1[5] * t2[8] - t1[6] * t2[9] + t1[8] * t2[5] + t1[9] * t2[6] + t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[15] * t2[3],
t1[1] * t2[10] - t1[3] * t2[8] + t1[4] * t2[5] + t1[5] * t2[7] - t1[7] * t2[9] - t1[8] * t2[4] + t1[10] * t2[6] + t1[11] * t2[1] + t1[12] * t2[0] - t1[13] * t2[3] + t1[15] * t2[2],
t1[2] * t2[10] - t1[3] * t2[9] + t1[4] * t2[6] + t1[6] * t2[7] + t1[7] * t2[8] - t1[9] * t2[4] - t1[10] * t2[5] + t1[11] * t2[2] + t1[12] * t2[3] + t1[13] * t2[0] - t1[15] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[5] * t2[9] - t1[6] * t2[8] + t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[4] + t1[14] * t2[0] + t1[15] * t2[10],
 - t1[5] * t2[9] + t1[6] * t2[8] - t1[7] * t2[7] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[4] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[10] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Bst (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11],
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[0] - t3[3] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] + t3[7] * t5[14] + t3[7] * t5[15] - t3[11] * t5[3] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[7] * t5[2] - t3[7] * t5[13] - t3[11] * t5[5] - t3[12] * t5[3] + t3[13] * t5[7] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[2] - t3[3] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] + t3[7] * t5[1] + t3[7] * t5[12] - t3[11] * t5[6] - t3[12] * t5[7] - t3[13] * t5[3] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[4] * t5[0] + t3[4] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[14] - t3[10] * t5[15] + t3[11] * t5[4] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[10] - t3[15] * t5[10],
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] - t3[4] * t5[1] + t3[4] * t5[12] + t3[8] * t5[0] - t3[8] * t5[11] - t3[9] * t5[14] + t3[9] * t5[15] - t3[10] * t5[2] + t3[10] * t5[13] + t3[11] * t5[8] + t3[12] * t5[4] - t3[13] * t5[10] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[4] * t5[2] + t3[4] * t5[13] + t3[8] * t5[14] - t3[8] * t5[15] + t3[9] * t5[0] - t3[9] * t5[11] + t3[10] * t5[1] - t3[10] * t5[12] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[4] - t3[14] * t5[8] - t3[15] * t5[8],
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] + t3[3] * t5[4] - t3[4] * t5[3] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[0] + t3[12] * t5[1] + t3[13] * t5[2] - t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Bst& t2 = bst;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] - t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[11] * t2[10] + t1[14] * t2[9] + t1[15] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] - t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[12] * t2[10] - t1[14] * t2[8] - t1[15] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[9] - t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[13] * t2[10] + t1[14] * t2[7] + t1[15] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] + t1[4] * t2[10] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] - t1[14] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] + t1[4] * t2[1] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] - t1[10] * t2[5] + t1[11] * t2[4] - t1[13] * t2[6] + t1[14] * t2[2],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] + t1[6] * t2[10] - t1[10] * t2[6] + t1[12] * t2[4] + t1[13] * t2[5] - t1[14] * t2[1],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[7] * t2[0] - t1[7] * t2[10] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[7] + t1[11] * t2[8] + t1[12] * t2[9] - t1[15] * t2[3],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[7] * t2[1] + t1[8] * t2[0] - t1[8] * t2[10] - t1[9] * t2[3] + t1[10] * t2[8] - t1[11] * t2[7] + t1[13] * t2[9] + t1[15] * t2[2],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[9] * t2[10] + t1[10] * t2[9] - t1[12] * t2[7] - t1[13] * t2[8] - t1[15] * t2[1],
t1[0] * t2[10] - t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[1] * t2[10] - t1[4] * t2[8] + t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] - t1[14] * t2[9] + t1[15] * t2[6],
t1[2] * t2[10] - t1[4] * t2[9] + t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] + t1[14] * t2[8] - t1[15] * t2[5],
t1[3] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] - t1[14] * t2[7] + t1[15] * t2[4],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4] + t1[14] * t2[0] + t1[14] * t2[10],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[11] * t2[9] - t1[12] * t2[8] + t1[13] * t2[7] + t1[15] * t2[0] - t1[15] * t2[10]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Bst (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[15] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[15] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[15] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[15] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Bst& t2 = bst;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] - t1[5] * t2[7] + t1[7] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] - t1[6] * t2[7] - t1[7] * t2[8],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[9] - t1[6] * t2[8] + t1[7] * t2[7],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] + t1[4] * t2[10] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] + t1[4] * t2[1] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] + t1[7] * t2[2],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] + t1[6] * t2[10] - t1[7] * t2[1],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8],
t1[0] * t2[10] - t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9],
t1[1] * t2[10] - t1[4] * t2[8] + t1[5] * t2[7] - t1[7] * t2[9],
t1[2] * t2[10] - t1[4] * t2[9] + t1[6] * t2[7] + t1[7] * t2[8],
t1[3] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] - t1[7] * t2[7],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0] + t1[7] * t2[10],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Bst (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[15] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[7] - t3[14] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[7] - t3[13] * t5[6] + t3[14] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[10] * t5[6] + t3[11] * t5[7] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[15] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[15] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[15] * t5[1],
t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[7]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Bst& t2 = bst;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[5] * t2[10],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[6] * t2[10],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[10],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] - t1[4] * t2[5] + t1[5] * t2[4] - t1[7] * t2[6],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] - t1[4] * t2[6] + t1[6] * t2[4] + t1[7] * t2[5],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[4] * t2[8] - t1[5] * t2[7] + t1[7] * t2[9],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[4] * t2[9] - t1[6] * t2[7] - t1[7] * t2[8],
t1[0] * t2[10] + t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[1] * t2[10] + t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2],
t1[2] * t2[10] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1],
t1[3] * t2[10] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] - t1[5] * t2[6] + t1[6] * t2[5] - t1[7] * t2[4],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[5] * t2[9] - t1[6] * t2[8] + t1[7] * t2[7]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Bst (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[13] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[7] + t3[13] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[10] * t5[6] + t3[11] * t5[7] + t3[12] * t5[4] - t3[13] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[10] * t5[7] - t3[11] * t5[6] + t3[12] * t5[5] + t3[13] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[1] - t3[5] * t5[5] - t3[6] * t5[2] - t3[6] * t5[6] - t3[14] * t5[3] - t3[14] * t5[7],
t3[4] * t5[1] + t3[4] * t5[5] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[3] - t3[6] * t5[7] + t3[14] * t5[2] + t3[14] * t5[6],
t3[4] * t5[2] + t3[4] * t5[6] + t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[0] + t3[6] * t5[4] - t3[14] * t5[1] - t3[14] * t5[5],
t3[7] * t5[0] - t3[7] * t5[4] - t3[8] * t5[1] + t3[8] * t5[5] - t3[9] * t5[2] + t3[9] * t5[6] - t3[15] * t5[3] + t3[15] * t5[7],
t3[7] * t5[1] - t3[7] * t5[5] + t3[8] * t5[0] - t3[8] * t5[4] - t3[9] * t5[3] + t3[9] * t5[7] + t3[15] * t5[2] - t3[15] * t5[6],
t3[7] * t5[2] - t3[7] * t5[6] + t3[8] * t5[3] - t3[8] * t5[7] + t3[9] * t5[0] - t3[9] * t5[4] - t3[15] * t5[1] + t3[15] * t5[5],
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Bst& t2 = bst;
Tst t3 (
t1[0] * t2[0] + t1[1] * t2[7] + t1[2] * t2[8] + t1[3] * t2[9] + t1[4] * t2[10],
t1[0] * t2[1] + t1[1] * t2[8] - t1[2] * t2[7],
t1[0] * t2[2] + t1[1] * t2[9] - t1[3] * t2[7],
t1[0] * t2[3] + t1[2] * t2[9] - t1[3] * t2[8],
t1[0] * t2[4] + t1[1] * t2[0] + t1[1] * t2[10] - t1[2] * t2[1] - t1[3] * t2[2] - t1[4] * t2[4],
t1[0] * t2[5] + t1[1] * t2[1] + t1[2] * t2[0] + t1[2] * t2[10] - t1[3] * t2[3] - t1[4] * t2[5],
t1[0] * t2[6] + t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0] + t1[3] * t2[10] - t1[4] * t2[6],
t1[0] * t2[7] + t1[4] * t2[7],
t1[0] * t2[8] + t1[4] * t2[8],
t1[0] * t2[9] + t1[4] * t2[9],
t1[0] * t2[10] - t1[1] * t2[7] - t1[2] * t2[8] - t1[3] * t2[9] + t1[4] * t2[0],
 - t1[1] * t2[8] + t1[2] * t2[7] + t1[4] * t2[1],
 - t1[1] * t2[9] + t1[3] * t2[7] + t1[4] * t2[2],
 - t1[2] * t2[9] + t1[3] * t2[8] + t1[4] * t2[3],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Bst (
t3[0] * t5[0] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[4],
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1] + t3[11] * t5[4],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1] + t3[12] * t5[4],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2] + t3[13] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] + t3[4] * t5[4] - t3[10] * t5[1] - t3[11] * t5[2] - t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] + t3[5] * t5[4] - t3[10] * t5[2] + t3[11] * t5[1] - t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] + t3[6] * t5[4] - t3[10] * t5[3] + t3[12] * t5[1] + t3[13] * t5[2],
t3[7] * t5[0] - t3[7] * t5[4],
t3[8] * t5[0] - t3[8] * t5[4],
t3[9] * t5[0] - t3[9] * t5[4],
t3[0] * t5[4] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Bst& t2 = bst;
Tvt t3 (
t1[0] * t2[0] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6] + t1[4] * t2[10],
t1[0] * t2[1] + t1[1] * t2[5] - t1[2] * t2[4],
t1[0] * t2[2] + t1[1] * t2[6] - t1[3] * t2[4],
t1[0] * t2[3] + t1[2] * t2[6] - t1[3] * t2[5],
t1[0] * t2[4] - t1[4] * t2[4],
t1[0] * t2[5] - t1[4] * t2[5],
t1[0] * t2[6] - t1[4] * t2[6],
t1[0] * t2[7] + t1[1] * t2[0] - t1[1] * t2[10] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[7],
t1[0] * t2[8] + t1[1] * t2[1] + t1[2] * t2[0] - t1[2] * t2[10] - t1[3] * t2[3] + t1[4] * t2[8],
t1[0] * t2[9] + t1[1] * t2[2] + t1[2] * t2[3] + t1[3] * t2[0] - t1[3] * t2[10] + t1[4] * t2[9],
t1[0] * t2[10] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6] + t1[4] * t2[0],
t1[1] * t2[5] - t1[2] * t2[4] + t1[4] * t2[1],
t1[1] * t2[6] - t1[3] * t2[4] + t1[4] * t2[2],
t1[2] * t2[6] - t1[3] * t2[5] + t1[4] * t2[3],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Bst (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3] + t3[10] * t5[4],
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1] + t3[11] * t5[4],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1] + t3[12] * t5[4],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2] + t3[13] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[7] * t5[0] - t3[7] * t5[4] + t3[10] * t5[1] + t3[11] * t5[2] + t3[12] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[8] * t5[0] - t3[8] * t5[4] + t3[10] * t5[2] - t3[11] * t5[1] + t3[13] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[9] * t5[0] - t3[9] * t5[4] + t3[10] * t5[3] - t3[12] * t5[1] - t3[13] * t5[2],
t3[0] * t5[4] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Trt& trt) {					
					
const Trt& t1 = trt;
const Bst& t2 = bst;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] - t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[11] * t2[10],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] - t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[12] * t2[10],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[9] - t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[13] * t2[10],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] + t1[4] * t2[10] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] + t1[4] * t2[1] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] - t1[10] * t2[5] + t1[11] * t2[4] - t1[13] * t2[6],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] + t1[6] * t2[10] - t1[10] * t2[6] + t1[12] * t2[4] + t1[13] * t2[5],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[7] * t2[0] - t1[7] * t2[10] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[7] + t1[11] * t2[8] + t1[12] * t2[9],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[7] * t2[1] + t1[8] * t2[0] - t1[8] * t2[10] - t1[9] * t2[3] + t1[10] * t2[8] - t1[11] * t2[7] + t1[13] * t2[9],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[9] * t2[10] + t1[10] * t2[9] - t1[12] * t2[7] - t1[13] * t2[8],
t1[0] * t2[10] - t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[1] * t2[10] - t1[4] * t2[8] + t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[2] * t2[10] - t1[4] * t2[9] + t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[3] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[11] * t2[9] - t1[12] * t2[8] + t1[13] * t2[7]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Bst (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Bst& t2 = bst;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9] + t1[7] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] - t1[5] * t2[7] + t1[8] * t2[10] + t1[11] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] - t1[6] * t2[7] + t1[9] * t2[10] - t1[11] * t2[8],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[9] - t1[6] * t2[8] + t1[10] * t2[10] + t1[11] * t2[7],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] + t1[4] * t2[10] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[4] - t1[8] * t2[5] - t1[9] * t2[6] - t1[11] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] + t1[4] * t2[1] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] - t1[7] * t2[5] + t1[8] * t2[4] - t1[10] * t2[6] + t1[11] * t2[2],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] + t1[6] * t2[10] - t1[7] * t2[6] + t1[9] * t2[4] + t1[10] * t2[5] - t1[11] * t2[1],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[7] * t2[7] + t1[8] * t2[8] + t1[9] * t2[9],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[7] * t2[8] - t1[8] * t2[7] + t1[10] * t2[9],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[9] - t1[9] * t2[7] - t1[10] * t2[8],
t1[0] * t2[10] - t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3],
t1[1] * t2[10] - t1[4] * t2[8] + t1[5] * t2[7] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2] - t1[11] * t2[9],
t1[2] * t2[10] - t1[4] * t2[9] + t1[6] * t2[7] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1] + t1[11] * t2[8],
t1[3] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0] - t1[11] * t2[7],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[8] * t2[6] + t1[9] * t2[5] - t1[10] * t2[4] + t1[11] * t2[0] + t1[11] * t2[10],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[8] * t2[9] - t1[9] * t2[8] + t1[10] * t2[7]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Bst (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] - t3[15] * t5[11],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[11] - t3[14] * t5[3] - t3[14] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[11] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[8],
t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[15] * t5[3] + t3[15] * t5[10],
t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[15] * t5[2] - t3[15] * t5[9],
t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] - t3[15] * t5[1] + t3[15] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Tst& tst) {					
					
const Tst& t1 = tst;
const Bst& t2 = bst;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] - t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[11] * t2[10] + t1[14] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] - t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[12] * t2[10] - t1[14] * t2[8],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[9] - t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[13] * t2[10] + t1[14] * t2[7],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] + t1[4] * t2[10] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] - t1[14] * t2[3],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] + t1[4] * t2[1] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] - t1[10] * t2[5] + t1[11] * t2[4] - t1[13] * t2[6] + t1[14] * t2[2],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] + t1[6] * t2[10] - t1[10] * t2[6] + t1[12] * t2[4] + t1[13] * t2[5] - t1[14] * t2[1],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[7] * t2[0] - t1[7] * t2[10] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[7] + t1[11] * t2[8] + t1[12] * t2[9],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[7] * t2[1] + t1[8] * t2[0] - t1[8] * t2[10] - t1[9] * t2[3] + t1[10] * t2[8] - t1[11] * t2[7] + t1[13] * t2[9],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[9] * t2[10] + t1[10] * t2[9] - t1[12] * t2[7] - t1[13] * t2[8],
t1[0] * t2[10] - t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[1] * t2[10] - t1[4] * t2[8] + t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] - t1[14] * t2[9],
t1[2] * t2[10] - t1[4] * t2[9] + t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] + t1[14] * t2[8],
t1[3] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] - t1[14] * t2[7],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4] + t1[14] * t2[0] + t1[14] * t2[10],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[11] * t2[9] - t1[12] * t2[8] + t1[13] * t2[7]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Bst (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Bst sp (const Bst& bst, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Bst& t2 = bst;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] + t1[5] * t2[8] + t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] - t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[11] * t2[10] + t1[14] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] - t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[12] * t2[10] - t1[14] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[5] * t2[9] - t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[13] * t2[10] + t1[14] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] + t1[4] * t2[10] - t1[5] * t2[1] - t1[6] * t2[2] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6],
t1[0] * t2[5] - t1[1] * t2[4] + t1[3] * t2[6] + t1[4] * t2[1] + t1[5] * t2[0] + t1[5] * t2[10] - t1[6] * t2[3] - t1[10] * t2[5] + t1[11] * t2[4] - t1[13] * t2[6],
t1[0] * t2[6] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] + t1[6] * t2[10] - t1[10] * t2[6] + t1[12] * t2[4] + t1[13] * t2[5],
t1[0] * t2[7] + t1[1] * t2[8] + t1[2] * t2[9] + t1[7] * t2[0] - t1[7] * t2[10] - t1[8] * t2[1] - t1[9] * t2[2] + t1[10] * t2[7] + t1[11] * t2[8] + t1[12] * t2[9] - t1[14] * t2[3],
t1[0] * t2[8] - t1[1] * t2[7] + t1[3] * t2[9] + t1[7] * t2[1] + t1[8] * t2[0] - t1[8] * t2[10] - t1[9] * t2[3] + t1[10] * t2[8] - t1[11] * t2[7] + t1[13] * t2[9] + t1[14] * t2[2],
t1[0] * t2[9] - t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[9] * t2[10] + t1[10] * t2[9] - t1[12] * t2[7] - t1[13] * t2[8] - t1[14] * t2[1],
t1[0] * t2[10] - t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[1] * t2[10] - t1[4] * t2[8] + t1[5] * t2[7] + t1[7] * t2[5] - t1[8] * t2[4] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] + t1[14] * t2[6],
t1[2] * t2[10] - t1[4] * t2[9] + t1[6] * t2[7] + t1[7] * t2[6] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] - t1[14] * t2[5],
t1[3] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] + t1[14] * t2[4],
t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4],
t1[1] * t2[9] - t1[2] * t2[8] + t1[3] * t2[7] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[11] * t2[9] - t1[12] * t2[8] + t1[13] * t2[7] + t1[14] * t2[0] - t1[14] * t2[10]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Bst (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[14] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[14] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[14] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[14] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[14]
);

}
		
	
	  	
template<>
inline Bst re (const Bst& bst, const Vec& vec) {					
					
const Vec& t1 = vec;
const Bst& t2 = bst;
Bst t3 = involute( t2);
Pnt_Par t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6],
t1[0] * t3[7] + t1[1] * t3[8] + t1[2] * t3[9],
t1[0] * t3[5] - t1[1] * t3[4],
t1[0] * t3[6] - t1[2] * t3[4],
t1[1] * t3[6] - t1[2] * t3[5],
t1[0] * t3[8] - t1[1] * t3[7],
t1[0] * t3[9] - t1[2] * t3[7],
t1[1] * t3[9] - t1[2] * t3[8],
t1[0] * t3[10],
t1[1] * t3[10],
t1[2] * t3[10],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Bst (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[14] * t6[0],
 - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2],
 - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1],
 - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2],
 - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2],
 - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1],
t4[11] * t6[0] + t4[12] * t6[1] + t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Bst re (const Bst& bst, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Bst& t2 = bst;
Bst t3 = involute( t2);
Pnt_Par t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[4],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3] + t1[3] * t3[5],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0] + t1[3] * t3[6],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6],
t1[0] * t3[7] + t1[1] * t3[8] + t1[2] * t3[9] + t1[3] * t3[0] - t1[3] * t3[10],
t1[0] * t3[5] - t1[1] * t3[4],
t1[0] * t3[6] - t1[2] * t3[4],
t1[1] * t3[6] - t1[2] * t3[5],
t1[0] * t3[8] - t1[1] * t3[7] + t1[3] * t3[1],
t1[0] * t3[9] - t1[2] * t3[7] + t1[3] * t3[2],
t1[1] * t3[9] - t1[2] * t3[8] + t1[3] * t3[3],
t1[0] * t3[10] + t1[3] * t3[4],
t1[1] * t3[10] + t1[3] * t3[5],
t1[2] * t3[10] + t1[3] * t3[6],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Bst (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[3] + t4[14] * t6[0],
 - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2],
 - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1],
t4[0] * t6[3] - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] + t4[11] * t6[3],
t4[1] * t6[3] - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2] + t4[12] * t6[3],
t4[2] * t6[3] - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1] + t4[13] * t6[3],
t4[3] * t6[3] + t4[11] * t6[0] + t4[12] * t6[1] + t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Bst re (const Bst& bst, const Pln& pln) {					
					
const Pln& t1 = pln;
const Bst& t2 = bst;
Bst t3 = involute( t2);
Pnt_Cir t4 (
t1[0] * t3[10] + t1[3] * t3[6],
t1[1] * t3[10] - t1[3] * t3[5],
t1[2] * t3[10] + t1[3] * t3[4],
 - t1[0] * t3[5] - t1[1] * t3[6],
t1[0] * t3[4] - t1[2] * t3[6],
t1[1] * t3[4] + t1[2] * t3[5],
t1[0] * t3[8] + t1[1] * t3[9] - t1[3] * t3[3],
 - t1[0] * t3[7] + t1[2] * t3[9] + t1[3] * t3[2],
 - t1[1] * t3[7] - t1[2] * t3[8] - t1[3] * t3[1],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[6],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] - t1[3] * t3[5],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[3] * t3[4],
 - t1[0] * t3[6] + t1[1] * t3[5] - t1[2] * t3[4],
t1[0] * t3[9] - t1[1] * t3[8] + t1[2] * t3[7] + t1[3] * t3[0] - t1[3] * t3[10]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Bst (
 - t4[10] * t6[0] - t4[11] * t6[1] - t4[12] * t6[2] - t4[13] * t6[3],
t4[5] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1],
 - t4[4] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0],
t4[3] * t6[3] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0],
 - t4[4] * t6[0] - t4[5] * t6[1] - t4[13] * t6[2],
t4[3] * t6[0] - t4[5] * t6[2] + t4[13] * t6[1],
t4[3] * t6[1] + t4[4] * t6[2] - t4[13] * t6[0],
 - t4[2] * t6[3] + t4[7] * t6[0] + t4[8] * t6[1] - t4[12] * t6[3] + t4[14] * t6[2],
t4[1] * t6[3] - t4[6] * t6[0] + t4[8] * t6[2] + t4[11] * t6[3] - t4[14] * t6[1],
 - t4[0] * t6[3] - t4[6] * t6[1] - t4[7] * t6[2] - t4[10] * t6[3] + t4[14] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[13] * t6[3]
);

}
		
	
	  	
template<>
inline Bst re (const Bst& bst, const Dll& dll) {					
					
const Dll& t1 = dll;
const Bst& t2 = bst;
Bst t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[3] * t3[4] + t1[4] * t3[5] + t1[5] * t3[6],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[5] - t1[4] * t3[4],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[6] - t1[5] * t3[4],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[4] * t3[6] - t1[5] * t3[5],
t1[0] * t3[5] + t1[1] * t3[6],
 - t1[0] * t3[4] + t1[2] * t3[6],
 - t1[1] * t3[4] - t1[2] * t3[5],
t1[0] * t3[8] + t1[1] * t3[9] + t1[3] * t3[0] - t1[3] * t3[10] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[0] * t3[7] + t1[2] * t3[9] + t1[3] * t3[1] + t1[4] * t3[0] - t1[4] * t3[10] - t1[5] * t3[3],
 - t1[1] * t3[7] - t1[2] * t3[8] + t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0] - t1[5] * t3[10],
t1[3] * t3[4] + t1[4] * t3[5] + t1[5] * t3[6],
t1[0] * t3[10] + t1[3] * t3[5] - t1[4] * t3[4],
t1[1] * t3[10] + t1[3] * t3[6] - t1[5] * t3[4],
t1[2] * t3[10] + t1[4] * t3[6] - t1[5] * t3[5],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4],
t1[0] * t3[9] - t1[1] * t3[8] + t1[2] * t3[7] + t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Bst (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[4] - t4[5] * t6[3] + t4[14] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[5] - t4[6] * t6[3] - t4[14] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[5] - t4[6] * t6[4] + t4[14] * t6[3],
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[8] * t6[0] - t4[9] * t6[1] + t4[10] * t6[3] + t4[11] * t6[4] + t4[12] * t6[5] - t4[15] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[7] * t6[0] - t4[9] * t6[2] + t4[10] * t6[4] - t4[11] * t6[3] + t4[13] * t6[5] + t4[15] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[7] * t6[1] + t4[8] * t6[2] + t4[10] * t6[5] - t4[12] * t6[3] - t4[13] * t6[4] - t4[15] * t6[0],
 - t4[4] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Bst re (const Bst& bst, const Lin& lin) {					
					
const Lin& t1 = lin;
const Bst& t2 = bst;
Bst t3 = involute( t2);
Rtc t4 (
t1[0] * t3[5] + t1[1] * t3[6] + t1[3] * t3[10],
 - t1[0] * t3[4] + t1[2] * t3[6] + t1[4] * t3[10],
 - t1[1] * t3[4] - t1[2] * t3[5] + t1[5] * t3[10],
 - t1[3] * t3[4] - t1[4] * t3[5] - t1[5] * t3[6],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[3] * t3[7] + t1[4] * t3[8] + t1[5] * t3[9],
 - t1[3] * t3[5] + t1[4] * t3[4],
 - t1[3] * t3[6] + t1[5] * t3[4],
 - t1[4] * t3[6] + t1[5] * t3[5],
t1[0] * t3[0] - t1[0] * t3[10] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[8] - t1[4] * t3[7],
t1[0] * t3[3] + t1[1] * t3[0] - t1[1] * t3[10] - t1[2] * t3[1] + t1[3] * t3[9] - t1[5] * t3[7],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] - t1[2] * t3[10] + t1[4] * t3[9] - t1[5] * t3[8],
t1[0] * t3[5] + t1[1] * t3[6] + t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[0] * t3[4] + t1[2] * t3[6] + t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3],
 - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Bst (
t4[5] * t6[0] + t4[6] * t6[1] + t4[7] * t6[2] + t4[11] * t6[3] + t4[12] * t6[4] + t4[13] * t6[5],
 - t4[3] * t6[0] + t4[6] * t6[2] - t4[7] * t6[1] + t4[11] * t6[4] - t4[12] * t6[3] + t4[15] * t6[5],
 - t4[3] * t6[1] - t4[5] * t6[2] + t4[7] * t6[0] + t4[11] * t6[5] - t4[13] * t6[3] - t4[15] * t6[4],
 - t4[3] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] + t4[12] * t6[5] - t4[13] * t6[4] + t4[15] * t6[3],
 - t4[3] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5],
 - t4[3] * t6[4] + t4[5] * t6[3] - t4[7] * t6[5],
 - t4[3] * t6[5] + t4[6] * t6[3] + t4[7] * t6[4],
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[4] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] - t4[12] * t6[0] - t4[13] * t6[1] - t4[14] * t6[2] - t4[15] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[4] * t6[4] - t4[8] * t6[3] + t4[10] * t6[5] + t4[11] * t6[0] - t4[13] * t6[2] + t4[14] * t6[1] + t4[15] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[4] * t6[5] - t4[9] * t6[3] - t4[10] * t6[4] + t4[11] * t6[1] + t4[12] * t6[2] - t4[14] * t6[0] - t4[15] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[2]
);

}
		
	
	  	
template<>
inline Bst re (const Bst& bst, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Bst& t2 = bst;
Bst t3 = involute( t2);
Pnt_Par t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[7] + t1[4] * t3[4],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3] + t1[3] * t3[8] + t1[4] * t3[5],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0] + t1[3] * t3[9] + t1[4] * t3[6],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6] + t1[3] * t3[0] + t1[3] * t3[10],
t1[0] * t3[7] + t1[1] * t3[8] + t1[2] * t3[9] + t1[4] * t3[0] - t1[4] * t3[10],
t1[0] * t3[5] - t1[1] * t3[4] + t1[3] * t3[1],
t1[0] * t3[6] - t1[2] * t3[4] + t1[3] * t3[2],
t1[1] * t3[6] - t1[2] * t3[5] + t1[3] * t3[3],
t1[0] * t3[8] - t1[1] * t3[7] + t1[4] * t3[1],
t1[0] * t3[9] - t1[2] * t3[7] + t1[4] * t3[2],
t1[1] * t3[9] - t1[2] * t3[8] + t1[4] * t3[3],
t1[0] * t3[10] - t1[3] * t3[7] + t1[4] * t3[4],
t1[1] * t3[10] - t1[3] * t3[8] + t1[4] * t3[5],
t1[2] * t3[10] - t1[3] * t3[9] + t1[4] * t3[6],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Bst (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] - t4[4] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[4] - t4[8] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[4] - t4[9] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[4] - t4[10] * t6[3] + t4[14] * t6[0],
t4[0] * t6[3] - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] - t4[11] * t6[3],
t4[1] * t6[3] - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2] - t4[12] * t6[3],
t4[2] * t6[3] - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1] - t4[13] * t6[3],
t4[0] * t6[4] - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] + t4[11] * t6[4],
t4[1] * t6[4] - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2] + t4[12] * t6[4],
t4[2] * t6[4] - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1] + t4[13] * t6[4],
t4[3] * t6[4] - t4[4] * t6[3] + t4[11] * t6[0] + t4[12] * t6[1] + t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Bst re (const Bst& bst, const Par& par) {					
					
const Par& t1 = par;
const Bst& t2 = bst;
Bst t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[3] * t3[7] + t1[4] * t3[8] + t1[5] * t3[9] + t1[6] * t3[4] + t1[7] * t3[5] + t1[8] * t3[6] + t1[9] * t3[10],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[8] - t1[4] * t3[7] + t1[6] * t3[5] - t1[7] * t3[4],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[9] - t1[5] * t3[7] + t1[6] * t3[6] - t1[8] * t3[4],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[4] * t3[9] - t1[5] * t3[8] + t1[7] * t3[6] - t1[8] * t3[5],
t1[0] * t3[5] + t1[1] * t3[6] + t1[3] * t3[0] + t1[3] * t3[10] - t1[4] * t3[1] - t1[5] * t3[2] - t1[9] * t3[4],
 - t1[0] * t3[4] + t1[2] * t3[6] + t1[3] * t3[1] + t1[4] * t3[0] + t1[4] * t3[10] - t1[5] * t3[3] - t1[9] * t3[5],
 - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0] + t1[5] * t3[10] - t1[9] * t3[6],
t1[0] * t3[8] + t1[1] * t3[9] + t1[6] * t3[0] - t1[6] * t3[10] - t1[7] * t3[1] - t1[8] * t3[2] + t1[9] * t3[7],
 - t1[0] * t3[7] + t1[2] * t3[9] + t1[6] * t3[1] + t1[7] * t3[0] - t1[7] * t3[10] - t1[8] * t3[3] + t1[9] * t3[8],
 - t1[1] * t3[7] - t1[2] * t3[8] + t1[6] * t3[2] + t1[7] * t3[3] + t1[8] * t3[0] - t1[8] * t3[10] + t1[9] * t3[9],
 - t1[3] * t3[7] - t1[4] * t3[8] - t1[5] * t3[9] + t1[6] * t3[4] + t1[7] * t3[5] + t1[8] * t3[6] + t1[9] * t3[0],
t1[0] * t3[10] - t1[3] * t3[8] + t1[4] * t3[7] + t1[6] * t3[5] - t1[7] * t3[4] + t1[9] * t3[1],
t1[1] * t3[10] - t1[3] * t3[9] + t1[5] * t3[7] + t1[6] * t3[6] - t1[8] * t3[4] + t1[9] * t3[2],
t1[2] * t3[10] - t1[4] * t3[9] + t1[5] * t3[8] + t1[7] * t3[6] - t1[8] * t3[5] + t1[9] * t3[3],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1],
t1[0] * t3[9] - t1[1] * t3[8] + t1[2] * t3[7] + t1[6] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Bst (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[6] + t4[5] * t6[7] + t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] + t4[10] * t6[9],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[7] - t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[11] * t6[9] + t4[14] * t6[8] + t4[15] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[8] - t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[12] * t6[9] - t4[14] * t6[7] - t4[15] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[8] - t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[13] * t6[9] + t4[14] * t6[6] + t4[15] * t6[3],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[4] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[10] * t6[3] - t4[11] * t6[4] - t4[12] * t6[5] - t4[14] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] + t4[5] * t6[9] - t4[6] * t6[2] - t4[10] * t6[4] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] + t4[6] * t6[9] - t4[10] * t6[5] + t4[12] * t6[3] + t4[13] * t6[4] - t4[14] * t6[0],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[7] * t6[9] - t4[8] * t6[0] - t4[9] * t6[1] + t4[10] * t6[6] + t4[11] * t6[7] + t4[12] * t6[8] - t4[15] * t6[2],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[8] + t4[7] * t6[0] - t4[8] * t6[9] - t4[9] * t6[2] + t4[10] * t6[7] - t4[11] * t6[6] + t4[13] * t6[8] + t4[15] * t6[1],
t4[0] * t6[8] - t4[2] * t6[6] - t4[3] * t6[7] + t4[7] * t6[1] + t4[8] * t6[2] - t4[9] * t6[9] + t4[10] * t6[8] - t4[12] * t6[6] - t4[13] * t6[7] - t4[15] * t6[0],
t4[0] * t6[9] - t4[4] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Bst re (const Bst& bst, const Cir& cir) {					
					
const Cir& t1 = cir;
const Bst& t2 = bst;
Bst t3 = involute( t2);
Rtc t4 (
t1[0] * t3[8] + t1[1] * t3[9] + t1[3] * t3[5] + t1[4] * t3[6] + t1[6] * t3[10] - t1[9] * t3[3],
 - t1[0] * t3[7] + t1[2] * t3[9] - t1[3] * t3[4] + t1[5] * t3[6] + t1[7] * t3[10] + t1[9] * t3[2],
 - t1[1] * t3[7] - t1[2] * t3[8] - t1[4] * t3[4] - t1[5] * t3[5] + t1[8] * t3[10] - t1[9] * t3[1],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] - t1[6] * t3[4] - t1[7] * t3[5] - t1[8] * t3[6],
 - t1[3] * t3[1] - t1[4] * t3[2] - t1[5] * t3[3] + t1[6] * t3[7] + t1[7] * t3[8] + t1[8] * t3[9],
t1[0] * t3[0] + t1[0] * t3[10] - t1[1] * t3[3] + t1[2] * t3[2] - t1[6] * t3[5] + t1[7] * t3[4] + t1[9] * t3[6],
t1[0] * t3[3] + t1[1] * t3[0] + t1[1] * t3[10] - t1[2] * t3[1] - t1[6] * t3[6] + t1[8] * t3[4] - t1[9] * t3[5],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[2] * t3[10] - t1[7] * t3[6] + t1[8] * t3[5] + t1[9] * t3[4],
t1[3] * t3[0] - t1[3] * t3[10] - t1[4] * t3[3] + t1[5] * t3[2] + t1[6] * t3[8] - t1[7] * t3[7] + t1[9] * t3[9],
t1[3] * t3[3] + t1[4] * t3[0] - t1[4] * t3[10] - t1[5] * t3[1] + t1[6] * t3[9] - t1[8] * t3[7] - t1[9] * t3[8],
 - t1[3] * t3[2] + t1[4] * t3[1] + t1[5] * t3[0] - t1[5] * t3[10] + t1[7] * t3[9] - t1[8] * t3[8] + t1[9] * t3[7],
 - t1[0] * t3[8] - t1[1] * t3[9] + t1[3] * t3[5] + t1[4] * t3[6] + t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2],
t1[0] * t3[7] - t1[2] * t3[9] - t1[3] * t3[4] + t1[5] * t3[6] + t1[6] * t3[1] + t1[7] * t3[0] - t1[8] * t3[3],
t1[1] * t3[7] + t1[2] * t3[8] - t1[4] * t3[4] - t1[5] * t3[5] + t1[6] * t3[2] + t1[7] * t3[3] + t1[8] * t3[0],
t1[0] * t3[9] - t1[1] * t3[8] + t1[2] * t3[7] + t1[3] * t3[6] - t1[4] * t3[5] + t1[5] * t3[4] + t1[9] * t3[0],
 - t1[0] * t3[9] + t1[1] * t3[8] - t1[2] * t3[7] + t1[3] * t3[6] - t1[4] * t3[5] + t1[5] * t3[4] + t1[6] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1] + t1[9] * t3[10]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Bst (
t4[5] * t6[3] + t4[6] * t6[4] + t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] + t4[11] * t6[6] + t4[12] * t6[7] + t4[13] * t6[8] - t4[14] * t6[9],
t4[2] * t6[9] - t4[3] * t6[3] - t4[4] * t6[0] + t4[6] * t6[5] - t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[15] * t6[8],
 - t4[1] * t6[9] - t4[3] * t6[4] - t4[4] * t6[1] - t4[5] * t6[5] + t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[15] * t6[7],
t4[0] * t6[9] - t4[3] * t6[5] - t4[4] * t6[2] + t4[5] * t6[4] - t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[12] * t6[8] - t4[13] * t6[7] + t4[15] * t6[6],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[9] + t4[12] * t6[0] + t4[13] * t6[1] - t4[14] * t6[2] + t4[15] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[3] * t6[7] + t4[5] * t6[6] - t4[6] * t6[9] - t4[7] * t6[8] - t4[11] * t6[0] + t4[13] * t6[2] + t4[14] * t6[1] - t4[15] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[8] + t4[5] * t6[9] + t4[6] * t6[6] + t4[7] * t6[7] - t4[11] * t6[1] - t4[12] * t6[2] - t4[14] * t6[0] + t4[15] * t6[0],
 - t4[1] * t6[3] - t4[2] * t6[4] + t4[4] * t6[6] + t4[8] * t6[7] + t4[9] * t6[8] + t4[10] * t6[9] - t4[12] * t6[3] - t4[13] * t6[4] - t4[14] * t6[5] - t4[15] * t6[5],
t4[0] * t6[3] - t4[2] * t6[5] + t4[4] * t6[7] - t4[8] * t6[6] - t4[9] * t6[9] + t4[10] * t6[8] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[4] + t4[15] * t6[4],
t4[0] * t6[4] + t4[1] * t6[5] + t4[4] * t6[8] + t4[8] * t6[9] - t4[9] * t6[6] - t4[10] * t6[7] + t4[11] * t6[4] + t4[12] * t6[5] - t4[14] * t6[3] - t4[15] * t6[3],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[5] * t6[3] - t4[6] * t6[4] - t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] - t4[15] * t6[9]
);

}
		
	
	  	
template<>
inline Bst re (const Bst& bst, const Sph& sph) {					
					
const Sph& t1 = sph;
const Bst& t2 = bst;
Bst t3 = involute( t2);
Pnt_Cir t4 (
t1[0] * t3[10] + t1[3] * t3[9] + t1[4] * t3[6],
t1[1] * t3[10] - t1[3] * t3[8] - t1[4] * t3[5],
t1[2] * t3[10] + t1[3] * t3[7] + t1[4] * t3[4],
 - t1[0] * t3[5] - t1[1] * t3[6] - t1[3] * t3[3],
t1[0] * t3[4] - t1[2] * t3[6] + t1[3] * t3[2],
t1[1] * t3[4] + t1[2] * t3[5] - t1[3] * t3[1],
t1[0] * t3[8] + t1[1] * t3[9] - t1[4] * t3[3],
 - t1[0] * t3[7] + t1[2] * t3[9] + t1[4] * t3[2],
 - t1[1] * t3[7] - t1[2] * t3[8] - t1[4] * t3[1],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] - t1[3] * t3[9] + t1[4] * t3[6],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[8] - t1[4] * t3[5],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] - t1[3] * t3[7] + t1[4] * t3[4],
 - t1[0] * t3[6] + t1[1] * t3[5] - t1[2] * t3[4] + t1[3] * t3[0] + t1[3] * t3[10],
t1[0] * t3[9] - t1[1] * t3[8] + t1[2] * t3[7] + t1[4] * t3[0] - t1[4] * t3[10]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Bst (
 - t4[10] * t6[0] - t4[11] * t6[1] - t4[12] * t6[2] - t4[13] * t6[4] - t4[14] * t6[3],
t4[5] * t6[4] + t4[8] * t6[3] + t4[9] * t6[0] - t4[11] * t6[2] + t4[12] * t6[1],
 - t4[4] * t6[4] - t4[7] * t6[3] + t4[9] * t6[1] + t4[10] * t6[2] - t4[12] * t6[0],
t4[3] * t6[4] + t4[6] * t6[3] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[0],
 - t4[2] * t6[3] - t4[4] * t6[0] - t4[5] * t6[1] + t4[12] * t6[3] - t4[13] * t6[2],
t4[1] * t6[3] + t4[3] * t6[0] - t4[5] * t6[2] - t4[11] * t6[3] + t4[13] * t6[1],
 - t4[0] * t6[3] + t4[3] * t6[1] + t4[4] * t6[2] + t4[10] * t6[3] - t4[13] * t6[0],
 - t4[2] * t6[4] + t4[7] * t6[0] + t4[8] * t6[1] - t4[12] * t6[4] + t4[14] * t6[2],
t4[1] * t6[4] - t4[6] * t6[0] + t4[8] * t6[2] + t4[11] * t6[4] - t4[14] * t6[1],
 - t4[0] * t6[4] - t4[6] * t6[1] - t4[7] * t6[2] - t4[10] * t6[4] + t4[14] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[13] * t6[4] - t4[14] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	