
#include "conga_op_Dlp.h"


double * conga_op_22_1(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_22_2(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_22_3(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_4(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_5(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_22_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_22_7(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_22_8(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_9(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_22_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_22_11(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_12(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_22_13(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_22_15(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	return r;
}

double * conga_op_22_16(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_17(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_22_18(double * a, double * b, double *r) { 
	
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

double * conga_op_22_19(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_20(double * a, double * b, double *r) { 
	
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

double * conga_op_22_21(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_22(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_22_23(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_22_24(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_25(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_22_26(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_22_27(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_28(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_22_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[3] * b[1] ;
	
	
	//_e13ni
	r[5] = a[3] * b[2] ;
	
	
	//_e23ni
	r[6] = a[3] * b[3] ;
	
	
	//_e123
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_22_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_22_31(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1] ;
	
	
	//_e2noni
	r[5] = a[1] * b[1] ;
	
	
	//_e3noni
	r[6] = a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_22_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3] ;
	
	
	//_e123
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_22_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[7] = a[3] * b[1] ;
	
	
	//_e2noni
	r[8] = a[3] * b[2] ;
	
	
	//_e3noni
	r[9] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_22_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[1] * b[7] ;
	
	
	//_e3noni
	r[9] = a[2] * b[7] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_22_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[3] * b[1] ;
	
	
	//_e13ni
	r[5] = a[3] * b[2] ;
	
	
	//_e23ni
	r[6] = a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[1] * b[4] ;
	
	
	//_e3noni
	r[9] = a[2] * b[4] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_22_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_22_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[1] * b[4] ;
	
	
	//_e3noni
	r[9] = a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_22_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11] ;
	
	
	return r;
}

double * conga_op_22_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[4]  + a[3] * b[1] ;
	
	
	//_e2noni
	r[8] = a[1] * b[4]  + a[3] * b[2] ;
	
	
	//_e3noni
	r[9] = a[2] * b[4]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_22_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[14] ;
	
	
	return r;
}

double * conga_op_22_41(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e13noni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_22_42(double * a, double * b, double *r) { 
	
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

double * conga_op_22_43(double * a, double * b, double *r) { 
	
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

double * conga_op_22_44(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[7] = a[3] * b[2]  * -1 ;
	
	
	//_e13noni
	r[8] = a[3] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[3] * b[4]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_22_45(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_22_46(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[3] * b[5]  * -1 ;
	
	
	//_e13noni
	r[11] = a[3] * b[6]  * -1 ;
	
	
	//_e23noni
	r[12] = a[3] * b[7]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_op_22_47(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_22_48(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_op_22_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_op_22_50(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_22_51(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_22_52(double * a, double * b, double *r) { 
	
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

double * conga_op_22_53(double * a, double * b, double *r) { 
	
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

double * conga_op_22_54(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_22_55(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_22_56(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[3] * b[5]  * -1 ;
	
	
	//_e23noni
	r[12] = a[3] * b[6]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[14] = a[3] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_22_57(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_22_58(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[7]  + a[2] * b[5]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[7]  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_22_59(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_60(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[10]  + a[2] * b[8]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[10]  + a[2] * b[9]  * -1 ;
	
	
	//_e123ni
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_22_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11] ;
	
	
	return r;
}

double * conga_op_22_62(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_22_63(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_22_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_22_65(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_22_66(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_22_67(double * a, double * b, double *r) { 
	
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

double * conga_op_22_68(double * a, double * b, double *r) { 
	
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

double * conga_op_22_69(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_70(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_22_71(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_22_72(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_op_22_73(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_22_74(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_22_75(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_op_22_76(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_22_77(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_22_78(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_22_79(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_22_80(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_22_81(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_22_82(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_22_83(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_22_84(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[14] = a[3] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_22_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[11] ;
	
	
	return r;
}

double * conga_op_22_86(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	return r;
}

double * conga_op_22_87(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_88(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_22_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[14] ;
	
	
	return r;
}

double * conga_op_22_90(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_22_91(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_22_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[1] * b[7] ;
	
	
	//_e3noni
	r[9] = a[2] * b[7] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_22_93(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_22_94(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[3] * b[5]  * -1 ;
	
	
	//_e23noni
	r[12] = a[3] * b[6]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_22_95(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_22_96(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_22_97(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_22_98(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_22_99(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_22_100(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_22_101(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_22_102(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_22_103(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[4]  + a[2] * b[2]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_22_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[1] ;
	
	
	//_e2noni
	r[11] = a[3] * b[2] ;
	
	
	//_e3noni
	r[12] = a[3] * b[3] ;
	
	
	//_e123noni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_22_105(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_22_106(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_22_107(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_22_108(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_22_109(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_110(double * a, double * b, double *r) { 
	
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

double * conga_op_22_111(double * a, double * b, double *r) { 
	
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

double * conga_op_22_112(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_22_113(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_114(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23noni
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_22_115(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_22_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_22_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[1] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[2] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_22_118(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_22_119(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[12] ;
	
	
	return r;
}

double * conga_op_22_120(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_22_121(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_22_122(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[3] * b[2] ;
	
	
	return r;
}

double * conga_op_22_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_22_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_22_125(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_22_126(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_22_128(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_22_129(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13] ;
	
	
	return r;
}

double * conga_op_22_130(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_22_131(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_op_22_132(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_22_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_22_134(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_22_135(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_22_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13] ;
	
	
	return r;
}

double * conga_op_22_137(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_22_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_22_139(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_22_140(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13] ;
	
	
	return r;
}

double * conga_op_22_141(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_22_142(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123ni
	r[9] = a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_22_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3] ;
	
	
	//_e123
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_22_144(double * a, double * b, double *r) { 
	
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

double * conga_op_22_145(double * a, double * b, double *r) { 
	
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

double * conga_op_22_146(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_22_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_22_148(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_22_149(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_22_150(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_22_151(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_22_152(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_22_153(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_22_154(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_22_155(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_22_156(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_22_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[1] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[2] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[3] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_22_158(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_22_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_op_22_160(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_22_161(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_22_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13] ;
	
	
	return r;
}

double * conga_op_22_163(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_22_164(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_22_165(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_22_166(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[2] ;
	
	
	return r;
}

double * conga_op_22_167(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[7] = a[0] * b[4] ;
	
	
	//_e2no
	r[8] = a[1] * b[4] ;
	
	
	//_e3no
	r[9] = a[2] * b[4] ;
	
	
	//_e1ni
	r[10] = a[0] * b[5]  + a[3] * b[1]  * -1 ;
	
	
	//_e2ni
	r[11] = a[1] * b[5]  + a[3] * b[2]  * -1 ;
	
	
	//_e3ni
	r[12] = a[2] * b[5]  + a[3] * b[3]  * -1 ;
	
	
	//_noni
	r[13] = a[3] * b[4]  * -1 ;
	
	
	//_e12no
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1 ;
	
	
	//_e13no
	r[15] = a[0] * b[11]  + a[2] * b[9]  * -1 ;
	
	
	//_e23no
	r[16] = a[1] * b[11]  + a[2] * b[10]  * -1 ;
	
	
	//_e12ni
	r[17] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[3] * b[6] ;
	
	
	//_e13ni
	r[18] = a[0] * b[14]  + a[2] * b[12]  * -1  + a[3] * b[7] ;
	
	
	//_e23ni
	r[19] = a[1] * b[14]  + a[2] * b[13]  * -1  + a[3] * b[8] ;
	
	
	//_e1noni
	r[20] = a[0] * b[15]  + a[3] * b[9] ;
	
	
	//_e2noni
	r[21] = a[1] * b[15]  + a[3] * b[10] ;
	
	
	//_e3noni
	r[22] = a[2] * b[15]  + a[3] * b[11] ;
	
	
	//_e123
	r[23] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	//_e12noni
	r[24] = a[0] * b[23]  + a[1] * b[22]  * -1  + a[3] * b[16]  * -1 ;
	
	
	//_e13noni
	r[25] = a[0] * b[24]  + a[2] * b[22]  * -1  + a[3] * b[17]  * -1 ;
	
	
	//_e23noni
	r[26] = a[1] * b[24]  + a[2] * b[23]  * -1  + a[3] * b[18]  * -1 ;
	
	
	//_e123no
	r[27] = a[0] * b[18]  + a[1] * b[17]  * -1  + a[2] * b[16] ;
	
	
	//_e123ni
	r[28] = a[0] * b[21]  + a[1] * b[20]  * -1  + a[2] * b[19]  + a[3] * b[25]  * -1 ;
	
	
	//_e123noni
	r[29] = a[0] * b[28]  + a[1] * b[27]  * -1  + a[2] * b[26]  + a[3] * b[29] ;
	
	
	return r;
}


