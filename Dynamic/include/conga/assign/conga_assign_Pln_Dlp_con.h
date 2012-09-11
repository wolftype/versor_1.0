
#ifndef conga_assign_Pln_Dlp_con_h_included
#define conga_assign_Pln_Dlp_con_h_included
#include "conga_assign_Pln_Dlp.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Pln_Dlp_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Pln_Dlp_func[69] = {
						conga_assign_144_6,
						conga_assign_144_9,
						conga_assign_144_13,
						conga_assign_144_18,
						conga_assign_144_42,
						conga_assign_144_44,
						conga_assign_144_45,
						conga_assign_144_46,
						conga_assign_144_47,
						conga_assign_144_52,
						conga_assign_144_54,
						conga_assign_144_57,
						conga_assign_144_58,
						conga_assign_144_59,
						conga_assign_144_60,
						conga_assign_144_62,
						conga_assign_144_65,
						conga_assign_144_67,
						conga_assign_144_70,
						conga_assign_144_71,
						conga_assign_144_72,
						conga_assign_144_73,
						conga_assign_144_76,
						conga_assign_144_79,
						conga_assign_144_80,
						conga_assign_144_83,
						conga_assign_144_84,
						conga_assign_144_87,
						conga_assign_144_88,
						conga_assign_144_90,
						conga_assign_144_93,
						conga_assign_144_96,
						conga_assign_144_97,
						conga_assign_144_99,
						conga_assign_144_100,
						conga_assign_144_102,
						conga_assign_144_103,
						conga_assign_144_105,
						conga_assign_144_108,
						conga_assign_144_111,
						conga_assign_144_112,
						conga_assign_144_114,
						conga_assign_144_118,
						conga_assign_144_120,
						conga_assign_144_121,
						conga_assign_144_123,
						conga_assign_144_124,
						conga_assign_144_126,
						conga_assign_144_128,
						conga_assign_144_130,
						conga_assign_144_132,
						conga_assign_144_134,
						conga_assign_144_135,
						conga_assign_144_137,
						conga_assign_144_138,
						conga_assign_144_141,
						conga_assign_144_142,
						conga_assign_144_144,
						conga_assign_144_146,
						conga_assign_144_152,
						conga_assign_144_153,
						conga_assign_144_155,
						conga_assign_144_158,
						conga_assign_144_160,
						conga_assign_144_161,
						conga_assign_144_164,
						conga_assign_144_165,
						conga_assign_144_167,
			
						conga_direct_assign_144,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	