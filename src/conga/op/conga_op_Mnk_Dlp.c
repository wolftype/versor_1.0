
#include "conga_op_Mnk_Dlp.h"


double * conga_op_111_1(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_2(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_111_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_5(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_111_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_7(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_8(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_9(double * a, double * b, double *r) { 
	
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

double * conga_op_111_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_111_11(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_15(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_111_16(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_111_17(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_111_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_21(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_22(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_23(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_24(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_25(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_111_26(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_27(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_28(double * a, double * b, double *r) { 
	
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

double * conga_op_111_29(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_30(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_31(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_32(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_33(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_34(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_35(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_36(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_37(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_38(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_39(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_40(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[14]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_41(double * a, double * b, double *r) { 
	
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

double * conga_op_111_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_44(double * a, double * b, double *r) { 
	
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

double * conga_op_111_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_46(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_op_111_47(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_111_48(double * a, double * b, double *r) { 
	
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

double * conga_op_111_49(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[10]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_51(double * a, double * b, double *r) { 
	
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

double * conga_op_111_52(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_53(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_54(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_111_55(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_111_56(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_111_57(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_58(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_60(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_61(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_62(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_111_63(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_64(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_65(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_111_66(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_67(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_68(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_69(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_70(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_71(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_111_72(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_op_111_73(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_111_74(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_75(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_76(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_77(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_78(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_79(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_80(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_81(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_82(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_83(double * a, double * b, double *r) { 
	
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

double * conga_op_111_84(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_111_85(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[11]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_86(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_111_87(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_111_88(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_89(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[14]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_90(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_111_91(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_92(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_93(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_111_94(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_95(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_96(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_111_97(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_98(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_99(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_100(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_101(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_102(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_111_103(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_111_104(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_105(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_106(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_107(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_111_108(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_109(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_110(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_111(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_114(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_111_115(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_111_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_111_117(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_118(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_119(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[12]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_120(double * a, double * b, double *r) { 
	
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

double * conga_op_111_121(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_122(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_111_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_111_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_111_125(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_111_126(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_111_127(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_128(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_111_129(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_130(double * a, double * b, double *r) { 
	
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

double * conga_op_111_131(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_132(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_111_133(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_134(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_111_135(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_111_136(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[13]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_137(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_111_139(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_111_140(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_141(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_142(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_111_143(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_145(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_111_146(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_111_147(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_148(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_111_149(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_150(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_151(double * a, double * b, double *r) { 
	
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

double * conga_op_111_152(double * a, double * b, double *r) { 
	
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

double * conga_op_111_153(double * a, double * b, double *r) { 
	
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

double * conga_op_111_154(double * a, double * b, double *r) { 
	
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

double * conga_op_111_155(double * a, double * b, double *r) { 
	
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

double * conga_op_111_156(double * a, double * b, double *r) { 
	
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

double * conga_op_111_157(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_111_158(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_111_159(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_160(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_161(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_111_162(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[13]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_111_163(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_111_164(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_111_165(double * a, double * b, double *r) { 
	
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

double * conga_op_111_166(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_111_167(double * a, double * b, double *r) { 
	
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
	r[8] = a[0] * b[9]  + a[1] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[3] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[16]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[17]  * -1  + a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[18]  * -1  + a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[25]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[29]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}


