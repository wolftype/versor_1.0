
#include "conga_ip_Dll.h"


double * conga_ip_21_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_6(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[5] * b[0] ;
	
	
	//_e13ni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[3] * b[0] ;
	
	
	//_e1noni
	r[3] = a[2] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[0] ;
	
	
	//_e3noni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_21_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_21_10(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[3] ;
	
	
	//_e13
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[3] ;
	
	
	//_e1no
	r[3] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[6] = a[2] * b[4]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[8] = a[0] * b[4]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_21_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_13(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_14(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_15(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_21_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_17(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[0] ;
	
	
	//_e13
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[0] ;
	
	
	//_e1no
	r[3] = a[2] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[0] ;
	
	
	//_e3no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_18(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_21_19(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[2] * b[3]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[1] = a[1] * b[3]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[2] = a[0] * b[3]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_24(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_25(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_21_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_29(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[7] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_21_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[11]  * -1  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[2] = a[1] * b[11]  + a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[3] = a[0] * b[11]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2ni
	r[2] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3ni
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[7] ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_37(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_21_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1ni
	r[1] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[2] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[3] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_21_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[14] ;
	
	
	//_e3no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[15]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[8] = a[1] * b[15]  + a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[15]  * -1  + a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_42(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_43(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2ni
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3ni
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[2]  * -1  + a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_45(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12ni
	r[1] = a[5] * b[3] ;
	
	
	//_e13ni
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[3] = a[3] * b[3] ;
	
	
	//_e1noni
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[3] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_e12ni
	r[5] = a[5] * b[15] ;
	
	
	//_e13ni
	r[6] = a[4] * b[15]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[15] ;
	
	
	//_e1noni
	r[8] = a[2] * b[15]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[15] ;
	
	
	//_e3noni
	r[10] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[10] ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[11]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11]  + a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[11]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[10] ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_50(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[1] * b[3] ;
	
	
	//_e3ni
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_51(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_52(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12ni
	r[1] = a[5] * b[7] ;
	
	
	//_e13ni
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[3] = a[3] * b[7] ;
	
	
	//_e1noni
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[7] ;
	
	
	//_e3noni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_53(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[2] * b[7]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[1] = a[1] * b[7]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[2] = a[0] * b[7]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_55(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_57(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_21_58(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_21_59(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[1] = a[5] * b[3] ;
	
	
	//_e13ni
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[3] = a[3] * b[3] ;
	
	
	//_e1noni
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[3] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_60(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_21_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1ni
	r[1] = a[2] * b[14]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[2] = a[1] * b[14]  + a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[3] = a[0] * b[14]  * -1  + a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e12ni
	r[5] = a[5] * b[14] ;
	
	
	//_e13ni
	r[6] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[14] ;
	
	
	//_e1noni
	r[8] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[14] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[9] ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[10]  * -1  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[10]  + a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[10]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1ni
	r[1] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[2] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[3] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12ni
	r[5] = a[5] * b[10] ;
	
	
	//_e13ni
	r[6] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[10] ;
	
	
	//_e1noni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_67(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_21_68(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[1] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_70(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[12]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[12]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[12]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e12ni
	r[5] = a[5] * b[13] ;
	
	
	//_e13ni
	r[6] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[13] ;
	
	
	//_e1noni
	r[8] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[13] ;
	
	
	//_e3noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_73(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[5] * b[1] ;
	
	
	//_e13ni
	r[4] = a[4] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[3] * b[1] ;
	
	
	//_e1noni
	r[6] = a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[7]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1ni
	r[1] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e2ni
	r[2] = a[3] * b[9]  * -1  + a[5] * b[11] ;
	
	
	//_e3ni
	r[3] = a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_76(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_21_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[2] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[2] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[3] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_79(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_21_80(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_21_81(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[2] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1ni
	r[1] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[2] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[3] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[4] = a[5] * b[4] ;
	
	
	//_e13ni
	r[5] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[4] ;
	
	
	//_e1noni
	r[7] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[4] ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e12ni
	r[5] = a[5] * b[11] ;
	
	
	//_e13ni
	r[6] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[11] ;
	
	
	//_e1noni
	r[8] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[11] ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[11] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[11] ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[8] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_21_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[4] = a[5] * b[3] ;
	
	
	//_e13ni
	r[5] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[3] ;
	
	
	//_e3noni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_21_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[14] ;
	
	
	//_e3no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[8] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e12ni
	r[5] = a[5] * b[14] ;
	
	
	//_e13ni
	r[6] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[14] ;
	
	
	//_e1noni
	r[8] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[14] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[9] ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[10]  * -1  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[10]  + a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[10]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[2] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[3] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12ni
	r[4] = a[5] * b[10] ;
	
	
	//_e13ni
	r[5] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[10] ;
	
	
	//_e1noni
	r[7] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[10] ;
	
	
	//_e3noni
	r[9] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e12ni
	r[4] = a[5] * b[11] ;
	
	
	//_e13ni
	r[5] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[11] ;
	
	
	//_e1noni
	r[7] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[11] ;
	
	
	//_e3noni
	r[9] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_21_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[9] ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_21_100(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_21_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[9]  * -1  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[2] = a[1] * b[9]  + a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[3] = a[0] * b[9]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[4] = a[5] * b[4] ;
	
	
	//_e13ni
	r[5] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[4] ;
	
	
	//_e1noni
	r[7] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[4] ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_103(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_ip_21_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e1ni
	r[1] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[2] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[3] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[9] ;
	
	
	//_e13ni
	r[6] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[9] ;
	
	
	//_e1noni
	r[8] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[9] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_106(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1ni
	r[1] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[2] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[3] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_108(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_109(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_110(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_111(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_21_112(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_21_113(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_114(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_21_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1ni
	r[1] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[2] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[0] ;
	
	
	//_e13
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[0] ;
	
	
	//_e1no
	r[3] = a[2] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[0] ;
	
	
	//_e3no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[6] = a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[1] ;
	
	
	//_e3ni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_21_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_21_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[12] ;
	
	
	//_e13
	r[2] = a[4] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[12] ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[13]  * -1  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[13]  + a[3] * b[9]  * -1  + a[5] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[13]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[7] ;
	
	
	//_e13ni
	r[6] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[7] ;
	
	
	//_e1noni
	r[8] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[7] ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	return r;
}

double * conga_ip_21_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_21_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_21_125(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[3] ;
	
	
	//_e13
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[3] ;
	
	
	//_e1no
	r[3] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[6] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[7] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[8] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_21_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_21_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_21_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13] ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[14]  * -1  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[14]  + a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[14]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12ni
	r[5] = a[5] * b[10] ;
	
	
	//_e13ni
	r[6] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[10] ;
	
	
	//_e1noni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1ni
	r[1] = a[2] * b[13]  * -1  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[2] = a[1] * b[13]  + a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[3] = a[0] * b[13]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_21_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_21_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_21_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13] ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[14]  * -1  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[14]  + a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[14]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_e12ni
	r[5] = a[5] * b[14] ;
	
	
	//_e13ni
	r[6] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[14] ;
	
	
	//_e1noni
	r[8] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[14] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12ni
	r[5] = a[5] * b[9] ;
	
	
	//_e13ni
	r[6] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[9] ;
	
	
	//_e1noni
	r[8] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[9] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1ni
	r[1] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[2] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[3] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13] ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12ni
	r[4] = a[5] * b[7] ;
	
	
	//_e13ni
	r[5] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[7] ;
	
	
	//_e1noni
	r[7] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[7] ;
	
	
	//_e3noni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_144(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12ni
	r[1] = a[5] * b[6] ;
	
	
	//_e13ni
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23ni
	r[3] = a[3] * b[6] ;
	
	
	//_e1noni
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[6] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_145(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_21_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_149(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[7] ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[8] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12ni
	r[5] = a[5] * b[7] ;
	
	
	//_e13ni
	r[6] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[7] ;
	
	
	//_e1noni
	r[8] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[7] ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[2]  * -1  + a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e12ni
	r[5] = a[5] * b[11] ;
	
	
	//_e13ni
	r[6] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[11] ;
	
	
	//_e1noni
	r[8] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[11] ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_21_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e1ni
	r[1] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[2] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[3] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[10] ;
	
	
	//_e13ni
	r[6] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[10] ;
	
	
	//_e1noni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1ni
	r[1] = a[2] * b[13]  * -1  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[2] = a[1] * b[13]  + a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[3] = a[0] * b[13]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e12ni
	r[5] = a[5] * b[13] ;
	
	
	//_e13ni
	r[6] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[13] ;
	
	
	//_e1noni
	r[8] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[13] ;
	
	
	//_e3noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e12ni
	r[5] = a[5] * b[13] ;
	
	
	//_e13ni
	r[6] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[13] ;
	
	
	//_e1noni
	r[8] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[13] ;
	
	
	//_e3noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13] ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1ni
	r[1] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[2] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[3] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12ni
	r[5] = a[5] * b[6] ;
	
	
	//_e13ni
	r[6] = a[4] * b[6]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[6] ;
	
	
	//_e1noni
	r[8] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[6] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_21_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_21_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e1
	r[1] = a[2] * b[25]  * -1  + a[4] * b[16]  + a[5] * b[17] ;
	
	
	//_e2
	r[2] = a[1] * b[25]  + a[3] * b[16]  * -1  + a[5] * b[18] ;
	
	
	//_e3
	r[3] = a[0] * b[25]  * -1  + a[3] * b[17]  * -1  + a[4] * b[18]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[16]  * -1  + a[1] * b[17]  * -1  + a[2] * b[18]  * -1 ;
	
	
	//_ni
	r[5] = a[0] * b[19]  * -1  + a[1] * b[20]  * -1  + a[2] * b[21]  * -1  + a[3] * b[22]  + a[4] * b[23]  + a[5] * b[24] ;
	
	
	//_e12
	r[6] = a[5] * b[29] ;
	
	
	//_e13
	r[7] = a[4] * b[29]  * -1 ;
	
	
	//_e23
	r[8] = a[3] * b[29] ;
	
	
	//_e1no
	r[9] = a[2] * b[29]  * -1 ;
	
	
	//_e2no
	r[10] = a[1] * b[29] ;
	
	
	//_e3no
	r[11] = a[0] * b[29]  * -1 ;
	
	
	//_e1ni
	r[12] = a[2] * b[30]  * -1  + a[4] * b[26]  + a[5] * b[27] ;
	
	
	//_e2ni
	r[13] = a[1] * b[30]  + a[3] * b[26]  * -1  + a[5] * b[28] ;
	
	
	//_e3ni
	r[14] = a[0] * b[30]  * -1  + a[3] * b[27]  * -1  + a[4] * b[28]  * -1 ;
	
	
	//_noni
	r[15] = a[0] * b[26]  * -1  + a[1] * b[27]  * -1  + a[2] * b[28]  * -1 ;
	
	
	//_e12ni
	r[16] = a[5] * b[31] ;
	
	
	//_e13ni
	r[17] = a[4] * b[31]  * -1 ;
	
	
	//_e23ni
	r[18] = a[3] * b[31] ;
	
	
	//_e1noni
	r[19] = a[2] * b[31]  * -1 ;
	
	
	//_e2noni
	r[20] = a[1] * b[31] ;
	
	
	//_e3noni
	r[21] = a[0] * b[31]  * -1 ;
	
	
	return r;
}


