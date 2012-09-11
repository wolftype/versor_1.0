
#ifndef conga_assign_Mnk_con_h_included
#define conga_assign_Mnk_con_h_included
#include "conga_assign_Mnk.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mnk_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mnk_func[32] = {
						conga_assign_4_4,
						conga_assign_4_8,
						conga_assign_4_20,
						conga_assign_4_31,
						conga_assign_4_34,
						conga_assign_4_35,
						conga_assign_4_37,
						conga_assign_4_38,
						conga_assign_4_39,
						conga_assign_4_40,
						conga_assign_4_43,
						conga_assign_4_48,
						conga_assign_4_53,
						conga_assign_4_61,
						conga_assign_4_64,
						conga_assign_4_85,
						conga_assign_4_86,
						conga_assign_4_89,
						conga_assign_4_92,
						conga_assign_4_117,
						conga_assign_4_127,
						conga_assign_4_129,
						conga_assign_4_131,
						conga_assign_4_139,
						conga_assign_4_140,
						conga_assign_4_145,
						conga_assign_4_151,
						conga_assign_4_157,
						conga_assign_4_163,
						conga_assign_4_166,
						conga_assign_4_167,
			
						conga_direct_assign_4,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	