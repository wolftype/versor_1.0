
#include "conga_ip_Trs_Pln.h"


double * conga_ip_68_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_6(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[3] * b[0]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[0] ;
	
	
	//_e13ni
	r[5] = a[1] * b[0]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_68_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_68_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_68_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_68_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_15(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_68_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_17(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_68_18(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_68_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2ni
	r[2] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3ni
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_68_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_32(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_68_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[2] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2ni
	r[2] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_68_37(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e2ni
	r[2] = a[0] * b[11]  * -1  + a[2] * b[13] ;
	
	
	//_e3ni
	r[3] = a[0] * b[12]  * -1  + a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_68_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14] ;
	
	
	//_e1ni
	r[4] = a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[2]  * -1  + a[2] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[3] ;
	
	
	//_e13ni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_68_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[5] * b[15]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[4] * b[15] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[15]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13]  + a[6] * b[15]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[15] ;
	
	
	//_e13ni
	r[5] = a[1] * b[15]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_ip_68_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1ni
	r[4] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_68_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_51(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_68_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_68_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2ni
	r[2] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_54(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_57(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_68_58(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_ip_68_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[3]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[3] ;
	
	
	//_e13ni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_68_60(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_68_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e2ni
	r[2] = a[0] * b[11]  * -1  + a[2] * b[13] ;
	
	
	//_e3ni
	r[3] = a[0] * b[12]  * -1  + a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[5] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[4] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12]  + a[6] * b[14]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[14] ;
	
	
	//_e13ni
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_68_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[2] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[10] ;
	
	
	//_e13ni
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_68_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_67(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_68_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_69(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_70(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[13] ;
	
	
	//_e13ni
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_68_73(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[1]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[1] ;
	
	
	//_e13ni
	r[5] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_68_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_e2ni
	r[2] = a[0] * b[9]  * -1  + a[2] * b[11] ;
	
	
	//_e3ni
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_76(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_68_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[2] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_79(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_68_80(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_68_81(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[2] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[5] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[4]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[4] ;
	
	
	//_e13ni
	r[5] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_68_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[5] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[4] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[11]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[11] ;
	
	
	//_e13ni
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_68_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_68_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[3]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[3] ;
	
	
	//_e13ni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_68_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_68_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14] ;
	
	
	//_e1ni
	r[4] = a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[5] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[4] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12]  + a[6] * b[14]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[14] ;
	
	
	//_e13ni
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_68_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[2] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[3] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[10] ;
	
	
	//_e13ni
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_68_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_68_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[11] ;
	
	
	//_e3
	r[2] = a[3] * b[11]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[11]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[11] ;
	
	
	//_e13ni
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_68_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_68_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_68_100(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_68_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[2] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[4]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[4] ;
	
	
	//_e13ni
	r[5] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_68_103(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[2]  + a[1] * b[3]  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_ip_68_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2ni
	r[2] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3ni
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[5] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[4] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[9]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[9] ;
	
	
	//_e13ni
	r[5] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_68_106(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_68_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[2] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_108(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_111(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_68_112(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_68_113(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2ni
	r[2] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3ni
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_114(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_68_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_116(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_68_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_68_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_68_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[12] ;
	
	
	//_e13
	r[2] = a[1] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[12] ;
	
	
	//_e1ni
	r[4] = a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_e2ni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_68_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	return r;
}

double * conga_ip_68_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_68_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_68_125(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_68_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_68_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_68_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[10] ;
	
	
	//_e13ni
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_68_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[2] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_68_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_68_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_68_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[5] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[4] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13]  + a[6] * b[14]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[14] ;
	
	
	//_e13ni
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_68_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[5] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[4] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[9]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[9] ;
	
	
	//_e13ni
	r[5] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_68_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2ni
	r[2] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3ni
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_68_143(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[6] ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_68_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2ni
	r[2] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_146(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_68_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_68_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_149(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_68_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  + a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_68_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2]  + a[2] * b[3]  + a[5] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  * -1  + a[2] * b[4]  + a[4] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[6] * b[11]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[11] ;
	
	
	//_e13ni
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_68_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_68_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_68_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[2] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[10]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[10] ;
	
	
	//_e13ni
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_68_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[2] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12]  + a[6] * b[13]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[13] ;
	
	
	//_e13ni
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_68_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12]  + a[6] * b[13]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[13] ;
	
	
	//_e13ni
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_68_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2ni
	r[2] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[6] ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_68_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_68_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_68_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[26]  * -1  + a[4] * b[27]  * -1  + a[5] * b[28]  * -1  + a[6] * b[29]  * -1 ;
	
	
	//_e1
	r[1] = a[1] * b[16]  + a[2] * b[17]  + a[5] * b[31]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[16]  * -1  + a[2] * b[18]  + a[4] * b[31] ;
	
	
	//_e3
	r[3] = a[0] * b[17]  * -1  + a[1] * b[18]  * -1  + a[3] * b[31]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[22]  + a[1] * b[23]  + a[2] * b[24]  + a[6] * b[31]  * -1 ;
	
	
	//_e12
	r[5] = a[2] * b[29] ;
	
	
	//_e13
	r[6] = a[1] * b[29]  * -1 ;
	
	
	//_e23
	r[7] = a[0] * b[29] ;
	
	
	//_e1ni
	r[8] = a[1] * b[26]  + a[2] * b[27] ;
	
	
	//_e2ni
	r[9] = a[0] * b[26]  * -1  + a[2] * b[28] ;
	
	
	//_e3ni
	r[10] = a[0] * b[27]  * -1  + a[1] * b[28]  * -1 ;
	
	
	//_e12ni
	r[11] = a[2] * b[31] ;
	
	
	//_e13ni
	r[12] = a[1] * b[31]  * -1 ;
	
	
	//_e23ni
	r[13] = a[0] * b[31] ;
	
	
	return r;
}


