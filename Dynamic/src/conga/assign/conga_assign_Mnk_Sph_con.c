		
	#include "conga_assign_Mnk_Sph_con.h"
	
		int conga_assign_Mnk_Sph_switch[167] = {
	 
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	0,  
	60,  
	1,  
	2,  
	60,  
	60,  
	3,  
	60,  
	60,  
	4,  
	60,  
	5,  
	60,  
	6,  
	60,  
	60,  
	7,  
	60,  
	60,  
	8,  
	60,  
	9,  
	60,  
	60,  
	10,  
	60,  
	11,  
	12,  
	13,  
	60,  
	14,  
	60,  
	15,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	16,  
	17,  
	18,  
	19,  
	60,  
	20,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	21,  
	60,  
	22,  
	23,  
	60,  
	24,  
	60,  
	25,  
	26,  
	60,  
	60,  
	60,  
	60,  
	27,  
	28,  
	60,  
	29,  
	30,  
	60,  
	60,  
	31,  
	32,  
	60,  
	60,  
	33,  
	60,  
	60,  
	60,  
	34,  
	60,  
	35,  
	36,  
	60,  
	60,  
	37,  
	60,  
	60,  
	38,  
	60,  
	60,  
	39,  
	60,  
	60,  
	60,  
	60,  
	40,  
	60,  
	60,  
	41,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	42,  
	60,  
	60,  
	43,  
	60,  
	60,  
	60,  
	60,  
	60,  
	44,  
	60,  
	45,  
	60,  
	46,  
	60,  
	47,  
	60,  
	48,  
	60,  
	60,  
	49,  
	60,  
	60,  
	60,  
	50,  
	60,  
	60,  
	51,  
	60,  
	60,  
	60,  
	52,  
	60,  
	53,  
	60,  
	54,  
	60,  
	60,  
	55,  
	60,  
	56,  
	60,  
	60,  
	57,  
	60,  
	60,  
	58,  
	60,  
	60,  
	60,  
	60,  
	59, 
	};
	
	
		int conga_assign_Mnk_Sph_base_index[5] = { 6,7,8,29,30, };
	
	
	void conga_assign_Mnk_Sph_fn(int _idx, double * a, double *r){
	
		conga_assign_Mnk_Sph_func[ conga_assign_Mnk_Sph_switch [_idx] ](a, r);
	}


	

	