
#ifndef conga_assign_Dil_con_h_included
#define conga_assign_Dil_con_h_included
#include "conga_assign_Dil.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dil_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dil_func[46] = {
						conga_assign_31_1,
						conga_assign_31_4,
						conga_assign_31_8,
						conga_assign_31_20,
						conga_assign_31_29,
						conga_assign_31_30,
						conga_assign_31_31,
						conga_assign_31_32,
						conga_assign_31_33,
						conga_assign_31_34,
						conga_assign_31_35,
						conga_assign_31_36,
						conga_assign_31_37,
						conga_assign_31_38,
						conga_assign_31_39,
						conga_assign_31_40,
						conga_assign_31_43,
						conga_assign_31_48,
						conga_assign_31_49,
						conga_assign_31_53,
						conga_assign_31_61,
						conga_assign_31_64,
						conga_assign_31_85,
						conga_assign_31_86,
						conga_assign_31_89,
						conga_assign_31_92,
						conga_assign_31_104,
						conga_assign_31_117,
						conga_assign_31_127,
						conga_assign_31_129,
						conga_assign_31_131,
						conga_assign_31_133,
						conga_assign_31_136,
						conga_assign_31_139,
						conga_assign_31_140,
						conga_assign_31_143,
						conga_assign_31_145,
						conga_assign_31_147,
						conga_assign_31_151,
						conga_assign_31_157,
						conga_assign_31_159,
						conga_assign_31_162,
						conga_assign_31_163,
						conga_assign_31_166,
						conga_assign_31_167,
			
						conga_direct_assign_31,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	