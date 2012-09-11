
#ifndef conga_assign_Rot_Pnt_con_h_included
#define conga_assign_Rot_Pnt_con_h_included
#include "conga_assign_Rot_Pnt.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Pnt_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Pnt_func[82] = {
						conga_assign_46_2,
						conga_assign_46_3,
						conga_assign_46_5,
						conga_assign_46_7,
						conga_assign_46_9,
						conga_assign_46_13,
						conga_assign_46_16,
						conga_assign_46_18,
						conga_assign_46_22,
						conga_assign_46_23,
						conga_assign_46_25,
						conga_assign_46_26,
						conga_assign_46_28,
						conga_assign_46_41,
						conga_assign_46_42,
						conga_assign_46_44,
						conga_assign_46_46,
						conga_assign_46_47,
						conga_assign_46_52,
						conga_assign_46_54,
						conga_assign_46_55,
						conga_assign_46_56,
						conga_assign_46_57,
						conga_assign_46_58,
						conga_assign_46_59,
						conga_assign_46_60,
						conga_assign_46_62,
						conga_assign_46_65,
						conga_assign_46_67,
						conga_assign_46_70,
						conga_assign_46_71,
						conga_assign_46_72,
						conga_assign_46_73,
						conga_assign_46_76,
						conga_assign_46_79,
						conga_assign_46_80,
						conga_assign_46_83,
						conga_assign_46_84,
						conga_assign_46_87,
						conga_assign_46_88,
						conga_assign_46_90,
						conga_assign_46_93,
						conga_assign_46_94,
						conga_assign_46_96,
						conga_assign_46_97,
						conga_assign_46_99,
						conga_assign_46_100,
						conga_assign_46_102,
						conga_assign_46_103,
						conga_assign_46_105,
						conga_assign_46_108,
						conga_assign_46_111,
						conga_assign_46_114,
						conga_assign_46_118,
						conga_assign_46_120,
						conga_assign_46_121,
						conga_assign_46_123,
						conga_assign_46_124,
						conga_assign_46_126,
						conga_assign_46_128,
						conga_assign_46_130,
						conga_assign_46_132,
						conga_assign_46_134,
						conga_assign_46_135,
						conga_assign_46_137,
						conga_assign_46_138,
						conga_assign_46_141,
						conga_assign_46_142,
						conga_assign_46_144,
						conga_assign_46_146,
						conga_assign_46_148,
						conga_assign_46_150,
						conga_assign_46_152,
						conga_assign_46_153,
						conga_assign_46_155,
						conga_assign_46_158,
						conga_assign_46_160,
						conga_assign_46_161,
						conga_assign_46_164,
						conga_assign_46_165,
						conga_assign_46_167,
			
						conga_direct_assign_46,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	