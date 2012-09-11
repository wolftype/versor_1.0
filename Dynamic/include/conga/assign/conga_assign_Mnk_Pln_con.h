
#ifndef conga_assign_Mnk_Pln_con_h_included
#define conga_assign_Mnk_Pln_con_h_included
#include "conga_assign_Mnk_Pln.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mnk_Pln_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mnk_Pln_func[56] = {
						conga_assign_109_8,
						conga_assign_109_10,
						conga_assign_109_11,
						conga_assign_109_14,
						conga_assign_109_19,
						conga_assign_109_21,
						conga_assign_109_24,
						conga_assign_109_27,
						conga_assign_109_29,
						conga_assign_109_32,
						conga_assign_109_34,
						conga_assign_109_35,
						conga_assign_109_36,
						conga_assign_109_38,
						conga_assign_109_40,
						conga_assign_109_48,
						conga_assign_109_49,
						conga_assign_109_50,
						conga_assign_109_53,
						conga_assign_109_61,
						conga_assign_109_63,
						conga_assign_109_64,
						conga_assign_109_66,
						conga_assign_109_68,
						conga_assign_109_69,
						conga_assign_109_74,
						conga_assign_109_75,
						conga_assign_109_77,
						conga_assign_109_78,
						conga_assign_109_81,
						conga_assign_109_82,
						conga_assign_109_85,
						conga_assign_109_89,
						conga_assign_109_91,
						conga_assign_109_92,
						conga_assign_109_95,
						conga_assign_109_98,
						conga_assign_109_101,
						conga_assign_109_106,
						conga_assign_109_109,
						conga_assign_109_116,
						conga_assign_109_119,
						conga_assign_109_127,
						conga_assign_109_129,
						conga_assign_109_131,
						conga_assign_109_133,
						conga_assign_109_136,
						conga_assign_109_140,
						conga_assign_109_143,
						conga_assign_109_147,
						conga_assign_109_149,
						conga_assign_109_154,
						conga_assign_109_159,
						conga_assign_109_162,
						conga_assign_109_167,
			
						conga_direct_assign_109,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	