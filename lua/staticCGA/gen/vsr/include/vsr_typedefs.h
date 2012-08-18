	#ifndef VSR_TYPEDEFS_H_INCLUDED
	#define VSR_TYPEDEFS_H_INCLUDED
	 
	#include "MV.h"
	
	namespace vsr{
	
	
	typedef MV<1,SCA,float>  Sca;
	
	typedef MV<3,VEC,float>  Vec;
	
	typedef MV<3,BIV,float>  Biv;
	
	typedef MV<1,TRI,float>  Tri;
	
	typedef MV<4,ROT,float>  Rot;
	
	} //vsr::
	
	#endif
	