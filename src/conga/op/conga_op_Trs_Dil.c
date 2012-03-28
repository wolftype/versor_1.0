
#include "conga_op_Trs_Dil.h"


double * conga_op_37_1(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1ni
	r[1] = a[1] * b[0] ;
	
	
	//_e2ni
	r[2] = a[2] * b[0] ;
	
	
	//_e3ni
	r[3] = a[3] * b[0] ;
	
	
	//_noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_37_2(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e2noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e3noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_37_3(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_37_4(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_37_5(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e1noni
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e2noni
	r[3] = a[2] * b[0]  * -1 ;
	
	
	//_e3noni
	r[4] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_37_6(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_37_7(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[7] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[9] = a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[10] = a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_37_8(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[5]  + a[3] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e23noni
	r[12] = a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e123ni
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_9(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	//_e123noni
	r[10] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1  + a[4] * b[9] ;
	
	
	return r;
}

double * conga_op_37_10(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_op_37_11(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_e12noni
	r[9] = a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[5]  + a[3] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e23noni
	r[11] = a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e123ni
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_12(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_37_13(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_37_14(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_37_15(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_37_16(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_37_17(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_37_18(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_37_19(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_37_20(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_37_21(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[4] * b[2] ;
	
	
	//_e123ni
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_22(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[5] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[7] = a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_37_23(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[6] = a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_37_24(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[4] * b[2] ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_25(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	//_e123noni
	r[1] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_37_26(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[5] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[7] = a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_37_27(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[5]  + a[3] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e123ni
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_28(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1  + a[4] * b[3] ;
	
	
	return r;
}

double * conga_op_37_29(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0] ;
	
	
	//_e2ni
	r[5] = a[2] * b[0] ;
	
	
	//_e3ni
	r[6] = a[3] * b[0] ;
	
	
	//_noni
	r[7] = a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[4] * b[1] ;
	
	
	//_e13noni
	r[9] = a[4] * b[2] ;
	
	
	//_e23noni
	r[10] = a[4] * b[3] ;
	
	
	//_e123ni
	r[11] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_37_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1ni
	r[1] = a[1] * b[0] ;
	
	
	//_e2ni
	r[2] = a[2] * b[0] ;
	
	
	//_e3ni
	r[3] = a[3] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_37_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_noni
	r[7] = a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[4] * b[1] ;
	
	
	//_e13noni
	r[9] = a[4] * b[2] ;
	
	
	//_e23noni
	r[10] = a[4] * b[3] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[0] * b[1] ;
	
	
	//_e2no
	r[2] = a[0] * b[2] ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0] ;
	
	
	//_e2ni
	r[5] = a[2] * b[0] ;
	
	
	//_e3ni
	r[6] = a[3] * b[0] ;
	
	
	//_noni
	r[7] = a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e13noni
	r[9] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_37_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[4] * b[1] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9]  + a[4] * b[2] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10]  + a[4] * b[3] ;
	
	
	//_e123ni
	r[11] = a[0] * b[11]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0] ;
	
	
	//_e2ni
	r[5] = a[2] * b[0] ;
	
	
	//_e3ni
	r[6] = a[3] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[5]  + a[4] * b[1] ;
	
	
	//_e13noni
	r[9] = a[0] * b[6]  + a[4] * b[2] ;
	
	
	//_e23noni
	r[10] = a[0] * b[7]  + a[4] * b[3] ;
	
	
	//_e123ni
	r[11] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123no
	r[14] = a[0] * b[7] ;
	
	
	//_e123ni
	r[15] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_37_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123ni
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[0] * b[1] ;
	
	
	//_e2no
	r[2] = a[0] * b[2] ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0] ;
	
	
	//_e2ni
	r[5] = a[2] * b[0] ;
	
	
	//_e3ni
	r[6] = a[3] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e13noni
	r[9] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_37_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123no
	r[14] = a[0] * b[14] ;
	
	
	//_e123ni
	r[15] = a[0] * b[15]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_41(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[1] * b[0]  * -1 ;
	
	
	//_e2noni
	r[5] = a[2] * b[0]  * -1 ;
	
	
	//_e3noni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_37_42(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_37_43(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_37_44(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[0] * b[2] ;
	
	
	//_e13no
	r[3] = a[0] * b[3] ;
	
	
	//_e23no
	r[4] = a[0] * b[4] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5] ;
	
	
	//_e13ni
	r[6] = a[0] * b[6] ;
	
	
	//_e23ni
	r[7] = a[0] * b[7] ;
	
	
	//_e1noni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e2noni
	r[9] = a[2] * b[0]  * -1 ;
	
	
	//_e3noni
	r[10] = a[3] * b[0]  * -1 ;
	
	
	//_e123noni
	r[11] = a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_37_45(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_37_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[11] = a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	//_e123
	r[14] = a[0] * b[11] ;
	
	
	//_e123noni
	r[15] = a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[11] ;
	
	
	return r;
}

double * conga_op_37_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	//_e123
	r[14] = a[0] * b[14] ;
	
	
	//_e123noni
	r[15] = a[0] * b[15]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[14] ;
	
	
	return r;
}

double * conga_op_37_48(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_noni
	r[6] = a[0] * b[6] ;
	
	
	//_e12noni
	r[7] = a[0] * b[7]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[10] ;
	
	
	//_e123ni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_op_37_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123no
	r[14] = a[0] * b[10] ;
	
	
	//_e123ni
	r[15] = a[0] * b[11]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_50(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_37_51(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_37_52(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_37_53(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_37_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[7] = a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[0] * b[7] ;
	
	
	//_e123noni
	r[11] = a[4] * b[7] ;
	
	
	return r;
}

double * conga_op_37_55(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[6] = a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[4] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[3] ;
	
	
	//_e123noni
	r[10] = a[4] * b[3] ;
	
	
	return r;
}

double * conga_op_37_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[8] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[10] = a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[7] ;
	
	
	//_e123noni
	r[14] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[7] ;
	
	
	return r;
}

double * conga_op_37_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[5] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6]  + a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_37_58(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[7] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[0] * b[5]  + a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[6]  + a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  + a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_37_59(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_37_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[6] = a[0] * b[6]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[7] = a[0] * b[7]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[0] * b[8]  + a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[9]  + a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  + a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_37_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[4] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[13] ;
	
	
	return r;
}

double * conga_op_37_63(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[9] ;
	
	
	//_e123ni
	r[10] = a[0] * b[10]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  + a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123ni
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[7] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[8] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[9] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1  + a[4] * b[9] ;
	
	
	return r;
}

double * conga_op_37_66(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[4] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[6] ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_67(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_37_68(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_37_69(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[4] * b[2] ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[7] = a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_37_71(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[4] * b[3] ;
	
	
	return r;
}

double * conga_op_37_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[0] * b[10]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11]  + a[4] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[12] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1  + a[4] * b[12] ;
	
	
	return r;
}

double * conga_op_37_73(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_37_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[4] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[6] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_75(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_e12noni
	r[9] = a[0] * b[9]  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[1] * b[5]  + a[3] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e23noni
	r[11] = a[0] * b[11]  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e123ni
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_37_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[4] * b[2] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_78(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123ni
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[5] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6]  + a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_37_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5]  + a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_37_81(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[4] * b[2] ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_82(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[5]  + a[3] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e123ni
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_83(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1  + a[4] * b[3] ;
	
	
	return r;
}

double * conga_op_37_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[8] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[8]  + a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[9]  + a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[10] ;
	
	
	//_e123noni
	r[14] = a[0] * b[11]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[10] ;
	
	
	return r;
}

double * conga_op_37_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  + a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123no
	r[14] = a[0] * b[11] ;
	
	
	//_e123ni
	r[15] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_86(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_37_87(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_37_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[9] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[8]  + a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	//_e123noni
	r[14] = a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_37_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123no
	r[14] = a[0] * b[14] ;
	
	
	//_e123ni
	r[15] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[13] ;
	
	
	return r;
}

double * conga_op_37_91(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[5]  + a[3] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[9] ;
	
	
	//_e123ni
	r[10] = a[0] * b[10]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[4] * b[1] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9]  + a[4] * b[2] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10]  + a[4] * b[3] ;
	
	
	//_e123ni
	r[11] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[4] * b[9] ;
	
	
	return r;
}

double * conga_op_37_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[8] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[10] = a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	//_e123noni
	r[13] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_37_95(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[5]  + a[3] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[6] ;
	
	
	//_e123ni
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9]  + a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[0] * b[10] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  + a[4] * b[10] ;
	
	
	return r;
}

double * conga_op_37_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[8] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[8]  + a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[9]  + a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	//_e123noni
	r[13] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_37_98(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[5]  + a[3] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[9] ;
	
	
	//_e123ni
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[7] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[8] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123noni
	r[12] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_37_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9]  + a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_37_101(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123ni
	r[9] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_102(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4]  + a[4] * b[3] ;
	
	
	return r;
}

double * conga_op_37_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e1noni
	r[2] = a[0] * b[2]  + a[1] * b[0]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[3]  + a[2] * b[0]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_37_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[0] * b[1] ;
	
	
	//_e2no
	r[2] = a[0] * b[2] ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_noni
	r[7] = a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[8]  + a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[9]  + a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_37_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[9] = a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[4] * b[2] ;
	
	
	//_e123noni
	r[12] = a[0] * b[9]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_37_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[4] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[3] ;
	
	
	//_e123ni
	r[7] = a[0] * b[4]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_107(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_37_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[6] = a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_37_109(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[4] * b[2] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_110(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_37_111(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_37_112(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_37_113(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_37_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e2noni
	r[2] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e3noni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_37_115(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_37_116(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_op_37_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[0] * b[1] ;
	
	
	//_e2no
	r[2] = a[0] * b[2] ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e13noni
	r[9] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_37_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	//_e123noni
	r[14] = a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_37_119(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_e12noni
	r[9] = a[0] * b[9]  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[1] * b[5]  + a[3] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e23noni
	r[11] = a[0] * b[11]  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e123no
	r[12] = a[0] * b[12] ;
	
	
	//_e123ni
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_120(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1  + a[4] * b[6] ;
	
	
	return r;
}

double * conga_op_37_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[0] * b[10]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11]  + a[4] * b[2] ;
	
	
	//_e123noni
	r[12] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_37_122(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_37_123(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_37_124(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123noni
	r[9] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_37_125(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_37_126(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_37_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123ni
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	//_e123
	r[14] = a[0] * b[14] ;
	
	
	//_e123noni
	r[15] = a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[14] ;
	
	
	return r;
}

double * conga_op_37_129(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[1] * b[5]  + a[3] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e123no
	r[13] = a[0] * b[13] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_130(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1  + a[4] * b[9] ;
	
	
	return r;
}

double * conga_op_37_131(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[1] * b[5]  + a[3] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e123ni
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[4] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13] ;
	
	
	//_e123noni
	r[14] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[13] ;
	
	
	return r;
}

double * conga_op_37_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123ni
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[9] = a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[4] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[9] ;
	
	
	//_e123noni
	r[13] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1  + a[4] * b[9] ;
	
	
	return r;
}

double * conga_op_37_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13] ;
	
	
	//_e123noni
	r[14] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[13] ;
	
	
	return r;
}

double * conga_op_37_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[10]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  + a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[0] * b[12]  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123no
	r[14] = a[0] * b[13] ;
	
	
	//_e123ni
	r[15] = a[0] * b[14]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_37_138(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_37_139(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_noni
	r[6] = a[0] * b[6] ;
	
	
	//_e12noni
	r[7] = a[0] * b[7]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_37_140(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[1] * b[5]  + a[3] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e123no
	r[13] = a[0] * b[13] ;
	
	
	//_e123ni
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[9] = a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[4] * b[2] ;
	
	
	//_e123noni
	r[12] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_37_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5]  + a[4] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[6] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7]  + a[4] * b[6] ;
	
	
	return r;
}

double * conga_op_37_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_noni
	r[7] = a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[4] * b[1] ;
	
	
	//_e13noni
	r[9] = a[4] * b[2] ;
	
	
	//_e23noni
	r[10] = a[4] * b[3] ;
	
	
	//_e123ni
	r[11] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_144(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_37_145(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_37_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[6] = a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[4] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[6] ;
	
	
	//_e123noni
	r[10] = a[4] * b[6] ;
	
	
	return r;
}

double * conga_op_37_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123ni
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[7] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[8] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[9] = a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[4] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[6] ;
	
	
	//_e123noni
	r[13] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1  + a[4] * b[6] ;
	
	
	return r;
}

double * conga_op_37_149(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[4] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[3] ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_37_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[7] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[8] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[9] = a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[4] * b[2] ;
	
	
	//_e123noni
	r[12] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_37_151(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_37_152(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_37_153(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[0] * b[2] ;
	
	
	//_e13no
	r[3] = a[0] * b[3] ;
	
	
	//_e23no
	r[4] = a[0] * b[4] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5] ;
	
	
	//_e13ni
	r[6] = a[0] * b[6] ;
	
	
	//_e23ni
	r[7] = a[0] * b[7] ;
	
	
	//_e1noni
	r[8] = a[0] * b[8]  + a[1] * b[0]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[9]  + a[2] * b[0]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  + a[3] * b[0]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_37_154(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6] ;
	
	
	//_e123ni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_37_155(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_37_156(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_37_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[0] * b[1] ;
	
	
	//_e2no
	r[2] = a[0] * b[2] ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[9]  + a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[10]  + a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_37_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[9] = a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[4] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[9] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1  + a[4] * b[9] ;
	
	
	return r;
}

double * conga_op_37_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[10]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  + a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[0] * b[12]  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[13]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[4] * b[2] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_37_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[1] * b[3]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[2] * b[3]  * -1  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[3] * b[3]  * -1  + a[4] * b[2] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_37_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[3] * b[0] ;
	
	
	//_noni
	r[10] = a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[10]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  + a[1] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e23noni
	r[13] = a[0] * b[12]  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[3] ;
	
	
	//_e123no
	r[14] = a[0] * b[13] ;
	
	
	//_e123ni
	r[15] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_37_163(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_37_164(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_37_165(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1  + a[4] * b[6] ;
	
	
	return r;
}

double * conga_op_37_166(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_noni
	r[6] = a[0] * b[6] ;
	
	
	//_e12noni
	r[7] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_37_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1
	r[1] = a[0] * b[1] ;
	
	
	//_e2
	r[2] = a[0] * b[2] ;
	
	
	//_e3
	r[3] = a[0] * b[3] ;
	
	
	//_no
	r[4] = a[0] * b[4] ;
	
	
	//_ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12
	r[6] = a[0] * b[6] ;
	
	
	//_e13
	r[7] = a[0] * b[7] ;
	
	
	//_e23
	r[8] = a[0] * b[8] ;
	
	
	//_e1no
	r[9] = a[0] * b[9] ;
	
	
	//_e2no
	r[10] = a[0] * b[10] ;
	
	
	//_e3no
	r[11] = a[0] * b[11] ;
	
	
	//_e1ni
	r[12] = a[0] * b[12]  + a[1] * b[0] ;
	
	
	//_e2ni
	r[13] = a[0] * b[13]  + a[2] * b[0] ;
	
	
	//_e3ni
	r[14] = a[0] * b[14]  + a[3] * b[0] ;
	
	
	//_noni
	r[15] = a[0] * b[15]  + a[4] * b[0] ;
	
	
	//_e12no
	r[16] = a[0] * b[16] ;
	
	
	//_e13no
	r[17] = a[0] * b[17] ;
	
	
	//_e23no
	r[18] = a[0] * b[18] ;
	
	
	//_e12ni
	r[19] = a[0] * b[19]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e13ni
	r[20] = a[0] * b[20]  + a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[21] = a[0] * b[21]  + a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[22] = a[0] * b[22]  + a[1] * b[4]  * -1  + a[4] * b[1] ;
	
	
	//_e2noni
	r[23] = a[0] * b[23]  + a[2] * b[4]  * -1  + a[4] * b[2] ;
	
	
	//_e3noni
	r[24] = a[0] * b[24]  + a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e123
	r[25] = a[0] * b[25] ;
	
	
	//_e12noni
	r[26] = a[0] * b[26]  + a[1] * b[10]  + a[2] * b[9]  * -1  + a[4] * b[6] ;
	
	
	//_e13noni
	r[27] = a[0] * b[27]  + a[1] * b[11]  + a[3] * b[9]  * -1  + a[4] * b[7] ;
	
	
	//_e23noni
	r[28] = a[0] * b[28]  + a[2] * b[11]  + a[3] * b[10]  * -1  + a[4] * b[8] ;
	
	
	//_e123no
	r[29] = a[0] * b[29] ;
	
	
	//_e123ni
	r[30] = a[0] * b[30]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	//_e123noni
	r[31] = a[0] * b[31]  + a[1] * b[18]  * -1  + a[2] * b[17]  + a[3] * b[16]  * -1  + a[4] * b[25] ;
	
	
	return r;
}


