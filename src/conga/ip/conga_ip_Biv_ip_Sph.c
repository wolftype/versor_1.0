
#include "conga_ip_Biv_ip_Sph.h"


double * conga_ip_166_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_166_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_166_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_166_4(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_ip_166_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_166_6(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[5] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0]  * -1 ;
	
	
	//_e23ni
	r[5] = a[3] * b[0] ;
	
	
	//_e123
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_ip_166_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_166_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_ip_166_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1]  + a[6] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[6] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_166_10(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[4]  + a[5] * b[3]  + a[6] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[4]  + a[3] * b[3]  + a[6] * b[2] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[6] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[7] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[8] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_166_12(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_166_13(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_14(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_166_15(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_166_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_17(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[0] ;
	
	
	//_e13
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_166_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[6] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[6] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[6] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_166_19(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3]  + a[6] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[3]  + a[6] * b[2] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[6] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[7] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[8] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_ip_166_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_166_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_166_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_166_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_166_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_166_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_166_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_166_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_166_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_166_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1] ;
	
	
	return r;
}

double * conga_ip_166_32(double * a, double * b, double *r) { 
	
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

double * conga_ip_166_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_166_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[6] * b[8] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[6] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[6] * b[10] ;
	
	
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

double * conga_ip_166_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4] ;
	
	
	//_e12
	r[1] = a[6] * b[5] ;
	
	
	//_e13
	r[2] = a[6] * b[6] ;
	
	
	//_e23
	r[3] = a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2ni
	r[8] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3ni
	r[9] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_36(double * a, double * b, double *r) { 
	
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

double * conga_ip_166_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_ip_166_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10] ;
	
	
	//_e12
	r[1] = a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[6] * b[12] ;
	
	
	//_e23
	r[3] = a[6] * b[13] ;
	
	
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

double * conga_ip_166_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_ip_166_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10] ;
	
	
	//_e12
	r[1] = a[2] * b[15]  + a[5] * b[14]  + a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[15]  * -1  + a[4] * b[14]  * -1  + a[6] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[15]  + a[3] * b[14]  + a[6] * b[13] ;
	
	
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

double * conga_ip_166_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_42(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0] ;
	
	
	//_e12
	r[1] = a[6] * b[1] ;
	
	
	//_e13
	r[2] = a[6] * b[2] ;
	
	
	//_e23
	r[3] = a[6] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_e1ni
	r[7] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2ni
	r[8] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3ni
	r[9] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[2]  * -1  + a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[0] ;
	
	
	//_e2
	r[1] = a[6] * b[1] ;
	
	
	//_e3
	r[2] = a[6] * b[2] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[3] ;
	
	
	return r;
}

double * conga_ip_166_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7]  + a[6] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[13] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[15] ;
	
	
	return r;
}

double * conga_ip_166_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[5] * b[10]  + a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[4] * b[10]  * -1  + a[6] * b[8] ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[10]  + a[6] * b[9] ;
	
	
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

double * conga_ip_166_49(double * a, double * b, double *r) { 
	
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

double * conga_ip_166_50(double * a, double * b, double *r) { 
	
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

double * conga_ip_166_51(double * a, double * b, double *r) { 
	
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

double * conga_ip_166_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  + a[6] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[6] * b[6] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[7] ;
	
	
	return r;
}

double * conga_ip_166_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3] ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[6] * b[4] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[6] * b[5] ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[6] * b[6] ;
	
	
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

double * conga_ip_166_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_166_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[4] ;
	
	
	//_e2
	r[1] = a[6] * b[5] ;
	
	
	//_e3
	r[2] = a[6] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_166_58(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[5] ;
	
	
	//_e2
	r[1] = a[6] * b[6] ;
	
	
	//_e3
	r[2] = a[6] * b[7] ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_166_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
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
	
	
	//_e123
	r[9] = a[6] * b[3] ;
	
	
	return r;
}

double * conga_ip_166_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[6] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[6] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[6] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_166_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10] ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[6] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[6] * b[13] ;
	
	
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

double * conga_ip_166_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[6] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[12] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[14] ;
	
	
	return r;
}

double * conga_ip_166_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[5] * b[9]  + a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[4] * b[9]  * -1  + a[6] * b[7] ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[9]  + a[6] * b[8] ;
	
	
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

double * conga_ip_166_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[6] * b[8] ;
	
	
	//_e13
	r[2] = a[6] * b[9] ;
	
	
	//_e23
	r[3] = a[6] * b[10] ;
	
	
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

double * conga_ip_166_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[8] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[10] ;
	
	
	return r;
}

double * conga_ip_166_66(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[6]  + a[6] * b[3] ;
	
	
	//_e13
	r[1] = a[4] * b[6]  * -1  + a[6] * b[4] ;
	
	
	//_e23
	r[2] = a[3] * b[6]  + a[6] * b[5] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[6] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[7] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[8] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  + a[6] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[6] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_166_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[6] * b[4] ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[6] * b[5] ;
	
	
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

double * conga_ip_166_69(double * a, double * b, double *r) { 
	
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

double * conga_ip_166_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[11] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[13] ;
	
	
	return r;
}

double * conga_ip_166_73(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[1]  * -1 ;
	
	
	//_e13no
	r[1] = a[1] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[5] * b[1] ;
	
	
	//_e13ni
	r[4] = a[4] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[3] * b[1] ;
	
	
	//_e123
	r[6] = a[6] * b[1] ;
	
	
	return r;
}

double * conga_ip_166_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[7]  + a[5] * b[6]  + a[6] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[7]  * -1  + a[4] * b[6]  * -1  + a[6] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[7]  + a[3] * b[6]  + a[6] * b[5] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[6] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[7] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[8] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[6] * b[9] ;
	
	
	//_e13
	r[2] = a[6] * b[10] ;
	
	
	//_e23
	r[3] = a[6] * b[11] ;
	
	
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

double * conga_ip_166_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[6] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[6] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[6] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_166_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[6]  + a[6] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[6]  * -1  + a[6] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[6]  + a[6] * b[5] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[6] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[7] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[8] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[6] * b[7] ;
	
	
	//_e23
	r[3] = a[6] * b[8] ;
	
	
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

double * conga_ip_166_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[4] ;
	
	
	//_e2
	r[1] = a[6] * b[5] ;
	
	
	//_e3
	r[2] = a[6] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_166_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[3] ;
	
	
	//_e2
	r[1] = a[6] * b[4] ;
	
	
	//_e3
	r[2] = a[6] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_166_81(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[6] * b[3] ;
	
	
	//_e13
	r[1] = a[6] * b[4] ;
	
	
	//_e23
	r[2] = a[6] * b[5] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[6] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[7] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[8] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[6] * b[7] ;
	
	
	//_e23
	r[3] = a[6] * b[8] ;
	
	
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

double * conga_ip_166_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
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
	
	
	//_e123
	r[9] = a[6] * b[4] ;
	
	
	return r;
}

double * conga_ip_166_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[7] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6]  + a[6] * b[8] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[9] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[11] ;
	
	
	return r;
}

double * conga_ip_166_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[5] * b[11]  + a[6] * b[8] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1  + a[6] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[11]  + a[6] * b[10] ;
	
	
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

double * conga_ip_166_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_ip_166_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
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
	
	
	//_e123
	r[9] = a[6] * b[3] ;
	
	
	return r;
}

double * conga_ip_166_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6]  + a[6] * b[8] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7]  + a[6] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_166_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10] ;
	
	
	//_e12
	r[1] = a[5] * b[14]  + a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1  + a[6] * b[12] ;
	
	
	//_e23
	r[3] = a[3] * b[14]  + a[6] * b[13] ;
	
	
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

double * conga_ip_166_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[6] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[12] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[14] ;
	
	
	return r;
}

double * conga_ip_166_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[5] * b[9]  + a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[4] * b[9]  * -1  + a[6] * b[7] ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[9]  + a[6] * b[8] ;
	
	
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

double * conga_ip_166_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[6] * b[8] ;
	
	
	//_e13
	r[2] = a[6] * b[9] ;
	
	
	//_e23
	r[3] = a[6] * b[10] ;
	
	
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

double * conga_ip_166_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[6] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[6] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[6] * b[8] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[10] ;
	
	
	return r;
}

double * conga_ip_166_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_95(double * a, double * b, double *r) { 
	
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

double * conga_ip_166_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[6] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[6] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[6] * b[9] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[11] ;
	
	
	return r;
}

double * conga_ip_166_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[7] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6]  + a[6] * b[8] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_166_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[9]  + a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[9]  * -1  + a[6] * b[7] ;
	
	
	//_e23
	r[3] = a[3] * b[9]  + a[6] * b[8] ;
	
	
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

double * conga_ip_166_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_166_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[6] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[6] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[6] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_166_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[6] * b[7] ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[6] * b[8] ;
	
	
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

double * conga_ip_166_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
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
	
	
	//_e123
	r[9] = a[6] * b[4] ;
	
	
	return r;
}

double * conga_ip_166_103(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[2] ;
	
	
	//_e2
	r[1] = a[6] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_ip_166_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e12
	r[1] = a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[6] * b[8] ;
	
	
	//_e23
	r[3] = a[6] * b[9] ;
	
	
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

double * conga_ip_166_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
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
	
	
	//_e123
	r[9] = a[6] * b[9] ;
	
	
	return r;
}

double * conga_ip_166_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[4]  + a[5] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_166_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[6] * b[7] ;
	
	
	//_e23
	r[3] = a[6] * b[8] ;
	
	
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

double * conga_ip_166_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_109(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_166_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[6] * b[4] ;
	
	
	//_e23
	r[3] = a[6] * b[5] ;
	
	
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

double * conga_ip_166_111(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[1] ;
	
	
	//_e2
	r[1] = a[6] * b[2] ;
	
	
	//_e3
	r[2] = a[6] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_166_112(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[0] ;
	
	
	//_e2
	r[1] = a[6] * b[1] ;
	
	
	//_e3
	r[2] = a[6] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_166_113(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[6] * b[0] ;
	
	
	//_e13
	r[1] = a[6] * b[1] ;
	
	
	//_e23
	r[2] = a[6] * b[2] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[6] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[7] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[8] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_114(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[1] ;
	
	
	//_e2
	r[1] = a[6] * b[2] ;
	
	
	//_e3
	r[2] = a[6] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_166_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[6] * b[4] ;
	
	
	//_e23
	r[3] = a[6] * b[5] ;
	
	
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

double * conga_ip_166_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[1]  + a[5] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_166_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[7] ;
	
	
	return r;
}

double * conga_ip_166_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7]  + a[6] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_166_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[5] * b[12]  + a[6] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[4] * b[12]  * -1  + a[6] * b[10] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12]  + a[6] * b[11] ;
	
	
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

double * conga_ip_166_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
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
	
	
	//_e123
	r[9] = a[6] * b[7] ;
	
	
	return r;
}

double * conga_ip_166_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[11] ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	return r;
}

double * conga_ip_166_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_166_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1]  + a[6] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[6] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_166_125(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[3]  + a[6] * b[0] ;
	
	
	//_e13
	r[1] = a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23
	r[2] = a[3] * b[3]  + a[6] * b[2] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[6] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[7] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[8] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2]  + a[6] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_166_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10] ;
	
	
	return r;
}

double * conga_ip_166_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7]  + a[6] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_166_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[5] * b[13]  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[4] * b[13]  * -1  + a[6] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13]  + a[6] * b[12] ;
	
	
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

double * conga_ip_166_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1]  + a[6] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[6] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[8] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[10] ;
	
	
	return r;
}

double * conga_ip_166_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[6] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[6] * b[12] ;
	
	
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

double * conga_ip_166_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[6] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_166_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_166_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[6] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_166_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[5] * b[13]  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[4] * b[13]  * -1  + a[6] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13]  + a[6] * b[12] ;
	
	
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

double * conga_ip_166_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7]  + a[6] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[13] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[14] ;
	
	
	return r;
}

double * conga_ip_166_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1]  + a[6] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[6] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[8] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[9] ;
	
	
	return r;
}

double * conga_ip_166_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[6] * b[8] ;
	
	
	//_e23
	r[3] = a[6] * b[9] ;
	
	
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

double * conga_ip_166_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9] ;
	
	
	//_e12
	r[1] = a[5] * b[13]  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1  + a[6] * b[11] ;
	
	
	//_e23
	r[3] = a[3] * b[13]  + a[6] * b[12] ;
	
	
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

double * conga_ip_166_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[3] ;
	
	
	//_e2
	r[1] = a[6] * b[4] ;
	
	
	//_e3
	r[2] = a[6] * b[5] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[7] ;
	
	
	return r;
}

double * conga_ip_166_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_166_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[6] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[6] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[6] * b[5] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[6] ;
	
	
	return r;
}

double * conga_ip_166_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3] ;
	
	
	//_e12
	r[1] = a[6] * b[4] ;
	
	
	//_e13
	r[2] = a[6] * b[5] ;
	
	
	//_e23
	r[3] = a[6] * b[6] ;
	
	
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

double * conga_ip_166_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_166_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_149(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[3] ;
	
	
	//_e13
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_166_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e12
	r[1] = a[5] * b[7]  + a[6] * b[4] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1  + a[6] * b[5] ;
	
	
	//_e23
	r[3] = a[3] * b[7]  + a[6] * b[6] ;
	
	
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

double * conga_ip_166_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2]  + a[6] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3]  + a[6] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1  + a[6] * b[6] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[7] ;
	
	
	return r;
}

double * conga_ip_166_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[2]  * -1  + a[5] * b[4]  + a[6] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[6] * b[10] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[11] ;
	
	
	return r;
}

double * conga_ip_166_154(double * a, double * b, double *r) { 
	
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

double * conga_ip_166_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2]  + a[6] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3]  + a[6] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1  + a[6] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_166_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[6]  + a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1  + a[6] * b[4] ;
	
	
	//_e23
	r[3] = a[3] * b[6]  + a[6] * b[5] ;
	
	
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

double * conga_ip_166_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[6] * b[8] ;
	
	
	//_e13
	r[2] = a[6] * b[9] ;
	
	
	//_e23
	r[3] = a[6] * b[10] ;
	
	
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

double * conga_ip_166_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
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
	
	
	//_e123
	r[9] = a[6] * b[10] ;
	
	
	return r;
}

double * conga_ip_166_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[6] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[6] * b[12] ;
	
	
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

double * conga_ip_166_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[6] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[12] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[13] ;
	
	
	return r;
}

double * conga_ip_166_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[6] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[12] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[13] ;
	
	
	return r;
}

double * conga_ip_166_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[13]  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1  + a[6] * b[11] ;
	
	
	//_e23
	r[3] = a[3] * b[13]  + a[6] * b[12] ;
	
	
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

double * conga_ip_166_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e12
	r[1] = a[6] * b[4] ;
	
	
	//_e13
	r[2] = a[6] * b[5] ;
	
	
	//_e23
	r[3] = a[6] * b[6] ;
	
	
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

double * conga_ip_166_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2]  + a[6] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[5] ;
	
	
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
	
	
	//_e123
	r[11] = a[6] * b[6] ;
	
	
	return r;
}

double * conga_ip_166_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_166_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6] ;
	
	
	return r;
}

double * conga_ip_166_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[15] ;
	
	
	//_e1
	r[1] = a[1] * b[19]  + a[2] * b[20]  + a[4] * b[16]  + a[5] * b[17]  + a[6] * b[22] ;
	
	
	//_e2
	r[2] = a[0] * b[19]  * -1  + a[2] * b[21]  + a[3] * b[16]  * -1  + a[5] * b[18]  + a[6] * b[23] ;
	
	
	//_e3
	r[3] = a[0] * b[20]  * -1  + a[1] * b[21]  * -1  + a[3] * b[17]  * -1  + a[4] * b[18]  * -1  + a[6] * b[24] ;
	
	
	//_no
	r[4] = a[0] * b[22]  * -1  + a[1] * b[23]  * -1  + a[2] * b[24]  * -1 ;
	
	
	//_ni
	r[5] = a[3] * b[22]  + a[4] * b[23]  + a[5] * b[24] ;
	
	
	//_e12
	r[6] = a[2] * b[30]  + a[5] * b[29]  + a[6] * b[26] ;
	
	
	//_e13
	r[7] = a[1] * b[30]  * -1  + a[4] * b[29]  * -1  + a[6] * b[27] ;
	
	
	//_e23
	r[8] = a[0] * b[30]  + a[3] * b[29]  + a[6] * b[28] ;
	
	
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
	
	
	//_e123
	r[21] = a[6] * b[31] ;
	
	
	return r;
}


