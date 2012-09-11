
#include "conga_op_Trv_Mnk_Vec.h"


double * conga_op_155_1(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_3(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[1] * b[0] ;
	
	
	//_e13noni
	r[2] = a[2] * b[0] ;
	
	
	//_e23noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_155_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_5(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1] ;
	
	
	//_e12noni
	r[1] = a[1] * b[1] ;
	
	
	//_e13noni
	r[2] = a[2] * b[1] ;
	
	
	//_e23noni
	r[3] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_155_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_7(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[1] * b[4]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[2] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_8(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_9(double * a, double * b, double *r) { 
	
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

double * conga_op_155_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_155_11(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_12(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_13(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_155_14(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_18(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_155_19(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_155_20(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_21(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_22(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[1] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[2] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_23(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_24(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_25(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_26(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_27(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_28(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_155_29(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_30(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_155_31(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_32(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_33(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_34(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[11]  * -1  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_35(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_36(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_37(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_155_38(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_39(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_40(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[15]  * -1  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_41(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_42(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_155_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_44(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1] ;
	
	
	//_e12noni
	r[1] = a[0] * b[5]  + a[1] * b[1] ;
	
	
	//_e13noni
	r[2] = a[0] * b[6]  + a[2] * b[1] ;
	
	
	//_e23noni
	r[3] = a[0] * b[7]  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_155_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_46(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  + a[1] * b[4]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  + a[2] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[10]  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[11]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_47(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  + a[1] * b[4]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  + a[2] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[10]  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_48(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[11]  * -1  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_155_49(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[11]  * -1  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_50(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_52(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_155_53(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_54(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_55(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_56(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[7]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_57(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_58(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[1] * b[4]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[2] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_59(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_155_60(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  + a[2] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_61(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[14]  * -1  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_62(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[7]  + a[1] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[8]  + a[2] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[9]  + a[3] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_63(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[10]  * -1  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_64(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_65(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[9]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_66(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_67(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_155_68(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_69(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  * -1  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_70(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_71(double * a, double * b, double *r) { 
	
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

double * conga_op_155_72(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[7]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[8]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[12]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_73(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_74(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_75(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_76(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_77(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_78(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_79(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[1] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[2] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_80(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_81(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_82(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_83(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_155_84(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[10]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_85(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_88(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[1] * b[4]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[2] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_89(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_90(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[9]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[13]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_91(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[10]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_92(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_93(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[9]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_94(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_95(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_96(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_97(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_98(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_99(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_100(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_101(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[9]  * -1  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_102(double * a, double * b, double *r) { 
	
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

double * conga_op_155_103(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1] ;
	
	
	//_e12noni
	r[1] = a[1] * b[1] ;
	
	
	//_e13noni
	r[2] = a[2] * b[1] ;
	
	
	//_e23noni
	r[3] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_155_104(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_155_105(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[7]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[8]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_106(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[4]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_107(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[3] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_155_108(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_109(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_110(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_111(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[1] * b[0] ;
	
	
	//_e13noni
	r[2] = a[2] * b[0] ;
	
	
	//_e23noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_155_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_114(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_115(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_155_117(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_155_118(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  + a[1] * b[4]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  + a[2] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[10]  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_119(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[13]  * -1  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_120(double * a, double * b, double *r) { 
	
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

double * conga_op_155_121(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[7]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[8]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_122(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[3] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_155_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_155_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_155_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_127(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_128(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  + a[1] * b[4]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  + a[2] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[10]  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_129(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[14]  * -1  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_130(double * a, double * b, double *r) { 
	
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

double * conga_op_155_131(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[13]  * -1  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_132(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[7]  + a[1] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[8]  + a[2] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[9]  + a[3] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_133(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_134(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[7]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[8]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[9]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_135(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[9]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[13]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_136(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[14]  * -1  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_137(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  + a[1] * b[4]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  + a[2] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[10]  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_155_139(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[3] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_155_140(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_141(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[7]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[8]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_142(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_143(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_144(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_155_145(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_146(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_147(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_148(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_149(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_155_150(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_151(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_152(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_153(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1] ;
	
	
	//_e12noni
	r[1] = a[0] * b[5]  + a[1] * b[1] ;
	
	
	//_e13noni
	r[2] = a[0] * b[6]  + a[2] * b[1] ;
	
	
	//_e23noni
	r[3] = a[0] * b[7]  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_155_154(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_155_155(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_156(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_157(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_155_158(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[7]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[8]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[9]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_159(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[13]  * -1  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_160(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[7]  + a[1] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[8]  + a[2] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[9]  + a[3] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_161(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[8]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[9]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_155_162(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  * -1  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_155_163(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_155_165(double * a, double * b, double *r) { 
	
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

double * conga_op_155_166(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[3] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_155_167(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[6]  + a[1] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[7]  + a[2] * b[0] ;
	
	
	//_e23no
	r[7] = a[0] * b[8]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[12]  * -1  + a[4] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[13]  * -1  + a[5] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1  + a[6] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[19]  + a[1] * b[5]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[20]  + a[2] * b[5]  + a[4] * b[3]  + a[6] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[21]  + a[3] * b[5]  + a[5] * b[3]  + a[6] * b[2]  * -1 ;
	
	
	//_e123no
	r[14] = a[0] * b[25]  * -1  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[30]  * -1  + a[1] * b[14]  * -1  + a[2] * b[13]  + a[3] * b[12]  * -1  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6] ;
	
	
	return r;
}


