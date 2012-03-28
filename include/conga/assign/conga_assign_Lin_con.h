
#ifndef conga_assign_Lin_con_h_included
#define conga_assign_Lin_con_h_included
#include "conga_assign_Lin.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Lin_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Lin_func[65] = {
						conga_assign_18_9,
						conga_assign_18_13,
						conga_assign_18_18,
						conga_assign_18_42,
						conga_assign_18_44,
						conga_assign_18_45,
						conga_assign_18_46,
						conga_assign_18_47,
						conga_assign_18_52,
						conga_assign_18_54,
						conga_assign_18_57,
						conga_assign_18_58,
						conga_assign_18_59,
						conga_assign_18_60,
						conga_assign_18_62,
						conga_assign_18_65,
						conga_assign_18_67,
						conga_assign_18_70,
						conga_assign_18_71,
						conga_assign_18_72,
						conga_assign_18_76,
						conga_assign_18_79,
						conga_assign_18_80,
						conga_assign_18_84,
						conga_assign_18_88,
						conga_assign_18_90,
						conga_assign_18_93,
						conga_assign_18_96,
						conga_assign_18_97,
						conga_assign_18_99,
						conga_assign_18_100,
						conga_assign_18_102,
						conga_assign_18_103,
						conga_assign_18_105,
						conga_assign_18_108,
						conga_assign_18_111,
						conga_assign_18_112,
						conga_assign_18_114,
						conga_assign_18_118,
						conga_assign_18_120,
						conga_assign_18_121,
						conga_assign_18_123,
						conga_assign_18_124,
						conga_assign_18_126,
						conga_assign_18_128,
						conga_assign_18_130,
						conga_assign_18_132,
						conga_assign_18_134,
						conga_assign_18_135,
						conga_assign_18_137,
						conga_assign_18_138,
						conga_assign_18_141,
						conga_assign_18_142,
						conga_assign_18_144,
						conga_assign_18_146,
						conga_assign_18_152,
						conga_assign_18_153,
						conga_assign_18_155,
						conga_assign_18_158,
						conga_assign_18_160,
						conga_assign_18_161,
						conga_assign_18_164,
						conga_assign_18_165,
						conga_assign_18_167,
			
						conga_direct_assign_18,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	