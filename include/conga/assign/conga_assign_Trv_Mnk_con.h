
#ifndef conga_assign_Trv_Mnk_con_h_included
#define conga_assign_Trv_Mnk_con_h_included
#include "conga_assign_Trv_Mnk.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trv_Mnk_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trv_Mnk_func[56] = {
						conga_assign_86_4,
						conga_assign_86_8,
						conga_assign_86_11,
						conga_assign_86_15,
						conga_assign_86_20,
						conga_assign_86_27,
						conga_assign_86_31,
						conga_assign_86_33,
						conga_assign_86_34,
						conga_assign_86_35,
						conga_assign_86_36,
						conga_assign_86_37,
						conga_assign_86_38,
						conga_assign_86_39,
						conga_assign_86_40,
						conga_assign_86_43,
						conga_assign_86_48,
						conga_assign_86_49,
						conga_assign_86_51,
						conga_assign_86_53,
						conga_assign_86_61,
						conga_assign_86_64,
						conga_assign_86_75,
						conga_assign_86_82,
						conga_assign_86_85,
						conga_assign_86_86,
						conga_assign_86_89,
						conga_assign_86_91,
						conga_assign_86_92,
						conga_assign_86_95,
						conga_assign_86_98,
						conga_assign_86_104,
						conga_assign_86_107,
						conga_assign_86_115,
						conga_assign_86_117,
						conga_assign_86_119,
						conga_assign_86_122,
						conga_assign_86_127,
						conga_assign_86_129,
						conga_assign_86_131,
						conga_assign_86_133,
						conga_assign_86_136,
						conga_assign_86_139,
						conga_assign_86_140,
						conga_assign_86_145,
						conga_assign_86_147,
						conga_assign_86_151,
						conga_assign_86_154,
						conga_assign_86_156,
						conga_assign_86_157,
						conga_assign_86_159,
						conga_assign_86_162,
						conga_assign_86_163,
						conga_assign_86_166,
						conga_assign_86_167,
			
						conga_direct_assign_86,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	