
#ifndef conga_assign_Sph_Vec_con_h_included
#define conga_assign_Sph_Vec_con_h_included
#include "conga_assign_Sph_Vec.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Sph_Vec_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Sph_Vec_func[76] = {
						conga_assign_138_6,
						conga_assign_138_9,
						conga_assign_138_13,
						conga_assign_138_16,
						conga_assign_138_18,
						conga_assign_138_28,
						conga_assign_138_41,
						conga_assign_138_42,
						conga_assign_138_44,
						conga_assign_138_45,
						conga_assign_138_46,
						conga_assign_138_47,
						conga_assign_138_52,
						conga_assign_138_54,
						conga_assign_138_56,
						conga_assign_138_57,
						conga_assign_138_58,
						conga_assign_138_59,
						conga_assign_138_60,
						conga_assign_138_62,
						conga_assign_138_65,
						conga_assign_138_67,
						conga_assign_138_70,
						conga_assign_138_71,
						conga_assign_138_72,
						conga_assign_138_73,
						conga_assign_138_76,
						conga_assign_138_79,
						conga_assign_138_80,
						conga_assign_138_83,
						conga_assign_138_84,
						conga_assign_138_87,
						conga_assign_138_88,
						conga_assign_138_90,
						conga_assign_138_93,
						conga_assign_138_94,
						conga_assign_138_96,
						conga_assign_138_97,
						conga_assign_138_99,
						conga_assign_138_100,
						conga_assign_138_102,
						conga_assign_138_103,
						conga_assign_138_105,
						conga_assign_138_108,
						conga_assign_138_111,
						conga_assign_138_112,
						conga_assign_138_114,
						conga_assign_138_118,
						conga_assign_138_120,
						conga_assign_138_121,
						conga_assign_138_123,
						conga_assign_138_124,
						conga_assign_138_126,
						conga_assign_138_128,
						conga_assign_138_130,
						conga_assign_138_132,
						conga_assign_138_134,
						conga_assign_138_135,
						conga_assign_138_137,
						conga_assign_138_138,
						conga_assign_138_141,
						conga_assign_138_142,
						conga_assign_138_144,
						conga_assign_138_146,
						conga_assign_138_148,
						conga_assign_138_150,
						conga_assign_138_152,
						conga_assign_138_153,
						conga_assign_138_155,
						conga_assign_138_158,
						conga_assign_138_160,
						conga_assign_138_161,
						conga_assign_138_164,
						conga_assign_138_165,
						conga_assign_138_167,
			
						conga_direct_assign_138,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	