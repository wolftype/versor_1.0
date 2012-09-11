
#ifndef conga_assign_Inf_con_h_included
#define conga_assign_Inf_con_h_included
#include "conga_assign_Inf.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Inf_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Inf_func[29] = {
						conga_assign_3_3,
						conga_assign_3_5,
						conga_assign_3_7,
						conga_assign_3_22,
						conga_assign_3_42,
						conga_assign_3_44,
						conga_assign_3_46,
						conga_assign_3_47,
						conga_assign_3_52,
						conga_assign_3_54,
						conga_assign_3_58,
						conga_assign_3_60,
						conga_assign_3_62,
						conga_assign_3_67,
						conga_assign_3_70,
						conga_assign_3_79,
						conga_assign_3_88,
						conga_assign_3_96,
						conga_assign_3_100,
						conga_assign_3_103,
						conga_assign_3_111,
						conga_assign_3_118,
						conga_assign_3_128,
						conga_assign_3_132,
						conga_assign_3_137,
						conga_assign_3_153,
						conga_assign_3_160,
						conga_assign_3_167,
			
						conga_direct_assign_3,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	