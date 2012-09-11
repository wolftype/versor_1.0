
#include "conga_op_Inf.h"


double * conga_op_3_1(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_3_2(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_3_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_5(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_3_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_7(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_3_8(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_3_9(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_3_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_11(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_3_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_15(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_16(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_17(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_3_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_21(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_22(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_23(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_24(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_25(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_3_26(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_3_27(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_3_28(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_3_29(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_30(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_3_31(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_3_32(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_33(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_34(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_35(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_36(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_3_37(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_3_38(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_3_39(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_40(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_op_3_41(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_3_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_44(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_3_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_46(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_op_3_47(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_3_48(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_op_3_49(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_op_3_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_51(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_52(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_53(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_54(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_3_55(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_3_56(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_3_57(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_3_58(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_3_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_60(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_3_61(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_3_62(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_3_63(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_op_3_64(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_3_65(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_3_66(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_3_67(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_68(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_69(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_70(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_71(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_3_72(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_op_3_73(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_3_74(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_3_75(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_3_76(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_77(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_78(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_79(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_80(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_81(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_82(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_3_83(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_3_84(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_3_85(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_op_3_86(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_87(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_88(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_3_89(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_op_3_90(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_3_91(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_op_3_92(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_93(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_3_94(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_3_95(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_3_96(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_3_97(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_3_98(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_op_3_99(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_3_100(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_101(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_102(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_3_103(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_3_104(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_105(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_3_106(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_107(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_108(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_109(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_110(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_111(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_114(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_3_115(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_3_117(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_118(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_3_119(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_op_3_120(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_3_121(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_3_122(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_125(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_126(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_127(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_3_128(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_3_129(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_op_3_130(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_3_131(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_3_132(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_3_133(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_3_134(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_3_135(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_3_136(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_op_3_137(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_3_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_139(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_140(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_op_3_141(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_3_142(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_3_143(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_145(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_3_146(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_3_147(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_3_148(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_3_149(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_150(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_3_151(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_3_152(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_3_153(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_3_154(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_3_155(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_3_156(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_3_157(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_3_158(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_3_159(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_3_160(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_3_161(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_3_162(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_op_3_163(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_164(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_3_165(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_3_166(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_3_167(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[5] = a[0] * b[6] ;
	
	
	//_e13ni
	r[6] = a[0] * b[7] ;
	
	
	//_e23ni
	r[7] = a[0] * b[8] ;
	
	
	//_e1noni
	r[8] = a[0] * b[9] ;
	
	
	//_e2noni
	r[9] = a[0] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[11] ;
	
	
	//_e12noni
	r[11] = a[0] * b[16]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[17]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[18]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[25]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[29] ;
	
	
	return r;
}


