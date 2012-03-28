
#ifndef conga_assign_Trv_Pss_con_h_included
#define conga_assign_Trv_Pss_con_h_included
#include "conga_assign_Trv_Pss.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trv_Pss_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trv_Pss_func[56] = {
						conga_assign_87_6,
						conga_assign_87_9,
						conga_assign_87_16,
						conga_assign_87_28,
						conga_assign_87_41,
						conga_assign_87_44,
						conga_assign_87_45,
						conga_assign_87_46,
						conga_assign_87_47,
						conga_assign_87_52,
						conga_assign_87_56,
						conga_assign_87_59,
						conga_assign_87_62,
						conga_assign_87_65,
						conga_assign_87_72,
						conga_assign_87_73,
						conga_assign_87_83,
						conga_assign_87_84,
						conga_assign_87_87,
						conga_assign_87_88,
						conga_assign_87_90,
						conga_assign_87_93,
						conga_assign_87_94,
						conga_assign_87_96,
						conga_assign_87_97,
						conga_assign_87_99,
						conga_assign_87_102,
						conga_assign_87_105,
						conga_assign_87_118,
						conga_assign_87_120,
						conga_assign_87_121,
						conga_assign_87_123,
						conga_assign_87_124,
						conga_assign_87_126,
						conga_assign_87_128,
						conga_assign_87_130,
						conga_assign_87_132,
						conga_assign_87_134,
						conga_assign_87_135,
						conga_assign_87_137,
						conga_assign_87_138,
						conga_assign_87_141,
						conga_assign_87_142,
						conga_assign_87_144,
						conga_assign_87_148,
						conga_assign_87_150,
						conga_assign_87_152,
						conga_assign_87_153,
						conga_assign_87_155,
						conga_assign_87_158,
						conga_assign_87_160,
						conga_assign_87_161,
						conga_assign_87_164,
						conga_assign_87_165,
						conga_assign_87_167,
			
						conga_direct_assign_87,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	