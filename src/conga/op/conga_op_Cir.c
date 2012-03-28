
#include "conga_op_Cir.h"


double * conga_op_9_1(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_9_2(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_9_3(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_9_4(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_9_5(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[9] * b[0] ;
	
	
	//_e123ni
	r[4] = a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_9_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_7(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_9_8(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_9_9(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_11(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_12(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_15(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_9_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_20(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_21(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_22(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_23(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_24(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_26(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_27(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_29(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_9_30(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_9_31(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_9_32(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_9_33(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_9_34(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[7] ;
	
	
	return r;
}

double * conga_op_9_35(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_9_36(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_9_37(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_9_38(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[10] ;
	
	
	return r;
}

double * conga_op_9_39(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_9_40(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[10] ;
	
	
	return r;
}

double * conga_op_9_41(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_9_42(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_9_43(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_9_44(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[9] * b[0] ;
	
	
	//_e123ni
	r[4] = a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_9_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_46(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_9_47(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_9_48(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_9_49(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_9_50(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_51(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_9_52(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_9_53(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_54(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_55(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_56(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_57(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_58(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_9_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_60(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_9_61(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[10] ;
	
	
	return r;
}

double * conga_op_9_62(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_63(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_64(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[7] ;
	
	
	return r;
}

double * conga_op_9_65(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_66(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_67(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_9_68(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_69(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_70(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_72(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_74(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_75(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_76(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_77(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_78(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_79(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_80(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_81(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_82(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_84(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_85(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[7] ;
	
	
	return r;
}

double * conga_op_9_86(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_88(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_9_89(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[10] ;
	
	
	return r;
}

double * conga_op_9_90(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_91(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_92(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[7] ;
	
	
	return r;
}

double * conga_op_9_93(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_94(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_95(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_96(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_97(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_98(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_99(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_100(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_101(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_103(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[9] * b[0] ;
	
	
	//_e123ni
	r[4] = a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_9_104(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_9_105(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_106(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_107(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_9_108(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_109(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_110(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_111(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_9_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_114(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_9_115(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_9_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_117(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[7] ;
	
	
	return r;
}

double * conga_op_9_118(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_9_119(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_120(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_121(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_122(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_9_123(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_124(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_127(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[10] ;
	
	
	return r;
}

double * conga_op_9_128(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_9_129(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_9_130(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_131(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_9_132(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_133(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_9_134(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_135(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_136(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_9_137(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_9_138(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_139(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_9_140(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_9_141(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_142(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_143(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_9_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_145(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_146(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_147(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_9_148(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_149(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_9_150(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_151(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_152(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_9_153(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[9] * b[0] ;
	
	
	//_e123ni
	r[4] = a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_9_154(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_9_155(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_9_156(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_9_157(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[7] ;
	
	
	return r;
}

double * conga_op_9_158(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_159(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_9_160(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_161(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_9_162(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_9_163(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_9_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_165(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_9_166(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_9_167(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[5]  + a[3] * b[4]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1 ;
	
	
	//_e13noni
	r[11] = a[1] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[3]  + a[8] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[2] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[9] * b[4] ;
	
	
	//_e123ni
	r[14] = a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[9] * b[5] ;
	
	
	//_e123noni
	r[15] = a[0] * b[14]  * -1  + a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[10]  * -1  + a[5] * b[9]  + a[6] * b[8]  + a[7] * b[7]  * -1  + a[8] * b[6]  + a[9] * b[15] ;
	
	
	return r;
}


