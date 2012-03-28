
#ifndef conga_assign_Mnk_Pnt_con_h_included
#define conga_assign_Mnk_Pnt_con_h_included
#include "conga_assign_Mnk_Pnt.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mnk_Pnt_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mnk_Pnt_func[61] = {
						conga_assign_103_2,
						conga_assign_103_3,
						conga_assign_103_5,
						conga_assign_103_7,
						conga_assign_103_9,
						conga_assign_103_18,
						conga_assign_103_22,
						conga_assign_103_26,
						conga_assign_103_41,
						conga_assign_103_42,
						conga_assign_103_44,
						conga_assign_103_45,
						conga_assign_103_46,
						conga_assign_103_47,
						conga_assign_103_52,
						conga_assign_103_54,
						conga_assign_103_56,
						conga_assign_103_57,
						conga_assign_103_58,
						conga_assign_103_60,
						conga_assign_103_62,
						conga_assign_103_65,
						conga_assign_103_67,
						conga_assign_103_70,
						conga_assign_103_72,
						conga_assign_103_76,
						conga_assign_103_79,
						conga_assign_103_80,
						conga_assign_103_84,
						conga_assign_103_88,
						conga_assign_103_90,
						conga_assign_103_93,
						conga_assign_103_94,
						conga_assign_103_96,
						conga_assign_103_97,
						conga_assign_103_99,
						conga_assign_103_100,
						conga_assign_103_103,
						conga_assign_103_111,
						conga_assign_103_112,
						conga_assign_103_114,
						conga_assign_103_118,
						conga_assign_103_121,
						conga_assign_103_124,
						conga_assign_103_126,
						conga_assign_103_128,
						conga_assign_103_130,
						conga_assign_103_132,
						conga_assign_103_135,
						conga_assign_103_137,
						conga_assign_103_138,
						conga_assign_103_142,
						conga_assign_103_144,
						conga_assign_103_152,
						conga_assign_103_153,
						conga_assign_103_155,
						conga_assign_103_160,
						conga_assign_103_161,
						conga_assign_103_164,
						conga_assign_103_167,
			
						conga_direct_assign_103,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	