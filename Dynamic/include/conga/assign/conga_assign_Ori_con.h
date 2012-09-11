
#ifndef conga_assign_Ori_con_h_included
#define conga_assign_Ori_con_h_included
#include "conga_assign_Ori.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Ori_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Ori_func[29] = {
						conga_assign_2_2,
						conga_assign_2_5,
						conga_assign_2_7,
						conga_assign_2_26,
						conga_assign_2_41,
						conga_assign_2_44,
						conga_assign_2_46,
						conga_assign_2_47,
						conga_assign_2_56,
						conga_assign_2_57,
						conga_assign_2_58,
						conga_assign_2_60,
						conga_assign_2_84,
						conga_assign_2_88,
						conga_assign_2_90,
						conga_assign_2_94,
						conga_assign_2_97,
						conga_assign_2_103,
						conga_assign_2_114,
						conga_assign_2_118,
						conga_assign_2_128,
						conga_assign_2_135,
						conga_assign_2_137,
						conga_assign_2_152,
						conga_assign_2_153,
						conga_assign_2_155,
						conga_assign_2_161,
						conga_assign_2_167,
			
						conga_direct_assign_2,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	