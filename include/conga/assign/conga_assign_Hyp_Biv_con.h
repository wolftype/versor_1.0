
#ifndef conga_assign_Hyp_Biv_con_h_included
#define conga_assign_Hyp_Biv_con_h_included
#include "conga_assign_Hyp_Biv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Hyp_Biv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Hyp_Biv_func[64] = {
						conga_assign_123_9,
						conga_assign_123_13,
						conga_assign_123_16,
						conga_assign_123_18,
						conga_assign_123_28,
						conga_assign_123_41,
						conga_assign_123_42,
						conga_assign_123_44,
						conga_assign_123_46,
						conga_assign_123_47,
						conga_assign_123_52,
						conga_assign_123_54,
						conga_assign_123_56,
						conga_assign_123_59,
						conga_assign_123_60,
						conga_assign_123_62,
						conga_assign_123_65,
						conga_assign_123_67,
						conga_assign_123_70,
						conga_assign_123_71,
						conga_assign_123_72,
						conga_assign_123_76,
						conga_assign_123_83,
						conga_assign_123_84,
						conga_assign_123_87,
						conga_assign_123_88,
						conga_assign_123_90,
						conga_assign_123_93,
						conga_assign_123_94,
						conga_assign_123_96,
						conga_assign_123_97,
						conga_assign_123_99,
						conga_assign_123_100,
						conga_assign_123_102,
						conga_assign_123_105,
						conga_assign_123_108,
						conga_assign_123_118,
						conga_assign_123_120,
						conga_assign_123_121,
						conga_assign_123_123,
						conga_assign_123_124,
						conga_assign_123_126,
						conga_assign_123_128,
						conga_assign_123_130,
						conga_assign_123_132,
						conga_assign_123_134,
						conga_assign_123_135,
						conga_assign_123_137,
						conga_assign_123_138,
						conga_assign_123_141,
						conga_assign_123_144,
						conga_assign_123_146,
						conga_assign_123_148,
						conga_assign_123_150,
						conga_assign_123_152,
						conga_assign_123_153,
						conga_assign_123_155,
						conga_assign_123_158,
						conga_assign_123_160,
						conga_assign_123_161,
						conga_assign_123_164,
						conga_assign_123_165,
						conga_assign_123_167,
			
						conga_direct_assign_123,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	