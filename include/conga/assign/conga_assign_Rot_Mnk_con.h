
#ifndef conga_assign_Rot_Mnk_con_h_included
#define conga_assign_Rot_Mnk_con_h_included
#include "conga_assign_Rot_Mnk.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Mnk_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Mnk_func[57] = {
						conga_assign_43_4,
						conga_assign_43_8,
						conga_assign_43_10,
						conga_assign_43_19,
						conga_assign_43_20,
						conga_assign_43_31,
						conga_assign_43_34,
						conga_assign_43_35,
						conga_assign_43_37,
						conga_assign_43_38,
						conga_assign_43_39,
						conga_assign_43_40,
						conga_assign_43_43,
						conga_assign_43_48,
						conga_assign_43_53,
						conga_assign_43_61,
						conga_assign_43_63,
						conga_assign_43_64,
						conga_assign_43_66,
						conga_assign_43_68,
						conga_assign_43_74,
						conga_assign_43_75,
						conga_assign_43_77,
						conga_assign_43_78,
						conga_assign_43_81,
						conga_assign_43_82,
						conga_assign_43_85,
						conga_assign_43_86,
						conga_assign_43_89,
						conga_assign_43_91,
						conga_assign_43_92,
						conga_assign_43_98,
						conga_assign_43_101,
						conga_assign_43_104,
						conga_assign_43_107,
						conga_assign_43_110,
						conga_assign_43_113,
						conga_assign_43_115,
						conga_assign_43_117,
						conga_assign_43_119,
						conga_assign_43_125,
						conga_assign_43_127,
						conga_assign_43_129,
						conga_assign_43_131,
						conga_assign_43_136,
						conga_assign_43_139,
						conga_assign_43_140,
						conga_assign_43_145,
						conga_assign_43_151,
						conga_assign_43_156,
						conga_assign_43_157,
						conga_assign_43_159,
						conga_assign_43_162,
						conga_assign_43_163,
						conga_assign_43_166,
						conga_assign_43_167,
			
						conga_direct_assign_43,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	