
#ifndef conga_assign_Trs_Pln_con_h_included
#define conga_assign_Trs_Pln_con_h_included
#include "conga_assign_Trs_Pln.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Trs_Pln_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Trs_Pln_func[69] = {
						conga_assign_68_8,
						conga_assign_68_10,
						conga_assign_68_11,
						conga_assign_68_12,
						conga_assign_68_14,
						conga_assign_68_19,
						conga_assign_68_20,
						conga_assign_68_21,
						conga_assign_68_30,
						conga_assign_68_32,
						conga_assign_68_34,
						conga_assign_68_35,
						conga_assign_68_37,
						conga_assign_68_38,
						conga_assign_68_40,
						conga_assign_68_43,
						conga_assign_68_48,
						conga_assign_68_49,
						conga_assign_68_50,
						conga_assign_68_53,
						conga_assign_68_61,
						conga_assign_68_63,
						conga_assign_68_64,
						conga_assign_68_66,
						conga_assign_68_68,
						conga_assign_68_69,
						conga_assign_68_74,
						conga_assign_68_75,
						conga_assign_68_77,
						conga_assign_68_78,
						conga_assign_68_81,
						conga_assign_68_82,
						conga_assign_68_85,
						conga_assign_68_89,
						conga_assign_68_91,
						conga_assign_68_92,
						conga_assign_68_98,
						conga_assign_68_101,
						conga_assign_68_104,
						conga_assign_68_106,
						conga_assign_68_107,
						conga_assign_68_109,
						conga_assign_68_110,
						conga_assign_68_113,
						conga_assign_68_115,
						conga_assign_68_116,
						conga_assign_68_117,
						conga_assign_68_119,
						conga_assign_68_122,
						conga_assign_68_125,
						conga_assign_68_127,
						conga_assign_68_129,
						conga_assign_68_131,
						conga_assign_68_133,
						conga_assign_68_136,
						conga_assign_68_139,
						conga_assign_68_140,
						conga_assign_68_143,
						conga_assign_68_145,
						conga_assign_68_151,
						conga_assign_68_154,
						conga_assign_68_156,
						conga_assign_68_157,
						conga_assign_68_159,
						conga_assign_68_162,
						conga_assign_68_163,
						conga_assign_68_166,
						conga_assign_68_167,
			
						conga_direct_assign_68,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	