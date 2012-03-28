
#include "conga_op_Rot_Sph.h"


double * conga_op_48_1(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_2(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[11] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_3(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_48_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_48_5(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[10] * b[1]  + a[11] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_48_7(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[4]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_8(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_op_48_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_48_11(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_12(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_48_13(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_48_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_48_15(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_48_16(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_48_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_48_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_48_20(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_48_21(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_22(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3]  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3]  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_48_23(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_24(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_25(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_48_26(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_27(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_48_29(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_30(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[3]  * -1  + a[2] * b[1]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[3]  * -1  + a[2] * b[2]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_31(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_32(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_33(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[3] * b[3]  + a[5] * b[1]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_34(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_35(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_36(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_37(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[3]  * -1  + a[2] * b[1]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[3]  * -1  + a[2] * b[2]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_38(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_39(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[3] * b[3]  + a[5] * b[1]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_40(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_41(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[11] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_42(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_48_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_48_44(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_48_46(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[11]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[4]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_47(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[14]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[4]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_48_49(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_50(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_48_51(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_48_52(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_48_53(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_48_54(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3]  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3]  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[7]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_48_55(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[6] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_56(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[7]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_57(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_58(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[4]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_59(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_48_60(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[4]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_61(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_62(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3]  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3]  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[13]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_48_63(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_64(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_65(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[9]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_66(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_67(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_48_68(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_48_69(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_70(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3]  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3]  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_48_71(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_48_72(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[12]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_73(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_48_74(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_75(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_76(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_77(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_78(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_79(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3]  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3]  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_48_80(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_81(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_82(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_48_84(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[10]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_85(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_86(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_48_87(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_88(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[4]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_89(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_90(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[13]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_91(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_92(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_93(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[9]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_94(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_95(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_96(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3]  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3]  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[10]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_48_97(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_98(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_99(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_100(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3]  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3]  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_48_101(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_102(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_48_103(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[10] * b[1]  + a[11] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_104(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[5] * b[1]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_105(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_106(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_48_108(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_109(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_110(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_48_111(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_48_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_48_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_48_114(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[11] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_115(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_48_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_48_117(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[5] * b[1]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_118(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[4]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_119(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[6] ;
	
	
	return r;
}

double * conga_op_48_121(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_48_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_48_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_127(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_128(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[14]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[4]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_129(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_op_48_131(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_132(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3]  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3]  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[13]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_48_133(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_134(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[9]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_135(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[13]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_136(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_137(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[4]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_48_140(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_141(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_142(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[6] * b[6]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_143(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_48_145(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_48_146(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[6]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_147(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_148(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[6]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_149(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[1] ;
	
	
	//_e23noni
	r[2] = a[6] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_48_150(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_151(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_48_152(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[11] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_153(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_48_155(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[11] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_156(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_48_157(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[5] * b[1]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_158(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1  + a[6] * b[9]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_48_159(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_160(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3]  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3]  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_48_161(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[11] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_48_162(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1  + a[6] * b[2]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[3]  + a[9] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_48_163(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_48_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_48_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[6] ;
	
	
	return r;
}

double * conga_op_48_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_48_167(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[5] * b[0] ;
	
	
	//_noni
	r[6] = a[6] * b[0] ;
	
	
	//_e12no
	r[7] = a[0] * b[2]  * -1  + a[1] * b[1] ;
	
	
	//_e13no
	r[8] = a[0] * b[3]  * -1  + a[2] * b[1] ;
	
	
	//_e23no
	r[9] = a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e12ni
	r[10] = a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	//_e13ni
	r[11] = a[3] * b[3]  * -1  + a[5] * b[1] ;
	
	
	//_e23ni
	r[12] = a[4] * b[3]  * -1  + a[5] * b[2] ;
	
	
	//_e1noni
	r[13] = a[0] * b[5]  + a[3] * b[4]  * -1  + a[6] * b[1] ;
	
	
	//_e2noni
	r[14] = a[1] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[2] ;
	
	
	//_e3noni
	r[15] = a[2] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3] ;
	
	
	//_e12noni
	r[16] = a[0] * b[13]  * -1  + a[1] * b[12]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[6] * b[6]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[17] = a[0] * b[14]  * -1  + a[2] * b[12]  + a[3] * b[11]  + a[5] * b[9]  * -1  + a[6] * b[7]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[18] = a[1] * b[14]  * -1  + a[2] * b[13]  + a[4] * b[11]  + a[5] * b[10]  * -1  + a[6] * b[8]  + a[9] * b[0] ;
	
	
	//_e123no
	r[19] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[20] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[11] * b[0] ;
	
	
	//_e123noni
	r[21] = a[0] * b[21]  + a[1] * b[20]  * -1  + a[2] * b[19]  + a[3] * b[18]  * -1  + a[4] * b[17]  + a[5] * b[16]  * -1  + a[6] * b[25]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[10] * b[5]  + a[11] * b[4]  * -1 ;
	
	
	return r;
}


