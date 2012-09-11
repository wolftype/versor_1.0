
#include "conga_ip_Rot_Tnv.h"


double * conga_ip_51_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_6(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[0] ;
	
	
	//_e12no
	r[1] = a[2] * b[0]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_51_9(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[4] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_51_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_51_12(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_51_13(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_14(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_51_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_18(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1 ;
	
	
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

double * conga_ip_51_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_51_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_51_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_51_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_51_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1 ;
	
	
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

double * conga_ip_51_35(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_51_36(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_51_38(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_39(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[15]  * -1 ;
	
	
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

double * conga_ip_51_41(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_42(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_43(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_51_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_45(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3] ;
	
	
	//_e12no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[3] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1  + a[3] * b[15] ;
	
	
	//_e12no
	r[4] = a[2] * b[15]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[15] ;
	
	
	//_e23no
	r[6] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[11]  * -1 ;
	
	
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

double * conga_ip_51_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_51_50(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_51_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7] ;
	
	
	//_e12no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  * -1 ;
	
	
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

double * conga_ip_51_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_56(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_57(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_58(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3] ;
	
	
	//_e12no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_60(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[14]  * -1 ;
	
	
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

double * conga_ip_51_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[14] ;
	
	
	//_e12no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[14] ;
	
	
	//_e23no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  * -1 ;
	
	
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

double * conga_ip_51_64(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_51_65(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e12no
	r[1] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[10] ;
	
	
	//_e23no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_66(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_51_67(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  * -1 ;
	
	
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

double * conga_ip_51_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_51_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[13] ;
	
	
	//_e12no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_73(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[1] ;
	
	
	//_e12no
	r[1] = a[2] * b[1]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[1] ;
	
	
	//_e23no
	r[3] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_51_75(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_76(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[6]  * -1 ;
	
	
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

double * conga_ip_51_78(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_79(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_80(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_81(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_51_82(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_51_83(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[4] ;
	
	
	//_e12no
	r[1] = a[2] * b[4]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[4] ;
	
	
	//_e23no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_84(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[11] ;
	
	
	//_e12no
	r[1] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[11] ;
	
	
	//_e23no
	r[3] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_85(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_51_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_87(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[3] ;
	
	
	//_e12no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[3] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_88(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_89(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[14] ;
	
	
	//_e12no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[14] ;
	
	
	//_e23no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[10]  * -1 ;
	
	
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

double * conga_ip_51_92(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e12no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_94(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_95(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[11] ;
	
	
	//_e12no
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_97(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_98(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_51_99(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_100(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9]  * -1 ;
	
	
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

double * conga_ip_51_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[4] ;
	
	
	//_e12no
	r[4] = a[2] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_104(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[9] ;
	
	
	//_e12no
	r[4] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_106(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[4] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_51_107(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_109(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_51_110(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_111(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_112(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_113(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_51_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_115(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_51_116(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[1] ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_51_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_51_118(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[13]  * -1 ;
	
	
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

double * conga_ip_51_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[7] ;
	
	
	//_e12no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_121(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_51_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_124(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_125(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_51_126(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_51_128(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[14]  * -1 ;
	
	
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

double * conga_ip_51_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e12no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[13]  * -1 ;
	
	
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

double * conga_ip_51_132(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_51_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_135(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[14]  * -1 ;
	
	
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

double * conga_ip_51_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1  + a[3] * b[14] ;
	
	
	//_e12no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[14] ;
	
	
	//_e23no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9] ;
	
	
	//_e12no
	r[4] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_139(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_140(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_142(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e12no
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[7] ;
	
	
	//_e23no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_51_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6] ;
	
	
	//_e12no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[6] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_145(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_147(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_148(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_150(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_51_151(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_51_152(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7] ;
	
	
	//_e12no
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[7] ;
	
	
	//_e23no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11] ;
	
	
	//_e12no
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_51_155(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_156(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_51_157(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[10] ;
	
	
	//_e12no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[13]  * -1 ;
	
	
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

double * conga_ip_51_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13] ;
	
	
	//_e12no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13] ;
	
	
	//_e12no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_162(double * a, double * b, double *r) { 
	
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

double * conga_ip_51_163(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_51_164(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6] ;
	
	
	//_e12no
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[2] = a[1] * b[6] ;
	
	
	//_e23no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_51_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_51_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14]  + a[3] * b[30]  * -1 ;
	
	
	//_e1
	r[1] = a[1] * b[19]  + a[2] * b[20] ;
	
	
	//_e2
	r[2] = a[0] * b[19]  * -1  + a[2] * b[21] ;
	
	
	//_e3
	r[3] = a[0] * b[20]  * -1  + a[1] * b[21]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[22]  * -1  + a[1] * b[23]  * -1  + a[2] * b[24]  * -1  + a[3] * b[31] ;
	
	
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


