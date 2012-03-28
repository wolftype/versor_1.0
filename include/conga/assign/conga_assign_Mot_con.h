
#ifndef conga_assign_Mot_con_h_included
#define conga_assign_Mot_con_h_included
#include "conga_assign_Mot.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mot_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mot_func[73] = {
						conga_assign_32_1,
						conga_assign_32_8,
						conga_assign_32_10,
						conga_assign_32_11,
						conga_assign_32_12,
						conga_assign_32_14,
						conga_assign_32_19,
						conga_assign_32_20,
						conga_assign_32_21,
						conga_assign_32_24,
						conga_assign_32_27,
						conga_assign_32_29,
						conga_assign_32_30,
						conga_assign_32_31,
						conga_assign_32_32,
						conga_assign_32_33,
						conga_assign_32_34,
						conga_assign_32_35,
						conga_assign_32_36,
						conga_assign_32_37,
						conga_assign_32_38,
						conga_assign_32_39,
						conga_assign_32_40,
						conga_assign_32_48,
						conga_assign_32_49,
						conga_assign_32_50,
						conga_assign_32_53,
						conga_assign_32_61,
						conga_assign_32_63,
						conga_assign_32_64,
						conga_assign_32_66,
						conga_assign_32_68,
						conga_assign_32_69,
						conga_assign_32_74,
						conga_assign_32_75,
						conga_assign_32_77,
						conga_assign_32_78,
						conga_assign_32_81,
						conga_assign_32_82,
						conga_assign_32_85,
						conga_assign_32_89,
						conga_assign_32_91,
						conga_assign_32_92,
						conga_assign_32_95,
						conga_assign_32_98,
						conga_assign_32_101,
						conga_assign_32_104,
						conga_assign_32_106,
						conga_assign_32_107,
						conga_assign_32_109,
						conga_assign_32_110,
						conga_assign_32_116,
						conga_assign_32_117,
						conga_assign_32_119,
						conga_assign_32_122,
						conga_assign_32_127,
						conga_assign_32_129,
						conga_assign_32_131,
						conga_assign_32_133,
						conga_assign_32_136,
						conga_assign_32_139,
						conga_assign_32_140,
						conga_assign_32_143,
						conga_assign_32_145,
						conga_assign_32_147,
						conga_assign_32_149,
						conga_assign_32_154,
						conga_assign_32_157,
						conga_assign_32_159,
						conga_assign_32_162,
						conga_assign_32_166,
						conga_assign_32_167,
			
						conga_direct_assign_32,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	