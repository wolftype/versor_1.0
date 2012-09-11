
#ifndef conga_assign_Trs_Tnb_con_h_included
#define conga_assign_Trs_Tnb_con_h_included
#include "conga_assign_Trs_Tnb.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trs_Tnb_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trs_Tnb_func[80] = {
						conga_assign_65_6,
						conga_assign_65_7,
						conga_assign_65_9,
						conga_assign_65_16,
						conga_assign_65_18,
						conga_assign_65_22,
						conga_assign_65_23,
						conga_assign_65_25,
						conga_assign_65_26,
						conga_assign_65_28,
						conga_assign_65_41,
						conga_assign_65_44,
						conga_assign_65_45,
						conga_assign_65_46,
						conga_assign_65_47,
						conga_assign_65_52,
						conga_assign_65_54,
						conga_assign_65_55,
						conga_assign_65_56,
						conga_assign_65_57,
						conga_assign_65_58,
						conga_assign_65_59,
						conga_assign_65_60,
						conga_assign_65_62,
						conga_assign_65_65,
						conga_assign_65_67,
						conga_assign_65_70,
						conga_assign_65_71,
						conga_assign_65_72,
						conga_assign_65_73,
						conga_assign_65_76,
						conga_assign_65_79,
						conga_assign_65_80,
						conga_assign_65_83,
						conga_assign_65_84,
						conga_assign_65_87,
						conga_assign_65_88,
						conga_assign_65_90,
						conga_assign_65_93,
						conga_assign_65_94,
						conga_assign_65_96,
						conga_assign_65_97,
						conga_assign_65_99,
						conga_assign_65_100,
						conga_assign_65_102,
						conga_assign_65_103,
						conga_assign_65_105,
						conga_assign_65_108,
						conga_assign_65_111,
						conga_assign_65_112,
						conga_assign_65_114,
						conga_assign_65_118,
						conga_assign_65_120,
						conga_assign_65_121,
						conga_assign_65_123,
						conga_assign_65_124,
						conga_assign_65_126,
						conga_assign_65_128,
						conga_assign_65_130,
						conga_assign_65_132,
						conga_assign_65_134,
						conga_assign_65_135,
						conga_assign_65_137,
						conga_assign_65_138,
						conga_assign_65_141,
						conga_assign_65_142,
						conga_assign_65_144,
						conga_assign_65_146,
						conga_assign_65_148,
						conga_assign_65_150,
						conga_assign_65_152,
						conga_assign_65_153,
						conga_assign_65_155,
						conga_assign_65_158,
						conga_assign_65_160,
						conga_assign_65_161,
						conga_assign_65_164,
						conga_assign_65_165,
						conga_assign_65_167,
			
						conga_direct_assign_65,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	