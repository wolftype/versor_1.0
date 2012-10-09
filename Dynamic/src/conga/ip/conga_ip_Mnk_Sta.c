
#include "conga_ip_Mnk_Sta.h"


double * conga_ip_107_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_6(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[0] ;
	
	
	//_e3
	r[2] = a[6] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[0]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[4] * b[0]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_107_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_107_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_107_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1  + a[7] * b[1]  * -1  + a[8] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[4]  + a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4]  + a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[8] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[9] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_107_12(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_107_13(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_14(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_107_15(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_107_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_17(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[0] ;
	
	
	//_e13
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_107_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_107_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1  + a[7] * b[1]  * -1  + a[8] * b[2]  * -1 ;
	
	
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
	
	
	//_e1ni
	r[7] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[8] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[9] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_107_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_107_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_107_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_107_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[7] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[8] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[5]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[4] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2ni
	r[5] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3ni
	r[6] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_107_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e1ni
	r[4] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[5] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[6] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[15]  + a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[15]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[15]  + a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e1ni
	r[7] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[8] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_42(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  * -1  + a[7] * b[2]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_e1ni
	r[4] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2ni
	r[5] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3ni
	r[6] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[2]  * -1  + a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12no
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[3] ;
	
	
	//_e13ni
	r[9] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6]  + a[8] * b[15]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7]  + a[7] * b[15] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[15]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_e12no
	r[5] = a[2] * b[15]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[15] ;
	
	
	//_e23no
	r[7] = a[0] * b[15]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[15] ;
	
	
	//_e13ni
	r[9] = a[4] * b[15]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[15] ;
	
	
	return r;
}

double * conga_ip_107_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[7]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_e1ni
	r[7] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[8] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[9] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_107_50(double * a, double * b, double *r) { 
	
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

double * conga_ip_107_51(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  + a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12no
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[7] ;
	
	
	//_e13ni
	r[9] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_107_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1 ;
	
	
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
	
	
	//_e1ni
	r[7] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[8] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_107_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_57(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_107_58(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_107_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[3] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[3] ;
	
	
	//_e13ni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_107_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e1ni
	r[7] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[8] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[8] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[7] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[14] ;
	
	
	//_e23no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[14] ;
	
	
	//_e13ni
	r[9] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_107_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[4] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[5] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[6] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[10] ;
	
	
	//_e13ni
	r[9] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_107_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_107_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
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
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_107_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4]  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e12no
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[13] ;
	
	
	//_e23no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[13] ;
	
	
	//_e13ni
	r[9] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_107_73(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[1] ;
	
	
	//_e3
	r[2] = a[6] * b[1]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[1]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[1] ;
	
	
	//_e13ni
	r[7] = a[4] * b[1]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_ip_107_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	//_e1ni
	r[4] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e2ni
	r[5] = a[3] * b[9]  * -1  + a[5] * b[11] ;
	
	
	//_e3ni
	r[6] = a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_107_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
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
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[4] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[5] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[6] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_79(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_107_80(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_107_81(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[4] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[5] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[6] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[4] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[5] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[6] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[4] ;
	
	
	//_e13ni
	r[7] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_107_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6]  + a[7] * b[11] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[11] ;
	
	
	//_e13ni
	r[9] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_107_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[11] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[7] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[8] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_107_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[3] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[3] ;
	
	
	//_e13ni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_107_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e1ni
	r[7] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[8] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[8] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[7] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[14] ;
	
	
	//_e23no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[14] ;
	
	
	//_e13ni
	r[9] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_107_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[4] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[5] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[6] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[10] ;
	
	
	//_e13ni
	r[9] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_107_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_107_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[7] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[11] ;
	
	
	//_e13ni
	r[9] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_107_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_107_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_107_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_107_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[7] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[4] ;
	
	
	//_e13ni
	r[7] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_107_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_ip_107_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[7]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_e1ni
	r[4] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[5] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[6] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4]  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[7] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[9] ;
	
	
	//_e23no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[9] ;
	
	
	//_e13ni
	r[7] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_107_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[4]  + a[5] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[4] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[5] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[6] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_109(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[4] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[5] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[6] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_111(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_112(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_107_113(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1  + a[7] * b[1]  * -1  + a[8] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[4] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[5] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[6] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[4] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[5] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[6] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[1]  + a[5] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_107_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_107_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[5] * b[12] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	//_e1ni
	r[7] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e2ni
	r[8] = a[3] * b[9]  * -1  + a[5] * b[11] ;
	
	
	//_e3ni
	r[9] = a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1]  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[7] ;
	
	
	//_e13ni
	r[7] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_107_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	return r;
}

double * conga_ip_107_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_107_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_107_125(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1  + a[7] * b[1]  * -1  + a[8] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[8] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[9] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_107_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_107_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_107_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1]  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[10] ;
	
	
	//_e13ni
	r[9] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_107_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_107_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_107_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_107_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6]  + a[8] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7]  + a[7] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_e12no
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[14] ;
	
	
	//_e23no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[14] ;
	
	
	//_e13ni
	r[9] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_107_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1]  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[9] ;
	
	
	//_e13ni
	r[9] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_107_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[7]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_e1ni
	r[4] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[5] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[6] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[7] ;
	
	
	//_e13ni
	r[9] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_107_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_107_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[6] ;
	
	
	//_e13ni
	r[9] = a[4] * b[6]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_107_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[4] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[5] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_107_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_149(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[3] ;
	
	
	//_e13
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_107_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[8] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2]  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3]  + a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12no
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[7] ;
	
	
	//_e13ni
	r[9] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_107_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[3]  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[2]  * -1  + a[5] * b[4]  + a[7] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e12no
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[11] ;
	
	
	//_e13ni
	r[9] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_107_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_107_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_107_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[4] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[5] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[6] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4]  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[10] ;
	
	
	//_e23no
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[10] ;
	
	
	//_e13ni
	r[7] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_107_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[13] ;
	
	
	//_e23no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[13] ;
	
	
	//_e13ni
	r[9] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_107_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[13] ;
	
	
	//_e23no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[13] ;
	
	
	//_e13ni
	r[9] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_107_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[4] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[5] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[6] ;
	
	
	//_e13ni
	r[9] = a[4] * b[6]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_107_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_107_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_107_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[26]  * -1  + a[7] * b[27]  * -1  + a[8] * b[28]  * -1 ;
	
	
	//_e1
	r[1] = a[1] * b[19]  + a[2] * b[20]  + a[4] * b[16]  + a[5] * b[17]  + a[8] * b[31]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[19]  * -1  + a[2] * b[21]  + a[3] * b[16]  * -1  + a[5] * b[18]  + a[7] * b[31] ;
	
	
	//_e3
	r[3] = a[0] * b[20]  * -1  + a[1] * b[21]  * -1  + a[3] * b[17]  * -1  + a[4] * b[18]  * -1  + a[6] * b[31]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[22]  * -1  + a[1] * b[23]  * -1  + a[2] * b[24]  * -1 ;
	
	
	//_ni
	r[5] = a[3] * b[22]  + a[4] * b[23]  + a[5] * b[24] ;
	
	
	//_e12
	r[6] = a[2] * b[30]  + a[5] * b[29] ;
	
	
	//_e13
	r[7] = a[1] * b[30]  * -1  + a[4] * b[29]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[30]  + a[3] * b[29] ;
	
	
	//_e1no
	r[9] = a[1] * b[26]  * -1  + a[2] * b[27]  * -1 ;
	
	
	//_e2no
	r[10] = a[0] * b[26]  + a[2] * b[28]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[27]  + a[1] * b[28] ;
	
	
	//_e1ni
	r[12] = a[4] * b[26]  + a[5] * b[27] ;
	
	
	//_e2ni
	r[13] = a[3] * b[26]  * -1  + a[5] * b[28] ;
	
	
	//_e3ni
	r[14] = a[3] * b[27]  * -1  + a[4] * b[28]  * -1 ;
	
	
	//_e12no
	r[15] = a[2] * b[31]  * -1 ;
	
	
	//_e13no
	r[16] = a[1] * b[31] ;
	
	
	//_e23no
	r[17] = a[0] * b[31]  * -1 ;
	
	
	//_e12ni
	r[18] = a[5] * b[31] ;
	
	
	//_e13ni
	r[19] = a[4] * b[31]  * -1 ;
	
	
	//_e23ni
	r[20] = a[3] * b[31] ;
	
	
	return r;
}

