
#ifndef conga_assign_Inf_Cir_con_h_included
#define conga_assign_Inf_Cir_con_h_included
#include "conga_assign_Inf_Cir.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Inf_Cir_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Inf_Cir_func[76] = {
						conga_assign_101_8,
						conga_assign_101_10,
						conga_assign_101_11,
						conga_assign_101_12,
						conga_assign_101_14,
						conga_assign_101_19,
						conga_assign_101_20,
						conga_assign_101_21,
						conga_assign_101_24,
						conga_assign_101_27,
						conga_assign_101_29,
						conga_assign_101_30,
						conga_assign_101_32,
						conga_assign_101_34,
						conga_assign_101_35,
						conga_assign_101_36,
						conga_assign_101_37,
						conga_assign_101_38,
						conga_assign_101_40,
						conga_assign_101_43,
						conga_assign_101_48,
						conga_assign_101_49,
						conga_assign_101_50,
						conga_assign_101_53,
						conga_assign_101_61,
						conga_assign_101_63,
						conga_assign_101_64,
						conga_assign_101_66,
						conga_assign_101_68,
						conga_assign_101_69,
						conga_assign_101_74,
						conga_assign_101_75,
						conga_assign_101_77,
						conga_assign_101_78,
						conga_assign_101_81,
						conga_assign_101_82,
						conga_assign_101_85,
						conga_assign_101_89,
						conga_assign_101_91,
						conga_assign_101_92,
						conga_assign_101_95,
						conga_assign_101_98,
						conga_assign_101_101,
						conga_assign_101_104,
						conga_assign_101_106,
						conga_assign_101_107,
						conga_assign_101_109,
						conga_assign_101_110,
						conga_assign_101_113,
						conga_assign_101_115,
						conga_assign_101_116,
						conga_assign_101_117,
						conga_assign_101_119,
						conga_assign_101_122,
						conga_assign_101_125,
						conga_assign_101_127,
						conga_assign_101_129,
						conga_assign_101_131,
						conga_assign_101_133,
						conga_assign_101_136,
						conga_assign_101_139,
						conga_assign_101_140,
						conga_assign_101_143,
						conga_assign_101_145,
						conga_assign_101_147,
						conga_assign_101_149,
						conga_assign_101_151,
						conga_assign_101_154,
						conga_assign_101_156,
						conga_assign_101_157,
						conga_assign_101_159,
						conga_assign_101_162,
						conga_assign_101_163,
						conga_assign_101_166,
						conga_assign_101_167,
			
						conga_direct_assign_101,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	