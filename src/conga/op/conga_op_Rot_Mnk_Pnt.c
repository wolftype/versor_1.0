
#include "conga_op_Rot_Mnk_Pnt.h"


double * conga_op_153_1(double * a, double * b, double *r) { 
	
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
	r[8] = a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_2(double * a, double * b, double *r) { 
	
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

double * conga_op_153_3(double * a, double * b, double *r) { 
	
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

double * conga_op_153_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_153_5(double * a, double * b, double *r) { 
	
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

double * conga_op_153_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_153_7(double * a, double * b, double *r) { 
	
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
	r[7] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_8(double * a, double * b, double *r) { 
	
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
	r[9] = a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_9(double * a, double * b, double *r) { 
	
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

double * conga_op_153_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_op_153_11(double * a, double * b, double *r) { 
	
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
	r[9] = a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_12(double * a, double * b, double *r) { 
	
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

double * conga_op_153_13(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_153_14(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_15(double * a, double * b, double *r) { 
	
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

double * conga_op_153_16(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_153_17(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_op_153_18(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_153_19(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_153_20(double * a, double * b, double *r) { 
	
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

double * conga_op_153_21(double * a, double * b, double *r) { 
	
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
	r[9] = a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_22(double * a, double * b, double *r) { 
	
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
	r[7] = a[2] * b[3]  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[3] * b[3]  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[4] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_23(double * a, double * b, double *r) { 
	
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
	r[6] = a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_24(double * a, double * b, double *r) { 
	
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
	r[6] = a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_25(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_26(double * a, double * b, double *r) { 
	
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
	r[7] = a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_27(double * a, double * b, double *r) { 
	
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
	r[9] = a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_28(double * a, double * b, double *r) { 
	
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

double * conga_op_153_29(double * a, double * b, double *r) { 
	
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
	r[8] = a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_30(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[1]  * -1  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[2]  * -1  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[3]  * -1  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_31(double * a, double * b, double *r) { 
	
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
	r[8] = a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_32(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7]  * -1  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_33(double * a, double * b, double *r) { 
	
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
	r[8] = a[1] * b[1]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[1] * b[2]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[1] * b[3]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_34(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  * -1  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_35(double * a, double * b, double *r) { 
	
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
	r[8] = a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_36(double * a, double * b, double *r) { 
	
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
	r[8] = a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[7]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_37(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[1]  * -1  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[2]  * -1  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[3]  * -1  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_38(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_39(double * a, double * b, double *r) { 
	
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
	r[8] = a[1] * b[1]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[1] * b[2]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[1] * b[3]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_40(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[15]  * -1  + a[1] * b[14]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_41(double * a, double * b, double *r) { 
	
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

double * conga_op_153_42(double * a, double * b, double *r) { 
	
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

double * conga_op_153_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_153_44(double * a, double * b, double *r) { 
	
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

double * conga_op_153_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_153_46(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[11]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[11]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_47(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_48(double * a, double * b, double *r) { 
	
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

double * conga_op_153_49(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  * -1  + a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_50(double * a, double * b, double *r) { 
	
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

double * conga_op_153_51(double * a, double * b, double *r) { 
	
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

double * conga_op_153_52(double * a, double * b, double *r) { 
	
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

double * conga_op_153_53(double * a, double * b, double *r) { 
	
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

double * conga_op_153_54(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[4]  + a[2] * b[3]  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[5]  + a[3] * b[3]  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[6]  + a[4] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_55(double * a, double * b, double *r) { 
	
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
	r[6] = a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[3]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_56(double * a, double * b, double *r) { 
	
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
	r[7] = a[1] * b[4]  * -1  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_57(double * a, double * b, double *r) { 
	
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
	r[7] = a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_58(double * a, double * b, double *r) { 
	
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
	r[7] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_59(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_153_60(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[5]  + a[2] * b[4]  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[6]  + a[3] * b[4]  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[7]  + a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_61(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[14]  * -1  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_62(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[3]  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[4] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_63(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[10]  * -1  + a[1] * b[9]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_64(double * a, double * b, double *r) { 
	
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
	r[8] = a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_65(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[9]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_66(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[6]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_67(double * a, double * b, double *r) { 
	
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

double * conga_op_153_68(double * a, double * b, double *r) { 
	
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

double * conga_op_153_69(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[6]  * -1  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_70(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[4]  + a[2] * b[3]  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[5]  + a[3] * b[3]  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[6]  + a[4] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_71(double * a, double * b, double *r) { 
	
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

double * conga_op_153_72(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[12]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[12]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_73(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_74(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_75(double * a, double * b, double *r) { 
	
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
	r[9] = a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_76(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_77(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_78(double * a, double * b, double *r) { 
	
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
	r[9] = a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_79(double * a, double * b, double *r) { 
	
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
	r[7] = a[2] * b[3]  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[3] * b[3]  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[4] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_80(double * a, double * b, double *r) { 
	
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
	r[6] = a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_81(double * a, double * b, double *r) { 
	
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
	r[6] = a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_82(double * a, double * b, double *r) { 
	
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
	r[9] = a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_83(double * a, double * b, double *r) { 
	
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

double * conga_op_153_84(double * a, double * b, double *r) { 
	
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
	r[7] = a[1] * b[4]  * -1  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[10]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_85(double * a, double * b, double *r) { 
	
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
	r[8] = a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[11]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_86(double * a, double * b, double *r) { 
	
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

double * conga_op_153_87(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_153_88(double * a, double * b, double *r) { 
	
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
	r[7] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[6]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[7]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_89(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[14]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_90(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_91(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[10]  * -1  + a[1] * b[9]  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_92(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_93(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[9]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_94(double * a, double * b, double *r) { 
	
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
	r[7] = a[1] * b[4]  * -1  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_95(double * a, double * b, double *r) { 
	
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
	r[9] = a[1] * b[6]  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_96(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[4]  + a[2] * b[3]  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[5]  + a[3] * b[3]  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[6]  + a[4] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[10]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_97(double * a, double * b, double *r) { 
	
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
	r[7] = a[1] * b[4]  * -1  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_98(double * a, double * b, double *r) { 
	
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
	r[9] = a[1] * b[9]  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_99(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_100(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[4]  + a[2] * b[3]  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[5]  + a[3] * b[3]  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[6]  + a[4] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_101(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  * -1  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_102(double * a, double * b, double *r) { 
	
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

double * conga_op_153_103(double * a, double * b, double *r) { 
	
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

double * conga_op_153_104(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[3]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_105(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_106(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_107(double * a, double * b, double *r) { 
	
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

double * conga_op_153_108(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_109(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_110(double * a, double * b, double *r) { 
	
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

double * conga_op_153_111(double * a, double * b, double *r) { 
	
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

double * conga_op_153_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_153_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_153_114(double * a, double * b, double *r) { 
	
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

double * conga_op_153_115(double * a, double * b, double *r) { 
	
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

double * conga_op_153_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_op_153_117(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[3]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_118(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_119(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[13]  * -1  + a[1] * b[12]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_120(double * a, double * b, double *r) { 
	
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

double * conga_op_153_121(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_122(double * a, double * b, double *r) { 
	
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

double * conga_op_153_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_153_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_153_125(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_op_153_126(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_153_127(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_128(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_129(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[14]  * -1  + a[1] * b[13]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_130(double * a, double * b, double *r) { 
	
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

double * conga_op_153_131(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[13]  * -1  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_132(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[3]  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[4] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_133(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_134(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[9]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_135(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_136(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[14]  * -1  + a[1] * b[13]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_137(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_153_139(double * a, double * b, double *r) { 
	
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

double * conga_op_153_140(double * a, double * b, double *r) { 
	
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
	r[9] = a[1] * b[13]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_141(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_142(double * a, double * b, double *r) { 
	
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
	r[6] = a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[6]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_143(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_144(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_153_145(double * a, double * b, double *r) { 
	
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

double * conga_op_153_146(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[6]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_147(double * a, double * b, double *r) { 
	
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
	r[8] = a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_148(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[6]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_149(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[3]  + a[8] * b[2]  + a[9] * b[1]  * -1  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_153_150(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_151(double * a, double * b, double *r) { 
	
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

double * conga_op_153_152(double * a, double * b, double *r) { 
	
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

double * conga_op_153_153(double * a, double * b, double *r) { 
	
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

double * conga_op_153_154(double * a, double * b, double *r) { 
	
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

double * conga_op_153_155(double * a, double * b, double *r) { 
	
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

double * conga_op_153_156(double * a, double * b, double *r) { 
	
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

double * conga_op_153_157(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[3]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_158(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1  + a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[9]  * -1  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_159(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[13]  * -1  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_160(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[3]  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[4] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_161(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[10] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[7] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[2] * b[2]  * -1  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_153_162(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[13]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  + a[9] * b[2]  * -1  + a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_153_163(double * a, double * b, double *r) { 
	
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

double * conga_op_153_164(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_153_165(double * a, double * b, double *r) { 
	
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

double * conga_op_153_166(double * a, double * b, double *r) { 
	
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

double * conga_op_153_167(double * a, double * b, double *r) { 
	
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
	r[15] = a[0] * b[12]  * -1  + a[1] * b[9]  + a[8] * b[0] ;
	
	
	//_e2noni
	r[16] = a[0] * b[13]  * -1  + a[1] * b[10]  + a[9] * b[0] ;
	
	
	//_e3noni
	r[17] = a[0] * b[14]  * -1  + a[1] * b[11]  + a[10] * b[0] ;
	
	
	//_e12noni
	r[18] = a[0] * b[19]  + a[1] * b[16]  * -1  + a[2] * b[5]  + a[5] * b[4]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e13noni
	r[19] = a[0] * b[20]  + a[1] * b[17]  * -1  + a[3] * b[5]  + a[6] * b[4]  * -1  + a[8] * b[3]  + a[10] * b[1]  * -1 ;
	
	
	//_e23noni
	r[20] = a[0] * b[21]  + a[1] * b[18]  * -1  + a[4] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[3]  + a[10] * b[2]  * -1 ;
	
	
	//_e123no
	r[21] = a[0] * b[25]  * -1  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123ni
	r[22] = a[1] * b[25]  * -1  + a[5] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1 ;
	
	
	//_e123noni
	r[23] = a[0] * b[30]  * -1  + a[1] * b[29]  + a[2] * b[14]  * -1  + a[3] * b[13]  + a[4] * b[12]  * -1  + a[5] * b[11]  + a[6] * b[10]  * -1  + a[7] * b[9]  + a[8] * b[8]  + a[9] * b[7]  * -1  + a[10] * b[6]  + a[11] * b[0] ;
	
	
	return r;
}


