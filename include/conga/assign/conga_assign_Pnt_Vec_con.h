
#ifndef conga_assign_Pnt_Vec_con_h_included
#define conga_assign_Pnt_Vec_con_h_included
#include "conga_assign_Pnt_Vec.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Pnt_Vec_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Pnt_Vec_func[76] = {
						conga_assign_133_1,
						conga_assign_133_8,
						conga_assign_133_11,
						conga_assign_133_12,
						conga_assign_133_15,
						conga_assign_133_20,
						conga_assign_133_21,
						conga_assign_133_24,
						conga_assign_133_27,
						conga_assign_133_29,
						conga_assign_133_30,
						conga_assign_133_31,
						conga_assign_133_32,
						conga_assign_133_33,
						conga_assign_133_34,
						conga_assign_133_35,
						conga_assign_133_36,
						conga_assign_133_37,
						conga_assign_133_38,
						conga_assign_133_39,
						conga_assign_133_40,
						conga_assign_133_48,
						conga_assign_133_49,
						conga_assign_133_50,
						conga_assign_133_51,
						conga_assign_133_53,
						conga_assign_133_61,
						conga_assign_133_63,
						conga_assign_133_64,
						conga_assign_133_66,
						conga_assign_133_68,
						conga_assign_133_69,
						conga_assign_133_74,
						conga_assign_133_75,
						conga_assign_133_77,
						conga_assign_133_78,
						conga_assign_133_81,
						conga_assign_133_82,
						conga_assign_133_85,
						conga_assign_133_86,
						conga_assign_133_89,
						conga_assign_133_91,
						conga_assign_133_92,
						conga_assign_133_95,
						conga_assign_133_98,
						conga_assign_133_101,
						conga_assign_133_104,
						conga_assign_133_106,
						conga_assign_133_107,
						conga_assign_133_109,
						conga_assign_133_110,
						conga_assign_133_115,
						conga_assign_133_117,
						conga_assign_133_119,
						conga_assign_133_122,
						conga_assign_133_127,
						conga_assign_133_129,
						conga_assign_133_131,
						conga_assign_133_133,
						conga_assign_133_136,
						conga_assign_133_139,
						conga_assign_133_140,
						conga_assign_133_143,
						conga_assign_133_145,
						conga_assign_133_147,
						conga_assign_133_149,
						conga_assign_133_151,
						conga_assign_133_154,
						conga_assign_133_156,
						conga_assign_133_157,
						conga_assign_133_159,
						conga_assign_133_162,
						conga_assign_133_163,
						conga_assign_133_166,
						conga_assign_133_167,
			
						conga_direct_assign_133,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	