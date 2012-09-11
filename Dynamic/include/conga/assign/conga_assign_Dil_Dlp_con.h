
#ifndef conga_assign_Dil_Dlp_con_h_included
#define conga_assign_Dil_Dlp_con_h_included
#include "conga_assign_Dil_Dlp.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dil_Dlp_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dil_Dlp_func[69] = {
						conga_assign_79_3,
						conga_assign_79_5,
						conga_assign_79_7,
						conga_assign_79_9,
						conga_assign_79_18,
						conga_assign_79_22,
						conga_assign_79_23,
						conga_assign_79_26,
						conga_assign_79_42,
						conga_assign_79_44,
						conga_assign_79_45,
						conga_assign_79_46,
						conga_assign_79_47,
						conga_assign_79_52,
						conga_assign_79_54,
						conga_assign_79_55,
						conga_assign_79_56,
						conga_assign_79_57,
						conga_assign_79_58,
						conga_assign_79_60,
						conga_assign_79_62,
						conga_assign_79_65,
						conga_assign_79_67,
						conga_assign_79_70,
						conga_assign_79_72,
						conga_assign_79_76,
						conga_assign_79_79,
						conga_assign_79_80,
						conga_assign_79_84,
						conga_assign_79_88,
						conga_assign_79_90,
						conga_assign_79_93,
						conga_assign_79_94,
						conga_assign_79_96,
						conga_assign_79_97,
						conga_assign_79_99,
						conga_assign_79_100,
						conga_assign_79_103,
						conga_assign_79_105,
						conga_assign_79_108,
						conga_assign_79_111,
						conga_assign_79_112,
						conga_assign_79_114,
						conga_assign_79_118,
						conga_assign_79_121,
						conga_assign_79_124,
						conga_assign_79_126,
						conga_assign_79_128,
						conga_assign_79_130,
						conga_assign_79_132,
						conga_assign_79_134,
						conga_assign_79_135,
						conga_assign_79_137,
						conga_assign_79_138,
						conga_assign_79_141,
						conga_assign_79_142,
						conga_assign_79_144,
						conga_assign_79_146,
						conga_assign_79_148,
						conga_assign_79_150,
						conga_assign_79_152,
						conga_assign_79_153,
						conga_assign_79_155,
						conga_assign_79_158,
						conga_assign_79_160,
						conga_assign_79_161,
						conga_assign_79_164,
						conga_assign_79_167,
			
						conga_direct_assign_79,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	