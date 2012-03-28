
#include "conga_ip_Trs_Sph.h"


double * conga_ip_63_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_6(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[0] ;
	
	
	//_e3
	r[2] = a[6] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[0] ;
	
	
	//_ni
	r[4] = a[10] * b[0]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[4] * b[0]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[0] ;
	
	
	//_e1noni
	r[8] = a[2] * b[0]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[0] ;
	
	
	//_e3noni
	r[10] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_63_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_63_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1  + a[7] * b[1]  * -1  + a[8] * b[2]  * -1  + a[9] * b[4]  * -1  + a[10] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[4]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[8] = a[1] * b[4]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_63_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_13(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_14(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[0]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[0]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[0] ;
	
	
	//_e3ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_15(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_63_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_17(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[10] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[0] ;
	
	
	//_e13
	r[2] = a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[2] * b[0]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_18(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_63_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1  + a[7] * b[1]  * -1  + a[8] * b[2]  * -1  + a[9] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[3]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[2] = a[1] * b[3]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_24(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_25(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_63_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_29(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[9] * b[7]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[7] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_63_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1  + a[9] * b[11]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[11]  * -1  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[2] = a[1] * b[11]  + a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[3] = a[0] * b[11]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[5]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2ni
	r[2] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3ni
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[10] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[7] ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_37(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_63_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[2] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[3] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_63_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1  + a[8] * b[13]  * -1  + a[9] * b[15]  * -1  + a[10] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[14] ;
	
	
	//_e3no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[15]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[8] = a[1] * b[15]  + a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[15]  * -1  + a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_42(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  * -1  + a[7] * b[2]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2ni
	r[2] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3ni
	r[3] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[2]  * -1  + a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[3] ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[10] * b[3]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[3] ;
	
	
	//_e13ni
	r[6] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[3] ;
	
	
	//_e1noni
	r[8] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[3] ;
	
	
	//_e3noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[8] * b[15]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[3] * b[5]  * -1  + a[5] * b[7]  + a[7] * b[15] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[15]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[9] * b[15] ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13]  + a[10] * b[15]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[15] ;
	
	
	//_e13ni
	r[6] = a[4] * b[15]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[15] ;
	
	
	//_e1noni
	r[8] = a[2] * b[15]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[15] ;
	
	
	//_e3noni
	r[10] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[7]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1  + a[9] * b[11]  * -1  + a[10] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[10] ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[11]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11]  + a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[11]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[9] * b[11]  * -1  + a[10] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[10] ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_50(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_51(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[10] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[7] ;
	
	
	//_ni
	r[4] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[10] * b[7]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[7] ;
	
	
	//_e13ni
	r[6] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[7] ;
	
	
	//_e1noni
	r[8] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[7] ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  * -1  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1  + a[9] * b[7]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[7]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[2] = a[1] * b[7]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_55(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_57(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_63_58(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_63_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[10] * b[3]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[3] ;
	
	
	//_e13ni
	r[6] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[3] ;
	
	
	//_e1noni
	r[8] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[3] ;
	
	
	//_e3noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_60(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_63_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1  + a[8] * b[13]  * -1  + a[9] * b[14]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[14]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[2] = a[1] * b[14]  + a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[3] = a[0] * b[14]  * -1  + a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[8] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[7] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[9] * b[14] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[10] * b[14]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[14] ;
	
	
	//_e13ni
	r[6] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[14] ;
	
	
	//_e1noni
	r[8] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[14] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1  + a[9] * b[10]  * -1  + a[10] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[9] ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[10]  * -1  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[10]  + a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[10]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[2] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[3] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4]  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[9] * b[10] ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[10] * b[10]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[10] ;
	
	
	//_e13ni
	r[6] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[10] ;
	
	
	//_e1noni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1  + a[10] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_67(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_63_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[2] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_70(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[12]  * -1  + a[4] * b[3]  + a[5] * b[4]  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[12]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[12]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[9] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[10] * b[13]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[13] ;
	
	
	//_e13ni
	r[6] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[13] ;
	
	
	//_e1noni
	r[8] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[13] ;
	
	
	//_e3noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_73(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0]  + a[7] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[1] ;
	
	
	//_ni
	r[4] = a[10] * b[1]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[1] ;
	
	
	//_e13ni
	r[6] = a[4] * b[1]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[1] ;
	
	
	//_e3noni
	r[10] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1  + a[9] * b[7]  * -1  + a[10] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[7]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e2ni
	r[2] = a[3] * b[9]  * -1  + a[5] * b[11] ;
	
	
	//_e3ni
	r[3] = a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_76(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_63_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[2] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[2] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[3] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_79(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_63_80(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_63_81(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[2] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[2] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[3] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[4] * b[0]  + a[5] * b[1]  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[9] * b[4] ;
	
	
	//_ni
	r[4] = a[10] * b[4]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[4] ;
	
	
	//_e13ni
	r[6] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[4] ;
	
	
	//_e1noni
	r[8] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[4] ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[7] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[9] * b[11] ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[10] * b[11]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[11] ;
	
	
	//_e13ni
	r[6] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[11] ;
	
	
	//_e1noni
	r[8] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[11] ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1  + a[10] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[11] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[11] ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[8] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_63_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[9] * b[3] ;
	
	
	//_ni
	r[4] = a[10] * b[3]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[3] ;
	
	
	//_e13ni
	r[6] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[3] ;
	
	
	//_e1noni
	r[8] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[3] ;
	
	
	//_e3noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_63_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11]  * -1  + a[7] * b[12]  * -1  + a[8] * b[13]  * -1  + a[10] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[14] ;
	
	
	//_e3no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[8] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[8] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[4]  * -1  + a[5] * b[6]  + a[7] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[9] * b[14] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[10] * b[14]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[14] ;
	
	
	//_e13ni
	r[6] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[14] ;
	
	
	//_e1noni
	r[8] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[14] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1  + a[9] * b[10]  * -1  + a[10] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[9] ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[10]  * -1  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[10]  + a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[10]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[2] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[3] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[10] * b[10]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[10] ;
	
	
	//_e13ni
	r[6] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[10] ;
	
	
	//_e1noni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[10] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[7] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[11] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[10] * b[11]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[11] ;
	
	
	//_e13ni
	r[6] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[11] ;
	
	
	//_e1noni
	r[8] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[11] ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_63_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1  + a[10] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[9] ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_63_100(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_63_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1  + a[9] * b[9]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[9]  * -1  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[2] = a[1] * b[9]  + a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[3] = a[0] * b[9]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[7] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[4] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[10] * b[4]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[4] ;
	
	
	//_e13ni
	r[6] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[4] ;
	
	
	//_e1noni
	r[8] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[4] ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_103(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_ip_63_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[7]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[2] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[3] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5]  + a[7] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[9] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[10] * b[9]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[9] ;
	
	
	//_e13ni
	r[6] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[9] ;
	
	
	//_e1noni
	r[8] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[9] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_106(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[9] * b[4]  * -1  + a[10] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[2] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[3] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_108(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_109(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[9] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[2] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_111(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_63_112(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_63_113(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1  + a[7] * b[1]  * -1  + a[8] * b[2]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[2] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[3] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_114(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_63_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[2] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_116(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[1]  * -1  + a[10] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[0] ;
	
	
	//_e13
	r[2] = a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[2] * b[0]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[1] ;
	
	
	//_e3ni
	r[9] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_63_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_63_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1  + a[9] * b[13]  * -1  + a[10] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[12] ;
	
	
	//_e13
	r[2] = a[4] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[12] ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[13]  * -1  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[13]  + a[3] * b[9]  * -1  + a[5] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[13]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[0]  + a[5] * b[1]  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[9] * b[7] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[10] * b[7]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[7] ;
	
	
	//_e13ni
	r[6] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[7] ;
	
	
	//_e1noni
	r[8] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[7] ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	return r;
}

double * conga_ip_63_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_63_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_63_125(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1  + a[7] * b[1]  * -1  + a[8] * b[2]  * -1  + a[10] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[8] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[9] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_63_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_63_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_63_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1  + a[9] * b[14]  * -1  + a[10] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13] ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[14]  * -1  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[14]  + a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[14]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[0]  + a[5] * b[1]  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[9] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[10] * b[10]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[10] ;
	
	
	//_e13ni
	r[6] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[10] ;
	
	
	//_e1noni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[13]  * -1  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[2] = a[1] * b[13]  + a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[3] = a[0] * b[13]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_63_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_63_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_63_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1  + a[9] * b[14]  * -1  + a[10] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13] ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[14]  * -1  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[14]  + a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[14]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6]  + a[8] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7]  + a[7] * b[14] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[9] * b[14] ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13]  + a[10] * b[14]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[14] ;
	
	
	//_e13ni
	r[6] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[14] ;
	
	
	//_e1noni
	r[8] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[14] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[9] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[10] * b[9]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[9] ;
	
	
	//_e13ni
	r[6] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[9] ;
	
	
	//_e1noni
	r[8] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[9] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[7]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[2] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[3] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1  + a[10] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13] ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[7] ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[10] * b[7]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[7] ;
	
	
	//_e13ni
	r[6] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[7] ;
	
	
	//_e1noni
	r[8] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[7] ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[10] * b[6]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[6] ;
	
	
	//_e13ni
	r[6] = a[4] * b[6]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[6] ;
	
	
	//_e1noni
	r[8] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[6] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  * -1  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[2] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[3] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_63_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_149(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[10] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1  + a[10] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[7] ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[8] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2]  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3]  + a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[9] * b[7] ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[10] * b[7]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[7] ;
	
	
	//_e13ni
	r[6] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[7] ;
	
	
	//_e1noni
	r[8] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[7] ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[2]  + a[5] * b[3]  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[2]  * -1  + a[5] * b[4]  + a[7] * b[11] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[9] * b[11] ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[10] * b[11]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[11] ;
	
	
	//_e13ni
	r[6] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[11] ;
	
	
	//_e1noni
	r[8] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[11] ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[7]  * -1  + a[10] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_63_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1  + a[10] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[8]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[2] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[3] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4]  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[9] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[10] * b[10]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[10] ;
	
	
	//_e13ni
	r[6] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[10] ;
	
	
	//_e1noni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[13]  * -1  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[2] = a[1] * b[13]  + a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[3] = a[0] * b[13]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6]  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[9] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[10] * b[13]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[13] ;
	
	
	//_e13ni
	r[6] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[13] ;
	
	
	//_e1noni
	r[8] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[13] ;
	
	
	//_e3noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6]  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[9] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[10] * b[13]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[13] ;
	
	
	//_e13ni
	r[6] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[13] ;
	
	
	//_e1noni
	r[8] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[13] ;
	
	
	//_e3noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1  + a[10] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13] ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[4]  * -1  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e1ni
	r[1] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[2] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[3] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2]  + a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[9] * b[6] ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[10] * b[6]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[6] ;
	
	
	//_e13ni
	r[6] = a[4] * b[6]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[6] ;
	
	
	//_e1noni
	r[8] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[6] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_63_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_63_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[26]  * -1  + a[7] * b[27]  * -1  + a[8] * b[28]  * -1  + a[9] * b[30]  * -1  + a[10] * b[29]  * -1 ;
	
	
	//_e1
	r[1] = a[2] * b[25]  * -1  + a[4] * b[16]  + a[5] * b[17]  + a[8] * b[31]  * -1 ;
	
	
	//_e2
	r[2] = a[1] * b[25]  + a[3] * b[16]  * -1  + a[5] * b[18]  + a[7] * b[31] ;
	
	
	//_e3
	r[3] = a[0] * b[25]  * -1  + a[3] * b[17]  * -1  + a[4] * b[18]  * -1  + a[6] * b[31]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[16]  * -1  + a[1] * b[17]  * -1  + a[2] * b[18]  * -1  + a[9] * b[31] ;
	
	
	//_ni
	r[5] = a[0] * b[19]  * -1  + a[1] * b[20]  * -1  + a[2] * b[21]  * -1  + a[3] * b[22]  + a[4] * b[23]  + a[5] * b[24]  + a[10] * b[31]  * -1 ;
	
	
	//_e12
	r[6] = a[5] * b[29] ;
	
	
	//_e13
	r[7] = a[4] * b[29]  * -1 ;
	
	
	//_e23
	r[8] = a[3] * b[29] ;
	
	
	//_e1no
	r[9] = a[2] * b[29]  * -1 ;
	
	
	//_e2no
	r[10] = a[1] * b[29] ;
	
	
	//_e3no
	r[11] = a[0] * b[29]  * -1 ;
	
	
	//_e1ni
	r[12] = a[2] * b[30]  * -1  + a[4] * b[26]  + a[5] * b[27] ;
	
	
	//_e2ni
	r[13] = a[1] * b[30]  + a[3] * b[26]  * -1  + a[5] * b[28] ;
	
	
	//_e3ni
	r[14] = a[0] * b[30]  * -1  + a[3] * b[27]  * -1  + a[4] * b[28]  * -1 ;
	
	
	//_noni
	r[15] = a[0] * b[26]  * -1  + a[1] * b[27]  * -1  + a[2] * b[28]  * -1 ;
	
	
	//_e12ni
	r[16] = a[5] * b[31] ;
	
	
	//_e13ni
	r[17] = a[4] * b[31]  * -1 ;
	
	
	//_e23ni
	r[18] = a[3] * b[31] ;
	
	
	//_e1noni
	r[19] = a[2] * b[31]  * -1 ;
	
	
	//_e2noni
	r[20] = a[1] * b[31] ;
	
	
	//_e3noni
	r[21] = a[0] * b[31]  * -1 ;
	
	
	return r;
}


