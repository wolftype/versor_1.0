
#ifndef conga_assign_Rot_Drv_con_h_included
#define conga_assign_Rot_Drv_con_h_included
#include "conga_assign_Rot_Drv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Drv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Drv_func[55] = {
						conga_assign_50_8,
						conga_assign_50_10,
						conga_assign_50_11,
						conga_assign_50_12,
						conga_assign_50_14,
						conga_assign_50_19,
						conga_assign_50_20,
						conga_assign_50_21,
						conga_assign_50_30,
						conga_assign_50_32,
						conga_assign_50_34,
						conga_assign_50_37,
						conga_assign_50_38,
						conga_assign_50_40,
						conga_assign_50_48,
						conga_assign_50_49,
						conga_assign_50_50,
						conga_assign_50_53,
						conga_assign_50_61,
						conga_assign_50_63,
						conga_assign_50_68,
						conga_assign_50_69,
						conga_assign_50_74,
						conga_assign_50_75,
						conga_assign_50_77,
						conga_assign_50_78,
						conga_assign_50_89,
						conga_assign_50_91,
						conga_assign_50_92,
						conga_assign_50_101,
						conga_assign_50_104,
						conga_assign_50_106,
						conga_assign_50_107,
						conga_assign_50_109,
						conga_assign_50_110,
						conga_assign_50_116,
						conga_assign_50_117,
						conga_assign_50_119,
						conga_assign_50_122,
						conga_assign_50_127,
						conga_assign_50_129,
						conga_assign_50_131,
						conga_assign_50_133,
						conga_assign_50_136,
						conga_assign_50_139,
						conga_assign_50_140,
						conga_assign_50_143,
						conga_assign_50_145,
						conga_assign_50_154,
						conga_assign_50_157,
						conga_assign_50_159,
						conga_assign_50_162,
						conga_assign_50_166,
						conga_assign_50_167,
			
						conga_direct_assign_50,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	