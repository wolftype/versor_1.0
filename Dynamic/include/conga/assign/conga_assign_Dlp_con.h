
#ifndef conga_assign_Dlp_con_h_included
#define conga_assign_Dlp_con_h_included
#include "conga_assign_Dlp.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dlp_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dlp_func[56] = {
						conga_assign_22_3,
						conga_assign_22_5,
						conga_assign_22_7,
						conga_assign_22_22,
						conga_assign_22_23,
						conga_assign_22_26,
						conga_assign_22_42,
						conga_assign_22_44,
						conga_assign_22_46,
						conga_assign_22_47,
						conga_assign_22_52,
						conga_assign_22_54,
						conga_assign_22_55,
						conga_assign_22_56,
						conga_assign_22_57,
						conga_assign_22_58,
						conga_assign_22_60,
						conga_assign_22_62,
						conga_assign_22_65,
						conga_assign_22_67,
						conga_assign_22_70,
						conga_assign_22_72,
						conga_assign_22_76,
						conga_assign_22_79,
						conga_assign_22_80,
						conga_assign_22_84,
						conga_assign_22_88,
						conga_assign_22_90,
						conga_assign_22_93,
						conga_assign_22_94,
						conga_assign_22_96,
						conga_assign_22_97,
						conga_assign_22_99,
						conga_assign_22_100,
						conga_assign_22_103,
						conga_assign_22_105,
						conga_assign_22_108,
						conga_assign_22_111,
						conga_assign_22_118,
						conga_assign_22_121,
						conga_assign_22_128,
						conga_assign_22_132,
						conga_assign_22_134,
						conga_assign_22_135,
						conga_assign_22_137,
						conga_assign_22_141,
						conga_assign_22_142,
						conga_assign_22_146,
						conga_assign_22_148,
						conga_assign_22_150,
						conga_assign_22_153,
						conga_assign_22_158,
						conga_assign_22_160,
						conga_assign_22_161,
						conga_assign_22_167,
			
						conga_direct_assign_22,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	