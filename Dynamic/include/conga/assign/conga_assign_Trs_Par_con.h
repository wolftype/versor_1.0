
#ifndef conga_assign_Trs_Par_con_h_included
#define conga_assign_Trs_Par_con_h_included
#include "conga_assign_Trs_Par.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trs_Par_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trs_Par_func[84] = {
						conga_assign_61_1,
						conga_assign_61_4,
						conga_assign_61_8,
						conga_assign_61_10,
						conga_assign_61_11,
						conga_assign_61_12,
						conga_assign_61_14,
						conga_assign_61_15,
						conga_assign_61_19,
						conga_assign_61_20,
						conga_assign_61_21,
						conga_assign_61_24,
						conga_assign_61_27,
						conga_assign_61_29,
						conga_assign_61_30,
						conga_assign_61_31,
						conga_assign_61_32,
						conga_assign_61_33,
						conga_assign_61_34,
						conga_assign_61_35,
						conga_assign_61_36,
						conga_assign_61_37,
						conga_assign_61_38,
						conga_assign_61_39,
						conga_assign_61_40,
						conga_assign_61_43,
						conga_assign_61_48,
						conga_assign_61_49,
						conga_assign_61_50,
						conga_assign_61_51,
						conga_assign_61_53,
						conga_assign_61_61,
						conga_assign_61_63,
						conga_assign_61_64,
						conga_assign_61_66,
						conga_assign_61_68,
						conga_assign_61_69,
						conga_assign_61_74,
						conga_assign_61_75,
						conga_assign_61_77,
						conga_assign_61_78,
						conga_assign_61_81,
						conga_assign_61_82,
						conga_assign_61_85,
						conga_assign_61_86,
						conga_assign_61_89,
						conga_assign_61_91,
						conga_assign_61_92,
						conga_assign_61_95,
						conga_assign_61_98,
						conga_assign_61_101,
						conga_assign_61_104,
						conga_assign_61_106,
						conga_assign_61_107,
						conga_assign_61_109,
						conga_assign_61_110,
						conga_assign_61_113,
						conga_assign_61_115,
						conga_assign_61_116,
						conga_assign_61_117,
						conga_assign_61_119,
						conga_assign_61_122,
						conga_assign_61_125,
						conga_assign_61_127,
						conga_assign_61_129,
						conga_assign_61_131,
						conga_assign_61_133,
						conga_assign_61_136,
						conga_assign_61_139,
						conga_assign_61_140,
						conga_assign_61_143,
						conga_assign_61_145,
						conga_assign_61_147,
						conga_assign_61_149,
						conga_assign_61_151,
						conga_assign_61_154,
						conga_assign_61_156,
						conga_assign_61_157,
						conga_assign_61_159,
						conga_assign_61_162,
						conga_assign_61_163,
						conga_assign_61_166,
						conga_assign_61_167,
			
						conga_direct_assign_61,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	