
#include "conga_gp_Mnk.h"


double * conga_gp_4_1(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_2(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_3(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_4(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_5(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_4_6(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_7(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[4] ;
	
	
	//_e1noni
	r[2] = a[0] * b[0] ;
	
	
	//_e2noni
	r[3] = a[0] * b[1] ;
	
	
	//_e3noni
	r[4] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9] ;
	
	
	//_e1no
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[6] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8] ;
	
	
	//_e12noni
	r[7] = a[0] * b[0] ;
	
	
	//_e13noni
	r[8] = a[0] * b[1] ;
	
	
	//_e23noni
	r[9] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[3] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_4_10(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_4_11(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[6] ;
	
	
	//_e2ni
	r[4] = a[0] * b[7] ;
	
	
	//_e3ni
	r[5] = a[0] * b[8] ;
	
	
	//_e12noni
	r[6] = a[0] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_12(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_13(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_14(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_15(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_16(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_17(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_18(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_gp_4_19(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3] ;
	
	
	//_e1ni
	r[1] = a[0] * b[0] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1] ;
	
	
	//_e3ni
	r[3] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_21(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3] ;
	
	
	//_e2ni
	r[1] = a[0] * b[4] ;
	
	
	//_e3ni
	r[2] = a[0] * b[5] ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_22(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3] ;
	
	
	//_e1noni
	r[1] = a[0] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[1] ;
	
	
	//_e3noni
	r[3] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_23(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_24(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_25(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_26(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1noni
	r[1] = a[0] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[1] ;
	
	
	//_e3noni
	r[3] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_27(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_28(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_29(double * a, double * b, double *r) { 
	
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

double * conga_gp_4_30(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[1] ;
	
	
	//_e2ni
	r[1] = a[0] * b[2] ;
	
	
	//_e3ni
	r[2] = a[0] * b[3] ;
	
	
	//_noni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1] ;
	
	
	//_noni
	r[1] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_32(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[4] ;
	
	
	//_e2ni
	r[1] = a[0] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[6] ;
	
	
	//_noni
	r[3] = a[0] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[1] ;
	
	
	//_e13noni
	r[5] = a[0] * b[2] ;
	
	
	//_e23noni
	r[6] = a[0] * b[3] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_4_33(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[1] ;
	
	
	//_e13noni
	r[9] = a[0] * b[2] ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	//_e123ni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_gp_4_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4] ;
	
	
	//_e12
	r[1] = a[0] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[6] ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	//_noni
	r[4] = a[0] * b[0] ;
	
	
	//_e12noni
	r[5] = a[0] * b[1] ;
	
	
	//_e13noni
	r[6] = a[0] * b[2] ;
	
	
	//_e23noni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_36(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[1] ;
	
	
	//_e13noni
	r[5] = a[0] * b[2] ;
	
	
	//_e23noni
	r[6] = a[0] * b[3] ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4] ;
	
	
	//_e1ni
	r[1] = a[0] * b[1] ;
	
	
	//_e2ni
	r[2] = a[0] * b[2] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[1] ;
	
	
	//_e13noni
	r[12] = a[0] * b[2] ;
	
	
	//_e23noni
	r[13] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[1] ;
	
	
	//_e13noni
	r[12] = a[0] * b[2] ;
	
	
	//_e23noni
	r[13] = a[0] * b[3] ;
	
	
	//_e123no
	r[14] = a[0] * b[14]  * -1 ;
	
	
	//_e123ni
	r[15] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_gp_4_41(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_42(double * a, double * b, double *r) { 
	
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

double * conga_gp_4_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_44(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e23no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[5] = a[0] * b[5] ;
	
	
	//_e13ni
	r[6] = a[0] * b[6] ;
	
	
	//_e23ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_4_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_46(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[4] ;
	
	
	//_e12no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e23no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[5] = a[0] * b[8] ;
	
	
	//_e13ni
	r[6] = a[0] * b[9] ;
	
	
	//_e23ni
	r[7] = a[0] * b[10] ;
	
	
	//_e1noni
	r[8] = a[0] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[1] ;
	
	
	//_e3noni
	r[10] = a[0] * b[2] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_gp_4_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[2] ;
	
	
	//_e123
	r[14] = a[0] * b[15] ;
	
	
	//_e123noni
	r[15] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_gp_4_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[8] ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[3] ;
	
	
	//_e2ni
	r[8] = a[0] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5] ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_gp_4_49(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[7] ;
	
	
	//_e2ni
	r[4] = a[0] * b[8] ;
	
	
	//_e3ni
	r[5] = a[0] * b[9] ;
	
	
	//_noni
	r[6] = a[0] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[1] ;
	
	
	//_e13noni
	r[8] = a[0] * b[2] ;
	
	
	//_e23noni
	r[9] = a[0] * b[3] ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_gp_4_50(double * a, double * b, double *r) { 
	
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

double * conga_gp_4_51(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_52(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_4_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3] ;
	
	
	//_e12
	r[1] = a[0] * b[4] ;
	
	
	//_e13
	r[2] = a[0] * b[5] ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1ni
	r[4] = a[0] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_4_54(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3] ;
	
	
	//_e12ni
	r[1] = a[0] * b[4] ;
	
	
	//_e13ni
	r[2] = a[0] * b[5] ;
	
	
	//_e23ni
	r[3] = a[0] * b[6] ;
	
	
	//_e1noni
	r[4] = a[0] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[2] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_4_55(double * a, double * b, double *r) { 
	
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

double * conga_gp_4_56(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[2] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_4_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_58(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[7] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e1noni
	r[5] = a[0] * b[0] ;
	
	
	//_e2noni
	r[6] = a[0] * b[1] ;
	
	
	//_e3noni
	r[7] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_59(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5] ;
	
	
	//_e13ni
	r[6] = a[0] * b[6] ;
	
	
	//_e23ni
	r[7] = a[0] * b[7] ;
	
	
	//_e1noni
	r[8] = a[0] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[1] ;
	
	
	//_e3noni
	r[10] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[1] ;
	
	
	//_e13noni
	r[12] = a[0] * b[2] ;
	
	
	//_e23noni
	r[13] = a[0] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_gp_4_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[14] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_4_63(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[8] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_4_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[1] ;
	
	
	//_e13noni
	r[9] = a[0] * b[2] ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[10] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_4_66(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[5] ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_67(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_gp_4_68(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[5] ;
	
	
	//_e1ni
	r[3] = a[0] * b[0] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1] ;
	
	
	//_e3ni
	r[5] = a[0] * b[2] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_4_69(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3] ;
	
	
	//_e2ni
	r[1] = a[0] * b[4] ;
	
	
	//_e3ni
	r[2] = a[0] * b[5] ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_4_70(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3] ;
	
	
	//_e12ni
	r[1] = a[0] * b[4] ;
	
	
	//_e13ni
	r[2] = a[0] * b[5] ;
	
	
	//_e23ni
	r[3] = a[0] * b[6] ;
	
	
	//_e1noni
	r[4] = a[0] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_71(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[11] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[0] * b[0] ;
	
	
	//_e2noni
	r[10] = a[0] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[13] ;
	
	
	//_e123noni
	r[13] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_gp_4_73(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[1] ;
	
	
	//_e123noni
	r[1] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[5] ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_4_75(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[9] ;
	
	
	//_e13
	r[1] = a[0] * b[10] ;
	
	
	//_e23
	r[2] = a[0] * b[11] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_e12noni
	r[9] = a[0] * b[0] ;
	
	
	//_e13noni
	r[10] = a[0] * b[1] ;
	
	
	//_e23noni
	r[11] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[5] ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_4_78(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[8] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e1noni
	r[3] = a[0] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_81(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[5] ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_82(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[8] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_83(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[4] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[2] ;
	
	
	//_e123
	r[10] = a[0] * b[11] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_4_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[1] ;
	
	
	//_e13noni
	r[9] = a[0] * b[2] ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	//_e123no
	r[11] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_87(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e1noni
	r[8] = a[0] * b[0] ;
	
	
	//_e2noni
	r[9] = a[0] * b[1] ;
	
	
	//_e3noni
	r[10] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[1] ;
	
	
	//_e13noni
	r[12] = a[0] * b[2] ;
	
	
	//_e23noni
	r[13] = a[0] * b[3] ;
	
	
	//_e123no
	r[14] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[14] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_4_91(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[8] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_4_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[1] ;
	
	
	//_e13noni
	r[9] = a[0] * b[2] ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[10] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_4_94(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_95(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e1noni
	r[7] = a[0] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[2] ;
	
	
	//_e123
	r[10] = a[0] * b[11] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_gp_4_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_98(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[8] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e1noni
	r[7] = a[0] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_101(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[8] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[2] ;
	
	
	//_e123ni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_4_102(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[4] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_103(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_4_104(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[7] ;
	
	
	//_e13
	r[1] = a[0] * b[8] ;
	
	
	//_e23
	r[2] = a[0] * b[9] ;
	
	
	//_e1no
	r[3] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[0] * b[5] ;
	
	
	//_e3ni
	r[8] = a[0] * b[6] ;
	
	
	//_noni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_105(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[7] ;
	
	
	//_e23ni
	r[5] = a[0] * b[8] ;
	
	
	//_e1noni
	r[6] = a[0] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_4_106(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_gp_4_107(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[8] ;
	
	
	//_e1no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[0] * b[4] ;
	
	
	//_e3ni
	r[8] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_4_108(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[0] * b[4] ;
	
	
	//_e23ni
	r[2] = a[0] * b[5] ;
	
	
	//_e1noni
	r[3] = a[0] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_109(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_110(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[5] ;
	
	
	//_e1ni
	r[3] = a[0] * b[0] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1] ;
	
	
	//_e3ni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_111(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_112(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_113(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_114(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_115(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[5] ;
	
	
	//_e1no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_116(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_gp_4_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_119(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[9] ;
	
	
	//_e13
	r[1] = a[0] * b[10] ;
	
	
	//_e23
	r[2] = a[0] * b[11] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_e12noni
	r[9] = a[0] * b[0] ;
	
	
	//_e13noni
	r[10] = a[0] * b[1] ;
	
	
	//_e23noni
	r[11] = a[0] * b[2] ;
	
	
	//_e123no
	r[12] = a[0] * b[12]  * -1 ;
	
	
	//_e123ni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_4_120(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[7] ;
	
	
	//_e123noni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_4_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[11] ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[0] * b[0] ;
	
	
	//_e2noni
	r[10] = a[0] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_122(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_4_123(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_4_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[3] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_4_125(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9] ;
	
	
	//_noni
	r[7] = a[0] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[1] ;
	
	
	//_e13noni
	r[9] = a[0] * b[2] ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[2] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_gp_4_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[12] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8] ;
	
	
	//_e12noni
	r[10] = a[0] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[1] ;
	
	
	//_e23noni
	r[12] = a[0] * b[2] ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_gp_4_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[3] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[10] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_4_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[12] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8] ;
	
	
	//_e12noni
	r[10] = a[0] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[1] ;
	
	
	//_e23noni
	r[12] = a[0] * b[2] ;
	
	
	//_e123ni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_4_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[2] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_4_133(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[7] ;
	
	
	//_e2ni
	r[4] = a[0] * b[8] ;
	
	
	//_e3ni
	r[5] = a[0] * b[9] ;
	
	
	//_noni
	r[6] = a[0] * b[0] ;
	
	
	//_e12noni
	r[7] = a[0] * b[1] ;
	
	
	//_e13noni
	r[8] = a[0] * b[2] ;
	
	
	//_e23noni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_134(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[7] ;
	
	
	//_e23ni
	r[5] = a[0] * b[8] ;
	
	
	//_e1noni
	r[6] = a[0] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_4_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[2] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_4_136(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[10] ;
	
	
	//_e13
	r[1] = a[0] * b[11] ;
	
	
	//_e23
	r[2] = a[0] * b[12] ;
	
	
	//_e1no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[7] ;
	
	
	//_e2ni
	r[7] = a[0] * b[8] ;
	
	
	//_e3ni
	r[8] = a[0] * b[9] ;
	
	
	//_noni
	r[9] = a[0] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[1] ;
	
	
	//_e13noni
	r[11] = a[0] * b[2] ;
	
	
	//_e23noni
	r[12] = a[0] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_gp_4_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[2] ;
	
	
	//_e123
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_gp_4_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[3] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_4_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[8] ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[3] ;
	
	
	//_e2ni
	r[8] = a[0] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_4_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[12] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8] ;
	
	
	//_e12noni
	r[10] = a[0] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[1] ;
	
	
	//_e23noni
	r[12] = a[0] * b[2] ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_141(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[7] ;
	
	
	//_e23ni
	r[5] = a[0] * b[8] ;
	
	
	//_e1noni
	r[6] = a[0] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e1noni
	r[3] = a[0] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123
	r[6] = a[0] * b[7] ;
	
	
	//_e123noni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_4_143(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[4] ;
	
	
	//_e2ni
	r[1] = a[0] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[6] ;
	
	
	//_noni
	r[3] = a[0] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[1] ;
	
	
	//_e13noni
	r[5] = a[0] * b[2] ;
	
	
	//_e23noni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_144(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_4_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3] ;
	
	
	//_e12
	r[1] = a[0] * b[4] ;
	
	
	//_e13
	r[2] = a[0] * b[5] ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1ni
	r[4] = a[0] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_146(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3] ;
	
	
	//_e13ni
	r[1] = a[0] * b[4] ;
	
	
	//_e23ni
	r[2] = a[0] * b[5] ;
	
	
	//_e1noni
	r[3] = a[0] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_4_147(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[1] ;
	
	
	//_e13noni
	r[5] = a[0] * b[2] ;
	
	
	//_e23noni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_4_148(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_4_149(double * a, double * b, double *r) { 
	
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

double * conga_gp_4_150(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_gp_4_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3] ;
	
	
	//_e12
	r[1] = a[0] * b[4] ;
	
	
	//_e13
	r[2] = a[0] * b[5] ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_4_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[1] ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[5] ;
	
	
	//_e13ni
	r[9] = a[0] * b[6] ;
	
	
	//_e23ni
	r[10] = a[0] * b[7] ;
	
	
	//_e123
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_gp_4_154(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_gp_4_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_156(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[5] ;
	
	
	//_e1no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[7] = a[0] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_4_158(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[7] ;
	
	
	//_e23ni
	r[5] = a[0] * b[8] ;
	
	
	//_e1noni
	r[6] = a[0] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[10] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_4_159(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[10] ;
	
	
	//_e13
	r[1] = a[0] * b[11] ;
	
	
	//_e23
	r[2] = a[0] * b[12] ;
	
	
	//_e1no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[7] ;
	
	
	//_e2ni
	r[7] = a[0] * b[8] ;
	
	
	//_e3ni
	r[8] = a[0] * b[9] ;
	
	
	//_noni
	r[9] = a[0] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[1] ;
	
	
	//_e13noni
	r[11] = a[0] * b[2] ;
	
	
	//_e23noni
	r[12] = a[0] * b[3] ;
	
	
	//_e123ni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_4_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_4_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_gp_4_162(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[10] ;
	
	
	//_e13
	r[1] = a[0] * b[11] ;
	
	
	//_e23
	r[2] = a[0] * b[12] ;
	
	
	//_e1no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[7] ;
	
	
	//_e2ni
	r[7] = a[0] * b[8] ;
	
	
	//_e3ni
	r[8] = a[0] * b[9] ;
	
	
	//_noni
	r[9] = a[0] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[1] ;
	
	
	//_e13noni
	r[11] = a[0] * b[2] ;
	
	
	//_e23noni
	r[12] = a[0] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3] ;
	
	
	//_e12
	r[1] = a[0] * b[4] ;
	
	
	//_e13
	r[2] = a[0] * b[5] ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_gp_4_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_4_165(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_4_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[3] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_gp_4_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[15] ;
	
	
	//_e1
	r[1] = a[0] * b[22] ;
	
	
	//_e2
	r[2] = a[0] * b[23] ;
	
	
	//_e3
	r[3] = a[0] * b[24] ;
	
	
	//_no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12
	r[6] = a[0] * b[26] ;
	
	
	//_e13
	r[7] = a[0] * b[27] ;
	
	
	//_e23
	r[8] = a[0] * b[28] ;
	
	
	//_e1no
	r[9] = a[0] * b[9]  * -1 ;
	
	
	//_e2no
	r[10] = a[0] * b[10]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[11]  * -1 ;
	
	
	//_e1ni
	r[12] = a[0] * b[12] ;
	
	
	//_e2ni
	r[13] = a[0] * b[13] ;
	
	
	//_e3ni
	r[14] = a[0] * b[14] ;
	
	
	//_noni
	r[15] = a[0] * b[0] ;
	
	
	//_e12no
	r[16] = a[0] * b[16]  * -1 ;
	
	
	//_e13no
	r[17] = a[0] * b[17]  * -1 ;
	
	
	//_e23no
	r[18] = a[0] * b[18]  * -1 ;
	
	
	//_e12ni
	r[19] = a[0] * b[19] ;
	
	
	//_e13ni
	r[20] = a[0] * b[20] ;
	
	
	//_e23ni
	r[21] = a[0] * b[21] ;
	
	
	//_e1noni
	r[22] = a[0] * b[1] ;
	
	
	//_e2noni
	r[23] = a[0] * b[2] ;
	
	
	//_e3noni
	r[24] = a[0] * b[3] ;
	
	
	//_e123
	r[25] = a[0] * b[31] ;
	
	
	//_e12noni
	r[26] = a[0] * b[6] ;
	
	
	//_e13noni
	r[27] = a[0] * b[7] ;
	
	
	//_e23noni
	r[28] = a[0] * b[8] ;
	
	
	//_e123no
	r[29] = a[0] * b[29]  * -1 ;
	
	
	//_e123ni
	r[30] = a[0] * b[30] ;
	
	
	//_e123noni
	r[31] = a[0] * b[25] ;
	
	
	return r;
}


