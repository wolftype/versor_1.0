
#include "conga_gp_Drt.h"


double * conga_gp_14_1(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_2(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[1] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_gp_14_4(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_5(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[1] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_6(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_7(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_8(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1ni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[1] ;
	
	
	//_e3ni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[5] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[3] ;
	
	
	//_e123ni
	r[9] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_ni
	r[3] = a[0] * b[9] ;
	
	
	//_e12ni
	r[4] = a[0] * b[8] ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e1noni
	r[7] = a[0] * b[2] ;
	
	
	//_e2noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_11(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1ni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[1] ;
	
	
	//_e3ni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[5] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_gp_14_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_gp_14_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_gp_14_15(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_e1noni
	r[3] = a[0] * b[2] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_17(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_18(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[5] ;
	
	
	//_e13ni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_19(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_20(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_21(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_22(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_23(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_24(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_25(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_26(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_27(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1ni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[1] ;
	
	
	//_e3ni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[5] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[2] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_29(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[2] ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_30(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_31(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0]  + a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_32(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[2] ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_33(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[1] ;
	
	
	//_e123ni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_34(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3]  * -1  + a[0] * b[10] ;
	
	
	//_e2ni
	r[1] = a[0] * b[2]  + a[0] * b[9]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  * -1  + a[0] * b[8] ;
	
	
	//_e123ni
	r[3] = a[0] * b[0]  + a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_35(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3]  * -1  + a[0] * b[7] ;
	
	
	//_e2ni
	r[1] = a[0] * b[2]  + a[0] * b[6]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  * -1  + a[0] * b[5] ;
	
	
	//_e123ni
	r[3] = a[0] * b[0]  + a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[2] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[6] ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[4] ;
	
	
	//_e123ni
	r[11] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_37(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0]  + a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_38(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  * -1  + a[0] * b[13] ;
	
	
	//_e2ni
	r[4] = a[0] * b[2]  + a[0] * b[12]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[11] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123ni
	r[9] = a[0] * b[0]  + a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_39(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[1] ;
	
	
	//_e123ni
	r[6] = a[0] * b[0]  + a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  * -1  + a[0] * b[13] ;
	
	
	//_e2ni
	r[5] = a[0] * b[2]  + a[0] * b[12]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1  + a[0] * b[11] ;
	
	
	//_noni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[6] ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[4] ;
	
	
	//_e123ni
	r[11] = a[0] * b[0]  + a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[1] ;
	
	
	//_e123
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_gp_14_43(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3] ;
	
	
	//_e2ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[4] ;
	
	
	//_e2noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_45(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[2] ;
	
	
	//_e13ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[11] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1] ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[5] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[14]  + a[0] * b[15]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[13] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[11] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[5] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[7] ;
	
	
	//_noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[2] ;
	
	
	//_e13noni
	r[9] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[0] ;
	
	
	//_e123ni
	r[11] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[2] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[6] ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[4] ;
	
	
	//_e123ni
	r[11] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_gp_14_51(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[5] = a[0] * b[2] ;
	
	
	//_e13noni
	r[6] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_52(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[6] ;
	
	
	//_e13ni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_14_53(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[6] ;
	
	
	//_e2ni
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[4] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_54(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[7] ;
	
	
	//_e12ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[1] ;
	
	
	//_e23ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_55(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3] ;
	
	
	//_e12ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[1] ;
	
	
	//_e23ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_ni
	r[3] = a[0] * b[7] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1] ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[6] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_57(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  * -1  + a[0] * b[6] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  * -1  + a[0] * b[4] ;
	
	
	//_e123
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_58(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  * -1  + a[0] * b[7] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[6]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  * -1  + a[0] * b[5] ;
	
	
	//_e123
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_59(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_60(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  * -1  + a[0] * b[10] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  * -1  + a[0] * b[8] ;
	
	
	//_e123
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_61(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  * -1  + a[0] * b[13] ;
	
	
	//_e2ni
	r[4] = a[0] * b[2]  + a[0] * b[12]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[11] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123ni
	r[9] = a[0] * b[0]  + a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_ni
	r[3] = a[0] * b[13]  + a[0] * b[14]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_e1noni
	r[7] = a[0] * b[6] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_14_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_64(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  * -1  + a[0] * b[10] ;
	
	
	//_e2ni
	r[4] = a[0] * b[2]  + a[0] * b[9]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[8] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123ni
	r[9] = a[0] * b[0]  + a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	//_e1noni
	r[7] = a[0] * b[5] ;
	
	
	//_e2noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2]  * -1  + a[0] * b[5] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  + a[0] * b[4]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[0]  * -1  + a[0] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_67(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[6] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_14_68(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[5] ;
	
	
	//_e2ni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_69(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_70(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_71(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[12]  + a[0] * b[13]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[11] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[9] ;
	
	
	//_e1noni
	r[7] = a[0] * b[5] ;
	
	
	//_e2noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_73(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2]  * -1  + a[0] * b[5] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  + a[0] * b[4]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[0]  * -1  + a[0] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_75(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1ni
	r[3] = a[0] * b[2]  * -1  + a[0] * b[11] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  + a[0] * b[10]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[0]  * -1  + a[0] * b[9] ;
	
	
	//_e12noni
	r[6] = a[0] * b[5] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_76(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_14_77(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1  + a[0] * b[5] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[0] * b[4]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1  + a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_78(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_14_79(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  * -1  + a[0] * b[6] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  * -1  + a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_14_80(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  * -1  + a[0] * b[5] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  * -1  + a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_81(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1  + a[0] * b[5] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[0] * b[4]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1  + a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_82(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1ni
	r[3] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	//_e12noni
	r[6] = a[0] * b[5] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[0] * b[4]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[2] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[9] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[7] ;
	
	
	//_e1noni
	r[7] = a[0] * b[6] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  * -1  + a[0] * b[10] ;
	
	
	//_e2ni
	r[5] = a[0] * b[2]  + a[0] * b[9]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1  + a[0] * b[8] ;
	
	
	//_noni
	r[7] = a[0] * b[11]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[6] ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[4] ;
	
	
	//_e123ni
	r[11] = a[0] * b[0]  + a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_86(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[2] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[0] * b[2]  * -1  + a[0] * b[10] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  + a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[0]  * -1  + a[0] * b[8] ;
	
	
	//_e1noni
	r[6] = a[0] * b[7] ;
	
	
	//_e2noni
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  * -1  + a[0] * b[13] ;
	
	
	//_e2ni
	r[5] = a[0] * b[2]  + a[0] * b[12]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1  + a[0] * b[11] ;
	
	
	//_noni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[6] ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[4] ;
	
	
	//_e123ni
	r[11] = a[0] * b[0]  + a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_ni
	r[3] = a[0] * b[13]  + a[0] * b[14]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_e1noni
	r[7] = a[0] * b[6] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[5] ;
	
	
	//_e13noni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_92(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3]  * -1  + a[0] * b[10] ;
	
	
	//_e2ni
	r[1] = a[0] * b[2]  + a[0] * b[9]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  * -1  + a[0] * b[8] ;
	
	
	//_e123ni
	r[3] = a[0] * b[0]  + a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_93(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[9]  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	//_e13ni
	r[2] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_14_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_e12ni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[1] ;
	
	
	//_e23ni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[1] ;
	
	
	//_e3ni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[5] ;
	
	
	//_e13noni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_96(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[10]  + a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[2]  * -1  + a[0] * b[9] ;
	
	
	//_e13ni
	r[2] = a[0] * b[1]  + a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[0]  * -1  + a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_14_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_e12ni
	r[3] = a[0] * b[2]  * -1  + a[0] * b[9] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  + a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[0]  * -1  + a[0] * b[7] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[5] ;
	
	
	//_e13noni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	//_e1noni
	r[6] = a[0] * b[5] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_100(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  * -1  + a[0] * b[9] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  * -1  + a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_14_101(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1  + a[0] * b[8] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[0] * b[7]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1  + a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_14_102(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  + a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_103(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4] ;
	
	
	//_e13ni
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_104(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1] ;
	
	
	//_e1ni
	r[3] = a[0] * b[9] ;
	
	
	//_e2ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[7] ;
	
	
	//_e12noni
	r[6] = a[0] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[1] ;
	
	
	//_e123ni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1] ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[5] ;
	
	
	//_e2noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_106(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1] ;
	
	
	//_e3ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_107(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[8] ;
	
	
	//_e2ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[6] ;
	
	
	//_e12noni
	r[6] = a[0] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_108(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_109(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_110(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[5] ;
	
	
	//_e2ni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_111(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_14_112(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_113(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_114(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_115(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[5] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[3] ;
	
	
	//_e12noni
	r[6] = a[0] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_116(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_117(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[1] ;
	
	
	//_e123ni
	r[6] = a[0] * b[0]  + a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[0] * b[2]  * -1  + a[0] * b[13] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  + a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[0]  * -1  + a[0] * b[11] ;
	
	
	//_e1noni
	r[6] = a[0] * b[7] ;
	
	
	//_e2noni
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  + a[0] * b[10]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[9] ;
	
	
	//_noni
	r[7] = a[0] * b[12]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[5] ;
	
	
	//_e13noni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[0] * b[7]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[2] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[2]  * -1  + a[0] * b[11] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  + a[0] * b[10]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[0]  * -1  + a[0] * b[9] ;
	
	
	//_e1noni
	r[6] = a[0] * b[5] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_122(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_e1noni
	r[3] = a[0] * b[2] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[8] ;
	
	
	//_e13ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[6] ;
	
	
	//_e1noni
	r[6] = a[0] * b[2] ;
	
	
	//_e2noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_125(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	//_e1noni
	r[6] = a[0] * b[2] ;
	
	
	//_e2noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_127(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[2] ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123ni
	r[9] = a[0] * b[0]  + a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[14] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[13] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[11] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[5] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_noni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[5] ;
	
	
	//_e13noni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	//_e123ni
	r[11] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[8] ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e1noni
	r[7] = a[0] * b[2] ;
	
	
	//_e2noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_131(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1ni
	r[3] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_e12noni
	r[6] = a[0] * b[5] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[3] ;
	
	
	//_e123ni
	r[9] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_ni
	r[3] = a[0] * b[13] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_e1noni
	r[7] = a[0] * b[6] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_14_133(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[2] ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123ni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[9] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1] ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[5] ;
	
	
	//_e2noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_ni
	r[3] = a[0] * b[13] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_e1noni
	r[7] = a[0] * b[6] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  * -1  + a[0] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[2]  + a[0] * b[11]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1  + a[0] * b[10] ;
	
	
	//_noni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[6] ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[4] ;
	
	
	//_e123ni
	r[11] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[14]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[13] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[11] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[5] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[8] ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e1noni
	r[7] = a[0] * b[2] ;
	
	
	//_e2noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_139(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[9] ;
	
	
	//_e2ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[7] ;
	
	
	//_e12noni
	r[6] = a[0] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[0] ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_noni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[5] ;
	
	
	//_e13noni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	//_e123ni
	r[11] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[1] ;
	
	
	//_e23ni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[5] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_142(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[6]  + a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[2]  * -1  + a[0] * b[5] ;
	
	
	//_e13ni
	r[2] = a[0] * b[1]  + a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[0]  * -1  + a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_143(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[2] ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_144(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[5] ;
	
	
	//_e13ni
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_145(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[6] ;
	
	
	//_e2ni
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[4] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_146(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[6] ;
	
	
	//_e12ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[1] ;
	
	
	//_e23ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_147(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[2] ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123ni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[6] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1] ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[5] ;
	
	
	//_e2noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_149(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1] ;
	
	
	//_e3ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_e12ni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[1] ;
	
	
	//_e23ni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[5] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[6] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[4] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[2] ;
	
	
	//_e13noni
	r[9] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[0] ;
	
	
	//_e123ni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[6] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[4] ;
	
	
	//_e1noni
	r[7] = a[0] * b[3] ;
	
	
	//_e2noni
	r[8] = a[0] * b[2]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[1] ;
	
	
	//_e123
	r[10] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[10] ;
	
	
	//_e13ni
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[8] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[3]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[2] ;
	
	
	//_e123
	r[10] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e12noni
	r[5] = a[0] * b[2] ;
	
	
	//_e13noni
	r[6] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[2]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[1] ;
	
	
	//_e123
	r[9] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[10] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[5] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[3] ;
	
	
	//_noni
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[2] ;
	
	
	//_e13noni
	r[9] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_157(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1] ;
	
	
	//_e1ni
	r[3] = a[0] * b[10] ;
	
	
	//_e2ni
	r[4] = a[0] * b[9]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[8] ;
	
	
	//_e12noni
	r[6] = a[0] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[1] ;
	
	
	//_e123ni
	r[9] = a[0] * b[0]  + a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1] ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[5] ;
	
	
	//_e2noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_14_159(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  * -1  + a[0] * b[12] ;
	
	
	//_e2ni
	r[4] = a[0] * b[2]  + a[0] * b[11]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  * -1  + a[0] * b[10] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123ni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_ni
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_e1noni
	r[7] = a[0] * b[6] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_14_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_ni
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  * -1  + a[0] * b[12] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  + a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  * -1  + a[0] * b[10] ;
	
	
	//_e1noni
	r[7] = a[0] * b[6] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  * -1  + a[0] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[2]  + a[0] * b[11]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1  + a[0] * b[10] ;
	
	
	//_noni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[6] ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[4] ;
	
	
	//_e123ni
	r[11] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_163(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[6] ;
	
	
	//_e2ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[4] ;
	
	
	//_e12noni
	r[6] = a[0] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[0] ;
	
	
	//_e123ni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[5] ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[2] ;
	
	
	//_e2noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_ni
	r[3] = a[0] * b[6] ;
	
	
	//_e1noni
	r[4] = a[0] * b[2] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_14_166(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_14_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[29]  * -1 ;
	
	
	//_e1
	r[1] = a[0] * b[18] ;
	
	
	//_e2
	r[2] = a[0] * b[17]  * -1 ;
	
	
	//_e3
	r[3] = a[0] * b[16] ;
	
	
	//_ni
	r[4] = a[0] * b[25]  + a[0] * b[31]  * -1 ;
	
	
	//_e12
	r[5] = a[0] * b[11] ;
	
	
	//_e13
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e23
	r[7] = a[0] * b[9] ;
	
	
	//_e1ni
	r[8] = a[0] * b[8]  * -1  + a[0] * b[28] ;
	
	
	//_e2ni
	r[9] = a[0] * b[7]  + a[0] * b[27]  * -1 ;
	
	
	//_e3ni
	r[10] = a[0] * b[6]  * -1  + a[0] * b[26] ;
	
	
	//_noni
	r[11] = a[0] * b[29]  * -1 ;
	
	
	//_e12ni
	r[12] = a[0] * b[3]  * -1  + a[0] * b[24] ;
	
	
	//_e13ni
	r[13] = a[0] * b[2]  + a[0] * b[23]  * -1 ;
	
	
	//_e23ni
	r[14] = a[0] * b[1]  * -1  + a[0] * b[22] ;
	
	
	//_e1noni
	r[15] = a[0] * b[18] ;
	
	
	//_e2noni
	r[16] = a[0] * b[17]  * -1 ;
	
	
	//_e3noni
	r[17] = a[0] * b[16] ;
	
	
	//_e123
	r[18] = a[0] * b[4]  * -1 ;
	
	
	//_e12noni
	r[19] = a[0] * b[11] ;
	
	
	//_e13noni
	r[20] = a[0] * b[10]  * -1 ;
	
	
	//_e23noni
	r[21] = a[0] * b[9] ;
	
	
	//_e123ni
	r[22] = a[0] * b[0]  + a[0] * b[15]  * -1 ;
	
	
	//_e123noni
	r[23] = a[0] * b[4]  * -1 ;
	
	
	return r;
}


