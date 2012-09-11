
#ifndef conga_assign_Sph_con_h_included
#define conga_assign_Sph_con_h_included
#include "conga_assign_Sph.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Sph_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Sph_func[61] = {
						conga_assign_10_10,
						conga_assign_10_14,
						conga_assign_10_17,
						conga_assign_10_19,
						conga_assign_10_32,
						conga_assign_10_34,
						conga_assign_10_35,
						conga_assign_10_36,
						conga_assign_10_38,
						conga_assign_10_40,
						conga_assign_10_43,
						conga_assign_10_48,
						conga_assign_10_49,
						conga_assign_10_50,
						conga_assign_10_51,
						conga_assign_10_53,
						conga_assign_10_61,
						conga_assign_10_63,
						conga_assign_10_64,
						conga_assign_10_66,
						conga_assign_10_68,
						conga_assign_10_69,
						conga_assign_10_74,
						conga_assign_10_75,
						conga_assign_10_77,
						conga_assign_10_78,
						conga_assign_10_81,
						conga_assign_10_82,
						conga_assign_10_85,
						conga_assign_10_89,
						conga_assign_10_91,
						conga_assign_10_92,
						conga_assign_10_95,
						conga_assign_10_98,
						conga_assign_10_101,
						conga_assign_10_104,
						conga_assign_10_106,
						conga_assign_10_107,
						conga_assign_10_109,
						conga_assign_10_110,
						conga_assign_10_113,
						conga_assign_10_115,
						conga_assign_10_116,
						conga_assign_10_119,
						conga_assign_10_125,
						conga_assign_10_129,
						conga_assign_10_131,
						conga_assign_10_136,
						conga_assign_10_139,
						conga_assign_10_140,
						conga_assign_10_145,
						conga_assign_10_149,
						conga_assign_10_151,
						conga_assign_10_154,
						conga_assign_10_156,
						conga_assign_10_157,
						conga_assign_10_159,
						conga_assign_10_162,
						conga_assign_10_163,
						conga_assign_10_167,
			
						conga_direct_assign_10,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	