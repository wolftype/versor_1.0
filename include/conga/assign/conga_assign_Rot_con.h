
#ifndef conga_assign_Rot_con_h_included
#define conga_assign_Rot_con_h_included
#include "conga_assign_Rot.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_func[56] = {
						conga_assign_29_1,
						conga_assign_29_8,
						conga_assign_29_11,
						conga_assign_29_21,
						conga_assign_29_24,
						conga_assign_29_27,
						conga_assign_29_29,
						conga_assign_29_30,
						conga_assign_29_31,
						conga_assign_29_32,
						conga_assign_29_33,
						conga_assign_29_34,
						conga_assign_29_35,
						conga_assign_29_36,
						conga_assign_29_37,
						conga_assign_29_38,
						conga_assign_29_39,
						conga_assign_29_40,
						conga_assign_29_49,
						conga_assign_29_61,
						conga_assign_29_63,
						conga_assign_29_64,
						conga_assign_29_66,
						conga_assign_29_69,
						conga_assign_29_74,
						conga_assign_29_75,
						conga_assign_29_77,
						conga_assign_29_78,
						conga_assign_29_81,
						conga_assign_29_82,
						conga_assign_29_85,
						conga_assign_29_89,
						conga_assign_29_91,
						conga_assign_29_92,
						conga_assign_29_95,
						conga_assign_29_98,
						conga_assign_29_101,
						conga_assign_29_104,
						conga_assign_29_106,
						conga_assign_29_109,
						conga_assign_29_117,
						conga_assign_29_119,
						conga_assign_29_127,
						conga_assign_29_129,
						conga_assign_29_131,
						conga_assign_29_133,
						conga_assign_29_136,
						conga_assign_29_140,
						conga_assign_29_143,
						conga_assign_29_147,
						conga_assign_29_149,
						conga_assign_29_157,
						conga_assign_29_159,
						conga_assign_29_162,
						conga_assign_29_167,
			
						conga_direct_assign_29,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	