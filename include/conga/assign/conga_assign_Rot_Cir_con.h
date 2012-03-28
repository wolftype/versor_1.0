
#ifndef conga_assign_Rot_Cir_con_h_included
#define conga_assign_Rot_Cir_con_h_included
#include "conga_assign_Rot_Cir.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Cir_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Cir_func[85] = {
						conga_assign_47_2,
						conga_assign_47_3,
						conga_assign_47_5,
						conga_assign_47_6,
						conga_assign_47_7,
						conga_assign_47_9,
						conga_assign_47_13,
						conga_assign_47_16,
						conga_assign_47_18,
						conga_assign_47_22,
						conga_assign_47_23,
						conga_assign_47_25,
						conga_assign_47_26,
						conga_assign_47_28,
						conga_assign_47_41,
						conga_assign_47_42,
						conga_assign_47_44,
						conga_assign_47_45,
						conga_assign_47_46,
						conga_assign_47_47,
						conga_assign_47_52,
						conga_assign_47_54,
						conga_assign_47_55,
						conga_assign_47_56,
						conga_assign_47_57,
						conga_assign_47_58,
						conga_assign_47_59,
						conga_assign_47_60,
						conga_assign_47_62,
						conga_assign_47_65,
						conga_assign_47_67,
						conga_assign_47_70,
						conga_assign_47_71,
						conga_assign_47_72,
						conga_assign_47_73,
						conga_assign_47_76,
						conga_assign_47_79,
						conga_assign_47_80,
						conga_assign_47_83,
						conga_assign_47_84,
						conga_assign_47_87,
						conga_assign_47_88,
						conga_assign_47_90,
						conga_assign_47_93,
						conga_assign_47_94,
						conga_assign_47_96,
						conga_assign_47_97,
						conga_assign_47_99,
						conga_assign_47_100,
						conga_assign_47_102,
						conga_assign_47_103,
						conga_assign_47_105,
						conga_assign_47_108,
						conga_assign_47_111,
						conga_assign_47_112,
						conga_assign_47_114,
						conga_assign_47_118,
						conga_assign_47_120,
						conga_assign_47_121,
						conga_assign_47_123,
						conga_assign_47_124,
						conga_assign_47_126,
						conga_assign_47_128,
						conga_assign_47_130,
						conga_assign_47_132,
						conga_assign_47_134,
						conga_assign_47_135,
						conga_assign_47_137,
						conga_assign_47_138,
						conga_assign_47_141,
						conga_assign_47_142,
						conga_assign_47_144,
						conga_assign_47_146,
						conga_assign_47_148,
						conga_assign_47_150,
						conga_assign_47_152,
						conga_assign_47_153,
						conga_assign_47_155,
						conga_assign_47_158,
						conga_assign_47_160,
						conga_assign_47_161,
						conga_assign_47_164,
						conga_assign_47_165,
						conga_assign_47_167,
			
						conga_direct_assign_47,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	