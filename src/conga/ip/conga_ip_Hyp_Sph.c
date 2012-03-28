
#include "conga_ip_Hyp_Sph.h"


double * conga_ip_120_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_6(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[0] ;
	
	
	//_e2no
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[0] ;
	
	
	//_e1ni
	r[4] = a[5] * b[0]  * -1 ;
	
	
	//_e2ni
	r[5] = a[4] * b[0] ;
	
	
	//_e3ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_noni
	r[7] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_8(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_10(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_11(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_13(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_120_14(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_16(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_120_17(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_120_19(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_25(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_32(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_34(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_35(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_120_36(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_37(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_38(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_120_39(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_40(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_120_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_120_43(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_120_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_ip_120_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[3]  * -1 ;
	
	
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

double * conga_ip_120_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[14]  * -1  + a[7] * b[15]  * -1 ;
	
	
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

double * conga_ip_120_48(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_49(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_50(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_51(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[7] * b[7]  * -1 ;
	
	
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

double * conga_ip_120_53(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_55(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_57(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_58(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[3]  * -1 ;
	
	
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

double * conga_ip_120_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_ip_120_61(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[13]  * -1  + a[7] * b[14]  * -1 ;
	
	
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

double * conga_ip_120_63(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_64(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_120_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  * -1  + a[7] * b[10]  * -1 ;
	
	
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

double * conga_ip_120_66(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_120_68(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_69(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_120_71(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[12]  * -1  + a[7] * b[13]  * -1 ;
	
	
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

double * conga_ip_120_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1  + a[7] * b[1]  * -1 ;
	
	
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

double * conga_ip_120_74(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_75(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	return r;
}

double * conga_ip_120_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_120_77(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_78(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_120_79(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_80(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_81(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_120_82(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_120_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1 ;
	
	
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

double * conga_ip_120_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1 ;
	
	
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

double * conga_ip_120_85(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[7] * b[3]  * -1 ;
	
	
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

double * conga_ip_120_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_120_89(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[13]  * -1  + a[7] * b[14]  * -1 ;
	
	
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

double * conga_ip_120_91(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_92(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_120_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[9]  * -1  + a[7] * b[10]  * -1 ;
	
	
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

double * conga_ip_120_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_120_95(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[10]  * -1  + a[7] * b[11]  * -1 ;
	
	
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

double * conga_ip_120_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_120_98(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_120_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_120_101(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  * -1  + a[7] * b[4]  * -1 ;
	
	
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

double * conga_ip_120_103(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_104(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_120_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[7] * b[9]  * -1 ;
	
	
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

double * conga_ip_120_106(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_107(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_120_108(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_120_109(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_110(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_120_111(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_113(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_120_114(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_115(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_120_116(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_117(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_120_119(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  * -1  + a[7] * b[7]  * -1 ;
	
	
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

double * conga_ip_120_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_120_122(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_120_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_120_125(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_120_127(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_129(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[9]  * -1  + a[7] * b[10]  * -1 ;
	
	
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

double * conga_ip_120_131(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_133(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_136(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[7] * b[14]  * -1 ;
	
	
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

double * conga_ip_120_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[7] * b[9]  * -1 ;
	
	
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

double * conga_ip_120_139(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_120_140(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_120_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[6]  * -1  + a[7] * b[7]  * -1 ;
	
	
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

double * conga_ip_120_143(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[7] * b[6]  * -1 ;
	
	
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

double * conga_ip_120_145(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_120_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_147(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_149(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_120_151(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[7] * b[7]  * -1 ;
	
	
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

double * conga_ip_120_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[7] * b[11]  * -1 ;
	
	
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

double * conga_ip_120_154(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_120_156(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_157(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_120_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  * -1  + a[7] * b[10]  * -1 ;
	
	
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

double * conga_ip_120_159(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[7] * b[13]  * -1 ;
	
	
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

double * conga_ip_120_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[7] * b[13]  * -1 ;
	
	
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

double * conga_ip_120_162(double * a, double * b, double *r) { 
	
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

double * conga_ip_120_163(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_120_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[7] * b[6]  * -1 ;
	
	
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

double * conga_ip_120_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_120_166(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_120_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[19]  + a[1] * b[20]  + a[2] * b[21]  + a[3] * b[16]  + a[4] * b[17]  + a[5] * b[18]  + a[6] * b[25]  * -1  + a[7] * b[31]  * -1 ;
	
	
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


