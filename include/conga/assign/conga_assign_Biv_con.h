
#ifndef conga_assign_Biv_con_h_included
#define conga_assign_Biv_con_h_included
#include "conga_assign_Biv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Biv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Biv_func[47] = {
						conga_assign_24_8,
						conga_assign_24_11,
						conga_assign_24_21,
						conga_assign_24_24,
						conga_assign_24_27,
						conga_assign_24_29,
						conga_assign_24_32,
						conga_assign_24_34,
						conga_assign_24_35,
						conga_assign_24_36,
						conga_assign_24_38,
						conga_assign_24_40,
						conga_assign_24_49,
						conga_assign_24_61,
						conga_assign_24_63,
						conga_assign_24_64,
						conga_assign_24_66,
						conga_assign_24_69,
						conga_assign_24_74,
						conga_assign_24_75,
						conga_assign_24_77,
						conga_assign_24_78,
						conga_assign_24_81,
						conga_assign_24_82,
						conga_assign_24_85,
						conga_assign_24_89,
						conga_assign_24_91,
						conga_assign_24_92,
						conga_assign_24_95,
						conga_assign_24_98,
						conga_assign_24_101,
						conga_assign_24_106,
						conga_assign_24_109,
						conga_assign_24_119,
						conga_assign_24_127,
						conga_assign_24_129,
						conga_assign_24_131,
						conga_assign_24_133,
						conga_assign_24_136,
						conga_assign_24_140,
						conga_assign_24_143,
						conga_assign_24_147,
						conga_assign_24_149,
						conga_assign_24_159,
						conga_assign_24_162,
						conga_assign_24_167,
			
						conga_direct_assign_24,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	