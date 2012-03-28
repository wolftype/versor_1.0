
#ifndef conga_assign_Trs_Pss_con_h_included
#define conga_assign_Trs_Pss_con_h_included
#include "conga_assign_Trs_Pss.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trs_Pss_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trs_Pss_func[56] = {
						conga_assign_59_6,
						conga_assign_59_9,
						conga_assign_59_13,
						conga_assign_59_18,
						conga_assign_59_42,
						conga_assign_59_44,
						conga_assign_59_45,
						conga_assign_59_46,
						conga_assign_59_47,
						conga_assign_59_52,
						conga_assign_59_54,
						conga_assign_59_59,
						conga_assign_59_60,
						conga_assign_59_62,
						conga_assign_59_65,
						conga_assign_59_67,
						conga_assign_59_70,
						conga_assign_59_71,
						conga_assign_59_72,
						conga_assign_59_73,
						conga_assign_59_76,
						conga_assign_59_83,
						conga_assign_59_84,
						conga_assign_59_87,
						conga_assign_59_90,
						conga_assign_59_93,
						conga_assign_59_96,
						conga_assign_59_100,
						conga_assign_59_102,
						conga_assign_59_105,
						conga_assign_59_108,
						conga_assign_59_118,
						conga_assign_59_120,
						conga_assign_59_121,
						conga_assign_59_123,
						conga_assign_59_124,
						conga_assign_59_128,
						conga_assign_59_130,
						conga_assign_59_132,
						conga_assign_59_134,
						conga_assign_59_135,
						conga_assign_59_137,
						conga_assign_59_138,
						conga_assign_59_141,
						conga_assign_59_142,
						conga_assign_59_144,
						conga_assign_59_146,
						conga_assign_59_152,
						conga_assign_59_153,
						conga_assign_59_158,
						conga_assign_59_160,
						conga_assign_59_161,
						conga_assign_59_164,
						conga_assign_59_165,
						conga_assign_59_167,
			
						conga_direct_assign_59,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	