
#include "conga_ip_Rot_Inf.h"


double * conga_ip_42_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_2(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_4(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_6(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[2] * b[0] ;
	
	
	//_e3ni
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_42_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[6] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_42_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12ni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_42_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_42_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_15(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_42_16(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_17(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[0] ;
	
	
	//_e3
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_42_18(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3] ;
	
	
	//_e2ni
	r[1] = a[0] * b[4] ;
	
	
	//_e3ni
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_42_19(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12ni
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_20(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_26(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_42_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_31(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_32(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_42_34(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12ni
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_35(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12ni
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[7]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_42_37(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12ni
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[14]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12ni
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_42_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_43(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e12
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_45(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[2] * b[3] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  + a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_42_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[11]  + a[3] * b[15]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[12]  + a[2] * b[15] ;
	
	
	//_e3ni
	r[6] = a[0] * b[13]  + a[1] * b[15]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_ip_42_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_42_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[10]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_42_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_42_52(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[4]  + a[3] * b[7]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[5]  + a[2] * b[7] ;
	
	
	//_e3ni
	r[2] = a[0] * b[6]  + a[1] * b[7]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_42_53(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12ni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_54(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[4] ;
	
	
	//_e2ni
	r[2] = a[0] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_42_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[5] ;
	
	
	//_e2ni
	r[2] = a[0] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_42_59(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[2] * b[3] ;
	
	
	//_e3ni
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_42_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[8] ;
	
	
	//_e2ni
	r[2] = a[0] * b[9] ;
	
	
	//_e3ni
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_42_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12ni
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[10]  + a[3] * b[14]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  + a[2] * b[14] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  + a[1] * b[14]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_42_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_42_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[6]  + a[3] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  + a[1] * b[10]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_42_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_42_67(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[4] ;
	
	
	//_e2ni
	r[1] = a[0] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_42_68(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_69(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_70(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[9]  + a[3] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  + a[1] * b[13]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_42_73(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[3] * b[1]  * -1 ;
	
	
	//_e2ni
	r[1] = a[2] * b[1] ;
	
	
	//_e3ni
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_42_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_42_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_ni
	r[3] = a[1] * b[9]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e12ni
	r[4] = a[0] * b[9]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_76(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[6] ;
	
	
	//_e2ni
	r[1] = a[0] * b[7] ;
	
	
	//_e3ni
	r[2] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_42_77(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_78(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_79(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[4] ;
	
	
	//_e2ni
	r[1] = a[0] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_42_80(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3] ;
	
	
	//_e2ni
	r[1] = a[0] * b[4] ;
	
	
	//_e3ni
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_42_81(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[3] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[2] * b[4] ;
	
	
	//_e3ni
	r[6] = a[1] * b[4]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_42_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[7]  + a[3] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  + a[2] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  + a[1] * b[11]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_42_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[11]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_42_86(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[3] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[2] * b[3] ;
	
	
	//_e3ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_42_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_42_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[14]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12ni
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_42_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[10]  + a[3] * b[14]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  + a[2] * b[14] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  + a[1] * b[14]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_42_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[9]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_42_92(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12ni
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_93(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[6]  + a[3] * b[10]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[7]  + a[2] * b[10] ;
	
	
	//_e3ni
	r[2] = a[0] * b[8]  + a[1] * b[10]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_42_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[6]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_42_96(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[7]  + a[3] * b[11]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[8]  + a[2] * b[11] ;
	
	
	//_e3ni
	r[2] = a[0] * b[9]  + a[1] * b[11]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_42_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_42_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[9]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_42_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[6] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_42_100(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[7] ;
	
	
	//_e2ni
	r[1] = a[0] * b[8] ;
	
	
	//_e3ni
	r[2] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_42_101(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_102(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[3] * b[4]  * -1 ;
	
	
	//_e2ni
	r[1] = a[2] * b[4] ;
	
	
	//_e3ni
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_42_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[2] ;
	
	
	//_e2ni
	r[2] = a[0] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_42_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[3] * b[9]  * -1 ;
	
	
	//_e2ni
	r[5] = a[2] * b[9] ;
	
	
	//_e3ni
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_42_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_42_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_108(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_110(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_111(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[1] ;
	
	
	//_e2ni
	r[1] = a[0] * b[2] ;
	
	
	//_e3ni
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_42_112(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_42_113(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12ni
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[1] = a[0] * b[1] ;
	
	
	//_e2ni
	r[2] = a[0] * b[2] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_42_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[0] ;
	
	
	//_e3
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_42_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_42_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[12]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[9]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e12ni
	r[4] = a[0] * b[9]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_ip_42_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[3] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[2] * b[7] ;
	
	
	//_e3ni
	r[6] = a[1] * b[7]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_42_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_42_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_42_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[6] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_42_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12ni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_42_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[3] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_42_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_42_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[13]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_42_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[6]  + a[3] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  + a[1] * b[10]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_42_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[10] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_ip_42_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_42_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[10] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_ip_42_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[13]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_42_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[11]  + a[3] * b[14]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[12]  + a[2] * b[14] ;
	
	
	//_e3ni
	r[6] = a[0] * b[13]  + a[1] * b[14]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_42_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[6]  + a[3] * b[9]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  + a[2] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  + a[1] * b[9]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_42_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[13]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_42_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_142(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3]  + a[3] * b[7]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[4]  + a[2] * b[7] ;
	
	
	//_e3ni
	r[2] = a[0] * b[5]  + a[1] * b[7]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_42_143(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_144(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[4]  + a[2] * b[6] ;
	
	
	//_e3ni
	r[2] = a[0] * b[5]  + a[1] * b[6]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_42_145(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12ni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13ni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_146(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_42_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_42_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_42_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_42_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[3] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[1] * b[7]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_42_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e12
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[8]  + a[3] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[9]  + a[2] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[10]  + a[1] * b[11]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_42_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_42_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_42_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_42_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[3] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_42_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[10]  + a[3] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  + a[1] * b[13]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_42_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[10]  + a[3] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  + a[1] * b[13]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_42_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[13]  * -1 ;
	
	
	//_ni
	r[3] = a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_42_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[2] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[6]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_42_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_166(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_42_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[16]  + a[2] * b[17]  + a[3] * b[18] ;
	
	
	//_e1
	r[1] = a[0] * b[9]  + a[3] * b[29]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[10]  + a[2] * b[29] ;
	
	
	//_e3
	r[3] = a[0] * b[11]  + a[1] * b[29]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[15]  * -1  + a[1] * b[26]  + a[2] * b[27]  + a[3] * b[28] ;
	
	
	//_e12
	r[5] = a[0] * b[16]  * -1 ;
	
	
	//_e13
	r[6] = a[0] * b[17]  * -1 ;
	
	
	//_e23
	r[7] = a[0] * b[18]  * -1 ;
	
	
	//_e1ni
	r[8] = a[0] * b[22]  + a[3] * b[31]  * -1 ;
	
	
	//_e2ni
	r[9] = a[0] * b[23]  + a[2] * b[31] ;
	
	
	//_e3ni
	r[10] = a[0] * b[24]  + a[1] * b[31]  * -1 ;
	
	
	//_e12ni
	r[11] = a[0] * b[26]  * -1 ;
	
	
	//_e13ni
	r[12] = a[0] * b[27]  * -1 ;
	
	
	//_e23ni
	r[13] = a[0] * b[28]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[29] ;
	
	
	//_e123ni
	r[15] = a[0] * b[31] ;
	
	
	return r;
}


