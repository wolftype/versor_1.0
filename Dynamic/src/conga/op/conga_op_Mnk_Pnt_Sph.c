
#include "conga_op_Mnk_Pnt_Sph.h"


double * conga_op_158_1(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_2(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[8] * b[0]  * -1 ;
	
	
	//_e123no
	r[6] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_158_3(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_158_4(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_158_5(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[5] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e123no
	r[9] = a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_158_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_158_7(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_e12noni
	r[9] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[12] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[13] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_158_8(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[9] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[8] * b[3]  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_158_9(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_158_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_11(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_op_158_12(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_13(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_158_15(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_158_16(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_158_18(double * a, double * b, double *r) { 
	
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

double * conga_op_158_19(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_20(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_21(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_158_22(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[1] * b[3] ;
	
	
	//_e3ni
	r[5] = a[2] * b[3] ;
	
	
	//_e12noni
	r[6] = a[3] * b[3] ;
	
	
	//_e13noni
	r[7] = a[4] * b[3] ;
	
	
	//_e23noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123no
	r[9] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_23(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_24(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_158_26(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[9] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[10] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_27(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[5]  + a[7] * b[4]  * -1  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_op_158_28(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_31(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[1] ;
	
	
	//_e2noni
	r[10] = a[1] * b[1] ;
	
	
	//_e3noni
	r[11] = a[2] * b[1] ;
	
	
	//_e123
	r[12] = a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[9] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[7] ;
	
	
	//_e2noni
	r[10] = a[1] * b[7] ;
	
	
	//_e3noni
	r[11] = a[2] * b[7] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[9] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[4] ;
	
	
	//_e2noni
	r[10] = a[1] * b[4] ;
	
	
	//_e3noni
	r[11] = a[2] * b[4] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[9] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[4] ;
	
	
	//_e2noni
	r[10] = a[1] * b[4] ;
	
	
	//_e3noni
	r[11] = a[2] * b[4] ;
	
	
	//_e123
	r[12] = a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[9] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[10] ;
	
	
	//_e2noni
	r[10] = a[1] * b[10] ;
	
	
	//_e3noni
	r[11] = a[2] * b[10] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[9]  * -1  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[9] * b[10]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[4] ;
	
	
	//_e2noni
	r[10] = a[1] * b[4] ;
	
	
	//_e3noni
	r[11] = a[2] * b[4] ;
	
	
	//_e123
	r[12] = a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[10] ;
	
	
	//_e2noni
	r[10] = a[1] * b[10] ;
	
	
	//_e3noni
	r[11] = a[2] * b[10] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[9]  * -1  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[9] * b[10]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_41(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[8] * b[0]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_158_42(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_158_43(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_158_44(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[5] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_158_45(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_158_46(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_e12noni
	r[9] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_158_47(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_e12noni
	r[9] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_158_48(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[1] * b[6] ;
	
	
	//_e3noni
	r[8] = a[2] * b[6] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_158_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[9]  * -1  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_50(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_51(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_158_52(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_158_53(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_54(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[1] * b[3] ;
	
	
	//_e3ni
	r[5] = a[2] * b[3] ;
	
	
	//_e12noni
	r[6] = a[3] * b[3] ;
	
	
	//_e13noni
	r[7] = a[4] * b[3] ;
	
	
	//_e23noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123no
	r[9] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_55(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_56(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[10] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_57(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[9] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[10] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_58(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_e12noni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[7]  + a[2] * b[5]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[7]  + a[2] * b[6]  * -1  + a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[12] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[13] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_158_59(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_60(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_e12noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[12] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_158_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[10] ;
	
	
	//_e2noni
	r[10] = a[1] * b[10] ;
	
	
	//_e3noni
	r[11] = a[2] * b[10] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[9]  * -1  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[9] * b[10]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_62(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[1] * b[3] ;
	
	
	//_e3ni
	r[5] = a[2] * b[3] ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[4] * b[3] ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[5] * b[3] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_63(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_158_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[7] ;
	
	
	//_e2noni
	r[10] = a[1] * b[7] ;
	
	
	//_e3noni
	r[11] = a[2] * b[7] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[9] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_65(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_66(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_158_67(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_158_68(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_69(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_158_70(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[1] * b[3] ;
	
	
	//_e3ni
	r[5] = a[2] * b[3] ;
	
	
	//_e12noni
	r[6] = a[3] * b[3] ;
	
	
	//_e13noni
	r[7] = a[4] * b[3] ;
	
	
	//_e23noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123no
	r[9] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_71(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_72(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[10]  + a[1] * b[9]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[11]  + a[2] * b[9]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[11]  + a[2] * b[10]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_158_74(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_158_75(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_op_158_76(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123no
	r[6] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_77(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_158_78(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_158_79(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[1] * b[3] ;
	
	
	//_e3ni
	r[5] = a[2] * b[3] ;
	
	
	//_e12noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e123no
	r[9] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_80(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123no
	r[6] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_81(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_158_82(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_op_158_83(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_84(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[10] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[7] ;
	
	
	//_e2noni
	r[10] = a[1] * b[7] ;
	
	
	//_e3noni
	r[11] = a[2] * b[7] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[9] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_86(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_87(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_88(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_e12noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[13] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_158_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[10] ;
	
	
	//_e2noni
	r[10] = a[1] * b[10] ;
	
	
	//_e3noni
	r[11] = a[2] * b[10] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[9]  * -1  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[9] * b[10]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_90(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_91(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_op_158_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[7] ;
	
	
	//_e2noni
	r[10] = a[1] * b[7] ;
	
	
	//_e3noni
	r[11] = a[2] * b[7] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[9] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_93(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123no
	r[6] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_94(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[10] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_95(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[6] * b[5]  + a[7] * b[4]  * -1  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_op_158_96(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[1] * b[3] ;
	
	
	//_e3ni
	r[5] = a[2] * b[3] ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[4] * b[3] ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[5] * b[3] ;
	
	
	//_e123no
	r[9] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_97(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[10] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_98(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_op_158_99(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_100(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[1] * b[3] ;
	
	
	//_e3ni
	r[5] = a[2] * b[3] ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[4] * b[3] ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[5] * b[3] ;
	
	
	//_e123no
	r[9] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_101(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_158_102(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_103(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  + a[2] * b[2]  * -1  + a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[4]  + a[2] * b[3]  * -1  + a[5] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e123no
	r[9] = a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_158_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_105(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_106(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_107(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_158_108(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_109(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_110(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_111(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_158_112(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_158_113(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_114(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[7] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[8] * b[0]  * -1 ;
	
	
	//_e123no
	r[6] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_158_115(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_158_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_158_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[7] ;
	
	
	//_e2noni
	r[10] = a[1] * b[7] ;
	
	
	//_e3noni
	r[11] = a[2] * b[7] ;
	
	
	//_e123
	r[12] = a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_118(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_e12noni
	r[9] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_158_119(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_op_158_120(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_158_121(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[10]  + a[1] * b[9]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[11]  + a[2] * b[9]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[11]  + a[2] * b[10]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_122(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_158_123(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_158_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_158_125(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_126(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[10] ;
	
	
	//_e2noni
	r[10] = a[1] * b[10] ;
	
	
	//_e3noni
	r[11] = a[2] * b[10] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[3] * b[9]  * -1  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[9] * b[10]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_128(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_e12noni
	r[9] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_158_129(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[9] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[8] * b[3]  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_158_130(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_158_131(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[9] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[8] * b[3]  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_158_132(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[1] * b[3] ;
	
	
	//_e3ni
	r[5] = a[2] * b[3] ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[4] * b[3] ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[5] * b[3] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[9]  * -1  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_134(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_135(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  * -1  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_137(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_e12noni
	r[9] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[4] ;
	
	
	return r;
}

double * conga_op_158_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_158_139(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[1] * b[6] ;
	
	
	//_e3noni
	r[8] = a[2] * b[6] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_158_140(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[9] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[8] * b[3]  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_158_141(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_142(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123no
	r[6] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_144(double * a, double * b, double *r) { 
	
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

double * conga_op_158_145(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_146(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_148(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_149(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_150(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_151(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_152(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[7] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[8] * b[0]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_158_153(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[5] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[9] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_158_154(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_158_155(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[7] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[8] * b[0]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_158_156(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_158_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e1noni
	r[9] = a[0] * b[7] ;
	
	
	//_e2noni
	r[10] = a[1] * b[7] ;
	
	
	//_e3noni
	r[11] = a[2] * b[7] ;
	
	
	//_e123
	r[12] = a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[9] * b[7]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_158(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  * -1  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_160(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[1] * b[3] ;
	
	
	//_e3ni
	r[5] = a[2] * b[3] ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[4] * b[3] ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[5] * b[3] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_161(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[9] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_158_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  * -1  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[7] * b[5]  * -1  + a[8] * b[4]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_158_163(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_158_164(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_158_165(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_158_166(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[1] * b[6] ;
	
	
	//_e3noni
	r[8] = a[2] * b[6] ;
	
	
	//_e123noni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0]  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_158_167(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[6] = a[0] * b[4] ;
	
	
	//_e2no
	r[7] = a[1] * b[4] ;
	
	
	//_e3no
	r[8] = a[2] * b[4] ;
	
	
	//_e1ni
	r[9] = a[0] * b[5] ;
	
	
	//_e2ni
	r[10] = a[1] * b[5] ;
	
	
	//_e3ni
	r[11] = a[2] * b[5] ;
	
	
	//_e12no
	r[12] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[13] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[4] * b[0] ;
	
	
	//_e23no
	r[14] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[5] * b[0] ;
	
	
	//_e12ni
	r[15] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[6] * b[0] ;
	
	
	//_e13ni
	r[16] = a[0] * b[14]  + a[2] * b[12]  * -1  + a[7] * b[0] ;
	
	
	//_e23ni
	r[17] = a[1] * b[14]  + a[2] * b[13]  * -1  + a[8] * b[0] ;
	
	
	//_e1noni
	r[18] = a[0] * b[15] ;
	
	
	//_e2noni
	r[19] = a[1] * b[15] ;
	
	
	//_e3noni
	r[20] = a[2] * b[15] ;
	
	
	//_e123
	r[21] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[9] * b[0] ;
	
	
	//_e12noni
	r[22] = a[0] * b[23]  + a[1] * b[22]  * -1  + a[3] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e13noni
	r[23] = a[0] * b[24]  + a[2] * b[22]  * -1  + a[4] * b[5]  + a[7] * b[4]  * -1 ;
	
	
	//_e23noni
	r[24] = a[1] * b[24]  + a[2] * b[23]  * -1  + a[5] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123no
	r[25] = a[0] * b[18]  + a[1] * b[17]  * -1  + a[2] * b[16]  + a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[9] * b[4] ;
	
	
	//_e123ni
	r[26] = a[0] * b[21]  + a[1] * b[20]  * -1  + a[2] * b[19]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[5] ;
	
	
	//_e123noni
	r[27] = a[0] * b[28]  + a[1] * b[27]  * -1  + a[2] * b[26]  + a[3] * b[14]  * -1  + a[4] * b[13]  + a[5] * b[12]  * -1  + a[6] * b[11]  + a[7] * b[10]  * -1  + a[8] * b[9]  + a[9] * b[15]  + a[10] * b[0] ;
	
	
	return r;
}


