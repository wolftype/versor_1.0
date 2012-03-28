
#include "conga_ip_Rot_Ori.h"


double * conga_ip_41_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_3(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_4(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_41_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_6(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[3] * b[0] ;
	
	
	//_e2no
	r[1] = a[2] * b[0]  * -1 ;
	
	
	//_e3no
	r[2] = a[1] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_8(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
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

double * conga_ip_41_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1 ;
	
	
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

double * conga_ip_41_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_41_12(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_41_13(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_14(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
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

double * conga_ip_41_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1 ;
	
	
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

double * conga_ip_41_20(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_21(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_41_22(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_41_31(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_41_32(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[11]  * -1 ;
	
	
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

double * conga_ip_41_35(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[5] ;
	
	
	//_e13no
	r[2] = a[0] * b[6] ;
	
	
	//_e23no
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_41_36(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_37(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
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

double * conga_ip_41_39(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_41_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[15]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[15] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[15]  * -1 ;
	
	
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

double * conga_ip_41_41(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_42(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_43(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_41_44(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_45(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1  + a[3] * b[3] ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_46(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1 ;
	
	
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

double * conga_ip_41_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[11]  * -1 ;
	
	
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

double * conga_ip_41_49(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_50(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
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

double * conga_ip_41_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[7]  * -1 ;
	
	
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

double * conga_ip_41_54(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_56(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_57(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
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

double * conga_ip_41_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
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

double * conga_ip_41_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[14]  * -1 ;
	
	
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

double * conga_ip_41_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1 ;
	
	
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

double * conga_ip_41_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[10]  * -1 ;
	
	
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

double * conga_ip_41_64(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[7]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[8] ;
	
	
	//_e13no
	r[2] = a[0] * b[9] ;
	
	
	//_e23no
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_41_65(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[6]  * -1  + a[3] * b[10] ;
	
	
	//_e2no
	r[1] = a[0] * b[7]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[8]  * -1  + a[1] * b[10] ;
	
	
	//_e123no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_66(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[3] ;
	
	
	//_e13no
	r[2] = a[0] * b[4] ;
	
	
	//_e23no
	r[3] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_41_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
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

double * conga_ip_41_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1 ;
	
	
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

double * conga_ip_41_69(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_70(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_71(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1 ;
	
	
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

double * conga_ip_41_73(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[3] * b[1] ;
	
	
	//_e2no
	r[1] = a[2] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[1] * b[1] ;
	
	
	//_e123no
	r[3] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[1] * b[7]  * -1 ;
	
	
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

double * conga_ip_41_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
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

double * conga_ip_41_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
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

double * conga_ip_41_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[1] * b[6]  * -1 ;
	
	
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

double * conga_ip_41_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
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

double * conga_ip_41_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_80(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_81(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[3] ;
	
	
	//_e13no
	r[2] = a[0] * b[4] ;
	
	
	//_e23no
	r[3] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_41_82(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[6] ;
	
	
	//_e13no
	r[2] = a[0] * b[7] ;
	
	
	//_e23no
	r[3] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_41_83(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[3] * b[4] ;
	
	
	//_e2no
	r[1] = a[2] * b[4]  * -1 ;
	
	
	//_e3no
	r[2] = a[1] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_84(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[7]  * -1  + a[3] * b[11] ;
	
	
	//_e2no
	r[1] = a[0] * b[8]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[9]  * -1  + a[1] * b[11] ;
	
	
	//_e123no
	r[3] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_85(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[7]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[8] ;
	
	
	//_e13no
	r[2] = a[0] * b[9] ;
	
	
	//_e23no
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_41_86(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_41_87(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[3] * b[3] ;
	
	
	//_e2no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[2] = a[1] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
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

double * conga_ip_41_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1 ;
	
	
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

double * conga_ip_41_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[1] * b[10]  * -1 ;
	
	
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

double * conga_ip_41_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
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

double * conga_ip_41_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
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

double * conga_ip_41_94(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_95(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
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

double * conga_ip_41_97(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_98(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[6] ;
	
	
	//_e13no
	r[2] = a[0] * b[7] ;
	
	
	//_e23no
	r[3] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_41_99(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
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

double * conga_ip_41_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[9]  * -1 ;
	
	
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

double * conga_ip_41_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
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

double * conga_ip_41_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
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

double * conga_ip_41_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1 ;
	
	
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

double * conga_ip_41_106(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
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

double * conga_ip_41_108(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_109(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
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

double * conga_ip_41_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_112(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_113(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[1] ;
	
	
	//_e23no
	r[3] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_41_114(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_115(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[3] ;
	
	
	//_e13no
	r[2] = a[0] * b[4] ;
	
	
	//_e23no
	r[3] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_41_116(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_117(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
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

double * conga_ip_41_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[3] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[2] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[13]  * -1 ;
	
	
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

double * conga_ip_41_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
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

double * conga_ip_41_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
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

double * conga_ip_41_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_41_123(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
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

double * conga_ip_41_125(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[1] ;
	
	
	//_e23no
	r[3] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_41_126(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_127(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
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

double * conga_ip_41_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[3] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[2] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[14]  * -1 ;
	
	
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

double * conga_ip_41_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
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

double * conga_ip_41_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[3] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[2] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[13]  * -1 ;
	
	
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

double * conga_ip_41_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
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

double * conga_ip_41_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_41_134(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
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

double * conga_ip_41_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[14]  * -1 ;
	
	
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

double * conga_ip_41_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1 ;
	
	
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

double * conga_ip_41_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
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

double * conga_ip_41_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
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

double * conga_ip_41_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
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

double * conga_ip_41_141(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_142(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1  + a[3] * b[7] ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5]  * -1  + a[1] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_41_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
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

double * conga_ip_41_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
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

double * conga_ip_41_146(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_147(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_148(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_150(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_41_151(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[4] ;
	
	
	//_e13no
	r[2] = a[0] * b[5] ;
	
	
	//_e23no
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_41_152(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[4]  * -1  + a[3] * b[7] ;
	
	
	//_e2no
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
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

double * conga_ip_41_154(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_155(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_156(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[3] ;
	
	
	//_e13no
	r[2] = a[0] * b[4] ;
	
	
	//_e23no
	r[3] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_41_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
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

double * conga_ip_41_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1 ;
	
	
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

double * conga_ip_41_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[13]  * -1 ;
	
	
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

double * conga_ip_41_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1 ;
	
	
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

double * conga_ip_41_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1 ;
	
	
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

double * conga_ip_41_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
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

double * conga_ip_41_163(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e12no
	r[1] = a[0] * b[4] ;
	
	
	//_e13no
	r[2] = a[0] * b[5] ;
	
	
	//_e23no
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_41_164(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[3]  * -1  + a[3] * b[6] ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6] ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_41_165(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_166(double * a, double * b, double *r) { 
	
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

double * conga_ip_41_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  * -1  + a[1] * b[19]  + a[2] * b[20]  + a[3] * b[21] ;
	
	
	//_e1
	r[1] = a[0] * b[12]  + a[3] * b[30]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[13]  + a[2] * b[30] ;
	
	
	//_e3
	r[3] = a[0] * b[14]  + a[1] * b[30]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[15]  + a[1] * b[26]  * -1  + a[2] * b[27]  * -1  + a[3] * b[28]  * -1 ;
	
	
	//_e12
	r[5] = a[0] * b[19]  * -1 ;
	
	
	//_e13
	r[6] = a[0] * b[20]  * -1 ;
	
	
	//_e23
	r[7] = a[0] * b[21]  * -1 ;
	
	
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


