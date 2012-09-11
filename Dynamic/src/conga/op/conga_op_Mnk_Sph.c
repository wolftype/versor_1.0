
#include "conga_op_Mnk_Sph.h"


double * conga_op_106_1(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_2(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_106_3(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_106_4(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_5(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_106_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_7(double * a, double * b, double *r) { 
	
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
	r[7] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_8(double * a, double * b, double *r) { 
	
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

double * conga_op_106_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_106_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_11(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_106_12(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_15(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_20(double * a, double * b, double *r) { 
	
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

double * conga_op_106_21(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_22(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_106_23(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_26(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_27(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_29(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_30(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_31(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[1] ;
	
	
	//_e13noni
	r[4] = a[1] * b[1] ;
	
	
	//_e23noni
	r[5] = a[2] * b[1] ;
	
	
	//_e123no
	r[6] = a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_32(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_33(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_34(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7] ;
	
	
	//_e13noni
	r[4] = a[1] * b[7] ;
	
	
	//_e23noni
	r[5] = a[2] * b[7] ;
	
	
	//_e123no
	r[6] = a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_35(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[4] ;
	
	
	//_e13noni
	r[4] = a[1] * b[4] ;
	
	
	//_e23noni
	r[5] = a[2] * b[4] ;
	
	
	//_e123no
	r[6] = a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_36(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_37(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[4] ;
	
	
	//_e13noni
	r[4] = a[1] * b[4] ;
	
	
	//_e23noni
	r[5] = a[2] * b[4] ;
	
	
	//_e123no
	r[6] = a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_38(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[10] ;
	
	
	//_e13noni
	r[4] = a[1] * b[10] ;
	
	
	//_e23noni
	r[5] = a[2] * b[10] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_39(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[4] ;
	
	
	//_e13noni
	r[4] = a[1] * b[4] ;
	
	
	//_e23noni
	r[5] = a[2] * b[4] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_40(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[10] ;
	
	
	//_e13noni
	r[4] = a[1] * b[10] ;
	
	
	//_e23noni
	r[5] = a[2] * b[10] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_41(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_106_42(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_106_43(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_44(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_106_45(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_46(double * a, double * b, double *r) { 
	
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
	r[7] = a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_47(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_48(double * a, double * b, double *r) { 
	
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

double * conga_op_106_49(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_50(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_51(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_52(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_106_53(double * a, double * b, double *r) { 
	
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

double * conga_op_106_54(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_106_55(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_56(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_57(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_58(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_60(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_61(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[10] ;
	
	
	//_e13noni
	r[4] = a[1] * b[10] ;
	
	
	//_e23noni
	r[5] = a[2] * b[10] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_62(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_106_63(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_64(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7] ;
	
	
	//_e13noni
	r[4] = a[1] * b[7] ;
	
	
	//_e23noni
	r[5] = a[2] * b[7] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_65(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_106_66(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_67(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_106_68(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_69(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_70(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_106_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_72(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_op_106_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_74(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_75(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_106_76(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_106_77(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_78(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_79(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_106_80(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_81(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_82(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_84(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_85(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7] ;
	
	
	//_e13noni
	r[4] = a[1] * b[7] ;
	
	
	//_e23noni
	r[5] = a[2] * b[7] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_86(double * a, double * b, double *r) { 
	
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

double * conga_op_106_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_88(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_89(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[10] ;
	
	
	//_e13noni
	r[4] = a[1] * b[10] ;
	
	
	//_e23noni
	r[5] = a[2] * b[10] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_90(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_91(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_92(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7] ;
	
	
	//_e13noni
	r[4] = a[1] * b[7] ;
	
	
	//_e23noni
	r[5] = a[2] * b[7] ;
	
	
	//_e123no
	r[6] = a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_93(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_106_94(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_95(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_96(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_106_97(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_98(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_99(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_106_100(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_106_101(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_103(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_106_104(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_105(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_106(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_107(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_108(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_110(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_111(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_106_112(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_114(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_106_115(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_117(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7] ;
	
	
	//_e13noni
	r[4] = a[1] * b[7] ;
	
	
	//_e23noni
	r[5] = a[2] * b[7] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_118(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_119(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_106_120(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_121(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_op_106_122(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_123(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_106_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_127(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[10] ;
	
	
	//_e13noni
	r[4] = a[1] * b[10] ;
	
	
	//_e23noni
	r[5] = a[2] * b[10] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_128(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_129(double * a, double * b, double *r) { 
	
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

double * conga_op_106_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_106_131(double * a, double * b, double *r) { 
	
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

double * conga_op_106_132(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_106_133(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_134(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_135(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_136(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_137(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_106_139(double * a, double * b, double *r) { 
	
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

double * conga_op_106_140(double * a, double * b, double *r) { 
	
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

double * conga_op_106_141(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_142(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_143(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_145(double * a, double * b, double *r) { 
	
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

double * conga_op_106_146(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_147(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_148(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_150(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_151(double * a, double * b, double *r) { 
	
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

double * conga_op_106_152(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_106_153(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_106_154(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_155(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_106_156(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_157(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7] ;
	
	
	//_e13noni
	r[4] = a[1] * b[7] ;
	
	
	//_e23noni
	r[5] = a[2] * b[7] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_158(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_106_159(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_160(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_106_161(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_106_162(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_106_163(double * a, double * b, double *r) { 
	
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

double * conga_op_106_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_106_165(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_106_166(double * a, double * b, double *r) { 
	
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

double * conga_op_106_167(double * a, double * b, double *r) { 
	
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
	r[10] = a[0] * b[15] ;
	
	
	//_e13noni
	r[11] = a[1] * b[15] ;
	
	
	//_e23noni
	r[12] = a[2] * b[15] ;
	
	
	//_e123no
	r[13] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14]  + a[1] * b[13]  * -1  + a[2] * b[12]  + a[4] * b[0] ;
	
	
	//_e123noni
	r[15] = a[0] * b[24]  + a[1] * b[23]  * -1  + a[2] * b[22]  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	return r;
}


