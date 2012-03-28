
#ifndef conga_assign_Rot_Dlp_con_h_included
#define conga_assign_Rot_Dlp_con_h_included
#include "conga_assign_Rot_Dlp.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Dlp_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Dlp_func[73] = {
						conga_assign_54_3,
						conga_assign_54_5,
						conga_assign_54_7,
						conga_assign_54_9,
						conga_assign_54_13,
						conga_assign_54_18,
						conga_assign_54_22,
						conga_assign_54_23,
						conga_assign_54_25,
						conga_assign_54_26,
						conga_assign_54_28,
						conga_assign_54_42,
						conga_assign_54_44,
						conga_assign_54_46,
						conga_assign_54_47,
						conga_assign_54_52,
						conga_assign_54_54,
						conga_assign_54_55,
						conga_assign_54_56,
						conga_assign_54_57,
						conga_assign_54_58,
						conga_assign_54_59,
						conga_assign_54_60,
						conga_assign_54_62,
						conga_assign_54_65,
						conga_assign_54_67,
						conga_assign_54_70,
						conga_assign_54_71,
						conga_assign_54_72,
						conga_assign_54_73,
						conga_assign_54_76,
						conga_assign_54_79,
						conga_assign_54_80,
						conga_assign_54_83,
						conga_assign_54_84,
						conga_assign_54_88,
						conga_assign_54_90,
						conga_assign_54_93,
						conga_assign_54_94,
						conga_assign_54_96,
						conga_assign_54_97,
						conga_assign_54_99,
						conga_assign_54_100,
						conga_assign_54_102,
						conga_assign_54_103,
						conga_assign_54_105,
						conga_assign_54_108,
						conga_assign_54_111,
						conga_assign_54_118,
						conga_assign_54_120,
						conga_assign_54_121,
						conga_assign_54_123,
						conga_assign_54_124,
						conga_assign_54_128,
						conga_assign_54_130,
						conga_assign_54_132,
						conga_assign_54_134,
						conga_assign_54_135,
						conga_assign_54_137,
						conga_assign_54_138,
						conga_assign_54_141,
						conga_assign_54_142,
						conga_assign_54_144,
						conga_assign_54_146,
						conga_assign_54_148,
						conga_assign_54_150,
						conga_assign_54_153,
						conga_assign_54_158,
						conga_assign_54_160,
						conga_assign_54_161,
						conga_assign_54_165,
						conga_assign_54_167,
			
						conga_direct_assign_54,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	