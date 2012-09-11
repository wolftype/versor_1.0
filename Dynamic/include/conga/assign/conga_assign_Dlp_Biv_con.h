
#ifndef conga_assign_Dlp_Biv_con_h_included
#define conga_assign_Dlp_Biv_con_h_included
#include "conga_assign_Dlp_Biv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dlp_Biv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dlp_Biv_func[69] = {
						conga_assign_146_7,
						conga_assign_146_9,
						conga_assign_146_13,
						conga_assign_146_18,
						conga_assign_146_22,
						conga_assign_146_23,
						conga_assign_146_25,
						conga_assign_146_26,
						conga_assign_146_28,
						conga_assign_146_42,
						conga_assign_146_44,
						conga_assign_146_46,
						conga_assign_146_47,
						conga_assign_146_52,
						conga_assign_146_54,
						conga_assign_146_55,
						conga_assign_146_56,
						conga_assign_146_57,
						conga_assign_146_58,
						conga_assign_146_59,
						conga_assign_146_60,
						conga_assign_146_62,
						conga_assign_146_65,
						conga_assign_146_67,
						conga_assign_146_70,
						conga_assign_146_71,
						conga_assign_146_72,
						conga_assign_146_73,
						conga_assign_146_76,
						conga_assign_146_79,
						conga_assign_146_80,
						conga_assign_146_83,
						conga_assign_146_84,
						conga_assign_146_88,
						conga_assign_146_90,
						conga_assign_146_93,
						conga_assign_146_94,
						conga_assign_146_96,
						conga_assign_146_97,
						conga_assign_146_99,
						conga_assign_146_100,
						conga_assign_146_102,
						conga_assign_146_105,
						conga_assign_146_108,
						conga_assign_146_118,
						conga_assign_146_120,
						conga_assign_146_121,
						conga_assign_146_123,
						conga_assign_146_124,
						conga_assign_146_128,
						conga_assign_146_130,
						conga_assign_146_132,
						conga_assign_146_134,
						conga_assign_146_135,
						conga_assign_146_137,
						conga_assign_146_138,
						conga_assign_146_141,
						conga_assign_146_142,
						conga_assign_146_144,
						conga_assign_146_146,
						conga_assign_146_148,
						conga_assign_146_150,
						conga_assign_146_153,
						conga_assign_146_158,
						conga_assign_146_160,
						conga_assign_146_161,
						conga_assign_146_165,
						conga_assign_146_167,
			
						conga_direct_assign_146,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	