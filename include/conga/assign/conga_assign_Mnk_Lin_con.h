
#ifndef conga_assign_Mnk_Lin_con_h_included
#define conga_assign_Mnk_Lin_con_h_included
#include "conga_assign_Mnk_Lin.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mnk_Lin_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mnk_Lin_func[65] = {
						conga_assign_108_7,
						conga_assign_108_9,
						conga_assign_108_13,
						conga_assign_108_18,
						conga_assign_108_22,
						conga_assign_108_23,
						conga_assign_108_26,
						conga_assign_108_42,
						conga_assign_108_44,
						conga_assign_108_46,
						conga_assign_108_47,
						conga_assign_108_52,
						conga_assign_108_54,
						conga_assign_108_55,
						conga_assign_108_56,
						conga_assign_108_57,
						conga_assign_108_58,
						conga_assign_108_59,
						conga_assign_108_60,
						conga_assign_108_62,
						conga_assign_108_65,
						conga_assign_108_67,
						conga_assign_108_70,
						conga_assign_108_71,
						conga_assign_108_72,
						conga_assign_108_76,
						conga_assign_108_79,
						conga_assign_108_80,
						conga_assign_108_84,
						conga_assign_108_88,
						conga_assign_108_90,
						conga_assign_108_93,
						conga_assign_108_94,
						conga_assign_108_96,
						conga_assign_108_97,
						conga_assign_108_99,
						conga_assign_108_100,
						conga_assign_108_102,
						conga_assign_108_105,
						conga_assign_108_108,
						conga_assign_108_118,
						conga_assign_108_120,
						conga_assign_108_121,
						conga_assign_108_123,
						conga_assign_108_124,
						conga_assign_108_128,
						conga_assign_108_130,
						conga_assign_108_132,
						conga_assign_108_134,
						conga_assign_108_135,
						conga_assign_108_137,
						conga_assign_108_138,
						conga_assign_108_141,
						conga_assign_108_142,
						conga_assign_108_144,
						conga_assign_108_146,
						conga_assign_108_148,
						conga_assign_108_150,
						conga_assign_108_153,
						conga_assign_108_158,
						conga_assign_108_160,
						conga_assign_108_161,
						conga_assign_108_165,
						conga_assign_108_167,
			
						conga_direct_assign_108,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	