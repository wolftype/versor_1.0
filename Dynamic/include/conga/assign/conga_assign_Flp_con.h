
#ifndef conga_assign_Flp_con_h_included
#define conga_assign_Flp_con_h_included
#include "conga_assign_Flp.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Flp_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Flp_func[56] = {
						conga_assign_20_4,
						conga_assign_20_8,
						conga_assign_20_11,
						conga_assign_20_12,
						conga_assign_20_20,
						conga_assign_20_21,
						conga_assign_20_30,
						conga_assign_20_31,
						conga_assign_20_32,
						conga_assign_20_34,
						conga_assign_20_35,
						conga_assign_20_37,
						conga_assign_20_38,
						conga_assign_20_39,
						conga_assign_20_40,
						conga_assign_20_43,
						conga_assign_20_48,
						conga_assign_20_49,
						conga_assign_20_50,
						conga_assign_20_53,
						conga_assign_20_61,
						conga_assign_20_63,
						conga_assign_20_64,
						conga_assign_20_68,
						conga_assign_20_69,
						conga_assign_20_75,
						conga_assign_20_78,
						conga_assign_20_85,
						conga_assign_20_86,
						conga_assign_20_89,
						conga_assign_20_92,
						conga_assign_20_101,
						conga_assign_20_104,
						conga_assign_20_107,
						conga_assign_20_110,
						conga_assign_20_117,
						conga_assign_20_119,
						conga_assign_20_122,
						conga_assign_20_127,
						conga_assign_20_129,
						conga_assign_20_131,
						conga_assign_20_133,
						conga_assign_20_136,
						conga_assign_20_139,
						conga_assign_20_140,
						conga_assign_20_143,
						conga_assign_20_145,
						conga_assign_20_151,
						conga_assign_20_154,
						conga_assign_20_157,
						conga_assign_20_159,
						conga_assign_20_162,
						conga_assign_20_163,
						conga_assign_20_166,
						conga_assign_20_167,
			
						conga_direct_assign_20,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	