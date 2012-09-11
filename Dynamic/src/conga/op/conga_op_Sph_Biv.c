
#include "conga_op_Sph_Biv.h"


double * conga_op_139_1(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_139_2(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_139_3(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_139_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_139_5(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_139_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_139_7(double * a, double * b, double *r) { 
	
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
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_8(double * a, double * b, double *r) { 
	
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

double * conga_op_139_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_op_139_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_139_11(double * a, double * b, double *r) { 
	
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

double * conga_op_139_12(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_139_13(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_139_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_139_15(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_139_16(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_139_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_139_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_139_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_139_20(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_139_21(double * a, double * b, double *r) { 
	
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

double * conga_op_139_22(double * a, double * b, double *r) { 
	
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
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_23(double * a, double * b, double *r) { 
	
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

double * conga_op_139_24(double * a, double * b, double *r) { 
	
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

double * conga_op_139_25(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_139_26(double * a, double * b, double *r) { 
	
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
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_27(double * a, double * b, double *r) { 
	
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

double * conga_op_139_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_139_29(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_30(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_139_31(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_139_32(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_33(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_139_34(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_35(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_36(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_37(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_139_38(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_39(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_139_40(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_41(double * a, double * b, double *r) { 
	
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

double * conga_op_139_42(double * a, double * b, double *r) { 
	
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

double * conga_op_139_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_139_44(double * a, double * b, double *r) { 
	
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

double * conga_op_139_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_139_46(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[11]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_47(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[14]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_139_49(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_50(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_139_51(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_139_52(double * a, double * b, double *r) { 
	
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

double * conga_op_139_53(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_139_54(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[7]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_55(double * a, double * b, double *r) { 
	
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

double * conga_op_139_56(double * a, double * b, double *r) { 
	
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
	r[9] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[7]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_57(double * a, double * b, double *r) { 
	
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
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_58(double * a, double * b, double *r) { 
	
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
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_59(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_139_60(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_61(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_62(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[13]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_63(double * a, double * b, double *r) { 
	
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

double * conga_op_139_64(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_65(double * a, double * b, double *r) { 
	
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

double * conga_op_139_66(double * a, double * b, double *r) { 
	
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

double * conga_op_139_67(double * a, double * b, double *r) { 
	
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

double * conga_op_139_68(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_139_69(double * a, double * b, double *r) { 
	
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

double * conga_op_139_70(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_71(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_139_72(double * a, double * b, double *r) { 
	
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

double * conga_op_139_73(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_139_74(double * a, double * b, double *r) { 
	
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

double * conga_op_139_75(double * a, double * b, double *r) { 
	
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

double * conga_op_139_76(double * a, double * b, double *r) { 
	
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

double * conga_op_139_77(double * a, double * b, double *r) { 
	
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

double * conga_op_139_78(double * a, double * b, double *r) { 
	
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

double * conga_op_139_79(double * a, double * b, double *r) { 
	
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
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_80(double * a, double * b, double *r) { 
	
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

double * conga_op_139_81(double * a, double * b, double *r) { 
	
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

double * conga_op_139_82(double * a, double * b, double *r) { 
	
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

double * conga_op_139_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_139_84(double * a, double * b, double *r) { 
	
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
	r[9] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[10]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_85(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_86(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_139_87(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_139_88(double * a, double * b, double *r) { 
	
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
	r[9] = a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_89(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_90(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[13]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_91(double * a, double * b, double *r) { 
	
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

double * conga_op_139_92(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_93(double * a, double * b, double *r) { 
	
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

double * conga_op_139_94(double * a, double * b, double *r) { 
	
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
	r[9] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_95(double * a, double * b, double *r) { 
	
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

double * conga_op_139_96(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[10]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_97(double * a, double * b, double *r) { 
	
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
	r[9] = a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_98(double * a, double * b, double *r) { 
	
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

double * conga_op_139_99(double * a, double * b, double *r) { 
	
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

double * conga_op_139_100(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_101(double * a, double * b, double *r) { 
	
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

double * conga_op_139_102(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_139_103(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_139_104(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_139_105(double * a, double * b, double *r) { 
	
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

double * conga_op_139_106(double * a, double * b, double *r) { 
	
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

double * conga_op_139_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_139_108(double * a, double * b, double *r) { 
	
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

double * conga_op_139_109(double * a, double * b, double *r) { 
	
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

double * conga_op_139_110(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_139_111(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_139_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_139_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_139_114(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_139_115(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_139_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_139_117(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_139_118(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_119(double * a, double * b, double *r) { 
	
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

double * conga_op_139_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[6] ;
	
	
	return r;
}

double * conga_op_139_121(double * a, double * b, double *r) { 
	
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

double * conga_op_139_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_139_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_139_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_139_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_139_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_139_127(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_128(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[14]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_129(double * a, double * b, double *r) { 
	
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

double * conga_op_139_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_op_139_131(double * a, double * b, double *r) { 
	
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

double * conga_op_139_132(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[13]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_133(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_134(double * a, double * b, double *r) { 
	
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

double * conga_op_139_135(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[13]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_136(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_137(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_139_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_139_140(double * a, double * b, double *r) { 
	
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

double * conga_op_139_141(double * a, double * b, double *r) { 
	
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

double * conga_op_139_142(double * a, double * b, double *r) { 
	
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

double * conga_op_139_143(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_139_145(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_139_146(double * a, double * b, double *r) { 
	
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

double * conga_op_139_147(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_148(double * a, double * b, double *r) { 
	
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

double * conga_op_139_149(double * a, double * b, double *r) { 
	
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

double * conga_op_139_150(double * a, double * b, double *r) { 
	
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

double * conga_op_139_151(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_139_152(double * a, double * b, double *r) { 
	
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

double * conga_op_139_153(double * a, double * b, double *r) { 
	
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

double * conga_op_139_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_139_155(double * a, double * b, double *r) { 
	
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

double * conga_op_139_156(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_139_157(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_139_158(double * a, double * b, double *r) { 
	
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

double * conga_op_139_159(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_160(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_161(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_139_162(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_139_163(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_139_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_139_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[6] ;
	
	
	return r;
}

double * conga_op_139_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_139_167(double * a, double * b, double *r) { 
	
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
	r[19] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	//_e123ni
	r[20] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6] ;
	
	
	//_e123noni
	r[21] = a[0] * b[21]  + a[1] * b[20]  * -1  + a[2] * b[19]  + a[3] * b[18]  * -1  + a[4] * b[17]  + a[5] * b[16]  * -1  + a[6] * b[25]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}


