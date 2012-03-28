
#ifndef conga_assign_Mnk_Biv_con_h_included
#define conga_assign_Mnk_Biv_con_h_included
#include "conga_assign_Mnk_Biv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mnk_Biv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mnk_Biv_func[47] = {
						conga_assign_113_10,
						conga_assign_113_19,
						conga_assign_113_34,
						conga_assign_113_35,
						conga_assign_113_38,
						conga_assign_113_40,
						conga_assign_113_43,
						conga_assign_113_48,
						conga_assign_113_53,
						conga_assign_113_61,
						conga_assign_113_63,
						conga_assign_113_64,
						conga_assign_113_66,
						conga_assign_113_68,
						conga_assign_113_74,
						conga_assign_113_75,
						conga_assign_113_77,
						conga_assign_113_78,
						conga_assign_113_81,
						conga_assign_113_82,
						conga_assign_113_85,
						conga_assign_113_89,
						conga_assign_113_91,
						conga_assign_113_92,
						conga_assign_113_98,
						conga_assign_113_101,
						conga_assign_113_104,
						conga_assign_113_107,
						conga_assign_113_110,
						conga_assign_113_113,
						conga_assign_113_115,
						conga_assign_113_119,
						conga_assign_113_125,
						conga_assign_113_129,
						conga_assign_113_131,
						conga_assign_113_136,
						conga_assign_113_139,
						conga_assign_113_140,
						conga_assign_113_145,
						conga_assign_113_151,
						conga_assign_113_156,
						conga_assign_113_157,
						conga_assign_113_159,
						conga_assign_113_162,
						conga_assign_113_163,
						conga_assign_113_167,
			
						conga_direct_assign_113,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	