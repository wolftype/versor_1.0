
#ifndef conga_assign_Trs_Sph_con_h_included
#define conga_assign_Trs_Sph_con_h_included
#include "conga_assign_Trs_Sph.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trs_Sph_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trs_Sph_func[78] = {
						conga_assign_63_8,
						conga_assign_63_10,
						conga_assign_63_11,
						conga_assign_63_12,
						conga_assign_63_14,
						conga_assign_63_17,
						conga_assign_63_19,
						conga_assign_63_20,
						conga_assign_63_21,
						conga_assign_63_24,
						conga_assign_63_27,
						conga_assign_63_29,
						conga_assign_63_30,
						conga_assign_63_32,
						conga_assign_63_34,
						conga_assign_63_35,
						conga_assign_63_36,
						conga_assign_63_37,
						conga_assign_63_38,
						conga_assign_63_40,
						conga_assign_63_43,
						conga_assign_63_48,
						conga_assign_63_49,
						conga_assign_63_50,
						conga_assign_63_51,
						conga_assign_63_53,
						conga_assign_63_61,
						conga_assign_63_63,
						conga_assign_63_64,
						conga_assign_63_66,
						conga_assign_63_68,
						conga_assign_63_69,
						conga_assign_63_74,
						conga_assign_63_75,
						conga_assign_63_77,
						conga_assign_63_78,
						conga_assign_63_81,
						conga_assign_63_82,
						conga_assign_63_85,
						conga_assign_63_89,
						conga_assign_63_91,
						conga_assign_63_92,
						conga_assign_63_95,
						conga_assign_63_98,
						conga_assign_63_101,
						conga_assign_63_104,
						conga_assign_63_106,
						conga_assign_63_107,
						conga_assign_63_109,
						conga_assign_63_110,
						conga_assign_63_113,
						conga_assign_63_115,
						conga_assign_63_116,
						conga_assign_63_117,
						conga_assign_63_119,
						conga_assign_63_122,
						conga_assign_63_125,
						conga_assign_63_127,
						conga_assign_63_129,
						conga_assign_63_131,
						conga_assign_63_133,
						conga_assign_63_136,
						conga_assign_63_139,
						conga_assign_63_140,
						conga_assign_63_143,
						conga_assign_63_145,
						conga_assign_63_147,
						conga_assign_63_149,
						conga_assign_63_151,
						conga_assign_63_154,
						conga_assign_63_156,
						conga_assign_63_157,
						conga_assign_63_159,
						conga_assign_63_162,
						conga_assign_63_163,
						conga_assign_63_166,
						conga_assign_63_167,
			
						conga_direct_assign_63,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	