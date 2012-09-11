
#include "conga_ip_Dil_Biv.h"


double * conga_ip_81_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_6(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[3] * b[0]  * -1 ;
	
	
	//_e1noni
	r[3] = a[2] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[0] ;
	
	
	//_e3noni
	r[5] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[3] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_13(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_14(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_16(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_17(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_18(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_24(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_25(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_29(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[7] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[11]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[11] ;
	
	
	//_e3ni
	r[3] = a[0] * b[11]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[7] ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_37(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_39(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[14]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[14] ;
	
	
	//_e3no
	r[3] = a[0] * b[14]  * -1 ;
	
	
	//_e1ni
	r[4] = a[2] * b[15]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[15] ;
	
	
	//_e3ni
	r[6] = a[0] * b[15]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_41(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_42(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_44(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_e1noni
	r[3] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[5] * b[15]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[4] * b[15] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[15]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[15]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[15] ;
	
	
	//_e3noni
	r[7] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[10] ;
	
	
	//_e3no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[10] ;
	
	
	//_e3no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_50(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[1] * b[3] ;
	
	
	//_e3ni
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_51(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[3] ;
	
	
	//_e3no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[7] ;
	
	
	//_e3noni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[7] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_54(double * a, double * b, double *r) { 
	
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

double * conga_ip_81_55(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_57(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_58(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[3] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_60(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[14]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[14] ;
	
	
	//_e3ni
	r[3] = a[0] * b[14]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[4] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[14] ;
	
	
	//_e3noni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[9] ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[10] ;
	
	
	//_e3noni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[6] ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_67(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_70(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_71(double * a, double * b, double *r) { 
	
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

double * conga_ip_81_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[12]  + a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[13] ;
	
	
	//_e3noni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_73(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0]  + a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[6] ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_76(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_79(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_80(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_81(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[4] ;
	
	
	//_e3noni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[4] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[11] ;
	
	
	//_e3noni
	r[6] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[11] ;
	
	
	//_e3no
	r[3] = a[0] * b[11]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[3] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_88(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[14]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[14] ;
	
	
	//_e3no
	r[3] = a[0] * b[14]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[4] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[14] ;
	
	
	//_e3noni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[9] ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[10] ;
	
	
	//_e3noni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_94(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[6] ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[4] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[11] ;
	
	
	//_e3noni
	r[6] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_97(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[9] ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_99(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_100(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[9]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[9] ;
	
	
	//_e3ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[4] ;
	
	
	//_e3noni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_103(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[9] ;
	
	
	//_e3noni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_106(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[3] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_108(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_109(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_111(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_113(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_114(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_116(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[3] = a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[1] ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_117(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_118(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[12] ;
	
	
	//_e3no
	r[3] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[7] ;
	
	
	//_e3noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_121(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_122(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_123(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_124(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_125(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[3] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_126(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[13]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[13] ;
	
	
	//_e3no
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[14] ;
	
	
	//_e3ni
	r[6] = a[0] * b[14]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[10] ;
	
	
	//_e3noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[13]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[13] ;
	
	
	//_e3ni
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[13]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[13] ;
	
	
	//_e3no
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[14] ;
	
	
	//_e3ni
	r[6] = a[0] * b[14]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[14] ;
	
	
	//_e3
	r[2] = a[3] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[14] ;
	
	
	//_e3noni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[9] ;
	
	
	//_e3noni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[13]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[13] ;
	
	
	//_e3no
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_141(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e1noni
	r[3] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[7] ;
	
	
	//_e3noni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[6] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_146(double * a, double * b, double *r) { 
	
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

double * conga_ip_81_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_149(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[3] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_150(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[7] ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[7] ;
	
	
	//_e3noni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[11] ;
	
	
	//_e3
	r[2] = a[3] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[11] ;
	
	
	//_e3noni
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_154(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[6] ;
	
	
	//_e3no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[3] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[7] ;
	
	
	//_e3ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_155(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[6] ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[10] ;
	
	
	//_e3noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[13]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[13] ;
	
	
	//_e3ni
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[13] ;
	
	
	//_e3noni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[13] ;
	
	
	//_e3noni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[13]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[13] ;
	
	
	//_e3no
	r[3] = a[0] * b[13]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[6] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_81_166(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_81_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[26]  * -1  + a[4] * b[27]  * -1  + a[5] * b[28]  * -1 ;
	
	
	//_e1
	r[1] = a[2] * b[25]  * -1  + a[5] * b[31]  * -1 ;
	
	
	//_e2
	r[2] = a[1] * b[25]  + a[4] * b[31] ;
	
	
	//_e3
	r[3] = a[0] * b[25]  * -1  + a[3] * b[31]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[16]  * -1  + a[1] * b[17]  * -1  + a[2] * b[18]  * -1 ;
	
	
	//_ni
	r[5] = a[0] * b[19]  * -1  + a[1] * b[20]  * -1  + a[2] * b[21]  * -1 ;
	
	
	//_e1no
	r[6] = a[2] * b[29]  * -1 ;
	
	
	//_e2no
	r[7] = a[1] * b[29] ;
	
	
	//_e3no
	r[8] = a[0] * b[29]  * -1 ;
	
	
	//_e1ni
	r[9] = a[2] * b[30]  * -1 ;
	
	
	//_e2ni
	r[10] = a[1] * b[30] ;
	
	
	//_e3ni
	r[11] = a[0] * b[30]  * -1 ;
	
	
	//_noni
	r[12] = a[0] * b[26]  * -1  + a[1] * b[27]  * -1  + a[2] * b[28]  * -1 ;
	
	
	//_e1noni
	r[13] = a[2] * b[31]  * -1 ;
	
	
	//_e2noni
	r[14] = a[1] * b[31] ;
	
	
	//_e3noni
	r[15] = a[0] * b[31]  * -1 ;
	
	
	return r;
}


