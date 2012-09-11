
#include "conga_op_Trs_Dlp.h"


double * conga_op_70_1(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_2(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_3(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_4(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_5(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[1] ;
	
	
	//_e2ni
	r[4] = a[1] * b[1] ;
	
	
	//_e3ni
	r[5] = a[2] * b[1] ;
	
	
	//_noni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[7] = a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_70_7(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[6] * b[3]  * -1 ;
	
	
	//_e123ni
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_8(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_70_9(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_70_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_70_11(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_70_12(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_70_13(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_70_15(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_16(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_17(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_70_18(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_19(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_20(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_70_21(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_22(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_23(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_24(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_25(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_26(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[6] * b[3]  * -1 ;
	
	
	//_e123ni
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_27(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_70_28(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_70_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_70_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_31(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[1] ;
	
	
	//_e2noni
	r[8] = a[1] * b[1] ;
	
	
	//_e3noni
	r[9] = a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_70_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_70_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[7] = a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[1] ;
	
	
	//_e2noni
	r[11] = a[3] * b[2] ;
	
	
	//_e3noni
	r[12] = a[3] * b[3] ;
	
	
	//_e123noni
	r[13] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_70_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[1] * b[7] ;
	
	
	//_e3noni
	r[9] = a[2] * b[7] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_70_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[1] * b[4] ;
	
	
	//_e3noni
	r[9] = a[2] * b[4] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_70_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[3] * b[7]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[1] * b[4] ;
	
	
	//_e3noni
	r[9] = a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_70_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[7] = a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[4]  + a[3] * b[1] ;
	
	
	//_e2noni
	r[11] = a[1] * b[4]  + a[3] * b[2] ;
	
	
	//_e3noni
	r[12] = a[2] * b[4]  + a[3] * b[3] ;
	
	
	//_e123noni
	r[13] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_70_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[14]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_41(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[3] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[3] * b[2]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_70_42(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_70_43(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_70_44(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[1] ;
	
	
	//_e2ni
	r[4] = a[1] * b[1] ;
	
	
	//_e3ni
	r[5] = a[2] * b[1] ;
	
	
	//_noni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[7] = a[3] * b[2]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[3] * b[4]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_70_45(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_70_46(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[3] * b[5]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[3] * b[6]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[3] * b[7]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[11]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_47(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[5]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[7]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[14]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_48(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[10]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[3] * b[10]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_50(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_70_51(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_52(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_70_53(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_70_54(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_55(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[3] * b[3]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_56(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[3] * b[5]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[3] * b[6]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[14] = a[3] * b[7]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_57(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123ni
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_58(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[7]  + a[2] * b[5]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[7]  + a[2] * b[6]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123ni
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_59(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_60(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123ni
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_62(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_63(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_70_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_65(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_66(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_70_67(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_70_68(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_70_69(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_70(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_71(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_70_72(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[12]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_73(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_74(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_70_75(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_70_76(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_77(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_70_78(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_70_79(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e123ni
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_80(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123ni
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_81(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_70_82(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_70_83(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_70_84(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[5]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[6]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[14] = a[3] * b[10]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[11]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_86(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_87(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_88(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[5]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[7]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[14] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[14]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_90(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_91(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_70_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[1] * b[7] ;
	
	
	//_e3noni
	r[9] = a[2] * b[7] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_70_93(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_94(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[3] * b[5]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[3] * b[6]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[14] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_95(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_70_96(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_97(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[5]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[6]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[14] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_98(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_70_99(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_100(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_101(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_70_102(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_70_103(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[1] ;
	
	
	//_e2ni
	r[4] = a[1] * b[1] ;
	
	
	//_e3ni
	r[5] = a[2] * b[1] ;
	
	
	//_noni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[4]  + a[2] * b[2]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[1] ;
	
	
	//_e2noni
	r[11] = a[3] * b[2] ;
	
	
	//_e3noni
	r[12] = a[3] * b[3] ;
	
	
	//_e123noni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_70_105(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_106(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_70_107(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_108(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_109(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_110(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_70_111(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_70_112(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_70_113(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_114(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_115(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_70_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[1] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[2] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[3] ;
	
	
	//_e123noni
	r[13] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_70_118(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[5]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[7]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_119(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[12]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_70_120(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_70_121(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_122(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_70_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_70_125(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_70_126(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_128(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[5]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[7]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[14]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_129(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_70_130(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_70_131(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_70_132(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_134(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_135(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_137(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[5]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[7]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_70_139(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_140(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_70_141(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_142(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123ni
	r[9] = a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_70_144(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_145(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_70_146(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_148(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_149(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_70_150(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_151(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_152(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_70_153(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[1] ;
	
	
	//_e2ni
	r[4] = a[1] * b[1] ;
	
	
	//_e3ni
	r[5] = a[2] * b[1] ;
	
	
	//_noni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[2]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[3] * b[3]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[4]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_70_154(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_155(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_70_156(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[1] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[2] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[3] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_70_158(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_160(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_161(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_70_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_70_163(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_164(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_70_165(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_70_166(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_70_167(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[7] = a[0] * b[4] ;
	
	
	//_e2no
	r[8] = a[1] * b[4] ;
	
	
	//_e3no
	r[9] = a[2] * b[4] ;
	
	
	//_e1ni
	r[10] = a[0] * b[5]  + a[3] * b[1]  * -1 ;
	
	
	//_e2ni
	r[11] = a[1] * b[5]  + a[3] * b[2]  * -1 ;
	
	
	//_e3ni
	r[12] = a[2] * b[5]  + a[3] * b[3]  * -1 ;
	
	
	//_noni
	r[13] = a[3] * b[4]  * -1 ;
	
	
	//_e12no
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1 ;
	
	
	//_e13no
	r[15] = a[0] * b[11]  + a[2] * b[9]  * -1 ;
	
	
	//_e23no
	r[16] = a[1] * b[11]  + a[2] * b[10]  * -1 ;
	
	
	//_e12ni
	r[17] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[3] * b[6]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[18] = a[0] * b[14]  + a[2] * b[12]  * -1  + a[3] * b[7]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[19] = a[1] * b[14]  + a[2] * b[13]  * -1  + a[3] * b[8]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[20] = a[0] * b[15]  + a[3] * b[9] ;
	
	
	//_e2noni
	r[21] = a[1] * b[15]  + a[3] * b[10] ;
	
	
	//_e3noni
	r[22] = a[2] * b[15]  + a[3] * b[11] ;
	
	
	//_e123
	r[23] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	//_e12noni
	r[24] = a[0] * b[23]  + a[1] * b[22]  * -1  + a[3] * b[16]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[25] = a[0] * b[24]  + a[2] * b[22]  * -1  + a[3] * b[17]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[26] = a[1] * b[24]  + a[2] * b[23]  * -1  + a[3] * b[18]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[27] = a[0] * b[18]  + a[1] * b[17]  * -1  + a[2] * b[16] ;
	
	
	//_e123ni
	r[28] = a[0] * b[21]  + a[1] * b[20]  * -1  + a[2] * b[19]  + a[3] * b[25]  * -1  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123noni
	r[29] = a[0] * b[28]  + a[1] * b[27]  * -1  + a[2] * b[26]  + a[3] * b[29]  + a[4] * b[11]  + a[5] * b[10]  * -1  + a[6] * b[9] ;
	
	
	return r;
}


