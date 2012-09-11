
#ifndef conga_assign_Hyp_Pnt_con_h_included
#define conga_assign_Hyp_Pnt_con_h_included
#include "conga_assign_Hyp_Pnt.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Hyp_Pnt_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Hyp_Pnt_func[70] = {
						conga_assign_117_1,
						conga_assign_117_4,
						conga_assign_117_8,
						conga_assign_117_11,
						conga_assign_117_12,
						conga_assign_117_15,
						conga_assign_117_20,
						conga_assign_117_21,
						conga_assign_117_27,
						conga_assign_117_29,
						conga_assign_117_30,
						conga_assign_117_31,
						conga_assign_117_32,
						conga_assign_117_33,
						conga_assign_117_34,
						conga_assign_117_35,
						conga_assign_117_36,
						conga_assign_117_37,
						conga_assign_117_38,
						conga_assign_117_39,
						conga_assign_117_40,
						conga_assign_117_43,
						conga_assign_117_48,
						conga_assign_117_49,
						conga_assign_117_50,
						conga_assign_117_51,
						conga_assign_117_53,
						conga_assign_117_61,
						conga_assign_117_63,
						conga_assign_117_64,
						conga_assign_117_68,
						conga_assign_117_69,
						conga_assign_117_75,
						conga_assign_117_78,
						conga_assign_117_82,
						conga_assign_117_85,
						conga_assign_117_86,
						conga_assign_117_89,
						conga_assign_117_91,
						conga_assign_117_92,
						conga_assign_117_95,
						conga_assign_117_98,
						conga_assign_117_101,
						conga_assign_117_104,
						conga_assign_117_107,
						conga_assign_117_110,
						conga_assign_117_115,
						conga_assign_117_117,
						conga_assign_117_119,
						conga_assign_117_122,
						conga_assign_117_127,
						conga_assign_117_129,
						conga_assign_117_131,
						conga_assign_117_133,
						conga_assign_117_136,
						conga_assign_117_139,
						conga_assign_117_140,
						conga_assign_117_143,
						conga_assign_117_145,
						conga_assign_117_147,
						conga_assign_117_151,
						conga_assign_117_154,
						conga_assign_117_156,
						conga_assign_117_157,
						conga_assign_117_159,
						conga_assign_117_162,
						conga_assign_117_163,
						conga_assign_117_166,
						conga_assign_117_167,
			
						conga_direct_assign_117,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	