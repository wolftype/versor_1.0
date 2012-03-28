
#ifndef conga_assign_Rot_Sph_con_h_included
#define conga_assign_Rot_Sph_con_h_included
#include "conga_assign_Rot_Sph.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Rot_Sph_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Rot_Sph_func[82] = {
						conga_assign_48_4,
						conga_assign_48_8,
						conga_assign_48_10,
						conga_assign_48_11,
						conga_assign_48_12,
						conga_assign_48_14,
						conga_assign_48_15,
						conga_assign_48_17,
						conga_assign_48_19,
						conga_assign_48_20,
						conga_assign_48_21,
						conga_assign_48_27,
						conga_assign_48_30,
						conga_assign_48_31,
						conga_assign_48_32,
						conga_assign_48_33,
						conga_assign_48_34,
						conga_assign_48_35,
						conga_assign_48_36,
						conga_assign_48_37,
						conga_assign_48_38,
						conga_assign_48_39,
						conga_assign_48_40,
						conga_assign_48_43,
						conga_assign_48_48,
						conga_assign_48_49,
						conga_assign_48_50,
						conga_assign_48_51,
						conga_assign_48_53,
						conga_assign_48_61,
						conga_assign_48_63,
						conga_assign_48_64,
						conga_assign_48_66,
						conga_assign_48_68,
						conga_assign_48_69,
						conga_assign_48_74,
						conga_assign_48_75,
						conga_assign_48_77,
						conga_assign_48_78,
						conga_assign_48_81,
						conga_assign_48_82,
						conga_assign_48_85,
						conga_assign_48_86,
						conga_assign_48_89,
						conga_assign_48_91,
						conga_assign_48_92,
						conga_assign_48_95,
						conga_assign_48_98,
						conga_assign_48_101,
						conga_assign_48_104,
						conga_assign_48_106,
						conga_assign_48_107,
						conga_assign_48_109,
						conga_assign_48_110,
						conga_assign_48_113,
						conga_assign_48_115,
						conga_assign_48_116,
						conga_assign_48_117,
						conga_assign_48_119,
						conga_assign_48_122,
						conga_assign_48_125,
						conga_assign_48_127,
						conga_assign_48_129,
						conga_assign_48_131,
						conga_assign_48_133,
						conga_assign_48_136,
						conga_assign_48_139,
						conga_assign_48_140,
						conga_assign_48_143,
						conga_assign_48_145,
						conga_assign_48_147,
						conga_assign_48_149,
						conga_assign_48_151,
						conga_assign_48_154,
						conga_assign_48_156,
						conga_assign_48_157,
						conga_assign_48_159,
						conga_assign_48_162,
						conga_assign_48_163,
						conga_assign_48_166,
						conga_assign_48_167,
			
						conga_direct_assign_48,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	