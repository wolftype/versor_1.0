
#ifndef conga_assign_Hyp_Pss_con_h_included
#define conga_assign_Hyp_Pss_con_h_included
#include "conga_assign_Hyp_Pss.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Hyp_Pss_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Hyp_Pss_func[43] = {
						conga_assign_116_10,
						conga_assign_116_14,
						conga_assign_116_17,
						conga_assign_116_19,
						conga_assign_116_32,
						conga_assign_116_34,
						conga_assign_116_36,
						conga_assign_116_40,
						conga_assign_116_48,
						conga_assign_116_49,
						conga_assign_116_50,
						conga_assign_116_51,
						conga_assign_116_53,
						conga_assign_116_61,
						conga_assign_116_63,
						conga_assign_116_66,
						conga_assign_116_68,
						conga_assign_116_69,
						conga_assign_116_74,
						conga_assign_116_77,
						conga_assign_116_85,
						conga_assign_116_89,
						conga_assign_116_91,
						conga_assign_116_95,
						conga_assign_116_98,
						conga_assign_116_101,
						conga_assign_116_106,
						conga_assign_116_109,
						conga_assign_116_116,
						conga_assign_116_119,
						conga_assign_116_125,
						conga_assign_116_129,
						conga_assign_116_131,
						conga_assign_116_136,
						conga_assign_116_140,
						conga_assign_116_149,
						conga_assign_116_151,
						conga_assign_116_154,
						conga_assign_116_156,
						conga_assign_116_159,
						conga_assign_116_162,
						conga_assign_116_167,
			
						conga_direct_assign_116,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	