
#ifndef conga_assign_Dil_Biv_con_h_included
#define conga_assign_Dil_Biv_con_h_included
#include "conga_assign_Dil_Biv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Dil_Biv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Dil_Biv_func[65] = {
						conga_assign_81_8,
						conga_assign_81_10,
						conga_assign_81_11,
						conga_assign_81_19,
						conga_assign_81_21,
						conga_assign_81_24,
						conga_assign_81_27,
						conga_assign_81_29,
						conga_assign_81_32,
						conga_assign_81_34,
						conga_assign_81_35,
						conga_assign_81_36,
						conga_assign_81_38,
						conga_assign_81_40,
						conga_assign_81_43,
						conga_assign_81_48,
						conga_assign_81_49,
						conga_assign_81_53,
						conga_assign_81_61,
						conga_assign_81_63,
						conga_assign_81_64,
						conga_assign_81_66,
						conga_assign_81_68,
						conga_assign_81_69,
						conga_assign_81_74,
						conga_assign_81_75,
						conga_assign_81_77,
						conga_assign_81_78,
						conga_assign_81_81,
						conga_assign_81_82,
						conga_assign_81_85,
						conga_assign_81_89,
						conga_assign_81_91,
						conga_assign_81_92,
						conga_assign_81_95,
						conga_assign_81_98,
						conga_assign_81_101,
						conga_assign_81_104,
						conga_assign_81_106,
						conga_assign_81_107,
						conga_assign_81_109,
						conga_assign_81_110,
						conga_assign_81_113,
						conga_assign_81_115,
						conga_assign_81_119,
						conga_assign_81_125,
						conga_assign_81_127,
						conga_assign_81_129,
						conga_assign_81_131,
						conga_assign_81_133,
						conga_assign_81_136,
						conga_assign_81_139,
						conga_assign_81_140,
						conga_assign_81_143,
						conga_assign_81_145,
						conga_assign_81_147,
						conga_assign_81_149,
						conga_assign_81_151,
						conga_assign_81_156,
						conga_assign_81_157,
						conga_assign_81_159,
						conga_assign_81_162,
						conga_assign_81_163,
						conga_assign_81_167,
			
						conga_direct_assign_81,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	