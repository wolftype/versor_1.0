
#ifndef conga_assign_Trv_Cir_con_h_included
#define conga_assign_Trv_Cir_con_h_included
#include "conga_assign_Trv_Cir.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trv_Cir_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trv_Cir_func[84] = {
						conga_assign_90_2,
						conga_assign_90_5,
						conga_assign_90_6,
						conga_assign_90_7,
						conga_assign_90_9,
						conga_assign_90_13,
						conga_assign_90_16,
						conga_assign_90_18,
						conga_assign_90_22,
						conga_assign_90_23,
						conga_assign_90_25,
						conga_assign_90_26,
						conga_assign_90_28,
						conga_assign_90_41,
						conga_assign_90_42,
						conga_assign_90_44,
						conga_assign_90_45,
						conga_assign_90_46,
						conga_assign_90_47,
						conga_assign_90_52,
						conga_assign_90_54,
						conga_assign_90_55,
						conga_assign_90_56,
						conga_assign_90_57,
						conga_assign_90_58,
						conga_assign_90_59,
						conga_assign_90_60,
						conga_assign_90_62,
						conga_assign_90_65,
						conga_assign_90_67,
						conga_assign_90_70,
						conga_assign_90_71,
						conga_assign_90_72,
						conga_assign_90_73,
						conga_assign_90_76,
						conga_assign_90_79,
						conga_assign_90_80,
						conga_assign_90_83,
						conga_assign_90_84,
						conga_assign_90_87,
						conga_assign_90_88,
						conga_assign_90_90,
						conga_assign_90_93,
						conga_assign_90_94,
						conga_assign_90_96,
						conga_assign_90_97,
						conga_assign_90_99,
						conga_assign_90_100,
						conga_assign_90_102,
						conga_assign_90_103,
						conga_assign_90_105,
						conga_assign_90_108,
						conga_assign_90_111,
						conga_assign_90_112,
						conga_assign_90_114,
						conga_assign_90_118,
						conga_assign_90_120,
						conga_assign_90_121,
						conga_assign_90_123,
						conga_assign_90_124,
						conga_assign_90_126,
						conga_assign_90_128,
						conga_assign_90_130,
						conga_assign_90_132,
						conga_assign_90_134,
						conga_assign_90_135,
						conga_assign_90_137,
						conga_assign_90_138,
						conga_assign_90_141,
						conga_assign_90_142,
						conga_assign_90_144,
						conga_assign_90_146,
						conga_assign_90_148,
						conga_assign_90_150,
						conga_assign_90_152,
						conga_assign_90_153,
						conga_assign_90_155,
						conga_assign_90_158,
						conga_assign_90_160,
						conga_assign_90_161,
						conga_assign_90_164,
						conga_assign_90_165,
						conga_assign_90_167,
			
						conga_direct_assign_90,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	