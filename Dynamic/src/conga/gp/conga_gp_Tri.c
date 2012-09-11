
#include "conga_gp_Tri.h"


double * conga_gp_25_1(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_2(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_3(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_4(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_5(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_25_6(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_7(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_25_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[5] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[3] ;
	
	
	//_e12ni
	r[6] = a[0] * b[8] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[6] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_25_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[8] ;
	
	
	//_e13noni
	r[8] = a[0] * b[7]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_25_10(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e1noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[1] ;
	
	
	//_e3noni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[5] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[3] ;
	
	
	//_e12ni
	r[6] = a[0] * b[8] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_25_12(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_13(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_14(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_15(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2] ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_16(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_17(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_18(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[5] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_19(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1noni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[2] = a[0] * b[1] ;
	
	
	//_e3noni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_20(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_21(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_22(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_23(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_24(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_25(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_26(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[5] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_30(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_31(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_25_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[6] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[4] ;
	
	
	//_e123
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_33(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[6] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[4] ;
	
	
	//_e1noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[9] ;
	
	
	//_e3noni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_e123
	r[10] = a[0] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_25_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[6] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_25_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[4] ;
	
	
	//_e123
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_37(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_25_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[4] ;
	
	
	//_e12ni
	r[6] = a[0] * b[9] ;
	
	
	//_e13ni
	r[7] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[7] ;
	
	
	//_e1noni
	r[9] = a[0] * b[13]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[12] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11]  * -1 ;
	
	
	//_e123
	r[12] = a[0] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_25_39(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_25_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[14]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[15]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[6] ;
	
	
	//_e13no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[4] ;
	
	
	//_e12ni
	r[8] = a[0] * b[9] ;
	
	
	//_e13ni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7] ;
	
	
	//_e1noni
	r[11] = a[0] * b[13]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[12] ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[0] ;
	
	
	//_e123noni
	r[15] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_25_41(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[2] ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_42(double * a, double * b, double *r) { 
	
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

double * conga_gp_25_43(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[2] ;
	
	
	//_e3noni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_44(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[3] ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[6] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_25_45(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[1] = a[0] * b[2] ;
	
	
	//_e13noni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[3] ;
	
	
	//_e123ni
	r[11] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_25_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[15]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[13] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	//_e123no
	r[14] = a[0] * b[3] ;
	
	
	//_e123ni
	r[15] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_25_48(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[11]  * -1 ;
	
	
	//_e12no
	r[2] = a[0] * b[2] ;
	
	
	//_e13no
	r[3] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[4] = a[0] * b[0] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5] ;
	
	
	//_e13ni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[8] ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_25_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[6] ;
	
	
	//_e13no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[4] ;
	
	
	//_e12ni
	r[8] = a[0] * b[9] ;
	
	
	//_e13ni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7] ;
	
	
	//_e123
	r[11] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_50(double * a, double * b, double *r) { 
	
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

double * conga_gp_25_51(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[2] ;
	
	
	//_e13no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_52(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[2] ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[6] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[4] ;
	
	
	//_e123ni
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_53(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[2] ;
	
	
	//_e13ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_55(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_57(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[6] ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[4] ;
	
	
	//_e123no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_58(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[3] ;
	
	
	//_e123ni
	r[7] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_25_59(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_60(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[6] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[10] ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_25_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[14]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[4] ;
	
	
	//_e12ni
	r[7] = a[0] * b[9] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7] ;
	
	
	//_e1noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[12] ;
	
	
	//_e3noni
	r[12] = a[0] * b[11]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_25_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[12] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	//_e123ni
	r[14] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[5] = a[0] * b[5] ;
	
	
	//_e13ni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[7] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[4] ;
	
	
	//_e1noni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[9] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_25_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[8] ;
	
	
	//_e13noni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_25_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[4] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_67(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[2] ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6] ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[4] ;
	
	
	//_e123ni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_68(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[2] ;
	
	
	//_e13ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[4] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[5] ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_70(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[5] ;
	
	
	//_e3ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_71(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1] ;
	
	
	//_e3ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[11] ;
	
	
	//_e13noni
	r[12] = a[0] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_25_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e1noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[4] ;
	
	
	//_e3noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[5] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[3] ;
	
	
	//_e12ni
	r[6] = a[0] * b[8] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[6] ;
	
	
	//_e1noni
	r[9] = a[0] * b[11]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[10] ;
	
	
	//_e3noni
	r[11] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_76(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_25_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[4] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	//_e1noni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_79(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[6] ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[4] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_80(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[5] ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[3] ;
	
	
	//_e1noni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[11]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[9] ;
	
	
	//_e13noni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7] ;
	
	
	//_e123no
	r[11] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[4] ;
	
	
	//_e1noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[9] ;
	
	
	//_e3noni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_e123
	r[10] = a[0] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_25_86(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2] ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_87(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_88(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[6] ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[10] ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_25_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[14]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[4] ;
	
	
	//_e12ni
	r[7] = a[0] * b[9] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7] ;
	
	
	//_e1noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[12] ;
	
	
	//_e3noni
	r[12] = a[0] * b[11]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_25_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[12] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	//_e123no
	r[14] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[7] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4] ;
	
	
	//_e1noni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[9] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_25_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[8] ;
	
	
	//_e13noni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_25_94(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[5] ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[5] ;
	
	
	//_e13no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[11]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[9] ;
	
	
	//_e13noni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7] ;
	
	
	//_e123ni
	r[11] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_97(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[5] ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[9] ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[7] ;
	
	
	//_e123no
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[5] ;
	
	
	//_e13no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[8]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[7] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_99(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_25_100(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[5] ;
	
	
	//_e3ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[9] ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[7] ;
	
	
	//_e123ni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[5] ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[8]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[7] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1] ;
	
	
	//_e3ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_103(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4] ;
	
	
	//_e13noni
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_25_104(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[8] ;
	
	
	//_e3noni
	r[8] = a[0] * b[7]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_105(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[9] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_107(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2] ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	//_e1noni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_108(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_110(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0] ;
	
	
	//_e1noni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_111(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_112(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[2] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_113(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_114(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[1] ;
	
	
	//_e123no
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_115(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2] ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[0] ;
	
	
	//_e1noni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_116(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_117(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_25_118(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[6] ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[9] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[13] ;
	
	
	//_e13noni
	r[10] = a[0] * b[12]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[11] ;
	
	
	//_e123no
	r[12] = a[0] * b[3] ;
	
	
	//_e123ni
	r[13] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_25_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[13]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[6] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10] ;
	
	
	//_e3noni
	r[13] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_121(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[11] ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_25_122(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2] ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_123(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_124(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_25_125(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1noni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[2] = a[0] * b[1] ;
	
	
	//_e3noni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_126(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[5] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[4] ;
	
	
	//_e12ni
	r[6] = a[0] * b[9] ;
	
	
	//_e13ni
	r[7] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[7] ;
	
	
	//_e123
	r[9] = a[0] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_25_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[13] ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[11] ;
	
	
	//_e123no
	r[13] = a[0] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_25_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[6] ;
	
	
	//_e1noni
	r[11] = a[0] * b[12]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[11] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  * -1 ;
	
	
	//_e123noni
	r[14] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_25_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[8] ;
	
	
	//_e13noni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_25_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[5] ;
	
	
	//_e13no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8] ;
	
	
	//_e13ni
	r[8] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[6] ;
	
	
	//_e1noni
	r[10] = a[0] * b[12]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[10]  * -1 ;
	
	
	//_e123noni
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_25_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[10] ;
	
	
	//_e123ni
	r[13] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[4] ;
	
	
	//_e12ni
	r[6] = a[0] * b[9] ;
	
	
	//_e13ni
	r[7] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[7] ;
	
	
	//_e123
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[10] ;
	
	
	//_e123no
	r[13] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[6] ;
	
	
	//_e13no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[4] ;
	
	
	//_e12ni
	r[8] = a[0] * b[9] ;
	
	
	//_e13ni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7] ;
	
	
	//_e1noni
	r[11] = a[0] * b[12]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[11] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_137(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[6] ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[9] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_noni
	r[9] = a[0] * b[14]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[13] ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[11] ;
	
	
	//_e123no
	r[13] = a[0] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_25_138(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[8] ;
	
	
	//_e13noni
	r[8] = a[0] * b[7]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_25_139(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2] ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[8] ;
	
	
	//_e3noni
	r[8] = a[0] * b[7]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_25_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[5] ;
	
	
	//_e13no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8] ;
	
	
	//_e13ni
	r[8] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[6] ;
	
	
	//_e1noni
	r[10] = a[0] * b[12]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[10]  * -1 ;
	
	
	//_e123noni
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_25_141(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e12noni
	r[5] = a[0] * b[5] ;
	
	
	//_e13noni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_144(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5] ;
	
	
	//_e13noni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_145(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[5] ;
	
	
	//_e3noni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_150(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_151(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[2] ;
	
	
	//_e13no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[3] = a[0] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_152(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[2] ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[6] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[4] ;
	
	
	//_e123no
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_153(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[3] ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[6] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[10] ;
	
	
	//_e13noni
	r[8] = a[0] * b[9]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[8] ;
	
	
	//_e123no
	r[10] = a[0] * b[0] ;
	
	
	//_e123ni
	r[11] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_25_154(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e12no
	r[2] = a[0] * b[2] ;
	
	
	//_e13no
	r[3] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[4] = a[0] * b[0] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5] ;
	
	
	//_e13ni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_155(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[2] ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6] ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[4] ;
	
	
	//_e123no
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_156(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[2] ;
	
	
	//_e13no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[3] = a[0] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[4] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_157(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4] ;
	
	
	//_e1noni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[9] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_25_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[4] ;
	
	
	//_e12ni
	r[7] = a[0] * b[9] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7] ;
	
	
	//_e1noni
	r[10] = a[0] * b[12]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[10]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_160(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[5] ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[8] ;
	
	
	//_e3ni
	r[8] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[9] = a[0] * b[13]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[10] ;
	
	
	//_e123ni
	r[13] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_161(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[5] ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[8] ;
	
	
	//_e3ni
	r[8] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[9] = a[0] * b[13]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[10] ;
	
	
	//_e123no
	r[13] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[4] ;
	
	
	//_e12ni
	r[7] = a[0] * b[9] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7] ;
	
	
	//_e1noni
	r[10] = a[0] * b[12]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[10]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_25_163(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2] ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[0] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[5] ;
	
	
	//_e3noni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_164(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5] ;
	
	
	//_e13noni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_25_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_25_166(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2] ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_25_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[25]  * -1 ;
	
	
	//_e1
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[7] ;
	
	
	//_e3
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[29]  * -1 ;
	
	
	//_ni
	r[5] = a[0] * b[30]  * -1 ;
	
	
	//_e12
	r[6] = a[0] * b[3] ;
	
	
	//_e13
	r[7] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[1] ;
	
	
	//_e1no
	r[9] = a[0] * b[18]  * -1 ;
	
	
	//_e2no
	r[10] = a[0] * b[17] ;
	
	
	//_e3no
	r[11] = a[0] * b[16]  * -1 ;
	
	
	//_e1ni
	r[12] = a[0] * b[21]  * -1 ;
	
	
	//_e2ni
	r[13] = a[0] * b[20] ;
	
	
	//_e3ni
	r[14] = a[0] * b[19]  * -1 ;
	
	
	//_noni
	r[15] = a[0] * b[31]  * -1 ;
	
	
	//_e12no
	r[16] = a[0] * b[11] ;
	
	
	//_e13no
	r[17] = a[0] * b[10]  * -1 ;
	
	
	//_e23no
	r[18] = a[0] * b[9] ;
	
	
	//_e12ni
	r[19] = a[0] * b[14] ;
	
	
	//_e13ni
	r[20] = a[0] * b[13]  * -1 ;
	
	
	//_e23ni
	r[21] = a[0] * b[12] ;
	
	
	//_e1noni
	r[22] = a[0] * b[28]  * -1 ;
	
	
	//_e2noni
	r[23] = a[0] * b[27] ;
	
	
	//_e3noni
	r[24] = a[0] * b[26]  * -1 ;
	
	
	//_e123
	r[25] = a[0] * b[0] ;
	
	
	//_e12noni
	r[26] = a[0] * b[24] ;
	
	
	//_e13noni
	r[27] = a[0] * b[23]  * -1 ;
	
	
	//_e23noni
	r[28] = a[0] * b[22] ;
	
	
	//_e123no
	r[29] = a[0] * b[4] ;
	
	
	//_e123ni
	r[30] = a[0] * b[5] ;
	
	
	//_e123noni
	r[31] = a[0] * b[15] ;
	
	
	return r;
}


