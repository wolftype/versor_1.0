
#ifndef conga_assign_Rot_Trv_Pss_con_h_included
#define conga_assign_Rot_Trv_Pss_con_h_included
#include "conga_assign_Rot_Trv_Pss.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Trv_Pss_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Trv_Pss_func[73] = {
						conga_assign_152_2,
						conga_assign_152_5,
						conga_assign_152_6,
						conga_assign_152_7,
						conga_assign_152_9,
						conga_assign_152_16,
						conga_assign_152_18,
						conga_assign_152_26,
						conga_assign_152_28,
						conga_assign_152_41,
						conga_assign_152_44,
						conga_assign_152_45,
						conga_assign_152_46,
						conga_assign_152_47,
						conga_assign_152_52,
						conga_assign_152_56,
						conga_assign_152_57,
						conga_assign_152_58,
						conga_assign_152_59,
						conga_assign_152_60,
						conga_assign_152_62,
						conga_assign_152_65,
						conga_assign_152_67,
						conga_assign_152_72,
						conga_assign_152_73,
						conga_assign_152_76,
						conga_assign_152_79,
						conga_assign_152_80,
						conga_assign_152_83,
						conga_assign_152_84,
						conga_assign_152_87,
						conga_assign_152_88,
						conga_assign_152_90,
						conga_assign_152_93,
						conga_assign_152_94,
						conga_assign_152_96,
						conga_assign_152_97,
						conga_assign_152_99,
						conga_assign_152_100,
						conga_assign_152_102,
						conga_assign_152_103,
						conga_assign_152_105,
						conga_assign_152_111,
						conga_assign_152_112,
						conga_assign_152_114,
						conga_assign_152_118,
						conga_assign_152_120,
						conga_assign_152_121,
						conga_assign_152_123,
						conga_assign_152_124,
						conga_assign_152_126,
						conga_assign_152_128,
						conga_assign_152_130,
						conga_assign_152_132,
						conga_assign_152_134,
						conga_assign_152_135,
						conga_assign_152_137,
						conga_assign_152_138,
						conga_assign_152_141,
						conga_assign_152_142,
						conga_assign_152_144,
						conga_assign_152_148,
						conga_assign_152_150,
						conga_assign_152_152,
						conga_assign_152_153,
						conga_assign_152_155,
						conga_assign_152_158,
						conga_assign_152_160,
						conga_assign_152_161,
						conga_assign_152_164,
						conga_assign_152_165,
						conga_assign_152_167,
			
						conga_direct_assign_152,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	