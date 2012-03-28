
#include "conga_op_Mot_Tnv.h"


double * conga_op_85_1(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[7] * b[0] ;
	
	
	//_e12noni
	r[8] = a[8] * b[0] ;
	
	
	//_e13noni
	r[9] = a[9] * b[0] ;
	
	
	//_e23noni
	r[10] = a[10] * b[0] ;
	
	
	//_e123no
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_2(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_3(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_4(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[1] * b[0] ;
	
	
	//_e13noni
	r[2] = a[2] * b[0] ;
	
	
	//_e23noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_5(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[1] * b[0] ;
	
	
	//_e13no
	r[3] = a[2] * b[0] ;
	
	
	//_e23no
	r[4] = a[3] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[2] * b[1] ;
	
	
	//_e23ni
	r[7] = a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[4] * b[1] ;
	
	
	//_e2noni
	r[9] = a[5] * b[1] ;
	
	
	//_e3noni
	r[10] = a[6] * b[1] ;
	
	
	//_e123noni
	r[11] = a[11] * b[1] ;
	
	
	return r;
}

double * conga_op_85_6(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_85_7(double * a, double * b, double *r) { 
	
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
	r[5] = a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[6] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[7] = a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[4] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[12] = a[5] * b[4]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[13] = a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[4] ;
	
	
	return r;
}

double * conga_op_85_8(double * a, double * b, double *r) { 
	
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
	r[10] = a[1] * b[9]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[6] * b[6]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[12] = a[3] * b[9]  + a[5] * b[8]  * -1  + a[6] * b[7]  + a[7] * b[2] ;
	
	
	//_e123no
	r[13] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[14] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_85_9(double * a, double * b, double *r) { 
	
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
	r[10] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[9] ;
	
	
	return r;
}

double * conga_op_85_10(double * a, double * b, double *r) { 
	
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

double * conga_op_85_11(double * a, double * b, double *r) { 
	
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
	r[9] = a[4] * b[7]  * -1  + a[5] * b[6]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[10] = a[4] * b[8]  * -1  + a[6] * b[6]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[11] = a[5] * b[8]  * -1  + a[6] * b[7]  + a[7] * b[2] ;
	
	
	//_e123no
	r[12] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[13] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_85_12(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_13(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_85_14(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_85_15(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_16(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_85_17(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_85_18(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_85_19(double * a, double * b, double *r) { 
	
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

double * conga_op_85_20(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13noni
	r[5] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_21(double * a, double * b, double *r) { 
	
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
	r[6] = a[4] * b[4]  * -1  + a[5] * b[3]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[7] = a[4] * b[5]  * -1  + a[6] * b[3]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[8] = a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[10] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_85_22(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[7] = a[1] * b[3] ;
	
	
	//_e13ni
	r[8] = a[2] * b[3] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[5] * b[3]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[12] = a[6] * b[3]  + a[7] * b[2] ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[3] ;
	
	
	return r;
}

double * conga_op_85_23(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[6] = a[7] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[1] ;
	
	
	//_e3noni
	r[8] = a[7] * b[2] ;
	
	
	//_e123
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_24(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[7] * b[0] ;
	
	
	//_e13noni
	r[4] = a[7] * b[1] ;
	
	
	//_e23noni
	r[5] = a[7] * b[2] ;
	
	
	//_e123no
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_85_25(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	//_e123noni
	r[1] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_85_26(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[7] = a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[7] * b[1] ;
	
	
	//_e3noni
	r[9] = a[7] * b[2] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_27(double * a, double * b, double *r) { 
	
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
	r[6] = a[7] * b[0] ;
	
	
	//_e13noni
	r[7] = a[7] * b[1] ;
	
	
	//_e23noni
	r[8] = a[7] * b[2] ;
	
	
	//_e123no
	r[9] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_85_28(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_85_29(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[7] * b[0] ;
	
	
	//_e12noni
	r[8] = a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[9] = a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[10] = a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[11] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[1] ;
	
	
	//_e2ni
	r[8] = a[0] * b[2] ;
	
	
	//_e3ni
	r[9] = a[0] * b[3] ;
	
	
	//_noni
	r[10] = a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[4] * b[3]  * -1  + a[6] * b[1]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[5] * b[3]  * -1  + a[6] * b[2]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_85_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[1]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[8] = a[1] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[9] = a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[10] = a[3] * b[1]  + a[10] * b[0] ;
	
	
	//_e123no
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6] ;
	
	
	//_noni
	r[10] = a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[4] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[5] * b[6]  * -1  + a[6] * b[5]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[0] * b[7]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_85_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[7] * b[0] ;
	
	
	//_e12noni
	r[8] = a[8] * b[0] ;
	
	
	//_e13noni
	r[9] = a[9] * b[0] ;
	
	
	//_e23noni
	r[10] = a[10] * b[0] ;
	
	
	//_e123no
	r[11] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  + a[1] * b[7]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  + a[2] * b[7]  + a[4] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[3] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[0] * b[11]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_85_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[5]  + a[1] * b[4]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[9] = a[0] * b[6]  + a[2] * b[4]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[10] = a[0] * b[7]  + a[3] * b[4]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[11] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[7] * b[0] ;
	
	
	//_e12noni
	r[8] = a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[9] = a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[10] = a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[11] = a[0] * b[7]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[1] ;
	
	
	//_e2ni
	r[8] = a[0] * b[2] ;
	
	
	//_e3ni
	r[9] = a[0] * b[3] ;
	
	
	//_noni
	r[10] = a[0] * b[4]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[1] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[2] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[1]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[3] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_85_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[2] * b[10]  + a[4] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[3] * b[10]  + a[5] * b[9]  * -1  + a[6] * b[8]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_85_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[8] = a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[9] = a[2] * b[4]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[10] = a[3] * b[4]  + a[10] * b[0] ;
	
	
	//_e123no
	r[11] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[2] * b[10]  + a[4] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[3] * b[10]  + a[5] * b[9]  * -1  + a[6] * b[8]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[14]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[0] * b[15]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_85_41(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_42(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_43(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_44(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[0] * b[2]  + a[1] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[3]  + a[2] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5]  + a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[0] * b[6]  + a[2] * b[1] ;
	
	
	//_e23ni
	r[7] = a[0] * b[7]  + a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[4] * b[1] ;
	
	
	//_e2noni
	r[9] = a[5] * b[1] ;
	
	
	//_e3noni
	r[10] = a[6] * b[1] ;
	
	
	//_e123noni
	r[11] = a[4] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[11] * b[1] ;
	
	
	return r;
}

double * conga_op_85_45(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_46(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[5]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[4] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[12] = a[5] * b[4]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[13] = a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123
	r[14] = a[0] * b[11]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[4] * b[10]  + a[5] * b[9]  * -1  + a[6] * b[8]  + a[7] * b[11]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[4] ;
	
	
	return r;
}

double * conga_op_85_47(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[5]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[4] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[5] * b[4]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123
	r[14] = a[0] * b[14]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[0] * b[15]  + a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[10]  + a[5] * b[9]  * -1  + a[6] * b[8]  + a[7] * b[14]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[4] ;
	
	
	return r;
}

double * conga_op_85_48(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[6]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[2] * b[6]  + a[4] * b[5]  * -1  + a[6] * b[3] ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[3] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[11] = a[0] * b[11]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_85_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[4] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[5] * b[9]  * -1  + a[6] * b[8]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[10]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[0] * b[11]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_85_50(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_51(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_52(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_53(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[8] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[9] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[5] * b[3]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[12] = a[6] * b[3]  + a[7] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[7]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[3] ;
	
	
	return r;
}

double * conga_op_85_55(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[6] = a[7] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[1] ;
	
	
	//_e3noni
	r[8] = a[7] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[7] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[7] = a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[7] * b[1] ;
	
	
	//_e3noni
	r[9] = a[7] * b[2] ;
	
	
	//_e123
	r[10] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[7] * b[7]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6]  + a[7] * b[2] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_58(double * a, double * b, double *r) { 
	
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
	r[5] = a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[6] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[7] = a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[5]  + a[4] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[5] * b[4]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[4] ;
	
	
	return r;
}

double * conga_op_85_59(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_85_60(double * a, double * b, double *r) { 
	
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
	r[5] = a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[6] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[7] = a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[8] = a[0] * b[5]  + a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[0] * b[6]  + a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[0] * b[7]  + a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[8]  + a[4] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[5] * b[4]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[4] ;
	
	
	return r;
}

double * conga_op_85_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[2] * b[10]  + a[4] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[3] * b[10]  + a[5] * b[9]  * -1  + a[6] * b[8]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[0] * b[14]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_85_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[5] * b[3]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[6] * b[3]  + a[7] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14]  + a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[9]  + a[5] * b[8]  * -1  + a[6] * b[7]  + a[7] * b[13]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[3] ;
	
	
	return r;
}

double * conga_op_85_63(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[5]  * -1  + a[6] * b[3]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[10]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_85_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[1] * b[7]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9]  + a[2] * b[7]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[11] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  + a[7] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[7] * b[9]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_66(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[7] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_85_67(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_68(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_69(double * a, double * b, double *r) { 
	
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
	r[6] = a[4] * b[4]  * -1  + a[5] * b[3]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[7] = a[4] * b[5]  * -1  + a[6] * b[3]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[8] = a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_85_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[8] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[9] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[5] * b[3]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[12] = a[6] * b[3]  + a[7] * b[2] ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[3] ;
	
	
	return r;
}

double * conga_op_85_71(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_85_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[10] = a[0] * b[10]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11]  + a[7] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[12]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[9]  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[7] * b[12]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_73(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_85_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[7] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_85_75(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[4] * b[8]  * -1  + a[6] * b[6]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[11] = a[0] * b[11]  + a[5] * b[8]  * -1  + a[6] * b[7]  + a[7] * b[2] ;
	
	
	//_e123no
	r[12] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[13] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_85_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[3] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8]  + a[7] * b[2] ;
	
	
	//_e123
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[7] * b[2] ;
	
	
	//_e123no
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_85_78(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[5]  * -1  + a[6] * b[3]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[10] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_85_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[7] = a[1] * b[3] ;
	
	
	//_e13ni
	r[8] = a[2] * b[3] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[4]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[5]  + a[5] * b[3]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[6]  + a[6] * b[3]  + a[7] * b[2] ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[3] ;
	
	
	return r;
}

double * conga_op_85_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5]  + a[7] * b[2] ;
	
	
	//_e123
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_81(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[7] * b[2] ;
	
	
	//_e123no
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_85_82(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[7] * b[2] ;
	
	
	//_e123no
	r[9] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_85_83(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4]  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_85_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9]  + a[7] * b[2] ;
	
	
	//_e123
	r[10] = a[0] * b[10]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[7] * b[10]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[1] * b[7]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9]  + a[2] * b[7]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[11] = a[0] * b[11]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_86(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[1] * b[3] ;
	
	
	//_e13noni
	r[5] = a[2] * b[3] ;
	
	
	//_e23noni
	r[6] = a[3] * b[3] ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_87(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_85_88(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[5]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[8]  + a[4] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[5] * b[4]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[4] ;
	
	
	return r;
}

double * conga_op_85_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[2] * b[10]  + a[4] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[3] * b[10]  + a[5] * b[9]  * -1  + a[6] * b[8]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[14]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_85_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[7] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14]  + a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[9]  + a[5] * b[8]  * -1  + a[6] * b[7]  + a[7] * b[13]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_91(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[7] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_op_85_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  + a[1] * b[7]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  + a[2] * b[7]  + a[4] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[3] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_85_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[3] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8]  + a[7] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[9]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[7] = a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[7] * b[1] ;
	
	
	//_e3noni
	r[9] = a[7] * b[2] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_95(double * a, double * b, double *r) { 
	
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
	r[6] = a[7] * b[0] ;
	
	
	//_e13noni
	r[7] = a[7] * b[1] ;
	
	
	//_e23noni
	r[8] = a[7] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_85_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[8] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[9] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[8]  + a[5] * b[3]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[9]  + a[6] * b[3]  + a[7] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[10]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[11]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[10]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[3] ;
	
	
	return r;
}

double * conga_op_85_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9]  + a[7] * b[2] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_98(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[7] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_85_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  + a[7] * b[2] ;
	
	
	//_e123
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[8] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[9] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[8]  + a[5] * b[3]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[9]  + a[6] * b[3]  + a[7] * b[2] ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[3] ;
	
	
	return r;
}

double * conga_op_85_101(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[5]  * -1  + a[6] * b[3]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_85_102(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_85_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[1] * b[0] ;
	
	
	//_e13no
	r[3] = a[2] * b[0] ;
	
	
	//_e23no
	r[4] = a[3] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[2] * b[1] ;
	
	
	//_e23ni
	r[7] = a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[0] * b[2]  + a[4] * b[1] ;
	
	
	//_e2noni
	r[9] = a[0] * b[3]  + a[5] * b[1] ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  + a[6] * b[1] ;
	
	
	//_e123noni
	r[11] = a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[11] * b[1] ;
	
	
	return r;
}

double * conga_op_85_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6] ;
	
	
	//_noni
	r[10] = a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[7]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[8]  + a[4] * b[6]  * -1  + a[6] * b[4]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[9]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_85_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[7] * b[0] ;
	
	
	//_e2noni
	r[10] = a[7] * b[1] ;
	
	
	//_e3noni
	r[11] = a[7] * b[2] ;
	
	
	//_e123
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[9]  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[7] * b[0] ;
	
	
	//_e13noni
	r[4] = a[7] * b[1] ;
	
	
	//_e23noni
	r[5] = a[7] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_op_85_107(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[5]  * -1  + a[6] * b[3] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	//_e123no
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_85_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[3] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5] ;
	
	
	//_e1noni
	r[9] = a[7] * b[0] ;
	
	
	//_e2noni
	r[10] = a[7] * b[1] ;
	
	
	//_e3noni
	r[11] = a[7] * b[2] ;
	
	
	//_e123
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_109(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[7] * b[0] ;
	
	
	//_e13noni
	r[4] = a[7] * b[1] ;
	
	
	//_e23noni
	r[5] = a[7] * b[2] ;
	
	
	//_e123no
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_85_110(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_111(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_112(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_113(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_85_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_85_115(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_116(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_op_85_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[1] * b[7]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[6] * b[4]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[3] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_85_118(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[5]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[4] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[5] * b[4]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[10]  + a[5] * b[9]  * -1  + a[6] * b[8]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[4] ;
	
	
	return r;
}

double * conga_op_85_119(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[4] * b[8]  * -1  + a[6] * b[6]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[11] = a[0] * b[11]  + a[5] * b[8]  * -1  + a[6] * b[7]  + a[7] * b[2] ;
	
	
	//_e123no
	r[12] = a[0] * b[12]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[13]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_85_120(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[6] ;
	
	
	return r;
}

double * conga_op_85_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[10] = a[0] * b[10]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11]  + a[7] * b[2] ;
	
	
	//_e123
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[9]  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_122(double * a, double * b, double *r) { 
	
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
	r[6] = a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	//_e13noni
	r[7] = a[4] * b[5]  * -1  + a[6] * b[3] ;
	
	
	//_e23noni
	r[8] = a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	//_e123no
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_85_123(double * a, double * b, double *r) { 
	
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
	r[6] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_85_124(double * a, double * b, double *r) { 
	
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
	r[9] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_85_125(double * a, double * b, double *r) { 
	
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

double * conga_op_85_126(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_85_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[1] * b[10]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[3] * b[10]  + a[5] * b[9]  * -1  + a[6] * b[8]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_85_128(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[5]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[4] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[5] * b[4]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123
	r[14] = a[0] * b[14]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[10]  + a[5] * b[9]  * -1  + a[6] * b[8]  + a[7] * b[14]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[4] ;
	
	
	return r;
}

double * conga_op_85_129(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[10]  + a[1] * b[9]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[2] * b[9]  + a[4] * b[8]  * -1  + a[6] * b[6]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[3] * b[9]  + a[5] * b[8]  * -1  + a[6] * b[7]  + a[7] * b[2] ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_85_130(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[10]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[9] ;
	
	
	return r;
}

double * conga_op_85_131(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[10]  + a[1] * b[9]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[2] * b[9]  + a[4] * b[8]  * -1  + a[6] * b[6]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[3] * b[9]  + a[5] * b[8]  * -1  + a[6] * b[7]  + a[7] * b[2] ;
	
	
	//_e123no
	r[13] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[13]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_85_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[5] * b[3]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[6] * b[3]  + a[7] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[9]  + a[5] * b[8]  * -1  + a[6] * b[7]  + a[7] * b[13]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[3] ;
	
	
	return r;
}

double * conga_op_85_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[4] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[5] * b[9]  * -1  + a[6] * b[8]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_85_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[7] * b[0] ;
	
	
	//_e2noni
	r[10] = a[7] * b[1] ;
	
	
	//_e3noni
	r[11] = a[7] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[7] * b[9]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[7] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[9]  + a[5] * b[8]  * -1  + a[6] * b[7]  + a[7] * b[13]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[10]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  + a[4] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[12]  + a[5] * b[9]  * -1  + a[6] * b[8]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[13]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[0] * b[14]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_85_137(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[5]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[4] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[5] * b[4]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[6] * b[4]  + a[7] * b[2] ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[0] * b[14]  + a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[10]  + a[5] * b[9]  * -1  + a[6] * b[8]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[4] ;
	
	
	return r;
}

double * conga_op_85_138(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_85_139(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[6]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[2] * b[6]  + a[4] * b[5]  * -1  + a[6] * b[3] ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[3] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	//_e123no
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[11] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_85_140(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[10]  + a[1] * b[9]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[2] * b[9]  + a[4] * b[8]  * -1  + a[6] * b[6]  + a[7] * b[1] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[3] * b[9]  + a[5] * b[8]  * -1  + a[6] * b[7]  + a[7] * b[2] ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	//_e123ni
	r[14] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_85_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[7] * b[0] ;
	
	
	//_e2noni
	r[10] = a[7] * b[1] ;
	
	
	//_e3noni
	r[11] = a[7] * b[2] ;
	
	
	//_e123
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5]  + a[7] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[7] * b[6]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6] ;
	
	
	//_noni
	r[10] = a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[4] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[5] * b[6]  * -1  + a[6] * b[5]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_85_144(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_85_145(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[3] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5] ;
	
	
	//_e1noni
	r[9] = a[7] * b[0] ;
	
	
	//_e2noni
	r[10] = a[7] * b[1] ;
	
	
	//_e3noni
	r[11] = a[7] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[6]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[7] * b[0] ;
	
	
	//_e12noni
	r[8] = a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[9] = a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[10] = a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[11] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_85_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[6] = a[7] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[1] ;
	
	
	//_e3noni
	r[8] = a[7] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[7] * b[6]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_149(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[7] * b[0] ;
	
	
	//_e13noni
	r[4] = a[7] * b[1] ;
	
	
	//_e23noni
	r[5] = a[7] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_85_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[6] = a[7] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[1] ;
	
	
	//_e3noni
	r[8] = a[7] * b[2] ;
	
	
	//_e123
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_151(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_152(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_85_153(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[0] * b[2]  + a[1] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[3]  + a[2] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5]  + a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[0] * b[6]  + a[2] * b[1] ;
	
	
	//_e23ni
	r[7] = a[0] * b[7]  + a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[0] * b[8]  + a[4] * b[1] ;
	
	
	//_e2noni
	r[9] = a[0] * b[9]  + a[5] * b[1] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  + a[6] * b[1] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[11] * b[1] ;
	
	
	return r;
}

double * conga_op_85_154(double * a, double * b, double *r) { 
	
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
	r[6] = a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	//_e13noni
	r[7] = a[4] * b[5]  * -1  + a[6] * b[3] ;
	
	
	//_e23noni
	r[8] = a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[7]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_85_155(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_85_156(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  + a[1] * b[7]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  + a[2] * b[7]  + a[4] * b[6]  * -1  + a[6] * b[4]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[3] * b[7]  + a[5] * b[6]  * -1  + a[6] * b[5]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_85_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[7] * b[0] ;
	
	
	//_e2noni
	r[10] = a[7] * b[1] ;
	
	
	//_e3noni
	r[11] = a[7] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[7] * b[9]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[10]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  + a[4] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[12]  + a[5] * b[9]  * -1  + a[6] * b[8]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[0] * b[13]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_85_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[5] * b[3]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[6] * b[3]  + a[7] * b[2] ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[9]  + a[5] * b[8]  * -1  + a[6] * b[7]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0]  + a[11] * b[3] ;
	
	
	return r;
}

double * conga_op_85_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[7] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[7] * b[2] ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[9]  + a[5] * b[8]  * -1  + a[6] * b[7]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_85_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[7] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[10]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[1]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  + a[4] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[2]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[12]  + a[5] * b[9]  * -1  + a[6] * b[8]  + a[7] * b[3]  + a[10] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[13]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_85_163(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_85_164(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_85_165(double * a, double * b, double *r) { 
	
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
	r[7] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[6] ;
	
	
	return r;
}

double * conga_op_85_166(double * a, double * b, double *r) { 
	
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
	r[7] = a[1] * b[6]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	//_e13noni
	r[8] = a[2] * b[6]  + a[4] * b[5]  * -1  + a[6] * b[3] ;
	
	
	//_e23noni
	r[9] = a[3] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4] ;
	
	
	//_e123no
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[11] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_85_167(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[0] ;
	
	
	//_e13
	r[7] = a[0] * b[7]  + a[2] * b[0] ;
	
	
	//_e23
	r[8] = a[0] * b[8]  + a[3] * b[0] ;
	
	
	//_e1no
	r[9] = a[0] * b[9]  + a[4] * b[0] ;
	
	
	//_e2no
	r[10] = a[0] * b[10]  + a[5] * b[0] ;
	
	
	//_e3no
	r[11] = a[0] * b[11]  + a[6] * b[0] ;
	
	
	//_e1ni
	r[12] = a[0] * b[12] ;
	
	
	//_e2ni
	r[13] = a[0] * b[13] ;
	
	
	//_e3ni
	r[14] = a[0] * b[14] ;
	
	
	//_noni
	r[15] = a[0] * b[15]  + a[7] * b[0] ;
	
	
	//_e12no
	r[16] = a[0] * b[16]  + a[1] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e13no
	r[17] = a[0] * b[17]  + a[2] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23no
	r[18] = a[0] * b[18]  + a[3] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e12ni
	r[19] = a[0] * b[19]  + a[1] * b[5] ;
	
	
	//_e13ni
	r[20] = a[0] * b[20]  + a[2] * b[5] ;
	
	
	//_e23ni
	r[21] = a[0] * b[21]  + a[3] * b[5] ;
	
	
	//_e1noni
	r[22] = a[0] * b[22]  + a[4] * b[5]  + a[7] * b[1] ;
	
	
	//_e2noni
	r[23] = a[0] * b[23]  + a[5] * b[5]  + a[7] * b[2] ;
	
	
	//_e3noni
	r[24] = a[0] * b[24]  + a[6] * b[5]  + a[7] * b[3] ;
	
	
	//_e123
	r[25] = a[0] * b[25]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12noni
	r[26] = a[0] * b[26]  + a[1] * b[15]  + a[4] * b[13]  * -1  + a[5] * b[12]  + a[7] * b[6]  + a[8] * b[0] ;
	
	
	//_e13noni
	r[27] = a[0] * b[27]  + a[2] * b[15]  + a[4] * b[14]  * -1  + a[6] * b[12]  + a[7] * b[7]  + a[9] * b[0] ;
	
	
	//_e23noni
	r[28] = a[0] * b[28]  + a[3] * b[15]  + a[5] * b[14]  * -1  + a[6] * b[13]  + a[7] * b[8]  + a[10] * b[0] ;
	
	
	//_e123no
	r[29] = a[0] * b[29]  + a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[9]  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6]  + a[11] * b[0] ;
	
	
	//_e123ni
	r[30] = a[0] * b[30]  + a[1] * b[14]  + a[2] * b[13]  * -1  + a[3] * b[12] ;
	
	
	//_e123noni
	r[31] = a[0] * b[31]  + a[1] * b[24]  + a[2] * b[23]  * -1  + a[3] * b[22]  + a[4] * b[21]  + a[5] * b[20]  * -1  + a[6] * b[19]  + a[7] * b[25]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[5] ;
	
	
	return r;
}


