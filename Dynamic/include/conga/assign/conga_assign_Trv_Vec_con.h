
#ifndef conga_assign_Trv_Vec_con_h_included
#define conga_assign_Trv_Vec_con_h_included
#include "conga_assign_Trv_Vec.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trv_Vec_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trv_Vec_func[69] = {
						conga_assign_94_2,
						conga_assign_94_5,
						conga_assign_94_7,
						conga_assign_94_9,
						conga_assign_94_16,
						conga_assign_94_22,
						conga_assign_94_23,
						conga_assign_94_26,
						conga_assign_94_28,
						conga_assign_94_41,
						conga_assign_94_44,
						conga_assign_94_46,
						conga_assign_94_47,
						conga_assign_94_54,
						conga_assign_94_55,
						conga_assign_94_56,
						conga_assign_94_57,
						conga_assign_94_58,
						conga_assign_94_60,
						conga_assign_94_62,
						conga_assign_94_65,
						conga_assign_94_70,
						conga_assign_94_72,
						conga_assign_94_76,
						conga_assign_94_79,
						conga_assign_94_80,
						conga_assign_94_83,
						conga_assign_94_84,
						conga_assign_94_87,
						conga_assign_94_88,
						conga_assign_94_90,
						conga_assign_94_93,
						conga_assign_94_94,
						conga_assign_94_96,
						conga_assign_94_97,
						conga_assign_94_99,
						conga_assign_94_100,
						conga_assign_94_103,
						conga_assign_94_105,
						conga_assign_94_108,
						conga_assign_94_114,
						conga_assign_94_118,
						conga_assign_94_120,
						conga_assign_94_121,
						conga_assign_94_123,
						conga_assign_94_124,
						conga_assign_94_126,
						conga_assign_94_128,
						conga_assign_94_130,
						conga_assign_94_132,
						conga_assign_94_134,
						conga_assign_94_135,
						conga_assign_94_137,
						conga_assign_94_138,
						conga_assign_94_141,
						conga_assign_94_142,
						conga_assign_94_146,
						conga_assign_94_148,
						conga_assign_94_150,
						conga_assign_94_152,
						conga_assign_94_153,
						conga_assign_94_155,
						conga_assign_94_158,
						conga_assign_94_160,
						conga_assign_94_161,
						conga_assign_94_164,
						conga_assign_94_165,
						conga_assign_94_167,
			
						conga_direct_assign_94,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	