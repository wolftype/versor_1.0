
#ifndef conga_assign_Pln_con_h_included
#define conga_assign_Pln_con_h_included
#include "conga_assign_Pln.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Pln_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Pln_func[56] = {
						conga_assign_19_10,
						conga_assign_19_14,
						conga_assign_19_19,
						conga_assign_19_32,
						conga_assign_19_34,
						conga_assign_19_35,
						conga_assign_19_38,
						conga_assign_19_40,
						conga_assign_19_43,
						conga_assign_19_48,
						conga_assign_19_49,
						conga_assign_19_50,
						conga_assign_19_53,
						conga_assign_19_61,
						conga_assign_19_63,
						conga_assign_19_64,
						conga_assign_19_66,
						conga_assign_19_68,
						conga_assign_19_69,
						conga_assign_19_74,
						conga_assign_19_75,
						conga_assign_19_77,
						conga_assign_19_78,
						conga_assign_19_81,
						conga_assign_19_82,
						conga_assign_19_85,
						conga_assign_19_89,
						conga_assign_19_91,
						conga_assign_19_92,
						conga_assign_19_98,
						conga_assign_19_101,
						conga_assign_19_104,
						conga_assign_19_106,
						conga_assign_19_107,
						conga_assign_19_109,
						conga_assign_19_110,
						conga_assign_19_113,
						conga_assign_19_115,
						conga_assign_19_116,
						conga_assign_19_119,
						conga_assign_19_125,
						conga_assign_19_129,
						conga_assign_19_131,
						conga_assign_19_136,
						conga_assign_19_139,
						conga_assign_19_140,
						conga_assign_19_145,
						conga_assign_19_151,
						conga_assign_19_154,
						conga_assign_19_156,
						conga_assign_19_157,
						conga_assign_19_159,
						conga_assign_19_162,
						conga_assign_19_163,
						conga_assign_19_167,
			
						conga_direct_assign_19,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	