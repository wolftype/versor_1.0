
#ifndef conga_assign_Trs_Tri_con_h_included
#define conga_assign_Trs_Tri_con_h_included
#include "conga_assign_Trs_Tri.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trs_Tri_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trs_Tri_func[56] = {
						conga_assign_71_9,
						conga_assign_71_13,
						conga_assign_71_18,
						conga_assign_71_25,
						conga_assign_71_28,
						conga_assign_71_42,
						conga_assign_71_44,
						conga_assign_71_46,
						conga_assign_71_47,
						conga_assign_71_52,
						conga_assign_71_54,
						conga_assign_71_55,
						conga_assign_71_56,
						conga_assign_71_59,
						conga_assign_71_60,
						conga_assign_71_62,
						conga_assign_71_65,
						conga_assign_71_67,
						conga_assign_71_70,
						conga_assign_71_71,
						conga_assign_71_72,
						conga_assign_71_73,
						conga_assign_71_76,
						conga_assign_71_83,
						conga_assign_71_84,
						conga_assign_71_90,
						conga_assign_71_93,
						conga_assign_71_96,
						conga_assign_71_100,
						conga_assign_71_102,
						conga_assign_71_105,
						conga_assign_71_108,
						conga_assign_71_118,
						conga_assign_71_120,
						conga_assign_71_121,
						conga_assign_71_123,
						conga_assign_71_124,
						conga_assign_71_128,
						conga_assign_71_130,
						conga_assign_71_132,
						conga_assign_71_134,
						conga_assign_71_135,
						conga_assign_71_137,
						conga_assign_71_138,
						conga_assign_71_141,
						conga_assign_71_142,
						conga_assign_71_144,
						conga_assign_71_146,
						conga_assign_71_148,
						conga_assign_71_153,
						conga_assign_71_158,
						conga_assign_71_160,
						conga_assign_71_161,
						conga_assign_71_165,
						conga_assign_71_167,
			
						conga_direct_assign_71,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	