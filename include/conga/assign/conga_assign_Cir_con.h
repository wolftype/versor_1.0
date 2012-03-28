
#ifndef conga_assign_Cir_con_h_included
#define conga_assign_Cir_con_h_included
#include "conga_assign_Cir.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Cir_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Cir_func[77] = {
						conga_assign_9_9,
						conga_assign_9_13,
						conga_assign_9_16,
						conga_assign_9_18,
						conga_assign_9_25,
						conga_assign_9_28,
						conga_assign_9_41,
						conga_assign_9_42,
						conga_assign_9_44,
						conga_assign_9_45,
						conga_assign_9_46,
						conga_assign_9_47,
						conga_assign_9_52,
						conga_assign_9_54,
						conga_assign_9_55,
						conga_assign_9_56,
						conga_assign_9_57,
						conga_assign_9_58,
						conga_assign_9_59,
						conga_assign_9_60,
						conga_assign_9_62,
						conga_assign_9_65,
						conga_assign_9_67,
						conga_assign_9_70,
						conga_assign_9_71,
						conga_assign_9_72,
						conga_assign_9_73,
						conga_assign_9_76,
						conga_assign_9_79,
						conga_assign_9_80,
						conga_assign_9_83,
						conga_assign_9_84,
						conga_assign_9_87,
						conga_assign_9_88,
						conga_assign_9_90,
						conga_assign_9_93,
						conga_assign_9_94,
						conga_assign_9_96,
						conga_assign_9_97,
						conga_assign_9_99,
						conga_assign_9_100,
						conga_assign_9_102,
						conga_assign_9_103,
						conga_assign_9_105,
						conga_assign_9_108,
						conga_assign_9_111,
						conga_assign_9_112,
						conga_assign_9_114,
						conga_assign_9_118,
						conga_assign_9_120,
						conga_assign_9_121,
						conga_assign_9_123,
						conga_assign_9_124,
						conga_assign_9_126,
						conga_assign_9_128,
						conga_assign_9_130,
						conga_assign_9_132,
						conga_assign_9_134,
						conga_assign_9_135,
						conga_assign_9_137,
						conga_assign_9_138,
						conga_assign_9_141,
						conga_assign_9_142,
						conga_assign_9_144,
						conga_assign_9_146,
						conga_assign_9_148,
						conga_assign_9_150,
						conga_assign_9_152,
						conga_assign_9_153,
						conga_assign_9_155,
						conga_assign_9_158,
						conga_assign_9_160,
						conga_assign_9_161,
						conga_assign_9_164,
						conga_assign_9_165,
						conga_assign_9_167,
			
						conga_direct_assign_9,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	