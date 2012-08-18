		#ifndef VEC_ROT_H_INCLUDED
		#define VEC_ROT_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
		
		
inline Vec_Rot involute (const Vec_Rot& a) { 
	return Vec_Rot (-a[0],-a[1],-a[2],-a[3]);
}
			
		 
		
		
inline Vec_Rot reverse (const Vec_Rot& a) { 
	return Vec_Rot (a[0],a[1],a[2],-a[3]);
}
			
		 
		
		
inline Vec_Rot conjugate (const Vec_Rot& a) { 
	return Vec_Rot (-a[0],-a[1],-a[2],a[3]);
}
			
		 
template<> inline Vec_Rot cast<Vec_Rot,Vec> (const Vec& a) {
		return Vec_Rot (a[0],a[1],a[2]);
}  
		 
template<> inline Vec_Rot cast<Vec_Rot,Tri> (const Tri& a) {
		return Vec_Rot (a[0]);
}  
			
	} //vsr::
	#endif
	