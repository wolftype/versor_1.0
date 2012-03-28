
#ifndef conga_assign_Biv_ip_Sph_con_h_included
#define conga_assign_Biv_ip_Sph_con_h_included
#include "conga_assign_Biv_ip_Sph.h"
	
	
	#ifdef __cplusplus
	extern "C" {
	#endif

	#ifndef	conga_assign_Func_ptr
	typedef void (*conga_assign_Func_ptr)(double*, double*);
	#endif
	
	void conga_assign_Biv_ip_Sph_fn(int, double *, double *);
	
	conga_assign_Func_ptr conga_assign_Biv_ip_Sph_func[68] = {
						conga_assign_166_4,
						conga_assign_166_8,
						conga_assign_166_11,
						conga_assign_166_12,
						conga_assign_166_15,
						conga_assign_166_20,
						conga_assign_166_21,
						conga_assign_166_27,
						conga_assign_166_30,
						conga_assign_166_31,
						conga_assign_166_32,
						conga_assign_166_33,
						conga_assign_166_34,
						conga_assign_166_35,
						conga_assign_166_36,
						conga_assign_166_37,
						conga_assign_166_38,
						conga_assign_166_39,
						conga_assign_166_40,
						conga_assign_166_43,
						conga_assign_166_48,
						conga_assign_166_49,
						conga_assign_166_50,
						conga_assign_166_51,
						conga_assign_166_53,
						conga_assign_166_61,
						conga_assign_166_63,
						conga_assign_166_64,
						conga_assign_166_68,
						conga_assign_166_69,
						conga_assign_166_75,
						conga_assign_166_78,
						conga_assign_166_82,
						conga_assign_166_85,
						conga_assign_166_86,
						conga_assign_166_89,
						conga_assign_166_91,
						conga_assign_166_92,
						conga_assign_166_95,
						conga_assign_166_98,
						conga_assign_166_101,
						conga_assign_166_104,
						conga_assign_166_107,
						conga_assign_166_110,
						conga_assign_166_115,
						conga_assign_166_117,
						conga_assign_166_119,
						conga_assign_166_122,
						conga_assign_166_127,
						conga_assign_166_129,
						conga_assign_166_131,
						conga_assign_166_133,
						conga_assign_166_136,
						conga_assign_166_139,
						conga_assign_166_140,
						conga_assign_166_143,
						conga_assign_166_145,
						conga_assign_166_147,
						conga_assign_166_151,
						conga_assign_166_154,
						conga_assign_166_156,
						conga_assign_166_157,
						conga_assign_166_159,
						conga_assign_166_162,
						conga_assign_166_163,
						conga_assign_166_166,
						conga_assign_166_167,
			
						conga_direct_assign_166,
			
		};
		
	
	
	#ifdef __cplusplus
	}
	#endif
	#endif
		
	