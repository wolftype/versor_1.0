
#include "conga_ip_Trv_Mnk_Vec.h"


double * conga_ip_155_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_3(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_4(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_155_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_6(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[6] * b[0] ;
	
	
	//_e13
	r[1] = a[5] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[4] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[2] * b[0]  * -1 ;
	
	
	//_e3no
	r[5] = a[1] * b[0] ;
	
	
	//_e123no
	r[6] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_155_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4]  * -1  + a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[4]  + a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	//_e123
	r[7] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_155_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_155_12(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_155_13(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_14(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1  + a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3]  + a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	//_e123
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_155_20(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_155_21(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_155_22(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_155_31(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_155_32(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[11]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[11]  + a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[11]  * -1  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	//_e123
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_155_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[5]  + a[6] * b[7]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[5] ;
	
	
	//_e13no
	r[5] = a[0] * b[6] ;
	
	
	//_e23no
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_155_36(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_155_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[11] ;
	
	
	//_e13no
	r[5] = a[0] * b[12] ;
	
	
	//_e23no
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_155_39(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_155_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[15]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[15]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[15]  * -1  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[11] ;
	
	
	//_e13no
	r[5] = a[0] * b[12] ;
	
	
	//_e23no
	r[6] = a[0] * b[13] ;
	
	
	//_e123
	r[7] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_ip_155_41(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_42(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_43(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[1]  * -1  + a[6] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[1]  + a[6] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[1] ;
	
	
	//_e13no
	r[5] = a[0] * b[2] ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_155_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[0]  * -1  + a[3] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  * -1  + a[1] * b[3] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[6] * b[15] ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[5] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[4] * b[15] ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1  + a[3] * b[15] ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1  + a[2] * b[15]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[1] * b[15] ;
	
	
	//_e123no
	r[7] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[11]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[11]  + a[4] * b[7]  + a[6] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[11]  * -1  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[6]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[7] ;
	
	
	//_e13no
	r[5] = a[0] * b[8] ;
	
	
	//_e23no
	r[6] = a[0] * b[9] ;
	
	
	//_e123
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_155_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[11]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_155_50(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1  + a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1  + a[4] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1  + a[3] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1  + a[1] * b[7] ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[7]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[7]  + a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[7]  * -1  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e123
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_155_54(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_56(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e1no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[3] ;
	
	
	//_e1no
	r[4] = a[3] * b[3] ;
	
	
	//_e2no
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[3] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[14]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[14]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[14]  * -1  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[11] ;
	
	
	//_e13no
	r[5] = a[0] * b[12] ;
	
	
	//_e23no
	r[6] = a[0] * b[13] ;
	
	
	//_e123
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_155_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[6] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[4] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1  + a[3] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1  + a[2] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[1] * b[14] ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[10]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[10]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[10]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	//_e123
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_155_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_155_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[3] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1  + a[1] * b[10] ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_155_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[6]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	//_e123
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_155_69(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_70(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_71(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[6] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[4] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[9]  * -1  + a[3] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  * -1  + a[1] * b[13] ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_73(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[6] * b[1] ;
	
	
	//_e13
	r[1] = a[5] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[4] * b[1] ;
	
	
	//_e1no
	r[3] = a[3] * b[1] ;
	
	
	//_e2no
	r[4] = a[2] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[1] * b[1] ;
	
	
	//_e123no
	r[6] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[7]  * -1  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[7]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[7]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	//_e123
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_155_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[4] * b[9]  + a[6] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_no
	r[3] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[9] ;
	
	
	//_e13no
	r[5] = a[0] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_155_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[6]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[6]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	//_e123
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_155_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_155_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e1no
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_155_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_155_83(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[6] * b[4] ;
	
	
	//_e13
	r[1] = a[5] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[4] * b[4] ;
	
	
	//_e1no
	r[3] = a[3] * b[4] ;
	
	
	//_e2no
	r[4] = a[2] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[1] * b[4] ;
	
	
	//_e123no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e12
	r[1] = a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[5] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1  + a[3] * b[11] ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1  + a[1] * b[11] ;
	
	
	//_e123no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_155_86(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_155_87(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[6] * b[3] ;
	
	
	//_e13
	r[1] = a[5] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[4] * b[3] ;
	
	
	//_e1no
	r[3] = a[3] * b[3] ;
	
	
	//_e2no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[5] = a[1] * b[3] ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e1no
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[11] ;
	
	
	//_e13no
	r[5] = a[0] * b[12] ;
	
	
	//_e23no
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_155_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[6] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[4] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1  + a[3] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1  + a[2] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[1] * b[14] ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[10]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[10]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[10]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	//_e123
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_155_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_155_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[3] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1  + a[1] * b[10] ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_94(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_95(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[4] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1  + a[3] * b[11] ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1  + a[1] * b[11] ;
	
	
	//_e123no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e1no
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_155_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e1no
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[9]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[9]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[9]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	//_e123
	r[7] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_155_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[4] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e1no
	r[4] = a[3] * b[4] ;
	
	
	//_e2no
	r[5] = a[2] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[4] ;
	
	
	//_e123no
	r[7] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4] ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[7]  + a[6] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_no
	r[3] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[7] ;
	
	
	//_e13no
	r[5] = a[0] * b[8] ;
	
	
	//_e23no
	r[6] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_155_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[6] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[4] * b[9] ;
	
	
	//_e1no
	r[4] = a[3] * b[9] ;
	
	
	//_e2no
	r[5] = a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[9] ;
	
	
	//_e123no
	r[7] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_155_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_155_108(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_109(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_155_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_112(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e1no
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_113(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_155_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_155_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_155_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_155_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[3] * b[13]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[2] * b[13]  + a[4] * b[9]  + a[6] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[13]  * -1  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_no
	r[3] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[9] ;
	
	
	//_e13no
	r[5] = a[0] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[11] ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_155_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[7] ;
	
	
	//_e1no
	r[4] = a[3] * b[7] ;
	
	
	//_e2no
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[7] ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_155_123(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_155_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e1no
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_155_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[3] * b[14]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[2] * b[14]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[14]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9]  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	//_e123
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_155_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[3] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1  + a[1] * b[10] ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[3] * b[13]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[2] * b[13]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[13]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9]  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_155_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_155_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[14]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[14]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[14]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_no
	r[3] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	//_e123
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_155_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[6] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[4] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1  + a[3] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1  + a[2] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[1] * b[14] ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[3] * b[9] ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1  + a[1] * b[9] ;
	
	
	//_e123no
	r[7] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[4] * b[7]  + a[6] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[6]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[7] ;
	
	
	//_e13no
	r[5] = a[0] * b[8] ;
	
	
	//_e23no
	r[6] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_155_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9]  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_ip_155_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[3] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1  + a[1] * b[7] ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_155_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[3] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1  + a[1] * b[6] ;
	
	
	//_e123no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_155_146(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_147(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_148(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_150(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_155_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_155_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1  + a[3] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1  + a[1] * b[7] ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1  + a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1  + a[4] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1  + a[3] * b[11] ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1  + a[1] * b[11] ;
	
	
	//_e123no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[7]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_155_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_155_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_155_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[4] * b[10] ;
	
	
	//_e1no
	r[4] = a[3] * b[10] ;
	
	
	//_e2no
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[10] ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[13]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[13]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[13]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_no
	r[3] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_155_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[6] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[4] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1  + a[3] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13] ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[6] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[4] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1  + a[3] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13] ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_no
	r[3] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_ip_155_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_155_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[5] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[3] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1  + a[1] * b[6] ;
	
	
	//_e123no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_155_165(double * a, double * b, double *r) { 
	
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

double * conga_ip_155_166(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_155_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  * -1  + a[1] * b[19]  + a[2] * b[20]  + a[3] * b[21]  + a[4] * b[22]  + a[5] * b[23]  + a[6] * b[24] ;
	
	
	//_e1
	r[1] = a[0] * b[12]  + a[3] * b[30]  * -1  + a[5] * b[26]  * -1  + a[6] * b[27]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[13]  + a[2] * b[30]  + a[4] * b[26]  + a[6] * b[28]  * -1 ;
	
	
	//_e3
	r[3] = a[0] * b[14]  + a[1] * b[30]  * -1  + a[4] * b[27]  + a[5] * b[28] ;
	
	
	//_no
	r[4] = a[0] * b[15]  + a[1] * b[26]  * -1  + a[2] * b[27]  * -1  + a[3] * b[28]  * -1 ;
	
	
	//_e12
	r[5] = a[0] * b[19]  * -1  + a[6] * b[31] ;
	
	
	//_e13
	r[6] = a[0] * b[20]  * -1  + a[5] * b[31]  * -1 ;
	
	
	//_e23
	r[7] = a[0] * b[21]  * -1  + a[4] * b[31] ;
	
	
	//_e1no
	r[8] = a[0] * b[22]  * -1  + a[3] * b[31] ;
	
	
	//_e2no
	r[9] = a[0] * b[23]  * -1  + a[2] * b[31]  * -1 ;
	
	
	//_e3no
	r[10] = a[0] * b[24]  * -1  + a[1] * b[31] ;
	
	
	//_e12no
	r[11] = a[0] * b[26] ;
	
	
	//_e13no
	r[12] = a[0] * b[27] ;
	
	
	//_e23no
	r[13] = a[0] * b[28] ;
	
	
	//_e123
	r[14] = a[0] * b[30] ;
	
	
	//_e123no
	r[15] = a[0] * b[31]  * -1 ;
	
	
	return r;
}


