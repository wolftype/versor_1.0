
#include "conga_ip_Pnt.h"


double * conga_ip_7_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_7_2(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_3(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_4(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[0] ;
	
	
	//_ni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_6(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[2] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[0] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_ip_7_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[6]  + a[4] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[4] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_9(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[9]  + a[3] * b[3]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[9]  + a[3] * b[5]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[4] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[4]  + a[1] * b[5]  + a[4] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_7_10(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[3]  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[3]  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[2] * b[4]  + a[4] * b[0]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4]  + a[4] * b[2]  * -1 ;
	
	
	//_e1noni
	r[6] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e123
	r[9] = a[3] * b[4]  + a[4] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[6]  + a[4] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_7_12(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_7_13(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_7_14(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[2] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_7_15(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0] ;
	
	
	//_e2
	r[1] = a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[4] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_7_16(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[4] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[4] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_7_17(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[0] ;
	
	
	//_e123
	r[3] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_ip_7_18(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[5]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[4] * b[3] ;
	
	
	//_e2ni
	r[7] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e3ni
	r[8] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[5] ;
	
	
	//_noni
	r[9] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_19(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[2] * b[3]  + a[4] * b[0]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3]  + a[4] * b[2]  * -1 ;
	
	
	//_e1noni
	r[6] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e123
	r[9] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_20(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[3] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_21(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_22(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_23(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_7_24(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_7_25(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_7_26(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[4] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_28(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3]  + a[4] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3]  + a[4] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_7_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_31(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[1] ;
	
	
	//_ni
	r[1] = a[4] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_7_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1] ;
	
	
	//_e2
	r[1] = a[4] * b[2] ;
	
	
	//_e3
	r[2] = a[4] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[3] * b[7] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[3] * b[8] ;
	
	
	//_e13no
	r[6] = a[3] * b[9] ;
	
	
	//_e23no
	r[7] = a[3] * b[10] ;
	
	
	//_e12ni
	r[8] = a[2] * b[11]  + a[4] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[11]  + a[4] * b[10]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e123
	r[14] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_7_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[3] * b[4] ;
	
	
	//_ni
	r[4] = a[4] * b[4]  * -1 ;
	
	
	//_e12no
	r[5] = a[3] * b[5] ;
	
	
	//_e13no
	r[6] = a[3] * b[6] ;
	
	
	//_e23no
	r[7] = a[3] * b[7] ;
	
	
	//_e12ni
	r[8] = a[4] * b[5]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[6]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[7]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_7_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12no
	r[4] = a[2] * b[7] ;
	
	
	//_e13no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[7] ;
	
	
	//_e123
	r[7] = a[4] * b[7] ;
	
	
	return r;
}

double * conga_ip_7_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[3] * b[4] ;
	
	
	//_ni
	r[4] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[4] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[9]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[3] * b[11] ;
	
	
	//_e13no
	r[6] = a[3] * b[12] ;
	
	
	//_e23no
	r[7] = a[3] * b[13] ;
	
	
	//_e12ni
	r[8] = a[4] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[13]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_7_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1] ;
	
	
	//_e2
	r[1] = a[4] * b[2] ;
	
	
	//_e3
	r[2] = a[4] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_ni
	r[4] = a[4] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[9]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[14]  + a[3] * b[11] ;
	
	
	//_e13no
	r[6] = a[1] * b[14]  * -1  + a[3] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e12ni
	r[8] = a[2] * b[15]  + a[4] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[15]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[15]  + a[4] * b[13]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e123
	r[14] = a[3] * b[15]  + a[4] * b[14] ;
	
	
	return r;
}

double * conga_ip_7_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[4] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[4] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_43(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[0] ;
	
	
	//_ni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e12no
	r[2] = a[3] * b[1] ;
	
	
	//_e13no
	r[3] = a[3] * b[2] ;
	
	
	//_e23no
	r[4] = a[3] * b[3] ;
	
	
	//_e12ni
	r[5] = a[4] * b[1]  * -1 ;
	
	
	//_e13ni
	r[6] = a[4] * b[2]  * -1 ;
	
	
	//_e23ni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[5]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[6]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[2] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  + a[1] * b[4] ;
	
	
	//_e1ni
	r[7] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_7_45(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[4] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[1] ;
	
	
	//_e3ni
	r[5] = a[4] * b[2] ;
	
	
	//_noni
	r[6] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12noni
	r[7] = a[2] * b[3] ;
	
	
	//_e13noni
	r[8] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[3] ;
	
	
	//_e123no
	r[10] = a[3] * b[3]  * -1 ;
	
	
	//_e123ni
	r[11] = a[4] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[3] * b[9]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[10]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_7_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[9]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[10]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[4] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[4] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[4] * b[13] ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_e12noni
	r[11] = a[2] * b[15] ;
	
	
	//_e13noni
	r[12] = a[1] * b[15]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[15] ;
	
	
	//_e123no
	r[14] = a[3] * b[15]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[15] ;
	
	
	return r;
}

double * conga_ip_7_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  + a[4] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  + a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  + a[4] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[10]  + a[3] * b[7] ;
	
	
	//_e13no
	r[6] = a[1] * b[10]  * -1  + a[3] * b[8] ;
	
	
	//_e23no
	r[7] = a[0] * b[10]  + a[3] * b[9] ;
	
	
	//_e12ni
	r[8] = a[2] * b[11]  + a[4] * b[7]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[11]  + a[4] * b[9]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_e123
	r[14] = a[3] * b[11]  + a[4] * b[10] ;
	
	
	return r;
}

double * conga_ip_7_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[9]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[10] ;
	
	
	//_e13no
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[2] * b[11] ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[11] ;
	
	
	//_e123
	r[11] = a[3] * b[11]  + a[4] * b[10] ;
	
	
	return r;
}

double * conga_ip_7_50(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12ni
	r[4] = a[2] * b[3] ;
	
	
	//_e13ni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	//_e123
	r[7] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0] ;
	
	
	//_e2
	r[1] = a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[4] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12no
	r[4] = a[2] * b[3] ;
	
	
	//_e13no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	//_e123
	r[7] = a[4] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[2]  + a[1] * b[3]  + a[4] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12noni
	r[11] = a[2] * b[7] ;
	
	
	//_e13noni
	r[12] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7] ;
	
	
	//_e123no
	r[14] = a[3] * b[7]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[7] ;
	
	
	return r;
}

double * conga_ip_7_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[3] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[3] * b[4] ;
	
	
	//_e13no
	r[6] = a[3] * b[5] ;
	
	
	//_e23no
	r[7] = a[3] * b[6] ;
	
	
	//_e12ni
	r[8] = a[2] * b[7]  + a[4] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7]  + a[4] * b[6]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e123
	r[14] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_7_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_55(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[4] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[4] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[4] * b[4] ;
	
	
	//_e2ni
	r[5] = a[4] * b[5] ;
	
	
	//_e3ni
	r[6] = a[4] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[3] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[4] * b[5] ;
	
	
	//_e2ni
	r[5] = a[4] * b[6] ;
	
	
	//_e3ni
	r[6] = a[4] * b[7] ;
	
	
	//_noni
	r[7] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_ip_7_59(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12noni
	r[6] = a[2] * b[3] ;
	
	
	//_e13noni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[3] ;
	
	
	//_e123no
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e123ni
	r[10] = a[4] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[3] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[4] * b[8] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[4] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[1] * b[7]  + a[4] * b[10] ;
	
	
	//_noni
	r[10] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_7_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[9]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[3] * b[11] ;
	
	
	//_e13no
	r[6] = a[3] * b[12] ;
	
	
	//_e23no
	r[7] = a[3] * b[13] ;
	
	
	//_e12ni
	r[8] = a[2] * b[14]  + a[4] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[14]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[14]  + a[4] * b[13]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e123
	r[14] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_7_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[9]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[4] * b[10] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[4] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[4] * b[12] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	//_e123no
	r[14] = a[3] * b[14]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[14] ;
	
	
	return r;
}

double * conga_ip_7_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[4] = a[2] * b[9]  + a[3] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[9]  * -1  + a[3] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[9]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[7] = a[2] * b[10]  + a[4] * b[6]  * -1 ;
	
	
	//_e13ni
	r[8] = a[1] * b[10]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[10]  + a[4] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e123
	r[13] = a[3] * b[10]  + a[4] * b[9] ;
	
	
	return r;
}

double * conga_ip_7_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_ni
	r[4] = a[4] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[3] * b[8] ;
	
	
	//_e13no
	r[6] = a[3] * b[9] ;
	
	
	//_e23no
	r[7] = a[3] * b[10] ;
	
	
	//_e12ni
	r[8] = a[4] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[10]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_7_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[4] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[4] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[6] ;
	
	
	//_e2ni
	r[8] = a[4] * b[7] ;
	
	
	//_e3ni
	r[9] = a[4] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	//_e123no
	r[14] = a[3] * b[10]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[10] ;
	
	
	return r;
}

double * conga_ip_7_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12no
	r[3] = a[2] * b[6]  + a[3] * b[3] ;
	
	
	//_e13no
	r[4] = a[1] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[6]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[6] = a[4] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[4] * b[5]  * -1 ;
	
	
	//_e1noni
	r[9] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[11] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e123
	r[12] = a[4] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[2]  + a[1] * b[3]  + a[4] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12no
	r[4] = a[3] * b[3] ;
	
	
	//_e13no
	r[5] = a[3] * b[4] ;
	
	
	//_e23no
	r[6] = a[3] * b[5] ;
	
	
	//_e12ni
	r[7] = a[2] * b[6]  + a[4] * b[3]  * -1 ;
	
	
	//_e13ni
	r[8] = a[1] * b[6]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[6]  + a[4] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e123
	r[13] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12ni
	r[4] = a[2] * b[6] ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e123
	r[7] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_71(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_7_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[12]  + a[3] * b[6]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[12]  * -1  + a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[12]  + a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[11]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[4] * b[9] ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[4] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[4] * b[11] ;
	
	
	//_noni
	r[10] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123no
	r[14] = a[3] * b[13]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[13] ;
	
	
	return r;
}

double * conga_ip_7_73(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e12noni
	r[3] = a[2] * b[1] ;
	
	
	//_e13noni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[1] ;
	
	
	//_e123no
	r[6] = a[3] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[4] * b[1] ;
	
	
	return r;
}

double * conga_ip_7_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12no
	r[3] = a[2] * b[6]  + a[3] * b[3] ;
	
	
	//_e13no
	r[4] = a[1] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[6]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[6] = a[2] * b[7]  + a[4] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[7]  + a[4] * b[5]  * -1 ;
	
	
	//_e1noni
	r[9] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[11] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e123
	r[12] = a[3] * b[7]  + a[4] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[6]  + a[4] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12no
	r[5] = a[3] * b[9] ;
	
	
	//_e13no
	r[6] = a[3] * b[10] ;
	
	
	//_e23no
	r[7] = a[3] * b[11] ;
	
	
	//_e12ni
	r[8] = a[4] * b[9]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[11]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_7_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[3] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[4] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[4] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_7_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12no
	r[3] = a[3] * b[3] ;
	
	
	//_e13no
	r[4] = a[3] * b[4] ;
	
	
	//_e23no
	r[5] = a[3] * b[5] ;
	
	
	//_e12ni
	r[6] = a[2] * b[6]  + a[4] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[6]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[6]  + a[4] * b[5]  * -1 ;
	
	
	//_e1noni
	r[9] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[11] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e123
	r[12] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[4] = a[3] * b[6] ;
	
	
	//_e13no
	r[5] = a[3] * b[7] ;
	
	
	//_e23no
	r[6] = a[3] * b[8] ;
	
	
	//_e12ni
	r[7] = a[4] * b[6]  * -1 ;
	
	
	//_e13ni
	r[8] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[4] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_7_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[4] * b[4] ;
	
	
	//_e2ni
	r[5] = a[4] * b[5] ;
	
	
	//_e3ni
	r[6] = a[4] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1no
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[4] * b[3] ;
	
	
	//_e2ni
	r[5] = a[4] * b[4] ;
	
	
	//_e3ni
	r[6] = a[4] * b[5] ;
	
	
	//_noni
	r[7] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12no
	r[3] = a[3] * b[3] ;
	
	
	//_e13no
	r[4] = a[3] * b[4] ;
	
	
	//_e23no
	r[5] = a[3] * b[5] ;
	
	
	//_e12ni
	r[6] = a[4] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[4] * b[5]  * -1 ;
	
	
	//_e1noni
	r[9] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[10] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[11] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[4] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[4] = a[3] * b[6] ;
	
	
	//_e13no
	r[5] = a[3] * b[7] ;
	
	
	//_e23no
	r[6] = a[3] * b[8] ;
	
	
	//_e12ni
	r[7] = a[4] * b[6]  * -1 ;
	
	
	//_e13ni
	r[8] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[4] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_7_83(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3]  + a[4] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3]  + a[4] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12noni
	r[6] = a[2] * b[4] ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123no
	r[9] = a[3] * b[4]  * -1 ;
	
	
	//_e123ni
	r[10] = a[4] * b[4] ;
	
	
	return r;
}

double * conga_ip_7_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[4] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[4] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[7] ;
	
	
	//_e2ni
	r[8] = a[4] * b[8] ;
	
	
	//_e3ni
	r[9] = a[4] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12noni
	r[11] = a[2] * b[11] ;
	
	
	//_e13noni
	r[12] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	//_e123no
	r[14] = a[3] * b[11]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[11] ;
	
	
	return r;
}

double * conga_ip_7_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_ni
	r[4] = a[4] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[11]  + a[3] * b[8] ;
	
	
	//_e13no
	r[6] = a[1] * b[11]  * -1  + a[3] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[11]  + a[3] * b[10] ;
	
	
	//_e12ni
	r[8] = a[4] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[10]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e123
	r[14] = a[4] * b[11] ;
	
	
	return r;
}

double * conga_ip_7_86(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0] ;
	
	
	//_e2
	r[1] = a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[4] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_ni
	r[4] = a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_87(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[4] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[4] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12noni
	r[6] = a[2] * b[3] ;
	
	
	//_e13noni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[3] ;
	
	
	//_e123no
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e123ni
	r[10] = a[4] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[4] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[8] ;
	
	
	//_e2ni
	r[8] = a[4] * b[9] ;
	
	
	//_e3ni
	r[9] = a[4] * b[10] ;
	
	
	//_noni
	r[10] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_7_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[9]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[14]  + a[3] * b[11] ;
	
	
	//_e13no
	r[6] = a[1] * b[14]  * -1  + a[3] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e12ni
	r[8] = a[4] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[13]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e123
	r[14] = a[4] * b[14] ;
	
	
	return r;
}

double * conga_ip_7_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[9]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[4] * b[10] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[4] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[4] * b[12] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	//_e123no
	r[14] = a[3] * b[14]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[14] ;
	
	
	return r;
}

double * conga_ip_7_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[4] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[4] = a[2] * b[9]  + a[3] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[9]  * -1  + a[3] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[9]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[7] = a[2] * b[10]  + a[4] * b[6]  * -1 ;
	
	
	//_e13ni
	r[8] = a[1] * b[10]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[10]  + a[4] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e123
	r[13] = a[3] * b[10]  + a[4] * b[9] ;
	
	
	return r;
}

double * conga_ip_7_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[3] * b[7] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[3] * b[8] ;
	
	
	//_e13no
	r[6] = a[3] * b[9] ;
	
	
	//_e23no
	r[7] = a[3] * b[10] ;
	
	
	//_e12ni
	r[8] = a[4] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[10]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_7_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[3] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[4] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[4] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	//_e123no
	r[14] = a[3] * b[10]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[10] ;
	
	
	return r;
}

double * conga_ip_7_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[4] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[4] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[4] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[4] = a[2] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e123
	r[7] = a[4] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[3] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[4] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5]  + a[1] * b[6]  + a[4] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12noni
	r[11] = a[2] * b[11] ;
	
	
	//_e13noni
	r[12] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	//_e123no
	r[14] = a[3] * b[11]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[11] ;
	
	
	return r;
}

double * conga_ip_7_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[4] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[4] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[7] ;
	
	
	//_e2ni
	r[8] = a[4] * b[8] ;
	
	
	//_e3ni
	r[9] = a[4] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_7_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[4] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[4] = a[2] * b[9]  + a[3] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[9]  * -1  + a[3] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[9]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[7] = a[4] * b[6]  * -1 ;
	
	
	//_e13ni
	r[8] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[4] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e123
	r[13] = a[4] * b[9] ;
	
	
	return r;
}

double * conga_ip_7_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[6] ;
	
	
	//_e2ni
	r[8] = a[4] * b[7] ;
	
	
	//_e3ni
	r[9] = a[4] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_7_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[3] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[4] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5]  + a[1] * b[6]  + a[4] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_7_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[4] = a[3] * b[6] ;
	
	
	//_e13no
	r[5] = a[3] * b[7] ;
	
	
	//_e23no
	r[6] = a[3] * b[8] ;
	
	
	//_e12ni
	r[7] = a[2] * b[9]  + a[4] * b[6]  * -1 ;
	
	
	//_e13ni
	r[8] = a[1] * b[9]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[4] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e123
	r[13] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_7_102(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12noni
	r[6] = a[2] * b[4] ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123no
	r[9] = a[3] * b[4]  * -1 ;
	
	
	//_e123ni
	r[10] = a[4] * b[4] ;
	
	
	return r;
}

double * conga_ip_7_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[3] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[4]  * -1 ;
	
	
	//_e1ni
	r[4] = a[4] * b[2] ;
	
	
	//_e2ni
	r[5] = a[4] * b[3] ;
	
	
	//_e3ni
	r[6] = a[4] * b[4] ;
	
	
	//_noni
	r[7] = a[0] * b[2]  + a[1] * b[3]  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_ip_7_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4]  + a[4] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  + a[4] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  + a[4] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12no
	r[5] = a[3] * b[7] ;
	
	
	//_e13no
	r[6] = a[3] * b[8] ;
	
	
	//_e23no
	r[7] = a[3] * b[9] ;
	
	
	//_e12ni
	r[8] = a[4] * b[7]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[9]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_7_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[6]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e12noni
	r[10] = a[2] * b[9] ;
	
	
	//_e13noni
	r[11] = a[1] * b[9]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[9] ;
	
	
	//_e123no
	r[13] = a[3] * b[9]  * -1 ;
	
	
	//_e123ni
	r[14] = a[4] * b[9] ;
	
	
	return r;
}

double * conga_ip_7_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12no
	r[3] = a[2] * b[3] ;
	
	
	//_e13no
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[3] ;
	
	
	//_e12ni
	r[6] = a[2] * b[4] ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[4] ;
	
	
	//_e123
	r[9] = a[3] * b[4]  + a[4] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  + a[4] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  + a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  + a[4] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[5] = a[3] * b[6] ;
	
	
	//_e13no
	r[6] = a[3] * b[7] ;
	
	
	//_e23no
	r[7] = a[3] * b[8] ;
	
	
	//_e12ni
	r[8] = a[4] * b[6]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[8]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_7_108(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12ni
	r[3] = a[2] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	//_e123
	r[6] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12no
	r[4] = a[3] * b[3] ;
	
	
	//_e13no
	r[5] = a[3] * b[4] ;
	
	
	//_e23no
	r[6] = a[3] * b[5] ;
	
	
	//_e12ni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e13ni
	r[8] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[4] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[4] * b[1] ;
	
	
	//_e2ni
	r[5] = a[4] * b[2] ;
	
	
	//_e3ni
	r[6] = a[4] * b[3] ;
	
	
	//_noni
	r[7] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_112(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[4] * b[0] ;
	
	
	//_e2ni
	r[4] = a[4] * b[1] ;
	
	
	//_e3ni
	r[5] = a[4] * b[2] ;
	
	
	//_noni
	r[6] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_7_113(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[4] * b[0]  * -1 ;
	
	
	//_e13ni
	r[4] = a[4] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1 ;
	
	
	//_e1noni
	r[6] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_7_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[4] * b[1] ;
	
	
	//_e2ni
	r[5] = a[4] * b[2] ;
	
	
	//_e3ni
	r[6] = a[4] * b[3] ;
	
	
	//_noni
	r[7] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0] ;
	
	
	//_e2
	r[1] = a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[4] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12no
	r[4] = a[3] * b[3] ;
	
	
	//_e13no
	r[5] = a[3] * b[4] ;
	
	
	//_e23no
	r[6] = a[3] * b[5] ;
	
	
	//_e12ni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e13ni
	r[8] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[4] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_116(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[0] ;
	
	
	//_e12ni
	r[3] = a[2] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[1] ;
	
	
	//_e123
	r[6] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_ip_7_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4]  + a[4] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  + a[4] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  + a[4] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[7] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[9]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[10]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[4] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[4] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[4] * b[13] ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_7_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[6]  + a[4] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[12]  + a[3] * b[9] ;
	
	
	//_e13no
	r[6] = a[1] * b[12]  * -1  + a[3] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[12]  + a[3] * b[11] ;
	
	
	//_e12ni
	r[8] = a[2] * b[13]  + a[4] * b[9]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[13]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[13]  + a[4] * b[11]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	//_e123
	r[14] = a[3] * b[13]  + a[4] * b[12] ;
	
	
	return r;
}

double * conga_ip_7_120(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[6]  + a[3] * b[3]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[8] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e12noni
	r[9] = a[2] * b[7] ;
	
	
	//_e13noni
	r[10] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[7] ;
	
	
	//_e123no
	r[12] = a[3] * b[7]  * -1 ;
	
	
	//_e123ni
	r[13] = a[4] * b[7] ;
	
	
	return r;
}

double * conga_ip_7_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[6]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[11]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[4] * b[9] ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[4] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[4] * b[11] ;
	
	
	//_noni
	r[10] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	return r;
}

double * conga_ip_7_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  + a[4] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  + a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  + a[4] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_123(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[3] * b[4]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[5]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[8] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_124(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[3] * b[4]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[5]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[4] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[4]  + a[1] * b[5]  + a[4] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_7_125(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[3]  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[3]  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[4] * b[0]  * -1 ;
	
	
	//_e13ni
	r[4] = a[4] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[4] * b[2]  * -1 ;
	
	
	//_e1noni
	r[6] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[7] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[8] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e123
	r[9] = a[4] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_126(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[4] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[4] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  * -1 ;
	
	
	//_e1ni
	r[6] = a[4] * b[3] ;
	
	
	//_e2ni
	r[7] = a[4] * b[4] ;
	
	
	//_e3ni
	r[8] = a[4] * b[5] ;
	
	
	//_noni
	r[9] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[9]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[9]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[10]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[4] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[4] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[4] * b[13] ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_7_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[6]  + a[4] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[4] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[8] = a[2] * b[14]  + a[4] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[14]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[14]  + a[4] * b[12]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e123
	r[14] = a[3] * b[14]  + a[4] * b[13] ;
	
	
	return r;
}

double * conga_ip_7_130(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[9]  + a[3] * b[3]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[9]  + a[3] * b[5]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[4] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[4]  + a[1] * b[5]  + a[4] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[10] = a[2] * b[10] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[10] ;
	
	
	//_e123no
	r[13] = a[3] * b[10]  * -1 ;
	
	
	//_e123ni
	r[14] = a[4] * b[10] ;
	
	
	return r;
}

double * conga_ip_7_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[6]  + a[4] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[4] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[3] * b[10] ;
	
	
	//_e13no
	r[6] = a[3] * b[11] ;
	
	
	//_e23no
	r[7] = a[3] * b[12] ;
	
	
	//_e12ni
	r[8] = a[2] * b[13]  + a[4] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[13]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[13]  + a[4] * b[12]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e123
	r[14] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_7_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[9]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[4] * b[10] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[4] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[4] * b[12] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_7_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[9]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_7_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[6]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_7_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[9]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[4] * b[10] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[4] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[4] * b[12] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_7_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[9]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[8] = a[2] * b[14]  + a[4] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[14]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[14]  + a[4] * b[12]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e123
	r[14] = a[3] * b[14]  + a[4] * b[13] ;
	
	
	return r;
}

double * conga_ip_7_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[9]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[10]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[4] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[4] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[4] * b[13] ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	//_e123no
	r[14] = a[3] * b[14]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[14] ;
	
	
	return r;
}

double * conga_ip_7_138(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[3] * b[4]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[5]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[4] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[4]  + a[1] * b[5]  + a[4] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[10] = a[2] * b[9] ;
	
	
	//_e13noni
	r[11] = a[1] * b[9]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[9] ;
	
	
	//_e123no
	r[13] = a[3] * b[9]  * -1 ;
	
	
	//_e123ni
	r[14] = a[4] * b[9] ;
	
	
	return r;
}

double * conga_ip_7_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  + a[4] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  + a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  + a[4] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  * -1 ;
	
	
	//_e12no
	r[5] = a[3] * b[7] ;
	
	
	//_e13no
	r[6] = a[3] * b[8] ;
	
	
	//_e23no
	r[7] = a[3] * b[9] ;
	
	
	//_e12ni
	r[8] = a[4] * b[7]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[9]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_7_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[6]  + a[4] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[4] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[8] = a[4] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[12]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e123
	r[14] = a[4] * b[13] ;
	
	
	return r;
}

double * conga_ip_7_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[6]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_7_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[3] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[3] ;
	
	
	//_e2ni
	r[8] = a[4] * b[4] ;
	
	
	//_e3ni
	r[9] = a[4] * b[5] ;
	
	
	//_noni
	r[10] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[11] = a[2] * b[7] ;
	
	
	//_e13noni
	r[12] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7] ;
	
	
	//_e123no
	r[14] = a[3] * b[7]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[7] ;
	
	
	return r;
}

double * conga_ip_7_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_144(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[5]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[4] * b[3] ;
	
	
	//_e2ni
	r[7] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e3ni
	r[8] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[5] ;
	
	
	//_noni
	r[9] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[10] = a[2] * b[6] ;
	
	
	//_e13noni
	r[11] = a[1] * b[6]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[6] ;
	
	
	//_e123no
	r[13] = a[3] * b[6]  * -1 ;
	
	
	//_e123ni
	r[14] = a[4] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[3] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[3] * b[4] ;
	
	
	//_e13no
	r[6] = a[3] * b[5] ;
	
	
	//_e23no
	r[7] = a[3] * b[6] ;
	
	
	//_e12ni
	r[8] = a[4] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[6]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[4] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[4] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12no
	r[3] = a[2] * b[3] ;
	
	
	//_e13no
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[3] ;
	
	
	//_e123
	r[6] = a[4] * b[3] ;
	
	
	return r;
}

double * conga_ip_7_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0] ;
	
	
	//_e2
	r[1] = a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[4] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_ni
	r[4] = a[4] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[7]  + a[3] * b[4] ;
	
	
	//_e13no
	r[6] = a[1] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[6] ;
	
	
	//_e12ni
	r[8] = a[4] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[6]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e123
	r[14] = a[4] * b[7] ;
	
	
	return r;
}

double * conga_ip_7_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[4] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[4] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[4] ;
	
	
	//_e2ni
	r[8] = a[4] * b[5] ;
	
	
	//_e3ni
	r[9] = a[4] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12noni
	r[11] = a[2] * b[7] ;
	
	
	//_e13noni
	r[12] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7] ;
	
	
	//_e123no
	r[14] = a[3] * b[7]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[7] ;
	
	
	return r;
}

double * conga_ip_7_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[5]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[6]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[2] * b[4]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  + a[1] * b[4]  + a[3] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[4] * b[8] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[4] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[1] * b[7]  + a[4] * b[10] ;
	
	
	//_noni
	r[10] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_e12noni
	r[11] = a[2] * b[11] ;
	
	
	//_e13noni
	r[12] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	//_e123no
	r[14] = a[3] * b[11]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[11] ;
	
	
	return r;
}

double * conga_ip_7_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  + a[4] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  + a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  + a[4] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6] ;
	
	
	//_e13no
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[2] * b[7] ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7] ;
	
	
	//_e123
	r[11] = a[3] * b[7]  + a[4] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[4] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[4] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[4] ;
	
	
	//_e2ni
	r[8] = a[4] * b[5] ;
	
	
	//_e3ni
	r[9] = a[4] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0] ;
	
	
	//_e2
	r[1] = a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[4] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12no
	r[4] = a[2] * b[6]  + a[3] * b[3] ;
	
	
	//_e13no
	r[5] = a[1] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e13ni
	r[8] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[4] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e123
	r[13] = a[4] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4]  + a[4] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  + a[4] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  + a[4] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[7] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[3] * b[8] ;
	
	
	//_e13no
	r[6] = a[3] * b[9] ;
	
	
	//_e23no
	r[7] = a[3] * b[10] ;
	
	
	//_e12ni
	r[8] = a[4] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[10]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_7_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[6]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e12noni
	r[10] = a[2] * b[10] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[10] ;
	
	
	//_e123no
	r[13] = a[3] * b[10]  * -1 ;
	
	
	//_e123ni
	r[14] = a[4] * b[10] ;
	
	
	return r;
}

double * conga_ip_7_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[9]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12no
	r[5] = a[3] * b[10] ;
	
	
	//_e13no
	r[6] = a[3] * b[11] ;
	
	
	//_e23no
	r[7] = a[3] * b[12] ;
	
	
	//_e12ni
	r[8] = a[2] * b[13]  + a[4] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[13]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[13]  + a[4] * b[12]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e123
	r[14] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_7_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[9]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[4] * b[10] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[4] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[4] * b[12] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123no
	r[14] = a[3] * b[13]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[13] ;
	
	
	return r;
}

double * conga_ip_7_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[7]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[8]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[9]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[4] * b[10] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[4] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[4] * b[12] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123no
	r[14] = a[3] * b[13]  * -1 ;
	
	
	//_e123ni
	r[15] = a[4] * b[13] ;
	
	
	return r;
}

double * conga_ip_7_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[7]  + a[4] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[8]  + a[4] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[9]  + a[4] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[8] = a[4] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[12]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e123
	r[14] = a[4] * b[13] ;
	
	
	return r;
}

double * conga_ip_7_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0] ;
	
	
	//_e2
	r[1] = a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[4] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_ni
	r[4] = a[4] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[3] * b[4] ;
	
	
	//_e13no
	r[6] = a[3] * b[5] ;
	
	
	//_e23no
	r[7] = a[3] * b[6] ;
	
	
	//_e12ni
	r[8] = a[4] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[4] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[4] * b[6]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_164(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[4] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[4] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  * -1 ;
	
	
	//_e1ni
	r[6] = a[4] * b[3] ;
	
	
	//_e2ni
	r[7] = a[4] * b[4] ;
	
	
	//_e3ni
	r[8] = a[4] * b[5] ;
	
	
	//_noni
	r[9] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[10] = a[2] * b[6] ;
	
	
	//_e13noni
	r[11] = a[1] * b[6]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[6] ;
	
	
	//_e123no
	r[13] = a[3] * b[6]  * -1 ;
	
	
	//_e123ni
	r[14] = a[4] * b[6] ;
	
	
	return r;
}

double * conga_ip_7_165(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[6]  + a[3] * b[3]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6]  + a[3] * b[5]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[6] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[7] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[8] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_7_166(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  + a[4] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  + a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  + a[4] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_7_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[5]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e1
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[12]  + a[4] * b[9] ;
	
	
	//_e2
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[3] * b[13]  + a[4] * b[10] ;
	
	
	//_e3
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[3] * b[14]  + a[4] * b[11] ;
	
	
	//_no
	r[4] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[15] ;
	
	
	//_ni
	r[5] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14]  + a[4] * b[15]  * -1 ;
	
	
	//_e12
	r[6] = a[2] * b[25]  + a[3] * b[19]  * -1  + a[4] * b[16]  * -1 ;
	
	
	//_e13
	r[7] = a[1] * b[25]  * -1  + a[3] * b[20]  * -1  + a[4] * b[17]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[25]  + a[3] * b[21]  * -1  + a[4] * b[18]  * -1 ;
	
	
	//_e1no
	r[9] = a[1] * b[16]  * -1  + a[2] * b[17]  * -1  + a[3] * b[22]  * -1 ;
	
	
	//_e2no
	r[10] = a[0] * b[16]  + a[2] * b[18]  * -1  + a[3] * b[23]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[17]  + a[1] * b[18]  + a[3] * b[24]  * -1 ;
	
	
	//_e1ni
	r[12] = a[1] * b[19]  * -1  + a[2] * b[20]  * -1  + a[4] * b[22] ;
	
	
	//_e2ni
	r[13] = a[0] * b[19]  + a[2] * b[21]  * -1  + a[4] * b[23] ;
	
	
	//_e3ni
	r[14] = a[0] * b[20]  + a[1] * b[21]  + a[4] * b[24] ;
	
	
	//_noni
	r[15] = a[0] * b[22]  + a[1] * b[23]  + a[2] * b[24] ;
	
	
	//_e12no
	r[16] = a[2] * b[29]  + a[3] * b[26] ;
	
	
	//_e13no
	r[17] = a[1] * b[29]  * -1  + a[3] * b[27] ;
	
	
	//_e23no
	r[18] = a[0] * b[29]  + a[3] * b[28] ;
	
	
	//_e12ni
	r[19] = a[2] * b[30]  + a[4] * b[26]  * -1 ;
	
	
	//_e13ni
	r[20] = a[1] * b[30]  * -1  + a[4] * b[27]  * -1 ;
	
	
	//_e23ni
	r[21] = a[0] * b[30]  + a[4] * b[28]  * -1 ;
	
	
	//_e1noni
	r[22] = a[1] * b[26]  * -1  + a[2] * b[27]  * -1 ;
	
	
	//_e2noni
	r[23] = a[0] * b[26]  + a[2] * b[28]  * -1 ;
	
	
	//_e3noni
	r[24] = a[0] * b[27]  + a[1] * b[28] ;
	
	
	//_e123
	r[25] = a[3] * b[30]  + a[4] * b[29] ;
	
	
	//_e12noni
	r[26] = a[2] * b[31] ;
	
	
	//_e13noni
	r[27] = a[1] * b[31]  * -1 ;
	
	
	//_e23noni
	r[28] = a[0] * b[31] ;
	
	
	//_e123no
	r[29] = a[3] * b[31]  * -1 ;
	
	
	//_e123ni
	r[30] = a[4] * b[31] ;
	
	
	return r;
}


