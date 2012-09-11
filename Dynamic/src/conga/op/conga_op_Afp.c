
#include "conga_op_Afp.h"


double * conga_op_28_1(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_2(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_3(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_4(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_5(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1] ;
	
	
	//_e13noni
	r[1] = a[1] * b[1] ;
	
	
	//_e23noni
	r[2] = a[2] * b[1] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_28_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_7(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4] ;
	
	
	//_e13noni
	r[1] = a[1] * b[4] ;
	
	
	//_e23noni
	r[2] = a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_28_8(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_28_9(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_11(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_28_12(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_20(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_21(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_28_22(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_23(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_26(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_29(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_30(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_28_31(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_28_32(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_28_33(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_34(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_28_35(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_28_36(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_37(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_28_38(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_op_28_39(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_28_40(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_op_28_41(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_42(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_43(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_44(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1] ;
	
	
	//_e13noni
	r[1] = a[1] * b[1] ;
	
	
	//_e23noni
	r[2] = a[2] * b[1] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_28_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_46(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4] ;
	
	
	//_e13noni
	r[1] = a[1] * b[4] ;
	
	
	//_e23noni
	r[2] = a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_28_47(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4] ;
	
	
	//_e13noni
	r[1] = a[1] * b[4] ;
	
	
	//_e23noni
	r[2] = a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_28_48(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_28_49(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_28_50(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_52(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_53(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_54(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_55(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_56(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_57(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_58(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4] ;
	
	
	//_e13noni
	r[1] = a[1] * b[4] ;
	
	
	//_e23noni
	r[2] = a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_28_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_60(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4] ;
	
	
	//_e13noni
	r[1] = a[1] * b[4] ;
	
	
	//_e23noni
	r[2] = a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_28_61(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_op_28_62(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_63(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_28_64(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_28_65(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_66(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_67(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_68(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_69(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_28_70(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_72(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_74(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_75(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_28_76(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_77(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_78(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_28_79(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_80(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_81(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_82(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_84(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_85(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_28_86(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_88(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4] ;
	
	
	//_e13noni
	r[1] = a[1] * b[4] ;
	
	
	//_e23noni
	r[2] = a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_28_89(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_op_28_90(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_91(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_92(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_28_93(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_94(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_95(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_96(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_97(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_98(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_99(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_100(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_101(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_28_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_103(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1] ;
	
	
	//_e13noni
	r[1] = a[1] * b[1] ;
	
	
	//_e23noni
	r[2] = a[2] * b[1] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_28_104(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_28_105(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_106(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_107(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_28_108(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_110(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_111(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_114(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_115(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_117(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_28_118(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4] ;
	
	
	//_e13noni
	r[1] = a[1] * b[4] ;
	
	
	//_e23noni
	r[2] = a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_28_119(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_28_120(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_121(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_122(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_28_123(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_124(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_127(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_op_28_128(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4] ;
	
	
	//_e13noni
	r[1] = a[1] * b[4] ;
	
	
	//_e23noni
	r[2] = a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_28_129(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_28_130(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_131(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_28_132(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_133(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_28_134(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_135(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_136(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_28_137(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4] ;
	
	
	//_e13noni
	r[1] = a[1] * b[4] ;
	
	
	//_e23noni
	r[2] = a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[4] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_28_138(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_139(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_28_140(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_28_141(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_142(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_143(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_28_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_145(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_146(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_147(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_148(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_150(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_151(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_152(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_153(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1] ;
	
	
	//_e13noni
	r[1] = a[1] * b[1] ;
	
	
	//_e23noni
	r[2] = a[2] * b[1] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_28_154(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_28_155(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_28_156(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_157(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_28_158(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_28_159(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_28_160(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_161(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_162(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_28_163(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_28_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_165(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_28_166(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_28_167(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5] ;
	
	
	//_e13noni
	r[5] = a[1] * b[5] ;
	
	
	//_e23noni
	r[6] = a[2] * b[5] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[8] = a[3] * b[5] ;
	
	
	//_e123noni
	r[9] = a[0] * b[14]  * -1  + a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[15] ;
	
	
	return r;
}


