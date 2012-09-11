
#ifndef conga_assign_Tri_con_h_included
#define conga_assign_Tri_con_h_included
#include "conga_assign_Tri.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Tri_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Tri_func[32] = {
						conga_assign_25_9,
						conga_assign_25_25,
						conga_assign_25_28,
						conga_assign_25_46,
						conga_assign_25_47,
						conga_assign_25_54,
						conga_assign_25_55,
						conga_assign_25_56,
						conga_assign_25_62,
						conga_assign_25_65,
						conga_assign_25_71,
						conga_assign_25_72,
						conga_assign_25_73,
						conga_assign_25_83,
						conga_assign_25_84,
						conga_assign_25_90,
						conga_assign_25_93,
						conga_assign_25_96,
						conga_assign_25_102,
						conga_assign_25_120,
						conga_assign_25_128,
						conga_assign_25_130,
						conga_assign_25_132,
						conga_assign_25_134,
						conga_assign_25_135,
						conga_assign_25_142,
						conga_assign_25_146,
						conga_assign_25_148,
						conga_assign_25_158,
						conga_assign_25_165,
						conga_assign_25_167,
			
						conga_direct_assign_25,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	