
#ifndef conga_assign_Pnt_Par_con_h_included
#define conga_assign_Pnt_Par_con_h_included
#include "conga_assign_Pnt_Par.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Pnt_Par_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Pnt_Par_func[84] = {
						conga_assign_128_2,
						conga_assign_128_3,
						conga_assign_128_5,
						conga_assign_128_7,
						conga_assign_128_9,
						conga_assign_128_13,
						conga_assign_128_16,
						conga_assign_128_18,
						conga_assign_128_22,
						conga_assign_128_23,
						conga_assign_128_25,
						conga_assign_128_26,
						conga_assign_128_28,
						conga_assign_128_41,
						conga_assign_128_42,
						conga_assign_128_44,
						conga_assign_128_45,
						conga_assign_128_46,
						conga_assign_128_47,
						conga_assign_128_52,
						conga_assign_128_54,
						conga_assign_128_55,
						conga_assign_128_56,
						conga_assign_128_57,
						conga_assign_128_58,
						conga_assign_128_59,
						conga_assign_128_60,
						conga_assign_128_62,
						conga_assign_128_65,
						conga_assign_128_67,
						conga_assign_128_70,
						conga_assign_128_71,
						conga_assign_128_72,
						conga_assign_128_73,
						conga_assign_128_76,
						conga_assign_128_79,
						conga_assign_128_80,
						conga_assign_128_83,
						conga_assign_128_84,
						conga_assign_128_87,
						conga_assign_128_88,
						conga_assign_128_90,
						conga_assign_128_93,
						conga_assign_128_94,
						conga_assign_128_96,
						conga_assign_128_97,
						conga_assign_128_99,
						conga_assign_128_100,
						conga_assign_128_102,
						conga_assign_128_103,
						conga_assign_128_105,
						conga_assign_128_108,
						conga_assign_128_111,
						conga_assign_128_112,
						conga_assign_128_114,
						conga_assign_128_118,
						conga_assign_128_120,
						conga_assign_128_121,
						conga_assign_128_123,
						conga_assign_128_124,
						conga_assign_128_126,
						conga_assign_128_128,
						conga_assign_128_130,
						conga_assign_128_132,
						conga_assign_128_134,
						conga_assign_128_135,
						conga_assign_128_137,
						conga_assign_128_138,
						conga_assign_128_141,
						conga_assign_128_142,
						conga_assign_128_144,
						conga_assign_128_146,
						conga_assign_128_148,
						conga_assign_128_150,
						conga_assign_128_152,
						conga_assign_128_153,
						conga_assign_128_155,
						conga_assign_128_158,
						conga_assign_128_160,
						conga_assign_128_161,
						conga_assign_128_164,
						conga_assign_128_165,
						conga_assign_128_167,
			
						conga_direct_assign_128,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	