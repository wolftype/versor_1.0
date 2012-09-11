
#include "conga_ip_Trv.h"


double * conga_ip_33_1(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_33_2(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_33_3(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_33_4(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_33_5(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_33_6(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[2] * b[0] ;
	
	
	//_e23no
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_33_7(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
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

double * conga_ip_33_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
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

double * conga_ip_33_10(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[4] ;
	
	
	//_e13
	r[1] = a[2] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[4] ;
	
	
	//_e1no
	r[3] = a[2] * b[0]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[0]  + a[3] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[1] * b[1]  + a[2] * b[2] ;
	
	
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

double * conga_ip_33_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
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

double * conga_ip_33_12(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e1ni
	r[1] = a[0] * b[0] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1] ;
	
	
	//_e3ni
	r[3] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_33_13(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1] ;
	
	
	//_e23ni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_33_14(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[0] ;
	
	
	//_e13
	r[1] = a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[0] ;
	
	
	//_e123ni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_33_15(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_33_16(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_33_17(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_33_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
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

double * conga_ip_33_19(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[3] ;
	
	
	//_e1no
	r[3] = a[2] * b[0]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[0]  + a[3] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12noni
	r[6] = a[0] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[2] ;
	
	
	//_e123ni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_33_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
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

double * conga_ip_33_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[1] ;
	
	
	//_e23
	r[3] = a[0] * b[2] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_33_22(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_23(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_33_24(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_33_25(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_33_26(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_27(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_28(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_29(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e1ni
	r[1] = a[0] * b[1] ;
	
	
	//_e2ni
	r[2] = a[0] * b[2] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_33_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_noni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_33_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[7] ;
	
	
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

double * conga_ip_33_33(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[11] ;
	
	
	//_e1no
	r[4] = a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[8]  + a[3] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[9]  + a[2] * b[10] ;
	
	
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
	
	
	//_e123ni
	r[14] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_33_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[5]  + a[3] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[6]  + a[2] * b[7] ;
	
	
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

double * conga_ip_33_36(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
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

double * conga_ip_33_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[11]  + a[3] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
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

double * conga_ip_33_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
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

double * conga_ip_33_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[3] * b[15] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[15] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[11]  + a[3] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
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

double * conga_ip_33_41(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_42(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e2
	r[1] = a[1] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
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

double * conga_ip_33_43(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[1]  + a[3] * b[3]  * -1 ;
	
	
	//_e3no
	r[2] = a[1] * b[2]  + a[2] * b[3] ;
	
	
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

double * conga_ip_33_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
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

double * conga_ip_33_45(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e12no
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13no
	r[2] = a[2] * b[3] ;
	
	
	//_e23no
	r[3] = a[1] * b[3]  * -1 ;
	
	
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

double * conga_ip_33_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
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

double * conga_ip_33_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[3] * b[15]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[15] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[1] * b[15]  * -1 ;
	
	
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
	
	
	//_e123noni
	r[15] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_ip_33_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[2] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[0]  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[1] * b[7]  + a[3] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
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

double * conga_ip_33_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
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

double * conga_ip_33_50(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2] ;
	
	
	//_e123ni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_33_51(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e2
	r[1] = a[1] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0] ;
	
	
	//_e12no
	r[5] = a[3] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[2] * b[7] ;
	
	
	//_e23no
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[1] ;
	
	
	//_e13ni
	r[9] = a[0] * b[2] ;
	
	
	//_e23ni
	r[10] = a[0] * b[3] ;
	
	
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

double * conga_ip_33_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[2] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[4]  + a[3] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[1] ;
	
	
	//_e3ni
	r[9] = a[0] * b[2] ;
	
	
	//_noni
	r[10] = a[0] * b[3] ;
	
	
	//_e12noni
	r[11] = a[0] * b[4] ;
	
	
	//_e13noni
	r[12] = a[0] * b[5] ;
	
	
	//_e23noni
	r[13] = a[0] * b[6] ;
	
	
	//_e123ni
	r[14] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_33_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
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

double * conga_ip_33_55(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_56(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_33_58(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
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

double * conga_ip_33_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[2] * b[3] ;
	
	
	//_e23no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[1] ;
	
	
	//_e23ni
	r[8] = a[0] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_33_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
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

double * conga_ip_33_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[3] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[11]  + a[3] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
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

double * conga_ip_33_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7]  * -1  + a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3] ;
	
	
	//_e12no
	r[5] = a[0] * b[4]  + a[3] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[5]  + a[2] * b[14] ;
	
	
	//_e23no
	r[7] = a[0] * b[6]  + a[1] * b[14]  * -1 ;
	
	
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
	
	
	//_e123noni
	r[15] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_33_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[2] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e1ni
	r[7] = a[0] * b[3] ;
	
	
	//_e2ni
	r[8] = a[0] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5] ;
	
	
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

double * conga_ip_33_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[8]  + a[3] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
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

double * conga_ip_33_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3]  + a[3] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[4]  + a[2] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[5]  + a[1] * b[10]  * -1 ;
	
	
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

double * conga_ip_33_66(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[1] * b[4]  + a[2] * b[5] ;
	
	
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

double * conga_ip_33_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e2
	r[1] = a[1] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0] ;
	
	
	//_e12ni
	r[5] = a[0] * b[1] ;
	
	
	//_e13ni
	r[6] = a[0] * b[2] ;
	
	
	//_e23ni
	r[7] = a[0] * b[3] ;
	
	
	//_e1noni
	r[8] = a[0] * b[4] ;
	
	
	//_e2noni
	r[9] = a[0] * b[5] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_33_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[2] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e1ni
	r[7] = a[0] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[1] ;
	
	
	//_e3ni
	r[9] = a[0] * b[2] ;
	
	
	//_e12noni
	r[10] = a[0] * b[3] ;
	
	
	//_e13noni
	r[11] = a[0] * b[4] ;
	
	
	//_e23noni
	r[12] = a[0] * b[5] ;
	
	
	//_e123ni
	r[13] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_33_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[2] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5] ;
	
	
	//_e123ni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_33_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
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

double * conga_ip_33_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[1] ;
	
	
	//_e23ni
	r[5] = a[0] * b[2] ;
	
	
	//_e123
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_33_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3]  + a[3] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[4]  + a[2] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[5]  + a[1] * b[13]  * -1 ;
	
	
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
	
	
	//_e123
	r[13] = a[0] * b[12] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_33_73(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1 ;
	
	
	//_e13no
	r[1] = a[2] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_33_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[3] * b[7] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[2] * b[7]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[7] ;
	
	
	//_e1no
	r[3] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[1] * b[4]  + a[2] * b[5] ;
	
	
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

double * conga_ip_33_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[1] ;
	
	
	//_e23
	r[3] = a[0] * b[2] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[1] * b[9]  + a[3] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e1ni
	r[7] = a[0] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8] ;
	
	
	//_e12noni
	r[10] = a[0] * b[9] ;
	
	
	//_e13noni
	r[11] = a[0] * b[10] ;
	
	
	//_e23noni
	r[12] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_33_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
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

double * conga_ip_33_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[3] * b[6] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[2] * b[6]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[6] ;
	
	
	//_e1no
	r[3] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[1] * b[4]  + a[2] * b[5] ;
	
	
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

double * conga_ip_33_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[1] ;
	
	
	//_e23
	r[3] = a[0] * b[2] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e1ni
	r[7] = a[0] * b[3] ;
	
	
	//_e2ni
	r[8] = a[0] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5] ;
	
	
	//_e12noni
	r[10] = a[0] * b[6] ;
	
	
	//_e13noni
	r[11] = a[0] * b[7] ;
	
	
	//_e23noni
	r[12] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_33_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3] ;
	
	
	//_e1noni
	r[5] = a[0] * b[4] ;
	
	
	//_e2noni
	r[6] = a[0] * b[5] ;
	
	
	//_e3noni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_33_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[4] = a[0] * b[3] ;
	
	
	//_e2noni
	r[5] = a[0] * b[4] ;
	
	
	//_e3noni
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_33_81(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[4] ;
	
	
	//_e23noni
	r[8] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_33_82(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  + a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_33_83(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0]  + a[3] * b[4]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  + a[2] * b[4] ;
	
	
	//_e23no
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_33_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[3] * b[11]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[1] * b[11]  * -1 ;
	
	
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

double * conga_ip_33_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[8]  + a[3] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
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

double * conga_ip_33_86(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_33_87(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[1]  + a[2] * b[3] ;
	
	
	//_e23no
	r[2] = a[0] * b[2]  + a[1] * b[3]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_33_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
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

double * conga_ip_33_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[11]  + a[3] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
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

double * conga_ip_33_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7]  * -1  + a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[3] * b[14]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[14] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[1] * b[14]  * -1 ;
	
	
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
	
	
	//_e123noni
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_33_91(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[3] * b[10] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[2] * b[10]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[10] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  + a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
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

double * conga_ip_33_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[8]  + a[3] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[9]  + a[2] * b[10] ;
	
	
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

double * conga_ip_33_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[3] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[2] * b[10] ;
	
	
	//_e23no
	r[6] = a[1] * b[10]  * -1 ;
	
	
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
	
	
	//_e123noni
	r[14] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_33_94(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_95(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3] ;
	
	
	//_e12no
	r[5] = a[3] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[2] * b[11] ;
	
	
	//_e23no
	r[7] = a[1] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[0] * b[4] ;
	
	
	//_e13ni
	r[9] = a[0] * b[5] ;
	
	
	//_e23ni
	r[10] = a[0] * b[6] ;
	
	
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

double * conga_ip_33_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
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

double * conga_ip_33_98(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  + a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
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

double * conga_ip_33_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
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

double * conga_ip_33_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[0] * b[4] ;
	
	
	//_e13ni
	r[6] = a[0] * b[5] ;
	
	
	//_e23ni
	r[7] = a[0] * b[6] ;
	
	
	//_e1noni
	r[8] = a[0] * b[7] ;
	
	
	//_e2noni
	r[9] = a[0] * b[8] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_33_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[3] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[2] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e1ni
	r[7] = a[0] * b[3] ;
	
	
	//_e2ni
	r[8] = a[0] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5] ;
	
	
	//_e12noni
	r[10] = a[0] * b[6] ;
	
	
	//_e13noni
	r[11] = a[0] * b[7] ;
	
	
	//_e23noni
	r[12] = a[0] * b[8] ;
	
	
	//_e123ni
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_33_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[3] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[2] * b[4] ;
	
	
	//_e23no
	r[5] = a[1] * b[4]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[1] ;
	
	
	//_e23ni
	r[8] = a[0] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[3] ;
	
	
	//_e123noni
	r[10] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_33_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e1noni
	r[2] = a[0] * b[2] ;
	
	
	//_e2noni
	r[3] = a[0] * b[3] ;
	
	
	//_e3noni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_33_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  + a[1] * b[7]  + a[3] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_e12noni
	r[7] = a[0] * b[7] ;
	
	
	//_e13noni
	r[8] = a[0] * b[8] ;
	
	
	//_e23noni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_33_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[3] * b[9]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[2] * b[9] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[1] * b[9]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_33_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[3] * b[4] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[2] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_33_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e1no
	r[1] = a[0] * b[0]  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5] ;
	
	
	//_e12noni
	r[7] = a[0] * b[6] ;
	
	
	//_e13noni
	r[8] = a[0] * b[7] ;
	
	
	//_e23noni
	r[9] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_33_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_33_109(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  + a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_33_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e1no
	r[1] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e1ni
	r[4] = a[0] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2] ;
	
	
	//_e12noni
	r[7] = a[0] * b[3] ;
	
	
	//_e13noni
	r[8] = a[0] * b[4] ;
	
	
	//_e23noni
	r[9] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_33_111(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[0] ;
	
	
	//_e1noni
	r[2] = a[0] * b[1] ;
	
	
	//_e2noni
	r[3] = a[0] * b[2] ;
	
	
	//_e3noni
	r[4] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_33_112(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e1noni
	r[1] = a[0] * b[0] ;
	
	
	//_e2noni
	r[2] = a[0] * b[1] ;
	
	
	//_e3noni
	r[3] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_33_113(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[0]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[0]  + a[3] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_33_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e1noni
	r[1] = a[0] * b[1] ;
	
	
	//_e2noni
	r[2] = a[0] * b[2] ;
	
	
	//_e3noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_33_115(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  + a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  + a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_33_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[1] ;
	
	
	//_e13
	r[1] = a[2] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[1] ;
	
	
	//_e123no
	r[3] = a[0] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_33_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
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

double * conga_ip_33_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
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

double * conga_ip_33_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[3] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[2] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[1] * b[9]  + a[3] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e1ni
	r[7] = a[0] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8] ;
	
	
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

double * conga_ip_33_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[0]  + a[3] * b[7]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[1]  + a[2] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[2]  + a[1] * b[7]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[3] ;
	
	
	//_e13ni
	r[7] = a[0] * b[4] ;
	
	
	//_e23ni
	r[8] = a[0] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[6] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_33_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
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

double * conga_ip_33_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
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

double * conga_ip_33_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
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

double * conga_ip_33_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
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

double * conga_ip_33_125(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[0]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[0]  + a[3] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[1] * b[1]  + a[2] * b[2] ;
	
	
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

double * conga_ip_33_126(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[1] ;
	
	
	//_e23no
	r[3] = a[0] * b[2] ;
	
	
	//_e1noni
	r[4] = a[0] * b[3] ;
	
	
	//_e2noni
	r[5] = a[0] * b[4] ;
	
	
	//_e3noni
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_33_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
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

double * conga_ip_33_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
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

double * conga_ip_33_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[3] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[2] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[1] * b[10]  + a[3] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
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

double * conga_ip_33_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[0]  + a[3] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[1]  + a[2] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[2]  + a[1] * b[10]  * -1 ;
	
	
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
	
	
	//_e123noni
	r[14] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_33_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  + a[3] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  + a[2] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[1] * b[10]  + a[3] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
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

double * conga_ip_33_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7]  * -1  + a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3] ;
	
	
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

double * conga_ip_33_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
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

double * conga_ip_33_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
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

double * conga_ip_33_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7]  * -1  + a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
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

double * conga_ip_33_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[3] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[10]  + a[3] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
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

double * conga_ip_33_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[3] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[14] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[1] * b[14]  * -1 ;
	
	
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
	
	
	//_e123noni
	r[14] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_33_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[0]  + a[3] * b[9]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[1]  + a[2] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[2]  + a[1] * b[9]  * -1 ;
	
	
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
	
	
	//_e123noni
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_33_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e1no
	r[1] = a[0] * b[0]  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[1] * b[7]  + a[3] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5] ;
	
	
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

double * conga_ip_33_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[1] ;
	
	
	//_e23
	r[3] = a[0] * b[2] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[1] * b[10]  + a[3] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
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

double * conga_ip_33_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
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

double * conga_ip_33_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[3] * b[7]  * -1 ;
	
	
	//_e13no
	r[5] = a[2] * b[7] ;
	
	
	//_e23no
	r[6] = a[1] * b[7]  * -1 ;
	
	
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

double * conga_ip_33_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
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

double * conga_ip_33_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  + a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[0]  * -1  + a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[3] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[2] * b[6] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[1] ;
	
	
	//_e23ni
	r[9] = a[0] * b[2] ;
	
	
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

double * conga_ip_33_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e1no
	r[1] = a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[4]  + a[3] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[1] * b[5]  + a[2] * b[6] ;
	
	
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

double * conga_ip_33_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
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

double * conga_ip_33_147(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_148(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_149(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_150(double * a, double * b, double *r) { 
	
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

double * conga_ip_33_151(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  + a[1] * b[4]  + a[3] * b[6]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123no
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_33_152(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[3] * b[7]  * -1 ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[7] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[1] * b[7]  * -1 ;
	
	
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

double * conga_ip_33_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[1] ;
	
	
	//_e12no
	r[5] = a[0] * b[2]  + a[3] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[3]  + a[2] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[4]  + a[1] * b[11]  * -1 ;
	
	
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
	
	
	//_e123noni
	r[14] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_33_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
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

double * conga_ip_33_155(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_33_156(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  + a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  + a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
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

double * conga_ip_33_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  + a[1] * b[8]  + a[3] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
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

double * conga_ip_33_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[3] = a[0] * b[3]  + a[3] * b[10]  * -1 ;
	
	
	//_e13no
	r[4] = a[0] * b[4]  + a[2] * b[10] ;
	
	
	//_e23no
	r[5] = a[0] * b[5]  + a[1] * b[10]  * -1 ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_33_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[3] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[10]  + a[3] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
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

double * conga_ip_33_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7]  * -1  + a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3] ;
	
	
	//_e12no
	r[5] = a[0] * b[4]  + a[3] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[0] * b[5]  + a[2] * b[13] ;
	
	
	//_e23no
	r[7] = a[0] * b[6]  + a[1] * b[13]  * -1 ;
	
	
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
	
	
	//_e123noni
	r[14] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_33_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[7]  * -1  + a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[3] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[1] * b[13]  * -1 ;
	
	
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
	
	
	//_e123noni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_33_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[1] ;
	
	
	//_e13
	r[2] = a[0] * b[2] ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[1] * b[10]  + a[3] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
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

double * conga_ip_33_163(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  + a[1] * b[4]  + a[3] * b[6]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
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

double * conga_ip_33_164(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[0]  + a[3] * b[6]  * -1 ;
	
	
	//_e13no
	r[2] = a[0] * b[1]  + a[2] * b[6] ;
	
	
	//_e23no
	r[3] = a[0] * b[2]  + a[1] * b[6]  * -1 ;
	
	
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

double * conga_ip_33_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
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

double * conga_ip_33_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
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

double * conga_ip_33_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[12]  + a[2] * b[13]  + a[3] * b[14] ;
	
	
	//_e1
	r[1] = a[0] * b[1]  + a[2] * b[19]  + a[3] * b[20] ;
	
	
	//_e2
	r[2] = a[0] * b[2]  + a[1] * b[19]  * -1  + a[3] * b[21] ;
	
	
	//_e3
	r[3] = a[0] * b[3]  + a[1] * b[20]  * -1  + a[2] * b[21]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[4]  + a[1] * b[22]  * -1  + a[2] * b[23]  * -1  + a[3] * b[24]  * -1 ;
	
	
	//_ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12
	r[6] = a[0] * b[6]  + a[3] * b[30] ;
	
	
	//_e13
	r[7] = a[0] * b[7]  + a[2] * b[30]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[8]  + a[1] * b[30] ;
	
	
	//_e1no
	r[9] = a[0] * b[9]  + a[2] * b[26]  * -1  + a[3] * b[27]  * -1 ;
	
	
	//_e2no
	r[10] = a[0] * b[10]  + a[1] * b[26]  + a[3] * b[28]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[11]  + a[1] * b[27]  + a[2] * b[28] ;
	
	
	//_e1ni
	r[12] = a[0] * b[12] ;
	
	
	//_e2ni
	r[13] = a[0] * b[13] ;
	
	
	//_e3ni
	r[14] = a[0] * b[14] ;
	
	
	//_noni
	r[15] = a[0] * b[15] ;
	
	
	//_e12no
	r[16] = a[0] * b[16]  + a[3] * b[31]  * -1 ;
	
	
	//_e13no
	r[17] = a[0] * b[17]  + a[2] * b[31] ;
	
	
	//_e23no
	r[18] = a[0] * b[18]  + a[1] * b[31]  * -1 ;
	
	
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


