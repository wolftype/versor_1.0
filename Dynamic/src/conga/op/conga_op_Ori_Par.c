
#include "conga_op_Ori_Par.h"


double * conga_op_97_1(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_2(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_97_3(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_97_4(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_97_5(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1] ;
	
	
	//_e12noni
	r[7] = a[4] * b[1] ;
	
	
	//_e13noni
	r[8] = a[5] * b[1] ;
	
	
	//_e23noni
	r[9] = a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_97_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_97_7(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[4] * b[4]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[5] * b[4]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[6] * b[4]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_8(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_9(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[9]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_97_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_97_11(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_12(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_13(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_97_14(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_15(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_97_16(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_97_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_97_18(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_97_19(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_97_20(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_21(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_22(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[4] * b[3]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[5] * b[3]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[6] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_23(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_24(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_25(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_26(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_27(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_28(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_97_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_97_31(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[1]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[1] * b[1]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[2] * b[1]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[3] * b[7]  * -1  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[11]  * -1  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[2] * b[4]  + a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[4]  + a[3] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[4]  + a[3] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[4]  + a[3] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_97_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[9]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[2] * b[4]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[9]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[15]  * -1  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_41(double * a, double * b, double *r) { 
	
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

double * conga_op_97_42(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_97_43(double * a, double * b, double *r) { 
	
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

double * conga_op_97_44(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1] ;
	
	
	//_e12noni
	r[7] = a[3] * b[5]  + a[4] * b[1] ;
	
	
	//_e13noni
	r[8] = a[3] * b[6]  + a[5] * b[1] ;
	
	
	//_e23noni
	r[9] = a[3] * b[7]  + a[6] * b[1] ;
	
	
	//_e123no
	r[10] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_97_45(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_97_46(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[3] * b[8]  + a[4] * b[4]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[3] * b[9]  + a[5] * b[4]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[3] * b[10]  + a[6] * b[4]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[11]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_97_47(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[8]  + a[4] * b[4]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[5] * b[4]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[10]  + a[6] * b[4]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[14]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_97_48(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[11]  * -1  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_97_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[9]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[3] * b[11]  * -1  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_50(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[3] * b[3]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_51(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_97_52(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_97_53(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_54(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[3] * b[4]  + a[4] * b[3]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[3] * b[5]  + a[5] * b[3]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[3] * b[6]  + a[6] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[3] * b[7]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_97_55(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[3] * b[3]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_56(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_57(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_58(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[4] * b[4]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[7]  + a[2] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[7]  + a[2] * b[6]  * -1  + a[6] * b[4]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_59(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_97_60(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[5]  + a[4] * b[4]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[3] * b[6]  + a[5] * b[4]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[7]  + a[6] * b[4]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_97_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[9]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[14]  * -1  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_62(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[7]  + a[4] * b[3]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[5] * b[3]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[6] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_97_63(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[1] * b[7]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[2] * b[7]  + a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_65(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_66(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_67(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_97_68(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_69(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  * -1  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_70(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[3] * b[4]  + a[4] * b[3]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[3] * b[5]  + a[5] * b[3]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[3] * b[6]  + a[6] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_97_71(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_97_72(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[6]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[7]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[12]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_97_73(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_74(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[7]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_75(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_76(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_97_77(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_78(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_79(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[4] * b[3]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[5] * b[3]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[6] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_80(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_81(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_82(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_83(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_97_84(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[1] * b[7]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[2] * b[7]  + a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_86(double * a, double * b, double *r) { 
	
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

double * conga_op_97_87(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_97_88(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[4] * b[4]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[6] * b[4]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[9]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_90(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[7]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_97_91(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_93(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_97_94(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_95(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_96(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[5]  + a[5] * b[3]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[6]  + a[6] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[3] * b[10]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_97_97(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_98(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_99(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_100(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[5]  + a[5] * b[3]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[6]  + a[6] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_97_101(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  * -1  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_102(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_97_103(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1] ;
	
	
	//_e12noni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[8] = a[0] * b[4]  + a[2] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e23noni
	r[9] = a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_97_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6]  * -1  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_97_105(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[6]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[7]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[8]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_97_106(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_107(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_97_108(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_97_109(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_110(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_111(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_97_112(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_97_113(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_97_114(double * a, double * b, double *r) { 
	
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

double * conga_op_97_115(double * a, double * b, double *r) { 
	
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

double * conga_op_97_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_97_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6]  * -1  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_97_118(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[8]  + a[4] * b[4]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[5] * b[4]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[10]  + a[6] * b[4]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_97_119(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[13]  * -1  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_120(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[6]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_97_121(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[6]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[7]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_97_122(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_97_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_97_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_97_125(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_97_126(double * a, double * b, double *r) { 
	
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

double * conga_op_97_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[9]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_128(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[8]  + a[4] * b[4]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[5] * b[4]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[10]  + a[6] * b[4]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[14]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_97_129(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[14]  * -1  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_130(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[9]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_97_131(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13]  * -1  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_132(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[7]  + a[4] * b[3]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[5] * b[3]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[6] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_97_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[9]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_134(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[6]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[7]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[8]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_97_135(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[7]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_97_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[9]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[14]  * -1  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_137(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[8]  + a[4] * b[4]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[5] * b[4]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[10]  + a[6] * b[4]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_97_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_97_139(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_97_140(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_141(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[6]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[7]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[8]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_97_142(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_144(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_97_145(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_146(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_97_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_148(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_149(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_97_150(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_97_151(double * a, double * b, double *r) { 
	
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

double * conga_op_97_152(double * a, double * b, double *r) { 
	
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

double * conga_op_97_153(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1] ;
	
	
	//_e12noni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[5]  + a[4] * b[1] ;
	
	
	//_e13noni
	r[8] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[3] * b[6]  + a[5] * b[1] ;
	
	
	//_e23noni
	r[9] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[7]  + a[6] * b[1] ;
	
	
	//_e123no
	r[10] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_97_154(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_97_155(double * a, double * b, double *r) { 
	
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

double * conga_op_97_156(double * a, double * b, double *r) { 
	
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

double * conga_op_97_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6]  * -1  + a[9] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_97_158(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[6]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[7]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[8]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_97_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[9]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13]  * -1  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_160(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[7]  + a[4] * b[3]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[5] * b[3]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[6] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_97_161(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[7]  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_97_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[7]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[8]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[9]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}

double * conga_op_97_163(double * a, double * b, double *r) { 
	
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

double * conga_op_97_164(double * a, double * b, double *r) { 
	
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

double * conga_op_97_165(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[6]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_97_166(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_97_167(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[7] = a[0] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e2no
	r[8] = a[1] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_e3no
	r[9] = a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e1ni
	r[10] = a[0] * b[5] ;
	
	
	//_e2ni
	r[11] = a[1] * b[5] ;
	
	
	//_e3ni
	r[12] = a[2] * b[5] ;
	
	
	//_noni
	r[13] = a[3] * b[5] ;
	
	
	//_e12no
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[6]  + a[4] * b[0] ;
	
	
	//_e13no
	r[15] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[7]  + a[5] * b[0] ;
	
	
	//_e23no
	r[16] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[17] = a[0] * b[13]  + a[1] * b[12]  * -1 ;
	
	
	//_e13ni
	r[18] = a[0] * b[14]  + a[2] * b[12]  * -1 ;
	
	
	//_e23ni
	r[19] = a[1] * b[14]  + a[2] * b[13]  * -1 ;
	
	
	//_e1noni
	r[20] = a[0] * b[15]  + a[3] * b[12]  * -1  + a[7] * b[0] ;
	
	
	//_e2noni
	r[21] = a[1] * b[15]  + a[3] * b[13]  * -1  + a[8] * b[0] ;
	
	
	//_e3noni
	r[22] = a[2] * b[15]  + a[3] * b[14]  * -1  + a[9] * b[0] ;
	
	
	//_e123
	r[23] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	//_e12noni
	r[24] = a[0] * b[23]  + a[1] * b[22]  * -1  + a[3] * b[19]  + a[4] * b[5]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e13noni
	r[25] = a[0] * b[24]  + a[2] * b[22]  * -1  + a[3] * b[20]  + a[5] * b[5]  + a[7] * b[3]  + a[9] * b[1]  * -1 ;
	
	
	//_e23noni
	r[26] = a[1] * b[24]  + a[2] * b[23]  * -1  + a[3] * b[21]  + a[6] * b[5]  + a[8] * b[3]  + a[9] * b[2]  * -1 ;
	
	
	//_e123no
	r[27] = a[0] * b[18]  + a[1] * b[17]  * -1  + a[2] * b[16]  + a[3] * b[25]  * -1  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[28] = a[0] * b[21]  + a[1] * b[20]  * -1  + a[2] * b[19] ;
	
	
	//_e123noni
	r[29] = a[0] * b[28]  + a[1] * b[27]  * -1  + a[2] * b[26]  + a[3] * b[30]  * -1  + a[4] * b[14]  * -1  + a[5] * b[13]  + a[6] * b[12]  * -1  + a[7] * b[8]  + a[8] * b[7]  * -1  + a[9] * b[6] ;
	
	
	return r;
}


