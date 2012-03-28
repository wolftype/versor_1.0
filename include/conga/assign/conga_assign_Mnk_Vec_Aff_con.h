
#ifndef conga_assign_Mnk_Vec_Aff_con_h_included
#define conga_assign_Mnk_Vec_Aff_con_h_included
#include "conga_assign_Mnk_Vec_Aff.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mnk_Vec_Aff_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mnk_Vec_Aff_func[69] = {
						conga_assign_163_4,
						conga_assign_163_8,
						conga_assign_163_10,
						conga_assign_163_11,
						conga_assign_163_15,
						conga_assign_163_19,
						conga_assign_163_20,
						conga_assign_163_27,
						conga_assign_163_31,
						conga_assign_163_33,
						conga_assign_163_34,
						conga_assign_163_35,
						conga_assign_163_36,
						conga_assign_163_37,
						conga_assign_163_38,
						conga_assign_163_39,
						conga_assign_163_40,
						conga_assign_163_43,
						conga_assign_163_48,
						conga_assign_163_49,
						conga_assign_163_51,
						conga_assign_163_53,
						conga_assign_163_61,
						conga_assign_163_63,
						conga_assign_163_64,
						conga_assign_163_66,
						conga_assign_163_68,
						conga_assign_163_74,
						conga_assign_163_75,
						conga_assign_163_77,
						conga_assign_163_78,
						conga_assign_163_81,
						conga_assign_163_82,
						conga_assign_163_85,
						conga_assign_163_86,
						conga_assign_163_89,
						conga_assign_163_91,
						conga_assign_163_92,
						conga_assign_163_95,
						conga_assign_163_98,
						conga_assign_163_101,
						conga_assign_163_104,
						conga_assign_163_107,
						conga_assign_163_110,
						conga_assign_163_113,
						conga_assign_163_115,
						conga_assign_163_117,
						conga_assign_163_119,
						conga_assign_163_122,
						conga_assign_163_125,
						conga_assign_163_127,
						conga_assign_163_129,
						conga_assign_163_131,
						conga_assign_163_133,
						conga_assign_163_136,
						conga_assign_163_139,
						conga_assign_163_140,
						conga_assign_163_145,
						conga_assign_163_147,
						conga_assign_163_151,
						conga_assign_163_154,
						conga_assign_163_156,
						conga_assign_163_157,
						conga_assign_163_159,
						conga_assign_163_162,
						conga_assign_163_163,
						conga_assign_163_166,
						conga_assign_163_167,
			
						conga_direct_assign_163,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	