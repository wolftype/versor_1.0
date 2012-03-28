
#ifndef conga_assign_Dil_Trv_con_h_included
#define conga_assign_Dil_Trv_con_h_included
#include "conga_assign_Dil_Trv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dil_Trv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dil_Trv_func[61] = {
						conga_assign_39_1,
						conga_assign_39_4,
						conga_assign_39_8,
						conga_assign_39_11,
						conga_assign_39_15,
						conga_assign_39_20,
						conga_assign_39_27,
						conga_assign_39_29,
						conga_assign_39_30,
						conga_assign_39_31,
						conga_assign_39_32,
						conga_assign_39_33,
						conga_assign_39_34,
						conga_assign_39_35,
						conga_assign_39_36,
						conga_assign_39_37,
						conga_assign_39_38,
						conga_assign_39_39,
						conga_assign_39_40,
						conga_assign_39_43,
						conga_assign_39_48,
						conga_assign_39_49,
						conga_assign_39_51,
						conga_assign_39_53,
						conga_assign_39_61,
						conga_assign_39_64,
						conga_assign_39_75,
						conga_assign_39_82,
						conga_assign_39_85,
						conga_assign_39_86,
						conga_assign_39_89,
						conga_assign_39_91,
						conga_assign_39_92,
						conga_assign_39_95,
						conga_assign_39_98,
						conga_assign_39_104,
						conga_assign_39_107,
						conga_assign_39_115,
						conga_assign_39_117,
						conga_assign_39_119,
						conga_assign_39_122,
						conga_assign_39_127,
						conga_assign_39_129,
						conga_assign_39_131,
						conga_assign_39_133,
						conga_assign_39_136,
						conga_assign_39_139,
						conga_assign_39_140,
						conga_assign_39_143,
						conga_assign_39_145,
						conga_assign_39_147,
						conga_assign_39_151,
						conga_assign_39_154,
						conga_assign_39_156,
						conga_assign_39_157,
						conga_assign_39_159,
						conga_assign_39_162,
						conga_assign_39_163,
						conga_assign_39_166,
						conga_assign_39_167,
			
						conga_direct_assign_39,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	