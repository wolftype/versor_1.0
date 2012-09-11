
#ifndef conga_assign_Pnt_Lin_con_h_included
#define conga_assign_Pnt_Lin_con_h_included
#include "conga_assign_Pnt_Lin.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Pnt_Lin_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Pnt_Lin_func[83] = {
						conga_assign_131_4,
						conga_assign_131_8,
						conga_assign_131_10,
						conga_assign_131_11,
						conga_assign_131_12,
						conga_assign_131_14,
						conga_assign_131_15,
						conga_assign_131_19,
						conga_assign_131_20,
						conga_assign_131_21,
						conga_assign_131_24,
						conga_assign_131_27,
						conga_assign_131_29,
						conga_assign_131_30,
						conga_assign_131_31,
						conga_assign_131_32,
						conga_assign_131_33,
						conga_assign_131_34,
						conga_assign_131_35,
						conga_assign_131_36,
						conga_assign_131_37,
						conga_assign_131_38,
						conga_assign_131_39,
						conga_assign_131_40,
						conga_assign_131_43,
						conga_assign_131_48,
						conga_assign_131_49,
						conga_assign_131_50,
						conga_assign_131_51,
						conga_assign_131_53,
						conga_assign_131_61,
						conga_assign_131_63,
						conga_assign_131_64,
						conga_assign_131_66,
						conga_assign_131_68,
						conga_assign_131_69,
						conga_assign_131_74,
						conga_assign_131_75,
						conga_assign_131_77,
						conga_assign_131_78,
						conga_assign_131_81,
						conga_assign_131_82,
						conga_assign_131_85,
						conga_assign_131_86,
						conga_assign_131_89,
						conga_assign_131_91,
						conga_assign_131_92,
						conga_assign_131_95,
						conga_assign_131_98,
						conga_assign_131_101,
						conga_assign_131_104,
						conga_assign_131_106,
						conga_assign_131_107,
						conga_assign_131_109,
						conga_assign_131_110,
						conga_assign_131_113,
						conga_assign_131_115,
						conga_assign_131_116,
						conga_assign_131_117,
						conga_assign_131_119,
						conga_assign_131_122,
						conga_assign_131_125,
						conga_assign_131_127,
						conga_assign_131_129,
						conga_assign_131_131,
						conga_assign_131_133,
						conga_assign_131_136,
						conga_assign_131_139,
						conga_assign_131_140,
						conga_assign_131_143,
						conga_assign_131_145,
						conga_assign_131_147,
						conga_assign_131_149,
						conga_assign_131_151,
						conga_assign_131_154,
						conga_assign_131_156,
						conga_assign_131_157,
						conga_assign_131_159,
						conga_assign_131_162,
						conga_assign_131_163,
						conga_assign_131_166,
						conga_assign_131_167,
			
						conga_direct_assign_131,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	