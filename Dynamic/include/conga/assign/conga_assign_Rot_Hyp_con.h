
#ifndef conga_assign_Rot_Hyp_con_h_included
#define conga_assign_Rot_Hyp_con_h_included
#include "conga_assign_Rot_Hyp.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Hyp_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Hyp_func[76] = {
						conga_assign_44_2,
						conga_assign_44_3,
						conga_assign_44_5,
						conga_assign_44_7,
						conga_assign_44_9,
						conga_assign_44_13,
						conga_assign_44_16,
						conga_assign_44_18,
						conga_assign_44_22,
						conga_assign_44_26,
						conga_assign_44_28,
						conga_assign_44_41,
						conga_assign_44_42,
						conga_assign_44_44,
						conga_assign_44_46,
						conga_assign_44_47,
						conga_assign_44_52,
						conga_assign_44_54,
						conga_assign_44_56,
						conga_assign_44_57,
						conga_assign_44_58,
						conga_assign_44_59,
						conga_assign_44_60,
						conga_assign_44_62,
						conga_assign_44_65,
						conga_assign_44_67,
						conga_assign_44_70,
						conga_assign_44_71,
						conga_assign_44_72,
						conga_assign_44_76,
						conga_assign_44_79,
						conga_assign_44_83,
						conga_assign_44_84,
						conga_assign_44_87,
						conga_assign_44_88,
						conga_assign_44_90,
						conga_assign_44_93,
						conga_assign_44_94,
						conga_assign_44_96,
						conga_assign_44_97,
						conga_assign_44_99,
						conga_assign_44_100,
						conga_assign_44_102,
						conga_assign_44_103,
						conga_assign_44_105,
						conga_assign_44_108,
						conga_assign_44_111,
						conga_assign_44_114,
						conga_assign_44_118,
						conga_assign_44_120,
						conga_assign_44_121,
						conga_assign_44_123,
						conga_assign_44_124,
						conga_assign_44_126,
						conga_assign_44_128,
						conga_assign_44_130,
						conga_assign_44_132,
						conga_assign_44_134,
						conga_assign_44_135,
						conga_assign_44_137,
						conga_assign_44_138,
						conga_assign_44_141,
						conga_assign_44_144,
						conga_assign_44_146,
						conga_assign_44_148,
						conga_assign_44_150,
						conga_assign_44_152,
						conga_assign_44_153,
						conga_assign_44_155,
						conga_assign_44_158,
						conga_assign_44_160,
						conga_assign_44_161,
						conga_assign_44_164,
						conga_assign_44_165,
						conga_assign_44_167,
			
						conga_direct_assign_44,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	