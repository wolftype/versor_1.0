
#ifndef conga_assign_Rot_Dil_con_h_included
#define conga_assign_Rot_Dil_con_h_included
#include "conga_assign_Rot_Dil.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Dil_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Dil_func[76] = {
						conga_assign_35_1,
						conga_assign_35_4,
						conga_assign_35_8,
						conga_assign_35_10,
						conga_assign_35_11,
						conga_assign_35_19,
						conga_assign_35_20,
						conga_assign_35_21,
						conga_assign_35_24,
						conga_assign_35_27,
						conga_assign_35_29,
						conga_assign_35_30,
						conga_assign_35_31,
						conga_assign_35_32,
						conga_assign_35_33,
						conga_assign_35_34,
						conga_assign_35_35,
						conga_assign_35_36,
						conga_assign_35_37,
						conga_assign_35_38,
						conga_assign_35_39,
						conga_assign_35_40,
						conga_assign_35_43,
						conga_assign_35_48,
						conga_assign_35_49,
						conga_assign_35_53,
						conga_assign_35_61,
						conga_assign_35_63,
						conga_assign_35_64,
						conga_assign_35_66,
						conga_assign_35_68,
						conga_assign_35_69,
						conga_assign_35_74,
						conga_assign_35_75,
						conga_assign_35_77,
						conga_assign_35_78,
						conga_assign_35_81,
						conga_assign_35_82,
						conga_assign_35_85,
						conga_assign_35_86,
						conga_assign_35_89,
						conga_assign_35_91,
						conga_assign_35_92,
						conga_assign_35_95,
						conga_assign_35_98,
						conga_assign_35_101,
						conga_assign_35_104,
						conga_assign_35_106,
						conga_assign_35_107,
						conga_assign_35_109,
						conga_assign_35_110,
						conga_assign_35_113,
						conga_assign_35_115,
						conga_assign_35_117,
						conga_assign_35_119,
						conga_assign_35_125,
						conga_assign_35_127,
						conga_assign_35_129,
						conga_assign_35_131,
						conga_assign_35_133,
						conga_assign_35_136,
						conga_assign_35_139,
						conga_assign_35_140,
						conga_assign_35_143,
						conga_assign_35_145,
						conga_assign_35_147,
						conga_assign_35_149,
						conga_assign_35_151,
						conga_assign_35_156,
						conga_assign_35_157,
						conga_assign_35_159,
						conga_assign_35_162,
						conga_assign_35_163,
						conga_assign_35_166,
						conga_assign_35_167,
			
						conga_direct_assign_35,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	