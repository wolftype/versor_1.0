
#ifndef conga_assign_Rot_Tnv_con_h_included
#define conga_assign_Rot_Tnv_con_h_included
#include "conga_assign_Rot_Tnv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Tnv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Tnv_func[55] = {
						conga_assign_51_8,
						conga_assign_51_10,
						conga_assign_51_11,
						conga_assign_51_15,
						conga_assign_51_17,
						conga_assign_51_27,
						conga_assign_51_33,
						conga_assign_51_36,
						conga_assign_51_38,
						conga_assign_51_39,
						conga_assign_51_40,
						conga_assign_51_48,
						conga_assign_51_49,
						conga_assign_51_51,
						conga_assign_51_61,
						conga_assign_51_63,
						conga_assign_51_64,
						conga_assign_51_66,
						conga_assign_51_74,
						conga_assign_51_75,
						conga_assign_51_82,
						conga_assign_51_85,
						conga_assign_51_86,
						conga_assign_51_89,
						conga_assign_51_91,
						conga_assign_51_95,
						conga_assign_51_98,
						conga_assign_51_104,
						conga_assign_51_106,
						conga_assign_51_107,
						conga_assign_51_115,
						conga_assign_51_116,
						conga_assign_51_117,
						conga_assign_51_119,
						conga_assign_51_122,
						conga_assign_51_125,
						conga_assign_51_127,
						conga_assign_51_129,
						conga_assign_51_131,
						conga_assign_51_133,
						conga_assign_51_136,
						conga_assign_51_139,
						conga_assign_51_140,
						conga_assign_51_147,
						conga_assign_51_149,
						conga_assign_51_151,
						conga_assign_51_154,
						conga_assign_51_156,
						conga_assign_51_157,
						conga_assign_51_159,
						conga_assign_51_162,
						conga_assign_51_163,
						conga_assign_51_166,
						conga_assign_51_167,
			
						conga_direct_assign_51,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	