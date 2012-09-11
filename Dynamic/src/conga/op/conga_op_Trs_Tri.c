
#include "conga_op_Trs_Tri.h"


double * conga_op_71_1(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_71_2(double * a, double * b, double *r) { 
	
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

double * conga_op_71_3(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_71_4(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_71_5(double * a, double * b, double *r) { 
	
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

double * conga_op_71_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_7(double * a, double * b, double *r) { 
	
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

double * conga_op_71_8(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_71_9(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_11(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_71_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_15(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_71_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_20(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_22(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_23(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_26(double * a, double * b, double *r) { 
	
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

double * conga_op_71_27(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_71_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_29(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_71_30(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_71_31(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_71_32(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_71_33(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_71_34(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_71_35(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_71_36(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_71_37(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_71_38(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_op_71_39(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_71_40(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_op_71_41(double * a, double * b, double *r) { 
	
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

double * conga_op_71_42(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_71_43(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_71_44(double * a, double * b, double *r) { 
	
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

double * conga_op_71_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_46(double * a, double * b, double *r) { 
	
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

double * conga_op_71_47(double * a, double * b, double *r) { 
	
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

double * conga_op_71_48(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_71_49(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_71_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_51(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_71_52(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_71_53(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_54(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_55(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_56(double * a, double * b, double *r) { 
	
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

double * conga_op_71_57(double * a, double * b, double *r) { 
	
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

double * conga_op_71_58(double * a, double * b, double *r) { 
	
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

double * conga_op_71_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_60(double * a, double * b, double *r) { 
	
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

double * conga_op_71_61(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_op_71_62(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_63(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_64(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_71_65(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_66(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_67(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_71_68(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_69(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_70(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_72(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_74(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_75(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_71_76(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_77(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_78(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_79(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_80(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_81(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_82(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_71_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_84(double * a, double * b, double *r) { 
	
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

double * conga_op_71_85(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_71_86(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_88(double * a, double * b, double *r) { 
	
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

double * conga_op_71_89(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_op_71_90(double * a, double * b, double *r) { 
	
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

double * conga_op_71_91(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_71_92(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_71_93(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_94(double * a, double * b, double *r) { 
	
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

double * conga_op_71_95(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_71_96(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_97(double * a, double * b, double *r) { 
	
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

double * conga_op_71_98(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_71_99(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_100(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_101(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_103(double * a, double * b, double *r) { 
	
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

double * conga_op_71_104(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_71_105(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_106(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_107(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_71_108(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_110(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_111(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_71_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_114(double * a, double * b, double *r) { 
	
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

double * conga_op_71_115(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_71_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_117(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_71_118(double * a, double * b, double *r) { 
	
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

double * conga_op_71_119(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_71_120(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_121(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_122(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_71_123(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_124(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_127(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_op_71_128(double * a, double * b, double *r) { 
	
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

double * conga_op_71_129(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_71_130(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_131(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_71_132(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_133(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_71_134(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_135(double * a, double * b, double *r) { 
	
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

double * conga_op_71_136(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_71_137(double * a, double * b, double *r) { 
	
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

double * conga_op_71_138(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_139(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_71_140(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_71_141(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_142(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_143(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_71_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_145(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_146(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_147(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_71_148(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_150(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_151(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_152(double * a, double * b, double *r) { 
	
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

double * conga_op_71_153(double * a, double * b, double *r) { 
	
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

double * conga_op_71_154(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_71_155(double * a, double * b, double *r) { 
	
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

double * conga_op_71_156(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_71_157(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_71_158(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_71_159(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_71_160(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_161(double * a, double * b, double *r) { 
	
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

double * conga_op_71_162(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_71_163(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_71_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_165(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_71_166(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_71_167(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[15] ;
	
	
	return r;
}


