
#ifndef conga_assign_Tnb_con_h_included
#define conga_assign_Tnb_con_h_included
#include "conga_assign_Tnb.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Tnb_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Tnb_func[46] = {
						conga_assign_16_9,
						conga_assign_16_16,
						conga_assign_16_28,
						conga_assign_16_41,
						conga_assign_16_44,
						conga_assign_16_46,
						conga_assign_16_47,
						conga_assign_16_56,
						conga_assign_16_62,
						conga_assign_16_65,
						conga_assign_16_72,
						conga_assign_16_83,
						conga_assign_16_84,
						conga_assign_16_87,
						conga_assign_16_88,
						conga_assign_16_90,
						conga_assign_16_94,
						conga_assign_16_97,
						conga_assign_16_99,
						conga_assign_16_105,
						conga_assign_16_118,
						conga_assign_16_120,
						conga_assign_16_121,
						conga_assign_16_123,
						conga_assign_16_124,
						conga_assign_16_126,
						conga_assign_16_128,
						conga_assign_16_130,
						conga_assign_16_132,
						conga_assign_16_134,
						conga_assign_16_135,
						conga_assign_16_137,
						conga_assign_16_138,
						conga_assign_16_141,
						conga_assign_16_148,
						conga_assign_16_150,
						conga_assign_16_152,
						conga_assign_16_153,
						conga_assign_16_155,
						conga_assign_16_158,
						conga_assign_16_160,
						conga_assign_16_161,
						conga_assign_16_164,
						conga_assign_16_165,
						conga_assign_16_167,
			
						conga_direct_assign_16,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	