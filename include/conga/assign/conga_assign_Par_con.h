
#ifndef conga_assign_Par_con_h_included
#define conga_assign_Par_con_h_included
#include "conga_assign_Par.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Par_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Par_func[77] = {
						conga_assign_8_4,
						conga_assign_8_8,
						conga_assign_8_11,
						conga_assign_8_12,
						conga_assign_8_15,
						conga_assign_8_20,
						conga_assign_8_21,
						conga_assign_8_24,
						conga_assign_8_27,
						conga_assign_8_29,
						conga_assign_8_30,
						conga_assign_8_31,
						conga_assign_8_32,
						conga_assign_8_33,
						conga_assign_8_34,
						conga_assign_8_35,
						conga_assign_8_36,
						conga_assign_8_37,
						conga_assign_8_38,
						conga_assign_8_39,
						conga_assign_8_40,
						conga_assign_8_43,
						conga_assign_8_48,
						conga_assign_8_49,
						conga_assign_8_50,
						conga_assign_8_51,
						conga_assign_8_53,
						conga_assign_8_61,
						conga_assign_8_63,
						conga_assign_8_64,
						conga_assign_8_66,
						conga_assign_8_68,
						conga_assign_8_69,
						conga_assign_8_74,
						conga_assign_8_75,
						conga_assign_8_77,
						conga_assign_8_78,
						conga_assign_8_81,
						conga_assign_8_82,
						conga_assign_8_85,
						conga_assign_8_86,
						conga_assign_8_89,
						conga_assign_8_91,
						conga_assign_8_92,
						conga_assign_8_95,
						conga_assign_8_98,
						conga_assign_8_101,
						conga_assign_8_104,
						conga_assign_8_106,
						conga_assign_8_107,
						conga_assign_8_109,
						conga_assign_8_110,
						conga_assign_8_115,
						conga_assign_8_117,
						conga_assign_8_119,
						conga_assign_8_122,
						conga_assign_8_127,
						conga_assign_8_129,
						conga_assign_8_131,
						conga_assign_8_133,
						conga_assign_8_136,
						conga_assign_8_139,
						conga_assign_8_140,
						conga_assign_8_143,
						conga_assign_8_145,
						conga_assign_8_147,
						conga_assign_8_149,
						conga_assign_8_151,
						conga_assign_8_154,
						conga_assign_8_156,
						conga_assign_8_157,
						conga_assign_8_159,
						conga_assign_8_162,
						conga_assign_8_163,
						conga_assign_8_166,
						conga_assign_8_167,
			
						conga_direct_assign_8,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	