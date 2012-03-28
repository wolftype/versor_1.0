
#ifndef conga_assign_Trv_Pnt_con_h_included
#define conga_assign_Trv_Pnt_con_h_included
#include "conga_assign_Trv_Pnt.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trv_Pnt_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trv_Pnt_func[78] = {
						conga_assign_88_2,
						conga_assign_88_3,
						conga_assign_88_5,
						conga_assign_88_7,
						conga_assign_88_9,
						conga_assign_88_16,
						conga_assign_88_18,
						conga_assign_88_22,
						conga_assign_88_23,
						conga_assign_88_26,
						conga_assign_88_28,
						conga_assign_88_41,
						conga_assign_88_42,
						conga_assign_88_44,
						conga_assign_88_45,
						conga_assign_88_46,
						conga_assign_88_47,
						conga_assign_88_52,
						conga_assign_88_54,
						conga_assign_88_55,
						conga_assign_88_56,
						conga_assign_88_57,
						conga_assign_88_58,
						conga_assign_88_60,
						conga_assign_88_62,
						conga_assign_88_65,
						conga_assign_88_67,
						conga_assign_88_70,
						conga_assign_88_72,
						conga_assign_88_76,
						conga_assign_88_79,
						conga_assign_88_80,
						conga_assign_88_83,
						conga_assign_88_84,
						conga_assign_88_87,
						conga_assign_88_88,
						conga_assign_88_90,
						conga_assign_88_93,
						conga_assign_88_94,
						conga_assign_88_96,
						conga_assign_88_97,
						conga_assign_88_99,
						conga_assign_88_100,
						conga_assign_88_103,
						conga_assign_88_105,
						conga_assign_88_108,
						conga_assign_88_111,
						conga_assign_88_112,
						conga_assign_88_114,
						conga_assign_88_118,
						conga_assign_88_120,
						conga_assign_88_121,
						conga_assign_88_123,
						conga_assign_88_124,
						conga_assign_88_126,
						conga_assign_88_128,
						conga_assign_88_130,
						conga_assign_88_132,
						conga_assign_88_134,
						conga_assign_88_135,
						conga_assign_88_137,
						conga_assign_88_138,
						conga_assign_88_141,
						conga_assign_88_142,
						conga_assign_88_144,
						conga_assign_88_146,
						conga_assign_88_148,
						conga_assign_88_150,
						conga_assign_88_152,
						conga_assign_88_153,
						conga_assign_88_155,
						conga_assign_88_158,
						conga_assign_88_160,
						conga_assign_88_161,
						conga_assign_88_164,
						conga_assign_88_165,
						conga_assign_88_167,
			
						conga_direct_assign_88,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	