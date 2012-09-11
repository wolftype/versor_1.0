
#ifndef conga_assign_Mtd_con_h_included
#define conga_assign_Mtd_con_h_included
#include "conga_assign_Mtd.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mtd_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mtd_func[82] = {
						conga_assign_34_1,
						conga_assign_34_4,
						conga_assign_34_8,
						conga_assign_34_10,
						conga_assign_34_11,
						conga_assign_34_12,
						conga_assign_34_14,
						conga_assign_34_19,
						conga_assign_34_20,
						conga_assign_34_21,
						conga_assign_34_24,
						conga_assign_34_27,
						conga_assign_34_29,
						conga_assign_34_30,
						conga_assign_34_31,
						conga_assign_34_32,
						conga_assign_34_33,
						conga_assign_34_34,
						conga_assign_34_35,
						conga_assign_34_36,
						conga_assign_34_37,
						conga_assign_34_38,
						conga_assign_34_39,
						conga_assign_34_40,
						conga_assign_34_43,
						conga_assign_34_48,
						conga_assign_34_49,
						conga_assign_34_50,
						conga_assign_34_53,
						conga_assign_34_61,
						conga_assign_34_63,
						conga_assign_34_64,
						conga_assign_34_66,
						conga_assign_34_68,
						conga_assign_34_69,
						conga_assign_34_74,
						conga_assign_34_75,
						conga_assign_34_77,
						conga_assign_34_78,
						conga_assign_34_81,
						conga_assign_34_82,
						conga_assign_34_85,
						conga_assign_34_86,
						conga_assign_34_89,
						conga_assign_34_91,
						conga_assign_34_92,
						conga_assign_34_95,
						conga_assign_34_98,
						conga_assign_34_101,
						conga_assign_34_104,
						conga_assign_34_106,
						conga_assign_34_107,
						conga_assign_34_109,
						conga_assign_34_110,
						conga_assign_34_113,
						conga_assign_34_115,
						conga_assign_34_116,
						conga_assign_34_117,
						conga_assign_34_119,
						conga_assign_34_122,
						conga_assign_34_125,
						conga_assign_34_127,
						conga_assign_34_129,
						conga_assign_34_131,
						conga_assign_34_133,
						conga_assign_34_136,
						conga_assign_34_139,
						conga_assign_34_140,
						conga_assign_34_143,
						conga_assign_34_145,
						conga_assign_34_147,
						conga_assign_34_149,
						conga_assign_34_151,
						conga_assign_34_154,
						conga_assign_34_156,
						conga_assign_34_157,
						conga_assign_34_159,
						conga_assign_34_162,
						conga_assign_34_163,
						conga_assign_34_166,
						conga_assign_34_167,
			
						conga_direct_assign_34,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	