
#ifndef conga_assign_Sca_con_h_included
#define conga_assign_Sca_con_h_included
#include "conga_assign_Sca.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Sca_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Sca_func[31] = {
						conga_assign_1_1,
						conga_assign_1_29,
						conga_assign_1_30,
						conga_assign_1_31,
						conga_assign_1_32,
						conga_assign_1_33,
						conga_assign_1_34,
						conga_assign_1_35,
						conga_assign_1_36,
						conga_assign_1_37,
						conga_assign_1_38,
						conga_assign_1_39,
						conga_assign_1_40,
						conga_assign_1_49,
						conga_assign_1_61,
						conga_assign_1_64,
						conga_assign_1_85,
						conga_assign_1_89,
						conga_assign_1_92,
						conga_assign_1_104,
						conga_assign_1_117,
						conga_assign_1_127,
						conga_assign_1_133,
						conga_assign_1_136,
						conga_assign_1_143,
						conga_assign_1_147,
						conga_assign_1_157,
						conga_assign_1_159,
						conga_assign_1_162,
						conga_assign_1_167,
			
						conga_direct_assign_1,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	