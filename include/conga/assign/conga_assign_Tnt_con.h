
#ifndef conga_assign_Tnt_con_h_included
#define conga_assign_Tnt_con_h_included
#include "conga_assign_Tnt.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Tnt_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Tnt_func[29] = {
						conga_assign_17_10,
						conga_assign_17_17,
						conga_assign_17_36,
						conga_assign_17_40,
						conga_assign_17_48,
						conga_assign_17_49,
						conga_assign_17_51,
						conga_assign_17_63,
						conga_assign_17_66,
						conga_assign_17_74,
						conga_assign_17_85,
						conga_assign_17_89,
						conga_assign_17_91,
						conga_assign_17_95,
						conga_assign_17_98,
						conga_assign_17_106,
						conga_assign_17_116,
						conga_assign_17_119,
						conga_assign_17_125,
						conga_assign_17_129,
						conga_assign_17_136,
						conga_assign_17_140,
						conga_assign_17_149,
						conga_assign_17_151,
						conga_assign_17_154,
						conga_assign_17_156,
						conga_assign_17_162,
						conga_assign_17_167,
			
						conga_direct_assign_17,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	