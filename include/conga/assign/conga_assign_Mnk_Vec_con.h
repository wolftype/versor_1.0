
#ifndef conga_assign_Mnk_Vec_con_h_included
#define conga_assign_Mnk_Vec_con_h_included
#include "conga_assign_Mnk_Vec.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mnk_Vec_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mnk_Vec_func[47] = {
						conga_assign_112_9,
						conga_assign_112_18,
						conga_assign_112_45,
						conga_assign_112_47,
						conga_assign_112_52,
						conga_assign_112_57,
						conga_assign_112_58,
						conga_assign_112_60,
						conga_assign_112_62,
						conga_assign_112_65,
						conga_assign_112_67,
						conga_assign_112_72,
						conga_assign_112_76,
						conga_assign_112_79,
						conga_assign_112_80,
						conga_assign_112_84,
						conga_assign_112_88,
						conga_assign_112_90,
						conga_assign_112_93,
						conga_assign_112_96,
						conga_assign_112_97,
						conga_assign_112_99,
						conga_assign_112_100,
						conga_assign_112_103,
						conga_assign_112_111,
						conga_assign_112_112,
						conga_assign_112_114,
						conga_assign_112_118,
						conga_assign_112_121,
						conga_assign_112_124,
						conga_assign_112_126,
						conga_assign_112_128,
						conga_assign_112_130,
						conga_assign_112_132,
						conga_assign_112_135,
						conga_assign_112_137,
						conga_assign_112_138,
						conga_assign_112_142,
						conga_assign_112_144,
						conga_assign_112_152,
						conga_assign_112_153,
						conga_assign_112_155,
						conga_assign_112_160,
						conga_assign_112_161,
						conga_assign_112_164,
						conga_assign_112_167,
			
						conga_direct_assign_112,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	