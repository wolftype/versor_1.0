
#include "conga_op_Pnt_Lin.h"


double * conga_op_131_1(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_2(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_3(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_131_4(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_5(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[9] = a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_131_7(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_8(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_131_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_131_11(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_12(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_13(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_131_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_131_15(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_16(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_131_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_131_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_131_20(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_21(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_22(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_23(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_24(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_25(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_131_26(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_27(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_131_29(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_30(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[3] * b[3]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[4] * b[3]  * -1  + a[5] * b[2]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_31(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[1]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_32(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[3] * b[6]  * -1  + a[5] * b[4]  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_33(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[6] * b[3]  + a[8] * b[1]  * -1  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[7] * b[3]  + a[8] * b[2]  * -1  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[14] = a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_34(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_35(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[4]  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[4]  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[4]  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_36(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_37(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[4]  + a[3] * b[3]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_38(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_39(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[4]  + a[6] * b[3]  + a[8] * b[1]  * -1  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[14] = a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_40(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_41(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_42(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123noni
	r[6] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_131_43(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_44(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[9] = a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_45(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_46(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[11]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_47(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[14]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[6]  + a[3] * b[5]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_131_49(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_50(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_51(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_52(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_131_53(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_54(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[7]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_55(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[9] * b[3]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_56(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[7]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_57(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_58(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_59(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_131_60(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_61(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_62(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[13]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_63(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_64(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[7]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_65(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[9]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_66(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_67(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_131_68(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_69(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_70(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_71(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_131_72(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[12]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_73(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_131_74(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_75(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_76(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_77(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_78(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_79(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_80(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_81(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_82(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_131_84(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[10]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_85(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[7]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_86(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_87(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_88(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_89(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_90(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[13]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_91(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_92(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_93(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[9] * b[9]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_94(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_95(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_96(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[10]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_97(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_98(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_99(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_100(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_101(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_102(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_131_103(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_104(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[3] * b[6]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[8] * b[1]  * -1  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_105(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_106(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_131_108(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_109(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_110(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_111(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123noni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_131_112(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_131_114(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_115(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_131_117(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[8] * b[1]  * -1  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_118(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_119(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_131_121(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_131_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_131_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_127(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_128(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[14]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_129(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_131_131(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_132(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[13]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_133(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_134(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[9]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_135(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[13]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_136(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_137(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[6]  + a[3] * b[5]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_131_140(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_141(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_142(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[9] * b[6]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_143(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[3] * b[6]  * -1  + a[5] * b[4]  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_131_145(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_146(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[9] * b[6]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_147(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_148(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[6]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_149(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_131_150(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_151(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_152(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_153(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_131_155(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_156(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_157(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[8] * b[1]  * -1  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_158(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[9]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_159(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_160(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_131_161(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_131_162(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[11] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[12] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3]  + a[12] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_131_163(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_131_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_131_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_131_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[6]  + a[3] * b[5]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_131_167(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12no
	r[10] = a[0] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	//_e13no
	r[11] = a[1] * b[4]  + a[3] * b[3]  * -1  + a[5] * b[1] ;
	
	
	//_e23no
	r[12] = a[2] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2] ;
	
	
	//_e12ni
	r[13] = a[0] * b[5]  + a[6] * b[2]  * -1  + a[7] * b[1] ;
	
	
	//_e13ni
	r[14] = a[1] * b[5]  + a[6] * b[3]  * -1  + a[8] * b[1] ;
	
	
	//_e23ni
	r[15] = a[2] * b[5]  + a[7] * b[3]  * -1  + a[8] * b[2] ;
	
	
	//_e1noni
	r[16] = a[3] * b[5]  + a[6] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e2noni
	r[17] = a[4] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e3noni
	r[18] = a[5] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[3] ;
	
	
	//_e123
	r[19] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12noni
	r[20] = a[0] * b[15]  + a[3] * b[13]  * -1  + a[4] * b[12]  + a[6] * b[10]  + a[7] * b[9]  * -1  + a[9] * b[6]  + a[10] * b[0] ;
	
	
	//_e13noni
	r[21] = a[1] * b[15]  + a[3] * b[14]  * -1  + a[5] * b[12]  + a[6] * b[11]  + a[8] * b[9]  * -1  + a[9] * b[7]  + a[11] * b[0] ;
	
	
	//_e23noni
	r[22] = a[2] * b[15]  + a[4] * b[14]  * -1  + a[5] * b[13]  + a[7] * b[11]  + a[8] * b[10]  * -1  + a[9] * b[8]  + a[12] * b[0] ;
	
	
	//_e123no
	r[23] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6] ;
	
	
	//_e123ni
	r[24] = a[0] * b[14]  + a[1] * b[13]  * -1  + a[2] * b[12]  + a[6] * b[8]  + a[7] * b[7]  * -1  + a[8] * b[6]  + a[13] * b[0] ;
	
	
	//_e123noni
	r[25] = a[0] * b[24]  + a[1] * b[23]  * -1  + a[2] * b[22]  + a[3] * b[21]  + a[4] * b[20]  * -1  + a[5] * b[19]  + a[6] * b[18]  * -1  + a[7] * b[17]  + a[8] * b[16]  * -1  + a[9] * b[25]  + a[10] * b[3]  + a[11] * b[2]  * -1  + a[12] * b[1]  + a[13] * b[4]  * -1 ;
	
	
	return r;
}


