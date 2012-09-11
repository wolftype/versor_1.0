
#ifndef conga_assign_Trs_Pnt_con_h_included
#define conga_assign_Trs_Pnt_con_h_included
#include "conga_assign_Trs_Pnt.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trs_Pnt_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trs_Pnt_func[78] = {
						conga_assign_60_2,
						conga_assign_60_3,
						conga_assign_60_5,
						conga_assign_60_7,
						conga_assign_60_9,
						conga_assign_60_13,
						conga_assign_60_18,
						conga_assign_60_22,
						conga_assign_60_23,
						conga_assign_60_26,
						conga_assign_60_41,
						conga_assign_60_42,
						conga_assign_60_44,
						conga_assign_60_45,
						conga_assign_60_46,
						conga_assign_60_47,
						conga_assign_60_52,
						conga_assign_60_54,
						conga_assign_60_55,
						conga_assign_60_56,
						conga_assign_60_57,
						conga_assign_60_58,
						conga_assign_60_59,
						conga_assign_60_60,
						conga_assign_60_62,
						conga_assign_60_65,
						conga_assign_60_67,
						conga_assign_60_70,
						conga_assign_60_71,
						conga_assign_60_72,
						conga_assign_60_76,
						conga_assign_60_79,
						conga_assign_60_80,
						conga_assign_60_84,
						conga_assign_60_88,
						conga_assign_60_90,
						conga_assign_60_93,
						conga_assign_60_94,
						conga_assign_60_96,
						conga_assign_60_97,
						conga_assign_60_99,
						conga_assign_60_100,
						conga_assign_60_102,
						conga_assign_60_103,
						conga_assign_60_105,
						conga_assign_60_108,
						conga_assign_60_111,
						conga_assign_60_112,
						conga_assign_60_114,
						conga_assign_60_118,
						conga_assign_60_120,
						conga_assign_60_121,
						conga_assign_60_123,
						conga_assign_60_124,
						conga_assign_60_126,
						conga_assign_60_128,
						conga_assign_60_130,
						conga_assign_60_132,
						conga_assign_60_134,
						conga_assign_60_135,
						conga_assign_60_137,
						conga_assign_60_138,
						conga_assign_60_141,
						conga_assign_60_142,
						conga_assign_60_144,
						conga_assign_60_146,
						conga_assign_60_148,
						conga_assign_60_150,
						conga_assign_60_152,
						conga_assign_60_153,
						conga_assign_60_155,
						conga_assign_60_158,
						conga_assign_60_160,
						conga_assign_60_161,
						conga_assign_60_164,
						conga_assign_60_165,
						conga_assign_60_167,
			
						conga_direct_assign_60,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	