
#include "conga_ip_Flp.h"


double * conga_ip_20_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_4(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_20_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_6(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[2] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0] ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_20_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_20_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[8] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_20_10(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3]  + a[3] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[3]  + a[3] * b[2] ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2ni
	r[4] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_20_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_15(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_20_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_17(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_20_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_20_19(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[0] ;
	
	
	//_e13
	r[1] = a[3] * b[1] ;
	
	
	//_e23
	r[2] = a[3] * b[2] ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2ni
	r[4] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_20_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_20_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_ip_20_32(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_20_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4] ;
	
	
	//_e12
	r[1] = a[3] * b[5] ;
	
	
	//_e13
	r[2] = a[3] * b[6] ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1ni
	r[4] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_36(double * a, double * b, double *r) { 
	
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

double * conga_ip_20_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_20_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_20_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0] ;
	
	
	//_e12
	r[1] = a[3] * b[1] ;
	
	
	//_e13
	r[2] = a[3] * b[2] ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[2]  * -1  + a[2] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12ni
	r[4] = a[2] * b[3] ;
	
	
	//_e13ni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	//_e123
	r[7] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_20_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[13] ;
	
	
	//_ni
	r[3] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_e12ni
	r[4] = a[2] * b[15] ;
	
	
	//_e13ni
	r[5] = a[1] * b[15]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[15] ;
	
	
	//_e123
	r[7] = a[3] * b[15] ;
	
	
	return r;
}

double * conga_ip_20_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[3] * b[8] ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_20_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_51(double * a, double * b, double *r) { 
	
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

double * conga_ip_20_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_20_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_54(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_20_58(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[7] ;
	
	
	//_ni
	r[3] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_ip_20_59(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[2] * b[3] ;
	
	
	//_e13ni
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[3] ;
	
	
	//_e123
	r[3] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_20_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[10] ;
	
	
	//_ni
	r[3] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_20_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12ni
	r[4] = a[2] * b[14] ;
	
	
	//_e13ni
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[14] ;
	
	
	//_e123
	r[7] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_20_63(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[9]  + a[3] * b[6] ;
	
	
	//_e13
	r[1] = a[1] * b[9]  * -1  + a[3] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[9]  + a[3] * b[8] ;
	
	
	//_e1ni
	r[3] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[4] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[5] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12ni
	r[4] = a[2] * b[10] ;
	
	
	//_e13ni
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10] ;
	
	
	//_e123
	r[7] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_20_66(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[6]  + a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[6]  + a[3] * b[5] ;
	
	
	//_e1ni
	r[3] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[4] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[5] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_20_68(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[3] * b[4] ;
	
	
	//_e23
	r[2] = a[3] * b[5] ;
	
	
	//_e1ni
	r[3] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[4] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[5] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_69(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_70(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[11] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e12ni
	r[4] = a[2] * b[13] ;
	
	
	//_e13ni
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13] ;
	
	
	//_e123
	r[7] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_20_73(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[2] * b[1] ;
	
	
	//_e13ni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[1] ;
	
	
	//_e123
	r[3] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_ip_20_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[6]  + a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[6]  + a[3] * b[5] ;
	
	
	//_e1ni
	r[3] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[4] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[5] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[9] ;
	
	
	//_e13
	r[2] = a[3] * b[10] ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1ni
	r[4] = a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_e2ni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[8] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_20_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[3] * b[4] ;
	
	
	//_e23
	r[2] = a[3] * b[5] ;
	
	
	//_e1ni
	r[3] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[4] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[5] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_78(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[6] ;
	
	
	//_e13
	r[1] = a[3] * b[7] ;
	
	
	//_e23
	r[2] = a[3] * b[8] ;
	
	
	//_e1ni
	r[3] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[4] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[5] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_20_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_20_81(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[3] * b[4] ;
	
	
	//_e23
	r[2] = a[3] * b[5] ;
	
	
	//_e1ni
	r[3] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[4] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[5] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[3] * b[8] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4] ;
	
	
	//_e123
	r[6] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_20_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[9] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12ni
	r[4] = a[2] * b[11] ;
	
	
	//_e13ni
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11] ;
	
	
	//_e123
	r[7] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_20_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[10] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_20_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	//_e123
	r[6] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_20_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[10] ;
	
	
	//_ni
	r[3] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_20_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12ni
	r[4] = a[2] * b[14] ;
	
	
	//_e13ni
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[14] ;
	
	
	//_e123
	r[7] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_20_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[8] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[8] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12ni
	r[4] = a[2] * b[10] ;
	
	
	//_e13ni
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10] ;
	
	
	//_e123
	r[7] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_20_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_95(double * a, double * b, double *r) { 
	
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

double * conga_ip_20_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[3] * b[9] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12ni
	r[4] = a[2] * b[11] ;
	
	
	//_e13ni
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11] ;
	
	
	//_e123
	r[7] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_20_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[9] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_20_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[8] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_20_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[3] * b[9] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_20_101(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[6] ;
	
	
	//_e13
	r[1] = a[3] * b[7] ;
	
	
	//_e23
	r[2] = a[3] * b[8] ;
	
	
	//_e1ni
	r[3] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[4] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[5] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_102(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[2] * b[4] ;
	
	
	//_e13ni
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[4] ;
	
	
	//_e123
	r[3] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_20_103(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[4] ;
	
	
	//_ni
	r[3] = a[0] * b[2]  + a[1] * b[3]  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_ip_20_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_e12
	r[1] = a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[3] * b[8] ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[9] ;
	
	
	//_e13ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[9] ;
	
	
	//_e123
	r[6] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_20_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_20_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[3] * b[8] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_108(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_110(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[3] * b[4] ;
	
	
	//_e23
	r[2] = a[3] * b[5] ;
	
	
	//_e1ni
	r[3] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[4] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[5] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_111(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_20_112(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_20_113(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[0] ;
	
	
	//_e13
	r[1] = a[3] * b[1] ;
	
	
	//_e23
	r[2] = a[3] * b[2] ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2ni
	r[4] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_114(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_20_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[3] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_20_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_20_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[13] ;
	
	
	//_ni
	r[3] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_20_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[12]  + a[3] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[12]  * -1  + a[3] * b[10] ;
	
	
	//_e23
	r[3] = a[0] * b[12]  + a[3] * b[11] ;
	
	
	//_e1ni
	r[4] = a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_e2ni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[7] ;
	
	
	//_e13ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[7] ;
	
	
	//_e123
	r[6] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_20_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[11] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	return r;
}

double * conga_ip_20_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_20_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[8] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_20_125(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3]  + a[3] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[3]  + a[3] * b[2] ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2ni
	r[4] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_20_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_20_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[13] ;
	
	
	//_ni
	r[3] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_20_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[8] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12ni
	r[4] = a[2] * b[10] ;
	
	
	//_e13ni
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10] ;
	
	
	//_e123
	r[7] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_20_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[3] * b[12] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_20_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_20_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_20_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[13] ;
	
	
	//_ni
	r[3] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_e12ni
	r[4] = a[2] * b[14] ;
	
	
	//_e13ni
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[14] ;
	
	
	//_e123
	r[7] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_20_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[8] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12ni
	r[4] = a[2] * b[9] ;
	
	
	//_e13ni
	r[5] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9] ;
	
	
	//_e123
	r[7] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_20_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[3] * b[8] ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_20_143(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12ni
	r[4] = a[2] * b[6] ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e123
	r[7] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_20_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_146(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_20_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_20_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_149(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_20_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[3] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_20_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2]  + a[2] * b[3]  + a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[2]  * -1  + a[2] * b[4]  + a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[3] * b[10] ;
	
	
	//_ni
	r[3] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_e12ni
	r[4] = a[2] * b[11] ;
	
	
	//_e13ni
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11] ;
	
	
	//_e123
	r[7] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_20_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_20_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[3] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_20_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[10] ;
	
	
	//_e13ni
	r[4] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[10] ;
	
	
	//_e123
	r[6] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_20_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12
	r[1] = a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[3] * b[12] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12ni
	r[4] = a[2] * b[13] ;
	
	
	//_e13ni
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13] ;
	
	
	//_e123
	r[7] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_20_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12ni
	r[4] = a[2] * b[13] ;
	
	
	//_e13ni
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13] ;
	
	
	//_e123
	r[7] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_20_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12ni
	r[4] = a[2] * b[6] ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e123
	r[7] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_20_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_20_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_20_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[15] ;
	
	
	//_e1
	r[1] = a[1] * b[16]  + a[2] * b[17]  + a[3] * b[22] ;
	
	
	//_e2
	r[2] = a[0] * b[16]  * -1  + a[2] * b[18]  + a[3] * b[23] ;
	
	
	//_e3
	r[3] = a[0] * b[17]  * -1  + a[1] * b[18]  * -1  + a[3] * b[24] ;
	
	
	//_ni
	r[4] = a[0] * b[22]  + a[1] * b[23]  + a[2] * b[24] ;
	
	
	//_e12
	r[5] = a[2] * b[29]  + a[3] * b[26] ;
	
	
	//_e13
	r[6] = a[1] * b[29]  * -1  + a[3] * b[27] ;
	
	
	//_e23
	r[7] = a[0] * b[29]  + a[3] * b[28] ;
	
	
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
	
	
	//_e123
	r[14] = a[3] * b[31] ;
	
	
	return r;
}


