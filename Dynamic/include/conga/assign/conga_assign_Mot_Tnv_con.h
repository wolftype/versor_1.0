
#ifndef conga_assign_Mot_Tnv_con_h_included
#define conga_assign_Mot_Tnv_con_h_included
#include "conga_assign_Mot_Tnv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mot_Tnv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mot_Tnv_func[82] = {
						conga_assign_85_1,
						conga_assign_85_4,
						conga_assign_85_8,
						conga_assign_85_10,
						conga_assign_85_11,
						conga_assign_85_15,
						conga_assign_85_17,
						conga_assign_85_19,
						conga_assign_85_20,
						conga_assign_85_21,
						conga_assign_85_24,
						conga_assign_85_27,
						conga_assign_85_29,
						conga_assign_85_30,
						conga_assign_85_31,
						conga_assign_85_32,
						conga_assign_85_33,
						conga_assign_85_34,
						conga_assign_85_35,
						conga_assign_85_36,
						conga_assign_85_37,
						conga_assign_85_38,
						conga_assign_85_39,
						conga_assign_85_40,
						conga_assign_85_43,
						conga_assign_85_48,
						conga_assign_85_49,
						conga_assign_85_51,
						conga_assign_85_53,
						conga_assign_85_61,
						conga_assign_85_63,
						conga_assign_85_64,
						conga_assign_85_66,
						conga_assign_85_68,
						conga_assign_85_69,
						conga_assign_85_74,
						conga_assign_85_75,
						conga_assign_85_77,
						conga_assign_85_78,
						conga_assign_85_81,
						conga_assign_85_82,
						conga_assign_85_85,
						conga_assign_85_86,
						conga_assign_85_89,
						conga_assign_85_91,
						conga_assign_85_92,
						conga_assign_85_95,
						conga_assign_85_98,
						conga_assign_85_101,
						conga_assign_85_104,
						conga_assign_85_106,
						conga_assign_85_107,
						conga_assign_85_109,
						conga_assign_85_110,
						conga_assign_85_113,
						conga_assign_85_115,
						conga_assign_85_116,
						conga_assign_85_117,
						conga_assign_85_119,
						conga_assign_85_122,
						conga_assign_85_125,
						conga_assign_85_127,
						conga_assign_85_129,
						conga_assign_85_131,
						conga_assign_85_133,
						conga_assign_85_136,
						conga_assign_85_139,
						conga_assign_85_140,
						conga_assign_85_143,
						conga_assign_85_145,
						conga_assign_85_147,
						conga_assign_85_149,
						conga_assign_85_151,
						conga_assign_85_154,
						conga_assign_85_156,
						conga_assign_85_157,
						conga_assign_85_159,
						conga_assign_85_162,
						conga_assign_85_163,
						conga_assign_85_166,
						conga_assign_85_167,
			
						conga_direct_assign_85,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	