
#include "conga_ip_Hyp_ip_Sph.h"


double * conga_ip_165_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_6(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[5] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[4] * b[0] ;
	
	
	//_e3ni
	r[5] = a[3] * b[0]  * -1 ;
	
	
	//_noni
	r[6] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_8(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_11(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_13(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_165_14(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_16(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_165_17(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[3] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_165_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_25(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_35(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_165_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_37(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_38(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_165_39(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[15]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[15]  + a[4] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[15]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13]  + a[6] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_165_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_165_43(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_165_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_ip_165_45(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[3] ;
	
	
	//_e2no
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[3] ;
	
	
	//_e1ni
	r[3] = a[5] * b[3]  * -1 ;
	
	
	//_e2ni
	r[4] = a[4] * b[3] ;
	
	
	//_e3ni
	r[5] = a[3] * b[3]  * -1 ;
	
	
	//_noni
	r[6] = a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[14]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[15] ;
	
	
	//_e2no
	r[2] = a[1] * b[15]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[15] ;
	
	
	//_e1ni
	r[4] = a[5] * b[15]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[15] ;
	
	
	//_e3ni
	r[6] = a[3] * b[15]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_50(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_e1no
	r[1] = a[2] * b[7] ;
	
	
	//_e2no
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7] ;
	
	
	//_e1ni
	r[4] = a[5] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[7] ;
	
	
	//_e3ni
	r[6] = a[3] * b[7]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_55(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_57(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_58(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1no
	r[1] = a[2] * b[3] ;
	
	
	//_e2no
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[5] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[3] ;
	
	
	//_e3ni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_ip_165_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13]  + a[6] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[13]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[14] ;
	
	
	//_e2no
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[14] ;
	
	
	//_e1ni
	r[4] = a[5] * b[14]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[14] ;
	
	
	//_e3ni
	r[6] = a[3] * b[14]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[4] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_64(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_165_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[10] ;
	
	
	//_e2no
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[10] ;
	
	
	//_e1ni
	r[4] = a[5] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[10] ;
	
	
	//_e3ni
	r[6] = a[3] * b[10]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_165_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_165_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_165_71(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[12]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[13] ;
	
	
	//_e2no
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[13] ;
	
	
	//_e1ni
	r[4] = a[5] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[13] ;
	
	
	//_e3ni
	r[6] = a[3] * b[13]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[1] ;
	
	
	//_e2no
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1] ;
	
	
	//_e1ni
	r[4] = a[5] * b[1]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[1] ;
	
	
	//_e3ni
	r[6] = a[3] * b[1]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_75(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	return r;
}

double * conga_ip_165_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_165_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_78(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_165_79(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_80(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_81(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_165_82(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_165_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[4] ;
	
	
	//_e2no
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4] ;
	
	
	//_e1ni
	r[4] = a[5] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[4] ;
	
	
	//_e3ni
	r[6] = a[3] * b[4]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[11] ;
	
	
	//_e2no
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[11] ;
	
	
	//_e1ni
	r[4] = a[5] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[11] ;
	
	
	//_e3ni
	r[6] = a[3] * b[11]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[11] ;
	
	
	//_e3
	r[2] = a[3] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_165_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[2] * b[3] ;
	
	
	//_e2no
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[5] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[3] ;
	
	
	//_e3ni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_165_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[14] ;
	
	
	//_e3
	r[2] = a[3] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1  + a[6] * b[14]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_165_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[13]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[14] ;
	
	
	//_e2no
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[14] ;
	
	
	//_e1ni
	r[4] = a[5] * b[14]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[14] ;
	
	
	//_e3ni
	r[6] = a[3] * b[14]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[4] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_92(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_165_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[10] ;
	
	
	//_e2no
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[10] ;
	
	
	//_e1ni
	r[4] = a[5] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[10] ;
	
	
	//_e3ni
	r[6] = a[3] * b[10]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_165_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[11] ;
	
	
	//_e2no
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[11] ;
	
	
	//_e1ni
	r[4] = a[5] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[11] ;
	
	
	//_e3ni
	r[6] = a[3] * b[11]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_165_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_165_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_165_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_165_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[4] ;
	
	
	//_e2no
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4] ;
	
	
	//_e1ni
	r[4] = a[5] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[4] ;
	
	
	//_e3ni
	r[6] = a[3] * b[4]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_103(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_104(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_165_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1no
	r[1] = a[2] * b[9] ;
	
	
	//_e2no
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9] ;
	
	
	//_e1ni
	r[4] = a[5] * b[9]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[9] ;
	
	
	//_e3ni
	r[6] = a[3] * b[9]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_107(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_165_108(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_165_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_110(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_165_111(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_113(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_165_114(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_115(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_165_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[1]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_117(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_165_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[4] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[7] ;
	
	
	//_e2no
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7] ;
	
	
	//_e1ni
	r[4] = a[5] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[7] ;
	
	
	//_e3ni
	r[6] = a[3] * b[7]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_165_122(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_165_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_165_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_165_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_165_127(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[10] ;
	
	
	//_e2no
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[10] ;
	
	
	//_e1ni
	r[4] = a[5] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[10] ;
	
	
	//_e3ni
	r[6] = a[3] * b[10]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_133(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e1no
	r[1] = a[2] * b[14] ;
	
	
	//_e2no
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[14] ;
	
	
	//_e1ni
	r[4] = a[5] * b[14]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[14] ;
	
	
	//_e3ni
	r[6] = a[3] * b[14]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[2] * b[9] ;
	
	
	//_e2no
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9] ;
	
	
	//_e1ni
	r[4] = a[5] * b[9]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[9] ;
	
	
	//_e3ni
	r[6] = a[3] * b[9]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_139(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_165_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_165_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_165_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[7] ;
	
	
	//_e2no
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7] ;
	
	
	//_e1ni
	r[4] = a[5] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[7] ;
	
	
	//_e3ni
	r[6] = a[3] * b[7]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_143(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1no
	r[1] = a[2] * b[6] ;
	
	
	//_e2no
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6] ;
	
	
	//_e1ni
	r[4] = a[5] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[6] ;
	
	
	//_e3ni
	r[6] = a[3] * b[6]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_145(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_165_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_147(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_165_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_165_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e1no
	r[1] = a[2] * b[7] ;
	
	
	//_e2no
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7] ;
	
	
	//_e1ni
	r[4] = a[5] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[7] ;
	
	
	//_e3ni
	r[6] = a[3] * b[7]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e1no
	r[1] = a[2] * b[11] ;
	
	
	//_e2no
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[11] ;
	
	
	//_e1ni
	r[4] = a[5] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[11] ;
	
	
	//_e3ni
	r[6] = a[3] * b[11]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_165_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_165_157(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_165_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[10] ;
	
	
	//_e2no
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[10] ;
	
	
	//_e1ni
	r[4] = a[5] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[10] ;
	
	
	//_e3ni
	r[6] = a[3] * b[10]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1no
	r[1] = a[2] * b[13] ;
	
	
	//_e2no
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[13] ;
	
	
	//_e1ni
	r[4] = a[5] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[13] ;
	
	
	//_e3ni
	r[6] = a[3] * b[13]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1no
	r[1] = a[2] * b[13] ;
	
	
	//_e2no
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[13] ;
	
	
	//_e1ni
	r[4] = a[5] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[13] ;
	
	
	//_e3ni
	r[6] = a[3] * b[13]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_165_163(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_165_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[2] * b[6] ;
	
	
	//_e2no
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6] ;
	
	
	//_e1ni
	r[4] = a[5] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[6] ;
	
	
	//_e3ni
	r[6] = a[3] * b[6]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_165_166(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_165_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[19]  + a[1] * b[20]  + a[2] * b[21]  + a[3] * b[16]  + a[4] * b[17]  + a[5] * b[18]  + a[6] * b[25]  * -1 ;
	
	
	//_e1
	r[1] = a[2] * b[30]  * -1  + a[5] * b[29]  * -1 ;
	
	
	//_e2
	r[2] = a[1] * b[30]  + a[4] * b[29] ;
	
	
	//_e3
	r[3] = a[0] * b[30]  * -1  + a[3] * b[29]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[26]  * -1  + a[1] * b[27]  * -1  + a[2] * b[28]  * -1  + a[6] * b[29]  * -1 ;
	
	
	//_ni
	r[5] = a[3] * b[26]  + a[4] * b[27]  + a[5] * b[28]  + a[6] * b[30]  * -1 ;
	
	
	//_e1no
	r[6] = a[2] * b[31] ;
	
	
	//_e2no
	r[7] = a[1] * b[31]  * -1 ;
	
	
	//_e3no
	r[8] = a[0] * b[31] ;
	
	
	//_e1ni
	r[9] = a[5] * b[31]  * -1 ;
	
	
	//_e2ni
	r[10] = a[4] * b[31] ;
	
	
	//_e3ni
	r[11] = a[3] * b[31]  * -1 ;
	
	
	//_noni
	r[12] = a[6] * b[31]  * -1 ;
	
	
	return r;
}


