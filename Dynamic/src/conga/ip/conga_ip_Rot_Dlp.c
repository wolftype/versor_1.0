
#include "conga_ip_Rot_Dlp.h"


double * conga_ip_54_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_54_2(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_54_4(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_6(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[5] * b[0] ;
	
	
	//_e3ni
	r[2] = a[4] * b[0]  * -1 ;
	
	
	//_noni
	r[3] = a[7] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[2] * b[0] ;
	
	
	//_e13noni
	r[5] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[0] ;
	
	
	//_e123ni
	r[7] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_54_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_54_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[7] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[4]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[3] ;
	
	
	//_e13no
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[3] ;
	
	
	//_e12ni
	r[8] = a[2] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[4]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e123
	r[14] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_54_12(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_54_13(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_54_14(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[7] * b[0]  * -1 ;
	
	
	//_e12ni
	r[1] = a[2] * b[0] ;
	
	
	//_e13ni
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_54_15(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_54_16(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_54_17(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[0] ;
	
	
	//_e3
	r[2] = a[4] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[7] * b[0]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[1] * b[0]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[0] ;
	
	
	//_e123
	r[7] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_54_18(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2ni
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_noni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_19(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[3]  * -1 ;
	
	
	//_e12ni
	r[1] = a[2] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e13ni
	r[2] = a[1] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_54_20(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_21(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_22(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_54_23(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_54_24(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_54_25(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_54_26(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_54_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_30(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_31(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[7] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_54_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10]  + a[7] * b[11]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[11]  + a[3] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[1] * b[11]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11]  + a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_54_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_ni
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e12ni
	r[4] = a[3] * b[5]  * -1 ;
	
	
	//_e13ni
	r[5] = a[3] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[7]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_54_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[7] * b[7]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[7] ;
	
	
	//_e13no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[7] ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_54_37(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  * -1  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12ni
	r[5] = a[3] * b[11]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[12]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[13]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_54_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_ni
	r[4] = a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[7] * b[14]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  * -1  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13]  + a[7] * b[15]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[14] ;
	
	
	//_e13no
	r[6] = a[1] * b[14]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[14] ;
	
	
	//_e12ni
	r[8] = a[2] * b[15]  + a[3] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[15]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[15]  + a[3] * b[13]  * -1 ;
	
	
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

double * conga_ip_54_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e12
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_42(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_43(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e12ni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e13ni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e23ni
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4] ;
	
	
	//_e12
	r[1] = a[3] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[4]  * -1 ;
	
	
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

double * conga_ip_54_45(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[3] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[3] * b[1]  + a[5] * b[3] ;
	
	
	//_e3ni
	r[2] = a[3] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[2] * b[3] ;
	
	
	//_e13noni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[3] ;
	
	
	//_e123ni
	r[7] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  + a[7] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[3] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[7]  * -1 ;
	
	
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

double * conga_ip_54_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  + a[7] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[11]  + a[6] * b[15]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[3] * b[12]  + a[5] * b[15] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[3] * b[13]  + a[4] * b[15]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13]  + a[7] * b[15]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[15] ;
	
	
	//_e13noni
	r[12] = a[1] * b[15]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[15] ;
	
	
	//_e123ni
	r[14] = a[3] * b[15] ;
	
	
	return r;
}

double * conga_ip_54_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9]  + a[7] * b[11]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[10] ;
	
	
	//_e13no
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[2] * b[11]  + a[3] * b[7]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[11]  + a[3] * b[9]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_e123
	r[14] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_54_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[7] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[7] * b[11]  * -1 ;
	
	
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
	r[11] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_54_50(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[3]  * -1 ;
	
	
	//_e12ni
	r[1] = a[2] * b[3] ;
	
	
	//_e13ni
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[3]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[3] ;
	
	
	//_e13no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	//_e123
	r[7] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_52(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[7]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[7] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[7] * b[7]  * -1 ;
	
	
	//_e12noni
	r[4] = a[2] * b[7] ;
	
	
	//_e13noni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7] ;
	
	
	//_e123ni
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_54_53(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  * -1 ;
	
	
	//_e12ni
	r[1] = a[2] * b[7]  + a[3] * b[4]  * -1 ;
	
	
	//_e13ni
	r[2] = a[1] * b[7]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[7]  + a[3] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_55(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[3] * b[4] ;
	
	
	//_e2ni
	r[2] = a[3] * b[5] ;
	
	
	//_e3ni
	r[3] = a[3] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[3] * b[5] ;
	
	
	//_e2ni
	r[2] = a[3] * b[6] ;
	
	
	//_e3ni
	r[3] = a[3] * b[7] ;
	
	
	//_noni
	r[4] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_ip_54_59(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[3] ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_noni
	r[3] = a[7] * b[3]  * -1 ;
	
	
	//_e12noni
	r[4] = a[2] * b[3] ;
	
	
	//_e13noni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[3] ;
	
	
	//_e123ni
	r[7] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e2ni
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[3] * b[9] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[10] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_54_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  * -1  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13]  + a[7] * b[14]  * -1 ;
	
	
	//_e12ni
	r[5] = a[2] * b[14]  + a[3] * b[11]  * -1 ;
	
	
	//_e13ni
	r[6] = a[1] * b[14]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[14]  + a[3] * b[13]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_54_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10]  + a[6] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[3] * b[11]  + a[5] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[3] * b[12]  + a[4] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12]  + a[7] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	//_e123ni
	r[14] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_54_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[7] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[9] ;
	
	
	//_e13no
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[2] * b[10]  + a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[10]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e123
	r[14] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_54_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[3] * b[7]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12ni
	r[5] = a[3] * b[8]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[9]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_54_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[3] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[3] * b[7]  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	//_e123ni
	r[14] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_54_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[7] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6] ;
	
	
	//_e13no
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e123
	r[14] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_67(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_noni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_68(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12ni
	r[1] = a[2] * b[6]  + a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[2] = a[1] * b[6]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[6] ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1ni
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_71(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_54_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[12]  + a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[12]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[12]  + a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[9]  + a[6] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[3] * b[10]  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[3] * b[11]  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11]  + a[7] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123ni
	r[14] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_54_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1ni
	r[4] = a[6] * b[1]  * -1 ;
	
	
	//_e2ni
	r[5] = a[5] * b[1] ;
	
	
	//_e3ni
	r[6] = a[4] * b[1]  * -1 ;
	
	
	//_noni
	r[7] = a[7] * b[1]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[1] ;
	
	
	//_e13noni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[1] ;
	
	
	//_e123ni
	r[11] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_ip_54_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[7] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[6] ;
	
	
	//_e13no
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[2] * b[7]  + a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7]  + a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e123
	r[14] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11] ;
	
	
	//_e12ni
	r[5] = a[3] * b[9]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[10]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[11]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_54_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_54_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_ni
	r[3] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[6]  + a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12ni
	r[4] = a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_54_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1ni
	r[1] = a[3] * b[4] ;
	
	
	//_e2ni
	r[2] = a[3] * b[5] ;
	
	
	//_e3ni
	r[3] = a[3] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1ni
	r[1] = a[3] * b[3] ;
	
	
	//_e2ni
	r[2] = a[3] * b[4] ;
	
	
	//_e3ni
	r[3] = a[3] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_ni
	r[3] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12ni
	r[4] = a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12ni
	r[5] = a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_54_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[6] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[5] * b[4] ;
	
	
	//_e3ni
	r[9] = a[4] * b[4]  * -1 ;
	
	
	//_noni
	r[10] = a[7] * b[4]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[4] ;
	
	
	//_e13noni
	r[12] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[4] ;
	
	
	//_e123ni
	r[14] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_54_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[3] * b[7]  + a[6] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[3] * b[8]  + a[5] * b[11] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  + a[4] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[7] * b[11]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[11] ;
	
	
	//_e13noni
	r[12] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	//_e123ni
	r[14] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_54_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[7] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12no
	r[5] = a[2] * b[11] ;
	
	
	//_e13no
	r[6] = a[1] * b[11]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[11] ;
	
	
	//_e12ni
	r[8] = a[3] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[10]  * -1 ;
	
	
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

double * conga_ip_54_86(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[6] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[5] * b[3] ;
	
	
	//_e3ni
	r[9] = a[4] * b[3]  * -1 ;
	
	
	//_noni
	r[10] = a[7] * b[3]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[3] ;
	
	
	//_e13noni
	r[12] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[3] ;
	
	
	//_e123ni
	r[14] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[3] * b[8] ;
	
	
	//_e2ni
	r[8] = a[3] * b[9] ;
	
	
	//_e3ni
	r[9] = a[3] * b[10] ;
	
	
	//_noni
	r[10] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_54_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[7] * b[14]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  * -1  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12no
	r[5] = a[2] * b[14] ;
	
	
	//_e13no
	r[6] = a[1] * b[14]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[14] ;
	
	
	//_e12ni
	r[8] = a[3] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[13]  * -1 ;
	
	
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

double * conga_ip_54_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10]  + a[6] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[3] * b[11]  + a[5] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[3] * b[12]  + a[4] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12]  + a[7] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	//_e123ni
	r[14] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_54_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[9] ;
	
	
	//_e13no
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[2] * b[10]  + a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[10]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e123
	r[14] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_54_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12ni
	r[4] = a[3] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[3] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_54_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7]  + a[5] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[10] ;
	
	
	//_e13noni
	r[9] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[10] ;
	
	
	//_e123ni
	r[11] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_54_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e123
	r[7] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[7]  + a[6] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[3] * b[8]  + a[5] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[9]  + a[4] * b[11]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[7] * b[11]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[11] ;
	
	
	//_e13noni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[11] ;
	
	
	//_e123ni
	r[11] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_54_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[3] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_54_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[9] ;
	
	
	//_e13no
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e123
	r[14] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_54_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[3] * b[6] ;
	
	
	//_e2ni
	r[8] = a[3] * b[7] ;
	
	
	//_e3ni
	r[9] = a[3] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_54_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1ni
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e2ni
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3ni
	r[3] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[9] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_54_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[9]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[9]  + a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[1] * b[9]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9]  + a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_54_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[4]  * -1 ;
	
	
	//_noni
	r[7] = a[7] * b[4]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[4] ;
	
	
	//_e13noni
	r[9] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[4] ;
	
	
	//_e123ni
	r[11] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_54_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e1ni
	r[1] = a[3] * b[2] ;
	
	
	//_e2ni
	r[2] = a[3] * b[3] ;
	
	
	//_e3ni
	r[3] = a[3] * b[4] ;
	
	
	//_noni
	r[4] = a[0] * b[2]  + a[1] * b[3]  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_ip_54_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e12ni
	r[5] = a[3] * b[7]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[8]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[9]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_54_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[4] * b[9]  * -1 ;
	
	
	//_noni
	r[10] = a[7] * b[9]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[9] ;
	
	
	//_e13noni
	r[12] = a[1] * b[9]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[9] ;
	
	
	//_e123ni
	r[14] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_54_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[7] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[7] * b[4]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[3] ;
	
	
	//_e13no
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[3] ;
	
	
	//_e12ni
	r[8] = a[2] * b[4] ;
	
	
	//_e13ni
	r[9] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[4] ;
	
	
	//_e123
	r[11] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12ni
	r[5] = a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_54_108(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_ni
	r[3] = a[7] * b[3]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[3] ;
	
	
	//_e13ni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_110(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12ni
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[3] = a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_111(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[3] * b[1] ;
	
	
	//_e2ni
	r[1] = a[3] * b[2] ;
	
	
	//_e3ni
	r[2] = a[3] * b[3] ;
	
	
	//_noni
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_112(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[3] * b[0] ;
	
	
	//_e2ni
	r[1] = a[3] * b[1] ;
	
	
	//_e3ni
	r[2] = a[3] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_54_113(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12ni
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13ni
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23ni
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_54_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e1ni
	r[1] = a[3] * b[1] ;
	
	
	//_e2ni
	r[2] = a[3] * b[2] ;
	
	
	//_e3ni
	r[3] = a[3] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12ni
	r[5] = a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[0] ;
	
	
	//_e3
	r[2] = a[4] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[7] * b[0]  * -1 ;
	
	
	//_ni
	r[4] = a[7] * b[1]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[0] ;
	
	
	//_e13no
	r[6] = a[1] * b[0]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[0] ;
	
	
	//_e12ni
	r[8] = a[2] * b[1] ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[1] ;
	
	
	//_e123
	r[11] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_54_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[3] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[3] * b[13] ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_54_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[12]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11]  + a[7] * b[13]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[12] ;
	
	
	//_e13no
	r[6] = a[1] * b[12]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[2] * b[13]  + a[3] * b[9]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[13]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[13]  + a[3] * b[11]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	//_e123
	r[14] = a[3] * b[12] ;
	
	
	return r;
}

double * conga_ip_54_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[4] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[7] * b[7]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[7] ;
	
	
	//_e13noni
	r[12] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7] ;
	
	
	//_e123ni
	r[14] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_54_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[9] ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[3] * b[11] ;
	
	
	//_noni
	r[10] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	return r;
}

double * conga_ip_54_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_54_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[7] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12no
	r[5] = a[2] * b[3] ;
	
	
	//_e13no
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[3] ;
	
	
	//_e12ni
	r[8] = a[3] * b[0]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[1]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[2]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e123
	r[14] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[3] * b[3] ;
	
	
	//_e2ni
	r[8] = a[3] * b[4] ;
	
	
	//_e3ni
	r[9] = a[3] * b[5] ;
	
	
	//_noni
	r[10] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  + a[7] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[3] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[3] * b[13] ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_54_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  * -1  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[2] * b[14]  + a[3] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[14]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[14]  + a[3] * b[12]  * -1 ;
	
	
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

double * conga_ip_54_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7]  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	//_e123ni
	r[14] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_54_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  * -1  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[13]  * -1 ;
	
	
	//_e12ni
	r[5] = a[2] * b[13]  + a[3] * b[10]  * -1 ;
	
	
	//_e13ni
	r[6] = a[1] * b[13]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[13]  + a[3] * b[12]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_54_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[3] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[3] * b[12] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_54_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_54_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[5]  * -1 ;
	
	
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

double * conga_ip_54_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[3] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[3] * b[12] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_54_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[7] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[2] * b[14]  + a[3] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[14]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[14]  + a[3] * b[12]  * -1 ;
	
	
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

double * conga_ip_54_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[11]  + a[6] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[3] * b[12]  + a[5] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[3] * b[13]  + a[4] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13]  + a[7] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	//_e123ni
	r[14] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_54_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6]  + a[6] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7]  + a[5] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8]  + a[4] * b[9]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[7] * b[9]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[9] ;
	
	
	//_e13noni
	r[12] = a[1] * b[9]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[9] ;
	
	
	//_e123ni
	r[14] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_54_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e12ni
	r[5] = a[3] * b[7]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[8]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[9]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_54_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  * -1  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[3] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[12]  * -1 ;
	
	
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

double * conga_ip_54_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[5]  * -1 ;
	
	
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

double * conga_ip_54_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1ni
	r[4] = a[3] * b[3]  + a[6] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[3] * b[4]  + a[5] * b[7] ;
	
	
	//_e3ni
	r[6] = a[3] * b[5]  + a[4] * b[7]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[7]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[7] ;
	
	
	//_e13noni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7] ;
	
	
	//_e123ni
	r[11] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_54_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_144(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[6]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[6] ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[6]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12noni
	r[4] = a[2] * b[6] ;
	
	
	//_e13noni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123ni
	r[7] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_145(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12ni
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e13ni
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e23ni
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[7] * b[3]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[3] ;
	
	
	//_e13no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	//_e123
	r[7] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_54_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12no
	r[5] = a[2] * b[7] ;
	
	
	//_e13no
	r[6] = a[1] * b[7]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[3] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[6]  * -1 ;
	
	
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

double * conga_ip_54_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e12
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_e1ni
	r[7] = a[3] * b[4]  + a[6] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[3] * b[5]  + a[5] * b[7] ;
	
	
	//_e3ni
	r[9] = a[3] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[7] * b[7]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[7] ;
	
	
	//_e13noni
	r[12] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7] ;
	
	
	//_e123ni
	r[14] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_54_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4] ;
	
	
	//_e12
	r[1] = a[3] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[4]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[2] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  + a[1] * b[4] ;
	
	
	//_e1ni
	r[7] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[8]  + a[6] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[3] * b[9]  + a[5] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[10]  + a[4] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[7] * b[11]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[11] ;
	
	
	//_e13noni
	r[12] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	//_e123ni
	r[14] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_54_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[7]  * -1 ;
	
	
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
	r[11] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e12
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_e1ni
	r[7] = a[3] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6] ;
	
	
	//_e13no
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e123
	r[14] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12ni
	r[5] = a[3] * b[8]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[9]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_54_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[7] * b[10]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	//_e123ni
	r[14] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_54_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[13]  * -1 ;
	
	
	//_e12ni
	r[5] = a[2] * b[13]  + a[3] * b[10]  * -1 ;
	
	
	//_e13ni
	r[6] = a[1] * b[13]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[13]  + a[3] * b[12]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_54_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10]  + a[6] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[3] * b[11]  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[3] * b[12]  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12]  + a[7] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123ni
	r[14] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_54_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10]  + a[6] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[3] * b[11]  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[3] * b[12]  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12]  + a[7] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123ni
	r[14] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_54_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[7] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[3] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[12]  * -1 ;
	
	
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

double * conga_ip_54_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12ni
	r[5] = a[3] * b[4]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[5]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[6]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[3] * b[3]  + a[6] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[3] * b[4]  + a[5] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[5]  + a[4] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[6] ;
	
	
	//_e13noni
	r[12] = a[1] * b[6]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[6] ;
	
	
	//_e123ni
	r[14] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_54_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_54_166(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_54_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4]  * -1  + a[4] * b[16]  + a[5] * b[17]  + a[6] * b[18]  + a[7] * b[25]  * -1 ;
	
	
	//_e1
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[9]  + a[6] * b[29]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[3] * b[10]  + a[5] * b[29] ;
	
	
	//_e3
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[3] * b[11]  + a[4] * b[29]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11]  + a[7] * b[29]  * -1 ;
	
	
	//_ni
	r[5] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14]  + a[3] * b[15]  * -1  + a[4] * b[26]  + a[5] * b[27]  + a[6] * b[28]  + a[7] * b[30]  * -1 ;
	
	
	//_e12
	r[6] = a[2] * b[25]  + a[3] * b[16]  * -1 ;
	
	
	//_e13
	r[7] = a[1] * b[25]  * -1  + a[3] * b[17]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[25]  + a[3] * b[18]  * -1 ;
	
	
	//_e1no
	r[9] = a[1] * b[16]  * -1  + a[2] * b[17]  * -1 ;
	
	
	//_e2no
	r[10] = a[0] * b[16]  + a[2] * b[18]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[17]  + a[1] * b[18] ;
	
	
	//_e1ni
	r[12] = a[1] * b[19]  * -1  + a[2] * b[20]  * -1  + a[3] * b[22]  + a[6] * b[31]  * -1 ;
	
	
	//_e2ni
	r[13] = a[0] * b[19]  + a[2] * b[21]  * -1  + a[3] * b[23]  + a[5] * b[31] ;
	
	
	//_e3ni
	r[14] = a[0] * b[20]  + a[1] * b[21]  + a[3] * b[24]  + a[4] * b[31]  * -1 ;
	
	
	//_noni
	r[15] = a[0] * b[22]  + a[1] * b[23]  + a[2] * b[24]  + a[7] * b[31]  * -1 ;
	
	
	//_e12no
	r[16] = a[2] * b[29] ;
	
	
	//_e13no
	r[17] = a[1] * b[29]  * -1 ;
	
	
	//_e23no
	r[18] = a[0] * b[29] ;
	
	
	//_e12ni
	r[19] = a[2] * b[30]  + a[3] * b[26]  * -1 ;
	
	
	//_e13ni
	r[20] = a[1] * b[30]  * -1  + a[3] * b[27]  * -1 ;
	
	
	//_e23ni
	r[21] = a[0] * b[30]  + a[3] * b[28]  * -1 ;
	
	
	//_e1noni
	r[22] = a[1] * b[26]  * -1  + a[2] * b[27]  * -1 ;
	
	
	//_e2noni
	r[23] = a[0] * b[26]  + a[2] * b[28]  * -1 ;
	
	
	//_e3noni
	r[24] = a[0] * b[27]  + a[1] * b[28] ;
	
	
	//_e123
	r[25] = a[3] * b[29] ;
	
	
	//_e12noni
	r[26] = a[2] * b[31] ;
	
	
	//_e13noni
	r[27] = a[1] * b[31]  * -1 ;
	
	
	//_e23noni
	r[28] = a[0] * b[31] ;
	
	
	//_e123ni
	r[29] = a[3] * b[31] ;
	
	
	return r;
}


