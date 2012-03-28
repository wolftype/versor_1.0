
#ifndef conga_assign_Trv_con_h_included
#define conga_assign_Trv_con_h_included
#include "conga_assign_Trv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trv_func[56] = {
						conga_assign_33_1,
						conga_assign_33_8,
						conga_assign_33_11,
						conga_assign_33_15,
						conga_assign_33_27,
						conga_assign_33_29,
						conga_assign_33_30,
						conga_assign_33_31,
						conga_assign_33_32,
						conga_assign_33_33,
						conga_assign_33_34,
						conga_assign_33_35,
						conga_assign_33_36,
						conga_assign_33_37,
						conga_assign_33_38,
						conga_assign_33_39,
						conga_assign_33_40,
						conga_assign_33_48,
						conga_assign_33_49,
						conga_assign_33_51,
						conga_assign_33_61,
						conga_assign_33_64,
						conga_assign_33_75,
						conga_assign_33_82,
						conga_assign_33_85,
						conga_assign_33_86,
						conga_assign_33_89,
						conga_assign_33_91,
						conga_assign_33_92,
						conga_assign_33_95,
						conga_assign_33_98,
						conga_assign_33_104,
						conga_assign_33_107,
						conga_assign_33_115,
						conga_assign_33_117,
						conga_assign_33_119,
						conga_assign_33_122,
						conga_assign_33_127,
						conga_assign_33_129,
						conga_assign_33_131,
						conga_assign_33_133,
						conga_assign_33_136,
						conga_assign_33_139,
						conga_assign_33_140,
						conga_assign_33_143,
						conga_assign_33_147,
						conga_assign_33_151,
						conga_assign_33_154,
						conga_assign_33_156,
						conga_assign_33_157,
						conga_assign_33_159,
						conga_assign_33_162,
						conga_assign_33_163,
						conga_assign_33_166,
						conga_assign_33_167,
			
						conga_direct_assign_33,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	