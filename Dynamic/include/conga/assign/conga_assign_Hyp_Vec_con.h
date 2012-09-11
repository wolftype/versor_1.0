
#ifndef conga_assign_Hyp_Vec_con_h_included
#define conga_assign_Hyp_Vec_con_h_included
#include "conga_assign_Hyp_Vec.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Hyp_Vec_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Hyp_Vec_func[64] = {
						conga_assign_122_8,
						conga_assign_122_11,
						conga_assign_122_12,
						conga_assign_122_15,
						conga_assign_122_20,
						conga_assign_122_21,
						conga_assign_122_27,
						conga_assign_122_30,
						conga_assign_122_32,
						conga_assign_122_33,
						conga_assign_122_34,
						conga_assign_122_36,
						conga_assign_122_37,
						conga_assign_122_38,
						conga_assign_122_39,
						conga_assign_122_40,
						conga_assign_122_48,
						conga_assign_122_49,
						conga_assign_122_50,
						conga_assign_122_51,
						conga_assign_122_53,
						conga_assign_122_61,
						conga_assign_122_63,
						conga_assign_122_64,
						conga_assign_122_68,
						conga_assign_122_69,
						conga_assign_122_75,
						conga_assign_122_78,
						conga_assign_122_82,
						conga_assign_122_85,
						conga_assign_122_86,
						conga_assign_122_89,
						conga_assign_122_91,
						conga_assign_122_92,
						conga_assign_122_95,
						conga_assign_122_98,
						conga_assign_122_101,
						conga_assign_122_104,
						conga_assign_122_107,
						conga_assign_122_110,
						conga_assign_122_115,
						conga_assign_122_117,
						conga_assign_122_119,
						conga_assign_122_122,
						conga_assign_122_127,
						conga_assign_122_129,
						conga_assign_122_131,
						conga_assign_122_133,
						conga_assign_122_136,
						conga_assign_122_139,
						conga_assign_122_140,
						conga_assign_122_143,
						conga_assign_122_145,
						conga_assign_122_147,
						conga_assign_122_151,
						conga_assign_122_154,
						conga_assign_122_156,
						conga_assign_122_157,
						conga_assign_122_159,
						conga_assign_122_162,
						conga_assign_122_163,
						conga_assign_122_166,
						conga_assign_122_167,
			
						conga_direct_assign_122,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	