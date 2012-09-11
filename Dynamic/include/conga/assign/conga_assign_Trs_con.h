
#ifndef conga_assign_Trs_con_h_included
#define conga_assign_Trs_con_h_included
#include "conga_assign_Trs.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trs_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trs_func[56] = {
						conga_assign_30_1,
						conga_assign_30_8,
						conga_assign_30_11,
						conga_assign_30_12,
						conga_assign_30_20,
						conga_assign_30_21,
						conga_assign_30_29,
						conga_assign_30_30,
						conga_assign_30_31,
						conga_assign_30_32,
						conga_assign_30_33,
						conga_assign_30_34,
						conga_assign_30_35,
						conga_assign_30_36,
						conga_assign_30_37,
						conga_assign_30_38,
						conga_assign_30_39,
						conga_assign_30_40,
						conga_assign_30_48,
						conga_assign_30_49,
						conga_assign_30_50,
						conga_assign_30_53,
						conga_assign_30_61,
						conga_assign_30_63,
						conga_assign_30_64,
						conga_assign_30_68,
						conga_assign_30_69,
						conga_assign_30_75,
						conga_assign_30_78,
						conga_assign_30_85,
						conga_assign_30_89,
						conga_assign_30_92,
						conga_assign_30_101,
						conga_assign_30_104,
						conga_assign_30_107,
						conga_assign_30_110,
						conga_assign_30_117,
						conga_assign_30_119,
						conga_assign_30_122,
						conga_assign_30_127,
						conga_assign_30_129,
						conga_assign_30_131,
						conga_assign_30_133,
						conga_assign_30_136,
						conga_assign_30_139,
						conga_assign_30_140,
						conga_assign_30_143,
						conga_assign_30_145,
						conga_assign_30_147,
						conga_assign_30_154,
						conga_assign_30_157,
						conga_assign_30_159,
						conga_assign_30_162,
						conga_assign_30_166,
						conga_assign_30_167,
			
						conga_direct_assign_30,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	