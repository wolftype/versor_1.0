
#include "conga_ip_Mnk_Sph.h"


double * conga_ip_106_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_6(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[0] ;
	
	
	//_ni
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[0] ;
	
	
	//_e3noni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_9(double * a, double * b, double *r) { 
	
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

double * conga_ip_106_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
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

double * conga_ip_106_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_13(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_14(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[0]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[0] ;
	
	
	//_e3ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_16(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_17(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[0]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[0] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_18(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1 ;
	
	
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

double * conga_ip_106_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_24(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_25(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_28(double * a, double * b, double *r) { 
	
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

double * conga_ip_106_29(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[7] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[11]  * -1 ;
	
	
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

double * conga_ip_106_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[7] ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_37(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_39(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[15]  * -1  + a[4] * b[14]  * -1 ;
	
	
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

double * conga_ip_106_41(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_42(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_43(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_44(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_45(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[3] ;
	
	
	//_ni
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[3] ;
	
	
	//_e3noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_46(double * a, double * b, double *r) { 
	
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

double * conga_ip_106_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[15] ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[4] * b[15]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[15]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[15] ;
	
	
	//_e3noni
	r[7] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[11]  * -1  + a[4] * b[10]  * -1 ;
	
	
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

double * conga_ip_106_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[11]  * -1  + a[4] * b[10]  * -1 ;
	
	
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

double * conga_ip_106_50(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_51(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[3] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_52(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[7] ;
	
	
	//_ni
	r[1] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[7] ;
	
	
	//_e3noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7]  * -1 ;
	
	
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

double * conga_ip_106_54(double * a, double * b, double *r) { 
	
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

double * conga_ip_106_55(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_56(double * a, double * b, double *r) { 
	
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

double * conga_ip_106_57(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_58(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_59(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[3] ;
	
	
	//_ni
	r[1] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[3] ;
	
	
	//_e3noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_60(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[14]  * -1 ;
	
	
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

double * conga_ip_106_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[14] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[14] ;
	
	
	//_e3noni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[10]  * -1  + a[4] * b[9]  * -1 ;
	
	
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

double * conga_ip_106_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[10] ;
	
	
	//_ni
	r[4] = a[4] * b[10]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[10] ;
	
	
	//_e3noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[6]  * -1 ;
	
	
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

double * conga_ip_106_67(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[6]  * -1 ;
	
	
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

double * conga_ip_106_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_70(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_71(double * a, double * b, double *r) { 
	
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

double * conga_ip_106_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[12]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[13] ;
	
	
	//_e3noni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_73(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[1] ;
	
	
	//_ni
	r[4] = a[4] * b[1]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[1] ;
	
	
	//_e3noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[7]  * -1  + a[4] * b[6]  * -1 ;
	
	
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

double * conga_ip_106_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_76(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1 ;
	
	
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

double * conga_ip_106_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_79(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_80(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_81(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_ni
	r[4] = a[4] * b[4]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[4] ;
	
	
	//_e3noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[11] ;
	
	
	//_ni
	r[4] = a[4] * b[11]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[11] ;
	
	
	//_e3noni
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[4] * b[11]  * -1 ;
	
	
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

double * conga_ip_106_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_87(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3] ;
	
	
	//_ni
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[3] ;
	
	
	//_e3noni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_88(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[4] * b[14]  * -1 ;
	
	
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

double * conga_ip_106_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[14] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[14] ;
	
	
	//_e3noni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[10]  * -1  + a[4] * b[9]  * -1 ;
	
	
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

double * conga_ip_106_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[10] ;
	
	
	//_e3noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_94(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[6] ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[11] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[11] ;
	
	
	//_e3noni
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_97(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[9]  * -1 ;
	
	
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

double * conga_ip_106_99(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_100(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[9]  * -1 ;
	
	
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

double * conga_ip_106_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[4] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[4] ;
	
	
	//_e3noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_103(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_104(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_105(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[9] ;
	
	
	//_ni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[9] ;
	
	
	//_e3noni
	r[4] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_106(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
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

double * conga_ip_106_107(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_108(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_109(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_110(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_111(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_113(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_114(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_115(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_116(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[0]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[0] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[4] = a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[1] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_117(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_118(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[13]  * -1  + a[4] * b[12]  * -1 ;
	
	
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

double * conga_ip_106_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[7] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[7] ;
	
	
	//_e3noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_121(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_122(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_123(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_124(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_125(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1 ;
	
	
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

double * conga_ip_106_126(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_128(double * a, double * b, double *r) { 
	
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

double * conga_ip_106_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[14]  * -1  + a[4] * b[13]  * -1 ;
	
	
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

double * conga_ip_106_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[10] ;
	
	
	//_e3noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[13]  * -1 ;
	
	
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

double * conga_ip_106_132(double * a, double * b, double *r) { 
	
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

double * conga_ip_106_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_134(double * a, double * b, double *r) { 
	
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

double * conga_ip_106_135(double * a, double * b, double *r) { 
	
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

double * conga_ip_106_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[14]  * -1  + a[4] * b[13]  * -1 ;
	
	
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

double * conga_ip_106_137(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[14] ;
	
	
	//_ni
	r[1] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[14] ;
	
	
	//_e3noni
	r[4] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_138(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[9] ;
	
	
	//_ni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[9] ;
	
	
	//_e3noni
	r[4] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_139(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[13]  * -1 ;
	
	
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

double * conga_ip_106_141(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[7] ;
	
	
	//_ni
	r[4] = a[4] * b[7]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[7] ;
	
	
	//_e3noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_144(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[6] ;
	
	
	//_ni
	r[1] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[6] ;
	
	
	//_e3noni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_145(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_146(double * a, double * b, double *r) { 
	
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

double * conga_ip_106_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_148(double * a, double * b, double *r) { 
	
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

double * conga_ip_106_149(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[3] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_150(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[7]  * -1 ;
	
	
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

double * conga_ip_106_152(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7] ;
	
	
	//_ni
	r[1] = a[4] * b[7]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[7] ;
	
	
	//_e3noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_153(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[11] ;
	
	
	//_ni
	r[1] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[11] ;
	
	
	//_e3noni
	r[4] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7]  * -1  + a[4] * b[6]  * -1 ;
	
	
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
	
	
	return r;
}

double * conga_ip_106_155(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  * -1 ;
	
	
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

double * conga_ip_106_157(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[10] ;
	
	
	//_e3noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[13]  * -1 ;
	
	
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

double * conga_ip_106_160(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[13] ;
	
	
	//_ni
	r[1] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[13] ;
	
	
	//_e3noni
	r[4] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_161(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[13] ;
	
	
	//_ni
	r[1] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[13] ;
	
	
	//_e3noni
	r[4] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[4] * b[13]  * -1 ;
	
	
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

double * conga_ip_106_163(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_164(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6] ;
	
	
	//_ni
	r[1] = a[4] * b[6]  * -1 ;
	
	
	//_e1noni
	r[2] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[3] = a[1] * b[6] ;
	
	
	//_e3noni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_106_165(double * a, double * b, double *r) { 
	
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

double * conga_ip_106_166(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_106_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[30]  * -1  + a[4] * b[29]  * -1 ;
	
	
	//_e1
	r[1] = a[2] * b[25]  * -1 ;
	
	
	//_e2
	r[2] = a[1] * b[25] ;
	
	
	//_e3
	r[3] = a[0] * b[25]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[16]  * -1  + a[1] * b[17]  * -1  + a[2] * b[18]  * -1  + a[3] * b[31] ;
	
	
	//_ni
	r[5] = a[0] * b[19]  * -1  + a[1] * b[20]  * -1  + a[2] * b[21]  * -1  + a[4] * b[31]  * -1 ;
	
	
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


