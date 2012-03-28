
#include "conga_ip_Sta.h"


double * conga_ip_11_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_11_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_11_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_11_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_11_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_11_6(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[5] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[4] * b[0] ;
	
	
	//_e23no
	r[2] = a[3] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[8] * b[0] ;
	
	
	//_e13ni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e23ni
	r[5] = a[6] * b[0] ;
	
	
	//_e1noni
	r[6] = a[2] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[0] ;
	
	
	//_e3noni
	r[8] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_11_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_11_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4]  + a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_11_10(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[4]  + a[8] * b[3] ;
	
	
	//_e13
	r[1] = a[4] * b[4]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[4]  + a[6] * b[3] ;
	
	
	//_e1no
	r[3] = a[2] * b[3]  * -1  + a[4] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[0]  + a[5] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1  + a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_e1ni
	r[6] = a[2] * b[4]  * -1  + a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3ni
	r[8] = a[0] * b[4]  * -1  + a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_11_12(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_11_13(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_14(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[0] ;
	
	
	//_e13
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[0] ;
	
	
	//_e1ni
	r[3] = a[2] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[0] ;
	
	
	//_e3ni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_15(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	return r;
}

double * conga_ip_11_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2
	r[1] = a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3
	r[2] = a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_17(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[8] * b[0] ;
	
	
	//_e13
	r[1] = a[7] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[6] * b[0] ;
	
	
	//_e1no
	r[3] = a[2] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[0] ;
	
	
	//_e3no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_11_19(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[3] ;
	
	
	//_e13
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[3] ;
	
	
	//_e1no
	r[3] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[0]  + a[5] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_e1ni
	r[6] = a[2] * b[3]  * -1  + a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3]  + a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3ni
	r[8] = a[0] * b[3]  * -1  + a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_11_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_11_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_11_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_11_24(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_25(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_11_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_11_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_29(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_11_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_11_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1ni
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_ip_11_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[11] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_e1ni
	r[7] = a[2] * b[11]  * -1  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11]  + a[6] * b[8]  * -1  + a[8] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[11]  * -1  + a[6] * b[9]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[5]  + a[5] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[6]  + a[4] * b[7] ;
	
	
	//_e1ni
	r[4] = a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e2ni
	r[5] = a[6] * b[5]  * -1  + a[8] * b[7] ;
	
	
	//_e3ni
	r[6] = a[6] * b[6]  * -1  + a[7] * b[7]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12
	r[1] = a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[7] ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_11_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e1no
	r[1] = a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[11]  + a[5] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_e1ni
	r[4] = a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e2ni
	r[5] = a[6] * b[11]  * -1  + a[8] * b[13] ;
	
	
	//_e3ni
	r[6] = a[6] * b[12]  * -1  + a[7] * b[13]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_ip_11_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[15]  + a[8] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[15]  * -1  + a[7] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[15]  + a[6] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[14]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[14]  + a[3] * b[11]  + a[5] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[14]  * -1  + a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_e1ni
	r[7] = a[2] * b[15]  * -1  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e2ni
	r[8] = a[1] * b[15]  + a[6] * b[11]  * -1  + a[8] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[15]  * -1  + a[6] * b[12]  * -1  + a[7] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e2
	r[1] = a[6] * b[1]  * -1  + a[8] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[2]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_42(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_43(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[3] * b[1]  + a[5] * b[3]  * -1 ;
	
	
	//_e3no
	r[2] = a[3] * b[2]  + a[4] * b[3] ;
	
	
	//_e1ni
	r[3] = a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e2ni
	r[4] = a[6] * b[1]  * -1  + a[8] * b[3] ;
	
	
	//_e3ni
	r[5] = a[6] * b[2]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7]  + a[6] * b[2]  * -1  + a[8] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_45(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12no
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e13no
	r[3] = a[4] * b[3] ;
	
	
	//_e23no
	r[4] = a[3] * b[3]  * -1 ;
	
	
	//_e12ni
	r[5] = a[8] * b[3] ;
	
	
	//_e13ni
	r[6] = a[7] * b[3]  * -1 ;
	
	
	//_e23ni
	r[7] = a[6] * b[3] ;
	
	
	//_e1noni
	r[8] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[3] ;
	
	
	//_e3noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[3] * b[8]  * -1  + a[5] * b[10]  + a[6] * b[5]  * -1  + a[8] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[3] * b[8]  * -1  + a[5] * b[10]  + a[6] * b[5]  * -1  + a[8] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	//_e12no
	r[5] = a[5] * b[15]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[15] ;
	
	
	//_e23no
	r[7] = a[3] * b[15]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[15] ;
	
	
	//_e13ni
	r[9] = a[7] * b[15]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[15] ;
	
	
	//_e1noni
	r[11] = a[2] * b[15]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[15] ;
	
	
	//_e3noni
	r[13] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[11]  + a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[11]  + a[6] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[10]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[10]  + a[3] * b[7]  + a[5] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1  + a[3] * b[8]  + a[4] * b[9] ;
	
	
	//_e1ni
	r[7] = a[2] * b[11]  * -1  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11]  + a[6] * b[7]  * -1  + a[8] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[11]  * -1  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[11]  + a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[11]  + a[6] * b[10] ;
	
	
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

double * conga_ip_11_50(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1ni
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[3] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_51(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12
	r[1] = a[8] * b[3] ;
	
	
	//_e13
	r[2] = a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12no
	r[5] = a[5] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[7] ;
	
	
	//_e23no
	r[7] = a[3] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[7] ;
	
	
	//_e13ni
	r[9] = a[7] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[7] ;
	
	
	//_e1noni
	r[11] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[7] ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[4]  + a[5] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_e1ni
	r[7] = a[2] * b[7]  * -1  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7]  + a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1  + a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_55(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_57(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_11_58(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	return r;
}

double * conga_ip_11_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[3]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[3] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e12ni
	r[7] = a[8] * b[3] ;
	
	
	//_e13ni
	r[8] = a[7] * b[3]  * -1 ;
	
	
	//_e23ni
	r[9] = a[6] * b[3] ;
	
	
	//_e1noni
	r[10] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[3] ;
	
	
	//_e3noni
	r[12] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	return r;
}

double * conga_ip_11_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[11]  + a[5] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_e1ni
	r[7] = a[2] * b[14]  * -1  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e2ni
	r[8] = a[1] * b[14]  + a[6] * b[11]  * -1  + a[8] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[14]  * -1  + a[6] * b[12]  * -1  + a[7] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[7]  + a[5] * b[8]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[7]  * -1  + a[5] * b[9]  + a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12no
	r[5] = a[5] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[14] ;
	
	
	//_e23no
	r[7] = a[3] * b[14]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[14] ;
	
	
	//_e13ni
	r[9] = a[7] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[14] ;
	
	
	//_e1noni
	r[11] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[14] ;
	
	
	//_e3noni
	r[13] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[10]  + a[8] * b[9] ;
	
	
	//_e13
	r[2] = a[4] * b[10]  * -1  + a[7] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[10]  + a[6] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[9]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[9]  + a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e1ni
	r[7] = a[2] * b[10]  * -1  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[10]  + a[6] * b[6]  * -1  + a[8] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[10]  * -1  + a[6] * b[7]  * -1  + a[7] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e1no
	r[1] = a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_e1ni
	r[4] = a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e2ni
	r[5] = a[6] * b[8]  * -1  + a[8] * b[10] ;
	
	
	//_e3ni
	r[6] = a[6] * b[9]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12no
	r[5] = a[5] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[10] ;
	
	
	//_e23no
	r[7] = a[3] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[10] ;
	
	
	//_e13ni
	r[9] = a[7] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[10] ;
	
	
	//_e1noni
	r[11] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[10] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[6] ;
	
	
	//_e13
	r[2] = a[7] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6]  + a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e1ni
	r[7] = a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2ni
	r[8] = a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3ni
	r[9] = a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_11_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e1ni
	r[7] = a[2] * b[6]  * -1  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[6]  + a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[12]  * -1  + a[4] * b[6]  + a[5] * b[7]  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[12]  + a[3] * b[6]  * -1  + a[5] * b[8]  + a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[12]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	//_e12no
	r[5] = a[5] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[13] ;
	
	
	//_e23no
	r[7] = a[3] * b[13]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[13] ;
	
	
	//_e13ni
	r[9] = a[7] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[13] ;
	
	
	//_e1noni
	r[11] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[13] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_73(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[5] * b[1]  * -1 ;
	
	
	//_e13no
	r[4] = a[4] * b[1] ;
	
	
	//_e23no
	r[5] = a[3] * b[1]  * -1 ;
	
	
	//_e12ni
	r[6] = a[8] * b[1] ;
	
	
	//_e13ni
	r[7] = a[7] * b[1]  * -1 ;
	
	
	//_e23ni
	r[8] = a[6] * b[1] ;
	
	
	//_e1noni
	r[9] = a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[10] = a[1] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[7]  + a[8] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7]  + a[6] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6]  + a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e1ni
	r[7] = a[2] * b[7]  * -1  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7]  + a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1no
	r[1] = a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[9]  + a[5] * b[11]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[10]  + a[4] * b[11] ;
	
	
	//_e1ni
	r[4] = a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e2ni
	r[5] = a[6] * b[9]  * -1  + a[8] * b[11] ;
	
	
	//_e3ni
	r[6] = a[6] * b[10]  * -1  + a[7] * b[11]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_11_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e1ni
	r[7] = a[2] * b[6]  * -1  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[6]  + a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1no
	r[1] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e1ni
	r[4] = a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e2ni
	r[5] = a[6] * b[6]  * -1  + a[8] * b[8] ;
	
	
	//_e3ni
	r[6] = a[6] * b[7]  * -1  + a[7] * b[8]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_79(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_11_80(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_11_81(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e1ni
	r[4] = a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2ni
	r[5] = a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3ni
	r[6] = a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1no
	r[1] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e1ni
	r[4] = a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e2ni
	r[5] = a[6] * b[6]  * -1  + a[8] * b[8] ;
	
	
	//_e3ni
	r[6] = a[6] * b[7]  * -1  + a[7] * b[8]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[4] ;
	
	
	//_e23no
	r[6] = a[3] * b[4]  * -1 ;
	
	
	//_e12ni
	r[7] = a[8] * b[4] ;
	
	
	//_e13ni
	r[8] = a[7] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[6] * b[4] ;
	
	
	//_e1noni
	r[10] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[4] ;
	
	
	//_e3noni
	r[12] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e12no
	r[5] = a[5] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[11] ;
	
	
	//_e23no
	r[7] = a[3] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[11] ;
	
	
	//_e13ni
	r[9] = a[7] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[11] ;
	
	
	//_e1noni
	r[11] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[11] ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12
	r[1] = a[8] * b[11] ;
	
	
	//_e13
	r[2] = a[7] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[11] ;
	
	
	//_e1no
	r[4] = a[2] * b[11]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[11]  + a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  * -1  + a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_e1ni
	r[7] = a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e2ni
	r[8] = a[6] * b[8]  * -1  + a[8] * b[10] ;
	
	
	//_e3ni
	r[9] = a[6] * b[9]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	return r;
}

double * conga_ip_11_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2
	r[1] = a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3
	r[2] = a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[3]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[3] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e12ni
	r[7] = a[8] * b[3] ;
	
	
	//_e13ni
	r[8] = a[7] * b[3]  * -1 ;
	
	
	//_e23ni
	r[9] = a[6] * b[3] ;
	
	
	//_e1noni
	r[10] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[3] ;
	
	
	//_e3noni
	r[12] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e2
	r[1] = a[6] * b[5]  * -1  + a[8] * b[7] ;
	
	
	//_e3
	r[2] = a[6] * b[6]  * -1  + a[7] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	return r;
}

double * conga_ip_11_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12
	r[1] = a[8] * b[14] ;
	
	
	//_e13
	r[2] = a[7] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[14]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[14]  + a[3] * b[11]  + a[5] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[14]  * -1  + a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_e1ni
	r[7] = a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e2ni
	r[8] = a[6] * b[11]  * -1  + a[8] * b[13] ;
	
	
	//_e3ni
	r[9] = a[6] * b[12]  * -1  + a[7] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[7]  + a[5] * b[8]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[7]  * -1  + a[5] * b[9]  + a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12no
	r[5] = a[5] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[14] ;
	
	
	//_e23no
	r[7] = a[3] * b[14]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[14] ;
	
	
	//_e13ni
	r[9] = a[7] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[14] ;
	
	
	//_e1noni
	r[11] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[14] ;
	
	
	//_e3noni
	r[13] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[10]  + a[8] * b[9] ;
	
	
	//_e13
	r[2] = a[4] * b[10]  * -1  + a[7] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[10]  + a[6] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[9]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[9]  + a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e1ni
	r[7] = a[2] * b[10]  * -1  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[10]  + a[6] * b[6]  * -1  + a[8] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[10]  * -1  + a[6] * b[7]  * -1  + a[7] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1no
	r[1] = a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_e1ni
	r[4] = a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e2ni
	r[5] = a[6] * b[8]  * -1  + a[8] * b[10] ;
	
	
	//_e3ni
	r[6] = a[6] * b[9]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12no
	r[5] = a[5] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[10] ;
	
	
	//_e23no
	r[7] = a[3] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[10] ;
	
	
	//_e13ni
	r[9] = a[7] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[10] ;
	
	
	//_e1noni
	r[11] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[10] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2
	r[1] = a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3
	r[2] = a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12
	r[1] = a[8] * b[6] ;
	
	
	//_e13
	r[2] = a[7] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e12no
	r[5] = a[5] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[11] ;
	
	
	//_e23no
	r[7] = a[3] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[11] ;
	
	
	//_e13ni
	r[9] = a[7] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[11] ;
	
	
	//_e1noni
	r[11] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[11] ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2
	r[1] = a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3
	r[2] = a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	return r;
}

double * conga_ip_11_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12
	r[1] = a[8] * b[9] ;
	
	
	//_e13
	r[2] = a[7] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[9]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[9]  + a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e1ni
	r[7] = a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e2ni
	r[8] = a[6] * b[6]  * -1  + a[8] * b[8] ;
	
	
	//_e3ni
	r[9] = a[6] * b[7]  * -1  + a[7] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2
	r[1] = a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3
	r[2] = a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_11_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	return r;
}

double * conga_ip_11_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e1ni
	r[7] = a[2] * b[9]  * -1  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[9]  + a[6] * b[6]  * -1  + a[8] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  * -1  + a[6] * b[7]  * -1  + a[7] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[4] ;
	
	
	//_e23no
	r[6] = a[3] * b[4]  * -1 ;
	
	
	//_e12ni
	r[7] = a[8] * b[4] ;
	
	
	//_e13ni
	r[8] = a[7] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[6] * b[4] ;
	
	
	//_e1noni
	r[10] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[4] ;
	
	
	//_e3noni
	r[12] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[2]  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	return r;
}

double * conga_ip_11_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	//_e1no
	r[1] = a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[7]  + a[5] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[8]  + a[4] * b[9] ;
	
	
	//_e1ni
	r[4] = a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e2ni
	r[5] = a[6] * b[7]  * -1  + a[8] * b[9] ;
	
	
	//_e3ni
	r[6] = a[6] * b[8]  * -1  + a[7] * b[9]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[6]  + a[5] * b[7]  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[6]  * -1  + a[5] * b[8]  + a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[9]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[9] ;
	
	
	//_e23no
	r[7] = a[3] * b[9]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[9] ;
	
	
	//_e13ni
	r[9] = a[7] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[9] ;
	
	
	//_e1noni
	r[11] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[9] ;
	
	
	//_e3noni
	r[13] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_106(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[4]  + a[8] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[4]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[4]  + a[6] * b[3] ;
	
	
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

double * conga_ip_11_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1no
	r[1] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e1ni
	r[4] = a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e2ni
	r[5] = a[6] * b[6]  * -1  + a[8] * b[8] ;
	
	
	//_e3ni
	r[6] = a[6] * b[7]  * -1  + a[7] * b[8]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_109(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1ni
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[3] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e1ni
	r[4] = a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2ni
	r[5] = a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3ni
	r[6] = a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_111(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_ip_11_112(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	return r;
}

double * conga_ip_11_113(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[3] * b[0]  + a[5] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_e1ni
	r[3] = a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2ni
	r[4] = a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3ni
	r[5] = a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_noni
	r[6] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_ip_11_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1no
	r[1] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e1ni
	r[4] = a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2ni
	r[5] = a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3ni
	r[6] = a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[1]  + a[8] * b[0] ;
	
	
	//_e13
	r[1] = a[4] * b[1]  * -1  + a[7] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[1]  + a[6] * b[0] ;
	
	
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

double * conga_ip_11_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_ip_11_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[8]  + a[5] * b[9]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[8]  * -1  + a[5] * b[10]  + a[6] * b[5]  * -1  + a[8] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	return r;
}

double * conga_ip_11_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[13]  + a[8] * b[12] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1  + a[7] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13]  + a[6] * b[12] ;
	
	
	//_e1no
	r[4] = a[2] * b[12]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[12]  + a[3] * b[9]  + a[5] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[3] * b[10]  + a[4] * b[11] ;
	
	
	//_e1ni
	r[7] = a[2] * b[13]  * -1  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[13]  + a[6] * b[9]  * -1  + a[8] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[13]  * -1  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4]  + a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[7] ;
	
	
	//_e23no
	r[7] = a[3] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[7] ;
	
	
	//_e13ni
	r[9] = a[7] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[7] ;
	
	
	//_e1noni
	r[11] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[7] ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[6]  + a[5] * b[7]  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[6]  * -1  + a[5] * b[8]  + a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	return r;
}

double * conga_ip_11_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	return r;
}

double * conga_ip_11_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_11_125(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[8] * b[3] ;
	
	
	//_e13
	r[1] = a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[6] * b[3] ;
	
	
	//_e1no
	r[3] = a[2] * b[3]  * -1  + a[4] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[0]  + a[5] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[3]  * -1  + a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_e1ni
	r[6] = a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2ni
	r[7] = a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3ni
	r[8] = a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2
	r[1] = a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3
	r[2] = a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_11_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_11_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[3] * b[8]  * -1  + a[5] * b[10]  + a[6] * b[5]  * -1  + a[8] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	return r;
}

double * conga_ip_11_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[14]  + a[8] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1  + a[7] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14]  + a[6] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  + a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e1ni
	r[7] = a[2] * b[14]  * -1  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[14]  + a[6] * b[10]  * -1  + a[8] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[14]  * -1  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4]  + a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12no
	r[5] = a[5] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[10] ;
	
	
	//_e23no
	r[7] = a[3] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[10] ;
	
	
	//_e13ni
	r[9] = a[7] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[10] ;
	
	
	//_e1noni
	r[11] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[10] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e1ni
	r[7] = a[2] * b[13]  * -1  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[13]  + a[6] * b[10]  * -1  + a[8] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[13]  * -1  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[7]  + a[5] * b[8]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[7]  * -1  + a[5] * b[9]  + a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	return r;
}

double * conga_ip_11_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_11_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[6]  + a[5] * b[7]  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[6]  * -1  + a[5] * b[8]  + a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[7]  + a[5] * b[8]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[7]  * -1  + a[5] * b[9]  + a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	return r;
}

double * conga_ip_11_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[14]  + a[8] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1  + a[7] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14]  + a[6] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  + a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e1ni
	r[7] = a[2] * b[14]  * -1  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[14]  + a[6] * b[10]  * -1  + a[8] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[14]  * -1  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[8]  + a[5] * b[9]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[8]  * -1  + a[5] * b[10]  + a[6] * b[5]  * -1  + a[8] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	//_e12no
	r[5] = a[5] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[14] ;
	
	
	//_e23no
	r[7] = a[3] * b[14]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[14] ;
	
	
	//_e13ni
	r[9] = a[7] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[14] ;
	
	
	//_e1noni
	r[11] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[14] ;
	
	
	//_e3noni
	r[13] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12no
	r[5] = a[5] * b[9]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[9] ;
	
	
	//_e23no
	r[7] = a[3] * b[9]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[9] ;
	
	
	//_e13ni
	r[9] = a[7] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[9] ;
	
	
	//_e1noni
	r[11] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[9] ;
	
	
	//_e3noni
	r[13] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1no
	r[1] = a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[7]  + a[5] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[8]  + a[4] * b[9] ;
	
	
	//_e1ni
	r[4] = a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e2ni
	r[5] = a[6] * b[7]  * -1  + a[8] * b[9] ;
	
	
	//_e3ni
	r[6] = a[6] * b[8]  * -1  + a[7] * b[9]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12
	r[1] = a[8] * b[13] ;
	
	
	//_e13
	r[2] = a[7] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  + a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e1ni
	r[7] = a[7] * b[10]  + a[8] * b[11] ;
	
	
	//_e2ni
	r[8] = a[6] * b[10]  * -1  + a[8] * b[12] ;
	
	
	//_e3ni
	r[9] = a[6] * b[11]  * -1  + a[7] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[6]  + a[5] * b[7]  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[6]  * -1  + a[5] * b[8]  + a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12no
	r[5] = a[5] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[7] ;
	
	
	//_e23no
	r[7] = a[3] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[7] ;
	
	
	//_e13ni
	r[9] = a[7] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[7] ;
	
	
	//_e1noni
	r[11] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[7] ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_11_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12no
	r[5] = a[5] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[6] ;
	
	
	//_e23no
	r[7] = a[3] * b[6]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[6] ;
	
	
	//_e13ni
	r[9] = a[7] * b[6]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[6] ;
	
	
	//_e1noni
	r[11] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[6] ;
	
	
	//_e3noni
	r[13] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[4]  + a[5] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_e1ni
	r[4] = a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2ni
	r[5] = a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3ni
	r[6] = a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_11_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_149(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[3] ;
	
	
	//_e13
	r[2] = a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2
	r[1] = a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3
	r[2] = a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12
	r[1] = a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[7]  + a[3] * b[4]  + a[5] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  * -1  + a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_e1ni
	r[7] = a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2ni
	r[8] = a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3ni
	r[9] = a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e2
	r[1] = a[6] * b[1]  * -1  + a[8] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[2]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12no
	r[5] = a[5] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[7] ;
	
	
	//_e23no
	r[7] = a[3] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[7] ;
	
	
	//_e13ni
	r[9] = a[7] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[7] ;
	
	
	//_e1noni
	r[11] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[7] ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7]  + a[6] * b[2]  * -1  + a[8] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e12no
	r[5] = a[5] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[11] ;
	
	
	//_e23no
	r[7] = a[3] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[11] ;
	
	
	//_e13ni
	r[9] = a[7] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[11] ;
	
	
	//_e1noni
	r[11] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[11] ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[7]  + a[8] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7]  + a[6] * b[6] ;
	
	
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

double * conga_ip_11_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e2
	r[1] = a[6] * b[1]  * -1  + a[8] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[2]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_11_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12
	r[1] = a[8] * b[6] ;
	
	
	//_e13
	r[2] = a[7] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6]  + a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e1ni
	r[7] = a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2ni
	r[8] = a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3ni
	r[9] = a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	//_e1no
	r[1] = a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_e1ni
	r[4] = a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e2ni
	r[5] = a[6] * b[8]  * -1  + a[8] * b[10] ;
	
	
	//_e3ni
	r[6] = a[6] * b[9]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[6]  + a[5] * b[7]  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[6]  * -1  + a[5] * b[8]  + a[6] * b[3]  * -1  + a[8] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[10] ;
	
	
	//_e23no
	r[7] = a[3] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[10] ;
	
	
	//_e13ni
	r[9] = a[7] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[10] ;
	
	
	//_e1noni
	r[11] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[10] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e1ni
	r[7] = a[2] * b[13]  * -1  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[13]  + a[6] * b[10]  * -1  + a[8] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[13]  * -1  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[7]  + a[5] * b[8]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[7]  * -1  + a[5] * b[9]  + a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12no
	r[5] = a[5] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[13] ;
	
	
	//_e23no
	r[7] = a[3] * b[13]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[13] ;
	
	
	//_e13ni
	r[9] = a[7] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[13] ;
	
	
	//_e1noni
	r[11] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[13] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[7]  + a[5] * b[8]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[7]  * -1  + a[5] * b[9]  + a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12no
	r[5] = a[5] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[13] ;
	
	
	//_e23no
	r[7] = a[3] * b[13]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[13] ;
	
	
	//_e13ni
	r[9] = a[7] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[13] ;
	
	
	//_e1noni
	r[11] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[13] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12
	r[1] = a[8] * b[13] ;
	
	
	//_e13
	r[2] = a[7] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  + a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e1ni
	r[7] = a[7] * b[10]  + a[8] * b[11] ;
	
	
	//_e2ni
	r[8] = a[6] * b[10]  * -1  + a[8] * b[12] ;
	
	
	//_e3ni
	r[9] = a[6] * b[11]  * -1  + a[7] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1no
	r[1] = a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[4]  + a[5] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_e1ni
	r[4] = a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e2ni
	r[5] = a[6] * b[4]  * -1  + a[8] * b[6] ;
	
	
	//_e3ni
	r[6] = a[6] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2
	r[1] = a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3
	r[2] = a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12no
	r[5] = a[5] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[6] ;
	
	
	//_e23no
	r[7] = a[3] * b[6]  * -1 ;
	
	
	//_e12ni
	r[8] = a[8] * b[6] ;
	
	
	//_e13ni
	r[9] = a[7] * b[6]  * -1 ;
	
	
	//_e23ni
	r[10] = a[6] * b[6] ;
	
	
	//_e1noni
	r[11] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[12] = a[1] * b[6] ;
	
	
	//_e3noni
	r[13] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4]  + a[7] * b[0]  + a[8] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[0]  * -1  + a[8] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[1]  * -1  + a[7] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_11_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	return r;
}

double * conga_ip_11_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[12]  + a[4] * b[13]  + a[5] * b[14]  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	//_e1
	r[1] = a[2] * b[25]  * -1  + a[4] * b[19]  + a[5] * b[20]  + a[7] * b[16]  + a[8] * b[17] ;
	
	
	//_e2
	r[2] = a[1] * b[25]  + a[3] * b[19]  * -1  + a[5] * b[21]  + a[6] * b[16]  * -1  + a[8] * b[18] ;
	
	
	//_e3
	r[3] = a[0] * b[25]  * -1  + a[3] * b[20]  * -1  + a[4] * b[21]  * -1  + a[6] * b[17]  * -1  + a[7] * b[18]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[16]  * -1  + a[1] * b[17]  * -1  + a[2] * b[18]  * -1  + a[3] * b[22]  * -1  + a[4] * b[23]  * -1  + a[5] * b[24]  * -1 ;
	
	
	//_ni
	r[5] = a[0] * b[19]  * -1  + a[1] * b[20]  * -1  + a[2] * b[21]  * -1  + a[6] * b[22]  + a[7] * b[23]  + a[8] * b[24] ;
	
	
	//_e12
	r[6] = a[5] * b[30]  + a[8] * b[29] ;
	
	
	//_e13
	r[7] = a[4] * b[30]  * -1  + a[7] * b[29]  * -1 ;
	
	
	//_e23
	r[8] = a[3] * b[30]  + a[6] * b[29] ;
	
	
	//_e1no
	r[9] = a[2] * b[29]  * -1  + a[4] * b[26]  * -1  + a[5] * b[27]  * -1 ;
	
	
	//_e2no
	r[10] = a[1] * b[29]  + a[3] * b[26]  + a[5] * b[28]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[29]  * -1  + a[3] * b[27]  + a[4] * b[28] ;
	
	
	//_e1ni
	r[12] = a[2] * b[30]  * -1  + a[7] * b[26]  + a[8] * b[27] ;
	
	
	//_e2ni
	r[13] = a[1] * b[30]  + a[6] * b[26]  * -1  + a[8] * b[28] ;
	
	
	//_e3ni
	r[14] = a[0] * b[30]  * -1  + a[6] * b[27]  * -1  + a[7] * b[28]  * -1 ;
	
	
	//_noni
	r[15] = a[0] * b[26]  * -1  + a[1] * b[27]  * -1  + a[2] * b[28]  * -1 ;
	
	
	//_e12no
	r[16] = a[5] * b[31]  * -1 ;
	
	
	//_e13no
	r[17] = a[4] * b[31] ;
	
	
	//_e23no
	r[18] = a[3] * b[31]  * -1 ;
	
	
	//_e12ni
	r[19] = a[8] * b[31] ;
	
	
	//_e13ni
	r[20] = a[7] * b[31]  * -1 ;
	
	
	//_e23ni
	r[21] = a[6] * b[31] ;
	
	
	//_e1noni
	r[22] = a[2] * b[31]  * -1 ;
	
	
	//_e2noni
	r[23] = a[1] * b[31] ;
	
	
	//_e3noni
	r[24] = a[0] * b[31]  * -1 ;
	
	
	return r;
}


