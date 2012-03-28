
#ifndef conga_assign_Inf_Par_con_h_included
#define conga_assign_Inf_Par_con_h_included
#include "conga_assign_Inf_Par.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Inf_Par_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Inf_Par_func[76] = {
						conga_assign_100_3,
						conga_assign_100_5,
						conga_assign_100_7,
						conga_assign_100_9,
						conga_assign_100_13,
						conga_assign_100_18,
						conga_assign_100_22,
						conga_assign_100_23,
						conga_assign_100_26,
						conga_assign_100_42,
						conga_assign_100_44,
						conga_assign_100_45,
						conga_assign_100_46,
						conga_assign_100_47,
						conga_assign_100_52,
						conga_assign_100_54,
						conga_assign_100_55,
						conga_assign_100_56,
						conga_assign_100_57,
						conga_assign_100_58,
						conga_assign_100_59,
						conga_assign_100_60,
						conga_assign_100_62,
						conga_assign_100_65,
						conga_assign_100_67,
						conga_assign_100_70,
						conga_assign_100_71,
						conga_assign_100_72,
						conga_assign_100_76,
						conga_assign_100_79,
						conga_assign_100_80,
						conga_assign_100_84,
						conga_assign_100_88,
						conga_assign_100_90,
						conga_assign_100_93,
						conga_assign_100_94,
						conga_assign_100_96,
						conga_assign_100_97,
						conga_assign_100_99,
						conga_assign_100_100,
						conga_assign_100_102,
						conga_assign_100_103,
						conga_assign_100_105,
						conga_assign_100_108,
						conga_assign_100_111,
						conga_assign_100_112,
						conga_assign_100_114,
						conga_assign_100_118,
						conga_assign_100_120,
						conga_assign_100_121,
						conga_assign_100_123,
						conga_assign_100_124,
						conga_assign_100_126,
						conga_assign_100_128,
						conga_assign_100_130,
						conga_assign_100_132,
						conga_assign_100_134,
						conga_assign_100_135,
						conga_assign_100_137,
						conga_assign_100_138,
						conga_assign_100_141,
						conga_assign_100_142,
						conga_assign_100_144,
						conga_assign_100_146,
						conga_assign_100_148,
						conga_assign_100_150,
						conga_assign_100_152,
						conga_assign_100_153,
						conga_assign_100_155,
						conga_assign_100_158,
						conga_assign_100_160,
						conga_assign_100_161,
						conga_assign_100_164,
						conga_assign_100_165,
						conga_assign_100_167,
			
						conga_direct_assign_100,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	