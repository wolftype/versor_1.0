
#ifndef conga_assign_Vec_con_h_included
#define conga_assign_Vec_con_h_included
#include "conga_assign_Vec.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Vec_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Vec_func[47] = {
						conga_assign_23_7,
						conga_assign_23_22,
						conga_assign_23_23,
						conga_assign_23_26,
						conga_assign_23_46,
						conga_assign_23_47,
						conga_assign_23_54,
						conga_assign_23_55,
						conga_assign_23_56,
						conga_assign_23_57,
						conga_assign_23_58,
						conga_assign_23_60,
						conga_assign_23_62,
						conga_assign_23_65,
						conga_assign_23_70,
						conga_assign_23_72,
						conga_assign_23_76,
						conga_assign_23_79,
						conga_assign_23_80,
						conga_assign_23_84,
						conga_assign_23_88,
						conga_assign_23_90,
						conga_assign_23_93,
						conga_assign_23_94,
						conga_assign_23_96,
						conga_assign_23_97,
						conga_assign_23_99,
						conga_assign_23_100,
						conga_assign_23_105,
						conga_assign_23_108,
						conga_assign_23_118,
						conga_assign_23_121,
						conga_assign_23_128,
						conga_assign_23_132,
						conga_assign_23_134,
						conga_assign_23_135,
						conga_assign_23_137,
						conga_assign_23_141,
						conga_assign_23_142,
						conga_assign_23_146,
						conga_assign_23_148,
						conga_assign_23_150,
						conga_assign_23_158,
						conga_assign_23_160,
						conga_assign_23_161,
						conga_assign_23_167,
			
						conga_direct_assign_23,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	