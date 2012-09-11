
#include "conga_op_Dil_Vec.h"


double * conga_op_80_1(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_2(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_3(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_4(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_5(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_80_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_80_7(double * a, double * b, double *r) { 
	
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
	r[9] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[10] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[11] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_8(double * a, double * b, double *r) { 
	
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
	r[10] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_9(double * a, double * b, double *r) { 
	
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

double * conga_op_80_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_11(double * a, double * b, double *r) { 
	
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
	r[7] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_12(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_13(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_80_15(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_16(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_80_18(double * a, double * b, double *r) { 
	
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

double * conga_op_80_19(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_20(double * a, double * b, double *r) { 
	
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

double * conga_op_80_21(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_22(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_23(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_24(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_80_26(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_27(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_28(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[7] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[0] ;
	
	
	//_e3noni
	r[8] = a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_31(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[0] * b[1]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[1]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[2] * b[1]  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[0] ;
	
	
	//_e3noni
	r[8] = a[5] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[0] ;
	
	
	//_e3noni
	r[8] = a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[7]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[7]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[8] = a[2] * b[7]  + a[5] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4]  + a[5] * b[0] ;
	
	
	//_e123
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[0] ;
	
	
	//_e3noni
	r[8] = a[5] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[9] = a[0] * b[10]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[10] = a[1] * b[10]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[11] = a[2] * b[10]  + a[5] * b[0] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[9] = a[0] * b[10]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[10] = a[1] * b[10]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[11] = a[2] * b[10]  + a[5] * b[0] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_41(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_80_42(double * a, double * b, double *r) { 
	
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

double * conga_op_80_43(double * a, double * b, double *r) { 
	
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

double * conga_op_80_44(double * a, double * b, double *r) { 
	
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
	
	
	//_e123no
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_80_45(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_46(double * a, double * b, double *r) { 
	
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
	r[9] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[10] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[11] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_80_47(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_80_48(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_80_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[9] = a[3] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[0] ;
	
	
	//_e3noni
	r[11] = a[5] * b[0] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_50(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_51(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_52(double * a, double * b, double *r) { 
	
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

double * conga_op_80_53(double * a, double * b, double *r) { 
	
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

double * conga_op_80_54(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_80_55(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_56(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_80_57(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_58(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[7]  + a[2] * b[5]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[7]  + a[2] * b[6]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_59(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_60(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123ni
	r[12] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_80_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[9] = a[0] * b[10]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[10] = a[1] * b[10]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[11] = a[2] * b[10]  + a[5] * b[0] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_62(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_80_63(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[7]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[7]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[8] = a[2] * b[7]  + a[5] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_65(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_80_66(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_67(double * a, double * b, double *r) { 
	
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

double * conga_op_80_68(double * a, double * b, double *r) { 
	
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

double * conga_op_80_69(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_70(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_80_71(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_72(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_80_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_80_74(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_75(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_76(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_80_77(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_78(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_79(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_80(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_81(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_82(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_83(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_84(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_80_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[7]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[7]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[8] = a[2] * b[7]  + a[5] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_86(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_80_87(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_88(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_80_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[9] = a[0] * b[10]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[10] = a[1] * b[10]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[11] = a[2] * b[10]  + a[5] * b[0] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_90(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_80_91(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[7]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[7]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[8] = a[2] * b[7]  + a[5] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_93(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_80_94(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_80_95(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_96(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_80_97(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_80_98(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_99(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_80_100(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_80_101(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_102(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_103(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  + a[2] * b[2]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_80_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[9] = a[3] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[0] ;
	
	
	//_e3noni
	r[11] = a[5] * b[0] ;
	
	
	//_e123noni
	r[12] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_80_105(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_80_106(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_107(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_80_108(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_80_109(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_110(double * a, double * b, double *r) { 
	
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

double * conga_op_80_111(double * a, double * b, double *r) { 
	
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

double * conga_op_80_112(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_113(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_114(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_80_115(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_80_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_80_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[9] = a[0] * b[7]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[10] = a[1] * b[7]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[11] = a[2] * b[7]  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_118(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_80_119(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_120(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_80_121(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_80_122(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_80_123(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_80_124(double * a, double * b, double *r) { 
	
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

double * conga_op_80_125(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_80_126(double * a, double * b, double *r) { 
	
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

double * conga_op_80_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[9] = a[0] * b[10]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[10] = a[1] * b[10]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[11] = a[2] * b[10]  + a[5] * b[0] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_128(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_80_129(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_130(double * a, double * b, double *r) { 
	
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

double * conga_op_80_131(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_132(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_80_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[9] = a[3] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[0] ;
	
	
	//_e3noni
	r[11] = a[5] * b[0] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_134(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_80_135(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_80_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[9] = a[3] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[0] ;
	
	
	//_e3noni
	r[11] = a[5] * b[0] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[13] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_137(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_80_138(double * a, double * b, double *r) { 
	
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

double * conga_op_80_139(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_80_140(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_141(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_80_142(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_80_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[0] ;
	
	
	//_e3noni
	r[8] = a[5] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_144(double * a, double * b, double *r) { 
	
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

double * conga_op_80_145(double * a, double * b, double *r) { 
	
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

double * conga_op_80_146(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_80_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[0] ;
	
	
	//_e3noni
	r[8] = a[5] * b[0] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_148(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_80_149(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_80_150(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_80_151(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_80_152(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_80_153(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[9]  + a[1] * b[8]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[10]  + a[2] * b[8]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[10]  + a[2] * b[9]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e123ni
	r[10] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_80_154(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_80_155(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_80_156(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_80_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[9] = a[0] * b[7]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[10] = a[1] * b[7]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[11] = a[2] * b[7]  + a[5] * b[0] ;
	
	
	//_e123noni
	r[12] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_80_158(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_80_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[9] = a[3] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[0] ;
	
	
	//_e3noni
	r[11] = a[5] * b[0] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[13] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_160(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_80_161(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_80_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[9] = a[3] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[0] ;
	
	
	//_e3noni
	r[11] = a[5] * b[0] ;
	
	
	//_e123
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[13] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_80_163(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_80_164(double * a, double * b, double *r) { 
	
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

double * conga_op_80_165(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_80_166(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_80_167(double * a, double * b, double *r) { 
	
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
	r[12] = a[0] * b[10]  + a[1] * b[9]  * -1 ;
	
	
	//_e13no
	r[13] = a[0] * b[11]  + a[2] * b[9]  * -1 ;
	
	
	//_e23no
	r[14] = a[1] * b[11]  + a[2] * b[10]  * -1 ;
	
	
	//_e12ni
	r[15] = a[0] * b[13]  + a[1] * b[12]  * -1 ;
	
	
	//_e13ni
	r[16] = a[0] * b[14]  + a[2] * b[12]  * -1 ;
	
	
	//_e23ni
	r[17] = a[1] * b[14]  + a[2] * b[13]  * -1 ;
	
	
	//_e1noni
	r[18] = a[0] * b[15]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[19] = a[1] * b[15]  + a[4] * b[0] ;
	
	
	//_e3noni
	r[20] = a[2] * b[15]  + a[5] * b[0] ;
	
	
	//_e123
	r[21] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	//_e12noni
	r[22] = a[0] * b[23]  + a[1] * b[22]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e13noni
	r[23] = a[0] * b[24]  + a[2] * b[22]  * -1  + a[3] * b[3]  + a[5] * b[1]  * -1 ;
	
	
	//_e23noni
	r[24] = a[1] * b[24]  + a[2] * b[23]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1 ;
	
	
	//_e123no
	r[25] = a[0] * b[18]  + a[1] * b[17]  * -1  + a[2] * b[16] ;
	
	
	//_e123ni
	r[26] = a[0] * b[21]  + a[1] * b[20]  * -1  + a[2] * b[19] ;
	
	
	//_e123noni
	r[27] = a[0] * b[28]  + a[1] * b[27]  * -1  + a[2] * b[26]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6] ;
	
	
	return r;
}


