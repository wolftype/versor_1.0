
#include "conga_op_Inf_Sph.h"


double * conga_op_102_1(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_2(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_102_3(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_102_4(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_102_5(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_102_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_7(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_102_8(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_102_9(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_11(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_102_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_15(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_102_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_20(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_22(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_23(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_26(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_27(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_102_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_29(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_30(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_31(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_32(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_33(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_34(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_35(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_36(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_37(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_38(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_39(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_40(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_41(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_102_42(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_102_43(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_102_44(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_102_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_46(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_102_47(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_102_48(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_102_49(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_51(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_102_52(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_102_53(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_54(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_55(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_56(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_57(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_58(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_102_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_60(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_102_61(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_62(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_63(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_64(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_65(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_66(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_67(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_102_68(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_69(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_70(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_72(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_74(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_75(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_102_76(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_77(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_78(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_79(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_80(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_81(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_82(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_102_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_84(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_85(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_86(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_88(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_102_89(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_90(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_91(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_102_92(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_93(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_94(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_95(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_102_96(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_97(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_98(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_102_99(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_100(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_101(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_103(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_102_104(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_105(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_106(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_107(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_102_108(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_110(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_111(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_102_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_114(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_102_115(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_102_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_117(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_118(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_102_119(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_102_120(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_121(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_122(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_102_123(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_124(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_127(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_128(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_102_129(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_102_130(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_131(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_102_132(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_133(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_134(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_135(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_136(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_137(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_102_138(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_139(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_102_140(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_102_141(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_142(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_143(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_145(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_146(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_147(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_148(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_150(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_151(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_152(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_102_153(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_102_154(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_102_155(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_102_156(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_102_157(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_158(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_159(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_160(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_161(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123no
	r[3] = a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_102_162(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_102_163(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_102_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_165(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_102_166(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_102_167(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[5] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[6] = a[2] * b[4]  * -1 ;
	
	
	//_e123no
	r[7] = a[3] * b[4] ;
	
	
	//_e123ni
	r[8] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[5] ;
	
	
	//_e123noni
	r[9] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[15]  + a[4] * b[0] ;
	
	
	return r;
}


