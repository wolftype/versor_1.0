
#include "conga_op_Trs_Pln.h"


double * conga_op_68_1(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_2(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_5(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_7(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_8(double * a, double * b, double *r) { 
	
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

double * conga_op_68_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_11(double * a, double * b, double *r) { 
	
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

double * conga_op_68_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_15(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_68_16(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_21(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_68_22(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_23(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_24(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_68_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_26(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_27(double * a, double * b, double *r) { 
	
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

double * conga_op_68_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_29(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_30(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_31(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_32(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_33(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_34(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_35(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_36(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_37(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_38(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_39(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_40(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_41(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_44(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_46(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_47(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_68_49(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_51(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_68_52(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_53(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_54(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_55(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_56(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_57(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_58(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_60(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_61(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_62(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_63(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_68_64(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_65(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_66(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_68_67(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_68(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_69(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_68_70(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_72(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_74(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_68_75(double * a, double * b, double *r) { 
	
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

double * conga_op_68_76(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_77(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_68_78(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_68_79(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_80(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_81(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_68_82(double * a, double * b, double *r) { 
	
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

double * conga_op_68_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_84(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_85(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_86(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_68_87(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_88(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_89(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_90(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_91(double * a, double * b, double *r) { 
	
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

double * conga_op_68_92(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_93(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_94(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_95(double * a, double * b, double *r) { 
	
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

double * conga_op_68_96(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_97(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_98(double * a, double * b, double *r) { 
	
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

double * conga_op_68_99(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_100(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_101(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_68_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_103(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_104(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_105(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_106(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_68_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_68_108(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_109(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_68_110(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_111(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_114(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_115(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_68_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_117(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_118(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_119(double * a, double * b, double *r) { 
	
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

double * conga_op_68_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_121(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_68_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_127(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_128(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_129(double * a, double * b, double *r) { 
	
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

double * conga_op_68_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_131(double * a, double * b, double *r) { 
	
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

double * conga_op_68_132(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_133(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_134(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_135(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_136(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_137(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_68_140(double * a, double * b, double *r) { 
	
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

double * conga_op_68_141(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_142(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_143(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_145(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_68_146(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_147(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_148(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_149(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_68_150(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_151(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_68_152(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_153(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_68_155(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_156(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_68_157(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_158(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_159(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_160(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_68_161(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_68_162(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_68_163(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_68_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_68_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_68_167(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1] ;
	
	
	//_e13ni
	r[4] = a[0] * b[3]  * -1  + a[2] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[4]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[10] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[4] * b[0] ;
	
	
	//_e23noni
	r[11] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[12] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[18]  * -1  + a[1] * b[17]  + a[2] * b[16]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}


