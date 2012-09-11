
#ifndef conga_assign_Hyp_Sph_con_h_included
#define conga_assign_Hyp_Sph_con_h_included
#include "conga_assign_Hyp_Sph.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Hyp_Sph_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Hyp_Sph_func[70] = {
						conga_assign_120_6,
						conga_assign_120_9,
						conga_assign_120_13,
						conga_assign_120_16,
						conga_assign_120_18,
						conga_assign_120_25,
						conga_assign_120_28,
						conga_assign_120_41,
						conga_assign_120_42,
						conga_assign_120_44,
						conga_assign_120_45,
						conga_assign_120_46,
						conga_assign_120_47,
						conga_assign_120_52,
						conga_assign_120_54,
						conga_assign_120_55,
						conga_assign_120_56,
						conga_assign_120_59,
						conga_assign_120_60,
						conga_assign_120_62,
						conga_assign_120_65,
						conga_assign_120_67,
						conga_assign_120_70,
						conga_assign_120_71,
						conga_assign_120_72,
						conga_assign_120_73,
						conga_assign_120_76,
						conga_assign_120_83,
						conga_assign_120_84,
						conga_assign_120_87,
						conga_assign_120_88,
						conga_assign_120_90,
						conga_assign_120_93,
						conga_assign_120_94,
						conga_assign_120_96,
						conga_assign_120_97,
						conga_assign_120_99,
						conga_assign_120_100,
						conga_assign_120_102,
						conga_assign_120_105,
						conga_assign_120_108,
						conga_assign_120_118,
						conga_assign_120_120,
						conga_assign_120_121,
						conga_assign_120_123,
						conga_assign_120_124,
						conga_assign_120_126,
						conga_assign_120_128,
						conga_assign_120_130,
						conga_assign_120_132,
						conga_assign_120_134,
						conga_assign_120_135,
						conga_assign_120_137,
						conga_assign_120_138,
						conga_assign_120_141,
						conga_assign_120_142,
						conga_assign_120_144,
						conga_assign_120_146,
						conga_assign_120_148,
						conga_assign_120_150,
						conga_assign_120_152,
						conga_assign_120_153,
						conga_assign_120_155,
						conga_assign_120_158,
						conga_assign_120_160,
						conga_assign_120_161,
						conga_assign_120_164,
						conga_assign_120_165,
						conga_assign_120_167,
			
						conga_direct_assign_120,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	