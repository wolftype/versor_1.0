
#ifndef conga_assign_Mnk_Dll_con_h_included
#define conga_assign_Mnk_Dll_con_h_included
#include "conga_assign_Mnk_Dll.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mnk_Dll_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mnk_Dll_func[65] = {
						conga_assign_110_8,
						conga_assign_110_10,
						conga_assign_110_11,
						conga_assign_110_12,
						conga_assign_110_19,
						conga_assign_110_20,
						conga_assign_110_21,
						conga_assign_110_30,
						conga_assign_110_32,
						conga_assign_110_34,
						conga_assign_110_35,
						conga_assign_110_37,
						conga_assign_110_38,
						conga_assign_110_40,
						conga_assign_110_43,
						conga_assign_110_48,
						conga_assign_110_49,
						conga_assign_110_50,
						conga_assign_110_53,
						conga_assign_110_61,
						conga_assign_110_63,
						conga_assign_110_64,
						conga_assign_110_66,
						conga_assign_110_68,
						conga_assign_110_69,
						conga_assign_110_74,
						conga_assign_110_75,
						conga_assign_110_77,
						conga_assign_110_78,
						conga_assign_110_81,
						conga_assign_110_82,
						conga_assign_110_85,
						conga_assign_110_89,
						conga_assign_110_91,
						conga_assign_110_92,
						conga_assign_110_98,
						conga_assign_110_101,
						conga_assign_110_104,
						conga_assign_110_107,
						conga_assign_110_110,
						conga_assign_110_113,
						conga_assign_110_115,
						conga_assign_110_117,
						conga_assign_110_119,
						conga_assign_110_122,
						conga_assign_110_125,
						conga_assign_110_127,
						conga_assign_110_129,
						conga_assign_110_131,
						conga_assign_110_133,
						conga_assign_110_136,
						conga_assign_110_139,
						conga_assign_110_140,
						conga_assign_110_143,
						conga_assign_110_145,
						conga_assign_110_151,
						conga_assign_110_154,
						conga_assign_110_156,
						conga_assign_110_157,
						conga_assign_110_159,
						conga_assign_110_162,
						conga_assign_110_163,
						conga_assign_110_166,
						conga_assign_110_167,
			
						conga_direct_assign_110,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	