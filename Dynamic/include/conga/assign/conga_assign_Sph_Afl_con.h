
#ifndef conga_assign_Sph_Afl_con_h_included
#define conga_assign_Sph_Afl_con_h_included
#include "conga_assign_Sph_Afl.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Sph_Afl_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Sph_Afl_func[83] = {
						conga_assign_140_4,
						conga_assign_140_8,
						conga_assign_140_10,
						conga_assign_140_11,
						conga_assign_140_12,
						conga_assign_140_15,
						conga_assign_140_17,
						conga_assign_140_19,
						conga_assign_140_20,
						conga_assign_140_21,
						conga_assign_140_24,
						conga_assign_140_27,
						conga_assign_140_29,
						conga_assign_140_30,
						conga_assign_140_31,
						conga_assign_140_32,
						conga_assign_140_33,
						conga_assign_140_34,
						conga_assign_140_35,
						conga_assign_140_36,
						conga_assign_140_37,
						conga_assign_140_38,
						conga_assign_140_39,
						conga_assign_140_40,
						conga_assign_140_43,
						conga_assign_140_48,
						conga_assign_140_49,
						conga_assign_140_50,
						conga_assign_140_51,
						conga_assign_140_53,
						conga_assign_140_61,
						conga_assign_140_63,
						conga_assign_140_64,
						conga_assign_140_66,
						conga_assign_140_68,
						conga_assign_140_69,
						conga_assign_140_74,
						conga_assign_140_75,
						conga_assign_140_77,
						conga_assign_140_78,
						conga_assign_140_81,
						conga_assign_140_82,
						conga_assign_140_85,
						conga_assign_140_86,
						conga_assign_140_89,
						conga_assign_140_91,
						conga_assign_140_92,
						conga_assign_140_95,
						conga_assign_140_98,
						conga_assign_140_101,
						conga_assign_140_104,
						conga_assign_140_106,
						conga_assign_140_107,
						conga_assign_140_109,
						conga_assign_140_110,
						conga_assign_140_113,
						conga_assign_140_115,
						conga_assign_140_116,
						conga_assign_140_117,
						conga_assign_140_119,
						conga_assign_140_122,
						conga_assign_140_125,
						conga_assign_140_127,
						conga_assign_140_129,
						conga_assign_140_131,
						conga_assign_140_133,
						conga_assign_140_136,
						conga_assign_140_139,
						conga_assign_140_140,
						conga_assign_140_143,
						conga_assign_140_145,
						conga_assign_140_147,
						conga_assign_140_149,
						conga_assign_140_151,
						conga_assign_140_154,
						conga_assign_140_156,
						conga_assign_140_157,
						conga_assign_140_159,
						conga_assign_140_162,
						conga_assign_140_163,
						conga_assign_140_166,
						conga_assign_140_167,
			
						conga_direct_assign_140,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	