
#ifndef conga_assign_Mnk_Sph_con_h_included
#define conga_assign_Mnk_Sph_con_h_included
#include "conga_assign_Mnk_Sph.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Mnk_Sph_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Mnk_Sph_func[61] = {
						conga_assign_106_8,
						conga_assign_106_10,
						conga_assign_106_11,
						conga_assign_106_14,
						conga_assign_106_17,
						conga_assign_106_19,
						conga_assign_106_21,
						conga_assign_106_24,
						conga_assign_106_27,
						conga_assign_106_29,
						conga_assign_106_32,
						conga_assign_106_34,
						conga_assign_106_35,
						conga_assign_106_36,
						conga_assign_106_38,
						conga_assign_106_40,
						conga_assign_106_48,
						conga_assign_106_49,
						conga_assign_106_50,
						conga_assign_106_51,
						conga_assign_106_53,
						conga_assign_106_61,
						conga_assign_106_63,
						conga_assign_106_64,
						conga_assign_106_66,
						conga_assign_106_68,
						conga_assign_106_69,
						conga_assign_106_74,
						conga_assign_106_75,
						conga_assign_106_77,
						conga_assign_106_78,
						conga_assign_106_81,
						conga_assign_106_82,
						conga_assign_106_85,
						conga_assign_106_89,
						conga_assign_106_91,
						conga_assign_106_92,
						conga_assign_106_95,
						conga_assign_106_98,
						conga_assign_106_101,
						conga_assign_106_106,
						conga_assign_106_109,
						conga_assign_106_116,
						conga_assign_106_119,
						conga_assign_106_125,
						conga_assign_106_127,
						conga_assign_106_129,
						conga_assign_106_131,
						conga_assign_106_133,
						conga_assign_106_136,
						conga_assign_106_140,
						conga_assign_106_143,
						conga_assign_106_147,
						conga_assign_106_149,
						conga_assign_106_151,
						conga_assign_106_154,
						conga_assign_106_156,
						conga_assign_106_159,
						conga_assign_106_162,
						conga_assign_106_167,
			
						conga_direct_assign_106,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	