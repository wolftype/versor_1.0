
#include "conga_op_Mnk_Aff.h"


double * conga_op_114_1(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_3(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_114_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_5(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_op_114_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_7(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_8(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e123noni
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_9(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_114_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_114_11(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e123noni
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_12(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_114_13(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_114_14(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_114_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_18(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_114_19(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_114_20(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_114_21(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_22(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_23(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_24(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_25(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_114_26(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_27(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_28(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_114_29(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
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

double * conga_op_114_30(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_31(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_32(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_33(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_34(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[11]  * -1  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_35(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
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

double * conga_op_114_36(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
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

double * conga_op_114_37(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_38(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_39(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_40(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[15]  * -1  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_41(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_42(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_114_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_44(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1] ;
	
	
	//_e12noni
	r[1] = a[0] * b[5] ;
	
	
	//_e13noni
	r[2] = a[0] * b[6] ;
	
	
	//_e23noni
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_114_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_46(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[10]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_op_114_47(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[10]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_114_48(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_op_114_49(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[11]  * -1  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_50(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_114_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_52(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_114_53(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_114_54(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_114_55(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_114_56(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_114_57(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_58(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_59(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_114_60(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_61(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[14]  * -1  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_62(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[7]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[8]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[9]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_114_63(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[10]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_64(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
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

double * conga_op_114_65(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_114_66(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_67(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_114_68(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_114_69(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_70(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_71(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_114_72(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[7]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[8]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_op_114_73(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_114_74(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_75(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e123noni
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_76(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_77(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_78(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_79(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_80(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_81(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_82(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_83(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_114_84(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_114_85(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
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

double * conga_op_114_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_88(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_89(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_90(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[9]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_114_91(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[10]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_92(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_93(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_114_94(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_95(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_96(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_114_97(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_98(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_99(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_100(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_101(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_102(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_114_103(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_op_114_104(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[5]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[0] * b[6]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_105(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[7]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[8]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_106(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_107(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_114_108(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_109(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_110(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_114_111(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_114_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_114(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_115(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_117(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[5]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[0] * b[6]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_118(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[10]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_119(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[13]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_120(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_114_121(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[7]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[8]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_122(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_114_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_114_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_114_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_127(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_128(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[10]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_114_129(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[14]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_130(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_114_131(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[13]  * -1  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_132(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[7]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[8]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[9]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_114_133(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_134(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[7]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[8]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_114_135(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[9]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_114_136(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[14]  * -1  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_137(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[10]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_114_139(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_114_140(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e123noni
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_141(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[7]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[8]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_142(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_114_143(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_144(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_114_145(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_114_146(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_114_147(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
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

double * conga_op_114_148(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_114_149(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_150(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_151(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_152(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_153(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1] ;
	
	
	//_e12noni
	r[1] = a[0] * b[5] ;
	
	
	//_e13noni
	r[2] = a[0] * b[6] ;
	
	
	//_e23noni
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_114_154(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_114_155(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_156(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_157(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[5]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[3] = a[0] * b[6]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_114_158(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[7]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[8]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_114_159(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[13]  * -1  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_160(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[7]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[8]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[9]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_161(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[1] * b[1]  + a[2] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[1] * b[2]  + a[3] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[9]  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_114_162(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_114_163(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_114_165(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_114_166(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_114_167(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[5] ;
	
	
	//_e12no
	r[5] = a[0] * b[6] ;
	
	
	//_e13no
	r[6] = a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[8] ;
	
	
	//_e1noni
	r[8] = a[0] * b[12]  * -1  + a[1] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[13]  * -1  + a[2] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1  + a[3] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[19]  + a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[20]  + a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[21]  + a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[14] = a[0] * b[25]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[30]  * -1  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}


