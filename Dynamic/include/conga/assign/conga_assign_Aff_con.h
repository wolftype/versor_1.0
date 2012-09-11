
#ifndef conga_assign_Aff_con_h_included
#define conga_assign_Aff_con_h_included
#include "conga_assign_Aff.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Aff_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Aff_func[56] = {
						conga_assign_26_2,
						conga_assign_26_5,
						conga_assign_26_7,
						conga_assign_26_22,
						conga_assign_26_23,
						conga_assign_26_26,
						conga_assign_26_41,
						conga_assign_26_44,
						conga_assign_26_46,
						conga_assign_26_47,
						conga_assign_26_54,
						conga_assign_26_55,
						conga_assign_26_56,
						conga_assign_26_57,
						conga_assign_26_58,
						conga_assign_26_60,
						conga_assign_26_62,
						conga_assign_26_65,
						conga_assign_26_70,
						conga_assign_26_72,
						conga_assign_26_76,
						conga_assign_26_79,
						conga_assign_26_80,
						conga_assign_26_84,
						conga_assign_26_88,
						conga_assign_26_90,
						conga_assign_26_93,
						conga_assign_26_94,
						conga_assign_26_96,
						conga_assign_26_97,
						conga_assign_26_99,
						conga_assign_26_100,
						conga_assign_26_103,
						conga_assign_26_105,
						conga_assign_26_108,
						conga_assign_26_114,
						conga_assign_26_118,
						conga_assign_26_121,
						conga_assign_26_128,
						conga_assign_26_132,
						conga_assign_26_134,
						conga_assign_26_135,
						conga_assign_26_137,
						conga_assign_26_141,
						conga_assign_26_142,
						conga_assign_26_146,
						conga_assign_26_148,
						conga_assign_26_150,
						conga_assign_26_152,
						conga_assign_26_153,
						conga_assign_26_155,
						conga_assign_26_158,
						conga_assign_26_160,
						conga_assign_26_161,
						conga_assign_26_167,
			
						conga_direct_assign_26,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	