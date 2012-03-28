
#include "conga_op_Inf_Cir.h"


double * conga_op_101_1(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123ni
	r[9] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_2(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_3(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_4(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_5(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[2] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[9] = a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_7(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_8(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_11(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_12(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_15(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_16(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_101_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_20(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_21(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_22(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_23(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_24(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_26(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_27(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_29(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123ni
	r[9] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_30(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123ni
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_31(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[1]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[1]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[1]  + a[8] * b[0] ;
	
	
	//_e123ni
	r[9] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_32(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_33(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[3]  + a[5] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_34(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[7]  + a[8] * b[0] ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_35(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[4]  + a[8] * b[0] ;
	
	
	//_e123ni
	r[9] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_36(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_37(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[4]  + a[8] * b[0] ;
	
	
	//_e123ni
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_38(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[10]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[10]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_39(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  + a[3] * b[3]  + a[5] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_40(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[10]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[10]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_41(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_42(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_43(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_44(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[2] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_45(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_46(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_47(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[6]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_101_49(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_50(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_51(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_52(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_101_53(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_54(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_55(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_56(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_57(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_58(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_60(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_61(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[10]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[10]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_62(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_63(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_64(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[7]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_65(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_66(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_67(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_101_68(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_69(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_70(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_72(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_74(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_75(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_76(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_77(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_78(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_79(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_80(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_81(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_82(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_84(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_85(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[7]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_86(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_87(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_88(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_89(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[10]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[10]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_90(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_91(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_92(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[7]  + a[8] * b[0] ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_93(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_94(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_95(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_96(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_97(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_98(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_99(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_100(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_101(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_103(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[2] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_104(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[3]  + a[5] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_105(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_106(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_101_108(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_109(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_110(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_111(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_101_112(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_114(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_115(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_117(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[7]  + a[3] * b[3]  + a[5] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_118(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_119(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_121(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_101_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_101_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_127(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[10]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[10]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_128(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_129(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_131(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_132(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_133(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_134(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_135(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_136(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_137(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[6]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_101_140(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_141(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_142(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_143(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_101_145(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_146(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_147(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_148(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_149(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_101_150(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_151(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_152(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_153(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[2] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_101_155(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_156(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_157(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[7]  + a[3] * b[3]  + a[5] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_158(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_159(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_160(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_101_161(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_101_162(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12noni
	r[6] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_101_163(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_101_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_101_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[6]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_101_167(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_e12no
	r[6] = a[0] * b[4] ;
	
	
	//_e13no
	r[7] = a[1] * b[4] ;
	
	
	//_e23no
	r[8] = a[2] * b[4] ;
	
	
	//_e12ni
	r[9] = a[0] * b[5]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	//_e13ni
	r[10] = a[1] * b[5]  + a[3] * b[3]  * -1  + a[5] * b[1] ;
	
	
	//_e23ni
	r[11] = a[2] * b[5]  + a[4] * b[3]  * -1  + a[5] * b[2] ;
	
	
	//_e1noni
	r[12] = a[3] * b[4]  * -1 ;
	
	
	//_e2noni
	r[13] = a[4] * b[4]  * -1 ;
	
	
	//_e3noni
	r[14] = a[5] * b[4]  * -1 ;
	
	
	//_e123
	r[15] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12noni
	r[16] = a[0] * b[15]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[17] = a[1] * b[15]  + a[3] * b[11]  + a[5] * b[9]  * -1  + a[7] * b[0] ;
	
	
	//_e23noni
	r[18] = a[2] * b[15]  + a[4] * b[11]  + a[5] * b[10]  * -1  + a[8] * b[0] ;
	
	
	//_e123no
	r[19] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9] ;
	
	
	//_e123ni
	r[20] = a[0] * b[14]  + a[1] * b[13]  * -1  + a[2] * b[12]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[21] = a[0] * b[24]  + a[1] * b[23]  * -1  + a[2] * b[22]  + a[3] * b[18]  * -1  + a[4] * b[17]  + a[5] * b[16]  * -1  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[4]  * -1 ;
	
	
	return r;
}


