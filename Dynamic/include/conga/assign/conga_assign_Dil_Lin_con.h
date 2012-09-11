
#ifndef conga_assign_Dil_Lin_con_h_included
#define conga_assign_Dil_Lin_con_h_included
#include "conga_assign_Dil_Lin.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dil_Lin_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dil_Lin_func[74] = {
						conga_assign_76_7,
						conga_assign_76_9,
						conga_assign_76_13,
						conga_assign_76_18,
						conga_assign_76_22,
						conga_assign_76_23,
						conga_assign_76_26,
						conga_assign_76_42,
						conga_assign_76_44,
						conga_assign_76_45,
						conga_assign_76_46,
						conga_assign_76_47,
						conga_assign_76_52,
						conga_assign_76_54,
						conga_assign_76_55,
						conga_assign_76_56,
						conga_assign_76_57,
						conga_assign_76_58,
						conga_assign_76_59,
						conga_assign_76_60,
						conga_assign_76_62,
						conga_assign_76_65,
						conga_assign_76_67,
						conga_assign_76_70,
						conga_assign_76_71,
						conga_assign_76_72,
						conga_assign_76_76,
						conga_assign_76_79,
						conga_assign_76_80,
						conga_assign_76_84,
						conga_assign_76_88,
						conga_assign_76_90,
						conga_assign_76_93,
						conga_assign_76_94,
						conga_assign_76_96,
						conga_assign_76_97,
						conga_assign_76_99,
						conga_assign_76_100,
						conga_assign_76_102,
						conga_assign_76_103,
						conga_assign_76_105,
						conga_assign_76_108,
						conga_assign_76_111,
						conga_assign_76_112,
						conga_assign_76_114,
						conga_assign_76_118,
						conga_assign_76_120,
						conga_assign_76_121,
						conga_assign_76_123,
						conga_assign_76_124,
						conga_assign_76_126,
						conga_assign_76_128,
						conga_assign_76_130,
						conga_assign_76_132,
						conga_assign_76_134,
						conga_assign_76_135,
						conga_assign_76_137,
						conga_assign_76_138,
						conga_assign_76_141,
						conga_assign_76_142,
						conga_assign_76_144,
						conga_assign_76_146,
						conga_assign_76_148,
						conga_assign_76_150,
						conga_assign_76_152,
						conga_assign_76_153,
						conga_assign_76_155,
						conga_assign_76_158,
						conga_assign_76_160,
						conga_assign_76_161,
						conga_assign_76_164,
						conga_assign_76_165,
						conga_assign_76_167,
			
						conga_direct_assign_76,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	