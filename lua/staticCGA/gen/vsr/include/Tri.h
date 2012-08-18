		#ifndef TRI_H_INCLUDED
		#define TRI_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
		
		
inline Tri involute (const Tri& a) { 
	return Tri (-a[0]);
}
			
		 
		
		
inline Tri reverse (const Tri& a) { 
	return Tri (-a[0]);
}
			
		 
		
		
inline Tri conjugate (const Tri& a) { 
	return Tri (a[0]);
}
			
		 
inline Tri gp (const Tri& a, const Sca& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
inline Biv gp (const Tri& a, const Vec& b) { 
	return Biv (
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Vec gp (const Tri& a, const Biv& b) { 
	return Vec (
 - a[0] * b[2],
a[0] * b[1],
 - a[0] * b[0]
);
}			
		 
inline Sca gp (const Tri& a, const Tri& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		 
inline Vec_Biv gp (const Tri& a, const Rot& b) { 
	return Vec_Biv (
 - a[0] * b[3],
a[0] * b[2],
 - a[0] * b[1],
a[0] * b[0]
);
}			
		 
inline Tri op (const Tri& a, const Sca& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
inline Sca op (const Tri& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Tri& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Tri& a, const Tri& b) { 
	return Sca (
 - a[0] * b[0]
);
}			
		  	
inline Tri sp (const Tri& tri, const Rot& rot) {					
					
const Rot& t1 = rot;
const Tri& t2 = tri;
Vec_Biv t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Tri (
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
inline Vec_Biv sp0 (const Tri& tri, const Rot& rot) {					
					
const Rot& t1 = rot;
const Tri& t2 = tri;
Vec_Biv t3 (
 - t1[3] * t2[0],
t1[2] * t2[0],
 - t1[1] * t2[0],
t1[0] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Vec_Biv(
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);
}
		
	
		
	} //vsr::
	#endif
	