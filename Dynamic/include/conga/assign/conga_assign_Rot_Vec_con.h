
#ifndef conga_assign_Rot_Vec_con_h_included
#define conga_assign_Rot_Vec_con_h_included
#include "conga_assign_Rot_Vec.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Vec_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Vec_func[57] = {
						conga_assign_55_7,
						conga_assign_55_9,
						conga_assign_55_22,
						conga_assign_55_23,
						conga_assign_55_25,
						conga_assign_55_26,
						conga_assign_55_28,
						conga_assign_55_46,
						conga_assign_55_47,
						conga_assign_55_54,
						conga_assign_55_55,
						conga_assign_55_56,
						conga_assign_55_57,
						conga_assign_55_58,
						conga_assign_55_60,
						conga_assign_55_62,
						conga_assign_55_65,
						conga_assign_55_70,
						conga_assign_55_71,
						conga_assign_55_72,
						conga_assign_55_73,
						conga_assign_55_76,
						conga_assign_55_79,
						conga_assign_55_80,
						conga_assign_55_83,
						conga_assign_55_84,
						conga_assign_55_88,
						conga_assign_55_90,
						conga_assign_55_93,
						conga_assign_55_94,
						conga_assign_55_96,
						conga_assign_55_97,
						conga_assign_55_99,
						conga_assign_55_100,
						conga_assign_55_102,
						conga_assign_55_105,
						conga_assign_55_108,
						conga_assign_55_118,
						conga_assign_55_120,
						conga_assign_55_121,
						conga_assign_55_128,
						conga_assign_55_130,
						conga_assign_55_132,
						conga_assign_55_134,
						conga_assign_55_135,
						conga_assign_55_137,
						conga_assign_55_141,
						conga_assign_55_142,
						conga_assign_55_146,
						conga_assign_55_148,
						conga_assign_55_150,
						conga_assign_55_158,
						conga_assign_55_160,
						conga_assign_55_161,
						conga_assign_55_165,
						conga_assign_55_167,
			
						conga_direct_assign_55,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	