
#ifndef conga_assign_Trs_Hyp_con_h_included
#define conga_assign_Trs_Hyp_con_h_included
#include "conga_assign_Trs_Hyp.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trs_Hyp_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trs_Hyp_func[71] = {
						conga_assign_58_2,
						conga_assign_58_3,
						conga_assign_58_5,
						conga_assign_58_7,
						conga_assign_58_9,
						conga_assign_58_18,
						conga_assign_58_22,
						conga_assign_58_23,
						conga_assign_58_26,
						conga_assign_58_41,
						conga_assign_58_42,
						conga_assign_58_44,
						conga_assign_58_45,
						conga_assign_58_46,
						conga_assign_58_47,
						conga_assign_58_52,
						conga_assign_58_54,
						conga_assign_58_55,
						conga_assign_58_56,
						conga_assign_58_57,
						conga_assign_58_58,
						conga_assign_58_60,
						conga_assign_58_62,
						conga_assign_58_65,
						conga_assign_58_67,
						conga_assign_58_70,
						conga_assign_58_72,
						conga_assign_58_76,
						conga_assign_58_79,
						conga_assign_58_80,
						conga_assign_58_84,
						conga_assign_58_88,
						conga_assign_58_90,
						conga_assign_58_93,
						conga_assign_58_94,
						conga_assign_58_96,
						conga_assign_58_97,
						conga_assign_58_99,
						conga_assign_58_100,
						conga_assign_58_103,
						conga_assign_58_105,
						conga_assign_58_108,
						conga_assign_58_111,
						conga_assign_58_112,
						conga_assign_58_114,
						conga_assign_58_118,
						conga_assign_58_121,
						conga_assign_58_124,
						conga_assign_58_126,
						conga_assign_58_128,
						conga_assign_58_130,
						conga_assign_58_132,
						conga_assign_58_134,
						conga_assign_58_135,
						conga_assign_58_137,
						conga_assign_58_138,
						conga_assign_58_141,
						conga_assign_58_142,
						conga_assign_58_144,
						conga_assign_58_146,
						conga_assign_58_148,
						conga_assign_58_150,
						conga_assign_58_152,
						conga_assign_58_153,
						conga_assign_58_155,
						conga_assign_58_158,
						conga_assign_58_160,
						conga_assign_58_161,
						conga_assign_58_164,
						conga_assign_58_167,
			
						conga_direct_assign_58,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	