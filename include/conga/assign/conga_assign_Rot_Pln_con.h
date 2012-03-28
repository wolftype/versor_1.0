
#ifndef conga_assign_Rot_Pln_con_h_included
#define conga_assign_Rot_Pln_con_h_included
#include "conga_assign_Rot_Pln.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Pln_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Pln_func[73] = {
						conga_assign_53_4,
						conga_assign_53_8,
						conga_assign_53_10,
						conga_assign_53_11,
						conga_assign_53_12,
						conga_assign_53_14,
						conga_assign_53_19,
						conga_assign_53_20,
						conga_assign_53_21,
						conga_assign_53_30,
						conga_assign_53_31,
						conga_assign_53_32,
						conga_assign_53_34,
						conga_assign_53_35,
						conga_assign_53_37,
						conga_assign_53_38,
						conga_assign_53_39,
						conga_assign_53_40,
						conga_assign_53_43,
						conga_assign_53_48,
						conga_assign_53_49,
						conga_assign_53_50,
						conga_assign_53_53,
						conga_assign_53_61,
						conga_assign_53_63,
						conga_assign_53_64,
						conga_assign_53_66,
						conga_assign_53_68,
						conga_assign_53_69,
						conga_assign_53_74,
						conga_assign_53_75,
						conga_assign_53_77,
						conga_assign_53_78,
						conga_assign_53_81,
						conga_assign_53_82,
						conga_assign_53_85,
						conga_assign_53_86,
						conga_assign_53_89,
						conga_assign_53_91,
						conga_assign_53_92,
						conga_assign_53_98,
						conga_assign_53_101,
						conga_assign_53_104,
						conga_assign_53_106,
						conga_assign_53_107,
						conga_assign_53_109,
						conga_assign_53_110,
						conga_assign_53_113,
						conga_assign_53_115,
						conga_assign_53_116,
						conga_assign_53_117,
						conga_assign_53_119,
						conga_assign_53_122,
						conga_assign_53_125,
						conga_assign_53_127,
						conga_assign_53_129,
						conga_assign_53_131,
						conga_assign_53_133,
						conga_assign_53_136,
						conga_assign_53_139,
						conga_assign_53_140,
						conga_assign_53_143,
						conga_assign_53_145,
						conga_assign_53_151,
						conga_assign_53_154,
						conga_assign_53_156,
						conga_assign_53_157,
						conga_assign_53_159,
						conga_assign_53_162,
						conga_assign_53_163,
						conga_assign_53_166,
						conga_assign_53_167,
			
						conga_direct_assign_53,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	