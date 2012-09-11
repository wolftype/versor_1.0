
#ifndef conga_assign_Pss_con_h_included
#define conga_assign_Pss_con_h_included
#include "conga_assign_Pss.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Pss_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Pss_func[31] = {
						conga_assign_6_6,
						conga_assign_6_45,
						conga_assign_6_47,
						conga_assign_6_52,
						conga_assign_6_59,
						conga_assign_6_62,
						conga_assign_6_65,
						conga_assign_6_72,
						conga_assign_6_73,
						conga_assign_6_83,
						conga_assign_6_84,
						conga_assign_6_87,
						conga_assign_6_90,
						conga_assign_6_93,
						conga_assign_6_96,
						conga_assign_6_102,
						conga_assign_6_105,
						conga_assign_6_120,
						conga_assign_6_130,
						conga_assign_6_137,
						conga_assign_6_138,
						conga_assign_6_142,
						conga_assign_6_144,
						conga_assign_6_152,
						conga_assign_6_153,
						conga_assign_6_158,
						conga_assign_6_160,
						conga_assign_6_161,
						conga_assign_6_164,
						conga_assign_6_167,
			
						conga_direct_assign_6,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	