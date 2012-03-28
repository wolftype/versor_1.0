
#ifndef conga_assign_Rot_Mnk_Pnt_con_h_included
#define conga_assign_Rot_Mnk_Pnt_con_h_included
#include "conga_assign_Rot_Mnk_Pnt.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Mnk_Pnt_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Mnk_Pnt_func[82] = {
						conga_assign_153_2,
						conga_assign_153_3,
						conga_assign_153_5,
						conga_assign_153_6,
						conga_assign_153_7,
						conga_assign_153_9,
						conga_assign_153_13,
						conga_assign_153_16,
						conga_assign_153_18,
						conga_assign_153_22,
						conga_assign_153_26,
						conga_assign_153_28,
						conga_assign_153_41,
						conga_assign_153_42,
						conga_assign_153_44,
						conga_assign_153_45,
						conga_assign_153_46,
						conga_assign_153_47,
						conga_assign_153_52,
						conga_assign_153_54,
						conga_assign_153_56,
						conga_assign_153_57,
						conga_assign_153_58,
						conga_assign_153_59,
						conga_assign_153_60,
						conga_assign_153_62,
						conga_assign_153_65,
						conga_assign_153_67,
						conga_assign_153_70,
						conga_assign_153_71,
						conga_assign_153_72,
						conga_assign_153_73,
						conga_assign_153_76,
						conga_assign_153_79,
						conga_assign_153_80,
						conga_assign_153_83,
						conga_assign_153_84,
						conga_assign_153_87,
						conga_assign_153_88,
						conga_assign_153_90,
						conga_assign_153_93,
						conga_assign_153_94,
						conga_assign_153_96,
						conga_assign_153_97,
						conga_assign_153_99,
						conga_assign_153_100,
						conga_assign_153_102,
						conga_assign_153_103,
						conga_assign_153_105,
						conga_assign_153_108,
						conga_assign_153_111,
						conga_assign_153_112,
						conga_assign_153_114,
						conga_assign_153_118,
						conga_assign_153_120,
						conga_assign_153_121,
						conga_assign_153_123,
						conga_assign_153_124,
						conga_assign_153_126,
						conga_assign_153_128,
						conga_assign_153_130,
						conga_assign_153_132,
						conga_assign_153_134,
						conga_assign_153_135,
						conga_assign_153_137,
						conga_assign_153_138,
						conga_assign_153_141,
						conga_assign_153_142,
						conga_assign_153_144,
						conga_assign_153_146,
						conga_assign_153_148,
						conga_assign_153_150,
						conga_assign_153_152,
						conga_assign_153_153,
						conga_assign_153_155,
						conga_assign_153_158,
						conga_assign_153_160,
						conga_assign_153_161,
						conga_assign_153_164,
						conga_assign_153_165,
						conga_assign_153_167,
			
						conga_direct_assign_153,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	