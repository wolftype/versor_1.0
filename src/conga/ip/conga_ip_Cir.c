
#include "conga_ip_Cir.h"


double * conga_ip_9_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_6(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[8] * b[0] ;
	
	
	//_e13
	r[1] = a[7] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[6] * b[0] ;
	
	
	//_e1no
	r[3] = a[2] * b[0] ;
	
	
	//_e2no
	r[4] = a[1] * b[0]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[0] ;
	
	
	//_e1ni
	r[6] = a[5] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[4] * b[0] ;
	
	
	//_e3ni
	r[8] = a[3] * b[0]  * -1 ;
	
	
	//_noni
	r[9] = a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_8(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[4]  * -1  + a[5] * b[3]  * -1  + a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[4] * b[3]  + a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[9] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_11(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_13(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_9_14(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[3] = a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_16(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_9_17(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[3] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_9_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_25(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_35(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_37(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_38(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_39(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[15]  * -1  + a[5] * b[14]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[15]  + a[4] * b[14]  + a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[15]  * -1  + a[3] * b[14]  * -1  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1  + a[9] * b[14]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13]  + a[9] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_9_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_9_43(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_ip_9_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13]  + a[9] * b[14]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[5] * b[10]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[4] * b[10]  + a[6] * b[7]  + a[8] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[3] * b[10]  * -1  + a[6] * b[8]  + a[7] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[9] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_50(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_55(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_9_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	return r;
}

double * conga_ip_9_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	return r;
}

double * conga_ip_9_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13]  + a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[13]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[5] * b[9]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[4] * b[9]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[9] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[9] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_64(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[9]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_9_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_9_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_9_71(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11]  + a[9] * b[12]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[0]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[5] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[4] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[3] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_75(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_9_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_78(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_9_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_9_81(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_82(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[3]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9]  + a[9] * b[10]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[11]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[11]  + a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[11]  * -1  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[9] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_9_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	return r;
}

double * conga_ip_9_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[14]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[14]  + a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[14]  * -1  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1  + a[9] * b[14]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_9_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[13]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[5] * b[9]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[4] * b[9]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[9] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[9] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_92(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[9]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_9_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9]  + a[9] * b[10]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	return r;
}

double * conga_ip_9_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[9]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[9]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[9] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_9_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_9_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	return r;
}

double * conga_ip_9_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[9] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[9] * b[3]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[2]  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	return r;
}

double * conga_ip_9_104(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[9] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_107(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_108(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_9_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_110(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_ip_9_112(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	return r;
}

double * conga_ip_9_113(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_ip_9_115(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[1]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[0]  * -1 ;
	
	
	//_ni
	r[4] = a[9] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_117(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	return r;
}

double * conga_ip_9_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[5] * b[12]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[4] * b[12]  + a[6] * b[9]  + a[8] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[12]  * -1  + a[6] * b[10]  + a[7] * b[11] ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[9] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[6]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	return r;
}

double * conga_ip_9_122(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_9_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_9_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[9] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_9_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_9_127(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13]  + a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[9]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_133(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_139(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_9_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_9_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[6]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_143(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_145(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_147(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_9_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7]  + a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[9] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_9_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_9_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_9_157(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[9]  * -1 ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_9_163(double * a, double * b, double *r) { 
	
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

double * conga_ip_9_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
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
	
	
	//_noni
	r[10] = a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_9_166(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_9_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[19]  + a[1] * b[20]  + a[2] * b[21]  + a[3] * b[16]  + a[4] * b[17]  + a[5] * b[18]  + a[6] * b[22]  + a[7] * b[23]  + a[8] * b[24]  + a[9] * b[25]  * -1 ;
	
	
	//_e1
	r[1] = a[2] * b[30]  * -1  + a[5] * b[29]  * -1  + a[7] * b[26]  * -1  + a[8] * b[27]  * -1 ;
	
	
	//_e2
	r[2] = a[1] * b[30]  + a[4] * b[29]  + a[6] * b[26]  + a[8] * b[28]  * -1 ;
	
	
	//_e3
	r[3] = a[0] * b[30]  * -1  + a[3] * b[29]  * -1  + a[6] * b[27]  + a[7] * b[28] ;
	
	
	//_no
	r[4] = a[0] * b[26]  * -1  + a[1] * b[27]  * -1  + a[2] * b[28]  * -1  + a[9] * b[29]  * -1 ;
	
	
	//_ni
	r[5] = a[3] * b[26]  + a[4] * b[27]  + a[5] * b[28]  + a[9] * b[30]  * -1 ;
	
	
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
	
	
	//_noni
	r[15] = a[9] * b[31]  * -1 ;
	
	
	return r;
}


