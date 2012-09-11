
#ifndef conga_assign_Mnk_Aff_con_h_included
#define conga_assign_Mnk_Aff_con_h_included
#include "conga_assign_Mnk_Aff.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mnk_Aff_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mnk_Aff_func[56] = {
						conga_assign_114_2,
						conga_assign_114_5,
						conga_assign_114_7,
						conga_assign_114_9,
						conga_assign_114_18,
						conga_assign_114_26,
						conga_assign_114_41,
						conga_assign_114_44,
						conga_assign_114_45,
						conga_assign_114_46,
						conga_assign_114_47,
						conga_assign_114_52,
						conga_assign_114_56,
						conga_assign_114_57,
						conga_assign_114_58,
						conga_assign_114_60,
						conga_assign_114_62,
						conga_assign_114_65,
						conga_assign_114_67,
						conga_assign_114_72,
						conga_assign_114_76,
						conga_assign_114_79,
						conga_assign_114_80,
						conga_assign_114_84,
						conga_assign_114_88,
						conga_assign_114_90,
						conga_assign_114_93,
						conga_assign_114_94,
						conga_assign_114_96,
						conga_assign_114_97,
						conga_assign_114_99,
						conga_assign_114_100,
						conga_assign_114_103,
						conga_assign_114_111,
						conga_assign_114_112,
						conga_assign_114_114,
						conga_assign_114_118,
						conga_assign_114_121,
						conga_assign_114_124,
						conga_assign_114_126,
						conga_assign_114_128,
						conga_assign_114_130,
						conga_assign_114_132,
						conga_assign_114_135,
						conga_assign_114_137,
						conga_assign_114_138,
						conga_assign_114_142,
						conga_assign_114_144,
						conga_assign_114_152,
						conga_assign_114_153,
						conga_assign_114_155,
						conga_assign_114_160,
						conga_assign_114_161,
						conga_assign_114_164,
						conga_assign_114_167,
			
						conga_direct_assign_114,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	