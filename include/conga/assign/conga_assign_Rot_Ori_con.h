
#ifndef conga_assign_Rot_Ori_con_h_included
#define conga_assign_Rot_Ori_con_h_included
#include "conga_assign_Rot_Ori.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Ori_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Ori_func[55] = {
						conga_assign_41_2,
						conga_assign_41_5,
						conga_assign_41_7,
						conga_assign_41_9,
						conga_assign_41_16,
						conga_assign_41_26,
						conga_assign_41_28,
						conga_assign_41_41,
						conga_assign_41_44,
						conga_assign_41_46,
						conga_assign_41_47,
						conga_assign_41_56,
						conga_assign_41_57,
						conga_assign_41_58,
						conga_assign_41_60,
						conga_assign_41_62,
						conga_assign_41_65,
						conga_assign_41_72,
						conga_assign_41_83,
						conga_assign_41_84,
						conga_assign_41_87,
						conga_assign_41_88,
						conga_assign_41_90,
						conga_assign_41_94,
						conga_assign_41_97,
						conga_assign_41_99,
						conga_assign_41_103,
						conga_assign_41_105,
						conga_assign_41_114,
						conga_assign_41_118,
						conga_assign_41_120,
						conga_assign_41_121,
						conga_assign_41_123,
						conga_assign_41_124,
						conga_assign_41_126,
						conga_assign_41_128,
						conga_assign_41_130,
						conga_assign_41_132,
						conga_assign_41_134,
						conga_assign_41_135,
						conga_assign_41_137,
						conga_assign_41_138,
						conga_assign_41_141,
						conga_assign_41_148,
						conga_assign_41_150,
						conga_assign_41_152,
						conga_assign_41_153,
						conga_assign_41_155,
						conga_assign_41_158,
						conga_assign_41_160,
						conga_assign_41_161,
						conga_assign_41_164,
						conga_assign_41_165,
						conga_assign_41_167,
			
						conga_direct_assign_41,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	