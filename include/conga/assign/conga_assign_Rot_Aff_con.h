
#ifndef conga_assign_Rot_Aff_con_h_included
#define conga_assign_Rot_Aff_con_h_included
#include "conga_assign_Rot_Aff.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Aff_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Aff_func[73] = {
						conga_assign_56_2,
						conga_assign_56_5,
						conga_assign_56_7,
						conga_assign_56_9,
						conga_assign_56_16,
						conga_assign_56_22,
						conga_assign_56_23,
						conga_assign_56_25,
						conga_assign_56_26,
						conga_assign_56_28,
						conga_assign_56_41,
						conga_assign_56_44,
						conga_assign_56_46,
						conga_assign_56_47,
						conga_assign_56_54,
						conga_assign_56_55,
						conga_assign_56_56,
						conga_assign_56_57,
						conga_assign_56_58,
						conga_assign_56_60,
						conga_assign_56_62,
						conga_assign_56_65,
						conga_assign_56_70,
						conga_assign_56_71,
						conga_assign_56_72,
						conga_assign_56_73,
						conga_assign_56_76,
						conga_assign_56_79,
						conga_assign_56_80,
						conga_assign_56_83,
						conga_assign_56_84,
						conga_assign_56_87,
						conga_assign_56_88,
						conga_assign_56_90,
						conga_assign_56_93,
						conga_assign_56_94,
						conga_assign_56_96,
						conga_assign_56_97,
						conga_assign_56_99,
						conga_assign_56_100,
						conga_assign_56_102,
						conga_assign_56_103,
						conga_assign_56_105,
						conga_assign_56_108,
						conga_assign_56_114,
						conga_assign_56_118,
						conga_assign_56_120,
						conga_assign_56_121,
						conga_assign_56_123,
						conga_assign_56_124,
						conga_assign_56_126,
						conga_assign_56_128,
						conga_assign_56_130,
						conga_assign_56_132,
						conga_assign_56_134,
						conga_assign_56_135,
						conga_assign_56_137,
						conga_assign_56_138,
						conga_assign_56_141,
						conga_assign_56_142,
						conga_assign_56_146,
						conga_assign_56_148,
						conga_assign_56_150,
						conga_assign_56_152,
						conga_assign_56_153,
						conga_assign_56_155,
						conga_assign_56_158,
						conga_assign_56_160,
						conga_assign_56_161,
						conga_assign_56_164,
						conga_assign_56_165,
						conga_assign_56_167,
			
						conga_direct_assign_56,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	