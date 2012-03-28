
#include "conga_op_Pnt_Cir.h"


double * conga_op_129_1(double * a, double * b, double *r) { 
	
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
	
	
	//_e123no
	r[13] = a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_2(double * a, double * b, double *r) { 
	
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
	r[6] = a[14] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_3(double * a, double * b, double *r) { 
	
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
	r[6] = a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_129_4(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_129_5(double * a, double * b, double *r) { 
	
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
	r[9] = a[13] * b[1]  + a[14] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_129_7(double * a, double * b, double *r) { 
	
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
	r[10] = a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[4]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_8(double * a, double * b, double *r) { 
	
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

double * conga_op_129_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_129_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_129_11(double * a, double * b, double *r) { 
	
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

double * conga_op_129_12(double * a, double * b, double *r) { 
	
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

double * conga_op_129_13(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_129_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_129_15(double * a, double * b, double *r) { 
	
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

double * conga_op_129_16(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_129_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_129_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_129_20(double * a, double * b, double *r) { 
	
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

double * conga_op_129_21(double * a, double * b, double *r) { 
	
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

double * conga_op_129_22(double * a, double * b, double *r) { 
	
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
	r[10] = a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3] ;
	
	
	return r;
}

double * conga_op_129_23(double * a, double * b, double *r) { 
	
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

double * conga_op_129_24(double * a, double * b, double *r) { 
	
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

double * conga_op_129_25(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_129_26(double * a, double * b, double *r) { 
	
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
	r[10] = a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_27(double * a, double * b, double *r) { 
	
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

double * conga_op_129_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_129_29(double * a, double * b, double *r) { 
	
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
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_30(double * a, double * b, double *r) { 
	
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
	
	
	//_e123no
	r[13] = a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_31(double * a, double * b, double *r) { 
	
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
	
	
	//_e123no
	r[13] = a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_32(double * a, double * b, double *r) { 
	
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
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_33(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_34(double * a, double * b, double *r) { 
	
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
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_35(double * a, double * b, double *r) { 
	
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
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_36(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_37(double * a, double * b, double *r) { 
	
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
	
	
	//_e123no
	r[13] = a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_38(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_39(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_40(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_41(double * a, double * b, double *r) { 
	
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
	r[6] = a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[14] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_42(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_129_43(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_129_44(double * a, double * b, double *r) { 
	
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
	r[9] = a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[13] * b[1]  + a[14] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_45(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_129_46(double * a, double * b, double *r) { 
	
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
	r[10] = a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[11]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[4]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_47(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[14]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[4]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_48(double * a, double * b, double *r) { 
	
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

double * conga_op_129_49(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_50(double * a, double * b, double *r) { 
	
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

double * conga_op_129_51(double * a, double * b, double *r) { 
	
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

double * conga_op_129_52(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_129_53(double * a, double * b, double *r) { 
	
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

double * conga_op_129_54(double * a, double * b, double *r) { 
	
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
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[7]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3] ;
	
	
	return r;
}

double * conga_op_129_55(double * a, double * b, double *r) { 
	
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

double * conga_op_129_56(double * a, double * b, double *r) { 
	
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
	r[10] = a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[7]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_57(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_58(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[4]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_59(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_129_60(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[4]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_61(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_62(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[13]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3] ;
	
	
	return r;
}

double * conga_op_129_63(double * a, double * b, double *r) { 
	
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

double * conga_op_129_64(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_65(double * a, double * b, double *r) { 
	
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

double * conga_op_129_66(double * a, double * b, double *r) { 
	
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

double * conga_op_129_67(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_129_68(double * a, double * b, double *r) { 
	
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

double * conga_op_129_69(double * a, double * b, double *r) { 
	
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

double * conga_op_129_70(double * a, double * b, double *r) { 
	
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
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3] ;
	
	
	return r;
}

double * conga_op_129_71(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_129_72(double * a, double * b, double *r) { 
	
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

double * conga_op_129_73(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_129_74(double * a, double * b, double *r) { 
	
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

double * conga_op_129_75(double * a, double * b, double *r) { 
	
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

double * conga_op_129_76(double * a, double * b, double *r) { 
	
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

double * conga_op_129_77(double * a, double * b, double *r) { 
	
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

double * conga_op_129_78(double * a, double * b, double *r) { 
	
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

double * conga_op_129_79(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3] ;
	
	
	return r;
}

double * conga_op_129_80(double * a, double * b, double *r) { 
	
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

double * conga_op_129_81(double * a, double * b, double *r) { 
	
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

double * conga_op_129_82(double * a, double * b, double *r) { 
	
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

double * conga_op_129_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_129_84(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[10]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_85(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_86(double * a, double * b, double *r) { 
	
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

double * conga_op_129_87(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_88(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[4]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_89(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_90(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[13]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_91(double * a, double * b, double *r) { 
	
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

double * conga_op_129_92(double * a, double * b, double *r) { 
	
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
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_93(double * a, double * b, double *r) { 
	
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

double * conga_op_129_94(double * a, double * b, double *r) { 
	
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
	r[10] = a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_95(double * a, double * b, double *r) { 
	
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

double * conga_op_129_96(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[10]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3] ;
	
	
	return r;
}

double * conga_op_129_97(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_98(double * a, double * b, double *r) { 
	
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

double * conga_op_129_99(double * a, double * b, double *r) { 
	
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

double * conga_op_129_100(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3] ;
	
	
	return r;
}

double * conga_op_129_101(double * a, double * b, double *r) { 
	
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

double * conga_op_129_102(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_129_103(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[13] * b[1]  + a[14] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_104(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_105(double * a, double * b, double *r) { 
	
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

double * conga_op_129_106(double * a, double * b, double *r) { 
	
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

double * conga_op_129_107(double * a, double * b, double *r) { 
	
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

double * conga_op_129_108(double * a, double * b, double *r) { 
	
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

double * conga_op_129_109(double * a, double * b, double *r) { 
	
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

double * conga_op_129_110(double * a, double * b, double *r) { 
	
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

double * conga_op_129_111(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_129_112(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_129_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_129_114(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[14] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_115(double * a, double * b, double *r) { 
	
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

double * conga_op_129_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_129_117(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_118(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[4]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_119(double * a, double * b, double *r) { 
	
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

double * conga_op_129_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_129_121(double * a, double * b, double *r) { 
	
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

double * conga_op_129_122(double * a, double * b, double *r) { 
	
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

double * conga_op_129_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_129_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_127(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_128(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[14]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[4]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_129(double * a, double * b, double *r) { 
	
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

double * conga_op_129_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_129_131(double * a, double * b, double *r) { 
	
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

double * conga_op_129_132(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[13]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3] ;
	
	
	return r;
}

double * conga_op_129_133(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_134(double * a, double * b, double *r) { 
	
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

double * conga_op_129_135(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[13]  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_136(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_137(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[4]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_139(double * a, double * b, double *r) { 
	
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

double * conga_op_129_140(double * a, double * b, double *r) { 
	
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

double * conga_op_129_141(double * a, double * b, double *r) { 
	
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

double * conga_op_129_142(double * a, double * b, double *r) { 
	
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

double * conga_op_129_143(double * a, double * b, double *r) { 
	
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
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_129_145(double * a, double * b, double *r) { 
	
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

double * conga_op_129_146(double * a, double * b, double *r) { 
	
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

double * conga_op_129_147(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_148(double * a, double * b, double *r) { 
	
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

double * conga_op_129_149(double * a, double * b, double *r) { 
	
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

double * conga_op_129_150(double * a, double * b, double *r) { 
	
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

double * conga_op_129_151(double * a, double * b, double *r) { 
	
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

double * conga_op_129_152(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[14] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_153(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[13] * b[1]  + a[14] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_154(double * a, double * b, double *r) { 
	
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

double * conga_op_129_155(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[14] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_156(double * a, double * b, double *r) { 
	
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

double * conga_op_129_157(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_158(double * a, double * b, double *r) { 
	
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

double * conga_op_129_159(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_160(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[13] * b[3] ;
	
	
	return r;
}

double * conga_op_129_161(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[10] * b[2]  + a[11] * b[1]  * -1  + a[12] * b[0]  + a[14] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_129_162(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[14] * b[0] ;
	
	
	return r;
}

double * conga_op_129_163(double * a, double * b, double *r) { 
	
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

double * conga_op_129_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_129_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_129_166(double * a, double * b, double *r) { 
	
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

double * conga_op_129_167(double * a, double * b, double *r) { 
	
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
	r[23] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[13] * b[0] ;
	
	
	//_e123ni
	r[24] = a[0] * b[14]  + a[1] * b[13]  * -1  + a[2] * b[12]  + a[6] * b[8]  + a[7] * b[7]  * -1  + a[8] * b[6]  + a[14] * b[0] ;
	
	
	//_e123noni
	r[25] = a[0] * b[24]  + a[1] * b[23]  * -1  + a[2] * b[22]  + a[3] * b[21]  + a[4] * b[20]  * -1  + a[5] * b[19]  + a[6] * b[18]  * -1  + a[7] * b[17]  + a[8] * b[16]  * -1  + a[9] * b[25]  + a[10] * b[3]  + a[11] * b[2]  * -1  + a[12] * b[1]  + a[13] * b[5]  + a[14] * b[4]  * -1 ;
	
	
	return r;
}


