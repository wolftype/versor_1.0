
#include "conga_ip_Trs.h"


double * conga_ip_30_1(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_30_2(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_30_3(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_30_4(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_30_5(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_30_6(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_30_7(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
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

double * conga_ip_30_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	//_e12ni
	r[7] = a[0] * b[3] ;
	
	
	//_e13ni
	r[8] = a[0] * b[4] ;
	
	
	//_e23ni
	r[9] = a[0] * b[5] ;
	
	
	//_e1noni
	r[10] = a[0] * b[6] ;
	
	
	//_e2noni
	r[11] = a[0] * b[7] ;
	
	
	//_e3noni
	r[12] = a[0] * b[8] ;
	
	
	//_e123
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_30_10(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[3] ;
	
	
	//_e1ni
	r[3] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2ni
	r[4] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3ni
	r[5] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_30_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
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
	
	
	return r;
}

double * conga_ip_30_12(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_30_13(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_30_14(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_30_15(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e1no
	r[1] = a[0] * b[0] ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_30_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_30_17(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[0] ;
	
	
	//_e13
	r[1] = a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_30_18(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[1] = a[0] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[1] ;
	
	
	//_e23ni
	r[3] = a[0] * b[2] ;
	
	
	//_e1noni
	r[4] = a[0] * b[3] ;
	
	
	//_e2noni
	r[5] = a[0] * b[4] ;
	
	
	//_e3noni
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_30_19(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3ni
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
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

double * conga_ip_30_20(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_30_21(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_22(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_23(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_30_24(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_30_25(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_30_26(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
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
	
	
	return r;
}

double * conga_ip_30_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e123
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_30_29(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_30(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_noni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_30_32(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[1] ;
	
	
	//_e2no
	r[2] = a[0] * b[2] ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_30_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[1] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
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

double * conga_ip_30_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e2ni
	r[5] = a[1] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3ni
	r[6] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[4] ;
	
	
	//_e12noni
	r[8] = a[0] * b[5] ;
	
	
	//_e13noni
	r[9] = a[0] * b[6] ;
	
	
	//_e23noni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_30_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[7] ;
	
	
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

double * conga_ip_30_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
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

double * conga_ip_30_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
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
	r[7] = a[0] * b[7]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[1] * b[11]  * -1  + a[3] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
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

double * conga_ip_30_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
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

double * conga_ip_30_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[3] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[1] * b[11]  * -1  + a[3] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
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

double * conga_ip_30_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e2
	r[1] = a[1] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[1] ;
	
	
	//_e13no
	r[5] = a[0] * b[2] ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_30_42(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_43(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e2ni
	r[1] = a[1] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e3ni
	r[2] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
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

double * conga_ip_30_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
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
	
	
	return r;
}

double * conga_ip_30_45(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12ni
	r[1] = a[3] * b[3] ;
	
	
	//_e13ni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[3] = a[1] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[0] ;
	
	
	//_e2noni
	r[5] = a[0] * b[1] ;
	
	
	//_e3noni
	r[6] = a[0] * b[2] ;
	
	
	//_e123noni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_30_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
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

double * conga_ip_30_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[3] * b[15] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[15]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[1] * b[15] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123
	r[14] = a[0] * b[14] ;
	
	
	//_e123noni
	r[15] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_ip_30_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[2] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[1] ;
	
	
	//_e3no
	r[6] = a[0] * b[2] ;
	
	
	//_e1ni
	r[7] = a[0] * b[3]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e2ni
	r[8] = a[0] * b[4]  + a[1] * b[7]  * -1  + a[3] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
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

double * conga_ip_30_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[10] ;
	
	
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

double * conga_ip_30_50(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_51(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[1] ;
	
	
	//_e3no
	r[6] = a[0] * b[2] ;
	
	
	//_e123no
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_30_52(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[3] * b[7] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[1] * b[7] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_30_53(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_30_54(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_55(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
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

double * conga_ip_30_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e1noni
	r[5] = a[0] * b[4] ;
	
	
	//_e2noni
	r[6] = a[0] * b[5] ;
	
	
	//_e3noni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_30_58(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e1noni
	r[5] = a[0] * b[5] ;
	
	
	//_e2noni
	r[6] = a[0] * b[6] ;
	
	
	//_e3noni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_30_59(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0]  + a[3] * b[3] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_30_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
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

double * conga_ip_30_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
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
	r[7] = a[0] * b[7]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[1] * b[11]  * -1  + a[3] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
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

double * conga_ip_30_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[3] * b[14] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[2] * b[14]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[1] * b[14] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123
	r[13] = a[0] * b[13] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_30_63(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[3] * b[9] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[2] * b[9]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4]  + a[1] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
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

double * conga_ip_30_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
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
	r[7] = a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e2ni
	r[8] = a[1] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
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

double * conga_ip_30_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	//_e12ni
	r[7] = a[3] * b[10] ;
	
	
	//_e13ni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[10] ;
	
	
	//_e1noni
	r[10] = a[0] * b[6] ;
	
	
	//_e2noni
	r[11] = a[0] * b[7] ;
	
	
	//_e3noni
	r[12] = a[0] * b[8] ;
	
	
	//_e123
	r[13] = a[0] * b[9] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_30_66(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[3] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[2] * b[6]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[3] = a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3ni
	r[5] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
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

double * conga_ip_30_67(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_30_68(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
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

double * conga_ip_30_69(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_70(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_71(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[9]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	//_e12ni
	r[7] = a[0] * b[6]  + a[3] * b[13] ;
	
	
	//_e13ni
	r[8] = a[0] * b[7]  + a[2] * b[13]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[8]  + a[1] * b[13] ;
	
	
	//_e1noni
	r[10] = a[0] * b[9] ;
	
	
	//_e2noni
	r[11] = a[0] * b[10] ;
	
	
	//_e3noni
	r[12] = a[0] * b[11] ;
	
	
	//_e123
	r[13] = a[0] * b[12] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_30_73(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[1] ;
	
	
	//_e13ni
	r[1] = a[2] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[1] ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_30_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[3] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[2] * b[6]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[3] = a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3ni
	r[5] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4] ;
	
	
	//_e23noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123no
	r[9] = a[0] * b[6] ;
	
	
	//_e123ni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_30_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
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
	r[7] = a[0] * b[6]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[1] * b[9]  * -1  + a[3] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[9] ;
	
	
	//_e13noni
	r[11] = a[0] * b[10] ;
	
	
	//_e23noni
	r[12] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_30_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3] ;
	
	
	//_e13ni
	r[5] = a[0] * b[4] ;
	
	
	//_e23ni
	r[6] = a[0] * b[5] ;
	
	
	//_e1noni
	r[7] = a[0] * b[6] ;
	
	
	//_e2noni
	r[8] = a[0] * b[7] ;
	
	
	//_e3noni
	r[9] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_30_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3ni
	r[5] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
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

double * conga_ip_30_78(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4]  + a[1] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_30_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_30_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e1noni
	r[4] = a[0] * b[3] ;
	
	
	//_e2noni
	r[5] = a[0] * b[4] ;
	
	
	//_e3noni
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_30_81(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3ni
	r[5] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4] ;
	
	
	//_e23noni
	r[8] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_30_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
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
	r[7] = a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3ni
	r[9] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[6] ;
	
	
	//_e13noni
	r[11] = a[0] * b[7] ;
	
	
	//_e23noni
	r[12] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_30_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e12ni
	r[6] = a[3] * b[4] ;
	
	
	//_e13ni
	r[7] = a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[4] ;
	
	
	//_e123
	r[9] = a[0] * b[3] ;
	
	
	//_e123noni
	r[10] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_30_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[3] * b[11] ;
	
	
	//_e13ni
	r[9] = a[2] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[11] ;
	
	
	//_e1noni
	r[11] = a[0] * b[7] ;
	
	
	//_e2noni
	r[12] = a[0] * b[8] ;
	
	
	//_e3noni
	r[13] = a[0] * b[9] ;
	
	
	//_e123
	r[14] = a[0] * b[10] ;
	
	
	//_e123noni
	r[15] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_30_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e2ni
	r[8] = a[1] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[7] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8] ;
	
	
	//_e13noni
	r[12] = a[0] * b[9] ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	//_e123no
	r[14] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_30_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
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

double * conga_ip_30_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e12ni
	r[6] = a[3] * b[3] ;
	
	
	//_e13ni
	r[7] = a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[3] ;
	
	
	//_e123noni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_30_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
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

double * conga_ip_30_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[3] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[1] * b[11]  * -1  + a[3] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
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

double * conga_ip_30_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[0] * b[7]  + a[3] * b[14] ;
	
	
	//_e13ni
	r[9] = a[0] * b[8]  + a[2] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[9]  + a[1] * b[14] ;
	
	
	//_e1noni
	r[11] = a[0] * b[10] ;
	
	
	//_e2noni
	r[12] = a[0] * b[11] ;
	
	
	//_e3noni
	r[13] = a[0] * b[12] ;
	
	
	//_e123
	r[14] = a[0] * b[13] ;
	
	
	//_e123noni
	r[15] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_30_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[3] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[2] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[5] ;
	
	
	//_e1ni
	r[7] = a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3ni
	r[9] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[6] ;
	
	
	//_e13noni
	r[11] = a[0] * b[7] ;
	
	
	//_e23noni
	r[12] = a[0] * b[8] ;
	
	
	//_e123no
	r[13] = a[0] * b[9] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_30_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[1] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
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

double * conga_ip_30_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3]  + a[3] * b[10] ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  + a[2] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[5]  + a[1] * b[10] ;
	
	
	//_e1noni
	r[7] = a[0] * b[6] ;
	
	
	//_e2noni
	r[8] = a[0] * b[7] ;
	
	
	//_e3noni
	r[9] = a[0] * b[8] ;
	
	
	//_e123
	r[10] = a[0] * b[9] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_30_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
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

double * conga_ip_30_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[2] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[5] ;
	
	
	//_e123no
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_30_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  + a[3] * b[11] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  + a[2] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[1] * b[11] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9] ;
	
	
	//_e123
	r[10] = a[0] * b[10] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_30_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_30_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[3] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[2] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[5] ;
	
	
	//_e1ni
	r[7] = a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3ni
	r[9] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[6] ;
	
	
	//_e13noni
	r[11] = a[0] * b[7] ;
	
	
	//_e23noni
	r[12] = a[0] * b[8] ;
	
	
	//_e123no
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_30_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	//_e1noni
	r[7] = a[0] * b[6] ;
	
	
	//_e2noni
	r[8] = a[0] * b[7] ;
	
	
	//_e3noni
	r[9] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_30_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
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

double * conga_ip_30_101(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4]  + a[1] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
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

double * conga_ip_30_102(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0]  + a[3] * b[4] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[2]  + a[1] * b[4] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_30_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e1noni
	r[2] = a[0] * b[2] ;
	
	
	//_e2noni
	r[3] = a[0] * b[3] ;
	
	
	//_e3noni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_30_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[1] ;
	
	
	//_e2no
	r[2] = a[0] * b[2] ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[1] * b[7]  * -1  + a[3] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[7] ;
	
	
	//_e13noni
	r[8] = a[0] * b[8] ;
	
	
	//_e23noni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_30_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[3] * b[9] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_30_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_30_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e1no
	r[1] = a[0] * b[0] ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[2] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[1] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[6] ;
	
	
	//_e13noni
	r[8] = a[0] * b[7] ;
	
	
	//_e23noni
	r[9] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_30_108(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_109(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_110(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_30_111(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_30_112(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e1noni
	r[1] = a[0] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[1] ;
	
	
	//_e3noni
	r[3] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_30_113(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3ni
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_30_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[2] = a[0] * b[1] ;
	
	
	//_e2noni
	r[3] = a[0] * b[2] ;
	
	
	//_e3noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_30_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e1no
	r[1] = a[0] * b[0] ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[2] ;
	
	
	//_e1ni
	r[4] = a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2ni
	r[5] = a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3ni
	r[6] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[3] ;
	
	
	//_e13noni
	r[8] = a[0] * b[4] ;
	
	
	//_e23noni
	r[9] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_30_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[0] ;
	
	
	//_e13
	r[1] = a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_30_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
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

double * conga_ip_30_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
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

double * conga_ip_30_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[3] * b[12] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[2] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[12] ;
	
	
	//_e1no
	r[4] = a[0] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[6]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[1] * b[9]  * -1  + a[3] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[9] ;
	
	
	//_e13noni
	r[11] = a[0] * b[10] ;
	
	
	//_e23noni
	r[12] = a[0] * b[11] ;
	
	
	//_e123no
	r[13] = a[0] * b[12] ;
	
	
	//_e123ni
	r[14] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_30_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e12ni
	r[6] = a[0] * b[3]  + a[3] * b[7] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[5]  + a[1] * b[7] ;
	
	
	//_e123
	r[9] = a[0] * b[6] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_30_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[9]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	//_e12ni
	r[7] = a[0] * b[6] ;
	
	
	//_e13ni
	r[8] = a[0] * b[7] ;
	
	
	//_e23ni
	r[9] = a[0] * b[8] ;
	
	
	//_e1noni
	r[10] = a[0] * b[9] ;
	
	
	//_e2noni
	r[11] = a[0] * b[10] ;
	
	
	//_e3noni
	r[12] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_30_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
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
	
	
	return r;
}

double * conga_ip_30_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
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
	
	
	return r;
}

double * conga_ip_30_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	//_e12ni
	r[7] = a[0] * b[3] ;
	
	
	//_e13ni
	r[8] = a[0] * b[4] ;
	
	
	//_e23ni
	r[9] = a[0] * b[5] ;
	
	
	//_e1noni
	r[10] = a[0] * b[6] ;
	
	
	//_e2noni
	r[11] = a[0] * b[7] ;
	
	
	//_e3noni
	r[12] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_30_125(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[3] ;
	
	
	//_e1ni
	r[3] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2ni
	r[4] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3ni
	r[5] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_30_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	//_e1noni
	r[7] = a[0] * b[3] ;
	
	
	//_e2noni
	r[8] = a[0] * b[4] ;
	
	
	//_e3noni
	r[9] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_30_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
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

double * conga_ip_30_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
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

double * conga_ip_30_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[3] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[2] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[6]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[1] * b[10]  * -1  + a[3] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
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

double * conga_ip_30_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	//_e12ni
	r[7] = a[0] * b[3]  + a[3] * b[10] ;
	
	
	//_e13ni
	r[8] = a[0] * b[4]  + a[2] * b[10]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[5]  + a[1] * b[10] ;
	
	
	//_e1noni
	r[10] = a[0] * b[6] ;
	
	
	//_e2noni
	r[11] = a[0] * b[7] ;
	
	
	//_e3noni
	r[12] = a[0] * b[8] ;
	
	
	//_e123
	r[13] = a[0] * b[9] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_30_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
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
	r[7] = a[0] * b[6]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[1] * b[10]  * -1  + a[3] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
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

double * conga_ip_30_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
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

double * conga_ip_30_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
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

double * conga_ip_30_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
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

double * conga_ip_30_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[0] * b[7] ;
	
	
	//_e13ni
	r[9] = a[0] * b[8] ;
	
	
	//_e23ni
	r[10] = a[0] * b[9] ;
	
	
	//_e1noni
	r[11] = a[0] * b[10] ;
	
	
	//_e2noni
	r[12] = a[0] * b[11] ;
	
	
	//_e3noni
	r[13] = a[0] * b[12] ;
	
	
	//_e123
	r[14] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_30_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[3] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[1] * b[10]  * -1  + a[3] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
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

double * conga_ip_30_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[3] * b[14] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[1] * b[14] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_30_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	//_e12ni
	r[7] = a[0] * b[3]  + a[3] * b[9] ;
	
	
	//_e13ni
	r[8] = a[0] * b[4]  + a[2] * b[9]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[5]  + a[1] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[6] ;
	
	
	//_e2noni
	r[11] = a[0] * b[7] ;
	
	
	//_e3noni
	r[12] = a[0] * b[8] ;
	
	
	//_e123noni
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_30_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e1no
	r[1] = a[0] * b[0] ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[2] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[1] * b[7]  * -1  + a[3] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[6] ;
	
	
	//_e12noni
	r[8] = a[0] * b[7] ;
	
	
	//_e13noni
	r[9] = a[0] * b[8] ;
	
	
	//_e23noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_30_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[3] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[2] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[4] ;
	
	
	//_e3no
	r[6] = a[0] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[6]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[1] * b[10]  * -1  + a[3] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
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

double * conga_ip_30_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
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

double * conga_ip_30_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[4] = a[3] * b[7] ;
	
	
	//_e13ni
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[1] * b[7] ;
	
	
	//_e1noni
	r[7] = a[0] * b[3] ;
	
	
	//_e2noni
	r[8] = a[0] * b[4] ;
	
	
	//_e3noni
	r[9] = a[0] * b[5] ;
	
	
	//_e123
	r[10] = a[0] * b[6] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_30_143(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_144(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[1] = a[0] * b[0]  + a[3] * b[6] ;
	
	
	//_e13ni
	r[2] = a[0] * b[1]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[2]  + a[1] * b[6] ;
	
	
	//_e1noni
	r[4] = a[0] * b[3] ;
	
	
	//_e2noni
	r[5] = a[0] * b[4] ;
	
	
	//_e3noni
	r[6] = a[0] * b[5] ;
	
	
	//_e123noni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_30_145(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_30_146(double * a, double * b, double *r) { 
	
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

double * conga_ip_30_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
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

double * conga_ip_30_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
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

double * conga_ip_30_149(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_30_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_30_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[2] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[1] ;
	
	
	//_e3no
	r[6] = a[0] * b[2] ;
	
	
	//_e1ni
	r[7] = a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2ni
	r[8] = a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3ni
	r[9] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3] ;
	
	
	//_e12noni
	r[11] = a[0] * b[4] ;
	
	
	//_e13noni
	r[12] = a[0] * b[5] ;
	
	
	//_e23noni
	r[13] = a[0] * b[6] ;
	
	
	//_e123no
	r[14] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_30_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e2
	r[1] = a[1] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0] ;
	
	
	//_ni
	r[4] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12no
	r[5] = a[0] * b[1] ;
	
	
	//_e13no
	r[6] = a[0] * b[2] ;
	
	
	//_e23no
	r[7] = a[0] * b[3] ;
	
	
	//_e12ni
	r[8] = a[3] * b[7] ;
	
	
	//_e13ni
	r[9] = a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[7] ;
	
	
	//_e1noni
	r[11] = a[0] * b[4] ;
	
	
	//_e2noni
	r[12] = a[0] * b[5] ;
	
	
	//_e3noni
	r[13] = a[0] * b[6] ;
	
	
	//_e123noni
	r[14] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_30_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0] ;
	
	
	//_ni
	r[4] = a[0] * b[1]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12no
	r[5] = a[0] * b[2] ;
	
	
	//_e13no
	r[6] = a[0] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[4] ;
	
	
	//_e12ni
	r[8] = a[0] * b[5]  + a[3] * b[11] ;
	
	
	//_e13ni
	r[9] = a[0] * b[6]  + a[2] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7]  + a[1] * b[11] ;
	
	
	//_e1noni
	r[11] = a[0] * b[8] ;
	
	
	//_e2noni
	r[12] = a[0] * b[9] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10] ;
	
	
	//_e123noni
	r[14] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_30_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[2] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6] ;
	
	
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
	
	
	//_e123no
	r[10] = a[0] * b[6] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_30_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e2
	r[1] = a[1] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0] ;
	
	
	//_ni
	r[4] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12no
	r[5] = a[0] * b[1] ;
	
	
	//_e13no
	r[6] = a[0] * b[2] ;
	
	
	//_e23no
	r[7] = a[0] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[4] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_30_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[2] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[0] ;
	
	
	//_e2no
	r[5] = a[0] * b[1] ;
	
	
	//_e3no
	r[6] = a[0] * b[2] ;
	
	
	//_e1ni
	r[7] = a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3ni
	r[9] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[3] ;
	
	
	//_e13noni
	r[11] = a[0] * b[4] ;
	
	
	//_e23noni
	r[12] = a[0] * b[5] ;
	
	
	//_e123no
	r[13] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_30_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[1] ;
	
	
	//_e2no
	r[2] = a[0] * b[2] ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[1] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
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

double * conga_ip_30_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[3] * b[10] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[2] * b[10]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[1] * b[10] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_30_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
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
	r[7] = a[0] * b[7]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[1] * b[10]  * -1  + a[3] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
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

double * conga_ip_30_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[3] * b[13] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[2] * b[13]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[1] * b[13] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_30_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[0] * b[7]  + a[3] * b[13] ;
	
	
	//_e13ni
	r[9] = a[0] * b[8]  + a[2] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[9]  + a[1] * b[13] ;
	
	
	//_e1noni
	r[11] = a[0] * b[10] ;
	
	
	//_e2noni
	r[12] = a[0] * b[11] ;
	
	
	//_e3noni
	r[13] = a[0] * b[12] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_30_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[3] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[1] * b[10]  * -1  + a[3] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
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

double * conga_ip_30_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e1no
	r[1] = a[0] * b[0] ;
	
	
	//_e2no
	r[2] = a[0] * b[1] ;
	
	
	//_e3no
	r[3] = a[0] * b[2] ;
	
	
	//_e1ni
	r[4] = a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2ni
	r[5] = a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3ni
	r[6] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
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

double * conga_ip_30_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	//_e12ni
	r[7] = a[3] * b[6] ;
	
	
	//_e13ni
	r[8] = a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6] ;
	
	
	//_e1noni
	r[10] = a[0] * b[3] ;
	
	
	//_e2noni
	r[11] = a[0] * b[4] ;
	
	
	//_e3noni
	r[12] = a[0] * b[5] ;
	
	
	//_e123noni
	r[13] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_30_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
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
	
	
	//_e123
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_30_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
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

double * conga_ip_30_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e1
	r[1] = a[0] * b[1]  + a[2] * b[16]  + a[3] * b[17] ;
	
	
	//_e2
	r[2] = a[0] * b[2]  + a[1] * b[16]  * -1  + a[3] * b[18] ;
	
	
	//_e3
	r[3] = a[0] * b[3]  + a[1] * b[17]  * -1  + a[2] * b[18]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[4] ;
	
	
	//_ni
	r[5] = a[0] * b[5]  + a[1] * b[22]  + a[2] * b[23]  + a[3] * b[24] ;
	
	
	//_e12
	r[6] = a[0] * b[6]  + a[3] * b[29] ;
	
	
	//_e13
	r[7] = a[0] * b[7]  + a[2] * b[29]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[8]  + a[1] * b[29] ;
	
	
	//_e1no
	r[9] = a[0] * b[9] ;
	
	
	//_e2no
	r[10] = a[0] * b[10] ;
	
	
	//_e3no
	r[11] = a[0] * b[11] ;
	
	
	//_e1ni
	r[12] = a[0] * b[12]  + a[2] * b[26]  + a[3] * b[27] ;
	
	
	//_e2ni
	r[13] = a[0] * b[13]  + a[1] * b[26]  * -1  + a[3] * b[28] ;
	
	
	//_e3ni
	r[14] = a[0] * b[14]  + a[1] * b[27]  * -1  + a[2] * b[28]  * -1 ;
	
	
	//_noni
	r[15] = a[0] * b[15] ;
	
	
	//_e12no
	r[16] = a[0] * b[16] ;
	
	
	//_e13no
	r[17] = a[0] * b[17] ;
	
	
	//_e23no
	r[18] = a[0] * b[18] ;
	
	
	//_e12ni
	r[19] = a[0] * b[19]  + a[3] * b[31] ;
	
	
	//_e13ni
	r[20] = a[0] * b[20]  + a[2] * b[31]  * -1 ;
	
	
	//_e23ni
	r[21] = a[0] * b[21]  + a[1] * b[31] ;
	
	
	//_e1noni
	r[22] = a[0] * b[22] ;
	
	
	//_e2noni
	r[23] = a[0] * b[23] ;
	
	
	//_e3noni
	r[24] = a[0] * b[24] ;
	
	
	//_e123
	r[25] = a[0] * b[25] ;
	
	
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


