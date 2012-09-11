
#ifndef conga_assign_Dil_Afp_con_h_included
#define conga_assign_Dil_Afp_con_h_included
#include "conga_assign_Dil_Afp.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dil_Afp_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dil_Afp_func[61] = {
						conga_assign_83_6,
						conga_assign_83_9,
						conga_assign_83_16,
						conga_assign_83_25,
						conga_assign_83_28,
						conga_assign_83_41,
						conga_assign_83_44,
						conga_assign_83_45,
						conga_assign_83_46,
						conga_assign_83_47,
						conga_assign_83_52,
						conga_assign_83_54,
						conga_assign_83_55,
						conga_assign_83_56,
						conga_assign_83_59,
						conga_assign_83_62,
						conga_assign_83_65,
						conga_assign_83_71,
						conga_assign_83_72,
						conga_assign_83_73,
						conga_assign_83_83,
						conga_assign_83_84,
						conga_assign_83_87,
						conga_assign_83_88,
						conga_assign_83_90,
						conga_assign_83_93,
						conga_assign_83_94,
						conga_assign_83_96,
						conga_assign_83_97,
						conga_assign_83_99,
						conga_assign_83_102,
						conga_assign_83_105,
						conga_assign_83_118,
						conga_assign_83_120,
						conga_assign_83_121,
						conga_assign_83_123,
						conga_assign_83_124,
						conga_assign_83_126,
						conga_assign_83_128,
						conga_assign_83_130,
						conga_assign_83_132,
						conga_assign_83_134,
						conga_assign_83_135,
						conga_assign_83_137,
						conga_assign_83_138,
						conga_assign_83_141,
						conga_assign_83_142,
						conga_assign_83_144,
						conga_assign_83_146,
						conga_assign_83_148,
						conga_assign_83_150,
						conga_assign_83_152,
						conga_assign_83_153,
						conga_assign_83_155,
						conga_assign_83_158,
						conga_assign_83_160,
						conga_assign_83_161,
						conga_assign_83_164,
						conga_assign_83_165,
						conga_assign_83_167,
			
						conga_direct_assign_83,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	