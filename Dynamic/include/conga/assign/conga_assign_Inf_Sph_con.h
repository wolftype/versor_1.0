
#ifndef conga_assign_Inf_Sph_con_h_included
#define conga_assign_Inf_Sph_con_h_included
#include "conga_assign_Inf_Sph.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Inf_Sph_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Inf_Sph_func[61] = {
						conga_assign_102_6,
						conga_assign_102_9,
						conga_assign_102_13,
						conga_assign_102_18,
						conga_assign_102_25,
						conga_assign_102_28,
						conga_assign_102_42,
						conga_assign_102_44,
						conga_assign_102_45,
						conga_assign_102_46,
						conga_assign_102_47,
						conga_assign_102_52,
						conga_assign_102_54,
						conga_assign_102_55,
						conga_assign_102_56,
						conga_assign_102_59,
						conga_assign_102_60,
						conga_assign_102_62,
						conga_assign_102_65,
						conga_assign_102_67,
						conga_assign_102_70,
						conga_assign_102_71,
						conga_assign_102_72,
						conga_assign_102_73,
						conga_assign_102_76,
						conga_assign_102_83,
						conga_assign_102_84,
						conga_assign_102_87,
						conga_assign_102_90,
						conga_assign_102_93,
						conga_assign_102_96,
						conga_assign_102_100,
						conga_assign_102_102,
						conga_assign_102_105,
						conga_assign_102_108,
						conga_assign_102_118,
						conga_assign_102_120,
						conga_assign_102_121,
						conga_assign_102_123,
						conga_assign_102_124,
						conga_assign_102_128,
						conga_assign_102_130,
						conga_assign_102_132,
						conga_assign_102_134,
						conga_assign_102_135,
						conga_assign_102_137,
						conga_assign_102_138,
						conga_assign_102_141,
						conga_assign_102_142,
						conga_assign_102_144,
						conga_assign_102_146,
						conga_assign_102_148,
						conga_assign_102_152,
						conga_assign_102_153,
						conga_assign_102_158,
						conga_assign_102_160,
						conga_assign_102_161,
						conga_assign_102_164,
						conga_assign_102_165,
						conga_assign_102_167,
			
						conga_direct_assign_102,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	