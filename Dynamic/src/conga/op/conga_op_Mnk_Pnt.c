
#include "conga_op_Mnk_Pnt.h"


double * conga_op_103_1(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e1noni
	r[2] = a[2] * b[0] ;
	
	
	//_e2noni
	r[3] = a[3] * b[0] ;
	
	
	//_e3noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_2(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_103_3(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_103_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_103_5(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_103_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_103_7(double * a, double * b, double *r) { 
	
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
	r[7] = a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_8(double * a, double * b, double *r) { 
	
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
	r[9] = a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_9(double * a, double * b, double *r) { 
	
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

double * conga_op_103_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_op_103_11(double * a, double * b, double *r) { 
	
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
	r[9] = a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_12(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_103_13(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_103_14(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_103_15(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	return r;
}

double * conga_op_103_16(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_103_17(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_op_103_18(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_103_19(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_103_20(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_103_21(double * a, double * b, double *r) { 
	
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
	r[9] = a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_22(double * a, double * b, double *r) { 
	
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
	r[7] = a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_23(double * a, double * b, double *r) { 
	
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
	r[6] = a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_24(double * a, double * b, double *r) { 
	
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
	r[6] = a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_25(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_103_26(double * a, double * b, double *r) { 
	
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
	r[7] = a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_27(double * a, double * b, double *r) { 
	
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
	r[9] = a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_28(double * a, double * b, double *r) { 
	
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

double * conga_op_103_29(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_30(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e1noni
	r[2] = a[0] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e2noni
	r[3] = a[0] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e3noni
	r[4] = a[0] * b[3]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_31(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e1noni
	r[2] = a[2] * b[0] ;
	
	
	//_e2noni
	r[3] = a[3] * b[0] ;
	
	
	//_e3noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_32(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[4]  * -1  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_33(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e1noni
	r[2] = a[1] * b[1]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[3] = a[1] * b[2]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[4] = a[1] * b[3]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_34(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[4]  * -1  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_35(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_36(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[7]  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_37(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e1noni
	r[2] = a[0] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e2noni
	r[3] = a[0] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e3noni
	r[4] = a[0] * b[3]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_38(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_39(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e1noni
	r[2] = a[1] * b[1]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[3] = a[1] * b[2]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[4] = a[1] * b[3]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_40(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[15]  * -1  + a[1] * b[14]  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_41(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e13noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e23noni
	r[3] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_103_42(double * a, double * b, double *r) { 
	
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

double * conga_op_103_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_103_44(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[6]  + a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_103_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_103_46(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[11]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_op_103_47(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_103_48(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[11]  * -1  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_op_103_49(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  * -1  + a[1] * b[10]  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_50(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_103_51(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_op_103_52(double * a, double * b, double *r) { 
	
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

double * conga_op_103_53(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_103_54(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[4]  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[5]  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_103_55(double * a, double * b, double *r) { 
	
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
	r[6] = a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_103_56(double * a, double * b, double *r) { 
	
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
	r[7] = a[1] * b[4]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_103_57(double * a, double * b, double *r) { 
	
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
	r[7] = a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_58(double * a, double * b, double *r) { 
	
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
	r[7] = a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_59(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_103_60(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[5]  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[6]  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[7]  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_61(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[14]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_62(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_103_63(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[10]  * -1  + a[1] * b[9]  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_64(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_65(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[3]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_103_66(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[6]  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_67(double * a, double * b, double *r) { 
	
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

double * conga_op_103_68(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_103_69(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[6]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_70(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[4]  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[5]  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_71(double * a, double * b, double *r) { 
	
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

double * conga_op_103_72(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[12]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_op_103_73(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_103_74(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_75(double * a, double * b, double *r) { 
	
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
	r[9] = a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_76(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_77(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_78(double * a, double * b, double *r) { 
	
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
	r[9] = a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_79(double * a, double * b, double *r) { 
	
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
	r[7] = a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_80(double * a, double * b, double *r) { 
	
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
	r[6] = a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_81(double * a, double * b, double *r) { 
	
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
	r[6] = a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_82(double * a, double * b, double *r) { 
	
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
	r[9] = a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_83(double * a, double * b, double *r) { 
	
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

double * conga_op_103_84(double * a, double * b, double *r) { 
	
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
	r[7] = a[1] * b[4]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_103_85(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[11]  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_86(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	return r;
}

double * conga_op_103_87(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_103_88(double * a, double * b, double *r) { 
	
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
	r[7] = a[1] * b[5]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[7]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_89(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[14]  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_90(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_103_91(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[10]  * -1  + a[1] * b[9]  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_92(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[4]  * -1  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_93(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_103_94(double * a, double * b, double *r) { 
	
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
	r[7] = a[1] * b[4]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_95(double * a, double * b, double *r) { 
	
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
	r[9] = a[1] * b[6]  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_96(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[4]  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[5]  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_103_97(double * a, double * b, double *r) { 
	
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
	r[7] = a[1] * b[4]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[6]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_98(double * a, double * b, double *r) { 
	
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
	r[9] = a[1] * b[9]  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_99(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[3]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_100(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[4]  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[5]  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_101(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_102(double * a, double * b, double *r) { 
	
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

double * conga_op_103_103(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_103_104(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e1noni
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[3]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_105(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_106(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_107(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_op_103_108(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_109(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_110(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_103_111(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_103_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_103_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_103_114(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_103_115(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	return r;
}

double * conga_op_103_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_op_103_117(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e1noni
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[3]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_118(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_119(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[13]  * -1  + a[1] * b[12]  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_120(double * a, double * b, double *r) { 
	
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

double * conga_op_103_121(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_122(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_op_103_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_103_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_103_125(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_op_103_126(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_103_127(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_128(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_103_129(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[14]  * -1  + a[1] * b[13]  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_130(double * a, double * b, double *r) { 
	
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

double * conga_op_103_131(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[13]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_132(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_103_133(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_134(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_103_135(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_103_136(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[14]  * -1  + a[1] * b[13]  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_137(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_103_139(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_op_103_140(double * a, double * b, double *r) { 
	
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
	r[9] = a[1] * b[13]  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_141(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_142(double * a, double * b, double *r) { 
	
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
	r[6] = a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_103_143(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[4]  * -1  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5]  * -1  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_144(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_103_145(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_103_146(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_103_147(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_148(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[3]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_103_149(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[3]  + a[2] * b[2]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_150(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[3]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_151(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_op_103_152(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e13noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e23noni
	r[3] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_103_153(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[6]  + a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_103_154(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_op_103_155(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e13noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e23noni
	r[3] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_103_156(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_op_103_157(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e1noni
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[3]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_103_158(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[3]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_103_159(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[13]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_160(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_161(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_103_162(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[1] * b[2] ;
	
	
	//_e23ni
	r[7] = a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[4]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[6]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[13]  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	return r;
}

double * conga_op_103_163(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[1] * b[2] ;
	
	
	return r;
}

double * conga_op_103_164(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_103_165(double * a, double * b, double *r) { 
	
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

double * conga_op_103_166(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_op_103_167(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[6] ;
	
	
	//_e13no
	r[10] = a[0] * b[7] ;
	
	
	//_e23no
	r[11] = a[0] * b[8] ;
	
	
	//_e12ni
	r[12] = a[1] * b[6] ;
	
	
	//_e13ni
	r[13] = a[1] * b[7] ;
	
	
	//_e23ni
	r[14] = a[1] * b[8] ;
	
	
	//_e1noni
	r[15] = a[0] * b[12]  * -1  + a[1] * b[9]  + a[2] * b[0] ;
	
	
	//_e2noni
	r[16] = a[0] * b[13]  * -1  + a[1] * b[10]  + a[3] * b[0] ;
	
	
	//_e3noni
	r[17] = a[0] * b[14]  * -1  + a[1] * b[11]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[18] = a[0] * b[19]  + a[1] * b[16]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e13noni
	r[19] = a[0] * b[20]  + a[1] * b[17]  * -1  + a[2] * b[3]  + a[4] * b[1]  * -1 ;
	
	
	//_e23noni
	r[20] = a[0] * b[21]  + a[1] * b[18]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1 ;
	
	
	//_e123no
	r[21] = a[0] * b[25]  * -1 ;
	
	
	//_e123ni
	r[22] = a[1] * b[25]  * -1 ;
	
	
	//_e123noni
	r[23] = a[0] * b[30]  * -1  + a[1] * b[29]  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6] ;
	
	
	return r;
}


