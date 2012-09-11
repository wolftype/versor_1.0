
#ifndef conga_assign_Mot_Trv_con_h_included
#define conga_assign_Mot_Trv_con_h_included
#include "conga_assign_Mot_Trv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mot_Trv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mot_Trv_func[85] = {
						conga_assign_40_1,
						conga_assign_40_4,
						conga_assign_40_8,
						conga_assign_40_10,
						conga_assign_40_11,
						conga_assign_40_12,
						conga_assign_40_14,
						conga_assign_40_15,
						conga_assign_40_17,
						conga_assign_40_19,
						conga_assign_40_20,
						conga_assign_40_21,
						conga_assign_40_24,
						conga_assign_40_27,
						conga_assign_40_29,
						conga_assign_40_30,
						conga_assign_40_31,
						conga_assign_40_32,
						conga_assign_40_33,
						conga_assign_40_34,
						conga_assign_40_35,
						conga_assign_40_36,
						conga_assign_40_37,
						conga_assign_40_38,
						conga_assign_40_39,
						conga_assign_40_40,
						conga_assign_40_43,
						conga_assign_40_48,
						conga_assign_40_49,
						conga_assign_40_50,
						conga_assign_40_51,
						conga_assign_40_53,
						conga_assign_40_61,
						conga_assign_40_63,
						conga_assign_40_64,
						conga_assign_40_66,
						conga_assign_40_68,
						conga_assign_40_69,
						conga_assign_40_74,
						conga_assign_40_75,
						conga_assign_40_77,
						conga_assign_40_78,
						conga_assign_40_81,
						conga_assign_40_82,
						conga_assign_40_85,
						conga_assign_40_86,
						conga_assign_40_89,
						conga_assign_40_91,
						conga_assign_40_92,
						conga_assign_40_95,
						conga_assign_40_98,
						conga_assign_40_101,
						conga_assign_40_104,
						conga_assign_40_106,
						conga_assign_40_107,
						conga_assign_40_109,
						conga_assign_40_110,
						conga_assign_40_113,
						conga_assign_40_115,
						conga_assign_40_116,
						conga_assign_40_117,
						conga_assign_40_119,
						conga_assign_40_122,
						conga_assign_40_125,
						conga_assign_40_127,
						conga_assign_40_129,
						conga_assign_40_131,
						conga_assign_40_133,
						conga_assign_40_136,
						conga_assign_40_139,
						conga_assign_40_140,
						conga_assign_40_143,
						conga_assign_40_145,
						conga_assign_40_147,
						conga_assign_40_149,
						conga_assign_40_151,
						conga_assign_40_154,
						conga_assign_40_156,
						conga_assign_40_157,
						conga_assign_40_159,
						conga_assign_40_162,
						conga_assign_40_163,
						conga_assign_40_166,
						conga_assign_40_167,
			
						conga_direct_assign_40,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	