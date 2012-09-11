
#ifndef conga_assign_Pss_Aff_con_h_included
#define conga_assign_Pss_Aff_con_h_included
#include "conga_assign_Pss_Aff.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Pss_Aff_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Pss_Aff_func[56] = {
						conga_assign_125_10,
						conga_assign_125_17,
						conga_assign_125_19,
						conga_assign_125_34,
						conga_assign_125_35,
						conga_assign_125_36,
						conga_assign_125_38,
						conga_assign_125_40,
						conga_assign_125_43,
						conga_assign_125_48,
						conga_assign_125_49,
						conga_assign_125_51,
						conga_assign_125_53,
						conga_assign_125_61,
						conga_assign_125_63,
						conga_assign_125_64,
						conga_assign_125_66,
						conga_assign_125_68,
						conga_assign_125_74,
						conga_assign_125_75,
						conga_assign_125_77,
						conga_assign_125_78,
						conga_assign_125_81,
						conga_assign_125_82,
						conga_assign_125_85,
						conga_assign_125_89,
						conga_assign_125_91,
						conga_assign_125_92,
						conga_assign_125_95,
						conga_assign_125_98,
						conga_assign_125_101,
						conga_assign_125_104,
						conga_assign_125_106,
						conga_assign_125_107,
						conga_assign_125_110,
						conga_assign_125_113,
						conga_assign_125_115,
						conga_assign_125_116,
						conga_assign_125_119,
						conga_assign_125_125,
						conga_assign_125_129,
						conga_assign_125_131,
						conga_assign_125_136,
						conga_assign_125_139,
						conga_assign_125_140,
						conga_assign_125_145,
						conga_assign_125_149,
						conga_assign_125_151,
						conga_assign_125_154,
						conga_assign_125_156,
						conga_assign_125_157,
						conga_assign_125_159,
						conga_assign_125_162,
						conga_assign_125_163,
						conga_assign_125_167,
			
						conga_direct_assign_125,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	