
#ifndef conga_assign_Rot_Sta_con_h_included
#define conga_assign_Rot_Sta_con_h_included
#include "conga_assign_Rot_Sta.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Sta_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Sta_func[82] = {
						conga_assign_49_1,
						conga_assign_49_8,
						conga_assign_49_10,
						conga_assign_49_11,
						conga_assign_49_12,
						conga_assign_49_14,
						conga_assign_49_15,
						conga_assign_49_17,
						conga_assign_49_19,
						conga_assign_49_20,
						conga_assign_49_21,
						conga_assign_49_24,
						conga_assign_49_27,
						conga_assign_49_29,
						conga_assign_49_30,
						conga_assign_49_31,
						conga_assign_49_32,
						conga_assign_49_33,
						conga_assign_49_34,
						conga_assign_49_35,
						conga_assign_49_36,
						conga_assign_49_37,
						conga_assign_49_38,
						conga_assign_49_39,
						conga_assign_49_40,
						conga_assign_49_48,
						conga_assign_49_49,
						conga_assign_49_50,
						conga_assign_49_51,
						conga_assign_49_53,
						conga_assign_49_61,
						conga_assign_49_63,
						conga_assign_49_64,
						conga_assign_49_66,
						conga_assign_49_68,
						conga_assign_49_69,
						conga_assign_49_74,
						conga_assign_49_75,
						conga_assign_49_77,
						conga_assign_49_78,
						conga_assign_49_81,
						conga_assign_49_82,
						conga_assign_49_85,
						conga_assign_49_86,
						conga_assign_49_89,
						conga_assign_49_91,
						conga_assign_49_92,
						conga_assign_49_95,
						conga_assign_49_98,
						conga_assign_49_101,
						conga_assign_49_104,
						conga_assign_49_106,
						conga_assign_49_107,
						conga_assign_49_109,
						conga_assign_49_110,
						conga_assign_49_115,
						conga_assign_49_116,
						conga_assign_49_117,
						conga_assign_49_119,
						conga_assign_49_122,
						conga_assign_49_125,
						conga_assign_49_127,
						conga_assign_49_129,
						conga_assign_49_131,
						conga_assign_49_133,
						conga_assign_49_136,
						conga_assign_49_139,
						conga_assign_49_140,
						conga_assign_49_143,
						conga_assign_49_145,
						conga_assign_49_147,
						conga_assign_49_149,
						conga_assign_49_151,
						conga_assign_49_154,
						conga_assign_49_156,
						conga_assign_49_157,
						conga_assign_49_159,
						conga_assign_49_162,
						conga_assign_49_163,
						conga_assign_49_166,
						conga_assign_49_167,
			
						conga_direct_assign_49,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	