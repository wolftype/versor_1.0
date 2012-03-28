
#ifndef conga_assign_Ori_Sta_con_h_included
#define conga_assign_Ori_Sta_con_h_included
#include "conga_assign_Ori_Sta.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Ori_Sta_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Ori_Sta_func[74] = {
						conga_assign_99_7,
						conga_assign_99_9,
						conga_assign_99_16,
						conga_assign_99_18,
						conga_assign_99_22,
						conga_assign_99_23,
						conga_assign_99_26,
						conga_assign_99_28,
						conga_assign_99_41,
						conga_assign_99_44,
						conga_assign_99_45,
						conga_assign_99_46,
						conga_assign_99_47,
						conga_assign_99_52,
						conga_assign_99_54,
						conga_assign_99_55,
						conga_assign_99_56,
						conga_assign_99_57,
						conga_assign_99_58,
						conga_assign_99_60,
						conga_assign_99_62,
						conga_assign_99_65,
						conga_assign_99_67,
						conga_assign_99_70,
						conga_assign_99_72,
						conga_assign_99_76,
						conga_assign_99_79,
						conga_assign_99_80,
						conga_assign_99_83,
						conga_assign_99_84,
						conga_assign_99_87,
						conga_assign_99_88,
						conga_assign_99_90,
						conga_assign_99_93,
						conga_assign_99_94,
						conga_assign_99_96,
						conga_assign_99_97,
						conga_assign_99_99,
						conga_assign_99_100,
						conga_assign_99_103,
						conga_assign_99_105,
						conga_assign_99_108,
						conga_assign_99_111,
						conga_assign_99_112,
						conga_assign_99_114,
						conga_assign_99_118,
						conga_assign_99_120,
						conga_assign_99_121,
						conga_assign_99_123,
						conga_assign_99_124,
						conga_assign_99_126,
						conga_assign_99_128,
						conga_assign_99_130,
						conga_assign_99_132,
						conga_assign_99_134,
						conga_assign_99_135,
						conga_assign_99_137,
						conga_assign_99_138,
						conga_assign_99_141,
						conga_assign_99_142,
						conga_assign_99_144,
						conga_assign_99_146,
						conga_assign_99_148,
						conga_assign_99_150,
						conga_assign_99_152,
						conga_assign_99_153,
						conga_assign_99_155,
						conga_assign_99_158,
						conga_assign_99_160,
						conga_assign_99_161,
						conga_assign_99_164,
						conga_assign_99_165,
						conga_assign_99_167,
			
						conga_direct_assign_99,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	