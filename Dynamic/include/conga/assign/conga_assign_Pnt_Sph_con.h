
#ifndef conga_assign_Pnt_Sph_con_h_included
#define conga_assign_Pnt_Sph_con_h_included
#include "conga_assign_Pnt_Sph.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Pnt_Sph_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Pnt_Sph_func[78] = {
						conga_assign_130_6,
						conga_assign_130_9,
						conga_assign_130_13,
						conga_assign_130_16,
						conga_assign_130_18,
						conga_assign_130_25,
						conga_assign_130_28,
						conga_assign_130_41,
						conga_assign_130_42,
						conga_assign_130_44,
						conga_assign_130_45,
						conga_assign_130_46,
						conga_assign_130_47,
						conga_assign_130_52,
						conga_assign_130_54,
						conga_assign_130_55,
						conga_assign_130_56,
						conga_assign_130_57,
						conga_assign_130_58,
						conga_assign_130_59,
						conga_assign_130_60,
						conga_assign_130_62,
						conga_assign_130_65,
						conga_assign_130_67,
						conga_assign_130_70,
						conga_assign_130_71,
						conga_assign_130_72,
						conga_assign_130_73,
						conga_assign_130_76,
						conga_assign_130_79,
						conga_assign_130_80,
						conga_assign_130_83,
						conga_assign_130_84,
						conga_assign_130_87,
						conga_assign_130_88,
						conga_assign_130_90,
						conga_assign_130_93,
						conga_assign_130_94,
						conga_assign_130_96,
						conga_assign_130_97,
						conga_assign_130_99,
						conga_assign_130_100,
						conga_assign_130_102,
						conga_assign_130_103,
						conga_assign_130_105,
						conga_assign_130_108,
						conga_assign_130_111,
						conga_assign_130_112,
						conga_assign_130_114,
						conga_assign_130_118,
						conga_assign_130_120,
						conga_assign_130_121,
						conga_assign_130_123,
						conga_assign_130_124,
						conga_assign_130_126,
						conga_assign_130_128,
						conga_assign_130_130,
						conga_assign_130_132,
						conga_assign_130_134,
						conga_assign_130_135,
						conga_assign_130_137,
						conga_assign_130_138,
						conga_assign_130_141,
						conga_assign_130_142,
						conga_assign_130_144,
						conga_assign_130_146,
						conga_assign_130_148,
						conga_assign_130_150,
						conga_assign_130_152,
						conga_assign_130_153,
						conga_assign_130_155,
						conga_assign_130_158,
						conga_assign_130_160,
						conga_assign_130_161,
						conga_assign_130_164,
						conga_assign_130_165,
						conga_assign_130_167,
			
						conga_direct_assign_130,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	