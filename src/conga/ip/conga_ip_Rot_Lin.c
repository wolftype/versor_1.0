
#include "conga_ip_Rot_Lin.h"


double * conga_ip_52_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_2(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_52_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_4(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_52_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_52_6(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[0] ;
	
	
	//_e13
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[0] ;
	
	
	//_e1ni
	r[4] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[5] = a[2] * b[0] ;
	
	
	//_e3ni
	r[6] = a[1] * b[0]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_52_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_52_8(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
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

double * conga_ip_52_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1  + a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3]  + a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[2] ;
	
	
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

double * conga_ip_52_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_52_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_15(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_52_16(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_17(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e1ni
	r[1] = a[0] * b[3] ;
	
	
	//_e2ni
	r[2] = a[0] * b[4] ;
	
	
	//_e3ni
	r[3] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_52_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_ni
	r[3] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12ni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_52_20(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_52_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_26(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_52_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_52_28(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_31(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_52_32(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_52_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[9]  + a[5] * b[10] ;
	
	
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

double * conga_ip_52_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[5]  + a[6] * b[7]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_52_36(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_37(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_52_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
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

double * conga_ip_52_39(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[14]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[14]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[14]  * -1  + a[4] * b[12]  + a[5] * b[13] ;
	
	
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

double * conga_ip_52_41(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_43(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[1]  * -1  + a[6] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[1]  + a[6] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_52_44(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  + a[2] * b[3] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  + a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_52_46(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13]  + a[7] * b[15]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1  + a[6] * b[15] ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1  + a[5] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1  + a[4] * b[15] ;
	
	
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

double * conga_ip_52_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[10]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[10]  + a[4] * b[7]  + a[6] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[10]  * -1  + a[4] * b[8]  + a[5] * b[9] ;
	
	
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

double * conga_ip_52_49(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_51(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[7] ;
	
	
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

double * conga_ip_52_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[5]  + a[5] * b[6] ;
	
	
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

double * conga_ip_52_54(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_56(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e1ni
	r[1] = a[0] * b[4] ;
	
	
	//_e2ni
	r[2] = a[0] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_52_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e1ni
	r[1] = a[0] * b[5] ;
	
	
	//_e2ni
	r[2] = a[0] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_52_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[3] ;
	
	
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

double * conga_ip_52_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e1ni
	r[1] = a[0] * b[8] ;
	
	
	//_e2ni
	r[2] = a[0] * b[9] ;
	
	
	//_e3ni
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_52_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
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

double * conga_ip_52_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[6] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[4] * b[14] ;
	
	
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

double * conga_ip_52_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[9]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[9]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[9]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
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

double * conga_ip_52_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
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

double * conga_ip_52_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[10] ;
	
	
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

double * conga_ip_52_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[6]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[6]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
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

double * conga_ip_52_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e1ni
	r[1] = a[0] * b[4] ;
	
	
	//_e2ni
	r[2] = a[0] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_52_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
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

double * conga_ip_52_69(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_70(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11]  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[13] ;
	
	
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

double * conga_ip_52_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[1]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[1] ;
	
	
	//_e13
	r[2] = a[5] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[1] ;
	
	
	//_e1ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e2ni
	r[5] = a[2] * b[1] ;
	
	
	//_e3ni
	r[6] = a[1] * b[1]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_52_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[6]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[6]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
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

double * conga_ip_52_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[4] * b[9]  + a[6] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
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

double * conga_ip_52_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e1ni
	r[1] = a[0] * b[6] ;
	
	
	//_e2ni
	r[2] = a[0] * b[7] ;
	
	
	//_e3ni
	r[3] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_52_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
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

double * conga_ip_52_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[7]  + a[5] * b[8] ;
	
	
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

double * conga_ip_52_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e1ni
	r[1] = a[0] * b[4] ;
	
	
	//_e2ni
	r[2] = a[0] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_52_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e1ni
	r[1] = a[0] * b[3] ;
	
	
	//_e2ni
	r[2] = a[0] * b[4] ;
	
	
	//_e3ni
	r[3] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_52_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
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

double * conga_ip_52_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
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

double * conga_ip_52_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[7] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[4] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[4] ;
	
	
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

double * conga_ip_52_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9]  + a[7] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[4] * b[11] ;
	
	
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

double * conga_ip_52_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[11]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[11]  + a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[11]  * -1  + a[4] * b[9]  + a[5] * b[10] ;
	
	
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

double * conga_ip_52_86(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[3] ;
	
	
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

double * conga_ip_52_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
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

double * conga_ip_52_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[14]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[14]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[14]  * -1  + a[4] * b[12]  + a[5] * b[13] ;
	
	
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

double * conga_ip_52_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[6] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[4] * b[14] ;
	
	
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

double * conga_ip_52_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[9]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[9]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[9]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
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

double * conga_ip_52_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[9]  + a[5] * b[10] ;
	
	
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

double * conga_ip_52_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[10] ;
	
	
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

double * conga_ip_52_94(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_95(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9]  + a[7] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[5] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[11] ;
	
	
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

double * conga_ip_52_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
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

double * conga_ip_52_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[9]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[9]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[9]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
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

double * conga_ip_52_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
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

double * conga_ip_52_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e1ni
	r[1] = a[0] * b[7] ;
	
	
	//_e2ni
	r[2] = a[0] * b[8] ;
	
	
	//_e3ni
	r[3] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_52_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[7]  + a[5] * b[8] ;
	
	
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

double * conga_ip_52_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[4] ;
	
	
	//_e13
	r[2] = a[5] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[4] ;
	
	
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

double * conga_ip_52_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4] ;
	
	
	//_e1ni
	r[1] = a[0] * b[2] ;
	
	
	//_e2ni
	r[2] = a[0] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_52_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1]  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[4] * b[7]  + a[6] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
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

double * conga_ip_52_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[7] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[9] ;
	
	
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

double * conga_ip_52_106(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
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

double * conga_ip_52_108(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
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

double * conga_ip_52_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e1ni
	r[1] = a[0] * b[1] ;
	
	
	//_e2ni
	r[2] = a[0] * b[2] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_52_112(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e1ni
	r[1] = a[0] * b[0] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1] ;
	
	
	//_e3ni
	r[3] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_52_113(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_ni
	r[3] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12ni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_52_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e1ni
	r[1] = a[0] * b[1] ;
	
	
	//_e2ni
	r[2] = a[0] * b[2] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_52_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
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

double * conga_ip_52_116(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_117(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
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

double * conga_ip_52_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[12]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[12]  + a[4] * b[9]  + a[6] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[12]  * -1  + a[4] * b[10]  + a[5] * b[11] ;
	
	
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

double * conga_ip_52_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[7] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[7] ;
	
	
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

double * conga_ip_52_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11] ;
	
	
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

double * conga_ip_52_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_52_123(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
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

double * conga_ip_52_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1  + a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3]  + a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[2] ;
	
	
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

double * conga_ip_52_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
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

double * conga_ip_52_127(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
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

double * conga_ip_52_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[13]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[13]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[13]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
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

double * conga_ip_52_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[10] ;
	
	
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

double * conga_ip_52_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
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

double * conga_ip_52_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
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

double * conga_ip_52_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_52_134(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
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

double * conga_ip_52_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[13]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[13]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[13]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
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

double * conga_ip_52_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13]  + a[7] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1  + a[6] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1  + a[4] * b[14] ;
	
	
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

double * conga_ip_52_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[9] ;
	
	
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

double * conga_ip_52_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[4] * b[7]  + a[6] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
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

double * conga_ip_52_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[13]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[13]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[13]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
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

double * conga_ip_52_141(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[7] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  + a[3] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[2] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[7]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_52_143(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[5] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[6] ;
	
	
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

double * conga_ip_52_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[5]  + a[5] * b[6] ;
	
	
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

double * conga_ip_52_146(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_52_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_52_148(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_149(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_150(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[7]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[7]  + a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[7]  * -1  + a[4] * b[5]  + a[5] * b[6] ;
	
	
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

double * conga_ip_52_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1  + a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1  + a[4] * b[7] ;
	
	
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

double * conga_ip_52_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10]  + a[7] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[2]  * -1  + a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[3]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4]  * -1  + a[4] * b[11] ;
	
	
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

double * conga_ip_52_154(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
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

double * conga_ip_52_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[6]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
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

double * conga_ip_52_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1]  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
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

double * conga_ip_52_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[7] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[10] ;
	
	
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

double * conga_ip_52_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
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

double * conga_ip_52_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[6] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[4] * b[13] ;
	
	
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

double * conga_ip_52_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[6] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[4] * b[13] ;
	
	
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

double * conga_ip_52_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[13]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[13]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[13]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
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

double * conga_ip_52_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
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

double * conga_ip_52_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[6] ;
	
	
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

double * conga_ip_52_165(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_166(double * a, double * b, double *r) { 
	
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

double * conga_ip_52_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[16]  + a[2] * b[17]  + a[3] * b[18]  + a[4] * b[22]  + a[5] * b[23]  + a[6] * b[24]  + a[7] * b[31]  * -1 ;
	
	
	//_e1
	r[1] = a[0] * b[9]  + a[3] * b[29]  * -1  + a[5] * b[26]  * -1  + a[6] * b[27]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[10]  + a[2] * b[29]  + a[4] * b[26]  + a[6] * b[28]  * -1 ;
	
	
	//_e3
	r[3] = a[0] * b[11]  + a[1] * b[29]  * -1  + a[4] * b[27]  + a[5] * b[28] ;
	
	
	//_ni
	r[4] = a[0] * b[15]  * -1  + a[1] * b[26]  + a[2] * b[27]  + a[3] * b[28] ;
	
	
	//_e12
	r[5] = a[0] * b[16]  * -1  + a[6] * b[31] ;
	
	
	//_e13
	r[6] = a[0] * b[17]  * -1  + a[5] * b[31]  * -1 ;
	
	
	//_e23
	r[7] = a[0] * b[18]  * -1  + a[4] * b[31] ;
	
	
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


