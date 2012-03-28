
#include "conga_op_Rot_Hyp.h"


double * conga_op_44_1(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_2(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_3(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[2] * b[0] ;
	
	
	//_e13noni
	r[2] = a[3] * b[0] ;
	
	
	//_e23noni
	r[3] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_44_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_44_5(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_44_7(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_8(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e123noni
	r[9] = a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_44_9(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_44_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_op_44_11(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e123noni
	r[9] = a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_44_12(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_13(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_44_14(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_15(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_16(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_44_17(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_op_44_18(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_44_19(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_44_20(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_21(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_44_22(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[3] ;
	
	
	//_e12noni
	r[7] = a[2] * b[3] ;
	
	
	//_e13noni
	r[8] = a[3] * b[3] ;
	
	
	//_e23noni
	r[9] = a[4] * b[3] ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_23(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e123no
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_24(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	return r;
}

double * conga_op_44_25(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_26(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_27(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[1] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4] ;
	
	
	//_e3noni
	r[8] = a[1] * b[5] ;
	
	
	//_e123noni
	r[9] = a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_44_28(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_44_29(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_30(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[2]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[11] = a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_44_31(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_32(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[7]  * -1  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_44_33(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[1] * b[1] ;
	
	
	//_e2noni
	r[9] = a[1] * b[2] ;
	
	
	//_e3noni
	r[10] = a[1] * b[3] ;
	
	
	//_e123noni
	r[11] = a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1] ;
	
	
	return r;
}

double * conga_op_44_34(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  * -1  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_44_35(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_36(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[1] * b[7]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_37(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[2]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[11] = a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_44_38(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_39(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[1] * b[1] ;
	
	
	//_e2noni
	r[9] = a[1] * b[2] ;
	
	
	//_e3noni
	r[10] = a[1] * b[3] ;
	
	
	//_e123noni
	r[11] = a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1] ;
	
	
	return r;
}

double * conga_op_44_40(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[0] * b[15]  * -1  + a[1] * b[14]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_41(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[1] * b[1]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[1] * b[2]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[1] * b[3]  * -1  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_42(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_44_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_44_44(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_44_46(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[11]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[11]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_47(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_48(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[11]  * -1  + a[1] * b[10]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_49(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  * -1  + a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_50(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_51(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_52(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_44_53(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_54(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[3] ;
	
	
	//_e12noni
	r[7] = a[0] * b[4]  + a[2] * b[3] ;
	
	
	//_e13noni
	r[8] = a[0] * b[5]  + a[3] * b[3] ;
	
	
	//_e23noni
	r[9] = a[0] * b[6]  + a[4] * b[3] ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_55(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[3]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_56(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[1] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_57(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_58(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_59(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_44_60(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[5]  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[6]  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[7]  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_61(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[0] * b[14]  * -1  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_62(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[3] ;
	
	
	//_e12noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[3] ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[4] * b[3] ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_63(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  * -1  + a[1] * b[9]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_44_64(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_65(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[9]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_66(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e123noni
	r[6] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_op_44_67(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_44_68(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_69(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  * -1  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_44_70(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[3] ;
	
	
	//_e12noni
	r[7] = a[0] * b[4]  + a[2] * b[3] ;
	
	
	//_e13noni
	r[8] = a[0] * b[5]  + a[3] * b[3] ;
	
	
	//_e23noni
	r[9] = a[0] * b[6]  + a[4] * b[3] ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_71(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_44_72(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[12]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[12]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_73(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_74(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_op_44_75(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e123noni
	r[9] = a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_44_76(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4] ;
	
	
	//_e23noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_77(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_44_78(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_44_79(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[3] ;
	
	
	//_e12noni
	r[7] = a[2] * b[3] ;
	
	
	//_e13noni
	r[8] = a[3] * b[3] ;
	
	
	//_e23noni
	r[9] = a[4] * b[3] ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_80(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e123no
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_81(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	return r;
}

double * conga_op_44_82(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[1] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4] ;
	
	
	//_e3noni
	r[8] = a[1] * b[5] ;
	
	
	//_e123noni
	r[9] = a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_44_83(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_44_84(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[1] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[10]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_85(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[1] * b[11]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_86(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_87(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_44_88(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[6]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[7]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_89(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[1] * b[14]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_90(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_91(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[1] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4] ;
	
	
	//_e3noni
	r[8] = a[1] * b[5] ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  * -1  + a[1] * b[9]  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_44_92(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	//_e123noni
	r[11] = a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_44_93(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4] ;
	
	
	//_e23noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[9]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_94(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[1] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_95(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[1] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4] ;
	
	
	//_e3noni
	r[8] = a[1] * b[5] ;
	
	
	//_e123noni
	r[9] = a[1] * b[6]  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_44_96(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[3] ;
	
	
	//_e12noni
	r[7] = a[0] * b[4]  + a[2] * b[3] ;
	
	
	//_e13noni
	r[8] = a[0] * b[5]  + a[3] * b[3] ;
	
	
	//_e23noni
	r[9] = a[0] * b[6]  + a[4] * b[3] ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[10]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_97(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[1] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_98(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[1] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[4] ;
	
	
	//_e3noni
	r[8] = a[1] * b[5] ;
	
	
	//_e123noni
	r[9] = a[1] * b[9]  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_44_99(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_100(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[3] ;
	
	
	//_e12noni
	r[7] = a[0] * b[4]  + a[2] * b[3] ;
	
	
	//_e13noni
	r[8] = a[0] * b[5]  + a[3] * b[3] ;
	
	
	//_e23noni
	r[9] = a[0] * b[6]  + a[4] * b[3] ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_101(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  * -1  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_44_102(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_44_103(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_104(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e123noni
	r[11] = a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1] ;
	
	
	return r;
}

double * conga_op_44_105(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_106(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_op_44_107(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_108(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4] ;
	
	
	//_e23noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_109(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_44_110(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_111(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[2] * b[0] ;
	
	
	//_e13noni
	r[2] = a[3] * b[0] ;
	
	
	//_e23noni
	r[3] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_44_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_44_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_44_114(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_115(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_op_44_117(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e123noni
	r[11] = a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1] ;
	
	
	return r;
}

double * conga_op_44_118(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_119(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e123noni
	r[9] = a[0] * b[13]  * -1  + a[1] * b[12]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_44_120(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_44_121(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_122(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_44_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_44_125(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_op_44_126(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_44_127(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_128(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_129(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e123noni
	r[9] = a[0] * b[14]  * -1  + a[1] * b[13]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_44_130(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_44_131(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e123noni
	r[9] = a[0] * b[13]  * -1  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_44_132(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[3] ;
	
	
	//_e12noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[3] ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[4] * b[3] ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_133(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_134(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[9]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_135(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_136(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[0] * b[14]  * -1  + a[1] * b[13]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_137(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_44_139(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_140(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e123noni
	r[9] = a[1] * b[13]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_44_141(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_142(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[6]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_143(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	//_e123noni
	r[11] = a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_44_144(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_44_145(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_146(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4] ;
	
	
	//_e23noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[6]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_147(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_148(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[6]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_149(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e123noni
	r[6] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_op_44_150(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_151(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[7]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_152(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[1] * b[1]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[1] * b[2]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[1] * b[3]  * -1  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_153(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_154(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_155(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[1] * b[1]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[1] * b[2]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[1] * b[3]  * -1  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_156(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[6]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_157(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e123noni
	r[11] = a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1] ;
	
	
	return r;
}

double * conga_op_44_158(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[9]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_159(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[0] * b[13]  * -1  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_160(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[3] ;
	
	
	//_e12noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[3] ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[4] * b[3] ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_161(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_44_162(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1]  + a[2] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[2]  + a[3] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e123noni
	r[11] = a[1] * b[13]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_44_163(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_164(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_44_165(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_44_166(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_44_167(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e1no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[5] = a[1] * b[1]  * -1 ;
	
	
	//_e2ni
	r[6] = a[1] * b[2]  * -1 ;
	
	
	//_e3ni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	//_noni
	r[8] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e12no
	r[9] = a[0] * b[6]  + a[2] * b[0] ;
	
	
	//_e13no
	r[10] = a[0] * b[7]  + a[3] * b[0] ;
	
	
	//_e23no
	r[11] = a[0] * b[8]  + a[4] * b[0] ;
	
	
	//_e12ni
	r[12] = a[1] * b[6]  + a[5] * b[0] ;
	
	
	//_e13ni
	r[13] = a[1] * b[7]  + a[6] * b[0] ;
	
	
	//_e23ni
	r[14] = a[1] * b[8]  + a[7] * b[0] ;
	
	
	//_e1noni
	r[15] = a[0] * b[12]  * -1  + a[1] * b[9] ;
	
	
	//_e2noni
	r[16] = a[0] * b[13]  * -1  + a[1] * b[10] ;
	
	
	//_e3noni
	r[17] = a[0] * b[14]  * -1  + a[1] * b[11] ;
	
	
	//_e12noni
	r[18] = a[0] * b[19]  + a[1] * b[16]  * -1  + a[2] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[19] = a[0] * b[20]  + a[1] * b[17]  * -1  + a[3] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[20] = a[0] * b[21]  + a[1] * b[18]  * -1  + a[4] * b[5]  + a[7] * b[4]  * -1 ;
	
	
	//_e123no
	r[21] = a[0] * b[25]  * -1  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123ni
	r[22] = a[1] * b[25]  * -1  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1 ;
	
	
	//_e123noni
	r[23] = a[0] * b[30]  * -1  + a[1] * b[29]  + a[2] * b[14]  * -1  + a[3] * b[13]  + a[4] * b[12]  * -1  + a[5] * b[11]  + a[6] * b[10]  * -1  + a[7] * b[9] ;
	
	
	return r;
}


