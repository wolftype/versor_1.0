		
	#include "conga_assign_Ori_con.h"
	
		int conga_assign_Ori_switch[167] = {
	 
	28,  
	0,  
	28,  
	28,  
	1,  
	28,  
	2,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	3,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	4,  
	28,  
	28,  
	5,  
	28,  
	6,  
	7,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	8,  
	9,  
	10,  
	28,  
	11,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	12,  
	28,  
	28,  
	28,  
	13,  
	28,  
	14,  
	28,  
	28,  
	28,  
	15,  
	28,  
	28,  
	16,  
	28,  
	28,  
	28,  
	28,  
	28,  
	17,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	18,  
	28,  
	28,  
	28,  
	19,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	20,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	21,  
	28,  
	22,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	28,  
	23,  
	24,  
	28,  
	25,  
	28,  
	28,  
	28,  
	28,  
	28,  
	26,  
	28,  
	28,  
	28,  
	28,  
	28,  
	27, 
	};
	
	
		int conga_assign_Ori_base_index[1] = { 4, };
	
	
	void conga_assign_Ori_fn(int _idx, double * a, double *r){
	
		conga_assign_Ori_func[ conga_assign_Ori_switch [_idx] ](a, r);
	}


	

	