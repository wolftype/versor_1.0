
#ifndef conga_assign_Tri_Aff_con_h_included
#define conga_assign_Tri_Aff_con_h_included
#include "conga_assign_Tri_Aff.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Tri_Aff_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Tri_Aff_func[56] = {
						conga_assign_149_8,
						conga_assign_149_10,
						conga_assign_149_11,
						conga_assign_149_17,
						conga_assign_149_21,
						conga_assign_149_24,
						conga_assign_149_27,
						conga_assign_149_29,
						conga_assign_149_32,
						conga_assign_149_34,
						conga_assign_149_35,
						conga_assign_149_36,
						conga_assign_149_38,
						conga_assign_149_40,
						conga_assign_149_48,
						conga_assign_149_49,
						conga_assign_149_51,
						conga_assign_149_61,
						conga_assign_149_63,
						conga_assign_149_64,
						conga_assign_149_66,
						conga_assign_149_69,
						conga_assign_149_74,
						conga_assign_149_75,
						conga_assign_149_77,
						conga_assign_149_78,
						conga_assign_149_81,
						conga_assign_149_82,
						conga_assign_149_85,
						conga_assign_149_89,
						conga_assign_149_91,
						conga_assign_149_92,
						conga_assign_149_95,
						conga_assign_149_98,
						conga_assign_149_101,
						conga_assign_149_106,
						conga_assign_149_109,
						conga_assign_149_116,
						conga_assign_149_119,
						conga_assign_149_125,
						conga_assign_149_127,
						conga_assign_149_129,
						conga_assign_149_131,
						conga_assign_149_133,
						conga_assign_149_136,
						conga_assign_149_140,
						conga_assign_149_143,
						conga_assign_149_147,
						conga_assign_149_149,
						conga_assign_149_151,
						conga_assign_149_154,
						conga_assign_149_156,
						conga_assign_149_159,
						conga_assign_149_162,
						conga_assign_149_167,
			
						conga_direct_assign_149,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	