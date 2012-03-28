
#ifndef conga_assign_Sph_Biv_con_h_included
#define conga_assign_Sph_Biv_con_h_included
#include "conga_assign_Sph_Biv.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Sph_Biv_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Sph_Biv_func[76] = {
						conga_assign_139_4,
						conga_assign_139_8,
						conga_assign_139_10,
						conga_assign_139_11,
						conga_assign_139_12,
						conga_assign_139_15,
						conga_assign_139_19,
						conga_assign_139_20,
						conga_assign_139_21,
						conga_assign_139_27,
						conga_assign_139_30,
						conga_assign_139_31,
						conga_assign_139_32,
						conga_assign_139_33,
						conga_assign_139_34,
						conga_assign_139_35,
						conga_assign_139_36,
						conga_assign_139_37,
						conga_assign_139_38,
						conga_assign_139_39,
						conga_assign_139_40,
						conga_assign_139_43,
						conga_assign_139_48,
						conga_assign_139_49,
						conga_assign_139_50,
						conga_assign_139_51,
						conga_assign_139_53,
						conga_assign_139_61,
						conga_assign_139_63,
						conga_assign_139_64,
						conga_assign_139_66,
						conga_assign_139_68,
						conga_assign_139_69,
						conga_assign_139_74,
						conga_assign_139_75,
						conga_assign_139_77,
						conga_assign_139_78,
						conga_assign_139_81,
						conga_assign_139_82,
						conga_assign_139_85,
						conga_assign_139_86,
						conga_assign_139_89,
						conga_assign_139_91,
						conga_assign_139_92,
						conga_assign_139_95,
						conga_assign_139_98,
						conga_assign_139_101,
						conga_assign_139_104,
						conga_assign_139_107,
						conga_assign_139_110,
						conga_assign_139_113,
						conga_assign_139_115,
						conga_assign_139_117,
						conga_assign_139_119,
						conga_assign_139_122,
						conga_assign_139_125,
						conga_assign_139_127,
						conga_assign_139_129,
						conga_assign_139_131,
						conga_assign_139_133,
						conga_assign_139_136,
						conga_assign_139_139,
						conga_assign_139_140,
						conga_assign_139_143,
						conga_assign_139_145,
						conga_assign_139_147,
						conga_assign_139_151,
						conga_assign_139_154,
						conga_assign_139_156,
						conga_assign_139_157,
						conga_assign_139_159,
						conga_assign_139_162,
						conga_assign_139_163,
						conga_assign_139_166,
						conga_assign_139_167,
			
						conga_direct_assign_139,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	