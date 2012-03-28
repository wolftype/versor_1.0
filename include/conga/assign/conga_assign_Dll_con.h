
#ifndef conga_assign_Dll_con_h_included
#define conga_assign_Dll_con_h_included
#include "conga_assign_Dll.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dll_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dll_func[65] = {
						conga_assign_21_8,
						conga_assign_21_11,
						conga_assign_21_12,
						conga_assign_21_20,
						conga_assign_21_21,
						conga_assign_21_24,
						conga_assign_21_27,
						conga_assign_21_29,
						conga_assign_21_30,
						conga_assign_21_32,
						conga_assign_21_34,
						conga_assign_21_35,
						conga_assign_21_36,
						conga_assign_21_37,
						conga_assign_21_38,
						conga_assign_21_40,
						conga_assign_21_48,
						conga_assign_21_49,
						conga_assign_21_50,
						conga_assign_21_53,
						conga_assign_21_61,
						conga_assign_21_63,
						conga_assign_21_64,
						conga_assign_21_66,
						conga_assign_21_68,
						conga_assign_21_69,
						conga_assign_21_74,
						conga_assign_21_75,
						conga_assign_21_77,
						conga_assign_21_78,
						conga_assign_21_81,
						conga_assign_21_82,
						conga_assign_21_85,
						conga_assign_21_89,
						conga_assign_21_91,
						conga_assign_21_92,
						conga_assign_21_95,
						conga_assign_21_98,
						conga_assign_21_101,
						conga_assign_21_104,
						conga_assign_21_106,
						conga_assign_21_107,
						conga_assign_21_109,
						conga_assign_21_110,
						conga_assign_21_117,
						conga_assign_21_119,
						conga_assign_21_122,
						conga_assign_21_127,
						conga_assign_21_129,
						conga_assign_21_131,
						conga_assign_21_133,
						conga_assign_21_136,
						conga_assign_21_139,
						conga_assign_21_140,
						conga_assign_21_143,
						conga_assign_21_145,
						conga_assign_21_147,
						conga_assign_21_149,
						conga_assign_21_154,
						conga_assign_21_157,
						conga_assign_21_159,
						conga_assign_21_162,
						conga_assign_21_166,
						conga_assign_21_167,
			
						conga_direct_assign_21,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	