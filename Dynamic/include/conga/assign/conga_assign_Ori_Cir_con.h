
#ifndef conga_assign_Ori_Cir_con_h_included
#define conga_assign_Ori_Cir_con_h_included
#include "conga_assign_Ori_Cir.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Ori_Cir_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Ori_Cir_func[76] = {
						conga_assign_98_8,
						conga_assign_98_10,
						conga_assign_98_11,
						conga_assign_98_15,
						conga_assign_98_17,
						conga_assign_98_19,
						conga_assign_98_21,
						conga_assign_98_24,
						conga_assign_98_27,
						conga_assign_98_29,
						conga_assign_98_32,
						conga_assign_98_33,
						conga_assign_98_34,
						conga_assign_98_35,
						conga_assign_98_36,
						conga_assign_98_38,
						conga_assign_98_39,
						conga_assign_98_40,
						conga_assign_98_43,
						conga_assign_98_48,
						conga_assign_98_49,
						conga_assign_98_51,
						conga_assign_98_53,
						conga_assign_98_61,
						conga_assign_98_63,
						conga_assign_98_64,
						conga_assign_98_66,
						conga_assign_98_68,
						conga_assign_98_69,
						conga_assign_98_74,
						conga_assign_98_75,
						conga_assign_98_77,
						conga_assign_98_78,
						conga_assign_98_81,
						conga_assign_98_82,
						conga_assign_98_85,
						conga_assign_98_86,
						conga_assign_98_89,
						conga_assign_98_91,
						conga_assign_98_92,
						conga_assign_98_95,
						conga_assign_98_98,
						conga_assign_98_101,
						conga_assign_98_104,
						conga_assign_98_106,
						conga_assign_98_107,
						conga_assign_98_109,
						conga_assign_98_110,
						conga_assign_98_113,
						conga_assign_98_115,
						conga_assign_98_116,
						conga_assign_98_117,
						conga_assign_98_119,
						conga_assign_98_122,
						conga_assign_98_125,
						conga_assign_98_127,
						conga_assign_98_129,
						conga_assign_98_131,
						conga_assign_98_133,
						conga_assign_98_136,
						conga_assign_98_139,
						conga_assign_98_140,
						conga_assign_98_143,
						conga_assign_98_145,
						conga_assign_98_147,
						conga_assign_98_149,
						conga_assign_98_151,
						conga_assign_98_154,
						conga_assign_98_156,
						conga_assign_98_157,
						conga_assign_98_159,
						conga_assign_98_162,
						conga_assign_98_163,
						conga_assign_98_166,
						conga_assign_98_167,
			
						conga_direct_assign_98,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	