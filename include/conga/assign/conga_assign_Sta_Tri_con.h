
#ifndef conga_assign_Sta_Tri_con_h_included
#define conga_assign_Sta_Tri_con_h_included
#include "conga_assign_Sta_Tri.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Sta_Tri_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Sta_Tri_func[74] = {
						conga_assign_141_7,
						conga_assign_141_9,
						conga_assign_141_13,
						conga_assign_141_16,
						conga_assign_141_18,
						conga_assign_141_22,
						conga_assign_141_23,
						conga_assign_141_26,
						conga_assign_141_28,
						conga_assign_141_41,
						conga_assign_141_42,
						conga_assign_141_44,
						conga_assign_141_46,
						conga_assign_141_47,
						conga_assign_141_52,
						conga_assign_141_54,
						conga_assign_141_55,
						conga_assign_141_56,
						conga_assign_141_57,
						conga_assign_141_58,
						conga_assign_141_59,
						conga_assign_141_60,
						conga_assign_141_62,
						conga_assign_141_65,
						conga_assign_141_67,
						conga_assign_141_70,
						conga_assign_141_71,
						conga_assign_141_72,
						conga_assign_141_76,
						conga_assign_141_79,
						conga_assign_141_80,
						conga_assign_141_83,
						conga_assign_141_84,
						conga_assign_141_87,
						conga_assign_141_88,
						conga_assign_141_90,
						conga_assign_141_93,
						conga_assign_141_94,
						conga_assign_141_96,
						conga_assign_141_97,
						conga_assign_141_99,
						conga_assign_141_100,
						conga_assign_141_102,
						conga_assign_141_105,
						conga_assign_141_108,
						conga_assign_141_118,
						conga_assign_141_120,
						conga_assign_141_121,
						conga_assign_141_123,
						conga_assign_141_124,
						conga_assign_141_126,
						conga_assign_141_128,
						conga_assign_141_130,
						conga_assign_141_132,
						conga_assign_141_134,
						conga_assign_141_135,
						conga_assign_141_137,
						conga_assign_141_138,
						conga_assign_141_141,
						conga_assign_141_142,
						conga_assign_141_144,
						conga_assign_141_146,
						conga_assign_141_148,
						conga_assign_141_150,
						conga_assign_141_152,
						conga_assign_141_153,
						conga_assign_141_155,
						conga_assign_141_158,
						conga_assign_141_160,
						conga_assign_141_161,
						conga_assign_141_164,
						conga_assign_141_165,
						conga_assign_141_167,
			
						conga_direct_assign_141,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	