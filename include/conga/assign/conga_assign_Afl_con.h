
#ifndef conga_assign_Afl_con_h_included
#define conga_assign_Afl_con_h_included
#include "conga_assign_Afl.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Afl_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Afl_func[65] = {
						conga_assign_27_8,
						conga_assign_27_11,
						conga_assign_27_15,
						conga_assign_27_21,
						conga_assign_27_24,
						conga_assign_27_27,
						conga_assign_27_29,
						conga_assign_27_32,
						conga_assign_27_33,
						conga_assign_27_34,
						conga_assign_27_35,
						conga_assign_27_36,
						conga_assign_27_38,
						conga_assign_27_39,
						conga_assign_27_40,
						conga_assign_27_48,
						conga_assign_27_49,
						conga_assign_27_51,
						conga_assign_27_61,
						conga_assign_27_63,
						conga_assign_27_64,
						conga_assign_27_66,
						conga_assign_27_69,
						conga_assign_27_74,
						conga_assign_27_75,
						conga_assign_27_77,
						conga_assign_27_78,
						conga_assign_27_81,
						conga_assign_27_82,
						conga_assign_27_85,
						conga_assign_27_86,
						conga_assign_27_89,
						conga_assign_27_91,
						conga_assign_27_92,
						conga_assign_27_95,
						conga_assign_27_98,
						conga_assign_27_101,
						conga_assign_27_104,
						conga_assign_27_106,
						conga_assign_27_107,
						conga_assign_27_109,
						conga_assign_27_115,
						conga_assign_27_117,
						conga_assign_27_119,
						conga_assign_27_122,
						conga_assign_27_127,
						conga_assign_27_129,
						conga_assign_27_131,
						conga_assign_27_133,
						conga_assign_27_136,
						conga_assign_27_139,
						conga_assign_27_140,
						conga_assign_27_143,
						conga_assign_27_147,
						conga_assign_27_149,
						conga_assign_27_151,
						conga_assign_27_154,
						conga_assign_27_156,
						conga_assign_27_157,
						conga_assign_27_159,
						conga_assign_27_162,
						conga_assign_27_163,
						conga_assign_27_166,
						conga_assign_27_167,
			
						conga_direct_assign_27,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	