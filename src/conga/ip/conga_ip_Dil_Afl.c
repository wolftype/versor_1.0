
#include "conga_ip_Dil_Afl.h"


double * conga_ip_82_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_6(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[0] ;
	
	
	//_e3
	r[2] = a[6] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[5] * b[0]  * -1 ;
	
	
	//_e13no
	r[4] = a[4] * b[0] ;
	
	
	//_e23no
	r[5] = a[3] * b[0]  * -1 ;
	
	
	//_e1noni
	r[6] = a[2] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[0] ;
	
	
	//_e3noni
	r[8] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_82_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1  + a[7] * b[1]  * -1  + a[8] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[4] ;
	
	
	//_e13
	r[2] = a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[4] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1  + a[4] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3]  + a[3] * b[0]  + a[5] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1  + a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_e1ni
	r[7] = a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_82_12(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_82_13(double * a, double * b, double *r) { 
	
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

double * conga_ip_82_14(double * a, double * b, double *r) { 
	
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

double * conga_ip_82_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_16(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_17(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1  + a[7] * b[1]  * -1  + a[8] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[0]  + a[5] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_e1ni
	r[7] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[3] ;
	
	
	//_e3ni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_82_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_82_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_24(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_25(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_29(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_82_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_32(double * a, double * b, double *r) { 
	
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

double * conga_ip_82_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
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
	r[7] = a[2] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[5]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[5]  + a[5] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[6]  + a[4] * b[7] ;
	
	
	//_noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[7] ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_82_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[11]  + a[5] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_noni
	r[4] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_39(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[15] ;
	
	
	//_e13
	r[2] = a[4] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[15] ;
	
	
	//_e1no
	r[4] = a[2] * b[14]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[14]  + a[3] * b[11]  + a[5] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[14]  * -1  + a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_e1ni
	r[7] = a[2] * b[15]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[15] ;
	
	
	//_e3ni
	r[9] = a[0] * b[15]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_41(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_42(double * a, double * b, double *r) { 
	
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

double * conga_ip_82_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  * -1  + a[7] * b[2]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[1]  + a[5] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[2]  + a[4] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[3]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[3] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[3] ;
	
	
	//_e3noni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[8] * b[15]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[3] * b[8]  * -1  + a[5] * b[10]  + a[7] * b[15] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[6] * b[15]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[15]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[15] ;
	
	
	//_e23no
	r[7] = a[3] * b[15]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[15]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[15] ;
	
	
	//_e3noni
	r[10] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[7]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[11] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[2] * b[10]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[10]  + a[3] * b[7]  + a[5] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1  + a[3] * b[8]  + a[4] * b[9] ;
	
	
	//_e1ni
	r[7] = a[2] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e12
	r[1] = a[5] * b[11] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
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

double * conga_ip_82_50(double * a, double * b, double *r) { 
	
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

double * conga_ip_82_51(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[3] ;
	
	
	//_e3no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2]  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3]  + a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[7] ;
	
	
	//_e23no
	r[7] = a[3] * b[7]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[7] ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1 ;
	
	
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
	r[7] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_54(double * a, double * b, double *r) { 
	
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

double * conga_ip_82_55(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_57(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_58(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[3]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[3] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[3] ;
	
	
	//_e3noni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1  + a[8] * b[13]  * -1 ;
	
	
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
	r[7] = a[2] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[7]  + a[5] * b[8]  + a[8] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[7]  * -1  + a[5] * b[9]  + a[7] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[14] ;
	
	
	//_e23no
	r[7] = a[3] * b[14]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[14] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[9]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[9]  + a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e1ni
	r[7] = a[2] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[10] ;
	
	
	//_e23no
	r[6] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[10] ;
	
	
	//_e3noni
	r[9] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[6]  * -1  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[6]  + a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
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
	r[7] = a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[6] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_69(double * a, double * b, double *r) { 
	
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

double * conga_ip_82_70(double * a, double * b, double *r) { 
	
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

double * conga_ip_82_71(double * a, double * b, double *r) { 
	
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

double * conga_ip_82_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[12]  * -1  + a[4] * b[6]  + a[5] * b[7]  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[12]  + a[3] * b[6]  * -1  + a[5] * b[8]  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[12]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[13] ;
	
	
	//_e23no
	r[7] = a[3] * b[13]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[13] ;
	
	
	//_e3noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_73(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0]  + a[7] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e12no
	r[3] = a[5] * b[1]  * -1 ;
	
	
	//_e13no
	r[4] = a[4] * b[1] ;
	
	
	//_e23no
	r[5] = a[3] * b[1]  * -1 ;
	
	
	//_e1noni
	r[6] = a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6]  + a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e1ni
	r[7] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[9]  + a[5] * b[11]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[10]  + a[4] * b[11] ;
	
	
	//_noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
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
	r[7] = a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[6] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_79(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_80(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_81(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[7] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[4] ;
	
	
	//_e23no
	r[6] = a[3] * b[4]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[4] ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[7] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[11]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[11] ;
	
	
	//_e23no
	r[6] = a[3] * b[11]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[11] ;
	
	
	//_e3noni
	r[9] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[11]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[11]  + a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[11]  * -1  + a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_82_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[3]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[3] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[3] ;
	
	
	//_e3noni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_88(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[14]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[14]  + a[3] * b[11]  + a[5] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[14]  * -1  + a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_noni
	r[4] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[7]  + a[5] * b[8]  + a[8] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[7]  * -1  + a[5] * b[9]  + a[7] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[14] ;
	
	
	//_e23no
	r[7] = a[3] * b[14]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[14] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[9]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[9]  + a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e1ni
	r[7] = a[2] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4]  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[10] ;
	
	
	//_e23no
	r[7] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_94(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[6] ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[7] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[11] ;
	
	
	//_e23no
	r[7] = a[3] * b[11]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[11] ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_97(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[9]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[9]  + a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_99(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
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
	r[7] = a[2] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[4] * b[0]  + a[5] * b[1]  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[4] ;
	
	
	//_e23no
	r[6] = a[3] * b[4]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[4] ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[7]  + a[5] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[8]  + a[4] * b[9] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[6]  + a[5] * b[7]  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[6]  * -1  + a[5] * b[8]  + a[7] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
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
	
	
	//_e1noni
	r[8] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[9] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_106(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[4] ;
	
	
	//_e13
	r[2] = a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[4] ;
	
	
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

double * conga_ip_82_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_108(double * a, double * b, double *r) { 
	
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

double * conga_ip_82_109(double * a, double * b, double *r) { 
	
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

double * conga_ip_82_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_111(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_112(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_113(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1  + a[7] * b[1]  * -1  + a[8] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[0]  + a[5] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_noni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[1] ;
	
	
	//_e13
	r[1] = a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[1] ;
	
	
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

double * conga_ip_82_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_82_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2
	r[1] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[12]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[12]  + a[3] * b[9]  + a[5] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[3] * b[10]  + a[4] * b[11] ;
	
	
	//_e1ni
	r[7] = a[2] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4]  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[7]  * -1 ;
	
	
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
	
	
	//_e1noni
	r[8] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[7] ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2
	r[1] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_82_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_125(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1  + a[7] * b[1]  * -1  + a[8] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[3]  * -1  + a[4] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[3]  + a[3] * b[0]  + a[5] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1  + a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_noni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_126(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_82_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  + a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e1ni
	r[7] = a[2] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4]  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[10] ;
	
	
	//_e23no
	r[7] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
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
	r[7] = a[2] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_82_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  + a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e1ni
	r[7] = a[2] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[8]  + a[5] * b[9]  + a[8] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[8]  * -1  + a[5] * b[10]  + a[7] * b[14] ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[14] ;
	
	
	//_e23no
	r[7] = a[3] * b[14]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[14] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5]  + a[7] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[9]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[9] ;
	
	
	//_e23no
	r[7] = a[3] * b[9]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[9] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[7]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[7]  + a[5] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[8]  + a[4] * b[9] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[13]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[13]  + a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[13]  * -1  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_noni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2
	r[1] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[7]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[7] ;
	
	
	//_e23no
	r[6] = a[3] * b[7]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[7] ;
	
	
	//_e3noni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_82_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[6] ;
	
	
	//_e23no
	r[7] = a[3] * b[6]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[6] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[4]  + a[5] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_146(double * a, double * b, double *r) { 
	
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

double * conga_ip_82_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_149(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[3] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_150(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  * -1  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[7]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[7]  + a[3] * b[4]  + a[5] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1  + a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[7]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[7] ;
	
	
	//_e23no
	r[6] = a[3] * b[7]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[7] ;
	
	
	//_e3noni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6]  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7]  + a[7] * b[11] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[11] ;
	
	
	//_e23no
	r[7] = a[3] * b[11]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[11] ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
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

double * conga_ip_82_155(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[6]  * -1  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[6]  + a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[6]  + a[5] * b[7]  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[6]  * -1  + a[5] * b[8]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[6] * b[10]  * -1 ;
	
	
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
	
	
	//_e1noni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
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
	r[7] = a[2] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[7]  + a[5] * b[8]  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[7]  * -1  + a[5] * b[9]  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[13] ;
	
	
	//_e23no
	r[7] = a[3] * b[13]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[13] ;
	
	
	//_e3noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[7]  + a[5] * b[8]  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[7]  * -1  + a[5] * b[9]  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[13] ;
	
	
	//_e23no
	r[7] = a[3] * b[13]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[13] ;
	
	
	//_e3noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[13]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[13]  + a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[13]  * -1  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_noni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  * -1  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[4]  + a[5] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[5] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[6] ;
	
	
	//_e23no
	r[6] = a[3] * b[6]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[6] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_82_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_82_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[12]  + a[4] * b[13]  + a[5] * b[14]  + a[6] * b[26]  * -1  + a[7] * b[27]  * -1  + a[8] * b[28]  * -1 ;
	
	
	//_e1
	r[1] = a[2] * b[25]  * -1  + a[4] * b[19]  + a[5] * b[20]  + a[8] * b[31]  * -1 ;
	
	
	//_e2
	r[2] = a[1] * b[25]  + a[3] * b[19]  * -1  + a[5] * b[21]  + a[7] * b[31] ;
	
	
	//_e3
	r[3] = a[0] * b[25]  * -1  + a[3] * b[20]  * -1  + a[4] * b[21]  * -1  + a[6] * b[31]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[16]  * -1  + a[1] * b[17]  * -1  + a[2] * b[18]  * -1  + a[3] * b[22]  * -1  + a[4] * b[23]  * -1  + a[5] * b[24]  * -1 ;
	
	
	//_ni
	r[5] = a[0] * b[19]  * -1  + a[1] * b[20]  * -1  + a[2] * b[21]  * -1 ;
	
	
	//_e12
	r[6] = a[5] * b[30] ;
	
	
	//_e13
	r[7] = a[4] * b[30]  * -1 ;
	
	
	//_e23
	r[8] = a[3] * b[30] ;
	
	
	//_e1no
	r[9] = a[2] * b[29]  * -1  + a[4] * b[26]  * -1  + a[5] * b[27]  * -1 ;
	
	
	//_e2no
	r[10] = a[1] * b[29]  + a[3] * b[26]  + a[5] * b[28]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[29]  * -1  + a[3] * b[27]  + a[4] * b[28] ;
	
	
	//_e1ni
	r[12] = a[2] * b[30]  * -1 ;
	
	
	//_e2ni
	r[13] = a[1] * b[30] ;
	
	
	//_e3ni
	r[14] = a[0] * b[30]  * -1 ;
	
	
	//_noni
	r[15] = a[0] * b[26]  * -1  + a[1] * b[27]  * -1  + a[2] * b[28]  * -1 ;
	
	
	//_e12no
	r[16] = a[5] * b[31]  * -1 ;
	
	
	//_e13no
	r[17] = a[4] * b[31] ;
	
	
	//_e23no
	r[18] = a[3] * b[31]  * -1 ;
	
	
	//_e1noni
	r[19] = a[2] * b[31]  * -1 ;
	
	
	//_e2noni
	r[20] = a[1] * b[31] ;
	
	
	//_e3noni
	r[21] = a[0] * b[31]  * -1 ;
	
	
	return r;
}


