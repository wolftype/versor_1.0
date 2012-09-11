
#ifndef conga_assign_Rot_Inf_con_h_included
#define conga_assign_Rot_Inf_con_h_included
#include "conga_assign_Rot_Inf.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Inf_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Inf_func[55] = {
						conga_assign_42_3,
						conga_assign_42_5,
						conga_assign_42_7,
						conga_assign_42_9,
						conga_assign_42_13,
						conga_assign_42_18,
						conga_assign_42_22,
						conga_assign_42_42,
						conga_assign_42_44,
						conga_assign_42_46,
						conga_assign_42_47,
						conga_assign_42_52,
						conga_assign_42_54,
						conga_assign_42_58,
						conga_assign_42_59,
						conga_assign_42_60,
						conga_assign_42_62,
						conga_assign_42_67,
						conga_assign_42_70,
						conga_assign_42_71,
						conga_assign_42_72,
						conga_assign_42_76,
						conga_assign_42_79,
						conga_assign_42_88,
						conga_assign_42_90,
						conga_assign_42_93,
						conga_assign_42_96,
						conga_assign_42_100,
						conga_assign_42_102,
						conga_assign_42_103,
						conga_assign_42_105,
						conga_assign_42_108,
						conga_assign_42_111,
						conga_assign_42_118,
						conga_assign_42_120,
						conga_assign_42_121,
						conga_assign_42_123,
						conga_assign_42_124,
						conga_assign_42_128,
						conga_assign_42_130,
						conga_assign_42_132,
						conga_assign_42_134,
						conga_assign_42_135,
						conga_assign_42_137,
						conga_assign_42_138,
						conga_assign_42_141,
						conga_assign_42_144,
						conga_assign_42_146,
						conga_assign_42_153,
						conga_assign_42_158,
						conga_assign_42_160,
						conga_assign_42_161,
						conga_assign_42_165,
						conga_assign_42_167,
			
						conga_direct_assign_42,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	