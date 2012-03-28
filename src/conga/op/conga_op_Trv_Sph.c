
#include "conga_op_Trv_Sph.h"


double * conga_op_91_1(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_2(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[10] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_91_3(double * a, double * b, double *r) { 
	
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
	r[6] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_91_4(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_91_5(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1] ;
	
	
	//_e2noni
	r[7] = a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[1] ;
	
	
	//_e123noni
	r[9] = a[9] * b[1]  + a[10] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_91_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_7(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[4]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_8(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_91_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_91_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_11(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[7]  * -1  + a[4] * b[6] ;
	
	
	//_e13noni
	r[1] = a[3] * b[8]  * -1  + a[5] * b[6] ;
	
	
	//_e23noni
	r[2] = a[4] * b[8]  * -1  + a[5] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_91_12(double * a, double * b, double *r) { 
	
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

double * conga_op_91_13(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_15(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_91_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_20(double * a, double * b, double *r) { 
	
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

double * conga_op_91_21(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_91_22(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_91_23(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_24(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_26(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_27(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_29(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_30(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[3]  * -1  + a[5] * b[1]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[3]  * -1  + a[5] * b[2]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_31(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[1]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[1]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[1]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_32(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_33(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_34(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_35(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[4]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_36(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_37(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  + a[3] * b[3]  * -1  + a[5] * b[1]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_38(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_39(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[4]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_40(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_41(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[10] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_91_42(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_91_43(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_91_44(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1] ;
	
	
	//_e2noni
	r[7] = a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[1] ;
	
	
	//_e123noni
	r[9] = a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[9] * b[1]  + a[10] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_91_45(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_91_46(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[4]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_47(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[4]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[6]  + a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_91_49(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_50(double * a, double * b, double *r) { 
	
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

double * conga_op_91_51(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_91_52(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_91_53(double * a, double * b, double *r) { 
	
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

double * conga_op_91_54(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_91_55(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_56(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_57(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_58(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[4]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_59(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_60(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[4]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_61(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_62(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_91_63(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_91_64(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[7]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_65(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_66(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_67(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_91_68(double * a, double * b, double *r) { 
	
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

double * conga_op_91_69(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_91_70(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_91_71(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_72(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_74(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_75(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[7]  * -1  + a[4] * b[6] ;
	
	
	//_e13noni
	r[1] = a[3] * b[8]  * -1  + a[5] * b[6] ;
	
	
	//_e23noni
	r[2] = a[4] * b[8]  * -1  + a[5] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_91_76(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_77(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_78(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_91_79(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_91_80(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_81(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_82(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_84(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_85(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[7]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_86(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_91_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_88(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[4]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_89(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_90(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_91(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_92(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_93(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_94(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_95(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_96(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_91_97(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_98(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_99(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_100(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_91_101(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_91_102(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_103(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1] ;
	
	
	//_e2noni
	r[7] = a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[1] ;
	
	
	//_e123noni
	r[9] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[9] * b[1]  + a[10] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_91_104(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_105(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_106(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_91_108(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_109(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_110(double * a, double * b, double *r) { 
	
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

double * conga_op_91_111(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_91_112(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_91_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_114(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_91_115(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_91_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_117(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_118(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[4]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_119(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[7]  * -1  + a[4] * b[6] ;
	
	
	//_e13noni
	r[1] = a[3] * b[8]  * -1  + a[5] * b[6] ;
	
	
	//_e23noni
	r[2] = a[4] * b[8]  * -1  + a[5] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_91_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_91_121(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_91_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_91_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_91_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_91_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_91_127(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_128(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[4]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_129(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_91_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_91_131(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_91_132(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_91_133(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_134(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_135(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_136(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_137(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[4]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_91_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[6]  + a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_91_140(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_91_141(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_142(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_143(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_145(double * a, double * b, double *r) { 
	
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

double * conga_op_91_146(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_147(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_148(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_149(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_91_150(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_151(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_91_152(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_91_153(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1] ;
	
	
	//_e2noni
	r[7] = a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[1] ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[9] * b[1]  + a[10] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_91_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_91_155(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_91_156(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_91_157(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_158(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_91_159(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_160(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_91_161(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[10] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_91_162(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[7] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[8] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[8] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_91_163(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_91_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_91_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_91_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[6]  + a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_91_167(double * a, double * b, double *r) { 
	
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
	
	
	//_e12no
	r[6] = a[0] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	//_e13no
	r[7] = a[1] * b[4]  + a[3] * b[3]  * -1  + a[5] * b[1] ;
	
	
	//_e23no
	r[8] = a[2] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2] ;
	
	
	//_e12ni
	r[9] = a[0] * b[5] ;
	
	
	//_e13ni
	r[10] = a[1] * b[5] ;
	
	
	//_e23ni
	r[11] = a[2] * b[5] ;
	
	
	//_e1noni
	r[12] = a[3] * b[5] ;
	
	
	//_e2noni
	r[13] = a[4] * b[5] ;
	
	
	//_e3noni
	r[14] = a[5] * b[5] ;
	
	
	//_e123
	r[15] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12noni
	r[16] = a[0] * b[15]  + a[3] * b[13]  * -1  + a[4] * b[12]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[17] = a[1] * b[15]  + a[3] * b[14]  * -1  + a[5] * b[12]  + a[7] * b[0] ;
	
	
	//_e23noni
	r[18] = a[2] * b[15]  + a[4] * b[14]  * -1  + a[5] * b[13]  + a[8] * b[0] ;
	
	
	//_e123no
	r[19] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[20] = a[0] * b[14]  + a[1] * b[13]  * -1  + a[2] * b[12]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[21] = a[0] * b[24]  + a[1] * b[23]  * -1  + a[2] * b[22]  + a[3] * b[21]  + a[4] * b[20]  * -1  + a[5] * b[19]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[5]  + a[10] * b[4]  * -1 ;
	
	
	return r;
}


