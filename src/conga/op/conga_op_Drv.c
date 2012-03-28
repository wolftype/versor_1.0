
#include "conga_op_Drv.h"


double * conga_op_12_1(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_2(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_5(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_7(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_12_8(double * a, double * b, double *r) { 
	
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

double * conga_op_12_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_11(double * a, double * b, double *r) { 
	
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

double * conga_op_12_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_15(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_12_16(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_21(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_22(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_23(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_24(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_26(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_12_27(double * a, double * b, double *r) { 
	
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

double * conga_op_12_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_29(double * a, double * b, double *r) { 
	
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

double * conga_op_12_30(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_31(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_32(double * a, double * b, double *r) { 
	
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

double * conga_op_12_33(double * a, double * b, double *r) { 
	
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

double * conga_op_12_34(double * a, double * b, double *r) { 
	
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

double * conga_op_12_35(double * a, double * b, double *r) { 
	
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

double * conga_op_12_36(double * a, double * b, double *r) { 
	
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

double * conga_op_12_37(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_38(double * a, double * b, double *r) { 
	
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

double * conga_op_12_39(double * a, double * b, double *r) { 
	
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

double * conga_op_12_40(double * a, double * b, double *r) { 
	
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

double * conga_op_12_41(double * a, double * b, double *r) { 
	
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

double * conga_op_12_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_44(double * a, double * b, double *r) { 
	
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

double * conga_op_12_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_46(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_12_47(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_12_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_12_49(double * a, double * b, double *r) { 
	
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

double * conga_op_12_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_51(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_12_52(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_53(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_54(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_55(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_56(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_12_57(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_12_58(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_12_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_60(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_12_61(double * a, double * b, double *r) { 
	
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

double * conga_op_12_62(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_12_63(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_64(double * a, double * b, double *r) { 
	
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

double * conga_op_12_65(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_12_66(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_67(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_68(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_69(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_70(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_72(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_12_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_74(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_75(double * a, double * b, double *r) { 
	
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

double * conga_op_12_76(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_77(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_78(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_79(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_80(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_81(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_82(double * a, double * b, double *r) { 
	
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

double * conga_op_12_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_84(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_12_85(double * a, double * b, double *r) { 
	
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

double * conga_op_12_86(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_12_87(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_88(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_12_89(double * a, double * b, double *r) { 
	
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

double * conga_op_12_90(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_12_91(double * a, double * b, double *r) { 
	
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

double * conga_op_12_92(double * a, double * b, double *r) { 
	
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

double * conga_op_12_93(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_94(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_12_95(double * a, double * b, double *r) { 
	
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

double * conga_op_12_96(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_97(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_12_98(double * a, double * b, double *r) { 
	
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

double * conga_op_12_99(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_12_100(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_101(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_103(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_104(double * a, double * b, double *r) { 
	
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

double * conga_op_12_105(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_12_106(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_12_108(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_109(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_110(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_111(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_114(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_115(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_12_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_117(double * a, double * b, double *r) { 
	
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

double * conga_op_12_118(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_12_119(double * a, double * b, double *r) { 
	
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

double * conga_op_12_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_121(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_12_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_12_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_127(double * a, double * b, double *r) { 
	
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

double * conga_op_12_128(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_12_129(double * a, double * b, double *r) { 
	
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

double * conga_op_12_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_131(double * a, double * b, double *r) { 
	
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

double * conga_op_12_132(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_12_133(double * a, double * b, double *r) { 
	
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

double * conga_op_12_134(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_12_135(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_12_136(double * a, double * b, double *r) { 
	
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

double * conga_op_12_137(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_12_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_12_140(double * a, double * b, double *r) { 
	
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

double * conga_op_12_141(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_12_142(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_143(double * a, double * b, double *r) { 
	
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

double * conga_op_12_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_145(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_12_146(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_12_147(double * a, double * b, double *r) { 
	
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

double * conga_op_12_148(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_12_149(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_12_150(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_12_151(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_12_152(double * a, double * b, double *r) { 
	
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

double * conga_op_12_153(double * a, double * b, double *r) { 
	
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

double * conga_op_12_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_12_155(double * a, double * b, double *r) { 
	
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

double * conga_op_12_156(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_12_157(double * a, double * b, double *r) { 
	
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

double * conga_op_12_158(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_12_159(double * a, double * b, double *r) { 
	
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

double * conga_op_12_160(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_12_161(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_12_162(double * a, double * b, double *r) { 
	
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

double * conga_op_12_163(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_12_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_12_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_12_167(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[11]  + a[2] * b[9]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[11]  + a[2] * b[10]  * -1 ;
	
	
	//_e123ni
	r[12] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	//_e123noni
	r[13] = a[0] * b[18]  * -1  + a[1] * b[17]  + a[2] * b[16]  * -1 ;
	
	
	return r;
}


