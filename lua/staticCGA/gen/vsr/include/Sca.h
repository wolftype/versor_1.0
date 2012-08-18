		#ifndef SCA_H_INCLUDED
		#define SCA_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
		
		
inline Sca involute (const Sca& a) { 
	return Sca (a[0]);
}
			
		 
		
		
inline Sca reverse (const Sca& a) { 
	return Sca (a[0]);
}
			
		 
		
		
inline Sca conjugate (const Sca& a) { 
	return Sca (a[0]);
}
			
		 
template<> inline Sca cast<Sca,Rot> (const Rot& a) {
		return Sca (a[0]);
}  
		 
inline Sca gp (const Sca& a, const Sca& b) { 
	return Sca (
a[0] * b[0]
);
}			
		 
inline Vec gp (const Sca& a, const Vec& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Biv gp (const Sca& a, const Biv& b) { 
	return Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tri gp (const Sca& a, const Tri& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
inline Rot gp (const Sca& a, const Rot& b) { 
	return Rot (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3]
);
}			
		 
inline Sca op (const Sca& a, const Sca& b) { 
	return Sca (
a[0] * b[0]
);
}			
		 
inline Vec op (const Sca& a, const Vec& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Biv op (const Sca& a, const Biv& b) { 
	return Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tri op (const Sca& a, const Tri& b) { 
	return Tri (
a[0] * b[0]
);
}			
		 
inline Sca ip (const Sca& a, const Sca& b) { 
	return Sca (
a[0] * b[0]
);
}			
		 
inline Vec ip (const Sca& a, const Vec& b) { 
	return Vec (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Biv ip (const Sca& a, const Biv& b) { 
	return Biv (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
inline Tri ip (const Sca& a, const Tri& b) { 
	return Tri (
a[0] * b[0]
);
}			
		  	
inline Sca sp (const Sca& sca, const Rot& rot) {					
					
const Rot& t1 = rot;
const Sca& t2 = sca;
Rot t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Sca (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3]
);

}
		
	
	  	
inline Rot sp0 (const Sca& sca, const Rot& rot) {					
					
const Rot& t1 = rot;
const Sca& t2 = sca;
Rot t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Rot(
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);
}
		
	
		
	} //vsr::
	#endif
	