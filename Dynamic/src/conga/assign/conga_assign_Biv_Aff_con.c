		
	#include "conga_assign_Biv_Aff_con.h"
	
		int conga_assign_Biv_Aff_switch[167] = {
	 
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	0,  
	68,  
	1,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	2,  
	68,  
	68,  
	68,  
	68,  
	68,  
	3,  
	4,  
	68,  
	5,  
	6,  
	68,  
	7,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	8,  
	68,  
	68,  
	9,  
	68,  
	10,  
	11,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	12,  
	13,  
	14,  
	15,  
	16,  
	68,  
	17,  
	68,  
	18,  
	68,  
	68,  
	19,  
	68,  
	68,  
	68,  
	68,  
	20,  
	21,  
	22,  
	23,  
	68,  
	68,  
	24,  
	68,  
	68,  
	25,  
	26,  
	68,  
	68,  
	27,  
	28,  
	68,  
	68,  
	29,  
	30,  
	68,  
	31,  
	68,  
	68,  
	32,  
	33,  
	68,  
	34,  
	35,  
	68,  
	36,  
	37,  
	68,  
	38,  
	68,  
	68,  
	39,  
	68,  
	68,  
	40,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	41,  
	68,  
	42,  
	43,  
	68,  
	44,  
	45,  
	68,  
	46,  
	68,  
	47,  
	68,  
	48,  
	68,  
	49,  
	68,  
	50,  
	51,  
	68,  
	52,  
	53,  
	68,  
	68,  
	54,  
	55,  
	68,  
	68,  
	68,  
	56,  
	68,  
	57,  
	68,  
	58,  
	68,  
	59,  
	60,  
	68,  
	61,  
	68,  
	68,  
	62,  
	68,  
	63,  
	64,  
	68,  
	68,  
	65,  
	66,  
	68,  
	67, 
	};
	
	
		int conga_assign_Biv_Aff_base_index[7] = { 1,2,3,16,17,18,25, };
	
	
	void conga_assign_Biv_Aff_fn(int _idx, double * a, double *r){
	
		conga_assign_Biv_Aff_func[ conga_assign_Biv_Aff_switch [_idx] ](a, r);
	}


	

	