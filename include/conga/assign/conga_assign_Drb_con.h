
#ifndef conga_assign_Drb_con_h_included
#define conga_assign_Drb_con_h_included
#include "conga_assign_Drb.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Drb_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Drb_func[46] = {
						conga_assign_13_9,
						conga_assign_13_13,
						conga_assign_13_18,
						conga_assign_13_42,
						conga_assign_13_44,
						conga_assign_13_46,
						conga_assign_13_47,
						conga_assign_13_52,
						conga_assign_13_54,
						conga_assign_13_59,
						conga_assign_13_60,
						conga_assign_13_62,
						conga_assign_13_67,
						conga_assign_13_70,
						conga_assign_13_71,
						conga_assign_13_72,
						conga_assign_13_76,
						conga_assign_13_90,
						conga_assign_13_93,
						conga_assign_13_96,
						conga_assign_13_100,
						conga_assign_13_102,
						conga_assign_13_105,
						conga_assign_13_108,
						conga_assign_13_118,
						conga_assign_13_120,
						conga_assign_13_121,
						conga_assign_13_123,
						conga_assign_13_124,
						conga_assign_13_128,
						conga_assign_13_130,
						conga_assign_13_132,
						conga_assign_13_134,
						conga_assign_13_135,
						conga_assign_13_137,
						conga_assign_13_138,
						conga_assign_13_141,
						conga_assign_13_144,
						conga_assign_13_146,
						conga_assign_13_153,
						conga_assign_13_158,
						conga_assign_13_160,
						conga_assign_13_161,
						conga_assign_13_165,
						conga_assign_13_167,
			
						conga_direct_assign_13,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	