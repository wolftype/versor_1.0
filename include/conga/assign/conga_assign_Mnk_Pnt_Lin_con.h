
#ifndef conga_assign_Mnk_Pnt_Lin_con_h_included
#define conga_assign_Mnk_Pnt_Lin_con_h_included
#include "conga_assign_Mnk_Pnt_Lin.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mnk_Pnt_Lin_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mnk_Pnt_Lin_func[83] = {
						conga_assign_159_1,
						conga_assign_159_8,
						conga_assign_159_10,
						conga_assign_159_11,
						conga_assign_159_12,
						conga_assign_159_14,
						conga_assign_159_15,
						conga_assign_159_19,
						conga_assign_159_20,
						conga_assign_159_21,
						conga_assign_159_24,
						conga_assign_159_27,
						conga_assign_159_29,
						conga_assign_159_30,
						conga_assign_159_31,
						conga_assign_159_32,
						conga_assign_159_33,
						conga_assign_159_34,
						conga_assign_159_35,
						conga_assign_159_36,
						conga_assign_159_37,
						conga_assign_159_38,
						conga_assign_159_39,
						conga_assign_159_40,
						conga_assign_159_43,
						conga_assign_159_48,
						conga_assign_159_49,
						conga_assign_159_50,
						conga_assign_159_51,
						conga_assign_159_53,
						conga_assign_159_61,
						conga_assign_159_63,
						conga_assign_159_64,
						conga_assign_159_66,
						conga_assign_159_68,
						conga_assign_159_69,
						conga_assign_159_74,
						conga_assign_159_75,
						conga_assign_159_77,
						conga_assign_159_78,
						conga_assign_159_81,
						conga_assign_159_82,
						conga_assign_159_85,
						conga_assign_159_86,
						conga_assign_159_89,
						conga_assign_159_91,
						conga_assign_159_92,
						conga_assign_159_95,
						conga_assign_159_98,
						conga_assign_159_101,
						conga_assign_159_104,
						conga_assign_159_106,
						conga_assign_159_107,
						conga_assign_159_109,
						conga_assign_159_110,
						conga_assign_159_113,
						conga_assign_159_115,
						conga_assign_159_116,
						conga_assign_159_117,
						conga_assign_159_119,
						conga_assign_159_122,
						conga_assign_159_125,
						conga_assign_159_127,
						conga_assign_159_129,
						conga_assign_159_131,
						conga_assign_159_133,
						conga_assign_159_136,
						conga_assign_159_139,
						conga_assign_159_140,
						conga_assign_159_143,
						conga_assign_159_145,
						conga_assign_159_147,
						conga_assign_159_149,
						conga_assign_159_151,
						conga_assign_159_154,
						conga_assign_159_156,
						conga_assign_159_157,
						conga_assign_159_159,
						conga_assign_159_162,
						conga_assign_159_163,
						conga_assign_159_166,
						conga_assign_159_167,
			
						conga_direct_assign_159,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	