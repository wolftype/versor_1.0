
#ifndef conga_assign_Sta_con_h_included
#define conga_assign_Sta_con_h_included
#include "conga_assign_Sta.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Sta_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Sta_func[74] = {
						conga_assign_11_8,
						conga_assign_11_11,
						conga_assign_11_12,
						conga_assign_11_15,
						conga_assign_11_20,
						conga_assign_11_21,
						conga_assign_11_24,
						conga_assign_11_27,
						conga_assign_11_29,
						conga_assign_11_30,
						conga_assign_11_32,
						conga_assign_11_33,
						conga_assign_11_34,
						conga_assign_11_35,
						conga_assign_11_36,
						conga_assign_11_37,
						conga_assign_11_38,
						conga_assign_11_39,
						conga_assign_11_40,
						conga_assign_11_48,
						conga_assign_11_49,
						conga_assign_11_50,
						conga_assign_11_51,
						conga_assign_11_53,
						conga_assign_11_61,
						conga_assign_11_63,
						conga_assign_11_64,
						conga_assign_11_66,
						conga_assign_11_68,
						conga_assign_11_69,
						conga_assign_11_74,
						conga_assign_11_75,
						conga_assign_11_77,
						conga_assign_11_78,
						conga_assign_11_81,
						conga_assign_11_82,
						conga_assign_11_85,
						conga_assign_11_86,
						conga_assign_11_89,
						conga_assign_11_91,
						conga_assign_11_92,
						conga_assign_11_95,
						conga_assign_11_98,
						conga_assign_11_101,
						conga_assign_11_104,
						conga_assign_11_106,
						conga_assign_11_107,
						conga_assign_11_109,
						conga_assign_11_110,
						conga_assign_11_115,
						conga_assign_11_117,
						conga_assign_11_119,
						conga_assign_11_122,
						conga_assign_11_127,
						conga_assign_11_129,
						conga_assign_11_131,
						conga_assign_11_133,
						conga_assign_11_136,
						conga_assign_11_139,
						conga_assign_11_140,
						conga_assign_11_143,
						conga_assign_11_145,
						conga_assign_11_147,
						conga_assign_11_149,
						conga_assign_11_151,
						conga_assign_11_154,
						conga_assign_11_156,
						conga_assign_11_157,
						conga_assign_11_159,
						conga_assign_11_162,
						conga_assign_11_163,
						conga_assign_11_166,
						conga_assign_11_167,
			
						conga_direct_assign_11,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	