
#ifndef conga_assign_Dil_Sph_con_h_included
#define conga_assign_Dil_Sph_con_h_included
#include "conga_assign_Dil_Sph.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dil_Sph_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dil_Sph_func[71] = {
						conga_assign_74_8,
						conga_assign_74_10,
						conga_assign_74_11,
						conga_assign_74_14,
						conga_assign_74_17,
						conga_assign_74_19,
						conga_assign_74_21,
						conga_assign_74_24,
						conga_assign_74_27,
						conga_assign_74_29,
						conga_assign_74_32,
						conga_assign_74_34,
						conga_assign_74_35,
						conga_assign_74_36,
						conga_assign_74_38,
						conga_assign_74_40,
						conga_assign_74_43,
						conga_assign_74_48,
						conga_assign_74_49,
						conga_assign_74_50,
						conga_assign_74_51,
						conga_assign_74_53,
						conga_assign_74_61,
						conga_assign_74_63,
						conga_assign_74_64,
						conga_assign_74_66,
						conga_assign_74_68,
						conga_assign_74_69,
						conga_assign_74_74,
						conga_assign_74_75,
						conga_assign_74_77,
						conga_assign_74_78,
						conga_assign_74_81,
						conga_assign_74_82,
						conga_assign_74_85,
						conga_assign_74_89,
						conga_assign_74_91,
						conga_assign_74_92,
						conga_assign_74_95,
						conga_assign_74_98,
						conga_assign_74_101,
						conga_assign_74_104,
						conga_assign_74_106,
						conga_assign_74_107,
						conga_assign_74_109,
						conga_assign_74_110,
						conga_assign_74_113,
						conga_assign_74_115,
						conga_assign_74_116,
						conga_assign_74_119,
						conga_assign_74_125,
						conga_assign_74_127,
						conga_assign_74_129,
						conga_assign_74_131,
						conga_assign_74_133,
						conga_assign_74_136,
						conga_assign_74_139,
						conga_assign_74_140,
						conga_assign_74_143,
						conga_assign_74_145,
						conga_assign_74_147,
						conga_assign_74_149,
						conga_assign_74_151,
						conga_assign_74_154,
						conga_assign_74_156,
						conga_assign_74_157,
						conga_assign_74_159,
						conga_assign_74_162,
						conga_assign_74_163,
						conga_assign_74_167,
			
						conga_direct_assign_74,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	