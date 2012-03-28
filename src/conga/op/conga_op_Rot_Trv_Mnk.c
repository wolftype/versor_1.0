
#include "conga_op_Rot_Trv_Mnk.h"


double * conga_op_151_1(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_3(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_5(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[7] * b[1] ;
	
	
	return r;
}

double * conga_op_151_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_7(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_151_8(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_151_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_11(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_12(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_151_13(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_20(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_151_21(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_22(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_151_23(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_24(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_25(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_151_26(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_27(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_151_29(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_30(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[1]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[3]  * -1  + a[2] * b[2]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_31(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_32(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_33(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_34(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_35(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_36(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_37(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[1]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[3]  * -1  + a[2] * b[2]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_38(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_39(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_40(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_41(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_42(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_44(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[7] * b[1] ;
	
	
	return r;
}

double * conga_op_151_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_46(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[11]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_151_47(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[14]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_151_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_151_49(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_50(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_151_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_52(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_53(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_151_54(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_151_55(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_56(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_57(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_58(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_151_59(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_60(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_151_61(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_62(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_151_63(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_64(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_65(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[9]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_66(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_67(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_68(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_151_69(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_70(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_151_71(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_151_72(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[12]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_73(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_151_74(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_75(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_76(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_77(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_78(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_79(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_151_80(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_81(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_82(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_151_84(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[10]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_85(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_88(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_151_89(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_90(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_91(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_92(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_93(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_94(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_95(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_96(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_151_97(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_98(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_99(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_100(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_151_101(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3]  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_102(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_151_103(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[7] * b[1] ;
	
	
	return r;
}

double * conga_op_151_104(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_105(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_106(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_151_108(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_109(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_110(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_151_111(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_114(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_115(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_117(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_118(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_151_119(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_151_121(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_151_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_151_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_151_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_127(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_128(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[14]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_151_129(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_op_151_131(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_132(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_151_133(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_134(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_135(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_136(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_137(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[4]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[4]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[4] ;
	
	
	return r;
}

double * conga_op_151_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_151_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_151_140(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  * -1  + a[2] * b[6]  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_141(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_142(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_143(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_145(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_151_146(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_147(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_148(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_149(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_151_150(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_151(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_152(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_153(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[1] ;
	
	
	//_e2noni
	r[1] = a[1] * b[1] ;
	
	
	//_e3noni
	r[2] = a[2] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[7] * b[1] ;
	
	
	return r;
}

double * conga_op_151_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_151_155(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_156(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_157(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[4]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[4]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  * -1  + a[2] * b[5]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_158(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_159(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_160(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[7] * b[3] ;
	
	
	return r;
}

double * conga_op_151_161(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_151_162(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[7]  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[7]  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_151_163(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_151_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_151_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  * -1  + a[2] * b[3] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_151_167(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  * -1  + a[1] * b[1] ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  * -1  + a[2] * b[1] ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e1noni
	r[7] = a[0] * b[5]  + a[3] * b[1] ;
	
	
	//_e2noni
	r[8] = a[1] * b[5]  + a[3] * b[2] ;
	
	
	//_e3noni
	r[9] = a[2] * b[5]  + a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[13]  * -1  + a[1] * b[12]  + a[3] * b[6]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[14]  * -1  + a[2] * b[12]  + a[3] * b[7]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[12] = a[1] * b[14]  * -1  + a[2] * b[13]  + a[3] * b[8]  + a[6] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[7] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[21]  + a[1] * b[20]  * -1  + a[2] * b[19]  + a[3] * b[25]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[7] * b[5] ;
	
	
	return r;
}


