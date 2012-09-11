
#include "conga_gp_Dil_Pss.h"


double * conga_gp_73_1(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	//_e123noni
	r[1] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_2(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_3(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_4(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[1] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_5(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[0] * b[1]  + a[1] * b[1] ;
	
	
	return r;
}

double * conga_gp_73_6(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_7(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[1] * b[2] ;
	
	
	//_e13noni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	return r;
}

double * conga_gp_73_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[8] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e1noni
	r[9] = a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[10] = a[1] * b[1] ;
	
	
	//_e3noni
	r[11] = a[1] * b[0]  * -1 ;
	
	
	//_e123
	r[12] = a[1] * b[9] ;
	
	
	//_e123noni
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_73_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[8] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_noni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[8] ;
	
	
	//_e13noni
	r[12] = a[0] * b[7]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_73_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e1noni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[1] ;
	
	
	//_e3noni
	r[7] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[8] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e1noni
	r[9] = a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[10] = a[1] * b[1] ;
	
	
	//_e3noni
	r[11] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_12(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  + a[1] * b[2] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_13(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[2]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[1] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_14(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_15(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_16(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_17(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_18(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[5] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[3] ;
	
	
	//_e1ni
	r[3] = a[0] * b[2]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[1]  + a[1] * b[1] ;
	
	
	//_e3ni
	r[5] = a[0] * b[0]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[5] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_20(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[2]  + a[1] * b[2] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0]  + a[1] * b[0] ;
	
	
	//_e123
	r[3] = a[1] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_21(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	//_e1noni
	r[6] = a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[1] ;
	
	
	//_e3noni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_22(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[1] * b[2] ;
	
	
	//_e13noni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_23(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[1] * b[2] ;
	
	
	//_e13noni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_24(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e1noni
	r[3] = a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[1] ;
	
	
	//_e3noni
	r[5] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_25(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_26(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[1] * b[2] ;
	
	
	//_e13noni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e1noni
	r[6] = a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[1] ;
	
	
	//_e3noni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	//_noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[2] ;
	
	
	//_e3noni
	r[5] = a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_30(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[1]  + a[1] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	//_e123noni
	r[4] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_31(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0]  + a[1] * b[1] ;
	
	
	//_e123noni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e1noni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[2] ;
	
	
	//_e3noni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[10] = a[0] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_33(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e23no
	r[2] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	//_e123noni
	r[4] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[11]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e1noni
	r[7] = a[0] * b[10]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[9]  + a[1] * b[2] ;
	
	
	//_e3noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[10] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[6]  + a[1] * b[2] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[0]  + a[1] * b[4] ;
	
	
	//_e123noni
	r[7] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[7] ;
	
	
	//_e12no
	r[4] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[2] ;
	
	
	//_e3noni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[10] = a[0] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_37(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[1]  + a[1] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[0]  + a[1] * b[4] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1  + a[1] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e13ni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e1noni
	r[9] = a[0] * b[13]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[12]  + a[1] * b[2] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[12] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_39(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e23no
	r[2] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[0]  + a[1] * b[4] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1  + a[1] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[14]  * -1  + a[1] * b[14] ;
	
	
	//_ni
	r[4] = a[0] * b[15]  * -1  + a[1] * b[15]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e13ni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e1noni
	r[11] = a[0] * b[13]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[1] * b[2] ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e123noni
	r[15] = a[0] * b[10]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_41(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e2no
	r[1] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e123no
	r[3] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_42(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[2]  + a[1] * b[2] ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[0]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_43(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[2] ;
	
	
	//_e3noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[6] = a[1] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_44(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e2no
	r[1] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[1]  + a[1] * b[1] ;
	
	
	return r;
}

double * conga_gp_73_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[2] ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[0] ;
	
	
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

double * conga_gp_73_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1  + a[1] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[10]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[1] * b[11]  * -1 ;
	
	
	//_e12noni
	r[11] = a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[1] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[15] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	return r;
}

double * conga_gp_73_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[14]  * -1  + a[1] * b[15]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1  + a[1] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[10]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[15]  * -1  + a[1] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[13]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11]  + a[1] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[15] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	return r;
}

double * conga_gp_73_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[8] ;
	
	
	//_e3
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[11]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e13ni
	r[9] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	//_e1noni
	r[11] = a[0] * b[9]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[8] ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  * -1 ;
	
	
	//_e123
	r[14] = a[1] * b[6] ;
	
	
	//_e123noni
	r[15] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_73_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[11]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e13ni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e1noni
	r[11] = a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[2] ;
	
	
	//_e3noni
	r[13] = a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_50(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e12ni
	r[1] = a[0] * b[2]  + a[1] * b[2] ;
	
	
	//_e13ni
	r[2] = a[0] * b[1]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[0]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_51(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e12no
	r[1] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e13no
	r[2] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e23no
	r[3] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[4] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[2]  + a[1] * b[2] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[6] ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[4] ;
	
	
	//_e123ni
	r[11] = a[0] * b[0]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  + a[1] * b[2] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  + a[1] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	//_e123
	r[10] = a[1] * b[3] ;
	
	
	//_e123noni
	r[11] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_noni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e12noni
	r[8] = a[1] * b[2] ;
	
	
	//_e13noni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[1] * b[0] ;
	
	
	//_e123ni
	r[11] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_55(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
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

double * conga_gp_73_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_noni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e12noni
	r[8] = a[1] * b[2] ;
	
	
	//_e13noni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[1] * b[0] ;
	
	
	//_e123no
	r[11] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_57(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2]  + a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0]  + a[1] * b[4] ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_58(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2]  + a[1] * b[7] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0]  + a[1] * b[5] ;
	
	
	//_e12noni
	r[3] = a[0] * b[7]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[1] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	return r;
}

double * conga_gp_73_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  + a[1] * b[1] ;
	
	
	//_e3ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_60(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2]  + a[1] * b[10] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	return r;
}

double * conga_gp_73_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1  + a[1] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[14]  * -1  + a[1] * b[14]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e1noni
	r[10] = a[0] * b[13]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[12]  + a[1] * b[2] ;
	
	
	//_e3noni
	r[12] = a[0] * b[11]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1  + a[1] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[14]  * -1  + a[1] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[12]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[1] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e12ni
	r[5] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e13ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[7]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[10]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[9]  + a[1] * b[2] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_noni
	r[7] = a[0] * b[10]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[9] = a[0] * b[7]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_e1noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_67(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[4] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[2]  + a[1] * b[2] ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123ni
	r[9] = a[0] * b[0]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  + a[1] * b[2] ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0]  + a[1] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[4] ;
	
	
	//_e3noni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	//_e1noni
	r[7] = a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[1] ;
	
	
	//_e3noni
	r[9] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_70(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e3ni
	r[5] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e12noni
	r[6] = a[1] * b[2] ;
	
	
	//_e13noni
	r[7] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[0] ;
	
	
	//_e123ni
	r[9] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_71(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  + a[1] * b[1] ;
	
	
	//_e3ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[12]  * -1  + a[1] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e1ni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[13]  * -1  + a[1] * b[12]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[10]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[9]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e1noni
	r[5] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[7] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[8]  + a[1] * b[8] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e1noni
	r[9] = a[0] * b[11]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[10]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[9]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_76(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[6]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	//_e1noni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[6]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_79(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2]  + a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0]  + a[1] * b[4] ;
	
	
	//_e12noni
	r[3] = a[0] * b[6]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[4]  + a[1] * b[0] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_80(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2]  + a[1] * b[5] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0]  + a[1] * b[3] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[6]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_noni
	r[7] = a[0] * b[11]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[9]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e123no
	r[11] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[11] ;
	
	
	//_e12no
	r[4] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[10]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[9]  + a[1] * b[2] ;
	
	
	//_e3noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[10] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_86(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e123
	r[3] = a[1] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_88(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2]  + a[1] * b[10] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0]  + a[1] * b[8] ;
	
	
	//_e1no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[7] ;
	
	
	//_e2no
	r[4] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[1] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	return r;
}

double * conga_gp_73_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1  + a[1] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[14]  * -1  + a[1] * b[14] ;
	
	
	//_e12no
	r[4] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e1noni
	r[10] = a[0] * b[13]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[12]  + a[1] * b[2] ;
	
	
	//_e3noni
	r[12] = a[0] * b[11]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1  + a[1] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[14]  * -1  + a[1] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[12]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[1] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e1noni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[7]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e1noni
	r[6] = a[0] * b[10]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[9]  + a[1] * b[2] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[10]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[9] = a[0] * b[7]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_94(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_e2no
	r[4] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e12noni
	r[6] = a[1] * b[2] ;
	
	
	//_e13noni
	r[7] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[1] ;
	
	
	//_e3noni
	r[9] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[11]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[9]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e123ni
	r[11] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_97(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_e2no
	r[4] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e12noni
	r[6] = a[0] * b[9]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e123no
	r[9] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[9] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[7]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_99(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e1no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[6]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_100(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e3ni
	r[5] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[9]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	//_e123ni
	r[9] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[7]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  + a[1] * b[1] ;
	
	
	//_e3ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_103(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[4] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[4] ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[1]  + a[1] * b[1] ;
	
	
	return r;
}

double * conga_gp_73_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[8] ;
	
	
	//_e3
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e23no
	r[5] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[8] ;
	
	
	//_e3noni
	r[11] = a[0] * b[7]  * -1 ;
	
	
	//_e123
	r[12] = a[0] * b[0] ;
	
	
	//_e123noni
	r[13] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e1ni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[9]  * -1 ;
	
	
	//_e12noni
	r[11] = a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e1noni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[1] ;
	
	
	//_e3noni
	r[7] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	//_e1noni
	r[9] = a[0] * b[8]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[7] ;
	
	
	//_e3noni
	r[11] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_108(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[6] = a[1] * b[2] ;
	
	
	//_e13noni
	r[7] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[1] ;
	
	
	//_e3noni
	r[6] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[2]  + a[1] * b[2] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[0]  + a[1] * b[0] ;
	
	
	//_e1noni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_111(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[1] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[1] ;
	
	
	//_e123ni
	r[6] = a[0] * b[0]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_112(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[2] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_113(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_114(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[1] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[1] ;
	
	
	//_e123no
	r[6] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_116(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1]  * -1  + a[1] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_117(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e23no
	r[2] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e123
	r[6] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_118(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2]  + a[1] * b[13] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[1] * b[12]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0]  + a[1] * b[11] ;
	
	
	//_e1no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[7] ;
	
	
	//_e2no
	r[4] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[10]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[13]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[10] = a[0] * b[12]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[11]  + a[1] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[13] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	return r;
}

double * conga_gp_73_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[12]  * -1  + a[1] * b[12] ;
	
	
	//_ni
	r[4] = a[0] * b[13]  * -1  + a[1] * b[13]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[9]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_121(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2]  + a[1] * b[11] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0]  + a[1] * b[9] ;
	
	
	//_e1no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[6]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[11]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[9]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_122(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_123(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_124(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[8] ;
	
	
	//_e13
	r[1] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[6] ;
	
	
	//_e1no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e2no
	r[4] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	//_e1ni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e12noni
	r[9] = a[0] * b[8] ;
	
	
	//_e13noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_73_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[2]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_126(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[5] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[3] ;
	
	
	//_e1no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e2no
	r[4] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	//_e12noni
	r[6] = a[0] * b[5] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e13ni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e1noni
	r[9] = a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[10] = a[1] * b[2] ;
	
	
	//_e3noni
	r[11] = a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[12] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1  + a[1] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[10]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[1] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[13]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11]  + a[1] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[15] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	return r;
}

double * conga_gp_73_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[13]  * -1  + a[1] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[14]  * -1  + a[1] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e1noni
	r[11] = a[0] * b[12]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[11]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e123
	r[14] = a[1] * b[9] ;
	
	
	//_e123noni
	r[15] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_73_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[8] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[8] ;
	
	
	//_e13noni
	r[12] = a[0] * b[7]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_73_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[13]  * -1  + a[1] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[8] ;
	
	
	//_e13ni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e1noni
	r[10] = a[0] * b[12]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[10]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e123
	r[13] = a[1] * b[9] ;
	
	
	//_e123noni
	r[14] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_73_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[12]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[1] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e13ni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e1noni
	r[9] = a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[10] = a[1] * b[2] ;
	
	
	//_e3noni
	r[11] = a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[12] = a[0] * b[0] ;
	
	
	//_e123noni
	r[13] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e1ni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	//_e12noni
	r[11] = a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[12]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[1] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1  + a[1] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[13]  * -1  + a[1] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[14]  * -1  + a[1] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e13ni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e1noni
	r[11] = a[0] * b[12]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[11]  + a[1] * b[2] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1  + a[1] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[10]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[13]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11]  + a[1] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[15] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	return r;
}

double * conga_gp_73_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[8] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	//_e1ni
	r[7] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[9]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[8] ;
	
	
	//_e13noni
	r[12] = a[0] * b[7]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_73_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[8] ;
	
	
	//_e3
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[8] ;
	
	
	//_e3noni
	r[11] = a[0] * b[7]  * -1 ;
	
	
	//_e123
	r[12] = a[1] * b[6] ;
	
	
	//_e123noni
	r[13] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_73_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1  + a[1] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[13]  * -1  + a[1] * b[13] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[8] ;
	
	
	//_e13ni
	r[8] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e1noni
	r[10] = a[0] * b[12]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[1] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[10]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e123
	r[13] = a[1] * b[9] ;
	
	
	//_e123noni
	r[14] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_gp_73_141(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[6]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e12noni
	r[9] = a[1] * b[2] ;
	
	
	//_e13noni
	r[10] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[11] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e12noni
	r[5] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[7] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e1noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[2] ;
	
	
	//_e3noni
	r[8] = a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[0] ;
	
	
	//_e123noni
	r[10] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[5] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[2]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  + a[1] * b[1] ;
	
	
	//_e3ni
	r[6] = a[0] * b[0]  * -1  + a[1] * b[0]  * -1 ;
	
	
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

double * conga_gp_73_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[2]  + a[1] * b[2] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[0]  + a[1] * b[0] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[5] ;
	
	
	//_e3noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e123
	r[9] = a[1] * b[3] ;
	
	
	//_e123noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[1] * b[6]  * -1 ;
	
	
	//_e12noni
	r[8] = a[1] * b[2] ;
	
	
	//_e13noni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[2] ;
	
	
	//_e3noni
	r[8] = a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[0] ;
	
	
	//_e123noni
	r[10] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_noni
	r[7] = a[1] * b[6]  * -1 ;
	
	
	//_e12noni
	r[8] = a[1] * b[2] ;
	
	
	//_e13noni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e1noni
	r[4] = a[1] * b[2]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[1] ;
	
	
	//_e3noni
	r[6] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_150(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[2] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e12noni
	r[6] = a[1] * b[2] ;
	
	
	//_e13noni
	r[7] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[7] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	//_e123
	r[10] = a[1] * b[3] ;
	
	
	//_e123noni
	r[11] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[4] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12noni
	r[8] = a[0] * b[6] ;
	
	
	//_e13noni
	r[9] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[4] ;
	
	
	//_e123no
	r[11] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[8] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[10] ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[8] ;
	
	
	//_e123no
	r[14] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e123ni
	r[15] = a[0] * b[1]  + a[1] * b[1] ;
	
	
	return r;
}

double * conga_gp_73_154(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_ni
	r[1] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[2] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e13no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e23no
	r[4] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e12ni
	r[5] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e13ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_155(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[4] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123no
	r[9] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[7] = a[0] * b[5]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[4] ;
	
	
	//_e3noni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[1] * b[8]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e23no
	r[5] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[1] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e1noni
	r[9] = a[0] * b[10]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[9] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8]  * -1 ;
	
	
	//_e123
	r[12] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e123noni
	r[13] = a[0] * b[7]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1  + a[1] * b[3] ;
	
	
	//_e1ni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e12noni
	r[11] = a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1  + a[1] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[13]  * -1  + a[1] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e1noni
	r[10] = a[0] * b[12]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[1] * b[2] ;
	
	
	//_e3noni
	r[12] = a[0] * b[10]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[0] ;
	
	
	//_e123noni
	r[14] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[12]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[1] * b[0] ;
	
	
	//_e123ni
	r[14] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[1] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  * -1  + a[1] * b[4] ;
	
	
	//_e1ni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[12]  + a[1] * b[2] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[1] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[3]  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  * -1  + a[1] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[13]  * -1  + a[1] * b[13] ;
	
	
	//_e12no
	r[4] = a[0] * b[6]  + a[1] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  * -1  + a[1] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[9]  + a[1] * b[9] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7]  + a[1] * b[7] ;
	
	
	//_e1noni
	r[10] = a[0] * b[12]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[1] * b[2] ;
	
	
	//_e3noni
	r[12] = a[0] * b[10]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[0] ;
	
	
	//_e123noni
	r[14] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_gp_73_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[5] ;
	
	
	//_e3noni
	r[8] = a[0] * b[4]  * -1 ;
	
	
	//_e123
	r[9] = a[1] * b[3] ;
	
	
	//_e123noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_gp_73_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[5] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
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

double * conga_gp_73_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1  + a[1] * b[2] ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[1] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_gp_73_166(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[2]  + a[1] * b[2]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  * -1  + a[1] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  + a[1] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3]  + a[1] * b[3] ;
	
	
	//_e123
	r[6] = a[1] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_gp_73_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[25]  * -1  + a[1] * b[31]  * -1 ;
	
	
	//_e1
	r[1] = a[0] * b[8]  * -1  + a[1] * b[28]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[7]  + a[1] * b[27] ;
	
	
	//_e3
	r[3] = a[0] * b[6]  * -1  + a[1] * b[26]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[29]  * -1  + a[1] * b[29] ;
	
	
	//_ni
	r[5] = a[0] * b[30]  * -1  + a[1] * b[30]  * -1 ;
	
	
	//_e12
	r[6] = a[0] * b[3]  + a[1] * b[24] ;
	
	
	//_e13
	r[7] = a[0] * b[2]  * -1  + a[1] * b[23]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[1]  + a[1] * b[22] ;
	
	
	//_e1no
	r[9] = a[0] * b[18]  * -1  + a[1] * b[18] ;
	
	
	//_e2no
	r[10] = a[0] * b[17]  + a[1] * b[17]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[16]  * -1  + a[1] * b[16] ;
	
	
	//_e1ni
	r[12] = a[0] * b[21]  * -1  + a[1] * b[21]  * -1 ;
	
	
	//_e2ni
	r[13] = a[0] * b[20]  + a[1] * b[20] ;
	
	
	//_e3ni
	r[14] = a[0] * b[19]  * -1  + a[1] * b[19]  * -1 ;
	
	
	//_noni
	r[15] = a[0] * b[31]  * -1  + a[1] * b[25]  * -1 ;
	
	
	//_e12no
	r[16] = a[0] * b[11]  + a[1] * b[11]  * -1 ;
	
	
	//_e13no
	r[17] = a[0] * b[10]  * -1  + a[1] * b[10] ;
	
	
	//_e23no
	r[18] = a[0] * b[9]  + a[1] * b[9]  * -1 ;
	
	
	//_e12ni
	r[19] = a[0] * b[14]  + a[1] * b[14] ;
	
	
	//_e13ni
	r[20] = a[0] * b[13]  * -1  + a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[21] = a[0] * b[12]  + a[1] * b[12] ;
	
	
	//_e1noni
	r[22] = a[0] * b[28]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e2noni
	r[23] = a[0] * b[27]  + a[1] * b[7] ;
	
	
	//_e3noni
	r[24] = a[0] * b[26]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e123
	r[25] = a[0] * b[0]  + a[1] * b[15] ;
	
	
	//_e12noni
	r[26] = a[0] * b[24]  + a[1] * b[3] ;
	
	
	//_e13noni
	r[27] = a[0] * b[23]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e23noni
	r[28] = a[0] * b[22]  + a[1] * b[1] ;
	
	
	//_e123no
	r[29] = a[0] * b[4]  + a[1] * b[4]  * -1 ;
	
	
	//_e123ni
	r[30] = a[0] * b[5]  + a[1] * b[5] ;
	
	
	//_e123noni
	r[31] = a[0] * b[15]  + a[1] * b[0] ;
	
	
	return r;
}


