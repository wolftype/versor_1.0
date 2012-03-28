
#include "conga_op_Pss_Sta.h"


double * conga_op_124_1(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_2(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_3(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_124_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_5(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_7(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_8(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_9(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_11(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_12(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_15(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_124_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_20(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_21(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_22(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_23(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_24(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_26(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_27(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_29(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_30(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_124_31(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_32(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_33(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_124_34(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_35(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_36(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_37(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_124_38(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_39(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_124_40(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_41(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_42(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_124_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_44(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_46(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_47(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_48(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_124_49(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_50(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_51(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_124_52(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_124_53(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_54(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_55(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_56(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_57(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_58(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_60(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_61(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_62(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_63(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_64(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_65(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_66(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_67(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_124_68(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_69(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_70(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_72(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_74(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_75(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_76(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_77(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_78(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_79(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_80(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_81(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_82(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_84(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_85(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_86(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_124_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_88(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_89(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_90(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_91(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_92(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_93(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_94(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_95(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_96(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_97(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_98(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_99(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_100(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_101(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_103(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_104(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_124_105(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_106(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_107(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_124_108(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_109(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_110(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_111(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_124_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_114(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_115(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_124_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_117(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_124_118(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_119(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_120(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_121(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_122(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_124_123(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_124(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_127(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_128(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_129(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_130(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_131(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_132(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_133(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_134(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_135(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_136(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_137(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_138(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_139(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_124_140(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_141(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_142(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_143(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_145(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_146(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_147(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_148(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_149(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_124_150(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_151(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_124_152(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_153(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_154(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_124_155(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_156(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_124_157(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_124_158(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_159(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_160(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_161(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_124_162(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_124_163(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_124_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_165(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_124_166(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_124_167(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[0] ;
	
	
	//_e1noni
	r[6] = a[6] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[0] ;
	
	
	//_e3noni
	r[8] = a[8] * b[0] ;
	
	
	//_e12noni
	r[9] = a[0] * b[5]  + a[3] * b[4]  * -1  + a[6] * b[2]  + a[7] * b[1]  * -1 ;
	
	
	//_e13noni
	r[10] = a[1] * b[5]  + a[4] * b[4]  * -1  + a[6] * b[3]  + a[8] * b[1]  * -1 ;
	
	
	//_e23noni
	r[11] = a[2] * b[5]  + a[5] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123ni
	r[13] = a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e123noni
	r[14] = a[0] * b[14]  * -1  + a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[10]  * -1  + a[5] * b[9]  + a[6] * b[8]  + a[7] * b[7]  * -1  + a[8] * b[6] ;
	
	
	return r;
}


