
#include "conga_op_Mnk_Par.h"


double * conga_op_104_1(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[1] * b[0] ;
	
	
	//_e2no
	r[2] = a[2] * b[0] ;
	
	
	//_e3no
	r[3] = a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_2(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_3(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_104_4(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_104_5(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e1noni
	r[2] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[3] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[4] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_6(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_104_7(double * a, double * b, double *r) { 
	
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
	r[5] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[6] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[7] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[8] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e123noni
	r[14] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_8(double * a, double * b, double *r) { 
	
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
	r[10] = a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[1] * b[8]  * -1  + a[3] * b[6]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[2] * b[8]  * -1  + a[3] * b[7]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[14] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_9(double * a, double * b, double *r) { 
	
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
	r[10] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_10(double * a, double * b, double *r) { 
	
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

double * conga_op_104_11(double * a, double * b, double *r) { 
	
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
	r[9] = a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[1] * b[8]  * -1  + a[3] * b[6]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[2] * b[8]  * -1  + a[3] * b[7]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[13] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_12(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_104_13(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_104_14(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_104_15(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_104_16(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_17(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_104_18(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_104_19(double * a, double * b, double *r) { 
	
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

double * conga_op_104_20(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13noni
	r[5] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23noni
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_104_21(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e13noni
	r[7] = a[1] * b[5]  * -1  + a[3] * b[3] ;
	
	
	//_e23noni
	r[8] = a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123no
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_22(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[1] * b[3] ;
	
	
	//_e2noni
	r[11] = a[2] * b[3] ;
	
	
	//_e3noni
	r[12] = a[3] * b[3] ;
	
	
	//_e123noni
	r[13] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_23(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123noni
	r[9] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_24(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_25(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_104_26(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[6] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_27(double * a, double * b, double *r) { 
	
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
	r[6] = a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_28(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_29(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[8] * b[0] ;
	
	
	//_e23noni
	r[12] = a[9] * b[0] ;
	
	
	//_e123no
	r[13] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[1] * b[0] ;
	
	
	//_e2no
	r[2] = a[2] * b[0] ;
	
	
	//_e3no
	r[3] = a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[1] * b[3]  * -1  + a[3] * b[1]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[2] * b[3]  * -1  + a[3] * b[2]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[1] * b[0] ;
	
	
	//_e2no
	r[2] = a[2] * b[0] ;
	
	
	//_e3no
	r[3] = a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[1] ;
	
	
	//_e12noni
	r[8] = a[7] * b[0] ;
	
	
	//_e13noni
	r[9] = a[8] * b[0] ;
	
	
	//_e23noni
	r[10] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[6]  * -1  + a[3] * b[4]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[6]  * -1  + a[3] * b[5]  + a[9] * b[0] ;
	
	
	//_e123no
	r[13] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[4] * b[3]  + a[6] * b[1]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[5] * b[3]  + a[6] * b[2]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[7] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[9] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[0] * b[11]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[4] ;
	
	
	//_e12noni
	r[11] = a[0] * b[5]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[6]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[7]  + a[9] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[12] = a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[1] * b[0] ;
	
	
	//_e2no
	r[2] = a[2] * b[0] ;
	
	
	//_e3no
	r[3] = a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[4] ;
	
	
	//_e12noni
	r[8] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[9] = a[1] * b[3]  * -1  + a[3] * b[1]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[10] = a[2] * b[3]  * -1  + a[3] * b[2]  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[1] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[4] ;
	
	
	//_e12noni
	r[8] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[9] = a[4] * b[3]  + a[6] * b[1]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[10] = a[5] * b[3]  + a[6] * b[2]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[1] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[14]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[0] * b[15]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_41(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[5] = a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[6] = a[6] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_104_42(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_104_43(double * a, double * b, double *r) { 
	
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

double * conga_op_104_44(double * a, double * b, double *r) { 
	
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
	r[8] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[9] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[10] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123noni
	r[11] = a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_104_45(double * a, double * b, double *r) { 
	
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

double * conga_op_104_46(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[5]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[11] ;
	
	
	//_e123noni
	r[15] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_47(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[5]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[14] ;
	
	
	//_e123noni
	r[15] = a[0] * b[15]  + a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_48(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[10] ;
	
	
	//_e123ni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_op_104_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[9]  * -1  + a[3] * b[8]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[10]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[11]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_50(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_104_51(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_104_52(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_104_53(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_104_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[5]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[6]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[1] * b[3] ;
	
	
	//_e2noni
	r[11] = a[2] * b[3] ;
	
	
	//_e3noni
	r[12] = a[3] * b[3] ;
	
	
	//_e123
	r[13] = a[0] * b[7] ;
	
	
	//_e123noni
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_55(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[9] = a[0] * b[3] ;
	
	
	//_e123noni
	r[10] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[7] ;
	
	
	//_e123noni
	r[14] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[6]  + a[6] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_58(double * a, double * b, double *r) { 
	
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
	r[5] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[6] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[7] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[8] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[5]  + a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e123noni
	r[14] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_59(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_104_60(double * a, double * b, double *r) { 
	
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
	r[5] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[6] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[7] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[8] = a[0] * b[5]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[6]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[7]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[8]  + a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e123noni
	r[14] = a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[1] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[0] * b[14]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[1] * b[3] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[2] * b[3] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[3] * b[3] ;
	
	
	//_e123
	r[13] = a[0] * b[13] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_63(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[5]  * -1  + a[3] * b[3] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[10]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[7] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  + a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8] ;
	
	
	//_e123
	r[12] = a[0] * b[9] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_66(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_67(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_104_68(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_104_69(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e13noni
	r[7] = a[1] * b[5]  * -1  + a[3] * b[3] ;
	
	
	//_e23noni
	r[8] = a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123no
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[5]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[6]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[1] * b[3] ;
	
	
	//_e2noni
	r[11] = a[2] * b[3] ;
	
	
	//_e3noni
	r[12] = a[3] * b[3] ;
	
	
	//_e123noni
	r[13] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_71(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_104_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9] ;
	
	
	//_e2noni
	r[10] = a[0] * b[10] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11] ;
	
	
	//_e123
	r[12] = a[0] * b[12] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_73(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_op_104_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_75(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[1] * b[8]  * -1  + a[3] * b[6]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[11]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[13] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8] ;
	
	
	//_e123noni
	r[12] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_78(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[5]  * -1  + a[3] * b[3] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123no
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e2noni
	r[11] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e3noni
	r[12] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e123noni
	r[13] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[3] ;
	
	
	//_e2noni
	r[10] = a[0] * b[4] ;
	
	
	//_e3noni
	r[11] = a[0] * b[5] ;
	
	
	//_e123noni
	r[12] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_81(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_82(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_83(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[8]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[9]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[10] ;
	
	
	//_e123noni
	r[14] = a[0] * b[11]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[7] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  + a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[11]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_86(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_104_87(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_88(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[5]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[8] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[8]  + a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e123noni
	r[14] = a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[1] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[14]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[13] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_91(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[10]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[7] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[9] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8] ;
	
	
	//_e123
	r[12] = a[0] * b[9] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[6] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_95(double * a, double * b, double *r) { 
	
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
	r[6] = a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[5]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[6]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[1] * b[3] ;
	
	
	//_e2noni
	r[11] = a[0] * b[8]  + a[2] * b[3] ;
	
	
	//_e3noni
	r[12] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e123
	r[13] = a[0] * b[10] ;
	
	
	//_e123noni
	r[14] = a[0] * b[11]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[8]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[9]  + a[6] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_98(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8] ;
	
	
	//_e123noni
	r[12] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[5]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[6]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[1] * b[3] ;
	
	
	//_e2noni
	r[11] = a[0] * b[8]  + a[2] * b[3] ;
	
	
	//_e3noni
	r[12] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e123noni
	r[13] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_101(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[5]  * -1  + a[3] * b[3] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123no
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_102(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_104_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e1noni
	r[2] = a[0] * b[2]  + a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[3]  + a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[4]  + a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[7]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[6] * b[1]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_107(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[1] * b[5]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_104_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123noni
	r[9] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_109(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_110(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_104_111(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_104_112(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_104_113(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_104_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[2] = a[0] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[3] = a[0] * b[3]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_115(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_104_116(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_op_104_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[7] ;
	
	
	//_e12noni
	r[8] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[9] = a[1] * b[6]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[6] * b[1]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[10] = a[2] * b[6]  * -1  + a[3] * b[5]  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_118(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[5]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e123noni
	r[14] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_119(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[1] * b[8]  * -1  + a[3] * b[6]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[11]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[12]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[13]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_120(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9] ;
	
	
	//_e2noni
	r[10] = a[0] * b[10] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11] ;
	
	
	//_e123noni
	r[12] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_122(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[5]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[2] * b[5]  * -1  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_104_123(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_124(double * a, double * b, double *r) { 
	
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
	r[9] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_125(double * a, double * b, double *r) { 
	
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

double * conga_op_104_126(double * a, double * b, double *r) { 
	
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
	r[6] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[12] = a[1] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[13] = a[2] * b[9]  * -1  + a[3] * b[8]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_128(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[5]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[14] ;
	
	
	//_e123noni
	r[15] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_129(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[1] * b[8]  * -1  + a[3] * b[6]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_130(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[10]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_131(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[1] * b[8]  * -1  + a[3] * b[6]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[13]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[1] * b[3] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[2] * b[3] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[3] * b[3] ;
	
	
	//_e123
	r[13] = a[0] * b[13] ;
	
	
	//_e123noni
	r[14] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[9]  * -1  + a[3] * b[8]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[13] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	//_e123noni
	r[10] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[13] ;
	
	
	//_e123noni
	r[14] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[1] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_137(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[5]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e123noni
	r[14] = a[0] * b[14]  + a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_138(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_139(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_104_140(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[10]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[1] * b[8]  * -1  + a[3] * b[6]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[14] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123noni
	r[9] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[3] ;
	
	
	//_e2noni
	r[10] = a[0] * b[4] ;
	
	
	//_e3noni
	r[11] = a[0] * b[5] ;
	
	
	//_e123
	r[12] = a[0] * b[6] ;
	
	
	//_e123noni
	r[13] = a[0] * b[7]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[6]  * -1  + a[3] * b[4]  + a[8] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[6]  * -1  + a[3] * b[5]  + a[9] * b[0] ;
	
	
	//_e123no
	r[13] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_144(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_104_145(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_104_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[9] = a[0] * b[6] ;
	
	
	//_e123noni
	r[10] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[12] = a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[13] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[9] = a[0] * b[6] ;
	
	
	//_e123noni
	r[10] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_149(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_104_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123noni
	r[9] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_151(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_104_152(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_104_153(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[8]  + a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[9]  + a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  + a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_104_154(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[1] * b[5]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[2] * b[5]  * -1  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6] ;
	
	
	//_e123ni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_104_155(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_104_156(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_104_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[7] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9]  + a[1] * b[6]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[6] * b[1]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[1] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[13] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[13]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[1] * b[3] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[2] * b[3] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[3] * b[3] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[1] * b[2]  * -1  + a[3] * b[0] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[6] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_104_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[1] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[6]  + a[6] * b[4]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_104_163(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_104_164(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_165(double * a, double * b, double *r) { 
	
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
	r[7] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_104_166(double * a, double * b, double *r) { 
	
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
	r[7] = a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[2] * b[5]  * -1  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_104_167(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[9]  + a[1] * b[0] ;
	
	
	//_e2no
	r[10] = a[0] * b[10]  + a[2] * b[0] ;
	
	
	//_e3no
	r[11] = a[0] * b[11]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[12] = a[0] * b[12]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[13] = a[0] * b[13]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[14] = a[0] * b[14]  + a[6] * b[0] ;
	
	
	//_noni
	r[15] = a[0] * b[15] ;
	
	
	//_e12no
	r[16] = a[0] * b[16]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e13no
	r[17] = a[0] * b[17]  + a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[18] = a[0] * b[18]  + a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[19] = a[0] * b[19]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e13ni
	r[20] = a[0] * b[20]  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23ni
	r[21] = a[0] * b[21]  + a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e1noni
	r[22] = a[0] * b[22]  + a[1] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e2noni
	r[23] = a[0] * b[23]  + a[2] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e3noni
	r[24] = a[0] * b[24]  + a[3] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123
	r[25] = a[0] * b[25] ;
	
	
	//_e12noni
	r[26] = a[0] * b[26]  + a[1] * b[13]  * -1  + a[2] * b[12]  + a[4] * b[10]  + a[5] * b[9]  * -1  + a[7] * b[0] ;
	
	
	//_e13noni
	r[27] = a[0] * b[27]  + a[1] * b[14]  * -1  + a[3] * b[12]  + a[4] * b[11]  + a[6] * b[9]  * -1  + a[8] * b[0] ;
	
	
	//_e23noni
	r[28] = a[0] * b[28]  + a[2] * b[14]  * -1  + a[3] * b[13]  + a[5] * b[11]  + a[6] * b[10]  * -1  + a[9] * b[0] ;
	
	
	//_e123no
	r[29] = a[0] * b[29]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	//_e123ni
	r[30] = a[0] * b[30]  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6] ;
	
	
	//_e123noni
	r[31] = a[0] * b[31]  + a[1] * b[21]  + a[2] * b[20]  * -1  + a[3] * b[19]  + a[4] * b[18]  * -1  + a[5] * b[17]  + a[6] * b[16]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1] ;
	
	
	return r;
}


