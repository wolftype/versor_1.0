
#include "conga_op_Trs_Lin.h"


double * conga_op_67_1(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_2(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_5(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_7(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_8(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_9(double * a, double * b, double *r) { 
	
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

double * conga_op_67_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_67_11(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_15(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_67_16(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_67_17(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_67_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_21(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_22(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_23(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_24(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_25(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_26(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_27(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_28(double * a, double * b, double *r) { 
	
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

double * conga_op_67_29(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
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

double * conga_op_67_30(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_31(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_32(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
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

double * conga_op_67_33(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_67_34(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
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

double * conga_op_67_35(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
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

double * conga_op_67_36(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_37(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_38(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_39(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_67_40(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[14]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_41(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  * -1  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_44(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[2]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[3]  * -1  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[4]  * -1  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_46(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1  + a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[11]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_47(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1  + a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[14]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_48(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[10]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_67_49(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[10]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_51(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_67_52(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_53(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_54(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_55(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_56(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_57(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_58(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_60(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_61(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_62(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[6]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[13]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_63(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[9]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_64(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_65(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_66(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_67(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_68(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_69(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_70(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_71(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_67_72(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[12]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_73(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_74(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_75(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_76(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_77(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_78(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_79(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_80(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_81(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_82(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_83(double * a, double * b, double *r) { 
	
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

double * conga_op_67_84(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[10]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_85(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[11]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_86(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_67_87(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_67_88(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1  + a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_89(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[14]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_90(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[13]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_91(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[9]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_92(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
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

double * conga_op_67_93(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_94(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_95(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_96(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[10]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_97(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_98(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[9]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_99(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_100(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_101(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_102(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_67_103(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_104(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_67_105(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_106(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_107(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_67_108(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_109(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_110(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_111(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_114(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_115(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_67_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_67_117(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_67_118(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1  + a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_119(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[12]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_120(double * a, double * b, double *r) { 
	
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

double * conga_op_67_121(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_122(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_67_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_67_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_67_125(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_67_126(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_67_127(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_128(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1  + a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[14]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_129(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[13]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_130(double * a, double * b, double *r) { 
	
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

double * conga_op_67_131(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_132(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[6]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[13]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_133(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_134(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_135(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[13]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_136(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[13]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_137(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7]  * -1  + a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_67_139(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_67_140(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[13]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_141(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_142(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_143(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
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

double * conga_op_67_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_145(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_67_146(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_147(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_148(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_149(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_67_150(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_151(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_67_152(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  * -1  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_153(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[2]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[3]  * -1  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[4]  * -1  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_154(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_67_155(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  * -1  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_156(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_67_157(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_67_158(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_159(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_160(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[4]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[6]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_161(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[3]  * -1  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  * -1  + a[3] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_67_162(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[13]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_67_163(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_67_164(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_67_165(double * a, double * b, double *r) { 
	
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

double * conga_op_67_166(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_67_167(double * a, double * b, double *r) { 
	
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
	r[5] = a[0] * b[6]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[6] = a[0] * b[7]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[7] = a[0] * b[8]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[8] = a[0] * b[9]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[5] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[16]  * -1  + a[1] * b[4]  * -1  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[17]  * -1  + a[2] * b[4]  * -1  + a[4] * b[3]  + a[6] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[18]  * -1  + a[3] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[25]  * -1  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[3] * b[1]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[29]  + a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[9]  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6] ;
	
	
	return r;
}


