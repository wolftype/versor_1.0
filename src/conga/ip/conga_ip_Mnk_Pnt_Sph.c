
#include "conga_ip_Mnk_Pnt_Sph.h"


double * conga_ip_158_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_158_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_158_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_158_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_158_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_158_6(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[10] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[5] * b[0] ;
	
	
	//_e2no
	r[2] = a[4] * b[0]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[8] * b[0]  * -1 ;
	
	
	//_e2ni
	r[5] = a[7] * b[0] ;
	
	
	//_e3ni
	r[6] = a[6] * b[0]  * -1 ;
	
	
	//_noni
	r[7] = a[9] * b[0]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[0] ;
	
	
	//_e13noni
	r[9] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_158_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
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
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[4]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[4]  + a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1  + a[9] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[4]  * -1 ;
	
	
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
	
	
	//_e1noni
	r[11] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_12(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_13(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1ni
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_14(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[3] * b[0]  * -1 ;
	
	
	//_ni
	r[3] = a[9] * b[0]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[0] ;
	
	
	//_e13ni
	r[5] = a[1] * b[0]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_158_15(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_16(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_17(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[0] ;
	
	
	//_e3
	r[2] = a[6] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[0]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[0] ;
	
	
	//_e13no
	r[5] = a[1] * b[0]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_158_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1ni
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	//_e12ni
	r[5] = a[2] * b[3] ;
	
	
	//_e13ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[3] ;
	
	
	//_e1noni
	r[8] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_20(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_21(double * a, double * b, double *r) { 
	
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

double * conga_ip_158_22(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_23(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_24(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_25(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_158_26(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_30(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_158_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_158_33(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10]  + a[9] * b[11]  * -1 ;
	
	
	//_e12ni
	r[5] = a[2] * b[11] ;
	
	
	//_e13ni
	r[6] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[11] ;
	
	
	//_e1noni
	r[8] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_158_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e1noni
	r[5] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_158_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[7] ;
	
	
	//_e13no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_158_37(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	//_e1noni
	r[5] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_158_39(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[15]  * -1  + a[8] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[15]  + a[7] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[15]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1  + a[9] * b[14]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13]  + a[9] * b[15]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[14] ;
	
	
	//_e13no
	r[6] = a[1] * b[14]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[14] ;
	
	
	//_e12ni
	r[8] = a[2] * b[15] ;
	
	
	//_e13ni
	r[9] = a[1] * b[15]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[15] ;
	
	
	//_e1noni
	r[11] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_158_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	//_e1no
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e1ni
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_43(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	//_e1noni
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[2]  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e1no
	r[1] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  + a[2] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  + a[1] * b[4] ;
	
	
	//_e1ni
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_158_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[10] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[5] * b[3] ;
	
	
	//_e2no
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[3] ;
	
	
	//_e1ni
	r[4] = a[8] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[7] * b[3] ;
	
	
	//_e3ni
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[3] ;
	
	
	//_e13noni
	r[9] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7]  + a[9] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11] ;
	
	
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

double * conga_ip_158_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7]  + a[9] * b[14]  * -1  + a[10] * b[15]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[5] * b[15] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[4] * b[15]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[15] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[8] * b[15]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[7] * b[15] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[6] * b[15]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13]  + a[9] * b[15]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[15] ;
	
	
	//_e13noni
	r[12] = a[1] * b[15]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_ip_158_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[11]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[11]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[3] * b[11]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[9] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9]  + a[9] * b[11]  * -1 ;
	
	
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
	
	
	//_e1noni
	r[11] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_158_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[11]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[11]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[11]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[9] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[9] * b[11]  * -1 ;
	
	
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
	
	
	return r;
}

double * conga_ip_158_50(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[3] ;
	
	
	//_e13ni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[3] ;
	
	
	//_e13no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[10] * b[7]  * -1 ;
	
	
	//_e1no
	r[1] = a[5] * b[7] ;
	
	
	//_e2no
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[7] ;
	
	
	//_e1ni
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[7] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[7]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[7] ;
	
	
	//_e13noni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_158_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	//_e12ni
	r[5] = a[2] * b[7] ;
	
	
	//_e13ni
	r[6] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[7] ;
	
	
	//_e1noni
	r[8] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[9] * b[7]  * -1 ;
	
	
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

double * conga_ip_158_55(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_noni
	r[1] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_noni
	r[1] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_ip_158_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[10] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[5] * b[3] ;
	
	
	//_e2no
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[3] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[9] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[3] ;
	
	
	//_e13noni
	r[9] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e1ni
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_158_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13]  + a[9] * b[14]  * -1 ;
	
	
	//_e12ni
	r[5] = a[2] * b[14] ;
	
	
	//_e13ni
	r[6] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[14] ;
	
	
	//_e1noni
	r[8] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_158_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[13]  * -1  + a[10] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[14] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[8] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[7] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[6] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12]  + a[9] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_158_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[10]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[10]  + a[7] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[10]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[9] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[9] ;
	
	
	//_e13no
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[2] * b[10] ;
	
	
	//_e13ni
	r[9] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e1noni
	r[11] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e1noni
	r[5] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_158_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[9]  * -1  + a[10] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[5] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[10] ;
	
	
	//_e1ni
	r[7] = a[8] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[7] * b[10] ;
	
	
	//_e3ni
	r[9] = a[6] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[9] * b[10]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_158_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6] ;
	
	
	//_e13no
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e1noni
	r[8] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e1ni
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	//_e12ni
	r[5] = a[2] * b[6] ;
	
	
	//_e13ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[6] ;
	
	
	//_e1noni
	r[8] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[6] ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1ni
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_71(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[3]  * -1 ;
	
	
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

double * conga_ip_158_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[12]  * -1  + a[10] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[12] ;
	
	
	//_e13
	r[2] = a[1] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[5] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[13] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[7] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[6] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11]  + a[9] * b[13]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_158_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[0]  * -1  + a[10] * b[1]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[5] * b[1] ;
	
	
	//_e2no
	r[5] = a[4] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[1] ;
	
	
	//_e1ni
	r[7] = a[8] * b[1]  * -1 ;
	
	
	//_e2ni
	r[8] = a[7] * b[1] ;
	
	
	//_e3ni
	r[9] = a[6] * b[1]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[1]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[1] ;
	
	
	//_e13noni
	r[12] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_158_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[7]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[7]  + a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[7]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[7]  * -1 ;
	
	
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
	
	
	//_e1noni
	r[11] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	//_e1noni
	r[5] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_158_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	//_e12ni
	r[5] = a[2] * b[6] ;
	
	
	//_e13ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[6] ;
	
	
	//_e1noni
	r[8] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e1noni
	r[5] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_noni
	r[1] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_noni
	r[1] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1noni
	r[5] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e1noni
	r[5] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[3]  * -1  + a[10] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[4] ;
	
	
	//_e1ni
	r[7] = a[8] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[7] * b[4] ;
	
	
	//_e3ni
	r[9] = a[6] * b[4]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[4]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[4] ;
	
	
	//_e13noni
	r[12] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_158_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[10]  * -1  + a[10] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[11] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[11] ;
	
	
	//_e1ni
	r[7] = a[8] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[7] * b[11] ;
	
	
	//_e3ni
	r[9] = a[6] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[9] * b[11]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[11] ;
	
	
	//_e13noni
	r[12] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_158_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[7] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1  + a[9] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e12no
	r[5] = a[2] * b[11] ;
	
	
	//_e13no
	r[6] = a[1] * b[11]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[11] ;
	
	
	//_e1noni
	r[8] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_158_86(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[10] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[3] ;
	
	
	//_e1ni
	r[4] = a[8] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[7] * b[3] ;
	
	
	//_e3ni
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[9] * b[3]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[3] ;
	
	
	//_e13noni
	r[9] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e1no
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_158_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[8] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[7] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1  + a[9] * b[14]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	//_e12no
	r[5] = a[2] * b[14] ;
	
	
	//_e13no
	r[6] = a[1] * b[14]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[14] ;
	
	
	//_e1noni
	r[8] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_158_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[13]  * -1  + a[10] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[14] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[8] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[7] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[6] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12]  + a[9] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_158_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[10]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[10]  + a[7] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[10]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[9] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[9] ;
	
	
	//_e13no
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[2] * b[10] ;
	
	
	//_e13ni
	r[9] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e1noni
	r[11] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e1noni
	r[5] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_158_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[9]  * -1  + a[10] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[5] * b[10] ;
	
	
	//_e2no
	r[5] = a[4] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[10] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[7] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[6] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[9] * b[10]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_158_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[9] * b[10]  * -1  + a[10] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1no
	r[4] = a[5] * b[11] ;
	
	
	//_e2no
	r[5] = a[4] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[11] ;
	
	
	//_e1ni
	r[7] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[7] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5]  + a[1] * b[6]  + a[6] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[9] * b[11]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[11] ;
	
	
	//_e13noni
	r[12] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_158_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_158_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[9] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[9] ;
	
	
	//_e13no
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e1noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1ni
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_158_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[9]  * -1 ;
	
	
	//_e12ni
	r[5] = a[2] * b[9] ;
	
	
	//_e13ni
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[9] ;
	
	
	//_e1noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[3]  * -1  + a[10] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[5] * b[4] ;
	
	
	//_e2no
	r[5] = a[4] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[4] ;
	
	
	//_e1ni
	r[7] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[4]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[4]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[4] ;
	
	
	//_e13noni
	r[12] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_158_103(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[2]  + a[1] * b[3]  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_ip_158_104(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e1noni
	r[2] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_158_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[10] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[5] * b[9] ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[7] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  + a[1] * b[8]  + a[6] * b[9]  * -1 ;
	
	
	//_noni
	r[7] = a[9] * b[9]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[9] ;
	
	
	//_e13noni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_158_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[4]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[4]  + a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[4]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[9] * b[4]  * -1 ;
	
	
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
	
	
	return r;
}

double * conga_ip_158_107(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e1noni
	r[2] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_108(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[9] * b[3]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[3] ;
	
	
	//_e13ni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_110(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1noni
	r[2] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_111(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_112(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_113(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1noni
	r[2] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_114(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_115(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1noni
	r[2] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[1]  * -1  + a[8] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[1]  + a[7] * b[0] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[0]  * -1 ;
	
	
	//_ni
	r[4] = a[9] * b[1]  * -1 ;
	
	
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
	
	
	return r;
}

double * conga_ip_158_117(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_ni
	r[1] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e1no
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_noni
	r[7] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_158_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[13]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[13]  + a[7] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[13]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[9] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11]  + a[9] * b[13]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[12] ;
	
	
	//_e13no
	r[6] = a[1] * b[12]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[2] * b[13] ;
	
	
	//_e13ni
	r[9] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[13] ;
	
	
	//_e1noni
	r[11] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_158_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[6]  * -1  + a[10] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[7] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[6] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[7]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[7] ;
	
	
	//_e13noni
	r[12] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_158_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_noni
	r[7] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	return r;
}

double * conga_ip_158_122(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[1] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[7] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1  + a[9] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12no
	r[5] = a[2] * b[3] ;
	
	
	//_e13no
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[3] ;
	
	
	//_e1noni
	r[8] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_158_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_158_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7]  + a[9] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14] ;
	
	
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
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_158_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[14]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[14]  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[14]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[2] * b[14] ;
	
	
	//_e13ni
	r[9] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[14] ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_158_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[9]  * -1  + a[10] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[10] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[7] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[6] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[9] * b[10]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_158_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	//_e12ni
	r[5] = a[2] * b[13] ;
	
	
	//_e13ni
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[13] ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_158_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_158_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_158_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
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

double * conga_ip_158_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_158_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[14]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[14]  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[14]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[2] * b[14] ;
	
	
	//_e13ni
	r[9] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[14] ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_158_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7]  + a[10] * b[14]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[5] * b[14] ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[14] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[8] * b[14]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[7] * b[14] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  + a[1] * b[10]  + a[6] * b[14]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13]  + a[9] * b[14]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[14] ;
	
	
	//_e13noni
	r[9] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_158_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[10] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[9] ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[7] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[6] * b[9]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[9] * b[9]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[9] ;
	
	
	//_e13noni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_158_139(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e1noni
	r[2] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_158_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_158_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_158_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[9] * b[6]  * -1  + a[10] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[5] * b[7] ;
	
	
	//_e2no
	r[5] = a[4] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[7] ;
	
	
	//_e1ni
	r[7] = a[8] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[7] * b[7] ;
	
	
	//_e3ni
	r[9] = a[6] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[9] * b[7]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[7] ;
	
	
	//_e13noni
	r[12] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_158_143(double * a, double * b, double *r) { 
	
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

double * conga_ip_158_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[10] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[5] * b[6] ;
	
	
	//_e2no
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[6]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[6] ;
	
	
	//_e13noni
	r[9] = a[1] * b[6]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_145(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e1noni
	r[2] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[6]  * -1 ;
	
	
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

double * conga_ip_158_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[3]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[3] ;
	
	
	//_e13no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_158_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1  + a[9] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12no
	r[5] = a[2] * b[7] ;
	
	
	//_e13no
	r[6] = a[1] * b[7]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e1noni
	r[8] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3]  + a[10] * b[7]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[7] ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[7] ;
	
	
	//_e1ni
	r[4] = a[8] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[7] * b[7] ;
	
	
	//_e3ni
	r[6] = a[6] * b[7]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[7] ;
	
	
	//_e13noni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_158_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[2]  + a[7] * b[3]  + a[8] * b[4]  + a[10] * b[11]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[5] * b[11] ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  + a[2] * b[4]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[3] * b[11] ;
	
	
	//_e1ni
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[7] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[1] * b[7]  + a[6] * b[11]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[9] * b[11]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[11] ;
	
	
	//_e13noni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_158_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7]  + a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[9] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[9] * b[7]  * -1 ;
	
	
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
	
	
	return r;
}

double * conga_ip_158_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	//_e1no
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6] ;
	
	
	//_e13no
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e1noni
	r[8] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_157(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e1noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_158_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[9]  * -1  + a[10] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[5] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[10] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[7] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[10]  * -1 ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_158_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	//_e12ni
	r[5] = a[2] * b[13] ;
	
	
	//_e13ni
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[13] ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_158_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[10] * b[13]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[13] ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[7] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  + a[1] * b[9]  + a[6] * b[13]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[13] ;
	
	
	//_e13noni
	r[9] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_158_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[10] * b[13]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[13] ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[7] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  + a[1] * b[9]  + a[6] * b[13]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[13] ;
	
	
	//_e13noni
	r[9] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_158_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_158_163(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e1noni
	r[2] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[10] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[6] ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[8] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[7] * b[6] ;
	
	
	//_e3ni
	r[6] = a[6] * b[6]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	//_e12noni
	r[8] = a[2] * b[6] ;
	
	
	//_e13noni
	r[9] = a[1] * b[6]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_158_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
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

double * conga_ip_158_166(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[1] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_158_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[19]  + a[4] * b[20]  + a[5] * b[21]  + a[6] * b[16]  + a[7] * b[17]  + a[8] * b[18]  + a[9] * b[25]  * -1  + a[10] * b[31]  * -1 ;
	
	
	//_e1
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[5] * b[30]  * -1  + a[8] * b[29]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[4] * b[30]  + a[7] * b[29] ;
	
	
	//_e3
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[3] * b[30]  * -1  + a[6] * b[29]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[26]  * -1  + a[4] * b[27]  * -1  + a[5] * b[28]  * -1  + a[9] * b[29]  * -1 ;
	
	
	//_ni
	r[5] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14]  + a[6] * b[26]  + a[7] * b[27]  + a[8] * b[28]  + a[9] * b[30]  * -1 ;
	
	
	//_e12
	r[6] = a[2] * b[25] ;
	
	
	//_e13
	r[7] = a[1] * b[25]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[25] ;
	
	
	//_e1no
	r[9] = a[1] * b[16]  * -1  + a[2] * b[17]  * -1  + a[5] * b[31] ;
	
	
	//_e2no
	r[10] = a[0] * b[16]  + a[2] * b[18]  * -1  + a[4] * b[31]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[17]  + a[1] * b[18]  + a[3] * b[31] ;
	
	
	//_e1ni
	r[12] = a[1] * b[19]  * -1  + a[2] * b[20]  * -1  + a[8] * b[31]  * -1 ;
	
	
	//_e2ni
	r[13] = a[0] * b[19]  + a[2] * b[21]  * -1  + a[7] * b[31] ;
	
	
	//_e3ni
	r[14] = a[0] * b[20]  + a[1] * b[21]  + a[6] * b[31]  * -1 ;
	
	
	//_noni
	r[15] = a[0] * b[22]  + a[1] * b[23]  + a[2] * b[24]  + a[9] * b[31]  * -1 ;
	
	
	//_e12no
	r[16] = a[2] * b[29] ;
	
	
	//_e13no
	r[17] = a[1] * b[29]  * -1 ;
	
	
	//_e23no
	r[18] = a[0] * b[29] ;
	
	
	//_e12ni
	r[19] = a[2] * b[30] ;
	
	
	//_e13ni
	r[20] = a[1] * b[30]  * -1 ;
	
	
	//_e23ni
	r[21] = a[0] * b[30] ;
	
	
	//_e1noni
	r[22] = a[1] * b[26]  * -1  + a[2] * b[27]  * -1 ;
	
	
	//_e2noni
	r[23] = a[0] * b[26]  + a[2] * b[28]  * -1 ;
	
	
	//_e3noni
	r[24] = a[0] * b[27]  + a[1] * b[28] ;
	
	
	//_e12noni
	r[25] = a[2] * b[31] ;
	
	
	//_e13noni
	r[26] = a[1] * b[31]  * -1 ;
	
	
	//_e23noni
	r[27] = a[0] * b[31] ;
	
	
	return r;
}


