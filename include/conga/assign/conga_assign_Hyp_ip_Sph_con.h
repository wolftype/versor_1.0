
#ifndef conga_assign_Hyp_ip_Sph_con_h_included
#define conga_assign_Hyp_ip_Sph_con_h_included
#include "conga_assign_Hyp_ip_Sph.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Hyp_ip_Sph_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Hyp_ip_Sph_func[68] = {
						conga_assign_165_9,
						conga_assign_165_13,
						conga_assign_165_16,
						conga_assign_165_18,
						conga_assign_165_25,
						conga_assign_165_28,
						conga_assign_165_41,
						conga_assign_165_42,
						conga_assign_165_44,
						conga_assign_165_46,
						conga_assign_165_47,
						conga_assign_165_52,
						conga_assign_165_54,
						conga_assign_165_55,
						conga_assign_165_56,
						conga_assign_165_59,
						conga_assign_165_60,
						conga_assign_165_62,
						conga_assign_165_65,
						conga_assign_165_67,
						conga_assign_165_70,
						conga_assign_165_71,
						conga_assign_165_72,
						conga_assign_165_73,
						conga_assign_165_76,
						conga_assign_165_83,
						conga_assign_165_84,
						conga_assign_165_87,
						conga_assign_165_88,
						conga_assign_165_90,
						conga_assign_165_93,
						conga_assign_165_94,
						conga_assign_165_96,
						conga_assign_165_97,
						conga_assign_165_99,
						conga_assign_165_100,
						conga_assign_165_102,
						conga_assign_165_105,
						conga_assign_165_108,
						conga_assign_165_118,
						conga_assign_165_120,
						conga_assign_165_121,
						conga_assign_165_123,
						conga_assign_165_124,
						conga_assign_165_126,
						conga_assign_165_128,
						conga_assign_165_130,
						conga_assign_165_132,
						conga_assign_165_134,
						conga_assign_165_135,
						conga_assign_165_137,
						conga_assign_165_138,
						conga_assign_165_141,
						conga_assign_165_142,
						conga_assign_165_144,
						conga_assign_165_146,
						conga_assign_165_148,
						conga_assign_165_150,
						conga_assign_165_152,
						conga_assign_165_153,
						conga_assign_165_155,
						conga_assign_165_158,
						conga_assign_165_160,
						conga_assign_165_161,
						conga_assign_165_164,
						conga_assign_165_165,
						conga_assign_165_167,
			
						conga_direct_assign_165,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	