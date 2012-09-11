
#ifndef conga_assign_Trs_Tnv_con_h_included
#define conga_assign_Trs_Tnv_con_h_included
#include "conga_assign_Trs_Tnv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trs_Tnv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trs_Tnv_func[80] = {
						conga_assign_64_1,
						conga_assign_64_4,
						conga_assign_64_8,
						conga_assign_64_10,
						conga_assign_64_11,
						conga_assign_64_15,
						conga_assign_64_19,
						conga_assign_64_20,
						conga_assign_64_21,
						conga_assign_64_24,
						conga_assign_64_27,
						conga_assign_64_29,
						conga_assign_64_30,
						conga_assign_64_31,
						conga_assign_64_32,
						conga_assign_64_33,
						conga_assign_64_34,
						conga_assign_64_35,
						conga_assign_64_36,
						conga_assign_64_37,
						conga_assign_64_38,
						conga_assign_64_39,
						conga_assign_64_40,
						conga_assign_64_43,
						conga_assign_64_48,
						conga_assign_64_49,
						conga_assign_64_51,
						conga_assign_64_53,
						conga_assign_64_61,
						conga_assign_64_63,
						conga_assign_64_64,
						conga_assign_64_66,
						conga_assign_64_68,
						conga_assign_64_69,
						conga_assign_64_74,
						conga_assign_64_75,
						conga_assign_64_77,
						conga_assign_64_78,
						conga_assign_64_81,
						conga_assign_64_82,
						conga_assign_64_85,
						conga_assign_64_86,
						conga_assign_64_89,
						conga_assign_64_91,
						conga_assign_64_92,
						conga_assign_64_95,
						conga_assign_64_98,
						conga_assign_64_101,
						conga_assign_64_104,
						conga_assign_64_106,
						conga_assign_64_107,
						conga_assign_64_109,
						conga_assign_64_110,
						conga_assign_64_113,
						conga_assign_64_115,
						conga_assign_64_117,
						conga_assign_64_119,
						conga_assign_64_122,
						conga_assign_64_125,
						conga_assign_64_127,
						conga_assign_64_129,
						conga_assign_64_131,
						conga_assign_64_133,
						conga_assign_64_136,
						conga_assign_64_139,
						conga_assign_64_140,
						conga_assign_64_143,
						conga_assign_64_145,
						conga_assign_64_147,
						conga_assign_64_149,
						conga_assign_64_151,
						conga_assign_64_154,
						conga_assign_64_156,
						conga_assign_64_157,
						conga_assign_64_159,
						conga_assign_64_162,
						conga_assign_64_163,
						conga_assign_64_166,
						conga_assign_64_167,
			
						conga_direct_assign_64,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	