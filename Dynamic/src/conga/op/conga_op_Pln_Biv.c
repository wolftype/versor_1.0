
#include "conga_op_Pln_Biv.h"


double * conga_op_145_1(double * a, double * b, double *r) { 
	
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

double * conga_op_145_2(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_145_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_5(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_145_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_7(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_8(double * a, double * b, double *r) { 
	
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

double * conga_op_145_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_145_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_11(double * a, double * b, double *r) { 
	
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

double * conga_op_145_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_15(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_16(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_145_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_21(double * a, double * b, double *r) { 
	
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

double * conga_op_145_22(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_23(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_24(double * a, double * b, double *r) { 
	
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

double * conga_op_145_25(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_145_26(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_27(double * a, double * b, double *r) { 
	
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

double * conga_op_145_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_145_29(double * a, double * b, double *r) { 
	
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

double * conga_op_145_30(double * a, double * b, double *r) { 
	
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

double * conga_op_145_31(double * a, double * b, double *r) { 
	
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

double * conga_op_145_32(double * a, double * b, double *r) { 
	
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

double * conga_op_145_33(double * a, double * b, double *r) { 
	
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

double * conga_op_145_34(double * a, double * b, double *r) { 
	
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

double * conga_op_145_35(double * a, double * b, double *r) { 
	
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

double * conga_op_145_36(double * a, double * b, double *r) { 
	
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

double * conga_op_145_37(double * a, double * b, double *r) { 
	
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

double * conga_op_145_38(double * a, double * b, double *r) { 
	
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

double * conga_op_145_39(double * a, double * b, double *r) { 
	
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

double * conga_op_145_40(double * a, double * b, double *r) { 
	
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

double * conga_op_145_41(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_44(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_145_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_46(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[11]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_47(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[14]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_49(double * a, double * b, double *r) { 
	
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

double * conga_op_145_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_51(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_52(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_53(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_54(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_55(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_56(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_57(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_58(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_60(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_61(double * a, double * b, double *r) { 
	
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

double * conga_op_145_62(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[13]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_63(double * a, double * b, double *r) { 
	
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

double * conga_op_145_64(double * a, double * b, double *r) { 
	
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

double * conga_op_145_65(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[9]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_66(double * a, double * b, double *r) { 
	
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

double * conga_op_145_67(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_68(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_69(double * a, double * b, double *r) { 
	
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

double * conga_op_145_70(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_71(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_145_72(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[12]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_73(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_145_74(double * a, double * b, double *r) { 
	
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

double * conga_op_145_75(double * a, double * b, double *r) { 
	
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

double * conga_op_145_76(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_77(double * a, double * b, double *r) { 
	
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

double * conga_op_145_78(double * a, double * b, double *r) { 
	
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

double * conga_op_145_79(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_80(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_81(double * a, double * b, double *r) { 
	
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

double * conga_op_145_82(double * a, double * b, double *r) { 
	
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

double * conga_op_145_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_145_84(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[10]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_85(double * a, double * b, double *r) { 
	
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

double * conga_op_145_86(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_87(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_145_88(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_89(double * a, double * b, double *r) { 
	
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

double * conga_op_145_90(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[13]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_91(double * a, double * b, double *r) { 
	
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

double * conga_op_145_92(double * a, double * b, double *r) { 
	
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

double * conga_op_145_93(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[9]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_94(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_95(double * a, double * b, double *r) { 
	
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

double * conga_op_145_96(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[10]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_97(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_98(double * a, double * b, double *r) { 
	
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

double * conga_op_145_99(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_100(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_101(double * a, double * b, double *r) { 
	
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

double * conga_op_145_102(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_145_103(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_145_104(double * a, double * b, double *r) { 
	
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

double * conga_op_145_105(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_106(double * a, double * b, double *r) { 
	
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

double * conga_op_145_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_108(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_109(double * a, double * b, double *r) { 
	
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

double * conga_op_145_110(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_111(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_114(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_145_115(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_117(double * a, double * b, double *r) { 
	
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

double * conga_op_145_118(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_119(double * a, double * b, double *r) { 
	
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

double * conga_op_145_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_145_121(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_145_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_145_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_145_127(double * a, double * b, double *r) { 
	
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

double * conga_op_145_128(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[14]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_129(double * a, double * b, double *r) { 
	
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

double * conga_op_145_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_145_131(double * a, double * b, double *r) { 
	
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

double * conga_op_145_132(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[13]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_133(double * a, double * b, double *r) { 
	
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

double * conga_op_145_134(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[9]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_135(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[13]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_136(double * a, double * b, double *r) { 
	
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

double * conga_op_145_137(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_145_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_140(double * a, double * b, double *r) { 
	
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

double * conga_op_145_141(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_142(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_143(double * a, double * b, double *r) { 
	
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

double * conga_op_145_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_145(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_145_146(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_147(double * a, double * b, double *r) { 
	
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

double * conga_op_145_148(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_149(double * a, double * b, double *r) { 
	
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

double * conga_op_145_150(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_151(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_152(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_153(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_145_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_155(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_156(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_157(double * a, double * b, double *r) { 
	
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

double * conga_op_145_158(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[9]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_159(double * a, double * b, double *r) { 
	
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

double * conga_op_145_160(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_161(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_145_162(double * a, double * b, double *r) { 
	
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

double * conga_op_145_163(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_145_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_145_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_145_167(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1] ;
	
	
	//_e13ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[1] ;
	
	
	//_e23ni
	r[6] = a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4]  * -1  + a[3] * b[1] ;
	
	
	//_e2noni
	r[8] = a[1] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e3noni
	r[9] = a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[6]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[7]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[12] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	//_e123noni
	r[14] = a[0] * b[18]  * -1  + a[1] * b[17]  + a[2] * b[16]  * -1  + a[3] * b[25]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}


