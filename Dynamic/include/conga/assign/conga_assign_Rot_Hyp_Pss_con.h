
#ifndef conga_assign_Rot_Hyp_Pss_con_h_included
#define conga_assign_Rot_Hyp_Pss_con_h_included
#include "conga_assign_Rot_Hyp_Pss.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Hyp_Pss_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Hyp_Pss_func[76] = {
						conga_assign_154_8,
						conga_assign_154_10,
						conga_assign_154_11,
						conga_assign_154_12,
						conga_assign_154_14,
						conga_assign_154_15,
						conga_assign_154_17,
						conga_assign_154_19,
						conga_assign_154_20,
						conga_assign_154_21,
						conga_assign_154_27,
						conga_assign_154_30,
						conga_assign_154_32,
						conga_assign_154_33,
						conga_assign_154_34,
						conga_assign_154_36,
						conga_assign_154_37,
						conga_assign_154_38,
						conga_assign_154_39,
						conga_assign_154_40,
						conga_assign_154_48,
						conga_assign_154_49,
						conga_assign_154_50,
						conga_assign_154_51,
						conga_assign_154_53,
						conga_assign_154_61,
						conga_assign_154_63,
						conga_assign_154_64,
						conga_assign_154_66,
						conga_assign_154_68,
						conga_assign_154_69,
						conga_assign_154_74,
						conga_assign_154_75,
						conga_assign_154_77,
						conga_assign_154_78,
						conga_assign_154_82,
						conga_assign_154_85,
						conga_assign_154_86,
						conga_assign_154_89,
						conga_assign_154_91,
						conga_assign_154_92,
						conga_assign_154_95,
						conga_assign_154_98,
						conga_assign_154_101,
						conga_assign_154_104,
						conga_assign_154_106,
						conga_assign_154_107,
						conga_assign_154_109,
						conga_assign_154_110,
						conga_assign_154_115,
						conga_assign_154_116,
						conga_assign_154_117,
						conga_assign_154_119,
						conga_assign_154_122,
						conga_assign_154_125,
						conga_assign_154_127,
						conga_assign_154_129,
						conga_assign_154_131,
						conga_assign_154_133,
						conga_assign_154_136,
						conga_assign_154_139,
						conga_assign_154_140,
						conga_assign_154_143,
						conga_assign_154_145,
						conga_assign_154_147,
						conga_assign_154_149,
						conga_assign_154_151,
						conga_assign_154_154,
						conga_assign_154_156,
						conga_assign_154_157,
						conga_assign_154_159,
						conga_assign_154_162,
						conga_assign_154_163,
						conga_assign_154_166,
						conga_assign_154_167,
			
						conga_direct_assign_154,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	