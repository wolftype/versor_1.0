
#include "conga_gp_Inf.h"


double * conga_gp_3_1(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_3_2(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_gp_3_4(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_6(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_3_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1] ;
	
	
	//_e23ni
	r[6] = a[0] * b[2] ;
	
	
	//_e1noni
	r[7] = a[0] * b[3] ;
	
	
	//_e2noni
	r[8] = a[0] * b[4] ;
	
	
	//_e3noni
	r[9] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_3_9(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[6] ;
	
	
	//_e2ni
	r[4] = a[0] * b[7] ;
	
	
	//_e3ni
	r[5] = a[0] * b[8] ;
	
	
	//_e12noni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_10(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[0] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1] ;
	
	
	//_e23ni
	r[5] = a[0] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_3_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_gp_3_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_gp_3_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_gp_3_15(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_3_16(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_17(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_3_18(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3] ;
	
	
	//_e2ni
	r[1] = a[0] * b[4] ;
	
	
	//_e3ni
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_3_19(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_20(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_21(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_3_22(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_23(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_24(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_3_25(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_26(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[0] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1] ;
	
	
	//_e23ni
	r[5] = a[0] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_3_28(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_29(double * a, double * b, double *r) { 
	
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

double * conga_gp_3_30(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_3_31(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_32(double * a, double * b, double *r) { 
	
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

double * conga_gp_3_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_34(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_35(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[0] * b[5]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[0] * b[6]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[1] ;
	
	
	//_e13ni
	r[5] = a[0] * b[2] ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	//_e123
	r[10] = a[0] * b[7] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_3_37(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[2]  + a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3]  + a[0] * b[13]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[0] * b[4]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[1] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[2]  + a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3]  + a[0] * b[13]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	//_e123
	r[10] = a[0] * b[14] ;
	
	
	//_e123noni
	r[11] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_gp_3_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e13noni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_gp_3_43(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e13noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e23noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_45(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  * -1  + a[0] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1  + a[0] * b[13] ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[14]  * -1  + a[0] * b[15] ;
	
	
	return r;
}

double * conga_gp_3_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[2] ;
	
	
	//_e123
	r[10] = a[0] * b[10] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_3_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[1] ;
	
	
	//_e13ni
	r[5] = a[0] * b[2] ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	//_e123
	r[10] = a[0] * b[10] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_3_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_gp_3_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123
	r[6] = a[0] * b[3] ;
	
	
	//_e123noni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_52(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[4] ;
	
	
	//_e2ni
	r[1] = a[0] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[6] ;
	
	
	//_e123ni
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_3_53(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_54(double * a, double * b, double *r) { 
	
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

double * conga_gp_3_55(double * a, double * b, double *r) { 
	
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

double * conga_gp_3_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[0]  * -1  + a[0] * b[4] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  * -1  + a[0] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[2]  * -1  + a[0] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[0]  * -1  + a[0] * b[5] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  * -1  + a[0] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[2]  * -1  + a[0] * b[7] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_59(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[0]  * -1  + a[0] * b[8] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  * -1  + a[0] * b[9] ;
	
	
	//_e3ni
	r[3] = a[0] * b[2]  * -1  + a[0] * b[10] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[2]  + a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3]  + a[0] * b[13]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_62(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  * -1  + a[0] * b[11] ;
	
	
	//_e3ni
	r[5] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[13]  * -1  + a[0] * b[14] ;
	
	
	return r;
}

double * conga_gp_3_63(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0]  + a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2]  + a[0] * b[8]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[9] ;
	
	
	//_e123noni
	r[4] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_3_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[1]  + a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[2]  + a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3]  + a[0] * b[10]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_65(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  * -1  + a[0] * b[7] ;
	
	
	//_e3ni
	r[5] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	//_e12noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[9]  * -1  + a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_3_66(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0]  + a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2]  + a[0] * b[5]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[6] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_67(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[4] ;
	
	
	//_e2ni
	r[1] = a[0] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_68(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_69(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_3_70(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_71(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_72(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[0]  * -1  + a[0] * b[9] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  * -1  + a[0] * b[10] ;
	
	
	//_e3ni
	r[5] = a[0] * b[2]  * -1  + a[0] * b[11] ;
	
	
	//_e12noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[12]  * -1  + a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_3_73(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0]  * -1  + a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_3_74(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0]  + a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2]  + a[0] * b[5]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[6] ;
	
	
	//_e123noni
	r[4] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[0] * b[0]  + a[0] * b[9]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  + a[0] * b[10]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[2]  + a[0] * b[11]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_3_76(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1  + a[0] * b[7] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	return r;
}

double * conga_gp_3_77(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0]  + a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2]  + a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_78(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0]  + a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2]  + a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_79(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1  + a[0] * b[4] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1  + a[0] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1  + a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_80(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1  + a[0] * b[3] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1  + a[0] * b[4] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1  + a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_3_81(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0]  + a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2]  + a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[0] * b[0]  + a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[2]  + a[0] * b[8]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_3_83(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  * -1  + a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_3_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  * -1  + a[0] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1  + a[0] * b[9] ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[10]  * -1  + a[0] * b[11] ;
	
	
	return r;
}

double * conga_gp_3_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[1]  + a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[2]  + a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3]  + a[0] * b[10]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	//_e123
	r[10] = a[0] * b[11] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_gp_3_86(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_3_87(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  * -1  + a[0] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1  + a[0] * b[10] ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[2]  + a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3]  + a[0] * b[13]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	//_e123
	r[10] = a[0] * b[14] ;
	
	
	//_e123noni
	r[11] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_gp_3_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[13]  * -1  + a[0] * b[14] ;
	
	
	return r;
}

double * conga_gp_3_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[0] * b[0]  + a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[2]  + a[0] * b[8]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_3_92(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_93(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1  + a[0] * b[7] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	//_e123ni
	r[3] = a[0] * b[9]  * -1  + a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_3_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[0] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1] ;
	
	
	//_e23ni
	r[5] = a[0] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[6] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_96(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1  + a[0] * b[7] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1  + a[0] * b[8] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1  + a[0] * b[9] ;
	
	
	//_e123ni
	r[3] = a[0] * b[10]  * -1  + a[0] * b[11] ;
	
	
	return r;
}

double * conga_gp_3_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  * -1  + a[0] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1  + a[0] * b[9] ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[0] * b[0]  + a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[2]  + a[0] * b[8]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_3_99(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  * -1  + a[0] * b[7] ;
	
	
	//_e3ni
	r[5] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	//_e12noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_100(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1  + a[0] * b[7] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1  + a[0] * b[8] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1  + a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_3_101(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0]  + a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2]  + a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_102(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[3]  * -1  + a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_3_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2] ;
	
	
	//_e2ni
	r[2] = a[0] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[4] ;
	
	
	//_noni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[1] ;
	
	
	//_e2noni
	r[8] = a[0] * b[2] ;
	
	
	//_e3noni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_105(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_3_106(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_3_108(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_109(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_3_110(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_111(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[1] ;
	
	
	//_e2ni
	r[1] = a[0] * b[2] ;
	
	
	//_e3ni
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_112(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_3_113(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[1] ;
	
	
	//_e2ni
	r[2] = a[0] * b[2] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_3_116(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_3_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[0] * b[7]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[1] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  * -1  + a[0] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1  + a[0] * b[13] ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[0] * b[0]  + a[0] * b[9]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  + a[0] * b[10]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[2]  + a[0] * b[11]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[12] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_gp_3_120(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  * -1  + a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_3_121(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[0]  * -1  + a[0] * b[9] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  * -1  + a[0] * b[10] ;
	
	
	//_e3ni
	r[5] = a[0] * b[2]  * -1  + a[0] * b[11] ;
	
	
	//_e12noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_3_123(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_124(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[6] ;
	
	
	//_e2ni
	r[4] = a[0] * b[7] ;
	
	
	//_e3ni
	r[5] = a[0] * b[8] ;
	
	
	//_e12noni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_125(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_126(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[1] ;
	
	
	//_e13ni
	r[5] = a[0] * b[2] ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  * -1  + a[0] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1  + a[0] * b[13] ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[0]  + a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[2]  + a[0] * b[12]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[3] ;
	
	
	//_e2noni
	r[8] = a[0] * b[4] ;
	
	
	//_e3noni
	r[9] = a[0] * b[5] ;
	
	
	//_e123
	r[10] = a[0] * b[13] ;
	
	
	//_e123noni
	r[11] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_3_130(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[6] ;
	
	
	//_e2ni
	r[4] = a[0] * b[7] ;
	
	
	//_e3ni
	r[5] = a[0] * b[8] ;
	
	
	//_e12noni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[9]  * -1  + a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_3_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[0]  + a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[2]  + a[0] * b[12]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[3] ;
	
	
	//_e2noni
	r[8] = a[0] * b[4] ;
	
	
	//_e3noni
	r[9] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_3_132(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  * -1  + a[0] * b[11] ;
	
	
	//_e3ni
	r[5] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[1] ;
	
	
	//_e13ni
	r[5] = a[0] * b[2] ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_134(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[1]  + a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[2]  + a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3]  + a[0] * b[12]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	//_e123
	r[10] = a[0] * b[13] ;
	
	
	//_e123noni
	r[11] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_3_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  * -1  + a[0] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1  + a[0] * b[13] ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_gp_3_138(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[6] ;
	
	
	//_e2ni
	r[4] = a[0] * b[7] ;
	
	
	//_e3ni
	r[5] = a[0] * b[8] ;
	
	
	//_e12noni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_3_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_3_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[0]  + a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[2]  + a[0] * b[12]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[3] ;
	
	
	//_e2noni
	r[8] = a[0] * b[4] ;
	
	
	//_e3noni
	r[9] = a[0] * b[5] ;
	
	
	//_e123
	r[10] = a[0] * b[13] ;
	
	
	//_e123noni
	r[11] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_3_141(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_142(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  * -1  + a[0] * b[3] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1  + a[0] * b[4] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  * -1  + a[0] * b[5] ;
	
	
	//_e123ni
	r[3] = a[0] * b[6]  * -1  + a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_3_143(double * a, double * b, double *r) { 
	
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

double * conga_gp_3_144(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3] ;
	
	
	//_e2ni
	r[1] = a[0] * b[4] ;
	
	
	//_e3ni
	r[2] = a[0] * b[5] ;
	
	
	//_e123ni
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_145(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_146(double * a, double * b, double *r) { 
	
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

double * conga_gp_3_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[1] ;
	
	
	//_e13ni
	r[5] = a[0] * b[2] ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_148(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_149(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_150(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[2] ;
	
	
	//_e123
	r[10] = a[0] * b[7] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_3_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_3_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[10] ;
	
	
	//_noni
	r[7] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[2]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[4]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_gp_3_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[6] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[1] ;
	
	
	//_e2noni
	r[8] = a[0] * b[2] ;
	
	
	//_e3noni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_3_158(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[9]  * -1  + a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_3_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[1]  + a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[2]  + a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3]  + a[0] * b[12]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_160(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  * -1  + a[0] * b[11] ;
	
	
	//_e3ni
	r[5] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_3_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_3_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[1]  + a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[2]  + a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3]  + a[0] * b[12]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	//_e123
	r[10] = a[0] * b[13] ;
	
	
	//_e123noni
	r[11] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_3_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_3_164(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_3_165(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_3_166(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_3_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e1
	r[1] = a[0] * b[9] ;
	
	
	//_e2
	r[2] = a[0] * b[10] ;
	
	
	//_e3
	r[3] = a[0] * b[11] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  + a[0] * b[15]  * -1 ;
	
	
	//_e12
	r[5] = a[0] * b[16]  * -1 ;
	
	
	//_e13
	r[6] = a[0] * b[17]  * -1 ;
	
	
	//_e23
	r[7] = a[0] * b[18]  * -1 ;
	
	
	//_e1ni
	r[8] = a[0] * b[1]  * -1  + a[0] * b[22] ;
	
	
	//_e2ni
	r[9] = a[0] * b[2]  * -1  + a[0] * b[23] ;
	
	
	//_e3ni
	r[10] = a[0] * b[3]  * -1  + a[0] * b[24] ;
	
	
	//_noni
	r[11] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[12] = a[0] * b[6]  + a[0] * b[26]  * -1 ;
	
	
	//_e13ni
	r[13] = a[0] * b[7]  + a[0] * b[27]  * -1 ;
	
	
	//_e23ni
	r[14] = a[0] * b[8]  + a[0] * b[28]  * -1 ;
	
	
	//_e1noni
	r[15] = a[0] * b[9] ;
	
	
	//_e2noni
	r[16] = a[0] * b[10] ;
	
	
	//_e3noni
	r[17] = a[0] * b[11] ;
	
	
	//_e123
	r[18] = a[0] * b[29] ;
	
	
	//_e12noni
	r[19] = a[0] * b[16]  * -1 ;
	
	
	//_e13noni
	r[20] = a[0] * b[17]  * -1 ;
	
	
	//_e23noni
	r[21] = a[0] * b[18]  * -1 ;
	
	
	//_e123ni
	r[22] = a[0] * b[25]  * -1  + a[0] * b[31] ;
	
	
	//_e123noni
	r[23] = a[0] * b[29] ;
	
	
	return r;
}


