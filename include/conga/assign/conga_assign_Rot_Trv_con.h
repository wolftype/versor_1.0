
#ifndef conga_assign_Rot_Trv_con_h_included
#define conga_assign_Rot_Trv_con_h_included
#include "conga_assign_Rot_Trv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Trv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Trv_func[73] = {
						conga_assign_36_1,
						conga_assign_36_8,
						conga_assign_36_10,
						conga_assign_36_11,
						conga_assign_36_15,
						conga_assign_36_17,
						conga_assign_36_21,
						conga_assign_36_24,
						conga_assign_36_27,
						conga_assign_36_29,
						conga_assign_36_30,
						conga_assign_36_31,
						conga_assign_36_32,
						conga_assign_36_33,
						conga_assign_36_34,
						conga_assign_36_35,
						conga_assign_36_36,
						conga_assign_36_37,
						conga_assign_36_38,
						conga_assign_36_39,
						conga_assign_36_40,
						conga_assign_36_48,
						conga_assign_36_49,
						conga_assign_36_51,
						conga_assign_36_61,
						conga_assign_36_63,
						conga_assign_36_64,
						conga_assign_36_66,
						conga_assign_36_69,
						conga_assign_36_74,
						conga_assign_36_75,
						conga_assign_36_77,
						conga_assign_36_78,
						conga_assign_36_81,
						conga_assign_36_82,
						conga_assign_36_85,
						conga_assign_36_86,
						conga_assign_36_89,
						conga_assign_36_91,
						conga_assign_36_92,
						conga_assign_36_95,
						conga_assign_36_98,
						conga_assign_36_101,
						conga_assign_36_104,
						conga_assign_36_106,
						conga_assign_36_107,
						conga_assign_36_109,
						conga_assign_36_115,
						conga_assign_36_116,
						conga_assign_36_117,
						conga_assign_36_119,
						conga_assign_36_122,
						conga_assign_36_125,
						conga_assign_36_127,
						conga_assign_36_129,
						conga_assign_36_131,
						conga_assign_36_133,
						conga_assign_36_136,
						conga_assign_36_139,
						conga_assign_36_140,
						conga_assign_36_143,
						conga_assign_36_147,
						conga_assign_36_149,
						conga_assign_36_151,
						conga_assign_36_154,
						conga_assign_36_156,
						conga_assign_36_157,
						conga_assign_36_159,
						conga_assign_36_162,
						conga_assign_36_163,
						conga_assign_36_166,
						conga_assign_36_167,
			
						conga_direct_assign_36,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	