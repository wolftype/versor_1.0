
#include "conga_op_Rot_Drv.h"


double * conga_op_50_1(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_2(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_5(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_7(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_8(double * a, double * b, double *r) { 
	
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

double * conga_op_50_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_11(double * a, double * b, double *r) { 
	
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

double * conga_op_50_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_15(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_50_16(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_21(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_50_22(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_23(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_24(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_50_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_26(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_27(double * a, double * b, double *r) { 
	
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

double * conga_op_50_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_29(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_30(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_31(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_32(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_33(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_34(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_35(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_36(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_37(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_38(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_39(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_40(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_41(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_44(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_46(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_47(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_50_49(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_51(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_50_52(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_53(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_54(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_55(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_56(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_57(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_58(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_60(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_61(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_62(double * a, double * b, double *r) { 
	
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

double * conga_op_50_63(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_50_64(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_65(double * a, double * b, double *r) { 
	
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

double * conga_op_50_66(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_50_67(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_68(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_69(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_50_70(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_72(double * a, double * b, double *r) { 
	
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

double * conga_op_50_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_74(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_50_75(double * a, double * b, double *r) { 
	
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

double * conga_op_50_76(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_77(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_50_78(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_50_79(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_80(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_81(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_50_82(double * a, double * b, double *r) { 
	
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

double * conga_op_50_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_84(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_85(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_86(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_50_87(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_88(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_89(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_90(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_91(double * a, double * b, double *r) { 
	
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

double * conga_op_50_92(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_93(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_94(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_95(double * a, double * b, double *r) { 
	
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

double * conga_op_50_96(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_97(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_98(double * a, double * b, double *r) { 
	
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

double * conga_op_50_99(double * a, double * b, double *r) { 
	
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

double * conga_op_50_100(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_101(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_50_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_103(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_104(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_105(double * a, double * b, double *r) { 
	
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

double * conga_op_50_106(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_50_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_50_108(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_109(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_50_110(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_111(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_114(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_115(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_50_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_117(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_118(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_119(double * a, double * b, double *r) { 
	
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

double * conga_op_50_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_121(double * a, double * b, double *r) { 
	
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

double * conga_op_50_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_50_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_127(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_128(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_129(double * a, double * b, double *r) { 
	
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

double * conga_op_50_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_131(double * a, double * b, double *r) { 
	
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

double * conga_op_50_132(double * a, double * b, double *r) { 
	
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

double * conga_op_50_133(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_134(double * a, double * b, double *r) { 
	
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

double * conga_op_50_135(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_136(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_137(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_50_140(double * a, double * b, double *r) { 
	
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

double * conga_op_50_141(double * a, double * b, double *r) { 
	
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

double * conga_op_50_142(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_143(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_145(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_50_146(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_50_147(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_148(double * a, double * b, double *r) { 
	
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

double * conga_op_50_149(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_50_150(double * a, double * b, double *r) { 
	
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

double * conga_op_50_151(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_50_152(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_153(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_50_155(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_156(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_50_157(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_158(double * a, double * b, double *r) { 
	
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

double * conga_op_50_159(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_160(double * a, double * b, double *r) { 
	
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

double * conga_op_50_161(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_50_162(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_50_163(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_50_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_50_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_50_167(double * a, double * b, double *r) { 
	
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
	r[12] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[18]  * -1  + a[1] * b[17]  + a[2] * b[16]  * -1  + a[3] * b[4]  * -1 ;
	
	
	return r;
}


