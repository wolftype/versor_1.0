
#ifndef conga_assign_Dil_Vec_con_h_included
#define conga_assign_Dil_Vec_con_h_included
#include "conga_assign_Dil_Vec.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dil_Vec_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dil_Vec_func[65] = {
						conga_assign_80_7,
						conga_assign_80_9,
						conga_assign_80_18,
						conga_assign_80_22,
						conga_assign_80_23,
						conga_assign_80_26,
						conga_assign_80_45,
						conga_assign_80_46,
						conga_assign_80_47,
						conga_assign_80_52,
						conga_assign_80_54,
						conga_assign_80_55,
						conga_assign_80_56,
						conga_assign_80_57,
						conga_assign_80_58,
						conga_assign_80_60,
						conga_assign_80_62,
						conga_assign_80_65,
						conga_assign_80_67,
						conga_assign_80_70,
						conga_assign_80_72,
						conga_assign_80_76,
						conga_assign_80_79,
						conga_assign_80_80,
						conga_assign_80_84,
						conga_assign_80_88,
						conga_assign_80_90,
						conga_assign_80_93,
						conga_assign_80_94,
						conga_assign_80_96,
						conga_assign_80_97,
						conga_assign_80_99,
						conga_assign_80_100,
						conga_assign_80_103,
						conga_assign_80_105,
						conga_assign_80_108,
						conga_assign_80_111,
						conga_assign_80_112,
						conga_assign_80_114,
						conga_assign_80_118,
						conga_assign_80_121,
						conga_assign_80_124,
						conga_assign_80_126,
						conga_assign_80_128,
						conga_assign_80_130,
						conga_assign_80_132,
						conga_assign_80_134,
						conga_assign_80_135,
						conga_assign_80_137,
						conga_assign_80_138,
						conga_assign_80_141,
						conga_assign_80_142,
						conga_assign_80_144,
						conga_assign_80_146,
						conga_assign_80_148,
						conga_assign_80_150,
						conga_assign_80_152,
						conga_assign_80_153,
						conga_assign_80_155,
						conga_assign_80_158,
						conga_assign_80_160,
						conga_assign_80_161,
						conga_assign_80_164,
						conga_assign_80_167,
			
						conga_direct_assign_80,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	