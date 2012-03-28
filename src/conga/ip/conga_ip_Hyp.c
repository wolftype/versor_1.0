
#include "conga_ip_Hyp.h"


double * conga_ip_5_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_5_2(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_3(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_4(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_6(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[1] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_ip_5_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_9(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[6] ;
	
	
	//_e2ni
	r[7] = a[1] * b[7] ;
	
	
	//_e3ni
	r[8] = a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_5_10(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_5_12(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_5_13(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_14(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_5_15(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_5_16(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_17(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_ip_5_18(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_5_19(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_20(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_21(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_5_22(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_5_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_5_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_5_26(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_5_28(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_5_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_31(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1] ;
	
	
	//_ni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_e123
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_5_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_5_35(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4] ;
	
	
	//_ni
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e12no
	r[2] = a[0] * b[5] ;
	
	
	//_e13no
	r[3] = a[0] * b[6] ;
	
	
	//_e23no
	r[4] = a[0] * b[7] ;
	
	
	//_e12ni
	r[5] = a[1] * b[5]  * -1 ;
	
	
	//_e13ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[6] ;
	
	
	//_e123
	r[3] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_5_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4] ;
	
	
	//_ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[11] ;
	
	
	//_e13no
	r[6] = a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4] ;
	
	
	//_ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[11] ;
	
	
	//_e13no
	r[6] = a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[15]  + a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_5_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_43(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e12no
	r[2] = a[0] * b[1] ;
	
	
	//_e13no
	r[3] = a[0] * b[2] ;
	
	
	//_e23no
	r[4] = a[0] * b[3] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1]  * -1 ;
	
	
	//_e13ni
	r[6] = a[1] * b[2]  * -1 ;
	
	
	//_e23ni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_45(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0] ;
	
	
	//_e2ni
	r[4] = a[1] * b[1] ;
	
	
	//_e3ni
	r[5] = a[1] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[12] ;
	
	
	//_e3ni
	r[9] = a[1] * b[13] ;
	
	
	//_e123no
	r[10] = a[0] * b[15]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[15] ;
	
	
	return r;
}

double * conga_ip_5_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_ni
	r[4] = a[1] * b[6]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[7] ;
	
	
	//_e13no
	r[6] = a[0] * b[8] ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[11]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_5_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e123
	r[3] = a[0] * b[11]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_5_50(double * a, double * b, double *r) { 
	
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

double * conga_ip_5_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	//_e123
	r[3] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[5] ;
	
	
	//_e3ni
	r[9] = a[1] * b[6] ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_5_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_5_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_5_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[4] ;
	
	
	//_e2ni
	r[5] = a[1] * b[5] ;
	
	
	//_e3ni
	r[6] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[5] ;
	
	
	//_e2ni
	r[5] = a[1] * b[6] ;
	
	
	//_e3ni
	r[6] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_5_59(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_5_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[11] ;
	
	
	//_e13no
	r[6] = a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_5_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_5_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[10]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_5_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_65(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[6] ;
	
	
	//_e2ni
	r[7] = a[1] * b[7] ;
	
	
	//_e3ni
	r[8] = a[1] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_5_66(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[0] * b[4] ;
	
	
	//_e23no
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[6] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[5] ;
	
	
	//_e3ni
	r[9] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_68(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e123
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_71(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_72(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[9] ;
	
	
	//_e2ni
	r[7] = a[1] * b[10] ;
	
	
	//_e3ni
	r[8] = a[1] * b[11] ;
	
	
	//_e123no
	r[9] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_5_73(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[1]  * -1 ;
	
	
	//_e123ni
	r[1] = a[1] * b[1] ;
	
	
	return r;
}

double * conga_ip_5_74(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[0] * b[4] ;
	
	
	//_e23no
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[7]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[9] ;
	
	
	//_e13no
	r[4] = a[0] * b[10] ;
	
	
	//_e23no
	r[5] = a[0] * b[11] ;
	
	
	//_e12ni
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_76(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[6] ;
	
	
	//_e2ni
	r[7] = a[1] * b[7] ;
	
	
	//_e3ni
	r[8] = a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_5_77(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[0] * b[4] ;
	
	
	//_e23no
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[4] ;
	
	
	//_e2ni
	r[5] = a[1] * b[5] ;
	
	
	//_e3ni
	r[6] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_80(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[3] ;
	
	
	//_e2ni
	r[4] = a[1] * b[4] ;
	
	
	//_e3ni
	r[5] = a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_5_81(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3] ;
	
	
	//_e13no
	r[1] = a[0] * b[4] ;
	
	
	//_e23no
	r[2] = a[0] * b[5] ;
	
	
	//_e12ni
	r[3] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_83(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[4] ;
	
	
	return r;
}

double * conga_ip_5_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9] ;
	
	
	//_e123no
	r[10] = a[0] * b[11]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_5_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_5_86(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_87(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_5_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[11] ;
	
	
	//_e13no
	r[6] = a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_5_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_5_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[10]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_5_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_93(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[6] ;
	
	
	//_e2ni
	r[7] = a[1] * b[7] ;
	
	
	//_e3ni
	r[8] = a[1] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_5_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[5] ;
	
	
	//_e123
	r[3] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9] ;
	
	
	//_e123no
	r[10] = a[0] * b[11]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_5_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_5_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_5_99(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[6] ;
	
	
	//_e2ni
	r[7] = a[1] * b[7] ;
	
	
	//_e3ni
	r[8] = a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_5_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_5_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_5_102(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[4] ;
	
	
	return r;
}

double * conga_ip_5_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[2] ;
	
	
	//_e2ni
	r[5] = a[1] * b[3] ;
	
	
	//_e3ni
	r[6] = a[1] * b[4] ;
	
	
	return r;
}

double * conga_ip_5_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e12no
	r[3] = a[0] * b[7] ;
	
	
	//_e13no
	r[4] = a[0] * b[8] ;
	
	
	//_e23no
	r[5] = a[0] * b[9] ;
	
	
	//_e12ni
	r[6] = a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_105(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_5_106(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_108(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_109(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_110(double * a, double * b, double *r) { 
	
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
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[1] ;
	
	
	//_e2ni
	r[5] = a[1] * b[2] ;
	
	
	//_e3ni
	r[6] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_112(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[0] ;
	
	
	//_e2ni
	r[4] = a[1] * b[1] ;
	
	
	//_e3ni
	r[5] = a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_5_113(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[1] ;
	
	
	//_e2ni
	r[5] = a[1] * b[2] ;
	
	
	//_e3ni
	r[6] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_116(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_ip_5_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[12] ;
	
	
	//_e3ni
	r[9] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_5_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[9] ;
	
	
	//_e13no
	r[4] = a[0] * b[10] ;
	
	
	//_e23no
	r[5] = a[0] * b[11] ;
	
	
	//_e12ni
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[13]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_5_120(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_5_121(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[9] ;
	
	
	//_e2ni
	r[7] = a[1] * b[10] ;
	
	
	//_e3ni
	r[8] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_5_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_5_123(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_124(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[6] ;
	
	
	//_e2ni
	r[7] = a[1] * b[7] ;
	
	
	//_e3ni
	r[8] = a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_5_125(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[2]  * -1 ;
	
	
	//_e123
	r[6] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_126(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_5_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[12] ;
	
	
	//_e3ni
	r[9] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_5_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[10] ;
	
	
	//_e13no
	r[6] = a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[14]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_5_130(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[6] ;
	
	
	//_e2ni
	r[7] = a[1] * b[7] ;
	
	
	//_e3ni
	r[8] = a[1] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_5_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[10] ;
	
	
	//_e13no
	r[6] = a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_5_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_5_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_134(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_5_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e12no
	r[3] = a[0] * b[10] ;
	
	
	//_e13no
	r[4] = a[0] * b[11] ;
	
	
	//_e23no
	r[5] = a[0] * b[12] ;
	
	
	//_e12ni
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[14]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_5_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[12] ;
	
	
	//_e3ni
	r[9] = a[1] * b[13] ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_5_138(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[6] ;
	
	
	//_e2ni
	r[7] = a[1] * b[7] ;
	
	
	//_e3ni
	r[8] = a[1] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_5_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_ni
	r[4] = a[1] * b[6]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[7] ;
	
	
	//_e13no
	r[6] = a[0] * b[8] ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[10] ;
	
	
	//_e13no
	r[6] = a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_5_141(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_142(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[3] = a[1] * b[3] ;
	
	
	//_e2ni
	r[4] = a[1] * b[4] ;
	
	
	//_e3ni
	r[5] = a[1] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[7] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_5_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_144(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[1] * b[5] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_146(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_148(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_149(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_5_150(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_5_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[5] ;
	
	
	//_e3ni
	r[9] = a[1] * b[6] ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_5_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[1] * b[10] ;
	
	
	//_e123no
	r[10] = a[0] * b[11]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_5_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[7]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[5] ;
	
	
	//_e3ni
	r[9] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_158(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_5_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e12no
	r[3] = a[0] * b[10] ;
	
	
	//_e13no
	r[4] = a[0] * b[11] ;
	
	
	//_e23no
	r[5] = a[0] * b[12] ;
	
	
	//_e12ni
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_5_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_5_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_5_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e12no
	r[3] = a[0] * b[10] ;
	
	
	//_e13no
	r[4] = a[0] * b[11] ;
	
	
	//_e23no
	r[5] = a[0] * b[12] ;
	
	
	//_e12ni
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[9] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_5_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_164(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[6] = a[1] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[1] * b[5] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[10] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_5_165(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_166(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_ni
	r[4] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_5_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e1
	r[1] = a[0] * b[12]  + a[1] * b[9] ;
	
	
	//_e2
	r[2] = a[0] * b[13]  + a[1] * b[10] ;
	
	
	//_e3
	r[3] = a[0] * b[14]  + a[1] * b[11] ;
	
	
	//_no
	r[4] = a[0] * b[15] ;
	
	
	//_ni
	r[5] = a[1] * b[15]  * -1 ;
	
	
	//_e12
	r[6] = a[0] * b[19]  * -1  + a[1] * b[16]  * -1 ;
	
	
	//_e13
	r[7] = a[0] * b[20]  * -1  + a[1] * b[17]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[21]  * -1  + a[1] * b[18]  * -1 ;
	
	
	//_e1no
	r[9] = a[0] * b[22]  * -1 ;
	
	
	//_e2no
	r[10] = a[0] * b[23]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[24]  * -1 ;
	
	
	//_e1ni
	r[12] = a[1] * b[22] ;
	
	
	//_e2ni
	r[13] = a[1] * b[23] ;
	
	
	//_e3ni
	r[14] = a[1] * b[24] ;
	
	
	//_e12no
	r[15] = a[0] * b[26] ;
	
	
	//_e13no
	r[16] = a[0] * b[27] ;
	
	
	//_e23no
	r[17] = a[0] * b[28] ;
	
	
	//_e12ni
	r[18] = a[1] * b[26]  * -1 ;
	
	
	//_e13ni
	r[19] = a[1] * b[27]  * -1 ;
	
	
	//_e23ni
	r[20] = a[1] * b[28]  * -1 ;
	
	
	//_e123
	r[21] = a[0] * b[30]  + a[1] * b[29] ;
	
	
	//_e123no
	r[22] = a[0] * b[31]  * -1 ;
	
	
	//_e123ni
	r[23] = a[1] * b[31] ;
	
	
	return r;
}


