
#include "conga_ip_Mnk_Vec_Aff.h"


double * conga_ip_163_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_4(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_163_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_6(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[0] ;
	
	
	//_e3
	r[2] = a[4] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[0]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[0] ;
	
	
	//_e23no
	r[5] = a[0] * b[0]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_163_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_163_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1  + a[6] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1  + a[3] * b[1] ;
	
	
	//_e23
	r[3] = a[0] * b[4]  + a[3] * b[2] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_163_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_163_12(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_163_13(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_14(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_163_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1  + a[6] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3]  + a[3] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[2] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_163_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_163_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_163_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_163_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_ip_163_32(double * a, double * b, double *r) { 
	
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

double * conga_ip_163_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_163_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[5] ;
	
	
	//_e13
	r[2] = a[3] * b[6] ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_163_36(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_163_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_163_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_163_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[15]  + a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[15]  * -1  + a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[15]  + a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_163_41(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_42(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[1] ;
	
	
	//_e13
	r[2] = a[3] * b[2] ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_163_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_163_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[3] * b[11]  + a[6] * b[15]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[12]  + a[5] * b[15] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[13]  + a[4] * b[15]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[15]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[15] ;
	
	
	//_e23no
	r[6] = a[0] * b[15]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[15] ;
	
	
	return r;
}

double * conga_ip_163_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[3] * b[8] ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_163_49(double * a, double * b, double *r) { 
	
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

double * conga_ip_163_50(double * a, double * b, double *r) { 
	
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

double * conga_ip_163_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  + a[3] * b[5]  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[3] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_163_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_163_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_56(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_58(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[7] ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[3] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_163_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_163_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[10]  + a[6] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[11]  + a[5] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[12]  + a[4] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[14] ;
	
	
	//_e23no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_163_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[8] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_163_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7]  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_163_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[7]  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[3] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_163_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[3] * b[5] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_163_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[5] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_163_69(double * a, double * b, double *r) { 
	
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

double * conga_ip_163_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[9]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[10]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[11]  + a[4] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_163_73(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[1] ;
	
	
	//_e3
	r[2] = a[4] * b[1]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[1]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_ip_163_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[5] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_163_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[9] ;
	
	
	//_e13
	r[2] = a[3] * b[10] ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_163_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[5] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_163_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[3] * b[8] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_163_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_81(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[3] * b[5] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_163_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[3] * b[8] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_163_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[4] * b[4]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_163_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[7]  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[8]  + a[5] * b[11] ;
	
	
	//_e3
	r[2] = a[3] * b[9]  + a[4] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_163_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7]  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_163_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_163_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[3] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_163_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_163_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[10]  + a[6] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[11]  + a[5] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[12]  + a[4] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[14] ;
	
	
	//_e23no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_163_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[8] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_163_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_163_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7]  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_163_94(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_95(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[7]  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[8]  + a[5] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[9]  + a[4] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_163_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[3] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[3] * b[8] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_163_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[8] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_163_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_163_103(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[3] * b[8] ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_163_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[9] ;
	
	
	//_e23no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_163_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[4] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_163_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[3] * b[8] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_163_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_109(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_163_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[3] * b[5] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_163_111(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_112(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_113(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1  + a[6] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[0] ;
	
	
	//_e13
	r[2] = a[3] * b[1] ;
	
	
	//_e23
	r[3] = a[3] * b[2] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_163_114(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[3] * b[5] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_163_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[1] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_163_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_163_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[10] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_163_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_163_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[11] ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_163_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_125(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1  + a[6] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[0] ;
	
	
	//_e13
	r[2] = a[3] * b[1] ;
	
	
	//_e23
	r[3] = a[3] * b[2] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_163_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_163_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_163_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7]  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_163_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_163_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_163_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_163_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[3] * b[11]  + a[6] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[12]  + a[5] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[13]  + a[4] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[14] ;
	
	
	//_e23no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_163_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6]  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7]  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8]  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_163_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[3] * b[8] ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_163_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_163_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[4]  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_163_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_163_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[3]  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[4]  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[5]  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[6] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_163_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_163_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_147(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_148(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_150(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_163_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_163_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4]  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[5]  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_163_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8]  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[9]  + a[5] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[10]  + a[4] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_163_154(double * a, double * b, double *r) { 
	
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

double * conga_ip_163_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[3] * b[5] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_163_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_163_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[10] ;
	
	
	//_e23no
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_163_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_163_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[10]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[11]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[12]  + a[4] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_163_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[10]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[11]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[12]  + a[4] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_163_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_163_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_163_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[4]  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[6] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_163_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_163_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_163_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14]  + a[3] * b[15]  + a[4] * b[26]  * -1  + a[5] * b[27]  * -1  + a[6] * b[28]  * -1 ;
	
	
	//_e1
	r[1] = a[1] * b[19]  + a[2] * b[20]  + a[3] * b[22]  + a[6] * b[31]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[19]  * -1  + a[2] * b[21]  + a[3] * b[23]  + a[5] * b[31] ;
	
	
	//_e3
	r[3] = a[0] * b[20]  * -1  + a[1] * b[21]  * -1  + a[3] * b[24]  + a[4] * b[31]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[22]  * -1  + a[1] * b[23]  * -1  + a[2] * b[24]  * -1 ;
	
	
	//_e12
	r[5] = a[2] * b[30]  + a[3] * b[26] ;
	
	
	//_e13
	r[6] = a[1] * b[30]  * -1  + a[3] * b[27] ;
	
	
	//_e23
	r[7] = a[0] * b[30]  + a[3] * b[28] ;
	
	
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
	
	
	//_e123
	r[14] = a[3] * b[31] ;
	
	
	return r;
}


