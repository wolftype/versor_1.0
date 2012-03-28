
#ifndef conga_assign_Afp_con_h_included
#define conga_assign_Afp_con_h_included
#include "conga_assign_Afp.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Afp_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Afp_func[56] = {
						conga_assign_28_9,
						conga_assign_28_16,
						conga_assign_28_25,
						conga_assign_28_28,
						conga_assign_28_41,
						conga_assign_28_44,
						conga_assign_28_46,
						conga_assign_28_47,
						conga_assign_28_54,
						conga_assign_28_55,
						conga_assign_28_56,
						conga_assign_28_62,
						conga_assign_28_65,
						conga_assign_28_71,
						conga_assign_28_72,
						conga_assign_28_73,
						conga_assign_28_83,
						conga_assign_28_84,
						conga_assign_28_87,
						conga_assign_28_88,
						conga_assign_28_90,
						conga_assign_28_93,
						conga_assign_28_94,
						conga_assign_28_96,
						conga_assign_28_97,
						conga_assign_28_99,
						conga_assign_28_102,
						conga_assign_28_105,
						conga_assign_28_118,
						conga_assign_28_120,
						conga_assign_28_121,
						conga_assign_28_123,
						conga_assign_28_124,
						conga_assign_28_126,
						conga_assign_28_128,
						conga_assign_28_130,
						conga_assign_28_132,
						conga_assign_28_134,
						conga_assign_28_135,
						conga_assign_28_137,
						conga_assign_28_138,
						conga_assign_28_141,
						conga_assign_28_142,
						conga_assign_28_146,
						conga_assign_28_148,
						conga_assign_28_150,
						conga_assign_28_152,
						conga_assign_28_153,
						conga_assign_28_155,
						conga_assign_28_158,
						conga_assign_28_160,
						conga_assign_28_161,
						conga_assign_28_164,
						conga_assign_28_165,
						conga_assign_28_167,
			
						conga_direct_assign_28,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	