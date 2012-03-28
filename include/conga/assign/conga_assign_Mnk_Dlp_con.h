
#ifndef conga_assign_Mnk_Dlp_con_h_included
#define conga_assign_Mnk_Dlp_con_h_included
#include "conga_assign_Mnk_Dlp.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mnk_Dlp_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mnk_Dlp_func[56] = {
						conga_assign_111_3,
						conga_assign_111_5,
						conga_assign_111_7,
						conga_assign_111_9,
						conga_assign_111_18,
						conga_assign_111_22,
						conga_assign_111_42,
						conga_assign_111_44,
						conga_assign_111_45,
						conga_assign_111_46,
						conga_assign_111_47,
						conga_assign_111_52,
						conga_assign_111_54,
						conga_assign_111_57,
						conga_assign_111_58,
						conga_assign_111_60,
						conga_assign_111_62,
						conga_assign_111_65,
						conga_assign_111_67,
						conga_assign_111_70,
						conga_assign_111_72,
						conga_assign_111_76,
						conga_assign_111_79,
						conga_assign_111_80,
						conga_assign_111_84,
						conga_assign_111_88,
						conga_assign_111_90,
						conga_assign_111_93,
						conga_assign_111_96,
						conga_assign_111_97,
						conga_assign_111_99,
						conga_assign_111_100,
						conga_assign_111_103,
						conga_assign_111_111,
						conga_assign_111_112,
						conga_assign_111_114,
						conga_assign_111_118,
						conga_assign_111_121,
						conga_assign_111_124,
						conga_assign_111_126,
						conga_assign_111_128,
						conga_assign_111_130,
						conga_assign_111_132,
						conga_assign_111_135,
						conga_assign_111_137,
						conga_assign_111_138,
						conga_assign_111_142,
						conga_assign_111_144,
						conga_assign_111_152,
						conga_assign_111_153,
						conga_assign_111_155,
						conga_assign_111_160,
						conga_assign_111_161,
						conga_assign_111_164,
						conga_assign_111_167,
			
						conga_direct_assign_111,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	