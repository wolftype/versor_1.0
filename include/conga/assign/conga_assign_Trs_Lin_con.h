
#ifndef conga_assign_Trs_Lin_con_h_included
#define conga_assign_Trs_Lin_con_h_included
#include "conga_assign_Trs_Lin.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trs_Lin_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trs_Lin_func[69] = {
						conga_assign_67_3,
						conga_assign_67_5,
						conga_assign_67_7,
						conga_assign_67_9,
						conga_assign_67_13,
						conga_assign_67_18,
						conga_assign_67_22,
						conga_assign_67_42,
						conga_assign_67_44,
						conga_assign_67_45,
						conga_assign_67_46,
						conga_assign_67_47,
						conga_assign_67_52,
						conga_assign_67_54,
						conga_assign_67_57,
						conga_assign_67_58,
						conga_assign_67_59,
						conga_assign_67_60,
						conga_assign_67_62,
						conga_assign_67_65,
						conga_assign_67_67,
						conga_assign_67_70,
						conga_assign_67_71,
						conga_assign_67_72,
						conga_assign_67_76,
						conga_assign_67_79,
						conga_assign_67_80,
						conga_assign_67_84,
						conga_assign_67_88,
						conga_assign_67_90,
						conga_assign_67_93,
						conga_assign_67_96,
						conga_assign_67_97,
						conga_assign_67_99,
						conga_assign_67_100,
						conga_assign_67_102,
						conga_assign_67_103,
						conga_assign_67_105,
						conga_assign_67_108,
						conga_assign_67_111,
						conga_assign_67_112,
						conga_assign_67_114,
						conga_assign_67_118,
						conga_assign_67_120,
						conga_assign_67_121,
						conga_assign_67_123,
						conga_assign_67_124,
						conga_assign_67_126,
						conga_assign_67_128,
						conga_assign_67_130,
						conga_assign_67_132,
						conga_assign_67_134,
						conga_assign_67_135,
						conga_assign_67_137,
						conga_assign_67_138,
						conga_assign_67_141,
						conga_assign_67_142,
						conga_assign_67_144,
						conga_assign_67_146,
						conga_assign_67_152,
						conga_assign_67_153,
						conga_assign_67_155,
						conga_assign_67_158,
						conga_assign_67_160,
						conga_assign_67_161,
						conga_assign_67_164,
						conga_assign_67_165,
						conga_assign_67_167,
			
						conga_direct_assign_67,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	