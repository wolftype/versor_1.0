
#ifndef conga_assign_Pnt_con_h_included
#define conga_assign_Pnt_con_h_included
#include "conga_assign_Pnt.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Pnt_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Pnt_func[61] = {
						conga_assign_7_2,
						conga_assign_7_3,
						conga_assign_7_5,
						conga_assign_7_7,
						conga_assign_7_22,
						conga_assign_7_23,
						conga_assign_7_26,
						conga_assign_7_41,
						conga_assign_7_42,
						conga_assign_7_44,
						conga_assign_7_46,
						conga_assign_7_47,
						conga_assign_7_52,
						conga_assign_7_54,
						conga_assign_7_55,
						conga_assign_7_56,
						conga_assign_7_57,
						conga_assign_7_58,
						conga_assign_7_60,
						conga_assign_7_62,
						conga_assign_7_65,
						conga_assign_7_67,
						conga_assign_7_70,
						conga_assign_7_72,
						conga_assign_7_76,
						conga_assign_7_79,
						conga_assign_7_80,
						conga_assign_7_84,
						conga_assign_7_88,
						conga_assign_7_90,
						conga_assign_7_93,
						conga_assign_7_94,
						conga_assign_7_96,
						conga_assign_7_97,
						conga_assign_7_99,
						conga_assign_7_100,
						conga_assign_7_103,
						conga_assign_7_105,
						conga_assign_7_108,
						conga_assign_7_111,
						conga_assign_7_114,
						conga_assign_7_118,
						conga_assign_7_121,
						conga_assign_7_128,
						conga_assign_7_132,
						conga_assign_7_134,
						conga_assign_7_135,
						conga_assign_7_137,
						conga_assign_7_141,
						conga_assign_7_142,
						conga_assign_7_146,
						conga_assign_7_148,
						conga_assign_7_150,
						conga_assign_7_152,
						conga_assign_7_153,
						conga_assign_7_155,
						conga_assign_7_158,
						conga_assign_7_160,
						conga_assign_7_161,
						conga_assign_7_167,
			
						conga_direct_assign_7,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	