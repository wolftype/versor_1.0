
#include "conga_op_Dil_Sph.h"


double * conga_op_74_1(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_2(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_74_3(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_74_4(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_5(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[2] * b[1] ;
	
	
	//_e123noni
	r[6] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_74_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_7(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_8(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_74_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_74_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_11(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_74_12(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_15(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_20(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_21(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_22(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_74_23(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_26(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_27(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_29(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_30(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_31(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[1]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[1]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[1]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_32(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_33(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_34(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[7]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[7]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_35(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[4]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[4]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_36(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_37(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[4]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[4]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_38(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[10]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[10]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[10]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_39(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[4]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[4]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_40(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[10]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[10]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[10]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_41(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_74_42(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_74_43(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_44(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[2] * b[1] ;
	
	
	//_e123noni
	r[6] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_74_45(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_46(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_47(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6] ;
	
	
	//_e13noni
	r[1] = a[1] * b[6] ;
	
	
	//_e23noni
	r[2] = a[2] * b[6] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_49(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_50(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_51(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_52(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_74_53(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_54(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_74_55(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_56(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_57(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_58(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_60(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_61(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[10]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[10]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[10]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_62(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_74_63(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_64(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[7]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[7]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_65(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_66(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_67(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_74_68(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_69(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_70(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_74_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_72(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_74(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_75(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_74_76(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_77(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_78(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_79(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_74_80(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_81(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_82(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_84(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_85(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[7]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[7]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_86(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_88(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_89(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[10]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[10]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[10]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_90(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_91(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_92(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[7]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[7]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_93(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_94(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_95(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_96(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_74_97(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_98(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_99(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_100(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_74_101(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_103(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[2] * b[1] ;
	
	
	//_e123noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_74_104(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_105(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_106(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_107(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_108(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_110(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_111(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_74_112(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_114(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_74_115(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_117(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[7]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[7]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_118(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_119(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_74_120(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_121(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_122(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_123(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_74_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_127(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[10]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[10]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[10]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_128(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_129(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_74_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_74_131(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_74_132(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_74_133(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_134(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_135(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_136(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_137(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_74_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6] ;
	
	
	//_e13noni
	r[1] = a[1] * b[6] ;
	
	
	//_e23noni
	r[2] = a[2] * b[6] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_140(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_74_141(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_142(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_143(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_145(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_146(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_147(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_148(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_150(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_151(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_152(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_74_153(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[2] * b[1] ;
	
	
	//_e123noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_74_154(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_155(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_74_156(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_157(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[7]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[2] * b[7]  + a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_158(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_74_159(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_160(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_74_161(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[7] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_74_162(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[3] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[0] ;
	
	
	//_e23noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_74_163(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_74_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_165(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_74_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6] ;
	
	
	//_e13noni
	r[1] = a[1] * b[6] ;
	
	
	//_e23noni
	r[2] = a[2] * b[6] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_74_167(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[4] ;
	
	
	//_e13no
	r[4] = a[1] * b[4] ;
	
	
	//_e23no
	r[5] = a[2] * b[4] ;
	
	
	//_e12ni
	r[6] = a[0] * b[5] ;
	
	
	//_e13ni
	r[7] = a[1] * b[5] ;
	
	
	//_e23ni
	r[8] = a[2] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12noni
	r[10] = a[0] * b[15]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[11] = a[1] * b[15]  + a[4] * b[0] ;
	
	
	//_e23noni
	r[12] = a[2] * b[15]  + a[5] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14]  + a[1] * b[13]  * -1  + a[2] * b[12]  + a[7] * b[0] ;
	
	
	//_e123noni
	r[15] = a[0] * b[24]  + a[1] * b[23]  * -1  + a[2] * b[22]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[5]  + a[7] * b[4]  * -1 ;
	
	
	return r;
}


