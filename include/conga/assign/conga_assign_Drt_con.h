
#ifndef conga_assign_Drt_con_h_included
#define conga_assign_Drt_con_h_included
#include "conga_assign_Drt.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Drt_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Drt_func[29] = {
						conga_assign_14_10,
						conga_assign_14_14,
						conga_assign_14_19,
						conga_assign_14_32,
						conga_assign_14_34,
						conga_assign_14_40,
						conga_assign_14_48,
						conga_assign_14_49,
						conga_assign_14_50,
						conga_assign_14_53,
						conga_assign_14_61,
						conga_assign_14_63,
						conga_assign_14_68,
						conga_assign_14_69,
						conga_assign_14_74,
						conga_assign_14_77,
						conga_assign_14_91,
						conga_assign_14_101,
						conga_assign_14_106,
						conga_assign_14_109,
						conga_assign_14_116,
						conga_assign_14_119,
						conga_assign_14_129,
						conga_assign_14_131,
						conga_assign_14_136,
						conga_assign_14_154,
						conga_assign_14_159,
						conga_assign_14_167,
			
						conga_direct_assign_14,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	