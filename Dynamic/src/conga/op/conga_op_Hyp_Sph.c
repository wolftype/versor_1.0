
#include "conga_op_Hyp_Sph.h"


double * conga_op_120_1(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_2(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_120_3(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_120_4(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_120_5(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[6] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_120_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_7(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_120_8(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_op_120_9(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_11(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_120_12(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_15(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_120_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_20(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_21(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_120_22(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_23(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_26(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_27(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_120_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_29(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_30(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_31(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[6] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_32(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_33(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_34(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[6] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_35(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[6] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_36(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_37(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[6] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_38(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[10]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_39(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_40(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[10]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_41(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_120_42(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_120_43(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_120_44(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[6] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_120_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_46(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_120_47(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_120_48(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[6] ;
	
	
	return r;
}

double * conga_op_120_49(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_50(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_51(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_120_52(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_120_53(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_54(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_55(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_56(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_57(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_58(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_120_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_60(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_120_61(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[10]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_62(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_63(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_120_64(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_65(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_66(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_67(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_120_68(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_69(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_120_70(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_72(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_74(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_75(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_120_76(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_77(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_78(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_120_79(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_80(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_81(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_82(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_120_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_84(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_85(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_86(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_88(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_120_89(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[10]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_90(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_91(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_120_92(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[6] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_93(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_94(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_95(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_120_96(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_97(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_98(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_120_99(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_100(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_101(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_120_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_103(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[6] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_120_104(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_105(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_106(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_107(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_120_108(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_110(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_111(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_120_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_114(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_120_115(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_120_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_117(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_118(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_120_119(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_120_120(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_121(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_122(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_120_123(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_124(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_127(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[10]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_128(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_120_129(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_op_120_130(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_131(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_op_120_132(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_133(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_134(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_135(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_136(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_137(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_120_138(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_139(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[6] ;
	
	
	return r;
}

double * conga_op_120_140(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_op_120_141(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_142(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_143(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_145(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_146(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_147(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_148(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_150(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_151(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_152(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_120_153(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[6] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_120_154(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_120_155(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_120_156(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_120_157(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_158(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_159(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_160(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_161(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_120_162(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_120_163(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_120_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_165(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_120_166(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[6] ;
	
	
	return r;
}

double * conga_op_120_167(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[5]  + a[3] * b[4]  * -1 ;
	
	
	//_e13noni
	r[8] = a[1] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	//_e23noni
	r[9] = a[2] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[6] * b[4] ;
	
	
	//_e123ni
	r[11] = a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[5] ;
	
	
	//_e123noni
	r[12] = a[0] * b[14]  * -1  + a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[10]  * -1  + a[5] * b[9]  + a[6] * b[15]  + a[7] * b[0] ;
	
	
	return r;
}


