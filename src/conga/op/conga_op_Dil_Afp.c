
#include "conga_op_Dil_Afp.h"


double * conga_op_83_1(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_2(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_83_3(double * a, double * b, double *r) { 
	
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

double * conga_op_83_4(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_83_5(double * a, double * b, double *r) { 
	
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

double * conga_op_83_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_7(double * a, double * b, double *r) { 
	
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

double * conga_op_83_8(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_83_9(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_11(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_83_12(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_20(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_21(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_83_22(double * a, double * b, double *r) { 
	
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

double * conga_op_83_23(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_26(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_29(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_30(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_31(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_32(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_33(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_34(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_35(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_36(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_37(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_38(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[10]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_39(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[4]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_40(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[10]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_41(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_83_42(double * a, double * b, double *r) { 
	
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

double * conga_op_83_43(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_83_44(double * a, double * b, double *r) { 
	
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

double * conga_op_83_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_46(double * a, double * b, double *r) { 
	
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

double * conga_op_83_47(double * a, double * b, double *r) { 
	
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

double * conga_op_83_48(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_83_49(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_50(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_52(double * a, double * b, double *r) { 
	
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

double * conga_op_83_53(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_54(double * a, double * b, double *r) { 
	
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

double * conga_op_83_55(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_56(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_57(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_58(double * a, double * b, double *r) { 
	
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

double * conga_op_83_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_60(double * a, double * b, double *r) { 
	
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

double * conga_op_83_61(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[10]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_62(double * a, double * b, double *r) { 
	
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

double * conga_op_83_63(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_83_64(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_65(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_66(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_67(double * a, double * b, double *r) { 
	
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

double * conga_op_83_68(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_69(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_83_70(double * a, double * b, double *r) { 
	
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

double * conga_op_83_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_72(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_74(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_75(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_83_76(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_77(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_78(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_83_79(double * a, double * b, double *r) { 
	
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

double * conga_op_83_80(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_81(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_82(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_84(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_85(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_86(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_88(double * a, double * b, double *r) { 
	
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

double * conga_op_83_89(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[10]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_90(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_91(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_92(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_93(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_94(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_95(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_96(double * a, double * b, double *r) { 
	
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

double * conga_op_83_97(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_98(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_99(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_100(double * a, double * b, double *r) { 
	
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

double * conga_op_83_101(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_83_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_103(double * a, double * b, double *r) { 
	
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

double * conga_op_83_104(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_105(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_106(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_107(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_83_108(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_110(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_111(double * a, double * b, double *r) { 
	
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

double * conga_op_83_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_114(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_83_115(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_117(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_118(double * a, double * b, double *r) { 
	
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

double * conga_op_83_119(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_83_120(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_121(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_122(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_83_123(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_124(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_127(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[10]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_128(double * a, double * b, double *r) { 
	
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

double * conga_op_83_129(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_83_130(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_131(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_83_132(double * a, double * b, double *r) { 
	
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

double * conga_op_83_133(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_134(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_135(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_136(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_137(double * a, double * b, double *r) { 
	
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

double * conga_op_83_138(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_139(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_83_140(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_83_141(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_142(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_143(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_145(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_146(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_147(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_148(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_150(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_151(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_152(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_83_153(double * a, double * b, double *r) { 
	
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

double * conga_op_83_154(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_83_155(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_83_156(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_157(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[7]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_158(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_83_159(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_160(double * a, double * b, double *r) { 
	
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

double * conga_op_83_161(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_162(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_83_163(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_83_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_165(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_83_166(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_83_167(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[14]  * -1  + a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[15]  + a[4] * b[0] ;
	
	
	return r;
}


