
#include "conga_gp_Pss.h"


double * conga_gp_6_1(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_2(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_3(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_4(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_5(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_6_6(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_7(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[2] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_6_8(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[4] ;
	
	
	//_e23no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[8] ;
	
	
	//_e13ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[6] ;
	
	
	//_e1noni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[0]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_6_9(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[8] ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6] ;
	
	
	//_e1no
	r[3] = a[0] * b[2] ;
	
	
	//_e2no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[0] ;
	
	
	//_e1ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[4] ;
	
	
	//_e3ni
	r[8] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[9] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_11(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[4] ;
	
	
	//_e23no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[8] ;
	
	
	//_e13ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[6] ;
	
	
	//_e1noni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_12(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_13(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_14(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_15(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_16(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2] ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_17(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_18(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_gp_6_19(double * a, double * b, double *r) { 
	
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

double * conga_gp_6_20(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_21(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[5] ;
	
	
	//_e13ni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[3] ;
	
	
	//_e1noni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_22(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[2] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[0] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_23(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[2] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_24(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_25(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_26(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[2] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_27(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[4] ;
	
	
	//_e23no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_28(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2] ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[0] ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_29(double * a, double * b, double *r) { 
	
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

double * conga_gp_6_30(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[1] ;
	
	
	//_e123noni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_31(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[1] ;
	
	
	//_e123noni
	r[1] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_32(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[6] ;
	
	
	//_e13ni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[4] ;
	
	
	//_e1noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[2] ;
	
	
	//_e3noni
	r[6] = a[0] * b[1]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_33(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2] ;
	
	
	//_e23no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[6] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[4] ;
	
	
	//_e1noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[2] ;
	
	
	//_e3noni
	r[9] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[10] = a[0] * b[7] ;
	
	
	//_e123noni
	r[11] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[2] ;
	
	
	//_e3noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[4] ;
	
	
	//_e123noni
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_36(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[7] ;
	
	
	//_e12no
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[2] = a[0] * b[5] ;
	
	
	//_e23no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[2] ;
	
	
	//_e3noni
	r[6] = a[0] * b[1]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_37(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[4] ;
	
	
	//_e123noni
	r[4] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[5] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[9] ;
	
	
	//_e13ni
	r[7] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[7] ;
	
	
	//_e1noni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[2] ;
	
	
	//_e3noni
	r[11] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[12] = a[0] * b[10] ;
	
	
	//_e123noni
	r[13] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_39(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2] ;
	
	
	//_e23no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[4] ;
	
	
	//_e123noni
	r[4] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[14] ;
	
	
	//_ni
	r[4] = a[0] * b[15]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[9] ;
	
	
	//_e13ni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7] ;
	
	
	//_e1noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[2] ;
	
	
	//_e3noni
	r[13] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[10] ;
	
	
	//_e123noni
	r[15] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_41(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3] ;
	
	
	//_e2no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[1] ;
	
	
	//_e123no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_42(double * a, double * b, double *r) { 
	
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

double * conga_gp_6_43(double * a, double * b, double *r) { 
	
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

double * conga_gp_6_44(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[4] ;
	
	
	//_e2no
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[6] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_6_45(double * a, double * b, double *r) { 
	
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

double * conga_gp_6_46(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[7] ;
	
	
	//_e2no
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5] ;
	
	
	//_e1ni
	r[3] = a[0] * b[10]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[9] ;
	
	
	//_e3ni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[2] ;
	
	
	//_e13noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[0] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_6_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[15]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[15] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_6_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[5] ;
	
	
	//_e13ni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[3] ;
	
	
	//_e123
	r[11] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_6_49(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[10] ;
	
	
	//_ni
	r[1] = a[0] * b[11]  * -1 ;
	
	
	//_e12no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[3] = a[0] * b[5] ;
	
	
	//_e23no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[5] = a[0] * b[9] ;
	
	
	//_e13ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[7] ;
	
	
	//_e1noni
	r[8] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[2] ;
	
	
	//_e3noni
	r[10] = a[0] * b[1]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_50(double * a, double * b, double *r) { 
	
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

double * conga_gp_6_51(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3] ;
	
	
	//_e12no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[2] = a[0] * b[1] ;
	
	
	//_e23no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_52(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0] ;
	
	
	//_e123
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_54(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[2] ;
	
	
	//_e13noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_55(double * a, double * b, double *r) { 
	
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

double * conga_gp_6_56(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[6] ;
	
	
	//_e2no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[4] ;
	
	
	//_noni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[2] ;
	
	
	//_e13noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_57(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_58(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[7] ;
	
	
	//_e13
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_6_59(double * a, double * b, double *r) { 
	
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

double * conga_gp_6_60(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[10] ;
	
	
	//_e13
	r[1] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8] ;
	
	
	//_e1ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[6] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_6_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[14]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[9] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7] ;
	
	
	//_e1noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[2] ;
	
	
	//_e3noni
	r[12] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[10] ;
	
	
	//_e123noni
	r[14] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[12] ;
	
	
	//_e13
	r[2] = a[0] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4] ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[5] = a[0] * b[5] ;
	
	
	//_e13ni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[1] ;
	
	
	//_e3noni
	r[10] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[5] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[2] ;
	
	
	//_e3noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[7] ;
	
	
	//_e123noni
	r[10] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[5] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_noni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[2] ;
	
	
	//_e13noni
	r[9] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_e1noni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_67(double * a, double * b, double *r) { 
	
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
	
	
	//_e123ni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_69(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[5] ;
	
	
	//_e13ni
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_70(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_71(double * a, double * b, double *r) { 
	
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

double * conga_gp_6_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[5] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[0] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[12]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e1noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[1] ;
	
	
	//_e3noni
	r[7] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[6] ;
	
	
	//_e1noni
	r[9] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_76(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[8] ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6] ;
	
	
	//_e1ni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	//_e1noni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_79(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_80(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2] ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4] ;
	
	
	//_noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[2] ;
	
	
	//_e13noni
	r[9] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[0] ;
	
	
	//_e123no
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11] ;
	
	
	//_e12no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[2] ;
	
	
	//_e3noni
	r[9] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[10] = a[0] * b[7] ;
	
	
	//_e123noni
	r[11] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_86(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2] ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_88(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[10] ;
	
	
	//_e13
	r[1] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8] ;
	
	
	//_e1no
	r[3] = a[0] * b[7] ;
	
	
	//_e2no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_6_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[14] ;
	
	
	//_e12no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[9] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7] ;
	
	
	//_e1noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[2] ;
	
	
	//_e3noni
	r[12] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[10] ;
	
	
	//_e123noni
	r[14] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[12] ;
	
	
	//_e13
	r[2] = a[0] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4] ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e1noni
	r[8] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[1] ;
	
	
	//_e3noni
	r[10] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[2] ;
	
	
	//_e3noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[7] ;
	
	
	//_e123noni
	r[10] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[2] ;
	
	
	//_e13noni
	r[9] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_94(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[6] ;
	
	
	//_e2no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[4] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_95(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6] ;
	
	
	//_e12no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[2] = a[0] * b[4] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	//_e1ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[2] ;
	
	
	//_e13noni
	r[9] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[0] ;
	
	
	//_e123ni
	r[11] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_97(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[9] ;
	
	
	//_e13
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[7] ;
	
	
	//_e1no
	r[3] = a[0] * b[6] ;
	
	
	//_e2no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4] ;
	
	
	//_e12noni
	r[6] = a[0] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_99(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[8] ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6] ;
	
	
	//_e1no
	r[3] = a[0] * b[5] ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[3] ;
	
	
	//_e12noni
	r[6] = a[0] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_100(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[9] ;
	
	
	//_e13
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[7] ;
	
	
	//_e1ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[5] ;
	
	
	//_e3ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[0] ;
	
	
	//_e123ni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[5] ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1 ;
	
	
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

double * conga_gp_6_103(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[4] ;
	
	
	//_e13
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_6_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[2] ;
	
	
	//_e23no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[4] ;
	
	
	//_e123noni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[5] ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[2] ;
	
	
	//_e13noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_106(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3] ;
	
	
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

double * conga_gp_6_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[5] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_108(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[4] ;
	
	
	//_e3ni
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_109(double * a, double * b, double *r) { 
	
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

double * conga_gp_6_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[2] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_111(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_112(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_113(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_114(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1] ;
	
	
	//_e123no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_116(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_117(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2] ;
	
	
	//_e23no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[7] ;
	
	
	//_e123noni
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_118(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[13] ;
	
	
	//_e13
	r[1] = a[0] * b[12]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[11] ;
	
	
	//_e1no
	r[3] = a[0] * b[7] ;
	
	
	//_e2no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[9] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[2] ;
	
	
	//_e13noni
	r[10] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[13] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_6_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[12] ;
	
	
	//_ni
	r[4] = a[0] * b[13]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[6] ;
	
	
	//_e1noni
	r[11] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2] ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_121(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[11] ;
	
	
	//_e13
	r[1] = a[0] * b[10]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[9] ;
	
	
	//_e1no
	r[3] = a[0] * b[5] ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[6]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[2] ;
	
	
	//_e13noni
	r[10] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_122(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_123(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2] ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_124(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[8] ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6] ;
	
	
	//_e1no
	r[3] = a[0] * b[2] ;
	
	
	//_e2no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[0] ;
	
	
	//_e1ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[4] ;
	
	
	//_e3ni
	r[8] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_126(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1no
	r[3] = a[0] * b[2] ;
	
	
	//_e2no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_127(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5] ;
	
	
	//_e23no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[9] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[7] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[2] ;
	
	
	//_e3noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[10] ;
	
	
	//_e123noni
	r[10] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_128(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[13] ;
	
	
	//_e13
	r[1] = a[0] * b[12]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[11] ;
	
	
	//_e1no
	r[3] = a[0] * b[7] ;
	
	
	//_e2no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[9] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_noni
	r[9] = a[0] * b[14]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[2] ;
	
	
	//_e13noni
	r[11] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_6_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[6] ;
	
	
	//_e1noni
	r[11] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[0]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_6_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[2] ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8] ;
	
	
	//_e13ni
	r[8] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[6] ;
	
	
	//_e1noni
	r[10] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[0]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_6_132(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[12] ;
	
	
	//_e13
	r[1] = a[0] * b[11]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[10] ;
	
	
	//_e1no
	r[3] = a[0] * b[6] ;
	
	
	//_e2no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4] ;
	
	
	//_e1ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[8] ;
	
	
	//_e3ni
	r[8] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[9] = a[0] * b[13]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[2] ;
	
	
	//_e13noni
	r[11] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_133(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5] ;
	
	
	//_e23no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[9] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[7] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[2] ;
	
	
	//_e3noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_134(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[5] ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[3] ;
	
	
	//_e1ni
	r[3] = a[0] * b[8]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[7] ;
	
	
	//_e3ni
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[2] ;
	
	
	//_e13noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_135(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[12] ;
	
	
	//_e13
	r[1] = a[0] * b[11]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[10] ;
	
	
	//_e1no
	r[3] = a[0] * b[6] ;
	
	
	//_e2no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4] ;
	
	
	//_e1ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[8] ;
	
	
	//_e3ni
	r[8] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[9] = a[0] * b[13]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[2] ;
	
	
	//_e13noni
	r[11] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[9] ;
	
	
	//_e13ni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7] ;
	
	
	//_e1noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[2] ;
	
	
	//_e3noni
	r[13] = a[0] * b[1]  * -1 ;
	
	
	//_e123noni
	r[14] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[2] ;
	
	
	//_e13noni
	r[11] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_6_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[2] ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[5] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_6_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[13] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8] ;
	
	
	//_e13ni
	r[8] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[6] ;
	
	
	//_e1noni
	r[10] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[0]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_6_141(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[5] ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[3] ;
	
	
	//_e1ni
	r[3] = a[0] * b[8]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[7] ;
	
	
	//_e3ni
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
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

double * conga_gp_6_143(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[6] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[4] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[2] ;
	
	
	//_e3noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_144(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_gp_6_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[2] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[0] ;
	
	
	//_e123
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_146(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[4] ;
	
	
	//_e3ni
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[2] ;
	
	
	//_e13noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_147(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5] ;
	
	
	//_e23no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[2] ;
	
	
	//_e3noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_148(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[5] ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[3] ;
	
	
	//_noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[2] ;
	
	
	//_e13noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_149(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3] ;
	
	
	//_e1noni
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[2] = a[0] * b[1] ;
	
	
	//_e3noni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_150(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[5] ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[3] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4] ;
	
	
	//_e1no
	r[4] = a[0] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1] ;
	
	
	//_e123no
	r[7] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_6_154(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6] ;
	
	
	//_ni
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e12no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[3] = a[0] * b[1] ;
	
	
	//_e23no
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[5] = a[0] * b[5] ;
	
	
	//_e13ni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_155(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1] ;
	
	
	//_e123no
	r[6] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[2] ;
	
	
	//_e23no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[4] ;
	
	
	//_e123
	r[9] = a[0] * b[7] ;
	
	
	//_e123noni
	r[10] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[5] ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[2] ;
	
	
	//_e13noni
	r[9] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[9] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7] ;
	
	
	//_e1noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[2] ;
	
	
	//_e3noni
	r[12] = a[0] * b[1]  * -1 ;
	
	
	//_e123noni
	r[13] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[12] ;
	
	
	//_e13
	r[2] = a[0] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4] ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[2] ;
	
	
	//_e13noni
	r[11] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[12] ;
	
	
	//_e13
	r[2] = a[0] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4] ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[2] ;
	
	
	//_e13noni
	r[11] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[0] ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[13] ;
	
	
	//_e12no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[9] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7] ;
	
	
	//_e1noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[2] ;
	
	
	//_e3noni
	r[12] = a[0] * b[1]  * -1 ;
	
	
	//_e123noni
	r[13] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_6_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[2] ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_6_165(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2] ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_6_166(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_6_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[31]  * -1 ;
	
	
	//_e1
	r[1] = a[0] * b[28]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[27] ;
	
	
	//_e3
	r[3] = a[0] * b[26]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[29] ;
	
	
	//_ni
	r[5] = a[0] * b[30]  * -1 ;
	
	
	//_e12
	r[6] = a[0] * b[24] ;
	
	
	//_e13
	r[7] = a[0] * b[23]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[22] ;
	
	
	//_e1no
	r[9] = a[0] * b[18] ;
	
	
	//_e2no
	r[10] = a[0] * b[17]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[16] ;
	
	
	//_e1ni
	r[12] = a[0] * b[21]  * -1 ;
	
	
	//_e2ni
	r[13] = a[0] * b[20] ;
	
	
	//_e3ni
	r[14] = a[0] * b[19]  * -1 ;
	
	
	//_noni
	r[15] = a[0] * b[25]  * -1 ;
	
	
	//_e12no
	r[16] = a[0] * b[11]  * -1 ;
	
	
	//_e13no
	r[17] = a[0] * b[10] ;
	
	
	//_e23no
	r[18] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[19] = a[0] * b[14] ;
	
	
	//_e13ni
	r[20] = a[0] * b[13]  * -1 ;
	
	
	//_e23ni
	r[21] = a[0] * b[12] ;
	
	
	//_e1noni
	r[22] = a[0] * b[8]  * -1 ;
	
	
	//_e2noni
	r[23] = a[0] * b[7] ;
	
	
	//_e3noni
	r[24] = a[0] * b[6]  * -1 ;
	
	
	//_e123
	r[25] = a[0] * b[15] ;
	
	
	//_e12noni
	r[26] = a[0] * b[3] ;
	
	
	//_e13noni
	r[27] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[28] = a[0] * b[1] ;
	
	
	//_e123no
	r[29] = a[0] * b[4]  * -1 ;
	
	
	//_e123ni
	r[30] = a[0] * b[5] ;
	
	
	//_e123noni
	r[31] = a[0] * b[0] ;
	
	
	return r;
}


