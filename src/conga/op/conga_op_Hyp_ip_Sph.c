
#include "conga_op_Hyp_ip_Sph.h"


double * conga_op_165_1(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_165_2(double * a, double * b, double *r) { 
	
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

double * conga_op_165_3(double * a, double * b, double *r) { 
	
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

double * conga_op_165_4(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_165_5(double * a, double * b, double *r) { 
	
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

double * conga_op_165_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_7(double * a, double * b, double *r) { 
	
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

double * conga_op_165_8(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_op_165_9(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_11(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_165_12(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_15(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_165_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_20(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_165_21(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_165_22(double * a, double * b, double *r) { 
	
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

double * conga_op_165_23(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_26(double * a, double * b, double *r) { 
	
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

double * conga_op_165_27(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_165_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_29(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_op_165_30(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_165_31(double * a, double * b, double *r) { 
	
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
	r[7] = a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_165_32(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_165_33(double * a, double * b, double *r) { 
	
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
	r[7] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_165_34(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[6] * b[7] ;
	
	
	return r;
}

double * conga_op_165_35(double * a, double * b, double *r) { 
	
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
	r[7] = a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_165_36(double * a, double * b, double *r) { 
	
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
	r[7] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_op_165_37(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_165_38(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[10] ;
	
	
	return r;
}

double * conga_op_165_39(double * a, double * b, double *r) { 
	
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
	r[7] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_op_165_40(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[10] ;
	
	
	return r;
}

double * conga_op_165_41(double * a, double * b, double *r) { 
	
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

double * conga_op_165_42(double * a, double * b, double *r) { 
	
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

double * conga_op_165_43(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_165_44(double * a, double * b, double *r) { 
	
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

double * conga_op_165_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_46(double * a, double * b, double *r) { 
	
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

double * conga_op_165_47(double * a, double * b, double *r) { 
	
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

double * conga_op_165_48(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[6] ;
	
	
	return r;
}

double * conga_op_165_49(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_op_165_50(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_51(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_165_52(double * a, double * b, double *r) { 
	
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

double * conga_op_165_53(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_165_54(double * a, double * b, double *r) { 
	
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

double * conga_op_165_55(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_56(double * a, double * b, double *r) { 
	
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

double * conga_op_165_57(double * a, double * b, double *r) { 
	
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

double * conga_op_165_58(double * a, double * b, double *r) { 
	
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

double * conga_op_165_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_60(double * a, double * b, double *r) { 
	
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

double * conga_op_165_61(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[10] ;
	
	
	return r;
}

double * conga_op_165_62(double * a, double * b, double *r) { 
	
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

double * conga_op_165_63(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_165_64(double * a, double * b, double *r) { 
	
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
	r[7] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[7] ;
	
	
	return r;
}

double * conga_op_165_65(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_66(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_67(double * a, double * b, double *r) { 
	
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

double * conga_op_165_68(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_69(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_165_70(double * a, double * b, double *r) { 
	
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

double * conga_op_165_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_72(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_74(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_75(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_165_76(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_77(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_78(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_165_79(double * a, double * b, double *r) { 
	
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

double * conga_op_165_80(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_81(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_82(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_165_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_84(double * a, double * b, double *r) { 
	
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

double * conga_op_165_85(double * a, double * b, double *r) { 
	
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
	r[7] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[7] ;
	
	
	return r;
}

double * conga_op_165_86(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_165_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_88(double * a, double * b, double *r) { 
	
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

double * conga_op_165_89(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[10] ;
	
	
	return r;
}

double * conga_op_165_90(double * a, double * b, double *r) { 
	
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

double * conga_op_165_91(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_165_92(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[6] * b[7] ;
	
	
	return r;
}

double * conga_op_165_93(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_94(double * a, double * b, double *r) { 
	
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

double * conga_op_165_95(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_165_96(double * a, double * b, double *r) { 
	
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

double * conga_op_165_97(double * a, double * b, double *r) { 
	
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

double * conga_op_165_98(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_165_99(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_100(double * a, double * b, double *r) { 
	
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

double * conga_op_165_101(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_165_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_103(double * a, double * b, double *r) { 
	
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

double * conga_op_165_104(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_165_105(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_106(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_107(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_165_108(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_110(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_111(double * a, double * b, double *r) { 
	
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

double * conga_op_165_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_114(double * a, double * b, double *r) { 
	
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

double * conga_op_165_115(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_165_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_117(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[7] ;
	
	
	return r;
}

double * conga_op_165_118(double * a, double * b, double *r) { 
	
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

double * conga_op_165_119(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_165_120(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_121(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_122(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_165_123(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_124(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_127(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[10] ;
	
	
	return r;
}

double * conga_op_165_128(double * a, double * b, double *r) { 
	
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

double * conga_op_165_129(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_op_165_130(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_131(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_op_165_132(double * a, double * b, double *r) { 
	
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

double * conga_op_165_133(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_op_165_134(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_135(double * a, double * b, double *r) { 
	
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

double * conga_op_165_136(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_op_165_137(double * a, double * b, double *r) { 
	
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

double * conga_op_165_138(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_139(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[6] ;
	
	
	return r;
}

double * conga_op_165_140(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_op_165_141(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_142(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_143(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_165_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_145(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_165_146(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_147(double * a, double * b, double *r) { 
	
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
	r[7] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_op_165_148(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_150(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_151(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_165_152(double * a, double * b, double *r) { 
	
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

double * conga_op_165_153(double * a, double * b, double *r) { 
	
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

double * conga_op_165_154(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_165_155(double * a, double * b, double *r) { 
	
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

double * conga_op_165_156(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_165_157(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[7] ;
	
	
	return r;
}

double * conga_op_165_158(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_165_159(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_op_165_160(double * a, double * b, double *r) { 
	
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

double * conga_op_165_161(double * a, double * b, double *r) { 
	
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

double * conga_op_165_162(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_op_165_163(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_op_165_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_165(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_165_166(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[6] ;
	
	
	return r;
}

double * conga_op_165_167(double * a, double * b, double *r) { 
	
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
	r[12] = a[0] * b[14]  * -1  + a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[10]  * -1  + a[5] * b[9]  + a[6] * b[15] ;
	
	
	return r;
}


