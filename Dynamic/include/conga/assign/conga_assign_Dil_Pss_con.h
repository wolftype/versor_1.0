
#ifndef conga_assign_Dil_Pss_con_h_included
#define conga_assign_Dil_Pss_con_h_included
#include "conga_assign_Dil_Pss.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dil_Pss_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dil_Pss_func[46] = {
						conga_assign_73_6,
						conga_assign_73_9,
						conga_assign_73_25,
						conga_assign_73_28,
						conga_assign_73_45,
						conga_assign_73_46,
						conga_assign_73_47,
						conga_assign_73_52,
						conga_assign_73_54,
						conga_assign_73_55,
						conga_assign_73_56,
						conga_assign_73_59,
						conga_assign_73_62,
						conga_assign_73_65,
						conga_assign_73_71,
						conga_assign_73_72,
						conga_assign_73_73,
						conga_assign_73_83,
						conga_assign_73_84,
						conga_assign_73_87,
						conga_assign_73_90,
						conga_assign_73_93,
						conga_assign_73_96,
						conga_assign_73_102,
						conga_assign_73_105,
						conga_assign_73_120,
						conga_assign_73_128,
						conga_assign_73_130,
						conga_assign_73_132,
						conga_assign_73_134,
						conga_assign_73_135,
						conga_assign_73_137,
						conga_assign_73_138,
						conga_assign_73_142,
						conga_assign_73_144,
						conga_assign_73_146,
						conga_assign_73_148,
						conga_assign_73_152,
						conga_assign_73_153,
						conga_assign_73_158,
						conga_assign_73_160,
						conga_assign_73_161,
						conga_assign_73_164,
						conga_assign_73_165,
						conga_assign_73_167,
			
						conga_direct_assign_73,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	