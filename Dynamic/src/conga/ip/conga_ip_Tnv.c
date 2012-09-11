
#include "conga_ip_Tnv.h"


double * conga_ip_15_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_6(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_15_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_10(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[4] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_15_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_15_12(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_15_13(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_14(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_15_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_19(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_15_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_15_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_15_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_15_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_32(double * a, double * b, double *r) { 
	
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

double * conga_ip_15_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
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
	
	
	return r;
}

double * conga_ip_15_35(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_15_36(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_15_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e1no
	r[1] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_15_39(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[15] ;
	
	
	//_e13
	r[2] = a[1] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[15] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_15_41(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_42(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_43(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_15_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_45(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[3] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[15]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[15] ;
	
	
	//_e23no
	r[6] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_15_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_15_50(double * a, double * b, double *r) { 
	
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

double * conga_ip_15_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
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

double * conga_ip_15_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_56(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_57(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_58(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_59(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_ip_15_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
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
	
	
	return r;
}

double * conga_ip_15_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[14] ;
	
	
	//_e23no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_15_64(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_15_65(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[1] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[10] ;
	
	
	//_e23no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_66(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_15_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
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

double * conga_ip_15_69(double * a, double * b, double *r) { 
	
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

double * conga_ip_15_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_73(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[1]  * -1 ;
	
	
	//_e13no
	r[1] = a[1] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[7] ;
	
	
	//_e13
	r[1] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[7] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_15_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e1no
	r[1] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_15_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[6] ;
	
	
	//_e13
	r[1] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_15_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_15_79(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_80(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_81(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_15_82(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_15_83(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[4]  * -1 ;
	
	
	//_e13no
	r[1] = a[1] * b[4] ;
	
	
	//_e23no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_84(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[1] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[11] ;
	
	
	//_e23no
	r[3] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_85(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_15_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_87(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_88(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e1no
	r[1] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_15_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[14] ;
	
	
	//_e23no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_91(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[10] ;
	
	
	//_e13
	r[1] = a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[10] ;
	
	
	//_e1no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_15_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_15_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_94(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_95(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_97(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_98(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_15_99(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
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
	
	
	return r;
}

double * conga_ip_15_102(double * a, double * b, double *r) { 
	
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
	
	
	return r;
}

double * conga_ip_15_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_15_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[9] ;
	
	
	//_e23no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[4] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_15_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_15_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_109(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_15_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_15_111(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_112(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_113(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_15_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_115(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_15_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[1] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_15_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_15_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_15_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_15_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_125(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_15_126(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_15_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12
	r[1] = a[2] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_15_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
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
	
	
	return r;
}

double * conga_ip_15_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_15_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_15_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[14] ;
	
	
	//_e23no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_15_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e1no
	r[1] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_15_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_142(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[7] ;
	
	
	//_e23no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_15_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[6] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_15_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_147(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_148(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_150(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_15_151(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_15_152(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e12no
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[7] ;
	
	
	//_e23no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_15_155(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_156(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_15_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_15_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[10] ;
	
	
	//_e23no
	r[5] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
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
	
	
	return r;
}

double * conga_ip_15_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e1no
	r[1] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_15_163(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_15_164(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[6] ;
	
	
	//_e23no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_15_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_15_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14] ;
	
	
	//_e1
	r[1] = a[1] * b[19]  + a[2] * b[20] ;
	
	
	//_e2
	r[2] = a[0] * b[19]  * -1  + a[2] * b[21] ;
	
	
	//_e3
	r[3] = a[0] * b[20]  * -1  + a[1] * b[21]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[22]  * -1  + a[1] * b[23]  * -1  + a[2] * b[24]  * -1 ;
	
	
	//_e12
	r[5] = a[2] * b[30] ;
	
	
	//_e13
	r[6] = a[1] * b[30]  * -1 ;
	
	
	//_e23
	r[7] = a[0] * b[30] ;
	
	
	//_e1no
	r[8] = a[1] * b[26]  * -1  + a[2] * b[27]  * -1 ;
	
	
	//_e2no
	r[9] = a[0] * b[26]  + a[2] * b[28]  * -1 ;
	
	
	//_e3no
	r[10] = a[0] * b[27]  + a[1] * b[28] ;
	
	
	//_e12no
	r[11] = a[2] * b[31]  * -1 ;
	
	
	//_e13no
	r[12] = a[1] * b[31] ;
	
	
	//_e23no
	r[13] = a[0] * b[31]  * -1 ;
	
	
	return r;
}


