
#ifndef conga_assign_Trs_Dil_con_h_included
#define conga_assign_Trs_Dil_con_h_included
#include "conga_assign_Trs_Dil.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trs_Dil_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trs_Dil_func[61] = {
						conga_assign_37_1,
						conga_assign_37_4,
						conga_assign_37_8,
						conga_assign_37_11,
						conga_assign_37_12,
						conga_assign_37_20,
						conga_assign_37_21,
						conga_assign_37_29,
						conga_assign_37_30,
						conga_assign_37_31,
						conga_assign_37_32,
						conga_assign_37_33,
						conga_assign_37_34,
						conga_assign_37_35,
						conga_assign_37_36,
						conga_assign_37_37,
						conga_assign_37_38,
						conga_assign_37_39,
						conga_assign_37_40,
						conga_assign_37_43,
						conga_assign_37_48,
						conga_assign_37_49,
						conga_assign_37_50,
						conga_assign_37_53,
						conga_assign_37_61,
						conga_assign_37_63,
						conga_assign_37_64,
						conga_assign_37_68,
						conga_assign_37_69,
						conga_assign_37_75,
						conga_assign_37_78,
						conga_assign_37_85,
						conga_assign_37_86,
						conga_assign_37_89,
						conga_assign_37_92,
						conga_assign_37_101,
						conga_assign_37_104,
						conga_assign_37_107,
						conga_assign_37_110,
						conga_assign_37_117,
						conga_assign_37_119,
						conga_assign_37_122,
						conga_assign_37_127,
						conga_assign_37_129,
						conga_assign_37_131,
						conga_assign_37_133,
						conga_assign_37_136,
						conga_assign_37_139,
						conga_assign_37_140,
						conga_assign_37_143,
						conga_assign_37_145,
						conga_assign_37_147,
						conga_assign_37_151,
						conga_assign_37_154,
						conga_assign_37_157,
						conga_assign_37_159,
						conga_assign_37_162,
						conga_assign_37_163,
						conga_assign_37_166,
						conga_assign_37_167,
			
						conga_direct_assign_37,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	