
#ifndef conga_assign_Mot_Ori_con_h_included
#define conga_assign_Mot_Ori_con_h_included
#include "conga_assign_Mot_Ori.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mot_Ori_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mot_Ori_func[82] = {
						conga_assign_84_2,
						conga_assign_84_5,
						conga_assign_84_6,
						conga_assign_84_7,
						conga_assign_84_9,
						conga_assign_84_16,
						conga_assign_84_18,
						conga_assign_84_22,
						conga_assign_84_23,
						conga_assign_84_25,
						conga_assign_84_26,
						conga_assign_84_28,
						conga_assign_84_41,
						conga_assign_84_44,
						conga_assign_84_45,
						conga_assign_84_46,
						conga_assign_84_47,
						conga_assign_84_52,
						conga_assign_84_54,
						conga_assign_84_55,
						conga_assign_84_56,
						conga_assign_84_57,
						conga_assign_84_58,
						conga_assign_84_59,
						conga_assign_84_60,
						conga_assign_84_62,
						conga_assign_84_65,
						conga_assign_84_67,
						conga_assign_84_70,
						conga_assign_84_71,
						conga_assign_84_72,
						conga_assign_84_73,
						conga_assign_84_76,
						conga_assign_84_79,
						conga_assign_84_80,
						conga_assign_84_83,
						conga_assign_84_84,
						conga_assign_84_87,
						conga_assign_84_88,
						conga_assign_84_90,
						conga_assign_84_93,
						conga_assign_84_94,
						conga_assign_84_96,
						conga_assign_84_97,
						conga_assign_84_99,
						conga_assign_84_100,
						conga_assign_84_102,
						conga_assign_84_103,
						conga_assign_84_105,
						conga_assign_84_108,
						conga_assign_84_111,
						conga_assign_84_112,
						conga_assign_84_114,
						conga_assign_84_118,
						conga_assign_84_120,
						conga_assign_84_121,
						conga_assign_84_123,
						conga_assign_84_124,
						conga_assign_84_126,
						conga_assign_84_128,
						conga_assign_84_130,
						conga_assign_84_132,
						conga_assign_84_134,
						conga_assign_84_135,
						conga_assign_84_137,
						conga_assign_84_138,
						conga_assign_84_141,
						conga_assign_84_142,
						conga_assign_84_144,
						conga_assign_84_146,
						conga_assign_84_148,
						conga_assign_84_150,
						conga_assign_84_152,
						conga_assign_84_153,
						conga_assign_84_155,
						conga_assign_84_158,
						conga_assign_84_160,
						conga_assign_84_161,
						conga_assign_84_164,
						conga_assign_84_165,
						conga_assign_84_167,
			
						conga_direct_assign_84,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	