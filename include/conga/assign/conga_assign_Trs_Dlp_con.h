
#ifndef conga_assign_Trs_Dlp_con_h_included
#define conga_assign_Trs_Dlp_con_h_included
#include "conga_assign_Trs_Dlp.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trs_Dlp_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trs_Dlp_func[69] = {
						conga_assign_70_3,
						conga_assign_70_5,
						conga_assign_70_7,
						conga_assign_70_9,
						conga_assign_70_13,
						conga_assign_70_18,
						conga_assign_70_22,
						conga_assign_70_23,
						conga_assign_70_26,
						conga_assign_70_42,
						conga_assign_70_44,
						conga_assign_70_46,
						conga_assign_70_47,
						conga_assign_70_52,
						conga_assign_70_54,
						conga_assign_70_55,
						conga_assign_70_56,
						conga_assign_70_57,
						conga_assign_70_58,
						conga_assign_70_59,
						conga_assign_70_60,
						conga_assign_70_62,
						conga_assign_70_65,
						conga_assign_70_67,
						conga_assign_70_70,
						conga_assign_70_71,
						conga_assign_70_72,
						conga_assign_70_76,
						conga_assign_70_79,
						conga_assign_70_80,
						conga_assign_70_84,
						conga_assign_70_88,
						conga_assign_70_90,
						conga_assign_70_93,
						conga_assign_70_94,
						conga_assign_70_96,
						conga_assign_70_97,
						conga_assign_70_99,
						conga_assign_70_100,
						conga_assign_70_102,
						conga_assign_70_103,
						conga_assign_70_105,
						conga_assign_70_108,
						conga_assign_70_111,
						conga_assign_70_118,
						conga_assign_70_120,
						conga_assign_70_121,
						conga_assign_70_123,
						conga_assign_70_124,
						conga_assign_70_128,
						conga_assign_70_130,
						conga_assign_70_132,
						conga_assign_70_134,
						conga_assign_70_135,
						conga_assign_70_137,
						conga_assign_70_138,
						conga_assign_70_141,
						conga_assign_70_142,
						conga_assign_70_144,
						conga_assign_70_146,
						conga_assign_70_148,
						conga_assign_70_150,
						conga_assign_70_153,
						conga_assign_70_158,
						conga_assign_70_160,
						conga_assign_70_161,
						conga_assign_70_165,
						conga_assign_70_167,
			
						conga_direct_assign_70,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	