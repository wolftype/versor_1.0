
#include "conga_op_Dil_Pln.h"


double * conga_op_77_1(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_2(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_77_3(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_4(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_5(double * a, double * b, double *r) { 
	
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
	r[6] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_77_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_7(double * a, double * b, double *r) { 
	
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
	r[7] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_8(double * a, double * b, double *r) { 
	
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

double * conga_op_77_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_77_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_11(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_77_12(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_15(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_20(double * a, double * b, double *r) { 
	
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

double * conga_op_77_21(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_22(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_23(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_26(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_27(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_29(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_30(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_31(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_32(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_33(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[7] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_34(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_35(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_36(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_37(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_38(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_39(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[7] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_40(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_41(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_77_42(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_43(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_44(double * a, double * b, double *r) { 
	
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
	r[6] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_77_45(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_46(double * a, double * b, double *r) { 
	
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
	r[7] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_47(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_48(double * a, double * b, double *r) { 
	
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

double * conga_op_77_49(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_50(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_51(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_52(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_77_53(double * a, double * b, double *r) { 
	
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

double * conga_op_77_54(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_55(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_56(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_57(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_58(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_60(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_61(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_62(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_63(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_64(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_65(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_66(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_67(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_77_68(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_69(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_70(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_72(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_74(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_75(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_77_76(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_77(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_78(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_79(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_80(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_81(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_82(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_84(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_85(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_86(double * a, double * b, double *r) { 
	
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

double * conga_op_77_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_88(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_89(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_90(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_91(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_92(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_93(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_94(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_95(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_96(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_97(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_98(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_99(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_100(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_101(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_103(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_77_104(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_105(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_106(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_107(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_108(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_110(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_111(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_77_112(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_114(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_77_115(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_117(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_118(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_119(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[1] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_77_120(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_121(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_122(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_123(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_77_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_127(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_128(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_129(double * a, double * b, double *r) { 
	
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

double * conga_op_77_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_77_131(double * a, double * b, double *r) { 
	
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

double * conga_op_77_132(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_133(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_134(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_135(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_136(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_137(double * a, double * b, double *r) { 
	
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
	r[7] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_77_139(double * a, double * b, double *r) { 
	
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

double * conga_op_77_140(double * a, double * b, double *r) { 
	
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

double * conga_op_77_141(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_142(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_143(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_145(double * a, double * b, double *r) { 
	
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

double * conga_op_77_146(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_147(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_148(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_150(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_151(double * a, double * b, double *r) { 
	
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

double * conga_op_77_152(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_77_153(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_77_154(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_155(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_77_156(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_77_157(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_158(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[1] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_159(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_160(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3] ;
	
	
	//_e23ni
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_77_161(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[2] * b[3] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_77_162(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_77_163(double * a, double * b, double *r) { 
	
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

double * conga_op_77_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_77_165(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_77_166(double * a, double * b, double *r) { 
	
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

double * conga_op_77_167(double * a, double * b, double *r) { 
	
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
	r[13] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14]  + a[1] * b[13]  * -1  + a[2] * b[12]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[15] = a[0] * b[24]  + a[1] * b[23]  * -1  + a[2] * b[22]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}


