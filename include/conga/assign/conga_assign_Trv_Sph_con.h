
#ifndef conga_assign_Trv_Sph_con_h_included
#define conga_assign_Trv_Sph_con_h_included
#include "conga_assign_Trv_Sph.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trv_Sph_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trv_Sph_func[78] = {
						conga_assign_91_8,
						conga_assign_91_10,
						conga_assign_91_11,
						conga_assign_91_14,
						conga_assign_91_15,
						conga_assign_91_17,
						conga_assign_91_19,
						conga_assign_91_21,
						conga_assign_91_24,
						conga_assign_91_27,
						conga_assign_91_29,
						conga_assign_91_32,
						conga_assign_91_33,
						conga_assign_91_34,
						conga_assign_91_35,
						conga_assign_91_36,
						conga_assign_91_38,
						conga_assign_91_39,
						conga_assign_91_40,
						conga_assign_91_43,
						conga_assign_91_48,
						conga_assign_91_49,
						conga_assign_91_50,
						conga_assign_91_51,
						conga_assign_91_53,
						conga_assign_91_61,
						conga_assign_91_63,
						conga_assign_91_64,
						conga_assign_91_66,
						conga_assign_91_68,
						conga_assign_91_69,
						conga_assign_91_74,
						conga_assign_91_75,
						conga_assign_91_77,
						conga_assign_91_78,
						conga_assign_91_81,
						conga_assign_91_82,
						conga_assign_91_85,
						conga_assign_91_86,
						conga_assign_91_89,
						conga_assign_91_91,
						conga_assign_91_92,
						conga_assign_91_95,
						conga_assign_91_98,
						conga_assign_91_101,
						conga_assign_91_104,
						conga_assign_91_106,
						conga_assign_91_107,
						conga_assign_91_109,
						conga_assign_91_110,
						conga_assign_91_113,
						conga_assign_91_115,
						conga_assign_91_116,
						conga_assign_91_117,
						conga_assign_91_119,
						conga_assign_91_122,
						conga_assign_91_125,
						conga_assign_91_127,
						conga_assign_91_129,
						conga_assign_91_131,
						conga_assign_91_133,
						conga_assign_91_136,
						conga_assign_91_139,
						conga_assign_91_140,
						conga_assign_91_143,
						conga_assign_91_145,
						conga_assign_91_147,
						conga_assign_91_149,
						conga_assign_91_151,
						conga_assign_91_154,
						conga_assign_91_156,
						conga_assign_91_157,
						conga_assign_91_159,
						conga_assign_91_162,
						conga_assign_91_163,
						conga_assign_91_166,
						conga_assign_91_167,
			
						conga_direct_assign_91,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	