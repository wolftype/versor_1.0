
#include "conga_op_Mnk_Dll.h"


double * conga_op_110_1(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_110_2(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_5(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_7(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_8(double * a, double * b, double *r) { 
	
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

double * conga_op_110_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_11(double * a, double * b, double *r) { 
	
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

double * conga_op_110_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_15(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_110_16(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_21(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_110_22(double * a, double * b, double *r) { 
	
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

double * conga_op_110_23(double * a, double * b, double *r) { 
	
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

double * conga_op_110_24(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_110_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_26(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_27(double * a, double * b, double *r) { 
	
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

double * conga_op_110_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_29(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_30(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_110_31(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_110_32(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_33(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_110_34(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_35(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_36(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_37(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_110_38(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_39(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_110_40(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_41(double * a, double * b, double *r) { 
	
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

double * conga_op_110_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_44(double * a, double * b, double *r) { 
	
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

double * conga_op_110_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_46(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_47(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_110_49(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_51(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_110_52(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_53(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_54(double * a, double * b, double *r) { 
	
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

double * conga_op_110_55(double * a, double * b, double *r) { 
	
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

double * conga_op_110_56(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_57(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_58(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_60(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_61(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_62(double * a, double * b, double *r) { 
	
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

double * conga_op_110_63(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_110_64(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_65(double * a, double * b, double *r) { 
	
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

double * conga_op_110_66(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_110_67(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_68(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_69(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_110_70(double * a, double * b, double *r) { 
	
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

double * conga_op_110_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_72(double * a, double * b, double *r) { 
	
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

double * conga_op_110_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_74(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_110_75(double * a, double * b, double *r) { 
	
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

double * conga_op_110_76(double * a, double * b, double *r) { 
	
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

double * conga_op_110_77(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_110_78(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_110_79(double * a, double * b, double *r) { 
	
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

double * conga_op_110_80(double * a, double * b, double *r) { 
	
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

double * conga_op_110_81(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_110_82(double * a, double * b, double *r) { 
	
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

double * conga_op_110_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_84(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_85(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_86(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_110_87(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_88(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_89(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_90(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_91(double * a, double * b, double *r) { 
	
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

double * conga_op_110_92(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_93(double * a, double * b, double *r) { 
	
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

double * conga_op_110_94(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_95(double * a, double * b, double *r) { 
	
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

double * conga_op_110_96(double * a, double * b, double *r) { 
	
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

double * conga_op_110_97(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_98(double * a, double * b, double *r) { 
	
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

double * conga_op_110_99(double * a, double * b, double *r) { 
	
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

double * conga_op_110_100(double * a, double * b, double *r) { 
	
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

double * conga_op_110_101(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_110_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_103(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_104(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_110_105(double * a, double * b, double *r) { 
	
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

double * conga_op_110_106(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_110_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_110_108(double * a, double * b, double *r) { 
	
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

double * conga_op_110_109(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_110_110(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_111(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_114(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_115(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_110_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_117(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_110_118(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_119(double * a, double * b, double *r) { 
	
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

double * conga_op_110_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_121(double * a, double * b, double *r) { 
	
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

double * conga_op_110_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_110_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_127(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_128(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_129(double * a, double * b, double *r) { 
	
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

double * conga_op_110_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_131(double * a, double * b, double *r) { 
	
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

double * conga_op_110_132(double * a, double * b, double *r) { 
	
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

double * conga_op_110_133(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_134(double * a, double * b, double *r) { 
	
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

double * conga_op_110_135(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_136(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_137(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_110_140(double * a, double * b, double *r) { 
	
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

double * conga_op_110_141(double * a, double * b, double *r) { 
	
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

double * conga_op_110_142(double * a, double * b, double *r) { 
	
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

double * conga_op_110_143(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_145(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_110_146(double * a, double * b, double *r) { 
	
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

double * conga_op_110_147(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_148(double * a, double * b, double *r) { 
	
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

double * conga_op_110_149(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_110_150(double * a, double * b, double *r) { 
	
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

double * conga_op_110_151(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_110_152(double * a, double * b, double *r) { 
	
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

double * conga_op_110_153(double * a, double * b, double *r) { 
	
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

double * conga_op_110_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_110_155(double * a, double * b, double *r) { 
	
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

double * conga_op_110_156(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_110_157(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_110_158(double * a, double * b, double *r) { 
	
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

double * conga_op_110_159(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_160(double * a, double * b, double *r) { 
	
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

double * conga_op_110_161(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_110_162(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_110_163(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_110_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_110_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_110_167(double * a, double * b, double *r) { 
	
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
	r[12] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	//_e123noni
	r[13] = a[0] * b[18]  * -1  + a[1] * b[17]  + a[2] * b[16]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}


