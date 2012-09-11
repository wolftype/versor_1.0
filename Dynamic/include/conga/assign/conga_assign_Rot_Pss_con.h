
#ifndef conga_assign_Rot_Pss_con_h_included
#define conga_assign_Rot_Pss_con_h_included
#include "conga_assign_Rot_Pss.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Pss_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Pss_func[56] = {
						conga_assign_45_6,
						conga_assign_45_9,
						conga_assign_45_18,
						conga_assign_45_45,
						conga_assign_45_47,
						conga_assign_45_52,
						conga_assign_45_57,
						conga_assign_45_58,
						conga_assign_45_59,
						conga_assign_45_60,
						conga_assign_45_62,
						conga_assign_45_65,
						conga_assign_45_67,
						conga_assign_45_72,
						conga_assign_45_73,
						conga_assign_45_76,
						conga_assign_45_79,
						conga_assign_45_80,
						conga_assign_45_83,
						conga_assign_45_84,
						conga_assign_45_87,
						conga_assign_45_88,
						conga_assign_45_90,
						conga_assign_45_93,
						conga_assign_45_96,
						conga_assign_45_97,
						conga_assign_45_99,
						conga_assign_45_100,
						conga_assign_45_102,
						conga_assign_45_103,
						conga_assign_45_105,
						conga_assign_45_111,
						conga_assign_45_112,
						conga_assign_45_114,
						conga_assign_45_118,
						conga_assign_45_120,
						conga_assign_45_121,
						conga_assign_45_124,
						conga_assign_45_126,
						conga_assign_45_128,
						conga_assign_45_130,
						conga_assign_45_132,
						conga_assign_45_135,
						conga_assign_45_137,
						conga_assign_45_138,
						conga_assign_45_142,
						conga_assign_45_144,
						conga_assign_45_152,
						conga_assign_45_153,
						conga_assign_45_155,
						conga_assign_45_158,
						conga_assign_45_160,
						conga_assign_45_161,
						conga_assign_45_164,
						conga_assign_45_167,
			
						conga_direct_assign_45,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	