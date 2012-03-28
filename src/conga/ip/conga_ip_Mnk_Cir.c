
#include "conga_ip_Mnk_Cir.h"


double * conga_ip_105_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_105_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_105_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_105_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_105_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_105_6(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[5] * b[0] ;
	
	
	//_e2no
	r[2] = a[4] * b[0]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[8] * b[0]  * -1 ;
	
	
	//_e2ni
	r[5] = a[7] * b[0] ;
	
	
	//_e3ni
	r[6] = a[6] * b[0]  * -1 ;
	
	
	//_e12noni
	r[7] = a[2] * b[0] ;
	
	
	//_e13noni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_105_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[4]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[4]  + a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12no
	r[5] = a[2] * b[3] ;
	
	
	//_e13no
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[3] ;
	
	
	//_e12ni
	r[8] = a[2] * b[4] ;
	
	
	//_e13ni
	r[9] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[4] ;
	
	
	//_e1noni
	r[11] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_12(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_13(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1ni
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_14(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[3] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[0]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_105_15(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_16(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_17(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[0] ;
	
	
	//_e3
	r[2] = a[6] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[1] * b[0]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_105_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1ni
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12ni
	r[5] = a[2] * b[3] ;
	
	
	//_e13ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[3] ;
	
	
	//_e1noni
	r[8] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_20(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_21(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_22(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_23(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_24(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_25(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_105_26(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_30(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_105_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_105_33(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e12ni
	r[5] = a[2] * b[11] ;
	
	
	//_e13ni
	r[6] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[11] ;
	
	
	//_e1noni
	r[8] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_105_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e1noni
	r[5] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_105_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12no
	r[4] = a[2] * b[7] ;
	
	
	//_e13no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_105_37(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	//_e1noni
	r[5] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_105_39(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[15]  * -1  + a[8] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[15]  + a[7] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[15]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	//_e12no
	r[5] = a[2] * b[14] ;
	
	
	//_e13no
	r[6] = a[1] * b[14]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[14] ;
	
	
	//_e12ni
	r[8] = a[2] * b[15] ;
	
	
	//_e13ni
	r[9] = a[1] * b[15]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[15] ;
	
	
	//_e1noni
	r[11] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_105_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	//_e1no
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e1ni
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_43(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	//_e1noni
	r[2] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[2]  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_e1no
	r[1] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  + a[2] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  + a[1] * b[4] ;
	
	
	//_e1ni
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_105_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[5] * b[3] ;
	
	
	//_e2no
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[3] ;
	
	
	//_e1ni
	r[4] = a[8] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[7] * b[3] ;
	
	
	//_e3ni
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12noni
	r[8] = a[2] * b[3] ;
	
	
	//_e13noni
	r[9] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e12
	r[1] = a[2] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_105_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7]  + a[9] * b[15]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[5] * b[15] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[4] * b[15]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[15] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[8] * b[15]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[7] * b[15] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[6] * b[15]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_e12noni
	r[11] = a[2] * b[15] ;
	
	
	//_e13noni
	r[12] = a[1] * b[15]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_ip_105_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[11]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[11]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[3] * b[11]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[10] ;
	
	
	//_e13no
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[2] * b[11] ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[11] ;
	
	
	//_e1noni
	r[11] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_105_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[11]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[11]  + a[7] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[11]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[10] ;
	
	
	//_e13no
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[2] * b[11] ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_105_50(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12ni
	r[4] = a[2] * b[3] ;
	
	
	//_e13ni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12no
	r[4] = a[2] * b[3] ;
	
	
	//_e13no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[9] * b[7]  * -1 ;
	
	
	//_e1no
	r[1] = a[5] * b[7] ;
	
	
	//_e2no
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[7] ;
	
	
	//_e1ni
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[7] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[7]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12noni
	r[8] = a[2] * b[7] ;
	
	
	//_e13noni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_105_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12ni
	r[5] = a[2] * b[7] ;
	
	
	//_e13ni
	r[6] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[7] ;
	
	
	//_e1noni
	r[8] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_55(double * a, double * b, double *r) { 
	
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

double * conga_ip_105_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
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

double * conga_ip_105_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_noni
	r[1] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_noni
	r[1] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_ip_105_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[5] * b[3] ;
	
	
	//_e2no
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[3] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[2] * b[3] ;
	
	
	//_e13noni
	r[8] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e1ni
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_105_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	//_e12ni
	r[5] = a[2] * b[14] ;
	
	
	//_e13ni
	r[6] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[14] ;
	
	
	//_e1noni
	r[8] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_105_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[14] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[8] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[7] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[6] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_105_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[10]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[10]  + a[7] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[10]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[9] ;
	
	
	//_e13no
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[2] * b[10] ;
	
	
	//_e13ni
	r[9] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e1noni
	r[11] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e1noni
	r[5] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_105_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[5] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[10] ;
	
	
	//_e1ni
	r[7] = a[8] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[7] * b[10] ;
	
	
	//_e3ni
	r[9] = a[6] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_105_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6] ;
	
	
	//_e13no
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e1noni
	r[8] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e1ni
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12ni
	r[5] = a[2] * b[6] ;
	
	
	//_e13ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[6] ;
	
	
	//_e1noni
	r[8] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12ni
	r[4] = a[2] * b[6] ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1ni
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_71(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[12] ;
	
	
	//_e13
	r[2] = a[1] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[5] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[13] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[7] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[6] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_105_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[1]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	//_e1no
	r[4] = a[5] * b[1] ;
	
	
	//_e2no
	r[5] = a[4] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[1] ;
	
	
	//_e1ni
	r[7] = a[8] * b[1]  * -1 ;
	
	
	//_e2ni
	r[8] = a[7] * b[1] ;
	
	
	//_e3ni
	r[9] = a[6] * b[1]  * -1 ;
	
	
	//_e12noni
	r[10] = a[2] * b[1] ;
	
	
	//_e13noni
	r[11] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_105_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[7]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[7]  + a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[7]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6] ;
	
	
	//_e13no
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[2] * b[7] ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7] ;
	
	
	//_e1noni
	r[11] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	//_e1noni
	r[5] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_105_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12ni
	r[5] = a[2] * b[6] ;
	
	
	//_e13ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[6] ;
	
	
	//_e1noni
	r[8] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e1noni
	r[5] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_noni
	r[1] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_noni
	r[1] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1noni
	r[5] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e1noni
	r[5] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[4] ;
	
	
	//_e1ni
	r[7] = a[8] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[7] * b[4] ;
	
	
	//_e3ni
	r[9] = a[6] * b[4]  * -1 ;
	
	
	//_e12noni
	r[10] = a[2] * b[4] ;
	
	
	//_e13noni
	r[11] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_105_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[11] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[11] ;
	
	
	//_e1ni
	r[7] = a[8] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[7] * b[11] ;
	
	
	//_e3ni
	r[9] = a[6] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12noni
	r[11] = a[2] * b[11] ;
	
	
	//_e13noni
	r[12] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_105_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[7] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e12no
	r[5] = a[2] * b[11] ;
	
	
	//_e13no
	r[6] = a[1] * b[11]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[11] ;
	
	
	//_e1noni
	r[8] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_105_86(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[3] ;
	
	
	//_e1ni
	r[4] = a[8] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[7] * b[3] ;
	
	
	//_e3ni
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_e12noni
	r[7] = a[2] * b[3] ;
	
	
	//_e13noni
	r[8] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e1no
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_105_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[8] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[7] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	//_e12no
	r[5] = a[2] * b[14] ;
	
	
	//_e13no
	r[6] = a[1] * b[14]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[14] ;
	
	
	//_e1noni
	r[8] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_105_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[14] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[8] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[7] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[6] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_105_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[10]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[10]  + a[7] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[10]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[9] ;
	
	
	//_e13no
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[2] * b[10] ;
	
	
	//_e13ni
	r[9] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e1noni
	r[11] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e1noni
	r[5] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_105_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[5] * b[10] ;
	
	
	//_e2no
	r[5] = a[4] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[10] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[7] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[6] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_105_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[4] = a[2] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[9] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1no
	r[4] = a[5] * b[11] ;
	
	
	//_e2no
	r[5] = a[4] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[11] ;
	
	
	//_e1ni
	r[7] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[7] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[5]  + a[1] * b[6]  + a[6] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12noni
	r[11] = a[2] * b[11] ;
	
	
	//_e13noni
	r[12] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_105_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_105_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[9] ;
	
	
	//_e13no
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e1noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1ni
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_105_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12ni
	r[5] = a[2] * b[9] ;
	
	
	//_e13ni
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[9] ;
	
	
	//_e1noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[5] * b[4] ;
	
	
	//_e2no
	r[5] = a[4] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[4] ;
	
	
	//_e1ni
	r[7] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[4]  * -1 ;
	
	
	//_e12noni
	r[10] = a[2] * b[4] ;
	
	
	//_e13noni
	r[11] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_105_103(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[2]  + a[1] * b[3]  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_ip_105_104(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e1noni
	r[2] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_105_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[5] * b[9] ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[7] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  + a[1] * b[8]  + a[6] * b[9]  * -1 ;
	
	
	//_e12noni
	r[7] = a[2] * b[9] ;
	
	
	//_e13noni
	r[8] = a[1] * b[9]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_105_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[4]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[4]  + a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[4]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[3] ;
	
	
	//_e13no
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[3] ;
	
	
	//_e12ni
	r[6] = a[2] * b[4] ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_105_107(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e1noni
	r[2] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_108(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_110(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1noni
	r[2] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_111(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_112(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_113(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1noni
	r[2] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_114(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_115(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1noni
	r[2] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[1]  * -1  + a[8] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[1]  + a[7] * b[0] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[1] * b[0]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[0] ;
	
	
	//_e12ni
	r[6] = a[2] * b[1] ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_105_117(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_ni
	r[1] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e1no
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_noni
	r[7] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_105_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[13]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[13]  + a[7] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[13]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	//_e12no
	r[5] = a[2] * b[12] ;
	
	
	//_e13no
	r[6] = a[1] * b[12]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[2] * b[13] ;
	
	
	//_e13ni
	r[9] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[13] ;
	
	
	//_e1noni
	r[11] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_105_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[7] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[6] * b[7]  * -1 ;
	
	
	//_e12noni
	r[10] = a[2] * b[7] ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_105_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_noni
	r[7] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	return r;
}

double * conga_ip_105_122(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[1] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[7] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[6] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12no
	r[5] = a[2] * b[3] ;
	
	
	//_e13no
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[3] ;
	
	
	//_e1noni
	r[8] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_105_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_105_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_e12
	r[1] = a[2] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_105_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[14]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[14]  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[14]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[2] * b[14] ;
	
	
	//_e13ni
	r[9] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[14] ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_105_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[10] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[7] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[6] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_105_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12ni
	r[5] = a[2] * b[13] ;
	
	
	//_e13ni
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[13] ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_105_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_105_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_105_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_105_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[14]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[14]  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[14]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[2] * b[14] ;
	
	
	//_e13ni
	r[9] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[14] ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_105_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7]  + a[9] * b[14]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[5] * b[14] ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[14] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[8] * b[14]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[7] * b[14] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  + a[1] * b[10]  + a[6] * b[14]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_e12noni
	r[8] = a[2] * b[14] ;
	
	
	//_e13noni
	r[9] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_105_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[9] ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[7] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[6] * b[9]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[8] = a[2] * b[9] ;
	
	
	//_e13noni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_105_139(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e1noni
	r[2] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_105_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_105_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_105_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[9] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[5] * b[7] ;
	
	
	//_e2no
	r[5] = a[4] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[7] ;
	
	
	//_e1ni
	r[7] = a[8] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[7] * b[7] ;
	
	
	//_e3ni
	r[9] = a[6] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[11] = a[2] * b[7] ;
	
	
	//_e13noni
	r[12] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_105_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[5] * b[6] ;
	
	
	//_e2no
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[6]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[8] = a[2] * b[6] ;
	
	
	//_e13noni
	r[9] = a[1] * b[6]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_145(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e1noni
	r[2] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
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

double * conga_ip_105_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[8] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[7] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[3] ;
	
	
	//_e13no
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_105_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[7] ;
	
	
	//_e3
	r[2] = a[6] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12no
	r[5] = a[2] * b[7] ;
	
	
	//_e13no
	r[6] = a[1] * b[7]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e1noni
	r[8] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3]  + a[9] * b[7]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[7] ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[7] ;
	
	
	//_e1ni
	r[4] = a[8] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[7] * b[7] ;
	
	
	//_e3ni
	r[6] = a[6] * b[7]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12noni
	r[8] = a[2] * b[7] ;
	
	
	//_e13noni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_105_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[2]  + a[7] * b[3]  + a[8] * b[4]  + a[9] * b[11]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[5] * b[11] ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  + a[2] * b[4]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[3] * b[11] ;
	
	
	//_e1ni
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[7] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[1] * b[7]  + a[6] * b[11]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_e12noni
	r[8] = a[2] * b[11] ;
	
	
	//_e13noni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_105_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7]  + a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6] ;
	
	
	//_e13no
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[2] * b[7] ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_105_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	//_e1no
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[7] * b[6] ;
	
	
	//_e3
	r[2] = a[6] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6] ;
	
	
	//_e13no
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e1noni
	r[8] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_157(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e1noni
	r[2] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_105_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[5] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[10] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[7] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e12noni
	r[10] = a[2] * b[10] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_105_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12ni
	r[5] = a[2] * b[13] ;
	
	
	//_e13ni
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[13] ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_105_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[13]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[13] ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[7] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  + a[1] * b[9]  + a[6] * b[13]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[8] = a[2] * b[13] ;
	
	
	//_e13noni
	r[9] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_105_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[13]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[13] ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[7] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  + a[1] * b[9]  + a[6] * b[13]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[8] = a[2] * b[13] ;
	
	
	//_e13noni
	r[9] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_105_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[8] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[7] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_105_163(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e1noni
	r[2] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[3] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[4] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[9] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[6] ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[8] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[7] * b[6] ;
	
	
	//_e3ni
	r[6] = a[6] * b[6]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[8] = a[2] * b[6] ;
	
	
	//_e13noni
	r[9] = a[1] * b[6]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_105_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_166(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[1] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_105_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[19]  + a[4] * b[20]  + a[5] * b[21]  + a[6] * b[16]  + a[7] * b[17]  + a[8] * b[18]  + a[9] * b[31]  * -1 ;
	
	
	//_e1
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[5] * b[30]  * -1  + a[8] * b[29]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[4] * b[30]  + a[7] * b[29] ;
	
	
	//_e3
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[3] * b[30]  * -1  + a[6] * b[29]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[26]  * -1  + a[4] * b[27]  * -1  + a[5] * b[28]  * -1 ;
	
	
	//_ni
	r[5] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14]  + a[6] * b[26]  + a[7] * b[27]  + a[8] * b[28] ;
	
	
	//_e12
	r[6] = a[2] * b[25] ;
	
	
	//_e13
	r[7] = a[1] * b[25]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[25] ;
	
	
	//_e1no
	r[9] = a[1] * b[16]  * -1  + a[2] * b[17]  * -1  + a[5] * b[31] ;
	
	
	//_e2no
	r[10] = a[0] * b[16]  + a[2] * b[18]  * -1  + a[4] * b[31]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[17]  + a[1] * b[18]  + a[3] * b[31] ;
	
	
	//_e1ni
	r[12] = a[1] * b[19]  * -1  + a[2] * b[20]  * -1  + a[8] * b[31]  * -1 ;
	
	
	//_e2ni
	r[13] = a[0] * b[19]  + a[2] * b[21]  * -1  + a[7] * b[31] ;
	
	
	//_e3ni
	r[14] = a[0] * b[20]  + a[1] * b[21]  + a[6] * b[31]  * -1 ;
	
	
	//_noni
	r[15] = a[0] * b[22]  + a[1] * b[23]  + a[2] * b[24] ;
	
	
	//_e12no
	r[16] = a[2] * b[29] ;
	
	
	//_e13no
	r[17] = a[1] * b[29]  * -1 ;
	
	
	//_e23no
	r[18] = a[0] * b[29] ;
	
	
	//_e12ni
	r[19] = a[2] * b[30] ;
	
	
	//_e13ni
	r[20] = a[1] * b[30]  * -1 ;
	
	
	//_e23ni
	r[21] = a[0] * b[30] ;
	
	
	//_e1noni
	r[22] = a[1] * b[26]  * -1  + a[2] * b[27]  * -1 ;
	
	
	//_e2noni
	r[23] = a[0] * b[26]  + a[2] * b[28]  * -1 ;
	
	
	//_e3noni
	r[24] = a[0] * b[27]  + a[1] * b[28] ;
	
	
	//_e12noni
	r[25] = a[2] * b[31] ;
	
	
	//_e13noni
	r[26] = a[1] * b[31]  * -1 ;
	
	
	//_e23noni
	r[27] = a[0] * b[31] ;
	
	
	return r;
}


