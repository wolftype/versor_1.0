
#ifndef conga_assign_Tnv_con_h_included
#define conga_assign_Tnv_con_h_included
#include "conga_assign_Tnv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Tnv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Tnv_func[46] = {
						conga_assign_15_8,
						conga_assign_15_11,
						conga_assign_15_15,
						conga_assign_15_27,
						conga_assign_15_33,
						conga_assign_15_36,
						conga_assign_15_38,
						conga_assign_15_39,
						conga_assign_15_40,
						conga_assign_15_48,
						conga_assign_15_49,
						conga_assign_15_51,
						conga_assign_15_61,
						conga_assign_15_64,
						conga_assign_15_75,
						conga_assign_15_82,
						conga_assign_15_85,
						conga_assign_15_86,
						conga_assign_15_89,
						conga_assign_15_91,
						conga_assign_15_95,
						conga_assign_15_98,
						conga_assign_15_104,
						conga_assign_15_107,
						conga_assign_15_115,
						conga_assign_15_117,
						conga_assign_15_119,
						conga_assign_15_122,
						conga_assign_15_127,
						conga_assign_15_129,
						conga_assign_15_131,
						conga_assign_15_133,
						conga_assign_15_136,
						conga_assign_15_139,
						conga_assign_15_140,
						conga_assign_15_147,
						conga_assign_15_151,
						conga_assign_15_154,
						conga_assign_15_156,
						conga_assign_15_157,
						conga_assign_15_159,
						conga_assign_15_162,
						conga_assign_15_163,
						conga_assign_15_166,
						conga_assign_15_167,
			
						conga_direct_assign_15,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	