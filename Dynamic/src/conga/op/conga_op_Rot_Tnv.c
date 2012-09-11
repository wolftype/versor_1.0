
#include "conga_op_Rot_Tnv.h"


double * conga_op_51_1(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_3(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_5(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_51_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_7(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4] ;
	
	
	//_e123noni
	r[6] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_51_8(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_51_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_11(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_12(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_13(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_20(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_21(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_22(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_51_23(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_24(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_26(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_27(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_29(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_30(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1] ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  * -1  + a[2] * b[1] ;
	
	
	//_e23noni
	r[5] = a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e123no
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_31(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_32(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  * -1  + a[2] * b[4] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_33(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_34(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  * -1  + a[2] * b[4] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_35(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_36(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_37(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1] ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  * -1  + a[2] * b[1] ;
	
	
	//_e23noni
	r[5] = a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e123no
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_38(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[8]  * -1  + a[1] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[9]  * -1  + a[2] * b[7] ;
	
	
	//_e23noni
	r[5] = a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_39(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_40(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[8]  * -1  + a[1] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[9]  * -1  + a[2] * b[7] ;
	
	
	//_e23noni
	r[5] = a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_41(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_42(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_44(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_51_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_46(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4] ;
	
	
	//_e123noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_51_47(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4] ;
	
	
	//_e123noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_51_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_51_49(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[8]  * -1  + a[1] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[9]  * -1  + a[2] * b[7] ;
	
	
	//_e23noni
	r[5] = a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_50(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_52(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_53(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_54(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_51_55(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_56(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_57(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_58(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4] ;
	
	
	//_e123noni
	r[6] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_51_59(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_60(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4] ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_51_61(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[8]  * -1  + a[1] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[9]  * -1  + a[2] * b[7] ;
	
	
	//_e23noni
	r[5] = a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_62(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_51_63(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_64(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_65(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_66(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_67(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_68(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_69(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_70(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_51_71(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_72(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_51_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_74(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_75(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_76(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_51_77(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_78(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_79(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_51_80(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_81(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_82(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_84(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_85(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_88(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4] ;
	
	
	//_e123noni
	r[6] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_51_89(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[8]  * -1  + a[1] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[9]  * -1  + a[2] * b[7] ;
	
	
	//_e23noni
	r[5] = a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_90(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_51_91(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_92(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  * -1  + a[2] * b[4] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_93(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_51_94(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_95(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_96(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_51_97(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_98(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_99(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_100(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_51_101(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_102(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_103(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_51_104(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  * -1  + a[2] * b[4] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123no
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_105(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_51_106(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_51_108(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_51_109(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_110(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_111(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_114(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_115(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_117(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  * -1  + a[2] * b[4] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123no
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_118(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4] ;
	
	
	//_e123noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_51_119(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_51_121(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_51_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_51_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_51_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_51_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_127(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[8]  * -1  + a[1] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[9]  * -1  + a[2] * b[7] ;
	
	
	//_e23noni
	r[5] = a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_128(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4] ;
	
	
	//_e123noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_51_129(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_51_131(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_132(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_51_133(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[8]  * -1  + a[1] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[9]  * -1  + a[2] * b[7] ;
	
	
	//_e23noni
	r[5] = a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_134(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_51_135(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_51_136(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[8]  * -1  + a[1] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[9]  * -1  + a[2] * b[7] ;
	
	
	//_e23noni
	r[5] = a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_137(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4] ;
	
	
	//_e123noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_51_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_51_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_51_140(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_141(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_51_142(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_143(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  * -1  + a[2] * b[4] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_145(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_146(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_51_147(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_148(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_149(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_51_150(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_51_151(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_152(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_153(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_51_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_51_155(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_156(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_157(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[4] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  * -1  + a[2] * b[4] ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	//_e123no
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_158(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_51_159(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[8]  * -1  + a[1] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[9]  * -1  + a[2] * b[7] ;
	
	
	//_e23noni
	r[5] = a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_160(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_51_161(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_51_162(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[8]  * -1  + a[1] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[9]  * -1  + a[2] * b[7] ;
	
	
	//_e23noni
	r[5] = a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_51_163(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_51_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_51_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_51_167(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[1] ;
	
	
	//_e13no
	r[4] = a[0] * b[3]  * -1  + a[2] * b[1] ;
	
	
	//_e23no
	r[5] = a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[5] ;
	
	
	//_e2noni
	r[7] = a[1] * b[5] ;
	
	
	//_e3noni
	r[8] = a[2] * b[5] ;
	
	
	//_e12noni
	r[9] = a[0] * b[13]  * -1  + a[1] * b[12] ;
	
	
	//_e13noni
	r[10] = a[0] * b[14]  * -1  + a[2] * b[12] ;
	
	
	//_e23noni
	r[11] = a[1] * b[14]  * -1  + a[2] * b[13] ;
	
	
	//_e123no
	r[12] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[21]  + a[1] * b[20]  * -1  + a[2] * b[19]  + a[3] * b[5] ;
	
	
	return r;
}


