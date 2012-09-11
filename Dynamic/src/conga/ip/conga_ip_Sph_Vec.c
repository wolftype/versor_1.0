
#include "conga_ip_Sph_Vec.h"


double * conga_ip_138_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_6(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[0] ;
	
	
	//_e13
	r[2] = a[7] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[0] ;
	
	
	//_e1no
	r[4] = a[2] * b[0] ;
	
	
	//_e2no
	r[5] = a[1] * b[0]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[0] ;
	
	
	//_e1ni
	r[7] = a[5] * b[0]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[0] ;
	
	
	//_e3ni
	r[9] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_8(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_138_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[4]  * -1  + a[5] * b[3]  * -1  + a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[4] * b[3]  + a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_138_11(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_13(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_138_14(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_16(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_138_17(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_138_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_138_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_138_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[5]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[5]  + a[8] * b[7]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[6]  + a[7] * b[7] ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_138_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_37(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_138_39(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[15]  * -1  + a[5] * b[14]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[15]  + a[4] * b[14]  + a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[15]  * -1  + a[3] * b[14]  * -1  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_138_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_138_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_138_43(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[1]  * -1  + a[8] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[1]  + a[8] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[2]  + a[7] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_138_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_ip_138_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[3] ;
	
	
	//_e13
	r[2] = a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3] ;
	
	
	//_e2no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[5] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[3] ;
	
	
	//_e3ni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_138_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13]  + a[9] * b[15]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[15] ;
	
	
	//_e13
	r[2] = a[7] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[15] ;
	
	
	//_e1no
	r[4] = a[2] * b[15] ;
	
	
	//_e2no
	r[5] = a[1] * b[15]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[15] ;
	
	
	//_e1ni
	r[7] = a[5] * b[15]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[15] ;
	
	
	//_e3ni
	r[9] = a[3] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[5] * b[10]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[4] * b[10]  + a[6] * b[7]  + a[8] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[3] * b[10]  * -1  + a[6] * b[8]  + a[7] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_138_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[3] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_50(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7] ;
	
	
	//_e2no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7] ;
	
	
	//_e1ni
	r[7] = a[5] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[7] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_138_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_138_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_138_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_138_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	return r;
}

double * conga_ip_138_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[3] ;
	
	
	//_e13
	r[2] = a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3] ;
	
	
	//_e2no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[5] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[3] ;
	
	
	//_e3ni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	return r;
}

double * conga_ip_138_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_138_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[14] ;
	
	
	//_e13
	r[2] = a[7] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[14] ;
	
	
	//_e2no
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[14] ;
	
	
	//_e1ni
	r[7] = a[5] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[14] ;
	
	
	//_e3ni
	r[9] = a[3] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[5] * b[9]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[4] * b[9]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_138_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_138_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[10] ;
	
	
	//_e2no
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10] ;
	
	
	//_e1ni
	r[7] = a[5] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_138_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_138_71(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_138_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11]  + a[9] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[13] ;
	
	
	//_e13
	r[2] = a[7] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13] ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13] ;
	
	
	//_e1ni
	r[7] = a[5] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[1]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[1] ;
	
	
	//_e13
	r[2] = a[7] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[1] ;
	
	
	//_e1no
	r[4] = a[2] * b[1] ;
	
	
	//_e2no
	r[5] = a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1] ;
	
	
	//_e1ni
	r[7] = a[5] * b[1]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[1] ;
	
	
	//_e3ni
	r[9] = a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[5] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[4] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[3] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[9]  + a[8] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[10]  + a[7] * b[11] ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	return r;
}

double * conga_ip_138_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_138_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_138_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_138_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_138_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[4] ;
	
	
	//_e13
	r[2] = a[7] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[4] ;
	
	
	//_e1no
	r[4] = a[2] * b[4] ;
	
	
	//_e2no
	r[5] = a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4] ;
	
	
	//_e1ni
	r[7] = a[5] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[4] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9]  + a[9] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[11] ;
	
	
	//_e13
	r[2] = a[7] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[11] ;
	
	
	//_e1no
	r[4] = a[2] * b[11] ;
	
	
	//_e2no
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11] ;
	
	
	//_e1ni
	r[7] = a[5] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[11] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[11]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[11]  + a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[11]  * -1  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_138_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[3] ;
	
	
	//_e13
	r[2] = a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3] ;
	
	
	//_e2no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[5] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[3] ;
	
	
	//_e3ni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	return r;
}

double * conga_ip_138_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[14]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[14]  + a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[14]  * -1  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_138_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[14] ;
	
	
	//_e13
	r[2] = a[7] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[14] ;
	
	
	//_e2no
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[14] ;
	
	
	//_e1ni
	r[7] = a[5] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[14] ;
	
	
	//_e3ni
	r[9] = a[3] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[5] * b[9]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[4] * b[9]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_138_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_138_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[10] ;
	
	
	//_e2no
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10] ;
	
	
	//_e1ni
	r[7] = a[5] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_138_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9]  + a[9] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[11] ;
	
	
	//_e13
	r[2] = a[7] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[11] ;
	
	
	//_e1no
	r[4] = a[2] * b[11] ;
	
	
	//_e2no
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11] ;
	
	
	//_e1ni
	r[7] = a[5] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[11] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	return r;
}

double * conga_ip_138_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[9]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[9]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_138_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_138_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	return r;
}

double * conga_ip_138_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_138_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[9] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[4] ;
	
	
	//_e13
	r[2] = a[7] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[4] ;
	
	
	//_e1no
	r[4] = a[2] * b[4] ;
	
	
	//_e2no
	r[5] = a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4] ;
	
	
	//_e1ni
	r[7] = a[5] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[4] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[2]  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	return r;
}

double * conga_ip_138_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[7]  + a[8] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[8]  + a[7] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_138_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[9] ;
	
	
	//_e13
	r[2] = a[7] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[9] ;
	
	
	//_e2no
	r[5] = a[1] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9] ;
	
	
	//_e1ni
	r[7] = a[5] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[9] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_138_108(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_ip_138_112(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	return r;
}

double * conga_ip_138_113(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_138_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_ip_138_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[1]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_117(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	return r;
}

double * conga_ip_138_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[5] * b[12]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[4] * b[12]  + a[6] * b[9]  + a[8] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[12]  * -1  + a[6] * b[10]  + a[7] * b[11] ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	return r;
}

double * conga_ip_138_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7] ;
	
	
	//_e2no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7] ;
	
	
	//_e1ni
	r[7] = a[5] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[7] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	return r;
}

double * conga_ip_138_122(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_138_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_138_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_138_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_127(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	return r;
}

double * conga_ip_138_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_138_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[10] ;
	
	
	//_e2no
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10] ;
	
	
	//_e1ni
	r[7] = a[5] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_138_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	return r;
}

double * conga_ip_138_133(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	return r;
}

double * conga_ip_138_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_138_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13]  + a[9] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[14] ;
	
	
	//_e13
	r[2] = a[7] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[14] ;
	
	
	//_e2no
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[14] ;
	
	
	//_e1ni
	r[7] = a[5] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[14] ;
	
	
	//_e3ni
	r[9] = a[3] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[9] ;
	
	
	//_e13
	r[2] = a[7] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[9] ;
	
	
	//_e2no
	r[5] = a[1] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9] ;
	
	
	//_e1ni
	r[7] = a[5] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[9] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[7]  + a[8] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[8]  + a[7] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_138_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_138_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7] ;
	
	
	//_e2no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7] ;
	
	
	//_e1ni
	r[7] = a[5] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[7] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_143(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[6] ;
	
	
	//_e13
	r[2] = a[7] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6] ;
	
	
	//_e2no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[5] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_138_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_147(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7]  + a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_138_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7] ;
	
	
	//_e2no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7] ;
	
	
	//_e1ni
	r[7] = a[5] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[7] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10]  + a[9] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[11] ;
	
	
	//_e13
	r[2] = a[7] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[11] ;
	
	
	//_e1no
	r[4] = a[2] * b[11] ;
	
	
	//_e2no
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11] ;
	
	
	//_e1ni
	r[7] = a[5] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[11] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_138_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_138_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_138_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[10] ;
	
	
	//_e2no
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10] ;
	
	
	//_e1ni
	r[7] = a[5] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_138_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[13] ;
	
	
	//_e13
	r[2] = a[7] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13] ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13] ;
	
	
	//_e1ni
	r[7] = a[5] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[13] ;
	
	
	//_e13
	r[2] = a[7] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13] ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13] ;
	
	
	//_e1ni
	r[7] = a[5] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_138_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_138_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[6] ;
	
	
	//_e13
	r[2] = a[7] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6] ;
	
	
	//_e2no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[5] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_138_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_138_166(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_138_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[19]  + a[1] * b[20]  + a[2] * b[21]  + a[3] * b[16]  + a[4] * b[17]  + a[5] * b[18]  + a[6] * b[22]  + a[7] * b[23]  + a[8] * b[24]  + a[9] * b[31]  * -1 ;
	
	
	//_e1
	r[1] = a[2] * b[30]  * -1  + a[5] * b[29]  * -1  + a[7] * b[26]  * -1  + a[8] * b[27]  * -1 ;
	
	
	//_e2
	r[2] = a[1] * b[30]  + a[4] * b[29]  + a[6] * b[26]  + a[8] * b[28]  * -1 ;
	
	
	//_e3
	r[3] = a[0] * b[30]  * -1  + a[3] * b[29]  * -1  + a[6] * b[27]  + a[7] * b[28] ;
	
	
	//_no
	r[4] = a[0] * b[26]  * -1  + a[1] * b[27]  * -1  + a[2] * b[28]  * -1 ;
	
	
	//_ni
	r[5] = a[3] * b[26]  + a[4] * b[27]  + a[5] * b[28] ;
	
	
	//_e12
	r[6] = a[8] * b[31] ;
	
	
	//_e13
	r[7] = a[7] * b[31]  * -1 ;
	
	
	//_e23
	r[8] = a[6] * b[31] ;
	
	
	//_e1no
	r[9] = a[2] * b[31] ;
	
	
	//_e2no
	r[10] = a[1] * b[31]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[31] ;
	
	
	//_e1ni
	r[12] = a[5] * b[31]  * -1 ;
	
	
	//_e2ni
	r[13] = a[4] * b[31] ;
	
	
	//_e3ni
	r[14] = a[3] * b[31]  * -1 ;
	
	
	return r;
}


