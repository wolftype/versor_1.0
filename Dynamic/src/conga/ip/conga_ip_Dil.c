
#include "conga_ip_Dil.h"


double * conga_ip_31_1(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_31_2(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_31_3(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_31_4(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0] ;
	
	
	//_noni
	r[1] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_31_5(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_31_6(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[1] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_31_7(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_31_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[1] ;
	
	
	//_e23
	r[3] = a[0] * b[2] ;
	
	
	//_e1no
	r[4] = a[0] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_31_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[1] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e12ni
	r[6] = a[0] * b[3] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8] ;
	
	
	//_e123
	r[12] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_31_10(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[1] ;
	
	
	//_e23
	r[2] = a[1] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[3] ;
	
	
	//_e123ni
	r[7] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_31_11(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_31_12(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_31_13(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_31_14(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_31_15(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_31_16(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_31_17(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_31_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[5] ;
	
	
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

double * conga_ip_31_19(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[1] ;
	
	
	//_e23
	r[2] = a[1] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3] ;
	
	
	//_e1ni
	r[1] = a[0] * b[0] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1] ;
	
	
	//_e3ni
	r[3] = a[0] * b[2] ;
	
	
	//_noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_21(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_31_22(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_23(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_31_24(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_31_25(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_31_26(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_27(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_31_28(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_29(double * a, double * b, double *r) { 
	
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

double * conga_ip_31_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1ni
	r[1] = a[0] * b[1] ;
	
	
	//_e2ni
	r[2] = a[0] * b[2] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1] ;
	
	
	//_noni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_31_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[0] * b[1] ;
	
	
	//_e2no
	r[2] = a[0] * b[2] ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[7] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10] ;
	
	
	//_e123ni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_31_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[5] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[1] * b[6] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[7] ;
	
	
	//_noni
	r[4] = a[0] * b[4] ;
	
	
	//_e12noni
	r[5] = a[0] * b[5] ;
	
	
	//_e13noni
	r[6] = a[0] * b[6] ;
	
	
	//_e23noni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e123no
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4] ;
	
	
	//_e1ni
	r[1] = a[0] * b[1] ;
	
	
	//_e2ni
	r[2] = a[0] * b[2] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_31_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_31_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4] ;
	
	
	//_e1no
	r[1] = a[0] * b[1] ;
	
	
	//_e2no
	r[2] = a[0] * b[2] ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_31_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123no
	r[14] = a[0] * b[14] ;
	
	
	//_e123ni
	r[15] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_ip_31_41(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_42(double * a, double * b, double *r) { 
	
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

double * conga_ip_31_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[1] ;
	
	
	//_e13
	r[2] = a[1] * b[2] ;
	
	
	//_e23
	r[3] = a[1] * b[3] ;
	
	
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

double * conga_ip_31_44(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[0] * b[2] ;
	
	
	//_e13no
	r[3] = a[0] * b[3] ;
	
	
	//_e23no
	r[4] = a[0] * b[4] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5] ;
	
	
	//_e13ni
	r[6] = a[0] * b[6] ;
	
	
	//_e23ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123
	r[6] = a[1] * b[3] ;
	
	
	//_e123noni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e123
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_31_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123
	r[14] = a[0] * b[14]  + a[1] * b[15] ;
	
	
	//_e123noni
	r[15] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_ip_31_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6] ;
	
	
	//_e12
	r[1] = a[1] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[8] ;
	
	
	//_e23
	r[3] = a[1] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[1] ;
	
	
	//_e3no
	r[6] = a[0] * b[2] ;
	
	
	//_e1ni
	r[7] = a[0] * b[3] ;
	
	
	//_e2ni
	r[8] = a[0] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5] ;
	
	
	//_noni
	r[10] = a[0] * b[6] ;
	
	
	//_e12noni
	r[11] = a[0] * b[7] ;
	
	
	//_e13noni
	r[12] = a[0] * b[8] ;
	
	
	//_e23noni
	r[13] = a[0] * b[9] ;
	
	
	//_e123no
	r[14] = a[0] * b[10] ;
	
	
	//_e123ni
	r[15] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_31_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_e123no
	r[10] = a[0] * b[10] ;
	
	
	//_e123ni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_31_50(double * a, double * b, double *r) { 
	
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

double * conga_ip_31_51(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[6] ;
	
	
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
	r[10] = a[1] * b[7] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3] ;
	
	
	//_e12
	r[1] = a[1] * b[4] ;
	
	
	//_e13
	r[2] = a[1] * b[5] ;
	
	
	//_e23
	r[3] = a[1] * b[6] ;
	
	
	//_e1ni
	r[4] = a[0] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2] ;
	
	
	//_noni
	r[7] = a[0] * b[3] ;
	
	
	//_e12noni
	r[8] = a[0] * b[4] ;
	
	
	//_e13noni
	r[9] = a[0] * b[5] ;
	
	
	//_e23noni
	r[10] = a[0] * b[6] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e123
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_55(double * a, double * b, double *r) { 
	
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

double * conga_ip_31_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e123
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_58(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[7] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e1noni
	r[5] = a[0] * b[5] ;
	
	
	//_e2noni
	r[6] = a[0] * b[6] ;
	
	
	//_e3noni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_59(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[1] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5] ;
	
	
	//_e13ni
	r[6] = a[0] * b[6] ;
	
	
	//_e23ni
	r[7] = a[0] * b[7] ;
	
	
	//_e1noni
	r[8] = a[0] * b[8] ;
	
	
	//_e2noni
	r[9] = a[0] * b[9] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_31_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_31_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[14] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_31_63(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[9] ;
	
	
	//_e123ni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_31_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[7] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_31_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_31_66(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[1] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[5] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[6] ;
	
	
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

double * conga_ip_31_68(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[4] ;
	
	
	//_e23
	r[2] = a[1] * b[5] ;
	
	
	//_e1ni
	r[3] = a[0] * b[0] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1] ;
	
	
	//_e3ni
	r[5] = a[0] * b[2] ;
	
	
	//_e12noni
	r[6] = a[0] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4] ;
	
	
	//_e23noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123ni
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_69(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_71(double * a, double * b, double *r) { 
	
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

double * conga_ip_31_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[11] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9] ;
	
	
	//_e2noni
	r[10] = a[0] * b[10] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11] ;
	
	
	//_e123
	r[12] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_31_73(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0]  + a[1] * b[1] ;
	
	
	//_e123noni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_31_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[1] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[5] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[6] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_75(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[1] * b[9] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[1] * b[10] ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[11] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_e12noni
	r[9] = a[0] * b[9] ;
	
	
	//_e13noni
	r[10] = a[0] * b[10] ;
	
	
	//_e23noni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_31_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_31_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[1] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[5] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_78(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_31_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_31_81(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[1] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[5] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_31_82(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_31_83(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3]  + a[1] * b[4] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_31_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9] ;
	
	
	//_e123
	r[10] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_31_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[7] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10] ;
	
	
	//_e123no
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_31_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[0] ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[2] ;
	
	
	//_noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_87(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[1] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e1noni
	r[8] = a[0] * b[8] ;
	
	
	//_e2noni
	r[9] = a[0] * b[9] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_31_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123no
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_31_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[14] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_31_91(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[9] ;
	
	
	//_e123ni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_31_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[8] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[7] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_31_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_31_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_95(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9] ;
	
	
	//_e123
	r[10] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_31_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_31_98(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_31_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_31_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_31_101(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[1] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123ni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_31_102(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3]  + a[1] * b[4] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_31_103(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2] ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[0] ;
	
	
	//_ni
	r[4] = a[0] * b[1] ;
	
	
	//_e1noni
	r[5] = a[0] * b[2] ;
	
	
	//_e2noni
	r[6] = a[0] * b[3] ;
	
	
	//_e3noni
	r[7] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_31_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[8] ;
	
	
	//_e23
	r[3] = a[1] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[1] ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7] ;
	
	
	//_e13noni
	r[11] = a[0] * b[8] ;
	
	
	//_e23noni
	r[12] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_31_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[1] * b[9] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_31_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_31_107(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[6] ;
	
	
	//_e13
	r[1] = a[1] * b[7] ;
	
	
	//_e23
	r[2] = a[1] * b[8] ;
	
	
	//_e1no
	r[3] = a[0] * b[0] ;
	
	
	//_e2no
	r[4] = a[0] * b[1] ;
	
	
	//_e3no
	r[5] = a[0] * b[2] ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[0] * b[4] ;
	
	
	//_e3ni
	r[8] = a[0] * b[5] ;
	
	
	//_e12noni
	r[9] = a[0] * b[6] ;
	
	
	//_e13noni
	r[10] = a[0] * b[7] ;
	
	
	//_e23noni
	r[11] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_31_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_31_109(double * a, double * b, double *r) { 
	
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

double * conga_ip_31_110(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[4] ;
	
	
	//_e23
	r[2] = a[1] * b[5] ;
	
	
	//_e1ni
	r[3] = a[0] * b[0] ;
	
	
	//_e2ni
	r[4] = a[0] * b[1] ;
	
	
	//_e3ni
	r[5] = a[0] * b[2] ;
	
	
	//_e12noni
	r[6] = a[0] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4] ;
	
	
	//_e23noni
	r[8] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_31_111(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[3] ;
	
	
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

double * conga_ip_31_112(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_31_113(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[1] ;
	
	
	//_e23
	r[2] = a[1] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_31_114(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_115(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[4] ;
	
	
	//_e23
	r[2] = a[1] * b[5] ;
	
	
	//_e1no
	r[3] = a[0] * b[0] ;
	
	
	//_e2no
	r[4] = a[0] * b[1] ;
	
	
	//_e3no
	r[5] = a[0] * b[2] ;
	
	
	//_e12noni
	r[6] = a[0] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4] ;
	
	
	//_e23noni
	r[8] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_31_116(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_31_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e1no
	r[1] = a[0] * b[1] ;
	
	
	//_e2no
	r[2] = a[0] * b[2] ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_31_119(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[1] * b[9] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[1] * b[10] ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[11] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_e12noni
	r[9] = a[0] * b[9] ;
	
	
	//_e13noni
	r[10] = a[0] * b[10] ;
	
	
	//_e23noni
	r[11] = a[0] * b[11] ;
	
	
	//_e123no
	r[12] = a[0] * b[12] ;
	
	
	//_e123ni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_31_120(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[11] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9] ;
	
	
	//_e2noni
	r[10] = a[0] * b[10] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_31_122(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_31_123(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_31_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[1] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e12ni
	r[6] = a[0] * b[3] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_31_125(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[1] ;
	
	
	//_e23
	r[2] = a[1] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_31_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_31_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_31_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e1no
	r[4] = a[0] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[9] ;
	
	
	//_e12noni
	r[11] = a[0] * b[10] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11] ;
	
	
	//_e23noni
	r[13] = a[0] * b[12] ;
	
	
	//_e123no
	r[14] = a[0] * b[13] ;
	
	
	//_e123ni
	r[15] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_31_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[1] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e12ni
	r[6] = a[0] * b[3] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8] ;
	
	
	//_e123
	r[12] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_31_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e1no
	r[4] = a[0] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[9] ;
	
	
	//_e12noni
	r[11] = a[0] * b[10] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11] ;
	
	
	//_e23noni
	r[13] = a[0] * b[12] ;
	
	
	//_e123ni
	r[14] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_31_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_31_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_31_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_31_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_31_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[1] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[12] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123no
	r[13] = a[0] * b[13] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_31_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123
	r[14] = a[1] * b[14] ;
	
	
	//_e123noni
	r[15] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_31_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[1] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e12ni
	r[6] = a[0] * b[3] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8] ;
	
	
	//_e123
	r[12] = a[1] * b[9] ;
	
	
	//_e123noni
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_31_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6] ;
	
	
	//_e12
	r[1] = a[1] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[8] ;
	
	
	//_e23
	r[3] = a[1] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[1] ;
	
	
	//_e3no
	r[6] = a[0] * b[2] ;
	
	
	//_e1ni
	r[7] = a[0] * b[3] ;
	
	
	//_e2ni
	r[8] = a[0] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5] ;
	
	
	//_noni
	r[10] = a[0] * b[6] ;
	
	
	//_e12noni
	r[11] = a[0] * b[7] ;
	
	
	//_e13noni
	r[12] = a[0] * b[8] ;
	
	
	//_e23noni
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_31_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e1no
	r[4] = a[0] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[9] ;
	
	
	//_e12noni
	r[11] = a[0] * b[10] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11] ;
	
	
	//_e23noni
	r[13] = a[0] * b[12] ;
	
	
	//_e123no
	r[14] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_31_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_31_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[5] ;
	
	
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
	r[9] = a[1] * b[6] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3] ;
	
	
	//_e12
	r[1] = a[1] * b[4] ;
	
	
	//_e13
	r[2] = a[1] * b[5] ;
	
	
	//_e23
	r[3] = a[1] * b[6] ;
	
	
	//_e1ni
	r[4] = a[0] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2] ;
	
	
	//_noni
	r[7] = a[0] * b[3] ;
	
	
	//_e12noni
	r[8] = a[0] * b[4] ;
	
	
	//_e13noni
	r[9] = a[0] * b[5] ;
	
	
	//_e23noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_149(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_31_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_31_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3] ;
	
	
	//_e12
	r[1] = a[1] * b[4] ;
	
	
	//_e13
	r[2] = a[1] * b[5] ;
	
	
	//_e23
	r[3] = a[1] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[1] ;
	
	
	//_e3no
	r[6] = a[0] * b[2] ;
	
	
	//_noni
	r[7] = a[0] * b[3] ;
	
	
	//_e12noni
	r[8] = a[0] * b[4] ;
	
	
	//_e13noni
	r[9] = a[0] * b[5] ;
	
	
	//_e23noni
	r[10] = a[0] * b[6] ;
	
	
	//_e123no
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[1] ;
	
	
	//_e13no
	r[5] = a[0] * b[2] ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	//_e123
	r[10] = a[1] * b[7] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8] ;
	
	
	//_e2
	r[1] = a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[1] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[0] ;
	
	
	//_ni
	r[4] = a[0] * b[1] ;
	
	
	//_e12no
	r[5] = a[0] * b[2] ;
	
	
	//_e13no
	r[6] = a[0] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[4] ;
	
	
	//_e12ni
	r[8] = a[0] * b[5] ;
	
	
	//_e13ni
	r[9] = a[0] * b[6] ;
	
	
	//_e23ni
	r[10] = a[0] * b[7] ;
	
	
	//_e1noni
	r[11] = a[0] * b[8] ;
	
	
	//_e2noni
	r[12] = a[0] * b[9] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10] ;
	
	
	//_e123
	r[14] = a[1] * b[11] ;
	
	
	//_e123noni
	r[15] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_31_154(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[6] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_31_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[1] ;
	
	
	//_e13no
	r[5] = a[0] * b[2] ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_156(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[4] ;
	
	
	//_e23
	r[2] = a[1] * b[5] ;
	
	
	//_e1no
	r[3] = a[0] * b[0] ;
	
	
	//_e2no
	r[4] = a[0] * b[1] ;
	
	
	//_e3no
	r[5] = a[0] * b[2] ;
	
	
	//_e12noni
	r[6] = a[0] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4] ;
	
	
	//_e23noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123no
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7] ;
	
	
	//_e12
	r[1] = a[1] * b[8] ;
	
	
	//_e13
	r[2] = a[1] * b[9] ;
	
	
	//_e23
	r[3] = a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[1] ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[7] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8] ;
	
	
	//_e13noni
	r[12] = a[0] * b[9] ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_31_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_31_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[1] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[12] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123ni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_31_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123
	r[13] = a[1] * b[13] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_31_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[1] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123
	r[13] = a[1] * b[13] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_31_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[1] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[12] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123no
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_31_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3] ;
	
	
	//_e12
	r[1] = a[1] * b[4] ;
	
	
	//_e13
	r[2] = a[1] * b[5] ;
	
	
	//_e23
	r[3] = a[1] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[1] ;
	
	
	//_e3no
	r[6] = a[0] * b[2] ;
	
	
	//_noni
	r[7] = a[0] * b[3] ;
	
	
	//_e12noni
	r[8] = a[0] * b[4] ;
	
	
	//_e13noni
	r[9] = a[0] * b[5] ;
	
	
	//_e23noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123
	r[9] = a[1] * b[6] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_165(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[0] ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[2] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5] ;
	
	
	//_noni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_31_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[15] ;
	
	
	//_e1
	r[1] = a[0] * b[1]  + a[1] * b[22] ;
	
	
	//_e2
	r[2] = a[0] * b[2]  + a[1] * b[23] ;
	
	
	//_e3
	r[3] = a[0] * b[3]  + a[1] * b[24] ;
	
	
	//_no
	r[4] = a[0] * b[4] ;
	
	
	//_ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12
	r[6] = a[0] * b[6]  + a[1] * b[26] ;
	
	
	//_e13
	r[7] = a[0] * b[7]  + a[1] * b[27] ;
	
	
	//_e23
	r[8] = a[0] * b[8]  + a[1] * b[28] ;
	
	
	//_e1no
	r[9] = a[0] * b[9] ;
	
	
	//_e2no
	r[10] = a[0] * b[10] ;
	
	
	//_e3no
	r[11] = a[0] * b[11] ;
	
	
	//_e1ni
	r[12] = a[0] * b[12] ;
	
	
	//_e2ni
	r[13] = a[0] * b[13] ;
	
	
	//_e3ni
	r[14] = a[0] * b[14] ;
	
	
	//_noni
	r[15] = a[0] * b[15] ;
	
	
	//_e12no
	r[16] = a[0] * b[16] ;
	
	
	//_e13no
	r[17] = a[0] * b[17] ;
	
	
	//_e23no
	r[18] = a[0] * b[18] ;
	
	
	//_e12ni
	r[19] = a[0] * b[19] ;
	
	
	//_e13ni
	r[20] = a[0] * b[20] ;
	
	
	//_e23ni
	r[21] = a[0] * b[21] ;
	
	
	//_e1noni
	r[22] = a[0] * b[22] ;
	
	
	//_e2noni
	r[23] = a[0] * b[23] ;
	
	
	//_e3noni
	r[24] = a[0] * b[24] ;
	
	
	//_e123
	r[25] = a[0] * b[25]  + a[1] * b[31] ;
	
	
	//_e12noni
	r[26] = a[0] * b[26] ;
	
	
	//_e13noni
	r[27] = a[0] * b[27] ;
	
	
	//_e23noni
	r[28] = a[0] * b[28] ;
	
	
	//_e123no
	r[29] = a[0] * b[29] ;
	
	
	//_e123ni
	r[30] = a[0] * b[30] ;
	
	
	//_e123noni
	r[31] = a[0] * b[31] ;
	
	
	return r;
}


