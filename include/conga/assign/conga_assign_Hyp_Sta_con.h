
#ifndef conga_assign_Hyp_Sta_con_h_included
#define conga_assign_Hyp_Sta_con_h_included
#include "conga_assign_Hyp_Sta.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Hyp_Sta_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Hyp_Sta_func[79] = {
						conga_assign_121_7,
						conga_assign_121_9,
						conga_assign_121_13,
						conga_assign_121_16,
						conga_assign_121_18,
						conga_assign_121_22,
						conga_assign_121_23,
						conga_assign_121_26,
						conga_assign_121_28,
						conga_assign_121_41,
						conga_assign_121_42,
						conga_assign_121_44,
						conga_assign_121_45,
						conga_assign_121_46,
						conga_assign_121_47,
						conga_assign_121_52,
						conga_assign_121_54,
						conga_assign_121_55,
						conga_assign_121_56,
						conga_assign_121_57,
						conga_assign_121_58,
						conga_assign_121_59,
						conga_assign_121_60,
						conga_assign_121_62,
						conga_assign_121_65,
						conga_assign_121_67,
						conga_assign_121_70,
						conga_assign_121_71,
						conga_assign_121_72,
						conga_assign_121_76,
						conga_assign_121_79,
						conga_assign_121_80,
						conga_assign_121_83,
						conga_assign_121_84,
						conga_assign_121_87,
						conga_assign_121_88,
						conga_assign_121_90,
						conga_assign_121_93,
						conga_assign_121_94,
						conga_assign_121_96,
						conga_assign_121_97,
						conga_assign_121_99,
						conga_assign_121_100,
						conga_assign_121_102,
						conga_assign_121_103,
						conga_assign_121_105,
						conga_assign_121_108,
						conga_assign_121_111,
						conga_assign_121_112,
						conga_assign_121_114,
						conga_assign_121_118,
						conga_assign_121_120,
						conga_assign_121_121,
						conga_assign_121_123,
						conga_assign_121_124,
						conga_assign_121_126,
						conga_assign_121_128,
						conga_assign_121_130,
						conga_assign_121_132,
						conga_assign_121_134,
						conga_assign_121_135,
						conga_assign_121_137,
						conga_assign_121_138,
						conga_assign_121_141,
						conga_assign_121_142,
						conga_assign_121_144,
						conga_assign_121_146,
						conga_assign_121_148,
						conga_assign_121_150,
						conga_assign_121_152,
						conga_assign_121_153,
						conga_assign_121_155,
						conga_assign_121_158,
						conga_assign_121_160,
						conga_assign_121_161,
						conga_assign_121_164,
						conga_assign_121_165,
						conga_assign_121_167,
			
						conga_direct_assign_121,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	