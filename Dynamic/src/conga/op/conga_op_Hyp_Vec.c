
#include "conga_op_Hyp_Vec.h"


double * conga_op_122_1(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_122_2(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_3(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_122_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_5(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_7(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_8(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_11(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_12(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_122_13(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_122_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_15(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_16(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_122_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_20(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_122_21(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_22(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_122_23(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_122_24(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_26(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_27(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_29(double * a, double * b, double *r) { 
	
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
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[7] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_30(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[2]  * -1  + a[1] * b[1] ;
	
	
	//_e13noni
	r[7] = a[0] * b[3]  * -1  + a[2] * b[1] ;
	
	
	//_e23noni
	r[8] = a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_op_122_31(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_122_32(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4] ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  * -1  + a[2] * b[4] ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_33(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[3]  + a[5] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[4] * b[3]  + a[5] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_122_34(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4] ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  * -1  + a[2] * b[4] ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_35(double * a, double * b, double *r) { 
	
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
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[7] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_36(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_37(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[2]  * -1  + a[1] * b[1] ;
	
	
	//_e13noni
	r[7] = a[0] * b[3]  * -1  + a[2] * b[1] ;
	
	
	//_e23noni
	r[8] = a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_op_122_38(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_39(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[3]  + a[5] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[4] * b[3]  + a[5] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_122_40(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_41(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_42(double * a, double * b, double *r) { 
	
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

double * conga_op_122_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_44(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_122_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_46(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_122_47(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_122_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_49(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_50(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_122_51(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_52(double * a, double * b, double *r) { 
	
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

double * conga_op_122_53(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_122_54(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_122_55(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_122_56(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_122_57(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_58(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_59(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_122_60(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_122_61(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_62(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_122_63(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_64(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_65(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_66(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_67(double * a, double * b, double *r) { 
	
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

double * conga_op_122_68(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_122_69(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_70(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_122_71(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_122_72(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_74(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_75(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_76(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_122_77(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_78(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_79(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_122_80(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_122_81(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_82(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_84(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_122_85(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_86(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_87(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_88(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_122_89(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_90(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_122_91(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_92(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4] ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  * -1  + a[2] * b[4] ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_93(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_122_94(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_122_95(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_96(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_122_97(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_122_98(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_99(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_100(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_122_101(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_102(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_122_103(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_104(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[5] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[3]  + a[5] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_122_105(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_106(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_108(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_122_109(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_110(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_122_111(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_122_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_114(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_115(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_117(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[5] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[3]  + a[5] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_122_118(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_122_119(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_121(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_122_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_127(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_128(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_122_129(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_131(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_132(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_122_133(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_134(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_135(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_122_136(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_137(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_122_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_140(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_141(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_142(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_122_143(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4] ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  * -1  + a[2] * b[4] ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_122_145(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_122_146(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_122_147(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_148(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_149(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_122_150(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_151(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_152(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_153(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_122_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_155(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_156(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_157(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[3] * b[2]  + a[4] * b[1]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[5] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[3]  + a[5] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_122_158(double * a, double * b, double *r) { 
	
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
	
	
	//_e123noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_122_159(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_160(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[3] ;
	
	
	//_e3noni
	r[8] = a[2] * b[3] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_122_161(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_122_162(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[5] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[10] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_122_163(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_122_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_122_167(double * a, double * b, double *r) { 
	
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
	
	
	//_e12no
	r[6] = a[0] * b[2]  * -1  + a[1] * b[1] ;
	
	
	//_e13no
	r[7] = a[0] * b[3]  * -1  + a[2] * b[1] ;
	
	
	//_e23no
	r[8] = a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e12ni
	r[9] = a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	//_e13ni
	r[10] = a[3] * b[3]  * -1  + a[5] * b[1] ;
	
	
	//_e23ni
	r[11] = a[4] * b[3]  * -1  + a[5] * b[2] ;
	
	
	//_e1noni
	r[12] = a[0] * b[5]  + a[3] * b[4]  * -1 ;
	
	
	//_e2noni
	r[13] = a[1] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e3noni
	r[14] = a[2] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e12noni
	r[15] = a[0] * b[13]  * -1  + a[1] * b[12]  + a[3] * b[10]  + a[4] * b[9]  * -1 ;
	
	
	//_e13noni
	r[16] = a[0] * b[14]  * -1  + a[2] * b[12]  + a[3] * b[11]  + a[5] * b[9]  * -1 ;
	
	
	//_e23noni
	r[17] = a[1] * b[14]  * -1  + a[2] * b[13]  + a[4] * b[11]  + a[5] * b[10]  * -1 ;
	
	
	//_e123no
	r[18] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	//_e123ni
	r[19] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6] ;
	
	
	//_e123noni
	r[20] = a[0] * b[21]  + a[1] * b[20]  * -1  + a[2] * b[19]  + a[3] * b[18]  * -1  + a[4] * b[17]  + a[5] * b[16]  * -1 ;
	
	
	return r;
}


