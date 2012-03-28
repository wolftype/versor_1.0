
#ifndef conga_assign_Rot_Lin_con_h_included
#define conga_assign_Rot_Lin_con_h_included
#include "conga_assign_Rot_Lin.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Lin_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Lin_func[73] = {
						conga_assign_52_3,
						conga_assign_52_5,
						conga_assign_52_6,
						conga_assign_52_7,
						conga_assign_52_9,
						conga_assign_52_13,
						conga_assign_52_18,
						conga_assign_52_22,
						conga_assign_52_42,
						conga_assign_52_44,
						conga_assign_52_45,
						conga_assign_52_46,
						conga_assign_52_47,
						conga_assign_52_52,
						conga_assign_52_54,
						conga_assign_52_57,
						conga_assign_52_58,
						conga_assign_52_59,
						conga_assign_52_60,
						conga_assign_52_62,
						conga_assign_52_65,
						conga_assign_52_67,
						conga_assign_52_70,
						conga_assign_52_71,
						conga_assign_52_72,
						conga_assign_52_73,
						conga_assign_52_76,
						conga_assign_52_79,
						conga_assign_52_80,
						conga_assign_52_83,
						conga_assign_52_84,
						conga_assign_52_87,
						conga_assign_52_88,
						conga_assign_52_90,
						conga_assign_52_93,
						conga_assign_52_96,
						conga_assign_52_97,
						conga_assign_52_99,
						conga_assign_52_100,
						conga_assign_52_102,
						conga_assign_52_103,
						conga_assign_52_105,
						conga_assign_52_108,
						conga_assign_52_111,
						conga_assign_52_112,
						conga_assign_52_114,
						conga_assign_52_118,
						conga_assign_52_120,
						conga_assign_52_121,
						conga_assign_52_123,
						conga_assign_52_124,
						conga_assign_52_126,
						conga_assign_52_128,
						conga_assign_52_130,
						conga_assign_52_132,
						conga_assign_52_134,
						conga_assign_52_135,
						conga_assign_52_137,
						conga_assign_52_138,
						conga_assign_52_141,
						conga_assign_52_142,
						conga_assign_52_144,
						conga_assign_52_146,
						conga_assign_52_152,
						conga_assign_52_153,
						conga_assign_52_155,
						conga_assign_52_158,
						conga_assign_52_160,
						conga_assign_52_161,
						conga_assign_52_164,
						conga_assign_52_165,
						conga_assign_52_167,
			
						conga_direct_assign_52,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	