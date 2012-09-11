
#include "conga_ip_Sph_Biv.h"


double * conga_ip_139_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_139_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_139_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_139_4(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_ip_139_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_139_6(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[9] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[8] * b[0] ;
	
	
	//_e3
	r[2] = a[7] * b[0]  * -1 ;
	
	
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
	
	
	//_e123
	r[9] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_ip_139_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_139_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9] ;
	
	
	return r;
}

double * conga_ip_139_9(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[0]  * -1  + a[8] * b[1]  * -1  + a[9] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[4]  + a[5] * b[3]  + a[6] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23
	r[3] = a[0] * b[4]  + a[3] * b[3]  + a[6] * b[2] ;
	
	
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

double * conga_ip_139_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_139_12(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_139_13(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_14(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_139_15(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_139_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_17(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[0] ;
	
	
	//_e13
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_139_18(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[0]  * -1  + a[8] * b[1]  * -1  + a[9] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3]  + a[6] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[6] * b[2] ;
	
	
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

double * conga_ip_139_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_ip_139_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_139_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_139_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_139_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_139_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_139_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_139_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_139_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_139_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_139_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1] ;
	
	
	return r;
}

double * conga_ip_139_32(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_139_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1  + a[9] * b[10]  * -1 ;
	
	
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

double * conga_ip_139_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1  + a[9] * b[7]  * -1 ;
	
	
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

double * conga_ip_139_36(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_ip_139_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
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

double * conga_ip_139_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4] ;
	
	
	return r;
}

double * conga_ip_139_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
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

double * conga_ip_139_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_42(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  * -1  + a[8] * b[2]  * -1  + a[9] * b[3]  * -1 ;
	
	
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

double * conga_ip_139_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[2]  * -1  + a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[0]  + a[9] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[1]  + a[8] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[2]  + a[7] * b[3]  * -1 ;
	
	
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

double * conga_ip_139_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11]  + a[9] * b[15]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7]  + a[6] * b[12]  + a[8] * b[15] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[13]  + a[7] * b[15]  * -1 ;
	
	
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

double * conga_ip_139_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1  + a[9] * b[9]  * -1 ;
	
	
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

double * conga_ip_139_49(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_50(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_51(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[9] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  + a[6] * b[5]  + a[8] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[6] * b[6]  + a[7] * b[7]  * -1 ;
	
	
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

double * conga_ip_139_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
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

double * conga_ip_139_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_139_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_57(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_58(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[9] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[8] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[7] * b[3]  * -1 ;
	
	
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

double * conga_ip_139_60(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
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

double * conga_ip_139_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10]  + a[9] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[6] * b[11]  + a[8] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[12]  + a[7] * b[14]  * -1 ;
	
	
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

double * conga_ip_139_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1  + a[9] * b[8]  * -1 ;
	
	
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

double * conga_ip_139_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1  + a[9] * b[10]  * -1 ;
	
	
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

double * conga_ip_139_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[6]  + a[9] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[7]  + a[8] * b[10] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[8]  + a[7] * b[10]  * -1 ;
	
	
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

double * conga_ip_139_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[3]  * -1  + a[8] * b[4]  * -1  + a[9] * b[5]  * -1 ;
	
	
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

double * conga_ip_139_67(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1  + a[9] * b[5]  * -1 ;
	
	
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

double * conga_ip_139_69(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[9]  + a[9] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[10]  + a[8] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[11]  + a[7] * b[13]  * -1 ;
	
	
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

double * conga_ip_139_73(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[9] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[8] * b[1] ;
	
	
	//_e3
	r[2] = a[7] * b[1]  * -1 ;
	
	
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
	
	
	//_e123
	r[9] = a[6] * b[1] ;
	
	
	return r;
}

double * conga_ip_139_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[3]  * -1  + a[8] * b[4]  * -1  + a[9] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[5] * b[6]  + a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[4] * b[6]  * -1  + a[6] * b[4] ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[6]  + a[6] * b[5] ;
	
	
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

double * conga_ip_139_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1  + a[9] * b[11]  * -1 ;
	
	
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

double * conga_ip_139_76(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[3]  * -1  + a[8] * b[4]  * -1  + a[9] * b[5]  * -1 ;
	
	
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

double * conga_ip_139_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1  + a[9] * b[8]  * -1 ;
	
	
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

double * conga_ip_139_79(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_80(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_81(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[3]  * -1  + a[8] * b[4]  * -1  + a[9] * b[5]  * -1 ;
	
	
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

double * conga_ip_139_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1  + a[9] * b[8]  * -1 ;
	
	
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

double * conga_ip_139_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[9] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2]  + a[8] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[7] * b[4]  * -1 ;
	
	
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

double * conga_ip_139_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[7]  + a[9] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6]  + a[6] * b[8]  + a[8] * b[11] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[9]  + a[7] * b[11]  * -1 ;
	
	
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

double * conga_ip_139_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1  + a[9] * b[10]  * -1 ;
	
	
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

double * conga_ip_139_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	return r;
}

double * conga_ip_139_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[9] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2]  + a[8] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[7] * b[3]  * -1 ;
	
	
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

double * conga_ip_139_88(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
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

double * conga_ip_139_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10]  + a[9] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[6] * b[11]  + a[8] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[12]  + a[7] * b[14]  * -1 ;
	
	
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

double * conga_ip_139_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1  + a[9] * b[8]  * -1 ;
	
	
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

double * conga_ip_139_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1  + a[9] * b[10]  * -1 ;
	
	
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

double * conga_ip_139_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[6] * b[6]  + a[9] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[6] * b[7]  + a[8] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[6] * b[8]  + a[7] * b[10]  * -1 ;
	
	
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

double * conga_ip_139_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_95(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[6] * b[7]  + a[9] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[6] * b[8]  + a[8] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[6] * b[9]  + a[7] * b[11]  * -1 ;
	
	
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

double * conga_ip_139_97(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1  + a[9] * b[8]  * -1 ;
	
	
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

double * conga_ip_139_99(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_100(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1  + a[9] * b[8]  * -1 ;
	
	
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

double * conga_ip_139_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[9] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[8] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[7] * b[4]  * -1 ;
	
	
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

double * conga_ip_139_103(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1  + a[9] * b[9]  * -1 ;
	
	
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

double * conga_ip_139_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4]  + a[9] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[8] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[7] * b[9]  * -1 ;
	
	
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

double * conga_ip_139_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[4]  + a[5] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_139_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1  + a[9] * b[8]  * -1 ;
	
	
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

double * conga_ip_139_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_109(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_139_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1  + a[9] * b[5]  * -1 ;
	
	
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

double * conga_ip_139_111(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_112(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_113(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[0]  * -1  + a[8] * b[1]  * -1  + a[9] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[0] ;
	
	
	//_e13
	r[2] = a[6] * b[1] ;
	
	
	//_e23
	r[3] = a[6] * b[2] ;
	
	
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

double * conga_ip_139_114(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1  + a[9] * b[5]  * -1 ;
	
	
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

double * conga_ip_139_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[1]  + a[5] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_139_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[7] ;
	
	
	return r;
}

double * conga_ip_139_118(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1  + a[9] * b[11]  * -1 ;
	
	
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

double * conga_ip_139_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1]  + a[9] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[8] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[7] * b[7]  * -1 ;
	
	
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

double * conga_ip_139_121(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_139_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_124(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_125(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[0]  * -1  + a[8] * b[1]  * -1  + a[9] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3]  + a[6] * b[0] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23
	r[3] = a[3] * b[3]  + a[6] * b[2] ;
	
	
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

double * conga_ip_139_126(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10] ;
	
	
	return r;
}

double * conga_ip_139_128(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1  + a[9] * b[12]  * -1 ;
	
	
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

double * conga_ip_139_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1]  + a[6] * b[6]  + a[9] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[6] * b[7]  + a[8] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[8]  + a[7] * b[10]  * -1 ;
	
	
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

double * conga_ip_139_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1  + a[9] * b[12]  * -1 ;
	
	
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

double * conga_ip_139_132(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_139_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_135(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1  + a[9] * b[12]  * -1 ;
	
	
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

double * conga_ip_139_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11]  + a[9] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7]  + a[6] * b[12]  + a[8] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[13]  + a[7] * b[14]  * -1 ;
	
	
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

double * conga_ip_139_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1]  + a[6] * b[6]  + a[9] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[6] * b[7]  + a[8] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[8]  + a[7] * b[9]  * -1 ;
	
	
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

double * conga_ip_139_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1  + a[9] * b[9]  * -1 ;
	
	
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

double * conga_ip_139_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1  + a[9] * b[12]  * -1 ;
	
	
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

double * conga_ip_139_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[3]  + a[9] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[4]  + a[8] * b[7] ;
	
	
	//_e3
	r[2] = a[6] * b[5]  + a[7] * b[7]  * -1 ;
	
	
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

double * conga_ip_139_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_139_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[6] * b[3]  + a[9] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[6] * b[4]  + a[8] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[6] * b[5]  + a[7] * b[6]  * -1 ;
	
	
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

double * conga_ip_139_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
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

double * conga_ip_139_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_139_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_149(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[3] ;
	
	
	//_e13
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_139_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
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

double * conga_ip_139_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2]  + a[6] * b[4]  + a[9] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3]  + a[6] * b[5]  + a[8] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1  + a[6] * b[6]  + a[7] * b[7]  * -1 ;
	
	
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

double * conga_ip_139_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[8]  + a[9] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[2]  * -1  + a[5] * b[4]  + a[6] * b[9]  + a[8] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[6] * b[10]  + a[7] * b[11]  * -1 ;
	
	
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

double * conga_ip_139_154(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_155(double * a, double * b, double *r) { 
	
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

double * conga_ip_139_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1  + a[9] * b[5]  * -1 ;
	
	
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

double * conga_ip_139_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[7]  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1  + a[9] * b[10]  * -1 ;
	
	
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

double * conga_ip_139_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4]  + a[9] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[8] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[7] * b[10]  * -1 ;
	
	
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

double * conga_ip_139_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1  + a[9] * b[12]  * -1 ;
	
	
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

double * conga_ip_139_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10]  + a[9] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[6] * b[11]  + a[8] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[12]  + a[7] * b[13]  * -1 ;
	
	
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

double * conga_ip_139_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10]  + a[9] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[6] * b[11]  + a[8] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[12]  + a[7] * b[13]  * -1 ;
	
	
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

double * conga_ip_139_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1  + a[9] * b[12]  * -1 ;
	
	
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

double * conga_ip_139_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
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

double * conga_ip_139_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[3]  + a[9] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2]  + a[6] * b[4]  + a[8] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[5]  + a[7] * b[6]  * -1 ;
	
	
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

double * conga_ip_139_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_139_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6] ;
	
	
	return r;
}

double * conga_ip_139_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[15]  + a[7] * b[26]  * -1  + a[8] * b[27]  * -1  + a[9] * b[28]  * -1 ;
	
	
	//_e1
	r[1] = a[1] * b[19]  + a[2] * b[20]  + a[4] * b[16]  + a[5] * b[17]  + a[6] * b[22]  + a[9] * b[31]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[19]  * -1  + a[2] * b[21]  + a[3] * b[16]  * -1  + a[5] * b[18]  + a[6] * b[23]  + a[8] * b[31] ;
	
	
	//_e3
	r[3] = a[0] * b[20]  * -1  + a[1] * b[21]  * -1  + a[3] * b[17]  * -1  + a[4] * b[18]  * -1  + a[6] * b[24]  + a[7] * b[31]  * -1 ;
	
	
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


