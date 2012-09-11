
#ifndef conga_assign_Dil_Pln_con_h_included
#define conga_assign_Dil_Pln_con_h_included
#include "conga_assign_Dil_Pln.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dil_Pln_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dil_Pln_func[69] = {
						conga_assign_77_8,
						conga_assign_77_10,
						conga_assign_77_11,
						conga_assign_77_14,
						conga_assign_77_19,
						conga_assign_77_21,
						conga_assign_77_24,
						conga_assign_77_27,
						conga_assign_77_29,
						conga_assign_77_32,
						conga_assign_77_34,
						conga_assign_77_35,
						conga_assign_77_36,
						conga_assign_77_38,
						conga_assign_77_40,
						conga_assign_77_43,
						conga_assign_77_48,
						conga_assign_77_49,
						conga_assign_77_50,
						conga_assign_77_53,
						conga_assign_77_61,
						conga_assign_77_63,
						conga_assign_77_64,
						conga_assign_77_66,
						conga_assign_77_68,
						conga_assign_77_69,
						conga_assign_77_74,
						conga_assign_77_75,
						conga_assign_77_77,
						conga_assign_77_78,
						conga_assign_77_81,
						conga_assign_77_82,
						conga_assign_77_85,
						conga_assign_77_89,
						conga_assign_77_91,
						conga_assign_77_92,
						conga_assign_77_95,
						conga_assign_77_98,
						conga_assign_77_101,
						conga_assign_77_104,
						conga_assign_77_106,
						conga_assign_77_107,
						conga_assign_77_109,
						conga_assign_77_110,
						conga_assign_77_113,
						conga_assign_77_115,
						conga_assign_77_116,
						conga_assign_77_119,
						conga_assign_77_125,
						conga_assign_77_127,
						conga_assign_77_129,
						conga_assign_77_131,
						conga_assign_77_133,
						conga_assign_77_136,
						conga_assign_77_139,
						conga_assign_77_140,
						conga_assign_77_143,
						conga_assign_77_145,
						conga_assign_77_147,
						conga_assign_77_149,
						conga_assign_77_151,
						conga_assign_77_154,
						conga_assign_77_156,
						conga_assign_77_157,
						conga_assign_77_159,
						conga_assign_77_162,
						conga_assign_77_163,
						conga_assign_77_167,
			
						conga_direct_assign_77,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	