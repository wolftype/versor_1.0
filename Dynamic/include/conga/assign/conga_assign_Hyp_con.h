
#ifndef conga_assign_Hyp_con_h_included
#define conga_assign_Hyp_con_h_included
#include "conga_assign_Hyp.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Hyp_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Hyp_func[43] = {
						conga_assign_5_2,
						conga_assign_5_3,
						conga_assign_5_5,
						conga_assign_5_7,
						conga_assign_5_22,
						conga_assign_5_26,
						conga_assign_5_41,
						conga_assign_5_42,
						conga_assign_5_44,
						conga_assign_5_46,
						conga_assign_5_47,
						conga_assign_5_52,
						conga_assign_5_54,
						conga_assign_5_56,
						conga_assign_5_57,
						conga_assign_5_58,
						conga_assign_5_60,
						conga_assign_5_62,
						conga_assign_5_67,
						conga_assign_5_70,
						conga_assign_5_79,
						conga_assign_5_84,
						conga_assign_5_88,
						conga_assign_5_90,
						conga_assign_5_94,
						conga_assign_5_96,
						conga_assign_5_97,
						conga_assign_5_100,
						conga_assign_5_103,
						conga_assign_5_111,
						conga_assign_5_114,
						conga_assign_5_118,
						conga_assign_5_128,
						conga_assign_5_132,
						conga_assign_5_135,
						conga_assign_5_137,
						conga_assign_5_152,
						conga_assign_5_153,
						conga_assign_5_155,
						conga_assign_5_160,
						conga_assign_5_161,
						conga_assign_5_167,
			
						conga_direct_assign_5,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	