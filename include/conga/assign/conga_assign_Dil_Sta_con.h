
#ifndef conga_assign_Dil_Sta_con_h_included
#define conga_assign_Dil_Sta_con_h_included
#include "conga_assign_Dil_Sta.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dil_Sta_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dil_Sta_func[79] = {
						conga_assign_75_8,
						conga_assign_75_10,
						conga_assign_75_11,
						conga_assign_75_12,
						conga_assign_75_15,
						conga_assign_75_19,
						conga_assign_75_20,
						conga_assign_75_21,
						conga_assign_75_24,
						conga_assign_75_27,
						conga_assign_75_29,
						conga_assign_75_30,
						conga_assign_75_32,
						conga_assign_75_33,
						conga_assign_75_34,
						conga_assign_75_35,
						conga_assign_75_36,
						conga_assign_75_37,
						conga_assign_75_38,
						conga_assign_75_39,
						conga_assign_75_40,
						conga_assign_75_43,
						conga_assign_75_48,
						conga_assign_75_49,
						conga_assign_75_50,
						conga_assign_75_51,
						conga_assign_75_53,
						conga_assign_75_61,
						conga_assign_75_63,
						conga_assign_75_64,
						conga_assign_75_66,
						conga_assign_75_68,
						conga_assign_75_69,
						conga_assign_75_74,
						conga_assign_75_75,
						conga_assign_75_77,
						conga_assign_75_78,
						conga_assign_75_81,
						conga_assign_75_82,
						conga_assign_75_85,
						conga_assign_75_86,
						conga_assign_75_89,
						conga_assign_75_91,
						conga_assign_75_92,
						conga_assign_75_95,
						conga_assign_75_98,
						conga_assign_75_101,
						conga_assign_75_104,
						conga_assign_75_106,
						conga_assign_75_107,
						conga_assign_75_109,
						conga_assign_75_110,
						conga_assign_75_113,
						conga_assign_75_115,
						conga_assign_75_117,
						conga_assign_75_119,
						conga_assign_75_122,
						conga_assign_75_125,
						conga_assign_75_127,
						conga_assign_75_129,
						conga_assign_75_131,
						conga_assign_75_133,
						conga_assign_75_136,
						conga_assign_75_139,
						conga_assign_75_140,
						conga_assign_75_143,
						conga_assign_75_145,
						conga_assign_75_147,
						conga_assign_75_149,
						conga_assign_75_151,
						conga_assign_75_154,
						conga_assign_75_156,
						conga_assign_75_157,
						conga_assign_75_159,
						conga_assign_75_162,
						conga_assign_75_163,
						conga_assign_75_166,
						conga_assign_75_167,
			
						conga_direct_assign_75,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	