
#include "conga_gp_Hyp_Pss.h"


double * conga_gp_116_1(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	//_e123ni
	r[1] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_2(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e123noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_3(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[1] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_4(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	//_e123ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_5(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e123noni
	r[1] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_6(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_7(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[0]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_8(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e1no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[1] ;
	
	
	//_e3no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[1] ;
	
	
	//_e3ni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e13noni
	r[10] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e123no
	r[12] = a[0] * b[9] ;
	
	
	//_e123ni
	r[13] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[1] * b[9] ;
	
	
	//_e12no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[8] ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6] ;
	
	
	//_e1noni
	r[11] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e2noni
	r[12] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[2] ;
	
	
	//_e2ni
	r[5] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[6] = a[1] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_11(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e1no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[1] ;
	
	
	//_e3no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[1] ;
	
	
	//_e3ni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e13noni
	r[10] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_12(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_13(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_e1noni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_14(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_15(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[2] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[0] ;
	
	
	//_e12noni
	r[3] = a[1] * b[2] ;
	
	
	//_e13noni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[0] ;
	
	
	//_e1noni
	r[3] = a[1] * b[2] ;
	
	
	//_e2noni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_17(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[5] ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[3] ;
	
	
	//_e1noni
	r[9] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[2] ;
	
	
	//_e2ni
	r[5] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[6] = a[1] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_20(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3] ;
	
	
	//_e123ni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_21(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[1] ;
	
	
	//_e3no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[1] ;
	
	
	//_e3ni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[4] ;
	
	
	//_e23noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_22(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[0]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_23(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_24(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1] ;
	
	
	//_e3ni
	r[5] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_25(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_26(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[0]  * -1 ;
	
	
	//_e123
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_27(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[5] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[3] ;
	
	
	//_e1no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[1] ;
	
	
	//_e3no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[1] ;
	
	
	//_e3ni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[9] = a[1] * b[5] ;
	
	
	//_e13noni
	r[10] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[0] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3] ;
	
	
	//_e1noni
	r[5] = a[1] * b[2] ;
	
	
	//_e2noni
	r[6] = a[1] * b[1]  * -1 ;
	
	
	//_e3noni
	r[7] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_29(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[2] ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[3]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[2] ;
	
	
	//_e3ni
	r[5] = a[1] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[0] ;
	
	
	//_e123ni
	r[7] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_30(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[2] ;
	
	
	//_e23noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[0] ;
	
	
	//_e123ni
	r[7] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_31(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  + a[0] * b[1] ;
	
	
	//_e123ni
	r[1] = a[1] * b[0]  + a[1] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[2] ;
	
	
	//_e3ni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[7] ;
	
	
	//_e12noni
	r[11] = a[0] * b[6]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[5] ;
	
	
	//_e23noni
	r[13] = a[0] * b[4]  * -1 ;
	
	
	//_e123no
	r[14] = a[0] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_33(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[1] ;
	
	
	//_e12noni
	r[3] = a[1] * b[3] ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[1] ;
	
	
	//_e123no
	r[6] = a[0] * b[0] ;
	
	
	//_e123ni
	r[7] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[0] * b[9] ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[2]  + a[1] * b[9]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[1]  * -1  + a[1] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[11] ;
	
	
	//_e12noni
	r[11] = a[0] * b[6]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[5] ;
	
	
	//_e23noni
	r[13] = a[0] * b[4]  * -1 ;
	
	
	//_e123no
	r[14] = a[0] * b[0]  + a[0] * b[7] ;
	
	
	//_e123ni
	r[15] = a[1] * b[0]  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_35(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1  + a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[2]  + a[0] * b[6] ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  * -1  + a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[3]  * -1  + a[1] * b[7] ;
	
	
	//_e2ni
	r[4] = a[1] * b[2]  + a[1] * b[6]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[1]  * -1  + a[1] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[0]  + a[0] * b[4] ;
	
	
	//_e123ni
	r[7] = a[1] * b[0]  + a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[4] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[2] ;
	
	
	//_e3ni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_noni
	r[10] = a[1] * b[7]  * -1 ;
	
	
	//_e12noni
	r[11] = a[1] * b[6] ;
	
	
	//_e13noni
	r[12] = a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[13] = a[1] * b[4] ;
	
	
	//_e123no
	r[14] = a[0] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_37(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[2] ;
	
	
	//_e23noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[0]  + a[0] * b[4] ;
	
	
	//_e123ni
	r[7] = a[1] * b[0]  + a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_38(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1  + a[0] * b[13]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[2]  + a[0] * b[12] ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  * -1  + a[0] * b[11]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1  + a[1] * b[13] ;
	
	
	//_e2ni
	r[7] = a[1] * b[2]  + a[1] * b[12]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[1]  * -1  + a[1] * b[11] ;
	
	
	//_e12noni
	r[9] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[10] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123no
	r[12] = a[0] * b[0]  + a[0] * b[10] ;
	
	
	//_e123ni
	r[13] = a[1] * b[0]  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_39(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[1] ;
	
	
	//_e12noni
	r[3] = a[1] * b[3] ;
	
	
	//_e13noni
	r[4] = a[1] * b[2]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[1] ;
	
	
	//_e123no
	r[6] = a[0] * b[0]  + a[0] * b[4] ;
	
	
	//_e123ni
	r[7] = a[1] * b[0]  + a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[15]  * -1  + a[1] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[0] * b[13]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[0] * b[12] ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  * -1  + a[0] * b[11]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[1] * b[13] ;
	
	
	//_e2ni
	r[8] = a[1] * b[2]  + a[1] * b[12]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[1]  * -1  + a[1] * b[11] ;
	
	
	//_noni
	r[10] = a[0] * b[15]  + a[1] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[12] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123no
	r[14] = a[0] * b[0]  + a[0] * b[10] ;
	
	
	//_e123ni
	r[15] = a[1] * b[0]  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[1] ;
	
	
	//_e1noni
	r[3] = a[1] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[2]  * -1 ;
	
	
	//_e3noni
	r[5] = a[1] * b[1] ;
	
	
	//_e123
	r[6] = a[1] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_42(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[2] ;
	
	
	//_e3noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_43(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[2] ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[3] ;
	
	
	//_e2ni
	r[4] = a[1] * b[2]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[1] ;
	
	
	//_e123no
	r[6] = a[0] * b[0] ;
	
	
	//_e123ni
	r[7] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e2noni
	r[4] = a[0] * b[6]  + a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e123
	r[6] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_45(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3] ;
	
	
	//_ni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e12no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[3] = a[0] * b[1] ;
	
	
	//_e23no
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[5] = a[1] * b[2] ;
	
	
	//_e13ni
	r[6] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[7] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10]  + a[1] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[11] ;
	
	
	//_ni
	r[4] = a[1] * b[11] ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[1] ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[11] = a[0] * b[10]  * -1  + a[1] * b[7] ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[1] * b[6]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e123
	r[14] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10]  + a[1] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[14]  + a[0] * b[15] ;
	
	
	//_ni
	r[4] = a[1] * b[14]  + a[1] * b[15]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[13] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[11] ;
	
	
	//_e1noni
	r[11] = a[0] * b[10]  * -1  + a[1] * b[7] ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[1] * b[6]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e123
	r[14] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[11]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8] ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[9] ;
	
	
	//_e2ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[7] ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[6] ;
	
	
	//_e123ni
	r[15] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[11]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[2] ;
	
	
	//_e3ni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[12] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123no
	r[14] = a[0] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_50(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[3] ;
	
	
	//_e12noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e13noni
	r[6] = a[0] * b[1] ;
	
	
	//_e23noni
	r[7] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_51(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[2] ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[0] ;
	
	
	//_noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[5] = a[1] * b[2] ;
	
	
	//_e13noni
	r[6] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[7] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[6] ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[2] ;
	
	
	//_e3noni
	r[13] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_53(double * a, double * b, double *r) { 
	
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
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[4] ;
	
	
	//_noni
	r[10] = a[0] * b[7] ;
	
	
	//_e12noni
	r[11] = a[0] * b[2]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[1] ;
	
	
	//_e23noni
	r[13] = a[0] * b[0]  * -1 ;
	
	
	//_e123no
	r[14] = a[0] * b[3] ;
	
	
	//_e123ni
	r[15] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7] ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[1] ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[11] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[5] ;
	
	
	//_e3noni
	r[13] = a[0] * b[4]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_55(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3] ;
	
	
	//_ni
	r[1] = a[1] * b[3] ;
	
	
	//_e12no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[3] = a[0] * b[1] ;
	
	
	//_e23no
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[6] = a[1] * b[1] ;
	
	
	//_e23ni
	r[7] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7] ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[1] ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[6] ;
	
	
	//_e2noni
	r[12] = a[1] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[1] * b[4] ;
	
	
	//_e123
	r[14] = a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_57(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  * -1  + a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  + a[0] * b[5] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1  + a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[1] * b[2]  * -1  + a[1] * b[6] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1]  + a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[0]  * -1  + a[1] * b[4] ;
	
	
	//_e123
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_58(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  * -1  + a[0] * b[7]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  + a[0] * b[6] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1  + a[0] * b[5]  * -1 ;
	
	
	//_e12ni
	r[3] = a[1] * b[2]  * -1  + a[1] * b[7] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1]  + a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[0]  * -1  + a[1] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e1noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[1] ;
	
	
	//_e3noni
	r[7] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  + a[0] * b[9] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[2]  * -1  + a[1] * b[10] ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  + a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[0]  * -1  + a[1] * b[8] ;
	
	
	//_e1noni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[6] ;
	
	
	//_e3noni
	r[11] = a[0] * b[5]  * -1 ;
	
	
	//_e123
	r[12] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[0] * b[13]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[0] * b[12] ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  * -1  + a[0] * b[11]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[1] * b[13] ;
	
	
	//_e2ni
	r[8] = a[1] * b[2]  + a[1] * b[12]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[1]  * -1  + a[1] * b[11] ;
	
	
	//_noni
	r[10] = a[0] * b[14] ;
	
	
	//_e12noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[12] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123no
	r[14] = a[0] * b[0]  + a[0] * b[10] ;
	
	
	//_e123ni
	r[15] = a[1] * b[0]  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[13]  + a[0] * b[14] ;
	
	
	//_ni
	r[4] = a[1] * b[13]  + a[1] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[12]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[12] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e2noni
	r[12] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123
	r[14] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[0] * b[7] ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1  + a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[2]  * -1  + a[1] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[1]  + a[1] * b[7]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[0]  * -1  + a[1] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[4] ;
	
	
	//_e23noni
	r[13] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_64(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[4] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[2]  + a[0] * b[9] ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1  + a[1] * b[10] ;
	
	
	//_e2ni
	r[7] = a[1] * b[2]  + a[1] * b[9]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[1]  * -1  + a[1] * b[8] ;
	
	
	//_e12noni
	r[9] = a[1] * b[6] ;
	
	
	//_e13noni
	r[10] = a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[4] ;
	
	
	//_e123no
	r[12] = a[0] * b[0]  + a[0] * b[7] ;
	
	
	//_e123ni
	r[13] = a[1] * b[0]  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[9]  + a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  + a[1] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[8] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[6] ;
	
	
	//_e1noni
	r[11] = a[1] * b[5] ;
	
	
	//_e2noni
	r[12] = a[1] * b[4]  * -1 ;
	
	
	//_e3noni
	r[13] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1  + a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[0] * b[4] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1  + a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[2]  * -1  + a[1] * b[5] ;
	
	
	//_e2ni
	r[5] = a[1] * b[1]  + a[1] * b[4]  * -1 ;
	
	
	//_e3ni
	r[6] = a[1] * b[0]  * -1  + a[1] * b[3] ;
	
	
	//_noni
	r[7] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1] ;
	
	
	//_e12no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[5] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[6] ;
	
	
	//_e13ni
	r[7] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[4] ;
	
	
	//_e1noni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[2] ;
	
	
	//_e3noni
	r[11] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[12] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[13] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_68(double * a, double * b, double *r) { 
	
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
	
	
	//_e1ni
	r[7] = a[1] * b[5] ;
	
	
	//_e2ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[3] ;
	
	
	//_noni
	r[10] = a[0] * b[6] ;
	
	
	//_e12noni
	r[11] = a[0] * b[2]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[1] ;
	
	
	//_e23noni
	r[13] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1] ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[1] ;
	
	
	//_e3ni
	r[9] = a[1] * b[0]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6] ;
	
	
	//_e12noni
	r[11] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[4] ;
	
	
	//_e23noni
	r[13] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[1] ;
	
	
	//_e23ni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[5] ;
	
	
	//_e3noni
	r[11] = a[0] * b[4]  * -1 ;
	
	
	//_e123
	r[12] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3] ;
	
	
	//_e1noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[1] ;
	
	
	//_e3noni
	r[7] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[12]  + a[0] * b[13] ;
	
	
	//_ni
	r[4] = a[1] * b[12]  + a[1] * b[13]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[11] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[9] ;
	
	
	//_e1noni
	r[11] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e2noni
	r[12] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_73(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[0] * b[1] ;
	
	
	//_ni
	r[1] = a[1] * b[0]  + a[1] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1  + a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[0] * b[4] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1  + a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[2]  * -1  + a[1] * b[5] ;
	
	
	//_e2ni
	r[5] = a[1] * b[1]  + a[1] * b[4]  * -1 ;
	
	
	//_e3ni
	r[6] = a[1] * b[0]  * -1  + a[1] * b[3] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_75(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e1no
	r[3] = a[0] * b[2]  * -1  + a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[1]  + a[0] * b[10] ;
	
	
	//_e3no
	r[5] = a[0] * b[0]  * -1  + a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[2]  * -1  + a[1] * b[11] ;
	
	
	//_e2ni
	r[7] = a[1] * b[1]  + a[1] * b[10]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[0]  * -1  + a[1] * b[9] ;
	
	
	//_e12noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e13noni
	r[10] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  + a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1  + a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[2]  * -1  + a[1] * b[8] ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  + a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[0]  * -1  + a[1] * b[6] ;
	
	
	//_e1noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[4] ;
	
	
	//_e3noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1  + a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[0] * b[4] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1  + a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[2]  * -1  + a[1] * b[5] ;
	
	
	//_e2ni
	r[5] = a[1] * b[1]  + a[1] * b[4]  * -1 ;
	
	
	//_e3ni
	r[6] = a[1] * b[0]  * -1  + a[1] * b[3] ;
	
	
	//_noni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_116_78(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1no
	r[3] = a[0] * b[2]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[1]  + a[0] * b[7] ;
	
	
	//_e3no
	r[5] = a[0] * b[0]  * -1  + a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[2]  * -1  + a[1] * b[8] ;
	
	
	//_e2ni
	r[7] = a[1] * b[1]  + a[1] * b[7]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[0]  * -1  + a[1] * b[6] ;
	
	
	//_e12noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[4] ;
	
	
	//_e23noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_79(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  * -1  + a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  + a[0] * b[5] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1  + a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[1] * b[2]  * -1  + a[1] * b[6] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1]  + a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[0]  * -1  + a[1] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_80(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  * -1  + a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  + a[0] * b[4] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1  + a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[3] = a[1] * b[2]  * -1  + a[1] * b[5] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1]  + a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[0]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_81(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2]  * -1  + a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  + a[0] * b[4] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1  + a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[2]  * -1  + a[1] * b[5] ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  + a[1] * b[4]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[0]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_82(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[5] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[3] ;
	
	
	//_e1no
	r[3] = a[0] * b[2]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[1]  + a[0] * b[7] ;
	
	
	//_e3no
	r[5] = a[0] * b[0]  * -1  + a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[2]  * -1  + a[1] * b[8] ;
	
	
	//_e2ni
	r[7] = a[1] * b[1]  + a[1] * b[7]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[0]  * -1  + a[1] * b[6] ;
	
	
	//_e12noni
	r[9] = a[1] * b[5] ;
	
	
	//_e13noni
	r[10] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[0] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[0] * b[4] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  + a[1] * b[4]  * -1 ;
	
	
	//_e1noni
	r[5] = a[1] * b[2] ;
	
	
	//_e2noni
	r[6] = a[1] * b[1]  * -1 ;
	
	
	//_e3noni
	r[7] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[0] * b[11] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  + a[1] * b[11]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[9]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[8] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[9] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[7] ;
	
	
	//_e1noni
	r[11] = a[1] * b[6] ;
	
	
	//_e2noni
	r[12] = a[1] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[1] * b[4] ;
	
	
	//_e123
	r[14] = a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[4] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[0] * b[9] ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[2]  + a[1] * b[9]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[1]  * -1  + a[1] * b[8] ;
	
	
	//_noni
	r[10] = a[1] * b[11]  * -1 ;
	
	
	//_e12noni
	r[11] = a[1] * b[6] ;
	
	
	//_e13noni
	r[12] = a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[13] = a[1] * b[4] ;
	
	
	//_e123no
	r[14] = a[0] * b[0]  + a[0] * b[7] ;
	
	
	//_e123ni
	r[15] = a[1] * b[0]  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_86(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[2] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[0] ;
	
	
	//_e12noni
	r[3] = a[1] * b[2] ;
	
	
	//_e13noni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[3] ;
	
	
	//_e123ni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[0] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e1noni
	r[5] = a[1] * b[2] ;
	
	
	//_e2noni
	r[6] = a[1] * b[1]  * -1 ;
	
	
	//_e3noni
	r[7] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  + a[0] * b[9] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[2]  * -1  + a[1] * b[10] ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  + a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[0]  * -1  + a[1] * b[8] ;
	
	
	//_e1noni
	r[9] = a[1] * b[7] ;
	
	
	//_e2noni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	//_e3noni
	r[11] = a[1] * b[5] ;
	
	
	//_e123
	r[12] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[0] * b[13]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[0] * b[12] ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  * -1  + a[0] * b[11]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[1] * b[13] ;
	
	
	//_e2ni
	r[8] = a[1] * b[2]  + a[1] * b[12]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[1]  * -1  + a[1] * b[11] ;
	
	
	//_noni
	r[10] = a[1] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[12] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123no
	r[14] = a[0] * b[0]  + a[0] * b[10] ;
	
	
	//_e123ni
	r[15] = a[1] * b[0]  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[13]  + a[0] * b[14] ;
	
	
	//_ni
	r[4] = a[1] * b[13]  + a[1] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[12]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[12] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e2noni
	r[12] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123
	r[14] = a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[5] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[0] * b[7] ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1  + a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[2]  * -1  + a[1] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[1]  + a[1] * b[7]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[0]  * -1  + a[1] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1 ;
	
	
	//_e12noni
	r[11] = a[1] * b[5] ;
	
	
	//_e13noni
	r[12] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_92(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[2]  + a[0] * b[9] ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1  + a[1] * b[10] ;
	
	
	//_e2ni
	r[7] = a[1] * b[2]  + a[1] * b[9]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[1]  * -1  + a[1] * b[8] ;
	
	
	//_e12noni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[5] ;
	
	
	//_e23noni
	r[11] = a[0] * b[4]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[0]  + a[0] * b[7] ;
	
	
	//_e123ni
	r[13] = a[1] * b[0]  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[9]  + a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  + a[1] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[8] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[6] ;
	
	
	//_e1noni
	r[11] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[4] ;
	
	
	//_e3noni
	r[13] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[4] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[1] ;
	
	
	//_e23ni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[9] = a[1] * b[6] ;
	
	
	//_e2noni
	r[10] = a[1] * b[5]  * -1 ;
	
	
	//_e3noni
	r[11] = a[1] * b[4] ;
	
	
	//_e123
	r[12] = a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[5] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1] ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[1] ;
	
	
	//_e3ni
	r[9] = a[1] * b[0]  * -1 ;
	
	
	//_noni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	//_e12noni
	r[11] = a[1] * b[5] ;
	
	
	//_e13noni
	r[12] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[0] * b[11] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  + a[1] * b[11]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[9]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[8] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[9] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[7] ;
	
	
	//_e1noni
	r[11] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[5] ;
	
	
	//_e3noni
	r[13] = a[0] * b[4]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[4] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1  + a[0] * b[9]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  + a[0] * b[8] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1  + a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[2]  * -1  + a[1] * b[9] ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[0]  * -1  + a[1] * b[7] ;
	
	
	//_e1noni
	r[9] = a[1] * b[6] ;
	
	
	//_e2noni
	r[10] = a[1] * b[5]  * -1 ;
	
	
	//_e3noni
	r[11] = a[1] * b[4] ;
	
	
	//_e123
	r[12] = a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[5] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[0] * b[7] ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1  + a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[2]  * -1  + a[1] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[1]  + a[1] * b[7]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[0]  * -1  + a[1] * b[6] ;
	
	
	//_noni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	//_e12noni
	r[11] = a[1] * b[5] ;
	
	
	//_e13noni
	r[12] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[3] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  + a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1  + a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[2]  * -1  + a[1] * b[8] ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  + a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[0]  * -1  + a[1] * b[6] ;
	
	
	//_e1noni
	r[9] = a[1] * b[5] ;
	
	
	//_e2noni
	r[10] = a[1] * b[4]  * -1 ;
	
	
	//_e3noni
	r[11] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1  + a[0] * b[9]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  + a[0] * b[8] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1  + a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[2]  * -1  + a[1] * b[9] ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[0]  * -1  + a[1] * b[7] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[5] ;
	
	
	//_e3noni
	r[11] = a[0] * b[4]  * -1 ;
	
	
	//_e123
	r[12] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1  + a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[0] * b[7] ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1  + a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[2]  * -1  + a[1] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[1]  + a[1] * b[7]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[0]  * -1  + a[1] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[9] ;
	
	
	//_e12noni
	r[11] = a[0] * b[5]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[4] ;
	
	
	//_e23noni
	r[13] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[0] * b[4] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  + a[1] * b[4]  * -1 ;
	
	
	//_e1noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[1] ;
	
	
	//_e3noni
	r[7] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_103(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[3] ;
	
	
	//_e23no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12ni
	r[3] = a[1] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[2] ;
	
	
	//_e123
	r[6] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_104(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e1no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[8] ;
	
	
	//_e3no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[9] ;
	
	
	//_e2ni
	r[7] = a[1] * b[8]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[7] ;
	
	
	//_e12noni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[10] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e123no
	r[12] = a[0] * b[0] ;
	
	
	//_e123ni
	r[13] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[1] ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[11] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e2noni
	r[12] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_106(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[1] ;
	
	
	//_e3ni
	r[6] = a[1] * b[0]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_107(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[7] ;
	
	
	//_e3no
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[8] ;
	
	
	//_e2ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[6] ;
	
	
	//_e12noni
	r[9] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e13noni
	r[10] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[1] ;
	
	
	//_e23ni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[4] ;
	
	
	//_e3noni
	r[11] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_109(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[1] ;
	
	
	//_e3ni
	r[6] = a[1] * b[0]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_110(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[5] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[3] ;
	
	
	//_e12noni
	r[9] = a[0] * b[2]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[1] ;
	
	
	//_e23noni
	r[11] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_111(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2] ;
	
	
	//_e23no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[1] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[2]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[1] ;
	
	
	//_e123
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_112(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[1] * b[2] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_113(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[2] ;
	
	
	//_e2ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_114(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2] ;
	
	
	//_e23no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[1] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[2]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[1] ;
	
	
	//_e123
	r[6] = a[1] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_115(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[2] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[5] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[3] ;
	
	
	//_e12noni
	r[9] = a[1] * b[2] ;
	
	
	//_e13noni
	r[10] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_116(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_117(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e123no
	r[6] = a[0] * b[0]  + a[0] * b[7] ;
	
	
	//_e123ni
	r[7] = a[1] * b[0]  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10]  + a[1] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1  + a[0] * b[13]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  + a[0] * b[12] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1  + a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[2]  * -1  + a[1] * b[13] ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  + a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[0]  * -1  + a[1] * b[11] ;
	
	
	//_e1noni
	r[9] = a[0] * b[10]  * -1  + a[1] * b[7] ;
	
	
	//_e2noni
	r[10] = a[0] * b[9]  + a[1] * b[6]  * -1 ;
	
	
	//_e3noni
	r[11] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e123
	r[12] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1  + a[1] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1  + a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[0] * b[10] ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1  + a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[2]  * -1  + a[1] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[1]  + a[1] * b[10]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[0]  * -1  + a[1] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e13noni
	r[12] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_no
	r[3] = a[0] * b[6]  + a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[6]  + a[1] * b[7]  * -1 ;
	
	
	//_e1noni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e2noni
	r[6] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1  + a[0] * b[11]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  + a[0] * b[10] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1  + a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[2]  * -1  + a[1] * b[11] ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  + a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[0]  * -1  + a[1] * b[9] ;
	
	
	//_e1noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e3noni
	r[11] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_122(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e1noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[8]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[8] ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[6] ;
	
	
	//_e1noni
	r[9] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e2noni
	r[10] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e3noni
	r[11] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_125(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[2] ;
	
	
	//_e2ni
	r[5] = a[1] * b[1]  * -1 ;
	
	
	//_e3ni
	r[6] = a[1] * b[0] ;
	
	
	//_noni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[0] ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[5] ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[3] ;
	
	
	//_e1noni
	r[9] = a[1] * b[2] ;
	
	
	//_e2noni
	r[10] = a[1] * b[1]  * -1 ;
	
	
	//_e3noni
	r[11] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_127(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[2] ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[2] ;
	
	
	//_e3ni
	r[8] = a[1] * b[1]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[10] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123no
	r[12] = a[0] * b[0]  + a[0] * b[10] ;
	
	
	//_e123ni
	r[13] = a[1] * b[0]  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10]  + a[1] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[14] ;
	
	
	//_ni
	r[4] = a[1] * b[14] ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[13] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[11] ;
	
	
	//_e1noni
	r[11] = a[0] * b[10]  * -1  + a[1] * b[7] ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[1] * b[6]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e123
	r[14] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[14]  * -1  + a[1] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1  + a[0] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[0] * b[11] ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[2]  * -1  + a[1] * b[12] ;
	
	
	//_e2ni
	r[8] = a[1] * b[1]  + a[1] * b[11]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[0]  * -1  + a[1] * b[10] ;
	
	
	//_noni
	r[10] = a[0] * b[14]  + a[1] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e13noni
	r[12] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e123no
	r[14] = a[0] * b[9] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_no
	r[3] = a[0] * b[9]  + a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  + a[1] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[8] ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6] ;
	
	
	//_e1noni
	r[11] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e2noni
	r[12] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1  + a[0] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[0] * b[11] ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[2]  * -1  + a[1] * b[12] ;
	
	
	//_e2ni
	r[8] = a[1] * b[1]  + a[1] * b[11]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[0]  * -1  + a[1] * b[10] ;
	
	
	//_noni
	r[10] = a[0] * b[13] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e13noni
	r[12] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e123no
	r[14] = a[0] * b[9] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[13] ;
	
	
	//_ni
	r[4] = a[1] * b[13] ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[12]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[12] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e2noni
	r[12] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123
	r[14] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_133(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[2] ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[2] ;
	
	
	//_e3ni
	r[8] = a[1] * b[1]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[10] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123no
	r[12] = a[0] * b[0] ;
	
	
	//_e123ni
	r[13] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[1] * b[9] ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[1] ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[11] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e2noni
	r[12] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[13] ;
	
	
	//_ni
	r[4] = a[1] * b[13] ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[12]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[12] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e2noni
	r[12] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123
	r[14] = a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[14]  * -1  + a[1] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[0] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[0] * b[11] ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[1] * b[12] ;
	
	
	//_e2ni
	r[8] = a[1] * b[2]  + a[1] * b[11]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[1]  * -1  + a[1] * b[10] ;
	
	
	//_noni
	r[10] = a[0] * b[14]  + a[1] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[12] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123no
	r[14] = a[0] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[10]  + a[1] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[14] ;
	
	
	//_ni
	r[4] = a[1] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[13] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[11] ;
	
	
	//_e1noni
	r[11] = a[0] * b[10]  * -1  + a[1] * b[7] ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[1] * b[6]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e123
	r[14] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[8] ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6] ;
	
	
	//_e1noni
	r[11] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e2noni
	r[12] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_139(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[8] ;
	
	
	//_e3no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[9] ;
	
	
	//_e2ni
	r[7] = a[1] * b[8]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[7] ;
	
	
	//_e12noni
	r[9] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e13noni
	r[10] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6] ;
	
	
	//_e123ni
	r[13] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1  + a[0] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[0] * b[11] ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[2]  * -1  + a[1] * b[12] ;
	
	
	//_e2ni
	r[8] = a[1] * b[1]  + a[1] * b[11]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[0]  * -1  + a[1] * b[10] ;
	
	
	//_noni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e13noni
	r[12] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e123no
	r[14] = a[0] * b[9] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[1] ;
	
	
	//_e23ni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e3noni
	r[11] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_142(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  + a[0] * b[7] ;
	
	
	//_ni
	r[1] = a[1] * b[6]  + a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[2] = a[0] * b[2]  * -1  + a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[3] = a[0] * b[1]  + a[0] * b[4] ;
	
	
	//_e23no
	r[4] = a[0] * b[0]  * -1  + a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[5] = a[1] * b[2]  * -1  + a[1] * b[5] ;
	
	
	//_e13ni
	r[6] = a[1] * b[1]  + a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[7] = a[1] * b[0]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_143(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[2] ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[2] ;
	
	
	//_e3ni
	r[8] = a[1] * b[1]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[5] ;
	
	
	//_e23noni
	r[11] = a[0] * b[4]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[0] ;
	
	
	//_e123ni
	r[13] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[0] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_ni
	r[4] = a[1] * b[6]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[5] ;
	
	
	//_e13ni
	r[9] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[3] ;
	
	
	//_e1noni
	r[11] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_145(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[6] ;
	
	
	//_e2ni
	r[7] = a[1] * b[5]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[4] ;
	
	
	//_e12noni
	r[9] = a[0] * b[2]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[1] ;
	
	
	//_e23noni
	r[11] = a[0] * b[0]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[3] ;
	
	
	//_e123ni
	r[13] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_ni
	r[4] = a[1] * b[6] ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[1] ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[11] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[4] ;
	
	
	//_e3noni
	r[13] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_147(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[4] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[2] ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[2] ;
	
	
	//_e3ni
	r[8] = a[1] * b[1]  * -1 ;
	
	
	//_e12noni
	r[9] = a[1] * b[6] ;
	
	
	//_e13noni
	r[10] = a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[4] ;
	
	
	//_e123no
	r[12] = a[0] * b[0] ;
	
	
	//_e123ni
	r[13] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_ni
	r[4] = a[1] * b[6] ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[1] ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[5] ;
	
	
	//_e2noni
	r[12] = a[1] * b[4]  * -1 ;
	
	
	//_e3noni
	r[13] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_149(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[1] ;
	
	
	//_e3ni
	r[6] = a[1] * b[0]  * -1 ;
	
	
	//_noni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[3] ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[1] ;
	
	
	//_e23ni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[9] = a[1] * b[5] ;
	
	
	//_e2noni
	r[10] = a[1] * b[4]  * -1 ;
	
	
	//_e3noni
	r[11] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[2] ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[4] ;
	
	
	//_noni
	r[10] = a[1] * b[7]  * -1 ;
	
	
	//_e12noni
	r[11] = a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[1] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[3] ;
	
	
	//_e123ni
	r[15] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[1] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[6] ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[4] ;
	
	
	//_e1noni
	r[11] = a[1] * b[3] ;
	
	
	//_e2noni
	r[12] = a[1] * b[2]  * -1 ;
	
	
	//_e3noni
	r[13] = a[1] * b[1] ;
	
	
	//_e123
	r[14] = a[1] * b[0]  * -1 ;
	
	
	//_e123noni
	r[15] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[11] ;
	
	
	//_ni
	r[4] = a[1] * b[11]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[8]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[10] ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[8] ;
	
	
	//_e1noni
	r[11] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[1] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e123
	r[14] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e12noni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e13noni
	r[6] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[7] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[1] ;
	
	
	//_e12no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[5] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[6] = a[1] * b[6] ;
	
	
	//_e13ni
	r[7] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[4] ;
	
	
	//_e1noni
	r[9] = a[1] * b[3] ;
	
	
	//_e2noni
	r[10] = a[1] * b[2]  * -1 ;
	
	
	//_e3noni
	r[11] = a[1] * b[1] ;
	
	
	//_e123
	r[12] = a[1] * b[0]  * -1 ;
	
	
	//_e123noni
	r[13] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[2] ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[5] ;
	
	
	//_e2ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[3] ;
	
	
	//_noni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	//_e12noni
	r[11] = a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_157(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e1no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[9] ;
	
	
	//_e3no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[10] ;
	
	
	//_e2ni
	r[7] = a[1] * b[9]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[8] ;
	
	
	//_e12noni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	//_e13noni
	r[10] = a[0] * b[5]  + a[1] * b[2]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[4]  * -1  + a[1] * b[1] ;
	
	
	//_e123no
	r[12] = a[0] * b[0]  + a[0] * b[7] ;
	
	
	//_e123ni
	r[13] = a[1] * b[0]  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[9]  + a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  + a[1] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[1] ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[11] = a[0] * b[8]  * -1  + a[1] * b[5] ;
	
	
	//_e2noni
	r[12] = a[0] * b[7]  + a[1] * b[4]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[6]  * -1  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[0] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[0] * b[11] ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[1] * b[12] ;
	
	
	//_e2ni
	r[8] = a[1] * b[2]  + a[1] * b[11]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[1]  * -1  + a[1] * b[10] ;
	
	
	//_noni
	r[10] = a[0] * b[13] ;
	
	
	//_e12noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[12] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123no
	r[14] = a[0] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[13] ;
	
	
	//_ni
	r[4] = a[1] * b[13]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[12]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[12] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e2noni
	r[12] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123
	r[14] = a[0] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_116_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[13] ;
	
	
	//_ni
	r[4] = a[1] * b[13]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  * -1  + a[0] * b[12]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  + a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[2]  * -1  + a[1] * b[12] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  + a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[0]  * -1  + a[1] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e2noni
	r[12] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123
	r[14] = a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[15] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[0] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[0] * b[11] ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  * -1  + a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[1] * b[12] ;
	
	
	//_e2ni
	r[8] = a[1] * b[2]  + a[1] * b[11]  * -1 ;
	
	
	//_e3ni
	r[9] = a[1] * b[1]  * -1  + a[1] * b[10] ;
	
	
	//_noni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[6] ;
	
	
	//_e13noni
	r[12] = a[0] * b[8]  + a[1] * b[5]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7]  * -1  + a[1] * b[4] ;
	
	
	//_e123no
	r[14] = a[0] * b[0] ;
	
	
	//_e123ni
	r[15] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_163(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[2] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[5] ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[6] ;
	
	
	//_e2ni
	r[7] = a[1] * b[5]  * -1 ;
	
	
	//_e3ni
	r[8] = a[1] * b[4] ;
	
	
	//_e12noni
	r[9] = a[1] * b[2] ;
	
	
	//_e13noni
	r[10] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[3] ;
	
	
	//_e123ni
	r[13] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[0] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_ni
	r[4] = a[1] * b[6]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[8] = a[1] * b[5] ;
	
	
	//_e13ni
	r[9] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[3] ;
	
	
	//_e1noni
	r[11] = a[1] * b[2] ;
	
	
	//_e2noni
	r[12] = a[1] * b[1]  * -1 ;
	
	
	//_e3noni
	r[13] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_ni
	r[4] = a[1] * b[6] ;
	
	
	//_e1noni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e2noni
	r[6] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_116_166(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[3]  * -1  + a[1] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[6] ;
	
	
	//_e123ni
	r[7] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_116_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[30]  * -1  + a[1] * b[29]  * -1 ;
	
	
	//_e1
	r[1] = a[0] * b[21]  + a[1] * b[18] ;
	
	
	//_e2
	r[2] = a[0] * b[20]  * -1  + a[1] * b[17]  * -1 ;
	
	
	//_e3
	r[3] = a[0] * b[19]  + a[1] * b[16] ;
	
	
	//_no
	r[4] = a[0] * b[25]  + a[0] * b[31] ;
	
	
	//_ni
	r[5] = a[1] * b[25]  + a[1] * b[31]  * -1 ;
	
	
	//_e12
	r[6] = a[0] * b[14]  + a[1] * b[11] ;
	
	
	//_e13
	r[7] = a[0] * b[13]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[12]  + a[1] * b[9] ;
	
	
	//_e1no
	r[9] = a[0] * b[8]  * -1  + a[0] * b[28]  * -1 ;
	
	
	//_e2no
	r[10] = a[0] * b[7]  + a[0] * b[27] ;
	
	
	//_e3no
	r[11] = a[0] * b[6]  * -1  + a[0] * b[26]  * -1 ;
	
	
	//_e1ni
	r[12] = a[1] * b[8]  * -1  + a[1] * b[28] ;
	
	
	//_e2ni
	r[13] = a[1] * b[7]  + a[1] * b[27]  * -1 ;
	
	
	//_e3ni
	r[14] = a[1] * b[6]  * -1  + a[1] * b[26] ;
	
	
	//_noni
	r[15] = a[0] * b[30]  + a[1] * b[29]  * -1 ;
	
	
	//_e12no
	r[16] = a[0] * b[3]  * -1  + a[0] * b[24]  * -1 ;
	
	
	//_e13no
	r[17] = a[0] * b[2]  + a[0] * b[23] ;
	
	
	//_e23no
	r[18] = a[0] * b[1]  * -1  + a[0] * b[22]  * -1 ;
	
	
	//_e12ni
	r[19] = a[1] * b[3]  * -1  + a[1] * b[24] ;
	
	
	//_e13ni
	r[20] = a[1] * b[2]  + a[1] * b[23]  * -1 ;
	
	
	//_e23ni
	r[21] = a[1] * b[1]  * -1  + a[1] * b[22] ;
	
	
	//_e1noni
	r[22] = a[0] * b[21]  * -1  + a[1] * b[18] ;
	
	
	//_e2noni
	r[23] = a[0] * b[20]  + a[1] * b[17]  * -1 ;
	
	
	//_e3noni
	r[24] = a[0] * b[19]  * -1  + a[1] * b[16] ;
	
	
	//_e123
	r[25] = a[0] * b[5]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e12noni
	r[26] = a[0] * b[14]  * -1  + a[1] * b[11] ;
	
	
	//_e13noni
	r[27] = a[0] * b[13]  + a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[28] = a[0] * b[12]  * -1  + a[1] * b[9] ;
	
	
	//_e123no
	r[29] = a[0] * b[0]  + a[0] * b[15] ;
	
	
	//_e123ni
	r[30] = a[1] * b[0]  + a[1] * b[15]  * -1 ;
	
	
	//_e123noni
	r[31] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	return r;
}


